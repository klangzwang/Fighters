#include "FGAnimNotifyReset.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

UFGAnimNotifyReset::UFGAnimNotifyReset() : Super()
{
	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(255, 255, 0, 255);
	#endif
}

void UFGAnimNotifyReset::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* animation)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			for (EResetType rType : resetType)
			{
				switch (rType)
				{
				case EResetType::VE_CanMove:
					Player->plCanMove = true;
					break;
				case EResetType::VE_CanAttack:
					Player->plCanAttack = true;
					break;
				case EResetType::VE_CharState:
					Player->characterState = ECharacterStates::VE_Default;
					break;
				case EResetType::VE_Gravity:
					Player->GetCharacterMovement()->GravityScale = 2.f;
					break;
				case EResetType::VE_Friction:
					Player->GetCharacterMovement()->GroundFriction = 10.f;
					break;
				case EResetType::VE_Collision:
					Player->GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Block);
					break;
				default:
					break;
				}
			}
		}
	}
}
