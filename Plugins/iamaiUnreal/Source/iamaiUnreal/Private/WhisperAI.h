#pragma once

#include "CoreMinimal.h"

#include <iostream>
#include <string>
#include <memory>
#include <mutex>
#include "BinModelAsset.h"

#if PLATFORM_WINDOWS

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows.h"
#include "Windows/HideWindowsPlatformTypes.h"
using LibHandle = HMODULE;

#else

#include <dlfcn.h>
using LibHandle = void*;

#endif

class IAMAIUNREAL_API WhisperAI {

public:

	WhisperAI(UBinModelAsset* model, int threads = 1);
	~WhisperAI();

	WhisperAI(const WhisperAI&) = delete;
	WhisperAI& operator=(const WhisperAI&) = delete;

	void SetThreads(int nThreads);
	void SetLanguage(const std::string& language);
	void SetTranslate(bool translate);
	std::string Transcribe(float* data, int samples);

private:

	std::mutex transcribeMutex;

	LibHandle DllHandle = nullptr;
	void* ctx = nullptr;
	bool disposed = false;

	typedef void* (*InitFunction)(const char*, int);
	typedef void (*FreeFunction)(void*);
	typedef void (*SetThreadsFunction)(void*, int);
	typedef void (*SetLanguageFunction)(void*, const char*);
	typedef void (*SetTranslateFunction)(void*, bool);
	typedef const char* (*TranscribeFunction)(void*, float*, int);

	InitFunction _init;
	FreeFunction _free;
	SetThreadsFunction _setThreads;
	SetLanguageFunction _setLanguage;
	SetTranslateFunction _setTranslate;
	TranscribeFunction _transcribe;

	template<typename T>
	T GetFunction(const char* funcName) {

#if PLATFORM_WINDOWS

		void* funcPtr = GetProcAddress(DllHandle, funcName);
		if (!funcPtr) {
			int error = GetLastError();
			throw std::runtime_error("Failed to get proc address for " + std::string(funcName) + ". Error code: " + std::to_string(error));
		}

#else

		void* funcPtr = dlsym(DllHandle, funcName);
		if (!funcPtr) throw std::runtime_error("Failed to get symbol: " + std::string(funcName) + ". Error: " + std::string(dlerror()));

#endif

		return reinterpret_cast<T>(funcPtr);

	}

};
