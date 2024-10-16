// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "NativeGameplayTags.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"
#include "InventoryFragment_ArmorParts.generated.h"

UCLASS()
class UInventoryFragment_ArmorParts : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:

	// The part to spawn
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AActor> PartClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag Tag;
	
};