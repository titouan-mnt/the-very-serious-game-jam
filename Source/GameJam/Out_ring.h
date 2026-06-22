#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Out_ring.generated.h"

class UStaticMeshComponent;

UCLASS()
class GAMEJAM_API AOut_ring : public AActor
{
    GENERATED_BODY()

public:
    AOut_ring();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    UStaticMeshComponent* RingMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
    float RotationSpeed = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
    float Acceleration = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
    float MaxRotationSpeed = 60.0f;
};