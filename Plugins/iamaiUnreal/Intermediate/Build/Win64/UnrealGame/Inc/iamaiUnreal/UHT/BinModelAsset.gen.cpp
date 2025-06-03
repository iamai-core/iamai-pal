// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnreal/Public/BinModelAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinModelAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UBinModelAsset();
IAMAIUNREAL_API UClass* Z_Construct_UClass_UBinModelAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_iamaiUnreal();
// End Cross Module References

// Begin Class UBinModelAsset
void UBinModelAsset::StaticRegisterNativesUBinModelAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBinModelAsset);
UClass* Z_Construct_UClass_UBinModelAsset_NoRegister()
{
	return UBinModelAsset::StaticClass();
}
struct Z_Construct_UClass_UBinModelAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BinModelAsset.h" },
		{ "ModuleRelativePath", "Public/BinModelAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Public/BinModelAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinModelAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBinModelAsset_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinModelAsset, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinModelAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinModelAsset_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinModelAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBinModelAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinModelAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinModelAsset_Statics::ClassParams = {
	&UBinModelAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBinModelAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBinModelAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinModelAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinModelAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBinModelAsset()
{
	if (!Z_Registration_Info_UClass_UBinModelAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinModelAsset.OuterSingleton, Z_Construct_UClass_UBinModelAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBinModelAsset.OuterSingleton;
}
template<> IAMAIUNREAL_API UClass* StaticClass<UBinModelAsset>()
{
	return UBinModelAsset::StaticClass();
}
UBinModelAsset::UBinModelAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBinModelAsset);
UBinModelAsset::~UBinModelAsset() {}
// End Class UBinModelAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Collin_Documents_Unreal_Projects_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_BinModelAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBinModelAsset, UBinModelAsset::StaticClass, TEXT("UBinModelAsset"), &Z_Registration_Info_UClass_UBinModelAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinModelAsset), 1314195616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Collin_Documents_Unreal_Projects_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_BinModelAsset_h_4016103747(TEXT("/Script/iamaiUnreal"),
	Z_CompiledInDeferFile_FID_Users_Collin_Documents_Unreal_Projects_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_BinModelAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Collin_Documents_Unreal_Projects_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_BinModelAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
