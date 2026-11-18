// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// GetParentIndex @ 14a312390

int __thiscall
FNodeHierarchyWithUserData::GetParentIndex(FNodeHierarchyWithUserData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,int> *pTVar5;
  int *piVar6;
  
  uVar3 = 0;
  if (param_1 < (this->Hierarchy).Nodes.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&(this->Hierarchy).NodeNameToIndexMapping,
                *(FName *)((this->Hierarchy).Nodes.AllocatorInstance.Data +
                          (longlong)param_1 * 0x10 + 8));
  piVar6 = (int *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,int> *)0x0) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 != (int *)0x0) {
    return *piVar6;
  }
  return -1;
}

