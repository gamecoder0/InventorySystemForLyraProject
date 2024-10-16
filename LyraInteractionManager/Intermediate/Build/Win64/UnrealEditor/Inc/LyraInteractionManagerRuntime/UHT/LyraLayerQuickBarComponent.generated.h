// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/LyraLayerQuickBarComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraInventoryItemInstance;
#ifdef LYRAINTERACTIONMANAGERRUNTIME_LyraLayerQuickBarComponent_generated_h
#error "LyraLayerQuickBarComponent.generated.h already included, missing '#pragma once' in LyraLayerQuickBarComponent.h"
#endif
#define LYRAINTERACTIONMANAGERRUNTIME_LyraLayerQuickBarComponent_generated_h

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetActiveSlotIndexInLayer_Implementation(int32 NewIndex); \
	DECLARE_FUNCTION(execOnRep_ActiveSlotIndex); \
	DECLARE_FUNCTION(execOnRep_Slots); \
	DECLARE_FUNCTION(execSetActiveSlotIndexInLayer);


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_CALLBACK_WRAPPERS
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayerQuickBar(); \
	friend struct Z_Construct_UClass_ULayerQuickBar_Statics; \
public: \
	DECLARE_CLASS(ULayerQuickBar, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULayerQuickBar) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slots=NETFIELD_REP_START, \
		LayerName, \
		OwnerControllerComponent, \
		ActiveSlotIndex, \
		LayerIndex, \
		NETFIELD_REP_END=LayerIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULayerQuickBar(ULayerQuickBar&&); \
	ULayerQuickBar(const ULayerQuickBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayerQuickBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayerQuickBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayerQuickBar) \
	NO_API virtual ~ULayerQuickBar();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_19_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_CALLBACK_WRAPPERS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class ULayerQuickBar>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetActiveSlotIndex_Implementation(int32 NewIndex); \
	DECLARE_FUNCTION(execOnRep_LayerQuickBars); \
	DECLARE_FUNCTION(execGetSlotsByLayer); \
	DECLARE_FUNCTION(execSetLayerActive); \
	DECLARE_FUNCTION(execRemoveItemInstance); \
	DECLARE_FUNCTION(execFindAndUpdateItemByInstance); \
	DECLARE_FUNCTION(execFindItemByInstance); \
	DECLARE_FUNCTION(execRemoveItemFromSlot); \
	DECLARE_FUNCTION(execAddItemToSlot); \
	DECLARE_FUNCTION(execGetNextFreeItemSlot); \
	DECLARE_FUNCTION(execGetActiveSlotItem); \
	DECLARE_FUNCTION(execGetActiveSlotIndex); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execSetActiveSlotIndex); \
	DECLARE_FUNCTION(execCycleActiveSlotBackward); \
	DECLARE_FUNCTION(execCycleActiveSlotForward);


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_CALLBACK_WRAPPERS
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraLayerQuickBarComponent(); \
	friend struct Z_Construct_UClass_ULyraLayerQuickBarComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraLayerQuickBarComponent, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULyraLayerQuickBarComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LayerQuickBars=NETFIELD_REP_START, \
		ActiveLayerIndex, \
		NETFIELD_REP_END=ActiveLayerIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraLayerQuickBarComponent(ULyraLayerQuickBarComponent&&); \
	ULyraLayerQuickBarComponent(const ULyraLayerQuickBarComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLayerQuickBarComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLayerQuickBarComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraLayerQuickBarComponent) \
	NO_API virtual ~ULyraLayerQuickBarComponent();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_82_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_CALLBACK_WRAPPERS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class ULyraLayerQuickBarComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayerQuickBarComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
