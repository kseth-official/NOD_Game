// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MidiClasses/AxMidiChord.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AXMIDICORE_AxMidiChord_generated_h
#error "AxMidiChord.generated.h already included, missing '#pragma once' in AxMidiChord.h"
#endif
#define AXMIDICORE_AxMidiChord_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAxMidiChord_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AXMIDICORE_API UScriptStruct* StaticStruct<struct FAxMidiChord>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h


#define FOREACH_ENUM_EAXMIDICHORDTYPE(op) \
	op(EAxMidiChordType::SINGLENOTE) \
	op(EAxMidiChordType::INTERVAL) \
	op(EAxMidiChordType::CHORD) 

enum class EAxMidiChordType : uint8;
template<> struct TIsUEnumClass<EAxMidiChordType> { enum { Value = true }; };
template<> AXMIDICORE_API UEnum* StaticEnum<EAxMidiChordType>();

#define FOREACH_ENUM_EAXMIDICHORDSTRUCTURE(op) \
	op(EAxMidiChordStructure::ALLWHITENOTES) \
	op(EAxMidiChordStructure::ALLBLACKNOTES) \
	op(EAxMidiChordStructure::MIXEDNOTES) 

enum class EAxMidiChordStructure : uint8;
template<> struct TIsUEnumClass<EAxMidiChordStructure> { enum { Value = true }; };
template<> AXMIDICORE_API UEnum* StaticEnum<EAxMidiChordStructure>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
