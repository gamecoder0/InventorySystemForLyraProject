// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "LyraGame/Interaction/InteractionOption.h"
#include "LyraGame/Interaction/InteractionQuery.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitForInteractableTargets_SphereTrace() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionQuery();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_AWorldCollectable_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInteractableTargetTrigger();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInteractableTargetTrigger_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMessageItemDefinition();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin ScriptStruct FMessageItemDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MessageItemDefinition;
class UScriptStruct* FMessageItemDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MessageItemDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MessageItemDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageItemDefinition, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("MessageItemDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_MessageItemDefinition.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FMessageItemDefinition>()
{
	return FMessageItemDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMessageItemDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTarget_MetaData[] = {
		{ "Category", "MessageItemDefinition" },
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTarget_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageItemDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::NewProp_AllTarget_Inner = { "AllTarget", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInteractableTargetTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::NewProp_AllTarget = { "AllTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMessageItemDefinition, AllTarget), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTarget_MetaData), NewProp_AllTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::NewProp_AllTarget_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::NewProp_AllTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	nullptr,
	&NewStructOps,
	"MessageItemDefinition",
	Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::PropPointers),
	sizeof(FMessageItemDefinition),
	alignof(FMessageItemDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMessageItemDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_MessageItemDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MessageItemDefinition.InnerSingleton, Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MessageItemDefinition.InnerSingleton;
}
// End ScriptStruct FMessageItemDefinition

// Begin Class UInteractableTargetTrigger Function FindFragmentByClass
struct Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics
{
	struct InteractableTargetTrigger_eventFindFragmentByClass_Parms
	{
		TSubclassOf<ULyraInventoryItemFragment> FragmentClass;
		const ULyraInventoryItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventFindFragmentByClass_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventFindFragmentByClass_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableTargetTrigger, nullptr, "FindFragmentByClass", nullptr, nullptr, Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::InteractableTargetTrigger_eventFindFragmentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::InteractableTargetTrigger_eventFindFragmentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractableTargetTrigger::execFindFragmentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const ULyraInventoryItemFragment**)Z_Param__Result=P_THIS->FindFragmentByClass(Z_Param_FragmentClass);
	P_NATIVE_END;
}
// End Class UInteractableTargetTrigger Function FindFragmentByClass

// Begin Class UInteractableTargetTrigger Function GetGameplayEventData
struct Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics
{
	struct InteractableTargetTrigger_eventGetGameplayEventData_Parms
	{
		FGameplayEventData Payload;
		UAbilitySystemComponent* AbilityComponent;
		FGameplayTag GameplayTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventGetGameplayEventData_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventGetGameplayEventData_Parms, AbilityComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponent_MetaData), NewProp_AbilityComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventGetGameplayEventData_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractableTargetTrigger_eventGetGameplayEventData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableTargetTrigger_eventGetGameplayEventData_Parms), &Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_AbilityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_GameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableTargetTrigger, nullptr, "GetGameplayEventData", nullptr, nullptr, Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::InteractableTargetTrigger_eventGetGameplayEventData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::InteractableTargetTrigger_eventGetGameplayEventData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractableTargetTrigger::execGetGameplayEventData)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_Payload);
	P_GET_OBJECT_REF(UAbilitySystemComponent,Z_Param_Out_AbilityComponent);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGameplayEventData(Z_Param_Out_Payload,P_ARG_GC_BARRIER(Z_Param_Out_AbilityComponent),Z_Param_GameplayTag);
	P_NATIVE_END;
}
// End Class UInteractableTargetTrigger Function GetGameplayEventData

// Begin Class UInteractableTargetTrigger Function GetStatTagStackCountOfFragment
struct Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics
{
	struct InteractableTargetTrigger_eventGetStatTagStackCountOfFragment_Parms
	{
		TSubclassOf<ULyraInventoryItemFragment> FragmentClass;
		FGameplayTag Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventGetStatTagStackCountOfFragment_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventGetStatTagStackCountOfFragment_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventGetStatTagStackCountOfFragment_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableTargetTrigger, nullptr, "GetStatTagStackCountOfFragment", nullptr, nullptr, Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::InteractableTargetTrigger_eventGetStatTagStackCountOfFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::InteractableTargetTrigger_eventGetStatTagStackCountOfFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractableTargetTrigger::execGetStatTagStackCountOfFragment)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentClass);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStatTagStackCountOfFragment(Z_Param_FragmentClass,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UInteractableTargetTrigger Function GetStatTagStackCountOfFragment

// Begin Class UInteractableTargetTrigger Function GetWorldCollectable
struct Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics
{
	struct InteractableTargetTrigger_eventGetWorldCollectable_Parms
	{
		AWorldCollectable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableTargetTrigger_eventGetWorldCollectable_Parms, ReturnValue), Z_Construct_UClass_AWorldCollectable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableTargetTrigger, nullptr, "GetWorldCollectable", nullptr, nullptr, Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::InteractableTargetTrigger_eventGetWorldCollectable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::InteractableTargetTrigger_eventGetWorldCollectable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractableTargetTrigger::execGetWorldCollectable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWorldCollectable**)Z_Param__Result=P_THIS->GetWorldCollectable();
	P_NATIVE_END;
}
// End Class UInteractableTargetTrigger Function GetWorldCollectable

// Begin Class UInteractableTargetTrigger
void UInteractableTargetTrigger::StaticRegisterNativesUInteractableTargetTrigger()
{
	UClass* Class = UInteractableTargetTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindFragmentByClass", &UInteractableTargetTrigger::execFindFragmentByClass },
		{ "GetGameplayEventData", &UInteractableTargetTrigger::execGetGameplayEventData },
		{ "GetStatTagStackCountOfFragment", &UInteractableTargetTrigger::execGetStatTagStackCountOfFragment },
		{ "GetWorldCollectable", &UInteractableTargetTrigger::execGetWorldCollectable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableTargetTrigger);
UClass* Z_Construct_UClass_UInteractableTargetTrigger_NoRegister()
{
	return UInteractableTargetTrigger::StaticClass();
}
struct Z_Construct_UClass_UInteractableTargetTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableTargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Option;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableTargetTrigger_FindFragmentByClass, "FindFragmentByClass" }, // 2810708294
		{ &Z_Construct_UFunction_UInteractableTargetTrigger_GetGameplayEventData, "GetGameplayEventData" }, // 2807472710
		{ &Z_Construct_UFunction_UInteractableTargetTrigger_GetStatTagStackCountOfFragment, "GetStatTagStackCountOfFragment" }, // 4200487169
		{ &Z_Construct_UFunction_UInteractableTargetTrigger_GetWorldCollectable, "GetWorldCollectable" }, // 1251803076
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableTargetTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractableTargetTrigger_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableTargetTrigger, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractableTargetTrigger_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableTargetTrigger, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractableTargetTrigger_Statics::NewProp_InteractableTargetActor = { "InteractableTargetActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableTargetTrigger, InteractableTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableTargetActor_MetaData), NewProp_InteractableTargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractableTargetTrigger_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableTargetTrigger, Option), Z_Construct_UScriptStruct_FInteractionOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Option_MetaData), NewProp_Option_MetaData) }; // 4256573821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableTargetTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableTargetTrigger_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableTargetTrigger_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableTargetTrigger_Statics::NewProp_InteractableTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableTargetTrigger_Statics::NewProp_Option,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableTargetTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractableTargetTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableTargetTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableTargetTrigger_Statics::ClassParams = {
	&UInteractableTargetTrigger::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractableTargetTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableTargetTrigger_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableTargetTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableTargetTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractableTargetTrigger()
{
	if (!Z_Registration_Info_UClass_UInteractableTargetTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableTargetTrigger.OuterSingleton, Z_Construct_UClass_UInteractableTargetTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractableTargetTrigger.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInteractableTargetTrigger>()
{
	return UInteractableTargetTrigger::StaticClass();
}
UInteractableTargetTrigger::UInteractableTargetTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableTargetTrigger);
UInteractableTargetTrigger::~UInteractableTargetTrigger() {}
// End Class UInteractableTargetTrigger

// Begin Class UAbilityTask_WaitForInteractableTargets_SphereTrace Function WaitForInteractableTargets_SphereTrace
struct Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics
{
	struct AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms
	{
		UGameplayAbility* OwningAbility;
		ULyraGameplayAbility* TargatAbility;
		FInteractionQuery InteractionQuery;
		FCollisionProfileName TraceProfile;
		FGameplayAbilityTargetingLocationInfo StartLocation;
		float InteractionRadius;
		float InteractionScanRate;
		bool bShowDebug;
		UAbilityTask_WaitForInteractableTargets_SphereTrace* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait until we trace new set of interactables.  This task automatically loops. */" },
#endif
		{ "CPP_Default_bShowDebug", "false" },
		{ "CPP_Default_InteractionRadius", "300.000000" },
		{ "CPP_Default_InteractionScanRate", "0.100000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until we trace new set of interactables.  This task automatically loops." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargatAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRate;
	static void NewProp_bShowDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_TargatAbility = { "TargatAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms, TargatAbility), Z_Construct_UClass_ULyraGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_InteractionQuery = { "InteractionQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms, InteractionQuery), Z_Construct_UScriptStruct_FInteractionQuery, METADATA_PARAMS(0, nullptr) }; // 2707672158
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_TraceProfile = { "TraceProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms, TraceProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(0, nullptr) }; // 3816324900
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms, StartLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(0, nullptr) }; // 2666708331
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms, InteractionRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_InteractionScanRate = { "InteractionScanRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms, InteractionScanRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_bShowDebug_SetBit(void* Obj)
{
	((AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms*)Obj)->bShowDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms), &Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_TargatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_InteractionQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_TraceProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_InteractionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_InteractionScanRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_bShowDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace, nullptr, "WaitForInteractableTargets_SphereTrace", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::AbilityTask_WaitForInteractableTargets_SphereTrace_eventWaitForInteractableTargets_SphereTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_WaitForInteractableTargets_SphereTrace::execWaitForInteractableTargets_SphereTrace)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(ULyraGameplayAbility,Z_Param_TargatAbility);
	P_GET_STRUCT(FInteractionQuery,Z_Param_InteractionQuery);
	P_GET_STRUCT(FCollisionProfileName,Z_Param_TraceProfile);
	P_GET_STRUCT(FGameplayAbilityTargetingLocationInfo,Z_Param_StartLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InteractionRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InteractionScanRate);
	P_GET_UBOOL(Z_Param_bShowDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitForInteractableTargets_SphereTrace**)Z_Param__Result=UAbilityTask_WaitForInteractableTargets_SphereTrace::WaitForInteractableTargets_SphereTrace(Z_Param_OwningAbility,Z_Param_TargatAbility,Z_Param_InteractionQuery,Z_Param_TraceProfile,Z_Param_StartLocation,Z_Param_InteractionRadius,Z_Param_InteractionScanRate,Z_Param_bShowDebug);
	P_NATIVE_END;
}
// End Class UAbilityTask_WaitForInteractableTargets_SphereTrace Function WaitForInteractableTargets_SphereTrace

// Begin Class UAbilityTask_WaitForInteractableTargets_SphereTrace
void UAbilityTask_WaitForInteractableTargets_SphereTrace::StaticRegisterNativesUAbilityTask_WaitForInteractableTargets_SphereTrace()
{
	UClass* Class = UAbilityTask_WaitForInteractableTargets_SphereTrace::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitForInteractableTargets_SphereTrace", &UAbilityTask_WaitForInteractableTargets_SphereTrace::execWaitForInteractableTargets_SphereTrace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitForInteractableTargets_SphereTrace);
UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_NoRegister()
{
	return UAbilityTask_WaitForInteractableTargets_SphereTrace::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionQuery_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LyraGameplayAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SphereTrace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LyraGameplayAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SphereTrace_WaitForInteractableTargets_SphereTrace, "WaitForInteractableTargets_SphereTrace" }, // 1545514905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitForInteractableTargets_SphereTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::NewProp_InteractionQuery = { "InteractionQuery", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitForInteractableTargets_SphereTrace, InteractionQuery), Z_Construct_UScriptStruct_FInteractionQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionQuery_MetaData), NewProp_InteractionQuery_MetaData) }; // 2707672158
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitForInteractableTargets_SphereTrace, StartLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) }; // 2666708331
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::NewProp_LyraGameplayAbility = { "LyraGameplayAbility", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitForInteractableTargets_SphereTrace, LyraGameplayAbility), Z_Construct_UClass_ULyraGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LyraGameplayAbility_MetaData), NewProp_LyraGameplayAbility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::NewProp_InteractionQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::NewProp_LyraGameplayAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::ClassParams = {
	&UAbilityTask_WaitForInteractableTargets_SphereTrace::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UAbilityTask_WaitForInteractableTargets_SphereTrace>()
{
	return UAbilityTask_WaitForInteractableTargets_SphereTrace::StaticClass();
}
UAbilityTask_WaitForInteractableTargets_SphereTrace::UAbilityTask_WaitForInteractableTargets_SphereTrace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitForInteractableTargets_SphereTrace);
UAbilityTask_WaitForInteractableTargets_SphereTrace::~UAbilityTask_WaitForInteractableTargets_SphereTrace() {}
// End Class UAbilityTask_WaitForInteractableTargets_SphereTrace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SphereTrace_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMessageItemDefinition::StaticStruct, Z_Construct_UScriptStruct_FMessageItemDefinition_Statics::NewStructOps, TEXT("MessageItemDefinition"), &Z_Registration_Info_UScriptStruct_MessageItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMessageItemDefinition), 1707169519U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableTargetTrigger, UInteractableTargetTrigger::StaticClass, TEXT("UInteractableTargetTrigger"), &Z_Registration_Info_UClass_UInteractableTargetTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableTargetTrigger), 3778796833U) },
		{ Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace, UAbilityTask_WaitForInteractableTargets_SphereTrace::StaticClass, TEXT("UAbilityTask_WaitForInteractableTargets_SphereTrace"), &Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets_SphereTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitForInteractableTargets_SphereTrace), 1075080552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SphereTrace_h_3146785341(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SphereTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SphereTrace_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SphereTrace_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SphereTrace_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
