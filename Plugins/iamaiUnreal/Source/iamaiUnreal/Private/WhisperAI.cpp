#include "WhisperAI.h"

#include "Misc/Paths.h"

WhisperAI::WhisperAI(UBinModelAsset* model, int threads) {

	if (threads <= 0) throw std::invalid_argument("Threads must be greater than 0");

    FString ProjectDir = FPaths::ProjectDir();
    FString PluginDir = FPaths::Combine(ProjectDir, TEXT("Plugins"), TEXT("iamaiUnreal"));
    FString LibDir = FPaths::Combine(PluginDir, TEXT("ThirdParty"));

    std::string libName;

#if PLATFORM_WINDOWS

    libName = "whisper-interface.dll";

#else

    libName = "libwhisper-interface.dylib";

#endif

    FString LibPath = FPaths::Combine(LibDir, UTF8_TO_TCHAR(libName.c_str()));
    std::string libPathStr = TCHAR_TO_UTF8(*LibPath);

    if (!FPaths::FileExists(LibPath)) throw std::runtime_error("Shared library not found: " + libPathStr);

    std::cout << "Loading whisper library from: " << libPathStr << std::endl;

#if PLATFORM_WINDOWS

    SetDllDirectoryA(TCHAR_TO_UTF8(*LibDir));
    DllHandle = LoadLibraryA(libPathStr.c_str());

    if (!DllHandle) {

        int err = GetLastError();
        throw std::runtime_error("Failed to load whisper DLL. Error code: " + std::to_string(err));

    }

#else

    DllHandle = dlopen(libPathStr.c_str(), RTLD_LAZY);
    if (!DllHandle) throw std::runtime_error("Failed to load whisper dylib: " + std::string(dlerror()));

#endif

    _init = GetFunction<InitFunction>("Init");
    _free = GetFunction<FreeFunction>("Free");
    _setThreads = GetFunction<SetThreadsFunction>("setThreads");
    _setLanguage = GetFunction<SetLanguageFunction>("setLanguage");
    _setTranslate = GetFunction<SetTranslateFunction>("setTranslate");
    _transcribe = GetFunction<TranscribeFunction>("Transcrible");

    FString path = FPaths::ProjectDir() / model->FilePath;
    ctx = _init(TCHAR_TO_UTF8(*path), threads);
    if (!ctx) throw std::runtime_error("Failed to initialize whisper model");

}


void WhisperAI::SetThreads(int nThreads) {
    _setThreads(ctx, nThreads);
}

void WhisperAI::SetLanguage(const std::string& language) {
    _setLanguage(ctx, language.c_str());
}

void WhisperAI::SetTranslate(bool translate) {
    _setTranslate(ctx, translate);
}

std::string WhisperAI::Transcribe(float* data, int samples) {

    if (!ctx || !data || samples <= 0) {

        UE_LOG(LogTemp, Error, TEXT("Invalid params passed to _transcribe"));
        return "";

    }

    std::lock_guard<std::mutex> lock(transcribeMutex);

    const char* result = _transcribe(ctx, data, samples);
    return result ? std::string(result) : "";

}

WhisperAI::~WhisperAI() {

    if (!disposed) {

        if (ctx) _free(ctx);

        if (DllHandle) {

#if PLATFORM_WINDOWS

            FreeLibrary(DllHandle);

#else

            dlclose(DllHandle);

#endif

            DllHandle = nullptr;

        }

        ctx = nullptr;
        disposed = true;

    }

}
