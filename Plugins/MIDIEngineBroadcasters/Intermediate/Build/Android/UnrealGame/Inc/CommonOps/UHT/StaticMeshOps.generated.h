// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshes/StaticMeshOps.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UStaticMesh;
class UStaticMeshComponent;
class UStaticMeshSocket;
enum class EAxAxis : uint8;
#ifdef COMMONOPS_StaticMeshOps_generated_h
#error "StaticMeshOps.generated.h already included, missing '#pragma once' in StaticMeshOps.h"
#endif
#define COMMONOPS_StaticMeshOps_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteSocketsByNamePrefix); \
	DECLARE_FUNCTION(execDeleteSocketsByTag); \
	DECLARE_FUNCTION(execCopyTemplateSocketAlongAxisOnAssets); \
	DECLARE_FUNCTION(execCopyTemplateSocketAlongAxis); \
	DECLARE_FUNCTION(execAddSocketToStaticMesh); \
	DECLARE_FUNCTION(execGetStaticMeshDimensions);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshOps(); \
	friend struct Z_Construct_UClass_UStaticMeshOps_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshOps, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonOps"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshOps)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshOps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshOps(UStaticMeshOps&&); \
	NO_API UStaticMeshOps(const UStaticMeshOps&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshOps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshOps); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshOps) \
	NO_API virtual ~UStaticMeshOps();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_24_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONOPS_API UClass* StaticClass<class UStaticMeshOps>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h


#define FOREACH_ENUM_EAXAXIS(op) \
	op(EAxAxis::X) \
	op(EAxAxis::Y) \
	op(EAxAxis::Z) 

enum class EAxAxis : uint8;
template<> struct TIsUEnumClass<EAxAxis> { enum { Value = true }; };
template<> COMMONOPS_API UEnum* StaticEnum<EAxAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
