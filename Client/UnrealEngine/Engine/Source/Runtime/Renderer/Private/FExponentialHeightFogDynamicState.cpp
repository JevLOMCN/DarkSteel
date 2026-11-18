// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FExponentialHeightFogDynamicState @ 1456dc520

FExponentialHeightFogDynamicState * __thiscall
FExponentialHeightFogDynamicState::FExponentialHeightFogDynamicState
          (FExponentialHeightFogDynamicState *this,FExponentialHeightFogDynamicState *param_1)

{
  UTextureCube *pUVar1;
  undefined8 uVar2;
  float fVar3;
  byte bVar4;
  
  this->ModifiedFlags = param_1->ModifiedFlags;
  this->FogDensity = param_1->FogDensity;
  this->FogHeightFalloff = param_1->FogHeightFalloff;
  fVar3 = (param_1->SecondFogData).FogHeightFalloff;
  (this->SecondFogData).FogDensity = (param_1->SecondFogData).FogDensity;
  (this->SecondFogData).FogHeightFalloff = fVar3;
  (this->SecondFogData).FogHeightOffset = (param_1->SecondFogData).FogHeightOffset;
  uVar2 = *(undefined8 *)((longlong)&(param_1->FogInscatteringLuminance).field0_0x0 + 8);
  *(undefined8 *)&(this->FogInscatteringLuminance).field0_0x0 =
       *(undefined8 *)&(param_1->FogInscatteringLuminance).field0_0x0;
  *(undefined8 *)((longlong)&(this->FogInscatteringLuminance).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8);
  *(undefined8 *)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 =
       *(undefined8 *)&(param_1->SkyAtmosphereAmbientContributionColorScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8) =
       uVar2;
  pUVar1 = (param_1->InscatteringColorCubemap).field0_0x0.DebugPtr;
  (this->InscatteringColorCubemap).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UTextureCube *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->InscatteringColorCubemapAngle = param_1->InscatteringColorCubemapAngle;
  uVar2 = *(undefined8 *)((longlong)&(param_1->InscatteringTextureTint).field0_0x0 + 8);
  *(undefined8 *)&(this->InscatteringTextureTint).field0_0x0 =
       *(undefined8 *)&(param_1->InscatteringTextureTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->InscatteringTextureTint).field0_0x0 + 8) = uVar2;
  this->FullyDirectionalInscatteringColorDistance =
       param_1->FullyDirectionalInscatteringColorDistance;
  this->NonDirectionalInscatteringColorDistance = param_1->NonDirectionalInscatteringColorDistance;
  this->DirectionalInscatteringExponent = param_1->DirectionalInscatteringExponent;
  this->DirectionalInscatteringStartDistance = param_1->DirectionalInscatteringStartDistance;
  uVar2 = *(undefined8 *)((longlong)&(param_1->DirectionalInscatteringLuminance).field0_0x0 + 8);
  *(undefined8 *)&(this->DirectionalInscatteringLuminance).field0_0x0 =
       *(undefined8 *)&(param_1->DirectionalInscatteringLuminance).field0_0x0;
  *(undefined8 *)((longlong)&(this->DirectionalInscatteringLuminance).field0_0x0 + 8) = uVar2;
  this->FogMaxOpacity = param_1->FogMaxOpacity;
  this->StartDistance = param_1->StartDistance;
  this->EndDistance = param_1->EndDistance;
  this->FogCutoffDistance = param_1->FogCutoffDistance;
  this->bEnableVolumetricFog = param_1->bEnableVolumetricFog;
  this->VolumetricFogScatteringDistribution = param_1->VolumetricFogScatteringDistribution;
  (this->VolumetricFogAlbedo).field0_0x0 = (param_1->VolumetricFogAlbedo).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->VolumetricFogEmissive).field0_0x0 + 8);
  *(undefined8 *)&(this->VolumetricFogEmissive).field0_0x0 =
       *(undefined8 *)&(param_1->VolumetricFogEmissive).field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumetricFogEmissive).field0_0x0 + 8) = uVar2;
  this->VolumetricFogExtinctionScale = param_1->VolumetricFogExtinctionScale;
  this->VolumetricFogDistance = param_1->VolumetricFogDistance;
  this->VolumetricFogStartDistance = param_1->VolumetricFogStartDistance;
  this->VolumetricFogNearFadeInDistance = param_1->VolumetricFogNearFadeInDistance;
  this->VolumetricFogStaticLightingScatteringIntensity =
       param_1->VolumetricFogStaticLightingScatteringIntensity;
  this->bOverrideLightColorsWithFogInscatteringColors =
       param_1->bOverrideLightColorsWithFogInscatteringColors;
  bVar4 = (this->bHoldout ^ param_1->bHoldout) & 1 ^ this->field_0xb5;
  this->field_0xb5 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0xb5) & 2 ^ bVar4;
  this->field_0xb5 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0xb5) & 4 ^ bVar4;
  this->field_0xb5 = bVar4;
  this->field_0xb5 = (bVar4 ^ param_1->field_0xb5) & 8 ^ bVar4;
  this->Height = param_1->Height;
  return this;
}

// Apply @ 1456f44f0

void __thiscall
FExponentialHeightFogDynamicState::Apply
          (FExponentialHeightFogDynamicState *this,FStateStreamCopyContext *param_1,
          FExponentialHeightFogDynamicState *param_2)

{
  float fVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  UTextureCube *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  
  if (((param_2->ModifiedFlags & 1) != 0) &&
     (fVar1 = param_2->FogDensity, fVar1 != this->FogDensity)) {
    this->ModifiedFlags = this->ModifiedFlags | 1;
    this->FogDensity = fVar1;
  }
  if (((param_2->ModifiedFlags & 2) != 0) &&
     (fVar1 = param_2->FogHeightFalloff, fVar1 != this->FogHeightFalloff)) {
    this->ModifiedFlags = this->ModifiedFlags | 2;
    this->FogHeightFalloff = fVar1;
  }
  if (((param_2->ModifiedFlags & 4) != 0) &&
     ((((param_2->SecondFogData).FogDensity != (this->SecondFogData).FogDensity ||
       ((param_2->SecondFogData).FogHeightFalloff != (this->SecondFogData).FogHeightFalloff)) ||
      ((param_2->SecondFogData).FogHeightOffset != (this->SecondFogData).FogHeightOffset)))) {
    fVar1 = (param_2->SecondFogData).FogHeightFalloff;
    (this->SecondFogData).FogDensity = (param_2->SecondFogData).FogDensity;
    (this->SecondFogData).FogHeightFalloff = fVar1;
    fVar1 = (param_2->SecondFogData).FogHeightOffset;
    this->ModifiedFlags = this->ModifiedFlags | 4;
    (this->SecondFogData).FogHeightOffset = fVar1;
  }
  if (((param_2->ModifiedFlags & 8) != 0) &&
     ((((param_2->FogInscatteringLuminance).field0_0x0._s_0.R !=
        (this->FogInscatteringLuminance).field0_0x0._s_0.R ||
       ((param_2->FogInscatteringLuminance).field0_0x0._s_0.G !=
        (this->FogInscatteringLuminance).field0_0x0._s_0.G)) ||
      (((param_2->FogInscatteringLuminance).field0_0x0._s_0.B !=
        (this->FogInscatteringLuminance).field0_0x0._s_0.B ||
       ((param_2->FogInscatteringLuminance).field0_0x0._s_0.A !=
        (this->FogInscatteringLuminance).field0_0x0._s_0.A)))))) {
    uVar8 = *(undefined8 *)&(param_2->FogInscatteringLuminance).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->FogInscatteringLuminance).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 8;
    *(undefined8 *)&(this->FogInscatteringLuminance).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->FogInscatteringLuminance).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x10) != 0) &&
     ((((param_2->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.R !=
        (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.R ||
       ((param_2->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.G !=
        (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.G)) ||
      (((param_2->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.B !=
        (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.B ||
       ((param_2->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.A !=
        (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0.A)))))) {
    uVar8 = *(undefined8 *)&(param_2->SkyAtmosphereAmbientContributionColorScale).field0_0x0;
    uVar9 = *(undefined8 *)
             ((longlong)&(param_2->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x10;
    *(undefined8 *)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8) =
         uVar9;
  }
  if (((param_2->ModifiedFlags & 0x20) != 0) &&
     (pUVar7 = (param_2->InscatteringColorCubemap).field0_0x0.DebugPtr,
     (this->InscatteringColorCubemap).field0_0x0.DebugPtr != pUVar7)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UTextureCube *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->InscatteringColorCubemap).field0_0x0 = (param_2->InscatteringColorCubemap).field0_0x0;
    this->ModifiedFlags = this->ModifiedFlags | 0x20;
  }
  if (((param_2->ModifiedFlags & 0x40) != 0) &&
     (fVar1 = param_2->InscatteringColorCubemapAngle, fVar1 != this->InscatteringColorCubemapAngle))
  {
    this->ModifiedFlags = this->ModifiedFlags | 0x40;
    this->InscatteringColorCubemapAngle = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x80) != 0) &&
     (((((param_2->InscatteringTextureTint).field0_0x0._s_0.R !=
         (this->InscatteringTextureTint).field0_0x0._s_0.R ||
        ((param_2->InscatteringTextureTint).field0_0x0._s_0.G !=
         (this->InscatteringTextureTint).field0_0x0._s_0.G)) ||
       ((param_2->InscatteringTextureTint).field0_0x0._s_0.B !=
        (this->InscatteringTextureTint).field0_0x0._s_0.B)) ||
      ((param_2->InscatteringTextureTint).field0_0x0._s_0.A !=
       (this->InscatteringTextureTint).field0_0x0._s_0.A)))) {
    uVar8 = *(undefined8 *)&(param_2->InscatteringTextureTint).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->InscatteringTextureTint).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x80;
    *(undefined8 *)&(this->InscatteringTextureTint).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->InscatteringTextureTint).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x100) != 0) &&
     (fVar1 = param_2->FullyDirectionalInscatteringColorDistance,
     fVar1 != this->FullyDirectionalInscatteringColorDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x100;
    this->FullyDirectionalInscatteringColorDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x200) != 0) &&
     (fVar1 = param_2->NonDirectionalInscatteringColorDistance,
     fVar1 != this->NonDirectionalInscatteringColorDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x200;
    this->NonDirectionalInscatteringColorDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x400) != 0) &&
     (fVar1 = param_2->DirectionalInscatteringExponent,
     fVar1 != this->DirectionalInscatteringExponent)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x400;
    this->DirectionalInscatteringExponent = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x800) != 0) &&
     (fVar1 = param_2->DirectionalInscatteringStartDistance,
     fVar1 != this->DirectionalInscatteringStartDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x800;
    this->DirectionalInscatteringStartDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x1000) != 0) &&
     (((((param_2->DirectionalInscatteringLuminance).field0_0x0._s_0.R !=
         (this->DirectionalInscatteringLuminance).field0_0x0._s_0.R ||
        ((param_2->DirectionalInscatteringLuminance).field0_0x0._s_0.G !=
         (this->DirectionalInscatteringLuminance).field0_0x0._s_0.G)) ||
       ((param_2->DirectionalInscatteringLuminance).field0_0x0._s_0.B !=
        (this->DirectionalInscatteringLuminance).field0_0x0._s_0.B)) ||
      ((param_2->DirectionalInscatteringLuminance).field0_0x0._s_0.A !=
       (this->DirectionalInscatteringLuminance).field0_0x0._s_0.A)))) {
    uVar8 = *(undefined8 *)&(param_2->DirectionalInscatteringLuminance).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->DirectionalInscatteringLuminance).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x1000;
    *(undefined8 *)&(this->DirectionalInscatteringLuminance).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->DirectionalInscatteringLuminance).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x2000) != 0) &&
     (fVar1 = param_2->FogMaxOpacity, fVar1 != this->FogMaxOpacity)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x2000;
    this->FogMaxOpacity = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x4000) != 0) &&
     (fVar1 = param_2->StartDistance, fVar1 != this->StartDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x4000;
    this->StartDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x8000) != 0) &&
     (fVar1 = param_2->EndDistance, fVar1 != this->EndDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x8000;
    this->EndDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x10000) != 0) &&
     (fVar1 = param_2->FogCutoffDistance, fVar1 != this->FogCutoffDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x10000;
    this->FogCutoffDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x20000) != 0) &&
     (bVar2 = param_2->bEnableVolumetricFog, this->bEnableVolumetricFog != bVar2)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x20000;
    this->bEnableVolumetricFog = bVar2;
  }
  if (((param_2->ModifiedFlags & 0x40000) != 0) &&
     (fVar1 = param_2->VolumetricFogScatteringDistribution,
     fVar1 != this->VolumetricFogScatteringDistribution)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x40000;
    this->VolumetricFogScatteringDistribution = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x80000) != 0) &&
     (uVar6 = (param_2->VolumetricFogAlbedo).field0_0x0.Bits,
     (this->VolumetricFogAlbedo).field0_0x0.Bits != uVar6)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x80000;
    (this->VolumetricFogAlbedo).field0_0x0.Bits = uVar6;
  }
  if (((param_2->ModifiedFlags & 0x100000) != 0) &&
     (((((param_2->VolumetricFogEmissive).field0_0x0._s_0.R !=
         (this->VolumetricFogEmissive).field0_0x0._s_0.R ||
        ((param_2->VolumetricFogEmissive).field0_0x0._s_0.G !=
         (this->VolumetricFogEmissive).field0_0x0._s_0.G)) ||
       ((param_2->VolumetricFogEmissive).field0_0x0._s_0.B !=
        (this->VolumetricFogEmissive).field0_0x0._s_0.B)) ||
      ((param_2->VolumetricFogEmissive).field0_0x0._s_0.A !=
       (this->VolumetricFogEmissive).field0_0x0._s_0.A)))) {
    uVar8 = *(undefined8 *)&(param_2->VolumetricFogEmissive).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->VolumetricFogEmissive).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x100000;
    *(undefined8 *)&(this->VolumetricFogEmissive).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->VolumetricFogEmissive).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x200000) != 0) &&
     (fVar1 = param_2->VolumetricFogExtinctionScale, fVar1 != this->VolumetricFogExtinctionScale)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x200000;
    this->VolumetricFogExtinctionScale = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x400000) != 0) &&
     (fVar1 = param_2->VolumetricFogDistance, fVar1 != this->VolumetricFogDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x400000;
    this->VolumetricFogDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x800000) != 0) &&
     (fVar1 = param_2->VolumetricFogStartDistance, fVar1 != this->VolumetricFogStartDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x800000;
    this->VolumetricFogStartDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x1000000) != 0) &&
     (fVar1 = param_2->VolumetricFogNearFadeInDistance,
     fVar1 != this->VolumetricFogNearFadeInDistance)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x1000000;
    this->VolumetricFogNearFadeInDistance = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x2000000) != 0) &&
     (fVar1 = param_2->VolumetricFogStaticLightingScatteringIntensity,
     fVar1 != this->VolumetricFogStaticLightingScatteringIntensity)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x2000000;
    this->VolumetricFogStaticLightingScatteringIntensity = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x4000000) != 0) &&
     (bVar2 = param_2->bOverrideLightColorsWithFogInscatteringColors,
     this->bOverrideLightColorsWithFogInscatteringColors != bVar2)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x4000000;
    this->bOverrideLightColorsWithFogInscatteringColors = bVar2;
  }
  if ((param_2->ModifiedFlags & 0x8000000) != 0) {
    uVar3 = this->field_0xb5;
    if (((param_2->bHoldout ^ this->bHoldout) & 1) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x8000000;
      this->field_0xb5 = (this->bHoldout ^ param_2->bHoldout) & 1 ^ uVar3;
    }
  }
  if ((param_2->ModifiedFlags & 0x10000000) != 0) {
    bVar4 = param_2->field_0xb5;
    bVar5 = this->field_0xb5;
    if (((bVar4 ^ bVar5) & 2) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x10000000;
      this->field_0xb5 = (bVar5 ^ bVar4) & 2 ^ bVar5;
    }
  }
  if ((param_2->ModifiedFlags & 0x20000000) != 0) {
    bVar4 = param_2->field_0xb5;
    bVar5 = this->field_0xb5;
    if (((bVar4 ^ bVar5) & 4) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x20000000;
      this->field_0xb5 = (bVar5 ^ bVar4) & 4 ^ bVar5;
    }
  }
  if ((param_2->ModifiedFlags & 0x40000000) != 0) {
    bVar4 = param_2->field_0xb5;
    bVar5 = this->field_0xb5;
    if (((bVar4 ^ bVar5) & 8) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x40000000;
      this->field_0xb5 = (bVar5 ^ bVar4) & 8 ^ bVar5;
    }
  }
  if (((int)param_2->ModifiedFlags < 0) && (fVar1 = param_2->Height, fVar1 != this->Height)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x80000000;
    this->Height = fVar1;
  }
  return;
}

// Interpolate @ 1457177e0

void __thiscall
FExponentialHeightFogDynamicState::Interpolate
          (FExponentialHeightFogDynamicState *this,FStateStreamInterpolateContext *param_1,
          FExponentialHeightFogDynamicState *param_2,FExponentialHeightFogDynamicState *param_3)

{
  double *pdVar1;
  undefined1 *puVar2;
  UTextureCube *pUVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  this->ModifiedFlags = 0;
  bVar7 = (param_3->ModifiedFlags & 1) != 0;
  if (bVar7) {
    this->ModifiedFlags = 1;
    this->FogDensity =
         (float)((double)(param_3->FogDensity - param_2->FogDensity) * param_1->Factor) +
         param_2->FogDensity;
  }
  uVar5 = (uint)bVar7;
  if ((param_3->ModifiedFlags & 2) != 0) {
    uVar5 = uVar5 | 2;
    this->ModifiedFlags = uVar5;
    this->FogHeightFalloff =
         (float)((double)(param_3->FogHeightFalloff - param_2->FogHeightFalloff) * param_1->Factor)
         + param_2->FogHeightFalloff;
  }
  if ((param_3->ModifiedFlags & 4) != 0) {
    this->ModifiedFlags = uVar5 | 4;
    (this->SecondFogData).FogDensity =
         (float)((double)((param_3->SecondFogData).FogDensity - (param_2->SecondFogData).FogDensity)
                * param_1->Factor) + (param_2->SecondFogData).FogDensity;
    (this->SecondFogData).FogHeightFalloff =
         (float)((double)((param_3->SecondFogData).FogHeightFalloff -
                         (param_2->SecondFogData).FogHeightFalloff) * param_1->Factor) +
         (param_2->SecondFogData).FogHeightFalloff;
    (this->SecondFogData).FogHeightOffset =
         (float)((double)((param_3->SecondFogData).FogHeightOffset -
                         (param_2->SecondFogData).FogHeightOffset) * param_1->Factor) +
         (param_2->SecondFogData).FogHeightOffset;
  }
  if ((param_3->ModifiedFlags & 8) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 8;
    uVar4 = *(undefined8 *)((longlong)&(param_3->FogInscatteringLuminance).field0_0x0 + 8);
    *(undefined8 *)&(this->FogInscatteringLuminance).field0_0x0 =
         *(undefined8 *)&(param_3->FogInscatteringLuminance).field0_0x0;
    *(undefined8 *)((longlong)&(this->FogInscatteringLuminance).field0_0x0 + 8) = uVar4;
  }
  if ((param_3->ModifiedFlags & 0x10) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x10;
    uVar4 = *(undefined8 *)
             ((longlong)&(param_3->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8);
    *(undefined8 *)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 =
         *(undefined8 *)&(param_3->SkyAtmosphereAmbientContributionColorScale).field0_0x0;
    *(undefined8 *)((longlong)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8) =
         uVar4;
  }
  if ((param_3->ModifiedFlags & 0x20) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (param_3->InscatteringColorCubemap).field0_0x0.DebugPtr,
       pUVar3 != (UTextureCube *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->InscatteringColorCubemap).field0_0x0 = (param_3->InscatteringColorCubemap).field0_0x0;
  }
  if ((param_3->ModifiedFlags & 0x40) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x40;
    this->InscatteringColorCubemapAngle =
         (float)((double)(param_3->InscatteringColorCubemapAngle -
                         param_2->InscatteringColorCubemapAngle) * param_1->Factor) +
         param_2->InscatteringColorCubemapAngle;
  }
  if ((param_3->ModifiedFlags & 0x80) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x80;
    uVar4 = *(undefined8 *)((longlong)&(param_3->InscatteringTextureTint).field0_0x0 + 8);
    *(undefined8 *)&(this->InscatteringTextureTint).field0_0x0 =
         *(undefined8 *)&(param_3->InscatteringTextureTint).field0_0x0;
    *(undefined8 *)((longlong)&(this->InscatteringTextureTint).field0_0x0 + 8) = uVar4;
  }
  if ((param_3->ModifiedFlags & 0x100) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x100;
    this->FullyDirectionalInscatteringColorDistance =
         (float)((double)(param_3->FullyDirectionalInscatteringColorDistance -
                         param_2->FullyDirectionalInscatteringColorDistance) * param_1->Factor) +
         param_2->FullyDirectionalInscatteringColorDistance;
  }
  if ((param_3->ModifiedFlags & 0x200) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x200;
    this->NonDirectionalInscatteringColorDistance =
         (float)((double)(param_3->NonDirectionalInscatteringColorDistance -
                         param_2->NonDirectionalInscatteringColorDistance) * param_1->Factor) +
         param_2->NonDirectionalInscatteringColorDistance;
  }
  if ((param_3->ModifiedFlags & 0x400) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x400;
    this->DirectionalInscatteringExponent =
         (float)((double)(param_3->DirectionalInscatteringExponent -
                         param_2->DirectionalInscatteringExponent) * param_1->Factor) +
         param_2->DirectionalInscatteringExponent;
  }
  if ((param_3->ModifiedFlags & 0x800) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x800;
    this->DirectionalInscatteringStartDistance =
         (float)((double)(param_3->DirectionalInscatteringStartDistance -
                         param_2->DirectionalInscatteringStartDistance) * param_1->Factor) +
         param_2->DirectionalInscatteringStartDistance;
  }
  if ((param_3->ModifiedFlags & 0x1000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x1000;
    uVar4 = *(undefined8 *)((longlong)&(param_3->DirectionalInscatteringLuminance).field0_0x0 + 8);
    *(undefined8 *)&(this->DirectionalInscatteringLuminance).field0_0x0 =
         *(undefined8 *)&(param_3->DirectionalInscatteringLuminance).field0_0x0;
    *(undefined8 *)((longlong)&(this->DirectionalInscatteringLuminance).field0_0x0 + 8) = uVar4;
  }
  if ((param_3->ModifiedFlags & 0x2000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x2000;
    this->FogMaxOpacity =
         (float)((double)(param_3->FogMaxOpacity - param_2->FogMaxOpacity) * param_1->Factor) +
         param_2->FogMaxOpacity;
  }
  if ((param_3->ModifiedFlags & 0x4000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x4000;
    this->StartDistance =
         (float)((double)(param_3->StartDistance - param_2->StartDistance) * param_1->Factor) +
         param_2->StartDistance;
  }
  if ((param_3->ModifiedFlags & 0x8000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x8000;
    this->EndDistance =
         (float)((double)(param_3->EndDistance - param_2->EndDistance) * param_1->Factor) +
         param_2->EndDistance;
  }
  if ((param_3->ModifiedFlags & 0x10000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x10000;
    this->FogCutoffDistance =
         (float)((double)(param_3->FogCutoffDistance - param_2->FogCutoffDistance) * param_1->Factor
                ) + param_2->FogCutoffDistance;
  }
  if ((param_3->ModifiedFlags & 0x20000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x20000;
    this->bEnableVolumetricFog = param_3->bEnableVolumetricFog;
  }
  if ((param_3->ModifiedFlags & 0x40000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x40000;
    this->VolumetricFogScatteringDistribution =
         (float)((double)(param_3->VolumetricFogScatteringDistribution -
                         param_2->VolumetricFogScatteringDistribution) * param_1->Factor) +
         param_2->VolumetricFogScatteringDistribution;
  }
  if ((param_3->ModifiedFlags & 0x80000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x80000;
    (this->VolumetricFogAlbedo).field0_0x0 = (param_3->VolumetricFogAlbedo).field0_0x0;
  }
  if ((param_3->ModifiedFlags & 0x100000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x100000;
    uVar4 = *(undefined8 *)((longlong)&(param_3->VolumetricFogEmissive).field0_0x0 + 8);
    *(undefined8 *)&(this->VolumetricFogEmissive).field0_0x0 =
         *(undefined8 *)&(param_3->VolumetricFogEmissive).field0_0x0;
    *(undefined8 *)((longlong)&(this->VolumetricFogEmissive).field0_0x0 + 8) = uVar4;
  }
  pdVar1 = &param_1->Factor;
  if ((param_3->ModifiedFlags & 0x200000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x200000;
    this->VolumetricFogExtinctionScale =
         (float)((double)(param_3->VolumetricFogExtinctionScale -
                         param_2->VolumetricFogExtinctionScale) * *pdVar1) +
         param_2->VolumetricFogExtinctionScale;
  }
  if ((param_3->ModifiedFlags & 0x400000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x400000;
    this->VolumetricFogDistance =
         (float)((double)(param_3->VolumetricFogDistance - param_2->VolumetricFogDistance) * *pdVar1
                ) + param_2->VolumetricFogDistance;
  }
  if ((param_3->ModifiedFlags & 0x800000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x800000;
    this->VolumetricFogStartDistance =
         (float)((double)(param_3->VolumetricFogStartDistance - param_2->VolumetricFogStartDistance)
                * *pdVar1) + param_2->VolumetricFogStartDistance;
  }
  if ((param_3->ModifiedFlags & 0x1000000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x1000000;
    this->VolumetricFogNearFadeInDistance =
         (float)((double)(param_3->VolumetricFogNearFadeInDistance -
                         param_2->VolumetricFogNearFadeInDistance) * param_1->Factor) +
         param_2->VolumetricFogNearFadeInDistance;
  }
  if ((param_3->ModifiedFlags & 0x2000000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x2000000;
    this->VolumetricFogStaticLightingScatteringIntensity =
         (float)((double)(param_3->VolumetricFogStaticLightingScatteringIntensity -
                         param_2->VolumetricFogStaticLightingScatteringIntensity) * param_1->Factor)
         + param_2->VolumetricFogStaticLightingScatteringIntensity;
  }
  if ((param_3->ModifiedFlags & 0x4000000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x4000000;
    this->bOverrideLightColorsWithFogInscatteringColors =
         param_3->bOverrideLightColorsWithFogInscatteringColors;
  }
  puVar6 = &this->field_0xb5;
  puVar2 = &param_3->field_0xb5;
  if ((param_3->ModifiedFlags & 0x8000000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x8000000;
    *puVar6 = *puVar6 ^ (this->bHoldout ^ param_3->bHoldout) & 1;
  }
  if ((param_3->ModifiedFlags & 0x10000000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x10000000;
    *puVar6 = *puVar6 ^ (*puVar6 ^ *puVar2) & 2;
  }
  if ((param_3->ModifiedFlags & 0x20000000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x20000000;
    *puVar6 = *puVar6 ^ (*puVar6 ^ *puVar2) & 4;
  }
  puVar6 = &this->field_0xb5;
  if ((param_3->ModifiedFlags & 0x40000000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x40000000;
    *puVar6 = *puVar6 ^ (*puVar6 ^ param_3->field_0xb5) & 8;
  }
  if ((int)param_3->ModifiedFlags < 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x80000000;
    this->Height = (float)((double)(param_3->Height - param_2->Height) * param_1->Factor) +
                   param_2->Height;
  }
  return;
}

