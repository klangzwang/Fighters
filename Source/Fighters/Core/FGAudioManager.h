#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGAudioManager.generated.h"

constexpr int CommonAudioChannelCount = 32;
constexpr int CharAudioChannelCount = 32;
constexpr int CharVoiceChannelCount = 6;

UCLASS()
class FIGHTERS_API AFGAudioManager : public AActor
{
	GENERATED_BODY()

public:

	AFGAudioManager();

	UPROPERTY()
	UAudioComponent* CommonAudioPlayers[CommonAudioChannelCount];
	UPROPERTY()
	UAudioComponent* CharAudioPlayers[CharAudioChannelCount];
	UPROPERTY()
	UAudioComponent* CharVoicePlayers[CharVoiceChannelCount];
	UPROPERTY()
	UAudioComponent* AnnouncerVoicePlayer;
	
protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
	
	void PauseAllAudio();
};
