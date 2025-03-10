#include "TresKHSBlendVolume.h"

ATresKHSBlendVolume::ATresKHSBlendVolume() {
    this->m_IsMatineeControled = false;
    this->m_MatineeWeightValue = 0.00f;
    this->bOverride_KHSChrEmissivMultiCounter = false;
    this->bOverride_CameraLightingSwitch = false;
    this->bOverride_ShadowColorMultiply = false;
    this->bOverride_SSAOShadowPower = false;
    this->bOverride_DarkAreaBoostMode = false;
    this->bOverride_RefLightMode = false;
    this->bOverride_BoardColorA = false;
    this->bOverride_BoardRotateA = false;
    this->bOverride_BoardGradientA = false;
    this->bOverride_BoardPowerA = false;
    this->bOverride_BoardColorB = false;
    this->bOverride_BoardGradientB = false;
    this->bOverride_BoardPowerB = false;
    this->bOverride_UseWLVModeA = false;
    this->bOverride_WLVA = false;
    this->bOverride_WLVColorA = false;
    this->bOverride_WLVGradientA = false;
    this->bOverride_WLVPowerA = false;
    this->bOverride_UseWLVModeB = false;
    this->bOverride_WLVB = false;
    this->bOverride_WLVColorB = false;
    this->bOverride_WLVGradientB = false;
    this->bOverride_WLVPowerB = false;
    this->bOverride_UseWLVAreaDepthA = false;
    this->bOverride_WLVAreaLengthA0 = false;
    this->bOverride_WLVAreaLengthA1 = false;
    this->bOverride_UseWLVAreaDepthB = false;
    this->bOverride_WLVAreaLengthB0 = false;
    this->bOverride_WLVAreaLengthB1 = false;
    this->bOverride_UseWLVAreaDepthFov = false;
    this->bOverride_WLVAreaDepthInvert = false;
    this->bOverride_WLVAreaDepthDarknessVolume = false;
    this->bOverride_RAMasterInstensity = false;
    this->bOverride_RAAOBoost = false;
    this->bOverride_RABrightnessBoost = false;
    this->KHSChrEmissivMultiCounter = 1.00f;
    this->CameraLightingSwitch = 1.00f;
    this->SSAOShadowPower = 1.50f;
    this->DarkAreaBoostMode = 1.00f;
    this->RefLightMode = 0.00f;
    this->BoardRotateA = 30.00f;
    this->BoardGradientA = 0.50f;
    this->BoardPowerA = 0.50f;
    this->BoardGradientB = 0.50f;
    this->BoardPowerB = 0.50f;
    this->UseWLVModeA = 0.00f;
    this->WLVGradientA = 1.00f;
    this->WLVPowerA = 1.00f;
    this->UseWLVModeB = 0.00f;
    this->WLVGradientB = 1.00f;
    this->WLVPowerB = 1.00f;
    this->UseWLVAreaDepthA = 0.00f;
    this->WLVAreaLengthA0 = 200.00f;
    this->WLVAreaLengthA1 = 300.00f;
    this->UseWLVAreaDepthB = 0.00f;
    this->WLVAreaLengthB1 = 1500.00f;
    this->WLVAreaLengthB0 = 1000.00f;
    this->UseWLVAreaDepthFov = 1.00f;
    this->WLVAreaDepthInvert = 0.00f;
    this->WLVAreaDepthDarknessVolume = 1.00f;
    this->RAMasterInstensity = 0.00f;
    this->RAAOBoost = 1.00f;
    this->RABrightnessBoost = 1.00f;
    this->BlendRadius = 100.00f;
    this->UsePlayerLocation = false;
}

