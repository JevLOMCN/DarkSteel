// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14727a200

UScriptStruct * __cdecl FExponentialHeightFogDynamicState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExponentialHeightFogDynamicState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FExponentialHeightFogDynamicState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExponentialHeightFogDynamicState,
                         (UObject *)pUVar1,L"ExponentialHeightFogDynamicState");
  }
  return Z_Registration_Info_UScriptStruct_FExponentialHeightFogDynamicState.OuterSingleton;
}

// FExponentialHeightFogDynamicState @ 14727f470

FExponentialHeightFogDynamicState * __thiscall
FExponentialHeightFogDynamicState::FExponentialHeightFogDynamicState
          (FExponentialHeightFogDynamicState *this)

{
  undefined1 *puVar1;
  FLinearColor FVar2;
  
  (this->SecondFogData).FogDensity = 0.02;
  (this->SecondFogData).FogHeightFalloff = 0.2;
  (this->SecondFogData).FogHeightOffset = 0.0;
  this->ModifiedFlags = 0;
  this->FogDensity = 0.0;
  this->FogHeightFalloff = 0.0;
  (this->FogInscatteringLuminance).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar2 = FLinearColor::White;
  this->InscatteringColorCubemapAngle = 0.0;
  (this->SkyAtmosphereAmbientContributionColorScale).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->InscatteringColorCubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  FVar2 = FLinearColor::White;
  this->FullyDirectionalInscatteringColorDistance = 0.0;
  this->NonDirectionalInscatteringColorDistance = 0.0;
  this->DirectionalInscatteringExponent = 0.0;
  this->DirectionalInscatteringStartDistance = 0.0;
  (this->InscatteringTextureTint).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = FLinearColor::White;
  this->FogMaxOpacity = 0.0;
  this->StartDistance = 0.0;
  this->EndDistance = 0.0;
  this->FogCutoffDistance = 0.0;
  (this->DirectionalInscatteringLuminance).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->bEnableVolumetricFog = false;
  this->VolumetricFogScatteringDistribution = 0.0;
  (this->VolumetricFogAlbedo).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  FVar2 = FLinearColor::White;
  this->bHoldout = '\0';
  this->bVisibleInRealTimeSkyCaptures = '\0';
  this->bVisibleInReflectionCaptures = '\0';
  this->bRenderInMainPass = '\0';
  this->VolumetricFogExtinctionScale = 0.0;
  this->VolumetricFogDistance = 0.0;
  (this->VolumetricFogEmissive).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->VolumetricFogStartDistance = 0.0;
  this->VolumetricFogNearFadeInDistance = 0.0;
  this->VolumetricFogStaticLightingScatteringIntensity = 0.0;
  this->bOverrideLightColorsWithFogInscatteringColors = false;
  this->Height = 0.0;
  return this;
}

