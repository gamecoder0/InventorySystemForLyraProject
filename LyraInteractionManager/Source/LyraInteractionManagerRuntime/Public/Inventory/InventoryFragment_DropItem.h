// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Inventory/LyraLayerInventoryItemDefinition.h"

#include "InventoryFragment_DropItem.generated.h"

class AWorldCollectable;

UCLASS()
class UInventoryFragment_DropItem : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:

	UFUNCTION(Blueprintpure, Category = "Drop Item")
	TSubclassOf<AWorldCollectable> GetWorldCollectableClass();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Drop Item")
	TSubclassOf<AWorldCollectable> CollectableClass;
};
