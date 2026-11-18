// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ShouldCompilePermutation @ 144be3510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FCompactVisibleInstancesBaseCs::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = UseGPUScene((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  if (bVar3) {
    uVar1 = *(ushort *)param_1;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (1 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

