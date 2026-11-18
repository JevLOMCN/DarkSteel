// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetEnabledStatSections @ 1457f47b0

Type __cdecl FVirtualShadowMap::GetEnabledStatSections(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  Type TVar3;
  longlong lVar4;
  
  pTVar1 = CVarShowStatsVisible.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 1;
    if (!bVar2) goto LAB_1457f47dd;
  }
  lVar4 = 0;
LAB_1457f47dd:
  TVar3 = GVSMStatSectionsEnabled;
  if (pTVar1->ShadowedValue[lVar4] == false) {
    TVar3 = None;
  }
  return TVar3;
}

