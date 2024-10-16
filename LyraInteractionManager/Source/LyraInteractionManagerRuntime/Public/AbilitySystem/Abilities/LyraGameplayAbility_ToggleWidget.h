// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AbilitySystem/Abilities/LyraGameplayAbility.h"
#include "LyraGameplayAbility_ToggleWidget.generated.h"

USTRUCT(BlueprintType)
struct FAbility_ToggleWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCommonActivatableWidget* ActivatableWidget;
};


UCLASS()
class LYRAINTERACTIONMANAGERRUNTIME_API ULyraGameplayAbility_ToggleWidget : public ULyraGameplayAbility
{
	GENERATED_BODY()
};
