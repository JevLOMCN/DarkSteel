// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Supports16BitVALU @ 1452d6360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIFeatureSupport": Some values do not have unique names */

ERHIFeatureSupport __cdecl _anon_9327CABB::FTSRShader::Supports16BitVALU(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  ERHIFeatureSupport EVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,199,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Language == LANGUAGE_Vulkan) {
    return Unsupported;
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsRealTypes;
}

