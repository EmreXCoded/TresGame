#pragma once
#include "CoreMinimal.h"
#include "TresClaymoreSet_e_ex355.generated.h"

class ATresProjectile_e_ex355_Claymore_Idle;

USTRUCT(BlueprintType)
struct FTresClaymoreSet_e_ex355 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresProjectile_e_ex355_Claymore_Idle> pClaymore;
    
public:
    TRESGAME_API FTresClaymoreSet_e_ex355();
};

