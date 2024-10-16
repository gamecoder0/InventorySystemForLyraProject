// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/InventoryFragment_QuickBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_QuickBar() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_QuickBar();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_QuickBar_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class UInventoryFragment_QuickBar
void UInventoryFragment_QuickBar::StaticRegisterNativesUInventoryFragment_QuickBar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_QuickBar);
UClass* Z_Construct_UClass_UInventoryFragment_QuickBar_NoRegister()
{
	return UInventoryFragment_QuickBar::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_QuickBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/InventoryFragment_QuickBar.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_QuickBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuickBarWeapon_MetaData[] = {
		{ "Category", "Quick Bar Visible" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_QuickBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuickBarArmor_MetaData[] = {
		{ "Category", "Quick Bar Visible" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_QuickBar.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bQuickBarWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuickBarWeapon;
	static void NewProp_bQuickBarArmor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuickBarArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_QuickBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::NewProp_bQuickBarWeapon_SetBit(void* Obj)
{
	((UInventoryFragment_QuickBar*)Obj)->bQuickBarWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::NewProp_bQuickBarWeapon = { "bQuickBarWeapon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryFragment_QuickBar), &Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::NewProp_bQuickBarWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuickBarWeapon_MetaData), NewProp_bQuickBarWeapon_MetaData) };
void Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::NewProp_bQuickBarArmor_SetBit(void* Obj)
{
	((UInventoryFragment_QuickBar*)Obj)->bQuickBarArmor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::NewProp_bQuickBarArmor = { "bQuickBarArmor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryFragment_QuickBar), &Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::NewProp_bQuickBarArmor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuickBarArmor_MetaData), NewProp_bQuickBarArmor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::NewProp_bQuickBarWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::NewProp_bQuickBarArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::ClassParams = {
	&UInventoryFragment_QuickBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_QuickBar()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_QuickBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_QuickBar.OuterSingleton, Z_Construct_UClass_UInventoryFragment_QuickBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_QuickBar.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInventoryFragment_QuickBar>()
{
	return UInventoryFragment_QuickBar::StaticClass();
}
UInventoryFragment_QuickBar::UInventoryFragment_QuickBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_QuickBar);
UInventoryFragment_QuickBar::~UInventoryFragment_QuickBar() {}
// End Class UInventoryFragment_QuickBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_QuickBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_QuickBar, UInventoryFragment_QuickBar::StaticClass, TEXT("UInventoryFragment_QuickBar"), &Z_Registration_Info_UClass_UInventoryFragment_QuickBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_QuickBar), 2707837924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_QuickBar_h_364167521(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_QuickBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_QuickBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
