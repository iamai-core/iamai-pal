// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnrealEditor/Private/GGUFModelFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGUFModelFactory() {}

// Begin Cross Module References
IAMAIUNREALEDITOR_API UClass* Z_Construct_UClass_UGGUFModelFactory();
IAMAIUNREALEDITOR_API UClass* Z_Construct_UClass_UGGUFModelFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_iamaiUnrealEditor();
// End Cross Module References

// Begin Class UGGUFModelFactory
void UGGUFModelFactory::StaticRegisterNativesUGGUFModelFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGUFModelFactory);
UClass* Z_Construct_UClass_UGGUFModelFactory_NoRegister()
{
	return UGGUFModelFactory::StaticClass();
}
struct Z_Construct_UClass_UGGUFModelFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GGUFModelFactory.h" },
		{ "ModuleRelativePath", "Private/GGUFModelFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGUFModelFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGGUFModelFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnrealEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGUFModelFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGUFModelFactory_Statics::ClassParams = {
	&UGGUFModelFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGUFModelFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGUFModelFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGUFModelFactory()
{
	if (!Z_Registration_Info_UClass_UGGUFModelFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGUFModelFactory.OuterSingleton, Z_Construct_UClass_UGGUFModelFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGUFModelFactory.OuterSingleton;
}
template<> IAMAIUNREALEDITOR_API UClass* StaticClass<UGGUFModelFactory>()
{
	return UGGUFModelFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGUFModelFactory);
UGGUFModelFactory::~UGGUFModelFactory() {}
// End Class UGGUFModelFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnrealEditor_Private_GGUFModelFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGGUFModelFactory, UGGUFModelFactory::StaticClass, TEXT("UGGUFModelFactory"), &Z_Registration_Info_UClass_UGGUFModelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGUFModelFactory), 1772337369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnrealEditor_Private_GGUFModelFactory_h_3640639208(TEXT("/Script/iamaiUnrealEditor"),
	Z_CompiledInDeferFile_FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnrealEditor_Private_GGUFModelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Trevor_Hicks_Desktop_Neumont_College_Fourth_year_Spring2025_Enterprise_3_NOVA_project_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnrealEditor_Private_GGUFModelFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
