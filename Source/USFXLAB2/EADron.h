#pragma once
#include "CoreMinimal.h"
#include "EnemigoAereo.h"
#include "EADron.generated.h"

UCLASS()
class USFXLAB2_API AEADron : public AEnemigoAereo {
    GENERATED_BODY()
	void Tick(float DeltaTime) override;
	void Mover() override;
};