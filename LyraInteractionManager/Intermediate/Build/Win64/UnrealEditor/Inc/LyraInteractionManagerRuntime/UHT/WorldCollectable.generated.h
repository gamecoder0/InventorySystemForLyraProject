// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/WorldCollectable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraLayerInventoryItemDefinition;
class ULyraLayerInventoryItemInstance;
#ifdef LYRAINTERACTIONMANAGERRUNTIME_WorldCollectable_generated_h
#error "WorldCollectable.generated.h already included, missing '#pragma once' in WorldCollectable.h"
#endif
#define LYRAINTERACTIONMANAGERRUNTIME_WorldCollectable_generated_h

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddInstanceStaticInventory); \
	DECLARE_FUNCTION(execGetInventoryItemInstance); \
	DECLARE_FUNCTION(execGetInventoryItemDefinition);


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldCollectable(); \
	friend struct Z_Construct_UClass_AWorldCollectable_Statics; \
public: \
	DECLARE_CLASS(AWorldCollectable, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(AWorldCollectable) \
	virtual UObject* _getUObject() const override { return const_cast<AWorldCollectable*>(this); }


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldCollectable(AWorldCollectable&&); \
	AWorldCollectable(const AWorldCollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldCollectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldCollectable); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWorldCollectable) \
	NO_API virtual ~AWorldCollectable();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_19_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class AWorldCollectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Interaction_WorldCollectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
