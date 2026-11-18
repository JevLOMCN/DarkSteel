// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetIndex @ 148408540

int __cdecl FPSOCollectorCreateManager::GetIndex(EShadingPath param_1,wchar_t *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t **ppwVar4;
  int iVar5;
  longlong lVar6;
  
  if ((((GPSOPrecacheMode == 0) || (GPSOPrecacheMode != 1)) &&
      (bVar2 = PipelineStateCache::IsPSOPrecachingEnabled(), bVar2)) &&
     (((GPSOPrecachingValidationMode != 0 && (GPSOPrecachingValidationMode != 1)) &&
      (GPSOPrecachingValidationMode == 2)))) {
    iVar5 = 0;
    iVar1 = PSOCollectorCount[param_1];
    if (0 < (longlong)iVar1) {
      ppwVar4 = &PSOCollectors[param_1][0].Name;
      lVar6 = 0;
      do {
        iVar3 = wcscmp(*ppwVar4,param_2);
        if (iVar3 == 0) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 1;
        ppwVar4 = ppwVar4 + 2;
      } while (lVar6 < iVar1);
    }
  }
  return -1;
}

// GetName @ 148409390

wchar_t * __cdecl FPSOCollectorCreateManager::GetName(EShadingPath param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_2 == -1) {
    return L"Unknown";
  }
  if (0x3f < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxPSOCollectorCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PSOPrecacheMaterial.h"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return PSOCollectors[param_1][param_2].Name;
}

