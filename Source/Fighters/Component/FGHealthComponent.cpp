// Fill out your copyright notice in the Description page of Project Settings.

#include "FGHealthComponent.h"

UFGHealthComponent::UFGHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	playerHealth = 1.f;
	DebugHealth = false;
	DeveloperHealth = false;
}

void UFGHealthComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UFGHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UFGHealthComponent::OnTakeDamage(float amount)
{
	playerHealth -= amount;
	if (playerHealth < 0.f)
	{
		playerHealth = 0.f;
		if (DeveloperHealth)
			SetHealth(1.f);
	}

	if (DebugHealth)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Health is: (%f)"), GetHealth()));
}

float UFGHealthComponent::GetHealth() const
{
	return playerHealth;
}
void UFGHealthComponent::SetHealth(float NewMaxHealth)
{
	this->playerHealth = NewMaxHealth;
}
