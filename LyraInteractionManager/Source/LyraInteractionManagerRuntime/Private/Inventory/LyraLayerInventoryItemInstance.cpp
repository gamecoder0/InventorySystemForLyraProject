// Copyright Epic Games, Inc. All Rights Reserved.

#include "Inventory/LyraLayerInventoryItemInstance.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"
#include "Equipment/LyraEquipmentDefinition.h"
#include "NativeGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_InteractionManager_InventoryLayers, "Lyra.InteractionManager.InventoryLayers");

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraLayerInventoryItemInstance)

void ULyraLayerInventoryItemInstance::UpdateInitialStatTagStackCount()
{
	TSubclassOf<ULyraInventoryItemDefinition> ItemDefClass = GetItemDef();
	if (!ItemDefClass)
	{
		return;
	}

	ULyraLayerInventoryItemDefinition* ItemDefinition = ItemDefClass->GetDefaultObject<ULyraLayerInventoryItemDefinition>();
	if (!ItemDefinition)
	{
		return;
	}

	ULyraLayerInventoryItemDefinition* LayerItemDefinition = Cast<ULyraLayerInventoryItemDefinition>(ItemDefinition);
	if (!LayerItemDefinition)
	{
		return;
	}

	for (const TPair<FGameplayTag, int32> Pair : LayerItemDefinition->GetInitialStats())
	{
		AddStatTagStack(Pair.Key, Pair.Value);
	}
}

int32 ULyraLayerInventoryItemInstance::GetNumLayer()
{
	return GetStatTagStackCount(TAG_Lyra_InteractionManager_InventoryLayers);
}

TSubclassOf<ULyraEquipmentDefinition> ULyraLayerInventoryItemInstance::GetEquipmentDefinitionClass()
{
	const ULyraInventoryItemFragment* ItemFragment = FindFragmentByClass(ULyraEquipmentDefinition::StaticClass());
	if (const ULyraEquipmentDefinition* EquipmentDef = Cast<ULyraEquipmentDefinition>(ItemFragment))
	{
		return EquipmentDef->GetClass();
	}
	return TSubclassOf<ULyraEquipmentDefinition>();
}