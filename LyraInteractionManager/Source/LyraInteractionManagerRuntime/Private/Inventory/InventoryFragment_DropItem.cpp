// Copyright Epic Games, Inc. All Rights Reserved.

#include "Inventory/InventoryFragment_DropItem.h"
#include "Interaction/WorldCollectable.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(InventoryFragment_DropItem)

TSubclassOf<AWorldCollectable> UInventoryFragment_DropItem::GetWorldCollectableClass()
{
	return CollectableClass;
}
