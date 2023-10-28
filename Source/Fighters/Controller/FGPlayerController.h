#pragma once
#include "CoreMinimal.h"
#include "FGOpenController.h"
#include "FGCharacterBase.h"
#include "EDeviceType.h"
#include "FGPlayerController.generated.h"

UCLASS(config = Game, BlueprintType, Blueprintable)
class FIGHTERS_API AFGPlayerController : public AFGOpenController
{
	GENERATED_BODY()

public:

	AFGPlayerController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void SetupInputComponent() override;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|Input")
	FORCEINLINE float GetFGMoveAxisValue() const { return moveAxisValue; }
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|Input")
	FORCEINLINE float GetFGJumpAxisValue() const { return jumpAxisValue; }
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|Input")
	FORCEINLINE float GetFGCrouchAxisValue() const { return crouchAxisValue; }

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Input")
	EDeviceType inputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Device")
	TArray<FName> kbActionNamesPL;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Device")
	TArray<FName> kbAxisNamesPL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Device")
	TArray<FName> kbActionNamesPR;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Device")
	TArray<FName> kbAxisNamesPR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Device")
	bool isReadyToUse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Input")
	float moveAxisValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Input")
	float jumpAxisValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Input")
	float crouchAxisValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Input")
	float rollDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Debug")
	bool DebugKeyMapping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Debug")
	bool DebugActionAxisMapping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Debug")
	bool DebugDeviceCheck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Debug")
	bool DebugInputBuffer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Debug")
	bool DebugAxisValues;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Controller|Debug")
	bool DebugCharStates;

public:

	void LaunchCharacterCustom(FVector LaunchVelocity, bool bXYOverride, bool bZOverride, bool playerCollision, bool needsTimeline);

	UFUNCTION(BlueprintImplementableEvent)
	void LaunchCharacterTimeline(bool isFacingRight);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void IgnorePlayerToPlayerCollision(bool ignorePlayerCollision);

	//UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|Action")
	//void DashBackward();

	FTimerHandle jumpDelayTimer;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void MoveRightCL(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void JumpCL(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void CrouchCL(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void StopCrouchCL();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void AttackCL(FKey keyPressed);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void StopAttackCL();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void ThrowCL();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void RollCL();

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void MoveRightCR(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void JumpCR(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void CrouchCR(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void StopCrouchCR();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void AttackCR(FKey keyPressed);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void StopAttackCR();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void ThrowCR();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void RollCR();

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void MoveRight(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void Jump(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|AxisKey")
	void Crouch(float Value);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void StopCrouch();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void Attack(FKey keyPressed);
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void StopAttack();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void Throw();
	UFUNCTION(BlueprintCallable, Category = "Fighters|Controller|ActionKey")
	void Roll();
};
