// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/LyraLayerInventoryItemDefinition.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLayerInventoryItemDefinition() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemDefinition();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULyraLayerInventoryItemDefinition Function GetNumLayer
struct Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics
{
	struct LyraLayerInventoryItemDefinition_eventGetNumLayer_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStats" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayerInventoryItemDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerInventoryItemDefinition_eventGetNumLayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerInventoryItemDefinition, nullptr, "GetNumLayer", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::LyraLayerInventoryItemDefinition_eventGetNumLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::LyraLayerInventoryItemDefinition_eventGetNumLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerInventoryItemDefinition::execGetNumLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumLayer();
	P_NATIVE_END;
}
// End Class ULyraLayerInventoryItemDefinition Function GetNumLayer

// Begin Class ULyraLayerInventoryItemDefinition
void ULyraLayerInventoryItemDefinition::StaticRegisterNativesULyraLayerInventoryItemDefinition()
{
	UClass* Class = ULyraLayerInventoryItemDefinition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumLayer", &ULyraLayerInventoryItemDefinition::execGetNumLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLayerInventoryItemDefinition);
UClass* Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister()
{
	return ULyraLayerInventoryItemDefinition::StaticClass();
}
struct Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/LyraLayerInventoryItemDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayerInventoryItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialItemStats_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The InitialItemStats values are base values that can be initialized before the ULyraInventoryItemFragment classes,\n\x09 * as the Fragments do not communicate data with each other. Classes like ULyraEquipmentDefinition or ULyraEquipmentInstance\n\x09 * are created within classes derived from ULyraInventoryItemFragment. This can cause data synchronization loss.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/LyraLayerInventoryItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The InitialItemStats values are base values that can be initialized before the ULyraInventoryItemFragment classes,\nas the Fragments do not communicate data with each other. Classes like ULyraEquipmentDefinition or ULyraEquipmentInstance\nare created within classes derived from ULyraInventoryItemFragment. This can cause data synchronization loss." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialItemStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialItemStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InitialItemStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLayerInventoryItemDefinition_GetNumLayer, "GetNumLayer" }, // 828534926
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLayerInventoryItemDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::NewProp_InitialItemStats_ValueProp = { "InitialItemStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::NewProp_InitialItemStats_Key_KeyProp = { "InitialItemStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::NewProp_InitialItemStats = { "InitialItemStats", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayerInventoryItemDefinition, InitialItemStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialItemStats_MetaData), NewProp_InitialItemStats_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::NewProp_InitialItemStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::NewProp_InitialItemStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::NewProp_InitialItemStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemDefinition,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::ClassParams = {
	&ULyraLayerInventoryItemDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::PropPointers),
	0,
	0x008100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraLayerInventoryItemDefinition()
{
	if (!Z_Registration_Info_UClass_ULyraLayerInventoryItemDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLayerInventoryItemDefinition.OuterSingleton, Z_Construct_UClass_ULyraLayerInventoryItemDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraLayerInventoryItemDefinition.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraLayerInventoryItemDefinition>()
{
	return ULyraLayerInventoryItemDefinition::StaticClass();
}
ULyraLayerInventoryItemDefinition::ULyraLayerInventoryItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLayerInventoryItemDefinition);
ULyraLayerInventoryItemDefinition::~ULyraLayerInventoryItemDefinition() {}
// End Class ULyraLayerInventoryItemDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayerInventoryItemDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraLayerInventoryItemDefinition, ULyraLayerInventoryItemDefinition::StaticClass, TEXT("ULyraLayerInventoryItemDefinition"), &Z_Registration_Info_UClass_ULyraLayerInventoryItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLayerInventoryItemDefinition), 2896905675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayerInventoryItemDefinition_h_3862704037(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayerInventoryItemDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayerInventoryItemDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
