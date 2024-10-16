// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/InventoryFragment_SearchAmmo.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_SearchAmmo() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_SearchAmmo();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_SearchAmmo_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class UInventoryFragment_SearchAmmo Function CompareTags
struct Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics
{
	struct InventoryFragment_SearchAmmo_eventCompareTags_Parms
	{
		const ULyraLayerInventoryItemInstance* OtherItemInstance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to compare tags\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_SearchAmmo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to compare tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherItemInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherItemInstance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::NewProp_OtherItemInstance = { "OtherItemInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFragment_SearchAmmo_eventCompareTags_Parms, OtherItemInstance), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherItemInstance_MetaData), NewProp_OtherItemInstance_MetaData) };
void Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryFragment_SearchAmmo_eventCompareTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryFragment_SearchAmmo_eventCompareTags_Parms), &Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::NewProp_OtherItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFragment_SearchAmmo, nullptr, "CompareTags", nullptr, nullptr, Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::InventoryFragment_SearchAmmo_eventCompareTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::InventoryFragment_SearchAmmo_eventCompareTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFragment_SearchAmmo::execCompareTags)
{
	P_GET_OBJECT(ULyraLayerInventoryItemInstance,Z_Param_OtherItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CompareTags(Z_Param_OtherItemInstance);
	P_NATIVE_END;
}
// End Class UInventoryFragment_SearchAmmo Function CompareTags

// Begin Class UInventoryFragment_SearchAmmo
void UInventoryFragment_SearchAmmo::StaticRegisterNativesUInventoryFragment_SearchAmmo()
{
	UClass* Class = UInventoryFragment_SearchAmmo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompareTags", &UInventoryFragment_SearchAmmo::execCompareTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_SearchAmmo);
UClass* Z_Construct_UClass_UInventoryFragment_SearchAmmo_NoRegister()
{
	return UInventoryFragment_SearchAmmo::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_SearchAmmo.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_SearchAmmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoTag_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_SearchAmmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryFragment_SearchAmmo_CompareTags, "CompareTags" }, // 3260793526
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_SearchAmmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::NewProp_AmmoTag = { "AmmoTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_SearchAmmo, AmmoTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoTag_MetaData), NewProp_AmmoTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::NewProp_AmmoTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::ClassParams = {
	&UInventoryFragment_SearchAmmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_SearchAmmo()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_SearchAmmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_SearchAmmo.OuterSingleton, Z_Construct_UClass_UInventoryFragment_SearchAmmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_SearchAmmo.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInventoryFragment_SearchAmmo>()
{
	return UInventoryFragment_SearchAmmo::StaticClass();
}
UInventoryFragment_SearchAmmo::UInventoryFragment_SearchAmmo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_SearchAmmo);
UInventoryFragment_SearchAmmo::~UInventoryFragment_SearchAmmo() {}
// End Class UInventoryFragment_SearchAmmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_SearchAmmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_SearchAmmo, UInventoryFragment_SearchAmmo::StaticClass, TEXT("UInventoryFragment_SearchAmmo"), &Z_Registration_Info_UClass_UInventoryFragment_SearchAmmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_SearchAmmo), 2762167249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_SearchAmmo_h_3687010408(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_SearchAmmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_SearchAmmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
