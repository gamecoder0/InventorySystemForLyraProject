// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"
#include "InventoryFragment_TypesActionsWhenSelectingItem.generated.h"

class UObject;
struct FGameplayTag;


USTRUCT(BlueprintType)
struct FTypesActionsWhenSelectingItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag AbilityTagForActivation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bFindAbility;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ButtonText;

	UPROPERTY(BlueprintReadOnly)
	UObject* OptionalObject;
};

UCLASS(BlueprintType)
class UActionsWhenSelectingItem : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Type Action in Panel")
	FTypesActionsWhenSelectingItem TypesActionsWhenSelectingItem;
};



UCLASS()
class UInventoryFragment_TypesActionsWhenSelectingItem : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	TArray<UActionsWhenSelectingItem*> GetTypesActionsWhenSelectingItem(UObject* OwnerObject, UObject* OptionalObject);

protected:

	UPROPERTY(EditAnywhere, Category = "Type Action in Panel")
	TArray<FTypesActionsWhenSelectingItem> TypesActionsWhenSelectingItem;

};