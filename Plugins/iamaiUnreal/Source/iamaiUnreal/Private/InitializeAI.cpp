#include "InitializeAI.h"

#include "Async/Async.h"

UInitializeAI* UInitializeAI::CreateInitializeAll(UGGUFModelAsset* IamaiModel, const FString& WhisperModel) {

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

UInitializeAI* UInitializeAI::CreateInitializeIamaiParamaters(UGGUFModelAsset* IamaiModel, int size, int tokens, int batch, int threads) {
	
	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_iamaiModel = IamaiModel;
	Node->m_size = size;
	Node->m_iamaiTokens = tokens;
	Node->m_iamaiBatch = batch;
	Node->m_iamaiThreads = threads;

	return Node;

}

UInitializeAI* UInitializeAI::InitializeIamai(UAIWrapper* Wrapper, UGGUFModelAsset* IamaiModel, int tokens, int batch, int threads) {

	if (!Wrapper) return nullptr;

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_iamaiModel = IamaiModel;
	Node->m_aiWrapper = Wrapper;
	Node->m_iamaiTokens = tokens;
	Node->m_iamaiBatch = batch;
	Node->m_iamaiThreads = threads;

	return Node;

}

UInitializeAI* UInitializeAI::CreateInitializeWhisper(const FString& WhisperModel, int threads) {

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_whisperModel = WhisperModel;
	Node->m_whisperThreads = threads;

	return Node;

}

UInitializeAI* UInitializeAI::InitializeWhisper(UAIWrapper* Wrapper, const FString& WhisperModel, int threads) {

	if (!Wrapper) return nullptr;

	UInitializeAI* Node = NewObject<UInitializeAI>();

	Node->m_whisperModel = WhisperModel;
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

				if (m_size > 0) bIamaiModel = m_aiWrapper->InitializeIamai(m_iamaiModel, m_size, m_iamaiTokens, m_iamaiBatch, m_iamaiThreads);
				else bIamaiModel = m_aiWrapper->DefaultInitializeIamai(m_iamaiModel);

			}
			if (!m_whisperModel.IsEmpty()) bWhisperModel = m_aiWrapper->InitializeWhisper(m_whisperModel, m_whisperThreads);

		}

		Async(EAsyncExecution::TaskGraphMainThread, [this, bWrapper, bIamaiModel, bWhisperModel]() {

			if (!bWrapper) UE_LOG(LogTemp, Error, TEXT("Failed to create wrapper!"));
			//if (!bIamaiModel) UE_LOG(LogTemp, Error, TEXT("Failed to initialize Iamai AI with model: %s"), *m_iamaiModel);
			if (!bWhisperModel) UE_LOG(LogTemp, Error, TEXT("Failed to initialize Whisper AI with model: %s"), *m_whisperModel);

			OnCompleted.Broadcast(bWrapper && bIamaiModel && bWhisperModel, (bWrapper) ? m_aiWrapper : nullptr);

			});

		});
}
