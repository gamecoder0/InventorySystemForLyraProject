// Copuright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AbilitySystem/Abilities/LyraGameplayAbility.h"
#include "Equipment/LyraGameplayAbility_FromEquipment.h"
#include "LyraGameplayAbility_WithReloadEquipment.generated.h"

class ULyraEquipmentInstance;
class ULyraLayerInventoryItemInstance;
class ULyraLayerInventoryItemDefinition;

/** 
* ULyraInteractionManagerGameplayAbility_FromEquipment
* An anility granted by and associated with an equipment instance
*/

UCLASS()
class ULyraGameplayAbility_WithReloadEquipment : public ULyraGameplayAbility_FromEquipment
{
	GENERATED_BODY()

public:

	ULyraGameplayAbility_WithReloadEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

public:

	UFUNCTION(BlueprintCallable, Category = "Lyra|Ability")
	ULyraLayerInventoryItemInstance* FindFirstItemByDefinition() const;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Reload Equipment")
	TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Reload Equipment")
	int32 LayerIndex;
};