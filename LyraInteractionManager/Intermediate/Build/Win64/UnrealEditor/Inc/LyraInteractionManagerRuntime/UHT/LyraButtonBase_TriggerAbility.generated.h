// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/LyraButtonBase_TriggerAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class ULyraEquipmentInstance;
class UObject;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef LYRAINTERACTIONMANAGERRUNTIME_LyraButtonBase_TriggerAbility_generated_h
#error "LyraButtonBase_TriggerAbility.generated.h already included, missing '#pragma once' in LyraButtonBase_TriggerAbility.h"
#endif
#define LYRAINTERACTIONMANAGERRUNTIME_LyraButtonBase_TriggerAbility_generated_h

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTriggerOnClicked); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execTriggerAbility); \
	DECLARE_FUNCTION(execSetButtonText);


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_CALLBACK_WRAPPERS
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraButtonBase_TriggerAbility(); \
	friend struct Z_Construct_UClass_ULyraButtonBase_TriggerAbility_Statics; \
public: \
	DECLARE_CLASS(ULyraButtonBase_TriggerAbility, UCommonButtonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULyraButtonBase_TriggerAbility) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraButtonBase_TriggerAbility*>(this); }


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraButtonBase_TriggerAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraButtonBase_TriggerAbility(ULyraButtonBase_TriggerAbility&&); \
	ULyraButtonBase_TriggerAbility(const ULyraButtonBase_TriggerAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraButtonBase_TriggerAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraButtonBase_TriggerAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraButtonBase_TriggerAbility) \
	NO_API virtual ~ULyraButtonBase_TriggerAbility();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_17_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_CALLBACK_WRAPPERS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class ULyraButtonBase_TriggerAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_UI_LyraButtonBase_TriggerAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
