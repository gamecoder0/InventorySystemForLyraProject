// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/LyraLayersInventoryManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IPickupable;
class UInventoryLayer;
class ULyraLayerInventoryItemDefinition;
class ULyraLayerInventoryItemInstance;
#ifdef LYRAINTERACTIONMANAGERRUNTIME_LyraLayersInventoryManagerComponent_generated_h
#error "LyraLayersInventoryManagerComponent.generated.h already included, missing '#pragma once' in LyraLayersInventoryManagerComponent.h"
#endif
#define LYRAINTERACTIONMANAGERRUNTIME_LyraLayersInventoryManagerComponent_generated_h

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryEntry_Statics; \
	LYRAINTERACTIONMANAGERRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<struct FInventoryEntry>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryList_Statics; \
	LYRAINTERACTIONMANAGERRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FInventoryList, Entries, LYRAINTERACTIONMANAGERRUNTIME_API );


template<> LYRAINTERACTIONMANAGERRUNTIME_API UScriptStruct* StaticStruct<struct FInventoryList>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_UpdateInventoryList); \
	DECLARE_FUNCTION(execGetLayerName); \
	DECLARE_FUNCTION(execGetLayerIndex); \
	DECLARE_FUNCTION(execGetMaxSlots); \
	DECLARE_FUNCTION(execSetMaxSlots);


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryLayer(); \
	friend struct Z_Construct_UClass_UInventoryLayer_Statics; \
public: \
	DECLARE_CLASS(UInventoryLayer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(UInventoryLayer) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryList=NETFIELD_REP_START, \
		OwnerComponent, \
		LayerIndex, \
		LayerName, \
		NETFIELD_REP_END=LayerName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryLayer(UInventoryLayer&&); \
	UInventoryLayer(const UInventoryLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryLayer) \
	NO_API virtual ~UInventoryLayer();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_103_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_106_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class UInventoryLayer>();

#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPickupToLayerInventory); \
	DECLARE_FUNCTION(execFindFirstItemStackByDefinition); \
	DECLARE_FUNCTION(execGetInventoryLayerActive); \
	DECLARE_FUNCTION(execGetAllInventoryLayer); \
	DECLARE_FUNCTION(execGetAllItemsByActiveLayer); \
	DECLARE_FUNCTION(execGetAllItemsByLayer); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execRemoveItemInstance); \
	DECLARE_FUNCTION(execAddItemInstance); \
	DECLARE_FUNCTION(execAddItemDefinition); \
	DECLARE_FUNCTION(execCanAddItemDefinition);


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraLayersInventoryManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraLayersInventoryManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraLayersInventoryManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraInteractionManagerRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULyraLayersInventoryManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryLayers=NETFIELD_REP_START, \
		LayerActive, \
		NETFIELD_REP_END=LayerActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_155_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraLayersInventoryManagerComponent(ULyraLayersInventoryManagerComponent&&); \
	ULyraLayersInventoryManagerComponent(const ULyraLayersInventoryManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLayersInventoryManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLayersInventoryManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraLayersInventoryManagerComponent) \
	NO_API virtual ~ULyraLayersInventoryManagerComponent();


#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_152_PROLOG
#define FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_155_INCLASS_NO_PURE_DECLS \
	FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAINTERACTIONMANAGERRUNTIME_API UClass* StaticClass<class ULyraLayersInventoryManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_elegant_Documents_Unreal_Projects_GameLyraTest_Plugins_GameFeatures_LyraInteractionManager_Source_LyraInteractionManagerRuntime_Public_Inventory_LyraLayersInventoryManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
