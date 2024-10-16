// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Inventory/LayerParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayerParameters() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULayerParameters();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULayerParameters_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UEnum* Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryListParams();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryObject();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLayerDataStructParameters();
LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLayerStructUIMessaging();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Enum ETypeLayer
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeLayer;
static UEnum* ETypeLayer_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETypeLayer.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETypeLayer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("ETypeLayer"));
	}
	return Z_Registration_Info_UEnum_ETypeLayer.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UEnum* StaticEnum<ETypeLayer>()
{
	return ETypeLayer_StaticEnum();
}
struct Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.Name", "ETypeLayer::Armor" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
		{ "Quest.Name", "ETypeLayer::Quest" },
		{ "Usable.Name", "ETypeLayer::Usable" },
		{ "Weapons.Name", "ETypeLayer::Weapons" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETypeLayer::Weapons", (int64)ETypeLayer::Weapons },
		{ "ETypeLayer::Usable", (int64)ETypeLayer::Usable },
		{ "ETypeLayer::Armor", (int64)ETypeLayer::Armor },
		{ "ETypeLayer::Quest", (int64)ETypeLayer::Quest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	nullptr,
	"ETypeLayer",
	"ETypeLayer",
	Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer()
{
	if (!Z_Registration_Info_UEnum_ETypeLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeLayer.InnerSingleton, Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETypeLayer.InnerSingleton;
}
// End Enum ETypeLayer

// Begin ScriptStruct FInventoryListParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryListParams;
class UScriptStruct* FInventoryListParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryListParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryListParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryListParams, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("InventoryListParams"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryListParams.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FInventoryListParams>()
{
	return FInventoryListParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryListParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexActive_MetaData[] = {
		{ "Category", "InventoryListParams" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryListParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryListParams_Statics::NewProp_IndexActive = { "IndexActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryListParams, IndexActive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexActive_MetaData), NewProp_IndexActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryListParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryListParams_Statics::NewProp_IndexActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryListParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryListParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	nullptr,
	&NewStructOps,
	"InventoryListParams",
	Z_Construct_UScriptStruct_FInventoryListParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryListParams_Statics::PropPointers),
	sizeof(FInventoryListParams),
	alignof(FInventoryListParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryListParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryListParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryListParams()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryListParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryListParams.InnerSingleton, Z_Construct_UScriptStruct_FInventoryListParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryListParams.InnerSingleton;
}
// End ScriptStruct FInventoryListParams

// Begin ScriptStruct FInventoryObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryObject;
class UScriptStruct* FInventoryObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryObject, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("InventoryObject"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryObject.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FInventoryObject>()
{
	return FInventoryObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotSelected_MetaData[] = {
		{ "Category", "InventoryObject" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryObject_Statics::NewProp_SlotSelected = { "SlotSelected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryObject, SlotSelected), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotSelected_MetaData), NewProp_SlotSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryObject_Statics::NewProp_SlotSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	nullptr,
	&NewStructOps,
	"InventoryObject",
	Z_Construct_UScriptStruct_FInventoryObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryObject_Statics::PropPointers),
	sizeof(FInventoryObject),
	alignof(FInventoryObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryObject()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryObject.InnerSingleton, Z_Construct_UScriptStruct_FInventoryObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryObject.InnerSingleton;
}
// End ScriptStruct FInventoryObject

// Begin Class ULayerParameters
void ULayerParameters::StaticRegisterNativesULayerParameters()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayerParameters);
UClass* Z_Construct_UClass_ULayerParameters_NoRegister()
{
	return ULayerParameters::StaticClass();
}
struct Z_Construct_UClass_ULayerParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/LayerParameters.h" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayerParameters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULayerParameters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerParameters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayerParameters_Statics::ClassParams = {
	&ULayerParameters::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerParameters_Statics::Class_MetaDataParams), Z_Construct_UClass_ULayerParameters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULayerParameters()
{
	if (!Z_Registration_Info_UClass_ULayerParameters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayerParameters.OuterSingleton, Z_Construct_UClass_ULayerParameters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULayerParameters.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULayerParameters>()
{
	return ULayerParameters::StaticClass();
}
ULayerParameters::ULayerParameters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULayerParameters);
ULayerParameters::~ULayerParameters() {}
// End Class ULayerParameters

// Begin ScriptStruct FLayerStructUIMessaging
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayerStructUIMessaging;
class UScriptStruct* FLayerStructUIMessaging::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayerStructUIMessaging.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayerStructUIMessaging.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerStructUIMessaging, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("LayerStructUIMessaging"));
	}
	return Z_Registration_Info_UScriptStruct_LayerStructUIMessaging.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FLayerStructUIMessaging>()
{
	return FLayerStructUIMessaging::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bON_MetaData[] = {
		{ "Category", "UI Messaging" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "UI Messaging" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bON_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bON;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerStructUIMessaging>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::NewProp_bON_SetBit(void* Obj)
{
	((FLayerStructUIMessaging*)Obj)->bON = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::NewProp_bON = { "bON", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayerStructUIMessaging), &Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::NewProp_bON_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bON_MetaData), NewProp_bON_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerStructUIMessaging, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::NewProp_bON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	nullptr,
	&NewStructOps,
	"LayerStructUIMessaging",
	Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::PropPointers),
	sizeof(FLayerStructUIMessaging),
	alignof(FLayerStructUIMessaging),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayerStructUIMessaging()
{
	if (!Z_Registration_Info_UScriptStruct_LayerStructUIMessaging.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayerStructUIMessaging.InnerSingleton, Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LayerStructUIMessaging.InnerSingleton;
}
// End ScriptStruct FLayerStructUIMessaging

// Begin ScriptStruct FLayerDataStructParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayerDataStructParameters;
class UScriptStruct* FLayerDataStructParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayerDataStructParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayerDataStructParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerDataStructParameters, (UObject*)Z_Construct_UPackage__Script_LyraInteractionManagerRuntime(), TEXT("LayerDataStructParameters"));
	}
	return Z_Registration_Info_UScriptStruct_LayerDataStructParameters.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<FLayerDataStructParameters>()
{
	return FLayerDataStructParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeLayer_MetaData[] = {
		{ "Category", "LayerDataStructParameters" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[] = {
		{ "Category", "LayerDataStructParameters" },
		{ "ModuleRelativePath", "Public/Inventory/LayerParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeLayer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerDataStructParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::NewProp_TypeLayer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::NewProp_TypeLayer = { "TypeLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerDataStructParameters, TypeLayer), Z_Construct_UEnum_LyraInteractionManagerRuntime_ETypeLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeLayer_MetaData), NewProp_TypeLayer_MetaData) }; // 3945151639
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerDataStructParameters, NumSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlots_MetaData), NewProp_NumSlots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::NewProp_TypeLayer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::NewProp_TypeLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::NewProp_NumSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
	nullptr,
	&NewStructOps,
	"LayerDataStructParameters",
	Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::PropPointers),
	sizeof(FLayerDataStructParameters),
	alignof(FLayerDataStructParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayerDataStructParameters()
{
	if (!Z_Registration_Info_UScriptStruct_LayerDataStructParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayerDataStructParameters.InnerSingleton, Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LayerDataStructParameters.InnerSingleton;
}
// End ScriptStruct FLayerDataStructParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETypeLayer_StaticEnum, TEXT("ETypeLayer"), &Z_Registration_Info_UEnum_ETypeLayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3945151639U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryListParams::StaticStruct, Z_Construct_UScriptStruct_FInventoryListParams_Statics::NewStructOps, TEXT("InventoryListParams"), &Z_Registration_Info_UScriptStruct_InventoryListParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryListParams), 2303750565U) },
		{ FInventoryObject::StaticStruct, Z_Construct_UScriptStruct_FInventoryObject_Statics::NewStructOps, TEXT("InventoryObject"), &Z_Registration_Info_UScriptStruct_InventoryObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryObject), 2920713138U) },
		{ FLayerStructUIMessaging::StaticStruct, Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics::NewStructOps, TEXT("LayerStructUIMessaging"), &Z_Registration_Info_UScriptStruct_LayerStructUIMessaging, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayerStructUIMessaging), 2864306932U) },
		{ FLayerDataStructParameters::StaticStruct, Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics::NewStructOps, TEXT("LayerDataStructParameters"), &Z_Registration_Info_UScriptStruct_LayerDataStructParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayerDataStructParameters), 197148401U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULayerParameters, ULayerParameters::StaticClass, TEXT("ULayerParameters"), &Z_Registration_Info_UClass_ULayerParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayerParameters), 2292246752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_3803032193(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
