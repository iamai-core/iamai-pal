// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InitializeAI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIWrapper;
class UBinModelAsset;
class UGGUFModelAsset;
class UInitializeAI;
struct FiamaiConfig;
#ifdef IAMAIUNREAL_InitializeAI_generated_h
#error "InitializeAI.generated.h already included, missing '#pragma once' in InitializeAI.h"
#endif
#define IAMAIUNREAL_InitializeAI_generated_h

#define FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_15_DELEGATE \
IAMAIUNREAL_API void FAIWraperInitialized_DelegateWrapper(const FMulticastScriptDelegate& AIWraperInitialized, bool bSuccess, UAIWrapper* Wrapper);


#define FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeWhisper); \
	DECLARE_FUNCTION(execCreateInitializeWhisper); \
	DECLARE_FUNCTION(execInitializeIamaiParamaters); \
	DECLARE_FUNCTION(execInitializeIamai); \
	DECLARE_FUNCTION(execCreateInitializeIamaiParamaters); \
	DECLARE_FUNCTION(execCreateInitializeIamai); \
	DECLARE_FUNCTION(execCreateInitializeAll);


#define FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInitializeAI(); \
	friend struct Z_Construct_UClass_UInitializeAI_Statics; \
public: \
	DECLARE_CLASS(UInitializeAI, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/iamaiUnreal"), NO_API) \
	DECLARE_SERIALIZER(UInitializeAI)


#define FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInitializeAI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInitializeAI(UInitializeAI&&); \
	UInitializeAI(const UInitializeAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInitializeAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitializeAI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitializeAI) \
	NO_API virtual ~UInitializeAI();


#define FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_17_PROLOG
#define FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IAMAIUNREAL_API UClass* StaticClass<class UInitializeAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_InitializeAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
