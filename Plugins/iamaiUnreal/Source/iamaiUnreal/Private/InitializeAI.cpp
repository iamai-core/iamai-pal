#include "InitializeAI.h"

#include "Async/Async.h"

UInitializeAI* UInitializeAI::CreateInitializeAll(UGGUFModelAsset* IamaiModel, UBinModelAsset* WhisperModel) {

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_iamaiModel = IamaiModel;
	Node->m_whisperModel = WhisperModel;

	return Node;

}

UInitializeAI* UInitializeAI::CreateInitializeIamai(UGGUFModelAsset* IamaiModel) {

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_iamaiModel = IamaiModel;

	return Node;

}

UInitializeAI* UInitializeAI::CreateInitializeIamaiParamaters(UGGUFModelAsset* IamaiModel, FiamaiConfig config) {
	
	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_iamaiModel = IamaiModel;
	Node->iamaiConfig = config;
	Node->bUseConfig = true;

	return Node;

}

UInitializeAI* UInitializeAI::InitializeIamai(UAIWrapper* Wrapper, UGGUFModelAsset* IamaiModel) {

	if (!Wrapper) return nullptr;

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_iamaiModel = IamaiModel;
	Node->m_aiWrapper = Wrapper;

	return Node;

}

UInitializeAI* UInitializeAI::InitializeIamaiParamaters(UAIWrapper* Wrapper, UGGUFModelAsset* IamaiModel, FiamaiConfig config) {
	
	if (!Wrapper) return nullptr;

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_iamaiModel = IamaiModel;
	Node->m_aiWrapper = Wrapper;
	Node->iamaiConfig = config;
	Node->bUseConfig = true;

	return Node;

}

UInitializeAI* UInitializeAI::CreateInitializeWhisper(UBinModelAsset* model, int threads) {

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_whisperModel = model;
	Node->m_whisperThreads = threads;

	return Node;

}

UInitializeAI* UInitializeAI::InitializeWhisper(UAIWrapper* Wrapper, UBinModelAsset* model, int threads) {

	if (!Wrapper) return nullptr;

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_whisperModel = model;
	Node->m_aiWrapper = Wrapper;
	Node->m_whisperThreads = threads;

	return Node;

}


void UInitializeAI::Activate() {

	Async(EAsyncExecution::ThreadPool, [this]() {

		if (!m_aiWrapper) m_aiWrapper = NewObject<UAIWrapper>();
		bool bWrapper = false;
		bool bIamaiModel = true;
		bool bWhisperModel = true;

		if (m_aiWrapper) {

			bWrapper = true;
			if (m_iamaiModel) {

				if (bUseConfig) bIamaiModel = m_aiWrapper->InitializeIamai(m_iamaiModel, iamaiConfig);
				else bIamaiModel = m_aiWrapper->DefaultInitializeIamai(m_iamaiModel);

			}
			if (m_whisperModel) bWhisperModel = m_aiWrapper->InitializeWhisper(m_whisperModel, m_whisperThreads);

		}

		Async(EAsyncExecution::TaskGraphMainThread, [this, bWrapper, bIamaiModel, bWhisperModel]() {

			if (!bWrapper) UE_LOG(LogTemp, Error, TEXT("Failed to create wrapper!"));
			if (!bIamaiModel) UE_LOG(LogTemp, Error, TEXT("Failed to initialize Iamai AI with model!"));
			if (!bWhisperModel) UE_LOG(LogTemp, Error, TEXT("Failed to initialize Whisper AI with model!"));

			OnCompleted.Broadcast(bWrapper && bIamaiModel && bWhisperModel, (bWrapper) ? m_aiWrapper : nullptr);

			});

		});
}
