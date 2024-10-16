// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LayerParameters.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LayerDataParameters.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class LYRAINTERACTIONMANAGERRUNTIME_API ULayerDataParameters : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	TArray<FLayerDataStructParameters> GenLayerDataStructParameters();
	TArray<FLayerDataStructParameters> GetLayerDataStructParameters();



protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Layer Data Struct Parameters")
	TArray<FLayerDataStructParameters> LayerDataStructParameters;
};
