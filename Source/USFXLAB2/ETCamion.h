#pragma once
#include "CoreMinimal.h"
#include "EnemigoTerrestre.h"
#include "ETCamion.generated.h"

UCLASS()
class USFXLAB2_API AETCamion : public AEnemigoTerrestre {
    GENERATED_BODY()
	void Tick(float DeltaTime) override;
	void Mover() override;
};