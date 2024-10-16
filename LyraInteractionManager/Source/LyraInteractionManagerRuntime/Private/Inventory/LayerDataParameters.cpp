// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/LayerDataParameters.h"

TArray<FLayerDataStructParameters> ULayerDataParameters::GenLayerDataStructParameters()
{
	TArray<FLayerDataStructParameters> LayerDataStruct;
	for (ETypeLayer Layer : ULayerParameters::GetLayerValues())
	{
		FLayerDataStructParameters DataStruct;
		DataStruct.NumSlots = 3;
		DataStruct.TypeLayer = Layer;
		LayerDataStruct.Add(DataStruct);
	}
	return LayerDataStruct;
}

TArray<FLayerDataStructParameters> ULayerDataParameters::GetLayerDataStructParameters()
{
	TArray<FLayerDataStructParameters> GenDataStructParameters;
	bool bAddItem = false;
	for (FLayerDataStructParameters GenStructParameters : GenLayerDataStructParameters())
	{
		bAddItem = false;
		for (FLayerDataStructParameters StructParameters : LayerDataStructParameters)
		{
			if (GenStructParameters.TypeLayer == StructParameters.TypeLayer)
			{
				GenDataStructParameters.Add(StructParameters);
				bAddItem = true;
				break;
			}
		}
		if(!bAddItem)
		{
			GenDataStructParameters.Add(GenStructParameters);
		}
	}
	return GenDataStructParameters;
}
