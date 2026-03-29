#pragma once
#include "CoreMinimal.h"
#include "EnemigoAcuatico.h"
#include "EALancha.generated.h"

UCLASS()
class USFXLAB2_API AEALancha : public AEnemigoAcuatico { 
GENERATED_BODY() 

void Tick(float DeltaTime) override;
void Mover() override;
};