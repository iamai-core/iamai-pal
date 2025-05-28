// Copyright Epic Games, Inc. All Rights Reserved.

#include "iamaiUnreal.h"

#define LOCTEXT_NAMESPACE "FiamaiUnrealModule"

// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
void FiamaiUnrealModule::StartupModule() {


}

// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
void FiamaiUnrealModule::ShutdownModule() {}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FiamaiUnrealModule, iamaiUnreal)