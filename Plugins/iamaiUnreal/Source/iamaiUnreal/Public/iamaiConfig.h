#pragma once

#include "CoreMinimal.h"
#include "iamaiConfig.generated.h"

USTRUCT(BlueprintType)
struct FiamaiConfig {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "iamai")
	int32 Size = 2048;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "iamai")
	int32 Batch = 512;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "iamai")
	int32 MaxTokens = 512;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "iamai")
	int32 Threads = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "iamai")
	int32 TopK = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "iamai")
	float TopP = 0.9f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "iamai")
	float Temperature = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "iamai", meta = (ClampMin = "0"))
	int64 Seed = 0xFFFFFFFF;

};
