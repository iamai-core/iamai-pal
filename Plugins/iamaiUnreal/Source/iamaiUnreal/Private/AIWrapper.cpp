// Fill out your copyright notice in the Description page of Project Settings.

#include "AIWrapper.h"
#include "fstream"
#include "iamaiConfig.h"

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

bool UAIWrapper::InitializeIamai(UGGUFModelAsset* model) {

	try {

		iamaiInstance = std::make_unique<iamaiAI>(model);
		return true;

	} catch (const std::exception& e) {

		UE_LOG(LogTemp, Error, TEXT("AI initialization error: %s"), UTF8_TO_TCHAR(e.what()));
		return false;

	}

}


bool UAIWrapper::InitializeIamai(UGGUFModelAsset* model, FiamaiConfig config) {

	try {

		iamaiInstance = std::make_unique<iamaiAI>(model, config);
		return true;

	} catch (const std::exception& e) {

		UE_LOG(LogTemp, Error, TEXT("AI initialization error: %s"), UTF8_TO_TCHAR(e.what()));
		return false;

	}

}

bool UAIWrapper::InitializeWhisper(UBinModelAsset* model, int threads) {

	try {

		whisperInstance = std::make_unique<WhisperAI>(model);
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

void UAIWrapper::SetPromptFormat(const FString& Format) {

	if (iamaiInstance) iamaiInstance->SetPromptFormat(TCHAR_TO_UTF8(*Format));

}

void UAIWrapper::ClearPromptFormat() {

	if (iamaiInstance) iamaiInstance->ClearPromptFormat();

}

std::vector<float> clean_pcm(const std::vector<float>& input, float threshold) {

	const int inputRate = 48000;
	const int outputRate = 16000;
	const int channels = 2;
	const float ratio = static_cast<float>(inputRate) / outputRate;

	std::vector<float> output;
	size_t numFrames = input.size() / channels;

	for (size_t i = 0; i < static_cast<size_t>(numFrames / ratio); ++i) {
		float srcIndex = i * ratio;
		size_t frameIndex = static_cast<size_t>(srcIndex);

		if (frameIndex + 1 >= numFrames) break;

		// Linear interpolation for smooth resample
		float t = srcIndex - frameIndex;

		float left0 = input[frameIndex * 2];
		float right0 = input[frameIndex * 2 + 1];
		float left1 = input[(frameIndex + 1) * 2];
		float right1 = input[(frameIndex + 1) * 2 + 1];

		float sample0 = 0.5f * (left0 + right0);
		float sample1 = 0.5f * (left1 + right1);
		float interp = sample0 + (sample1 - sample0) * t;

		output.push_back(interp);
	}

	return output;

}

FString UAIWrapper::Transcribe(float* AudioData, int SampleCount, float threshold) {

	if (!whisperInstance) return "";

	std::vector<float> cleaned = clean_pcm(std::vector<float>(AudioData, AudioData + SampleCount), threshold);
	if (cleaned.empty()) return "";

	std::string Transcript = whisperInstance->Transcribe(cleaned.data(), cleaned.size());

	return FString(UTF8_TO_TCHAR(Transcript.c_str()));

}
