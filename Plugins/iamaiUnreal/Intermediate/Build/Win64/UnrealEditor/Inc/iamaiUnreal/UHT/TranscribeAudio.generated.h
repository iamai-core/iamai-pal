// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TranscribeAudio.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIWrapper;
class UiamaiVoiceInput;
class UTranscribeAudio;
#ifdef IAMAIUNREAL_TranscribeAudio_generated_h
#error "TranscribeAudio.generated.h already included, missing '#pragma once' in TranscribeAudio.h"
#endif
#define IAMAIUNREAL_TranscribeAudio_generated_h

#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_8_DELEGATE \
IAMAIUNREAL_API void FOnTextTranscribed_DelegateWrapper(const FMulticastScriptDelegate& OnTextTranscribed, bool bSuccess, const FString& Text);


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTranscribe);


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTranscribeAudio(); \
	friend struct Z_Construct_UClass_UTranscribeAudio_Statics; \
public: \
	DECLARE_CLASS(UTranscribeAudio, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/iamaiUnreal"), NO_API) \
	DECLARE_SERIALIZER(UTranscribeAudio)


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTranscribeAudio(UTranscribeAudio&&); \
	UTranscribeAudio(const UTranscribeAudio&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranscribeAudio); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranscribeAudio); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTranscribeAudio) \
	NO_API virtual ~UTranscribeAudio();


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_14_PROLOG
#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_17_INCLASS_NO_PURE_DECLS \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IAMAIUNREAL_API UClass* StaticClass<class UTranscribeAudio>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_TranscribeAudio_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
