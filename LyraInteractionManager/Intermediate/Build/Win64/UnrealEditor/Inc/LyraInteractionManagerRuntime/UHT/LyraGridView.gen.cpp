// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraInteractionManagerRuntime/Public/UI/LyraGridView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGridView() {}

// Begin Cross Module References
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraGridView();
LYRAINTERACTIONMANAGERRUNTIME_API UClass* Z_Construct_UClass_ULyraGridView_NoRegister();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EListItemAlignment();
UMG_API UClass* Z_Construct_UClass_UListView();
UPackage* Z_Construct_UPackage__Script_LyraInteractionManagerRuntime();
// End Cross Module References

// Begin Class ULyraGridView Function GetEntryHeight
struct Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics
{
	struct LyraGridView_eventGetEntryHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the height of tile entries */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the height of tile entries" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGridView_eventGetEntryHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGridView, nullptr, "GetEntryHeight", nullptr, nullptr, Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::LyraGridView_eventGetEntryHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::LyraGridView_eventGetEntryHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGridView_GetEntryHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGridView_GetEntryHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGridView::execGetEntryHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEntryHeight();
	P_NATIVE_END;
}
// End Class ULyraGridView Function GetEntryHeight

// Begin Class ULyraGridView Function GetEntryWidth
struct Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics
{
	struct LyraGridView_eventGetEntryWidth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the width of tile entries */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the width of tile entries" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGridView_eventGetEntryWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGridView, nullptr, "GetEntryWidth", nullptr, nullptr, Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::LyraGridView_eventGetEntryWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::LyraGridView_eventGetEntryWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGridView_GetEntryWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGridView_GetEntryWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGridView::execGetEntryWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEntryWidth();
	P_NATIVE_END;
}
// End Class ULyraGridView Function GetEntryWidth

// Begin Class ULyraGridView Function IsAligned
struct Z_Construct_UFunction_ULyraGridView_IsAligned_Statics
{
	struct LyraGridView_eventIsAligned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether the TileView is left, right or center aligned. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the TileView is left, right or center aligned." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraGridView_eventIsAligned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraGridView_eventIsAligned_Parms), &Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGridView, nullptr, "IsAligned", nullptr, nullptr, Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::LyraGridView_eventIsAligned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::LyraGridView_eventIsAligned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGridView_IsAligned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGridView_IsAligned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGridView::execIsAligned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAligned();
	P_NATIVE_END;
}
// End Class ULyraGridView Function IsAligned

// Begin Class ULyraGridView Function SetEntryHeight
struct Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics
{
	struct LyraGridView_eventSetEntryHeight_Parms
	{
		float NewHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the height of every tile entry */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the height of every tile entry" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::NewProp_NewHeight = { "NewHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGridView_eventSetEntryHeight_Parms, NewHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::NewProp_NewHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGridView, nullptr, "SetEntryHeight", nullptr, nullptr, Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::LyraGridView_eventSetEntryHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::LyraGridView_eventSetEntryHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGridView_SetEntryHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGridView_SetEntryHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGridView::execSetEntryHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEntryHeight(Z_Param_NewHeight);
	P_NATIVE_END;
}
// End Class ULyraGridView Function SetEntryHeight

// Begin Class ULyraGridView Function SetEntryWidth
struct Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics
{
	struct LyraGridView_eventSetEntryWidth_Parms
	{
		float NewWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the width of every tile entry */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the width of every tile entry" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::NewProp_NewWidth = { "NewWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGridView_eventSetEntryWidth_Parms, NewWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::NewProp_NewWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGridView, nullptr, "SetEntryWidth", nullptr, nullptr, Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::LyraGridView_eventSetEntryWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::LyraGridView_eventSetEntryWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGridView_SetEntryWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGridView_SetEntryWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGridView::execSetEntryWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEntryWidth(Z_Param_NewWidth);
	P_NATIVE_END;
}
// End Class ULyraGridView Function SetEntryWidth

// Begin Class ULyraGridView
void ULyraGridView::StaticRegisterNativesULyraGridView()
{
	UClass* Class = ULyraGridView::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEntryHeight", &ULyraGridView::execGetEntryHeight },
		{ "GetEntryWidth", &ULyraGridView::execGetEntryWidth },
		{ "IsAligned", &ULyraGridView::execIsAligned },
		{ "SetEntryHeight", &ULyraGridView::execSetEntryHeight },
		{ "SetEntryWidth", &ULyraGridView::execSetEntryWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGridView);
UClass* Z_Construct_UClass_ULyraGridView_NoRegister()
{
	return ULyraGridView::StaticClass();
}
struct Z_Construct_UClass_ULyraGridView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/LyraGridView.h" },
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryHeight_MetaData[] = {
		{ "Category", "ListEntries" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The height of each tile */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The height of each tile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidth_MetaData[] = {
		{ "Category", "ListEntries" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The width of each tile */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width of each tile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileAlignment_MetaData[] = {
		{ "Category", "ListEntries" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The method by which to align the tile entries in the available space for the tile view */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The method by which to align the tile entries in the available space for the tile view" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWrapHorizontalNavigation_MetaData[] = {
		{ "Category", "Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True to allow left/right navigation to wrap back to the tile on the opposite edge */" },
#endif
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True to allow left/right navigation to wrap back to the tile on the opposite edge" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEntrySizeIncludesEntrySpacing_MetaData[] = {
		{ "Category", "ListEntries" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * True if entry dimensions should be the sum of the entry widget dimensions and the spacing.\n\x09 * This means the size of the entry widget will be adjusted so that the summation of the widget size and entry spacing always equals entry size.\n\x09 */" },
#endif
		{ "EditCondition", "IsAligned" },
		{ "ModuleRelativePath", "Public/UI/LyraGridView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if entry dimensions should be the sum of the entry widget dimensions and the spacing.\nThis means the size of the entry widget will be adjusted so that the summation of the widget size and entry spacing always equals entry size." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntryHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntryWidth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileAlignment;
	static void NewProp_bWrapHorizontalNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapHorizontalNavigation;
	static void NewProp_bEntrySizeIncludesEntrySpacing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEntrySizeIncludesEntrySpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGridView_GetEntryHeight, "GetEntryHeight" }, // 2861409380
		{ &Z_Construct_UFunction_ULyraGridView_GetEntryWidth, "GetEntryWidth" }, // 463362587
		{ &Z_Construct_UFunction_ULyraGridView_IsAligned, "IsAligned" }, // 1471481610
		{ &Z_Construct_UFunction_ULyraGridView_SetEntryHeight, "SetEntryHeight" }, // 2184071089
		{ &Z_Construct_UFunction_ULyraGridView_SetEntryWidth, "SetEntryWidth" }, // 2037184477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGridView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraGridView_Statics::NewProp_EntryHeight = { "EntryHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGridView, EntryHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryHeight_MetaData), NewProp_EntryHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraGridView_Statics::NewProp_EntryWidth = { "EntryWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGridView, EntryWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidth_MetaData), NewProp_EntryWidth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraGridView_Statics::NewProp_TileAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraGridView_Statics::NewProp_TileAlignment = { "TileAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGridView, TileAlignment), Z_Construct_UEnum_Slate_EListItemAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileAlignment_MetaData), NewProp_TileAlignment_MetaData) }; // 2025916266
void Z_Construct_UClass_ULyraGridView_Statics::NewProp_bWrapHorizontalNavigation_SetBit(void* Obj)
{
	((ULyraGridView*)Obj)->bWrapHorizontalNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraGridView_Statics::NewProp_bWrapHorizontalNavigation = { "bWrapHorizontalNavigation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraGridView), &Z_Construct_UClass_ULyraGridView_Statics::NewProp_bWrapHorizontalNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWrapHorizontalNavigation_MetaData), NewProp_bWrapHorizontalNavigation_MetaData) };
void Z_Construct_UClass_ULyraGridView_Statics::NewProp_bEntrySizeIncludesEntrySpacing_SetBit(void* Obj)
{
	((ULyraGridView*)Obj)->bEntrySizeIncludesEntrySpacing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraGridView_Statics::NewProp_bEntrySizeIncludesEntrySpacing = { "bEntrySizeIncludesEntrySpacing", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraGridView), &Z_Construct_UClass_ULyraGridView_Statics::NewProp_bEntrySizeIncludesEntrySpacing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEntrySizeIncludesEntrySpacing_MetaData), NewProp_bEntrySizeIncludesEntrySpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGridView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGridView_Statics::NewProp_EntryHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGridView_Statics::NewProp_EntryWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGridView_Statics::NewProp_TileAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGridView_Statics::NewProp_TileAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGridView_Statics::NewProp_bWrapHorizontalNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGridView_Statics::NewProp_bEntrySizeIncludesEntrySpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGridView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGridView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListView,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraInteractionManagerRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGridView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGridView_Statics::ClassParams = {
	&ULyraGridView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraGridView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGridView_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGridView_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGridView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGridView()
{
	if (!Z_Registration_Info_UClass_ULyraGridView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGridView.OuterSingleton, Z_Construct_UClass_ULyraGridView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGridView.OuterSingleton;
}
template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<ULyraGridView>()
{
	return ULyraGridView::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGridView);
ULyraGridView::~ULyraGridView() {}
// End Class ULyraGridView

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraGridView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGridView, ULyraGridView::StaticClass, TEXT("ULyraGridView"), &Z_Registration_Info_UClass_ULyraGridView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGridView), 3669706746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraGridView_h_3645753157(TEXT("/Script/LyraInteractionManagerRuntime"),
	Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraGridView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraGridView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
