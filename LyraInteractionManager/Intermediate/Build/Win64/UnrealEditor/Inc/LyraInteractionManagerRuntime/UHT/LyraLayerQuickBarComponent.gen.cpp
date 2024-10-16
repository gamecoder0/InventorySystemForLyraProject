// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/Equipment/LyraLayerQuickBarComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLayerQuickBarComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULayerDataParameters_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULayerQuickBar();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULayerQuickBar_NoRegister();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerQuickBarComponent();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraLayerQuickBarComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULayerQuickBar Function OnRep_ActiveSlotIndex
struct Z_Construct_UFunction_ULayerQuickBar_OnRep_ActiveSlotIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerQuickBar_OnRep_ActiveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerQuickBar, nullptr, "OnRep_ActiveSlotIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerQuickBar_OnRep_ActiveSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerQuickBar_OnRep_ActiveSlotIndex_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULayerQuickBar_OnRep_ActiveSlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerQuickBar_OnRep_ActiveSlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayerQuickBar::execOnRep_ActiveSlotIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ActiveSlotIndex();
	P_NATIVE_END;
}
// End Class ULayerQuickBar Function OnRep_ActiveSlotIndex

// Begin Class ULayerQuickBar Function OnRep_Slots
struct Z_Construct_UFunction_ULayerQuickBar_OnRep_Slots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerQuickBar_OnRep_Slots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerQuickBar, nullptr, "OnRep_Slots", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerQuickBar_OnRep_Slots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerQuickBar_OnRep_Slots_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULayerQuickBar_OnRep_Slots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerQuickBar_OnRep_Slots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayerQuickBar::execOnRep_Slots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Slots();
	P_NATIVE_END;
}
// End Class ULayerQuickBar Function OnRep_Slots

// Begin Class ULayerQuickBar Function SetActiveSlotIndexInLayer
struct LayerQuickBar_eventSetActiveSlotIndexInLayer_Parms
{
	int32 NewIndex;
};
static FName NAME_ULayerQuickBar_SetActiveSlotIndexInLayer = FName(TEXT("SetActiveSlotIndexInLayer"));
void ULayerQuickBar::SetActiveSlotIndexInLayer(int32 NewIndex)
{
	LayerQuickBar_eventSetActiveSlotIndexInLayer_Parms Parms;
	Parms.NewIndex=NewIndex;
	ProcessEvent(FindFunctionChecked(NAME_ULayerQuickBar_SetActiveSlotIndexInLayer),&Parms);
}
struct Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayerQuickBar_eventSetActiveSlotIndexInLayer_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayerQuickBar, nullptr, "SetActiveSlotIndexInLayer", nullptr, nullptr, Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::PropPointers), sizeof(LayerQuickBar_eventSetActiveSlotIndexInLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(LayerQuickBar_eventSetActiveSlotIndexInLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayerQuickBar::execSetActiveSlotIndexInLayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveSlotIndexInLayer_Implementation(Z_Param_NewIndex);
	P_NATIVE_END;
}
// End Class ULayerQuickBar Function SetActiveSlotIndexInLayer

// Begin Class ULayerQuickBar
void ULayerQuickBar::StaticRegisterNativesULayerQuickBar()
{
	UClass* Class = ULayerQuickBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_ActiveSlotIndex", &ULayerQuickBar::execOnRep_ActiveSlotIndex },
		{ "OnRep_Slots", &ULayerQuickBar::execOnRep_Slots },
		{ "SetActiveSlotIndexInLayer", &ULayerQuickBar::execSetActiveSlotIndexInLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayerQuickBar);
UClass* Z_Construct_UClass_ULayerQuickBar_NoRegister()
{
	return ULayerQuickBar::StaticClass();
}
struct Z_Construct_UClass_ULayerQuickBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/LyraLayerQuickBarComponent.h" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerControllerComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveSlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULayerQuickBar_OnRep_ActiveSlotIndex, "OnRep_ActiveSlotIndex" }, // 3785482248
		{ &Z_Construct_UFunction_ULayerQuickBar_OnRep_Slots, "OnRep_Slots" }, // 3146252158
		{ &Z_Construct_UFunction_ULayerQuickBar_SetActiveSlotIndexInLayer, "SetActiveSlotIndexInLayer" }, // 2404127515
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayerQuickBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_Slots = { "Slots", "OnRep_Slots", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerQuickBar, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slots_MetaData), NewProp_Slots_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerQuickBar, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_OwnerControllerComponent = { "OwnerControllerComponent", nullptr, (EPropertyFlags)0x0040000000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerQuickBar, OwnerControllerComponent), Z_Construct_UClass_ULyraLayerQuickBarComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerControllerComponent_MetaData), NewProp_OwnerControllerComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_ActiveSlotIndex = { "ActiveSlotIndex", "OnRep_ActiveSlotIndex", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerQuickBar, ActiveSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSlotIndex_MetaData), NewProp_ActiveSlotIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerQuickBar, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayerQuickBar, NumSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlots_MetaData), NewProp_NumSlots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULayerQuickBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_Slots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_Slots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_OwnerControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_ActiveSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayerQuickBar_Statics::NewProp_NumSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerQuickBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULayerQuickBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerQuickBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayerQuickBar_Statics::ClassParams = {
	&ULayerQuickBar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULayerQuickBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULayerQuickBar_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayerQuickBar_Statics::Class_MetaDataParams), Z_Construct_UClass_ULayerQuickBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULayerQuickBar()
{
	if (!Z_Registration_Info_UClass_ULayerQuickBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayerQuickBar.OuterSingleton, Z_Construct_UClass_ULayerQuickBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULayerQuickBar.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULayerQuickBar>()
{
	return ULayerQuickBar::StaticClass();
}
void ULayerQuickBar::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Slots(TEXT("Slots"));
	static const FName Name_LayerName(TEXT("LayerName"));
	static const FName Name_OwnerControllerComponent(TEXT("OwnerControllerComponent"));
	static const FName Name_ActiveSlotIndex(TEXT("ActiveSlotIndex"));
	static const FName Name_LayerIndex(TEXT("LayerIndex"));
	const bool bIsValid = true
		&& Name_Slots == ClassReps[(int32)ENetFields_Private::Slots].Property->GetFName()
		&& Name_LayerName == ClassReps[(int32)ENetFields_Private::LayerName].Property->GetFName()
		&& Name_OwnerControllerComponent == ClassReps[(int32)ENetFields_Private::OwnerControllerComponent].Property->GetFName()
		&& Name_ActiveSlotIndex == ClassReps[(int32)ENetFields_Private::ActiveSlotIndex].Property->GetFName()
		&& Name_LayerIndex == ClassReps[(int32)ENetFields_Private::LayerIndex].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULayerQuickBar"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULayerQuickBar);
ULayerQuickBar::~ULayerQuickBar() {}
// End Class ULayerQuickBar

// Begin Class ULyraLayerQuickBarComponent Function AddItemToSlot
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics
{
	struct LyraLayerQuickBarComponent_eventAddItemToSlot_Parms
	{
		int32 SlotIndex;
		ULyraInventoryItemInstance* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventAddItemToSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventAddItemToSlot_Parms, Item), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "AddItemToSlot", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::LyraLayerQuickBarComponent_eventAddItemToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::LyraLayerQuickBarComponent_eventAddItemToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execAddItemToSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToSlot(Z_Param_SlotIndex,Z_Param_Item);
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function AddItemToSlot

// Begin Class ULyraLayerQuickBarComponent Function CycleActiveSlotBackward
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotBackward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "CycleActiveSlotBackward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotBackward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotBackward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotBackward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotBackward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execCycleActiveSlotBackward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CycleActiveSlotBackward();
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function CycleActiveSlotBackward

// Begin Class ULyraLayerQuickBarComponent Function CycleActiveSlotForward
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotForward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "CycleActiveSlotForward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotForward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execCycleActiveSlotForward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CycleActiveSlotForward();
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function CycleActiveSlotForward

// Begin Class ULyraLayerQuickBarComponent Function FindAndUpdateItemByInstance
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics
{
	struct LyraLayerQuickBarComponent_eventFindAndUpdateItemByInstance_Parms
	{
		ULyraInventoryItemInstance* ItemInstance;
		int32 SlotIndexToSet;
		ULyraInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndexToSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventFindAndUpdateItemByInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::NewProp_SlotIndexToSet = { "SlotIndexToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventFindAndUpdateItemByInstance_Parms, SlotIndexToSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventFindAndUpdateItemByInstance_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::NewProp_SlotIndexToSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "FindAndUpdateItemByInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::LyraLayerQuickBarComponent_eventFindAndUpdateItemByInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::LyraLayerQuickBarComponent_eventFindAndUpdateItemByInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execFindAndUpdateItemByInstance)
{
	P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_ItemInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndexToSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->FindAndUpdateItemByInstance(Z_Param_ItemInstance,Z_Param_SlotIndexToSet);
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function FindAndUpdateItemByInstance

// Begin Class ULyraLayerQuickBarComponent Function FindItemByInstance
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics
{
	struct LyraLayerQuickBarComponent_eventFindItemByInstance_Parms
	{
		ULyraInventoryItemInstance* ItemInstance;
		int32 SlotIndex;
		bool bHasItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static void NewProp_bHasItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventFindItemByInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventFindItemByInstance_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::NewProp_bHasItem_SetBit(void* Obj)
{
	((LyraLayerQuickBarComponent_eventFindItemByInstance_Parms*)Obj)->bHasItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::NewProp_bHasItem = { "bHasItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraLayerQuickBarComponent_eventFindItemByInstance_Parms), &Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::NewProp_bHasItem_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::NewProp_bHasItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "FindItemByInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::LyraLayerQuickBarComponent_eventFindItemByInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::LyraLayerQuickBarComponent_eventFindItemByInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execFindItemByInstance)
{
	P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_ItemInstance);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SlotIndex);
	P_GET_UBOOL_REF(Z_Param_Out_bHasItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindItemByInstance(Z_Param_ItemInstance,Z_Param_Out_SlotIndex,Z_Param_Out_bHasItem);
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function FindItemByInstance

// Begin Class ULyraLayerQuickBarComponent Function GetActiveSlotIndex
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics
{
	struct LyraLayerQuickBarComponent_eventGetActiveSlotIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventGetActiveSlotIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "GetActiveSlotIndex", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::LyraLayerQuickBarComponent_eventGetActiveSlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::LyraLayerQuickBarComponent_eventGetActiveSlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execGetActiveSlotIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveSlotIndex();
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function GetActiveSlotIndex

// Begin Class ULyraLayerQuickBarComponent Function GetActiveSlotItem
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics
{
	struct LyraLayerQuickBarComponent_eventGetActiveSlotItem_Parms
	{
		ULyraInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventGetActiveSlotItem_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "GetActiveSlotItem", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::LyraLayerQuickBarComponent_eventGetActiveSlotItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::LyraLayerQuickBarComponent_eventGetActiveSlotItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execGetActiveSlotItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->GetActiveSlotItem();
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function GetActiveSlotItem

// Begin Class ULyraLayerQuickBarComponent Function GetNextFreeItemSlot
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics
{
	struct LyraLayerQuickBarComponent_eventGetNextFreeItemSlot_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventGetNextFreeItemSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "GetNextFreeItemSlot", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::LyraLayerQuickBarComponent_eventGetNextFreeItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::LyraLayerQuickBarComponent_eventGetNextFreeItemSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execGetNextFreeItemSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNextFreeItemSlot();
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function GetNextFreeItemSlot

// Begin Class ULyraLayerQuickBarComponent Function GetSlots
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics
{
	struct LyraLayerQuickBarComponent_eventGetSlots_Parms
	{
		TArray<ULyraInventoryItemInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventGetSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "GetSlots", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::LyraLayerQuickBarComponent_eventGetSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::LyraLayerQuickBarComponent_eventGetSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execGetSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULyraInventoryItemInstance*>*)Z_Param__Result=P_THIS->GetSlots();
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function GetSlots

// Begin Class ULyraLayerQuickBarComponent Function GetSlotsByLayer
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics
{
	struct LyraLayerQuickBarComponent_eventGetSlotsByLayer_Parms
	{
		int32 Index;
		TArray<ULyraInventoryItemInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventGetSlotsByLayer_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventGetSlotsByLayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "GetSlotsByLayer", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::LyraLayerQuickBarComponent_eventGetSlotsByLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::LyraLayerQuickBarComponent_eventGetSlotsByLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execGetSlotsByLayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULyraInventoryItemInstance*>*)Z_Param__Result=P_THIS->GetSlotsByLayer(Z_Param_Index);
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function GetSlotsByLayer

// Begin Class ULyraLayerQuickBarComponent Function OnRep_LayerQuickBars
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_OnRep_LayerQuickBars_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_OnRep_LayerQuickBars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "OnRep_LayerQuickBars", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_OnRep_LayerQuickBars_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_OnRep_LayerQuickBars_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_OnRep_LayerQuickBars()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_OnRep_LayerQuickBars_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execOnRep_LayerQuickBars)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LayerQuickBars();
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function OnRep_LayerQuickBars

// Begin Class ULyraLayerQuickBarComponent Function RemoveItemFromSlot
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics
{
	struct LyraLayerQuickBarComponent_eventRemoveItemFromSlot_Parms
	{
		int32 SlotIndex;
		ULyraInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventRemoveItemFromSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventRemoveItemFromSlot_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "RemoveItemFromSlot", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::LyraLayerQuickBarComponent_eventRemoveItemFromSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::LyraLayerQuickBarComponent_eventRemoveItemFromSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execRemoveItemFromSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->RemoveItemFromSlot(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function RemoveItemFromSlot

// Begin Class ULyraLayerQuickBarComponent Function RemoveItemInstance
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics
{
	struct LyraLayerQuickBarComponent_eventRemoveItemInstance_Parms
	{
		ULyraInventoryItemInstance* ItemInstance;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventRemoveItemInstance_Parms, ItemInstance), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventRemoveItemInstance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "RemoveItemInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::LyraLayerQuickBarComponent_eventRemoveItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::LyraLayerQuickBarComponent_eventRemoveItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execRemoveItemInstance)
{
	P_GET_OBJECT(ULyraInventoryItemInstance,Z_Param_ItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveItemInstance(Z_Param_ItemInstance);
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function RemoveItemInstance

// Begin Class ULyraLayerQuickBarComponent Function SetActiveSlotIndex
struct LyraLayerQuickBarComponent_eventSetActiveSlotIndex_Parms
{
	int32 NewIndex;
};
static FName NAME_ULyraLayerQuickBarComponent_SetActiveSlotIndex = FName(TEXT("SetActiveSlotIndex"));
void ULyraLayerQuickBarComponent::SetActiveSlotIndex(int32 NewIndex)
{
	LyraLayerQuickBarComponent_eventSetActiveSlotIndex_Parms Parms;
	Parms.NewIndex=NewIndex;
	ProcessEvent(FindFunctionChecked(NAME_ULyraLayerQuickBarComponent_SetActiveSlotIndex),&Parms);
}
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventSetActiveSlotIndex_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "SetActiveSlotIndex", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers), sizeof(LyraLayerQuickBarComponent_eventSetActiveSlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraLayerQuickBarComponent_eventSetActiveSlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execSetActiveSlotIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveSlotIndex_Implementation(Z_Param_NewIndex);
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function SetActiveSlotIndex

// Begin Class ULyraLayerQuickBarComponent Function SetLayerActive
struct Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics
{
	struct LyraLayerQuickBarComponent_eventSetLayerActive_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraLayerQuickBarComponent_eventSetLayerActive_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLayerQuickBarComponent, nullptr, "SetLayerActive", nullptr, nullptr, Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::LyraLayerQuickBarComponent_eventSetLayerActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::LyraLayerQuickBarComponent_eventSetLayerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraLayerQuickBarComponent::execSetLayerActive)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayerActive(Z_Param_Index);
	P_NATIVE_END;
}
// End Class ULyraLayerQuickBarComponent Function SetLayerActive

// Begin Class ULyraLayerQuickBarComponent
void ULyraLayerQuickBarComponent::StaticRegisterNativesULyraLayerQuickBarComponent()
{
	UClass* Class = ULyraLayerQuickBarComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToSlot", &ULyraLayerQuickBarComponent::execAddItemToSlot },
		{ "CycleActiveSlotBackward", &ULyraLayerQuickBarComponent::execCycleActiveSlotBackward },
		{ "CycleActiveSlotForward", &ULyraLayerQuickBarComponent::execCycleActiveSlotForward },
		{ "FindAndUpdateItemByInstance", &ULyraLayerQuickBarComponent::execFindAndUpdateItemByInstance },
		{ "FindItemByInstance", &ULyraLayerQuickBarComponent::execFindItemByInstance },
		{ "GetActiveSlotIndex", &ULyraLayerQuickBarComponent::execGetActiveSlotIndex },
		{ "GetActiveSlotItem", &ULyraLayerQuickBarComponent::execGetActiveSlotItem },
		{ "GetNextFreeItemSlot", &ULyraLayerQuickBarComponent::execGetNextFreeItemSlot },
		{ "GetSlots", &ULyraLayerQuickBarComponent::execGetSlots },
		{ "GetSlotsByLayer", &ULyraLayerQuickBarComponent::execGetSlotsByLayer },
		{ "OnRep_LayerQuickBars", &ULyraLayerQuickBarComponent::execOnRep_LayerQuickBars },
		{ "RemoveItemFromSlot", &ULyraLayerQuickBarComponent::execRemoveItemFromSlot },
		{ "RemoveItemInstance", &ULyraLayerQuickBarComponent::execRemoveItemInstance },
		{ "SetActiveSlotIndex", &ULyraLayerQuickBarComponent::execSetActiveSlotIndex },
		{ "SetLayerActive", &ULyraLayerQuickBarComponent::execSetLayerActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLayerQuickBarComponent);
UClass* Z_Construct_UClass_ULyraLayerQuickBarComponent_NoRegister()
{
	return ULyraLayerQuickBarComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/LyraLayerQuickBarComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerDataParametersClass_MetaData[] = {
		{ "Category", "Layer Data" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerQuickBars_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/LyraLayerQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LayerDataParametersClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerQuickBars_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerQuickBars;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveLayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_AddItemToSlot, "AddItemToSlot" }, // 739575103
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotBackward, "CycleActiveSlotBackward" }, // 1296498523
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_CycleActiveSlotForward, "CycleActiveSlotForward" }, // 458718442
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindAndUpdateItemByInstance, "FindAndUpdateItemByInstance" }, // 725262966
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_FindItemByInstance, "FindItemByInstance" }, // 3984066886
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotIndex, "GetActiveSlotIndex" }, // 4038383869
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetActiveSlotItem, "GetActiveSlotItem" }, // 3989947664
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetNextFreeItemSlot, "GetNextFreeItemSlot" }, // 1912378765
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlots, "GetSlots" }, // 1116917658
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_GetSlotsByLayer, "GetSlotsByLayer" }, // 2905743942
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_OnRep_LayerQuickBars, "OnRep_LayerQuickBars" }, // 2333574289
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemFromSlot, "RemoveItemFromSlot" }, // 645137919
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_RemoveItemInstance, "RemoveItemInstance" }, // 1579519023
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetActiveSlotIndex, "SetActiveSlotIndex" }, // 138755518
		{ &Z_Construct_UFunction_ULyraLayerQuickBarComponent_SetLayerActive, "SetLayerActive" }, // 2752081176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLayerQuickBarComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_LayerDataParametersClass = { "LayerDataParametersClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayerQuickBarComponent, LayerDataParametersClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULayerDataParameters_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerDataParametersClass_MetaData), NewProp_LayerDataParametersClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_LayerQuickBars_Inner = { "LayerQuickBars", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULayerQuickBar_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_LayerQuickBars = { "LayerQuickBars", "OnRep_LayerQuickBars", (EPropertyFlags)0x0040008100000028, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayerQuickBarComponent, LayerQuickBars), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerQuickBars_MetaData), NewProp_LayerQuickBars_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_ActiveLayerIndex = { "ActiveLayerIndex", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayerQuickBarComponent, ActiveLayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLayerIndex_MetaData), NewProp_ActiveLayerIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_EquippedItem = { "EquippedItem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraLayerQuickBarComponent, EquippedItem), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItem_MetaData), NewProp_EquippedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_LayerDataParametersClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_LayerQuickBars_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_LayerQuickBars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_ActiveLayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::NewProp_EquippedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::ClassParams = {
	&ULyraLayerQuickBarComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraLayerQuickBarComponent()
{
	if (!Z_Registration_Info_UClass_ULyraLayerQuickBarComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLayerQuickBarComponent.OuterSingleton, Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraLayerQuickBarComponent.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraLayerQuickBarComponent>()
{
	return ULyraLayerQuickBarComponent::StaticClass();
}
void ULyraLayerQuickBarComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_LayerQuickBars(TEXT("LayerQuickBars"));
	static const FName Name_ActiveLayerIndex(TEXT("ActiveLayerIndex"));
	const bool bIsValid = true
		&& Name_LayerQuickBars == ClassReps[(int32)ENetFields_Private::LayerQuickBars].Property->GetFName()
		&& Name_ActiveLayerIndex == ClassReps[(int32)ENetFields_Private::ActiveLayerIndex].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraLayerQuickBarComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLayerQuickBarComponent);
ULyraLayerQuickBarComponent::~ULyraLayerQuickBarComponent() {}
// End Class ULyraLayerQuickBarComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULayerQuickBar, ULayerQuickBar::StaticClass, TEXT("ULayerQuickBar"), &Z_Registration_Info_UClass_ULayerQuickBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayerQuickBar), 86137283U) },
		{ Z_Construct_UClass_ULyraLayerQuickBarComponent, ULyraLayerQuickBarComponent::StaticClass, TEXT("ULyraLayerQuickBarComponent"), &Z_Registration_Info_UClass_ULyraLayerQuickBarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLayerQuickBarComponent), 4117691922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_3517722854(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
