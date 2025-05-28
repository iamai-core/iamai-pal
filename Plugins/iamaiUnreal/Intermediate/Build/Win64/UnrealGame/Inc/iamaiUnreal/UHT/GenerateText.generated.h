// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenerateText.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIWrapper;
class UGenerateText;
#ifdef IAMAIUNREAL_GenerateText_generated_h
#error "GenerateText.generated.h already included, missing '#pragma once' in GenerateText.h"
#endif
#define IAMAIUNREAL_GenerateText_generated_h

#define FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_12_DELEGATE \
IAMAIUNREAL_API void FOnTextGenCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnTextGenCompleted, bool bSuccess, const FString& Message);


#define FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerate);


#define FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenerateText(); \
	friend struct Z_Construct_UClass_UGenerateText_Statics; \
public: \
	DECLARE_CLASS(UGenerateText, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/iamaiUnreal"), NO_API) \
	DECLARE_SERIALIZER(UGenerateText)


#define FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenerateText(UGenerateText&&); \
	UGenerateText(const UGenerateText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenerateText) \
	NO_API virtual ~UGenerateText();


#define FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_20_PROLOG
#define FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IAMAIUNREAL_API UClass* StaticClass<class UGenerateText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GenerateText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
