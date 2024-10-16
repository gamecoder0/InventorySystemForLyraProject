// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"

#include "InventoryFragment_SetLayerStats.generated.h"

class ULyraLayerInventoryItemInstance;
class UObject;
struct FGameplayTag;

UCLASS()
class UInventoryFragment_SetLayerStats : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category = Equipment)
	TMap<FGameplayTag, int32> InitialItemStats;

public:

	virtual void OnInstanceCreated(ULyraInventoryItemInstance* Instance) const override;

	UFUNCTION(BlueprintPure, Category = "LayerStats")
	int32 GetItemStatByTag(FGameplayTag Tag) const;
};