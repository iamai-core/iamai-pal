#include "GGUFModelAsset.h"

#include "Misc/Paths.h"

void UGGUFModelAsset::BeginDestroy() {

	Super::BeginDestroy();

	/*
	if (FilePath.IsEmpty()) return;
	FString FullPath = FPaths::ProjectDir() / FilePath;

	if (FPaths::FileExists(FullPath)) {

		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		PlatformFile.DeleteFile(*FullPath);

	}
	*/

}

void UGGUFModelAsset::PostRename(UObject* OldOuter, const FName OldName) {

	Super::PostRename(OldOuter, OldName);

	if (FilePath.IsEmpty())
		return;

	FString OldFullPath = FPaths::ProjectDir() / FilePath;

	FString NewName = GetName();
	FString Directory = FPaths::GetPath(OldFullPath);
	FString Extension = FPaths::GetExtension(OldFullPath, true);
	FString NewFullPath = Directory / (NewName + Extension);

	if (!FPaths::FileExists(OldFullPath)) return;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.MoveFile(*NewFullPath, *OldFullPath)) {

		UE_LOG(LogTemp, Warning, TEXT("Failed to rename model file from %s to %s"), *OldFullPath, *NewFullPath);
		return;

	}

	FString RelativeDir = FPaths::GetPath(FilePath);
	FilePath = FPaths::Combine(RelativeDir, NewName + Extension);

}
