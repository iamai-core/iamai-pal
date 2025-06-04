// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "iamaiUnreal/Public/iamaiConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeiamaiConfig() {}

// Begin Cross Module References
IAMAIUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FiamaiConfig();
UPackage* Z_Construct_UPackage__Script_iamaiUnreal();
// End Cross Module References

// Begin ScriptStruct FiamaiConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_iamaiConfig;
class UScriptStruct* FiamaiConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_iamaiConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_iamaiConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FiamaiConfig, (UObject*)Z_Construct_UPackage__Script_iamaiUnreal(), TEXT("iamaiConfig"));
	}
	return Z_Registration_Info_UScriptStruct_iamaiConfig.OuterSingleton;
}
template<> IAMAIUNREAL_API UScriptStruct* StaticStruct<FiamaiConfig>()
{
	return FiamaiConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FiamaiConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Batch_MetaData[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threads_MetaData[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopK_MetaData[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopP_MetaData[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "iamai" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "iamai" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/iamaiConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Batch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Threads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopK;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TopP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FiamaiConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiamaiConfig, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Batch = { "Batch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiamaiConfig, Batch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Batch_MetaData), NewProp_Batch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiamaiConfig, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Threads = { "Threads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiamaiConfig, Threads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threads_MetaData), NewProp_Threads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_TopK = { "TopK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiamaiConfig, TopK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopK_MetaData), NewProp_TopK_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_TopP = { "TopP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiamaiConfig, TopP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopP_MetaData), NewProp_TopP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiamaiConfig, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiamaiConfig, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FiamaiConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Batch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Threads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_TopK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_TopP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FiamaiConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FiamaiConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_iamaiUnreal,
	nullptr,
	&NewStructOps,
	"iamaiConfig",
	Z_Construct_UScriptStruct_FiamaiConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FiamaiConfig_Statics::PropPointers),
	sizeof(FiamaiConfig),
	alignof(FiamaiConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FiamaiConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FiamaiConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FiamaiConfig()
{
	if (!Z_Registration_Info_UScriptStruct_iamaiConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_iamaiConfig.InnerSingleton, Z_Construct_UScriptStruct_FiamaiConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_iamaiConfig.InnerSingleton;
}
// End ScriptStruct FiamaiConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_iamaiConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FiamaiConfig::StaticStruct, Z_Construct_UScriptStruct_FiamaiConfig_Statics::NewStructOps, TEXT("iamaiConfig"), &Z_Registration_Info_UScriptStruct_iamaiConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FiamaiConfig), 3488929887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_iamaiConfig_h_2601518886(TEXT("/Script/iamaiUnreal"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_iamaiConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Neumont_Enterprise_iamai_pal_Plugins_iamaiUnreal_Source_iamaiUnreal_Public_iamaiConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
