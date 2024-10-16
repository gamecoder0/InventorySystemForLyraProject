// Copyright Epic Games, Inc. All Rights Reserved.

#include "Interaction/WorldCollectable.h"
#include "Inventory/IPickupable.h"
#include "Async/TaskGraphInterfaces.h"
#include "Net/UnrealNetwork.h"
#include "Inventory/LyraLayerInventoryItemInstance.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(WorldCollectable)

struct FInteractionQuery;

AWorldCollectable::AWorldCollectable()
{
}

void AWorldCollectable::GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& InteractionBuilder)
{
	InteractionBuilder.AddInteractionOption(Option);
}

FInventoryPickup AWorldCollectable::GetPickupInventory() const
{
	return StaticInventory;
}

void AWorldCollectable::GetInteractionOptionBuilder(FInteractionOptionBuilder& InteractionBuilder) const
{
	InteractionBuilder.AddInteractionOption(Option);
}

void AWorldCollectable::GetInteractionOption(FInteractionOption& InteractionOption) const
{
	InteractionOption = Option;
}

TSubclassOf<ULyraLayerInventoryItemDefinition> AWorldCollectable::GetInventoryItemDefinition(int32 Index)
{
	TArray<TSubclassOf<ULyraLayerInventoryItemDefinition>> AllItemDefinition;
	for (const FPickupTemplate& TemplateDefinition : StaticInventory.Templates)
	{
		if (TemplateDefinition.ItemDef && TemplateDefinition.ItemDef->IsChildOf(ULyraLayerInventoryItemDefinition::StaticClass()))
		{
			TSubclassOf<ULyraLayerInventoryItemDefinition> LayerItemDef = *TemplateDefinition.ItemDef;
			AllItemDefinition.Add(LayerItemDef);
		}
	}
	if (AllItemDefinition.IsValidIndex(Index))
	{
		return AllItemDefinition[Index];
	}
	
	return TSubclassOf<ULyraLayerInventoryItemDefinition>();
}

ULyraLayerInventoryItemInstance* AWorldCollectable::GetInventoryItemInstance(int32 Index)
{
	TArray<ULyraLayerInventoryItemInstance*> AllItemInstance;
	for (const FPickupInstance& TemplateInstance : StaticInventory.Instances)
	{
		ULyraLayerInventoryItemInstance* LayerInstance = Cast<ULyraLayerInventoryItemInstance>(TemplateInstance.Item.Get());
		if (LayerInstance)
		{
			AllItemInstance.Add(LayerInstance);
		}
	}
	if (AllItemInstance.IsValidIndex(Index))
	{
		return AllItemInstance[Index];
	}
	return nullptr;
}

void AWorldCollectable::AddInstanceStaticInventory(ULyraLayerInventoryItemInstance* ItemInstance)
{
	FPickupInstance PickupInstance;
	PickupInstance.Item = ItemInstance;
	StaticInventory.Instances.Add(PickupInstance);
}
