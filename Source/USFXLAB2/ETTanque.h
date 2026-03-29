#pragma once
#include "CoreMinimal.h"
#include "EnemigoTerrestre.h"
#include "ETTanque.generated.h"

UCLASS()
class USFXLAB2_API AETTanque : public AEnemigoTerrestre {
    GENERATED_BODY()
	void Tick(float DeltaTime) override;
	void Mover() override;
};