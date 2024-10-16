// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/LayerParameters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAINTERACTIONMANAGERRUNTIME_LayerParameters_generated_h
#error "LayerParameters.generated.h already included, missing '#pragma once' in LayerParameters.h"
#endif
#define LYRAINTERACTIONMANAGERRUNTIME_LayerParameters_generated_h

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryListParams_Statics; \
	LYRAINTERACTIONMANAGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<struct FInventoryListParams>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryObject_Statics; \
	LYRAINTERACTIONMANAGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<struct FInventoryObject>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayerParameters(); \
	friend struct Z_Construct_UClass_ULayerParameters_Statics; \
public: \
	DECLARE_CLASS(ULayerParameters, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULayerParameters)


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayerParameters(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULayerParameters(ULayerParameters&&); \
	ULayerParameters(const ULayerParameters&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayerParameters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayerParameters); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayerParameters) \
	NO_API virtual ~ULayerParameters();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_40_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class ULayerParameters>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayerStructUIMessaging_Statics; \
	LYRAINTERACTIONMANAGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<struct FLayerStructUIMessaging>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayerDataStructParameters_Statics; \
	LYRAINTERACTIONMANAGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<struct FLayerDataStructParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LayerParameters_h


#define FOREACH_ENUM_ETYPELAYER(op) \
	op(ETypeLayer::Weapons) \
	op(ETypeLayer::Usable) \
	op(ETypeLayer::Armor) \
	op(ETypeLayer::Quest) 

enum class ETypeLayer : uint8;
template<> struct TIsUEnumClass<ETypeLayer> { enum { Value = true }; };
template<> LYRAINTERACTIONMANAGERRUNTIME_API UEnum* StaticEnum<ETypeLayer>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
