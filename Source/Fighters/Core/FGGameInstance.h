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
#include "FGDebugComponent.h"
#include "FGCameraDirector.h"
#include "FGMainViewportWidget.h"
#include "InputSystem/InputManager.h"
#include "FGGameInstance.generated.h"

UCLASS(NonTransient)
class FIGHTERS_API UFGGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UFGGameInstance();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameInstance")
	class UFGDebugComponent* DebugMenuWindow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameInstance")
	bool showDebugWin;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	class UInputManager* InputManager;

	FORCEINLINE class UInputManager* GetInputManager() const { return InputManager; }

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|GameInstance")
	void SetMatchState(EMatchState matchState);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	EMatchState MatchState;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|GameInstance")
	void SetWinCount(EWinCount winCount);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	EWinCount WinCount;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|GameInstance")
	void SetBattleTime(EBattleTime battleTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	EBattleTime BattleTime;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|GameInstance")
	void SetWinCounts(int32 winCountLeft, int32 winCountRight);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameInstance", meta = (AllowPrivateAccess = true))
	int32 WinCountLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|GameInstance", meta = (AllowPrivateAccess = true))
	int32 WinCountRight;

private:

	UFUNCTION()
	UFGMainViewportWidget* GetMainViewportWidget();

	UFUNCTION()
	void SetMainViewportWidget(UFGMainViewportWidget* MainViewportWidget);

	UPROPERTY(Export)
	UFGMainViewportWidget* m_MainViewportWidget;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|GameInstance|ID")
	void SetCharacterIds(ECharacterID characterIdLeft, ECharacterID characterIdRight);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance|ID")
	ECharacterID CharacterIdLeft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance|ID")
	ECharacterID CharacterIdRight;

	UFUNCTION(BlueprintCallable, Category = "Fighters|GameInstance|ID")
	void SetStageId(EStageID stageId);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance|ID")
	EStageID StageId;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|GameInstance|ID")
	void SetPlayerIds(EPlayerID playerIdLeft, EPlayerID playerIdRight);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance|ID")
	EPlayerID PlayerIdLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance|ID")
	EPlayerID PlayerIdRight;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|GameInstance")
	bool hasSpawned();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance")
	AFGCameraDirector* CameraDirector;
};
