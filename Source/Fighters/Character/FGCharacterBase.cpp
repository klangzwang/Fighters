#include "FGCharacterBase.h"
#include "FGGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"

AFGCharacterBase::AFGCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	HealthComponent = CreateDefaultSubobject<UFGHealthComponent>("HealthComponent");

	GetMesh()->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));

	GetCapsuleComponent()->InitCapsuleSize(24.f, 96.0f);
	GetCapsuleComponent()->ShapeColor = FColor::Yellow;

	//GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	GetCharacterMovement()->bRequestedMoveUseAcceleration = false;
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.0f;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	GetCharacterMovement()->GroundFriction = 10.0f;
	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	GetCharacterMovement()->MaxFlySpeed = 0.0f;
	GetCharacterMovement()->MaxAcceleration = 10000;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	characterSize = FVector(1.f,1.f,1.f);
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
	plAiController = false;

	DebugHitBoxes = false;

	gravityScaleModifier = 0.f;
	transform = FTransform();
	scale = FVector(0.f, 0.f, 0.f);

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

	hurtboxArray.Add(GetMesh()->GetChildComponent(0));
	hurtboxArray.Add(GetMesh()->GetChildComponent(1));
	hurtboxArray.Add(GetMesh()->GetChildComponent(2));

	UStaticMeshComponent* HB_StrikeMesh = Cast<UStaticMeshComponent>(GetMesh()->GetChildComponent(5));
	HB_StrikeMesh->OnComponentBeginOverlap.AddDynamic(this, &AFGCharacterBase::OnBoxStrikeBegin);
	HB_StrikeMesh->OnComponentEndOverlap.AddDynamic(this, &AFGCharacterBase::OnBoxStrikeEnd);

	//PlayAnimMontage(movement.Taunt_Montage[FMath::RandRange(0, movement.Taunt_Montage.Num() -1)], FMath::RandRange(0.8f, 1.f));
}
void AFGCharacterBase::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	//if (auto gameinstance = Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
	//{
	//	if (gameinstance->mMatchState == EMatchState::VE_MatchActive)
	//		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
	//	else
	//		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);
	//}
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
						if (attackLayer != EAttackLayer::E_None)
						{
							float calcHitPoints = attackLayer == EAttackLayer::E_LowerAttack || attackLayer == EAttackLayer::E_UpperAttack ? hitPoint / 2 : hitPoint;
							if (calcHitPoints >= rightOtherActor->GetFGHealthComponent()->playerHealth)
							{
								if (auto gameinstance = Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
								{
									++gameinstance->winGameCountP1;
									rightOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitFinisher_Montage);
								}
							}
							rightOtherActor->GetFGHealthComponent()->OnTakeDamage(calcHitPoints);
						}
					}
					LightFlash(1.f);
					PerformShake(rightOtherActor->GetFGHealthComponent()->GetHealth() > 0.1f);
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

						if (attackLayer != EAttackLayer::E_None)
						{
							float calcHitPoints = attackLayer == EAttackLayer::E_LowerAttack || attackLayer == EAttackLayer::E_UpperAttack ? hitPoint / 2 : hitPoint;
							if (calcHitPoints >= leftOtherActor->GetFGHealthComponent()->playerHealth)
							{
								if (auto gameinstance = Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
								{
									++gameinstance->winGameCountP2;
									leftOtherActor->GetMesh()->GetAnimInstance()->Montage_Play(hitdamage.HitFinisher_Montage);
								}
							}
							leftOtherActor->GetFGHealthComponent()->OnTakeDamage(calcHitPoints);
						}
					}
					LightFlash(1.f);
					PerformShake(leftOtherActor->GetFGHealthComponent()->GetHealth() > 0.1f);
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
