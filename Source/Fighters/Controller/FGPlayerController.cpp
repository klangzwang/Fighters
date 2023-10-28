#include "FGPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetTextLibrary.h"
#include "Kismet/KismetInputLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "FGGameMode.h"
#include "Engine/Canvas.h"
#include "DisplayDebugHelpers.h"
#include "GameFramework/InputSettings.h"

AFGPlayerController::AFGPlayerController()
{
	DebugKeyMapping = false;
	DebugActionAxisMapping = false;
	DebugDeviceCheck = false;
	DebugInputBuffer = false;
	DebugAxisValues = false;
	DebugCharStates = false;

	isReadyToUse = false;

	moveAxisValue = 0.f;
	jumpAxisValue = 0.f;
	crouchAxisValue = 0.f;

	rollDistance = 1400.f;

	TArray<FName> actionMappingNames;
	GetDefault<UInputSettings>()->GetActionNames(actionMappingNames);
	TArray<FName> axisMappingNames;
	GetDefault<UInputSettings>()->GetAxisNames(axisMappingNames);

	for (int i = 0; i < actionMappingNames.Num(); ++i)
	{
		if (actionMappingNames[i].ToString().Contains("P1"))
			kbActionNamesPL.Add(actionMappingNames[i]);
		else if (actionMappingNames[i].ToString().Contains("P2"))
			kbActionNamesPR.Add(actionMappingNames[i]);
	}
	for (int i = 0; i < axisMappingNames.Num(); ++i)
	{
		if (axisMappingNames[i].ToString().Contains("P1"))
			kbAxisNamesPL.Add(axisMappingNames[i]);
		else if (axisMappingNames[i].ToString().Contains("P2"))
			kbAxisNamesPR.Add(axisMappingNames[i]);
	}
}

void AFGPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveRightP1", this, &AFGPlayerController::MoveRightCL);
	InputComponent->BindAxis("JumpP1", this, &AFGPlayerController::JumpCL);
	InputComponent->BindAxis("CrouchP1", this, &AFGPlayerController::CrouchCL);
	InputComponent->BindAction("CrouchP1", IE_Released, this, &AFGPlayerController::StopCrouchCL);
	InputComponent->BindAction("LPP1", IE_Pressed, this, &AFGPlayerController::AttackCL);
	InputComponent->BindAction("LPP1", IE_Released, this, &AFGPlayerController::StopAttackCL);
	InputComponent->BindAction("LKP1", IE_Pressed, this, &AFGPlayerController::AttackCL);
	InputComponent->BindAction("LKP1", IE_Released, this, &AFGPlayerController::StopAttackCL);
	InputComponent->BindAction("RPP1", IE_Pressed, this, &AFGPlayerController::AttackCL);
	InputComponent->BindAction("RPP1", IE_Released, this, &AFGPlayerController::StopAttackCL);
	InputComponent->BindAction("RKP1", IE_Pressed, this, &AFGPlayerController::AttackCL);
	InputComponent->BindAction("RKP1", IE_Released, this, &AFGPlayerController::StopAttackCL);
	InputComponent->BindAction("LPRPP1", IE_Pressed, this, &AFGPlayerController::AttackCL);
	InputComponent->BindAction("LPRPP1", IE_Released, this, &AFGPlayerController::StopAttackCL);
	InputComponent->BindAction("LKRKP1", IE_Pressed, this, &AFGPlayerController::AttackCL);
	InputComponent->BindAction("LKRKP1", IE_Released, this, &AFGPlayerController::StopAttackCL);
	InputComponent->BindAction("ThrowP1", IE_Pressed, this, &AFGPlayerController::ThrowCL);
	InputComponent->BindAction("RollP1", IE_Pressed, this, &AFGPlayerController::RollCL);

	InputComponent->BindAxis("MoveRightP2", this, &AFGPlayerController::MoveRightCR);
	InputComponent->BindAxis("JumpP2", this, &AFGPlayerController::JumpCR);
	InputComponent->BindAxis("CrouchP2", this, &AFGPlayerController::CrouchCR);
	InputComponent->BindAction("CrouchP2", IE_Released, this, &AFGPlayerController::StopCrouchCR);
	InputComponent->BindAction("LPP2", IE_Pressed, this, &AFGPlayerController::AttackCR);
	InputComponent->BindAction("LPP2", IE_Released, this, &AFGPlayerController::StopAttackCR);
	InputComponent->BindAction("LKP2", IE_Pressed, this, &AFGPlayerController::AttackCR);
	InputComponent->BindAction("LKP2", IE_Released, this, &AFGPlayerController::StopAttackCR);
	InputComponent->BindAction("RPP2", IE_Pressed, this, &AFGPlayerController::AttackCR);
	InputComponent->BindAction("RPP2", IE_Released, this, &AFGPlayerController::StopAttackCR);
	InputComponent->BindAction("RKP2", IE_Pressed, this, &AFGPlayerController::AttackCR);
	InputComponent->BindAction("RKP2", IE_Released, this, &AFGPlayerController::StopAttackCR);
	InputComponent->BindAction("LPRPP2", IE_Pressed, this, &AFGPlayerController::AttackCR);
	InputComponent->BindAction("LPRPP2", IE_Released, this, &AFGPlayerController::StopAttackCR);
	InputComponent->BindAction("LKRKP2", IE_Pressed, this, &AFGPlayerController::AttackCR);
	InputComponent->BindAction("LKRKP2", IE_Released, this, &AFGPlayerController::StopAttackCR);
	InputComponent->BindAction("ThrowP2", IE_Pressed, this, &AFGPlayerController::ThrowCR);
	InputComponent->BindAction("RollP2", IE_Pressed, this, &AFGPlayerController::RollCR);

	for (int i = 0; i < InputComponent->GetNumActionBindings(); ++i)
		InputComponent->GetActionBinding(i).bConsumeInput = false;
}

void AFGPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (pPawn == NULL)
	{
		if (this->GetName().Contains("C_0"))
			pPawn = FGGameMode->GetLeftCharacter();
		else if (this->GetName().Contains("C_1"))
			pPawn = FGGameMode->GetRightCharacter();
	}

	if (pPawn->mPlayerID == EPlayerID::PlayerLeft && FGGameMode->GetLeftPlayerController() != NULL)
		pController = Cast<AFGPlayerController>(FGGameMode->GetLeftPlayerController());
	if (pPawn->mPlayerID == EPlayerID::PlayerRight && FGGameMode->GetRightPlayerController() != NULL)
		pController = Cast<AFGPlayerController>(FGGameMode->GetRightPlayerController());
}
void AFGPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DebugAxisValues)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.8f, FColor::Orange, FString::Printf(TEXT("-- MoveAxisValue ---> (%f)"), GetFGMoveAxisValue()));
		GEngine->AddOnScreenDebugMessage(-1, 0.8f, FColor::Yellow, FString::Printf(TEXT("-- JumpAxisValue ---> (%f)"), GetFGJumpAxisValue()));
		GEngine->AddOnScreenDebugMessage(-1, 0.8f, FColor::Green, FString::Printf(TEXT("-- CrouchAxisValue -> (%f)"), GetFGCrouchAxisValue()));
	}
	if (DebugCharStates)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ECharacterStates"), true);
		if (EnumPtr)
		{
			FText DisplayName = EnumPtr->GetDisplayNameTextByValue(static_cast<uint8>(pPawn->characterState));
			GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Yellow, DisplayName.ToString());
		}
	}
	if (DebugDeviceCheck)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EMovementMode"), true);
		if (EnumPtr)
		{
			FText DisplayName = EnumPtr->GetDisplayNameTextByValue(static_cast<uint8>(pPawn->GetCharacterMovement()->MovementMode));
			GEngine->AddOnScreenDebugMessage(-1, 0.2f, FColor::Emerald, DisplayName.ToString());
		}
	}
}

void AFGPlayerController::MoveRight(float Value)
{
	moveAxisValue = Value;
	if (pPawn == NULL || pPawn->plIsOnGround || !pPawn->plCanMove || pPawn->GetFGHealthComponent()->playerHealth == 0.f || !pPawn->plCanAttack || pPawn->plIsRunning || pPawn->characterState == ECharacterStates::VE_Jumping || pPawn->characterState == ECharacterStates::VE_Crouching)
		return;

	if (Value > 0.01f)
	{
		pPawn->PlayAnimMontage(pPawn->plFacingRight ? pPawn->characterClass.movement.Walk_Forward_Montage : pPawn->characterClass.movement.Walk_Backward_Montage);
		pPawn->characterState = pPawn->plFacingRight ? ECharacterStates::VE_MovingForward : ECharacterStates::VE_MovingBackward;
		pPawn->plBlocking = pPawn->plFacingRight ? false : true;
	}
	else if (Value < -0.01f)
	{
		pPawn->PlayAnimMontage(pPawn->plFacingRight ? pPawn->characterClass.movement.Walk_Backward_Montage : pPawn->characterClass.movement.Walk_Forward_Montage);
		pPawn->characterState = pPawn->plFacingRight ? ECharacterStates::VE_MovingBackward : ECharacterStates::VE_MovingForward;
		pPawn->plBlocking = pPawn->plFacingRight ? true : false;
	}
	else
	{
		pPawn->PlayAnimMontage(pPawn->characterClass.movement.Idle_Montage, FMath::RandRange(0.8f, 1.2f));
		pPawn->plBlocking = false;
		pPawn->characterState = ECharacterStates::VE_Default;
		pPawn->attackLayer = EAttackLayer::E_None;
	}
	pPawn->AddMovementInput(FVector(1.f, 0.f, 0.f), Value);
}
void AFGPlayerController::Jump(float jumpValue)
{
	jumpAxisValue = jumpValue;

	if (pPawn != NULL)
	{
		if (pPawn->plCanMove)
		{
			if (jumpValue > 0.01f)
			{
				float distanceApart = fabs(Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->GetRightCharacter()->GetActorLocation().X - Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->GetLeftCharacter()->GetActorLocation().X);
				bool canIgnoreCollision = distanceApart < 200 && distanceApart > 60 ? true : false;
				float jumpDistance = pPawn->plFacingRight ? 400.f : -400.f;

				pPawn->plJumping = true;
				pPawn->GetMesh()->GetAnimInstance()->Montage_Play(pPawn->characterState == ECharacterStates::VE_MovingForward ? pPawn->characterClass.movement.Jump_Forward_Montage : pPawn->characterState == ECharacterStates::VE_MovingBackward ? pPawn->characterClass.movement.Jump_Backward_Montage : pPawn->characterClass.movement.Jump_Up_Montage, 1.4f);

				GetWorld()->GetTimerManager().SetTimer(jumpDelayTimer, 0.f, false, 0.2f);

				pPawn->GetCharacterMovement()->GravityScale = 2.5f;

				LaunchCharacterCustom(
					pPawn->characterState == ECharacterStates::VE_MovingForward ? FVector(
						pPawn->plIsRunning ? jumpDistance * 2 : jumpDistance, 0.f, 750.f) :
					pPawn->characterState == ECharacterStates::VE_MovingBackward ? FVector(
						pPawn->plIsRunning ? -jumpDistance * 2 : -jumpDistance, 0.f, 750.f) :
					FVector(0.f, 0.f, 750.f), true, true, canIgnoreCollision, false);

				pPawn->plCanMove = false;
				pPawn->characterState = ECharacterStates::VE_Jumping;
			}
		}
	}
}
void AFGPlayerController::Crouch(float crouchValue)
{
	crouchAxisValue = crouchValue;

	if (pPawn != NULL)
	{
		if (pPawn->characterState != ECharacterStates::VE_Jumping &&
			pPawn->characterState != ECharacterStates::VE_Dashing &&
			pPawn->characterState != ECharacterStates::VE_Rolling)
		{
			if (crouchValue < -0.01f)
			{
				pPawn->plUsingLP ? pPawn->PlayAnimMontage(pPawn->characterClass.fighting.LP_Crouching_Montage, 1.4f) :
				pPawn->plUsingLK ? pPawn->PlayAnimMontage(pPawn->characterClass.fighting.LK_Crouching_Montage, 2.f) :
				pPawn->plUsingRP ? pPawn->PlayAnimMontage(pPawn->characterClass.fighting.RP_Crouching_Montage, 1.4f) :
				pPawn->plUsingRK ? pPawn->PlayAnimMontage(pPawn->characterClass.fighting.RK_Crouching_Montage, 1.f) :
					pPawn->PlayAnimMontage(pPawn->characterClass.movement.Crouch_Montage, 1.f);

				pPawn->plBlocking = moveAxisValue > 0.f ? (pPawn->plFacingRight ? false : true) : moveAxisValue < -0.f ? (pPawn->plFacingRight ? true : false) : false;

				pPawn->characterState = ECharacterStates::VE_Crouching;
				pPawn->attackLayer = EAttackLayer::E_LowerAttack;
				pPawn->plCrouching = true;
			}
		}
	}
}
void AFGPlayerController::StopCrouch()
{
	if (pPawn->plCrouching)
	{
		if (pPawn->GetMesh()->GetAnimInstance()->Montage_GetCurrentSection() != "endSection")
			pPawn->GetMesh()->GetAnimInstance()->Montage_JumpToSection("endSection", pPawn->characterClass.movement.Crouch_Montage);
		pPawn->characterState = ECharacterStates::VE_Default;
		pPawn->attackLayer = EAttackLayer::E_None;
		pPawn->plCrouching = false;
	}
}

void AFGPlayerController::Attack(FKey keyPressed)
{
	if (pPawn->plCanAttack)
	{
		if (pPawn->characterState != ECharacterStates::VE_Dashing &&
			pPawn->characterState != ECharacterStates::VE_Rolling)
		{
			if (pPawn->characterState != ECharacterStates::VE_Crouching && pPawn->characterState != ECharacterStates::VE_Jumping)
			{
				pPawn->PlayAnimMontage(pPawn->characterClass.fighting.HeavyPunch_Montage);
				pPawn->PlayAnimMontage(pPawn->characterClass.fighting.HeavyKick_Montage);
				pPawn->plUsingLPRP = true;
				pPawn->plUsingLKRK = true;
			}
			if (pPawn->characterState != ECharacterStates::VE_Crouching)
			{
				if (pPawn->characterState == ECharacterStates::VE_MovingBackward)
				{
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.LP_Direction_Montage, 1.f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.LK_Direction_Montage, 1.f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.RP_Direction_Montage, 1.f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.RK_Direction_Montage, 1.f);
					pPawn->attackLayer = EAttackLayer::E_MiddlAttack;
				}
				else if (pPawn->characterState == ECharacterStates::VE_Jumping)
				{
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.LP_Jumping_Montage, 1.f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.LK_Jumping_Montage, 1.f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.RP_Jumping_Montage, 1.f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.RK_Jumping_Montage, 1.f);
					pPawn->attackLayer = EAttackLayer::E_UpperAttack;
				}
				else
				{
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.LP_Standing_Montage, 1.4f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.LK_Standing_Montage, 1.f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.RP_Standing_Montage, 1.4f);
					pPawn->PlayAnimMontage(pPawn->characterClass.fighting.RK_Standing_Montage, 1.f);
					pPawn->attackLayer = EAttackLayer::E_MiddlAttack;
				}
				pPawn->plUsingLP = true;
				pPawn->plUsingLK = true;
				pPawn->plUsingRP = true;
				pPawn->plUsingRK = true;
			}
			pPawn->plCanAttack = false;
		}
	}
}
void AFGPlayerController::StopAttack()
{
	if (!pPawn->plCanAttack && pPawn->plUsingLP || pPawn->plUsingLK || pPawn->plUsingRP || pPawn->plUsingRK)
	{
		pPawn->characterState = ECharacterStates::VE_Default;
		pPawn->attackLayer = EAttackLayer::E_None;
		pPawn->plUsingLP = false;
		pPawn->plUsingLK = false;
		pPawn->plUsingRP = false;
		pPawn->plUsingRK = false;
		pPawn->plCanAttack = true;
	}
}

void AFGPlayerController::Throw()
{
	if (pPawn->plCanAttack)
	{
		if (pPawn->characterState != ECharacterStates::VE_Jumping && pPawn->characterState != ECharacterStates::VE_Crouching && pPawn->characterState != ECharacterStates::VE_Dashing && pPawn->characterState != ECharacterStates::VE_Rolling)
		{
			pPawn->GetMesh()->AttachToComponent(pPawn->otherPlayer->GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, "root");
			pPawn->PlayAnimMontage(pPawn->characterClass.fighting.Throw_Montage);

			pPawn->plUsingRPRK = true;
			pPawn->plCanAttack = false;
		}
	}
}
void AFGPlayerController::Roll()
{
	if (pPawn->plCanMove && pPawn->plCanAttack)
	{
		float distanceApart = fabs(Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->GetRightCharacter()->GetActorLocation().X - Cast<AFGGameMode>(GetWorld()->GetAuthGameMode())->GetLeftCharacter()->GetActorLocation().X);
		bool canIgnoreCollision = distanceApart < 150 && distanceApart > 50 ? true : false;
		float rollDirection = pPawn->plFacingRight ? rollDistance : -rollDistance;

		pPawn->GetMesh()->GetAnimInstance()->Montage_Play(pPawn->characterState == ECharacterStates::VE_MovingForward ? pPawn->characterClass.movement.Roll_Forward_Montage : pPawn->characterState == ECharacterStates::VE_MovingBackward ? pPawn->characterClass.movement.Roll_Backward_Montage : pPawn->characterClass.movement.Roll_Forward_Montage);

		if (pPawn->characterState == ECharacterStates::VE_MovingBackward)
			LaunchCharacterCustom(FVector(-rollDirection, 0.f, 0.f), true, true, false, false);
		else if (pPawn->characterState == ECharacterStates::VE_MovingForward)
			LaunchCharacterCustom(FVector(rollDirection, 0.f, 0.f), true, true, canIgnoreCollision, false);
		else
			LaunchCharacterCustom(FVector(rollDirection, 0.f, 0.f), true, true, canIgnoreCollision, false);

		pPawn->plCanMove = false;
		pPawn->characterState = ECharacterStates::VE_Rolling;
	}
}

void AFGPlayerController::LaunchCharacterCustom(FVector LaunchVelocity, bool bXYOverride, bool bZOverride, bool ignorePlayerCollision, bool needsTimeline)
{
	if (ignorePlayerCollision)
		IgnorePlayerToPlayerCollision(true);
	if (needsTimeline)
		LaunchCharacterTimeline(pPawn->plFacingRight);
	else
	{
		//pPawn->LaunchCharacter(LaunchVelocity, bXYOverride, bZOverride);
		FVector FinalVel = LaunchVelocity;
		const FVector Velocity = pPawn->GetVelocity();
		pPawn->GetCharacterMovement()->Launch(FinalVel);
	}
}

void AFGPlayerController::MoveRightCL(float Value)
{
	MoveRight(Value);
}
void AFGPlayerController::JumpCL(float Value) { Jump(Value); }
void AFGPlayerController::CrouchCL(float Value) { Crouch(Value); }
void AFGPlayerController::StopCrouchCL() { StopCrouch(); }
void AFGPlayerController::AttackCL(FKey keyPressed) { Attack(keyPressed); }
void AFGPlayerController::StopAttackCL() { StopAttack(); }
void AFGPlayerController::ThrowCL() { Throw(); }
void AFGPlayerController::RollCL() { Roll(); }

void AFGPlayerController::MoveRightCR(float Value)
{
	MoveRight(Value);
}
void AFGPlayerController::JumpCR(float Value) { Jump(Value); }
void AFGPlayerController::CrouchCR(float Value) { Crouch(Value); }
void AFGPlayerController::StopCrouchCR() { StopCrouch(); }
void AFGPlayerController::AttackCR(FKey keyPressed) { Attack(keyPressed); }
void AFGPlayerController::StopAttackCR() { StopAttack(); }
void AFGPlayerController::ThrowCR() { Throw(); }
void AFGPlayerController::RollCR() { Roll(); }
