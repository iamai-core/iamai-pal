// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnrealEditor/Private/BinModelFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinModelFactory() {}

// Begin Cross Module References
IAMAIUNREALEDITOR_API UClass* Z_Construct_UClass_UBinModelFactory();
IAMAIUNREALEDITOR_API UClass* Z_Construct_UClass_UBinModelFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_iamaiUnrealEditor();
// End Cross Module References

// Begin Class UBinModelFactory
void UBinModelFactory::StaticRegisterNativesUBinModelFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBinModelFactory);
UClass* Z_Construct_UClass_UBinModelFactory_NoRegister()
{
	return UBinModelFactory::StaticClass();
}
struct Z_Construct_UClass_UBinModelFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BinModelFactory.h" },
		{ "ModuleRelativePath", "Private/BinModelFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinModelFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBinModelFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnrealEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinModelFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinModelFactory_Statics::ClassParams = {
	&UBinModelFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinModelFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinModelFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBinModelFactory()
{
	if (!Z_Registration_Info_UClass_UBinModelFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinModelFactory.OuterSingleton, Z_Construct_UClass_UBinModelFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBinModelFactory.OuterSingleton;
}
template<> IAMAIUNREALEDITOR_API UClass* StaticClass<UBinModelFactory>()
{
	return UBinModelFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBinModelFactory);
UBinModelFactory::~UBinModelFactory() {}
// End Class UBinModelFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnrealEditor_Private_BinModelFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBinModelFactory, UBinModelFactory::StaticClass, TEXT("UBinModelFactory"), &Z_Registration_Info_UClass_UBinModelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinModelFactory), 68632571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnrealEditor_Private_BinModelFactory_h_2525680302(TEXT("/Script/iamaiUnrealEditor"),
	Z_CompiledInDeferFile_FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnrealEditor_Private_BinModelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnrealEditor_Private_BinModelFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
