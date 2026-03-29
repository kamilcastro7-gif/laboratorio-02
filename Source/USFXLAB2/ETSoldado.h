#pragma once
#include "CoreMinimal.h"
#include "EnemigoTerrestre.h"
#include "ETSoldado.generated.h"

UCLASS()
class USFXLAB2_API AETSoldado : public AEnemigoTerrestre {
    GENERATED_BODY()

	void Tick(float DeltaTime) override;
	void Mover() override;
};