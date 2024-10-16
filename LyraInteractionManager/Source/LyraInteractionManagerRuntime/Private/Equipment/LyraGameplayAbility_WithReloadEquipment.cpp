// Copyright Epic Games, Inc. All Rights Reserved.

#include "Equipment/LyraGameplayAbility_WithReloadEquipment.h"
#include "Inventory/LyraLayersInventoryManagerComponent.h"
#include "Player/LyraPlayerController.h"
#include "NativeGameplayTags.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraGameplayAbility_WithReloadEquipment)
UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_Activate_UpdateReload, "Ability.Activate.UpdateReload");

ULyraGameplayAbility_WithReloadEquipment::ULyraGameplayAbility_WithReloadEquipment(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void ULyraGameplayAbility_WithReloadEquipment::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

ULyraLayerInventoryItemInstance* ULyraGameplayAbility_WithReloadEquipment::FindFirstItemByDefinition() const
{
	ALyraPlayerController* PlayerController = GetLyraPlayerControllerFromActorInfo();
	ULyraLayersInventoryManagerComponent* InventoryManagerComponent = Cast<ULyraLayersInventoryManagerComponent>(PlayerController->GetComponentByClass(ULyraLayersInventoryManagerComponent::StaticClass()));
	ULyraLayerInventoryItemInstance* ItemInstance = InventoryManagerComponent->FindFirstItemStackByDefinition(ItemDef, LayerIndex);
	if (ItemInstance)
	{
		return ItemInstance;
	}
	return nullptr;
}
