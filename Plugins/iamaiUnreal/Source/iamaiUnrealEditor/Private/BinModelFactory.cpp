// Fill out your copyright notice in the Description page of Project Settings.


#include "BinModelFactory.h"
#include "BinModelAsset.h"

UBinModelFactory::UBinModelFactory() {

    bCreateNew = false;
    bEditorImport = true;
    SupportedClass = UBinModelAsset::StaticClass();
    Formats.Add(TEXT("bin;Bin AI Model"));

}

UObject* UBinModelFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) {

    UBinModelAsset* NewAsset = NewObject<UBinModelAsset>(InParent, InClass, InName, Flags);
	if (!NewAsset) {

		bOutOperationCanceled = true;
		return nullptr;

	}

	FString FileNameOnly = FPaths::GetCleanFilename(Filename);
	FString TargetFolder = FPaths::ProjectPluginsDir() / TEXT("iamaiUnreal/Models");
	FString TargetPath = TargetFolder / FileNameOnly;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (!PlatformFile.DirectoryExists(*TargetFolder)) PlatformFile.CreateDirectory(*TargetFolder);

	if (PlatformFile.CopyFile(*TargetPath, *Filename)) {

		UE_LOG(LogTemp, Log, TEXT("Copied Bin model to iamaiUnreal/Models: %s"), *TargetPath);
		NewAsset->FilePath = TEXT("Plugins/iamaiUnreal/Models/") / FileNameOnly;
		return NewAsset;

	} else {

		UE_LOG(LogTemp, Warning, TEXT("Failed to copy Bin model to iamaiUnreal/Models"));
		bOutOperationCanceled = true;
		return nullptr;

	}

}
