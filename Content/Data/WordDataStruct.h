USTRUCT(BlueprintType)
struct FWordData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Word;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Phonetic;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FSoftObjectPath ImagePath;
}; 