// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UtilityClasses/AxUtilityEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONOPS_AxUtilityEnums_generated_h
#error "AxUtilityEnums.generated.h already included, missing '#pragma once' in AxUtilityEnums.h"
#endif
#define COMMONOPS_AxUtilityEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_UtilityClasses_AxUtilityEnums_h


#define FOREACH_ENUM_EAXTRANSFORMSPACE(op) \
	op(EAxTransformSpace::LOCAL) \
	op(EAxTransformSpace::GLOBAL) \
	op(EAxTransformSpace::WORLD) 

enum class EAxTransformSpace : uint8;
template<> struct TIsUEnumClass<EAxTransformSpace> { enum { Value = true }; };
template<> COMMONOPS_API UEnum* StaticEnum<EAxTransformSpace>();

#define FOREACH_ENUM_EAXMUSICALPITCHCOLOR(op) \
	op(EAxMusicalPitchColor::UNDEFINED) \
	op(EAxMusicalPitchColor::WHITE) \
	op(EAxMusicalPitchColor::BLACK) 

enum class EAxMusicalPitchColor : uint8;
template<> struct TIsUEnumClass<EAxMusicalPitchColor> { enum { Value = true }; };
template<> COMMONOPS_API UEnum* StaticEnum<EAxMusicalPitchColor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
