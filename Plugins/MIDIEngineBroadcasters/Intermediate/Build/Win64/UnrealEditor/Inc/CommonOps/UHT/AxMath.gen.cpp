// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CommonOps/Public/Math/AxMath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMath() {}
// Cross Module References
	COMMONOPS_API UClass* Z_Construct_UClass_UAxMath();
	COMMONOPS_API UClass* Z_Construct_UClass_UAxMath_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CommonOps();
// End Cross Module References
	DEFINE_FUNCTION(UAxMath::execLerpTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_GET_UBOOL(Z_Param_bSlerp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UAxMath::LerpTransform(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_bSlerp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMath::execRoundToNearestMultiple)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumToRound);
		P_GET_PROPERTY(FIntProperty,Z_Param_Multiple);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAxMath::RoundToNearestMultiple(Z_Param_NumToRound,Z_Param_Multiple);
		P_NATIVE_END;
	}
	void UAxMath::StaticRegisterNativesUAxMath()
	{
		UClass* Class = UAxMath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LerpTransform", &UAxMath::execLerpTransform },
			{ "RoundToNearestMultiple", &UAxMath::execRoundToNearestMultiple },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMath_LerpTransform_Statics
	{
		struct AxMath_eventLerpTransform_Parms
		{
			FTransform A;
			FTransform B;
			float Alpha;
			bool bSlerp;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static void NewProp_bSlerp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlerp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMath_eventLerpTransform_Parms, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_A_MetaData), Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_A_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMath_eventLerpTransform_Parms, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_B_MetaData), Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_B_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMath_eventLerpTransform_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_bSlerp_SetBit(void* Obj)
	{
		((AxMath_eventLerpTransform_Parms*)Obj)->bSlerp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_bSlerp = { "bSlerp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AxMath_eventLerpTransform_Parms), &Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_bSlerp_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMath_eventLerpTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMath_LerpTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_bSlerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMath_LerpTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMath_LerpTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Lerp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Lerps a tranform\n\x09 * @param A \n\x09 * @param B \n\x09 * @param Alpha \n\x09 * @param bSlerp if true will expensive SLerp for rotation, else Fast Lerp.\n\x09 * @return \n\x09 */" },
#endif
		{ "CPP_Default_bSlerp", "true" },
		{ "ModuleRelativePath", "Public/Math/AxMath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Lerps a tranform\n@param A\n@param B\n@param Alpha\n@param bSlerp if true will expensive SLerp for rotation, else Fast Lerp.\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMath_LerpTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMath, nullptr, "LerpTransform", nullptr, nullptr, Z_Construct_UFunction_UAxMath_LerpTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMath_LerpTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMath_LerpTransform_Statics::AxMath_eventLerpTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMath_LerpTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMath_LerpTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMath_LerpTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMath_LerpTransform_Statics::AxMath_eventLerpTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMath_LerpTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMath_LerpTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics
	{
		struct AxMath_eventRoundToNearestMultiple_Parms
		{
			int32 NumToRound;
			int32 Multiple;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumToRound;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Multiple;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::NewProp_NumToRound = { "NumToRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMath_eventRoundToNearestMultiple_Parms, NumToRound), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::NewProp_Multiple = { "Multiple", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMath_eventRoundToNearestMultiple_Parms, Multiple), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMath_eventRoundToNearestMultiple_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::NewProp_NumToRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::NewProp_Multiple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonOps|MathExtensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Rounds Number To The Nearest Of A Multiple.\n\x09 * Example: Round to the Nearest Multiple of 11, or 33 or whatever number you want.\n\x09 * todo:verify this is reliable. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Math/AxMath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rounds Number To The Nearest Of A Multiple.\nExample: Round to the Nearest Multiple of 11, or 33 or whatever number you want.\ntodo:verify this is reliable." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMath, nullptr, "RoundToNearestMultiple", nullptr, nullptr, Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::AxMath_eventRoundToNearestMultiple_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::AxMath_eventRoundToNearestMultiple_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMath_RoundToNearestMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMath_RoundToNearestMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMath);
	UClass* Z_Construct_UClass_UAxMath_NoRegister()
	{
		return UAxMath::StaticClass();
	}
	struct Z_Construct_UClass_UAxMath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonOps,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMath_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMath_LerpTransform, "LerpTransform" }, // 2487693502
		{ &Z_Construct_UFunction_UAxMath_RoundToNearestMultiple, "RoundToNearestMultiple" }, // 1217415979
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMath_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMath_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Math/AxMath.h" },
		{ "ModuleRelativePath", "Public/Math/AxMath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMath_Statics::ClassParams = {
		&UAxMath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMath_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMath_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAxMath()
	{
		if (!Z_Registration_Info_UClass_UAxMath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMath.OuterSingleton, Z_Construct_UClass_UAxMath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMath.OuterSingleton;
	}
	template<> COMMONOPS_API UClass* StaticClass<UAxMath>()
	{
		return UAxMath::StaticClass();
	}
	UAxMath::UAxMath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMath);
	UAxMath::~UAxMath() {}
	struct Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_CommonOps_Public_Math_AxMath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_CommonOps_Public_Math_AxMath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMath, UAxMath::StaticClass, TEXT("UAxMath"), &Z_Registration_Info_UClass_UAxMath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMath), 1689862410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_CommonOps_Public_Math_AxMath_h_1343218386(TEXT("/Script/CommonOps"),
		Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_CommonOps_Public_Math_AxMath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_CommonOps_Public_Math_AxMath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
