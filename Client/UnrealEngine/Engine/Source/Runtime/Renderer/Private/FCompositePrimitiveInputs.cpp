// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FCompositePrimitiveInputs @ 145194f10

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCompositePrimitiveInputs * __thiscall
FCompositePrimitiveInputs::FCompositePrimitiveInputs(FCompositePrimitiveInputs *this)

{
  this->BasePassType = MAX;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput).LoadAction = ENoAction;
  (this->OverrideDepthOutput)._padding_ = 0;
  (this->OverrideDepthOutput)._padding_ = 0;
  (this->OverrideDepthOutput)._padding_ = 0;
  (this->OverrideDepthOutput).LoadAction = ENoAction;
  (this->SceneColor).Texture = (FRDGTexture *)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneDepth).Texture = (FRDGTexture *)0x0;
  (this->SceneDepth).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneDepth).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->LensDistortionLUT).DistortingDisplacementTexture = (FRDGTexture *)0x0;
  (this->LensDistortionLUT).UndistortingDisplacementTexture = (FRDGTexture *)0x0;
  this->bUseMetalMSAAHDRDecode = false;
  (this->LensDistortionLUT).ResolutionFraction = 1.0;
  (this->LensDistortionLUT).DistortionOverscan = 1.0;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.X = 0x20;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.Y = 0x14;
  return this;
}

