#pragma once

#include "CoreMinimal.h"

#include <string>
#include <iostream>
#include <memory>
#include "GGUFModelAsset.h"


#if PLATFORM_WINDOWS

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows.h"
#include "Windows/HideWindowsPlatformTypes.h"
using LibHandle = HMODULE;

#else

#include <dlfcn.h>
using LibHandle = void*;

#endif

struct FiamaiConfig;

class IAMAIUNREAL_API iamaiAI {

public:

	iamaiAI(UGGUFModelAsset* model);
	iamaiAI(UGGUFModelAsset* model, FiamaiConfig config);
	~iamaiAI();

	iamaiAI(const iamaiAI&) = delete;
	iamaiAI& operator=(const iamaiAI&) = delete;

	std::string Generate(const std::string& prompt, int maxLength = 4096);

	void SetMaxTokens(int maxTokens) {
		_setMaxTokens(ctx, maxTokens);
	}

	void SetPromptFormat(const std::string& format) {
		_setPromptFormat(ctx, format.c_str());
	}

	void ClearPromptFormat() {
		_clearPromptFormat(ctx);
	}

private:

	void LoadDLL();

	LibHandle DllHandle;
	void* ctx = nullptr;

	bool disposed = false;

	typedef void* (*InitFunction)(const char* modelPath);
	typedef void* (*FullInitFunction)(const char* modelPath, int size, int tokens, int batch, int threads, int top_k, float top_p, float temperature, uint32_t seed);
	typedef bool (*GenerateFunction)(void* context, const char* prompt, char* output, int maxLength);
	typedef void (*SetMaxTokensFunction)(void* context, int maxTokens);
	typedef void (*SetPromptFormatFunction)(void* context, const char* format);
	typedef void (*ClearPromptFormatFunction)(void* context);
	typedef void (*FreeFunction)(void* context);

	InitFunction _init;
	FullInitFunction _fullInit;
	GenerateFunction _generate;
	SetMaxTokensFunction _setMaxTokens;
	SetPromptFormatFunction _setPromptFormat;
	ClearPromptFormatFunction _clearPromptFormat;
	FreeFunction _free;

	template<typename T>
	T GetFunction(const char* funcName) {

#if PLATFORM_WINDOWS

		void* funcPtr = GetProcAddress(DllHandle, funcName);
		if (!funcPtr) {

			int errorCode = GetLastError();
			throw std::runtime_error("Failed to get proc address for " + std::string(funcName) + ". Error code: " + std::to_string(errorCode));

		}

#else

		void* funcPtr = dlsym(DllHandle, funcName);
		if (!funcPtr) throw std::runtime_error("Failed to get symbol: " + std::string(funcName));

#endif

		return reinterpret_cast<T>(funcPtr);

	}

};
