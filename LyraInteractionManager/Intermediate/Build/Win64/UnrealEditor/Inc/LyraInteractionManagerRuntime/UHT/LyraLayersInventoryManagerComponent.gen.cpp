// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/LyraLayersInventoryManagerComponent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLayersInventoryManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UPickupable_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryLayer();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryLayer_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayersInventoryManagerComponent();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayersInventoryManagerComponent_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntry();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryList();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin ScriptStruct FInventoryEntry
static_assert(std::is_polymorphic<FInventoryEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FInventoryEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryEntry;
class UScriptStruct* FInventoryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryEntry, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("InventoryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryEntry.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FInventoryEntry>()
{
	return FInventoryEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastObservedCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastObservedCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntry, Instance), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntry, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_LastObservedCount = { "LastObservedCount", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryEntry, LastObservedCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastObservedCount_MetaData), NewProp_LastObservedCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewProp_LastObservedCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"InventoryEntry",
	Z_Construct_UScriptStruct_FInventoryEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntry_Statics::PropPointers),
	sizeof(FInventoryEntry),
	alignof(FInventoryEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryEntry()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryEntry.InnerSingleton, Z_Construct_UScriptStruct_FInventoryEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryEntry.InnerSingleton;
}
// End ScriptStruct FInventoryEntry

// Begin ScriptStruct FInventoryList
static_assert(std::is_polymorphic<FInventoryList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FInventoryList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryList;
class UScriptStruct* FInventoryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryList, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("InventoryList"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FInventoryList>()
{
	return FInventoryList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FInventoryList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FInventoryList);
#endif
struct Z_Construct_UScriptStruct_FInventoryList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of inventory items */" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of inventory items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSlots_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated list of items\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated list of items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_MaxSlots = { "MaxSlots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryList, MaxSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSlots_MetaData), NewProp_MaxSlots_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryEntry, METADATA_PARAMS(0, nullptr) }; // 3588273564
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3588273564
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryList, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_MaxSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"InventoryList",
	Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers),
	sizeof(FInventoryList),
	alignof(FInventoryList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryList()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton, Z_Construct_UScriptStruct_FInventoryList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton;
}
// End ScriptStruct FInventoryList

// Begin Class UInventoryLayer Function GetLayerIndex
struct Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics
{
	struct InventoryLayer_eventGetLayerIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryLayer" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryLayer_eventGetLayerIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryLayer, nullptr, "GetLayerIndex", nullptr, nullptr, Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::InventoryLayer_eventGetLayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::InventoryLayer_eventGetLayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryLayer_GetLayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryLayer_GetLayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryLayer::execGetLayerIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLayerIndex();
	P_NATIVE_END;
}
// End Class UInventoryLayer Function GetLayerIndex

// Begin Class UInventoryLayer Function GetLayerName
struct Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics
{
	struct InventoryLayer_eventGetLayerName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryLayer" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryLayer_eventGetLayerName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryLayer, nullptr, "GetLayerName", nullptr, nullptr, Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::InventoryLayer_eventGetLayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::InventoryLayer_eventGetLayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryLayer_GetLayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryLayer_GetLayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryLayer::execGetLayerName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetLayerName();
	P_NATIVE_END;
}
// End Class UInventoryLayer Function GetLayerName

// Begin Class UInventoryLayer Function GetMaxSlots
struct Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics
{
	struct InventoryLayer_eventGetMaxSlots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryLayer" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryLayer_eventGetMaxSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryLayer, nullptr, "GetMaxSlots", nullptr, nullptr, Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::InventoryLayer_eventGetMaxSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::InventoryLayer_eventGetMaxSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryLayer_GetMaxSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryLayer_GetMaxSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryLayer::execGetMaxSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxSlots();
	P_NATIVE_END;
}
// End Class UInventoryLayer Function GetMaxSlots

// Begin Class UInventoryLayer Function OnRep_UpdateInventoryList
struct Z_Construct_UFunction_UInventoryLayer_OnRep_UpdateInventoryList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryLayer_OnRep_UpdateInventoryList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryLayer, nullptr, "OnRep_UpdateInventoryList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_OnRep_UpdateInventoryList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryLayer_OnRep_UpdateInventoryList_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryLayer_OnRep_UpdateInventoryList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryLayer_OnRep_UpdateInventoryList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryLayer::execOnRep_UpdateInventoryList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_UpdateInventoryList();
	P_NATIVE_END;
}
// End Class UInventoryLayer Function OnRep_UpdateInventoryList

// Begin Class UInventoryLayer Function SetMaxSlots
struct Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics
{
	struct InventoryLayer_eventSetMaxSlots_Parms
	{
		int32 MaxSlots;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::NewProp_MaxSlots = { "MaxSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryLayer_eventSetMaxSlots_Parms, MaxSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::NewProp_MaxSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryLayer, nullptr, "SetMaxSlots", nullptr, nullptr, Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::InventoryLayer_eventSetMaxSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::InventoryLayer_eventSetMaxSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryLayer_SetMaxSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryLayer_SetMaxSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryLayer::execSetMaxSlots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxSlots(Z_Param_MaxSlots);
	P_NATIVE_END;
}
// End Class UInventoryLayer Function SetMaxSlots

// Begin Class UInventoryLayer
void UInventoryLayer::StaticRegisterNativesUInventoryLayer()
{
	UClass* Class = UInventoryLayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLayerIndex", &UInventoryLayer::execGetLayerIndex },
		{ "GetLayerName", &UInventoryLayer::execGetLayerName },
		{ "GetMaxSlots", &UInventoryLayer::execGetMaxSlots },
		{ "OnRep_UpdateInventoryList", &UInventoryLayer::execOnRep_UpdateInventoryList },
		{ "SetMaxSlots", &UInventoryLayer::execSetMaxSlots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryLayer);
UClass* Z_Construct_UClass_UInventoryLayer_NoRegister()
{
	return UInventoryLayer::StaticClass();
}
struct Z_Construct_UClass_UInventoryLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of inventory items */" },
#endif
		{ "IncludePath", "Inventory/LyraLayersInventoryManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of inventory items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryLayer_GetLayerIndex, "GetLayerIndex" }, // 2189103428
		{ &Z_Construct_UFunction_UInventoryLayer_GetLayerName, "GetLayerName" }, // 1513360125
		{ &Z_Construct_UFunction_UInventoryLayer_GetMaxSlots, "GetMaxSlots" }, // 456482812
		{ &Z_Construct_UFunction_UInventoryLayer_OnRep_UpdateInventoryList, "OnRep_UpdateInventoryList" }, // 2783851355
		{ &Z_Construct_UFunction_UInventoryLayer_SetMaxSlots, "SetMaxSlots" }, // 31482449
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryLayer_Statics::NewProp_InventoryList = { "InventoryList", "OnRep_UpdateInventoryList", (EPropertyFlags)0x0040008100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryLayer, InventoryList), Z_Construct_UScriptStruct_FInventoryList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryList_MetaData), NewProp_InventoryList_MetaData) }; // 2245415988
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryLayer_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0040000000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryLayer, OwnerComponent), Z_Construct_UClass_ULyraLayersInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryLayer_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryLayer, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInventoryLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryLayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryLayer_Statics::NewProp_InventoryList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryLayer_Statics::NewProp_OwnerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryLayer_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryLayer_Statics::NewProp_LayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryLayer_Statics::ClassParams = {
	&UInventoryLayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryLayer_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryLayer()
{
	if (!Z_Registration_Info_UClass_UInventoryLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryLayer.OuterSingleton, Z_Construct_UClass_UInventoryLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryLayer.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInventoryLayer>()
{
	return UInventoryLayer::StaticClass();
}
void UInventoryLayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_InventoryList(TEXT("InventoryList"));
	static const FName Name_OwnerComponent(TEXT("OwnerComponent"));
	static const FName Name_LayerIndex(TEXT("LayerIndex"));
	static const FName Name_LayerName(TEXT("LayerName"));
	const bool bIsValid = true
		&& Name_InventoryList == ClassReps[(int32)ENetFields_Private::InventoryList].Property->GetFName()
		&& Name_OwnerComponent == ClassReps[(int32)ENetFields_Private::OwnerComponent].Property->GetFName()
		&& Name_LayerIndex == ClassReps[(int32)ENetFields_Private::LayerIndex].Property->GetFName()
		&& Name_LayerName == ClassReps[(int32)ENetFields_Private::LayerName].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryLayer"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryLayer);
UInventoryLayer::~UInventoryLayer() {}
// End Class UInventoryLayer

// Begin Class ULyraLayersInventoryManagerComponent Function AddItemDefinition
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics
{
	struct LyraLayersInventoryManagerComponent_eventAddItemDefinition_Parms
	{
		TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef;
		int32 StackCount;
		ULyraLayerInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_StackCount", "1" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventAddItemDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventAddItemDefinition_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventAddItemDefinition_Parms, ReturnValue), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "AddItemDefinition", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::LyraLayersInventoryManagerComponent_eventAddItemDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::LyraLayersInventoryManagerComponent_eventAddItemDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execAddItemDefinition)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDef);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraLayerInventoryItemInstance**)Z_Param__Result=P_THIS->AddItemDefinition(Z_Param_ItemDef,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function AddItemDefinition

// Begin Class ULyraLayersInventoryManagerComponent Function AddItemInstance
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics
{
	struct LyraLayersInventoryManagerComponent_eventAddItemInstance_Parms
	{
		ULyraLayerInventoryItemInstance* ItemInstance;
		int32 StackCount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventAddItemInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventAddItemInstance_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraLayersInventoryManagerComponent_eventAddItemInstance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraLayersInventoryManagerComponent_eventAddItemInstance_Parms), &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "AddItemInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::LyraLayersInventoryManagerComponent_eventAddItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::LyraLayersInventoryManagerComponent_eventAddItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execAddItemInstance)
{
	P_GET_OBJECT(ULyraLayerInventoryItemInstance,Z_Param_ItemInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItemInstance(Z_Param_ItemInstance,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function AddItemInstance

// Begin Class ULyraLayersInventoryManagerComponent Function AddPickupToLayerInventory
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics
{
	struct LyraLayersInventoryManagerComponent_eventAddPickupToLayerInventory_Parms
	{
		TScriptInterface<IPickupable> Pickup;
		bool bOperationSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
		{ "WorldContext", "Ability" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Pickup;
	static void NewProp_bOperationSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperationSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventAddPickupToLayerInventory_Parms, Pickup), Z_Construct_UClass_UPickupable_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::NewProp_bOperationSuccessful_SetBit(void* Obj)
{
	((LyraLayersInventoryManagerComponent_eventAddPickupToLayerInventory_Parms*)Obj)->bOperationSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::NewProp_bOperationSuccessful = { "bOperationSuccessful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraLayersInventoryManagerComponent_eventAddPickupToLayerInventory_Parms), &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::NewProp_bOperationSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::NewProp_Pickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::NewProp_bOperationSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "AddPickupToLayerInventory", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::LyraLayersInventoryManagerComponent_eventAddPickupToLayerInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::LyraLayersInventoryManagerComponent_eventAddPickupToLayerInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execAddPickupToLayerInventory)
{
	P_GET_TINTERFACE(IPickupable,Z_Param_Pickup);
	P_GET_UBOOL_REF(Z_Param_Out_bOperationSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPickupToLayerInventory(Z_Param_Pickup,Z_Param_Out_bOperationSuccessful);
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function AddPickupToLayerInventory

// Begin Class ULyraLayersInventoryManagerComponent Function CanAddItemDefinition
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics
{
	struct LyraLayersInventoryManagerComponent_eventCanAddItemDefinition_Parms
	{
		TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef;
		int32 StackCount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_StackCount", "1" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventCanAddItemDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventCanAddItemDefinition_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraLayersInventoryManagerComponent_eventCanAddItemDefinition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraLayersInventoryManagerComponent_eventCanAddItemDefinition_Parms), &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "CanAddItemDefinition", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::LyraLayersInventoryManagerComponent_eventCanAddItemDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::LyraLayersInventoryManagerComponent_eventCanAddItemDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execCanAddItemDefinition)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDef);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddItemDefinition(Z_Param_ItemDef,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function CanAddItemDefinition

// Begin Class ULyraLayersInventoryManagerComponent Function FindFirstItemStackByDefinition
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics
{
	struct LyraLayersInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms
	{
		TSubclassOf<ULyraLayerInventoryItemDefinition> ItemDef;
		int32 LayerIndex;
		ULyraLayerInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms, ReturnValue), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "FindFirstItemStackByDefinition", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::LyraLayersInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::LyraLayersInventoryManagerComponent_eventFindFirstItemStackByDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execFindFirstItemStackByDefinition)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDef);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraLayerInventoryItemInstance**)Z_Param__Result=P_THIS->FindFirstItemStackByDefinition(Z_Param_ItemDef,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function FindFirstItemStackByDefinition

// Begin Class ULyraLayersInventoryManagerComponent Function GetAllInventoryLayer
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics
{
	struct LyraLayersInventoryManagerComponent_eventGetAllInventoryLayer_Parms
	{
		TArray<UInventoryLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInventoryLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventGetAllInventoryLayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "GetAllInventoryLayer", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::LyraLayersInventoryManagerComponent_eventGetAllInventoryLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::LyraLayersInventoryManagerComponent_eventGetAllInventoryLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execGetAllInventoryLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInventoryLayer*>*)Z_Param__Result=P_THIS->GetAllInventoryLayer();
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function GetAllInventoryLayer

// Begin Class ULyraLayersInventoryManagerComponent Function GetAllItems
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics
{
	struct LyraLayersInventoryManagerComponent_eventGetAllItems_Parms
	{
		TArray<ULyraLayerInventoryItemInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "GetAllItems", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::LyraLayersInventoryManagerComponent_eventGetAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::LyraLayersInventoryManagerComponent_eventGetAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execGetAllItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULyraLayerInventoryItemInstance*>*)Z_Param__Result=P_THIS->GetAllItems();
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function GetAllItems

// Begin Class ULyraLayersInventoryManagerComponent Function GetAllItemsByActiveLayer
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics
{
	struct LyraLayersInventoryManagerComponent_eventGetAllItemsByActiveLayer_Parms
	{
		TArray<ULyraLayerInventoryItemInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventGetAllItemsByActiveLayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "GetAllItemsByActiveLayer", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::LyraLayersInventoryManagerComponent_eventGetAllItemsByActiveLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::LyraLayersInventoryManagerComponent_eventGetAllItemsByActiveLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execGetAllItemsByActiveLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULyraLayerInventoryItemInstance*>*)Z_Param__Result=P_THIS->GetAllItemsByActiveLayer();
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function GetAllItemsByActiveLayer

// Begin Class ULyraLayersInventoryManagerComponent Function GetAllItemsByLayer
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics
{
	struct LyraLayersInventoryManagerComponent_eventGetAllItemsByLayer_Parms
	{
		int32 LayerIndex;
		TArray<ULyraLayerInventoryItemInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventGetAllItemsByLayer_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventGetAllItemsByLayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "GetAllItemsByLayer", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::LyraLayersInventoryManagerComponent_eventGetAllItemsByLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::LyraLayersInventoryManagerComponent_eventGetAllItemsByLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execGetAllItemsByLayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULyraLayerInventoryItemInstance*>*)Z_Param__Result=P_THIS->GetAllItemsByLayer(Z_Param_LayerIndex);
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function GetAllItemsByLayer

// Begin Class ULyraLayersInventoryManagerComponent Function GetInventoryLayerActive
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics
{
	struct LyraLayersInventoryManagerComponent_eventGetInventoryLayerActive_Parms
	{
		UInventoryLayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventGetInventoryLayerActive_Parms, ReturnValue), Z_Construct_UClass_UInventoryLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "GetInventoryLayerActive", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::LyraLayersInventoryManagerComponent_eventGetInventoryLayerActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::LyraLayersInventoryManagerComponent_eventGetInventoryLayerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execGetInventoryLayerActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInventoryLayer**)Z_Param__Result=P_THIS->GetInventoryLayerActive();
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function GetInventoryLayerActive

// Begin Class ULyraLayersInventoryManagerComponent Function RemoveItemInstance
struct Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics
{
	struct LyraLayersInventoryManagerComponent_eventRemoveItemInstance_Parms
	{
		ULyraLayerInventoryItemInstance* ItemInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersInventoryManagerComponent_eventRemoveItemInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersInventoryManagerComponent, nullptr, "RemoveItemInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::LyraLayersInventoryManagerComponent_eventRemoveItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::LyraLayersInventoryManagerComponent_eventRemoveItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersInventoryManagerComponent::execRemoveItemInstance)
{
	P_GET_OBJECT(ULyraLayerInventoryItemInstance,Z_Param_ItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItemInstance(Z_Param_ItemInstance);
	P_NATIVE_END;
}
// End Class ULyraLayersInventoryManagerComponent Function RemoveItemInstance

// Begin Class ULyraLayersInventoryManagerComponent
void ULyraLayersInventoryManagerComponent::StaticRegisterNativesULyraLayersInventoryManagerComponent()
{
	UClass* Class = ULyraLayersInventoryManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemDefinition", &ULyraLayersInventoryManagerComponent::execAddItemDefinition },
		{ "AddItemInstance", &ULyraLayersInventoryManagerComponent::execAddItemInstance },
		{ "AddPickupToLayerInventory", &ULyraLayersInventoryManagerComponent::execAddPickupToLayerInventory },
		{ "CanAddItemDefinition", &ULyraLayersInventoryManagerComponent::execCanAddItemDefinition },
		{ "FindFirstItemStackByDefinition", &ULyraLayersInventoryManagerComponent::execFindFirstItemStackByDefinition },
		{ "GetAllInventoryLayer", &ULyraLayersInventoryManagerComponent::execGetAllInventoryLayer },
		{ "GetAllItems", &ULyraLayersInventoryManagerComponent::execGetAllItems },
		{ "GetAllItemsByActiveLayer", &ULyraLayersInventoryManagerComponent::execGetAllItemsByActiveLayer },
		{ "GetAllItemsByLayer", &ULyraLayersInventoryManagerComponent::execGetAllItemsByLayer },
		{ "GetInventoryLayerActive", &ULyraLayersInventoryManagerComponent::execGetInventoryLayerActive },
		{ "RemoveItemInstance", &ULyraLayersInventoryManagerComponent::execRemoveItemInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLayersInventoryManagerComponent);
UClass* Z_Construct_UClass_ULyraLayersInventoryManagerComponent_NoRegister()
{
	return ULyraLayersInventoryManagerComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/LyraLayersInventoryManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryLayers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LyraLayersInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryLayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemDefinition, "AddItemDefinition" }, // 3372963153
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddItemInstance, "AddItemInstance" }, // 1011677164
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_AddPickupToLayerInventory, "AddPickupToLayerInventory" }, // 2774076763
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_CanAddItemDefinition, "CanAddItemDefinition" }, // 3359682318
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_FindFirstItemStackByDefinition, "FindFirstItemStackByDefinition" }, // 3199422971
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllInventoryLayer, "GetAllInventoryLayer" }, // 469378402
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItems, "GetAllItems" }, // 2676225151
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByActiveLayer, "GetAllItemsByActiveLayer" }, // 587138200
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetAllItemsByLayer, "GetAllItemsByLayer" }, // 2065468252
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_GetInventoryLayerActive, "GetInventoryLayerActive" }, // 3265254403
		{ &Z_Construct_UFunction_ULyraLayersInventoryManagerComponent_RemoveItemInstance, "RemoveItemInstance" }, // 1060957152
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLayersInventoryManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::NewProp_InventoryLayers_Inner = { "InventoryLayers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInventoryLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::NewProp_InventoryLayers = { "InventoryLayers", nullptr, (EPropertyFlags)0x0040008000000028, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayersInventoryManagerComponent, InventoryLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryLayers_MetaData), NewProp_InventoryLayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::NewProp_LayerActive = { "LayerActive", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayersInventoryManagerComponent, LayerActive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerActive_MetaData), NewProp_LayerActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::NewProp_InventoryLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::NewProp_InventoryLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::NewProp_LayerActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::ClassParams = {
	&ULyraLayersInventoryManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraLayersInventoryManagerComponent()
{
	if (!Z_Registration_Info_UClass_ULyraLayersInventoryManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLayersInventoryManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraLayersInventoryManagerComponent.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraLayersInventoryManagerComponent>()
{
	return ULyraLayersInventoryManagerComponent::StaticClass();
}
void ULyraLayersInventoryManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_InventoryLayers(TEXT("InventoryLayers"));
	static const FName Name_LayerActive(TEXT("LayerActive"));
	const bool bIsValid = true
		&& Name_InventoryLayers == ClassReps[(int32)ENetFields_Private::InventoryLayers].Property->GetFName()
		&& Name_LayerActive == ClassReps[(int32)ENetFields_Private::LayerActive].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraLayersInventoryManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLayersInventoryManagerComponent);
ULyraLayersInventoryManagerComponent::~ULyraLayersInventoryManagerComponent() {}
// End Class ULyraLayersInventoryManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryEntry::StaticStruct, Z_Construct_UScriptStruct_FInventoryEntry_Statics::NewStructOps, TEXT("InventoryEntry"), &Z_Registration_Info_UScriptStruct_InventoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryEntry), 3588273564U) },
		{ FInventoryList::StaticStruct, Z_Construct_UScriptStruct_FInventoryList_Statics::NewStructOps, TEXT("InventoryList"), &Z_Registration_Info_UScriptStruct_InventoryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryList), 2245415988U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryLayer, UInventoryLayer::StaticClass, TEXT("UInventoryLayer"), &Z_Registration_Info_UClass_UInventoryLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryLayer), 2570988298U) },
		{ Z_Construct_UClass_ULyraLayersInventoryManagerComponent, ULyraLayersInventoryManagerComponent::StaticClass, TEXT("ULyraLayersInventoryManagerComponent"), &Z_Registration_Info_UClass_ULyraLayersInventoryManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLayersInventoryManagerComponent), 1346228401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_1606799315(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
