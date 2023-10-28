#pragma once
#include "CoreMinimal.h"
#include "Fighters.h"
#include "GameFramework/PlayerController.h"
#include "FGOpenController.generated.h"

UCLASS(Blueprintable)
class FIGHTERS_API AFGOpenController : public APlayerController
{
    GENERATED_BODY()

public:

    AFGOpenController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|Controller|Reference")
	AFGGameMode* FGGameMode;
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|Reference")
	FORCEINLINE class AFGGameMode* GetGameMode() const { return FGGameMode; }

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|Controller|Reference")
	UFGGameInstance* FGGameInstance;
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|Reference")
	FORCEINLINE class UFGGameInstance* GetGameInstance() const { return FGGameInstance; }

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|Controller|Pawn")
	AFGCharacterBase* pPawn;
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|Pawn")
	FORCEINLINE class AFGCharacterBase* GetPawnCharacter() const { return pPawn; }

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|Controller|Player")
	AFGPlayerController* pController;
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|Player")
	FORCEINLINE class AFGPlayerController* GetPawnController() const { return pController; }
};
