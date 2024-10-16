// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/InventoryFragment_ArmorParts.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_ArmorParts() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_ArmorParts();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_ArmorParts_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class UInventoryFragment_ArmorParts
void UInventoryFragment_ArmorParts::StaticRegisterNativesUInventoryFragment_ArmorParts()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_ArmorParts);
UClass* Z_Construct_UClass_UInventoryFragment_ArmorParts_NoRegister()
{
	return UInventoryFragment_ArmorParts::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_ArmorParts.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_ArmorParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartClass_MetaData[] = {
		{ "Category", "InventoryFragment_ArmorParts" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The part to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_ArmorParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The part to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "InventoryFragment_ArmorParts" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_ArmorParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PartClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_ArmorParts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::NewProp_PartClass = { "PartClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_ArmorParts, PartClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartClass_MetaData), NewProp_PartClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_ArmorParts, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::NewProp_PartClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::ClassParams = {
	&UInventoryFragment_ArmorParts::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_ArmorParts()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_ArmorParts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_ArmorParts.OuterSingleton, Z_Construct_UClass_UInventoryFragment_ArmorParts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_ArmorParts.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInventoryFragment_ArmorParts>()
{
	return UInventoryFragment_ArmorParts::StaticClass();
}
UInventoryFragment_ArmorParts::UInventoryFragment_ArmorParts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_ArmorParts);
UInventoryFragment_ArmorParts::~UInventoryFragment_ArmorParts() {}
// End Class UInventoryFragment_ArmorParts

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_ArmorParts_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_ArmorParts, UInventoryFragment_ArmorParts::StaticClass, TEXT("UInventoryFragment_ArmorParts"), &Z_Registration_Info_UClass_UInventoryFragment_ArmorParts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_ArmorParts), 625313649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_ArmorParts_h_2640792458(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_ArmorParts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_ArmorParts_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
