// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IAxMidiListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAxMidiBroadcaster;
class UAxMidiNote;
class UAxMidiPlayhead;
struct FAxMidiChord;
#ifdef AXMIDIBROADCASTERS_IAxMidiListener_generated_h
#error "IAxMidiListener.generated.h already included, missing '#pragma once' in IAxMidiListener.h"
#endif
#define AXMIDIBROADCASTERS_IAxMidiListener_generated_h

#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_SPARSE_DATA
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSubsystemBPMEvent); \
	DECLARE_FUNCTION(execOnSubsystemMidiNoteOff); \
	DECLARE_FUNCTION(execOnSubsystemChordOn);


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAxMidiListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxMidiListener(UAxMidiListener&&); \
	NO_API UAxMidiListener(const UAxMidiListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxMidiListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxMidiListener); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAxMidiListener) \
	NO_API virtual ~UAxMidiListener();


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAxMidiListener(); \
	friend struct Z_Construct_UClass_UAxMidiListener_Statics; \
public: \
	DECLARE_CLASS(UAxMidiListener, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AxMidiBroadcasters"), NO_API) \
	DECLARE_SERIALIZER(UAxMidiListener)


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_GENERATED_UINTERFACE_BODY() \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAxMidiListener() {} \
public: \
	typedef UAxMidiListener UClassType; \
	typedef IAxMidiListener ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_12_PROLOG
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_SPARSE_DATA \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AXMIDIBROADCASTERS_API UClass* StaticClass<class UAxMidiListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
