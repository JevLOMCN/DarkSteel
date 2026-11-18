// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FTonemapInputs @ 145195890

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTonemapInputs * __thiscall FTonemapInputs::FTonemapInputs(FTonemapInputs *this)

{
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput).LoadAction = ENoAction;
  (this->SceneColor).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Bloom).Texture = (FRDGTexture *)0x0;
  (this->Bloom).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Bloom).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->SceneColorApplyParamaters = (FRDGBuffer *)0x0;
  this->LocalExposureBilateralGridTexture = (FRDGTexture *)0x0;
  this->BlurredLogLuminanceTexture = (FRDGTexture *)0x0;
  (this->ExposureFusion).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->ExposureFusion).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ExposureFusion).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->LocalExposureParameters = (FLocalExposureParameters *)0x0;
  this->EyeAdaptationParameters = (FEyeAdaptationParameters *)0x0;
  this->ColorGradingTexture = (FRDGTexture *)0x0;
  this->EyeAdaptationBuffer = (FRDGBuffer *)0x0;
  this->bWriteAlphaChannel = false;
  this->bGammaOnly = false;
  this->bOutputInHDR = false;
  this->bMetalMSAAHDRDecode = false;
  return this;
}

// SupportsSceneColorApplyParametersBuffer @ 145265100

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FTonemapInputs::SupportsSceneColorApplyParametersBuffer(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2e0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsFFTBloom;
}

