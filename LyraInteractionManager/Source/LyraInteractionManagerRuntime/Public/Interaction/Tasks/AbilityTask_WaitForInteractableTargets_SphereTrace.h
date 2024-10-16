// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Inventory/IPickupable.h"
#include "Interaction/InteractionQuery.h"
#include "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h"
#include "AbilityTask_WaitForInteractableTargets_SphereTrace.generated.h"

class UGameplayAbility;
class ULyraGameplayAbility;
class AWorldCollectable;

USTRUCT(BlueprintType)
struct FMessageItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	TArray<UInteractableTargetTrigger*> AllTarget;
};

UCLASS(BlueprintType)
class UInteractableTargetTrigger : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	AWorldCollectable* GetWorldCollectable();

	UFUNCTION(BlueprintCallable)
	bool GetGameplayEventData(FGameplayEventData& Payload, UAbilitySystemComponent*& AbilityComponent, FGameplayTag GameplayTag);

	UFUNCTION(BlueprintCallable, BlueprintPure = false, meta = (DeterminesOutputType = FragmentClass))
	const ULyraInventoryItemFragment* FindFragmentByClass(TSubclassOf<ULyraInventoryItemFragment> FragmentClass);

	UFUNCTION(BlueprintCallable)
	int32 GetStatTagStackCountOfFragment(TSubclassOf<ULyraInventoryItemFragment> FragmentClass, FGameplayTag Tag);

protected:

	friend UAbilityTask_WaitForInteractableTargets_SphereTrace;

protected:

	UPROPERTY()
	UAbilitySystemComponent* AbilitySystem;
	UPROPERTY()
	AActor* Instigator;
	UPROPERTY()
	AActor* InteractableTargetActor;
	UPROPERTY()
	FInteractionOption Option;

};


UCLASS()
class UAbilityTask_WaitForInteractableTargets_SphereTrace : public UAbilityTask_WaitForInteractableTargets
{
	// This class depends on UAbilityTask_WaitForInteractableTargets. To ensure that the UAbilityTask_WaitForInteractableTargets_SphereTrace class
	// can be correctly created and used, it is necessary for UAbilityTask_WaitForInteractableTargets to be exported as part of the LYRAGAME_API.
	// This is done to ensure that the base class is available for object creation and dynamic linking during game execution.
	GENERATED_BODY()

public:

	virtual void Activate() override;

public:

	/** Wait until we trace new set of interactables.  This task automatically loops. */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_WaitForInteractableTargets_SphereTrace* WaitForInteractableTargets_SphereTrace(UGameplayAbility* OwningAbility, ULyraGameplayAbility* TargatAbility, FInteractionQuery InteractionQuery, FCollisionProfileName TraceProfile, FGameplayAbilityTargetingLocationInfo StartLocation, float InteractionRadius = 300, float InteractionScanRate = 0.100, bool bShowDebug = false);

private:

	virtual void OnDestroy(bool AbilityEnded) override;
	void PerformTrace();

private:

	UPROPERTY()
	FInteractionQuery InteractionQuery;
	UPROPERTY()
	FGameplayAbilityTargetingLocationInfo StartLocation;
	UPROPERTY()
	ULyraGameplayAbility* LyraGameplayAbility;
	

private:

	float InteractionRadius = 300;
	float InteractionScanRate = 0.100;
	bool bShowDebug = false;
	FTimerHandle TimerHandle;

protected:

	static void SphereTrace(TArray<FHitResult>& OutHitResult, const UWorld* World, const FVector& Start, const FVector& End, FName ProfileName, const FCollisionQueryParams Params, float Radius, bool bShowDebug, float InteractionScanRate);
	void UpdateInteractableOptions(const FInteractionQuery& InteractQuery, const TArray<TScriptInterface<IInteractableTarget>>& InteractableTargets);
	void UpdateBroadcastMessage(TArray<FInteractionOption> InteractionOptions);
};