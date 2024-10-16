// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Cosmetics/LyraControllerComponent_ArmorParts.h"
#include "LyraGame/Cosmetics/LyraCharacterPartTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraControllerComponent_ArmorParts() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraControllerComponent_CharacterParts();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraControllerComponent_ArmorParts();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraControllerComponent_ArmorParts_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULyraControllerComponent_ArmorParts Function AddCharacterPartCheckTag
struct Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics
{
	struct LyraControllerComponent_ArmorParts_eventAddCharacterPartCheckTag_Parms
	{
		FLyraCharacterPart NewPart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a character part to the actor that owns this customization component, should be called on the authority only\n" },
#endif
		{ "ModuleRelativePath", "Public/Cosmetics/LyraControllerComponent_ArmorParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a character part to the actor that owns this customization component, should be called on the authority only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::NewProp_NewPart = { "NewPart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraControllerComponent_ArmorParts_eventAddCharacterPartCheckTag_Parms, NewPart), Z_Construct_UScriptStruct_FLyraCharacterPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPart_MetaData), NewProp_NewPart_MetaData) }; // 2027995414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::NewProp_NewPart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraControllerComponent_ArmorParts, nullptr, "AddCharacterPartCheckTag", nullptr, nullptr, Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::LyraControllerComponent_ArmorParts_eventAddCharacterPartCheckTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::LyraControllerComponent_ArmorParts_eventAddCharacterPartCheckTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraControllerComponent_ArmorParts::execAddCharacterPartCheckTag)
{
	P_GET_STRUCT_REF(FLyraCharacterPart,Z_Param_Out_NewPart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCharacterPartCheckTag(Z_Param_Out_NewPart);
	P_NATIVE_END;
}
// End Class ULyraControllerComponent_ArmorParts Function AddCharacterPartCheckTag

// Begin Class ULyraControllerComponent_ArmorParts Function RemoveCharacterPartByTag
struct Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics
{
	struct LyraControllerComponent_ArmorParts_eventRemoveCharacterPartByTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes a previously added character part from the actor that owns this customization component, should be called on the authority only\n" },
#endif
		{ "ModuleRelativePath", "Public/Cosmetics/LyraControllerComponent_ArmorParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a previously added character part from the actor that owns this customization component, should be called on the authority only" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraControllerComponent_ArmorParts_eventRemoveCharacterPartByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraControllerComponent_ArmorParts, nullptr, "RemoveCharacterPartByTag", nullptr, nullptr, Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::LyraControllerComponent_ArmorParts_eventRemoveCharacterPartByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::LyraControllerComponent_ArmorParts_eventRemoveCharacterPartByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraControllerComponent_ArmorParts::execRemoveCharacterPartByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCharacterPartByTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class ULyraControllerComponent_ArmorParts Function RemoveCharacterPartByTag

// Begin Class ULyraControllerComponent_ArmorParts
void ULyraControllerComponent_ArmorParts::StaticRegisterNativesULyraControllerComponent_ArmorParts()
{
	UClass* Class = ULyraControllerComponent_ArmorParts::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCharacterPartCheckTag", &ULyraControllerComponent_ArmorParts::execAddCharacterPartCheckTag },
		{ "RemoveCharacterPartByTag", &ULyraControllerComponent_ArmorParts::execRemoveCharacterPartByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraControllerComponent_ArmorParts);
UClass* Z_Construct_UClass_ULyraControllerComponent_ArmorParts_NoRegister()
{
	return ULyraControllerComponent_ArmorParts::StaticClass();
}
struct Z_Construct_UClass_ULyraControllerComponent_ArmorParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Cosmetics/LyraControllerComponent_ArmorParts.h" },
		{ "ModuleRelativePath", "Public/Cosmetics/LyraControllerComponent_ArmorParts.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_AddCharacterPartCheckTag, "AddCharacterPartCheckTag" }, // 628803936
		{ &Z_Construct_UFunction_ULyraControllerComponent_ArmorParts_RemoveCharacterPartByTag, "RemoveCharacterPartByTag" }, // 911934070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraControllerComponent_ArmorParts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraControllerComponent_ArmorParts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraControllerComponent_CharacterParts,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerComponent_ArmorParts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraControllerComponent_ArmorParts_Statics::ClassParams = {
	&ULyraControllerComponent_ArmorParts::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerComponent_ArmorParts_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraControllerComponent_ArmorParts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraControllerComponent_ArmorParts()
{
	if (!Z_Registration_Info_UClass_ULyraControllerComponent_ArmorParts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraControllerComponent_ArmorParts.OuterSingleton, Z_Construct_UClass_ULyraControllerComponent_ArmorParts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraControllerComponent_ArmorParts.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraControllerComponent_ArmorParts>()
{
	return ULyraControllerComponent_ArmorParts::StaticClass();
}
ULyraControllerComponent_ArmorParts::ULyraControllerComponent_ArmorParts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraControllerComponent_ArmorParts);
ULyraControllerComponent_ArmorParts::~ULyraControllerComponent_ArmorParts() {}
// End Class ULyraControllerComponent_ArmorParts

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Cosmetics_LyraControllerComponent_ArmorParts_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraControllerComponent_ArmorParts, ULyraControllerComponent_ArmorParts::StaticClass, TEXT("ULyraControllerComponent_ArmorParts"), &Z_Registration_Info_UClass_ULyraControllerComponent_ArmorParts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraControllerComponent_ArmorParts), 1192574507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Cosmetics_LyraControllerComponent_ArmorParts_h_2243561932(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Cosmetics_LyraControllerComponent_ArmorParts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Cosmetics_LyraControllerComponent_ArmorParts_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
