// Copyright Epic Games, Inc. All Rights Reserved.

#include "Equipment/LyraLayerQuickBarComponent.h"

#include "Equipment/LyraEquipmentDefinition.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "Equipment/LyraLayersEquipmentManagerComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameFramework/Pawn.h"
#include "Inventory/InventoryFragment_EquippableItem.h"
#include "Inventory/LayerDataParameters.h"
#include "Inventory/LyraLayerInventoryItemInstance.h"
#include "NativeGameplayTags.h"
#include "Net/UnrealNetwork.h"
#include "Engine/ActorChannel.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraLayerQuickBarComponent)

class FLifetimeProperty;
class ULyraEquipmentDefinition;

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_QuickBar_Message_SlotsChanged, "Lyra.QuickBar.Message.SlotsChanged");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_QuickBar_Message_ActiveIndexChanged, "Lyra.QuickBar.Message.ActiveIndexChanged");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_InteractionManager_InventoryLayers, "Lyra.InteractionManager.InventoryLayers");

ULyraLayerQuickBarComponent::ULyraLayerQuickBarComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
	ActiveLayerIndex = 0;
}

void ULyraLayerQuickBarComponent::InitializeBaseLayers()
{
	if (GetOwner()->HasAuthority())
	{
		if (!LayerDataParametersClass)
		{
			UE_LOG(LogTemp, Error, TEXT("LayerDataParametersClass is not initialized!"));
			return;
		}

		ULayerDataParameters* SubLayerDataParameters = LayerDataParametersClass->GetDefaultObject<ULayerDataParameters>();

		if (!SubLayerDataParameters)
		{
			UE_LOG(LogTemp, Error, TEXT("SubLayerDataParameters is not initialized!"));
			return;
		}

		TArray<FLayerDataStructParameters> LayerDataParameters = SubLayerDataParameters->GetLayerDataStructParameters();
		for (FLayerDataStructParameters StructParameters : LayerDataParameters)
		{
			ULayerQuickBar* LayerQuickBar = NewObject<ULayerQuickBar>(this, FName(UEnum::GetValueAsString(StructParameters.TypeLayer)));
			if (LayerQuickBar)
			{
				LayerQuickBars.Add(LayerQuickBar);
				LayerQuickBar->LayerIndex = LayerQuickBars.Find(LayerQuickBar);
				LayerQuickBar->LayerName = UEnum::GetDisplayValueAsText(StructParameters.TypeLayer);
				LayerQuickBar->NumSlots = StructParameters.NumSlots;
				LayerQuickBar->OwnerControllerComponent = this;
				LayerQuickBar->InitializeSlots();
				UE_LOG(LogTemp, Warning, TEXT("Generate Quick Bar Layers %s"), *LayerQuickBar->LayerName.ToString());
				UE_LOG(LogTemp, Warning, TEXT("Generate Quick Bar Layers Num Slots %d"), LayerQuickBar->NumSlots);
				AddReplicatedSubObject(LayerQuickBar);
			}
		}
	}
}

void ULyraLayerQuickBarComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, LayerQuickBars);
	DOREPLIFETIME(ThisClass, ActiveLayerIndex);
}

bool ULyraLayerQuickBarComponent::ReplicateSubobjects(UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (ULayerQuickBar* QuickBar : LayerQuickBars)
	{
		if (QuickBar && IsValid(QuickBar))
		{
			WroteSomething |= Channel->ReplicateSubobject(QuickBar, *Bunch, *RepFlags);
			for (ULyraInventoryItemInstance* Slot : QuickBar->Slots)
			{
				if (Slot && IsValid(Slot))
				{
					WroteSomething |= Channel->ReplicateSubobject(Slot, *Bunch, *RepFlags);
				}
			}
		}
	}

	return WroteSomething;
}

void ULyraLayerQuickBarComponent::ReadyForReplication()
{
	Super::ReadyForReplication();
	for (ULayerQuickBar* QuickBar : LayerQuickBars)
	{
		if (IsValid(QuickBar))
		{
			AddReplicatedSubObject(QuickBar);

			for (ULyraInventoryItemInstance* Slot : QuickBar->Slots)
			{
				if (IsValid(Slot))
				{
					AddReplicatedSubObject(Slot);
				}
			}
		}
	}
}


void ULyraLayerQuickBarComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner()->HasAuthority())
	{
		InitializeBaseLayers();
	}
}

void ULyraLayerQuickBarComponent::SetEquippedItem(TObjectPtr<ULyraEquipmentInstance> Item, ULyraInventoryItemInstance* SlotItem)
{
	EquippedItem = Item;
	if (!EquippedItem)
	{
		return;
	}

	if (!SlotItem)
	{
		return;
	}
	EquippedItem->SetInstigator(SlotItem);
}

void ULyraLayerQuickBarComponent::CycleActiveSlotForward()
{
	if(!LayerQuickBars.IsValidIndex(ActiveLayerIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid ActiveLayerIndex: %d"), ActiveLayerIndex);
		return;
	}
	int32 NewIndex = LayerQuickBars[ActiveLayerIndex]->CycleActiveSlotForward();
	UE_LOG(LogTemp, Warning, TEXT("Cycling forward on Layer: %d, Total Layers: %d"), ActiveLayerIndex, LayerQuickBars.Num());
}

void ULyraLayerQuickBarComponent::CycleActiveSlotBackward()
{
	if (!LayerQuickBars.IsValidIndex(ActiveLayerIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid ActiveLayerIndex: %d"), ActiveLayerIndex);
		return;
	}
	int32 NewIndex = LayerQuickBars[ActiveLayerIndex]->CycleActiveSlotBackward();
	UE_LOG(LogTemp, Warning, TEXT("Cycling backward on Layer: %d, Total Layers: %d"), ActiveLayerIndex, LayerQuickBars.Num());
}

void ULyraLayerQuickBarComponent::EquipItemInSlot()
{
	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetActiveLayerQuickBar();
	if (LayerQuickBar)
	{
		LayerQuickBar->EquipItemInSlot();
	}
}

void ULyraLayerQuickBarComponent::UnequipItemInSlot()
{
	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetActiveLayerQuickBar();
	if (LayerQuickBar)
	{
		LayerQuickBar->UnequipItemInSlot();
	}
}

int32 ULyraLayerQuickBarComponent::GetActiveSlotIndex()
{
	return int32();
}

TObjectPtr<ULayerQuickBar> ULyraLayerQuickBarComponent::GetActiveLayerQuickBar() const
{
	if (LayerQuickBars.IsValidIndex(ActiveLayerIndex))
	{
		return LayerQuickBars[ActiveLayerIndex];
	}
	return TObjectPtr<ULayerQuickBar>();
}

TObjectPtr<ULayerQuickBar> ULyraLayerQuickBarComponent::GetLayerQuickBarByItemInstance(ULyraInventoryItemInstance* Item)
{
	if (!Item)
	{
		return TObjectPtr<ULayerQuickBar>();
	}
	int32 NumLayer = Item->GetStatTagStackCount(TAG_Lyra_InteractionManager_InventoryLayers);
	UE_LOG(LogTemp, Warning, TEXT("GetStatTagStackCount Layer %d"), NumLayer);
	for (ULayerQuickBar* LayerQuickBar : LayerQuickBars)
	{
		if (LayerQuickBar && LayerQuickBar->LayerIndex == NumLayer)
		{
			SetLayerActive(NumLayer);
			return LayerQuickBar;
		}
	}
	return TObjectPtr<ULayerQuickBar>();
}



void ULyraLayerQuickBarComponent::SetActiveSlotIndex_Implementation(int32 NewIndex)
{
	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetActiveLayerQuickBar();
	if (LayerQuickBar)
	{
		LayerQuickBar->SetActiveSlotIndexInLayer(NewIndex);
	}
}

TArray<ULyraInventoryItemInstance*> ULyraLayerQuickBarComponent::GetSlots() const
{
	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetActiveLayerQuickBar();
	if (LayerQuickBar)
	{
		return LayerQuickBar->GetSlots();
	}
	return TArray<ULyraInventoryItemInstance*>();
}

int32 ULyraLayerQuickBarComponent::GetActiveSlotIndex() const
{
	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetActiveLayerQuickBar();
	if (LayerQuickBar)
	{
		return LayerQuickBar->GetActiveSlotIndex();
	}
	return int32();
}

ULyraInventoryItemInstance* ULyraLayerQuickBarComponent::GetActiveSlotItem() const
{
	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetActiveLayerQuickBar();
	if (LayerQuickBar)
	{
		return LayerQuickBar->GetActiveSlotItem();
	}
	return nullptr;
}

int32 ULyraLayerQuickBarComponent::GetNextFreeItemSlot() const
{
	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetActiveLayerQuickBar();
	if (LayerQuickBar)
	{
		return LayerQuickBar->GetNextFreeItemSlot();
	}

	return INDEX_NONE;
}

void ULyraLayerQuickBarComponent::AddItemToSlot(int32 SlotIndex, ULyraInventoryItemInstance* ItemInstance)
{

	if (!ItemInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("Is ItemInstance NOT VALID "));
		return;
	}

	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetLayerQuickBarByItemInstance(ItemInstance);
	UE_LOG(LogTemp, Warning, TEXT("ULyraLayerQuickBarComponent -> FUNC : AddItemToSlot"));
	UE_LOG(LogTemp, Warning, TEXT("Slot Inde %d"), SlotIndex);
	if (LayerQuickBar)
	{
		LayerQuickBar->AddItemToSlot(SlotIndex, ItemInstance);
		UE_LOG(LogTemp, Warning, TEXT("GetActiveLayerQuickBar Is Valid"));
	}
}

ULyraInventoryItemInstance* ULyraLayerQuickBarComponent::RemoveItemFromSlot(int32 SlotIndex)
{
	TObjectPtr<ULayerQuickBar> LayerQuickBar = GetActiveLayerQuickBar();
	if (LayerQuickBar)
	{
		return LayerQuickBar->RemoveItemFromSlot(SlotIndex);
	}
	return nullptr;
}

void ULyraLayerQuickBarComponent::FindItemByInstance(ULyraInventoryItemInstance* ItemInstance, int32& SlotIndex, bool& bHasItem)
{
	if (ItemInstance)
	{
		TObjectPtr<ULayerQuickBar> LayerQuickBar = GetLayerQuickBarByItemInstance(ItemInstance);
		if (LayerQuickBar)
		{
			int32 Index = 0;
			for (ULyraInventoryItemInstance* Item : LayerQuickBar->GetSlots())
			{
				if (Item == ItemInstance)
				{
					SlotIndex = Index;
					bHasItem = true;
					return;
				}
				else
				{
					Index++;
				}
			}
		}
	}
	SlotIndex = -1;
	bHasItem = false;
}

ULyraInventoryItemInstance* ULyraLayerQuickBarComponent::FindAndUpdateItemByInstance(ULyraInventoryItemInstance* ItemInstance, int32 SlotIndexToSet)
{
	if (ItemInstance)
	{
		int32 SlotIndex;
		bool bHasItem;
		FindItemByInstance(ItemInstance, SlotIndex, bHasItem);
		if (bHasItem)
		{
			RemoveItemFromSlot(SlotIndex);
		}
		TArray<ULyraInventoryItemInstance*> AllItemInstance = GetSlotsByLayer(2);
		if (AllItemInstance.IsValidIndex(SlotIndexToSet))
		{
			return AllItemInstance[SlotIndexToSet];
		} 
	}
	return nullptr;
}

int32 ULyraLayerQuickBarComponent::RemoveItemInstance(ULyraInventoryItemInstance* ItemInstance)
{
	int32 SlotIndex = -1;
	if (ItemInstance)
	{
		bool bHasItem;
		FindItemByInstance(ItemInstance, SlotIndex, bHasItem);
		if (bHasItem)
		{
			RemoveItemFromSlot(SlotIndex);
			return SlotIndex;
		}
	}
	return SlotIndex;
}

void ULyraLayerQuickBarComponent::SetLayerActive(int32 Index)
{
	if (GetOwner()->HasAuthority())
	{
		ActiveLayerIndex = Index;
	}
}

TArray<ULyraInventoryItemInstance*> ULyraLayerQuickBarComponent::GetSlotsByLayer(int32 Index)
{
	if (!LayerQuickBars.IsValidIndex(Index))
	{
		return TArray<ULyraInventoryItemInstance*>();
	}

	ULayerQuickBar* QuickBar = LayerQuickBars[Index];
	if (!QuickBar)
	{
		return TArray<ULyraInventoryItemInstance*>();
	}
	return QuickBar->GetSlots();
}

void ULyraLayerQuickBarComponent::OnRep_LayerQuickBars()
{
	UE_LOG(LogTemp, Warning, TEXT("OnRep_LayerQuickBars"));
}

ULayerQuickBar::ULayerQuickBar(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
}

void ULayerQuickBar::BeginPlay()
{
	Super::BeginPlay();
	InitializeSlots();
}
void ULayerQuickBar::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, Slots);
	DOREPLIFETIME(ThisClass, ActiveSlotIndex);
	DOREPLIFETIME(ThisClass, OwnerControllerComponent)
}

void ULayerQuickBar::InitializeSlots()
{
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Total number of slots before created: %d"), Slots.Num());
		if (Slots.Num() < NumSlots)
		{
			Slots.AddDefaulted(NumSlots - Slots.Num());
		}
		UE_LOG(LogTemp, Warning, TEXT("Total number of slots after created: %d"), Slots.Num());
	}
}

int32 ULayerQuickBar::CycleActiveSlotForward()
{
	if (!HasAuthority())
	{
		return ActiveSlotIndex;
	} 

	if (Slots.Num() < 2)
	{
		return ActiveSlotIndex;
	}

	const int32 OldIndex = (ActiveSlotIndex < 0 ? Slots.Num() - 1 : ActiveSlotIndex);
	int32 NewIndex = ActiveSlotIndex;
	do
	{
		NewIndex = (NewIndex + 1) % Slots.Num();
		if (Slots[NewIndex] != nullptr)
		{
			ActiveSlotIndex = NewIndex;
			UpdateActiveSlotIndex();
			return ActiveSlotIndex;
		}
	} while (NewIndex != OldIndex);

	return 0;
}

int32 ULayerQuickBar::CycleActiveSlotBackward()
{
	if (!HasAuthority())
	{
		return ActiveSlotIndex;
	}

	if (Slots.Num() < 2)
	{
		return ActiveSlotIndex;
	}

	const int32 OldIndex = (ActiveSlotIndex < 0 ? Slots.Num() - 1 : ActiveSlotIndex);
	int32 NewIndex = ActiveSlotIndex;
	do
	{
		NewIndex = (NewIndex - 1 + Slots.Num()) % Slots.Num();
		if (Slots[NewIndex] != nullptr)
		{
			ActiveSlotIndex = NewIndex;
			UpdateActiveSlotIndex();
			return ActiveSlotIndex;
		}
	} while (NewIndex != OldIndex);

	return 0;
}

ULyraInventoryItemInstance* ULayerQuickBar::GetActiveSlotItem() const
{
	return Slots.IsValidIndex(ActiveSlotIndex) ? Slots[ActiveSlotIndex] : nullptr;
}

int32 ULayerQuickBar::GetNextFreeItemSlot() const
{
	int32 SlotIndex = 0;
	for (const TObjectPtr<ULyraInventoryItemInstance>& ItemPtr : Slots)
	{
		if (ItemPtr == nullptr)
		{
			return SlotIndex;
		}
		++SlotIndex;
	}

	return INDEX_NONE;
}

void ULayerQuickBar::AddItemToSlot(int32 SlotIndex, ULyraInventoryItemInstance* Item)
{
	UE_LOG(LogTemp, Warning, TEXT("ULayerQuickBar -> FUNC : AddItemToSlot"));
	if (!Slots.IsValidIndex(SlotIndex))
	{
		UE_LOG(LogTemp, Error, TEXT("AddItemToSlot: SlotIndex %d is invalid."), SlotIndex);
		return;
	}

	if (Item == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("AddItemToSlot: Item is null for SlotIndex %d."), SlotIndex);
		return;
	}

	if (Slots[SlotIndex] != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddItemToSlot: Slot %d is already occupied."), SlotIndex);
		return;
	}

	Slots[SlotIndex] = Item;
	UE_LOG(LogTemp, Log, TEXT("AddItemToSlot: Item added to Slot %d successfully."), SlotIndex);
	OnRep_Slots();
}

ULyraInventoryItemInstance* ULayerQuickBar::RemoveItemFromSlot(int32 SlotIndex)
{
	ULyraInventoryItemInstance* Result = nullptr;

	if (ActiveSlotIndex == SlotIndex)
	{
		UnequipItemInSlot();
		ActiveSlotIndex = -1;
	}

	if (Slots.IsValidIndex(SlotIndex))
	{
		Result = Slots[SlotIndex];

		if (Result != nullptr)
		{
			Slots[SlotIndex] = nullptr;
			OnRep_Slots();
		}
	}

	return Result;
}

void ULayerQuickBar::OnRep_Slots()
{
	if (!OwnerControllerComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Owner Controller Component is not Valid"));
		return;
	}
	FLyraQuickBarSlotsChangedMessage Message;
	Message.Owner = OwnerControllerComponent->GetOwner();
	Message.Slots = Slots;


	for (TObjectPtr<ULyraInventoryItemInstance> Slot : Slots)
	{
		UE_LOG(LogTemp, Warning, TEXT(" SLOT IS VALID :  %s"), (Slot.IsNull() ? TEXT("true") : TEXT("false")));
	}

	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(this);
	MessageSystem.BroadcastMessage(TAG_Lyra_QuickBar_Message_SlotsChanged, Message);
	UE_LOG(LogTemp, Warning, TEXT("Owner Controller Component is Valid and Slots %d"), Slots.Num());
}

void ULayerQuickBar::OnRep_ActiveSlotIndex()
{
	if (!OwnerControllerComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Owner Controller Component is not Valid"));
		return;
	}
	FLyraQuickBarActiveIndexChangedMessage Message;
	Message.Owner = OwnerControllerComponent->GetOwner();
	Message.ActiveIndex = ActiveSlotIndex;
	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(this);
	MessageSystem.BroadcastMessage(TAG_Lyra_QuickBar_Message_ActiveIndexChanged, Message);
	UE_LOG(LogTemp, Warning, TEXT("Owner Controller Component is Valid and Slot Index %d"), ActiveSlotIndex);
}

void ULayerQuickBar::UpdateActiveSlotIndex()
{
	if (!OwnerControllerComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Owner Controller Component is not Valid"));
		return;
	}
	FLyraQuickBarActiveIndexChangedMessage Message;
	Message.Owner = OwnerControllerComponent->GetOwner();
	Message.ActiveIndex = ActiveSlotIndex;
	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(this);
	MessageSystem.BroadcastMessage(TAG_Lyra_QuickBar_Message_ActiveIndexChanged, Message);
	UE_LOG(LogTemp, Warning, TEXT("Owner Controller Component is Valid and Slot Index %d"), ActiveSlotIndex);
}

void ULayerQuickBar::SetActiveSlotIndexInLayer_Implementation(int32 NewIndex)
{
	if (Slots.IsValidIndex(NewIndex) && (ActiveSlotIndex != NewIndex))
	{
		UnequipItemInSlot();

		ActiveSlotIndex = NewIndex;

		EquipItemInSlot();
	}
}

void ULayerQuickBar::UnequipItemInSlot()
{
	ULyraLayersEquipmentManagerComponent* EquipmentManager = FindEquipmentManager();
	if(!EquipmentManager)
	{
		return;
	}
	TObjectPtr<ULyraEquipmentInstance> EquipmentInstance = OwnerControllerComponent->GetEquippedItem();
	if (!EquipmentInstance)
	{
		return;
	}
	EquipmentManager->UnequipItem(EquipmentInstance, 0);
	OwnerControllerComponent->ClearEquippedItem();
}

void ULayerQuickBar::EquipItemInSlot()
{
	check(Slots.IsValidIndex(ActiveSlotIndex));

	UE_LOG(LogTemp, Warning, TEXT("EquipItemInSlot"));

	ULyraInventoryItemInstance* SlotItem = Slots[ActiveSlotIndex];
	if (!SlotItem)
	{
		UE_LOG(LogTemp, Error, TEXT("SlotItem is nullptr"));
		return;
	}

	const UInventoryFragment_EquippableItem* EquipInfo = SlotItem->FindFragmentByClass<UInventoryFragment_EquippableItem>();
	if (!EquipInfo)
	{
		UE_LOG(LogTemp, Error, TEXT("EquipInfo is nullptr"));
		return;
	}

	TSubclassOf<ULyraEquipmentDefinition> EquipDef = EquipInfo->EquipmentDefinition;
	if (!EquipDef)
	{
		UE_LOG(LogTemp, Error, TEXT("EquipDef is nullptr"));
		return;
	}

	ULyraLayersEquipmentManagerComponent* EquipmentManager = FindEquipmentManager();
	if (!EquipmentManager)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find EquipmentManager"));
		return;
	}
	OwnerControllerComponent->SetEquippedItem(EquipmentManager->EquipItem(EquipDef, 0), SlotItem);
}

ULyraLayersEquipmentManagerComponent* ULayerQuickBar::FindEquipmentManager() const
{
	AController* OwnerController = Cast<AController>(OwnerControllerComponent->GetOwner());
	if (!OwnerController)
	{
		UE_LOG(LogTemp, Error, TEXT("OwnerController is nullptr"));
		return nullptr;
	}

	APawn* Pawn = OwnerController->GetPawn();
	if (!Pawn)
	{
		UE_LOG(LogTemp, Error, TEXT("Pawn is nullptr"));
		return nullptr;
	}

	ULyraLayersEquipmentManagerComponent* EquipmentManager = Pawn->FindComponentByClass<ULyraLayersEquipmentManagerComponent>();
	if (!EquipmentManager)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find EquipmentManager"));
		return nullptr;
	}

	return EquipmentManager;
}
