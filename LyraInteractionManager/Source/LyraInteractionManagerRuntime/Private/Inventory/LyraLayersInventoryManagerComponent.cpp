// Copyright Epic Games, Inc. All Rights Reserved.


#include "Inventory/LyraLayersInventoryManagerComponent.h"
#include "Engine/ActorChannel.h"
#include "Engine/World.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"
#include "Inventory/LyraLayerInventoryItemInstance.h"
#include "Inventory/InventoryFragment_SetLayerStats.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "NativeGameplayTags.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemComponent.h"
#include "Interaction/WorldCollectable.h"
#include "Interaction/InteractionStatics.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraLayersInventoryManagerComponent)

class FLifetimeProperty;
struct FReplicationFlags;

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Message_StackChanged, "Lyra.Inventory.Message.StackChanged");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_InteractionManager_InventoryLayers, "Lyra.InteractionManager.InventoryLayers");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_HUD_Inventory_Update, "HUD.Inventory.Update");
//////////////////////////////////////////////////////////////////////
// FInventoryEntry

FString FInventoryEntry::GetDebugString() const
{
	TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef;
	if (Instance != nullptr)
	{
		ItemDef = Instance->GetItemDef();
	}

	return FString::Printf(TEXT("%s (%d x %s)"), *GetNameSafe(Instance), StackCount, *GetNameSafe(ItemDef));
}

//////////////////////////////////////////////////////////////////////
// FInventoryList

FInventoryList::FInventoryList(UActorComponent* InOwnerComponent) : OwnerComponent(InOwnerComponent)
{
	MaxSlots = 15;
}

TArray<ULyraLayerInventoryItemInstance*> FInventoryList::GetAllItems() const
{
	TArray<ULyraLayerInventoryItemInstance*> Results;
	Results.Reserve(Entries.Num());
	for (const FInventoryEntry& Entry : Entries)
	{
		if (Entry.Instance != nullptr) //@TODO: Would prefer to not deal with this here and hide it further?
		{
			Results.Add(Entry.Instance);
		}
	}
	return Results;
}

void FInventoryList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	for (int32 Index : RemovedIndices)
	{
		UE_LOG(LogTemp, Warning, TEXT(" Step 04 : ULyraLayersInventoryManagerComponent AAA PreReplicatedRemove: Index %d"), Index);
		FInventoryEntry& Stack = Entries[Index];
		BroadcastChangeMessage(Stack, /*OldCount=*/ Stack.StackCount, /*NewCount=*/ 0);
		Stack.LastObservedCount = 0;
	}
}

void FInventoryList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (int32 Index : AddedIndices)
	{
		UE_LOG(LogTemp, Warning, TEXT(" Step 04 : ULyraLayersInventoryManagerComponent AAA PostReplicatedAdd: Index %d"), Index);
		FInventoryEntry& Stack = Entries[Index];
		BroadcastChangeMessage(Stack, /*OldCount=*/ 0, /*NewCount=*/ Stack.StackCount);
		Stack.LastObservedCount = Stack.StackCount;
	}
}

void FInventoryList::PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize)
{
	for (int32 Index : ChangedIndices)
	{
		UE_LOG(LogTemp, Warning, TEXT(" Step 04 : ULyraLayersInventoryManagerComponent AAA PostReplicatedChange: Index %d"), Index);
		FInventoryEntry& Stack = Entries[Index];
		check(Stack.LastObservedCount != INDEX_NONE);
		BroadcastChangeMessage(Stack, /*OldCount=*/ Stack.LastObservedCount, /*NewCount=*/ Stack.StackCount);
		Stack.LastObservedCount = Stack.StackCount;
	}
}

ULyraLayerInventoryItemInstance* FInventoryList::AddEntry(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemClass, int32 StackCount)
{
	ULyraLayerInventoryItemInstance* Result = nullptr;

	check(ItemClass != nullptr);
	check(OwnerComponent);

	AActor* OwningActor = OwnerComponent->GetOwner();
	check(OwningActor->HasAuthority());


	FInventoryEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.Instance = NewObject<ULyraLayerInventoryItemInstance>(OwnerComponent->GetOwner());  //@TODO: Using the actor instead of component as the outer due to UE-127172
	NewEntry.Instance->SetItemDef(ItemClass);  // friend struct FInventoryList;
	for (ULyraInventoryItemFragment* Fragment : GetDefault<ULyraLayerInventoryItemDefinition>(ItemClass)->Fragments)
	{
		if (Fragment != nullptr)
		{
			Fragment->OnInstanceCreated(NewEntry.Instance);
		}
	}
	NewEntry.StackCount = StackCount;
	NewEntry.Instance->UpdateInitialStatTagStackCount();
	Result = NewEntry.Instance;

	//const ULyraLayerInventoryItemDefinition* ItemCDO = GetDefault<ULyraLayerInventoryItemDefinition>(ItemDef);
	MarkItemDirty(NewEntry);
	//UE_LOG(LogTemp, Warning, TEXT("Step 03 : AddEntry %s"), FName(NewEntry.Instance->GetName()));
	return Result;
}

void FInventoryList::AddEntry(ULyraLayerInventoryItemInstance* Instance, int32 StackCount)
{
	check(Instance != nullptr);
	check(OwnerComponent->GetOwner()->HasAuthority());
	FInventoryEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.Instance = Instance;
	NewEntry.StackCount = StackCount;
	MarkItemDirty(NewEntry);
}

void FInventoryList::RemoveEntry(ULyraLayerInventoryItemInstance* Instance)
{
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		FInventoryEntry& Entry = *EntryIt;
		if (Entry.Instance == Instance)
		{
			EntryIt.RemoveCurrent();
			MarkArrayDirty();
		}
	}
}

void FInventoryList::BroadcastChangeMessage(FInventoryEntry& Entry, int32 OldCount, int32 NewCount)
{
	FLyraInventoryChangeMessage Message;
	Message.InventoryOwner = OwnerComponent;
	Message.Instance = Entry.Instance;
	Message.NewCount = NewCount;
	Message.Delta = NewCount - OldCount;

	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(OwnerComponent->GetWorld());
	MessageSystem.BroadcastMessage(TAG_Lyra_Inventory_Message_StackChanged, Message);
}

//////////////////////////////////////////////////////////////////////
// ULyraLayersInventoryManagerComponent

ULyraLayersInventoryManagerComponent::ULyraLayersInventoryManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
	LayerActive = 0;
}

void ULyraLayersInventoryManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	if (GetOwner()->HasAuthority())
	{
		InitializeBaseLayers();
	}
	
}

void ULyraLayersInventoryManagerComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, InventoryLayers);
	DOREPLIFETIME(ThisClass, LayerActive)
}

bool ULyraLayersInventoryManagerComponent::CanAddItemDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 StackCount)
{
	//@TODO: Add support for stack limit / uniqueness checks / etc...
	return true;
}

ULyraLayerInventoryItemInstance* ULyraLayersInventoryManagerComponent::AddItemDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 StackCount)
{
	ULyraLayerInventoryItemInstance* Result = nullptr;
	if (ItemDef != nullptr)
	{
		if(InventoryLayers.IsValidIndex(ItemDef.GetDefaultObject()->GetNumLayer()))
		{
			int32 GetLayerActive = ItemDef.GetDefaultObject()->GetNumLayer();
			if (GetOwnerRole() == ROLE_Authority || GetOwnerRole() == ROLE_None)
			{
				UInventoryLayer*& Layer = InventoryLayers[GetLayerActive];
				if(Layer->CanAddItemDefinitionInSlots())
				{
					Result = Layer->AddItemDefinitionInventoryList(ItemDef, StackCount);
				}
			}
			LayerActive = GetLayerActive;
			
		}
	}
	return Result;
}

bool ULyraLayersInventoryManagerComponent::AddItemInstance(ULyraLayerInventoryItemInstance* ItemInstance, int32 StackCount)
{
	if(!ItemInstance)
	{
		return false;
	}

	if (!InventoryLayers.IsValidIndex(ItemInstance->GetNumLayer()))
	{
		return false;
	}

	UInventoryLayer*& Layer = InventoryLayers[ItemInstance->GetNumLayer()];
	if (!Layer->CanAddItemDefinitionInSlots())
	{
		return false;
	}

	if (GetOwnerRole() == ROLE_Authority || GetOwnerRole() == ROLE_None)
	{
		Layer->AddItemInstanceInventoryList(ItemInstance, StackCount);
		return true;
	}
	return false;
}

void ULyraLayersInventoryManagerComponent::RemoveItemInstance(ULyraLayerInventoryItemInstance* ItemInstance)
{
	if (!ItemInstance)
	{
		return;
	}

	LayerActive = ItemInstance->GetNumLayer();
	if (!InventoryLayers.IsValidIndex(ItemInstance->GetNumLayer()))
	{
		return;
	}

	UInventoryLayer*& Layer = InventoryLayers[LayerActive];
	if (GetOwnerRole() == ROLE_Authority || GetOwnerRole() == ROLE_None)
	{
		Layer->RemoveItemInventoryList(ItemInstance);
		if (ItemInstance && IsUsingRegisteredSubObjectList())
		{
			RemoveReplicatedSubObject(ItemInstance);
		}
	}
}

TArray<ULyraLayerInventoryItemInstance*> ULyraLayersInventoryManagerComponent::GetAllItems() const
{
	TArray<ULyraLayerInventoryItemInstance*> Results;
	for (const UInventoryLayer* Layer : InventoryLayers)
	{
		for (const FInventoryEntry& Entry : Layer->InventoryList.Entries)
		{
			if (Entry.Instance != nullptr)
			{
				Results.Add(Entry.Instance);
			}
		}
	}
	return Results;
}

TArray<ULyraLayerInventoryItemInstance*> ULyraLayersInventoryManagerComponent::GetAllItemsByLayer(int32 LayerIndex) const
{
	TArray<ULyraLayerInventoryItemInstance*> Results;
	if (!InventoryLayers.IsValidIndex(LayerIndex))
	{
		return Results;
	}

	const UInventoryLayer* Layer = InventoryLayers[LayerIndex];

	for (const FInventoryEntry& Entry : Layer->InventoryList.Entries)
	{
		if (Entry.Instance != nullptr)
		{
			Results.Add(Entry.Instance);
		}
	}
	return Results;
}

TArray<ULyraLayerInventoryItemInstance*> ULyraLayersInventoryManagerComponent::GetAllItemsByActiveLayer() const
{
	TArray<ULyraLayerInventoryItemInstance*> Results;
	if (!InventoryLayers.IsValidIndex(LayerActive))
	{
		return Results;
	}

	const UInventoryLayer* Layer = InventoryLayers[LayerActive];

	for (const FInventoryEntry& Entry : Layer->InventoryList.Entries)
	{
		if (Entry.Instance != nullptr)
		{
			Results.Add(Entry.Instance);
		}
	}
	return Results;
}

TArray<UInventoryLayer*> ULyraLayersInventoryManagerComponent::GetAllInventoryLayer() const
{
	TArray<UInventoryLayer*> Results;
	for (UInventoryLayer* Layer : InventoryLayers)
	{
		Results.Add(Layer);
	}
	return Results;
}

UInventoryLayer* ULyraLayersInventoryManagerComponent::GetInventoryLayerActive() const
{
	UInventoryLayer* Layer = nullptr;
	if (InventoryLayers.IsValidIndex(LayerActive))
	{
		 Layer = InventoryLayers[LayerActive];
	}
	return Layer;
}

ULyraLayerInventoryItemInstance* ULyraLayersInventoryManagerComponent::FindFirstItemStackByDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 LayerIndex) const
{
	if (!InventoryLayers.IsValidIndex(LayerIndex))
	{
		return nullptr;
	}

	const UInventoryLayer* Layer = InventoryLayers[LayerActive];

	for (const FInventoryEntry& Entry : Layer->InventoryList.Entries)
	{
		ULyraLayerInventoryItemInstance* Instance = Entry.Instance;

		if (IsValid(Instance))
		{
			if (Instance->GetItemDef() == ItemDef)
			{
				return Instance;
			}
		}
	}

	return nullptr;
}

void ULyraLayersInventoryManagerComponent::AddPickupToLayerInventory(TScriptInterface<IPickupable> Pickup, bool& bOperationSuccessful)
{
	if (GetOwnerRole() == ROLE_Authority || GetOwnerRole() == ROLE_None)
	{
		bool bHasInstance = false;
		if (Pickup.GetObject() != nullptr)
		{
			const FInventoryPickup& PickupInventory = Pickup->GetPickupInventory();
			
			for (const FPickupInstance& Instance : PickupInventory.Instances)
			{
				ULyraLayerInventoryItemInstance* LayerInstance = Cast<ULyraLayerInventoryItemInstance>(Instance.Item.Get());
				if (LayerInstance)
				{
					bool bInstance = AddItemInstance(LayerInstance, 0);
					bOperationSuccessful |= bInstance;
					bHasInstance |= bInstance;
				}
			}

			
			if (!bHasInstance)
			{
				for (const FPickupTemplate& Template : PickupInventory.Templates)
				{
					if (Template.ItemDef)
					{
						// Verifica se Template.ItemDef é do tipo base ULyraInventoryItemDefinition ou de suas subclasses
						if (Template.ItemDef->IsChildOf(ULyraInventoryItemDefinition::StaticClass()))
						{
							// Vamos tentar fazer o casting para ULyraLayerInventoryItemDefinition de forma segura
							TSubclassOf<ULyraLayerInventoryItemDefinition> BaseItemDef = *Template.ItemDef;

							// Verifique se o tipo de Template.ItemDef é de uma subclasse específica que você espera
							if (BaseItemDef)
							{
								ULyraLayerInventoryItemInstance* ItemInstance = AddItemDefinition(BaseItemDef, Template.StackCount);

								if (ItemInstance)
								{
									UE_LOG(LogTemp, Warning, TEXT("Layer Inventory Item Definition EXISTS and WORKS!"));
									bOperationSuccessful |= true;
								}
								else
								{
									UE_LOG(LogTemp, Warning, TEXT("Layer Inventory Item Definition EXISTS but ItemInstance creation FAILED!"));
									bOperationSuccessful |= false;
								}
							}
						}
					}
				}
			}
		}
	}
}

int32 ULyraLayersInventoryManagerComponent::GetTotalItemCountByDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef) const
{
	return 0;
}

bool ULyraLayersInventoryManagerComponent::ConsumeItemsByDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 NumToConsume, int32 LayerIndex)
{
	return false;
}

bool ULyraLayersInventoryManagerComponent::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (UInventoryLayer* Layer : InventoryLayers)
	{
		// Replicating UInventoryLayer as a whole object
		WroteSomething |= Channel->ReplicateSubobject(Layer, *Bunch, *RepFlags);
	}
	return WroteSomething;
}

void ULyraLayersInventoryManagerComponent::ReadyForReplication()
{
	Super::ReadyForReplication();

	for (UInventoryLayer* Layer : InventoryLayers)
	{
		AddReplicatedSubObject(Layer);
	}
}

void ULyraLayersInventoryManagerComponent::InitializeBaseLayers()
{
	if (GetOwner()->HasAuthority())
	{
		TArray<ETypeLayer> LayersValues = ULayerParameters::GetLayerValues();
		for (ETypeLayer Layer : LayersValues)
		{
			UInventoryLayer* InventoryLayer = NewObject<UInventoryLayer>(this, FName(UEnum::GetValueAsString(Layer)));
			InventoryLayer->OwnerComponent = this;
			InventoryLayer->LayerIndex = LayersValues.Find(Layer);
			InventoryLayer->LayerName = UEnum::GetDisplayValueAsText(Layer);
			InventoryLayers.Add(InventoryLayer);
			AddReplicatedSubObject(InventoryLayer);
		}
	}
}

ULyraEquipmentManagerComponent* ULyraLayersInventoryManagerComponent::FindEquipmentManager()
{
	if (AController* OwnerController = Cast<AController>(GetOwner()))
	{
		if (APawn* Pawn = OwnerController->GetPawn())
		{
			return Pawn->FindComponentByClass<ULyraEquipmentManagerComponent>();
		}
	}
	return nullptr;
}

UInventoryLayer::UInventoryLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) , InventoryList(this)
{
	SetIsReplicatedByDefault(true);
}

void UInventoryLayer::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, InventoryList);
	DOREPLIFETIME(ThisClass, OwnerComponent);
	DOREPLIFETIME(ThisClass, LayerIndex);
	DOREPLIFETIME(ThisClass, LayerName);
}

ULyraLayerInventoryItemInstance* UInventoryLayer::AddItemDefinitionInventoryList(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 StackCount)
{
	ULyraLayerInventoryItemInstance* Instance = nullptr;
	if(ItemDef != nullptr)
	{
		Instance = InventoryList.AddEntry(ItemDef, StackCount);
		if (IsUsingRegisteredSubObjectList() && IsReadyForReplication() && Instance)
		{
			AddReplicatedSubObject(Instance);
			//UE_LOG(LogTemp, Warning, TEXT("Step 02 : Add Item Definition Inventory List %s"), FName(Instance->GetName()));
		}
	}
	return Instance;
}

void UInventoryLayer::AddItemInstanceInventoryList(ULyraLayerInventoryItemInstance* ItemInstance, int32 StackCount)
{
	InventoryList.AddEntry(ItemInstance, StackCount);
	if (IsUsingRegisteredSubObjectList() && IsReadyForReplication() && ItemInstance)
	{
		AddReplicatedSubObject(ItemInstance);
	}
}

void UInventoryLayer::RemoveItemInventoryList(ULyraLayerInventoryItemInstance* ItemInstance)
{
	InventoryList.RemoveEntry(ItemInstance);
}

bool UInventoryLayer::CanAddItemDefinitionInSlots()
{
	if (InventoryList.Entries.Num() <= InventoryList.MaxSlots)
	{
		return true;
	}
	return false;
}

bool UInventoryLayer::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (FInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraLayerInventoryItemInstance* Instance = Entry.Instance;

		if (Instance && IsValid(Instance))
		{
			WroteSomething |= Channel->ReplicateSubobject(Instance, *Bunch, *RepFlags);
		}
	}

	return WroteSomething;
}

void UInventoryLayer::ReadyForReplication()
{
	Super::ReadyForReplication();

	// Register existing ULyraLayerInventoryItemInstance
	if (IsUsingRegisteredSubObjectList())
	{
		for (const FInventoryEntry& Entry : InventoryList.Entries)
		{
			ULyraLayerInventoryItemInstance* Instance = Entry.Instance;

			if (IsValid(Instance))
			{
				AddReplicatedSubObject(Instance);
			}
		}
	}
}

void UInventoryLayer::OnRep_UpdateInventoryList()
{
	FInventoryListParams Message;
	Message.IndexActive = LayerIndex;
	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(GetWorld());
	MessageSystem.BroadcastMessage(TAG_HUD_Inventory_Update, Message);
}
