// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"

#include "AIWrapper.h"

#include "GenerateText.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTextGenCompleted, bool, bSuccess, FString, Message);

/**
 * Generate text based on a prompt
 * @param Prompt - The input prompt
 * @param MaxLength - Maximum length of the generated output
 * @return The generated text
 */
UCLASS()
class IAMAIUNREAL_API UGenerateText : public UBlueprintAsyncActionBase {

	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Generate Text", Category = "iamai"))
	static UGenerateText* Generate( UAIWrapper* aiWrapper, const FString& Prompt, int32 MaxLength = 4096);

	UPROPERTY(BlueprintAssignable)
	FOnTextGenCompleted OnCompleted;

protected:

	virtual void Activate() override;
	UAIWrapper* AIInstance = nullptr;
	std::string* Prompt;
	int32 MaxLength = 4096;

};
