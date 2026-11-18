// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FInputs @ 145195060

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FInputs * __thiscall FDefaultTemporalUpscaler::FInputs::FInputs(FInputs *this)

{
  this->bAllowFullResSlice = false;
  this->bGenerateSceneColorHalfRes = false;
  this->bGenerateSceneColorQuarterRes = false;
  this->bGenerateSceneColorEighthRes = false;
  (this->SceneColor).Texture = (FRDGTexture *)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneDepth).Texture = (FRDGTexture *)0x0;
  (this->SceneDepth).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneDepth).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneVelocity).Texture = (FRDGTexture *)0x0;
  (this->SceneVelocity).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneVelocity).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined8 *)
   ((longlong)&(this->PostDOFTranslucencyResources).ViewRect.field0_0x0._s_0.Min.field0_0x0 + 4) = 0
  ;
  *(undefined4 *)((longlong)&(this->PostDOFTranslucencyResources).ViewRect.field0_0x0 + 0xc) = 0;
  (this->PostDOFTranslucencyResources).ColorTexture.Target = (FRDGTexture *)0x0;
  (this->PostDOFTranslucencyResources).ColorTexture.Resolve = (FRDGTexture *)0x0;
  (this->PostDOFTranslucencyResources).ColorModulateTexture.Target = (FRDGTexture *)0x0;
  (this->PostDOFTranslucencyResources).ColorModulateTexture.Resolve = (FRDGTexture *)0x0;
  (this->PostDOFTranslucencyResources).DepthTexture.Target = (FRDGTexture *)0x0;
  (this->PostDOFTranslucencyResources).DepthTexture.Resolve = (FRDGTexture *)0x0;
  (this->FlickeringInputTexture).Texture = (FRDGTexture *)0x0;
  (this->FlickeringInputTexture).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->FlickeringInputTexture).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->LensDistortionLUT).DistortingDisplacementTexture = (FRDGTexture *)0x0;
  (this->LensDistortionLUT).UndistortingDisplacementTexture = (FRDGTexture *)0x0;
  this->bGenerateOutputMip1 = false;
  this->bGenerateVelocityFlattenTextures = false;
  *(undefined8 *)&this->PostDOFTranslucencyResources = 7;
  (this->LensDistortionLUT).ResolutionFraction = 1.0;
  (this->LensDistortionLUT).DistortionOverscan = 1.0;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.X = 0x20;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.Y = 0x14;
  return this;
}

// operator= @ 145196190

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FInputs * __thiscall FDefaultTemporalUpscaler::FInputs::operator=(FInputs *this,FInputs *param_1)

{
  FRDGTexture *pFVar1;
  TIntPoint<int>_u_0 TVar2;
  float fVar3;
  
  this->bAllowFullResSlice = param_1->bAllowFullResSlice;
  this->bGenerateSceneColorHalfRes = param_1->bGenerateSceneColorHalfRes;
  this->bGenerateSceneColorQuarterRes = param_1->bGenerateSceneColorQuarterRes;
  this->bGenerateSceneColorEighthRes = param_1->bGenerateSceneColorEighthRes;
  this->bGenerateOutputMip1 = param_1->bGenerateOutputMip1;
  this->bGenerateVelocityFlattenTextures = param_1->bGenerateVelocityFlattenTextures;
  this->DownsampleOverrideFormat = param_1->DownsampleOverrideFormat;
  (this->SceneColor).Texture = (param_1->SceneColor).Texture;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->SceneDepth).Texture = (param_1->SceneDepth).Texture;
  (this->SceneDepth).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->SceneDepth).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->SceneDepth).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->SceneDepth).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->SceneVelocity).Texture = (param_1->SceneVelocity).Texture;
  (this->SceneVelocity).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->SceneVelocity).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->SceneVelocity).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->SceneVelocity).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PostDOFTranslucencyResources).Pass = (param_1->PostDOFTranslucencyResources).Pass;
  (this->PostDOFTranslucencyResources).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PostDOFTranslucencyResources).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PostDOFTranslucencyResources).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PostDOFTranslucencyResources).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  pFVar1 = (param_1->PostDOFTranslucencyResources).ColorTexture.Resolve;
  (this->PostDOFTranslucencyResources).ColorTexture.Target =
       (param_1->PostDOFTranslucencyResources).ColorTexture.Target;
  (this->PostDOFTranslucencyResources).ColorTexture.Resolve = pFVar1;
  pFVar1 = (param_1->PostDOFTranslucencyResources).ColorModulateTexture.Resolve;
  (this->PostDOFTranslucencyResources).ColorModulateTexture.Target =
       (param_1->PostDOFTranslucencyResources).ColorModulateTexture.Target;
  (this->PostDOFTranslucencyResources).ColorModulateTexture.Resolve = pFVar1;
  pFVar1 = (param_1->PostDOFTranslucencyResources).DepthTexture.Resolve;
  (this->PostDOFTranslucencyResources).DepthTexture.Target =
       (param_1->PostDOFTranslucencyResources).DepthTexture.Target;
  (this->PostDOFTranslucencyResources).DepthTexture.Resolve = pFVar1;
  (this->FlickeringInputTexture).Texture = (param_1->FlickeringInputTexture).Texture;
  (this->FlickeringInputTexture).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->FlickeringInputTexture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->FlickeringInputTexture).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->FlickeringInputTexture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  pFVar1 = (param_1->LensDistortionLUT).UndistortingDisplacementTexture;
  (this->LensDistortionLUT).DistortingDisplacementTexture =
       (param_1->LensDistortionLUT).DistortingDisplacementTexture;
  (this->LensDistortionLUT).UndistortingDisplacementTexture = pFVar1;
  fVar3 = (param_1->LensDistortionLUT).DistortionOverscan;
  TVar2 = (param_1->LensDistortionLUT).DistortionGridDimensions.field0_0x0;
  (this->LensDistortionLUT).ResolutionFraction = (param_1->LensDistortionLUT).ResolutionFraction;
  (this->LensDistortionLUT).DistortionOverscan = fVar3;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0 = TVar2;
  return this;
}

