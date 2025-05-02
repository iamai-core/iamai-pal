// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnreal/Public/LoopingTranscribeAudio.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoopingTranscribeAudio() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UAIWrapper_NoRegister();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UiamaiVoiceInput_NoRegister();
IAMAIUNREAL_API UClass* Z_Construct_UClass_ULoopingTranscribeAudio();
IAMAIUNREAL_API UClass* Z_Construct_UClass_ULoopingTranscribeAudio_NoRegister();
IAMAIUNREAL_API UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature();
IAMAIUNREAL_API UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_iamaiUnreal();
// End Cross Module References

// Begin Delegate FOnTextTranscribedDelegate
struct Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics
{
	struct _Script_iamaiUnreal_eventOnTextTranscribedDelegate_Parms
	{
		bool bSuccess;
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoopingTranscribeAudio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_iamaiUnreal_eventOnTextTranscribedDelegate_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_iamaiUnreal_eventOnTextTranscribedDelegate_Parms), &Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_iamaiUnreal_eventOnTextTranscribedDelegate_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_iamaiUnreal, nullptr, "OnTextTranscribedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::_Script_iamaiUnreal_eventOnTextTranscribedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::_Script_iamaiUnreal_eventOnTextTranscribedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextTranscribedDelegate_DelegateWrapper(const FScriptDelegate& OnTextTranscribedDelegate, bool bSuccess, const FString& Text)
{
	struct _Script_iamaiUnreal_eventOnTextTranscribedDelegate_Parms
	{
		bool bSuccess;
		FString Text;
	};
	_Script_iamaiUnreal_eventOnTextTranscribedDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Text=Text;
	OnTextTranscribedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnTextTranscribedDelegate

// Begin Delegate FOnTimerCreated
struct Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics
{
	struct _Script_iamaiUnreal_eventOnTimerCreated_Parms
	{
		bool bSuccess;
		FTimerHandle TimerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoopingTranscribeAudio.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_iamaiUnreal_eventOnTimerCreated_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_iamaiUnreal_eventOnTimerCreated_Parms), &Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_iamaiUnreal_eventOnTimerCreated_Parms, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::NewProp_TimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_iamaiUnreal, nullptr, "OnTimerCreated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::_Script_iamaiUnreal_eventOnTimerCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::_Script_iamaiUnreal_eventOnTimerCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimerCreated_DelegateWrapper(const FMulticastScriptDelegate& OnTimerCreated, bool bSuccess, FTimerHandle TimerHandle)
{
	struct _Script_iamaiUnreal_eventOnTimerCreated_Parms
	{
		bool bSuccess;
		FTimerHandle TimerHandle;
	};
	_Script_iamaiUnreal_eventOnTimerCreated_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.TimerHandle=TimerHandle;
	OnTimerCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTimerCreated

// Begin Class ULoopingTranscribeAudio Function Transcribe
struct Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics
{
	struct LoopingTranscribeAudio_eventTranscribe_Parms
	{
		UObject* WorldContextObject;
		float time;
		UAIWrapper* AIWrapper;
		UiamaiVoiceInput* iamaiVoiceInput;
		FScriptDelegate InDelegate;
		ULoopingTranscribeAudio* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Iamai Core" },
		{ "DisplayName", "Loop Transcribe Audio" },
		{ "ModuleRelativePath", "Public/LoopingTranscribeAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iamaiVoiceInput_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIWrapper;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iamaiVoiceInput;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoopingTranscribeAudio_eventTranscribe_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoopingTranscribeAudio_eventTranscribe_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_AIWrapper = { "AIWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoopingTranscribeAudio_eventTranscribe_Parms, AIWrapper), Z_Construct_UClass_UAIWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_iamaiVoiceInput = { "iamaiVoiceInput", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoopingTranscribeAudio_eventTranscribe_Parms, iamaiVoiceInput), Z_Construct_UClass_UiamaiVoiceInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iamaiVoiceInput_MetaData), NewProp_iamaiVoiceInput_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoopingTranscribeAudio_eventTranscribe_Parms, InDelegate), Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4160035356
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoopingTranscribeAudio_eventTranscribe_Parms, ReturnValue), Z_Construct_UClass_ULoopingTranscribeAudio_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_AIWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_iamaiVoiceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_InDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoopingTranscribeAudio, nullptr, "Transcribe", nullptr, nullptr, Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::LoopingTranscribeAudio_eventTranscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::LoopingTranscribeAudio_eventTranscribe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoopingTranscribeAudio::execTranscribe)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_time);
	P_GET_OBJECT(UAIWrapper,Z_Param_AIWrapper);
	P_GET_OBJECT(UiamaiVoiceInput,Z_Param_iamaiVoiceInput);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULoopingTranscribeAudio**)Z_Param__Result=ULoopingTranscribeAudio::Transcribe(Z_Param_WorldContextObject,Z_Param_time,Z_Param_AIWrapper,Z_Param_iamaiVoiceInput,FOnTextTranscribedDelegate(Z_Param_InDelegate));
	P_NATIVE_END;
}
// End Class ULoopingTranscribeAudio Function Transcribe

// Begin Class ULoopingTranscribeAudio
void ULoopingTranscribeAudio::StaticRegisterNativesULoopingTranscribeAudio()
{
	UClass* Class = ULoopingTranscribeAudio::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Transcribe", &ULoopingTranscribeAudio::execTranscribe },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoopingTranscribeAudio);
UClass* Z_Construct_UClass_ULoopingTranscribeAudio_NoRegister()
{
	return ULoopingTranscribeAudio::StaticClass();
}
struct Z_Construct_UClass_ULoopingTranscribeAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LoopingTranscribeAudio.h" },
		{ "ModuleRelativePath", "Public/LoopingTranscribeAudio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerCreated_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoopingTranscribeAudio.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerCreated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoopingTranscribeAudio_Transcribe, "Transcribe" }, // 2093426033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoopingTranscribeAudio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoopingTranscribeAudio_Statics::NewProp_OnTimerCreated = { "OnTimerCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoopingTranscribeAudio, OnTimerCreated), Z_Construct_UDelegateFunction_iamaiUnreal_OnTimerCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerCreated_MetaData), NewProp_OnTimerCreated_MetaData) }; // 293734970
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoopingTranscribeAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoopingTranscribeAudio_Statics::NewProp_OnTimerCreated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoopingTranscribeAudio_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoopingTranscribeAudio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoopingTranscribeAudio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoopingTranscribeAudio_Statics::ClassParams = {
	&ULoopingTranscribeAudio::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoopingTranscribeAudio_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoopingTranscribeAudio_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoopingTranscribeAudio_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoopingTranscribeAudio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoopingTranscribeAudio()
{
	if (!Z_Registration_Info_UClass_ULoopingTranscribeAudio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoopingTranscribeAudio.OuterSingleton, Z_Construct_UClass_ULoopingTranscribeAudio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoopingTranscribeAudio.OuterSingleton;
}
template<> IAMAIUNREAL_API UClass* StaticClass<ULoopingTranscribeAudio>()
{
	return ULoopingTranscribeAudio::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoopingTranscribeAudio);
ULoopingTranscribeAudio::~ULoopingTranscribeAudio() {}
// End Class ULoopingTranscribeAudio

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_unreal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoopingTranscribeAudio, ULoopingTranscribeAudio::StaticClass, TEXT("ULoopingTranscribeAudio"), &Z_Registration_Info_UClass_ULoopingTranscribeAudio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoopingTranscribeAudio), 1971211423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_unreal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_1783468302(TEXT("/Script/iamaiUnreal"),
	Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_unreal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_unreal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
