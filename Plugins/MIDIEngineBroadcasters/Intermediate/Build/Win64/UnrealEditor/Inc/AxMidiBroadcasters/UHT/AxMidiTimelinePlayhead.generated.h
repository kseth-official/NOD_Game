// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playheads/AxMidiTimelinePlayhead.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAxMidiTimelinePlayhead;
#ifdef AXMIDIBROADCASTERS_AxMidiTimelinePlayhead_generated_h
#error "AxMidiTimelinePlayhead.generated.h already included, missing '#pragma once' in AxMidiTimelinePlayhead.h"
#endif
#define AXMIDIBROADCASTERS_AxMidiTimelinePlayhead_generated_h

#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_14_DELEGATE \
AXMIDIBROADCASTERS_API void FAxOnMidiSectionEvent_DelegateWrapper(const FMulticastScriptDelegate& AxOnMidiSectionEvent, UAxMidiTimelinePlayhead* MidiPlayhead);


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_SPARSE_DATA
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTimelineSectionFinished);


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAxMidiTimelinePlayhead(); \
	friend struct Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics; \
public: \
	DECLARE_CLASS(UAxMidiTimelinePlayhead, UAxMidiPlayhead, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AxMidiBroadcasters"), NO_API) \
	DECLARE_SERIALIZER(UAxMidiTimelinePlayhead)


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAxMidiTimelinePlayhead(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxMidiTimelinePlayhead(UAxMidiTimelinePlayhead&&); \
	NO_API UAxMidiTimelinePlayhead(const UAxMidiTimelinePlayhead&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxMidiTimelinePlayhead); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxMidiTimelinePlayhead); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAxMidiTimelinePlayhead) \
	NO_API virtual ~UAxMidiTimelinePlayhead();


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_19_PROLOG
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_SPARSE_DATA \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_INCLASS_NO_PURE_DECLS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AXMIDIBROADCASTERS_API UClass* StaticClass<class UAxMidiTimelinePlayhead>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
