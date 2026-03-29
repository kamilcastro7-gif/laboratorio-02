#pragma once
#include "CoreMinimal.h"
#include "EnemigoAereo.h"
#include "EAAvion.generated.h"

UCLASS()
class USFXLAB2_API AEAAvion : public AEnemigoAereo {
    GENERATED_BODY()
	void Tick(float DeltaTime) override;
	void Mover() override;
};