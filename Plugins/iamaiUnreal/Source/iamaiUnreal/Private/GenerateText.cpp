// Fill out your copyright notice in the Description page of Project Settings.


#include "GenerateText.h"

#include "Async/Async.h"

UGenerateText* UGenerateText::Generate(UAIWrapper* aiWrapper, const FString& Prompt, int32 MaxLength) {

	UGenerateText* Node = NewObject<UGenerateText>();
	Node->AIInstance = aiWrapper;
	Node->Prompt = new std::string(TCHAR_TO_UTF8(*Prompt));
	Node->MaxLength = MaxLength;

    return Node;

}

void UGenerateText::Activate() {

    if (!AIInstance) {

        UE_LOG(LogTemp, Error, TEXT("AI not initialized"));
        OnCompleted.Broadcast(false, "");
        return;

    }

    Async(EAsyncExecution::ThreadPool, [this]() {

        FString Result;
        bool bSuccess = false;

        try {

            Result = AIInstance->Generate(*Prompt, MaxLength);
            bSuccess = !Result.IsEmpty();

        } catch (const std::exception&) {

            UE_LOG(LogTemp, Error, TEXT("Generation error has occurred"));

        }

        Async(EAsyncExecution::TaskGraphMainThread, [this, bSuccess, Result]() {

            OnCompleted.Broadcast(bSuccess, Result);

            });

        });

}