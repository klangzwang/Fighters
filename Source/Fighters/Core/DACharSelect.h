#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DACharSelect.generated.h"

class AFGCharacter;

USTRUCT(BlueprintType)
struct FCharacterSelection
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString CharName;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTexture2D* CharTexture;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<AFGCharacter> CharacterClass;
};

UCLASS()
class FIGHTERS_API UDACharSelect : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FCharacterSelection> characterSelection;
};
