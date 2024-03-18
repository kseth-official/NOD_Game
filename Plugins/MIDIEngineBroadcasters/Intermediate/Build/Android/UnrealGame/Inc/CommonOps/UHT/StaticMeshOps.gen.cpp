// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CommonOps/Public/StaticMeshes/StaticMeshOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshOps() {}
// Cross Module References
	COMMONOPS_API UClass* Z_Construct_UClass_UStaticMeshOps();
	COMMONOPS_API UClass* Z_Construct_UClass_UStaticMeshOps_NoRegister();
	COMMONOPS_API UEnum* Z_Construct_UEnum_CommonOps_EAxAxis();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonOps();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxAxis;
	static UEnum* EAxAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonOps_EAxAxis, (UObject*)Z_Construct_UPackage__Script_CommonOps(), TEXT("EAxAxis"));
		}
		return Z_Registration_Info_UEnum_EAxAxis.OuterSingleton;
	}
	template<> COMMONOPS_API UEnum* StaticEnum<EAxAxis>()
	{
		return EAxAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonOps_EAxAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonOps_EAxAxis_Statics::Enumerators[] = {
		{ "EAxAxis::X", (int64)EAxAxis::X },
		{ "EAxAxis::Y", (int64)EAxAxis::Y },
		{ "EAxAxis::Z", (int64)EAxAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonOps_EAxAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshes/StaticMeshOps.h" },
		{ "X.Name", "EAxAxis::X" },
		{ "Y.Name", "EAxAxis::Y" },
		{ "Z.Name", "EAxAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonOps_EAxAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonOps,
		nullptr,
		"EAxAxis",
		"EAxAxis",
		Z_Construct_UEnum_CommonOps_EAxAxis_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonOps_EAxAxis_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CommonOps_EAxAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CommonOps_EAxAxis_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CommonOps_EAxAxis()
	{
		if (!Z_Registration_Info_UEnum_EAxAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxAxis.InnerSingleton, Z_Construct_UEnum_CommonOps_EAxAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxAxis.InnerSingleton;
	}
	DEFINE_FUNCTION(UStaticMeshOps::execDeleteSocketsByNamePrefix)
	{
		P_GET_TARRAY(UObject*,Z_Param_InStaticMeshAssets);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNamePrefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_SuffixFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UStaticMeshOps::DeleteSocketsByNamePrefix(Z_Param_InStaticMeshAssets,Z_Param_InNamePrefix,Z_Param_SuffixFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshOps::execDeleteSocketsByTag)
	{
		P_GET_TARRAY(UObject*,Z_Param_InStaticMeshAssets);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSocketTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UStaticMeshOps::DeleteSocketsByTag(Z_Param_InStaticMeshAssets,Z_Param_InSocketTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshOps::execCopyTemplateSocketAlongAxisOnAssets)
	{
		P_GET_TARRAY(UObject*,Z_Param_InStaticMeshAssets);
		P_GET_ENUM(EAxAxis,Z_Param_InAxis);
		P_GET_PROPERTY(FNameProperty,Z_Param_InTemplateSocketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewSocketsTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSocketsToCreate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSocketsOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStaticMeshOps::CopyTemplateSocketAlongAxisOnAssets(Z_Param_InStaticMeshAssets,EAxAxis(Z_Param_InAxis),Z_Param_InTemplateSocketName,Z_Param_InNewSocketsTag,Z_Param_NumSocketsToCreate,Z_Param_InSocketsOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshOps::execCopyTemplateSocketAlongAxis)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_InStaticMesh);
		P_GET_ENUM(EAxAxis,Z_Param_InAxis);
		P_GET_PROPERTY(FNameProperty,Z_Param_InTemplateSocketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewSocketsTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSocketsToCreate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSocketsOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStaticMeshOps::CopyTemplateSocketAlongAxis(Z_Param_InStaticMesh,EAxAxis(Z_Param_InAxis),Z_Param_InTemplateSocketName,Z_Param_InNewSocketsTag,Z_Param_NumSocketsToCreate,Z_Param_InSocketsOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshOps::execAddSocketToStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_InStaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshSocket**)Z_Param__Result=UStaticMeshOps::AddSocketToStaticMesh(Z_Param_InStaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshOps::execGetStaticMeshDimensions)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UStaticMeshOps::GetStaticMeshDimensions(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	void UStaticMeshOps::StaticRegisterNativesUStaticMeshOps()
	{
		UClass* Class = UStaticMeshOps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSocketToStaticMesh", &UStaticMeshOps::execAddSocketToStaticMesh },
			{ "CopyTemplateSocketAlongAxis", &UStaticMeshOps::execCopyTemplateSocketAlongAxis },
			{ "CopyTemplateSocketAlongAxisOnAssets", &UStaticMeshOps::execCopyTemplateSocketAlongAxisOnAssets },
			{ "DeleteSocketsByNamePrefix", &UStaticMeshOps::execDeleteSocketsByNamePrefix },
			{ "DeleteSocketsByTag", &UStaticMeshOps::execDeleteSocketsByTag },
			{ "GetStaticMeshDimensions", &UStaticMeshOps::execGetStaticMeshDimensions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics
	{
		struct StaticMeshOps_eventAddSocketToStaticMesh_Parms
		{
			UStaticMesh* InStaticMesh;
			UStaticMeshSocket* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::NewProp_InStaticMesh = { "InStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventAddSocketToStaticMesh_Parms, InStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventAddSocketToStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::NewProp_InStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|StaticMesh" },
		{ "ModuleRelativePath", "Public/StaticMeshes/StaticMeshOps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOps, nullptr, "AddSocketToStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::StaticMeshOps_eventAddSocketToStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::StaticMeshOps_eventAddSocketToStaticMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics
	{
		struct StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms
		{
			UStaticMesh* InStaticMesh;
			EAxAxis InAxis;
			FName InTemplateSocketName;
			FString InNewSocketsTag;
			int32 NumSocketsToCreate;
			float InSocketsOffset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InAxis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InAxis;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTemplateSocketName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNewSocketsTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSocketsToCreate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSocketsOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InStaticMesh = { "InStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms, InStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InAxis = { "InAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms, InAxis), Z_Construct_UEnum_CommonOps_EAxAxis, METADATA_PARAMS(0, nullptr) }; // 1086029968
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InTemplateSocketName = { "InTemplateSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms, InTemplateSocketName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InNewSocketsTag = { "InNewSocketsTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms, InNewSocketsTag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_NumSocketsToCreate = { "NumSocketsToCreate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms, NumSocketsToCreate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InSocketsOffset = { "InSocketsOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms, InSocketsOffset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms), &Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InTemplateSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InNewSocketsTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_NumSocketsToCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_InSocketsOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|StaticMesh" },
		{ "ModuleRelativePath", "Public/StaticMeshes/StaticMeshOps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOps, nullptr, "CopyTemplateSocketAlongAxis", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::StaticMeshOps_eventCopyTemplateSocketAlongAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics
	{
		struct StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms
		{
			TArray<UObject*> InStaticMeshAssets;
			EAxAxis InAxis;
			FName InTemplateSocketName;
			FString InNewSocketsTag;
			int32 NumSocketsToCreate;
			float InSocketsOffset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMeshAssets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InStaticMeshAssets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InAxis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InAxis;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTemplateSocketName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNewSocketsTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSocketsToCreate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSocketsOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InStaticMeshAssets_Inner = { "InStaticMeshAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InStaticMeshAssets = { "InStaticMeshAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms, InStaticMeshAssets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InAxis = { "InAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms, InAxis), Z_Construct_UEnum_CommonOps_EAxAxis, METADATA_PARAMS(0, nullptr) }; // 1086029968
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InTemplateSocketName = { "InTemplateSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms, InTemplateSocketName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InNewSocketsTag = { "InNewSocketsTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms, InNewSocketsTag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_NumSocketsToCreate = { "NumSocketsToCreate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms, NumSocketsToCreate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InSocketsOffset = { "InSocketsOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms, InSocketsOffset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms), &Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InStaticMeshAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InStaticMeshAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InTemplateSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InNewSocketsTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_NumSocketsToCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_InSocketsOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|StaticMesh" },
		{ "ModuleRelativePath", "Public/StaticMeshes/StaticMeshOps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOps, nullptr, "CopyTemplateSocketAlongAxisOnAssets", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::StaticMeshOps_eventCopyTemplateSocketAlongAxisOnAssets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics
	{
		struct StaticMeshOps_eventDeleteSocketsByNamePrefix_Parms
		{
			TArray<UObject*> InStaticMeshAssets;
			FString InNamePrefix;
			FString SuffixFilter;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMeshAssets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InStaticMeshAssets;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNamePrefix;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SuffixFilter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_InStaticMeshAssets_Inner = { "InStaticMeshAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_InStaticMeshAssets = { "InStaticMeshAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventDeleteSocketsByNamePrefix_Parms, InStaticMeshAssets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_InNamePrefix = { "InNamePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventDeleteSocketsByNamePrefix_Parms, InNamePrefix), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_SuffixFilter = { "SuffixFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventDeleteSocketsByNamePrefix_Parms, SuffixFilter), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventDeleteSocketsByNamePrefix_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_InStaticMeshAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_InStaticMeshAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_InNamePrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_SuffixFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|StaticMesh" },
		{ "Comment", "/**\n\x09 * @brief Takes an array of meshes and deletes certain sockets by what the  name starts with.\n\x09 * @param InStaticMeshAssets\n\x09 * @param InNamePrefix\n\x09 * @param SuffixFilter those that end with this suffix will be skipped\n\x09 * @return Num Sockets removes\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshes/StaticMeshOps.h" },
		{ "ToolTip", "@brief Takes an array of meshes and deletes certain sockets by what the  name starts with.\n@param InStaticMeshAssets\n@param InNamePrefix\n@param SuffixFilter those that end with this suffix will be skipped\n@return Num Sockets removes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOps, nullptr, "DeleteSocketsByNamePrefix", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::StaticMeshOps_eventDeleteSocketsByNamePrefix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::StaticMeshOps_eventDeleteSocketsByNamePrefix_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics
	{
		struct StaticMeshOps_eventDeleteSocketsByTag_Parms
		{
			TArray<UObject*> InStaticMeshAssets;
			FString InSocketTag;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMeshAssets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InStaticMeshAssets;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSocketTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::NewProp_InStaticMeshAssets_Inner = { "InStaticMeshAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::NewProp_InStaticMeshAssets = { "InStaticMeshAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventDeleteSocketsByTag_Parms, InStaticMeshAssets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::NewProp_InSocketTag = { "InSocketTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventDeleteSocketsByTag_Parms, InSocketTag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventDeleteSocketsByTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::NewProp_InStaticMeshAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::NewProp_InStaticMeshAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::NewProp_InSocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|StaticMesh" },
		{ "Comment", "/**\n\x09 * @brief Takes an array of meshes and deletes certain sockets by tag.\n\x09 * @param InStaticMeshAssets \n\x09 * @param InSocketTag \n\x09 * @return Num Sockets removes\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshes/StaticMeshOps.h" },
		{ "ToolTip", "@brief Takes an array of meshes and deletes certain sockets by tag.\n@param InStaticMeshAssets\n@param InSocketTag\n@return Num Sockets removes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOps, nullptr, "DeleteSocketsByTag", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::StaticMeshOps_eventDeleteSocketsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::StaticMeshOps_eventDeleteSocketsByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics
	{
		struct StaticMeshOps_eventGetStaticMeshDimensions_Parms
		{
			const UStaticMeshComponent* StaticMeshComponent;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventGetStaticMeshDimensions_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::NewProp_StaticMeshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOps_eventGetStaticMeshDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|StaticMesh" },
		{ "Comment", "/**\n\x09 * @brief Gets a StaticMeshComponent's current dimensions in world space.\n\x09 *\x09\x09  Takes into account scaling and rotation.\n\x09 * @param StaticMeshComponent\n\x09 * @return\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshes/StaticMeshOps.h" },
		{ "ToolTip", "@brief Gets a StaticMeshComponent's current dimensions in world space.\n               Takes into account scaling and rotation.\n@param StaticMeshComponent\n@return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOps, nullptr, "GetStaticMeshDimensions", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::StaticMeshOps_eventGetStaticMeshDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::StaticMeshOps_eventGetStaticMeshDimensions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshOps);
	UClass* Z_Construct_UClass_UStaticMeshOps_NoRegister()
	{
		return UStaticMeshOps::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshOps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshOps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonOps,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshOps_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMeshOps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshOps_AddSocketToStaticMesh, "AddSocketToStaticMesh" }, // 2055140081
		{ &Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxis, "CopyTemplateSocketAlongAxis" }, // 2655499468
		{ &Z_Construct_UFunction_UStaticMeshOps_CopyTemplateSocketAlongAxisOnAssets, "CopyTemplateSocketAlongAxisOnAssets" }, // 2379119966
		{ &Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByNamePrefix, "DeleteSocketsByNamePrefix" }, // 3452458514
		{ &Z_Construct_UFunction_UStaticMeshOps_DeleteSocketsByTag, "DeleteSocketsByTag" }, // 3327488168
		{ &Z_Construct_UFunction_UStaticMeshOps_GetStaticMeshDimensions, "GetStaticMeshDimensions" }, // 302035000
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshOps_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshOps_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StaticMeshes/StaticMeshOps.h" },
		{ "ModuleRelativePath", "Public/StaticMeshes/StaticMeshOps.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshOps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshOps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshOps_Statics::ClassParams = {
		&UStaticMeshOps::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshOps_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticMeshOps_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStaticMeshOps()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshOps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshOps.OuterSingleton, Z_Construct_UClass_UStaticMeshOps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshOps.OuterSingleton;
	}
	template<> COMMONOPS_API UClass* StaticClass<UStaticMeshOps>()
	{
		return UStaticMeshOps::StaticClass();
	}
	UStaticMeshOps::UStaticMeshOps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshOps);
	UStaticMeshOps::~UStaticMeshOps() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_Statics::EnumInfo[] = {
		{ EAxAxis_StaticEnum, TEXT("EAxAxis"), &Z_Registration_Info_UEnum_EAxAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1086029968U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshOps, UStaticMeshOps::StaticClass, TEXT("UStaticMeshOps"), &Z_Registration_Info_UClass_UStaticMeshOps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshOps), 3640748790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_2264705110(TEXT("/Script/CommonOps"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_StaticMeshes_StaticMeshOps_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
