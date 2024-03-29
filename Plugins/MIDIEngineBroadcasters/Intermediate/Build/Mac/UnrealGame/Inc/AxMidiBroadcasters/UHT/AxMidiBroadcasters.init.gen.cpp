// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiBroadcasters_init() {}
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiBroadcasterDelegates__DelegateSignature();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AxMidiBroadcasters;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters()
	{
		if (!Z_Registration_Info_UPackage__Script_AxMidiBroadcasters.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiBroadcasterDelegates__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AxMidiBroadcasters",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC07CACBA,
				0x13ED294C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AxMidiBroadcasters.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AxMidiBroadcasters.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AxMidiBroadcasters(Z_Construct_UPackage__Script_AxMidiBroadcasters, TEXT("/Script/AxMidiBroadcasters"), Z_Registration_Info_UPackage__Script_AxMidiBroadcasters, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC07CACBA, 0x13ED294C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
