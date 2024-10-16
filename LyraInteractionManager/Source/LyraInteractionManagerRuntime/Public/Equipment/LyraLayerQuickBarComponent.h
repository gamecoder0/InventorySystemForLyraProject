// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Inventory/LayerDataParameters.h"
#include "Components/ControllerComponent.h"
#include "Inventory/LayerParameters.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "LyraLayerQuickBarComponent.generated.h"

class AActor;
class ULyraEquipmentInstance;
class ULyraLayersEquipmentManagerComponent;
class UObject;
struct FFrame;


UCLASS(BlueprintType)
class ULayerQuickBar : public UControllerComponent
{
	GENERATED_BODY()

public:

	ULayerQuickBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void BeginPlay() override;
	void InitializeSlots();
	int32 CycleActiveSlotForward();
	int32 CycleActiveSlotBackward();
	TArray<ULyraInventoryItemInstance*> GetSlots() const
	{
		return Slots;
	}
	int32 GetActiveSlotIndex() const { return ActiveSlotIndex; }
	ULyraInventoryItemInstance* GetActiveSlotItem() const;
	int32 GetNextFreeItemSlot() const;
	void AddItemToSlot(int32 SlotIndex, ULyraInventoryItemInstance* Item);
	ULyraInventoryItemInstance* RemoveItemFromSlot(int32 SlotIndex);

	friend ULyraLayerQuickBarComponent;

public:

	UFUNCTION(Server, Reliable, Category = "Lyra")
	void SetActiveSlotIndexInLayer(int32 NewIndex);

private:

	void UnequipItemInSlot();
	void EquipItemInSlot();

	ULyraLayersEquipmentManagerComponent* FindEquipmentManager() const;

protected:

	UFUNCTION()
	void OnRep_Slots();
	UFUNCTION()
	void OnRep_ActiveSlotIndex();

protected:

	void UpdateActiveSlotIndex();

private:

	UPROPERTY(ReplicatedUsing = OnRep_Slots)
	TArray<TObjectPtr<ULyraInventoryItemInstance>> Slots;
	UPROPERTY(Replicated)
	FText LayerName;
	UPROPERTY(Replicated)
	ULyraLayerQuickBarComponent* OwnerControllerComponent;
	UPROPERTY(ReplicatedUsing = OnRep_ActiveSlotIndex)
	int32 ActiveSlotIndex = -1;
	UPROPERTY(Replicated)
	int32 LayerIndex = 0;
	UPROPERTY()
	int32 NumSlots = 3;
};

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class ULyraLayerQuickBarComponent : public UControllerComponent
{
	GENERATED_BODY()

public:

	ULyraLayerQuickBarComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	void InitializeBaseLayers();
	virtual void BeginPlay() override;
	void SetEquippedItem(TObjectPtr<ULyraEquipmentInstance> Item, ULyraInventoryItemInstance* SlotItem);
	//~UObject interface
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void ReadyForReplication() override;
	//~End of UObject interface
	void ClearEquippedItem() 
	{
		EquippedItem = nullptr;
	}
	TObjectPtr<ULyraEquipmentInstance> GetEquippedItem()
	{
		return EquippedItem;
	}

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layer Data")
	TSubclassOf<ULayerDataParameters> LayerDataParametersClass;

public:

	UFUNCTION(BlueprintCallable, Category = "Lyra")
	void CycleActiveSlotForward();
	UFUNCTION(BlueprintCallable, Category = "Lyra")
	void CycleActiveSlotBackward();
	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Lyra")
	void SetActiveSlotIndex(int32 NewIndex);
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	TArray<ULyraInventoryItemInstance*> GetSlots() const;
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	int32 GetActiveSlotIndex() const;
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	ULyraInventoryItemInstance* GetActiveSlotItem() const;
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	int32 GetNextFreeItemSlot() const;
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void AddItemToSlot(int32 SlotIndex, ULyraInventoryItemInstance* Item);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	ULyraInventoryItemInstance* RemoveItemFromSlot(int32 SlotIndex);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void FindItemByInstance(ULyraInventoryItemInstance*ItemInstance, int32& SlotIndex, bool& bHasItem);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	ULyraInventoryItemInstance* FindAndUpdateItemByInstance(ULyraInventoryItemInstance* ItemInstance, int32 SlotIndexToSet);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	int32 RemoveItemInstance(ULyraInventoryItemInstance* ItemInstance);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void SetLayerActive(int32 Index);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	TArray<ULyraInventoryItemInstance*> GetSlotsByLayer(int32 Index);

protected:

	UFUNCTION()
	void OnRep_LayerQuickBars();

private:

	void UnequipItemInSlot();
	void EquipItemInSlot();
	int32 GetActiveSlotIndex();
	TObjectPtr<ULayerQuickBar> GetActiveLayerQuickBar() const;
	TObjectPtr<ULayerQuickBar> GetLayerQuickBarByItemInstance(ULyraInventoryItemInstance* Item);

private:

	UPROPERTY(ReplicatedUsing = OnRep_LayerQuickBars)
	TArray<ULayerQuickBar*> LayerQuickBars;
	UPROPERTY(Replicated)
	int32 ActiveLayerIndex;
	UPROPERTY()
	TObjectPtr<ULyraEquipmentInstance> EquippedItem;
};