// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IAMAIUNREAL_AIWrapper_generated_h
#error "AIWrapper.generated.h already included, missing '#pragma once' in AIWrapper.h"
#endif
#define IAMAIUNREAL_AIWrapper_generated_h

#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearPromptFormat); \
	DECLARE_FUNCTION(execSetPromptFormat); \
	DECLARE_FUNCTION(execSetMaxTokens);


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIWrapper(); \
	friend struct Z_Construct_UClass_UAIWrapper_Statics; \
public: \
	DECLARE_CLASS(UAIWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/iamaiUnreal"), NO_API) \
	DECLARE_SERIALIZER(UAIWrapper)


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIWrapper(UAIWrapper&&); \
	UAIWrapper(const UAIWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIWrapper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIWrapper)


#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h_19_PROLOG
#define FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h_22_INCLASS_NO_PURE_DECLS \
	FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IAMAIUNREAL_API UClass* StaticClass<class UAIWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_AIWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
