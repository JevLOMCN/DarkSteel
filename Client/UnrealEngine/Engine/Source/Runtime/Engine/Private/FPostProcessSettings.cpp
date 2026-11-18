// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1484a5ef0

UScriptStruct * __cdecl FPostProcessSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPostProcessSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPostProcessSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPostProcessSettings,(UObject *)pUVar1,
                         L"PostProcessSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPostProcessSettings.OuterSingleton;
}

// FPostProcessSettings @ 1484bac20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettings * __thiscall
FPostProcessSettings::FPostProcessSettings(FPostProcessSettings *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  TConsoleVariableData<int> *pTVar4;
  void *pvVar5;
  bool bVar6;
  IConsoleManager *pIVar7;
  longlong *plVar8;
  TConsoleVariableData<float> *pTVar9;
  TConsoleVariableData<float> *pTVar10;
  ulonglong uVar11;
  TConsoleVariableData<float> *pTVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  this->bOverride_TemperatureType = '\0';
  this->bOverride_BloomConvolutionPreFilterMin = '\0';
  this->bOverride_BloomConvolutionPreFilter_DEPRECATED = '\0';
  this->bOverride_BloomConvolutionCenterUV = '\0';
  this->bOverride_BloomConvolutionSize = '\0';
  this->bOverride_BloomConvolutionScatterDispersion = '\0';
  this->bOverride_BloomConvolutionTexture = '\0';
  this->bOverride_BloomConvolutionIntensity = '\0';
  this->bOverride_BloomSizeScale = '\0';
  this->bOverride_Bloom6Size = '\0';
  this->bOverride_Bloom6Tint = '\0';
  this->bOverride_Bloom5Size = '\0';
  this->bOverride_Bloom5Tint = '\0';
  this->bOverride_Bloom4Size = '\0';
  this->bOverride_Bloom4Tint = '\0';
  this->bOverride_Bloom3Size = '\0';
  this->bOverride_Bloom3Tint = '\0';
  this->bOverride_Bloom2Tint = '\0';
  this->bOverride_Bloom2Size = '\0';
  this->bOverride_Bloom1Size = '\0';
  this->bOverride_Bloom1Tint = '\0';
  this->bOverride_BloomThreshold = '\0';
  this->bOverride_BloomGaussianIntensity = '\0';
  this->bOverride_BloomIntensity = '\0';
  this->bOverride_BloomMethod = '\0';
  this->bOverride_AmbientCubemapIntensity = '\0';
  this->bOverride_AmbientCubemapTint = '\0';
  this->bOverride_bMegaLights = '\0';
  this->bOverride_ChromaticAberrationStartOffset = '\0';
  this->bOverride_SceneFringeIntensity = '\0';
  this->bOverride_SceneColorTint = '\0';
  this->bOverride_FilmWhiteClip = '\0';
  this->bOverride_FilmBlackClip = '\0';
  this->bOverride_FilmShoulder = '\0';
  this->bOverride_FilmToe = '\0';
  this->bOverride_FilmSlope = '\0';
  this->bOverride_ToneCurveAmount = '\0';
  this->bOverride_ExpandGamut = '\0';
  this->bOverride_BlueCorrection = '\0';
  this->bOverride_ColorCorrectionHighlightsMax = '\0';
  this->bOverride_ColorCorrectionHighlightsMin = '\0';
  this->bOverride_ColorCorrectionShadowsMax = '\0';
  this->bOverride_ColorOffsetHighlights = '\0';
  this->bOverride_ColorGainHighlights = '\0';
  this->bOverride_ColorGammaHighlights = '\0';
  this->bOverride_ColorContrastHighlights = '\0';
  this->bOverride_ColorSaturationHighlights = '\0';
  this->bOverride_ColorOffsetMidtones = '\0';
  this->bOverride_ColorGainMidtones = '\0';
  this->bOverride_ColorGammaMidtones = '\0';
  this->bOverride_ColorContrastMidtones = '\0';
  this->bOverride_ColorSaturationMidtones = '\0';
  this->bOverride_ColorOffsetShadows = '\0';
  this->bOverride_ColorGainShadows = '\0';
  this->bOverride_ColorGammaShadows = '\0';
  this->bOverride_ColorContrastShadows = '\0';
  this->bOverride_ColorSaturationShadows = '\0';
  this->bOverride_ColorOffset = '\0';
  this->bOverride_ColorGain = '\0';
  this->bOverride_ColorGamma = '\0';
  this->bOverride_ColorContrast = '\0';
  this->bOverride_ColorSaturation = '\0';
  this->bOverride_WhiteTint = '\0';
  this->bOverride_WhiteTemp = '\0';
  puVar3 = &this->field_0x8;
  this->bOverride_BloomConvolutionPreFilterMax = '\0';
  this->bOverride_AmbientOcclusionBias = '\0';
  this->bOverride_AmbientOcclusionPower = '\0';
  this->bOverride_AmbientOcclusionRadiusInWS = '\0';
  this->bOverride_AmbientOcclusionDistance_DEPRECATED = '\0';
  this->bOverride_AmbientOcclusionFadeRadius = '\0';
  this->bOverride_AmbientOcclusionFadeDistance = '\0';
  this->bOverride_AmbientOcclusionRadius = '\0';
  this->bOverride_AmbientOcclusionStaticFraction = '\0';
  this->bOverride_AmbientOcclusionIntensity = '\0';
  this->bOverride_FilmGrainTexture = '\0';
  this->bOverride_FilmGrainTexelSize = '\0';
  this->bOverride_FilmGrainHighlightsMax = '\0';
  this->bOverride_FilmGrainHighlightsMin = '\0';
  this->bOverride_FilmGrainShadowsMax = '\0';
  this->bOverride_FilmGrainIntensityHighlights = '\0';
  this->bOverride_FilmGrainIntensityMidtones = '\0';
  this->bOverride_FilmGrainIntensityShadows = '\0';
  this->bOverride_FilmGrainIntensity = '\0';
  this->bOverride_GrainJitter_DEPRECATED = '\0';
  this->bOverride_GrainIntensity_DEPRECATED = '\0';
  this->bOverride_Sharpen = '\0';
  this->bOverride_VignetteIntensity = '\0';
  this->bOverride_LensFlareThreshold = '\0';
  this->bOverride_LensFlareBokehShape = '\0';
  this->bOverride_LensFlareBokehSize = '\0';
  this->bOverride_LensFlareTints = '\0';
  this->bOverride_LensFlareTint = '\0';
  this->bOverride_LensFlareIntensity = '\0';
  this->bOverride_LocalExposureMiddleGreyBias = '\0';
  this->bOverride_LocalExposureShadowThresholdStrength = '\0';
  this->bOverride_LocalExposureHighlightThresholdStrength = '\0';
  this->bOverride_LocalExposureBlurredLuminanceKernelSizePercent = '\0';
  this->bOverride_LocalExposureBlurredLuminanceBlend = '\0';
  this->bOverride_LocalExposureDetailStrength = '\0';
  this->bOverride_LocalExposureShadowThreshold = '\0';
  this->bOverride_LocalExposureHighlightThreshold = '\0';
  this->bOverride_LocalExposureShadowContrastCurve = '\0';
  this->bOverride_LocalExposureHighlightContrastCurve = '\0';
  this->bOverride_LocalExposureShadowContrastScale = '\0';
  this->bOverride_LocalExposureHighlightContrastScale = '\0';
  this->bOverride_LocalExposureContrastScale_DEPRECATED = '\0';
  this->bOverride_LocalExposureMethod = '\0';
  this->bOverride_HistogramLogMax = '\0';
  this->bOverride_HistogramLogMin = '\0';
  this->bOverride_AutoExposureApplyPhysicalCameraExposure = '\0';
  this->bOverride_AutoExposureMeterMask = '\0';
  this->bOverride_AutoExposureBiasCurve = '\0';
  this->bOverride_AutoExposureBias = '\0';
  this->bOverride_AutoExposureSpeedDown = '\0';
  this->bOverride_AutoExposureSpeedUp = '\0';
  this->bOverride_AutoExposureCalibrationConstant_DEPRECATED = '\0';
  this->bOverride_AutoExposureMaxBrightness = '\0';
  this->bOverride_AutoExposureMinBrightness = '\0';
  this->bOverride_AutoExposureHighPercent = '\0';
  this->bOverride_AutoExposureLowPercent = '\0';
  this->bOverride_AutoExposureMethod = '\0';
  this->bOverride_CameraISO = '\0';
  this->bOverride_CameraShutterSpeed = '\0';
  this->bOverride_BloomDirtMask = '\0';
  this->bOverride_BloomDirtMaskTint = '\0';
  this->bOverride_BloomDirtMaskIntensity = '\0';
  this->bOverride_BloomConvolutionBufferScale = '\0';
  this->bOverride_BloomConvolutionPreFilterMult = '\0';
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  this->field_0x34 = 0;
  this->ChromaticAberrationStartOffset = 0.0;
  (this->BloomConvolutionTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->BloomDirtMask).field0_0x0.DebugPtr = (UTexture *)0x0;
  *(undefined8 *)&this->DynamicGlobalIlluminationMethod = 0;
  *(undefined8 *)((longlong)&(this->IndirectLightingColor).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->IndirectLightingColor).field0_0x0 + 0xc) = 0;
  this->LumenRayLightingMode = Default;
  *(undefined3 *)&this->field_0x3f5 = 0;
  this->LumenSceneLightingQuality = 0.0;
  this->LumenSceneDetail = 0.0;
  this->LumenSceneViewDistance = 0.0;
  this->LumenSceneLightingUpdateSpeed = 0.0;
  this->LumenFinalGatherQuality = 0.0;
  *(undefined8 *)&this->LumenFinalGatherLightingUpdateSpeed = 0;
  this->LumenMaxTraceDistance = 0.0;
  this->LumenDiffuseColorBoost = 0.0;
  *(undefined8 *)&this->LumenSkylightLeaking = 0;
  *(undefined8 *)((longlong)&(this->LumenSkylightLeakingTint).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->LumenSkylightLeakingTint).field0_0x0 + 0xc) = 0;
  this->LumenSurfaceCacheResolution = 0.0;
  this->ReflectionMethod = '\0';
  this->ReflectionsType_DEPRECATED = ScreenSpace;
  *(undefined2 *)&this->field_0x43a = 0;
  *(undefined8 *)&this->LumenReflectionQuality = 0;
  this->LumenMaxRoughnessToTraceReflections = 0.0;
  this->LumenMaxReflectionBounces = 0;
  this->LumenMaxRefractionBounces = 0;
  this->ScreenSpaceReflectionIntensity = 0.0;
  this->ScreenSpaceReflectionQuality = 0.0;
  this->ScreenSpaceReflectionMaxRoughness = 0.0;
  *(undefined4 *)&this->field_0x45c = 0;
  *(undefined8 *)((longlong)&(this->AmbientCubemapTint).field0_0x0 + 4) = 0;
  (this->AmbientCubemapTint).field0_0x0._s_0.A = 0.0;
  *(undefined8 *)&this->field_0x474 = 0;
  *(undefined4 *)((longlong)&(this->AmbientCubemap).field0_0x0 + 4) = 0;
  this->DepthOfFieldFstop = 0.0;
  this->DepthOfFieldMinFstop = 0.0;
  this->DepthOfFieldBladeCount = 0;
  this->AutoExposureBias = 0.0;
  *(undefined8 *)&this->AutoExposureBiasBackup = 0;
  *(undefined8 *)&this->field_0x4a0 = 0;
  (this->AutoExposureBiasCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->AutoExposureMeterMask).field0_0x0.DebugPtr = (UTexture *)0x0;
  this->AutoExposureMinBrightness = 0.0;
  this->AutoExposureMaxBrightness = 0.0;
  this->AutoExposureSpeedUp = 0.0;
  this->AutoExposureSpeedDown = 0.0;
  this->HistogramLogMin = 0.0;
  this->HistogramLogMax = 0.0;
  memset(&this->LocalExposureMethod,0,0x294);
  (this->TemperatureType).Value = '\0';
  this->WhiteTemp = 6500.0;
  this->WhiteTint = 0.0;
  pTVar12 = (TConsoleVariableData<float> *)0x0;
  (this->ColorSaturation).field0_0x0._s_0.X = 1.0;
  (this->ColorSaturation).field0_0x0._s_0.Y = 1.0;
  (this->ColorSaturation).field0_0x0._s_0.Z = 1.0;
  (this->ColorSaturation).field0_0x0._s_0.W = 1.0;
  (this->ColorContrast).field0_0x0._s_0.X = 1.0;
  (this->ColorContrast).field0_0x0._s_0.Y = 1.0;
  (this->ColorContrast).field0_0x0._s_0.Z = 1.0;
  (this->ColorContrast).field0_0x0._s_0.W = 1.0;
  (this->ColorGamma).field0_0x0._s_0.X = 1.0;
  (this->ColorGamma).field0_0x0._s_0.Y = 1.0;
  (this->ColorGamma).field0_0x0._s_0.Z = 1.0;
  (this->ColorGamma).field0_0x0._s_0.W = 1.0;
  (this->ColorGain).field0_0x0._s_0.X = 1.0;
  (this->ColorGain).field0_0x0._s_0.Y = 1.0;
  (this->ColorGain).field0_0x0._s_0.Z = 1.0;
  (this->ColorGain).field0_0x0._s_0.W = 1.0;
  (this->ColorOffset).field0_0x0._s_0.X = 0.0;
  (this->ColorOffset).field0_0x0._s_0.Y = 0.0;
  (this->ColorOffset).field0_0x0._s_0.Z = 0.0;
  (this->ColorOffset).field0_0x0._s_0.W = 0.0;
  (this->ColorSaturationShadows).field0_0x0._s_0.X = 1.0;
  (this->ColorSaturationShadows).field0_0x0._s_0.Y = 1.0;
  (this->ColorSaturationShadows).field0_0x0._s_0.Z = 1.0;
  (this->ColorSaturationShadows).field0_0x0._s_0.W = 1.0;
  (this->ColorContrastShadows).field0_0x0._s_0.X = 1.0;
  (this->ColorContrastShadows).field0_0x0._s_0.Y = 1.0;
  (this->ColorContrastShadows).field0_0x0._s_0.Z = 1.0;
  (this->ColorContrastShadows).field0_0x0._s_0.W = 1.0;
  (this->ColorGammaShadows).field0_0x0._s_0.X = 1.0;
  (this->ColorGammaShadows).field0_0x0._s_0.Y = 1.0;
  (this->ColorGammaShadows).field0_0x0._s_0.Z = 1.0;
  (this->ColorGammaShadows).field0_0x0._s_0.W = 1.0;
  (this->ColorGainShadows).field0_0x0._s_0.X = 1.0;
  (this->ColorGainShadows).field0_0x0._s_0.Y = 1.0;
  (this->ColorGainShadows).field0_0x0._s_0.Z = 1.0;
  (this->ColorGainShadows).field0_0x0._s_0.W = 1.0;
  (this->ColorOffsetShadows).field0_0x0._s_0.X = 0.0;
  (this->ColorOffsetShadows).field0_0x0._s_0.Y = 0.0;
  (this->ColorOffsetShadows).field0_0x0._s_0.Z = 0.0;
  (this->ColorOffsetShadows).field0_0x0._s_0.W = 0.0;
  (this->ColorSaturationMidtones).field0_0x0._s_0.X = 1.0;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Y = 1.0;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Z = 1.0;
  (this->ColorSaturationMidtones).field0_0x0._s_0.W = 1.0;
  (this->ColorContrastMidtones).field0_0x0._s_0.X = 1.0;
  (this->ColorContrastMidtones).field0_0x0._s_0.Y = 1.0;
  (this->ColorContrastMidtones).field0_0x0._s_0.Z = 1.0;
  (this->ColorContrastMidtones).field0_0x0._s_0.W = 1.0;
  (this->ColorGammaMidtones).field0_0x0._s_0.X = 1.0;
  (this->ColorGammaMidtones).field0_0x0._s_0.Y = 1.0;
  (this->ColorGammaMidtones).field0_0x0._s_0.Z = 1.0;
  (this->ColorGammaMidtones).field0_0x0._s_0.W = 1.0;
  (this->ColorGainMidtones).field0_0x0._s_0.X = 1.0;
  (this->ColorGainMidtones).field0_0x0._s_0.Y = 1.0;
  (this->ColorGainMidtones).field0_0x0._s_0.Z = 1.0;
  (this->ColorGainMidtones).field0_0x0._s_0.W = 1.0;
  (this->ColorOffsetMidtones).field0_0x0._s_0.X = 0.0;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Y = 0.0;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Z = 0.0;
  (this->ColorOffsetMidtones).field0_0x0._s_0.W = 0.0;
  (this->ColorSaturationHighlights).field0_0x0._s_0.X = 1.0;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Y = 1.0;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Z = 1.0;
  (this->ColorSaturationHighlights).field0_0x0._s_0.W = 1.0;
  (this->ColorContrastHighlights).field0_0x0._s_0.X = 1.0;
  (this->ColorContrastHighlights).field0_0x0._s_0.Y = 1.0;
  (this->ColorContrastHighlights).field0_0x0._s_0.Z = 1.0;
  (this->ColorContrastHighlights).field0_0x0._s_0.W = 1.0;
  (this->ColorGammaHighlights).field0_0x0._s_0.X = 1.0;
  (this->ColorGammaHighlights).field0_0x0._s_0.Y = 1.0;
  (this->ColorGammaHighlights).field0_0x0._s_0.Z = 1.0;
  (this->ColorGammaHighlights).field0_0x0._s_0.W = 1.0;
  (this->ColorGainHighlights).field0_0x0._s_0.X = 1.0;
  (this->ColorGainHighlights).field0_0x0._s_0.Y = 1.0;
  (this->ColorGainHighlights).field0_0x0._s_0.Z = 1.0;
  (this->ColorGainHighlights).field0_0x0._s_0.W = 1.0;
  (this->ColorOffsetHighlights).field0_0x0._s_0.X = 0.0;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Y = 0.0;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Z = 0.0;
  (this->ColorOffsetHighlights).field0_0x0._s_0.W = 0.0;
  this->ColorCorrectionShadowsMax = 0.09;
  this->ColorCorrectionHighlightsMin = 0.5;
  this->ColorCorrectionHighlightsMax = 1.0;
  this->BlueCorrection = 0.6;
  this->ExpandGamut = 1.0;
  this->ToneCurveAmount = 1.0;
  this->FilmSlope = 0.88;
  this->FilmToe = 0.55;
  this->FilmShoulder = 0.26;
  this->FilmBlackClip = 0.0;
  this->FilmWhiteClip = 0.04;
  (this->SceneColorTint).field0_0x0._s_0.R = 1.0;
  (this->SceneColorTint).field0_0x0._s_0.G = 1.0;
  (this->SceneColorTint).field0_0x0._s_0.B = 1.0;
  *(undefined8 *)((longlong)&(this->SceneColorTint).field0_0x0 + 0xc) = 0x3f800000;
  (this->BloomMethod).Value = '\0';
  this->BloomIntensity = 0.675;
  this->BloomGaussianIntensity = 1.0;
  this->BloomThreshold = -1.0;
  this->BloomSizeScale = 4.0;
  (this->Bloom1Tint).field0_0x0._s_0.R = 0.3465;
  (this->Bloom1Tint).field0_0x0._s_0.G = 0.3465;
  (this->Bloom1Tint).field0_0x0._s_0.B = 0.3465;
  (this->Bloom1Tint).field0_0x0._s_0.A = 1.0;
  this->Bloom1Size = 0.3;
  (this->Bloom2Tint).field0_0x0._s_0.R = 0.138;
  (this->Bloom2Tint).field0_0x0._s_0.G = 0.138;
  (this->Bloom2Tint).field0_0x0._s_0.B = 0.138;
  (this->Bloom2Tint).field0_0x0._s_0.A = 1.0;
  this->Bloom2Size = 1.0;
  (this->Bloom3Tint).field0_0x0._s_0.R = 0.1176;
  (this->Bloom3Tint).field0_0x0._s_0.G = 0.1176;
  (this->Bloom3Tint).field0_0x0._s_0.B = 0.1176;
  (this->Bloom3Tint).field0_0x0._s_0.A = 1.0;
  this->Bloom3Size = 2.0;
  (this->Bloom4Tint).field0_0x0._s_0.R = 0.066;
  (this->Bloom4Tint).field0_0x0._s_0.G = 0.066;
  (this->Bloom4Tint).field0_0x0._s_0.B = 0.066;
  (this->Bloom4Tint).field0_0x0._s_0.A = 1.0;
  this->Bloom4Size = 10.0;
  (this->Bloom5Tint).field0_0x0._s_0.R = 0.066;
  (this->Bloom5Tint).field0_0x0._s_0.G = 0.066;
  (this->Bloom5Tint).field0_0x0._s_0.B = 0.066;
  (this->Bloom5Tint).field0_0x0._s_0.A = 1.0;
  this->Bloom5Size = 30.0;
  (this->Bloom6Tint).field0_0x0._s_0.R = 0.061;
  (this->Bloom6Tint).field0_0x0._s_0.G = 0.061;
  (this->Bloom6Tint).field0_0x0._s_0.B = 0.061;
  (this->Bloom6Tint).field0_0x0._s_0.A = 1.0;
  this->Bloom6Size = 64.0;
  this->BloomConvolutionIntensity = 1.0;
  this->BloomConvolutionScatterDispersion = 1.0;
  this->BloomConvolutionSize = 1.0;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.X = 0.5;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.Y = 0.5;
  pvVar5 = ThreadLocalStoragePointer;
  this->BloomConvolutionPreFilterMin = 7.0;
  this->BloomConvolutionPreFilterMax = 15000.0;
  this->BloomConvolutionPreFilterMult = 15.0;
  this->BloomConvolutionBufferScale = 0.133;
  this->BloomDirtMaskIntensity = 0.0;
  (this->BloomDirtMaskTint).field0_0x0._s_0.R = 0.5;
  (this->BloomDirtMaskTint).field0_0x0._s_0.G = 0.5;
  (this->BloomDirtMaskTint).field0_0x0._s_0.B = 0.5;
  (this->BloomDirtMaskTint).field0_0x0._s_0.A = 1.0;
  this->bMegaLights = '\x01';
  this->AmbientCubemapIntensity = 1.0;
  (this->AmbientCubemapTint).field0_0x0._s_0.R = 1.0;
  (this->AmbientCubemapTint).field0_0x0._s_0.G = 1.0;
  (this->AmbientCubemapTint).field0_0x0._s_0.B = 1.0;
  (this->AmbientCubemapTint).field0_0x0._s_0.A = 1.0;
  uVar11 = (ulonglong)_tls_index;
  this->CameraShutterSpeed = 60.0;
  this->CameraISO = 100.0;
  this->AutoExposureCalibrationConstant_DEPRECATED = 16.0;
  lVar2 = *(longlong *)((longlong)pvVar5 + uVar11 * 8);
  (this->AutoExposureMethod).Value = '\0';
  this->AutoExposureLowPercent = 10.0;
  this->AutoExposureHighPercent = 90.0;
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar7 = IConsoleManager::Get();
    plVar8 = (longlong *)
             (**(code **)((longlong)*pIVar7 + 0xc0))
                       (pIVar7,L"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange",1);
    pTVar9 = pTVar12;
    if (plVar8 != (longlong *)0x0) {
      pTVar9 = (TConsoleVariableData<float> *)(**(code **)(*plVar8 + 0x68))(plVar8);
    }
    VarDefaultAutoExposureExtendDefaultLuminanceRange = (TConsoleVariableData<int> *)pTVar9;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = VarDefaultAutoExposureExtendDefaultLuminanceRange;
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_1484bb2a2:
    pTVar9 = pTVar12;
  }
  else {
    bVar6 = IsInGameThread();
    pTVar9 = (TConsoleVariableData<float> *)&DAT_00000004;
    if (bVar6) goto LAB_1484bb2a2;
  }
  pvVar5 = ThreadLocalStoragePointer;
  fVar13 = __real_40800000;
  fVar14 = __real_c1000000;
  fVar15 = __real_41000000;
  fVar16 = __real_3cf5c28f;
  if (*(int *)((longlong)pTVar4->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
    fVar13 = __real_41a00000;
    fVar14 = __real_c1200000;
    fVar15 = __real_41a00000;
    fVar16 = __real_c1200000;
  }
  this->AutoExposureMinBrightness = fVar16;
  this->AutoExposureMaxBrightness = fVar15;
  this->HistogramLogMin = fVar14;
  this->HistogramLogMax = fVar13;
  if ((*(int *)(*(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar7 = IConsoleManager::Get();
    plVar8 = (longlong *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.DefaultFeature.AutoExposure.Bias",1)
    ;
    pTVar9 = pTVar12;
    if (plVar8 != (longlong *)0x0) {
      pTVar9 = (TConsoleVariableData<float> *)(**(code **)(*plVar8 + 0x70))(plVar8);
    }
    VarDefaultAutoExposureBias = pTVar9;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar9 = VarDefaultAutoExposureBias;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    pTVar10 = (TConsoleVariableData<float> *)&DAT_00000004;
    if (!bVar6) goto LAB_1484bb39f;
  }
  pTVar10 = pTVar12;
LAB_1484bb39f:
  fVar13 = *(float *)((longlong)pTVar9->ShadowedValue + (longlong)pTVar10->ShadowedValue);
  this->AutoExposureApplyPhysicalCameraExposure = 1;
  this->AutoExposureBias = fVar13;
  this->AutoExposureSpeedUp = 3.0;
  this->AutoExposureSpeedDown = 1.0;
  this->LocalExposureMethod = Bilateral;
  this->LocalExposureContrastScale_DEPRECATED = 1.0;
  this->LocalExposureHighlightContrastScale = 1.0;
  this->LocalExposureShadowContrastScale = 1.0;
  this->LocalExposureDetailStrength = 1.0;
  this->LocalExposureBlurredLuminanceBlend = 0.6;
  this->LocalExposureBlurredLuminanceKernelSizePercent = 50.0;
  this->LocalExposureHighlightThresholdStrength = 1.0;
  this->LocalExposureShadowThresholdStrength = 1.0;
  this->LocalExposureMiddleGreyBias = 0.0;
  this->LensFlareIntensity = 1.0;
  (this->LensFlareTint).field0_0x0._s_0.R = 1.0;
  (this->LensFlareTint).field0_0x0._s_0.G = 1.0;
  (this->LensFlareTint).field0_0x0._s_0.B = 1.0;
  (this->LensFlareTint).field0_0x0._s_0.A = 1.0;
  this->LensFlareBokehSize = 3.0;
  this->LensFlareThreshold = 8.0;
  this->VignetteIntensity = 0.4;
  this->Sharpen = 0.0;
  this->GrainJitter_DEPRECATED = 0.0;
  this->GrainIntensity_DEPRECATED = 0.0;
  this->FilmGrainIntensity = 0.0;
  this->FilmGrainIntensityShadows = 1.0;
  this->FilmGrainIntensityMidtones = 1.0;
  this->FilmGrainIntensityHighlights = 1.0;
  this->FilmGrainShadowsMax = 0.09;
  this->FilmGrainHighlightsMin = 0.5;
  this->FilmGrainHighlightsMax = 1.0;
  this->FilmGrainTexelSize = 1.0;
  this->AmbientOcclusionIntensity = 0.5;
  this->AmbientOcclusionStaticFraction = 1.0;
  this->AmbientOcclusionRadius = 200.0;
  this->AmbientOcclusionDistance_DEPRECATED = 80.0;
  this->AmbientOcclusionFadeDistance = 8000.0;
  this->AmbientOcclusionFadeRadius = 5000.0;
  this->AmbientOcclusionPower = 2.0;
  this->AmbientOcclusionBias = 3.0;
  this->AmbientOcclusionQuality = 50.0;
  this->AmbientOcclusionMipBlend = 0.6;
  this->AmbientOcclusionMipScale = 1.7;
  this->AmbientOcclusionMipThreshold = 0.01;
  this->AmbientOcclusionRadiusInWS = 0;
  this->AmbientOcclusionTemporalBlendWeight = 0.1;
  this->RayTracingAO = 0;
  this->RayTracingAOSamplesPerPixel = 1;
  this->RayTracingAOIntensity = 1.0;
  this->RayTracingAORadius = 200.0;
  (this->DynamicGlobalIlluminationMethod).Value = '\x01';
  (this->IndirectLightingColor).field0_0x0._s_0.R = 1.0;
  (this->IndirectLightingColor).field0_0x0._s_0.G = 1.0;
  (this->IndirectLightingColor).field0_0x0._s_0.B = 1.0;
  (this->IndirectLightingColor).field0_0x0._s_0.A = 1.0;
  this->IndirectLightingIntensity = 1.0;
  this->LumenSurfaceCacheResolution = 1.0;
  this->LumenSceneLightingQuality = 1.0;
  this->LumenSceneDetail = 1.0;
  this->LumenSceneViewDistance = 20000.0;
  this->LumenSceneLightingUpdateSpeed = 1.0;
  this->LumenFinalGatherQuality = 1.0;
  this->LumenFinalGatherLightingUpdateSpeed = 1.0;
  this->LumenFinalGatherScreenTraces = '\x01';
  this->LumenMaxTraceDistance = 20000.0;
  this->LumenDiffuseColorBoost = 1.0;
  this->LumenSkylightLeaking = 0.0;
  (this->LumenSkylightLeakingTint).field0_0x0._s_0.R = 1.0;
  (this->LumenSkylightLeakingTint).field0_0x0._s_0.G = 1.0;
  (this->LumenSkylightLeakingTint).field0_0x0._s_0.B = 1.0;
  (this->LumenSkylightLeakingTint).field0_0x0._s_0.A = 1.0;
  this->LumenFullSkylightLeakingDistance = 1000.0;
  this->ColorGradingIntensity = 1.0;
  this->DepthOfFieldSqueezeFactor = 1.0;
  this->DepthOfFieldFocalDistance = 0.0;
  this->DepthOfFieldFstop = 4.0;
  this->DepthOfFieldMinFstop = 1.2;
  this->DepthOfFieldBladeCount = 5;
  this->DepthOfFieldSensorWidth = 24.576;
  this->DepthOfFieldDepthBlurAmount = 1.0;
  this->DepthOfFieldDepthBlurRadius = 0.0;
  this->DepthOfFieldUseHairDepth = 0;
  this->DepthOfFieldPetzvalBokeh = 0.0;
  this->DepthOfFieldPetzvalBokehFalloff = 1.0;
  (this->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->DepthOfFieldPetzvalExclusionBoxRadius = 0.0;
  this->DepthOfFieldAspectRatioScalar = 1.0;
  this->DepthOfFieldBarrelRadius = 5.0;
  this->DepthOfFieldBarrelLength = 0.0;
  this->DepthOfFieldMatteBoxFlags[0].Pitch = 0.0;
  this->DepthOfFieldMatteBoxFlags[0].Roll = 0.0;
  *(undefined8 *)&this->DepthOfFieldMatteBoxFlags[0].Length = 0;
  this->DepthOfFieldMatteBoxFlags[1].Roll = 0.0;
  this->DepthOfFieldMatteBoxFlags[1].Length = 0.0;
  this->DepthOfFieldMatteBoxFlags[2].Pitch = 0.0;
  this->DepthOfFieldMatteBoxFlags[2].Roll = 0.0;
  *(undefined8 *)&this->DepthOfFieldMatteBoxFlags[2].Length = 0;
  this->DepthOfFieldNearTransitionRegion = 300.0;
  this->DepthOfFieldFarTransitionRegion = 500.0;
  this->DepthOfFieldScale = 0.0;
  this->DepthOfFieldNearBlurSize = 15.0;
  this->DepthOfFieldFarBlurSize = 15.0;
  this->DepthOfFieldOcclusion = 0.4;
  this->DepthOfFieldSkyFocusDistance = 0.0;
  this->DepthOfFieldVignetteSize = 200.0;
  this->LensFlareTints[0].field0_0x0._s_0.R = 1.0;
  this->LensFlareTints[0].field0_0x0._s_0.G = 0.8;
  this->LensFlareTints[0].field0_0x0._s_0.B = 0.4;
  this->LensFlareTints[0].field0_0x0._s_0.A = 0.6;
  this->LensFlareTints[1].field0_0x0._s_0.R = 1.0;
  this->LensFlareTints[1].field0_0x0._s_0.G = 1.0;
  this->LensFlareTints[1].field0_0x0._s_0.B = 0.6;
  this->LensFlareTints[1].field0_0x0._s_0.A = 0.53;
  this->LensFlareTints[2].field0_0x0._s_0.R = 0.8;
  this->LensFlareTints[2].field0_0x0._s_0.G = 0.8;
  this->LensFlareTints[2].field0_0x0._s_0.B = 1.0;
  this->LensFlareTints[2].field0_0x0._s_0.A = 0.46;
  this->LensFlareTints[3].field0_0x0._s_0.R = 0.5;
  this->LensFlareTints[3].field0_0x0._s_0.G = 1.0;
  this->LensFlareTints[3].field0_0x0._s_0.B = 0.4;
  this->LensFlareTints[3].field0_0x0._s_0.A = 0.39;
  this->LensFlareTints[4].field0_0x0._s_0.R = 0.5;
  this->LensFlareTints[4].field0_0x0._s_0.G = 0.8;
  this->LensFlareTints[4].field0_0x0._s_0.B = 1.0;
  this->LensFlareTints[4].field0_0x0._s_0.A = 0.31;
  this->LensFlareTints[5].field0_0x0._s_0.R = 0.9;
  this->LensFlareTints[5].field0_0x0._s_0.G = 1.0;
  this->LensFlareTints[5].field0_0x0._s_0.B = 0.8;
  this->LensFlareTints[5].field0_0x0._s_0.A = 0.27;
  this->LensFlareTints[6].field0_0x0._s_0.R = 1.0;
  this->LensFlareTints[6].field0_0x0._s_0.G = 0.8;
  this->LensFlareTints[6].field0_0x0._s_0.B = 0.4;
  this->LensFlareTints[6].field0_0x0._s_0.A = 0.22;
  this->LensFlareTints[7].field0_0x0._s_0.R = 0.9;
  this->LensFlareTints[7].field0_0x0._s_0.G = 0.7;
  this->LensFlareTints[7].field0_0x0._s_0.B = 0.7;
  this->LensFlareTints[7].field0_0x0._s_0.A = 0.15;
  this->MotionBlurAmount = 0.5;
  this->MotionBlurMax = 5.0;
  this->MotionBlurTargetFPS = 0x78;
  this->MotionBlurPerObjectSize = 0.0;
  this->ScreenPercentage_DEPRECATED = 100.0;
  this->UserFlags = 0;
  this->ReflectionMethod = '\x01';
  this->ReflectionsType_DEPRECATED = RayTracing;
  this->LumenReflectionQuality = 1.0;
  this->LumenRayLightingMode = Default;
  this->LumenReflectionsScreenTraces = '\x01';
  this->LumenFrontLayerTranslucencyReflections = '\0';
  this->LumenMaxRoughnessToTraceReflections = 0.4;
  this->LumenMaxReflectionBounces = 1;
  this->LumenMaxRefractionBounces = 0;
  this->ScreenSpaceReflectionIntensity = 100.0;
  this->ScreenSpaceReflectionQuality = 50.0;
  this->ScreenSpaceReflectionMaxRoughness = 0.6;
  this->TranslucencyType = Raster;
  this->RayTracingTranslucencyMaxRoughness = 0.6;
  this->RayTracingTranslucencyRefractionRays = 3;
  this->RayTracingTranslucencySamplesPerPixel = 1;
  this->RayTracingTranslucencyShadows = Hard_shadows;
  this->RayTracingTranslucencyMaxPrimaryHitEvents = 4;
  this->RayTracingTranslucencyMaxSecondaryHitEvents = 2;
  this->RayTracingTranslucencyRefraction = '\x01';
  this->RayTracingTranslucencyUseRayTracedRefraction = '\0';
  this->PathTracingMaxBounces = 0x20;
  this->PathTracingSamplesPerPixel = 0x800;
  this->PathTracingMaxPathIntensity = 24.0;
  puVar1 = &this->field_0x744;
  this->PathTracingEnableEmissiveMaterials = 1;
  this->PathTracingIncludeIndirectVolume = 1;
  this->PathTracingIncludeVolume = 1;
  this->PathTracingIncludeIndirectSpecular = 1;
  this->PathTracingIncludeSpecular = 1;
  this->PathTracingIncludeIndirectDiffuse = 1;
  this->PathTracingIncludeDiffuse = 1;
  this->PathTracingIncludeEmissive = 1;
  this->PathTracingEnableDenoiser = 1;
  this->PathTracingEnableReferenceAtmosphere = 0;
  this->PathTracingEnableReferenceDOF = 0;
  this->bMobileHQGaussian = '\0';
  return this;
}

// GetDefault @ 1484d8500

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettings * __cdecl FPostProcessSettings::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FPostProcessSettings(&DefaultSettings);
      atexit(`FPostProcessSettings::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__DefaultSettings__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultSettings;
    }
  }
  return &DefaultSettings;
}

// operator= @ 148511c90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettings * __thiscall
FPostProcessSettings::operator=(FPostProcessSettings *this,FPostProcessSettings *param_1)

{
  FWeightedBlendables *pFVar1;
  UTexture2D *pUVar2;
  UTexture *pUVar3;
  UTextureCube *pUVar4;
  UCurveFloat *pUVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  uint uVar10;
  FWeightedBlendables *pFVar11;
  byte bVar12;
  
  bVar12 = (this->bOverride_TemperatureType ^ param_1->bOverride_TemperatureType) & 1 ^
           *(byte *)this;
  *(byte *)this = bVar12;
  bVar12 = (bVar12 ^ *(byte *)param_1) & 2 ^ bVar12;
  *(byte *)this = bVar12;
  bVar12 = (bVar12 ^ *(byte *)param_1) & 4 ^ bVar12;
  *(byte *)this = bVar12;
  bVar12 = (bVar12 ^ *(byte *)param_1) & 8 ^ bVar12;
  *(byte *)this = bVar12;
  bVar12 = (bVar12 ^ *(byte *)param_1) & 0x10 ^ bVar12;
  *(byte *)this = bVar12;
  bVar12 = (bVar12 ^ *(byte *)param_1) & 0x20 ^ bVar12;
  *(byte *)this = bVar12;
  bVar12 = (bVar12 ^ *(byte *)param_1) & 0x40 ^ bVar12;
  *(byte *)this = bVar12;
  *(byte *)this = (bVar12 ^ *(byte *)param_1) & 0x7f ^ *(byte *)param_1;
  bVar12 = (this->bOverride_ColorSaturationShadows ^ param_1->bOverride_ColorSaturationShadows) & 1
           ^ this->field_0x1;
  this->field_0x1 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1) & 2 ^ bVar12;
  this->field_0x1 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1) & 4 ^ bVar12;
  this->field_0x1 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1) & 8 ^ bVar12;
  this->field_0x1 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1) & 0x10 ^ bVar12;
  this->field_0x1 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1) & 0x20 ^ bVar12;
  this->field_0x1 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1) & 0x40 ^ bVar12;
  this->field_0x1 = bVar12;
  this->field_0x1 = (bVar12 ^ param_1->field_0x1) & 0x7f ^ param_1->field_0x1;
  bVar12 = (this->bOverride_ColorGainMidtones ^ param_1->bOverride_ColorGainMidtones) & 1 ^
           this->field_0x2;
  this->field_0x2 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x2) & 2 ^ bVar12;
  this->field_0x2 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x2) & 4 ^ bVar12;
  this->field_0x2 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x2) & 8 ^ bVar12;
  this->field_0x2 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x2) & 0x10 ^ bVar12;
  this->field_0x2 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x2) & 0x20 ^ bVar12;
  this->field_0x2 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x2) & 0x40 ^ bVar12;
  this->field_0x2 = bVar12;
  this->field_0x2 = (bVar12 ^ param_1->field_0x2) & 0x7f ^ param_1->field_0x2;
  bVar12 = (this->bOverride_ColorCorrectionHighlightsMin ^
           param_1->bOverride_ColorCorrectionHighlightsMin) & 1 ^ this->field_0x3;
  this->field_0x3 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x3) & 2 ^ bVar12;
  this->field_0x3 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x3) & 4 ^ bVar12;
  this->field_0x3 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x3) & 8 ^ bVar12;
  this->field_0x3 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x3) & 0x10 ^ bVar12;
  this->field_0x3 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x3) & 0x20 ^ bVar12;
  this->field_0x3 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x3) & 0x40 ^ bVar12;
  this->field_0x3 = bVar12;
  this->field_0x3 = (bVar12 ^ param_1->field_0x3) & 0x7f ^ param_1->field_0x3;
  bVar12 = (this->bOverride_FilmBlackClip ^ param_1->bOverride_FilmBlackClip) & 1 ^ this->field_0x4;
  this->field_0x4 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x4) & 2 ^ bVar12;
  this->field_0x4 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x4) & 4 ^ bVar12;
  this->field_0x4 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x4) & 8 ^ bVar12;
  this->field_0x4 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x4) & 0x10 ^ bVar12;
  this->field_0x4 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x4) & 0x20 ^ bVar12;
  this->field_0x4 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x4) & 0x40 ^ bVar12;
  this->field_0x4 = bVar12;
  this->field_0x4 = (bVar12 ^ param_1->field_0x4) & 0x7f ^ param_1->field_0x4;
  bVar12 = (this->bOverride_BloomMethod ^ param_1->bOverride_BloomMethod) & 1 ^ this->field_0x5;
  this->field_0x5 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x5) & 2 ^ bVar12;
  this->field_0x5 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x5) & 4 ^ bVar12;
  this->field_0x5 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x5) & 8 ^ bVar12;
  this->field_0x5 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x5) & 0x10 ^ bVar12;
  this->field_0x5 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x5) & 0x20 ^ bVar12;
  this->field_0x5 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x5) & 0x40 ^ bVar12;
  this->field_0x5 = bVar12;
  this->field_0x5 = (bVar12 ^ param_1->field_0x5) & 0x7f ^ param_1->field_0x5;
  bVar12 = (this->bOverride_Bloom3Tint ^ param_1->bOverride_Bloom3Tint) & 1 ^ this->field_0x6;
  this->field_0x6 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x6) & 2 ^ bVar12;
  this->field_0x6 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x6) & 4 ^ bVar12;
  this->field_0x6 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x6) & 8 ^ bVar12;
  this->field_0x6 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x6) & 0x10 ^ bVar12;
  this->field_0x6 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x6) & 0x20 ^ bVar12;
  this->field_0x6 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x6) & 0x40 ^ bVar12;
  this->field_0x6 = bVar12;
  this->field_0x6 = (bVar12 ^ param_1->field_0x6) & 0x7f ^ param_1->field_0x6;
  bVar12 = (this->bOverride_BloomSizeScale ^ param_1->bOverride_BloomSizeScale) & 1 ^
           this->field_0x7;
  this->field_0x7 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x7) & 2 ^ bVar12;
  this->field_0x7 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x7) & 4 ^ bVar12;
  this->field_0x7 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x7) & 8 ^ bVar12;
  this->field_0x7 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x7) & 0x10 ^ bVar12;
  this->field_0x7 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x7) & 0x20 ^ bVar12;
  this->field_0x7 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x7) & 0x40 ^ bVar12;
  this->field_0x7 = bVar12;
  this->field_0x7 = (bVar12 ^ param_1->field_0x7) & 0x7f ^ param_1->field_0x7;
  bVar12 = (this->bOverride_BloomConvolutionPreFilterMax ^
           param_1->bOverride_BloomConvolutionPreFilterMax) & 1 ^ this->field_0x8;
  this->field_0x8 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x8) & 2 ^ bVar12;
  this->field_0x8 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x8) & 4 ^ bVar12;
  this->field_0x8 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x8) & 8 ^ bVar12;
  this->field_0x8 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x8) & 0x10 ^ bVar12;
  this->field_0x8 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x8) & 0x20 ^ bVar12;
  this->field_0x8 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x8) & 0x40 ^ bVar12;
  this->field_0x8 = bVar12;
  this->field_0x8 = (bVar12 ^ param_1->field_0x8) & 0x7f ^ param_1->field_0x8;
  bVar12 = (this->bOverride_AutoExposureMethod ^ param_1->bOverride_AutoExposureMethod) & 1 ^
           this->field_0x9;
  this->field_0x9 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x9) & 2 ^ bVar12;
  this->field_0x9 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x9) & 4 ^ bVar12;
  this->field_0x9 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x9) & 8 ^ bVar12;
  this->field_0x9 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x9) & 0x10 ^ bVar12;
  this->field_0x9 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x9) & 0x20 ^ bVar12;
  this->field_0x9 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x9) & 0x40 ^ bVar12;
  this->field_0x9 = bVar12;
  this->field_0x9 = (bVar12 ^ param_1->field_0x9) & 0x7f ^ param_1->field_0x9;
  bVar12 = (this->bOverride_AutoExposureBias ^ param_1->bOverride_AutoExposureBias) & 1 ^
           this->field_0xa;
  this->field_0xa = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xa) & 2 ^ bVar12;
  this->field_0xa = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xa) & 4 ^ bVar12;
  this->field_0xa = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xa) & 8 ^ bVar12;
  this->field_0xa = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xa) & 0x10 ^ bVar12;
  this->field_0xa = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xa) & 0x20 ^ bVar12;
  this->field_0xa = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xa) & 0x40 ^ bVar12;
  this->field_0xa = bVar12;
  this->field_0xa = (bVar12 ^ param_1->field_0xa) & 0x7f ^ param_1->field_0xa;
  bVar12 = (this->bOverride_LocalExposureHighlightContrastScale ^
           param_1->bOverride_LocalExposureHighlightContrastScale) & 1 ^ this->field_0xb;
  this->field_0xb = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xb) & 2 ^ bVar12;
  this->field_0xb = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xb) & 4 ^ bVar12;
  this->field_0xb = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xb) & 8 ^ bVar12;
  this->field_0xb = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xb) & 0x10 ^ bVar12;
  this->field_0xb = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xb) & 0x20 ^ bVar12;
  this->field_0xb = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xb) & 0x40 ^ bVar12;
  this->field_0xb = bVar12;
  this->field_0xb = (bVar12 ^ param_1->field_0xb) & 0x7f ^ param_1->field_0xb;
  bVar12 = (this->bOverride_LocalExposureBlurredLuminanceKernelSizePercent ^
           param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent) & 1 ^ this->field_0xc;
  this->field_0xc = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xc) & 2 ^ bVar12;
  this->field_0xc = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xc) & 4 ^ bVar12;
  this->field_0xc = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xc) & 8 ^ bVar12;
  this->field_0xc = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xc) & 0x10 ^ bVar12;
  this->field_0xc = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xc) & 0x20 ^ bVar12;
  this->field_0xc = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xc) & 0x40 ^ bVar12;
  this->field_0xc = bVar12;
  this->field_0xc = (param_1->field_0xc ^ bVar12) & 0x7f ^ param_1->field_0xc;
  bVar12 = (this->bOverride_LensFlareBokehShape ^ param_1->bOverride_LensFlareBokehShape) & 1 ^
           this->field_0xd;
  this->field_0xd = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xd) & 2 ^ bVar12;
  this->field_0xd = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xd) & 4 ^ bVar12;
  this->field_0xd = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xd) & 8 ^ bVar12;
  this->field_0xd = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xd) & 0x10 ^ bVar12;
  this->field_0xd = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xd) & 0x20 ^ bVar12;
  this->field_0xd = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xd) & 0x40 ^ bVar12;
  this->field_0xd = bVar12;
  this->field_0xd = (bVar12 ^ param_1->field_0xd) & 0x7f ^ param_1->field_0xd;
  bVar12 = (this->bOverride_FilmGrainIntensityMidtones ^
           param_1->bOverride_FilmGrainIntensityMidtones) & 1 ^ this->field_0xe;
  this->field_0xe = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xe) & 2 ^ bVar12;
  this->field_0xe = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xe) & 4 ^ bVar12;
  this->field_0xe = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xe) & 8 ^ bVar12;
  this->field_0xe = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xe) & 0x10 ^ bVar12;
  this->field_0xe = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xe) & 0x20 ^ bVar12;
  this->field_0xe = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xe) & 0x40 ^ bVar12;
  this->field_0xe = bVar12;
  this->field_0xe = (bVar12 ^ param_1->field_0xe) & 0x7f ^ param_1->field_0xe;
  bVar12 = (this->bOverride_AmbientOcclusionStaticFraction ^
           param_1->bOverride_AmbientOcclusionStaticFraction) & 1 ^ this->field_0xf;
  this->field_0xf = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xf) & 2 ^ bVar12;
  this->field_0xf = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xf) & 4 ^ bVar12;
  this->field_0xf = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xf) & 8 ^ bVar12;
  this->field_0xf = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xf) & 0x10 ^ bVar12;
  this->field_0xf = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xf) & 0x20 ^ bVar12;
  this->field_0xf = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0xf) & 0x40 ^ bVar12;
  this->field_0xf = bVar12;
  this->field_0xf = (bVar12 ^ param_1->field_0xf) & 0x7f ^ param_1->field_0xf;
  bVar12 = (this->bOverride_AmbientOcclusionQuality ^ param_1->bOverride_AmbientOcclusionQuality) &
           1 ^ this->field_0x10;
  this->field_0x10 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x10) & 2 ^ bVar12;
  this->field_0x10 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x10) & 4 ^ bVar12;
  this->field_0x10 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x10) & 8 ^ bVar12;
  this->field_0x10 = bVar12;
  this->field_0x10 = (bVar12 ^ param_1->field_0x10) & 0x10 ^ bVar12;
  uVar10 = (this->bOverride_RayTracingAO ^ param_1->bOverride_RayTracingAO) & 1 ^
           *(uint *)&this->field_0x14;
  *(uint *)&this->field_0x14 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x14) & 2 ^ uVar10;
  *(uint *)&this->field_0x14 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x14) & 4 ^ uVar10;
  *(uint *)&this->field_0x14 = uVar10;
  *(uint *)&this->field_0x14 = (uVar10 ^ *(uint *)&param_1->field_0x14) & 8 ^ uVar10;
  bVar12 = (this->bOverride_LPVIntensity_DEPRECATED ^ param_1->bOverride_LPVIntensity_DEPRECATED) &
           1 ^ this->field_0x18;
  this->field_0x18 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x18) & 2 ^ bVar12;
  this->field_0x18 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x18) & 4 ^ bVar12;
  this->field_0x18 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x18) & 8 ^ bVar12;
  this->field_0x18 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x18) & 0x10 ^ bVar12;
  this->field_0x18 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x18) & 0x20 ^ bVar12;
  this->field_0x18 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x18) & 0x40 ^ bVar12;
  this->field_0x18 = bVar12;
  this->field_0x18 = (bVar12 ^ param_1->field_0x18) & 0x7f ^ param_1->field_0x18;
  bVar12 = (this->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED ^
           param_1->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED) & 1 ^ this->field_0x19;
  this->field_0x19 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x19) & 2 ^ bVar12;
  this->field_0x19 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x19) & 4 ^ bVar12;
  this->field_0x19 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x19) & 8 ^ bVar12;
  this->field_0x19 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x19) & 0x10 ^ bVar12;
  this->field_0x19 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x19) & 0x20 ^ bVar12;
  this->field_0x19 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x19) & 0x40 ^ bVar12;
  this->field_0x19 = bVar12;
  this->field_0x19 = (bVar12 ^ param_1->field_0x19) & 0x7f ^ param_1->field_0x19;
  bVar12 = (this->bOverride_IndirectLightingIntensity ^ param_1->bOverride_IndirectLightingIntensity
           ) & 1 ^ this->field_0x1a;
  this->field_0x1a = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1a) & 2 ^ bVar12;
  this->field_0x1a = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1a) & 4 ^ bVar12;
  this->field_0x1a = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1a) & 8 ^ bVar12;
  this->field_0x1a = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1a) & 0x10 ^ bVar12;
  this->field_0x1a = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1a) & 0x20 ^ bVar12;
  this->field_0x1a = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1a) & 0x40 ^ bVar12;
  this->field_0x1a = bVar12;
  this->field_0x1a = (bVar12 ^ param_1->field_0x1a) & 0x7f ^ param_1->field_0x1a;
  bVar12 = (this->bOverride_DepthOfFieldSqueezeFactor ^ param_1->bOverride_DepthOfFieldSqueezeFactor
           ) & 1 ^ this->field_0x1b;
  this->field_0x1b = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1b) & 2 ^ bVar12;
  this->field_0x1b = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1b) & 4 ^ bVar12;
  this->field_0x1b = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1b) & 8 ^ bVar12;
  this->field_0x1b = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1b) & 0x10 ^ bVar12;
  this->field_0x1b = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1b) & 0x20 ^ bVar12;
  this->field_0x1b = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1b) & 0x40 ^ bVar12;
  this->field_0x1b = bVar12;
  this->field_0x1b = (bVar12 ^ param_1->field_0x1b) & 0x7f ^ param_1->field_0x1b;
  bVar12 = (this->bOverride_DepthOfFieldMatteBoxFlags ^ param_1->bOverride_DepthOfFieldMatteBoxFlags
           ) & 1 ^ this->field_0x1c;
  this->field_0x1c = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1c) & 2 ^ bVar12;
  this->field_0x1c = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1c) & 4 ^ bVar12;
  this->field_0x1c = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1c) & 8 ^ bVar12;
  this->field_0x1c = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1c) & 0x10 ^ bVar12;
  this->field_0x1c = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1c) & 0x20 ^ bVar12;
  this->field_0x1c = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1c) & 0x40 ^ bVar12;
  this->field_0x1c = bVar12;
  this->field_0x1c = (bVar12 ^ param_1->field_0x1c) & 0x7f ^ param_1->field_0x1c;
  bVar12 = (this->bOverride_DepthOfFieldNearBlurSize ^ param_1->bOverride_DepthOfFieldNearBlurSize)
           & 1 ^ this->field_0x1d;
  this->field_0x1d = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1d) & 2 ^ bVar12;
  this->field_0x1d = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1d) & 4 ^ bVar12;
  this->field_0x1d = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1d) & 8 ^ bVar12;
  this->field_0x1d = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1d) & 0x10 ^ bVar12;
  this->field_0x1d = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1d) & 0x20 ^ bVar12;
  this->field_0x1d = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1d) & 0x40 ^ bVar12;
  this->field_0x1d = bVar12;
  this->field_0x1d = (bVar12 ^ param_1->field_0x1d) & 0x7f ^ param_1->field_0x1d;
  bVar12 = (this->bOverride_MotionBlurTargetFPS ^ param_1->bOverride_MotionBlurTargetFPS) & 1 ^
           this->field_0x1e;
  this->field_0x1e = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1e) & 2 ^ bVar12;
  this->field_0x1e = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1e) & 4 ^ bVar12;
  this->field_0x1e = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1e) & 8 ^ bVar12;
  this->field_0x1e = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1e) & 0x10 ^ bVar12;
  this->field_0x1e = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1e) & 0x20 ^ bVar12;
  this->field_0x1e = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x1e) & 0x40 ^ bVar12;
  this->field_0x1e = bVar12;
  this->field_0x1e = (bVar12 ^ param_1->field_0x1e) & 0x7f ^ param_1->field_0x1e;
  bVar12 = (this->bOverride_ScreenSpaceReflectionRoughnessScale ^
           param_1->bOverride_ScreenSpaceReflectionRoughnessScale) & 1 ^ this->field_0x1f;
  this->field_0x1f = bVar12;
  this->field_0x1f = (bVar12 ^ param_1->field_0x1f) & 2 ^ bVar12;
  uVar10 = (this->bOverride_ReflectionsType_DEPRECATED ^
           param_1->bOverride_ReflectionsType_DEPRECATED) & 1 ^ *(uint *)&this->field_0x20;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 2 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 4 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 8 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x10 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x20 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x40 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x80 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x100 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x200 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x400 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x800 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x1000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x2000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x4000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x8000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x10000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x20000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x40000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x80000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x100000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x200000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x400000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x800000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x1000000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x2000000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x4000000 ^ uVar10;
  *(uint *)&this->field_0x20 = uVar10;
  *(uint *)&this->field_0x20 = (uVar10 ^ *(uint *)&param_1->field_0x20) & 0x8000000 ^ uVar10;
  bVar12 = (this->bOverride_LumenRayLightingMode ^ param_1->bOverride_LumenRayLightingMode) & 1 ^
           this->field_0x24;
  this->field_0x24 = bVar12;
  bVar12 = (bVar12 ^ param_1->field_0x24) & 2 ^ bVar12;
  this->field_0x24 = bVar12;
  this->field_0x24 = (bVar12 ^ param_1->field_0x24) & 4 ^ bVar12;
  uVar10 = (this->bOverride_LumenMaxRoughnessToTraceReflections ^
           param_1->bOverride_LumenMaxRoughnessToTraceReflections) & 1 ^ *(uint *)&this->field_0x28;
  *(uint *)&this->field_0x28 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x28) & 2 ^ uVar10;
  *(uint *)&this->field_0x28 = uVar10;
  *(uint *)&this->field_0x28 = (uVar10 ^ *(uint *)&param_1->field_0x28) & 4 ^ uVar10;
  this->field_0x2c =
       this->field_0x2c ^
       (this->bOverride_LumenSurfaceCacheResolution ^ param_1->bOverride_LumenSurfaceCacheResolution
       ) & 1;
  uVar10 = (this->bOverride_RayTracingGI ^ param_1->bOverride_RayTracingGI) & 1 ^
           *(uint *)&this->field_0x30;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 2 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 4 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 8 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x10 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x20 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x40 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x80 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x100 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x200 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x400 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x800 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x1000 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x2000 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x4000 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x8000 ^ uVar10;
  *(uint *)&this->field_0x30 = uVar10;
  *(uint *)&this->field_0x30 = (uVar10 ^ *(uint *)&param_1->field_0x30) & 0x10000 ^ uVar10;
  this->field_0x34 = this->field_0x34 ^ (this->bMobileHQGaussian ^ param_1->bMobileHQGaussian) & 1;
  (this->BloomMethod).Value = (param_1->BloomMethod).Value;
  (this->AutoExposureMethod).Value = (param_1->AutoExposureMethod).Value;
  (this->TemperatureType).Value = (param_1->TemperatureType).Value;
  this->WhiteTemp = param_1->WhiteTemp;
  this->WhiteTint = param_1->WhiteTint;
  dVar7 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
  (this->ColorSaturation).field0_0x0._s_0.X = (param_1->ColorSaturation).field0_0x0._s_0.X;
  (this->ColorSaturation).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorSaturation).field0_0x0._s_0.W;
  (this->ColorSaturation).field0_0x0._s_0.Z = (param_1->ColorSaturation).field0_0x0._s_0.Z;
  (this->ColorSaturation).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorContrast).field0_0x0._s_0.Y;
  (this->ColorContrast).field0_0x0._s_0.X = (param_1->ColorContrast).field0_0x0._s_0.X;
  (this->ColorContrast).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorContrast).field0_0x0._s_0.W;
  (this->ColorContrast).field0_0x0._s_0.Z = (param_1->ColorContrast).field0_0x0._s_0.Z;
  (this->ColorContrast).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorGamma).field0_0x0._s_0.Y;
  (this->ColorGamma).field0_0x0._s_0.X = (param_1->ColorGamma).field0_0x0._s_0.X;
  (this->ColorGamma).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorGamma).field0_0x0._s_0.W;
  (this->ColorGamma).field0_0x0._s_0.Z = (param_1->ColorGamma).field0_0x0._s_0.Z;
  (this->ColorGamma).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorGain).field0_0x0._s_0.Y;
  (this->ColorGain).field0_0x0._s_0.X = (param_1->ColorGain).field0_0x0._s_0.X;
  (this->ColorGain).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorGain).field0_0x0._s_0.W;
  (this->ColorGain).field0_0x0._s_0.Z = (param_1->ColorGain).field0_0x0._s_0.Z;
  (this->ColorGain).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorOffset).field0_0x0._s_0.Y;
  (this->ColorOffset).field0_0x0._s_0.X = (param_1->ColorOffset).field0_0x0._s_0.X;
  (this->ColorOffset).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorOffset).field0_0x0._s_0.W;
  (this->ColorOffset).field0_0x0._s_0.Z = (param_1->ColorOffset).field0_0x0._s_0.Z;
  (this->ColorOffset).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
  (this->ColorSaturationShadows).field0_0x0._s_0.X =
       (param_1->ColorSaturationShadows).field0_0x0._s_0.X;
  (this->ColorSaturationShadows).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
  (this->ColorSaturationShadows).field0_0x0._s_0.Z =
       (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
  (this->ColorSaturationShadows).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
  (this->ColorContrastShadows).field0_0x0._s_0.X = (param_1->ColorContrastShadows).field0_0x0._s_0.X
  ;
  (this->ColorContrastShadows).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
  (this->ColorContrastShadows).field0_0x0._s_0.Z = (param_1->ColorContrastShadows).field0_0x0._s_0.Z
  ;
  (this->ColorContrastShadows).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
  (this->ColorGammaShadows).field0_0x0._s_0.X = (param_1->ColorGammaShadows).field0_0x0._s_0.X;
  (this->ColorGammaShadows).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
  (this->ColorGammaShadows).field0_0x0._s_0.Z = (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
  (this->ColorGammaShadows).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
  (this->ColorGainShadows).field0_0x0._s_0.X = (param_1->ColorGainShadows).field0_0x0._s_0.X;
  (this->ColorGainShadows).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
  (this->ColorGainShadows).field0_0x0._s_0.Z = (param_1->ColorGainShadows).field0_0x0._s_0.Z;
  (this->ColorGainShadows).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
  (this->ColorOffsetShadows).field0_0x0._s_0.X = (param_1->ColorOffsetShadows).field0_0x0._s_0.X;
  (this->ColorOffsetShadows).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
  (this->ColorOffsetShadows).field0_0x0._s_0.Z = (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
  (this->ColorOffsetShadows).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
  (this->ColorSaturationMidtones).field0_0x0._s_0.X =
       (param_1->ColorSaturationMidtones).field0_0x0._s_0.X;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Z =
       (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
  (this->ColorSaturationMidtones).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
  (this->ColorContrastMidtones).field0_0x0._s_0.X =
       (param_1->ColorContrastMidtones).field0_0x0._s_0.X;
  (this->ColorContrastMidtones).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
  (this->ColorContrastMidtones).field0_0x0._s_0.Z =
       (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
  (this->ColorContrastMidtones).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
  (this->ColorGammaMidtones).field0_0x0._s_0.X = (param_1->ColorGammaMidtones).field0_0x0._s_0.X;
  (this->ColorGammaMidtones).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
  (this->ColorGammaMidtones).field0_0x0._s_0.Z = (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
  (this->ColorGammaMidtones).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
  (this->ColorGainMidtones).field0_0x0._s_0.X = (param_1->ColorGainMidtones).field0_0x0._s_0.X;
  (this->ColorGainMidtones).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
  (this->ColorGainMidtones).field0_0x0._s_0.Z = (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
  (this->ColorGainMidtones).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
  (this->ColorOffsetMidtones).field0_0x0._s_0.X = (param_1->ColorOffsetMidtones).field0_0x0._s_0.X;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Z = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
  (this->ColorOffsetMidtones).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
  (this->ColorSaturationHighlights).field0_0x0._s_0.X =
       (param_1->ColorSaturationHighlights).field0_0x0._s_0.X;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Z =
       (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
  (this->ColorSaturationHighlights).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
  (this->ColorContrastHighlights).field0_0x0._s_0.X =
       (param_1->ColorContrastHighlights).field0_0x0._s_0.X;
  (this->ColorContrastHighlights).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
  (this->ColorContrastHighlights).field0_0x0._s_0.Z =
       (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
  (this->ColorContrastHighlights).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
  (this->ColorGammaHighlights).field0_0x0._s_0.X = (param_1->ColorGammaHighlights).field0_0x0._s_0.X
  ;
  (this->ColorGammaHighlights).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
  (this->ColorGammaHighlights).field0_0x0._s_0.Z = (param_1->ColorGammaHighlights).field0_0x0._s_0.Z
  ;
  (this->ColorGammaHighlights).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
  (this->ColorGainHighlights).field0_0x0._s_0.X = (param_1->ColorGainHighlights).field0_0x0._s_0.X;
  (this->ColorGainHighlights).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
  (this->ColorGainHighlights).field0_0x0._s_0.Z = (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
  (this->ColorGainHighlights).field0_0x0._s_0.W = dVar7;
  dVar7 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
  (this->ColorOffsetHighlights).field0_0x0._s_0.X =
       (param_1->ColorOffsetHighlights).field0_0x0._s_0.X;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Z =
       (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
  (this->ColorOffsetHighlights).field0_0x0._s_0.W = dVar7;
  this->ColorCorrectionHighlightsMin = param_1->ColorCorrectionHighlightsMin;
  this->ColorCorrectionHighlightsMax = param_1->ColorCorrectionHighlightsMax;
  this->ColorCorrectionShadowsMax = param_1->ColorCorrectionShadowsMax;
  this->BlueCorrection = param_1->BlueCorrection;
  this->ExpandGamut = param_1->ExpandGamut;
  this->ToneCurveAmount = param_1->ToneCurveAmount;
  this->FilmSlope = param_1->FilmSlope;
  this->FilmToe = param_1->FilmToe;
  this->FilmShoulder = param_1->FilmShoulder;
  this->FilmBlackClip = param_1->FilmBlackClip;
  this->FilmWhiteClip = param_1->FilmWhiteClip;
  uVar8 = *(undefined8 *)((longlong)&(param_1->SceneColorTint).field0_0x0 + 8);
  *(undefined8 *)&(this->SceneColorTint).field0_0x0 =
       *(undefined8 *)&(param_1->SceneColorTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneColorTint).field0_0x0 + 8) = uVar8;
  this->SceneFringeIntensity = param_1->SceneFringeIntensity;
  this->ChromaticAberrationStartOffset = param_1->ChromaticAberrationStartOffset;
  this->BloomIntensity = param_1->BloomIntensity;
  this->BloomGaussianIntensity = param_1->BloomGaussianIntensity;
  this->BloomThreshold = param_1->BloomThreshold;
  this->BloomSizeScale = param_1->BloomSizeScale;
  this->Bloom1Size = param_1->Bloom1Size;
  this->Bloom2Size = param_1->Bloom2Size;
  this->Bloom3Size = param_1->Bloom3Size;
  this->Bloom4Size = param_1->Bloom4Size;
  this->Bloom5Size = param_1->Bloom5Size;
  this->Bloom6Size = param_1->Bloom6Size;
  uVar8 = *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom1Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom1Tint).field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom2Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom2Tint).field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom3Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom3Tint).field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom4Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom4Tint).field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom5Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom5Tint).field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom6Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom6Tint).field0_0x0 + 8) = uVar8;
  this->BloomConvolutionIntensity = param_1->BloomConvolutionIntensity;
  this->BloomConvolutionScatterDispersion = param_1->BloomConvolutionScatterDispersion;
  this->BloomConvolutionSize = param_1->BloomConvolutionSize;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->BloomConvolutionTexture).field0_0x0.DebugPtr, pUVar2 != (UTexture2D *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->BloomConvolutionTexture).field0_0x0 = (param_1->BloomConvolutionTexture).field0_0x0;
  dVar7 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.X =
       (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.Y = dVar7;
  this->BloomConvolutionPreFilterMin = param_1->BloomConvolutionPreFilterMin;
  this->BloomConvolutionPreFilterMax = param_1->BloomConvolutionPreFilterMax;
  this->BloomConvolutionPreFilterMult = param_1->BloomConvolutionPreFilterMult;
  this->BloomConvolutionBufferScale = param_1->BloomConvolutionBufferScale;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->BloomDirtMask).field0_0x0.DebugPtr, pUVar3 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->BloomDirtMask).field0_0x0 = (param_1->BloomDirtMask).field0_0x0;
  this->BloomDirtMaskIntensity = param_1->BloomDirtMaskIntensity;
  uVar8 = *(undefined8 *)((longlong)&(param_1->BloomDirtMaskTint).field0_0x0 + 8);
  *(undefined8 *)&(this->BloomDirtMaskTint).field0_0x0 =
       *(undefined8 *)&(param_1->BloomDirtMaskTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->BloomDirtMaskTint).field0_0x0 + 8) = uVar8;
  (this->DynamicGlobalIlluminationMethod).Value = (param_1->DynamicGlobalIlluminationMethod).Value;
  uVar8 = *(undefined8 *)((longlong)&(param_1->IndirectLightingColor).field0_0x0 + 8);
  *(undefined8 *)&(this->IndirectLightingColor).field0_0x0 =
       *(undefined8 *)&(param_1->IndirectLightingColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->IndirectLightingColor).field0_0x0 + 8) = uVar8;
  this->IndirectLightingIntensity = param_1->IndirectLightingIntensity;
  this->LumenRayLightingMode = param_1->LumenRayLightingMode;
  this->LumenSceneLightingQuality = param_1->LumenSceneLightingQuality;
  this->LumenSceneDetail = param_1->LumenSceneDetail;
  this->LumenSceneViewDistance = param_1->LumenSceneViewDistance;
  this->LumenSceneLightingUpdateSpeed = param_1->LumenSceneLightingUpdateSpeed;
  this->LumenFinalGatherQuality = param_1->LumenFinalGatherQuality;
  this->LumenFinalGatherLightingUpdateSpeed = param_1->LumenFinalGatherLightingUpdateSpeed;
  this->field_0x410 =
       (this->LumenFinalGatherScreenTraces ^ param_1->LumenFinalGatherScreenTraces) & 1 ^
       this->field_0x410;
  this->LumenMaxTraceDistance = param_1->LumenMaxTraceDistance;
  this->LumenDiffuseColorBoost = param_1->LumenDiffuseColorBoost;
  this->LumenSkylightLeaking = param_1->LumenSkylightLeaking;
  uVar8 = *(undefined8 *)((longlong)&(param_1->LumenSkylightLeakingTint).field0_0x0 + 8);
  *(undefined8 *)&(this->LumenSkylightLeakingTint).field0_0x0 =
       *(undefined8 *)&(param_1->LumenSkylightLeakingTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->LumenSkylightLeakingTint).field0_0x0 + 8) = uVar8;
  this->LumenFullSkylightLeakingDistance = param_1->LumenFullSkylightLeakingDistance;
  this->LumenSurfaceCacheResolution = param_1->LumenSurfaceCacheResolution;
  (this->ReflectionMethod).Value = (param_1->ReflectionMethod).Value;
  this->ReflectionsType_DEPRECATED = param_1->ReflectionsType_DEPRECATED;
  this->LumenReflectionQuality = param_1->LumenReflectionQuality;
  bVar12 = (this->LumenReflectionsScreenTraces ^ param_1->LumenReflectionsScreenTraces) & 1 ^
           this->field_0x440;
  this->field_0x440 = bVar12;
  this->field_0x440 = (bVar12 ^ param_1->field_0x440) & 2 ^ bVar12;
  this->LumenMaxRoughnessToTraceReflections = param_1->LumenMaxRoughnessToTraceReflections;
  this->LumenMaxReflectionBounces = param_1->LumenMaxReflectionBounces;
  this->LumenMaxRefractionBounces = param_1->LumenMaxRefractionBounces;
  this->ScreenSpaceReflectionIntensity = param_1->ScreenSpaceReflectionIntensity;
  this->ScreenSpaceReflectionQuality = param_1->ScreenSpaceReflectionQuality;
  this->ScreenSpaceReflectionMaxRoughness = param_1->ScreenSpaceReflectionMaxRoughness;
  this->field_0x45c = (this->bMegaLights ^ param_1->bMegaLights) & 1 ^ this->field_0x45c;
  uVar8 = *(undefined8 *)((longlong)&(param_1->AmbientCubemapTint).field0_0x0 + 8);
  *(undefined8 *)&(this->AmbientCubemapTint).field0_0x0 =
       *(undefined8 *)&(param_1->AmbientCubemapTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->AmbientCubemapTint).field0_0x0 + 8) = uVar8;
  this->AmbientCubemapIntensity = param_1->AmbientCubemapIntensity;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->AmbientCubemap).field0_0x0.DebugPtr, pUVar4 != (UTextureCube *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->AmbientCubemap).field0_0x0 = (param_1->AmbientCubemap).field0_0x0;
  this->CameraShutterSpeed = param_1->CameraShutterSpeed;
  this->CameraISO = param_1->CameraISO;
  this->DepthOfFieldFstop = param_1->DepthOfFieldFstop;
  this->DepthOfFieldMinFstop = param_1->DepthOfFieldMinFstop;
  this->DepthOfFieldBladeCount = param_1->DepthOfFieldBladeCount;
  this->AutoExposureBias = param_1->AutoExposureBias;
  this->AutoExposureBiasBackup = param_1->AutoExposureBiasBackup;
  this->field_0x49c =
       (this->bOverride_AutoExposureBiasBackup ^ param_1->bOverride_AutoExposureBiasBackup) & 1 ^
       this->field_0x49c;
  *(uint *)&this->field_0x4a0 =
       (ZPULL(*(undefined4 *)&this->field_0x4a0,0,1) ^
       param_1->AutoExposureApplyPhysicalCameraExposure) & 1 ^ *(undefined4 *)&this->field_0x4a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->AutoExposureBiasCurve).field0_0x0.DebugPtr, pUVar5 != (UCurveFloat *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->AutoExposureBiasCurve).field0_0x0 = (param_1->AutoExposureBiasCurve).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->AutoExposureMeterMask).field0_0x0.DebugPtr, pUVar3 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->AutoExposureMeterMask).field0_0x0 = (param_1->AutoExposureMeterMask).field0_0x0;
  this->AutoExposureLowPercent = param_1->AutoExposureLowPercent;
  this->AutoExposureHighPercent = param_1->AutoExposureHighPercent;
  this->AutoExposureMinBrightness = param_1->AutoExposureMinBrightness;
  this->AutoExposureMaxBrightness = param_1->AutoExposureMaxBrightness;
  this->AutoExposureSpeedUp = param_1->AutoExposureSpeedUp;
  this->AutoExposureSpeedDown = param_1->AutoExposureSpeedDown;
  this->HistogramLogMin = param_1->HistogramLogMin;
  this->HistogramLogMax = param_1->HistogramLogMax;
  this->AutoExposureCalibrationConstant_DEPRECATED =
       param_1->AutoExposureCalibrationConstant_DEPRECATED;
  this->LocalExposureMethod = param_1->LocalExposureMethod;
  this->LocalExposureContrastScale_DEPRECATED = param_1->LocalExposureContrastScale_DEPRECATED;
  this->LocalExposureHighlightContrastScale = param_1->LocalExposureHighlightContrastScale;
  this->LocalExposureShadowContrastScale = param_1->LocalExposureShadowContrastScale;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr,
     pUVar5 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->LocalExposureHighlightContrastCurve).field0_0x0 =
       (param_1->LocalExposureHighlightContrastCurve).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr,
     pUVar5 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->LocalExposureShadowContrastCurve).field0_0x0 =
       (param_1->LocalExposureShadowContrastCurve).field0_0x0;
  this->LocalExposureHighlightThreshold = param_1->LocalExposureHighlightThreshold;
  this->LocalExposureShadowThreshold = param_1->LocalExposureShadowThreshold;
  this->LocalExposureDetailStrength = param_1->LocalExposureDetailStrength;
  this->LocalExposureBlurredLuminanceBlend = param_1->LocalExposureBlurredLuminanceBlend;
  this->LocalExposureBlurredLuminanceKernelSizePercent =
       param_1->LocalExposureBlurredLuminanceKernelSizePercent;
  this->LocalExposureHighlightThresholdStrength = param_1->LocalExposureHighlightThresholdStrength;
  this->LocalExposureShadowThresholdStrength = param_1->LocalExposureShadowThresholdStrength;
  this->LocalExposureMiddleGreyBias = param_1->LocalExposureMiddleGreyBias;
  this->LensFlareIntensity = param_1->LensFlareIntensity;
  uVar8 = *(undefined8 *)((longlong)&(param_1->LensFlareTint).field0_0x0 + 8);
  *(undefined8 *)&(this->LensFlareTint).field0_0x0 =
       *(undefined8 *)&(param_1->LensFlareTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->LensFlareTint).field0_0x0 + 8) = uVar8;
  this->LensFlareBokehSize = param_1->LensFlareBokehSize;
  this->LensFlareThreshold = param_1->LensFlareThreshold;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->LensFlareBokehShape).field0_0x0.DebugPtr, pUVar3 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->LensFlareBokehShape).field0_0x0 = (param_1->LensFlareBokehShape).field0_0x0;
  uVar8 = *(undefined8 *)((longlong)&param_1->LensFlareTints[0].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[0].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[0].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[0].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->LensFlareTints[1].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[1].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[1].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[1].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->LensFlareTints[2].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[2].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[2].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[2].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->LensFlareTints[3].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[3].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[3].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[3].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->LensFlareTints[4].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[4].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[4].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[4].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->LensFlareTints[5].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[5].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[5].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[5].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->LensFlareTints[6].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[6].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[6].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[6].field0_0x0 + 8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&param_1->LensFlareTints[7].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[7].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[7].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[7].field0_0x0 + 8) = uVar8;
  this->VignetteIntensity = param_1->VignetteIntensity;
  this->Sharpen = param_1->Sharpen;
  this->GrainJitter_DEPRECATED = param_1->GrainJitter_DEPRECATED;
  this->GrainIntensity_DEPRECATED = param_1->GrainIntensity_DEPRECATED;
  this->FilmGrainIntensity = param_1->FilmGrainIntensity;
  this->FilmGrainIntensityShadows = param_1->FilmGrainIntensityShadows;
  this->FilmGrainIntensityMidtones = param_1->FilmGrainIntensityMidtones;
  this->FilmGrainIntensityHighlights = param_1->FilmGrainIntensityHighlights;
  this->FilmGrainShadowsMax = param_1->FilmGrainShadowsMax;
  this->FilmGrainHighlightsMin = param_1->FilmGrainHighlightsMin;
  this->FilmGrainHighlightsMax = param_1->FilmGrainHighlightsMax;
  this->FilmGrainTexelSize = param_1->FilmGrainTexelSize;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->FilmGrainTexture).field0_0x0.DebugPtr, pUVar2 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->FilmGrainTexture).field0_0x0 = (param_1->FilmGrainTexture).field0_0x0;
  this->AmbientOcclusionIntensity = param_1->AmbientOcclusionIntensity;
  this->AmbientOcclusionStaticFraction = param_1->AmbientOcclusionStaticFraction;
  this->AmbientOcclusionRadius = param_1->AmbientOcclusionRadius;
  *(uint *)&this->field_0x60c =
       (ZPULL(*(undefined4 *)&this->field_0x60c,0,1) ^ param_1->AmbientOcclusionRadiusInWS) & 1 ^
       *(undefined4 *)&this->field_0x60c;
  this->AmbientOcclusionFadeDistance = param_1->AmbientOcclusionFadeDistance;
  this->AmbientOcclusionFadeRadius = param_1->AmbientOcclusionFadeRadius;
  this->AmbientOcclusionDistance_DEPRECATED = param_1->AmbientOcclusionDistance_DEPRECATED;
  this->AmbientOcclusionPower = param_1->AmbientOcclusionPower;
  this->AmbientOcclusionBias = param_1->AmbientOcclusionBias;
  this->AmbientOcclusionQuality = param_1->AmbientOcclusionQuality;
  this->AmbientOcclusionMipBlend = param_1->AmbientOcclusionMipBlend;
  this->AmbientOcclusionMipScale = param_1->AmbientOcclusionMipScale;
  this->AmbientOcclusionMipThreshold = param_1->AmbientOcclusionMipThreshold;
  this->AmbientOcclusionTemporalBlendWeight = param_1->AmbientOcclusionTemporalBlendWeight;
  *(uint *)&this->field_0x638 =
       (ZPULL(*(undefined4 *)&this->field_0x638,0,1) ^ param_1->RayTracingAO) & 1 ^
       *(undefined4 *)&this->field_0x638;
  this->RayTracingAOSamplesPerPixel = param_1->RayTracingAOSamplesPerPixel;
  this->RayTracingAOIntensity = param_1->RayTracingAOIntensity;
  this->RayTracingAORadius = param_1->RayTracingAORadius;
  this->ColorGradingIntensity = param_1->ColorGradingIntensity;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->ColorGradingLUT).field0_0x0.DebugPtr, pUVar3 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->ColorGradingLUT).field0_0x0 = (param_1->ColorGradingLUT).field0_0x0;
  this->DepthOfFieldSensorWidth = param_1->DepthOfFieldSensorWidth;
  this->DepthOfFieldSqueezeFactor = param_1->DepthOfFieldSqueezeFactor;
  this->DepthOfFieldFocalDistance = param_1->DepthOfFieldFocalDistance;
  this->DepthOfFieldDepthBlurAmount = param_1->DepthOfFieldDepthBlurAmount;
  this->DepthOfFieldDepthBlurRadius = param_1->DepthOfFieldDepthBlurRadius;
  *(uint *)&this->field_0x66c =
       (ZPULL(*(undefined4 *)&this->field_0x66c,0,1) ^ param_1->DepthOfFieldUseHairDepth) & 1 ^
       *(undefined4 *)&this->field_0x66c;
  this->DepthOfFieldPetzvalBokeh = param_1->DepthOfFieldPetzvalBokeh;
  this->DepthOfFieldPetzvalBokehFalloff = param_1->DepthOfFieldPetzvalBokehFalloff;
  (this->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0 =
       (param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0;
  this->DepthOfFieldPetzvalExclusionBoxRadius = param_1->DepthOfFieldPetzvalExclusionBoxRadius;
  this->DepthOfFieldAspectRatioScalar = param_1->DepthOfFieldAspectRatioScalar;
  this->DepthOfFieldBarrelRadius = param_1->DepthOfFieldBarrelRadius;
  this->DepthOfFieldBarrelLength = param_1->DepthOfFieldBarrelLength;
  fVar9 = param_1->DepthOfFieldMatteBoxFlags[0].Roll;
  this->DepthOfFieldMatteBoxFlags[0].Pitch = param_1->DepthOfFieldMatteBoxFlags[0].Pitch;
  this->DepthOfFieldMatteBoxFlags[0].Roll = fVar9;
  this->DepthOfFieldMatteBoxFlags[0].Length = param_1->DepthOfFieldMatteBoxFlags[0].Length;
  fVar9 = param_1->DepthOfFieldMatteBoxFlags[1].Roll;
  this->DepthOfFieldMatteBoxFlags[1].Pitch = param_1->DepthOfFieldMatteBoxFlags[1].Pitch;
  this->DepthOfFieldMatteBoxFlags[1].Roll = fVar9;
  this->DepthOfFieldMatteBoxFlags[1].Length = param_1->DepthOfFieldMatteBoxFlags[1].Length;
  fVar9 = param_1->DepthOfFieldMatteBoxFlags[2].Roll;
  this->DepthOfFieldMatteBoxFlags[2].Pitch = param_1->DepthOfFieldMatteBoxFlags[2].Pitch;
  this->DepthOfFieldMatteBoxFlags[2].Roll = fVar9;
  this->DepthOfFieldMatteBoxFlags[2].Length = param_1->DepthOfFieldMatteBoxFlags[2].Length;
  this->DepthOfFieldFocalRegion = param_1->DepthOfFieldFocalRegion;
  this->DepthOfFieldNearTransitionRegion = param_1->DepthOfFieldNearTransitionRegion;
  this->DepthOfFieldFarTransitionRegion = param_1->DepthOfFieldFarTransitionRegion;
  this->DepthOfFieldScale = param_1->DepthOfFieldScale;
  this->DepthOfFieldNearBlurSize = param_1->DepthOfFieldNearBlurSize;
  this->DepthOfFieldFarBlurSize = param_1->DepthOfFieldFarBlurSize;
  this->DepthOfFieldOcclusion = param_1->DepthOfFieldOcclusion;
  this->DepthOfFieldSkyFocusDistance = param_1->DepthOfFieldSkyFocusDistance;
  this->DepthOfFieldVignetteSize = param_1->DepthOfFieldVignetteSize;
  this->MotionBlurAmount = param_1->MotionBlurAmount;
  this->MotionBlurMax = param_1->MotionBlurMax;
  this->MotionBlurTargetFPS = param_1->MotionBlurTargetFPS;
  this->MotionBlurPerObjectSize = param_1->MotionBlurPerObjectSize;
  this->LPVIntensity_DEPRECATED = param_1->LPVIntensity_DEPRECATED;
  this->LPVVplInjectionBias_DEPRECATED = param_1->LPVVplInjectionBias_DEPRECATED;
  this->LPVSize_DEPRECATED = param_1->LPVSize_DEPRECATED;
  this->LPVSecondaryOcclusionIntensity_DEPRECATED =
       param_1->LPVSecondaryOcclusionIntensity_DEPRECATED;
  this->LPVSecondaryBounceIntensity_DEPRECATED = param_1->LPVSecondaryBounceIntensity_DEPRECATED;
  this->LPVGeometryVolumeBias_DEPRECATED = param_1->LPVGeometryVolumeBias_DEPRECATED;
  this->LPVEmissiveInjectionIntensity_DEPRECATED = param_1->LPVEmissiveInjectionIntensity_DEPRECATED
  ;
  this->LPVDirectionalOcclusionIntensity_DEPRECATED =
       param_1->LPVDirectionalOcclusionIntensity_DEPRECATED;
  this->LPVDirectionalOcclusionRadius_DEPRECATED = param_1->LPVDirectionalOcclusionRadius_DEPRECATED
  ;
  this->LPVDiffuseOcclusionExponent_DEPRECATED = param_1->LPVDiffuseOcclusionExponent_DEPRECATED;
  this->LPVSpecularOcclusionExponent_DEPRECATED = param_1->LPVSpecularOcclusionExponent_DEPRECATED;
  this->LPVDiffuseOcclusionIntensity_DEPRECATED = param_1->LPVDiffuseOcclusionIntensity_DEPRECATED;
  this->LPVSpecularOcclusionIntensity_DEPRECATED = param_1->LPVSpecularOcclusionIntensity_DEPRECATED
  ;
  this->TranslucencyType = param_1->TranslucencyType;
  this->RayTracingTranslucencyMaxRoughness = param_1->RayTracingTranslucencyMaxRoughness;
  this->RayTracingTranslucencyRefractionRays = param_1->RayTracingTranslucencyRefractionRays;
  this->RayTracingTranslucencySamplesPerPixel = param_1->RayTracingTranslucencySamplesPerPixel;
  this->RayTracingTranslucencyMaxPrimaryHitEvents =
       param_1->RayTracingTranslucencyMaxPrimaryHitEvents;
  this->RayTracingTranslucencyMaxSecondaryHitEvents =
       param_1->RayTracingTranslucencyMaxSecondaryHitEvents;
  this->RayTracingTranslucencyShadows = param_1->RayTracingTranslucencyShadows;
  bVar12 = (this->RayTracingTranslucencyRefraction ^ param_1->RayTracingTranslucencyRefraction) & 1
           ^ this->field_0x735;
  this->field_0x735 = bVar12;
  this->field_0x735 = (bVar12 ^ param_1->field_0x735) & 2 ^ bVar12;
  this->PathTracingMaxBounces = param_1->PathTracingMaxBounces;
  this->PathTracingSamplesPerPixel = param_1->PathTracingSamplesPerPixel;
  this->PathTracingMaxPathIntensity = param_1->PathTracingMaxPathIntensity;
  uVar10 = (ZPULL(*(undefined4 *)&this->field_0x744,0,1) ^
           param_1->PathTracingEnableEmissiveMaterials) & 1 ^ *(undefined4 *)&this->field_0x744;
  *(uint *)&this->field_0x744 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 2 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 4 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 8 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 0x10 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 0x20 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 0x40 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  pFVar1 = &this->WeightedBlendables;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 0x80 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 0x100 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 0x200 ^ uVar10;
  *(uint *)&this->field_0x744 = uVar10;
  *(uint *)&this->field_0x744 = (uVar10 ^ *(uint *)&param_1->field_0x744) & 0x400 ^ uVar10;
  this->LPVFadeRange_DEPRECATED = param_1->LPVFadeRange_DEPRECATED;
  this->LPVDirectionalOcclusionFadeRange_DEPRECATED =
       param_1->LPVDirectionalOcclusionFadeRange_DEPRECATED;
  this->ScreenPercentage_DEPRECATED = param_1->ScreenPercentage_DEPRECATED;
  pFVar11 = &param_1->WeightedBlendables;
  this->UserFlags = param_1->UserFlags;
  if (pFVar1 != pFVar11) {
    pFVar6 = (pFVar1->Array).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar1->Array).AllocatorInstance.Data = (pFVar11->Array).AllocatorInstance.Data;
    (pFVar11->Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WeightedBlendables).Array.ArrayNum = (param_1->WeightedBlendables).Array.ArrayNum;
    (this->WeightedBlendables).Array.ArrayMax = (param_1->WeightedBlendables).Array.ArrayMax;
    (param_1->WeightedBlendables).Array.ArrayNum = 0;
    (param_1->WeightedBlendables).Array.ArrayMax = 0;
  }
  return this;
}

