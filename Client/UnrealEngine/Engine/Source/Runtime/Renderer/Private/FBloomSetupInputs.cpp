// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FBloomSetupInputs @ 145194ee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBloomSetupInputs * __thiscall FBloomSetupInputs::FBloomSetupInputs(FBloomSetupInputs *this)

{
  (this->SceneColor).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->EyeAdaptationBuffer = (FRDGBuffer *)0x0;
  this->Threshold = 0.0;
  this->EyeAdaptationParameters = (FEyeAdaptationParameters *)0x0;
  this->LocalExposureParameters = (FLocalExposureParameters *)0x0;
  this->LocalExposureTexture = (FRDGTexture *)0x0;
  this->BlurredLogLuminanceTexture = (FRDGTexture *)0x0;
  return this;
}

