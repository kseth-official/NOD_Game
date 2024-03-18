// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IAxMidiBroadcaster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAxMidiAsset;
class UAxMidiPlayhead;
#ifdef AXMIDIBROADCASTERS_IAxMidiBroadcaster_generated_h
#error "IAxMidiBroadcaster.generated.h already included, missing '#pragma once' in IAxMidiBroadcaster.h"
#endif
#define AXMIDIBROADCASTERS_IAxMidiBroadcaster_generated_h

#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_SPARSE_DATA
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayhead); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execGetMidiAsset); \
	DECLARE_FUNCTION(execGetBroadcasterName);


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAxMidiBroadcaster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxMidiBroadcaster(UAxMidiBroadcaster&&); \
	NO_API UAxMidiBroadcaster(const UAxMidiBroadcaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxMidiBroadcaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxMidiBroadcaster); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAxMidiBroadcaster) \
	NO_API virtual ~UAxMidiBroadcaster();


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAxMidiBroadcaster(); \
	friend struct Z_Construct_UClass_UAxMidiBroadcaster_Statics; \
public: \
	DECLARE_CLASS(UAxMidiBroadcaster, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AxMidiBroadcasters"), NO_API) \
	DECLARE_SERIALIZER(UAxMidiBroadcaster)


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_GENERATED_UINTERFACE_BODY() \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAxMidiBroadcaster() {} \
public: \
	typedef UAxMidiBroadcaster UClassType; \
	typedef IAxMidiBroadcaster ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_12_PROLOG
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_SPARSE_DATA \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AXMIDIBROADCASTERS_API UClass* StaticClass<class UAxMidiBroadcaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
