// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Weapons/LyraLayerWeaponUserInterface.h"
#include "Equipment/LyraLayersEquipmentManagerComponent.h"
#include "GameFramework/Pawn.h"
#include "Weapons/LyraWeaponInstance.h"

ULyraLayerWeaponUserInterface::ULyraLayerWeaponUserInterface(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void ULyraLayerWeaponUserInterface::NativeConstruct()
{
	Super::NativeConstruct();
}

void ULyraLayerWeaponUserInterface::NativeDestruct()
{
	Super::NativeDestruct();
}

void ULyraLayerWeaponUserInterface::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if (APawn* Pawn = GetOwningPlayerPawn())
	{
		if (ULyraLayersEquipmentManagerComponent* EquipmentManager = Pawn->FindComponentByClass<ULyraLayersEquipmentManagerComponent>())
		{
			if (ULyraWeaponInstance* NewInstance = EquipmentManager->GetFirstInstanceOfType<ULyraWeaponInstance>())
			{
				if (NewInstance != CurrentInstance && NewInstance->GetInstigator() != nullptr)
				{
					ULyraWeaponInstance* OldWeapon = CurrentInstance;
					CurrentInstance = NewInstance;
					RebuildWidgetFromWeapon();
					OnWeaponChanged(OldWeapon, CurrentInstance);
				}
			}
		}
	}
}

void ULyraLayerWeaponUserInterface::RebuildWidgetFromWeapon()
{
}
