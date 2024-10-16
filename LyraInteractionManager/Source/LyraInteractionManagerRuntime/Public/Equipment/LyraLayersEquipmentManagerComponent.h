// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Inventory/LayerParameters.h"
#include "AbilitySystem/LyraAbilitySet.h"
#include "Components/PawnComponent.h"
#include "Net/Serialization/FastArraySerializer.h"

#include "LyraLayersEquipmentManagerComponent.generated.h"

class UActorComponent;
class ULyraAbilitySystemComponent;
class ULyraEquipmentDefinition;
class ULyraEquipmentInstance;
class ULyraLayersEquipmentManagerComponent;
class UObject;
struct FFrame;
struct FEquipmentList;
struct FNetDeltaSerializeInfo;
struct FReplicationFlags;

/** A single piece of applied equipment */
USTRUCT(BlueprintType)
struct FAppliedEquipmentEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FAppliedEquipmentEntry()
	{}

	FString GetDebugString() const;

private:
	friend FEquipmentList;
	friend ULyraLayersEquipmentManagerComponent;
	friend UEquipmentLayer;

	// The equipment class that got equipped
	UPROPERTY()
	TSubclassOf<ULyraEquipmentDefinition> EquipmentDefinition;

	UPROPERTY()
	TObjectPtr<ULyraEquipmentInstance> Instance = nullptr;

	// Authority-only list of granted handles
	UPROPERTY(NotReplicated)
	FLyraAbilitySet_GrantedHandles GrantedHandles;
};

/** List of applied equipment */
USTRUCT(BlueprintType)
struct FEquipmentList : public FFastArraySerializer
{
	GENERATED_BODY()

	FEquipmentList()
		: OwnerComponent(nullptr)
	{
	}

	FEquipmentList(UActorComponent* InOwnerComponent)
		: OwnerComponent(InOwnerComponent)
	{
	}

public:
	//~FFastArraySerializer contract
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	//~End of FFastArraySerializer contract

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FAppliedEquipmentEntry, FEquipmentList>(Entries, DeltaParms, *this);
	}

	ULyraEquipmentInstance* AddEntry(TSubclassOf<ULyraEquipmentDefinition> EquipmentDefinition);
	void RemoveEntry(ULyraEquipmentInstance* Instance);

private:
	ULyraAbilitySystemComponent* GetAbilitySystemComponent() const;

	friend ULyraLayersEquipmentManagerComponent;
	friend UEquipmentLayer;

private:
	// Replicated list of equipment entries
	UPROPERTY()
	TArray<FAppliedEquipmentEntry> Entries;

	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;
};

template<>
struct TStructOpsTypeTraits<FEquipmentList> : public TStructOpsTypeTraitsBase2<FEquipmentList>
{
	enum { WithNetDeltaSerializer = true };
};


/** List of inventory items */
UCLASS(BlueprintType, Const)
class UEquipmentLayer : public UPawnComponent
{
	GENERATED_BODY()

public:

	UEquipmentLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	//~UActorComponent interface
	//virtual void EndPlay() override;
	virtual void UninitializeComponent() override;
	//~End of UActorComponent interface

	TArray<ULyraEquipmentInstance*> GetEquipmentInstances();

public:

	/** Returns the first equipped instance of a given type, or nullptr if none are found */
	ULyraEquipmentInstance* GetFirstInstanceOfType(TSubclassOf<ULyraEquipmentInstance> InstanceType);

	/** Returns all equipped instances of a given type, or an empty array if none are found */
	TArray<ULyraEquipmentInstance*> GetEquipmentInstancesOfType(TSubclassOf<ULyraEquipmentInstance> InstanceType) const;
	ULyraEquipmentInstance* EquipItem(TSubclassOf<ULyraEquipmentDefinition> EquipmentDefinition);
	void UnequipItem(ULyraEquipmentInstance* ItemInstance);

public:

	UFUNCTION()
	void OnRep_UpdateEquipmentList();

private:

	friend ULyraLayersEquipmentManagerComponent;

private:

	UPROPERTY(ReplicatedUsing = OnRep_UpdateEquipmentList)
	FEquipmentList EquipmentList;
	UPROPERTY(Replicated)
	ULyraLayersEquipmentManagerComponent* OwnerComponent;
	UPROPERTY(Replicated)
	int32 LayerIndex;
	UPROPERTY(Replicated)
	FText LayerName;

};



/**
 * Manages equipment applied to a pawn
 */
UCLASS(BlueprintType, Const)
class ULyraLayersEquipmentManagerComponent : public UPawnComponent
{
	GENERATED_BODY()

public:

	ULyraLayersEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void BeginPlay() override;

	//~UObject interface
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	//~End of UObject interface

	//~UActorComponent interface
	//virtual void EndPlay() override;
	virtual void ReadyForReplication() override;
	//~End of UActorComponent interface

	TArray<ULyraEquipmentInstance*> GetEquipmentInstances(int32 Layer);
	void InitializeBaseLayers();

public:

	UEquipmentLayer* GetLayerActive()
	{
		return EquipmentLayers[LayerActive];
	}

public:

	/** Returns the first equipped instance of a given type, or nullptr if none are found */
	UFUNCTION(BlueprintCallable, BlueprintPure)
	ULyraEquipmentInstance* GetFirstInstanceOfType(TSubclassOf<ULyraEquipmentInstance> InstanceType);

	/** Returns all equipped instances of a given type, or an empty array if none are found */
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<ULyraEquipmentInstance*> GetEquipmentInstancesOfType(TSubclassOf<ULyraEquipmentInstance> InstanceType) const;

	template <typename T>
	T* GetFirstInstanceOfType()
	{
		return (T*)GetFirstInstanceOfType(T::StaticClass());
	}

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	ULyraEquipmentInstance* EquipItem(TSubclassOf<ULyraEquipmentDefinition> EquipmentDefinition, int32 Layer);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void UnequipItem(ULyraEquipmentInstance* ItemInstance, int32 Layer);

private:

	//UPROPERTY(Replicated)
	//FEquipmentList EquipmentList;

	UPROPERTY(Replicated)
	TArray<UEquipmentLayer*> EquipmentLayers;

public: 

	UPROPERTY(Replicated)
	int32 LayerActive;
};
