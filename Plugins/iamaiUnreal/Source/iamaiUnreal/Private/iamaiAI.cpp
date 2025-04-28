#include "iamaiAI.h"

#include "Misc/Paths.h"

iamaiAI::iamaiAI(UGGUFModelAsset* model) {

	LoadDLL();

	// Initialize the model
	ctx = _init(TCHAR_TO_UTF8(*(model->FilePath)));
	if (!ctx) throw std::runtime_error("Failed to initialize iamai model");

}

iamaiAI::iamaiAI(UGGUFModelAsset* model, int size, int tokens, int batch, int threads) {

	if (size <= 0 || tokens <= 0 || batch <= 0 || threads <= 0) throw std::invalid_argument("Size, tokens, batch, and threads must be greater than 0");
	if (size < batch) throw std::invalid_argument("Size must be greater than or equal to batch");

	LoadDLL();

	// Initialize the model context
	ctx = _fullInit(TCHAR_TO_UTF8(*(model->FilePath)), size, tokens, batch, threads);
	int errorCode = GetLastError();
	if (!ctx) throw std::runtime_error("Failed to initialize iamai model");

}

void iamaiAI::LoadDLL() {

	FString ProjectDirFString = FPaths::ProjectDir();
	FString PluginDirFString = FPaths::Combine(ProjectDirFString, TEXT("Plugins"), TEXT("iamaiUnreal"));
	FString LibDirectoryFString = FPaths::Combine(PluginDirFString, TEXT("ThirdParty"));

	std::string libName;

#if PLATFORM_WINDOWS

	libName = "iamai-core.dll";

#else

	libName = "libiamai-core.dylib";

#endif

	FString LibPathFString = FPaths::Combine(LibDirectoryFString, UTF8_TO_TCHAR(libName.c_str()));
	std::string libPath = TCHAR_TO_UTF8(*LibPathFString);

	if (!FPaths::FileExists(UTF8_TO_TCHAR(libPath.c_str()))) throw std::runtime_error("Shared library not found: " + libPath);

	std::cout << "Loading shared library from: " << libPath << std::endl;

#if PLATFORM_WINDOWS

	SetDllDirectoryA(TCHAR_TO_UTF8(*LibDirectoryFString));
	DllHandle = LoadLibraryA(libPath.c_str());
	if (!DllHandle) {

		int errorCode = GetLastError();
		throw std::runtime_error("Failed to load DLL. Error code: " + std::to_string(errorCode));

	}

#else

	DllHandle = dlopen(libPath.c_str(), RTLD_LAZY);
	if (!DllHandle) throw std::runtime_error("Failed to load dylib: " + std::string(dlerror()));

#endif

	// Load function pointers
	_init = GetFunction<InitFunction>("Init");
	_fullInit = GetFunction<FullInitFunction>("FullInit");
	_generate = GetFunction<GenerateFunction>("Generate");
	_setMaxTokens = GetFunction<SetMaxTokensFunction>("SetMaxTokens");
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

