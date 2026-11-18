// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FExponentialHeightFogSceneInfo @ 145476fb0

FExponentialHeightFogSceneInfo * __thiscall
FExponentialHeightFogSceneInfo::FExponentialHeightFogSceneInfo
          (FExponentialHeightFogSceneInfo *this,ulong64 param_1,
          FExponentialHeightFogDynamicState *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  this->Id = param_1;
  this->FogMaxOpacity = param_2->FogMaxOpacity;
  this->StartDistance = param_2->StartDistance;
  this->EndDistance = param_2->EndDistance;
  fVar7 = __real_3a83126f;
  this->FogCutoffDistance = param_2->FogCutoffDistance;
  this->DirectionalInscatteringExponent = param_2->DirectionalInscatteringExponent;
  this->DirectionalInscatteringStartDistance = param_2->DirectionalInscatteringStartDistance;
  uVar2 = *(undefined8 *)((longlong)&(param_2->DirectionalInscatteringLuminance).field0_0x0 + 8);
  *(undefined8 *)&(this->DirectionalInscatteringColor).field0_0x0 =
       *(undefined8 *)&(param_2->DirectionalInscatteringLuminance).field0_0x0;
  *(undefined8 *)((longlong)&(this->DirectionalInscatteringColor).field0_0x0 + 8) = uVar2;
  this->FogData[0].Height = param_2->Height;
  this->FogData[1].Height = (param_2->SecondFogData).FogHeightOffset + param_2->Height;
  this->FogData[0].Density = param_2->FogDensity * fVar7;
  this->FogData[0].HeightFalloff = param_2->FogHeightFalloff * fVar7;
  this->FogData[1].Density = (param_2->SecondFogData).FogDensity * fVar7;
  this->FogData[1].HeightFalloff = (param_2->SecondFogData).FogHeightFalloff * fVar7;
  lVar4 = 0x44;
  if ((param_2->InscatteringColorCubemap).field0_0x0.DebugPtr == (UTextureCube *)0x0) {
    lVar4 = 0x18;
  }
  puVar1 = (undefined8 *)((longlong)&param_2->ModifiedFlags + lVar4);
  uVar2 = puVar1[1];
  *(undefined8 *)&(this->FogColor).field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&(this->FogColor).field0_0x0 + 8) = uVar2;
  this->InscatteringColorCubemap = (UTextureCube *)(param_2->InscatteringColorCubemap).field0_0x0;
  this->InscatteringColorCubemapAngle = param_2->InscatteringColorCubemapAngle * __real_3c8efa35;
  this->FullyDirectionalInscatteringColorDistance =
       param_2->FullyDirectionalInscatteringColorDistance;
  this->NonDirectionalInscatteringColorDistance = param_2->NonDirectionalInscatteringColorDistance;
  this->bEnableVolumetricFog = param_2->bEnableVolumetricFog;
  fVar7 = param_2->VolumetricFogScatteringDistribution;
  if (__real_3f7d70a4 <= param_2->VolumetricFogScatteringDistribution) {
    fVar7 = __real_3f7d70a4;
  }
  if (fVar7 <= __real_bf7d70a4) {
    fVar7 = __real_bf7d70a4;
  }
  this->VolumetricFogScatteringDistribution = fVar7;
  fVar7 = FLinearColor::sRGBToLinearTable[(param_2->VolumetricFogAlbedo).field0_0x0._s_0.G];
  fVar6 = FLinearColor::sRGBToLinearTable[(param_2->VolumetricFogAlbedo).field0_0x0._s_0.B];
  fVar5 = (float)(param_2->VolumetricFogAlbedo).field0_0x0._s_0.A * __real_3b808081;
  (this->VolumetricFogAlbedo).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[(param_2->VolumetricFogAlbedo).field0_0x0._s_0.R];
  (this->VolumetricFogAlbedo).field0_0x0._s_0.G = fVar7;
  (this->VolumetricFogAlbedo).field0_0x0._s_0.B = fVar6;
  (this->VolumetricFogAlbedo).field0_0x0._s_0.A = fVar5;
  uVar2 = *(undefined8 *)((longlong)&(param_2->VolumetricFogEmissive).field0_0x0 + 8);
  *(undefined8 *)&(this->VolumetricFogEmissive).field0_0x0 =
       *(undefined8 *)&(param_2->VolumetricFogEmissive).field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumetricFogEmissive).field0_0x0 + 8) = uVar2;
  bVar3 = DoesProjectSupportExpFogMatchesVolumetricFog();
  fVar7 = __real_38d1b717;
  if (bVar3) {
    fVar7 = __real_3f800000;
  }
  fVar6 = fVar7 * (this->VolumetricFogEmissive).field0_0x0._s_0.R;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (this->VolumetricFogEmissive).field0_0x0._s_0.R = fVar6;
  fVar6 = fVar7 * (this->VolumetricFogEmissive).field0_0x0._s_0.G;
  fVar7 = fVar7 * (this->VolumetricFogEmissive).field0_0x0._s_0.B;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  (this->VolumetricFogEmissive).field0_0x0._s_0.G = fVar6;
  (this->VolumetricFogEmissive).field0_0x0._s_0.B = fVar7;
  fVar7 = param_2->VolumetricFogExtinctionScale;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  this->VolumetricFogExtinctionScale = fVar7;
  fVar7 = param_2->VolumetricFogDistance + param_2->VolumetricFogStartDistance;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  this->VolumetricFogDistance = fVar7;
  fVar7 = param_2->VolumetricFogStaticLightingScatteringIntensity;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  this->VolumetricFogStaticLightingScatteringIntensity = fVar7;
  this->bOverrideLightColorsWithFogInscatteringColors =
       param_2->bOverrideLightColorsWithFogInscatteringColors;
  this->bHoldout = param_2->bHoldout;
  this->bRenderInMainPass = param_2->bRenderInMainPass;
  this->bVisibleInReflectionCaptures = param_2->bVisibleInReflectionCaptures;
  this->bVisibleInRealTimeSkyCaptures = param_2->bVisibleInRealTimeSkyCaptures;
  this->VolumetricFogStartDistance = param_2->VolumetricFogStartDistance;
  this->VolumetricFogNearFadeInDistance = param_2->VolumetricFogNearFadeInDistance;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_2->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8);
  *(undefined8 *)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 =
       *(undefined8 *)&(param_2->SkyAtmosphereAmbientContributionColorScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->SkyAtmosphereAmbientContributionColorScale).field0_0x0 + 8) =
       uVar2;
  return this;
}

