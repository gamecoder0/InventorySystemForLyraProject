// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "CommonButtonBase.h"
//#include "CommonUserWidget.h"
#include "LyraButtonBase_TriggerAbility.generated.h"

class UAbilitySystemComponent;
class ULyraEquipmentManagerComponent;
class ULyraEquipmentInstance;
struct FGameplayTag;
struct FGameplayEventData;

UCLASS(Abstract, BlueprintType, Blueprintable)
class ULyraButtonBase_TriggerAbility : public UCommonButtonBase, public IUserObjectListEntry
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetButtonText(const FText& InText);
	UFUNCTION(BlueprintCallable)
	bool TriggerAbility(UAbilitySystemComponent* AbilitySystem, FGameplayEventData Payload, FGameplayTag Tag);
	UFUNCTION(BlueprintCallable)
	ULyraEquipmentInstance* EquipItem(UObject* OptionalObject);

	UFUNCTION(BlueprintCallable)
	void TriggerOnClicked()
	{
		//NativeOnClicked();
		NativeOnSelected(true);
	}

protected:
	// UUserWidget interface
	virtual void NativePreConstruct() override;
	// End of UUserWidget interface

	// UCommonButtonBase interface
	virtual void UpdateInputActionWidget() override;
	virtual void OnInputMethodChanged(ECommonInputType CurrentInputType) override;
	// End of UCommonButtonBase interface

	void RefreshButtonText();

protected:

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateButtonText(const FText& InText);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateButtonStyle();

private:

	UPROPERTY(EditAnywhere, Category = "Button", meta = (InlineEditConditionToggle))
	uint8 bOverride_ButtonText : 1;

	UPROPERTY(EditAnywhere, Category = "Button", meta = (editcondition = "bOverride_ButtonText"))
	FText ButtonText;
};
