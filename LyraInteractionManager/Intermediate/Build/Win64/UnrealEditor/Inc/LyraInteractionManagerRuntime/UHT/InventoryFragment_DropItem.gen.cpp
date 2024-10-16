// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/InventoryFragment_DropItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_DropItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_AWorldCollectable_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_DropItem();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_UInventoryFragment_DropItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class UInventoryFragment_DropItem Function GetWorldCollectableClass
struct Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics
{
	struct InventoryFragment_DropItem_eventGetWorldCollectableClass_Parms
	{
		TSubclassOf<AWorldCollectable> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drop Item" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_DropItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFragment_DropItem_eventGetWorldCollectableClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AWorldCollectable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFragment_DropItem, nullptr, "GetWorldCollectableClass", nullptr, nullptr, Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::InventoryFragment_DropItem_eventGetWorldCollectableClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::InventoryFragment_DropItem_eventGetWorldCollectableClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFragment_DropItem::execGetWorldCollectableClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AWorldCollectable>*)Z_Param__Result=P_THIS->GetWorldCollectableClass();
	P_NATIVE_END;
}
// End Class UInventoryFragment_DropItem Function GetWorldCollectableClass

// Begin Class UInventoryFragment_DropItem
void UInventoryFragment_DropItem::StaticRegisterNativesUInventoryFragment_DropItem()
{
	UClass* Class = UInventoryFragment_DropItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWorldCollectableClass", &UInventoryFragment_DropItem::execGetWorldCollectableClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_DropItem);
UClass* Z_Construct_UClass_UInventoryFragment_DropItem_NoRegister()
{
	return UInventoryFragment_DropItem::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_DropItem.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_DropItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableClass_MetaData[] = {
		{ "Category", "Drop Item" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryFragment_DropItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CollectableClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryFragment_DropItem_GetWorldCollectableClass, "GetWorldCollectableClass" }, // 2282033096
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_DropItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryFragment_DropItem_Statics::NewProp_CollectableClass = { "CollectableClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_DropItem, CollectableClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWorldCollectable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableClass_MetaData), NewProp_CollectableClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_DropItem_Statics::NewProp_CollectableClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_DropItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_DropItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_DropItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_DropItem_Statics::ClassParams = {
	&UInventoryFragment_DropItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryFragment_DropItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_DropItem_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_DropItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_DropItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_DropItem()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_DropItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_DropItem.OuterSingleton, Z_Construct_UClass_UInventoryFragment_DropItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_DropItem.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<UInventoryFragment_DropItem>()
{
	return UInventoryFragment_DropItem::StaticClass();
}
UInventoryFragment_DropItem::UInventoryFragment_DropItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_DropItem);
UInventoryFragment_DropItem::~UInventoryFragment_DropItem() {}
// End Class UInventoryFragment_DropItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_DropItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_DropItem, UInventoryFragment_DropItem::StaticClass, TEXT("UInventoryFragment_DropItem"), &Z_Registration_Info_UClass_UInventoryFragment_DropItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_DropItem), 505174001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_DropItem_h_1419422465(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_DropItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_InventoryFragment_DropItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
