#pragma once
#include "CoreMinimal.h"
#include "TresClaymoreIdleInfo_e_ex355.generated.h"

USTRUCT(BlueprintType)
struct FTresClaymoreIdleInfo_e_ex355 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRevolveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRevolveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRevolveHeight;
    
    TRESGAME_API FTresClaymoreIdleInfo_e_ex355();
};

