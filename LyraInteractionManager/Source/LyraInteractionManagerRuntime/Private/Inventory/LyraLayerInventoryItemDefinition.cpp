// Copyright Epic Games, Inc. All Rights Reserved.

#include "Inventory/LyraLayerInventoryItemDefinition.h"
#include "NativeGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_InteractionManager_InventoryLayers, "Lyra.InteractionManager.InventoryLayers");

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraLayerInventoryItemDefinition)

int32 ULyraLayerInventoryItemDefinition::GetNumLayer()
{
	if (InitialItemStats.Contains(TAG_Lyra_InteractionManager_InventoryLayers))
	{
		return InitialItemStats.FindRef(TAG_Lyra_InteractionManager_InventoryLayers);
	}
	return 0;
}
