#pragma once
#include "CoreMinimal.h"
#include "FGHealthComponent.h"
#include "FGGameInstance.h"
#include "FGAnimMontage.h"
#include "FGCharacter.h"
#include "EPlayerID.h"
#include "ECharacterStates.h"
#include "EAttackLayer.h"
#include "GameFramework/Character.h"
#include "FGCharacterBase.generated.h"

class UMatineeCameraShake;
class UTextureRenderTarget2D;

UCLASS(config = Game)
class FIGHTERS_API AFGCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AFGCharacterBase();

	virtual void BeginPlay() override;
	virtual void Tick( float deltaTime ) override;
	virtual void Landed(const FHitResult& Hit) override;

	virtual float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate = 1.f, FName StartSectionName = NAME_None) override;
	virtual void StopAnimMontage(class UAnimMontage* AnimMontage) override;
	void StopAllAnimMontages();

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fighters|Character|Basics")
	class UFGHealthComponent* HealthComponent;

	FORCEINLINE class UFGHealthComponent* GetFGHealthComponent() const { return HealthComponent; }

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	ECharacterStates characterState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	AFGCharacterBase* otherPlayer;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	bool plAiController;

public:

	void FlippingCharacter(bool isFacingRight);

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	TMap<ECharacterID, TSubclassOf<AFGCharacter>> mIdCharacterMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FCharacterClass characterClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	EPlayerID mPlayerID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Basics")
	FAnimMontageHitDamage hitdamage;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox|Debug")
	bool DebugHitBoxes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Character|Hitbox")
	TArray<USceneComponent*> hurtboxArray;

public:

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

	UFUNCTION(BlueprintCallable)
	void PerformShake(bool isLowShaking);
	UPROPERTY(EditDefaultsOnly, Category = "Fighters|Character|Camera")
	TSubclassOf<UCameraShakeBase> LoShake;
	UPROPERTY(EditDefaultsOnly, Category = "Fighters|Character|Camera")
	TSubclassOf<UCameraShakeBase> HiShake;

public:

	UFUNCTION(BlueprintImplementableEvent)
	void LightFlash(float flashMultiplier);
	UFUNCTION(BlueprintImplementableEvent)
	void EventDamageDealer(bool isFacingRight);
	UFUNCTION(BlueprintImplementableEvent)
	void HitShaking();
};