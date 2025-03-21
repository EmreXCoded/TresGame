#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex354_NormalShot.h"
#include "EX354_DownShotInfo.h"
#include "TresProjectile_e_ex354_DownShot.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex354_DownShot : public ATresProjectile_e_ex354_NormalShot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX354_DownShotInfo m_DownShotInfo;
    
    ATresProjectile_e_ex354_DownShot();
};

