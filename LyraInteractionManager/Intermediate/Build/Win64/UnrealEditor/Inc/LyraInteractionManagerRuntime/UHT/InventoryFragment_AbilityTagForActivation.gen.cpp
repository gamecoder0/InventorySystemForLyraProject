// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/InventoryFragment_AbilityTagForActivation.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_AbilityTagForActivation() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class UInventoryFragment_AbilityTagForActivation
void UInventoryFragment_AbilityTagForActivation::StaticRegisterNativesUInventoryFragment_AbilityTagForActivation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_AbilityTagForActivation);
UClass* Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_NoRegister()
{
	return UInventoryFragment_AbilityTagForActivation::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_AbilityTagForActivation.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_AbilityTagForActivation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagForActivation_MetaData[] = {
		{ "Category", "Drop Item" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_AbilityTagForActivation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagForActivation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_AbilityTagForActivation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::NewProp_AbilityTagForActivation = { "AbilityTagForActivation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_AbilityTagForActivation, AbilityTagForActivation), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagForActivation_MetaData), NewProp_AbilityTagForActivation_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::NewProp_AbilityTagForActivation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::ClassParams = {
	&UInventoryFragment_AbilityTagForActivation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_AbilityTagForActivation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_AbilityTagForActivation.OuterSingleton, Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_AbilityTagForActivation.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInventoryFragment_AbilityTagForActivation>()
{
	return UInventoryFragment_AbilityTagForActivation::StaticClass();
}
UInventoryFragment_AbilityTagForActivation::UInventoryFragment_AbilityTagForActivation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_AbilityTagForActivation);
UInventoryFragment_AbilityTagForActivation::~UInventoryFragment_AbilityTagForActivation() {}
// End Class UInventoryFragment_AbilityTagForActivation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_AbilityTagForActivation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_AbilityTagForActivation, UInventoryFragment_AbilityTagForActivation::StaticClass, TEXT("UInventoryFragment_AbilityTagForActivation"), &Z_Registration_Info_UClass_UInventoryFragment_AbilityTagForActivation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_AbilityTagForActivation), 1250651518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_AbilityTagForActivation_h_2216800018(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_AbilityTagForActivation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_AbilityTagForActivation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
