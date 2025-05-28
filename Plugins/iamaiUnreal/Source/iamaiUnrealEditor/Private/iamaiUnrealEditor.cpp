// Copyright Epic Games, Inc. All Rights Reserved.

#include "iamaiUnrealEditor.h"

#include "AssetToolsModule.h"
#include "AssetTypeActions_GGUFModelAsset.h"

#define LOCTEXT_NAMESPACE "FiamaiUnrealEditorModule"

// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
void FiamaiUnrealEditorModule::StartupModule() {

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	AssetTypeActions = MakeShareable(new FAssetTypeActions_GGUFModelAsset);
	AssetTools.RegisterAssetTypeActions(AssetTypeActions.ToSharedRef());
}

// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
void FiamaiUnrealEditorModule::ShutdownModule() {

	if (FModuleManager::Get().IsModuleLoaded("AssetTools") && AssetTypeActions.IsValid()) {
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		AssetTools.UnregisterAssetTypeActions(AssetTypeActions.ToSharedRef());
	}

}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FiamaiUnrealEditorModule, iamaiUnrealEditor)