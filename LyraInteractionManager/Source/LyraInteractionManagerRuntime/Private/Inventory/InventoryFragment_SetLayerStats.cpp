// Copyright Epic Games, Inc. All Rights Reserved.

#include "Inventory/InventoryFragment_SetLayerStats.h"
#include "Inventory/LyraInventoryItemInstance.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(InventoryFragment_SetLayerStats)

void UInventoryFragment_SetLayerStats::OnInstanceCreated(ULyraInventoryItemInstance* Instance) const
{
	for (const auto& KVP : InitialItemStats)
	{
		Instance->AddStatTagStack(KVP.Key, KVP.Value);
	}
}

int32 UInventoryFragment_SetLayerStats::GetItemStatByTag(FGameplayTag Tag) const
{
	if (const int32* StatPtr = InitialItemStats.Find(Tag))
	{
		return *StatPtr;
	}

	return 0;
}