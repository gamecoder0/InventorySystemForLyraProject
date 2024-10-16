// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/UI/LyraButtonBase_TriggerAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraButtonBase_TriggerAbility() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraButtonBase_TriggerAbility();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraButtonBase_TriggerAbility_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULyraButtonBase_TriggerAbility Function EquipItem
struct Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics
{
	struct LyraButtonBase_TriggerAbility_eventEquipItem_Parms
	{
		UObject* OptionalObject;
		ULyraEquipmentInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_TriggerAbility_eventEquipItem_Parms, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_TriggerAbility_eventEquipItem_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::NewProp_OptionalObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase_TriggerAbility, nullptr, "EquipItem", nullptr, nullptr, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::LyraButtonBase_TriggerAbility_eventEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::LyraButtonBase_TriggerAbility_eventEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraButtonBase_TriggerAbility::execEquipItem)
{
	P_GET_OBJECT(UObject,Z_Param_OptionalObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->EquipItem(Z_Param_OptionalObject);
	P_NATIVE_END;
}
// End Class ULyraButtonBase_TriggerAbility Function EquipItem

// Begin Class ULyraButtonBase_TriggerAbility Function SetButtonText
struct Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics
{
	struct LyraButtonBase_TriggerAbility_eventSetButtonText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_TriggerAbility_eventSetButtonText_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase_TriggerAbility, nullptr, "SetButtonText", nullptr, nullptr, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::LyraButtonBase_TriggerAbility_eventSetButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::LyraButtonBase_TriggerAbility_eventSetButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraButtonBase_TriggerAbility::execSetButtonText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonText(Z_Param_Out_InText);
	P_NATIVE_END;
}
// End Class ULyraButtonBase_TriggerAbility Function SetButtonText

// Begin Class ULyraButtonBase_TriggerAbility Function TriggerAbility
struct Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics
{
	struct LyraButtonBase_TriggerAbility_eventTriggerAbility_Parms
	{
		UAbilitySystemComponent* AbilitySystem;
		FGameplayEventData Payload;
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_TriggerAbility_eventTriggerAbility_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_TriggerAbility_eventTriggerAbility_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_TriggerAbility_eventTriggerAbility_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraButtonBase_TriggerAbility_eventTriggerAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraButtonBase_TriggerAbility_eventTriggerAbility_Parms), &Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase_TriggerAbility, nullptr, "TriggerAbility", nullptr, nullptr, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::LyraButtonBase_TriggerAbility_eventTriggerAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::LyraButtonBase_TriggerAbility_eventTriggerAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraButtonBase_TriggerAbility::execTriggerAbility)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TriggerAbility(Z_Param_AbilitySystem,Z_Param_Payload,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class ULyraButtonBase_TriggerAbility Function TriggerAbility

// Begin Class ULyraButtonBase_TriggerAbility Function TriggerOnClicked
struct Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerOnClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerOnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase_TriggerAbility, nullptr, "TriggerOnClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerOnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerOnClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerOnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerOnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraButtonBase_TriggerAbility::execTriggerOnClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerOnClicked();
	P_NATIVE_END;
}
// End Class ULyraButtonBase_TriggerAbility Function TriggerOnClicked

// Begin Class ULyraButtonBase_TriggerAbility Function UpdateButtonStyle
static FName NAME_ULyraButtonBase_TriggerAbility_UpdateButtonStyle = FName(TEXT("UpdateButtonStyle"));
void ULyraButtonBase_TriggerAbility::UpdateButtonStyle()
{
	ProcessEvent(FindFunctionChecked(NAME_ULyraButtonBase_TriggerAbility_UpdateButtonStyle),NULL);
}
struct Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase_TriggerAbility, nullptr, "UpdateButtonStyle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonStyle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraButtonBase_TriggerAbility Function UpdateButtonStyle

// Begin Class ULyraButtonBase_TriggerAbility Function UpdateButtonText
struct LyraButtonBase_TriggerAbility_eventUpdateButtonText_Parms
{
	FText InText;
};
static FName NAME_ULyraButtonBase_TriggerAbility_UpdateButtonText = FName(TEXT("UpdateButtonText"));
void ULyraButtonBase_TriggerAbility::UpdateButtonText(FText const& InText)
{
	LyraButtonBase_TriggerAbility_eventUpdateButtonText_Parms Parms;
	Parms.InText=InText;
	ProcessEvent(FindFunctionChecked(NAME_ULyraButtonBase_TriggerAbility_UpdateButtonText),&Parms);
}
struct Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraButtonBase_TriggerAbility_eventUpdateButtonText_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraButtonBase_TriggerAbility, nullptr, "UpdateButtonText", nullptr, nullptr, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::PropPointers), sizeof(LyraButtonBase_TriggerAbility_eventUpdateButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraButtonBase_TriggerAbility_eventUpdateButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraButtonBase_TriggerAbility Function UpdateButtonText

// Begin Class ULyraButtonBase_TriggerAbility
void ULyraButtonBase_TriggerAbility::StaticRegisterNativesULyraButtonBase_TriggerAbility()
{
	UClass* Class = ULyraButtonBase_TriggerAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipItem", &ULyraButtonBase_TriggerAbility::execEquipItem },
		{ "SetButtonText", &ULyraButtonBase_TriggerAbility::execSetButtonText },
		{ "TriggerAbility", &ULyraButtonBase_TriggerAbility::execTriggerAbility },
		{ "TriggerOnClicked", &ULyraButtonBase_TriggerAbility::execTriggerOnClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraButtonBase_TriggerAbility);
UClass* Z_Construct_UClass_ULyraButtonBase_TriggerAbility_NoRegister()
{
	return ULyraButtonBase_TriggerAbility::StaticClass();
}
struct Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/LyraButtonBase_TriggerAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ButtonText_MetaData[] = {
		{ "Category", "Button" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "Category", "Button" },
		{ "editcondition", "bOverride_ButtonText" },
		{ "ModuleRelativePath", "Public/UI/LyraButtonBase_TriggerAbility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ButtonText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ButtonText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_EquipItem, "EquipItem" }, // 1967717856
		{ &Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_SetButtonText, "SetButtonText" }, // 1263707015
		{ &Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerAbility, "TriggerAbility" }, // 878873708
		{ &Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_TriggerOnClicked, "TriggerOnClicked" }, // 3923674400
		{ &Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonStyle, "UpdateButtonStyle" }, // 338476423
		{ &Z_Construct_UFunction_ULyraButtonBase_TriggerAbility_UpdateButtonText, "UpdateButtonText" }, // 2003490373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraButtonBase_TriggerAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::NewProp_bOverride_ButtonText_SetBit(void* Obj)
{
	((ULyraButtonBase_TriggerAbility*)Obj)->bOverride_ButtonText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::NewProp_bOverride_ButtonText = { "bOverride_ButtonText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULyraButtonBase_TriggerAbility), &Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::NewProp_bOverride_ButtonText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ButtonText_MetaData), NewProp_bOverride_ButtonText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraButtonBase_TriggerAbility, ButtonText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::NewProp_bOverride_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::NewProp_ButtonText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(ULyraButtonBase_TriggerAbility, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::ClassParams = {
	&ULyraButtonBase_TriggerAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraButtonBase_TriggerAbility()
{
	if (!Z_Registration_Info_UClass_ULyraButtonBase_TriggerAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraButtonBase_TriggerAbility.OuterSingleton, Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraButtonBase_TriggerAbility.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraButtonBase_TriggerAbility>()
{
	return ULyraButtonBase_TriggerAbility::StaticClass();
}
ULyraButtonBase_TriggerAbility::ULyraButtonBase_TriggerAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraButtonBase_TriggerAbility);
ULyraButtonBase_TriggerAbility::~ULyraButtonBase_TriggerAbility() {}
// End Class ULyraButtonBase_TriggerAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraButtonBase_TriggerAbility, ULyraButtonBase_TriggerAbility::StaticClass, TEXT("ULyraButtonBase_TriggerAbility"), &Z_Registration_Info_UClass_ULyraButtonBase_TriggerAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraButtonBase_TriggerAbility), 3484683462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_178841357(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
