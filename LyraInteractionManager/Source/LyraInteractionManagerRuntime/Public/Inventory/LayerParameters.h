// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "LayerParameters.generated.h"


UENUM(BlueprintType)
enum class ETypeLayer : uint8
{
	Weapons,
	Usable,
	Armor,
	Quest
};

USTRUCT(BlueprintType)
struct FInventoryListParams
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 IndexActive;

};

USTRUCT(BlueprintType)
struct FInventoryObject
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UObject* SlotSelected;

};

UCLASS(BlueprintType)
class ULayerParameters : public UObject
{
	GENERATED_BODY()

public:

	static TArray<ETypeLayer> GetLayerValues()
	{
		return { ETypeLayer::Weapons, ETypeLayer::Usable, ETypeLayer::Armor, ETypeLayer::Quest };
	}
};

USTRUCT(BlueprintType)
struct FLayerStructUIMessaging
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI Messaging")
	bool bON;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI Messaging")
	APlayerController* Controller;
};

USTRUCT(BlueprintType)
struct FLayerDataStructParameters
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ETypeLayer TypeLayer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 NumSlots;

};

