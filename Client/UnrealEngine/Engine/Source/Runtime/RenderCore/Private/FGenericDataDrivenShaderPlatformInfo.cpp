// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// GetIsLanguageMetal @ 145e0f790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FGenericDataDrivenShaderPlatformInfo::GetIsLanguageMetal(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].Language == LANGUAGE_Metal;
}

// GetSupportsBindless @ 145e15390

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsBindless(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsBindless;
}

// GetSupportsDistanceFields @ 145e153f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsDistanceFields(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x118,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsDistanceFields;
}

// GetSupportsGPUScene @ 145e15450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsGPUScene(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x1ea,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsGPUScene;
}

