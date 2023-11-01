#include "FGAnimNotifyState.h"
#include "Engine.h"

void UFGAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
}

void UFGAnimNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Received_NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		auto Character = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Character != NULL)
		{
			auto Controller = Cast<AFGOpenController>(Character->GetController());
			if (Character != NULL && Controller != NULL)
			{
				PerformNotifyTick(Character, Controller, MeshComp, Animation);
			}
		}
	}
}

void UFGAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
}

void UFGAnimNotifyState::PerformNotifyTick(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* skeletalMesh, UAnimSequenceBase* Animation) const
{
}