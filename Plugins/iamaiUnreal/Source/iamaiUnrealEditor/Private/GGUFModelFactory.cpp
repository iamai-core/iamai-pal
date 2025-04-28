// Fill out your copyright notice in the Description page of Project Settings.


#include "GGUFModelFactory.h"
#include "GGUFModelAsset.h"

UGGUFModelFactory::UGGUFModelFactory() {

    bCreateNew = false;
    bEditorImport = true;
    SupportedClass = UGGUFModelAsset::StaticClass();
    Formats.Add(TEXT("gguf;GGUF AI Model"));

}

UObject* UGGUFModelFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) {

    UGGUFModelAsset* NewAsset = NewObject<UGGUFModelAsset>(InParent, InClass, InName, Flags);

    TArray<uint8> FileData;
    if (FFileHelper::LoadFileToArray(FileData, *Filename)) {

        NewAsset->FileData = MoveTemp(FileData);

    } else {

        UE_LOG(LogTemp, Warning, TEXT("Failed to load file: %s"), *Filename);
        bOutOperationCanceled = true;
        return nullptr;

    }

    return NewAsset;

}
