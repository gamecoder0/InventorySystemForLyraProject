// Copyright Epic Games, Inc. All Rights Reserved.

#include "Equipment/LyraLayersEquipmentManagerComponent.h"
#include "Equipment/LyraEquipmentDefinition.h"
#include "Equipment/LyraEquipmentInstance.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraLayersEquipmentManagerComponent)

class FLifetimeProperty;
struct FReplicationFlags;

//////////////////////////////////////////////////////////////////////
// FAppliedEquipmentEntry

FString FAppliedEquipmentEntry::GetDebugString() const
{
	return FString::Printf(TEXT("%s of %s"), *GetNameSafe(Instance), *GetNameSafe(EquipmentDefinition.Get()));
}

//////////////////////////////////////////////////////////////////////
// FEquipmentList

void FEquipmentList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	for (int32 Index : RemovedIndices)
	{
		const FAppliedEquipmentEntry& Entry = Entries[Index];
		if (Entry.Instance != nullptr)
		{
			Entry.Instance->OnUnequipped();
		}
	}
}

void FEquipmentList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (int32 Index : AddedIndices)
	{
		const FAppliedEquipmentEntry& Entry = Entries[Index];
		if (Entry.Instance != nullptr)
		{
			Entry.Instance->OnEquipped();
		}
	}
}

void FEquipmentList::PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize)
{
	// 	for (int32 Index : ChangedIndices)
	// 	{
	// 		const FGameplayTagStack& Stack = Stacks[Index];
	// 		TagToCountMap[Stack.Tag] = Stack.StackCount;
	// 	}
}

ULyraAbilitySystemComponent* FEquipmentList::GetAbilitySystemComponent() const
{
	check(OwnerComponent);
	AActor* OwningActor = OwnerComponent->GetOwner();
	return Cast<ULyraAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor));
}

ULyraEquipmentInstance* FEquipmentList::AddEntry(TSubclassOf<ULyraEquipmentDefinition> EquipmentDefinition)
{
	ULyraEquipmentInstance* Result = nullptr;

	check(EquipmentDefinition != nullptr);
	check(OwnerComponent);
	check(OwnerComponent->GetOwner()->HasAuthority());

	const ULyraEquipmentDefinition* EquipmentCDO = GetDefault<ULyraEquipmentDefinition>(EquipmentDefinition);

	TSubclassOf<ULyraEquipmentInstance> InstanceType = EquipmentCDO->InstanceType;
	if (InstanceType == nullptr)
	{
		InstanceType = ULyraEquipmentInstance::StaticClass();
	}

	FAppliedEquipmentEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.EquipmentDefinition = EquipmentDefinition;
	NewEntry.Instance = NewObject<ULyraEquipmentInstance>(OwnerComponent->GetOwner(), InstanceType);  //@TODO: Using the actor instead of component as the outer due to UE-127172
	Result = NewEntry.Instance;

	if (ULyraAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		for (const TObjectPtr<const ULyraAbilitySet>& AbilitySet : EquipmentCDO->AbilitySetsToGrant)
		{
			AbilitySet->GiveToAbilitySystem(ASC, /*inout*/ &NewEntry.GrantedHandles, Result);
		}
	}
	else
	{
		//@TODO: Warning logging?
	}

	Result->SpawnEquipmentActors(EquipmentCDO->ActorsToSpawn);


	MarkItemDirty(NewEntry);

	return Result;
}

void FEquipmentList::RemoveEntry(ULyraEquipmentInstance* Instance)
{
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		FAppliedEquipmentEntry& Entry = *EntryIt;
		if (Entry.Instance == Instance)
		{
			if (ULyraAbilitySystemComponent* ASC = GetAbilitySystemComponent())
			{
				Entry.GrantedHandles.TakeFromAbilitySystem(ASC);
			}

			Instance->DestroyEquipmentActors();


			EntryIt.RemoveCurrent();
			MarkArrayDirty();
		}
	}
}

//////////////////////////////////////////////////////////////////////
// ULyraLayersEquipmentManagerComponent

ULyraLayersEquipmentManagerComponent::ULyraLayersEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
	bWantsInitializeComponent = true;
	LayerActive = 0;
}

void ULyraLayersEquipmentManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	if (GetOwner()->HasAuthority())
	{
		InitializeBaseLayers();
	}

}

void ULyraLayersEquipmentManagerComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, EquipmentLayers);
	DOREPLIFETIME(ThisClass, LayerActive);
}

ULyraEquipmentInstance* ULyraLayersEquipmentManagerComponent::EquipItem(TSubclassOf<ULyraEquipmentDefinition> EquipmentClass, int32 Layer)
{
	ULyraEquipmentInstance* Result = nullptr;
	if (EquipmentClass != nullptr && EquipmentLayers.IsValidIndex(Layer))
	{
		Result = EquipmentLayers[Layer]->EquipItem(EquipmentClass);
		if (Result != nullptr)
		{
			Result->OnEquipped();

			if (IsUsingRegisteredSubObjectList() && IsReadyForReplication())
			{
				AddReplicatedSubObject(Result);
			}
		}
	}
	return Result;
}

void ULyraLayersEquipmentManagerComponent::UnequipItem(ULyraEquipmentInstance* ItemInstance, int32 Layer)
{
	if (ItemInstance != nullptr && EquipmentLayers.IsValidIndex(Layer))
	{
		if (IsUsingRegisteredSubObjectList())
		{
			RemoveReplicatedSubObject(ItemInstance);
		}

		ItemInstance->OnUnequipped();
		EquipmentLayers[Layer]->UnequipItem(ItemInstance);
	}
}

bool ULyraLayersEquipmentManagerComponent::ReplicateSubobjects(UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (UEquipmentLayer* Layer : EquipmentLayers)
	{
		WroteSomething |= Channel->ReplicateSubobject(Layer, *Bunch, *RepFlags);
	}

	return WroteSomething;
}

void ULyraLayersEquipmentManagerComponent::ReadyForReplication()
{
	Super::ReadyForReplication();

	// Register existing UEquipmentLayer
	if (IsUsingRegisteredSubObjectList())
	{
		for (UEquipmentLayer* Layer : EquipmentLayers)
		{
			if (IsValid(Layer))
			{
				AddReplicatedSubObject(Layer);
			}
		}
	}
}

void ULyraLayersEquipmentManagerComponent::InitializeBaseLayers()
{
	if (GetOwner()->HasAuthority())
	{
		TArray<ETypeLayer> LayersValues = ULayerParameters::GetLayerValues();
		for (ETypeLayer Layer : LayersValues)
		{
			UEquipmentLayer* EquipmentLayer = NewObject<UEquipmentLayer>(this, FName(UEnum::GetValueAsString(Layer)));
			EquipmentLayer->OwnerComponent = this;
			EquipmentLayer->LayerIndex = LayersValues.Find(Layer);
			EquipmentLayer->LayerName = UEnum::GetDisplayValueAsText(Layer);
			EquipmentLayers.Add(EquipmentLayer);
		}
	}
}

ULyraEquipmentInstance* ULyraLayersEquipmentManagerComponent::GetFirstInstanceOfType(TSubclassOf<ULyraEquipmentInstance> InstanceType)
{
	if (EquipmentLayers.IsValidIndex(LayerActive))
	{
		ULyraEquipmentInstance* EquipmentInstance = EquipmentLayers[LayerActive]->GetFirstInstanceOfType(InstanceType);
		if (EquipmentInstance)
		{
			return EquipmentInstance;
		}
	}
	return nullptr;
}

TArray<ULyraEquipmentInstance*> ULyraLayersEquipmentManagerComponent::GetEquipmentInstancesOfType(TSubclassOf<ULyraEquipmentInstance> InstanceType) const
{
	TArray<ULyraEquipmentInstance*> Results;
	if (EquipmentLayers.IsValidIndex(LayerActive))
	{
		Results = EquipmentLayers[LayerActive]->GetEquipmentInstancesOfType(InstanceType);
	}
	return Results;
}

TArray<ULyraEquipmentInstance*> ULyraLayersEquipmentManagerComponent::GetEquipmentInstances(int32 Layer)
{
	TArray<ULyraEquipmentInstance*> Results;
	if (EquipmentLayers.IsValidIndex(Layer))
	{
		Results = EquipmentLayers[Layer]->GetEquipmentInstances();
	}
	return Results;
}

UEquipmentLayer::UEquipmentLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer), EquipmentList(this)
{
	SetIsReplicatedByDefault(true);
}

void UEquipmentLayer::UninitializeComponent()
{
	TArray<ULyraEquipmentInstance*> AllEquipmentInstances;

	// gathering all instances before removal to avoid side effects affecting the equipment list iterator	
	for (const FAppliedEquipmentEntry& Entry : EquipmentList.Entries)
	{
		AllEquipmentInstances.Add(Entry.Instance);
	}

	for (ULyraEquipmentInstance* EquipInstance : AllEquipmentInstances)
	{
		UnequipItem(EquipInstance);
	}

	Super::UninitializeComponent();
}

TArray<ULyraEquipmentInstance*> UEquipmentLayer::GetEquipmentInstances()
{
	TArray<ULyraEquipmentInstance*> Results;
	for (const FAppliedEquipmentEntry& Entry : EquipmentList.Entries)
	{
		if (ULyraEquipmentInstance* Instance = Entry.Instance)
		{
			Results.Add(Instance);
		}
	}
	return Results;
}

ULyraEquipmentInstance* UEquipmentLayer::GetFirstInstanceOfType(TSubclassOf<ULyraEquipmentInstance> InstanceType)
{
	for (FAppliedEquipmentEntry& Entry : EquipmentList.Entries)
	{
		if (ULyraEquipmentInstance* Instance = Entry.Instance)
		{
			if (Instance->IsA(InstanceType))
			{
				return Instance;
			}
		}
	}

	return nullptr;
}

TArray<ULyraEquipmentInstance*> UEquipmentLayer::GetEquipmentInstancesOfType(TSubclassOf<ULyraEquipmentInstance> InstanceType) const
{
	TArray<ULyraEquipmentInstance*> Results;
	for (const FAppliedEquipmentEntry& Entry : EquipmentList.Entries)
	{
		if (ULyraEquipmentInstance* Instance = Entry.Instance)
		{
			if (Instance->IsA(InstanceType))
			{
				Results.Add(Instance);
			}
		}
	}
	return Results;
}

ULyraEquipmentInstance* UEquipmentLayer::EquipItem(TSubclassOf<ULyraEquipmentDefinition> EquipmentDefinition)
{
	ULyraEquipmentInstance* Result = nullptr;
	if (EquipmentDefinition != nullptr)
	{
		Result = EquipmentList.AddEntry(EquipmentDefinition);
		if (Result != nullptr)
		{
			Result->OnEquipped();

			if (IsUsingRegisteredSubObjectList() && IsReadyForReplication())
			{
				AddReplicatedSubObject(Result);
			}
		}
	}
	return Result;
}

void UEquipmentLayer::UnequipItem(ULyraEquipmentInstance* ItemInstance)
{
	if (ItemInstance != nullptr)
	{
		if (IsUsingRegisteredSubObjectList())
		{
			RemoveReplicatedSubObject(ItemInstance);
		}

		ItemInstance->OnUnequipped();
		EquipmentList.RemoveEntry(ItemInstance);
	}
}

void UEquipmentLayer::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, EquipmentList);
}

void UEquipmentLayer::OnRep_UpdateEquipmentList()
{
}
