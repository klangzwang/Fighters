// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGHealthComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FIGHTERS_API UFGHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UFGHealthComponent();

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Fighters|Health")
	void OnTakeDamage(float amount);

	UFUNCTION(BlueprintPure, Category = "Fighters|Health")
	float GetHealth() const;
	UFUNCTION(BlueprintCallable, Category = "Fighters|Health")
	void SetHealth(float NewMaxHealth);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Health")
	float playerHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Health")
	bool DebugHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Health")
	bool DeveloperHealth;
};
