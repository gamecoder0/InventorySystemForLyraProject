// Copyright Epic Games, Inc. All Rights Reserved.


#include "Inventory/InventoryFragment_SearchAmmo.h"
#include "Inventory/LyraLayerInventoryItemInstance.h"

bool UInventoryFragment_SearchAmmo::CompareTags(const ULyraLayerInventoryItemInstance* OtherItemInstance) const
{
	if (!OtherItemInstance)
	{
		return false;
	}

	const UInventoryFragment_SearchAmmo* OtherFragment = OtherItemInstance->FindFragmentByClass<UInventoryFragment_SearchAmmo>();

	if (OtherFragment)
	{
		return AmmoTag == OtherFragment->AmmoTag;
	}

	return false;
}