#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ECharacterID.h"
#include "FGCharacter.h"
#include "EStageID.h"
#include "DACharLights.h"
#include "FGLevelScriptActorBattle.generated.h"

USTRUCT(BlueprintType)
struct FCharLights
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    UDACharLights* mCharLight;
};

UCLASS(Blueprintable)
class AFGLevelScriptActorBattle : public ALevelScriptActor
{
    GENERATED_BODY()
	
public:

    AFGLevelScriptActorBattle();

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterID CharacterIdLeft;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    ECharacterID CharacterIdRight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterClass CharacterClassLeft;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FCharacterClass CharacterClassRight;

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageID StageId;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|LevelScript")
    TArray<FCharLights> CharLightMappings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|LevelScript")
    TMap<FString, FCharLights> StringToCharLightingMap;
};
