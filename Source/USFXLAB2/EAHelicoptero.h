#pragma once
#include "CoreMinimal.h"
#include "EnemigoAereo.h"
#include "EAHelicoptero.generated.h"

UCLASS()
class USFXLAB2_API AEAHelicoptero : public AEnemigoAereo {
    GENERATED_BODY()
	void Tick(float DeltaTime) override;
	void Mover() override;
};