// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnreal/Public/InitializeAI.h"
#include "iamaiUnreal/Public/iamaiConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitializeAI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UAIWrapper_NoRegister();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UBinModelAsset_NoRegister();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UGGUFModelAsset_NoRegister();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UInitializeAI();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UInitializeAI_NoRegister();
IAMAIUNREAL_API UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature();
IAMAIUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FiamaiConfig();
UPackage* Z_Construct_UPackage__Script_iamaiUnreal();
// End Cross Module References

// Begin Delegate FAIWraperInitialized
struct Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics
{
	struct _Script_iamaiUnreal_eventAIWraperInitialized_Parms
	{
		bool bSuccess;
		UAIWrapper* Wrapper;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wrapper;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_iamaiUnreal_eventAIWraperInitialized_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_iamaiUnreal_eventAIWraperInitialized_Parms), &Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::NewProp_Wrapper = { "Wrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_iamaiUnreal_eventAIWraperInitialized_Parms, Wrapper), Z_Construct_UClass_UAIWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::NewProp_Wrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_iamaiUnreal, nullptr, "AIWraperInitialized__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::_Script_iamaiUnreal_eventAIWraperInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::_Script_iamaiUnreal_eventAIWraperInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAIWraperInitialized_DelegateWrapper(const FMulticastScriptDelegate& AIWraperInitialized, bool bSuccess, UAIWrapper* Wrapper)
{
	struct _Script_iamaiUnreal_eventAIWraperInitialized_Parms
	{
		bool bSuccess;
		UAIWrapper* Wrapper;
	};
	_Script_iamaiUnreal_eventAIWraperInitialized_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Wrapper=Wrapper;
	AIWraperInitialized.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAIWraperInitialized

// Begin Class UInitializeAI Function CreateInitializeAll
struct Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics
{
	struct InitializeAI_eventCreateInitializeAll_Parms
	{
		UGGUFModelAsset* IamaiModel;
		UBinModelAsset* WhisperModel;
		UInitializeAI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "iamai" },
		{ "DisplayName", "Create and Initialize iamai and whisper" },
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IamaiModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhisperModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::NewProp_IamaiModel = { "IamaiModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeAll_Parms, IamaiModel), Z_Construct_UClass_UGGUFModelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::NewProp_WhisperModel = { "WhisperModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeAll_Parms, WhisperModel), Z_Construct_UClass_UBinModelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeAll_Parms, ReturnValue), Z_Construct_UClass_UInitializeAI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::NewProp_IamaiModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::NewProp_WhisperModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitializeAI, nullptr, "CreateInitializeAll", nullptr, nullptr, Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::InitializeAI_eventCreateInitializeAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::InitializeAI_eventCreateInitializeAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitializeAI_CreateInitializeAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitializeAI_CreateInitializeAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitializeAI::execCreateInitializeAll)
{
	P_GET_OBJECT(UGGUFModelAsset,Z_Param_IamaiModel);
	P_GET_OBJECT(UBinModelAsset,Z_Param_WhisperModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInitializeAI**)Z_Param__Result=UInitializeAI::CreateInitializeAll(Z_Param_IamaiModel,Z_Param_WhisperModel);
	P_NATIVE_END;
}
// End Class UInitializeAI Function CreateInitializeAll

// Begin Class UInitializeAI Function CreateInitializeIamai
struct Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics
{
	struct InitializeAI_eventCreateInitializeIamai_Parms
	{
		UGGUFModelAsset* IamaiModel;
		UInitializeAI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "iamai" },
		{ "DisplayName", "Create and Initialize iamai" },
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IamaiModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::NewProp_IamaiModel = { "IamaiModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeIamai_Parms, IamaiModel), Z_Construct_UClass_UGGUFModelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeIamai_Parms, ReturnValue), Z_Construct_UClass_UInitializeAI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::NewProp_IamaiModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitializeAI, nullptr, "CreateInitializeIamai", nullptr, nullptr, Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::InitializeAI_eventCreateInitializeIamai_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::InitializeAI_eventCreateInitializeIamai_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitializeAI::execCreateInitializeIamai)
{
	P_GET_OBJECT(UGGUFModelAsset,Z_Param_IamaiModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInitializeAI**)Z_Param__Result=UInitializeAI::CreateInitializeIamai(Z_Param_IamaiModel);
	P_NATIVE_END;
}
// End Class UInitializeAI Function CreateInitializeIamai

// Begin Class UInitializeAI Function CreateInitializeIamaiParamaters
struct Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics
{
	struct InitializeAI_eventCreateInitializeIamaiParamaters_Parms
	{
		UGGUFModelAsset* IamaiModel;
		FiamaiConfig config;
		UInitializeAI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "iamai" },
		{ "DisplayName", "Create and Initialize iamai with Paramaters" },
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IamaiModel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::NewProp_IamaiModel = { "IamaiModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeIamaiParamaters_Parms, IamaiModel), Z_Construct_UClass_UGGUFModelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeIamaiParamaters_Parms, config), Z_Construct_UScriptStruct_FiamaiConfig, METADATA_PARAMS(0, nullptr) }; // 3488929887
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeIamaiParamaters_Parms, ReturnValue), Z_Construct_UClass_UInitializeAI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::NewProp_IamaiModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::NewProp_config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitializeAI, nullptr, "CreateInitializeIamaiParamaters", nullptr, nullptr, Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::InitializeAI_eventCreateInitializeIamaiParamaters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::InitializeAI_eventCreateInitializeIamaiParamaters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitializeAI::execCreateInitializeIamaiParamaters)
{
	P_GET_OBJECT(UGGUFModelAsset,Z_Param_IamaiModel);
	P_GET_STRUCT(FiamaiConfig,Z_Param_config);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInitializeAI**)Z_Param__Result=UInitializeAI::CreateInitializeIamaiParamaters(Z_Param_IamaiModel,Z_Param_config);
	P_NATIVE_END;
}
// End Class UInitializeAI Function CreateInitializeIamaiParamaters

// Begin Class UInitializeAI Function CreateInitializeWhisper
struct Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics
{
	struct InitializeAI_eventCreateInitializeWhisper_Parms
	{
		UBinModelAsset* model;
		int32 threads;
		UInitializeAI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "iamai" },
		{ "CPP_Default_threads", "1" },
		{ "DisplayName", "Create and Initialize whisper" },
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_model;
	static const UECodeGen_Private::FIntPropertyParams NewProp_threads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeWhisper_Parms, model), Z_Construct_UClass_UBinModelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::NewProp_threads = { "threads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeWhisper_Parms, threads), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventCreateInitializeWhisper_Parms, ReturnValue), Z_Construct_UClass_UInitializeAI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::NewProp_model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::NewProp_threads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitializeAI, nullptr, "CreateInitializeWhisper", nullptr, nullptr, Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::InitializeAI_eventCreateInitializeWhisper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::InitializeAI_eventCreateInitializeWhisper_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitializeAI::execCreateInitializeWhisper)
{
	P_GET_OBJECT(UBinModelAsset,Z_Param_model);
	P_GET_PROPERTY(FIntProperty,Z_Param_threads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInitializeAI**)Z_Param__Result=UInitializeAI::CreateInitializeWhisper(Z_Param_model,Z_Param_threads);
	P_NATIVE_END;
}
// End Class UInitializeAI Function CreateInitializeWhisper

// Begin Class UInitializeAI Function InitializeIamai
struct Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics
{
	struct InitializeAI_eventInitializeIamai_Parms
	{
		UAIWrapper* Wrapper;
		UGGUFModelAsset* IamaiModel;
		UInitializeAI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "iamai" },
		{ "DisplayName", "Initialize iamai" },
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wrapper;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IamaiModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::NewProp_Wrapper = { "Wrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeIamai_Parms, Wrapper), Z_Construct_UClass_UAIWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::NewProp_IamaiModel = { "IamaiModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeIamai_Parms, IamaiModel), Z_Construct_UClass_UGGUFModelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeIamai_Parms, ReturnValue), Z_Construct_UClass_UInitializeAI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::NewProp_Wrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::NewProp_IamaiModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitializeAI, nullptr, "InitializeIamai", nullptr, nullptr, Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::InitializeAI_eventInitializeIamai_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::InitializeAI_eventInitializeIamai_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitializeAI_InitializeIamai()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitializeAI_InitializeIamai_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitializeAI::execInitializeIamai)
{
	P_GET_OBJECT(UAIWrapper,Z_Param_Wrapper);
	P_GET_OBJECT(UGGUFModelAsset,Z_Param_IamaiModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInitializeAI**)Z_Param__Result=UInitializeAI::InitializeIamai(Z_Param_Wrapper,Z_Param_IamaiModel);
	P_NATIVE_END;
}
// End Class UInitializeAI Function InitializeIamai

// Begin Class UInitializeAI Function InitializeIamaiParamaters
struct Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics
{
	struct InitializeAI_eventInitializeIamaiParamaters_Parms
	{
		UAIWrapper* Wrapper;
		UGGUFModelAsset* IamaiModel;
		FiamaiConfig config;
		UInitializeAI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "iamai" },
		{ "DisplayName", "Initialize iamai with paramaters" },
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wrapper;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IamaiModel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::NewProp_Wrapper = { "Wrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeIamaiParamaters_Parms, Wrapper), Z_Construct_UClass_UAIWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::NewProp_IamaiModel = { "IamaiModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeIamaiParamaters_Parms, IamaiModel), Z_Construct_UClass_UGGUFModelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeIamaiParamaters_Parms, config), Z_Construct_UScriptStruct_FiamaiConfig, METADATA_PARAMS(0, nullptr) }; // 3488929887
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeIamaiParamaters_Parms, ReturnValue), Z_Construct_UClass_UInitializeAI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::NewProp_Wrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::NewProp_IamaiModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::NewProp_config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitializeAI, nullptr, "InitializeIamaiParamaters", nullptr, nullptr, Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::InitializeAI_eventInitializeIamaiParamaters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::InitializeAI_eventInitializeIamaiParamaters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitializeAI::execInitializeIamaiParamaters)
{
	P_GET_OBJECT(UAIWrapper,Z_Param_Wrapper);
	P_GET_OBJECT(UGGUFModelAsset,Z_Param_IamaiModel);
	P_GET_STRUCT(FiamaiConfig,Z_Param_config);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInitializeAI**)Z_Param__Result=UInitializeAI::InitializeIamaiParamaters(Z_Param_Wrapper,Z_Param_IamaiModel,Z_Param_config);
	P_NATIVE_END;
}
// End Class UInitializeAI Function InitializeIamaiParamaters

// Begin Class UInitializeAI Function InitializeWhisper
struct Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics
{
	struct InitializeAI_eventInitializeWhisper_Parms
	{
		UAIWrapper* Wrapper;
		UBinModelAsset* model;
		int32 threads;
		UInitializeAI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "iamai" },
		{ "CPP_Default_threads", "1" },
		{ "DisplayName", "Initialize whisper" },
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wrapper;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_model;
	static const UECodeGen_Private::FIntPropertyParams NewProp_threads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::NewProp_Wrapper = { "Wrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeWhisper_Parms, Wrapper), Z_Construct_UClass_UAIWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeWhisper_Parms, model), Z_Construct_UClass_UBinModelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::NewProp_threads = { "threads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeWhisper_Parms, threads), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitializeAI_eventInitializeWhisper_Parms, ReturnValue), Z_Construct_UClass_UInitializeAI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::NewProp_Wrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::NewProp_model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::NewProp_threads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitializeAI, nullptr, "InitializeWhisper", nullptr, nullptr, Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::InitializeAI_eventInitializeWhisper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::InitializeAI_eventInitializeWhisper_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitializeAI_InitializeWhisper()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitializeAI_InitializeWhisper_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitializeAI::execInitializeWhisper)
{
	P_GET_OBJECT(UAIWrapper,Z_Param_Wrapper);
	P_GET_OBJECT(UBinModelAsset,Z_Param_model);
	P_GET_PROPERTY(FIntProperty,Z_Param_threads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInitializeAI**)Z_Param__Result=UInitializeAI::InitializeWhisper(Z_Param_Wrapper,Z_Param_model,Z_Param_threads);
	P_NATIVE_END;
}
// End Class UInitializeAI Function InitializeWhisper

// Begin Class UInitializeAI
void UInitializeAI::StaticRegisterNativesUInitializeAI()
{
	UClass* Class = UInitializeAI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateInitializeAll", &UInitializeAI::execCreateInitializeAll },
		{ "CreateInitializeIamai", &UInitializeAI::execCreateInitializeIamai },
		{ "CreateInitializeIamaiParamaters", &UInitializeAI::execCreateInitializeIamaiParamaters },
		{ "CreateInitializeWhisper", &UInitializeAI::execCreateInitializeWhisper },
		{ "InitializeIamai", &UInitializeAI::execInitializeIamai },
		{ "InitializeIamaiParamaters", &UInitializeAI::execInitializeIamaiParamaters },
		{ "InitializeWhisper", &UInitializeAI::execInitializeWhisper },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInitializeAI);
UClass* Z_Construct_UClass_UInitializeAI_NoRegister()
{
	return UInitializeAI::StaticClass();
}
struct Z_Construct_UClass_UInitializeAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InitializeAI.h" },
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/InitializeAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInitializeAI_CreateInitializeAll, "CreateInitializeAll" }, // 4142890049
		{ &Z_Construct_UFunction_UInitializeAI_CreateInitializeIamai, "CreateInitializeIamai" }, // 3353612529
		{ &Z_Construct_UFunction_UInitializeAI_CreateInitializeIamaiParamaters, "CreateInitializeIamaiParamaters" }, // 3244094538
		{ &Z_Construct_UFunction_UInitializeAI_CreateInitializeWhisper, "CreateInitializeWhisper" }, // 986239469
		{ &Z_Construct_UFunction_UInitializeAI_InitializeIamai, "InitializeIamai" }, // 353222426
		{ &Z_Construct_UFunction_UInitializeAI_InitializeIamaiParamaters, "InitializeIamaiParamaters" }, // 2566122160
		{ &Z_Construct_UFunction_UInitializeAI_InitializeWhisper, "InitializeWhisper" }, // 980374229
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInitializeAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInitializeAI_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInitializeAI, OnCompleted), Z_Construct_UDelegateFunction_iamaiUnreal_AIWraperInitialized__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1584022985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInitializeAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInitializeAI_Statics::NewProp_OnCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInitializeAI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInitializeAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInitializeAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInitializeAI_Statics::ClassParams = {
	&UInitializeAI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInitializeAI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInitializeAI_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInitializeAI_Statics::Class_MetaDataParams), Z_Construct_UClass_UInitializeAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInitializeAI()
{
	if (!Z_Registration_Info_UClass_UInitializeAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInitializeAI.OuterSingleton, Z_Construct_UClass_UInitializeAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInitializeAI.OuterSingleton;
}
template<> IAMAIUNREAL_API UClass* StaticClass<UInitializeAI>()
{
	return UInitializeAI::StaticClass();
}
UInitializeAI::UInitializeAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInitializeAI);
UInitializeAI::~UInitializeAI() {}
// End Class UInitializeAI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Collin_Documents_Unreal_Projects_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInitializeAI, UInitializeAI::StaticClass, TEXT("UInitializeAI"), &Z_Registration_Info_UClass_UInitializeAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInitializeAI), 3924612149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Collin_Documents_Unreal_Projects_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_854719081(TEXT("/Script/iamaiUnreal"),
	Z_CompiledInDeferFile_FID_Users_Collin_Documents_Unreal_Projects_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Collin_Documents_Unreal_Projects_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
