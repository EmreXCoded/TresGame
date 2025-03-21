#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex773_IsWaveNumEclipse13.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex773_IsWaveNumEclipse13 : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestWave;
    
    UTresBTDecorator_e_ex773_IsWaveNumEclipse13();
};

