#include "GGUFModelFactory.h"
#include "GGUFModelAsset.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/ConfigCacheIni.h"

UGGUFModelFactory::UGGUFModelFactory() {

	bCreateNew = false;
	bEditorImport = true;
	SupportedClass = UGGUFModelAsset::StaticClass();
	Formats.Add(TEXT("gguf;GGUF AI Model"));

}

UObject* UGGUFModelFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) {
	
	UGGUFModelAsset* NewAsset = NewObject<UGGUFModelAsset>(InParent, InClass, InName, Flags);
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

		UE_LOG(LogTemp, Log, TEXT("Copied GGUF model to iamaiUnreal/Models: %s"), *TargetPath);
		NewAsset->FilePath = TEXT("Plugins/iamaiUnreal/Models/") / FileNameOnly;
		return NewAsset;

	} else {

		UE_LOG(LogTemp, Warning, TEXT("Failed to copy GGUF model to iamaiUnreal/Models"));
		bOutOperationCanceled = true;
		return nullptr;

	}

}
