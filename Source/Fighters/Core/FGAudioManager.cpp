#include "FGAudioManager.h"
#include "Components/AudioComponent.h"

AFGAudioManager::AFGAudioManager()
{
	PrimaryActorTick.bCanEverTick = true;
	
	for (int i = 0; i < CommonAudioChannelCount; i++)
	{
		FString Name = "CommonAudioPlayer";
		Name.AppendInt(i);
		CommonAudioPlayers[i] = CreateDefaultSubobject<UAudioComponent>(FName(Name));
		CommonAudioPlayers[i]->AutoAttachParent = RootComponent;
	}
	for (int i = 0; i < CharAudioChannelCount; i++)
	{
		FString Name = "CharAudioPlayer";
		Name.AppendInt(i);
		CharAudioPlayers[i] = CreateDefaultSubobject<UAudioComponent>(FName(Name));
		CharAudioPlayers[i]->AutoAttachParent = RootComponent;
	}
	for (int i = 0; i < CharVoiceChannelCount; i++)
	{
		FString Name = "CharVoicePlayer";
		Name.AppendInt(i);
		CharVoicePlayers[i] = CreateDefaultSubobject<UAudioComponent>(FName(Name));
		CharVoicePlayers[i]->AutoAttachParent = RootComponent;
	}
	AnnouncerVoicePlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("AnnouncerVoicePlayer"));
	AnnouncerVoicePlayer->bAutoActivate = false;
	AnnouncerVoicePlayer->AutoAttachParent = RootComponent;
}

void AFGAudioManager::BeginPlay()
{
	Super::BeginPlay();
}

void AFGAudioManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFGAudioManager::PauseAllAudio()
{
	for (const auto Player : CommonAudioPlayers)
	{
		Player->Stop();
	}
	for (const auto Player : CharAudioPlayers)
	{
		Player->Stop();
	}
	for (const auto Player : CharVoicePlayers)
	{
		Player->Stop();
	}
	AnnouncerVoicePlayer->Stop();
}