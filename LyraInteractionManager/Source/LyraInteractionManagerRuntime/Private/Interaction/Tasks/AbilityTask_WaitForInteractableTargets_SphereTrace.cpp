// Copyright Epic Games, Inc. All Rights Reserved.

#include "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h"
#include "Interaction/InteractionStatics.h"
#include "Interaction/WorldCollectable.h"
#include "Inventory/IPickupable.h"
#include "Inventory/LyraLayerInventoryItemDefinition.h"
#include "Inventory/LyraLayerInventoryItemInstance.h"
#include "Inventory/InventoryFragment_SetStats.h"
#include "Inventory/InventoryFragment_SetLayerStats.h"
#include "Inventory/InventoryFragment_QuickBarIcon.h"
#include "Inventory/LyraLayersInventoryManagerComponent.h"
#include "AbilitySystemComponent.h"
#include "NativeGameplayTags.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "AbilitySystem/Abilities/LyraGameplayAbility.h"
#include "Interaction/WorldCollectable.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AbilityTask_WaitForInteractableTargets_SphereTrace)
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_InteractionManager_Collectable, "Lyra.InteractionManager.Collectable");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Ability_Interaction_Activate, "Ability.Interaction.Activate");

void UAbilityTask_WaitForInteractableTargets_SphereTrace::Activate()
{
	SetWaitingOnAvatar();
	UWorld* World = GetWorld();
	World->GetTimerManager().SetTimer(TimerHandle, this, &ThisClass::PerformTrace, InteractionScanRate, true);
}

UAbilityTask_WaitForInteractableTargets_SphereTrace* UAbilityTask_WaitForInteractableTargets_SphereTrace::WaitForInteractableTargets_SphereTrace(UGameplayAbility* OwningAbility, ULyraGameplayAbility* TargatAbility, FInteractionQuery InteractionQuery, FCollisionProfileName TraceProfile, FGameplayAbilityTargetingLocationInfo StartLocation, float InteractionRadius, float InteractionScanRate, bool bShowDebug)
{
	UAbilityTask_WaitForInteractableTargets_SphereTrace* MyObj = NewAbilityTask<UAbilityTask_WaitForInteractableTargets_SphereTrace>(OwningAbility);
	MyObj->InteractionRadius = InteractionRadius;
	MyObj->InteractionScanRate = InteractionScanRate;
	MyObj->StartLocation = StartLocation;
	MyObj->InteractionQuery = InteractionQuery;
	MyObj->TraceProfile = TraceProfile;
	MyObj->bShowDebug = bShowDebug;
	MyObj->LyraGameplayAbility = TargatAbility;
	return MyObj;
}

void UAbilityTask_WaitForInteractableTargets_SphereTrace::OnDestroy(bool AbilityEnded)
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(TimerHandle);
	}

	Super::OnDestroy(AbilityEnded);
}

void UAbilityTask_WaitForInteractableTargets_SphereTrace::PerformTrace()
{
	// The function PerformTrace() is used here to attempt to find a specific fragment within the item. 
	// For this function call to work at runtime when the code is used outside the original module where UInteractionStatics was defined,
	// UInteractionStatics must be exported with LYRAGAME_API. 
	// This ensures that the class and its members are available to other modules, preventing linkage errors and access issues.

	AActor* AvatarActor = Ability->GetCurrentActorInfo()->AvatarActor.Get();
	if (!AvatarActor)
	{
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}
	APlayerController* PlayerController = Cast<APlayerController>(AvatarActor->GetInstigatorController());
	if (!PlayerController)
	{
		return;
	}

	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(AvatarActor);

	const bool bTraceComplex = false;
	FCollisionQueryParams Params(SCENE_QUERY_STAT(ULyraWaitForInteractableTargets_SphereTrace), bTraceComplex);
	Params.AddIgnoredActors(ActorsToIgnore);

	FVector TraceStart = StartLocation.GetTargetingTransform().GetLocation();
	FVector TraceEnd;
	AimWithPlayerController(AvatarActor, Params, TraceStart, 0.f, OUT TraceEnd);

	TArray<FHitResult> OutHitResults;
	SphereTrace(OutHitResults, World, TraceStart, TraceEnd, TraceProfile.Name, Params, InteractionRadius, bShowDebug, InteractionScanRate);

	TArray<TScriptInterface<IInteractableTarget>> InteractableTargets;
	for (FHitResult OutHit : OutHitResults)
	{
		UInteractionStatics::AppendInteractableTargetsFromHitResult(OutHit, InteractableTargets);
	}
	UpdateInteractableOptions(InteractionQuery, InteractableTargets);
}

void UAbilityTask_WaitForInteractableTargets_SphereTrace::SphereTrace(TArray<FHitResult>& OutHitResult, const UWorld* World, const FVector& Start, const FVector& End, FName ProfileName, const FCollisionQueryParams Params, float Radius, bool bShowDebug, float InteractionScanRate)
{
	check(World);

	OutHitResult.Empty();
	TArray<FHitResult> HitResults;
	FCollisionShape CollisionShape = FCollisionShape::MakeSphere(Radius);
	World->SweepMultiByProfile(HitResults, Start, End, FQuat::Identity, ProfileName, CollisionShape, Params);
	OutHitResult = HitResults;
	for (FHitResult Hit : HitResults)
	{
#if ENABLE_DRAW_DEBUG
		if (bShowDebug)
		{
			FColor DebugColor = Hit.bBlockingHit ? FColor::Red : FColor::Green;
			if (Hit.bBlockingHit)
			{
				DrawDebugLine(World, Hit.TraceStart, Hit.Location, DebugColor, false, InteractionScanRate);
				DrawDebugSphere(World, Hit.Location, Radius, 16, DebugColor, false, InteractionScanRate);
			}
			else
			{
				DrawDebugLine(World, Hit.TraceStart, Hit.TraceEnd, DebugColor, false, InteractionScanRate);
			}
		}
#endif // ENABLE_DRAW_DEBUG
	}
}

void UAbilityTask_WaitForInteractableTargets_SphereTrace::UpdateInteractableOptions(const FInteractionQuery& InteractQuery, const TArray<TScriptInterface<IInteractableTarget>>& InteractableTargets)
{
	TArray<FInteractionOption> NewOptions;

	for (const TScriptInterface<IInteractableTarget>& InteractiveTarget : InteractableTargets)
	{
		TArray<FInteractionOption> TempOptions;
		FInteractionOptionBuilder InteractionBuilder(InteractiveTarget, TempOptions);
		InteractiveTarget->GatherInteractionOptions(InteractQuery, InteractionBuilder);

		for (FInteractionOption& Option : TempOptions)
		{
			FGameplayAbilitySpec* InteractionAbilitySpec = nullptr;

			// if there is a handle an a target ability system, we're triggering the ability on the target.
			if (Option.TargetAbilitySystem && Option.TargetInteractionAbilityHandle.IsValid())
			{
				// Find the spec
				InteractionAbilitySpec = Option.TargetAbilitySystem->FindAbilitySpecFromHandle(Option.TargetInteractionAbilityHandle);
			}
			// If there's an interaction ability then we're activating it on ourselves.
			else if (Option.InteractionAbilityToGrant)
			{
				// Find the spec
				InteractionAbilitySpec = AbilitySystemComponent->FindAbilitySpecFromClass(Option.InteractionAbilityToGrant);

				if (InteractionAbilitySpec)
				{
					// update the option
					Option.TargetAbilitySystem = AbilitySystemComponent.Get();
					Option.TargetInteractionAbilityHandle = InteractionAbilitySpec->Handle;
				}
			}

			if (InteractionAbilitySpec)
			{
				// Filter any options that we can't activate right now for whatever reason.
				if (InteractionAbilitySpec->Ability->CanActivateAbility(InteractionAbilitySpec->Handle, AbilitySystemComponent->AbilityActorInfo.Get()))
				{
					NewOptions.Add(Option);
				}
			}
		}
	}

	bool bOptionsChanged = false;
	if (NewOptions.Num() == CurrentOptions.Num())
	{
		NewOptions.Sort();

		for (int OptionIndex = 0; OptionIndex < NewOptions.Num(); OptionIndex++)
		{
			const FInteractionOption& NewOption = NewOptions[OptionIndex];
			const FInteractionOption& CurrentOption = CurrentOptions[OptionIndex];

			if (NewOption != CurrentOption)
			{
				bOptionsChanged = true;
				break;
			}
		}
	}
	else
	{
		bOptionsChanged = true;
	}

	if (bOptionsChanged)
	{
		CurrentOptions = NewOptions;
		InteractableObjectsChanged.Broadcast(CurrentOptions);
		UpdateBroadcastMessage(CurrentOptions);
	}
}

void UAbilityTask_WaitForInteractableTargets_SphereTrace::UpdateBroadcastMessage(TArray<FInteractionOption> InteractionOptions)
{
	FMessageItemDefinition Message;
	if(LyraGameplayAbility)
	{
		for (FInteractionOption Option : InteractionOptions)
		{
			UInteractableTargetTrigger* InteractableTargetObject = NewObject<UInteractableTargetTrigger>();
			InteractableTargetObject->AbilitySystem = LyraGameplayAbility->GetAbilitySystemComponentFromActorInfo();
			InteractableTargetObject->Instigator = LyraGameplayAbility->GetAvatarActorFromActorInfo();
			InteractableTargetObject->InteractableTargetActor = UInteractionStatics::GetActorFromInteractableTarget(Option.InteractableTarget);
			InteractableTargetObject->Option = Option;

			if (InteractableTargetObject)
			{
				Message.AllTarget.Add(InteractableTargetObject);
			}
		}
		UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(GetWorld());
		MessageSystem.BroadcastMessage(TAG_Lyra_InteractionManager_Collectable, Message);
	}
}

AWorldCollectable* UInteractableTargetTrigger::GetWorldCollectable()
{
	if (InteractableTargetActor)
	{
		AWorldCollectable* Collectable = Cast<AWorldCollectable>(InteractableTargetActor);
		if (Collectable)
		{
			return Collectable;
		}
	}
	return nullptr;
}

bool UInteractableTargetTrigger::GetGameplayEventData(FGameplayEventData& Payload, UAbilitySystemComponent*& AbilityComponent, FGameplayTag GameplayTag)
{
	if (AbilitySystem || Instigator || InteractableTargetActor)
	{
		AbilityComponent = AbilitySystem;
		Payload.EventTag = GameplayTag;
		Payload.Instigator = Instigator;
		Payload.Target = InteractableTargetActor;
		return true;
	}
	return false;
}

const ULyraInventoryItemFragment* UInteractableTargetTrigger::FindFragmentByClass(TSubclassOf<ULyraInventoryItemFragment> FragmentClass)
{
	if (!InteractableTargetActor)
	{
		return nullptr;
	}

	AWorldCollectable* Collectable = Cast<AWorldCollectable>(InteractableTargetActor);
	if (!Collectable)
	{
		return nullptr;
	}

	ULyraLayerInventoryItemInstance* ItemInstance = Collectable->GetInventoryItemInstance(0);
	if (ItemInstance)
	{
		return ItemInstance->FindFragmentByClass(FragmentClass);
	}

	TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDefinitionClass = Collectable->GetInventoryItemDefinition(0);
	if (ItemDefinitionClass)
	{
		const ULyraLayerInventoryItemDefinition* ItemDefinition = ItemDefinitionClass.GetDefaultObject();
		if (ItemDefinition)
		{
			return ItemDefinition->FindFragmentByClass(FragmentClass);
		}
	}
	return nullptr;
}

int32 UInteractableTargetTrigger::GetStatTagStackCountOfFragment(TSubclassOf<ULyraInventoryItemFragment> FragmentClass, FGameplayTag Tag)
{
	if (!InteractableTargetActor)
	{
		return -1;
	}

	AWorldCollectable* Collectable = Cast<AWorldCollectable>(InteractableTargetActor);
	if (!Collectable)
	{
		return -1;
	}

	ULyraLayerInventoryItemInstance* ItemInstance = Collectable->GetInventoryItemInstance(0);
	if (ItemInstance)
	{
		return ItemInstance->GetStatTagStackCount(Tag);
	}

	TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDefinitionClass = Collectable->GetInventoryItemDefinition(0);
	if (ItemDefinitionClass)
	{
		ULyraLayerInventoryItemDefinition* ItemDefinition = ItemDefinitionClass.GetDefaultObject();
		if (ItemDefinition)
		{
			ULyraLayerInventoryItemInstance* TempItemInstance = NewObject<ULyraLayerInventoryItemInstance>(this, ULyraLayerInventoryItemInstance::StaticClass(), NAME_None, RF_Transient);
			const ULyraInventoryItemFragment* Fragment = ItemDefinition->FindFragmentByClass(FragmentClass);
			if (Fragment)
			{
				Fragment->OnInstanceCreated(TempItemInstance);
				return TempItemInstance->GetStatTagStackCount(Tag);
			}
		}
	}
	return -1;
}
