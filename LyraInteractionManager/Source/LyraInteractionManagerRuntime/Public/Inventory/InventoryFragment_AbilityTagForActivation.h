// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"

#include "InventoryFragment_AbilityTagForActivation.generated.h"

// InventoryFragment_TypesActionsWhenSelectingItem

class ULyraLayerInventoryItemInstance;
class UObject;
struct FGameplayTag;

UCLASS()
class UInventoryFragment_AbilityTagForActivation : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Drop Item")
	FGameplayTag AbilityTagForActivation;

};