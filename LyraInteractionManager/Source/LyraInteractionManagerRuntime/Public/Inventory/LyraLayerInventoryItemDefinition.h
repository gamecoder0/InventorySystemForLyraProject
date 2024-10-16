// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "LyraLayerInventoryItemDefinition.generated.h"

UCLASS(Blueprintable, Const, Abstract)
class ULyraLayerInventoryItemDefinition : public ULyraInventoryItemDefinition
{
	GENERATED_BODY()

public:

	const TMap<FGameplayTag, int32> GetInitialStats()
	{
		return InitialItemStats;
	}

	UFUNCTION(BlueprintPure, Category = "LayerStats")
	int32 GetNumLayer();

protected:

	/**
	 * The InitialItemStats values are base values that can be initialized before the ULyraInventoryItemFragment classes,
	 * as the Fragments do not communicate data with each other. Classes like ULyraEquipmentDefinition or ULyraEquipmentInstance
	 * are created within classes derived from ULyraInventoryItemFragment. This can cause data synchronization loss.
	 */

	UPROPERTY(EditDefaultsOnly, Category = Equipment)
	TMap<FGameplayTag, int32> InitialItemStats;
	
};