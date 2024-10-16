// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/LyraLayerInventoryItemInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLayerInventoryItemInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemInstance();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULyraLayerInventoryItemInstance Function GetEquipmentDefinitionClass
struct Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics
{
	struct LyraLayerInventoryItemInstance_eventGetEquipmentDefinitionClass_Parms
	{
		TSubclassOf<ULyraEquipmentDefinition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStats" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayerInventoryItemInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerInventoryItemInstance_eventGetEquipmentDefinitionClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerInventoryItemInstance, nullptr, "GetEquipmentDefinitionClass", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::LyraLayerInventoryItemInstance_eventGetEquipmentDefinitionClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::LyraLayerInventoryItemInstance_eventGetEquipmentDefinitionClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerInventoryItemInstance::execGetEquipmentDefinitionClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<ULyraEquipmentDefinition>*)Z_Param__Result=P_THIS->GetEquipmentDefinitionClass();
	P_NATIVE_END;
}
// End Class ULyraLayerInventoryItemInstance Function GetEquipmentDefinitionClass

// Begin Class ULyraLayerInventoryItemInstance Function GetNumLayer
struct Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics
{
	struct LyraLayerInventoryItemInstance_eventGetNumLayer_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStats" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayerInventoryItemInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerInventoryItemInstance_eventGetNumLayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerInventoryItemInstance, nullptr, "GetNumLayer", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::LyraLayerInventoryItemInstance_eventGetNumLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::LyraLayerInventoryItemInstance_eventGetNumLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerInventoryItemInstance::execGetNumLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumLayer();
	P_NATIVE_END;
}
// End Class ULyraLayerInventoryItemInstance Function GetNumLayer

// Begin Class ULyraLayerInventoryItemInstance
void ULyraLayerInventoryItemInstance::StaticRegisterNativesULyraLayerInventoryItemInstance()
{
	UClass* Class = ULyraLayerInventoryItemInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipmentDefinitionClass", &ULyraLayerInventoryItemInstance::execGetEquipmentDefinitionClass },
		{ "GetNumLayer", &ULyraLayerInventoryItemInstance::execGetNumLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLayerInventoryItemInstance);
UClass* Z_Construct_UClass_ULyraLayerInventoryItemInstance_NoRegister()
{
	return ULyraLayerInventoryItemInstance::StaticClass();
}
struct Z_Construct_UClass_ULyraLayerInventoryItemInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/LyraLayerInventoryItemInstance.h" },
		{ "ModuleRelativePath", "Public/Inventory/LyraLayerInventoryItemInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetEquipmentDefinitionClass, "GetEquipmentDefinitionClass" }, // 366078500
		{ &Z_Construct_UFunction_ULyraLayerInventoryItemInstance_GetNumLayer, "GetNumLayer" }, // 60645014
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLayerInventoryItemInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraLayerInventoryItemInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerInventoryItemInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLayerInventoryItemInstance_Statics::ClassParams = {
	&ULyraLayerInventoryItemInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerInventoryItemInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraLayerInventoryItemInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraLayerInventoryItemInstance()
{
	if (!Z_Registration_Info_UClass_ULyraLayerInventoryItemInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLayerInventoryItemInstance.OuterSingleton, Z_Construct_UClass_ULyraLayerInventoryItemInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraLayerInventoryItemInstance.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraLayerInventoryItemInstance>()
{
	return ULyraLayerInventoryItemInstance::StaticClass();
}
ULyraLayerInventoryItemInstance::ULyraLayerInventoryItemInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLayerInventoryItemInstance);
ULyraLayerInventoryItemInstance::~ULyraLayerInventoryItemInstance() {}
// End Class ULyraLayerInventoryItemInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayerInventoryItemInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraLayerInventoryItemInstance, ULyraLayerInventoryItemInstance::StaticClass, TEXT("ULyraLayerInventoryItemInstance"), &Z_Registration_Info_UClass_ULyraLayerInventoryItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLayerInventoryItemInstance), 2348961014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayerInventoryItemInstance_h_3810168964(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayerInventoryItemInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayerInventoryItemInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
