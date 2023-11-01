#include "FGAnimNotifyReset.h"
#include "FGCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"

UFGAnimNotifyReset::UFGAnimNotifyReset() : Super()
{
	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(128, 128, 0, 255);
	#endif
}

void UFGAnimNotifyReset::PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::PerformNotify(Character, Controller, MeshComp, Animation);

	for (EResetType rType : resetType)
	{
		switch (rType)
		{
			case EResetType::VE_CanMove:
				Character->plCanMove = true;
				break;
			case EResetType::VE_CanAttack:
				Character->plCanAttack = true;
				break;
			case EResetType::VE_CharState:
				Character->characterState = ECharacterStates::VE_Default;
				break;
			case EResetType::VE_Gravity:
				Character->GetCharacterMovement()->GravityScale = 2.f;
				break;
			case EResetType::VE_Friction:
				Character->GetCharacterMovement()->GroundFriction = 10.f;
				break;
			case EResetType::VE_Collision:
				break;
			case EResetType::VE_UsingLRPK:
				Character->plUsingLP = false;
				Character->plUsingLK = false;
				Character->plUsingRP = false;
				Character->plUsingRK = false;
				Character->plUsingLPRP = false;
				Character->plUsingLKRK = false;
				Character->plUsingLPLK = false;
				Character->plUsingRPRK = false;
				break;
			case EResetType::VE_Running:
				Character->plIsRunning = false;
				break;
			case EResetType::VE_OnGround:
				Character->plIsOnGround = false;
				break;
			default:
				break;
		}
	}
}
