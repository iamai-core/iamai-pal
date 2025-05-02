// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnreal/Public/TranscribeAudio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranscribeAudio() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UAIWrapper_NoRegister();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UiamaiVoiceInput_NoRegister();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UTranscribeAudio();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UTranscribeAudio_NoRegister();
IAMAIUNREAL_API UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_iamaiUnreal();
// End Cross Module References

// Begin Delegate FOnTextTranscribed
struct Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics
{
	struct _Script_iamaiUnreal_eventOnTextTranscribed_Parms
	{
		bool bSuccess;
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TranscribeAudio.h" },
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
void Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_iamaiUnreal_eventOnTextTranscribed_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_iamaiUnreal_eventOnTextTranscribed_Parms), &Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_iamaiUnreal_eventOnTextTranscribed_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_iamaiUnreal, nullptr, "OnTextTranscribed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::_Script_iamaiUnreal_eventOnTextTranscribed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::_Script_iamaiUnreal_eventOnTextTranscribed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextTranscribed_DelegateWrapper(const FMulticastScriptDelegate& OnTextTranscribed, bool bSuccess, const FString& Text)
{
	struct _Script_iamaiUnreal_eventOnTextTranscribed_Parms
	{
		bool bSuccess;
		FString Text;
	};
	_Script_iamaiUnreal_eventOnTextTranscribed_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Text=Text;
	OnTextTranscribed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTextTranscribed

// Begin Class UTranscribeAudio Function Transcribe
struct Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics
{
	struct TranscribeAudio_eventTranscribe_Parms
	{
		UAIWrapper* AIWrapper;
		UiamaiVoiceInput* iamaiVoiceInput;
		UTranscribeAudio* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Iamai Core" },
		{ "DisplayName", "Transcribe Audio" },
		{ "ModuleRelativePath", "Public/TranscribeAudio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iamaiVoiceInput_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIWrapper;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iamaiVoiceInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::NewProp_AIWrapper = { "AIWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TranscribeAudio_eventTranscribe_Parms, AIWrapper), Z_Construct_UClass_UAIWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::NewProp_iamaiVoiceInput = { "iamaiVoiceInput", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TranscribeAudio_eventTranscribe_Parms, iamaiVoiceInput), Z_Construct_UClass_UiamaiVoiceInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iamaiVoiceInput_MetaData), NewProp_iamaiVoiceInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TranscribeAudio_eventTranscribe_Parms, ReturnValue), Z_Construct_UClass_UTranscribeAudio_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::NewProp_AIWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::NewProp_iamaiVoiceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTranscribeAudio, nullptr, "Transcribe", nullptr, nullptr, Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::TranscribeAudio_eventTranscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::TranscribeAudio_eventTranscribe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTranscribeAudio_Transcribe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTranscribeAudio_Transcribe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTranscribeAudio::execTranscribe)
{
	P_GET_OBJECT(UAIWrapper,Z_Param_AIWrapper);
	P_GET_OBJECT(UiamaiVoiceInput,Z_Param_iamaiVoiceInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTranscribeAudio**)Z_Param__Result=UTranscribeAudio::Transcribe(Z_Param_AIWrapper,Z_Param_iamaiVoiceInput);
	P_NATIVE_END;
}
// End Class UTranscribeAudio Function Transcribe

// Begin Class UTranscribeAudio
void UTranscribeAudio::StaticRegisterNativesUTranscribeAudio()
{
	UClass* Class = UTranscribeAudio::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Transcribe", &UTranscribeAudio::execTranscribe },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTranscribeAudio);
UClass* Z_Construct_UClass_UTranscribeAudio_NoRegister()
{
	return UTranscribeAudio::StaticClass();
}
struct Z_Construct_UClass_UTranscribeAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TranscribeAudio.h" },
		{ "ModuleRelativePath", "Public/TranscribeAudio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextTranscribed_MetaData[] = {
		{ "ModuleRelativePath", "Public/TranscribeAudio.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextTranscribed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTranscribeAudio_Transcribe, "Transcribe" }, // 1814921357
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranscribeAudio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTranscribeAudio_Statics::NewProp_OnTextTranscribed = { "OnTextTranscribed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTranscribeAudio, OnTextTranscribed), Z_Construct_UDelegateFunction_iamaiUnreal_OnTextTranscribed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextTranscribed_MetaData), NewProp_OnTextTranscribed_MetaData) }; // 46923323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranscribeAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranscribeAudio_Statics::NewProp_OnTextTranscribed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTranscribeAudio_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTranscribeAudio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTranscribeAudio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTranscribeAudio_Statics::ClassParams = {
	&UTranscribeAudio::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTranscribeAudio_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTranscribeAudio_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTranscribeAudio_Statics::Class_MetaDataParams), Z_Construct_UClass_UTranscribeAudio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTranscribeAudio()
{
	if (!Z_Registration_Info_UClass_UTranscribeAudio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTranscribeAudio.OuterSingleton, Z_Construct_UClass_UTranscribeAudio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTranscribeAudio.OuterSingleton;
}
template<> IAMAIUNREAL_API UClass* StaticClass<UTranscribeAudio>()
{
	return UTranscribeAudio::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTranscribeAudio);
UTranscribeAudio::~UTranscribeAudio() {}
// End Class UTranscribeAudio

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_unreal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTranscribeAudio, UTranscribeAudio::StaticClass, TEXT("UTranscribeAudio"), &Z_Registration_Info_UClass_UTranscribeAudio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTranscribeAudio), 3703314015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_unreal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_1441562662(TEXT("/Script/iamaiUnreal"),
	Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_unreal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_unreal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
