// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CalcBuffersSize @ 1487278a0

uint __thiscall
FStaticMeshLODResources::FStaticMeshBuffersSize::CalcBuffersSize(FStaticMeshBuffersSize *this)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  pTVar2 = CVarSupportDepthOnlyIndexBuffers.Ref;
  bVar4 = IsInParallelGameThread();
  uVar7 = 0;
  if (bVar4) {
LAB_1487278df:
    lVar5 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    lVar5 = 4;
    if (bVar4) goto LAB_1487278df;
  }
  pTVar3 = CVarSupportReversedIndexBuffers.Ref;
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar5);
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar5 = 4;
    if (!bVar4) goto LAB_148727901;
  }
  lVar5 = 0;
LAB_148727901:
  uVar6 = uVar7;
  if (iVar1 == 0) {
    uVar6 = this->DepthOnlyIBSize;
  }
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar5) == 0) {
    uVar7 = this->ReversedIBsSize;
  }
  return (this->SerializedBuffersSize - uVar7) - uVar6;
}

