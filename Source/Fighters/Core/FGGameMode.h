#pragma once
#include "CoreMinimal.h"
#include "Fighters.h"
#include "FGCharacterBase.h"
#include "FGOpenController.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/GameModeBase.h"
#include "FGGameMode.generated.h"

UCLASS(minimalapi)
class AFGGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	AFGGameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float deltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|GameMode")
	TArray<APlayerStart*> PlayerStarts;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|GameMode")
	TArray<FVector> PlayerStartLocs;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|GameMode")
	TArray<FRotator> PlayerStartRots;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|Controller|Pawn")
	AFGCharacterBase* pPawn;
	UFUNCTION(BlueprintCallable, Category = "Fighters|Character")
	FORCEINLINE class AFGCharacterBase* GetPawnCharacter() const { return pPawn; }

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|Controller|Player")
	AFGOpenController* pController;
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller")
	FORCEINLINE class AFGOpenController* GetPawnController() const { return pController; }

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TSubclassOf<AFGCharacterBase> CharacterClassLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TSubclassOf<AFGCharacterBase> CharacterClassRight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
	AFGCharacterBase* CharacterLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
	AFGCharacterBase* CharacterRight;

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TSubclassOf<AFGOpenController> ControllerClassRight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
	AFGOpenController* ControllerLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
	AFGOpenController* ControllerRight;

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fighters|GameMode", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"))
	FORCEINLINE AFGCharacterBase* GetLeftCharacter() { return CharacterLeft; }
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fighters|GameMode", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"))
	FORCEINLINE AFGCharacterBase* GetRightCharacter() { return CharacterRight; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fighters|GameMode", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"))
	FORCEINLINE AFGOpenController* GetLeftPlayerController() { return ControllerLeft; }
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fighters|GameMode", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"))
	FORCEINLINE AFGOpenController* GetRightPlayerController() { return ControllerRight; }

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AFGOpenController*> Controllers;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AFGCharacterBase*> Characters;
};
