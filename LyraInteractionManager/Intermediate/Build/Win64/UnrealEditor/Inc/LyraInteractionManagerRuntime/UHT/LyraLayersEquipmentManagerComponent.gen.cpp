// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Equipment/LyraLayersEquipmentManagerComponent.h"
#include "LyraGame/AbilitySystem/LyraAbilitySet.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLayersEquipmentManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UEquipmentLayer();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UEquipmentLayer_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayersEquipmentManagerComponent();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAppliedEquipmentEntry();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentList();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin ScriptStruct FAppliedEquipmentEntry
static_assert(std::is_polymorphic<FAppliedEquipmentEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FAppliedEquipmentEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AppliedEquipmentEntry;
class UScriptStruct* FAppliedEquipmentEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AppliedEquipmentEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AppliedEquipmentEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppliedEquipmentEntry, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("AppliedEquipmentEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AppliedEquipmentEntry.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FAppliedEquipmentEntry>()
{
	return FAppliedEquipmentEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A single piece of applied equipment */" },
#endif
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single piece of applied equipment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentDefinition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The equipment class that got equipped\n" },
#endif
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The equipment class that got equipped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Authority-only list of granted handles\n" },
#endif
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authority-only list of granted handles" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppliedEquipmentEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAppliedEquipmentEntry, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentDefinition_MetaData), NewProp_EquipmentDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAppliedEquipmentEntry, Instance), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::NewProp_GrantedHandles = { "GrantedHandles", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAppliedEquipmentEntry, GrantedHandles), Z_Construct_UScriptStruct_FLyraAbilitySet_GrantedHandles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedHandles_MetaData), NewProp_GrantedHandles_MetaData) }; // 2819985301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::NewProp_GrantedHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"AppliedEquipmentEntry",
	Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::PropPointers),
	sizeof(FAppliedEquipmentEntry),
	alignof(FAppliedEquipmentEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAppliedEquipmentEntry()
{
	if (!Z_Registration_Info_UScriptStruct_AppliedEquipmentEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AppliedEquipmentEntry.InnerSingleton, Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AppliedEquipmentEntry.InnerSingleton;
}
// End ScriptStruct FAppliedEquipmentEntry

// Begin ScriptStruct FEquipmentList
static_assert(std::is_polymorphic<FEquipmentList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FEquipmentList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentList;
class UScriptStruct* FEquipmentList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentList, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("EquipmentList"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentList.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FEquipmentList>()
{
	return FEquipmentList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FEquipmentList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FEquipmentList);
#endif
struct Z_Construct_UScriptStruct_FEquipmentList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of applied equipment */" },
#endif
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of applied equipment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated list of equipment entries\n" },
#endif
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated list of equipment entries" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAppliedEquipmentEntry, METADATA_PARAMS(0, nullptr) }; // 4068009210
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 4068009210
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentList, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"EquipmentList",
	Z_Construct_UScriptStruct_FEquipmentList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentList_Statics::PropPointers),
	sizeof(FEquipmentList),
	alignof(FEquipmentList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentList()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentList.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentList.InnerSingleton;
}
// End ScriptStruct FEquipmentList

// Begin Class UEquipmentLayer Function OnRep_UpdateEquipmentList
struct Z_Construct_UFunction_UEquipmentLayer_OnRep_UpdateEquipmentList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentLayer_OnRep_UpdateEquipmentList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentLayer, nullptr, "OnRep_UpdateEquipmentList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentLayer_OnRep_UpdateEquipmentList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentLayer_OnRep_UpdateEquipmentList_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEquipmentLayer_OnRep_UpdateEquipmentList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentLayer_OnRep_UpdateEquipmentList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentLayer::execOnRep_UpdateEquipmentList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_UpdateEquipmentList();
	P_NATIVE_END;
}
// End Class UEquipmentLayer Function OnRep_UpdateEquipmentList

// Begin Class UEquipmentLayer
void UEquipmentLayer::StaticRegisterNativesUEquipmentLayer()
{
	UClass* Class = UEquipmentLayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_UpdateEquipmentList", &UEquipmentLayer::execOnRep_UpdateEquipmentList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentLayer);
UClass* Z_Construct_UClass_UEquipmentLayer_NoRegister()
{
	return UEquipmentLayer::StaticClass();
}
struct Z_Construct_UClass_UEquipmentLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of inventory items */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/LyraLayersEquipmentManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of inventory items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentLayer_OnRep_UpdateEquipmentList, "OnRep_UpdateEquipmentList" }, // 692835326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentLayer_Statics::NewProp_EquipmentList = { "EquipmentList", "OnRep_UpdateEquipmentList", (EPropertyFlags)0x0040008100000030, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentLayer, EquipmentList), Z_Construct_UScriptStruct_FEquipmentList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentList_MetaData), NewProp_EquipmentList_MetaData) }; // 3547535053
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentLayer_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0040000000080038, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentLayer, OwnerComponent), Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEquipmentLayer_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0040000000000030, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentLayer, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEquipmentLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0040000000000030, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentLayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentLayer_Statics::NewProp_EquipmentList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentLayer_Statics::NewProp_OwnerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentLayer_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentLayer_Statics::NewProp_LayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipmentLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentLayer_Statics::ClassParams = {
	&UEquipmentLayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEquipmentLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentLayer_Statics::PropPointers),
	0,
	0x00A100A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentLayer()
{
	if (!Z_Registration_Info_UClass_UEquipmentLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentLayer.OuterSingleton, Z_Construct_UClass_UEquipmentLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentLayer.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UEquipmentLayer>()
{
	return UEquipmentLayer::StaticClass();
}
void UEquipmentLayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_EquipmentList(TEXT("EquipmentList"));
	static const FName Name_OwnerComponent(TEXT("OwnerComponent"));
	static const FName Name_LayerIndex(TEXT("LayerIndex"));
	static const FName Name_LayerName(TEXT("LayerName"));
	const bool bIsValid = true
		&& Name_EquipmentList == ClassReps[(int32)ENetFields_Private::EquipmentList].Property->GetFName()
		&& Name_OwnerComponent == ClassReps[(int32)ENetFields_Private::OwnerComponent].Property->GetFName()
		&& Name_LayerIndex == ClassReps[(int32)ENetFields_Private::LayerIndex].Property->GetFName()
		&& Name_LayerName == ClassReps[(int32)ENetFields_Private::LayerName].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEquipmentLayer"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentLayer);
UEquipmentLayer::~UEquipmentLayer() {}
// End Class UEquipmentLayer

// Begin Class ULyraLayersEquipmentManagerComponent Function EquipItem
struct Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics
{
	struct LyraLayersEquipmentManagerComponent_eventEquipItem_Parms
	{
		TSubclassOf<ULyraEquipmentDefinition> EquipmentDefinition;
		int32 Layer;
		ULyraEquipmentInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventEquipItem_Parms, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventEquipItem_Parms, Layer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventEquipItem_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::NewProp_EquipmentDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersEquipmentManagerComponent, nullptr, "EquipItem", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::LyraLayersEquipmentManagerComponent_eventEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::LyraLayersEquipmentManagerComponent_eventEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersEquipmentManagerComponent::execEquipItem)
{
	P_GET_OBJECT(UClass,Z_Param_EquipmentDefinition);
	P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->EquipItem(Z_Param_EquipmentDefinition,Z_Param_Layer);
	P_NATIVE_END;
}
// End Class ULyraLayersEquipmentManagerComponent Function EquipItem

// Begin Class ULyraLayersEquipmentManagerComponent Function GetEquipmentInstancesOfType
struct Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics
{
	struct LyraLayersEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms
	{
		TSubclassOf<ULyraEquipmentInstance> InstanceType;
		TArray<ULyraEquipmentInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns all equipped instances of a given type, or an empty array if none are found */" },
#endif
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all equipped instances of a given type, or an empty array if none are found" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersEquipmentManagerComponent, nullptr, "GetEquipmentInstancesOfType", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::LyraLayersEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::LyraLayersEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersEquipmentManagerComponent::execGetEquipmentInstancesOfType)
{
	P_GET_OBJECT(UClass,Z_Param_InstanceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULyraEquipmentInstance*>*)Z_Param__Result=P_THIS->GetEquipmentInstancesOfType(Z_Param_InstanceType);
	P_NATIVE_END;
}
// End Class ULyraLayersEquipmentManagerComponent Function GetEquipmentInstancesOfType

// Begin Class ULyraLayersEquipmentManagerComponent Function GetFirstInstanceOfType
struct Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics
{
	struct LyraLayersEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms
	{
		TSubclassOf<ULyraEquipmentInstance> InstanceType;
		ULyraEquipmentInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the first equipped instance of a given type, or nullptr if none are found */" },
#endif
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the first equipped instance of a given type, or nullptr if none are found" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersEquipmentManagerComponent, nullptr, "GetFirstInstanceOfType", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::LyraLayersEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::LyraLayersEquipmentManagerComponent_eventGetFirstInstanceOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersEquipmentManagerComponent::execGetFirstInstanceOfType)
{
	P_GET_OBJECT(UClass,Z_Param_InstanceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->GetFirstInstanceOfType(Z_Param_InstanceType);
	P_NATIVE_END;
}
// End Class ULyraLayersEquipmentManagerComponent Function GetFirstInstanceOfType

// Begin Class ULyraLayersEquipmentManagerComponent Function UnequipItem
struct Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics
{
	struct LyraLayersEquipmentManagerComponent_eventUnequipItem_Parms
	{
		ULyraEquipmentInstance* ItemInstance;
		int32 Layer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventUnequipItem_Parms, ItemInstance), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayersEquipmentManagerComponent_eventUnequipItem_Parms, Layer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::NewProp_Layer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayersEquipmentManagerComponent, nullptr, "UnequipItem", nullptr, nullptr, Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::LyraLayersEquipmentManagerComponent_eventUnequipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::LyraLayersEquipmentManagerComponent_eventUnequipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayersEquipmentManagerComponent::execUnequipItem)
{
	P_GET_OBJECT(ULyraEquipmentInstance,Z_Param_ItemInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnequipItem(Z_Param_ItemInstance,Z_Param_Layer);
	P_NATIVE_END;
}
// End Class ULyraLayersEquipmentManagerComponent Function UnequipItem

// Begin Class ULyraLayersEquipmentManagerComponent
void ULyraLayersEquipmentManagerComponent::StaticRegisterNativesULyraLayersEquipmentManagerComponent()
{
	UClass* Class = ULyraLayersEquipmentManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipItem", &ULyraLayersEquipmentManagerComponent::execEquipItem },
		{ "GetEquipmentInstancesOfType", &ULyraLayersEquipmentManagerComponent::execGetEquipmentInstancesOfType },
		{ "GetFirstInstanceOfType", &ULyraLayersEquipmentManagerComponent::execGetFirstInstanceOfType },
		{ "UnequipItem", &ULyraLayersEquipmentManagerComponent::execUnequipItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLayersEquipmentManagerComponent);
UClass* Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_NoRegister()
{
	return ULyraLayersEquipmentManagerComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages equipment applied to a pawn\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/LyraLayersEquipmentManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages equipment applied to a pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(Replicated)\n//FEquipmentList EquipmentList;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(Replicated)\nFEquipmentList EquipmentList;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayersEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentLayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_EquipItem, "EquipItem" }, // 3347386290
		{ &Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetEquipmentInstancesOfType, "GetEquipmentInstancesOfType" }, // 510069110
		{ &Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_GetFirstInstanceOfType, "GetFirstInstanceOfType" }, // 4194243023
		{ &Z_Construct_UFunction_ULyraLayersEquipmentManagerComponent_UnequipItem, "UnequipItem" }, // 206496125
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLayersEquipmentManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::NewProp_EquipmentLayers_Inner = { "EquipmentLayers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEquipmentLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::NewProp_EquipmentLayers = { "EquipmentLayers", nullptr, (EPropertyFlags)0x0040008000000038, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayersEquipmentManagerComponent, EquipmentLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentLayers_MetaData), NewProp_EquipmentLayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::NewProp_LayerActive = { "LayerActive", nullptr, (EPropertyFlags)0x0010000000000030, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayersEquipmentManagerComponent, LayerActive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerActive_MetaData), NewProp_LayerActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::NewProp_EquipmentLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::NewProp_EquipmentLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::NewProp_LayerActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::ClassParams = {
	&ULyraLayersEquipmentManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::PropPointers),
	0,
	0x00A100A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraLayersEquipmentManagerComponent()
{
	if (!Z_Registration_Info_UClass_ULyraLayersEquipmentManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLayersEquipmentManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraLayersEquipmentManagerComponent.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraLayersEquipmentManagerComponent>()
{
	return ULyraLayersEquipmentManagerComponent::StaticClass();
}
void ULyraLayersEquipmentManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_EquipmentLayers(TEXT("EquipmentLayers"));
	static const FName Name_LayerActive(TEXT("LayerActive"));
	const bool bIsValid = true
		&& Name_EquipmentLayers == ClassReps[(int32)ENetFields_Private::EquipmentLayers].Property->GetFName()
		&& Name_LayerActive == ClassReps[(int32)ENetFields_Private::LayerActive].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraLayersEquipmentManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLayersEquipmentManagerComponent);
ULyraLayersEquipmentManagerComponent::~ULyraLayersEquipmentManagerComponent() {}
// End Class ULyraLayersEquipmentManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAppliedEquipmentEntry::StaticStruct, Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics::NewStructOps, TEXT("AppliedEquipmentEntry"), &Z_Registration_Info_UScriptStruct_AppliedEquipmentEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppliedEquipmentEntry), 4068009210U) },
		{ FEquipmentList::StaticStruct, Z_Construct_UScriptStruct_FEquipmentList_Statics::NewStructOps, TEXT("EquipmentList"), &Z_Registration_Info_UScriptStruct_EquipmentList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentList), 3547535053U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentLayer, UEquipmentLayer::StaticClass, TEXT("UEquipmentLayer"), &Z_Registration_Info_UClass_UEquipmentLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentLayer), 300635482U) },
		{ Z_Construct_UClass_ULyraLayersEquipmentManagerComponent, ULyraLayersEquipmentManagerComponent::StaticClass, TEXT("ULyraLayersEquipmentManagerComponent"), &Z_Registration_Info_UClass_ULyraLayersEquipmentManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLayersEquipmentManagerComponent), 3055937098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_2651515600(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
