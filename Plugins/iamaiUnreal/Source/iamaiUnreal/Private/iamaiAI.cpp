#include "iamaiAI.h"

#include "Misc/Paths.h"
#include "iamaiConfig.h"


#if PLATFORM_WINDOWS
#define LIBNAME "iamai-core.dll";
#else
#define LIBNAME  "libiamai-core.dylib";
#endif

iamaiAI::iamaiAI(UGGUFModelAsset* model) {

	LoadDLL();

	FString path = FPaths::ProjectDir() / model->FilePath;
	ctx = _init(TCHAR_TO_UTF8(*path));

	if (!ctx) throw std::runtime_error("Failed to initialize iamai model");

}

iamaiAI::iamaiAI(UGGUFModelAsset* model, FiamaiConfig config) {

	if (config.Size <= 0) throw std::runtime_error("Invalid size parameter");
	if (config.MaxTokens <= 0) throw std::runtime_error("Invalid tokens parameter");
	if (config.Batch <= 0) throw std::runtime_error("Invalid batch parameter");
	if (config.Threads <= 0) throw std::runtime_error("Invalid threads parameter");

	if (config.TopK <= 0) throw std::runtime_error("Invalid top_k parameter");
	if (config.TopP <= 0.0f || config.TopP > 1.0f) throw std::runtime_error("Invalid top_p parameter");
	if (config.Temperature < 0.0f) throw std::runtime_error("Invalid temperature parameter");

	LoadDLL();

	FString path = FPaths::ProjectDir() / model->FilePath;
	ctx = _fullInit(TCHAR_TO_UTF8(*path), config.Size, config.MaxTokens, config.Batch, config.Threads, config.TopK, config.TopP, config.Temperature, config.Seed);

	if (!ctx) throw std::runtime_error("Failed to initialize iamai model");

}

void iamaiAI::LoadDLL() {

	FString BinaryDir = FPaths::Combine(FPaths::ProjectDir(), TEXT("Binaries"), TEXT("Win64"));

	std::string libName = LIBNAME;

	FString LibPathFString = FPaths::Combine(BinaryDir, UTF8_TO_TCHAR(libName.c_str()));
	std::string libPath = TCHAR_TO_UTF8(*LibPathFString);

	if (!FPaths::FileExists(UTF8_TO_TCHAR(libPath.c_str()))) {
		throw std::runtime_error("Shared library not found: " + libPath);
	}

	std::cout << "Loading shared library from: " << libPath << std::endl;

#if PLATFORM_WINDOWS
	SetDllDirectoryA(TCHAR_TO_UTF8(*BinaryDir));
	DllHandle = LoadLibraryA(libPath.c_str());
	if (!DllHandle) {
		int errorCode = GetLastError();
		throw std::runtime_error("Failed to load DLL. Error code: " + std::to_string(errorCode));
	}
#else
	DllHandle = dlopen(libPath.c_str(), RTLD_LAZY);
	if (!DllHandle) {
		throw std::runtime_error("Failed to load dylib: " + std::string(dlerror()));
	}
#endif

	// Load function pointers
	_init = GetFunction<InitFunction>("Init");
	_fullInit = GetFunction<FullInitFunction>("FullInit");
	_generate = GetFunction<GenerateFunction>("Generate");
	_setMaxTokens = GetFunction<SetMaxTokensFunction>("SetMaxTokens");
	_setPromptFormat = GetFunction<SetPromptFormatFunction>("SetPromptFormat");
	_clearPromptFormat = GetFunction<ClearPromptFormatFunction>("ClearPromptFormat");
	_free = GetFunction<FreeFunction>("Free");

}

std::string iamaiAI::Generate(const std::string& prompt, int maxLength) {

	std::unique_ptr<char[]> output(new char[maxLength]);
	bool success = _generate(ctx, prompt.c_str(), output.get(), maxLength);

	if (!success) {
		throw std::runtime_error("Generation failed");
	}

	return std::string(output.get());

}

iamaiAI::~iamaiAI() {

	if (!disposed) {

		if (ctx) {

			_free(ctx);
			ctx = nullptr;

		}

		if (DllHandle) {

#if PLATFORM_WINDOWS

			FreeLibrary(DllHandle);

#else

			dlclose(DllHandle);

#endif

			DllHandle = nullptr;

		}

		disposed = true;

	}

}

