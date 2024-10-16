// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/LyraLayersEquipmentManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraEquipmentDefinition;
class ULyraEquipmentInstance;
#ifdef LYRAINTERACTIONMANAGERRUNTIME_LyraLayersEquipmentManagerComponent_generated_h
#error "LyraLayersEquipmentManagerComponent.generated.h already included, missing '#pragma once' in LyraLayersEquipmentManagerComponent.h"
#endif
#define LYRAINTERACTIONMANAGERRUNTIME_LyraLayersEquipmentManagerComponent_generated_h

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAppliedEquipmentEntry_Statics; \
	LYRAINTERACTIONMANAGERRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<struct FAppliedEquipmentEntry>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipmentList_Statics; \
	LYRAINTERACTIONMANAGERRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FEquipmentList, Entries, LYRAINTERACTIONMANAGERRUNTIME_API );


template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<struct FEquipmentList>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_UpdateEquipmentList);


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentLayer(); \
	friend struct Z_Construct_UClass_UEquipmentLayer_Statics; \
public: \
	DECLARE_CLASS(UEquipmentLayer, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentLayer) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentList=NETFIELD_REP_START, \
		OwnerComponent, \
		LayerIndex, \
		LayerName, \
		NETFIELD_REP_END=LayerName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_108_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquipmentLayer(UEquipmentLayer&&); \
	UEquipmentLayer(const UEquipmentLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentLayer) \
	NO_API virtual ~UEquipmentLayer();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_105_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_108_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class UEquipmentLayer>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execGetEquipmentInstancesOfType); \
	DECLARE_FUNCTION(execGetFirstInstanceOfType);


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraLayersEquipmentManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraLayersEquipmentManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraLayersEquipmentManagerComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULyraLayersEquipmentManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentLayers=NETFIELD_REP_START, \
		LayerActive, \
		NETFIELD_REP_END=LayerActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_160_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraLayersEquipmentManagerComponent(ULyraLayersEquipmentManagerComponent&&); \
	ULyraLayersEquipmentManagerComponent(const ULyraLayersEquipmentManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLayersEquipmentManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLayersEquipmentManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraLayersEquipmentManagerComponent) \
	NO_API virtual ~ULyraLayersEquipmentManagerComponent();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_157_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_160_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class ULyraLayersEquipmentManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Equipment_LyraLayersEquipmentManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
