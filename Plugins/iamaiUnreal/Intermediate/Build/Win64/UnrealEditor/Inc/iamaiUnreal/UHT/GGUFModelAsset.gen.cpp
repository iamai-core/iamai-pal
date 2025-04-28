// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnreal/Public/GGUFModelAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGUFModelAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UGGUFModelAsset();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UGGUFModelAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_iamaiUnreal();
// End Cross Module References

// Begin Class UGGUFModelAsset
void UGGUFModelAsset::StaticRegisterNativesUGGUFModelAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGUFModelAsset);
UClass* Z_Construct_UClass_UGGUFModelAsset_NoRegister()
{
	return UGGUFModelAsset::StaticClass();
}
struct Z_Construct_UClass_UGGUFModelAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GGUFModelAsset.h" },
		{ "ModuleRelativePath", "Public/GGUFModelAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Public/GGUFModelAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGUFModelAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGGUFModelAsset_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGUFModelAsset, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGGUFModelAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGUFModelAsset_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGUFModelAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGGUFModelAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGUFModelAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGUFModelAsset_Statics::ClassParams = {
	&UGGUFModelAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGGUFModelAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGGUFModelAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGUFModelAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGUFModelAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGUFModelAsset()
{
	if (!Z_Registration_Info_UClass_UGGUFModelAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGUFModelAsset.OuterSingleton, Z_Construct_UClass_UGGUFModelAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGUFModelAsset.OuterSingleton;
}
template<> IAMAIUNREAL_API UClass* StaticClass<UGGUFModelAsset>()
{
	return UGGUFModelAsset::StaticClass();
}
UGGUFModelAsset::UGGUFModelAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGUFModelAsset);
UGGUFModelAsset::~UGGUFModelAsset() {}
// End Class UGGUFModelAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GGUFModelAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGGUFModelAsset, UGGUFModelAsset::StaticClass, TEXT("UGGUFModelAsset"), &Z_Registration_Info_UClass_UGGUFModelAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGUFModelAsset), 2818873630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GGUFModelAsset_h_2077801038(TEXT("/Script/iamaiUnreal"),
	Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GGUFModelAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Collin_Documents_Repos_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_GGUFModelAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
