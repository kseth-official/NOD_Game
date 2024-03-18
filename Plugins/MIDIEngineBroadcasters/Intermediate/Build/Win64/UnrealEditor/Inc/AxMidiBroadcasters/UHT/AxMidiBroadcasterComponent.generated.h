// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AxMidiBroadcasterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAxMidiAsset;
class UAxMidiBroadcasterComponent;
class UAxMidiPlayhead;
class USoundBase;
class USoundWave;
#ifdef AXMIDIBROADCASTERS_AxMidiBroadcasterComponent_generated_h
#error "AxMidiBroadcasterComponent.generated.h already included, missing '#pragma once' in AxMidiBroadcasterComponent.h"
#endif
#define AXMIDIBROADCASTERS_AxMidiBroadcasterComponent_generated_h

#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_15_DELEGATE \
AXMIDIBROADCASTERS_API void FAxMidiBroadcasterDelegates_DelegateWrapper(const FMulticastScriptDelegate& AxMidiBroadcasterDelegates, UAxMidiBroadcasterComponent* MidiBroadcaster);


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_SPARSE_DATA
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireOnBroadcastCompleteDelegate); \
	DECLARE_FUNCTION(execHandleOnAudioFinished); \
	DECLARE_FUNCTION(execHandleOnAudioPlaybackPercent); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execStartBroadcast); \
	DECLARE_FUNCTION(execGetPlayhead); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execGetMidiAsset); \
	DECLARE_FUNCTION(execGetBroadcasterName);


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_ACCESSORS
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAxMidiBroadcasterComponent(); \
	friend struct Z_Construct_UClass_UAxMidiBroadcasterComponent_Statics; \
public: \
	DECLARE_CLASS(UAxMidiBroadcasterComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AxMidiBroadcasters"), NO_API) \
	DECLARE_SERIALIZER(UAxMidiBroadcasterComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAxMidiBroadcasterComponent*>(this); }


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxMidiBroadcasterComponent(UAxMidiBroadcasterComponent&&); \
	NO_API UAxMidiBroadcasterComponent(const UAxMidiBroadcasterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxMidiBroadcasterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxMidiBroadcasterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAxMidiBroadcasterComponent) \
	NO_API virtual ~UAxMidiBroadcasterComponent();


#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_23_PROLOG
#define FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_SPARSE_DATA \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_ACCESSORS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AXMIDIBROADCASTERS_API UClass* StaticClass<class UAxMidiBroadcasterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiBroadcasterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
