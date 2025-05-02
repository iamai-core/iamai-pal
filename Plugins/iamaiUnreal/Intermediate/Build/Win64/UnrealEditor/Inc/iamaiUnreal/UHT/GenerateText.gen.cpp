// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnreal/Public/GenerateText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateText() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UAIWrapper_NoRegister();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UGenerateText();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UGenerateText_NoRegister();
IAMAIUNREAL_API UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_iamaiUnreal();
// End Cross Module References

// Begin Delegate FOnTextGenCompleted
struct Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics
{
	struct _Script_iamaiUnreal_eventOnTextGenCompleted_Parms
	{
		bool bSuccess;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GenerateText.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_iamaiUnreal_eventOnTextGenCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_iamaiUnreal_eventOnTextGenCompleted_Parms), &Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_iamaiUnreal_eventOnTextGenCompleted_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_iamaiUnreal, nullptr, "OnTextGenCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::_Script_iamaiUnreal_eventOnTextGenCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::_Script_iamaiUnreal_eventOnTextGenCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextGenCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnTextGenCompleted, bool bSuccess, const FString& Message)
{
	struct _Script_iamaiUnreal_eventOnTextGenCompleted_Parms
	{
		bool bSuccess;
		FString Message;
	};
	_Script_iamaiUnreal_eventOnTextGenCompleted_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Message=Message;
	OnTextGenCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTextGenCompleted

// Begin Class UGenerateText Function Generate
struct Z_Construct_UFunction_UGenerateText_Generate_Statics
{
	struct GenerateText_eventGenerate_Parms
	{
		UAIWrapper* aiWrapper;
		FString Prompt;
		int32 MaxLength;
		UGenerateText* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "iamai core" },
		{ "CPP_Default_MaxLength", "4096" },
		{ "DisplayName", "Generate Text" },
		{ "ModuleRelativePath", "Public/GenerateText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiWrapper;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenerateText_Generate_Statics::NewProp_aiWrapper = { "aiWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateText_eventGenerate_Parms, aiWrapper), Z_Construct_UClass_UAIWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenerateText_Generate_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateText_eventGenerate_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenerateText_Generate_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateText_eventGenerate_Parms, MaxLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenerateText_Generate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateText_eventGenerate_Parms, ReturnValue), Z_Construct_UClass_UGenerateText_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateText_Generate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateText_Generate_Statics::NewProp_aiWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateText_Generate_Statics::NewProp_Prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateText_Generate_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateText_Generate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateText_Generate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateText_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateText, nullptr, "Generate", nullptr, nullptr, Z_Construct_UFunction_UGenerateText_Generate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateText_Generate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenerateText_Generate_Statics::GenerateText_eventGenerate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateText_Generate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenerateText_Generate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenerateText_Generate_Statics::GenerateText_eventGenerate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenerateText_Generate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateText_Generate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenerateText::execGenerate)
{
	P_GET_OBJECT(UAIWrapper,Z_Param_aiWrapper);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGenerateText**)Z_Param__Result=UGenerateText::Generate(Z_Param_aiWrapper,Z_Param_Prompt,Z_Param_MaxLength);
	P_NATIVE_END;
}
// End Class UGenerateText Function Generate

// Begin Class UGenerateText
void UGenerateText::StaticRegisterNativesUGenerateText()
{
	UClass* Class = UGenerateText::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Generate", &UGenerateText::execGenerate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateText);
UClass* Z_Construct_UClass_UGenerateText_NoRegister()
{
	return UGenerateText::StaticClass();
}
struct Z_Construct_UClass_UGenerateText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Generate text based on a prompt\n * @param Prompt - The input prompt\n * @param MaxLength - Maximum length of the generated output\n * @return The generated text\n */" },
#endif
		{ "IncludePath", "GenerateText.h" },
		{ "ModuleRelativePath", "Public/GenerateText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate text based on a prompt\n@param Prompt - The input prompt\n@param MaxLength - Maximum length of the generated output\n@return The generated text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/GenerateText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenerateText_Generate, "Generate" }, // 3489936704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGenerateText_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenerateText, OnCompleted), Z_Construct_UDelegateFunction_iamaiUnreal_OnTextGenCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 541720496
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateText_Statics::NewProp_OnCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenerateText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateText_Statics::ClassParams = {
	&UGenerateText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenerateText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateText_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateText_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenerateText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenerateText()
{
	if (!Z_Registration_Info_UClass_UGenerateText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateText.OuterSingleton, Z_Construct_UClass_UGenerateText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenerateText.OuterSingleton;
}
template<> IAMAIUNREAL_API UClass* StaticClass<UGenerateText>()
{
	return UGenerateText::StaticClass();
}
UGenerateText::UGenerateText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateText);
UGenerateText::~UGenerateText() {}
// End Class UGenerateText

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateText, UGenerateText::StaticClass, TEXT("UGenerateText"), &Z_Registration_Info_UClass_UGenerateText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateText), 1652787643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_3820856085(TEXT("/Script/iamaiUnreal"),
	Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
