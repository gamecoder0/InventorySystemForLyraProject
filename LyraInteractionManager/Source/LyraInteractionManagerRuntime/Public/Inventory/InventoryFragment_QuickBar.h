// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "InventoryFragment_QuickBar.generated.h"

/**
 * 
 */
UCLASS()
class UInventoryFragment_QuickBar : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Quick Bar Visible")
	bool bQuickBarWeapon;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Quick Bar Visible")
	bool bQuickBarArmor;
};
