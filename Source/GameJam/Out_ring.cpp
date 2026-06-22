#include "Out_ring.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"

AOut_ring::AOut_ring()
{
    PrimaryActorTick.bCanEverTick = true;

    RingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RingMesh"));
    RootComponent = RingMesh;
}

void AOut_ring::BeginPlay()
{
    Super::BeginPlay();
}

void AOut_ring::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    RotationSpeed += Acceleration * DeltaTime;

    RotationSpeed = FMath::Clamp(
        RotationSpeed,
        0.0f,
        MaxRotationSpeed
    );

    AddActorLocalRotation(
        FRotator(
            0.0f,
            RotationSpeed * DeltaTime,
            0.0f
        )
    );
}