// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnreal/Public/iamaiVoiceInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeiamaiVoiceInput() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UiamaiVoiceInput();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UiamaiVoiceInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_iamaiUnreal();
// End Cross Module References

// Begin Class UiamaiVoiceInput Function StartCapturingAudio
struct Z_Construct_UFunction_UiamaiVoiceInput_StartCapturingAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiVoiceInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UiamaiVoiceInput_StartCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UiamaiVoiceInput, nullptr, "StartCapturingAudio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UiamaiVoiceInput_StartCapturingAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UiamaiVoiceInput_StartCapturingAudio_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UiamaiVoiceInput_StartCapturingAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UiamaiVoiceInput_StartCapturingAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UiamaiVoiceInput::execStartCapturingAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCapturingAudio();
	P_NATIVE_END;
}
// End Class UiamaiVoiceInput Function StartCapturingAudio

// Begin Class UiamaiVoiceInput Function StopCapturingAudio
struct Z_Construct_UFunction_UiamaiVoiceInput_StopCapturingAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiVoiceInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UiamaiVoiceInput_StopCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UiamaiVoiceInput, nullptr, "StopCapturingAudio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UiamaiVoiceInput_StopCapturingAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UiamaiVoiceInput_StopCapturingAudio_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UiamaiVoiceInput_StopCapturingAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UiamaiVoiceInput_StopCapturingAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UiamaiVoiceInput::execStopCapturingAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCapturingAudio();
	P_NATIVE_END;
}
// End Class UiamaiVoiceInput Function StopCapturingAudio

// Begin Class UiamaiVoiceInput
void UiamaiVoiceInput::StaticRegisterNativesUiamaiVoiceInput()
{
	UClass* Class = UiamaiVoiceInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartCapturingAudio", &UiamaiVoiceInput::execStartCapturingAudio },
		{ "StopCapturingAudio", &UiamaiVoiceInput::execStopCapturingAudio },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UiamaiVoiceInput);
UClass* Z_Construct_UClass_UiamaiVoiceInput_NoRegister()
{
	return UiamaiVoiceInput::StaticClass();
}
struct Z_Construct_UClass_UiamaiVoiceInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "iamaiVoiceInput.h" },
		{ "ModuleRelativePath", "Public/iamaiVoiceInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecordOnStartup_MetaData[] = {
		{ "Category", "Voice Input" },
		{ "ModuleRelativePath", "Public/iamaiVoiceInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fVoiceSensitivity_MetaData[] = {
		{ "Category", "Voice Input" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/iamaiVoiceInput.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bRecordOnStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordOnStartup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fVoiceSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UiamaiVoiceInput_StartCapturingAudio, "StartCapturingAudio" }, // 2232208197
		{ &Z_Construct_UFunction_UiamaiVoiceInput_StopCapturingAudio, "StopCapturingAudio" }, // 3417050153
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UiamaiVoiceInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UiamaiVoiceInput_Statics::NewProp_bRecordOnStartup_SetBit(void* Obj)
{
	((UiamaiVoiceInput*)Obj)->bRecordOnStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UiamaiVoiceInput_Statics::NewProp_bRecordOnStartup = { "bRecordOnStartup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UiamaiVoiceInput), &Z_Construct_UClass_UiamaiVoiceInput_Statics::NewProp_bRecordOnStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecordOnStartup_MetaData), NewProp_bRecordOnStartup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UiamaiVoiceInput_Statics::NewProp_fVoiceSensitivity = { "fVoiceSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UiamaiVoiceInput, fVoiceSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fVoiceSensitivity_MetaData), NewProp_fVoiceSensitivity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UiamaiVoiceInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UiamaiVoiceInput_Statics::NewProp_bRecordOnStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UiamaiVoiceInput_Statics::NewProp_fVoiceSensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UiamaiVoiceInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UiamaiVoiceInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UiamaiVoiceInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UiamaiVoiceInput_Statics::ClassParams = {
	&UiamaiVoiceInput::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UiamaiVoiceInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UiamaiVoiceInput_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UiamaiVoiceInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UiamaiVoiceInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UiamaiVoiceInput()
{
	if (!Z_Registration_Info_UClass_UiamaiVoiceInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UiamaiVoiceInput.OuterSingleton, Z_Construct_UClass_UiamaiVoiceInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UiamaiVoiceInput.OuterSingleton;
}
template<> IAMAIUNREAL_API UClass* StaticClass<UiamaiVoiceInput>()
{
	return UiamaiVoiceInput::StaticClass();
}
UiamaiVoiceInput::UiamaiVoiceInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UiamaiVoiceInput);
UiamaiVoiceInput::~UiamaiVoiceInput() {}
// End Class UiamaiVoiceInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_iamaiVoiceInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UiamaiVoiceInput, UiamaiVoiceInput::StaticClass, TEXT("UiamaiVoiceInput"), &Z_Registration_Info_UClass_UiamaiVoiceInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UiamaiVoiceInput), 3813815070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_iamaiVoiceInput_h_904740761(TEXT("/Script/iamaiUnreal"),
	Z_CompiledInDeferFile_FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_iamaiVoiceInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_iamaiVoiceInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
