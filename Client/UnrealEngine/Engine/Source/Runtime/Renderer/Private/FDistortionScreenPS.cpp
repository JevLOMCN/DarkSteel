// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ShouldCompilePermutation @ 1448a1aa0

bool __cdecl
FDistortionScreenPS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TShaderPermutationDomain<FDistortionScreenPS::FUseMSAADim,FDistortionScreenPS::FUseRoughRefractionDim,FDistortionScreenPS::FCompositedStandardTranslucentDim>
  local_res8 [2];
  
  TShaderPermutationDomain<FDistortionScreenPS::FUseMSAADim,FDistortionScreenPS::FUseRoughRefractionDim,FDistortionScreenPS::FCompositedStandardTranslucentDim>
  ::
  TShaderPermutationDomain<FDistortionScreenPS::FUseMSAADim,FDistortionScreenPS::FUseRoughRefractionDim,FDistortionScreenPS::FCompositedStandardTranslucentDim>
            (local_res8,*(int *)&param_1->field_0x4);
  if (local_res8[0].DimensionValue != false) {
    uVar1 = *(ushort *)param_1;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel < 3) {
      return false;
    }
  }
  return true;
}

