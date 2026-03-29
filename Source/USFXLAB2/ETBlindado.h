#pragma once

#include "CoreMinimal.h"
#include "EnemigoTerrestre.h"
#include "ETBlindado.generated.h"

UCLASS()
class USFXLAB2_API AETBlindado : public AEnemigoTerrestre
{
	GENERATED_BODY()
	void Tick(float DeltaTime) override;
	void Mover() override;
};