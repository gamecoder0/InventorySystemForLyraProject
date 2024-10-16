// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/InventoryFragment_SetLayerStats.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_SetLayerStats() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_SetLayerStats();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_SetLayerStats_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class UInventoryFragment_SetLayerStats Function GetItemStatByTag
struct Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics
{
	struct InventoryFragment_SetLayerStats_eventGetItemStatByTag_Parms
	{
		FGameplayTag Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStats" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_SetLayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFragment_SetLayerStats_eventGetItemStatByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFragment_SetLayerStats_eventGetItemStatByTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFragment_SetLayerStats, nullptr, "GetItemStatByTag", nullptr, nullptr, Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::InventoryFragment_SetLayerStats_eventGetItemStatByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::InventoryFragment_SetLayerStats_eventGetItemStatByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFragment_SetLayerStats::execGetItemStatByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetItemStatByTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UInventoryFragment_SetLayerStats Function GetItemStatByTag

// Begin Class UInventoryFragment_SetLayerStats
void UInventoryFragment_SetLayerStats::StaticRegisterNativesUInventoryFragment_SetLayerStats()
{
	UClass* Class = UInventoryFragment_SetLayerStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemStatByTag", &UInventoryFragment_SetLayerStats::execGetItemStatByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_SetLayerStats);
UClass* Z_Construct_UClass_UInventoryFragment_SetLayerStats_NoRegister()
{
	return UInventoryFragment_SetLayerStats::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_SetLayerStats.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_SetLayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialItemStats_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_SetLayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialItemStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialItemStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InitialItemStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryFragment_SetLayerStats_GetItemStatByTag, "GetItemStatByTag" }, // 93339447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_SetLayerStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::NewProp_InitialItemStats_ValueProp = { "InitialItemStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::NewProp_InitialItemStats_Key_KeyProp = { "InitialItemStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::NewProp_InitialItemStats = { "InitialItemStats", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_SetLayerStats, InitialItemStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialItemStats_MetaData), NewProp_InitialItemStats_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::NewProp_InitialItemStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::NewProp_InitialItemStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::NewProp_InitialItemStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::ClassParams = {
	&UInventoryFragment_SetLayerStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_SetLayerStats()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_SetLayerStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_SetLayerStats.OuterSingleton, Z_Construct_UClass_UInventoryFragment_SetLayerStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_SetLayerStats.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInventoryFragment_SetLayerStats>()
{
	return UInventoryFragment_SetLayerStats::StaticClass();
}
UInventoryFragment_SetLayerStats::UInventoryFragment_SetLayerStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_SetLayerStats);
UInventoryFragment_SetLayerStats::~UInventoryFragment_SetLayerStats() {}
// End Class UInventoryFragment_SetLayerStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_SetLayerStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_SetLayerStats, UInventoryFragment_SetLayerStats::StaticClass, TEXT("UInventoryFragment_SetLayerStats"), &Z_Registration_Info_UClass_UInventoryFragment_SetLayerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_SetLayerStats), 904675391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_SetLayerStats_h_1002524903(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_SetLayerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_SetLayerStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
