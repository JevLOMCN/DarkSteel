// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FPostProcessSettings @ 1453fa110

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettings * __thiscall
FPostProcessSettings::FPostProcessSettings(FPostProcessSettings *this,FPostProcessSettings *param_1)

{
  UTexture2D *pUVar1;
  UTexture *pUVar2;
  UTextureCube *pUVar3;
  UCurveFloat *pUVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  byte bVar11;
  
  bVar11 = (this->bOverride_TemperatureType ^ param_1->bOverride_TemperatureType) & 1 ^
           *(byte *)this;
  *(byte *)this = bVar11;
  bVar11 = (bVar11 ^ *(byte *)param_1) & 2 ^ bVar11;
  *(byte *)this = bVar11;
  bVar11 = (bVar11 ^ *(byte *)param_1) & 4 ^ bVar11;
  *(byte *)this = bVar11;
  bVar11 = (bVar11 ^ *(byte *)param_1) & 8 ^ bVar11;
  *(byte *)this = bVar11;
  bVar11 = (bVar11 ^ *(byte *)param_1) & 0x10 ^ bVar11;
  *(byte *)this = bVar11;
  bVar11 = (bVar11 ^ *(byte *)param_1) & 0x20 ^ bVar11;
  *(byte *)this = bVar11;
  bVar11 = (bVar11 ^ *(byte *)param_1) & 0x40 ^ bVar11;
  *(byte *)this = bVar11;
  *(byte *)this = (bVar11 ^ *(byte *)param_1) & 0x7f ^ *(byte *)param_1;
  bVar11 = (this->bOverride_ColorSaturationShadows ^ param_1->bOverride_ColorSaturationShadows) & 1
           ^ this->field_0x1;
  this->field_0x1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1) & 2 ^ bVar11;
  this->field_0x1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1) & 4 ^ bVar11;
  this->field_0x1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1) & 8 ^ bVar11;
  this->field_0x1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1) & 0x10 ^ bVar11;
  this->field_0x1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1) & 0x20 ^ bVar11;
  this->field_0x1 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1) & 0x40 ^ bVar11;
  this->field_0x1 = bVar11;
  this->field_0x1 = (bVar11 ^ param_1->field_0x1) & 0x7f ^ param_1->field_0x1;
  bVar11 = (this->bOverride_ColorGainMidtones ^ param_1->bOverride_ColorGainMidtones) & 1 ^
           this->field_0x2;
  this->field_0x2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x2) & 2 ^ bVar11;
  this->field_0x2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x2) & 4 ^ bVar11;
  this->field_0x2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x2) & 8 ^ bVar11;
  this->field_0x2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x2) & 0x10 ^ bVar11;
  this->field_0x2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x2) & 0x20 ^ bVar11;
  this->field_0x2 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x2) & 0x40 ^ bVar11;
  this->field_0x2 = bVar11;
  this->field_0x2 = (bVar11 ^ param_1->field_0x2) & 0x7f ^ param_1->field_0x2;
  bVar11 = (this->bOverride_ColorCorrectionHighlightsMin ^
           param_1->bOverride_ColorCorrectionHighlightsMin) & 1 ^ this->field_0x3;
  this->field_0x3 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x3) & 2 ^ bVar11;
  this->field_0x3 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x3) & 4 ^ bVar11;
  this->field_0x3 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x3) & 8 ^ bVar11;
  this->field_0x3 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x3) & 0x10 ^ bVar11;
  this->field_0x3 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x3) & 0x20 ^ bVar11;
  this->field_0x3 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x3) & 0x40 ^ bVar11;
  this->field_0x3 = bVar11;
  this->field_0x3 = (bVar11 ^ param_1->field_0x3) & 0x7f ^ param_1->field_0x3;
  bVar11 = (this->bOverride_FilmBlackClip ^ param_1->bOverride_FilmBlackClip) & 1 ^ this->field_0x4;
  this->field_0x4 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x4) & 2 ^ bVar11;
  this->field_0x4 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x4) & 4 ^ bVar11;
  this->field_0x4 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x4) & 8 ^ bVar11;
  this->field_0x4 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x4) & 0x10 ^ bVar11;
  this->field_0x4 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x4) & 0x20 ^ bVar11;
  this->field_0x4 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x4) & 0x40 ^ bVar11;
  this->field_0x4 = bVar11;
  this->field_0x4 = (bVar11 ^ param_1->field_0x4) & 0x7f ^ param_1->field_0x4;
  bVar11 = (this->bOverride_BloomMethod ^ param_1->bOverride_BloomMethod) & 1 ^ this->field_0x5;
  this->field_0x5 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x5) & 2 ^ bVar11;
  this->field_0x5 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x5) & 4 ^ bVar11;
  this->field_0x5 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x5) & 8 ^ bVar11;
  this->field_0x5 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x5) & 0x10 ^ bVar11;
  this->field_0x5 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x5) & 0x20 ^ bVar11;
  this->field_0x5 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x5) & 0x40 ^ bVar11;
  this->field_0x5 = bVar11;
  this->field_0x5 = (bVar11 ^ param_1->field_0x5) & 0x7f ^ param_1->field_0x5;
  bVar11 = (this->bOverride_Bloom3Tint ^ param_1->bOverride_Bloom3Tint) & 1 ^ this->field_0x6;
  this->field_0x6 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x6) & 2 ^ bVar11;
  this->field_0x6 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x6) & 4 ^ bVar11;
  this->field_0x6 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x6) & 8 ^ bVar11;
  this->field_0x6 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x6) & 0x10 ^ bVar11;
  this->field_0x6 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x6) & 0x20 ^ bVar11;
  this->field_0x6 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x6) & 0x40 ^ bVar11;
  this->field_0x6 = bVar11;
  this->field_0x6 = (bVar11 ^ param_1->field_0x6) & 0x7f ^ param_1->field_0x6;
  bVar11 = (this->bOverride_BloomSizeScale ^ param_1->bOverride_BloomSizeScale) & 1 ^
           this->field_0x7;
  this->field_0x7 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x7) & 2 ^ bVar11;
  this->field_0x7 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x7) & 4 ^ bVar11;
  this->field_0x7 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x7) & 8 ^ bVar11;
  this->field_0x7 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x7) & 0x10 ^ bVar11;
  this->field_0x7 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x7) & 0x20 ^ bVar11;
  this->field_0x7 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x7) & 0x40 ^ bVar11;
  this->field_0x7 = bVar11;
  this->field_0x7 = (bVar11 ^ param_1->field_0x7) & 0x7f ^ param_1->field_0x7;
  bVar11 = (this->bOverride_BloomConvolutionPreFilterMax ^
           param_1->bOverride_BloomConvolutionPreFilterMax) & 1 ^ this->field_0x8;
  this->field_0x8 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x8) & 2 ^ bVar11;
  this->field_0x8 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x8) & 4 ^ bVar11;
  this->field_0x8 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x8) & 8 ^ bVar11;
  this->field_0x8 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x8) & 0x10 ^ bVar11;
  this->field_0x8 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x8) & 0x20 ^ bVar11;
  this->field_0x8 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x8) & 0x40 ^ bVar11;
  this->field_0x8 = bVar11;
  this->field_0x8 = (bVar11 ^ param_1->field_0x8) & 0x7f ^ param_1->field_0x8;
  bVar11 = (this->bOverride_AutoExposureMethod ^ param_1->bOverride_AutoExposureMethod) & 1 ^
           this->field_0x9;
  this->field_0x9 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x9) & 2 ^ bVar11;
  this->field_0x9 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x9) & 4 ^ bVar11;
  this->field_0x9 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x9) & 8 ^ bVar11;
  this->field_0x9 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x9) & 0x10 ^ bVar11;
  this->field_0x9 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x9) & 0x20 ^ bVar11;
  this->field_0x9 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x9) & 0x40 ^ bVar11;
  this->field_0x9 = bVar11;
  this->field_0x9 = (bVar11 ^ param_1->field_0x9) & 0x7f ^ param_1->field_0x9;
  bVar11 = (this->bOverride_AutoExposureBias ^ param_1->bOverride_AutoExposureBias) & 1 ^
           this->field_0xa;
  this->field_0xa = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xa) & 2 ^ bVar11;
  this->field_0xa = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xa) & 4 ^ bVar11;
  this->field_0xa = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xa) & 8 ^ bVar11;
  this->field_0xa = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xa) & 0x10 ^ bVar11;
  this->field_0xa = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xa) & 0x20 ^ bVar11;
  this->field_0xa = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xa) & 0x40 ^ bVar11;
  this->field_0xa = bVar11;
  this->field_0xa = (bVar11 ^ param_1->field_0xa) & 0x7f ^ param_1->field_0xa;
  bVar11 = (this->bOverride_LocalExposureHighlightContrastScale ^
           param_1->bOverride_LocalExposureHighlightContrastScale) & 1 ^ this->field_0xb;
  this->field_0xb = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xb) & 2 ^ bVar11;
  this->field_0xb = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xb) & 4 ^ bVar11;
  this->field_0xb = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xb) & 8 ^ bVar11;
  this->field_0xb = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xb) & 0x10 ^ bVar11;
  this->field_0xb = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xb) & 0x20 ^ bVar11;
  this->field_0xb = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xb) & 0x40 ^ bVar11;
  this->field_0xb = bVar11;
  this->field_0xb = (param_1->field_0xb ^ bVar11) & 0x7f ^ param_1->field_0xb;
  bVar11 = (this->bOverride_LocalExposureBlurredLuminanceKernelSizePercent ^
           param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent) & 1 ^ this->field_0xc;
  this->field_0xc = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc) & 2 ^ bVar11;
  this->field_0xc = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc) & 4 ^ bVar11;
  this->field_0xc = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc) & 8 ^ bVar11;
  this->field_0xc = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc) & 0x10 ^ bVar11;
  this->field_0xc = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc) & 0x20 ^ bVar11;
  this->field_0xc = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xc) & 0x40 ^ bVar11;
  this->field_0xc = bVar11;
  this->field_0xc = (param_1->field_0xc ^ bVar11) & 0x7f ^ param_1->field_0xc;
  bVar11 = (this->bOverride_LensFlareBokehShape ^ param_1->bOverride_LensFlareBokehShape) & 1 ^
           this->field_0xd;
  this->field_0xd = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xd) & 2 ^ bVar11;
  this->field_0xd = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xd) & 4 ^ bVar11;
  this->field_0xd = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xd) & 8 ^ bVar11;
  this->field_0xd = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xd) & 0x10 ^ bVar11;
  this->field_0xd = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xd) & 0x20 ^ bVar11;
  this->field_0xd = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xd) & 0x40 ^ bVar11;
  this->field_0xd = bVar11;
  this->field_0xd = (bVar11 ^ param_1->field_0xd) & 0x7f ^ param_1->field_0xd;
  bVar11 = (this->bOverride_FilmGrainIntensityMidtones ^
           param_1->bOverride_FilmGrainIntensityMidtones) & 1 ^ this->field_0xe;
  this->field_0xe = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xe) & 2 ^ bVar11;
  this->field_0xe = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xe) & 4 ^ bVar11;
  this->field_0xe = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xe) & 8 ^ bVar11;
  this->field_0xe = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xe) & 0x10 ^ bVar11;
  this->field_0xe = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xe) & 0x20 ^ bVar11;
  this->field_0xe = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xe) & 0x40 ^ bVar11;
  this->field_0xe = bVar11;
  this->field_0xe = (bVar11 ^ param_1->field_0xe) & 0x7f ^ param_1->field_0xe;
  bVar11 = (this->bOverride_AmbientOcclusionStaticFraction ^
           param_1->bOverride_AmbientOcclusionStaticFraction) & 1 ^ this->field_0xf;
  this->field_0xf = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xf) & 2 ^ bVar11;
  this->field_0xf = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xf) & 4 ^ bVar11;
  this->field_0xf = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xf) & 8 ^ bVar11;
  this->field_0xf = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xf) & 0x10 ^ bVar11;
  this->field_0xf = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xf) & 0x20 ^ bVar11;
  this->field_0xf = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0xf) & 0x40 ^ bVar11;
  this->field_0xf = bVar11;
  this->field_0xf = (bVar11 ^ param_1->field_0xf) & 0x7f ^ param_1->field_0xf;
  bVar11 = (this->bOverride_AmbientOcclusionQuality ^ param_1->bOverride_AmbientOcclusionQuality) &
           1 ^ this->field_0x10;
  this->field_0x10 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x10) & 2 ^ bVar11;
  this->field_0x10 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x10) & 4 ^ bVar11;
  this->field_0x10 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x10) & 8 ^ bVar11;
  this->field_0x10 = bVar11;
  this->field_0x10 = (bVar11 ^ param_1->field_0x10) & 0x10 ^ bVar11;
  uVar10 = (this->bOverride_RayTracingAO ^ param_1->bOverride_RayTracingAO) & 1 ^
           *(uint *)&this->field_0x14;
  *(uint *)&this->field_0x14 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x14) & 2 ^ uVar10;
  *(uint *)&this->field_0x14 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x14) & 4 ^ uVar10;
  *(uint *)&this->field_0x14 = uVar10;
  *(uint *)&this->field_0x14 = (uVar10 ^ *(uint *)&param_1->field_0x14) & 8 ^ uVar10;
  bVar11 = (this->bOverride_LPVIntensity_DEPRECATED ^ param_1->bOverride_LPVIntensity_DEPRECATED) &
           1 ^ this->field_0x18;
  this->field_0x18 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x18) & 2 ^ bVar11;
  this->field_0x18 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x18) & 4 ^ bVar11;
  this->field_0x18 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x18) & 8 ^ bVar11;
  this->field_0x18 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x18) & 0x10 ^ bVar11;
  this->field_0x18 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x18) & 0x20 ^ bVar11;
  this->field_0x18 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x18) & 0x40 ^ bVar11;
  this->field_0x18 = bVar11;
  this->field_0x18 = (bVar11 ^ param_1->field_0x18) & 0x7f ^ param_1->field_0x18;
  bVar11 = (this->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED ^
           param_1->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED) & 1 ^ this->field_0x19;
  this->field_0x19 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x19) & 2 ^ bVar11;
  this->field_0x19 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x19) & 4 ^ bVar11;
  this->field_0x19 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x19) & 8 ^ bVar11;
  this->field_0x19 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x19) & 0x10 ^ bVar11;
  this->field_0x19 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x19) & 0x20 ^ bVar11;
  this->field_0x19 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x19) & 0x40 ^ bVar11;
  this->field_0x19 = bVar11;
  this->field_0x19 = (bVar11 ^ param_1->field_0x19) & 0x7f ^ param_1->field_0x19;
  bVar11 = (this->bOverride_IndirectLightingIntensity ^ param_1->bOverride_IndirectLightingIntensity
           ) & 1 ^ this->field_0x1a;
  this->field_0x1a = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1a) & 2 ^ bVar11;
  this->field_0x1a = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1a) & 4 ^ bVar11;
  this->field_0x1a = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1a) & 8 ^ bVar11;
  this->field_0x1a = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1a) & 0x10 ^ bVar11;
  this->field_0x1a = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1a) & 0x20 ^ bVar11;
  this->field_0x1a = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1a) & 0x40 ^ bVar11;
  this->field_0x1a = bVar11;
  this->field_0x1a = (bVar11 ^ param_1->field_0x1a) & 0x7f ^ param_1->field_0x1a;
  bVar11 = (this->bOverride_DepthOfFieldSqueezeFactor ^ param_1->bOverride_DepthOfFieldSqueezeFactor
           ) & 1 ^ this->field_0x1b;
  this->field_0x1b = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1b) & 2 ^ bVar11;
  this->field_0x1b = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1b) & 4 ^ bVar11;
  this->field_0x1b = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1b) & 8 ^ bVar11;
  this->field_0x1b = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1b) & 0x10 ^ bVar11;
  this->field_0x1b = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1b) & 0x20 ^ bVar11;
  this->field_0x1b = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1b) & 0x40 ^ bVar11;
  this->field_0x1b = bVar11;
  this->field_0x1b = (bVar11 ^ param_1->field_0x1b) & 0x7f ^ param_1->field_0x1b;
  bVar11 = (this->bOverride_DepthOfFieldMatteBoxFlags ^ param_1->bOverride_DepthOfFieldMatteBoxFlags
           ) & 1 ^ this->field_0x1c;
  this->field_0x1c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1c) & 2 ^ bVar11;
  this->field_0x1c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1c) & 4 ^ bVar11;
  this->field_0x1c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1c) & 8 ^ bVar11;
  this->field_0x1c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1c) & 0x10 ^ bVar11;
  this->field_0x1c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1c) & 0x20 ^ bVar11;
  this->field_0x1c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1c) & 0x40 ^ bVar11;
  this->field_0x1c = bVar11;
  this->field_0x1c = (bVar11 ^ param_1->field_0x1c) & 0x7f ^ param_1->field_0x1c;
  bVar11 = (this->bOverride_DepthOfFieldNearBlurSize ^ param_1->bOverride_DepthOfFieldNearBlurSize)
           & 1 ^ this->field_0x1d;
  this->field_0x1d = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1d) & 2 ^ bVar11;
  this->field_0x1d = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1d) & 4 ^ bVar11;
  this->field_0x1d = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1d) & 8 ^ bVar11;
  this->field_0x1d = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1d) & 0x10 ^ bVar11;
  this->field_0x1d = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1d) & 0x20 ^ bVar11;
  this->field_0x1d = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1d) & 0x40 ^ bVar11;
  this->field_0x1d = bVar11;
  this->field_0x1d = (bVar11 ^ param_1->field_0x1d) & 0x7f ^ param_1->field_0x1d;
  bVar11 = (this->bOverride_MotionBlurTargetFPS ^ param_1->bOverride_MotionBlurTargetFPS) & 1 ^
           this->field_0x1e;
  this->field_0x1e = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1e) & 2 ^ bVar11;
  this->field_0x1e = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1e) & 4 ^ bVar11;
  this->field_0x1e = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1e) & 8 ^ bVar11;
  this->field_0x1e = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1e) & 0x10 ^ bVar11;
  this->field_0x1e = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1e) & 0x20 ^ bVar11;
  this->field_0x1e = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x1e) & 0x40 ^ bVar11;
  this->field_0x1e = bVar11;
  this->field_0x1e = (bVar11 ^ param_1->field_0x1e) & 0x7f ^ param_1->field_0x1e;
  bVar11 = (this->bOverride_ScreenSpaceReflectionRoughnessScale ^
           param_1->bOverride_ScreenSpaceReflectionRoughnessScale) & 1 ^ this->field_0x1f;
  this->field_0x1f = bVar11;
  this->field_0x1f = (bVar11 ^ param_1->field_0x1f) & 2 ^ bVar11;
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
  bVar11 = (this->bOverride_LumenRayLightingMode ^ param_1->bOverride_LumenRayLightingMode) & 1 ^
           this->field_0x24;
  this->field_0x24 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x24) & 2 ^ bVar11;
  this->field_0x24 = bVar11;
  this->field_0x24 = (bVar11 ^ param_1->field_0x24) & 4 ^ bVar11;
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
  dVar5 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
  (this->ColorSaturation).field0_0x0._s_0.X = (param_1->ColorSaturation).field0_0x0._s_0.X;
  (this->ColorSaturation).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorSaturation).field0_0x0._s_0.W;
  (this->ColorSaturation).field0_0x0._s_0.Z = (param_1->ColorSaturation).field0_0x0._s_0.Z;
  (this->ColorSaturation).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorContrast).field0_0x0._s_0.Y;
  (this->ColorContrast).field0_0x0._s_0.X = (param_1->ColorContrast).field0_0x0._s_0.X;
  (this->ColorContrast).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorContrast).field0_0x0._s_0.W;
  (this->ColorContrast).field0_0x0._s_0.Z = (param_1->ColorContrast).field0_0x0._s_0.Z;
  (this->ColorContrast).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorGamma).field0_0x0._s_0.Y;
  (this->ColorGamma).field0_0x0._s_0.X = (param_1->ColorGamma).field0_0x0._s_0.X;
  (this->ColorGamma).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorGamma).field0_0x0._s_0.W;
  (this->ColorGamma).field0_0x0._s_0.Z = (param_1->ColorGamma).field0_0x0._s_0.Z;
  (this->ColorGamma).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorGain).field0_0x0._s_0.Y;
  (this->ColorGain).field0_0x0._s_0.X = (param_1->ColorGain).field0_0x0._s_0.X;
  (this->ColorGain).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorGain).field0_0x0._s_0.W;
  (this->ColorGain).field0_0x0._s_0.Z = (param_1->ColorGain).field0_0x0._s_0.Z;
  (this->ColorGain).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorOffset).field0_0x0._s_0.Y;
  (this->ColorOffset).field0_0x0._s_0.X = (param_1->ColorOffset).field0_0x0._s_0.X;
  (this->ColorOffset).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorOffset).field0_0x0._s_0.W;
  (this->ColorOffset).field0_0x0._s_0.Z = (param_1->ColorOffset).field0_0x0._s_0.Z;
  (this->ColorOffset).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
  (this->ColorSaturationShadows).field0_0x0._s_0.X =
       (param_1->ColorSaturationShadows).field0_0x0._s_0.X;
  (this->ColorSaturationShadows).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
  (this->ColorSaturationShadows).field0_0x0._s_0.Z =
       (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
  (this->ColorSaturationShadows).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
  (this->ColorContrastShadows).field0_0x0._s_0.X = (param_1->ColorContrastShadows).field0_0x0._s_0.X
  ;
  (this->ColorContrastShadows).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
  (this->ColorContrastShadows).field0_0x0._s_0.Z = (param_1->ColorContrastShadows).field0_0x0._s_0.Z
  ;
  (this->ColorContrastShadows).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
  (this->ColorGammaShadows).field0_0x0._s_0.X = (param_1->ColorGammaShadows).field0_0x0._s_0.X;
  (this->ColorGammaShadows).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
  (this->ColorGammaShadows).field0_0x0._s_0.Z = (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
  (this->ColorGammaShadows).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
  (this->ColorGainShadows).field0_0x0._s_0.X = (param_1->ColorGainShadows).field0_0x0._s_0.X;
  (this->ColorGainShadows).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
  (this->ColorGainShadows).field0_0x0._s_0.Z = (param_1->ColorGainShadows).field0_0x0._s_0.Z;
  (this->ColorGainShadows).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
  (this->ColorOffsetShadows).field0_0x0._s_0.X = (param_1->ColorOffsetShadows).field0_0x0._s_0.X;
  (this->ColorOffsetShadows).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
  (this->ColorOffsetShadows).field0_0x0._s_0.Z = (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
  (this->ColorOffsetShadows).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
  (this->ColorSaturationMidtones).field0_0x0._s_0.X =
       (param_1->ColorSaturationMidtones).field0_0x0._s_0.X;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Z =
       (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
  (this->ColorSaturationMidtones).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
  (this->ColorContrastMidtones).field0_0x0._s_0.X =
       (param_1->ColorContrastMidtones).field0_0x0._s_0.X;
  (this->ColorContrastMidtones).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
  (this->ColorContrastMidtones).field0_0x0._s_0.Z =
       (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
  (this->ColorContrastMidtones).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
  (this->ColorGammaMidtones).field0_0x0._s_0.X = (param_1->ColorGammaMidtones).field0_0x0._s_0.X;
  (this->ColorGammaMidtones).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
  (this->ColorGammaMidtones).field0_0x0._s_0.Z = (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
  (this->ColorGammaMidtones).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
  (this->ColorGainMidtones).field0_0x0._s_0.X = (param_1->ColorGainMidtones).field0_0x0._s_0.X;
  (this->ColorGainMidtones).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
  (this->ColorGainMidtones).field0_0x0._s_0.Z = (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
  (this->ColorGainMidtones).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
  (this->ColorOffsetMidtones).field0_0x0._s_0.X = (param_1->ColorOffsetMidtones).field0_0x0._s_0.X;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Z = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
  (this->ColorOffsetMidtones).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
  (this->ColorSaturationHighlights).field0_0x0._s_0.X =
       (param_1->ColorSaturationHighlights).field0_0x0._s_0.X;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Z =
       (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
  (this->ColorSaturationHighlights).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
  (this->ColorContrastHighlights).field0_0x0._s_0.X =
       (param_1->ColorContrastHighlights).field0_0x0._s_0.X;
  (this->ColorContrastHighlights).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
  (this->ColorContrastHighlights).field0_0x0._s_0.Z =
       (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
  (this->ColorContrastHighlights).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
  (this->ColorGammaHighlights).field0_0x0._s_0.X = (param_1->ColorGammaHighlights).field0_0x0._s_0.X
  ;
  (this->ColorGammaHighlights).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
  (this->ColorGammaHighlights).field0_0x0._s_0.Z = (param_1->ColorGammaHighlights).field0_0x0._s_0.Z
  ;
  (this->ColorGammaHighlights).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
  (this->ColorGainHighlights).field0_0x0._s_0.X = (param_1->ColorGainHighlights).field0_0x0._s_0.X;
  (this->ColorGainHighlights).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
  (this->ColorGainHighlights).field0_0x0._s_0.Z = (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
  (this->ColorGainHighlights).field0_0x0._s_0.W = dVar5;
  dVar5 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
  (this->ColorOffsetHighlights).field0_0x0._s_0.X =
       (param_1->ColorOffsetHighlights).field0_0x0._s_0.X;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Z =
       (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
  (this->ColorOffsetHighlights).field0_0x0._s_0.W = dVar5;
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
  uVar6 = *(undefined8 *)((longlong)&(param_1->SceneColorTint).field0_0x0 + 8);
  *(undefined8 *)&(this->SceneColorTint).field0_0x0 =
       *(undefined8 *)&(param_1->SceneColorTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneColorTint).field0_0x0 + 8) = uVar6;
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
  uVar6 = *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom1Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom1Tint).field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom2Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom2Tint).field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom3Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom3Tint).field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom4Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom4Tint).field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom5Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom5Tint).field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom6Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom6Tint).field0_0x0 + 8) = uVar6;
  this->BloomConvolutionIntensity = param_1->BloomConvolutionIntensity;
  this->BloomConvolutionScatterDispersion = param_1->BloomConvolutionScatterDispersion;
  this->BloomConvolutionSize = param_1->BloomConvolutionSize;
  pUVar1 = (param_1->BloomConvolutionTexture).field0_0x0.DebugPtr;
  (this->BloomConvolutionTexture).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  dVar5 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.X =
       (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.Y = dVar5;
  this->BloomConvolutionPreFilterMin = param_1->BloomConvolutionPreFilterMin;
  this->BloomConvolutionPreFilterMax = param_1->BloomConvolutionPreFilterMax;
  this->BloomConvolutionPreFilterMult = param_1->BloomConvolutionPreFilterMult;
  this->BloomConvolutionBufferScale = param_1->BloomConvolutionBufferScale;
  pUVar2 = (param_1->BloomDirtMask).field0_0x0.DebugPtr;
  (this->BloomDirtMask).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->BloomDirtMaskIntensity = param_1->BloomDirtMaskIntensity;
  uVar6 = *(undefined8 *)((longlong)&(param_1->BloomDirtMaskTint).field0_0x0 + 8);
  *(undefined8 *)&(this->BloomDirtMaskTint).field0_0x0 =
       *(undefined8 *)&(param_1->BloomDirtMaskTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->BloomDirtMaskTint).field0_0x0 + 8) = uVar6;
  (this->DynamicGlobalIlluminationMethod).Value = (param_1->DynamicGlobalIlluminationMethod).Value;
  uVar6 = *(undefined8 *)((longlong)&(param_1->IndirectLightingColor).field0_0x0 + 8);
  *(undefined8 *)&(this->IndirectLightingColor).field0_0x0 =
       *(undefined8 *)&(param_1->IndirectLightingColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->IndirectLightingColor).field0_0x0 + 8) = uVar6;
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
  uVar6 = *(undefined8 *)((longlong)&(param_1->LumenSkylightLeakingTint).field0_0x0 + 8);
  *(undefined8 *)&(this->LumenSkylightLeakingTint).field0_0x0 =
       *(undefined8 *)&(param_1->LumenSkylightLeakingTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->LumenSkylightLeakingTint).field0_0x0 + 8) = uVar6;
  this->LumenFullSkylightLeakingDistance = param_1->LumenFullSkylightLeakingDistance;
  this->LumenSurfaceCacheResolution = param_1->LumenSurfaceCacheResolution;
  (this->ReflectionMethod).Value = (param_1->ReflectionMethod).Value;
  this->ReflectionsType_DEPRECATED = param_1->ReflectionsType_DEPRECATED;
  this->LumenReflectionQuality = param_1->LumenReflectionQuality;
  bVar11 = (this->LumenReflectionsScreenTraces ^ param_1->LumenReflectionsScreenTraces) & 1 ^
           this->field_0x440;
  this->field_0x440 = bVar11;
  this->field_0x440 = (bVar11 ^ param_1->field_0x440) & 2 ^ bVar11;
  this->LumenMaxRoughnessToTraceReflections = param_1->LumenMaxRoughnessToTraceReflections;
  this->LumenMaxReflectionBounces = param_1->LumenMaxReflectionBounces;
  this->LumenMaxRefractionBounces = param_1->LumenMaxRefractionBounces;
  this->ScreenSpaceReflectionIntensity = param_1->ScreenSpaceReflectionIntensity;
  this->ScreenSpaceReflectionQuality = param_1->ScreenSpaceReflectionQuality;
  this->ScreenSpaceReflectionMaxRoughness = param_1->ScreenSpaceReflectionMaxRoughness;
  this->field_0x45c = (this->bMegaLights ^ param_1->bMegaLights) & 1 ^ this->field_0x45c;
  uVar6 = *(undefined8 *)((longlong)&(param_1->AmbientCubemapTint).field0_0x0 + 8);
  *(undefined8 *)&(this->AmbientCubemapTint).field0_0x0 =
       *(undefined8 *)&(param_1->AmbientCubemapTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->AmbientCubemapTint).field0_0x0 + 8) = uVar6;
  this->AmbientCubemapIntensity = param_1->AmbientCubemapIntensity;
  pUVar3 = (param_1->AmbientCubemap).field0_0x0.DebugPtr;
  (this->AmbientCubemap).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UTextureCube *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
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
  pUVar4 = (param_1->AutoExposureBiasCurve).field0_0x0.DebugPtr;
  (this->AutoExposureBiasCurve).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar2 = (param_1->AutoExposureMeterMask).field0_0x0.DebugPtr;
  (this->AutoExposureMeterMask).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
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
  pUVar4 = (param_1->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr;
  (this->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar4 = (param_1->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr;
  (this->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
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
  uVar6 = *(undefined8 *)((longlong)&(param_1->LensFlareTint).field0_0x0 + 8);
  *(undefined8 *)&(this->LensFlareTint).field0_0x0 =
       *(undefined8 *)&(param_1->LensFlareTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->LensFlareTint).field0_0x0 + 8) = uVar6;
  this->LensFlareBokehSize = param_1->LensFlareBokehSize;
  this->LensFlareThreshold = param_1->LensFlareThreshold;
  pUVar2 = (param_1->LensFlareBokehShape).field0_0x0.DebugPtr;
  (this->LensFlareBokehShape).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  uVar6 = *(undefined8 *)((longlong)&param_1->LensFlareTints[0].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[0].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[0].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[0].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->LensFlareTints[1].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[1].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[1].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[1].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->LensFlareTints[2].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[2].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[2].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[2].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->LensFlareTints[3].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[3].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[3].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[3].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->LensFlareTints[4].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[4].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[4].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[4].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->LensFlareTints[5].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[5].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[5].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[5].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->LensFlareTints[6].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[6].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[6].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[6].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&param_1->LensFlareTints[7].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[7].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[7].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[7].field0_0x0 + 8) = uVar6;
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
  pUVar1 = (param_1->FilmGrainTexture).field0_0x0.DebugPtr;
  (this->FilmGrainTexture).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
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
  pUVar2 = (param_1->ColorGradingLUT).field0_0x0.DebugPtr;
  (this->ColorGradingLUT).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
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
  fVar7 = param_1->DepthOfFieldMatteBoxFlags[0].Roll;
  uVar6 = *(undefined8 *)&param_1->DepthOfFieldMatteBoxFlags[0].Length;
  this->DepthOfFieldMatteBoxFlags[0].Pitch = param_1->DepthOfFieldMatteBoxFlags[0].Pitch;
  this->DepthOfFieldMatteBoxFlags[0].Roll = fVar7;
  *(undefined8 *)&this->DepthOfFieldMatteBoxFlags[0].Length = uVar6;
  fVar7 = param_1->DepthOfFieldMatteBoxFlags[1].Length;
  fVar8 = param_1->DepthOfFieldMatteBoxFlags[2].Pitch;
  fVar9 = param_1->DepthOfFieldMatteBoxFlags[2].Roll;
  this->DepthOfFieldMatteBoxFlags[1].Roll = param_1->DepthOfFieldMatteBoxFlags[1].Roll;
  this->DepthOfFieldMatteBoxFlags[1].Length = fVar7;
  this->DepthOfFieldMatteBoxFlags[2].Pitch = fVar8;
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
  bVar11 = (this->RayTracingTranslucencyRefraction ^ param_1->RayTracingTranslucencyRefraction) & 1
           ^ this->field_0x735;
  this->field_0x735 = bVar11;
  this->field_0x735 = (bVar11 ^ param_1->field_0x735) & 2 ^ bVar11;
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
  this->UserFlags = param_1->UserFlags;
  (this->WeightedBlendables).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightedBlendables).Array.AllocatorInstance.Data =
       (param_1->WeightedBlendables).Array.AllocatorInstance.Data;
  (param_1->WeightedBlendables).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightedBlendables).Array.ArrayNum = (param_1->WeightedBlendables).Array.ArrayNum;
  (this->WeightedBlendables).Array.ArrayMax = (param_1->WeightedBlendables).Array.ArrayMax;
  (param_1->WeightedBlendables).Array.ArrayNum = 0;
  (param_1->WeightedBlendables).Array.ArrayMax = 0;
  return this;
}

// FPostProcessSettings @ 1453fbd80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettings * __thiscall
FPostProcessSettings::FPostProcessSettings(FPostProcessSettings *this,FPostProcessSettings *param_1)

{
  int *piVar1;
  FWeightedBlendables *pFVar2;
  int iVar3;
  UTexture2D *pUVar4;
  UTexture *pUVar5;
  UTextureCube *pUVar6;
  UCurveFloat *pUVar7;
  FWeightedBlendable *pFVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  byte bVar15;
  
  bVar15 = (this->bOverride_TemperatureType ^ param_1->bOverride_TemperatureType) & 1 ^
           *(byte *)this;
  *(byte *)this = bVar15;
  bVar15 = (bVar15 ^ *(byte *)param_1) & 2 ^ bVar15;
  *(byte *)this = bVar15;
  bVar15 = (bVar15 ^ *(byte *)param_1) & 4 ^ bVar15;
  *(byte *)this = bVar15;
  bVar15 = (bVar15 ^ *(byte *)param_1) & 8 ^ bVar15;
  *(byte *)this = bVar15;
  bVar15 = (bVar15 ^ *(byte *)param_1) & 0x10 ^ bVar15;
  *(byte *)this = bVar15;
  bVar15 = (bVar15 ^ *(byte *)param_1) & 0x20 ^ bVar15;
  *(byte *)this = bVar15;
  bVar15 = (bVar15 ^ *(byte *)param_1) & 0x40 ^ bVar15;
  *(byte *)this = bVar15;
  *(byte *)this = (bVar15 ^ *(byte *)param_1) & 0x7f ^ *(byte *)param_1;
  bVar15 = (this->bOverride_ColorSaturationShadows ^ param_1->bOverride_ColorSaturationShadows) & 1
           ^ this->field_0x1;
  this->field_0x1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1) & 2 ^ bVar15;
  this->field_0x1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1) & 4 ^ bVar15;
  this->field_0x1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1) & 8 ^ bVar15;
  this->field_0x1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1) & 0x10 ^ bVar15;
  this->field_0x1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1) & 0x20 ^ bVar15;
  this->field_0x1 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1) & 0x40 ^ bVar15;
  this->field_0x1 = bVar15;
  this->field_0x1 = (bVar15 ^ param_1->field_0x1) & 0x7f ^ param_1->field_0x1;
  bVar15 = (this->bOverride_ColorGainMidtones ^ param_1->bOverride_ColorGainMidtones) & 1 ^
           this->field_0x2;
  this->field_0x2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x2) & 2 ^ bVar15;
  this->field_0x2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x2) & 4 ^ bVar15;
  this->field_0x2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x2) & 8 ^ bVar15;
  this->field_0x2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x2) & 0x10 ^ bVar15;
  this->field_0x2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x2) & 0x20 ^ bVar15;
  this->field_0x2 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x2) & 0x40 ^ bVar15;
  this->field_0x2 = bVar15;
  this->field_0x2 = (bVar15 ^ param_1->field_0x2) & 0x7f ^ param_1->field_0x2;
  bVar15 = (this->bOverride_ColorCorrectionHighlightsMin ^
           param_1->bOverride_ColorCorrectionHighlightsMin) & 1 ^ this->field_0x3;
  this->field_0x3 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x3) & 2 ^ bVar15;
  this->field_0x3 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x3) & 4 ^ bVar15;
  this->field_0x3 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x3) & 8 ^ bVar15;
  this->field_0x3 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x3) & 0x10 ^ bVar15;
  this->field_0x3 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x3) & 0x20 ^ bVar15;
  this->field_0x3 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x3) & 0x40 ^ bVar15;
  this->field_0x3 = bVar15;
  this->field_0x3 = (bVar15 ^ param_1->field_0x3) & 0x7f ^ param_1->field_0x3;
  bVar15 = (this->bOverride_FilmBlackClip ^ param_1->bOverride_FilmBlackClip) & 1 ^ this->field_0x4;
  this->field_0x4 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x4) & 2 ^ bVar15;
  this->field_0x4 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x4) & 4 ^ bVar15;
  this->field_0x4 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x4) & 8 ^ bVar15;
  this->field_0x4 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x4) & 0x10 ^ bVar15;
  this->field_0x4 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x4) & 0x20 ^ bVar15;
  this->field_0x4 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x4) & 0x40 ^ bVar15;
  this->field_0x4 = bVar15;
  this->field_0x4 = (bVar15 ^ param_1->field_0x4) & 0x7f ^ param_1->field_0x4;
  bVar15 = (this->bOverride_BloomMethod ^ param_1->bOverride_BloomMethod) & 1 ^ this->field_0x5;
  this->field_0x5 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x5) & 2 ^ bVar15;
  this->field_0x5 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x5) & 4 ^ bVar15;
  this->field_0x5 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x5) & 8 ^ bVar15;
  this->field_0x5 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x5) & 0x10 ^ bVar15;
  this->field_0x5 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x5) & 0x20 ^ bVar15;
  this->field_0x5 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x5) & 0x40 ^ bVar15;
  this->field_0x5 = bVar15;
  this->field_0x5 = (bVar15 ^ param_1->field_0x5) & 0x7f ^ param_1->field_0x5;
  bVar15 = (this->bOverride_Bloom3Tint ^ param_1->bOverride_Bloom3Tint) & 1 ^ this->field_0x6;
  this->field_0x6 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x6) & 2 ^ bVar15;
  this->field_0x6 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x6) & 4 ^ bVar15;
  this->field_0x6 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x6) & 8 ^ bVar15;
  this->field_0x6 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x6) & 0x10 ^ bVar15;
  this->field_0x6 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x6) & 0x20 ^ bVar15;
  this->field_0x6 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x6) & 0x40 ^ bVar15;
  this->field_0x6 = bVar15;
  this->field_0x6 = (bVar15 ^ param_1->field_0x6) & 0x7f ^ param_1->field_0x6;
  bVar15 = (this->bOverride_BloomSizeScale ^ param_1->bOverride_BloomSizeScale) & 1 ^
           this->field_0x7;
  this->field_0x7 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x7) & 2 ^ bVar15;
  this->field_0x7 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x7) & 4 ^ bVar15;
  this->field_0x7 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x7) & 8 ^ bVar15;
  this->field_0x7 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x7) & 0x10 ^ bVar15;
  this->field_0x7 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x7) & 0x20 ^ bVar15;
  this->field_0x7 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x7) & 0x40 ^ bVar15;
  this->field_0x7 = bVar15;
  this->field_0x7 = (bVar15 ^ param_1->field_0x7) & 0x7f ^ param_1->field_0x7;
  bVar15 = (this->bOverride_BloomConvolutionPreFilterMax ^
           param_1->bOverride_BloomConvolutionPreFilterMax) & 1 ^ this->field_0x8;
  this->field_0x8 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x8) & 2 ^ bVar15;
  this->field_0x8 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x8) & 4 ^ bVar15;
  this->field_0x8 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x8) & 8 ^ bVar15;
  this->field_0x8 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x8) & 0x10 ^ bVar15;
  this->field_0x8 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x8) & 0x20 ^ bVar15;
  this->field_0x8 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x8) & 0x40 ^ bVar15;
  this->field_0x8 = bVar15;
  this->field_0x8 = (bVar15 ^ param_1->field_0x8) & 0x7f ^ param_1->field_0x8;
  bVar15 = (this->bOverride_AutoExposureMethod ^ param_1->bOverride_AutoExposureMethod) & 1 ^
           this->field_0x9;
  this->field_0x9 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x9) & 2 ^ bVar15;
  this->field_0x9 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x9) & 4 ^ bVar15;
  this->field_0x9 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x9) & 8 ^ bVar15;
  this->field_0x9 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x9) & 0x10 ^ bVar15;
  this->field_0x9 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x9) & 0x20 ^ bVar15;
  this->field_0x9 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x9) & 0x40 ^ bVar15;
  this->field_0x9 = bVar15;
  this->field_0x9 = (bVar15 ^ param_1->field_0x9) & 0x7f ^ param_1->field_0x9;
  bVar15 = (this->bOverride_AutoExposureBias ^ param_1->bOverride_AutoExposureBias) & 1 ^
           this->field_0xa;
  this->field_0xa = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xa) & 2 ^ bVar15;
  this->field_0xa = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xa) & 4 ^ bVar15;
  this->field_0xa = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xa) & 8 ^ bVar15;
  this->field_0xa = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xa) & 0x10 ^ bVar15;
  this->field_0xa = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xa) & 0x20 ^ bVar15;
  this->field_0xa = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xa) & 0x40 ^ bVar15;
  this->field_0xa = bVar15;
  this->field_0xa = (param_1->field_0xa ^ bVar15) & 0x7f ^ param_1->field_0xa;
  bVar15 = (this->bOverride_LocalExposureHighlightContrastScale ^
           param_1->bOverride_LocalExposureHighlightContrastScale) & 1 ^ this->field_0xb;
  this->field_0xb = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xb) & 2 ^ bVar15;
  this->field_0xb = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xb) & 4 ^ bVar15;
  this->field_0xb = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xb) & 8 ^ bVar15;
  this->field_0xb = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xb) & 0x10 ^ bVar15;
  this->field_0xb = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xb) & 0x20 ^ bVar15;
  this->field_0xb = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xb) & 0x40 ^ bVar15;
  this->field_0xb = bVar15;
  this->field_0xb = (bVar15 ^ param_1->field_0xb) & 0x7f ^ param_1->field_0xb;
  bVar15 = (this->bOverride_LocalExposureBlurredLuminanceKernelSizePercent ^
           param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent) & 1 ^ this->field_0xc;
  this->field_0xc = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc) & 2 ^ bVar15;
  this->field_0xc = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc) & 4 ^ bVar15;
  this->field_0xc = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc) & 8 ^ bVar15;
  this->field_0xc = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc) & 0x10 ^ bVar15;
  this->field_0xc = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc) & 0x20 ^ bVar15;
  this->field_0xc = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xc) & 0x40 ^ bVar15;
  this->field_0xc = bVar15;
  this->field_0xc = (bVar15 ^ param_1->field_0xc) & 0x7f ^ param_1->field_0xc;
  bVar15 = (this->bOverride_LensFlareBokehShape ^ param_1->bOverride_LensFlareBokehShape) & 1 ^
           this->field_0xd;
  this->field_0xd = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xd) & 2 ^ bVar15;
  this->field_0xd = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xd) & 4 ^ bVar15;
  this->field_0xd = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xd) & 8 ^ bVar15;
  this->field_0xd = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xd) & 0x10 ^ bVar15;
  this->field_0xd = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xd) & 0x20 ^ bVar15;
  this->field_0xd = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xd) & 0x40 ^ bVar15;
  this->field_0xd = bVar15;
  this->field_0xd = (bVar15 ^ param_1->field_0xd) & 0x7f ^ param_1->field_0xd;
  bVar15 = (this->bOverride_FilmGrainIntensityMidtones ^
           param_1->bOverride_FilmGrainIntensityMidtones) & 1 ^ this->field_0xe;
  this->field_0xe = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xe) & 2 ^ bVar15;
  this->field_0xe = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xe) & 4 ^ bVar15;
  this->field_0xe = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xe) & 8 ^ bVar15;
  this->field_0xe = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xe) & 0x10 ^ bVar15;
  this->field_0xe = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xe) & 0x20 ^ bVar15;
  this->field_0xe = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xe) & 0x40 ^ bVar15;
  this->field_0xe = bVar15;
  this->field_0xe = (bVar15 ^ param_1->field_0xe) & 0x7f ^ param_1->field_0xe;
  bVar15 = (this->bOverride_AmbientOcclusionStaticFraction ^
           param_1->bOverride_AmbientOcclusionStaticFraction) & 1 ^ this->field_0xf;
  this->field_0xf = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xf) & 2 ^ bVar15;
  this->field_0xf = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xf) & 4 ^ bVar15;
  this->field_0xf = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xf) & 8 ^ bVar15;
  this->field_0xf = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xf) & 0x10 ^ bVar15;
  this->field_0xf = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xf) & 0x20 ^ bVar15;
  this->field_0xf = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0xf) & 0x40 ^ bVar15;
  this->field_0xf = bVar15;
  this->field_0xf = (bVar15 ^ param_1->field_0xf) & 0x7f ^ param_1->field_0xf;
  bVar15 = (this->bOverride_AmbientOcclusionQuality ^ param_1->bOverride_AmbientOcclusionQuality) &
           1 ^ this->field_0x10;
  this->field_0x10 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x10) & 2 ^ bVar15;
  this->field_0x10 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x10) & 4 ^ bVar15;
  this->field_0x10 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x10) & 8 ^ bVar15;
  this->field_0x10 = bVar15;
  this->field_0x10 = (bVar15 ^ param_1->field_0x10) & 0x10 ^ bVar15;
  uVar14 = (this->bOverride_RayTracingAO ^ param_1->bOverride_RayTracingAO) & 1 ^
           *(uint *)&this->field_0x14;
  *(uint *)&this->field_0x14 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x14) & 2 ^ uVar14;
  *(uint *)&this->field_0x14 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x14) & 4 ^ uVar14;
  *(uint *)&this->field_0x14 = uVar14;
  *(uint *)&this->field_0x14 = (uVar14 ^ *(uint *)&param_1->field_0x14) & 8 ^ uVar14;
  bVar15 = (this->bOverride_LPVIntensity_DEPRECATED ^ param_1->bOverride_LPVIntensity_DEPRECATED) &
           1 ^ this->field_0x18;
  this->field_0x18 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x18) & 2 ^ bVar15;
  this->field_0x18 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x18) & 4 ^ bVar15;
  this->field_0x18 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x18) & 8 ^ bVar15;
  this->field_0x18 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x18) & 0x10 ^ bVar15;
  this->field_0x18 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x18) & 0x20 ^ bVar15;
  this->field_0x18 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x18) & 0x40 ^ bVar15;
  this->field_0x18 = bVar15;
  this->field_0x18 = (param_1->field_0x18 ^ bVar15) & 0x7f ^ param_1->field_0x18;
  bVar15 = (this->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED ^
           param_1->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED) & 1 ^ this->field_0x19;
  this->field_0x19 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x19) & 2 ^ bVar15;
  this->field_0x19 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x19) & 4 ^ bVar15;
  this->field_0x19 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x19) & 8 ^ bVar15;
  this->field_0x19 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x19) & 0x10 ^ bVar15;
  this->field_0x19 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x19) & 0x20 ^ bVar15;
  this->field_0x19 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x19) & 0x40 ^ bVar15;
  this->field_0x19 = bVar15;
  this->field_0x19 = (bVar15 ^ param_1->field_0x19) & 0x7f ^ param_1->field_0x19;
  bVar15 = (this->bOverride_IndirectLightingIntensity ^ param_1->bOverride_IndirectLightingIntensity
           ) & 1 ^ this->field_0x1a;
  this->field_0x1a = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1a) & 2 ^ bVar15;
  this->field_0x1a = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1a) & 4 ^ bVar15;
  this->field_0x1a = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1a) & 8 ^ bVar15;
  this->field_0x1a = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1a) & 0x10 ^ bVar15;
  this->field_0x1a = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1a) & 0x20 ^ bVar15;
  this->field_0x1a = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1a) & 0x40 ^ bVar15;
  this->field_0x1a = bVar15;
  this->field_0x1a = (bVar15 ^ param_1->field_0x1a) & 0x7f ^ param_1->field_0x1a;
  bVar15 = (this->bOverride_DepthOfFieldSqueezeFactor ^ param_1->bOverride_DepthOfFieldSqueezeFactor
           ) & 1 ^ this->field_0x1b;
  this->field_0x1b = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1b) & 2 ^ bVar15;
  this->field_0x1b = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1b) & 4 ^ bVar15;
  this->field_0x1b = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1b) & 8 ^ bVar15;
  this->field_0x1b = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1b) & 0x10 ^ bVar15;
  this->field_0x1b = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1b) & 0x20 ^ bVar15;
  this->field_0x1b = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1b) & 0x40 ^ bVar15;
  this->field_0x1b = bVar15;
  this->field_0x1b = (bVar15 ^ param_1->field_0x1b) & 0x7f ^ param_1->field_0x1b;
  bVar15 = (this->bOverride_DepthOfFieldMatteBoxFlags ^ param_1->bOverride_DepthOfFieldMatteBoxFlags
           ) & 1 ^ this->field_0x1c;
  this->field_0x1c = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1c) & 2 ^ bVar15;
  this->field_0x1c = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1c) & 4 ^ bVar15;
  this->field_0x1c = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1c) & 8 ^ bVar15;
  this->field_0x1c = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1c) & 0x10 ^ bVar15;
  this->field_0x1c = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1c) & 0x20 ^ bVar15;
  this->field_0x1c = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1c) & 0x40 ^ bVar15;
  this->field_0x1c = bVar15;
  this->field_0x1c = (bVar15 ^ param_1->field_0x1c) & 0x7f ^ param_1->field_0x1c;
  bVar15 = (this->bOverride_DepthOfFieldNearBlurSize ^ param_1->bOverride_DepthOfFieldNearBlurSize)
           & 1 ^ this->field_0x1d;
  this->field_0x1d = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1d) & 2 ^ bVar15;
  this->field_0x1d = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1d) & 4 ^ bVar15;
  this->field_0x1d = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1d) & 8 ^ bVar15;
  this->field_0x1d = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1d) & 0x10 ^ bVar15;
  this->field_0x1d = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1d) & 0x20 ^ bVar15;
  this->field_0x1d = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1d) & 0x40 ^ bVar15;
  this->field_0x1d = bVar15;
  this->field_0x1d = (bVar15 ^ param_1->field_0x1d) & 0x7f ^ param_1->field_0x1d;
  bVar15 = (this->bOverride_MotionBlurTargetFPS ^ param_1->bOverride_MotionBlurTargetFPS) & 1 ^
           this->field_0x1e;
  this->field_0x1e = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1e) & 2 ^ bVar15;
  this->field_0x1e = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1e) & 4 ^ bVar15;
  this->field_0x1e = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1e) & 8 ^ bVar15;
  this->field_0x1e = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1e) & 0x10 ^ bVar15;
  this->field_0x1e = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1e) & 0x20 ^ bVar15;
  this->field_0x1e = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x1e) & 0x40 ^ bVar15;
  this->field_0x1e = bVar15;
  this->field_0x1e = (bVar15 ^ param_1->field_0x1e) & 0x7f ^ param_1->field_0x1e;
  bVar15 = (this->bOverride_ScreenSpaceReflectionRoughnessScale ^
           param_1->bOverride_ScreenSpaceReflectionRoughnessScale) & 1 ^ this->field_0x1f;
  this->field_0x1f = bVar15;
  this->field_0x1f = (bVar15 ^ param_1->field_0x1f) & 2 ^ bVar15;
  uVar14 = (this->bOverride_ReflectionsType_DEPRECATED ^
           param_1->bOverride_ReflectionsType_DEPRECATED) & 1 ^ *(uint *)&this->field_0x20;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 2 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 4 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 8 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x10 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x20 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x40 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x80 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x100 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x200 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x400 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x800 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x1000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x2000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x4000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x8000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x10000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x20000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x40000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x80000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x100000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x200000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x400000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x800000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x1000000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x2000000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x4000000 ^ uVar14;
  *(uint *)&this->field_0x20 = uVar14;
  *(uint *)&this->field_0x20 = (uVar14 ^ *(uint *)&param_1->field_0x20) & 0x8000000 ^ uVar14;
  bVar15 = (this->bOverride_LumenRayLightingMode ^ param_1->bOverride_LumenRayLightingMode) & 1 ^
           this->field_0x24;
  this->field_0x24 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x24) & 2 ^ bVar15;
  this->field_0x24 = bVar15;
  this->field_0x24 = (bVar15 ^ param_1->field_0x24) & 4 ^ bVar15;
  uVar14 = (this->bOverride_LumenMaxRoughnessToTraceReflections ^
           param_1->bOverride_LumenMaxRoughnessToTraceReflections) & 1 ^ *(uint *)&this->field_0x28;
  *(uint *)&this->field_0x28 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x28) & 2 ^ uVar14;
  *(uint *)&this->field_0x28 = uVar14;
  *(uint *)&this->field_0x28 = (uVar14 ^ *(uint *)&param_1->field_0x28) & 4 ^ uVar14;
  this->field_0x2c =
       this->field_0x2c ^
       (this->bOverride_LumenSurfaceCacheResolution ^ param_1->bOverride_LumenSurfaceCacheResolution
       ) & 1;
  uVar14 = (this->bOverride_RayTracingGI ^ param_1->bOverride_RayTracingGI) & 1 ^
           *(uint *)&this->field_0x30;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 2 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 4 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 8 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x10 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x20 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x40 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x80 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x100 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x200 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x400 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x800 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x1000 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x2000 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x4000 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x8000 ^ uVar14;
  *(uint *)&this->field_0x30 = uVar14;
  *(uint *)&this->field_0x30 = (uVar14 ^ *(uint *)&param_1->field_0x30) & 0x10000 ^ uVar14;
  this->field_0x34 = this->field_0x34 ^ (this->bMobileHQGaussian ^ param_1->bMobileHQGaussian) & 1;
  (this->BloomMethod).Value = (param_1->BloomMethod).Value;
  (this->AutoExposureMethod).Value = (param_1->AutoExposureMethod).Value;
  (this->TemperatureType).Value = (param_1->TemperatureType).Value;
  this->WhiteTemp = param_1->WhiteTemp;
  this->WhiteTint = param_1->WhiteTint;
  dVar9 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
  (this->ColorSaturation).field0_0x0._s_0.X = (param_1->ColorSaturation).field0_0x0._s_0.X;
  (this->ColorSaturation).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorSaturation).field0_0x0._s_0.W;
  (this->ColorSaturation).field0_0x0._s_0.Z = (param_1->ColorSaturation).field0_0x0._s_0.Z;
  (this->ColorSaturation).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorContrast).field0_0x0._s_0.Y;
  (this->ColorContrast).field0_0x0._s_0.X = (param_1->ColorContrast).field0_0x0._s_0.X;
  (this->ColorContrast).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorContrast).field0_0x0._s_0.W;
  (this->ColorContrast).field0_0x0._s_0.Z = (param_1->ColorContrast).field0_0x0._s_0.Z;
  (this->ColorContrast).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorGamma).field0_0x0._s_0.Y;
  (this->ColorGamma).field0_0x0._s_0.X = (param_1->ColorGamma).field0_0x0._s_0.X;
  (this->ColorGamma).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorGamma).field0_0x0._s_0.W;
  (this->ColorGamma).field0_0x0._s_0.Z = (param_1->ColorGamma).field0_0x0._s_0.Z;
  (this->ColorGamma).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorGain).field0_0x0._s_0.Y;
  (this->ColorGain).field0_0x0._s_0.X = (param_1->ColorGain).field0_0x0._s_0.X;
  (this->ColorGain).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorGain).field0_0x0._s_0.W;
  (this->ColorGain).field0_0x0._s_0.Z = (param_1->ColorGain).field0_0x0._s_0.Z;
  (this->ColorGain).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorOffset).field0_0x0._s_0.Y;
  (this->ColorOffset).field0_0x0._s_0.X = (param_1->ColorOffset).field0_0x0._s_0.X;
  (this->ColorOffset).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorOffset).field0_0x0._s_0.W;
  (this->ColorOffset).field0_0x0._s_0.Z = (param_1->ColorOffset).field0_0x0._s_0.Z;
  (this->ColorOffset).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
  (this->ColorSaturationShadows).field0_0x0._s_0.X =
       (param_1->ColorSaturationShadows).field0_0x0._s_0.X;
  (this->ColorSaturationShadows).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
  (this->ColorSaturationShadows).field0_0x0._s_0.Z =
       (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
  (this->ColorSaturationShadows).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
  (this->ColorContrastShadows).field0_0x0._s_0.X = (param_1->ColorContrastShadows).field0_0x0._s_0.X
  ;
  (this->ColorContrastShadows).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
  (this->ColorContrastShadows).field0_0x0._s_0.Z = (param_1->ColorContrastShadows).field0_0x0._s_0.Z
  ;
  (this->ColorContrastShadows).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
  (this->ColorGammaShadows).field0_0x0._s_0.X = (param_1->ColorGammaShadows).field0_0x0._s_0.X;
  (this->ColorGammaShadows).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
  (this->ColorGammaShadows).field0_0x0._s_0.Z = (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
  (this->ColorGammaShadows).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
  (this->ColorGainShadows).field0_0x0._s_0.X = (param_1->ColorGainShadows).field0_0x0._s_0.X;
  (this->ColorGainShadows).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
  (this->ColorGainShadows).field0_0x0._s_0.Z = (param_1->ColorGainShadows).field0_0x0._s_0.Z;
  (this->ColorGainShadows).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
  (this->ColorOffsetShadows).field0_0x0._s_0.X = (param_1->ColorOffsetShadows).field0_0x0._s_0.X;
  (this->ColorOffsetShadows).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
  (this->ColorOffsetShadows).field0_0x0._s_0.Z = (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
  (this->ColorOffsetShadows).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
  (this->ColorSaturationMidtones).field0_0x0._s_0.X =
       (param_1->ColorSaturationMidtones).field0_0x0._s_0.X;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Z =
       (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
  (this->ColorSaturationMidtones).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
  (this->ColorContrastMidtones).field0_0x0._s_0.X =
       (param_1->ColorContrastMidtones).field0_0x0._s_0.X;
  (this->ColorContrastMidtones).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
  (this->ColorContrastMidtones).field0_0x0._s_0.Z =
       (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
  (this->ColorContrastMidtones).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
  (this->ColorGammaMidtones).field0_0x0._s_0.X = (param_1->ColorGammaMidtones).field0_0x0._s_0.X;
  (this->ColorGammaMidtones).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
  (this->ColorGammaMidtones).field0_0x0._s_0.Z = (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
  (this->ColorGammaMidtones).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
  (this->ColorGainMidtones).field0_0x0._s_0.X = (param_1->ColorGainMidtones).field0_0x0._s_0.X;
  (this->ColorGainMidtones).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
  (this->ColorGainMidtones).field0_0x0._s_0.Z = (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
  (this->ColorGainMidtones).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
  (this->ColorOffsetMidtones).field0_0x0._s_0.X = (param_1->ColorOffsetMidtones).field0_0x0._s_0.X;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Z = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
  (this->ColorOffsetMidtones).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
  (this->ColorSaturationHighlights).field0_0x0._s_0.X =
       (param_1->ColorSaturationHighlights).field0_0x0._s_0.X;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Z =
       (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
  (this->ColorSaturationHighlights).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
  (this->ColorContrastHighlights).field0_0x0._s_0.X =
       (param_1->ColorContrastHighlights).field0_0x0._s_0.X;
  (this->ColorContrastHighlights).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
  (this->ColorContrastHighlights).field0_0x0._s_0.Z =
       (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
  (this->ColorContrastHighlights).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
  (this->ColorGammaHighlights).field0_0x0._s_0.X = (param_1->ColorGammaHighlights).field0_0x0._s_0.X
  ;
  (this->ColorGammaHighlights).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
  (this->ColorGammaHighlights).field0_0x0._s_0.Z = (param_1->ColorGammaHighlights).field0_0x0._s_0.Z
  ;
  (this->ColorGammaHighlights).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
  (this->ColorGainHighlights).field0_0x0._s_0.X = (param_1->ColorGainHighlights).field0_0x0._s_0.X;
  (this->ColorGainHighlights).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
  (this->ColorGainHighlights).field0_0x0._s_0.Z = (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
  (this->ColorGainHighlights).field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
  (this->ColorOffsetHighlights).field0_0x0._s_0.X =
       (param_1->ColorOffsetHighlights).field0_0x0._s_0.X;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Z =
       (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
  (this->ColorOffsetHighlights).field0_0x0._s_0.W = dVar9;
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
  uVar10 = *(undefined8 *)((longlong)&(param_1->SceneColorTint).field0_0x0 + 8);
  *(undefined8 *)&(this->SceneColorTint).field0_0x0 =
       *(undefined8 *)&(param_1->SceneColorTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneColorTint).field0_0x0 + 8) = uVar10;
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
  uVar10 = *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom1Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom1Tint).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom2Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom2Tint).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom3Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom3Tint).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom4Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom4Tint).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom5Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom5Tint).field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom6Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom6Tint).field0_0x0 + 8) = uVar10;
  this->BloomConvolutionIntensity = param_1->BloomConvolutionIntensity;
  this->BloomConvolutionScatterDispersion = param_1->BloomConvolutionScatterDispersion;
  this->BloomConvolutionSize = param_1->BloomConvolutionSize;
  pUVar4 = (param_1->BloomConvolutionTexture).field0_0x0.DebugPtr;
  (this->BloomConvolutionTexture).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  dVar9 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.X =
       (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.Y = dVar9;
  this->BloomConvolutionPreFilterMin = param_1->BloomConvolutionPreFilterMin;
  this->BloomConvolutionPreFilterMax = param_1->BloomConvolutionPreFilterMax;
  this->BloomConvolutionPreFilterMult = param_1->BloomConvolutionPreFilterMult;
  this->BloomConvolutionBufferScale = param_1->BloomConvolutionBufferScale;
  pUVar5 = (param_1->BloomDirtMask).field0_0x0.DebugPtr;
  (this->BloomDirtMask).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->BloomDirtMaskIntensity = param_1->BloomDirtMaskIntensity;
  uVar10 = *(undefined8 *)((longlong)&(param_1->BloomDirtMaskTint).field0_0x0 + 8);
  *(undefined8 *)&(this->BloomDirtMaskTint).field0_0x0 =
       *(undefined8 *)&(param_1->BloomDirtMaskTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->BloomDirtMaskTint).field0_0x0 + 8) = uVar10;
  (this->DynamicGlobalIlluminationMethod).Value = (param_1->DynamicGlobalIlluminationMethod).Value;
  uVar10 = *(undefined8 *)((longlong)&(param_1->IndirectLightingColor).field0_0x0 + 8);
  *(undefined8 *)&(this->IndirectLightingColor).field0_0x0 =
       *(undefined8 *)&(param_1->IndirectLightingColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->IndirectLightingColor).field0_0x0 + 8) = uVar10;
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
  uVar10 = *(undefined8 *)((longlong)&(param_1->LumenSkylightLeakingTint).field0_0x0 + 8);
  *(undefined8 *)&(this->LumenSkylightLeakingTint).field0_0x0 =
       *(undefined8 *)&(param_1->LumenSkylightLeakingTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->LumenSkylightLeakingTint).field0_0x0 + 8) = uVar10;
  this->LumenFullSkylightLeakingDistance = param_1->LumenFullSkylightLeakingDistance;
  this->LumenSurfaceCacheResolution = param_1->LumenSurfaceCacheResolution;
  (this->ReflectionMethod).Value = (param_1->ReflectionMethod).Value;
  this->ReflectionsType_DEPRECATED = param_1->ReflectionsType_DEPRECATED;
  this->LumenReflectionQuality = param_1->LumenReflectionQuality;
  bVar15 = (this->LumenReflectionsScreenTraces ^ param_1->LumenReflectionsScreenTraces) & 1 ^
           this->field_0x440;
  this->field_0x440 = bVar15;
  this->field_0x440 = (bVar15 ^ param_1->field_0x440) & 2 ^ bVar15;
  this->LumenMaxRoughnessToTraceReflections = param_1->LumenMaxRoughnessToTraceReflections;
  this->LumenMaxReflectionBounces = param_1->LumenMaxReflectionBounces;
  this->LumenMaxRefractionBounces = param_1->LumenMaxRefractionBounces;
  this->ScreenSpaceReflectionIntensity = param_1->ScreenSpaceReflectionIntensity;
  this->ScreenSpaceReflectionQuality = param_1->ScreenSpaceReflectionQuality;
  this->ScreenSpaceReflectionMaxRoughness = param_1->ScreenSpaceReflectionMaxRoughness;
  this->field_0x45c = (this->bMegaLights ^ param_1->bMegaLights) & 1 ^ this->field_0x45c;
  uVar10 = *(undefined8 *)((longlong)&(param_1->AmbientCubemapTint).field0_0x0 + 8);
  *(undefined8 *)&(this->AmbientCubemapTint).field0_0x0 =
       *(undefined8 *)&(param_1->AmbientCubemapTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->AmbientCubemapTint).field0_0x0 + 8) = uVar10;
  this->AmbientCubemapIntensity = param_1->AmbientCubemapIntensity;
  pUVar6 = (param_1->AmbientCubemap).field0_0x0.DebugPtr;
  (this->AmbientCubemap).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UTextureCube *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
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
  pUVar7 = (param_1->AutoExposureBiasCurve).field0_0x0.DebugPtr;
  (this->AutoExposureBiasCurve).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar5 = (param_1->AutoExposureMeterMask).field0_0x0.DebugPtr;
  (this->AutoExposureMeterMask).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
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
  pUVar7 = (param_1->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr;
  (this->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar7 = (param_1->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr;
  (this->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
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
  uVar10 = *(undefined8 *)((longlong)&(param_1->LensFlareTint).field0_0x0 + 8);
  *(undefined8 *)&(this->LensFlareTint).field0_0x0 =
       *(undefined8 *)&(param_1->LensFlareTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->LensFlareTint).field0_0x0 + 8) = uVar10;
  this->LensFlareBokehSize = param_1->LensFlareBokehSize;
  this->LensFlareThreshold = param_1->LensFlareThreshold;
  pUVar5 = (param_1->LensFlareBokehShape).field0_0x0.DebugPtr;
  (this->LensFlareBokehShape).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  uVar10 = *(undefined8 *)((longlong)&param_1->LensFlareTints[0].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[0].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[0].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[0].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&param_1->LensFlareTints[1].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[1].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[1].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[1].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&param_1->LensFlareTints[2].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[2].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[2].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[2].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&param_1->LensFlareTints[3].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[3].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[3].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[3].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&param_1->LensFlareTints[4].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[4].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[4].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[4].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&param_1->LensFlareTints[5].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[5].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[5].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[5].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&param_1->LensFlareTints[6].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[6].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[6].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[6].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&param_1->LensFlareTints[7].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[7].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[7].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[7].field0_0x0 + 8) = uVar10;
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
  pUVar4 = (param_1->FilmGrainTexture).field0_0x0.DebugPtr;
  (this->FilmGrainTexture).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
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
  pUVar5 = (param_1->ColorGradingLUT).field0_0x0.DebugPtr;
  (this->ColorGradingLUT).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
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
  fVar11 = param_1->DepthOfFieldMatteBoxFlags[0].Roll;
  uVar10 = *(undefined8 *)&param_1->DepthOfFieldMatteBoxFlags[0].Length;
  this->DepthOfFieldMatteBoxFlags[0].Pitch = param_1->DepthOfFieldMatteBoxFlags[0].Pitch;
  this->DepthOfFieldMatteBoxFlags[0].Roll = fVar11;
  *(undefined8 *)&this->DepthOfFieldMatteBoxFlags[0].Length = uVar10;
  fVar11 = param_1->DepthOfFieldMatteBoxFlags[1].Length;
  fVar12 = param_1->DepthOfFieldMatteBoxFlags[2].Pitch;
  fVar13 = param_1->DepthOfFieldMatteBoxFlags[2].Roll;
  this->DepthOfFieldMatteBoxFlags[1].Roll = param_1->DepthOfFieldMatteBoxFlags[1].Roll;
  this->DepthOfFieldMatteBoxFlags[1].Length = fVar11;
  this->DepthOfFieldMatteBoxFlags[2].Pitch = fVar12;
  this->DepthOfFieldMatteBoxFlags[2].Roll = fVar13;
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
  bVar15 = (this->RayTracingTranslucencyRefraction ^ param_1->RayTracingTranslucencyRefraction) & 1
           ^ this->field_0x735;
  this->field_0x735 = bVar15;
  this->field_0x735 = (bVar15 ^ param_1->field_0x735) & 2 ^ bVar15;
  this->PathTracingMaxBounces = param_1->PathTracingMaxBounces;
  this->PathTracingSamplesPerPixel = param_1->PathTracingSamplesPerPixel;
  this->PathTracingMaxPathIntensity = param_1->PathTracingMaxPathIntensity;
  uVar14 = (ZPULL(*(undefined4 *)&this->field_0x744,0,1) ^
           param_1->PathTracingEnableEmissiveMaterials) & 1 ^ *(undefined4 *)&this->field_0x744;
  *(uint *)&this->field_0x744 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 2 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 4 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 8 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 0x10 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 0x20 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 0x40 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 0x80 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  pFVar2 = &this->WeightedBlendables;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 0x100 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 0x200 ^ uVar14;
  *(uint *)&this->field_0x744 = uVar14;
  *(uint *)&this->field_0x744 = (uVar14 ^ *(uint *)&param_1->field_0x744) & 0x400 ^ uVar14;
  this->LPVFadeRange_DEPRECATED = param_1->LPVFadeRange_DEPRECATED;
  this->LPVDirectionalOcclusionFadeRange_DEPRECATED =
       param_1->LPVDirectionalOcclusionFadeRange_DEPRECATED;
  this->ScreenPercentage_DEPRECATED = param_1->ScreenPercentage_DEPRECATED;
  this->UserFlags = param_1->UserFlags;
  piVar1 = &(this->WeightedBlendables).Array.ArrayMax;
  (pFVar2->Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->WeightedBlendables).Array.ArrayNum;
  pFVar8 = (FWeightedBlendable *)(param_1->WeightedBlendables).Array.AllocatorInstance.Data;
  (this->WeightedBlendables).Array.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    ConstructItems<FWeightedBlendable,FWeightedBlendable,int>
              ((pFVar2->Array).AllocatorInstance.Data,pFVar8,iVar3);
  }
  return this;
}

// operator= @ 14547abf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettings * __thiscall
FPostProcessSettings::operator=(FPostProcessSettings *this,FPostProcessSettings *param_1)

{
  int *piVar1;
  FWeightedBlendables *pFVar2;
  int iVar3;
  int iVar4;
  UTexture2D *pUVar5;
  UTexture *pUVar6;
  UTextureCube *pUVar7;
  UCurveFloat *pUVar8;
  FWeightedBlendable *pFVar9;
  double dVar10;
  undefined8 uVar11;
  float fVar12;
  uint uVar13;
  byte bVar14;
  
  bVar14 = (this->bOverride_TemperatureType ^ param_1->bOverride_TemperatureType) & 1 ^
           *(byte *)this;
  *(byte *)this = bVar14;
  bVar14 = (bVar14 ^ *(byte *)param_1) & 2 ^ bVar14;
  *(byte *)this = bVar14;
  bVar14 = (bVar14 ^ *(byte *)param_1) & 4 ^ bVar14;
  *(byte *)this = bVar14;
  bVar14 = (bVar14 ^ *(byte *)param_1) & 8 ^ bVar14;
  *(byte *)this = bVar14;
  bVar14 = (bVar14 ^ *(byte *)param_1) & 0x10 ^ bVar14;
  *(byte *)this = bVar14;
  bVar14 = (bVar14 ^ *(byte *)param_1) & 0x20 ^ bVar14;
  *(byte *)this = bVar14;
  bVar14 = (bVar14 ^ *(byte *)param_1) & 0x40 ^ bVar14;
  *(byte *)this = bVar14;
  *(byte *)this = (bVar14 ^ *(byte *)param_1) & 0x7f ^ *(byte *)param_1;
  bVar14 = (this->bOverride_ColorSaturationShadows ^ param_1->bOverride_ColorSaturationShadows) & 1
           ^ this->field_0x1;
  this->field_0x1 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1) & 2 ^ bVar14;
  this->field_0x1 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1) & 4 ^ bVar14;
  this->field_0x1 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1) & 8 ^ bVar14;
  this->field_0x1 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1) & 0x10 ^ bVar14;
  this->field_0x1 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1) & 0x20 ^ bVar14;
  this->field_0x1 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1) & 0x40 ^ bVar14;
  this->field_0x1 = bVar14;
  this->field_0x1 = (bVar14 ^ param_1->field_0x1) & 0x7f ^ param_1->field_0x1;
  bVar14 = (this->bOverride_ColorGainMidtones ^ param_1->bOverride_ColorGainMidtones) & 1 ^
           this->field_0x2;
  this->field_0x2 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x2) & 2 ^ bVar14;
  this->field_0x2 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x2) & 4 ^ bVar14;
  this->field_0x2 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x2) & 8 ^ bVar14;
  this->field_0x2 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x2) & 0x10 ^ bVar14;
  this->field_0x2 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x2) & 0x20 ^ bVar14;
  this->field_0x2 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x2) & 0x40 ^ bVar14;
  this->field_0x2 = bVar14;
  this->field_0x2 = (bVar14 ^ param_1->field_0x2) & 0x7f ^ param_1->field_0x2;
  bVar14 = (this->bOverride_ColorCorrectionHighlightsMin ^
           param_1->bOverride_ColorCorrectionHighlightsMin) & 1 ^ this->field_0x3;
  this->field_0x3 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x3) & 2 ^ bVar14;
  this->field_0x3 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x3) & 4 ^ bVar14;
  this->field_0x3 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x3) & 8 ^ bVar14;
  this->field_0x3 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x3) & 0x10 ^ bVar14;
  this->field_0x3 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x3) & 0x20 ^ bVar14;
  this->field_0x3 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x3) & 0x40 ^ bVar14;
  this->field_0x3 = bVar14;
  this->field_0x3 = (bVar14 ^ param_1->field_0x3) & 0x7f ^ param_1->field_0x3;
  bVar14 = (this->bOverride_FilmBlackClip ^ param_1->bOverride_FilmBlackClip) & 1 ^ this->field_0x4;
  this->field_0x4 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x4) & 2 ^ bVar14;
  this->field_0x4 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x4) & 4 ^ bVar14;
  this->field_0x4 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x4) & 8 ^ bVar14;
  this->field_0x4 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x4) & 0x10 ^ bVar14;
  this->field_0x4 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x4) & 0x20 ^ bVar14;
  this->field_0x4 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x4) & 0x40 ^ bVar14;
  this->field_0x4 = bVar14;
  this->field_0x4 = (bVar14 ^ param_1->field_0x4) & 0x7f ^ param_1->field_0x4;
  bVar14 = (this->bOverride_BloomMethod ^ param_1->bOverride_BloomMethod) & 1 ^ this->field_0x5;
  this->field_0x5 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x5) & 2 ^ bVar14;
  this->field_0x5 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x5) & 4 ^ bVar14;
  this->field_0x5 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x5) & 8 ^ bVar14;
  this->field_0x5 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x5) & 0x10 ^ bVar14;
  this->field_0x5 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x5) & 0x20 ^ bVar14;
  this->field_0x5 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x5) & 0x40 ^ bVar14;
  this->field_0x5 = bVar14;
  this->field_0x5 = (bVar14 ^ param_1->field_0x5) & 0x7f ^ param_1->field_0x5;
  bVar14 = (this->bOverride_Bloom3Tint ^ param_1->bOverride_Bloom3Tint) & 1 ^ this->field_0x6;
  this->field_0x6 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x6) & 2 ^ bVar14;
  this->field_0x6 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x6) & 4 ^ bVar14;
  this->field_0x6 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x6) & 8 ^ bVar14;
  this->field_0x6 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x6) & 0x10 ^ bVar14;
  this->field_0x6 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x6) & 0x20 ^ bVar14;
  this->field_0x6 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x6) & 0x40 ^ bVar14;
  this->field_0x6 = bVar14;
  this->field_0x6 = (bVar14 ^ param_1->field_0x6) & 0x7f ^ param_1->field_0x6;
  bVar14 = (this->bOverride_BloomSizeScale ^ param_1->bOverride_BloomSizeScale) & 1 ^
           this->field_0x7;
  this->field_0x7 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x7) & 2 ^ bVar14;
  this->field_0x7 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x7) & 4 ^ bVar14;
  this->field_0x7 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x7) & 8 ^ bVar14;
  this->field_0x7 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x7) & 0x10 ^ bVar14;
  this->field_0x7 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x7) & 0x20 ^ bVar14;
  this->field_0x7 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x7) & 0x40 ^ bVar14;
  this->field_0x7 = bVar14;
  this->field_0x7 = (bVar14 ^ param_1->field_0x7) & 0x7f ^ param_1->field_0x7;
  bVar14 = (this->bOverride_BloomConvolutionPreFilterMax ^
           param_1->bOverride_BloomConvolutionPreFilterMax) & 1 ^ this->field_0x8;
  this->field_0x8 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x8) & 2 ^ bVar14;
  this->field_0x8 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x8) & 4 ^ bVar14;
  this->field_0x8 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x8) & 8 ^ bVar14;
  this->field_0x8 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x8) & 0x10 ^ bVar14;
  this->field_0x8 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x8) & 0x20 ^ bVar14;
  this->field_0x8 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x8) & 0x40 ^ bVar14;
  this->field_0x8 = bVar14;
  this->field_0x8 = (bVar14 ^ param_1->field_0x8) & 0x7f ^ param_1->field_0x8;
  bVar14 = (this->bOverride_AutoExposureMethod ^ param_1->bOverride_AutoExposureMethod) & 1 ^
           this->field_0x9;
  this->field_0x9 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x9) & 2 ^ bVar14;
  this->field_0x9 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x9) & 4 ^ bVar14;
  this->field_0x9 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x9) & 8 ^ bVar14;
  this->field_0x9 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x9) & 0x10 ^ bVar14;
  this->field_0x9 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x9) & 0x20 ^ bVar14;
  this->field_0x9 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x9) & 0x40 ^ bVar14;
  this->field_0x9 = bVar14;
  this->field_0x9 = (bVar14 ^ param_1->field_0x9) & 0x7f ^ param_1->field_0x9;
  bVar14 = (this->bOverride_AutoExposureBias ^ param_1->bOverride_AutoExposureBias) & 1 ^
           this->field_0xa;
  this->field_0xa = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xa) & 2 ^ bVar14;
  this->field_0xa = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xa) & 4 ^ bVar14;
  this->field_0xa = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xa) & 8 ^ bVar14;
  this->field_0xa = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xa) & 0x10 ^ bVar14;
  this->field_0xa = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xa) & 0x20 ^ bVar14;
  this->field_0xa = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xa) & 0x40 ^ bVar14;
  this->field_0xa = bVar14;
  this->field_0xa = (param_1->field_0xa ^ bVar14) & 0x7f ^ param_1->field_0xa;
  bVar14 = (this->bOverride_LocalExposureHighlightContrastScale ^
           param_1->bOverride_LocalExposureHighlightContrastScale) & 1 ^ this->field_0xb;
  this->field_0xb = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xb) & 2 ^ bVar14;
  this->field_0xb = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xb) & 4 ^ bVar14;
  this->field_0xb = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xb) & 8 ^ bVar14;
  this->field_0xb = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xb) & 0x10 ^ bVar14;
  this->field_0xb = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xb) & 0x20 ^ bVar14;
  this->field_0xb = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xb) & 0x40 ^ bVar14;
  this->field_0xb = bVar14;
  this->field_0xb = (bVar14 ^ param_1->field_0xb) & 0x7f ^ param_1->field_0xb;
  bVar14 = (this->bOverride_LocalExposureBlurredLuminanceKernelSizePercent ^
           param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent) & 1 ^ this->field_0xc;
  this->field_0xc = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xc) & 2 ^ bVar14;
  this->field_0xc = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xc) & 4 ^ bVar14;
  this->field_0xc = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xc) & 8 ^ bVar14;
  this->field_0xc = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xc) & 0x10 ^ bVar14;
  this->field_0xc = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xc) & 0x20 ^ bVar14;
  this->field_0xc = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xc) & 0x40 ^ bVar14;
  this->field_0xc = bVar14;
  this->field_0xc = (bVar14 ^ param_1->field_0xc) & 0x7f ^ param_1->field_0xc;
  bVar14 = (this->bOverride_LensFlareBokehShape ^ param_1->bOverride_LensFlareBokehShape) & 1 ^
           this->field_0xd;
  this->field_0xd = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xd) & 2 ^ bVar14;
  this->field_0xd = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xd) & 4 ^ bVar14;
  this->field_0xd = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xd) & 8 ^ bVar14;
  this->field_0xd = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xd) & 0x10 ^ bVar14;
  this->field_0xd = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xd) & 0x20 ^ bVar14;
  this->field_0xd = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xd) & 0x40 ^ bVar14;
  this->field_0xd = bVar14;
  this->field_0xd = (bVar14 ^ param_1->field_0xd) & 0x7f ^ param_1->field_0xd;
  bVar14 = (this->bOverride_FilmGrainIntensityMidtones ^
           param_1->bOverride_FilmGrainIntensityMidtones) & 1 ^ this->field_0xe;
  this->field_0xe = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xe) & 2 ^ bVar14;
  this->field_0xe = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xe) & 4 ^ bVar14;
  this->field_0xe = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xe) & 8 ^ bVar14;
  this->field_0xe = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xe) & 0x10 ^ bVar14;
  this->field_0xe = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xe) & 0x20 ^ bVar14;
  this->field_0xe = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xe) & 0x40 ^ bVar14;
  this->field_0xe = bVar14;
  this->field_0xe = (bVar14 ^ param_1->field_0xe) & 0x7f ^ param_1->field_0xe;
  bVar14 = (this->bOverride_AmbientOcclusionStaticFraction ^
           param_1->bOverride_AmbientOcclusionStaticFraction) & 1 ^ this->field_0xf;
  this->field_0xf = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xf) & 2 ^ bVar14;
  this->field_0xf = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xf) & 4 ^ bVar14;
  this->field_0xf = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xf) & 8 ^ bVar14;
  this->field_0xf = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xf) & 0x10 ^ bVar14;
  this->field_0xf = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xf) & 0x20 ^ bVar14;
  this->field_0xf = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0xf) & 0x40 ^ bVar14;
  this->field_0xf = bVar14;
  this->field_0xf = (bVar14 ^ param_1->field_0xf) & 0x7f ^ param_1->field_0xf;
  bVar14 = (this->bOverride_AmbientOcclusionQuality ^ param_1->bOverride_AmbientOcclusionQuality) &
           1 ^ this->field_0x10;
  this->field_0x10 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x10) & 2 ^ bVar14;
  this->field_0x10 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x10) & 4 ^ bVar14;
  this->field_0x10 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x10) & 8 ^ bVar14;
  this->field_0x10 = bVar14;
  this->field_0x10 = (bVar14 ^ param_1->field_0x10) & 0x10 ^ bVar14;
  uVar13 = (this->bOverride_RayTracingAO ^ param_1->bOverride_RayTracingAO) & 1 ^
           *(uint *)&this->field_0x14;
  *(uint *)&this->field_0x14 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x14) & 2 ^ uVar13;
  *(uint *)&this->field_0x14 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x14) & 4 ^ uVar13;
  *(uint *)&this->field_0x14 = uVar13;
  *(uint *)&this->field_0x14 = (uVar13 ^ *(uint *)&param_1->field_0x14) & 8 ^ uVar13;
  bVar14 = (this->bOverride_LPVIntensity_DEPRECATED ^ param_1->bOverride_LPVIntensity_DEPRECATED) &
           1 ^ this->field_0x18;
  this->field_0x18 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x18) & 2 ^ bVar14;
  this->field_0x18 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x18) & 4 ^ bVar14;
  this->field_0x18 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x18) & 8 ^ bVar14;
  this->field_0x18 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x18) & 0x10 ^ bVar14;
  this->field_0x18 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x18) & 0x20 ^ bVar14;
  this->field_0x18 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x18) & 0x40 ^ bVar14;
  this->field_0x18 = bVar14;
  this->field_0x18 = (param_1->field_0x18 ^ bVar14) & 0x7f ^ param_1->field_0x18;
  bVar14 = (this->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED ^
           param_1->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED) & 1 ^ this->field_0x19;
  this->field_0x19 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x19) & 2 ^ bVar14;
  this->field_0x19 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x19) & 4 ^ bVar14;
  this->field_0x19 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x19) & 8 ^ bVar14;
  this->field_0x19 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x19) & 0x10 ^ bVar14;
  this->field_0x19 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x19) & 0x20 ^ bVar14;
  this->field_0x19 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x19) & 0x40 ^ bVar14;
  this->field_0x19 = bVar14;
  this->field_0x19 = (bVar14 ^ param_1->field_0x19) & 0x7f ^ param_1->field_0x19;
  bVar14 = (this->bOverride_IndirectLightingIntensity ^ param_1->bOverride_IndirectLightingIntensity
           ) & 1 ^ this->field_0x1a;
  this->field_0x1a = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1a) & 2 ^ bVar14;
  this->field_0x1a = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1a) & 4 ^ bVar14;
  this->field_0x1a = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1a) & 8 ^ bVar14;
  this->field_0x1a = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1a) & 0x10 ^ bVar14;
  this->field_0x1a = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1a) & 0x20 ^ bVar14;
  this->field_0x1a = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1a) & 0x40 ^ bVar14;
  this->field_0x1a = bVar14;
  this->field_0x1a = (bVar14 ^ param_1->field_0x1a) & 0x7f ^ param_1->field_0x1a;
  bVar14 = (this->bOverride_DepthOfFieldSqueezeFactor ^ param_1->bOverride_DepthOfFieldSqueezeFactor
           ) & 1 ^ this->field_0x1b;
  this->field_0x1b = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1b) & 2 ^ bVar14;
  this->field_0x1b = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1b) & 4 ^ bVar14;
  this->field_0x1b = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1b) & 8 ^ bVar14;
  this->field_0x1b = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1b) & 0x10 ^ bVar14;
  this->field_0x1b = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1b) & 0x20 ^ bVar14;
  this->field_0x1b = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1b) & 0x40 ^ bVar14;
  this->field_0x1b = bVar14;
  this->field_0x1b = (bVar14 ^ param_1->field_0x1b) & 0x7f ^ param_1->field_0x1b;
  bVar14 = (this->bOverride_DepthOfFieldMatteBoxFlags ^ param_1->bOverride_DepthOfFieldMatteBoxFlags
           ) & 1 ^ this->field_0x1c;
  this->field_0x1c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1c) & 2 ^ bVar14;
  this->field_0x1c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1c) & 4 ^ bVar14;
  this->field_0x1c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1c) & 8 ^ bVar14;
  this->field_0x1c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1c) & 0x10 ^ bVar14;
  this->field_0x1c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1c) & 0x20 ^ bVar14;
  this->field_0x1c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1c) & 0x40 ^ bVar14;
  this->field_0x1c = bVar14;
  this->field_0x1c = (param_1->field_0x1c ^ bVar14) & 0x7f ^ param_1->field_0x1c;
  bVar14 = (this->bOverride_DepthOfFieldNearBlurSize ^ param_1->bOverride_DepthOfFieldNearBlurSize)
           & 1 ^ this->field_0x1d;
  this->field_0x1d = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1d) & 2 ^ bVar14;
  this->field_0x1d = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1d) & 4 ^ bVar14;
  this->field_0x1d = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1d) & 8 ^ bVar14;
  this->field_0x1d = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1d) & 0x10 ^ bVar14;
  this->field_0x1d = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1d) & 0x20 ^ bVar14;
  this->field_0x1d = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1d) & 0x40 ^ bVar14;
  this->field_0x1d = bVar14;
  this->field_0x1d = (bVar14 ^ param_1->field_0x1d) & 0x7f ^ param_1->field_0x1d;
  bVar14 = (this->bOverride_MotionBlurTargetFPS ^ param_1->bOverride_MotionBlurTargetFPS) & 1 ^
           this->field_0x1e;
  this->field_0x1e = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1e) & 2 ^ bVar14;
  this->field_0x1e = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1e) & 4 ^ bVar14;
  this->field_0x1e = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1e) & 8 ^ bVar14;
  this->field_0x1e = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1e) & 0x10 ^ bVar14;
  this->field_0x1e = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1e) & 0x20 ^ bVar14;
  this->field_0x1e = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x1e) & 0x40 ^ bVar14;
  this->field_0x1e = bVar14;
  this->field_0x1e = (bVar14 ^ param_1->field_0x1e) & 0x7f ^ param_1->field_0x1e;
  bVar14 = (this->bOverride_ScreenSpaceReflectionRoughnessScale ^
           param_1->bOverride_ScreenSpaceReflectionRoughnessScale) & 1 ^ this->field_0x1f;
  this->field_0x1f = bVar14;
  this->field_0x1f = (bVar14 ^ param_1->field_0x1f) & 2 ^ bVar14;
  uVar13 = (this->bOverride_ReflectionsType_DEPRECATED ^
           param_1->bOverride_ReflectionsType_DEPRECATED) & 1 ^ *(uint *)&this->field_0x20;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 2 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 4 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 8 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x10 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x20 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x40 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x80 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x100 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x200 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x400 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x800 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x1000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x2000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x4000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x8000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x10000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x20000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x40000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x80000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x100000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x200000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x400000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x800000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x1000000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x2000000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x4000000 ^ uVar13;
  *(uint *)&this->field_0x20 = uVar13;
  *(uint *)&this->field_0x20 = (uVar13 ^ *(uint *)&param_1->field_0x20) & 0x8000000 ^ uVar13;
  bVar14 = (this->bOverride_LumenRayLightingMode ^ param_1->bOverride_LumenRayLightingMode) & 1 ^
           this->field_0x24;
  this->field_0x24 = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x24) & 2 ^ bVar14;
  this->field_0x24 = bVar14;
  this->field_0x24 = (bVar14 ^ param_1->field_0x24) & 4 ^ bVar14;
  uVar13 = (this->bOverride_LumenMaxRoughnessToTraceReflections ^
           param_1->bOverride_LumenMaxRoughnessToTraceReflections) & 1 ^ *(uint *)&this->field_0x28;
  *(uint *)&this->field_0x28 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x28) & 2 ^ uVar13;
  *(uint *)&this->field_0x28 = uVar13;
  *(uint *)&this->field_0x28 = (uVar13 ^ *(uint *)&param_1->field_0x28) & 4 ^ uVar13;
  this->field_0x2c =
       this->field_0x2c ^
       (this->bOverride_LumenSurfaceCacheResolution ^ param_1->bOverride_LumenSurfaceCacheResolution
       ) & 1;
  uVar13 = (this->bOverride_RayTracingGI ^ param_1->bOverride_RayTracingGI) & 1 ^
           *(uint *)&this->field_0x30;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 2 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 4 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 8 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x10 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x20 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x40 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x80 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x100 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x200 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x400 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x800 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x1000 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x2000 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x4000 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x8000 ^ uVar13;
  *(uint *)&this->field_0x30 = uVar13;
  *(uint *)&this->field_0x30 = (uVar13 ^ *(uint *)&param_1->field_0x30) & 0x10000 ^ uVar13;
  this->field_0x34 = this->field_0x34 ^ (this->bMobileHQGaussian ^ param_1->bMobileHQGaussian) & 1;
  (this->BloomMethod).Value = (param_1->BloomMethod).Value;
  (this->AutoExposureMethod).Value = (param_1->AutoExposureMethod).Value;
  (this->TemperatureType).Value = (param_1->TemperatureType).Value;
  this->WhiteTemp = param_1->WhiteTemp;
  this->WhiteTint = param_1->WhiteTint;
  dVar10 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
  (this->ColorSaturation).field0_0x0._s_0.X = (param_1->ColorSaturation).field0_0x0._s_0.X;
  (this->ColorSaturation).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorSaturation).field0_0x0._s_0.W;
  (this->ColorSaturation).field0_0x0._s_0.Z = (param_1->ColorSaturation).field0_0x0._s_0.Z;
  (this->ColorSaturation).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorContrast).field0_0x0._s_0.Y;
  (this->ColorContrast).field0_0x0._s_0.X = (param_1->ColorContrast).field0_0x0._s_0.X;
  (this->ColorContrast).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorContrast).field0_0x0._s_0.W;
  (this->ColorContrast).field0_0x0._s_0.Z = (param_1->ColorContrast).field0_0x0._s_0.Z;
  (this->ColorContrast).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorGamma).field0_0x0._s_0.Y;
  (this->ColorGamma).field0_0x0._s_0.X = (param_1->ColorGamma).field0_0x0._s_0.X;
  (this->ColorGamma).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorGamma).field0_0x0._s_0.W;
  (this->ColorGamma).field0_0x0._s_0.Z = (param_1->ColorGamma).field0_0x0._s_0.Z;
  (this->ColorGamma).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorGain).field0_0x0._s_0.Y;
  (this->ColorGain).field0_0x0._s_0.X = (param_1->ColorGain).field0_0x0._s_0.X;
  (this->ColorGain).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorGain).field0_0x0._s_0.W;
  (this->ColorGain).field0_0x0._s_0.Z = (param_1->ColorGain).field0_0x0._s_0.Z;
  (this->ColorGain).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorOffset).field0_0x0._s_0.Y;
  (this->ColorOffset).field0_0x0._s_0.X = (param_1->ColorOffset).field0_0x0._s_0.X;
  (this->ColorOffset).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorOffset).field0_0x0._s_0.W;
  (this->ColorOffset).field0_0x0._s_0.Z = (param_1->ColorOffset).field0_0x0._s_0.Z;
  (this->ColorOffset).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
  (this->ColorSaturationShadows).field0_0x0._s_0.X =
       (param_1->ColorSaturationShadows).field0_0x0._s_0.X;
  (this->ColorSaturationShadows).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
  (this->ColorSaturationShadows).field0_0x0._s_0.Z =
       (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
  (this->ColorSaturationShadows).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
  (this->ColorContrastShadows).field0_0x0._s_0.X = (param_1->ColorContrastShadows).field0_0x0._s_0.X
  ;
  (this->ColorContrastShadows).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
  (this->ColorContrastShadows).field0_0x0._s_0.Z = (param_1->ColorContrastShadows).field0_0x0._s_0.Z
  ;
  (this->ColorContrastShadows).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
  (this->ColorGammaShadows).field0_0x0._s_0.X = (param_1->ColorGammaShadows).field0_0x0._s_0.X;
  (this->ColorGammaShadows).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
  (this->ColorGammaShadows).field0_0x0._s_0.Z = (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
  (this->ColorGammaShadows).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
  (this->ColorGainShadows).field0_0x0._s_0.X = (param_1->ColorGainShadows).field0_0x0._s_0.X;
  (this->ColorGainShadows).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
  (this->ColorGainShadows).field0_0x0._s_0.Z = (param_1->ColorGainShadows).field0_0x0._s_0.Z;
  (this->ColorGainShadows).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
  (this->ColorOffsetShadows).field0_0x0._s_0.X = (param_1->ColorOffsetShadows).field0_0x0._s_0.X;
  (this->ColorOffsetShadows).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
  (this->ColorOffsetShadows).field0_0x0._s_0.Z = (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
  (this->ColorOffsetShadows).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
  (this->ColorSaturationMidtones).field0_0x0._s_0.X =
       (param_1->ColorSaturationMidtones).field0_0x0._s_0.X;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
  (this->ColorSaturationMidtones).field0_0x0._s_0.Z =
       (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
  (this->ColorSaturationMidtones).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
  (this->ColorContrastMidtones).field0_0x0._s_0.X =
       (param_1->ColorContrastMidtones).field0_0x0._s_0.X;
  (this->ColorContrastMidtones).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
  (this->ColorContrastMidtones).field0_0x0._s_0.Z =
       (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
  (this->ColorContrastMidtones).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
  (this->ColorGammaMidtones).field0_0x0._s_0.X = (param_1->ColorGammaMidtones).field0_0x0._s_0.X;
  (this->ColorGammaMidtones).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
  (this->ColorGammaMidtones).field0_0x0._s_0.Z = (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
  (this->ColorGammaMidtones).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
  (this->ColorGainMidtones).field0_0x0._s_0.X = (param_1->ColorGainMidtones).field0_0x0._s_0.X;
  (this->ColorGainMidtones).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
  (this->ColorGainMidtones).field0_0x0._s_0.Z = (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
  (this->ColorGainMidtones).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
  (this->ColorOffsetMidtones).field0_0x0._s_0.X = (param_1->ColorOffsetMidtones).field0_0x0._s_0.X;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
  (this->ColorOffsetMidtones).field0_0x0._s_0.Z = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
  (this->ColorOffsetMidtones).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
  (this->ColorSaturationHighlights).field0_0x0._s_0.X =
       (param_1->ColorSaturationHighlights).field0_0x0._s_0.X;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
  (this->ColorSaturationHighlights).field0_0x0._s_0.Z =
       (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
  (this->ColorSaturationHighlights).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
  (this->ColorContrastHighlights).field0_0x0._s_0.X =
       (param_1->ColorContrastHighlights).field0_0x0._s_0.X;
  (this->ColorContrastHighlights).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
  (this->ColorContrastHighlights).field0_0x0._s_0.Z =
       (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
  (this->ColorContrastHighlights).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
  (this->ColorGammaHighlights).field0_0x0._s_0.X = (param_1->ColorGammaHighlights).field0_0x0._s_0.X
  ;
  (this->ColorGammaHighlights).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
  (this->ColorGammaHighlights).field0_0x0._s_0.Z = (param_1->ColorGammaHighlights).field0_0x0._s_0.Z
  ;
  (this->ColorGammaHighlights).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
  (this->ColorGainHighlights).field0_0x0._s_0.X = (param_1->ColorGainHighlights).field0_0x0._s_0.X;
  (this->ColorGainHighlights).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
  (this->ColorGainHighlights).field0_0x0._s_0.Z = (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
  (this->ColorGainHighlights).field0_0x0._s_0.W = dVar10;
  dVar10 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
  (this->ColorOffsetHighlights).field0_0x0._s_0.X =
       (param_1->ColorOffsetHighlights).field0_0x0._s_0.X;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
  (this->ColorOffsetHighlights).field0_0x0._s_0.Z =
       (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
  (this->ColorOffsetHighlights).field0_0x0._s_0.W = dVar10;
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
  uVar11 = *(undefined8 *)((longlong)&(param_1->SceneColorTint).field0_0x0 + 8);
  *(undefined8 *)&(this->SceneColorTint).field0_0x0 =
       *(undefined8 *)&(param_1->SceneColorTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->SceneColorTint).field0_0x0 + 8) = uVar11;
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
  uVar11 = *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom1Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom1Tint).field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom2Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom2Tint).field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom3Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom3Tint).field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom4Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom4Tint).field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom5Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom5Tint).field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8);
  *(undefined8 *)&(this->Bloom6Tint).field0_0x0 = *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0;
  *(undefined8 *)((longlong)&(this->Bloom6Tint).field0_0x0 + 8) = uVar11;
  this->BloomConvolutionIntensity = param_1->BloomConvolutionIntensity;
  this->BloomConvolutionScatterDispersion = param_1->BloomConvolutionScatterDispersion;
  this->BloomConvolutionSize = param_1->BloomConvolutionSize;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->BloomConvolutionTexture).field0_0x0.DebugPtr, pUVar5 != (UTexture2D *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->BloomConvolutionTexture).field0_0x0 = (param_1->BloomConvolutionTexture).field0_0x0;
  dVar10 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.X =
       (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X;
  (this->BloomConvolutionCenterUV).field0_0x0._s_0.Y = dVar10;
  this->BloomConvolutionPreFilterMin = param_1->BloomConvolutionPreFilterMin;
  this->BloomConvolutionPreFilterMax = param_1->BloomConvolutionPreFilterMax;
  this->BloomConvolutionPreFilterMult = param_1->BloomConvolutionPreFilterMult;
  this->BloomConvolutionBufferScale = param_1->BloomConvolutionBufferScale;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->BloomDirtMask).field0_0x0.DebugPtr, pUVar6 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->BloomDirtMask).field0_0x0 = (param_1->BloomDirtMask).field0_0x0;
  this->BloomDirtMaskIntensity = param_1->BloomDirtMaskIntensity;
  uVar11 = *(undefined8 *)((longlong)&(param_1->BloomDirtMaskTint).field0_0x0 + 8);
  *(undefined8 *)&(this->BloomDirtMaskTint).field0_0x0 =
       *(undefined8 *)&(param_1->BloomDirtMaskTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->BloomDirtMaskTint).field0_0x0 + 8) = uVar11;
  (this->DynamicGlobalIlluminationMethod).Value = (param_1->DynamicGlobalIlluminationMethod).Value;
  uVar11 = *(undefined8 *)((longlong)&(param_1->IndirectLightingColor).field0_0x0 + 8);
  *(undefined8 *)&(this->IndirectLightingColor).field0_0x0 =
       *(undefined8 *)&(param_1->IndirectLightingColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->IndirectLightingColor).field0_0x0 + 8) = uVar11;
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
  uVar11 = *(undefined8 *)((longlong)&(param_1->LumenSkylightLeakingTint).field0_0x0 + 8);
  *(undefined8 *)&(this->LumenSkylightLeakingTint).field0_0x0 =
       *(undefined8 *)&(param_1->LumenSkylightLeakingTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->LumenSkylightLeakingTint).field0_0x0 + 8) = uVar11;
  this->LumenFullSkylightLeakingDistance = param_1->LumenFullSkylightLeakingDistance;
  this->LumenSurfaceCacheResolution = param_1->LumenSurfaceCacheResolution;
  (this->ReflectionMethod).Value = (param_1->ReflectionMethod).Value;
  this->ReflectionsType_DEPRECATED = param_1->ReflectionsType_DEPRECATED;
  this->LumenReflectionQuality = param_1->LumenReflectionQuality;
  bVar14 = (this->LumenReflectionsScreenTraces ^ param_1->LumenReflectionsScreenTraces) & 1 ^
           this->field_0x440;
  this->field_0x440 = bVar14;
  this->field_0x440 = (bVar14 ^ param_1->field_0x440) & 2 ^ bVar14;
  this->LumenMaxRoughnessToTraceReflections = param_1->LumenMaxRoughnessToTraceReflections;
  this->LumenMaxReflectionBounces = param_1->LumenMaxReflectionBounces;
  this->LumenMaxRefractionBounces = param_1->LumenMaxRefractionBounces;
  this->ScreenSpaceReflectionIntensity = param_1->ScreenSpaceReflectionIntensity;
  this->ScreenSpaceReflectionQuality = param_1->ScreenSpaceReflectionQuality;
  this->ScreenSpaceReflectionMaxRoughness = param_1->ScreenSpaceReflectionMaxRoughness;
  this->field_0x45c = (this->bMegaLights ^ param_1->bMegaLights) & 1 ^ this->field_0x45c;
  uVar11 = *(undefined8 *)((longlong)&(param_1->AmbientCubemapTint).field0_0x0 + 8);
  *(undefined8 *)&(this->AmbientCubemapTint).field0_0x0 =
       *(undefined8 *)&(param_1->AmbientCubemapTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->AmbientCubemapTint).field0_0x0 + 8) = uVar11;
  this->AmbientCubemapIntensity = param_1->AmbientCubemapIntensity;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->AmbientCubemap).field0_0x0.DebugPtr, pUVar7 != (UTextureCube *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
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
     (pUVar8 = (param_1->AutoExposureBiasCurve).field0_0x0.DebugPtr, pUVar8 != (UCurveFloat *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->AutoExposureBiasCurve).field0_0x0 = (param_1->AutoExposureBiasCurve).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->AutoExposureMeterMask).field0_0x0.DebugPtr, pUVar6 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
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
     (pUVar8 = (param_1->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr,
     pUVar8 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->LocalExposureHighlightContrastCurve).field0_0x0 =
       (param_1->LocalExposureHighlightContrastCurve).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr,
     pUVar8 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
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
  uVar11 = *(undefined8 *)((longlong)&(param_1->LensFlareTint).field0_0x0 + 8);
  *(undefined8 *)&(this->LensFlareTint).field0_0x0 =
       *(undefined8 *)&(param_1->LensFlareTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->LensFlareTint).field0_0x0 + 8) = uVar11;
  this->LensFlareBokehSize = param_1->LensFlareBokehSize;
  this->LensFlareThreshold = param_1->LensFlareThreshold;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->LensFlareBokehShape).field0_0x0.DebugPtr, pUVar6 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->LensFlareBokehShape).field0_0x0 = (param_1->LensFlareBokehShape).field0_0x0;
  uVar11 = *(undefined8 *)((longlong)&param_1->LensFlareTints[0].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[0].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[0].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[0].field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&param_1->LensFlareTints[1].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[1].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[1].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[1].field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&param_1->LensFlareTints[2].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[2].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[2].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[2].field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&param_1->LensFlareTints[3].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[3].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[3].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[3].field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&param_1->LensFlareTints[4].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[4].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[4].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[4].field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&param_1->LensFlareTints[5].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[5].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[5].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[5].field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&param_1->LensFlareTints[6].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[6].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[6].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[6].field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&param_1->LensFlareTints[7].field0_0x0 + 8);
  *(undefined8 *)&this->LensFlareTints[7].field0_0x0 =
       *(undefined8 *)&param_1->LensFlareTints[7].field0_0x0;
  *(undefined8 *)((longlong)&this->LensFlareTints[7].field0_0x0 + 8) = uVar11;
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
     (pUVar5 = (param_1->FilmGrainTexture).field0_0x0.DebugPtr, pUVar5 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
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
     (pUVar6 = (param_1->ColorGradingLUT).field0_0x0.DebugPtr, pUVar6 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
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
  fVar12 = param_1->DepthOfFieldMatteBoxFlags[0].Roll;
  this->DepthOfFieldMatteBoxFlags[0].Pitch = param_1->DepthOfFieldMatteBoxFlags[0].Pitch;
  this->DepthOfFieldMatteBoxFlags[0].Roll = fVar12;
  this->DepthOfFieldMatteBoxFlags[0].Length = param_1->DepthOfFieldMatteBoxFlags[0].Length;
  fVar12 = param_1->DepthOfFieldMatteBoxFlags[1].Roll;
  this->DepthOfFieldMatteBoxFlags[1].Pitch = param_1->DepthOfFieldMatteBoxFlags[1].Pitch;
  this->DepthOfFieldMatteBoxFlags[1].Roll = fVar12;
  this->DepthOfFieldMatteBoxFlags[1].Length = param_1->DepthOfFieldMatteBoxFlags[1].Length;
  fVar12 = param_1->DepthOfFieldMatteBoxFlags[2].Roll;
  this->DepthOfFieldMatteBoxFlags[2].Pitch = param_1->DepthOfFieldMatteBoxFlags[2].Pitch;
  this->DepthOfFieldMatteBoxFlags[2].Roll = fVar12;
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
  bVar14 = (this->RayTracingTranslucencyRefraction ^ param_1->RayTracingTranslucencyRefraction) & 1
           ^ this->field_0x735;
  this->field_0x735 = bVar14;
  this->field_0x735 = (bVar14 ^ param_1->field_0x735) & 2 ^ bVar14;
  this->PathTracingMaxBounces = param_1->PathTracingMaxBounces;
  this->PathTracingSamplesPerPixel = param_1->PathTracingSamplesPerPixel;
  this->PathTracingMaxPathIntensity = param_1->PathTracingMaxPathIntensity;
  uVar13 = (ZPULL(*(undefined4 *)&this->field_0x744,0,1) ^
           param_1->PathTracingEnableEmissiveMaterials) & 1 ^ *(undefined4 *)&this->field_0x744;
  *(uint *)&this->field_0x744 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 2 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 4 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 8 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 0x10 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 0x20 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 0x40 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  pFVar2 = &this->WeightedBlendables;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 0x80 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 0x100 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 0x200 ^ uVar13;
  *(uint *)&this->field_0x744 = uVar13;
  *(uint *)&this->field_0x744 = (uVar13 ^ *(uint *)&param_1->field_0x744) & 0x400 ^ uVar13;
  this->LPVFadeRange_DEPRECATED = param_1->LPVFadeRange_DEPRECATED;
  this->LPVDirectionalOcclusionFadeRange_DEPRECATED =
       param_1->LPVDirectionalOcclusionFadeRange_DEPRECATED;
  this->ScreenPercentage_DEPRECATED = param_1->ScreenPercentage_DEPRECATED;
  this->UserFlags = param_1->UserFlags;
  if (pFVar2 != &param_1->WeightedBlendables) {
    iVar3 = (param_1->WeightedBlendables).Array.ArrayNum;
    piVar1 = &(this->WeightedBlendables).Array.ArrayMax;
    iVar4 = *piVar1;
    pFVar9 = (FWeightedBlendable *)(param_1->WeightedBlendables).Array.AllocatorInstance.Data;
    (this->WeightedBlendables).Array.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      ConstructItems<FWeightedBlendable,FWeightedBlendable,int>
                ((pFVar2->Array).AllocatorInstance.Data,pFVar9,iVar3);
    }
  }
  return this;
}

