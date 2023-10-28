#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ECharacterID.h"
#include "EPlayerID.h"
#include "FGGameInstance.generated.h"

UCLASS()
class FIGHTERS_API UFGGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters")
	void OpenPauseMenu();

	UFUNCTION(BlueprintCallable, Category = "Fighters")
	void InitFadeOut(float FadeFrame, bool White);
	UFUNCTION(BlueprintCallable, Category = "Fighters")
	void InitFadeIn(float FadeFrame, bool White);

public:

	UFGGameInstance();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance|CharacterID")
	ECharacterID mCharacterLeftID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance|CharacterID")
	ECharacterID mCharacterRightID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|GameInstance|KeyMappingData")
	UDataTable* mCharacterKeyMapData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	int32 winGameCountP1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	int32 winGameCountP2;

	UFUNCTION(BlueprintCallable)
	EPlayerID GetControllerID(EPlayerID _playerID);
	UFUNCTION(BlueprintCallable)
	void SetControllerID(EPlayerID _playerID, EPlayerID _controllerID);
	UFUNCTION(BlueprintCallable)
	EPlayerID SearchPlayerIDByControllerID(EPlayerID _controllerID);
	
	UFUNCTION(BlueprintImplementableEvent)
	void TickInputToInputManager(APlayerController* pController, float DeltaTime);
};
