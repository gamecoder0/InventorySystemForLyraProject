// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/UI/Weapons/LyraLayerWeaponUserInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLayerWeaponUserInterface() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerWeaponUserInterface();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerWeaponUserInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULyraLayerWeaponUserInterface Function OnWeaponChanged
struct LyraLayerWeaponUserInterface_eventOnWeaponChanged_Parms
{
	ULyraWeaponInstance* OldWeapon;
	ULyraWeaponInstance* NewWeapon;
};
static FName NAME_ULyraLayerWeaponUserInterface_OnWeaponChanged = FName(TEXT("OnWeaponChanged"));
void ULyraLayerWeaponUserInterface::OnWeaponChanged(ULyraWeaponInstance* OldWeapon, ULyraWeaponInstance* NewWeapon)
{
	LyraLayerWeaponUserInterface_eventOnWeaponChanged_Parms Parms;
	Parms.OldWeapon=OldWeapon;
	Parms.NewWeapon=NewWeapon;
	ProcessEvent(FindFunctionChecked(NAME_ULyraLayerWeaponUserInterface_OnWeaponChanged),&Parms);
}
struct Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Weapons/LyraLayerWeaponUserInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerWeaponUserInterface_eventOnWeaponChanged_Parms, OldWeapon), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerWeaponUserInterface_eventOnWeaponChanged_Parms, NewWeapon), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::NewProp_OldWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerWeaponUserInterface, nullptr, "OnWeaponChanged", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::PropPointers), sizeof(LyraLayerWeaponUserInterface_eventOnWeaponChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraLayerWeaponUserInterface_eventOnWeaponChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraLayerWeaponUserInterface Function OnWeaponChanged

// Begin Class ULyraLayerWeaponUserInterface
void ULyraLayerWeaponUserInterface::StaticRegisterNativesULyraLayerWeaponUserInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLayerWeaponUserInterface);
UClass* Z_Construct_UClass_ULyraLayerWeaponUserInterface_NoRegister()
{
	return ULyraLayerWeaponUserInterface::StaticClass();
}
struct Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/LyraLayerWeaponUserInterface.h" },
		{ "ModuleRelativePath", "Public/UI/Weapons/LyraLayerWeaponUserInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Weapons/LyraLayerWeaponUserInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLayerWeaponUserInterface_OnWeaponChanged, "OnWeaponChanged" }, // 1562127195
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLayerWeaponUserInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::NewProp_CurrentInstance = { "CurrentInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayerWeaponUserInterface, CurrentInstance), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInstance_MetaData), NewProp_CurrentInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::NewProp_CurrentInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::ClassParams = {
	&ULyraLayerWeaponUserInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraLayerWeaponUserInterface()
{
	if (!Z_Registration_Info_UClass_ULyraLayerWeaponUserInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLayerWeaponUserInterface.OuterSingleton, Z_Construct_UClass_ULyraLayerWeaponUserInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraLayerWeaponUserInterface.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraLayerWeaponUserInterface>()
{
	return ULyraLayerWeaponUserInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLayerWeaponUserInterface);
ULyraLayerWeaponUserInterface::~ULyraLayerWeaponUserInterface() {}
// End Class ULyraLayerWeaponUserInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_Weapons_LyraLayerWeaponUserInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraLayerWeaponUserInterface, ULyraLayerWeaponUserInterface::StaticClass, TEXT("ULyraLayerWeaponUserInterface"), &Z_Registration_Info_UClass_ULyraLayerWeaponUserInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLayerWeaponUserInterface), 4109456161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_Weapons_LyraLayerWeaponUserInterface_h_1627682758(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_Weapons_LyraLayerWeaponUserInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_Weapons_LyraLayerWeaponUserInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
