// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "Interaction/IInteractableTarget.h"
#include "Interaction/InteractionOption.h"
#include "Inventory/IPickupable.h"

#include "WorldCollectable.generated.h"

class UObject;
class ULyraLayerInventoryItemDefinition;
struct FInteractionQuery;

/**
 *
 */
UCLASS(Abstract, Blueprintable)
class AWorldCollectable : public AActor, public IInteractableTarget, public IPickupable
{
	GENERATED_BODY()

public:

	AWorldCollectable();

	virtual void GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& InteractionBuilder) override;
	virtual FInventoryPickup GetPickupInventory() const override;
	virtual void GetInteractionOptionBuilder(FInteractionOptionBuilder& InteractionBuilder) const;
	virtual void GetInteractionOption(FInteractionOption& InteractionOption) const;

public:

	UFUNCTION(BlueprintPure)
	TSubclassOf<ULyraLayerInventoryItemDefinition> GetInventoryItemDefinition(int32 Index);
	UFUNCTION(BlueprintPure)
	ULyraLayerInventoryItemInstance* GetInventoryItemInstance(int32 Index);
	UFUNCTION(BlueprintCallable)
	void AddInstanceStaticInventory(ULyraLayerInventoryItemInstance* ItemInstance);


protected:

	UPROPERTY(EditAnywhere)
	FInteractionOption Option;

	UPROPERTY(EditAnywhere)
	FInventoryPickup StaticInventory;
};
