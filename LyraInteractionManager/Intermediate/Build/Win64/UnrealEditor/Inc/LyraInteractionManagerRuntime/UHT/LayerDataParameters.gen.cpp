// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/LayerDataParameters.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/LayerParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayerDataParameters() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULayerDataParameters();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULayerDataParameters_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLayerDataStructParameters();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULayerDataParameters
void ULayerDataParameters::StaticRegisterNativesULayerDataParameters()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayerDataParameters);
UClass* Z_Construct_UClass_ULayerDataParameters_NoRegister()
{
	return ULayerDataParameters::StaticClass();
}
struct Z_Construct_UClass_ULayerDataParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/LayerDataParameters.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LayerDataParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerDataStructParameters_MetaData[] = {
		{ "Category", "Layer Data Struct Parameters" },
		{ "ModuleRelativePath", "Public/Inventory/LayerDataParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerDataStructParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerDataStructParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayerDataParameters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULayerDataParameters_Statics::NewProp_LayerDataStructParameters_Inner = { "LayerDataStructParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLayerDataStructParameters, METADATA_PARAMS(0, nullptr) }; // 197148401
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULayerDataParameters_Statics::NewProp_LayerDataStructParameters = { "LayerDataStructParameters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerDataParameters, LayerDataStructParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerDataStructParameters_MetaData), NewProp_LayerDataStructParameters_MetaData) }; // 197148401
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULayerDataParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerDataParameters_Statics::NewProp_LayerDataStructParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerDataParameters_Statics::NewProp_LayerDataStructParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerDataParameters_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULayerDataParameters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerDataParameters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayerDataParameters_Statics::ClassParams = {
	&ULayerDataParameters::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULayerDataParameters_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULayerDataParameters_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerDataParameters_Statics::Class_MetaDataParams), Z_Construct_UClass_ULayerDataParameters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULayerDataParameters()
{
	if (!Z_Registration_Info_UClass_ULayerDataParameters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayerDataParameters.OuterSingleton, Z_Construct_UClass_ULayerDataParameters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULayerDataParameters.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULayerDataParameters>()
{
	return ULayerDataParameters::StaticClass();
}
ULayerDataParameters::ULayerDataParameters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULayerDataParameters);
ULayerDataParameters::~ULayerDataParameters() {}
// End Class ULayerDataParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerDataParameters_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULayerDataParameters, ULayerDataParameters::StaticClass, TEXT("ULayerDataParameters"), &Z_Registration_Info_UClass_ULayerDataParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayerDataParameters), 1471838868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerDataParameters_h_2012659241(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerDataParameters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerDataParameters_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
