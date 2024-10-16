// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "System/GameplayTagStack.h"
#include "Templates/SubclassOf.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "LyraLayerInventoryItemInstance.generated.h"

class ULyraEquipmentDefinition;

UCLASS(BlueprintType)
class ULyraLayerInventoryItemInstance : public ULyraInventoryItemInstance
{
	GENERATED_BODY()

public:

	void UpdateInitialStatTagStackCount();

	UFUNCTION(BlueprintPure, Category = "LayerStats")
	int32 GetNumLayer();

	UFUNCTION(BlueprintPure, Category = "LayerStats")
	TSubclassOf<ULyraEquipmentDefinition> GetEquipmentDefinitionClass();
	
};