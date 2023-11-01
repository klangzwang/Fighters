#include "FGAnimNotifyModifyBox.h"
#include "Engine.h"

UFGAnimNotifyModifyBox::UFGAnimNotifyModifyBox() : Super()
{
	hideHeadBox = false;
	offsetHeadBox = FVector();
	widthHeadBox = 1.f;
	heightHeadBox = 1.f;

	hideTorsoBox = false;
	offsetTorsoBox = FVector();
	widthTorsoBox = 1.f;
	heightTorsoBox = 1.f;

	hideLegsBox = false;
	offsetLegsBox = FVector();
	widthLegsBox = 1.f;
	heightLegsBox = 1.f;

	hideCollisionBox = false;
	offsetCollisionBox = FVector();
	widthCollisionBox = 1.f;
	heightCollisionBox = 1.f;

	hideThrowBox = false;
	offsetThrowBox = FVector();
	widthThrowBox = 1.f;
	heightThrowBox = 1.f;

	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(128, 128, 0, 255);
	#endif
}

void UFGAnimNotifyModifyBox::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			auto headbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(0));
			auto torsobox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(1));
			auto legsbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(2));
			auto collbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(3));
			auto throwbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(4));

			headbox->SetRelativeLocation(FVector(offsetHeadBox));
			headbox->SetRelativeScale3D(FVector(widthHeadBox, 1.f, heightHeadBox));

			torsobox->SetRelativeLocation(FVector(offsetTorsoBox));
			torsobox->SetRelativeScale3D(FVector(widthTorsoBox, 1.f, heightTorsoBox));

			legsbox->SetRelativeLocation(FVector(offsetLegsBox));
			legsbox->SetRelativeScale3D(FVector(widthLegsBox, 1.f, heightLegsBox));

			collbox->SetRelativeLocation(FVector(offsetCollisionBox));
			collbox->SetRelativeScale3D(FVector(widthCollisionBox, 1.f, heightCollisionBox));

			throwbox->SetRelativeLocation(FVector(offsetThrowBox));
			throwbox->SetRelativeScale3D(FVector(widthThrowBox, 1.f, heightThrowBox));

			headbox->SetVisibility(!hideHeadBox);
			torsobox->SetVisibility(!hideTorsoBox);
			legsbox->SetVisibility(!hideLegsBox);
			collbox->SetVisibility(!hideCollisionBox);
			throwbox->SetVisibility(!hideThrowBox);
		}
	}
}

void UFGAnimNotifyModifyBox::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			auto headbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(0));
			auto torsobox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(1));
			auto legsbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(2));
			auto collbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(3));
			auto throwbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(4));

			headbox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			headbox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			torsobox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			torsobox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			legsbox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			legsbox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			collbox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			collbox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			throwbox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			throwbox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			headbox->SetVisibility(true);
			torsobox->SetVisibility(true);
			legsbox->SetVisibility(true);
			collbox->SetVisibility(true);
			throwbox->SetVisibility(true);
		}
	}
}
