// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Equipment/LyraGameplayAbility_WithReloadEquipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_WithReloadEquipment() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULyraGameplayAbility_WithReloadEquipment Function FindFirstItemByDefinition
struct Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics
{
	struct LyraGameplayAbility_WithReloadEquipment_eventFindFirstItemByDefinition_Parms
	{
		ULyraLayerInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "Public/Equipment/LyraGameplayAbility_WithReloadEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_WithReloadEquipment_eventFindFirstItemByDefinition_Parms, ReturnValue), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment, nullptr, "FindFirstItemByDefinition", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::LyraGameplayAbility_WithReloadEquipment_eventFindFirstItemByDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::LyraGameplayAbility_WithReloadEquipment_eventFindFirstItemByDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_WithReloadEquipment::execFindFirstItemByDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraLayerInventoryItemInstance**)Z_Param__Result=P_THIS->FindFirstItemByDefinition();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_WithReloadEquipment Function FindFirstItemByDefinition

// Begin Class ULyraGameplayAbility_WithReloadEquipment
void ULyraGameplayAbility_WithReloadEquipment::StaticRegisterNativesULyraGameplayAbility_WithReloadEquipment()
{
	UClass* Class = ULyraGameplayAbility_WithReloadEquipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindFirstItemByDefinition", &ULyraGameplayAbility_WithReloadEquipment::execFindFirstItemByDefinition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_WithReloadEquipment);
UClass* Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_NoRegister()
{
	return ULyraGameplayAbility_WithReloadEquipment::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* ULyraInteractionManagerGameplayAbility_FromEquipment\n* An anility granted by and associated with an equipment instance\n*/" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "Equipment/LyraGameplayAbility_WithReloadEquipment.h" },
		{ "ModuleRelativePath", "Public/Equipment/LyraGameplayAbility_WithReloadEquipment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraInteractionManagerGameplayAbility_FromEquipment\nAn anility granted by and associated with an equipment instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDef_MetaData[] = {
		{ "Category", "Reload Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/LyraGameplayAbility_WithReloadEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "Category", "Reload Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/LyraGameplayAbility_WithReloadEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_WithReloadEquipment_FindFirstItemByDefinition, "FindFirstItemByDefinition" }, // 718704246
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_WithReloadEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility_WithReloadEquipment, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDef_MetaData), NewProp_ItemDef_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility_WithReloadEquipment, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::NewProp_LayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility_FromEquipment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::ClassParams = {
	&ULyraGameplayAbility_WithReloadEquipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_WithReloadEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_WithReloadEquipment.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_WithReloadEquipment.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraGameplayAbility_WithReloadEquipment>()
{
	return ULyraGameplayAbility_WithReloadEquipment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_WithReloadEquipment);
ULyraGameplayAbility_WithReloadEquipment::~ULyraGameplayAbility_WithReloadEquipment() {}
// End Class ULyraGameplayAbility_WithReloadEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraGameplayAbility_WithReloadEquipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_WithReloadEquipment, ULyraGameplayAbility_WithReloadEquipment::StaticClass, TEXT("ULyraGameplayAbility_WithReloadEquipment"), &Z_Registration_Info_UClass_ULyraGameplayAbility_WithReloadEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_WithReloadEquipment), 3199480078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraGameplayAbility_WithReloadEquipment_h_1684708411(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraGameplayAbility_WithReloadEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraGameplayAbility_WithReloadEquipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
