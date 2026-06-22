// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "In_ring.generated.h"

UCLASS()
class GAMEJAM_API AIn_ring : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIn_ring();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
