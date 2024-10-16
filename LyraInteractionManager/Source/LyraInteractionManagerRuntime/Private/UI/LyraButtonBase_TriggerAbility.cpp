// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/LyraButtonBase_TriggerAbility.h"
#include "GameplayTagContainer.h"
#include "CommonActionWidget.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Actor.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Inventory/InventoryFragment_EquippableItem.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"
#include "Inventory/LyraLayerInventoryItemInstance.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraButtonBase_TriggerAbility)

void ULyraButtonBase_TriggerAbility::NativePreConstruct()
{
	Super::NativePreConstruct();

	UpdateButtonStyle();
	RefreshButtonText();
}

void ULyraButtonBase_TriggerAbility::UpdateInputActionWidget()
{
	Super::UpdateInputActionWidget();

	UpdateButtonStyle();
	RefreshButtonText();
}

void ULyraButtonBase_TriggerAbility::SetButtonText(const FText& InText)
{
	bOverride_ButtonText = InText.IsEmpty();
	ButtonText = InText;
	RefreshButtonText();
}

bool ULyraButtonBase_TriggerAbility::TriggerAbility(UAbilitySystemComponent* AbilitySystem, FGameplayEventData Payload, FGameplayTag Tag)
{
    if (APawn* OwnerPlayerPawn = GetOwningPlayerPawn())
    {
        if (AbilitySystem)
        {
            FGameplayAbilityActorInfo ActorInfo;
            AbilitySystem->InitAbilityActorInfo(OwnerPlayerPawn, OwnerPlayerPawn);
            ActorInfo.InitFromActor(OwnerPlayerPawn, OwnerPlayerPawn, AbilitySystem);
            for (const FGameplayAbilitySpec& AbilitySpec : AbilitySystem->GetActivatableAbilities())
            {
                if (AbilitySpec.Ability->AbilityTags.HasTag(Tag))
                {
                    if (AbilitySystem->TriggerAbilityFromGameplayEvent(AbilitySpec.Handle, &ActorInfo, Tag, &Payload, *AbilitySystem))
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

ULyraEquipmentInstance* ULyraButtonBase_TriggerAbility::EquipItem(UObject* OptionalObject)
{
	const ULyraLayerInventoryItemInstance* ItemInstance = Cast<ULyraLayerInventoryItemInstance>(OptionalObject);
	if (!ItemInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not ItemInstance"));
		return nullptr;
	}

	const ULyraInventoryItemFragment* ItemFragment = ItemInstance->FindFragmentByClass(UInventoryFragment_EquippableItem::StaticClass());
	if (!ItemFragment)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not ItemFragment"));
		return nullptr;
	}

	const UInventoryFragment_EquippableItem* EquippableItem = Cast<UInventoryFragment_EquippableItem>(ItemFragment);
	if (!EquippableItem)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not EquippableItem"));
		return nullptr;
	}

	APawn* OwnerPlayerPawn = GetOwningPlayerPawn();
	if (!OwnerPlayerPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Pawn"));
		return nullptr;
	}

	ULyraEquipmentManagerComponent* EquipmentManager = OwnerPlayerPawn->FindComponentByClass<ULyraEquipmentManagerComponent>();
	if (!EquipmentManager)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not EquipmentManager"));
		return nullptr;
	}

	ULyraEquipmentInstance* EquipmentInstance = EquipmentManager->EquipItem(EquippableItem->EquipmentDefinition);
	if (EquipmentInstance)
	{
		return EquipmentInstance;
	}
	UE_LOG(LogTemp, Warning, TEXT("Not EquippedItem"));
	return nullptr;
}

void ULyraButtonBase_TriggerAbility::RefreshButtonText()
{
	if (bOverride_ButtonText || ButtonText.IsEmpty())
	{
		if (InputActionWidget)
		{
			const FText ActionDisplayText = InputActionWidget->GetDisplayText();
			if (!ActionDisplayText.IsEmpty())
			{
				UpdateButtonText(ActionDisplayText);
				return;
			}
		}
	}

	UpdateButtonText(ButtonText);
}

void ULyraButtonBase_TriggerAbility::OnInputMethodChanged(ECommonInputType CurrentInputType)
{
	Super::OnInputMethodChanged(CurrentInputType);

	UpdateButtonStyle();
}
