// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// GetSubtreeDepth @ 1441b0310

int __thiscall
Chaos::
TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
::GetSubtreeDepth(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                  *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (((byte)pFVar1[(longlong)param_1 * 0x70 + 0x6c] & 1) != 0) {
    return 1;
  }
  iVar5 = GetSubtreeDepth(this,*(int *)(pFVar1 + (longlong)param_1 * 0x70 + 100));
  iVar6 = GetSubtreeDepth(this,*(int *)(pFVar1 + (longlong)param_1 * 0x70 + 0x60));
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  return iVar5 + 1;
}

