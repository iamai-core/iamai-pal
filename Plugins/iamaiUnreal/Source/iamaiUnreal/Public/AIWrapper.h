// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include <memory>

#include "iamaiAI.h"
#include "WhisperAI.h"
#include "GGUFModelAsset.h"
#include "BinModelAsset.h"

#include "AIWrapper.generated.h"

struct FiamaiConfig;

UCLASS(BlueprintType, Blueprintable)
class IAMAIUNREAL_API UAIWrapper : public UObject {

	GENERATED_BODY()

private:

	std::unique_ptr<iamaiAI> iamaiInstance;
	std::unique_ptr<WhisperAI> whisperInstance;

public:

	UAIWrapper();
	virtual ~UAIWrapper();

	/**
	 * Initialize the Iamai AI with a specific model
	 * @param model - Name of the model directory to load
	 * @return Whether initialization was successful
	 */
	bool DefaultInitializeIamai(UGGUFModelAsset* model);

	/**
	 * Initialize the Iamai AI with a specific model
	 * @param model - Name of the model directory to load
	 * @return Whether initialization was successful
	 */
	bool InitializeIamai(UGGUFModelAsset* model);

	/**
	 * Initialize the Iamai AI with a specific model and parameters
	 * @param model - Name of the model directory to load
	 * @param config - Name of the model directory to load
	 * @return Whether initialization was successful
	 */
	bool InitializeIamai(UGGUFModelAsset* model, FiamaiConfig config);


	/**
	 * Initialize the Whisper AI with a specific model
	 * @param ModelName - Name of the model directory to load
	 * @return Whether initialization was successful
	 */
	bool InitializeWhisper(UBinModelAsset* model, int threads = 1);


	// iamai


	/**
	 * Generate text based on a prompt
	 * @param Prompt - The input prompt
	 * @param MaxLength - Maximum length of the generated output
	 * @return The generated text
	 */
	FString Generate(const std::string& Prompt, int32 MaxLength = 4096);

	/**
	 * Set the maximum number of tokens to generate
	 * @param MaxTokens - Maximum number of tokens
	 */
	UFUNCTION(BlueprintCallable, Category = "iamai")
	void SetMaxTokens(int32 MaxTokens);

	UFUNCTION(BlueprintCallable, Category = "iamai")
	void SetPromptFormat(const FString& Format);

	UFUNCTION(BlueprintCallable, Category = "iamai")
	void ClearPromptFormat();



	// Whisper

	/**
	* Transcribe audio to text from float array
	* @param AudioData - Pointer to the audio data
	* @param SampleCount - Number of samples in the audio data
	*/
	FString Transcribe(float* AudioData, int SampleCount, float threshold);

};
