#include "FGCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/BoxComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "FGGameMode.h"
#include "FGGameInstance.h"

AFGCharacterBase::AFGCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	AC = CreateDefaultSubobject<UFGActionComponent>("ActionComponent");

	GetMesh()->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));

	GetCapsuleComponent()->InitCapsuleSize(24.f, 96.f);
	GetCapsuleComponent()->ShapeColor = FColor::White;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.f, 0.0f);
	GetCharacterMovement()->bRequestedMoveUseAcceleration = false;
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.f;
	GetCharacterMovement()->JumpZVelocity = 0.f;
	GetCharacterMovement()->GroundFriction = 10.f;
	GetCharacterMovement()->MaxWalkSpeed = 200.f;
	GetCharacterMovement()->MaxFlySpeed = 0.f;
	GetCharacterMovement()->MaxAcceleration = 10000;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	characterSize = FVector(1.f, 1.f, 1.f);
	characterState = ECharacterStates::VE_Default;

	plCanMove = false;
	plCanAttack = true;

	transform = FTransform();
	scale = FVector(0.f, 0.f, 0.f);

	isSplashHit = false;
	isSweepHit = false;
	isLaunchHit = false;
}

void AFGCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(IA_MoveRight, ETriggerEvent::Triggered, this, &AFGCharacterBase::MoveRight);
		//Input->BindAction(AC->ActionInputs.IA_JumpingCL, ETriggerEvent::Triggered, this, &AFGCharacterBase::Jumping);
		//Input->BindAction(AC->ActionInputs.IA_CrouchingCL, ETriggerEvent::Triggered, this, &AFGCharacterBase::Crouching);
		//Input->BindAction(AC->ActionInputs.IA_RollCL, ETriggerEvent::Started, this, &AFGCharacterBase::Roll);
		//Input->BindAction(AC->ActionInputs.IA_DashCL, ETriggerEvent::Started, this, &AFGCharacterBase::Dash);
		//Input->BindAction(AC->ActionInputs.IA_LPCL, ETriggerEvent::Started, this, &AFGCharacterBase::LP);
		//Input->BindAction(AC->ActionInputs.IA_RPCL, ETriggerEvent::Started, this, &AFGCharacterBase::RP);
		//Input->BindAction(AC->ActionInputs.IA_LKCL, ETriggerEvent::Started, this, &AFGCharacterBase::LK);
		//Input->BindAction(AC->ActionInputs.IA_RKCL, ETriggerEvent::Started, this, &AFGCharacterBase::RK);

		Input->BindAction(IA_MoveRight, ETriggerEvent::Completed, this, &AFGCharacterBase::MoveRightEnd);
		//Input->BindAction(AC->ActionInputs.IA_CrouchingCL, ETriggerEvent::Completed, this, &AFGCharacterBase::CrouchingEnd);
		//Input->BindAction(AC->ActionInputs.IA_LPCL, ETriggerEvent::Completed, this, &AFGCharacterBase::PKEnd);
		//Input->BindAction(AC->ActionInputs.IA_RPCL, ETriggerEvent::Completed, this, &AFGCharacterBase::PKEnd);
		//Input->BindAction(AC->ActionInputs.IA_LKCL, ETriggerEvent::Completed, this, &AFGCharacterBase::PKEnd);
		//Input->BindAction(AC->ActionInputs.IA_RKCL, ETriggerEvent::Completed, this, &AFGCharacterBase::PKEnd);
	}
}

void AFGCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	GetMesh()->SetVisibility(false);
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);

	GetMesh()->GetChildComponent(0)->SetHiddenInGame(!DebugHitBoxes);
	GetMesh()->GetChildComponent(1)->SetHiddenInGame(!DebugHitBoxes);
	GetMesh()->GetChildComponent(2)->SetHiddenInGame(!DebugHitBoxes);
	GetMesh()->GetChildComponent(3)->SetHiddenInGame(!DebugHitBoxes);
	GetMesh()->GetChildComponent(4)->SetHiddenInGame(!DebugHitBoxes);
	GetMesh()->GetChildComponent(5)->SetHiddenInGame(!DebugHitBoxes);
	GetMesh()->GetChildComponent(0)->SetVisibility(DebugHitBoxes);
	GetMesh()->GetChildComponent(1)->SetVisibility(DebugHitBoxes);
	GetMesh()->GetChildComponent(2)->SetVisibility(DebugHitBoxes);
	GetMesh()->GetChildComponent(3)->SetVisibility(DebugHitBoxes);
	GetMesh()->GetChildComponent(4)->SetVisibility(DebugHitBoxes);
	GetMesh()->GetChildComponent(5)->SetVisibility(DebugHitBoxes);

	hurtboxArray.Add(GetMesh()->GetChildComponent(0));
	hurtboxArray.Add(GetMesh()->GetChildComponent(1));
	hurtboxArray.Add(GetMesh()->GetChildComponent(2));

	USkeletalMeshComponent* UseMesh = GetMesh();
	if (UseMesh && UseMesh->AnimScriptInstance)
		AnimInstance = Cast<UFGAnimInstance>(UseMesh->AnimScriptInstance);
}

void AFGCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CalcDirection();
}

/*
*
* CALCULATION
*
*/
void AFGCharacterBase::CalcDirection()
{
	if (auto gamemode = Cast<AFGGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (gamemode->Characters.Num() > 0)
		{
			if (GetName().Contains("Left"))
			{
				if (gamemode->Characters[0]->GetActorLocation().X <= gamemode->Characters[1]->GetActorLocation().X)
					gamemode->Characters[0]->plFacingRight = true;
				else
					gamemode->Characters[0]->plFacingRight = false;

				CalcFlipping(gamemode->Characters[0]->plFacingRight);
			}
			else if (GetName().Contains("Right"))
			{
				if (gamemode->Characters[1]->GetActorLocation().X <= gamemode->Characters[0]->GetActorLocation().X)
					gamemode->Characters[1]->plFacingRight = true;
				else
					gamemode->Characters[1]->plFacingRight = false;

				CalcFlipping(gamemode->Characters[1]->plFacingRight);
			}
		}
	}
}

bool AFGCharacterBase::CalcIgnoreCollision(float lowest, float highest)
{
	float distanceApart = fabs(Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->Characters[1]->GetActorLocation().X -
							   Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->Characters[0]->GetActorLocation().X);
	bool canIgnoreCollision = distanceApart < lowest && distanceApart > highest ? true : false;
	return canIgnoreCollision;
}

void AFGCharacterBase::CalcFlipping(bool facingRight)
{
	if (characterState != ECharacterStates::VE_Jumping && characterState != ECharacterStates::VE_Rolling)
	{
		GetCapsuleComponent()->GetChildrenComponents(true, capsuleChildren);
		for (auto child : capsuleChildren)
		{
			if (child->GetName().Contains("Mesh"))
			{
				characterMesh = child;
				break;
			}
		}
		if (facingRight && scale.X == -1.f || !facingRight && scale.X == 1.f)
		{
			PlayAnimMontage(characterState == ECharacterStates::VE_Crouching ?
							characterClass.movement.Flip_Crouching_Montage :
							characterClass.movement.Flip_Standing_Montage);

			if (characterState == ECharacterStates::VE_Crouching)
			{
				GetMesh()->GetAnimInstance()->Montage_Play(characterClass.movement.Crouch_Montage);
				GetMesh()->GetAnimInstance()->Montage_JumpToSection("loopSection", characterClass.movement.Crouch_Montage);
			}
		}
		if (characterMesh)
		{
			transform = characterMesh->GetRelativeTransform();
			scale = transform.GetScale3D();
			scale.X = facingRight ? 1.f : -1.f;
			transform.SetScale3D(scale);
		}
		characterMesh->SetRelativeTransform(transform);
	}
}

void AFGCharacterBase::CalcMoveValue(const FInputActionValue& Value)
{
	moveValue.X = (plFacingRight ? Value.Get<FVector>().X : Value.Get<FVector>().X * -1.f);
}

/*
* 
* MOVERIGHT / MOVERIGHTEND
* 
*/
void AFGCharacterBase::MoveRight(const struct FInputActionValue& Value)
{
	CalcMoveValue(Value);

	const FVector moveVector = Value.Get<FVector>();
	const FRotator moveRotation(0, Controller->GetControlRotation().Yaw, 0);

	if (moveVector.X > 0.05f || moveVector.X < -0.05f)
	{
		if (moveValue.X > 0.05f)
		{
			moveState = EMoveStates::VE_MovingForward;
			PlayAnimMontage(characterClass.movement.Walk_Forward_Montage);
			plBlocking = false;
		}
		else if (moveValue.X < -0.05f)
		{
			moveState = EMoveStates::VE_MovingBackward;
			PlayAnimMontage(characterClass.movement.Walk_Backward_Montage);
			plBlocking = true;
		}
		else
			MoveRightEnd();

		const FVector directionVector = moveRotation.RotateVector(FVector::RightVector);
		AddMovementInput(directionVector, moveVector.X);
	}
}
void AFGCharacterBase::MoveRightEnd()
{
	moveValue.X = 0.f;

	AnimInstance->Montage_Stop(0.25f, characterClass.movement.Walk_Forward_Montage);
	AnimInstance->Montage_Stop(0.25f, characterClass.movement.Walk_Backward_Montage);

	plBlocking = false;
	moveState = EMoveStates::VE_Default;
}

/*
*
* JUMPING / FALLING
*
*/
void AFGCharacterBase::Jumping(const struct FInputActionValue& Value)
{
	const FVector jumpUpVector = Value.Get<FVector>();
	const FVector jumpDirection(200.f * moveValue.X, 0, 700.f * jumpUpVector.Z);

	if (AnimInstance->Montage_IsPlaying(characterClass.movement.Jump_Forward_Montage) ||
		AnimInstance->Montage_IsPlaying(characterClass.movement.Jump_Backward_Montage) ||
		AnimInstance->Montage_IsPlaying(characterClass.movement.Jump_Up_Montage))
		return;
	else if (jumpUpVector.Z > 0.05f)
	{




		if (moveValue.X > 0.05f)
			PlayAnimMontage(characterClass.movement.Jump_Forward_Montage);
		else if (moveValue.X < -0.05f)
			PlayAnimMontage(characterClass.movement.Jump_Backward_Montage);
		else
			PlayAnimMontage(characterClass.movement.Jump_Up_Montage);

		characterState = ECharacterStates::VE_Jumping;
		GetCharacterMovement()->Launch(jumpDirection);

		//if (CalcIgnoreCollision(600.f, 20.f))
		//{
		//	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Ignore);
		//	distance = Velocity.X * 2;
		//}

		//PlayAnimMontage(
		//	moveValue.X > 0.05f ?
		//	characterClass.movement.Jump_Forward_Montage :
		//	moveValue.X < -0.05f ?
		//	characterClass.movement.Jump_Backward_Montage :
		//	characterClass.movement.Jump_Up_Montage
		//);

		//characterState = ECharacterStates::VE_Jumping;
		//GetCharacterMovement()->Launch(FVector(200.f * distance, 0, 700.f));
	}
}
void AFGCharacterBase::Landed(const FHitResult& Hit)
{
	if (characterState == ECharacterStates::VE_Jumping)
	{
		GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Block);
		characterState = ECharacterStates::VE_Default;
		plCanAttack = true;

		ACharacter::StopJumping();
	}
	else
		return;

	ACharacter::OnLanded(Hit);
}

/*
*
* CROUCHING
*
*/
void AFGCharacterBase::Crouching()
{
	if (!AnimInstance->Montage_IsPlaying(characterClass.fighting.LP_Crouching_Montage))
		PlayAnimMontage(characterClass.movement.Crouch_Montage, 1.f, "loopSection");

	plBlocking = moveValue.X < -0.01f ? true : false;
	characterState = ECharacterStates::VE_Crouching;
}
void AFGCharacterBase::CrouchingEnd()
{
	if (AnimInstance->Montage_GetCurrentSection() != "endSection")
		AnimInstance->Montage_JumpToSection("endSection", characterClass.movement.Crouch_Montage);

	plBlocking = false;
	characterState = ECharacterStates::VE_Default;
}

/*
*
* ROLL
*
*/
void AFGCharacterBase::Roll()
{
	float distance = 1500.f;

	if (!AnimInstance->Montage_IsPlaying(characterClass.movement.Roll_Backward_Montage) && !AnimInstance->Montage_IsPlaying(characterClass.movement.Roll_Forward_Montage))
	{
		if (moveValue.X < -0.05f)
		{
			PlayAnimMontage(characterClass.movement.Roll_Backward_Montage);
			GetCharacterMovement()->Launch(FVector(plFacingRight ? distance * -1.f : distance, 0, 0.f));
		}
		else
		{
			if (CalcIgnoreCollision(150.f, 50.f))
			{
				GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Ignore);
				distance = distance * 2.f;
			}

			PlayAnimMontage(characterClass.movement.Roll_Forward_Montage);
			GetCharacterMovement()->Launch(FVector(plFacingRight ? distance : distance * -1.f, 0, 0.f));
		}

		characterState = ECharacterStates::VE_Rolling;
	}
}

/*
*
* DASH
*
*/
void AFGCharacterBase::Dash()
{
	const FVector Velocity = UKismetMathLibrary::Normal(GetVelocity());
	float distance = Velocity.X;

	PlayAnimMontage(characterClass.movement.Dash_Montage, 1.0f);

	characterState = ECharacterStates::VE_Dashing;
	GetCharacterMovement()->Launch(FVector(200.f * distance, 0, 0.f));
}

/*
*
* ATTACK
*
*/
void AFGCharacterBase::LP(bool Value)
{
	if (characterState == ECharacterStates::VE_Crouching && !AnimInstance->Montage_IsPlaying(characterClass.fighting.LP_Crouching_Montage))
	{
		PlayAnimMontage(characterClass.fighting.LP_Crouching_Montage, 1.f);
		attackLayer = EAttackLayer::E_LowerAttack;
	}

	//if (plCanAttack)
	//{
	//	plCanAttack = false;
		//else if (moveState == EMoveStates::VE_MovingBackward)
		//{
		//	PlayAnimMontage(characterClass.fighting.LP_Direction_Montage, 1.f);
		//	attackLayer = EAttackLayer::E_MiddlAttack;
		//}
		//else if (characterState == ECharacterStates::VE_Jumping)
		//{
		//	PlayAnimMontage(characterClass.fighting.LP_Jumping_Montage, 1.f);
		//	attackLayer = EAttackLayer::E_UpperAttack;
		//}
		//else
		//{
		//	PlayAnimMontage(characterClass.fighting.LP_Standing_Montage, 1.4f);
		//	attackLayer = EAttackLayer::E_MiddlAttack;
		//}
	//}
}

void AFGCharacterBase::RP(bool Value)
{
	//if (plCanAttack)
	//{
	//	plCanAttack = false;

	//	if (moveState == EMoveStates::VE_MovingBackward)
	//	{
	//		PlayAnimMontage(characterClass.fighting.RP_Direction_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_MiddlAttack;
	//	}
	//	else if (characterState == ECharacterStates::VE_Jumping)
	//	{
	//		PlayAnimMontage(characterClass.fighting.RP_Jumping_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_UpperAttack;
	//	}
	//	else if (characterState == ECharacterStates::VE_Crouching)
	//	{
	//		PlayAnimMontage(characterClass.fighting.RP_Crouching_Montage, 2.f);
	//		attackLayer = EAttackLayer::E_LowerAttack;
	//	}
	//	else
	//	{
	//		PlayAnimMontage(characterClass.fighting.RP_Standing_Montage, 1.4f);
	//		attackLayer = EAttackLayer::E_MiddlAttack;
	//	}
	//}
}

void AFGCharacterBase::LK(bool Value)
{
	//if (plCanAttack)
	//{
	//	plCanAttack = false;

	//	if (moveState == EMoveStates::VE_MovingBackward)
	//	{
	//		PlayAnimMontage(characterClass.fighting.LK_Direction_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_MiddlAttack;
	//	}
	//	else if (characterState == ECharacterStates::VE_Jumping)
	//	{
	//		PlayAnimMontage(characterClass.fighting.LK_Jumping_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_UpperAttack;
	//	}
	//	else if (characterState == ECharacterStates::VE_Crouching)
	//	{
	//		PlayAnimMontage(characterClass.fighting.LK_Crouching_Montage, 1.4f);
	//		attackLayer = EAttackLayer::E_LowerAttack;
	//	}
	//	else
	//	{
	//		PlayAnimMontage(characterClass.fighting.LK_Standing_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_MiddlAttack;
	//	}
	//}
}

void AFGCharacterBase::RK(bool Value)
{
	//if (plCanAttack)
	//{
	//	plCanAttack = false;

	//	if (moveState == EMoveStates::VE_MovingBackward)
	//	{
	//		PlayAnimMontage(characterClass.fighting.RK_Direction_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_MiddlAttack;
	//	}
	//	else if (characterState == ECharacterStates::VE_Jumping)
	//	{
	//		PlayAnimMontage(characterClass.fighting.RK_Jumping_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_UpperAttack;
	//	}
	//	else if (characterState == ECharacterStates::VE_Crouching)
	//	{
	//		PlayAnimMontage(characterClass.fighting.RK_Crouching_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_LowerAttack;
	//	}
	//	else
	//	{
	//		PlayAnimMontage(characterClass.fighting.RK_Standing_Montage, 1.f);
	//		attackLayer = EAttackLayer::E_MiddlAttack;
	//	}
	//}
}

/*
*
* ATTACKEND
*
*/
void AFGCharacterBase::PKEnd()
{
	//StopAllAnimMontages(0.5f);

	//if (!plCanAttack && plUsingLP || plUsingLK || plUsingRP || plUsingRK)
	//{
	//	characterState = ECharacterStates::VE_Default;

	//	plUsingLP = false;
	//	plUsingLK = false;
	//	plUsingRP = false;
	//	plUsingRK = false;
	//	plCanAttack = true;
	//}
}

/*
*
* ONGROUND
*
*/
void AFGCharacterBase::OnGround(float movingAxis, float jumpAxis, float crouchAxis)
{
}

void AFGCharacterBase::PerformShake(bool isLowShaking)
{
	GetWorld()->GetFirstPlayerController()->PlayerCameraManager->PlayWorldCameraShake(GetWorld(), isLowShaking ? LoShake : HiShake, GetActorLocation(), 1000.f, 1000.f, 1.f);
}

void AFGCharacterBase::SetAttackLayer(EAttackLayer attLayer)
{
	attackLayer = attLayer;
}

/*
 *
 * ANIM MONTAGE
 * 
 */
float AFGCharacterBase::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	if (AnimMontage && AnimInstance)
	{
		if (!AnimInstance->Montage_IsPlaying(AnimMontage))
		{
			return AnimInstance->Montage_Play(AnimMontage, InPlayRate);
		}
		else
		{
			if (StartSectionName != NAME_None && AnimInstance->Montage_GetCurrentSection(AnimMontage) != StartSectionName)
			{
				AnimInstance->Montage_JumpToSection(StartSectionName, AnimMontage);
			}
		}
	}
	return 0.0f;
}

void AFGCharacterBase::StopAnimMontage(class UAnimMontage* AnimMontage)
{
	if (AnimMontage && AnimInstance && AnimInstance->Montage_IsPlaying(AnimMontage))
		AnimInstance->Montage_Stop(AnimMontage->BlendOut.GetBlendTime());
}

void AFGCharacterBase::StopAllAnimMontages(float blendout)
{
	if (AnimInstance)
		AnimInstance->Montage_Stop(blendout);
}

bool AFGCharacterBase::HasMoveCondition()
{
	return
		characterState != ECharacterStates::VE_Attacked &&
		characterState != ECharacterStates::VE_Attacking &&
		characterState != ECharacterStates::VE_Crouching &&
		characterState != ECharacterStates::VE_Dashing &&
		characterState != ECharacterStates::VE_Jumping &&
		characterState != ECharacterStates::VE_Rolling;
}

bool AFGCharacterBase::HasJumpCondition()
{
	return
		characterState != ECharacterStates::VE_Attacked &&
		characterState != ECharacterStates::VE_Attacking &&
		characterState != ECharacterStates::VE_Crouching &&
		characterState != ECharacterStates::VE_Dashing &&
		characterState != ECharacterStates::VE_Rolling;
}

bool AFGCharacterBase::HasCrouchCondition()
{
	return
		characterState != ECharacterStates::VE_Attacked &&
		characterState != ECharacterStates::VE_Crouching &&
		characterState != ECharacterStates::VE_Dashing &&
		characterState != ECharacterStates::VE_Jumping &&
		characterState != ECharacterStates::VE_Rolling;
}

bool AFGCharacterBase::HasDashCondition()
{
	return
		characterState != ECharacterStates::VE_Attacked &&
		characterState != ECharacterStates::VE_Attacking &&
		characterState != ECharacterStates::VE_Crouching &&
		characterState != ECharacterStates::VE_Dashing &&
		characterState != ECharacterStates::VE_Jumping &&
		characterState != ECharacterStates::VE_Rolling;
}

bool AFGCharacterBase::HasRollCondition()
{
	return
		characterState != ECharacterStates::VE_Attacked &&
		characterState != ECharacterStates::VE_Attacking &&
		characterState != ECharacterStates::VE_Dashing &&
		characterState != ECharacterStates::VE_Jumping &&
		characterState != ECharacterStates::VE_Rolling;
}