#include "FGCharacterBase.h"
#include "Engine/LocalPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "FGOpenController.h"
#include "Kismet/GameplayStatics.h"
#include "FGGameMode.h"

AFGCharacterBase::AFGCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));

	GetCapsuleComponent()->InitCapsuleSize(24.f, 96.0f);
	GetCapsuleComponent()->ShapeColor = FColor::Yellow;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	GetCharacterMovement()->bRequestedMoveUseAcceleration = false;
	GetCharacterMovement()->GravityScale = 2.5f;
	GetCharacterMovement()->AirControl = 0.0f;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	GetCharacterMovement()->GroundFriction = 10.0f;
	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	GetCharacterMovement()->MaxFlySpeed = 0.0f;
	GetCharacterMovement()->MaxAcceleration = 10000;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	characterSize = FVector(1.f, 1.f, 1.f);
	characterState = ECharacterStates::VE_Default;
	otherPlayer = nullptr;

	plIsRunning = false;
	plJumping = false;
	plCrouching = false;
	plCanCrouch = true;
	plBlocking = false;
	plAttacking = false;
	plCanMove = true;
	plUsingLP = false;
	plUsingLK = false;
	plUsingRP = false;
	plUsingRK = false;
	plUsingLPRP = false;
	plUsingLKRK = false;
	plUsingLPLK = false;
	plUsingRPRK = false;
	plCanAttack = true;
	plNumberOne = false;
	plHasWon = false;
	plIsGrabbed = false;
	plIsOnGround = false;

	gravityScaleModifier = 0.f;
	transform = FTransform();
	scale = FVector(0.f, 0.f, 0.f);

	DebugHitBoxes = false;
	DebugAxisValue = false;

	isReadyToUse = false;

	moveAxisValue = 0.f;
	jumpAxisValue = 0.f;
	crouchAxisValue = 0.f;

	rollDistance = 1400.f;

	isSplashHit = false;
	isSweepHit = false;
	isLaunchHit = false;
}

void AFGCharacterBase::BeginPlay()
{
	Super::BeginPlay();

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

	UStaticMeshComponent* HB_StrikeMesh = Cast<UStaticMeshComponent>(GetMesh()->GetChildComponent(5));
	HB_StrikeMesh->OnComponentBeginOverlap.AddDynamic(this, &AFGCharacterBase::OnBoxStrikeBegin);
	HB_StrikeMesh->OnComponentEndOverlap.AddDynamic(this, &AFGCharacterBase::OnBoxStrikeEnd);

	if (auto FGGameMode = Cast<AFGGameMode>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		if (AFGOpenController* FGControllerLeft = Cast<AFGOpenController>(FGGameMode->ControllerLeft))
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(FGControllerLeft->GetLocalPlayer()))
				Subsystem->AddMappingContext(inputMappingLP, 0);
		}
		else if (AFGOpenController* FGControllerRight = Cast<AFGOpenController>(FGGameMode->ControllerRight))
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(FGControllerRight->GetLocalPlayer()))
				Subsystem->AddMappingContext(inputMappingRP, 0);
		}
	}
}

void AFGCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (auto gamemode = Cast<AFGGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (gamemode->GetLeftCharacter() != NULL && gamemode->GetRightCharacter() != NULL)
		{
			if (GetName().Contains("Left"))
			{
				if(gamemode->GetLeftCharacter()->GetActorLocation().X <= gamemode->GetRightCharacter()->GetActorLocation().X)
					gamemode->GetLeftCharacter()->plFacingRight = true;
				else
					gamemode->GetLeftCharacter()->plFacingRight = false;

				FlippingCharacter(gamemode->GetLeftCharacter()->plFacingRight);
				plNumberOne = true;
			}
			else if (GetName().Contains("Right"))
			{
				if (gamemode->GetRightCharacter()->GetActorLocation().X <= gamemode->GetLeftCharacter()->GetActorLocation().X)
					gamemode->GetRightCharacter()->plFacingRight = true;
				else
					gamemode->GetRightCharacter()->plFacingRight = false;

				FlippingCharacter(gamemode->GetRightCharacter()->plFacingRight);
				plNumberOne = false;
			}
		}
	}

	if (DebugAxisValue)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::Orange, FString::Printf(TEXT("-- MoveAxisValue ---> (%f)"), GetFGMoveAxisValue()));
		GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::Yellow, FString::Printf(TEXT("-- JumpAxisValue ---> (%f)"), GetFGJumpAxisValue()));
		GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::Green, FString::Printf(TEXT("-- CrouchAxisValue -> (%f)"), GetFGCrouchAxisValue()));
	}
	if (isReadyToUse)
	{
		if (plIsOnGround && plCanMove && plCanAttack)
			OnGround(moveAxisValue, jumpAxisValue, crouchAxisValue);
	}
}

void AFGCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Move);
		EnhancedInputComponent->BindAction(JumpingAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Jumping);
		EnhancedInputComponent->BindAction(CrouchingAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Crouching);
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Attack);
		EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Throw);
		EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Roll);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Dash);

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &AFGCharacterBase::MoveEnd);
		EnhancedInputComponent->BindAction(JumpingAction, ETriggerEvent::Completed, this, &AFGCharacterBase::JumpingEnd);
		EnhancedInputComponent->BindAction(CrouchingAction, ETriggerEvent::Completed, this, &AFGCharacterBase::CrouchingEnd);
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Completed, this, &AFGCharacterBase::AttackEnd);
		EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Completed, this, &AFGCharacterBase::ThrowEnd);
		EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Completed, this, &AFGCharacterBase::RollEnd);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Completed, this, &AFGCharacterBase::DashEnd);
	}
}

void AFGCharacterBase::Landed(const FHitResult& Hit)
{
	if (characterState == ECharacterStates::VE_Jumping)
	{
		ACharacter::StopJumping();
		plJumping = false;
		plCanMove = true;
		plCanAttack = true;
		plUsingLP = false;
		plUsingLK = false;
		plUsingRP = false;
		plUsingRK = false;
		plUsingLPRP = false;
		plUsingLKRK = false;
		GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Block);
		characterState = ECharacterStates::VE_Default;
		GetCharacterMovement()->GravityScale = 2.f;
	}
	else
		return;

	ACharacter::OnLanded(Hit);
}

void AFGCharacterBase::FlippingCharacter(bool isFacingRight)
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

		if (isFacingRight && scale.X == -1.f || !isFacingRight && scale.X == 1.f)
		{
			GetMesh()->GetAnimInstance()->Montage_Play(plCrouching ? characterClass.movement.Flip_Crouching_Montage : characterClass.movement.Flip_Standing_Montage);
			if (plCrouching)
			{
				GetMesh()->GetAnimInstance()->Montage_Play(characterClass.movement.Crouch_Montage);
				GetMesh()->GetAnimInstance()->Montage_JumpToSection("loopSection", characterClass.movement.Crouch_Montage);
			}
		}

		if (characterMesh)
		{
			transform = characterMesh->GetRelativeTransform();
			scale = transform.GetScale3D();
			scale.X = isFacingRight ? 1.f : -1.f;
			transform.SetScale3D(scale);
		}

		characterMesh->SetRelativeTransform(transform);
	}
}

void AFGCharacterBase::Move(const FInputActionValue& Value)
{
	moveAxisValue = Value.Get<float>();

	if (plIsOnGround || !plCanMove || !plCanAttack || plIsRunning || characterState == ECharacterStates::VE_Jumping || characterState == ECharacterStates::VE_Crouching)
		return;

	if (Value.Get<float>() > 0.01f)
	{
		PlayAnimMontage(plFacingRight ? characterClass.movement.Walk_Forward_Montage : characterClass.movement.Walk_Backward_Montage);
		characterState = plFacingRight ? ECharacterStates::VE_MovingForward : ECharacterStates::VE_MovingBackward;
		plBlocking = plFacingRight ? false : true;

		AddMovementInput(FVector(1.f, 0.f, 0.f), Value.Get<float>());
	}
	else if (Value.Get<float>() < -0.01f)
	{
		PlayAnimMontage(plFacingRight ? characterClass.movement.Walk_Backward_Montage : characterClass.movement.Walk_Forward_Montage);
		characterState = plFacingRight ? ECharacterStates::VE_MovingBackward : ECharacterStates::VE_MovingForward;
		plBlocking = plFacingRight ? true : false;

		AddMovementInput(FVector(-1.f, 0.f, 0.f), Value.Get<float>());
	}
}
void AFGCharacterBase::MoveEnd(const FInputActionValue& Value)
{
	moveAxisValue = 0.f;
	plBlocking = false;
	characterState = ECharacterStates::VE_Default;
	StopAllAnimMontages();
}

void AFGCharacterBase::Jumping(const FInputActionValue& Value)
{
	jumpAxisValue = Value.Get<float>();

	if (plCanMove)
	{
		if (Value.Get<float>() > 0.01f)
		{
			float distanceApart = fabs(Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->GetRightCharacter()->GetActorLocation().X - Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->GetLeftCharacter()->GetActorLocation().X);
			bool canIgnoreCollision = distanceApart < 200 && distanceApart > 60 ? true : false;
			float jumpDistance = plFacingRight ? 400.f : -400.f;

			plJumping = true;
			GetMesh()->GetAnimInstance()->Montage_Play(characterState == ECharacterStates::VE_MovingForward ? characterClass.movement.Jump_Forward_Montage : characterState == ECharacterStates::VE_MovingBackward ? characterClass.movement.Jump_Backward_Montage : characterClass.movement.Jump_Up_Montage, 1.4f);

			GetWorld()->GetTimerManager().SetTimer(jumpDelayTimer, 0.f, false, 0.2f);

			GetCharacterMovement()->GravityScale = 2.5f;

			LaunchCharacterCustom(
				characterState == ECharacterStates::VE_MovingForward ? FVector(
					plIsRunning ? jumpDistance * 2 : jumpDistance, 0.f, 750.f) :
				characterState == ECharacterStates::VE_MovingBackward ? FVector(
					plIsRunning ? -jumpDistance * 2 : -jumpDistance, 0.f, 750.f) :
				FVector(0.f, 0.f, 750.f), true, true, canIgnoreCollision, false);

			plCanMove = false;
			characterState = ECharacterStates::VE_Jumping;
		}
	}
}
void AFGCharacterBase::JumpingEnd(const FInputActionValue& Value)
{
	jumpAxisValue = 0.f;
}

void AFGCharacterBase::Crouching(const FInputActionValue& Value)
{
	crouchAxisValue = Value.Get<float>();

	if (characterState != ECharacterStates::VE_Jumping &&
		characterState != ECharacterStates::VE_Dashing &&
		characterState != ECharacterStates::VE_Rolling)
	{
		if (Value.Get<float>() > 0.01f)
		{
			plUsingLP ? PlayAnimMontage(characterClass.fighting.LP_Crouching_Montage, 1.4f) :
				plUsingLK ? PlayAnimMontage(characterClass.fighting.LK_Crouching_Montage, 2.f) :
				plUsingRP ? PlayAnimMontage(characterClass.fighting.RP_Crouching_Montage, 1.4f) :
				plUsingRK ? PlayAnimMontage(characterClass.fighting.RK_Crouching_Montage, 1.f) :
				PlayAnimMontage(characterClass.movement.Crouch_Montage, 1.f);

			plBlocking = moveAxisValue > 0.f ? (plFacingRight ? false : true) : moveAxisValue < -0.f ? (plFacingRight ? true : false) : false;

			characterState = ECharacterStates::VE_Crouching;
			//attackLayer = EAttackLayer::E_LowerAttack;
			plCrouching = true;
		}
	}
}
void AFGCharacterBase::CrouchingEnd(const FInputActionValue& Value)
{
	crouchAxisValue = 0.f;
	if (plCrouching)
	{
		if (GetMesh()->GetAnimInstance()->Montage_GetCurrentSection() != "endSection")
			GetMesh()->GetAnimInstance()->Montage_JumpToSection("endSection", characterClass.movement.Crouch_Montage);
		characterState = ECharacterStates::VE_Default;
		plCrouching = false;
	}
}

void AFGCharacterBase::Attack(const FInputActionValue& Value)
{
	//if (Value.Get<bool>())
	//	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Attack"));
}

void AFGCharacterBase::Throw(const FInputActionValue& Value)
{
	//if (Value.Get<bool>())
	//	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Throw"));
}

void AFGCharacterBase::Roll(const FInputActionValue& Value)
{
	if (Value.Get<bool>() && plCanMove && plCanAttack)
	{
		float distanceApart = fabs(Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->GetRightCharacter()->GetActorLocation().X - Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->GetLeftCharacter()->GetActorLocation().X);
		bool canIgnoreCollision = distanceApart < 150 && distanceApart > 50 ? true : false;
		float rollDirection = plFacingRight ? rollDistance : -rollDistance;

		GetMesh()->GetAnimInstance()->Montage_Play(characterState == ECharacterStates::VE_MovingForward ? characterClass.movement.Roll_Forward_Montage : characterState == ECharacterStates::VE_MovingBackward ? characterClass.movement.Roll_Backward_Montage : characterClass.movement.Roll_Forward_Montage);

		if (characterState == ECharacterStates::VE_MovingBackward)
			LaunchCharacterCustom(FVector(-rollDirection, 0.f, 0.f), true, true, false, false);
		else if (characterState == ECharacterStates::VE_MovingForward)
			LaunchCharacterCustom(FVector(rollDirection, 0.f, 0.f), true, true, canIgnoreCollision, false);
		else
			LaunchCharacterCustom(FVector(rollDirection, 0.f, 0.f), true, true, canIgnoreCollision, false);

		plCanMove = false;
		characterState = ECharacterStates::VE_Rolling;
	}
}
void AFGCharacterBase::RollEnd(const FInputActionValue& Value)
{
}

void AFGCharacterBase::Dash(const FInputActionValue& Value)
{
	//if (Value.Get<bool>())
	//	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Dash"));
}

void AFGCharacterBase::AttackEnd(const FInputActionValue& Value)
{
	StopAllAnimMontages();

	if (!plCanAttack && plUsingLP || plUsingLK || plUsingRP || plUsingRK)
	{
		characterState = ECharacterStates::VE_Default;

		plUsingLP = false;
		plUsingLK = false;
		plUsingRP = false;
		plUsingRK = false;
		plCanAttack = true;
	}
}

void AFGCharacterBase::ThrowEnd(const FInputActionValue& Value)
{
	//StopAllAnimMontages();
	//PlayAnimMontage(characterClass.movement.Idle_Montage, FMath::RandRange(0.8f, 1.2f));
}

void AFGCharacterBase::DashEnd(const FInputActionValue& Value)
{
	//StopAllAnimMontages();
	//PlayAnimMontage(characterClass.movement.Idle_Montage, FMath::RandRange(0.8f, 1.2f));
}

void AFGCharacterBase::LaunchCharacterCustom(FVector LaunchVelocity, bool bXYOverride, bool bZOverride, bool ignorePlayerCollision, bool needsTimeline)
{
	if (ignorePlayerCollision)
		IgnorePlayerToPlayerCollision(true);
	if (needsTimeline)
		LaunchCharacterTimeline(plFacingRight);
	else
	{
		FVector FinalVel = LaunchVelocity;
		const FVector Velocity = GetVelocity();
		GetCharacterMovement()->Launch(FinalVel);
	}
}

void AFGCharacterBase::OnGround(float movingAxis, float jumpAxis, float crouchAxis)
{
}

void AFGCharacterBase::OnBoxStrikeBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (plNumberOne)
	{
		if (OtherActor->GetName().Contains("Right"))
		{
			auto rightOtherActor = Cast<AFGCharacterBase>(OtherActor);
			for (USceneComponent* hurtBox : rightOtherActor->hurtboxArray)
			{
				if (OtherComp == rightOtherActor->hurtboxArray[0])
					return;
				else if (OtherComp == rightOtherActor->hurtboxArray[1] || OtherComp == rightOtherActor->hurtboxArray[2])
				{
					EventDamageDealer(rightOtherActor->plFacingRight);

					if (characterState == ECharacterStates::VE_Crouching)
						SetAttackLayer(EAttackLayer::E_LowerAttack);
					else if (characterState == ECharacterStates::VE_Jumping)
						SetAttackLayer(EAttackLayer::E_UpperAttack);
					else
						SetAttackLayer(EAttackLayer::E_MiddlAttack);

					rightOtherActor->plIsGrabbed = OtherComp == rightOtherActor->GetMesh()->GetChildComponent(4);
					rightOtherActor->plCanMove = false;
					rightOtherActor->plIsOnGround = true;

					if (rightOtherActor->plBlocking)
					{
						rightOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(plCrouching ? characterClass.movement.Block_Crouching_Montage : characterClass.movement.Block_Standing_Montage);
					}
					else
					{
						if (isSplashHit)
							rightOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitGround01_Montage);
						else if (isSweepHit)
							rightOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitGround02_Montage);
						else if (isLaunchHit)
						{
							rightOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitGround00_Montage);
							//rightOtherActor->LaunchCharacter(rightOtherActor->plFacingRight ? FVector(-100.f, 0.f, 800.f) : FVector(100.f, 0.f, 800.f), true, true);
						}
						else
						{
							rightOtherActor->HitShaking();
							rightOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.BasicStrikes_Montage[FMath::RandRange(0, hitdamage.BasicStrikes_Montage.Num() - 1)], FMath::RandRange(1.5f, 2.f));
						}
						//if (attackLayer != EAttackLayer::E_None)
						//{
						//	float calcHitPoints = attackLayer == EAttackLayer::E_LowerAttack || attackLayer == EAttackLayer::E_UpperAttack ? hitPoint / 2 : hitPoint;
						//	if (calcHitPoints >= rightOtherActor->GetFGHealthComponent()->playerHealth)
						//	{
						//		if (auto gameinstance = Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
						//		{
						//			++gameinstance->winGameCountP1;
						//			rightOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitFinisher_Montage);
						//		}
						//	}
						//	rightOtherActor->GetFGHealthComponent()->OnTakeDamage(calcHitPoints);
						//}
					}
					LightFlash(1.f);
					//PerformShake(rightOtherActor->GetFGHealthComponent()->GetHealth() > 0.1f);
				}
			}
		}
	}

	if(!plNumberOne)
	{
		if (OtherActor->GetName().Contains("Left"))
		{
			auto leftOtherActor = Cast<AFGCharacterBase>(OtherActor);
			for (USceneComponent* hurtBox : leftOtherActor->hurtboxArray)
			{
				if (OtherComp == leftOtherActor->hurtboxArray[0])
					return;
				else if (OtherComp == leftOtherActor->hurtboxArray[1] || OtherComp == leftOtherActor->hurtboxArray[2])
				{
					EventDamageDealer(leftOtherActor->plFacingRight);

					if (characterState == ECharacterStates::VE_Crouching)
						SetAttackLayer(EAttackLayer::E_LowerAttack);
					else if (characterState == ECharacterStates::VE_Jumping)
						SetAttackLayer(EAttackLayer::E_UpperAttack);
					else
						SetAttackLayer(EAttackLayer::E_MiddlAttack);

					leftOtherActor->plIsGrabbed = OtherComp == leftOtherActor->GetMesh()->GetChildComponent(4);
					leftOtherActor->plCanMove = false;
					leftOtherActor->plIsOnGround = true;

					if (leftOtherActor->plBlocking)
					{
						leftOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(plCrouching ? characterClass.movement.Block_Crouching_Montage : characterClass.movement.Block_Standing_Montage);
					}
					else
					{
						if (isSplashHit)
							leftOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitGround01_Montage);
						else if (isSweepHit)
							leftOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitGround02_Montage);
						else if (isLaunchHit)
						{
							leftOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitGround00_Montage);
							//leftOtherActor->LaunchCharacter(leftOtherActor->plFacingRight ? FVector(-100.f, 0.f, 800.f) : FVector(100.f, 0.f, 800.f), true, true);
						}
						else
						{
							leftOtherActor->HitShaking();
							leftOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.BasicStrikes_Montage[FMath::RandRange(0, hitdamage.BasicStrikes_Montage.Num() - 1)], FMath::RandRange(1.5f, 2.f));
						}

						//if (attackLayer != EAttackLayer::E_None)
						//{
						//	float calcHitPoints = attackLayer == EAttackLayer::E_LowerAttack || attackLayer == EAttackLayer::E_UpperAttack ? hitPoint / 2 : hitPoint;
						//	if (calcHitPoints >= leftOtherActor->GetFGHealthComponent()->playerHealth)
						//	{
						//		if (auto gameinstance = Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
						//		{
						//			++gameinstance->winGameCountP2;
						//			leftOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitFinisher_Montage);
						//		}
						//	}
						//	leftOtherActor->GetFGHealthComponent()->OnTakeDamage(calcHitPoints);
						//}
					}
					LightFlash(1.f);
					//PerformShake(leftOtherActor->GetFGHealthComponent()->GetHealth() > 0.1f);
				}
			}
		}
	}
}

void AFGCharacterBase::OnBoxStrikeEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Cast<AFGCharacterBase>(Comp->GetOwner())->SetAttackLayer(EAttackLayer::E_None);
}

float AFGCharacterBase::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	USkeletalMeshComponent* UseMesh = GetMesh();
	if (AnimMontage && UseMesh && UseMesh->AnimScriptInstance)
	{
		if (!UseMesh->AnimScriptInstance->Montage_IsPlaying(AnimMontage))
			return UseMesh->AnimScriptInstance->Montage_Play(AnimMontage, InPlayRate);
		else
		{
			if (StartSectionName != NAME_None && UseMesh->AnimScriptInstance->Montage_GetCurrentSection(AnimMontage) != StartSectionName)
				UseMesh->AnimScriptInstance->Montage_JumpToSection(StartSectionName, AnimMontage);
		}
	}
	return 0.0f;
}
void AFGCharacterBase::StopAnimMontage(class UAnimMontage* AnimMontage)
{
	USkeletalMeshComponent* UseMesh = GetMesh();
	if (AnimMontage && UseMesh && UseMesh->AnimScriptInstance && UseMesh->AnimScriptInstance->Montage_IsPlaying(AnimMontage))
		UseMesh->AnimScriptInstance->Montage_Stop(AnimMontage->BlendOut.GetBlendTime());
}
void AFGCharacterBase::StopAllAnimMontages()
{
	USkeletalMeshComponent* UseMesh = GetMesh();
	if (UseMesh && UseMesh->AnimScriptInstance)
		UseMesh->AnimScriptInstance->Montage_Stop(0.0f);
}

void AFGCharacterBase::PerformShake(bool isLowShaking)
{
	GetWorld()->GetFirstPlayerController()->PlayerCameraManager->PlayWorldCameraShake(GetWorld(), isLowShaking ? LoShake : HiShake, GetActorLocation(), 1000.f, 1000.f, 1.f);
}

void AFGCharacterBase::SetAttackLayer(EAttackLayer attLayer)
{
	attackLayer = attLayer;
}