// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_TypesActionsWhenSelectingItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UActionsWhenSelectingItem();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UActionsWhenSelectingItem_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin ScriptStruct FTypesActionsWhenSelectingItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypesActionsWhenSelectingItem;
class UScriptStruct* FTypesActionsWhenSelectingItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypesActionsWhenSelectingItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypesActionsWhenSelectingItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("TypesActionsWhenSelectingItem"));
	}
	return Z_Registration_Info_UScriptStruct_TypesActionsWhenSelectingItem.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FTypesActionsWhenSelectingItem>()
{
	return FTypesActionsWhenSelectingItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagForActivation_MetaData[] = {
		{ "Category", "TypesActionsWhenSelectingItem" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindAbility_MetaData[] = {
		{ "Category", "TypesActionsWhenSelectingItem" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "Category", "TypesActionsWhenSelectingItem" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObject_MetaData[] = {
		{ "Category", "TypesActionsWhenSelectingItem" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagForActivation;
	static void NewProp_bFindAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindAbility;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypesActionsWhenSelectingItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_AbilityTagForActivation = { "AbilityTagForActivation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypesActionsWhenSelectingItem, AbilityTagForActivation), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagForActivation_MetaData), NewProp_AbilityTagForActivation_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_bFindAbility_SetBit(void* Obj)
{
	((FTypesActionsWhenSelectingItem*)Obj)->bFindAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_bFindAbility = { "bFindAbility", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypesActionsWhenSelectingItem), &Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_bFindAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindAbility_MetaData), NewProp_bFindAbility_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypesActionsWhenSelectingItem, ButtonText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypesActionsWhenSelectingItem, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalObject_MetaData), NewProp_OptionalObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_AbilityTagForActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_bFindAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewProp_OptionalObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	nullptr,
	&NewStructOps,
	"TypesActionsWhenSelectingItem",
	Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::PropPointers),
	sizeof(FTypesActionsWhenSelectingItem),
	alignof(FTypesActionsWhenSelectingItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem()
{
	if (!Z_Registration_Info_UScriptStruct_TypesActionsWhenSelectingItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypesActionsWhenSelectingItem.InnerSingleton, Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypesActionsWhenSelectingItem.InnerSingleton;
}
// End ScriptStruct FTypesActionsWhenSelectingItem

// Begin Class UActionsWhenSelectingItem
void UActionsWhenSelectingItem::StaticRegisterNativesUActionsWhenSelectingItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionsWhenSelectingItem);
UClass* Z_Construct_UClass_UActionsWhenSelectingItem_NoRegister()
{
	return UActionsWhenSelectingItem::StaticClass();
}
struct Z_Construct_UClass_UActionsWhenSelectingItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypesActionsWhenSelectingItem_MetaData[] = {
		{ "Category", "Type Action in Panel" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypesActionsWhenSelectingItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionsWhenSelectingItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionsWhenSelectingItem_Statics::NewProp_TypesActionsWhenSelectingItem = { "TypesActionsWhenSelectingItem", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionsWhenSelectingItem, TypesActionsWhenSelectingItem), Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypesActionsWhenSelectingItem_MetaData), NewProp_TypesActionsWhenSelectingItem_MetaData) }; // 3692156399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionsWhenSelectingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionsWhenSelectingItem_Statics::NewProp_TypesActionsWhenSelectingItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionsWhenSelectingItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActionsWhenSelectingItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionsWhenSelectingItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionsWhenSelectingItem_Statics::ClassParams = {
	&UActionsWhenSelectingItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActionsWhenSelectingItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActionsWhenSelectingItem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionsWhenSelectingItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionsWhenSelectingItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionsWhenSelectingItem()
{
	if (!Z_Registration_Info_UClass_UActionsWhenSelectingItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionsWhenSelectingItem.OuterSingleton, Z_Construct_UClass_UActionsWhenSelectingItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionsWhenSelectingItem.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UActionsWhenSelectingItem>()
{
	return UActionsWhenSelectingItem::StaticClass();
}
UActionsWhenSelectingItem::UActionsWhenSelectingItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionsWhenSelectingItem);
UActionsWhenSelectingItem::~UActionsWhenSelectingItem() {}
// End Class UActionsWhenSelectingItem

// Begin Class UInventoryFragment_TypesActionsWhenSelectingItem Function GetTypesActionsWhenSelectingItem
struct Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics
{
	struct InventoryFragment_TypesActionsWhenSelectingItem_eventGetTypesActionsWhenSelectingItem_Parms
	{
		UObject* OwnerObject;
		UObject* OptionalObject;
		TArray<UActionsWhenSelectingItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFragment_TypesActionsWhenSelectingItem_eventGetTypesActionsWhenSelectingItem_Parms, OwnerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFragment_TypesActionsWhenSelectingItem_eventGetTypesActionsWhenSelectingItem_Parms, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActionsWhenSelectingItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFragment_TypesActionsWhenSelectingItem_eventGetTypesActionsWhenSelectingItem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::NewProp_OwnerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::NewProp_OptionalObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem, nullptr, "GetTypesActionsWhenSelectingItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::InventoryFragment_TypesActionsWhenSelectingItem_eventGetTypesActionsWhenSelectingItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::InventoryFragment_TypesActionsWhenSelectingItem_eventGetTypesActionsWhenSelectingItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFragment_TypesActionsWhenSelectingItem::execGetTypesActionsWhenSelectingItem)
{
	P_GET_OBJECT(UObject,Z_Param_OwnerObject);
	P_GET_OBJECT(UObject,Z_Param_OptionalObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UActionsWhenSelectingItem*>*)Z_Param__Result=P_THIS->GetTypesActionsWhenSelectingItem(Z_Param_OwnerObject,Z_Param_OptionalObject);
	P_NATIVE_END;
}
// End Class UInventoryFragment_TypesActionsWhenSelectingItem Function GetTypesActionsWhenSelectingItem

// Begin Class UInventoryFragment_TypesActionsWhenSelectingItem
void UInventoryFragment_TypesActionsWhenSelectingItem::StaticRegisterNativesUInventoryFragment_TypesActionsWhenSelectingItem()
{
	UClass* Class = UInventoryFragment_TypesActionsWhenSelectingItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTypesActionsWhenSelectingItem", &UInventoryFragment_TypesActionsWhenSelectingItem::execGetTypesActionsWhenSelectingItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_TypesActionsWhenSelectingItem);
UClass* Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_NoRegister()
{
	return UInventoryFragment_TypesActionsWhenSelectingItem::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypesActionsWhenSelectingItem_MetaData[] = {
		{ "Category", "Type Action in Panel" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypesActionsWhenSelectingItem_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypesActionsWhenSelectingItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryFragment_TypesActionsWhenSelectingItem_GetTypesActionsWhenSelectingItem, "GetTypesActionsWhenSelectingItem" }, // 829812545
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_TypesActionsWhenSelectingItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::NewProp_TypesActionsWhenSelectingItem_Inner = { "TypesActionsWhenSelectingItem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem, METADATA_PARAMS(0, nullptr) }; // 3692156399
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::NewProp_TypesActionsWhenSelectingItem = { "TypesActionsWhenSelectingItem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_TypesActionsWhenSelectingItem, TypesActionsWhenSelectingItem), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypesActionsWhenSelectingItem_MetaData), NewProp_TypesActionsWhenSelectingItem_MetaData) }; // 3692156399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::NewProp_TypesActionsWhenSelectingItem_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::NewProp_TypesActionsWhenSelectingItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::ClassParams = {
	&UInventoryFragment_TypesActionsWhenSelectingItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_TypesActionsWhenSelectingItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_TypesActionsWhenSelectingItem.OuterSingleton, Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_TypesActionsWhenSelectingItem.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInventoryFragment_TypesActionsWhenSelectingItem>()
{
	return UInventoryFragment_TypesActionsWhenSelectingItem::StaticClass();
}
UInventoryFragment_TypesActionsWhenSelectingItem::UInventoryFragment_TypesActionsWhenSelectingItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_TypesActionsWhenSelectingItem);
UInventoryFragment_TypesActionsWhenSelectingItem::~UInventoryFragment_TypesActionsWhenSelectingItem() {}
// End Class UInventoryFragment_TypesActionsWhenSelectingItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_TypesActionsWhenSelectingItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypesActionsWhenSelectingItem::StaticStruct, Z_Construct_UScriptStruct_FTypesActionsWhenSelectingItem_Statics::NewStructOps, TEXT("TypesActionsWhenSelectingItem"), &Z_Registration_Info_UScriptStruct_TypesActionsWhenSelectingItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypesActionsWhenSelectingItem), 3692156399U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionsWhenSelectingItem, UActionsWhenSelectingItem::StaticClass, TEXT("UActionsWhenSelectingItem"), &Z_Registration_Info_UClass_UActionsWhenSelectingItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionsWhenSelectingItem), 797665063U) },
		{ Z_Construct_UClass_UInventoryFragment_TypesActionsWhenSelectingItem, UInventoryFragment_TypesActionsWhenSelectingItem::StaticClass, TEXT("UInventoryFragment_TypesActionsWhenSelectingItem"), &Z_Registration_Info_UClass_UInventoryFragment_TypesActionsWhenSelectingItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_TypesActionsWhenSelectingItem), 699398931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_TypesActionsWhenSelectingItem_h_2578802818(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_TypesActionsWhenSelectingItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_TypesActionsWhenSelectingItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_TypesActionsWhenSelectingItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_TypesActionsWhenSelectingItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
