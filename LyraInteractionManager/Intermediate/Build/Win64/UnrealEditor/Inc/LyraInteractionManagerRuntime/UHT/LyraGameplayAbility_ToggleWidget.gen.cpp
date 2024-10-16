// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/AbilitySystem/Abilities/LyraGameplayAbility_ToggleWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_ToggleWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAbility_ToggleWidget();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin ScriptStruct FAbility_ToggleWidget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Ability_ToggleWidget;
class UScriptStruct* FAbility_ToggleWidget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Ability_ToggleWidget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Ability_ToggleWidget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbility_ToggleWidget, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("Ability_ToggleWidget"));
	}
	return Z_Registration_Info_UScriptStruct_Ability_ToggleWidget.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FAbility_ToggleWidget>()
{
	return FAbility_ToggleWidget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/LyraGameplayAbility_ToggleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableWidget_MetaData[] = {
		{ "Category", "Ability_ToggleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/LyraGameplayAbility_ToggleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatableWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbility_ToggleWidget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::NewProp_ActivatableWidget = { "ActivatableWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility_ToggleWidget, ActivatableWidget), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatableWidget_MetaData), NewProp_ActivatableWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::NewProp_ActivatableWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	nullptr,
	&NewStructOps,
	"Ability_ToggleWidget",
	Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::PropPointers),
	sizeof(FAbility_ToggleWidget),
	alignof(FAbility_ToggleWidget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbility_ToggleWidget()
{
	if (!Z_Registration_Info_UScriptStruct_Ability_ToggleWidget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Ability_ToggleWidget.InnerSingleton, Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Ability_ToggleWidget.InnerSingleton;
}
// End ScriptStruct FAbility_ToggleWidget

// Begin Class ULyraGameplayAbility_ToggleWidget
void ULyraGameplayAbility_ToggleWidget::StaticRegisterNativesULyraGameplayAbility_ToggleWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_ToggleWidget);
UClass* Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_NoRegister()
{
	return ULyraGameplayAbility_ToggleWidget::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraGameplayAbility_ToggleWidget.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/LyraGameplayAbility_ToggleWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_ToggleWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_Statics::ClassParams = {
	&ULyraGameplayAbility_ToggleWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_ToggleWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_ToggleWidget.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_ToggleWidget.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraGameplayAbility_ToggleWidget>()
{
	return ULyraGameplayAbility_ToggleWidget::StaticClass();
}
ULyraGameplayAbility_ToggleWidget::ULyraGameplayAbility_ToggleWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_ToggleWidget);
ULyraGameplayAbility_ToggleWidget::~ULyraGameplayAbility_ToggleWidget() {}
// End Class ULyraGameplayAbility_ToggleWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_AbilitySystem_Abilities_LyraGameplayAbility_ToggleWidget_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbility_ToggleWidget::StaticStruct, Z_Construct_UScriptStruct_FAbility_ToggleWidget_Statics::NewStructOps, TEXT("Ability_ToggleWidget"), &Z_Registration_Info_UScriptStruct_Ability_ToggleWidget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbility_ToggleWidget), 679875400U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_ToggleWidget, ULyraGameplayAbility_ToggleWidget::StaticClass, TEXT("ULyraGameplayAbility_ToggleWidget"), &Z_Registration_Info_UClass_ULyraGameplayAbility_ToggleWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_ToggleWidget), 1577973403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_AbilitySystem_Abilities_LyraGameplayAbility_ToggleWidget_h_1565425018(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_AbilitySystem_Abilities_LyraGameplayAbility_ToggleWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_AbilitySystem_Abilities_LyraGameplayAbility_ToggleWidget_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_AbilitySystem_Abilities_LyraGameplayAbility_ToggleWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_AbilitySystem_Abilities_LyraGameplayAbility_ToggleWidget_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
