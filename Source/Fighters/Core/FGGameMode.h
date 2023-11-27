#pragma once
#include "CoreMinimal.h"
#include "Fighters.h"
#include "FGGameModeBase.h"
#include "EMatchState.h"
#include "FGCharacterBase.h"
#include "FGCharacter.h"
#include "FGAIController.h"
#include "HeightFogData.h"
#include "SkyLightData.h"
#include "BGLightData.h"
#include "WorldLight.h"
#include "WorldLight.h"
#include "CharacterLights.h"

#include "FGGameMode.generated.h"

class ACharacter;

UCLASS(minimalapi)
class AFGGameMode : public AFGGameModeBase
{
	GENERATED_BODY()

public:

	AFGGameMode();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float deltaTime) override;

	UFUNCTION()
	void CalcMatchState();
	UFUNCTION()
	void BeginSpawn();
	UFUNCTION()
	void EndSpawn();

	class UFGGameInstance* GameInstance;

	UFUNCTION(BlueprintCallable)
	void AddFighterCharacters();

	UFUNCTION(BlueprintCallable)
	void AddFighterControllers();

	bool HasSpawnCondition();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameMode")
	float BattleTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameMode")
	float WinCounter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameMode", meta = (AllowPrivateAccess = true))
	int32 WinCountLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameMode", meta = (AllowPrivateAccess = true))
	int32 WinCountRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameMode")
	EMatchState MatchState;

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameState|Location")
	TArray<APlayerStart*> PlayerStart;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameState|Controller")
	TArray<AController*> Controllers;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameState|Character")
	TArray<AFGCharacterBase*> Characters;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameState|Character")
	TSubclassOf<AFGCharacterBase> CharacterLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameState|Character")
	TSubclassOf<AFGCharacterBase> CharacterRight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameState|Controller")
	TSubclassOf<AFGAIController> ControllerAiLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameState|Controller")
	TSubclassOf<AFGAIController> ControllerAiRight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameState|Ai")
	UBehaviorTree* aiBehavior;

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FHeightFogData> HeightFogData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FSkyLightData> SkyLightData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FBGLightData> BGWorldLightData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FCharacterLights CharacterLights;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FWorldLight> MainWorldLights;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FWorldLight> RightSideWorldLights;

public:

	UFUNCTION(BlueprintCallable)
	void UpdateWorldLights();

	UFUNCTION(BlueprintCallable)
	void UpdateFog();

	UFUNCTION(BlueprintCallable)
	void UpdateCharacterLights();

public:

	UFUNCTION(BlueprintCallable)
	void RestartBattleScene();

	UFUNCTION(BlueprintCallable)
	void RestartBattleRound();

	UFUNCTION(BlueprintCallable)
	void ResetWorldLights();

	UFUNCTION(BlueprintCallable)
	void ResetCharacterLights();

public:

	UFUNCTION(BlueprintCallable)
	ACharacter* GetPlayerCharacter(EPlayerID PlayerID);

	UFUNCTION(BlueprintCallable)
	FVector GetPlayerActorLocation(EPlayerID PlayerID);

	UFUNCTION(BlueprintCallable)
	int32 GetPlayerActorHealth(EPlayerID PlayerID);

public:

	UFUNCTION(BlueprintCallable)
	void ClearWorldLights();

	UFUNCTION(BlueprintCallable)
	void ClearCharacterLights();
};
