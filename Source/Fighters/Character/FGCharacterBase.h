#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ECharacterID.h"
#include "FGCharacter.h"
#include "FGActionComponent.h"
#include "ECharacterStates.h"
#include "EMoveStates.h"
#include "EAttackLayer.h"
#include "FGAnimMontage.h"
#include "FGAnimInstance.h"
#include "EPlayerID.h"
#include "FGCharacterBase.generated.h"

class UDACharLights;

UCLASS(config = Game)
class FIGHTERS_API AFGCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AFGCharacterBase(const FObjectInitializer& ObjectInitializer);

protected:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	virtual float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate = 1.f, FName StartSectionName = NAME_None) override;
	virtual void StopAnimMontage(class UAnimMontage* AnimMontage) override;
	void StopAllAnimMontages(float blendout);

	virtual void Landed(const FHitResult& Hit) override;

public:

	void MoveRight(const struct FInputActionValue& Value);
	void Jumping(const struct FInputActionValue& Value);
	void Crouching();
	void Roll();
	void Dash();

	void LP(bool Value);
	void RP(bool Value);
	void LK(bool Value);
	void RK(bool Value);

	void MoveRightEnd();
	void CrouchingEnd();

	void PKEnd();

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|Character|Basics")
	class UFGActionComponent* AC;

	FORCEINLINE class UFGActionComponent* GetActionComponent() const { return AC; }

public:

	UFUNCTION(BlueprintCallable, Category = "Fighters|Character|Basics")
	void CalcDirection();

	UFUNCTION(BlueprintCallable, Category = "Fighters|Character|Basics")
	bool CalcIgnoreCollision(float lowest, float highest);

	UFUNCTION(BlueprintCallable, Category = "Fighters|Character|Basics")
	void CalcFlipping(bool facingRight);

	UFUNCTION(BlueprintCallable, Category = "Fighters|Character|Basics")
	void CalcMoveValue(const struct FInputActionValue& Value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FVector moveValue;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plCanMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plCanAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plFacingRight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plBlocking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingLP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingRP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plUsingRK;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|States")
	ECharacterStates characterState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|States")
	EMoveStates moveState;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	TMap<ECharacterID, TSubclassOf<AFGCharacter>> mIdCharacterMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FCharacterClass characterClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	EPlayerID mPlayerID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FAnimMontageHitDamage hitdamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox|Debug")
	bool DebugHitBoxes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox")
	TArray<USceneComponent*> hurtboxArray;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|DataAssets")
	UDACharLights* mCharLights;

public:

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

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Character")
	void IgnorePlayerCollision(bool ignore);

	UFUNCTION(BlueprintCallable, Category = "Fighters|Character")
	void OnGround(float movingAxis, float jumpAxis, float crouchAxis);

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|Character|Animation")
	UFGAnimInstance* AnimInstance;

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|Character|EnhancedInput")
	class UInputAction* IA_MoveRight;

public:

	bool HasMoveCondition();
	bool HasJumpCondition();
	bool HasCrouchCondition();
	bool HasDashCondition();
	bool HasRollCondition();
};