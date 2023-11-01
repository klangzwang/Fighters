#include "FGAnimNotify.h"

void UFGAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		auto Character = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Character != NULL)
		{
			auto Controller = Cast<AFGOpenController>(Character->GetController());
			if (Character != NULL && Controller != NULL)
			{
				PerformNotify(Character, Controller, MeshComp, Animation);
			}
		}
	}
}

void UFGAnimNotify::PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* skeletalMesh, UAnimSequenceBase* Animation) const
{
}
