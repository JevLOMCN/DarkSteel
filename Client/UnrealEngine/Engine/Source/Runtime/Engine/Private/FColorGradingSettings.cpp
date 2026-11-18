// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1484a52f0

UScriptStruct * __cdecl FColorGradingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FColorGradingSettings.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FColorGradingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FColorGradingSettings,(UObject *)pUVar1,
                         L"ColorGradingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FColorGradingSettings.OuterSingleton;
}

// FColorGradingSettings @ 1484ba120

FColorGradingSettings * __thiscall
FColorGradingSettings::FColorGradingSettings(FColorGradingSettings *this)

{
  (this->Global).Saturation.field0_0x0._s_0.X = 1.0;
  (this->Global).Saturation.field0_0x0._s_0.Y = 1.0;
  (this->Global).Saturation.field0_0x0._s_0.Z = 1.0;
  (this->Global).Saturation.field0_0x0._s_0.W = 1.0;
  (this->Global).Contrast.field0_0x0._s_0.X = 1.0;
  (this->Global).Contrast.field0_0x0._s_0.Y = 1.0;
  (this->Global).Contrast.field0_0x0._s_0.Z = 1.0;
  (this->Global).Contrast.field0_0x0._s_0.W = 1.0;
  (this->Global).Gamma.field0_0x0._s_0.X = 1.0;
  (this->Global).Gamma.field0_0x0._s_0.Y = 1.0;
  (this->Global).Gamma.field0_0x0._s_0.Z = 1.0;
  (this->Global).Gamma.field0_0x0._s_0.W = 1.0;
  (this->Global).Gain.field0_0x0._s_0.X = 1.0;
  (this->Global).Gain.field0_0x0._s_0.Y = 1.0;
  (this->Global).Gain.field0_0x0._s_0.Z = 1.0;
  (this->Global).Gain.field0_0x0._s_0.W = 1.0;
  (this->Global).Offset.field0_0x0._s_0.X = 0.0;
  (this->Global).Offset.field0_0x0._s_0.Y = 0.0;
  (this->Global).Offset.field0_0x0._s_0.Z = 0.0;
  (this->Global).Offset.field0_0x0._s_0.W = 0.0;
  (this->Shadows).Saturation.field0_0x0._s_0.X = 1.0;
  (this->Shadows).Saturation.field0_0x0._s_0.Y = 1.0;
  (this->Shadows).Saturation.field0_0x0._s_0.Z = 1.0;
  (this->Shadows).Saturation.field0_0x0._s_0.W = 1.0;
  (this->Shadows).Contrast.field0_0x0._s_0.X = 1.0;
  (this->Shadows).Contrast.field0_0x0._s_0.Y = 1.0;
  (this->Shadows).Contrast.field0_0x0._s_0.Z = 1.0;
  (this->Shadows).Contrast.field0_0x0._s_0.W = 1.0;
  (this->Shadows).Gamma.field0_0x0._s_0.X = 1.0;
  (this->Shadows).Gamma.field0_0x0._s_0.Y = 1.0;
  (this->Shadows).Gamma.field0_0x0._s_0.Z = 1.0;
  (this->Shadows).Gamma.field0_0x0._s_0.W = 1.0;
  (this->Shadows).Gain.field0_0x0._s_0.X = 1.0;
  (this->Shadows).Gain.field0_0x0._s_0.Y = 1.0;
  (this->Shadows).Gain.field0_0x0._s_0.Z = 1.0;
  (this->Shadows).Gain.field0_0x0._s_0.W = 1.0;
  (this->Shadows).Offset.field0_0x0._s_0.X = 0.0;
  (this->Shadows).Offset.field0_0x0._s_0.Y = 0.0;
  (this->Shadows).Offset.field0_0x0._s_0.Z = 0.0;
  (this->Shadows).Offset.field0_0x0._s_0.W = 0.0;
  (this->Midtones).Saturation.field0_0x0._s_0.X = 1.0;
  (this->Midtones).Saturation.field0_0x0._s_0.Y = 1.0;
  (this->Midtones).Saturation.field0_0x0._s_0.Z = 1.0;
  (this->Midtones).Saturation.field0_0x0._s_0.W = 1.0;
  (this->Midtones).Contrast.field0_0x0._s_0.X = 1.0;
  (this->Midtones).Contrast.field0_0x0._s_0.Y = 1.0;
  (this->Midtones).Contrast.field0_0x0._s_0.Z = 1.0;
  (this->Midtones).Contrast.field0_0x0._s_0.W = 1.0;
  (this->Midtones).Gamma.field0_0x0._s_0.X = 1.0;
  (this->Midtones).Gamma.field0_0x0._s_0.Y = 1.0;
  (this->Midtones).Gamma.field0_0x0._s_0.Z = 1.0;
  (this->Midtones).Gamma.field0_0x0._s_0.W = 1.0;
  (this->Midtones).Gain.field0_0x0._s_0.X = 1.0;
  (this->Midtones).Gain.field0_0x0._s_0.Y = 1.0;
  (this->Midtones).Gain.field0_0x0._s_0.Z = 1.0;
  (this->Midtones).Gain.field0_0x0._s_0.W = 1.0;
  (this->Midtones).Offset.field0_0x0._s_0.X = 0.0;
  (this->Midtones).Offset.field0_0x0._s_0.Y = 0.0;
  (this->Midtones).Offset.field0_0x0._s_0.Z = 0.0;
  (this->Midtones).Offset.field0_0x0._s_0.W = 0.0;
  (this->Highlights).Saturation.field0_0x0._s_0.X = 1.0;
  (this->Highlights).Saturation.field0_0x0._s_0.Y = 1.0;
  (this->Highlights).Saturation.field0_0x0._s_0.Z = 1.0;
  (this->Highlights).Saturation.field0_0x0._s_0.W = 1.0;
  (this->Highlights).Contrast.field0_0x0._s_0.X = 1.0;
  (this->Highlights).Contrast.field0_0x0._s_0.Y = 1.0;
  (this->Highlights).Contrast.field0_0x0._s_0.Z = 1.0;
  (this->Highlights).Contrast.field0_0x0._s_0.W = 1.0;
  (this->Highlights).Gamma.field0_0x0._s_0.X = 1.0;
  (this->Highlights).Gamma.field0_0x0._s_0.Y = 1.0;
  (this->Highlights).Gamma.field0_0x0._s_0.Z = 1.0;
  (this->Highlights).Gamma.field0_0x0._s_0.W = 1.0;
  (this->Highlights).Gain.field0_0x0._s_0.X = 1.0;
  (this->Highlights).Gain.field0_0x0._s_0.Y = 1.0;
  (this->Highlights).Gain.field0_0x0._s_0.Z = 1.0;
  (this->Highlights).Gain.field0_0x0._s_0.W = 1.0;
  (this->Highlights).Offset.field0_0x0._s_0.X = 0.0;
  (this->Highlights).Offset.field0_0x0._s_0.Y = 0.0;
  (this->Highlights).Offset.field0_0x0._s_0.Z = 0.0;
  (this->Highlights).Offset.field0_0x0._s_0.W = 0.0;
  this->ShadowsMax = 0.09;
  this->HighlightsMin = 0.5;
  this->HighlightsMax = 1.0;
  return this;
}

// ExportToPostProcessSettings @ 1484d60a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FColorGradingSettings::ExportToPostProcessSettings
          (FColorGradingSettings *this,FPostProcessSettings *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  
  param_1->bOverride_ColorSaturation = '\x01';
  param_1->bOverride_ColorOffset = '\x01';
  param_1->bOverride_ColorGain = '\x01';
  param_1->bOverride_ColorGamma = '\x01';
  param_1->bOverride_ColorContrast = '\x01';
  param_1->bOverride_ColorCorrectionHighlightsMin = '\x01';
  param_1->bOverride_ColorCorrectionHighlightsMax = '\x01';
  puVar1 = &param_1->field_0x1;
  param_1->bOverride_ColorSaturationShadows = '\x01';
  param_1->bOverride_ColorCorrectionShadowsMax = '\x01';
  param_1->bOverride_ColorOffsetHighlights = '\x01';
  param_1->bOverride_ColorGainHighlights = '\x01';
  param_1->bOverride_ColorGammaHighlights = '\x01';
  param_1->bOverride_ColorContrastHighlights = '\x01';
  param_1->bOverride_ColorSaturationHighlights = '\x01';
  param_1->bOverride_ColorOffsetMidtones = '\x01';
  param_1->bOverride_ColorGainMidtones = '\x01';
  param_1->bOverride_ColorGammaMidtones = '\x01';
  param_1->bOverride_ColorContrastMidtones = '\x01';
  param_1->bOverride_ColorSaturationMidtones = '\x01';
  param_1->bOverride_ColorOffsetShadows = '\x01';
  param_1->bOverride_ColorGainShadows = '\x01';
  param_1->bOverride_ColorGammaShadows = '\x01';
  param_1->bOverride_ColorContrastShadows = '\x01';
  dVar2 = (this->Global).Saturation.field0_0x0._s_0.Y;
  (param_1->ColorSaturation).field0_0x0._s_0.X = (this->Global).Saturation.field0_0x0._s_0.X;
  (param_1->ColorSaturation).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Global).Saturation.field0_0x0._s_0.W;
  (param_1->ColorSaturation).field0_0x0._s_0.Z = (this->Global).Saturation.field0_0x0._s_0.Z;
  (param_1->ColorSaturation).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Global).Contrast.field0_0x0._s_0.Y;
  (param_1->ColorContrast).field0_0x0._s_0.X = (this->Global).Contrast.field0_0x0._s_0.X;
  (param_1->ColorContrast).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Global).Contrast.field0_0x0._s_0.W;
  (param_1->ColorContrast).field0_0x0._s_0.Z = (this->Global).Contrast.field0_0x0._s_0.Z;
  (param_1->ColorContrast).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Global).Gamma.field0_0x0._s_0.Y;
  (param_1->ColorGamma).field0_0x0._s_0.X = (this->Global).Gamma.field0_0x0._s_0.X;
  (param_1->ColorGamma).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Global).Gamma.field0_0x0._s_0.W;
  (param_1->ColorGamma).field0_0x0._s_0.Z = (this->Global).Gamma.field0_0x0._s_0.Z;
  (param_1->ColorGamma).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Global).Gain.field0_0x0._s_0.Y;
  (param_1->ColorGain).field0_0x0._s_0.X = (this->Global).Gain.field0_0x0._s_0.X;
  (param_1->ColorGain).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Global).Gain.field0_0x0._s_0.W;
  (param_1->ColorGain).field0_0x0._s_0.Z = (this->Global).Gain.field0_0x0._s_0.Z;
  (param_1->ColorGain).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Global).Offset.field0_0x0._s_0.Y;
  (param_1->ColorOffset).field0_0x0._s_0.X = (this->Global).Offset.field0_0x0._s_0.X;
  (param_1->ColorOffset).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Global).Offset.field0_0x0._s_0.W;
  (param_1->ColorOffset).field0_0x0._s_0.Z = (this->Global).Offset.field0_0x0._s_0.Z;
  (param_1->ColorOffset).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Shadows).Saturation.field0_0x0._s_0.Y;
  (param_1->ColorSaturationShadows).field0_0x0._s_0.X = (this->Shadows).Saturation.field0_0x0._s_0.X
  ;
  (param_1->ColorSaturationShadows).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Shadows).Saturation.field0_0x0._s_0.W;
  (param_1->ColorSaturationShadows).field0_0x0._s_0.Z = (this->Shadows).Saturation.field0_0x0._s_0.Z
  ;
  (param_1->ColorSaturationShadows).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Shadows).Contrast.field0_0x0._s_0.Y;
  (param_1->ColorContrastShadows).field0_0x0._s_0.X = (this->Shadows).Contrast.field0_0x0._s_0.X;
  (param_1->ColorContrastShadows).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Shadows).Contrast.field0_0x0._s_0.W;
  (param_1->ColorContrastShadows).field0_0x0._s_0.Z = (this->Shadows).Contrast.field0_0x0._s_0.Z;
  (param_1->ColorContrastShadows).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Shadows).Gamma.field0_0x0._s_0.Y;
  (param_1->ColorGammaShadows).field0_0x0._s_0.X = (this->Shadows).Gamma.field0_0x0._s_0.X;
  (param_1->ColorGammaShadows).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Shadows).Gamma.field0_0x0._s_0.W;
  (param_1->ColorGammaShadows).field0_0x0._s_0.Z = (this->Shadows).Gamma.field0_0x0._s_0.Z;
  (param_1->ColorGammaShadows).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Shadows).Gain.field0_0x0._s_0.Y;
  (param_1->ColorGainShadows).field0_0x0._s_0.X = (this->Shadows).Gain.field0_0x0._s_0.X;
  (param_1->ColorGainShadows).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Shadows).Gain.field0_0x0._s_0.W;
  (param_1->ColorGainShadows).field0_0x0._s_0.Z = (this->Shadows).Gain.field0_0x0._s_0.Z;
  (param_1->ColorGainShadows).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Shadows).Offset.field0_0x0._s_0.Y;
  (param_1->ColorOffsetShadows).field0_0x0._s_0.X = (this->Shadows).Offset.field0_0x0._s_0.X;
  (param_1->ColorOffsetShadows).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Shadows).Offset.field0_0x0._s_0.W;
  (param_1->ColorOffsetShadows).field0_0x0._s_0.Z = (this->Shadows).Offset.field0_0x0._s_0.Z;
  (param_1->ColorOffsetShadows).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Midtones).Saturation.field0_0x0._s_0.Y;
  (param_1->ColorSaturationMidtones).field0_0x0._s_0.X =
       (this->Midtones).Saturation.field0_0x0._s_0.X;
  (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Midtones).Saturation.field0_0x0._s_0.W;
  (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z =
       (this->Midtones).Saturation.field0_0x0._s_0.Z;
  (param_1->ColorSaturationMidtones).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Midtones).Contrast.field0_0x0._s_0.Y;
  (param_1->ColorContrastMidtones).field0_0x0._s_0.X = (this->Midtones).Contrast.field0_0x0._s_0.X;
  (param_1->ColorContrastMidtones).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Midtones).Contrast.field0_0x0._s_0.W;
  (param_1->ColorContrastMidtones).field0_0x0._s_0.Z = (this->Midtones).Contrast.field0_0x0._s_0.Z;
  (param_1->ColorContrastMidtones).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Midtones).Gamma.field0_0x0._s_0.Y;
  (param_1->ColorGammaMidtones).field0_0x0._s_0.X = (this->Midtones).Gamma.field0_0x0._s_0.X;
  (param_1->ColorGammaMidtones).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Midtones).Gamma.field0_0x0._s_0.W;
  (param_1->ColorGammaMidtones).field0_0x0._s_0.Z = (this->Midtones).Gamma.field0_0x0._s_0.Z;
  (param_1->ColorGammaMidtones).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Midtones).Gain.field0_0x0._s_0.Y;
  (param_1->ColorGainMidtones).field0_0x0._s_0.X = (this->Midtones).Gain.field0_0x0._s_0.X;
  (param_1->ColorGainMidtones).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Midtones).Gain.field0_0x0._s_0.W;
  (param_1->ColorGainMidtones).field0_0x0._s_0.Z = (this->Midtones).Gain.field0_0x0._s_0.Z;
  (param_1->ColorGainMidtones).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Midtones).Offset.field0_0x0._s_0.Y;
  (param_1->ColorOffsetMidtones).field0_0x0._s_0.X = (this->Midtones).Offset.field0_0x0._s_0.X;
  (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Midtones).Offset.field0_0x0._s_0.W;
  (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z = (this->Midtones).Offset.field0_0x0._s_0.Z;
  (param_1->ColorOffsetMidtones).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Highlights).Saturation.field0_0x0._s_0.Y;
  (param_1->ColorSaturationHighlights).field0_0x0._s_0.X =
       (this->Highlights).Saturation.field0_0x0._s_0.X;
  (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Highlights).Saturation.field0_0x0._s_0.W;
  (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z =
       (this->Highlights).Saturation.field0_0x0._s_0.Z;
  (param_1->ColorSaturationHighlights).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Highlights).Contrast.field0_0x0._s_0.Y;
  (param_1->ColorContrastHighlights).field0_0x0._s_0.X =
       (this->Highlights).Contrast.field0_0x0._s_0.X;
  (param_1->ColorContrastHighlights).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Highlights).Contrast.field0_0x0._s_0.W;
  (param_1->ColorContrastHighlights).field0_0x0._s_0.Z =
       (this->Highlights).Contrast.field0_0x0._s_0.Z;
  (param_1->ColorContrastHighlights).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Highlights).Gamma.field0_0x0._s_0.Y;
  (param_1->ColorGammaHighlights).field0_0x0._s_0.X = (this->Highlights).Gamma.field0_0x0._s_0.X;
  (param_1->ColorGammaHighlights).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Highlights).Gamma.field0_0x0._s_0.W;
  (param_1->ColorGammaHighlights).field0_0x0._s_0.Z = (this->Highlights).Gamma.field0_0x0._s_0.Z;
  (param_1->ColorGammaHighlights).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Highlights).Gain.field0_0x0._s_0.Y;
  (param_1->ColorGainHighlights).field0_0x0._s_0.X = (this->Highlights).Gain.field0_0x0._s_0.X;
  (param_1->ColorGainHighlights).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Highlights).Gain.field0_0x0._s_0.W;
  (param_1->ColorGainHighlights).field0_0x0._s_0.Z = (this->Highlights).Gain.field0_0x0._s_0.Z;
  (param_1->ColorGainHighlights).field0_0x0._s_0.W = dVar2;
  dVar2 = (this->Highlights).Offset.field0_0x0._s_0.Y;
  (param_1->ColorOffsetHighlights).field0_0x0._s_0.X = (this->Highlights).Offset.field0_0x0._s_0.X;
  (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Highlights).Offset.field0_0x0._s_0.W;
  (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z = (this->Highlights).Offset.field0_0x0._s_0.Z;
  (param_1->ColorOffsetHighlights).field0_0x0._s_0.W = dVar2;
  param_1->ColorCorrectionShadowsMax = this->ShadowsMax;
  param_1->ColorCorrectionHighlightsMin = this->HighlightsMin;
  param_1->ColorCorrectionHighlightsMax = this->HighlightsMax;
  return;
}

