// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetIndex @ 1484084a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl FGlobalPSOCollectorManager::GetIndex(wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  wchar_t **ppwVar5;
  
  if ((((GPSOPrecacheMode == 0) || (GPSOPrecacheMode != 1)) &&
      (bVar2 = PipelineStateCache::IsPSOPrecachingEnabled(), iVar1 = PSOCollectorCount, bVar2)) &&
     (((GPSOPrecachingValidationMode != 0 && (GPSOPrecachingValidationMode != 1)) &&
      ((GPSOPrecachingValidationMode == 2 && (iVar4 = 0, 0 < PSOCollectorCount)))))) {
    ppwVar5 = &PSOCollectors[0].Name;
    do {
      iVar3 = wcscmp(*ppwVar5,param_1);
      if (iVar3 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      ppwVar5 = ppwVar5 + 2;
    } while (iVar4 < iVar1);
  }
  return -1;
}

