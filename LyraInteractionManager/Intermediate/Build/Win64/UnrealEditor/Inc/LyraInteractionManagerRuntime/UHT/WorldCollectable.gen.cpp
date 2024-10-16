// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Interaction/WorldCollectable.h"
#include "LyraGame/Interaction/InteractionOption.h"
#include "LyraGame/Inventory/IPickupable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldCollectable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
LYRAGAME_API UClass* Z_Construct_UClass_UInteractableTarget_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UPickupable_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOption();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryPickup();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_AWorldCollectable();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_AWorldCollectable_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class AWorldCollectable Function AddInstanceStaticInventory
struct Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics
{
	struct WorldCollectable_eventAddInstanceStaticInventory_Parms
	{
		ULyraLayerInventoryItemInstance* ItemInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/WorldCollectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldCollectable_eventAddInstanceStaticInventory_Parms, ItemInstance), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldCollectable, nullptr, "AddInstanceStaticInventory", nullptr, nullptr, Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::WorldCollectable_eventAddInstanceStaticInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::WorldCollectable_eventAddInstanceStaticInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldCollectable::execAddInstanceStaticInventory)
{
	P_GET_OBJECT(ULyraLayerInventoryItemInstance,Z_Param_ItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInstanceStaticInventory(Z_Param_ItemInstance);
	P_NATIVE_END;
}
// End Class AWorldCollectable Function AddInstanceStaticInventory

// Begin Class AWorldCollectable Function GetInventoryItemDefinition
struct Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics
{
	struct WorldCollectable_eventGetInventoryItemDefinition_Parms
	{
		int32 Index;
		TSubclassOf<ULyraLayerInventoryItemDefinition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/WorldCollectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldCollectable_eventGetInventoryItemDefinition_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldCollectable_eventGetInventoryItemDefinition_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraLayerInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldCollectable, nullptr, "GetInventoryItemDefinition", nullptr, nullptr, Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::WorldCollectable_eventGetInventoryItemDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::WorldCollectable_eventGetInventoryItemDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldCollectable::execGetInventoryItemDefinition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<ULyraLayerInventoryItemDefinition>*)Z_Param__Result=P_THIS->GetInventoryItemDefinition(Z_Param_Index);
	P_NATIVE_END;
}
// End Class AWorldCollectable Function GetInventoryItemDefinition

// Begin Class AWorldCollectable Function GetInventoryItemInstance
struct Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics
{
	struct WorldCollectable_eventGetInventoryItemInstance_Parms
	{
		int32 Index;
		ULyraLayerInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/WorldCollectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldCollectable_eventGetInventoryItemInstance_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldCollectable_eventGetInventoryItemInstance_Parms, ReturnValue), Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldCollectable, nullptr, "GetInventoryItemInstance", nullptr, nullptr, Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::WorldCollectable_eventGetInventoryItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::WorldCollectable_eventGetInventoryItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldCollectable::execGetInventoryItemInstance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraLayerInventoryItemInstance**)Z_Param__Result=P_THIS->GetInventoryItemInstance(Z_Param_Index);
	P_NATIVE_END;
}
// End Class AWorldCollectable Function GetInventoryItemInstance

// Begin Class AWorldCollectable
void AWorldCollectable::StaticRegisterNativesAWorldCollectable()
{
	UClass* Class = AWorldCollectable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInstanceStaticInventory", &AWorldCollectable::execAddInstanceStaticInventory },
		{ "GetInventoryItemDefinition", &AWorldCollectable::execGetInventoryItemDefinition },
		{ "GetInventoryItemInstance", &AWorldCollectable::execGetInventoryItemInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldCollectable);
UClass* Z_Construct_UClass_AWorldCollectable_NoRegister()
{
	return AWorldCollectable::StaticClass();
}
struct Z_Construct_UClass_AWorldCollectable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Interaction/WorldCollectable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/WorldCollectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
		{ "Category", "WorldCollectable" },
		{ "ModuleRelativePath", "Public/Interaction/WorldCollectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticInventory_MetaData[] = {
		{ "Category", "WorldCollectable" },
		{ "ModuleRelativePath", "Public/Interaction/WorldCollectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Option;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldCollectable_AddInstanceStaticInventory, "AddInstanceStaticInventory" }, // 1574660817
		{ &Z_Construct_UFunction_AWorldCollectable_GetInventoryItemDefinition, "GetInventoryItemDefinition" }, // 1314669881
		{ &Z_Construct_UFunction_AWorldCollectable_GetInventoryItemInstance, "GetInventoryItemInstance" }, // 168134306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldCollectable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldCollectable_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldCollectable, Option), Z_Construct_UScriptStruct_FInteractionOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Option_MetaData), NewProp_Option_MetaData) }; // 4256573821
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldCollectable_Statics::NewProp_StaticInventory = { "StaticInventory", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldCollectable, StaticInventory), Z_Construct_UScriptStruct_FInventoryPickup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticInventory_MetaData), NewProp_StaticInventory_MetaData) }; // 3290137148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldCollectable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldCollectable_Statics::NewProp_Option,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldCollectable_Statics::NewProp_StaticInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldCollectable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldCollectable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldCollectable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWorldCollectable_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractableTarget_NoRegister, (int32)VTABLE_OFFSET(AWorldCollectable, IInteractableTarget), false },  // 2018106830
	{ Z_Construct_UClass_UPickupable_NoRegister, (int32)VTABLE_OFFSET(AWorldCollectable, IPickupable), false },  // 1088473728
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldCollectable_Statics::ClassParams = {
	&AWorldCollectable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldCollectable_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldCollectable_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldCollectable_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldCollectable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldCollectable()
{
	if (!Z_Registration_Info_UClass_AWorldCollectable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldCollectable.OuterSingleton, Z_Construct_UClass_AWorldCollectable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldCollectable.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<AWorldCollectable>()
{
	return AWorldCollectable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldCollectable);
AWorldCollectable::~AWorldCollectable() {}
// End Class AWorldCollectable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldCollectable, AWorldCollectable::StaticClass, TEXT("AWorldCollectable"), &Z_Registration_Info_UClass_AWorldCollectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldCollectable), 1589504541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_756238784(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
