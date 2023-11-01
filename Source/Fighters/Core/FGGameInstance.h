#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ECharacterID.h"
#include "EMatchState.h"
#include "EBattleTime.h"
#include "EStageID.h"
#include "EPlayerID.h"
#include "EWinCount.h"
#include "Engine/DataTable.h"
#include "FGGameInstance.generated.h"

class UDACameraParam;

UCLASS()
class FIGHTERS_API UFGGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UFGGameInstance();

public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDataTable* GetCameraParam() const;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameInstance", meta = (AllowPrivateAccess = true))
	UDACameraParam* CameraParam;

public:

	UFUNCTION(BlueprintCallable)
	void SetCharacterIds(ECharacterID characterIdLeft, ECharacterID characterIdRight);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	ECharacterID CharacterIdLeft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	ECharacterID CharacterIdRight;

public:

	UFUNCTION(BlueprintCallable)
	void SetStageId(EStageID stageId);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	EStageID StageId;

public:

	UFUNCTION(BlueprintCallable)
	void SetMatchState(EMatchState matchState);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	EMatchState MatchState;

public:

	UFUNCTION(BlueprintCallable)
	void SetWinCount(EWinCount winCount);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	EWinCount WinCount;

public:

	UFUNCTION(BlueprintCallable)
	void SetBattleTime(EBattleTime battleTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	EBattleTime BattleTime;

public:

	UFUNCTION(BlueprintCallable)
	void SetWinCounts(int32 winCountLeft, int32 winCountRight);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameInstance", meta = (AllowPrivateAccess = true))
	int32 WinCountLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameInstance", meta = (AllowPrivateAccess = true))
	int32 WinCountRight;
};
