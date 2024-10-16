// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Inventory/LayerParameters.h"
#include "Inventory/IPickupable.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "LyraLayersInventoryManagerComponent.generated.h"

class ULyraLayerInventoryItemDefinition;
class ULyraLayerInventoryItemInstance;
class ULyraInventoryManagerComponent;
class ULyraEquipmentManagerComponent;
class UObject;
class AWorldCollectable;
struct FFrame;
struct FInventoryList;
struct FNetDeltaSerializeInfo;
struct FReplicationFlags;

USTRUCT(BlueprintType)
struct FInventoryEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FInventoryEntry()
	{}

	FString GetDebugString() const;

private:

	friend FInventoryList;
	friend UInventoryLayer;
	friend ULyraLayersInventoryManagerComponent;

	UPROPERTY()
	TObjectPtr<ULyraLayerInventoryItemInstance> Instance = nullptr;
	UPROPERTY()
	int32 StackCount = 0;
	UPROPERTY(NotReplicated)
	int32 LastObservedCount = INDEX_NONE;
};

/** List of inventory items */
USTRUCT(BlueprintType)
struct FInventoryList : public FFastArraySerializer
{
	GENERATED_BODY()

public:

	FInventoryList()
		: OwnerComponent(nullptr)
	{
	}

	FInventoryList(UActorComponent* InOwnerComponent);

	TArray<ULyraLayerInventoryItemInstance*> GetAllItems() const;

public:
	//~FFastArraySerializer contract
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	//~End of FFastArraySerializer contract

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FInventoryEntry, FInventoryList>(Entries, DeltaParms, *this);
	}

	ULyraLayerInventoryItemInstance* AddEntry(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemClass, int32 StackCount);
	void AddEntry(ULyraLayerInventoryItemInstance* Instance, int32 StackCount);
	void RemoveEntry(ULyraLayerInventoryItemInstance* Instance);

private:

	void BroadcastChangeMessage(FInventoryEntry& Entry, int32 OldCount, int32 NewCount);

private:

	friend UInventoryLayer;
	friend ULyraLayersInventoryManagerComponent;

private:
	// Replicated list of items
	UPROPERTY()
	int32 MaxSlots;
	UPROPERTY()
	TArray<FInventoryEntry> Entries;
	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;
};

template<>
struct TStructOpsTypeTraits<FInventoryList> : public TStructOpsTypeTraitsBase2<FInventoryList>
{
	enum { WithNetDeltaSerializer = true };
};

/** List of inventory items */
UCLASS(BlueprintType)
class UInventoryLayer : public UActorComponent
{
	GENERATED_BODY()

public:

	UInventoryLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	ULyraLayerInventoryItemInstance* AddItemDefinitionInventoryList(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 StackCount);
	void AddItemInstanceInventoryList(ULyraLayerInventoryItemInstance* ItemInstance, int32 StackCount);
	void RemoveItemInventoryList(ULyraLayerInventoryItemInstance* ItemInstance);
	bool CanAddItemDefinitionInSlots();

public:

	//~UObject interface
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void ReadyForReplication() override;
	//~End of UObject interface

public:

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Inventory)
	void SetMaxSlots(int32 MaxSlots) { InventoryList.MaxSlots = MaxSlots; };
	UFUNCTION(BlueprintCallable, Category = InventoryLayer, BlueprintPure)
	int32 GetMaxSlots() { return InventoryList.MaxSlots; };
	UFUNCTION(BlueprintCallable, Category = InventoryLayer, BlueprintPure)
	int32 GetLayerIndex() { return LayerIndex; };
	UFUNCTION(BlueprintCallable, Category = InventoryLayer, BlueprintPure)
	FText GetLayerName() { return LayerName; };
	UFUNCTION()
	void OnRep_UpdateInventoryList();

private:

	friend ULyraLayersInventoryManagerComponent;

private:

	UPROPERTY(ReplicatedUsing = OnRep_UpdateInventoryList)
	FInventoryList InventoryList;
	UPROPERTY(Replicated)
	ULyraLayersInventoryManagerComponent* OwnerComponent;
	UPROPERTY(Replicated)
	int32 LayerIndex;
	UPROPERTY(Replicated)
	FText LayerName;
};

UCLASS(BlueprintType)
class ULyraLayersInventoryManagerComponent : public UActorComponent
{
    GENERATED_BODY()

public:

	ULyraLayersInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Inventory)
	bool CanAddItemDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Inventory)
	ULyraLayerInventoryItemInstance* AddItemDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Inventory)
	bool AddItemInstance(ULyraLayerInventoryItemInstance* ItemInstance, int32 StackCount);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Inventory)
	void RemoveItemInstance(ULyraLayerInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, Category = Inventory, BlueprintPure = false)
	TArray<ULyraLayerInventoryItemInstance*> GetAllItems() const;

	UFUNCTION(BlueprintCallable, Category = Inventory, BlueprintPure = false)
	TArray<ULyraLayerInventoryItemInstance*> GetAllItemsByLayer(int32 LayerIndex) const;

	UFUNCTION(BlueprintCallable, Category = Inventory, BlueprintPure = false)
	TArray<ULyraLayerInventoryItemInstance*> GetAllItemsByActiveLayer() const;

	UFUNCTION(BlueprintCallable, Category = Inventory, BlueprintPure = false)
	TArray<UInventoryLayer*> GetAllInventoryLayer() const;

	UFUNCTION(BlueprintCallable, Category = Inventory, BlueprintPure = false)
	UInventoryLayer* GetInventoryLayerActive() const;

	UFUNCTION(BlueprintCallable, Category = Inventory, BlueprintPure)
	ULyraLayerInventoryItemInstance* FindFirstItemStackByDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 LayerIndex) const;

public:

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, meta = (WorldContext = "Ability"))
	void AddPickupToLayerInventory(TScriptInterface<IPickupable> Pickup, bool& bOperationSuccessful);

public:

	int32 GetTotalItemCountByDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef) const;
	bool ConsumeItemsByDefinition(TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef, int32 NumToConsume, int32 LayerIndex);
	//~UObject interface
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void ReadyForReplication() override;
	//~End of UObject interface
	void InitializeBaseLayers();
	ULyraEquipmentManagerComponent* FindEquipmentManager();

private:

	UPROPERTY(Replicated)
	TArray<UInventoryLayer*> InventoryLayers;
	UPROPERTY(Replicated)
	int32 LayerActive;
};