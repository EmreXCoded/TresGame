#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalMeshComponent.h"
#include "TresProjEffectSet_e_ex359.h"
#include "TresProjectileMeshComponent_e_ex359.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresProjectileMeshComponent_e_ex359 : public UTresSkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresProjEffectSet_e_ex359 m_EffectSet;
    
public:
    UTresProjectileMeshComponent_e_ex359();
};

