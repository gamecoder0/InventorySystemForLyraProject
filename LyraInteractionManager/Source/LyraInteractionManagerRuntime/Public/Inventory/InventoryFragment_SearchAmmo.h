// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"
#include "InventoryFragment_SearchAmmo.generated.h"


UCLASS()
class UInventoryFragment_SearchAmmo : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	FGameplayTag AmmoTag;

	// Function to compare tags
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool CompareTags(const ULyraLayerInventoryItemInstance* OtherItemInstance) const;

};