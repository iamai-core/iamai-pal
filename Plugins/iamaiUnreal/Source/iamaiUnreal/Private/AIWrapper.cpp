// Fill out your copyright notice in the Description page of Project Settings.


#include "AIWrapper.h"

UAIWrapper::UAIWrapper() :
	iamaiInstance(nullptr),
	whisperInstance(nullptr) {}

UAIWrapper::~UAIWrapper() {
	// The unique_ptr will handle cleanup automatically
}

bool UAIWrapper::DefaultInitializeIamai(UGGUFModelAsset* model) {

	try {

		iamaiInstance = std::make_unique<iamaiAI>(model);
		return true;

	} catch (const std::exception& e) {

		UE_LOG(LogTemp, Error, TEXT("AI initialization error: %s"), UTF8_TO_TCHAR(e.what()));
		return false;

	}

}

bool UAIWrapper::InitializeIamai(UGGUFModelAsset* model, int size, int tokens, int batch, int threads) {

	try {

		iamaiInstance = std::make_unique<iamaiAI>(model, size, tokens, batch, threads);
		return true;

	} catch (const std::exception& e) {

		UE_LOG(LogTemp, Error, TEXT("AI initialization error: %s"), UTF8_TO_TCHAR(e.what()));
		return false;

	}

}

bool UAIWrapper::InitializeWhisper(const FString& ModelName, int threads) {

	try {

		whisperInstance = std::make_unique<WhisperAI>(TCHAR_TO_UTF8(*ModelName));
		return true;

	} catch (const std::exception& e) {

		UE_LOG(LogTemp, Error, TEXT("AI initialization error: %s"), UTF8_TO_TCHAR(e.what()));
		return false;

	}

}

FString UAIWrapper::Generate(const std::string& Prompt, int32 MaxLength) {

	if (!iamaiInstance) {

		UE_LOG(LogTemp, Error, TEXT("AI not initialized"));
		return TEXT("Error: AI not initialized");

	}

	try {

		std::string result = iamaiInstance->Generate(Prompt, MaxLength);
		return UTF8_TO_TCHAR(result.c_str());

	} catch (const std::exception& e) {

		UE_LOG(LogTemp, Error, TEXT("Generation error: %s"), UTF8_TO_TCHAR(e.what()));
		return FString::Printf(TEXT("Error: %s"), UTF8_TO_TCHAR(e.what()));

	}

}

void UAIWrapper::SetMaxTokens(int32 MaxTokens) {

	if (iamaiInstance) iamaiInstance->SetMaxTokens(MaxTokens);

}

std::vector<float> clean_pcm(const std::vector<float>& input, float threshold) {

	std::vector<float> output;
	float average, sum;

	for (size_t i = 0; i + 2 < input.size(); i += 3) {

		sum = input[i] + input[i + 1] + input[i + 2];
		average = std::clamp(sum / 3.0f, -1.0f, 1.0f);

		if (average >= threshold) output.push_back(average);

	}

	return output;

}

FString UAIWrapper::Transcribe(float* AudioData, int SampleCount, float threshold) {

	if (!iamaiInstance) return "";

	std::vector<float> downsized = clean_pcm(std::vector<float>(AudioData, AudioData + SampleCount), threshold);
	if (downsized.empty()) return "";

	std::string Transcript = whisperInstance->Transcribe(downsized.data(), downsized.size());

	return FString(UTF8_TO_TCHAR(Transcript.c_str()));

}
