// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetMaxFeatureLevel @ 147f40350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

Type __cdecl FGenericDataDrivenShaderPlatformInfo::GetMaxFeatureLevel(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  return Infos[param_1.Platform].MaxFeatureLevel;
}

