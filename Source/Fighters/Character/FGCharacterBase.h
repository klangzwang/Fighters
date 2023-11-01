#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FGCharacter.h"
#include "ECharacterStates.h"
#include "EAttackLayer.h"
#include "FGAnimMontage.h"
#include "InputActionValue.h"
#include "FGCharacterBase.generated.h"

class UInputMappingContext;
class UDACharLights;
struct FInputActionValue;

UCLASS(config = Game)
class FIGHTERS_API AFGCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AFGCharacterBase();

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Landed(const FHitResult& Hit) override;

	virtual float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate = 1.f, FName StartSectionName = NAME_None) override;
	virtual void StopAnimMontage(class UAnimMontage* AnimMontage) override;
	void StopAllAnimMontages();

protected:

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plIsRunning;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plJumping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plCrouching;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plCanCrouch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plBlocking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plAttacking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plCanMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plFacingRight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingLP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingRP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingRK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingLPRP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingLKRK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingLPLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingRPRK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plCanAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plNumberOne;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plHasWon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plIsGrabbed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plIsOnGround;

public:

	void FlippingCharacter(bool isFacingRight);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	AFGCharacterBase* otherPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	float gravityScaleModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	USceneComponent* characterMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	TArray<USceneComponent*> capsuleChildren;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FTransform transform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FVector scale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FVector characterSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	TArray<USoundBase*> fighterSounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|States")
	ECharacterStates characterState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FCharacterClass characterClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FAnimMontageHitDamage hitdamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox")
	TArray<USceneComponent*> hurtboxArray;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|DataAssets")
	UDACharLights* mCharLights;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Device")
	bool isReadyToUse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Input")
	float moveAxisValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Input")
	float jumpAxisValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Input")
	float crouchAxisValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Input")
	float rollDistance;

	UFUNCTION(BlueprintCallable, Category = "Fighters|Character")
	FORCEINLINE float GetFGMoveAxisValue() const { return moveAxisValue; }
	UFUNCTION(BlueprintCallable, Category = "Fighters|Character")
	FORCEINLINE float GetFGJumpAxisValue() const { return jumpAxisValue; }
	UFUNCTION(BlueprintCallable, Category = "Fighters|Character")
	FORCEINLINE float GetFGCrouchAxisValue() const { return crouchAxisValue; }

	void LaunchCharacterCustom(FVector LaunchVelocity, bool bXYOverride, bool bZOverride, bool playerCollision, bool needsTimeline);

	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Character")
	void LaunchCharacterTimeline(bool isFacingRight);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Fighters|Character")
	void IgnorePlayerToPlayerCollision(bool ignorePlayerCollision);

	UFUNCTION(BlueprintCallable, Category = "Fighters|Character")
	void OnGround(float movingAxis, float jumpAxis, float crouchAxis);

	FTimerHandle jumpDelayTimer;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Debug")
	bool DebugHitBoxes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Debug")
	bool DebugAxisValue;

	UFUNCTION()
	virtual void OnBoxStrikeBegin(class UPrimitiveComponent* Comp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void OnBoxStrikeEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void SetAttackLayer(EAttackLayer attLayer);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox")
	EAttackLayer attackLayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox")
	bool isSplashHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox")
	bool isSweepHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox")
	bool isLaunchHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox")
	float hitPoint;

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|Character")
	void PerformShake(bool isLowShaking);
	UPROPERTY(EditDefaultsOnly, Category = "Fighters|Character|Camera")
	TSubclassOf<UCameraShakeBase> LoShake;
	UPROPERTY(EditDefaultsOnly, Category = "Fighters|Character|Camera")
	TSubclassOf<UCameraShakeBase> HiShake;

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Character")
	void LightFlash(float flashMultiplier);
	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Character")
	void EventDamageDealer(bool isFacingRight);
	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Character")
	void HitShaking();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputMapping", meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* inputMappingLP;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputMapping", meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* inputMappingRP;

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputAction", meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputAction", meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpingAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputAction", meta = (AllowPrivateAccess = "true"))
	class UInputAction* CrouchingAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputAction", meta = (AllowPrivateAccess = "true"))
	class UInputAction* AttackAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputAction", meta = (AllowPrivateAccess = "true"))
	class UInputAction* ThrowAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputAction", meta = (AllowPrivateAccess = "true"))
	class UInputAction* RollAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|Character|InputAction", meta = (AllowPrivateAccess = "true"))
	class UInputAction* DashAction;

public:

	void Move(const FInputActionValue& Value);
	void Jumping(const FInputActionValue& Value);
	void Crouching(const FInputActionValue& Value);
	void Attack(const FInputActionValue& Value);
	void Throw(const FInputActionValue& Value);
	void Roll(const FInputActionValue& Value);
	void Dash(const FInputActionValue& Value);

public:

	void MoveEnd(const FInputActionValue& Value);
	void JumpingEnd(const FInputActionValue& Value);
	void CrouchingEnd(const FInputActionValue& Value);
	void AttackEnd(const FInputActionValue& Value);
	void ThrowEnd(const FInputActionValue& Value);
	void RollEnd(const FInputActionValue& Value);
	void DashEnd(const FInputActionValue& Value);
};