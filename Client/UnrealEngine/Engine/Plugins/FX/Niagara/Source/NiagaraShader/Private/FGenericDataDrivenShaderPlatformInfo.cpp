// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// GetSupportsIntrinsicWaveOnce @ 148e07cb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsIntrinsicWaveOnce(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x220,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsIntrinsicWaveOnce;
}

