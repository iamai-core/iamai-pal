// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LoopingTranscribeAudio.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIWrapper;
class UiamaiVoiceInput;
class ULoopingTranscribeAudio;
class UObject;
struct FTimerHandle;
#ifdef IAMAIUNREAL_LoopingTranscribeAudio_generated_h
#error "LoopingTranscribeAudio.generated.h already included, missing '#pragma once' in LoopingTranscribeAudio.h"
#endif
#define IAMAIUNREAL_LoopingTranscribeAudio_generated_h

#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_10_DELEGATE \
IAMAIUNREAL_API void FOnTextTranscribedDelegate_DelegateWrapper(const FScriptDelegate& OnTextTranscribedDelegate, bool bSuccess, const FString& Text);


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_11_DELEGATE \
IAMAIUNREAL_API void FOnTimerCreated_DelegateWrapper(const FMulticastScriptDelegate& OnTimerCreated, bool bSuccess, FTimerHandle TimerHandle);


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTranscribe);


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoopingTranscribeAudio(); \
	friend struct Z_Construct_UClass_ULoopingTranscribeAudio_Statics; \
public: \
	DECLARE_CLASS(ULoopingTranscribeAudio, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/iamaiUnreal"), NO_API) \
	DECLARE_SERIALIZER(ULoopingTranscribeAudio)


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoopingTranscribeAudio(ULoopingTranscribeAudio&&); \
	ULoopingTranscribeAudio(const ULoopingTranscribeAudio&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoopingTranscribeAudio); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoopingTranscribeAudio); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoopingTranscribeAudio) \
	NO_API virtual ~ULoopingTranscribeAudio();


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_17_PROLOG
#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_20_INCLASS_NO_PURE_DECLS \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IAMAIUNREAL_API UClass* StaticClass<class ULoopingTranscribeAudio>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_LoopingTranscribeAudio_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
