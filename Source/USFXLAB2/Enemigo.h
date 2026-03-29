#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class USFXLAB2_API AEnemigo : public AActor {
    GENERATED_BODY()
public:
    AEnemigo();

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshEnemigo;
public:
	virtual void Tick(float DeltaTime) override;

protected:
    virtual void Mover();
};