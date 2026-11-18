// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// SetDisplayMappingOptions @ 14cf9a530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FXRCopyTextureOptions::SetDisplayMappingOptions
          (FXRCopyTextureOptions *this,IStereoRenderTargetManager *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38;
  
  this->bSrcIsLinear = false;
  this->bSrcSupportsHDR = false;
  this->bDstSupportsHDR = false;
  this->SrcColorGamut = sRGB_D65;
  this->DstColorGamut = sRGB_D65;
  this->SrcDisplayFormat = SDR_ExplicitGammaMapping;
  this->DstDisplayFormat = SDR_ExplicitGammaMapping;
  if ((param_1 == (IStereoRenderTargetManager *)0x0) ||
     (cVar3 = (**(code **)((longlong)*param_1 + 0x70))
                        (param_1,&this->SrcDisplayFormat,&this->SrcColorGamut,&this->bSrcSupportsHDR
                        ), cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  HDRGetMetaData(&this->DstDisplayFormat,&this->DstColorGamut,&this->bDstSupportsHDR,
                 (TVector2<double> *)&local_38._s_0,(TVector2<double> *)&local_48._s_0,(void *)0x0);
  if ((bVar4) &&
     (((this->DstDisplayFormat != this->SrcDisplayFormat ||
       (this->DstColorGamut != this->SrcColorGamut)) ||
      (this->bDstSupportsHDR != this->bSrcSupportsHDR)))) {
    this->bNeedsDisplayMapping = true;
  }
  if (FReadOnlyCVARCache::bMobileHDR == false) {
    EVar1 = (this->ShaderPlatform).Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) &&
       (FGenericDataDrivenShaderPlatformInfo::Infos[(this->ShaderPlatform).Platform].
        bIsPreviewPlatform != 0)) {
      this->bNeedsDisplayMapping = true;
      this->bSrcIsLinear = true;
      this->DstDisplayFormat = SDR_sRGB;
    }
  }
  EVar1 = (this->ShaderPlatform).Platform;
  bVar4 = this->bNeedsDisplayMapping;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bNeedsDisplayMapping =
       (bool)(0 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel & bVar4);
  return;
}

