// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator[] @ 147d7dd20

int __thiscall FReorderTableIndexRemap::operator[](FReorderTableIndexRemap *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (-1 < param_1) {
    pTVar1 = this->ReorderTable;
    if (param_1 < pTVar1->ArrayNum) {
      if (param_1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      iVar4 = *(int *)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 4);
      iVar5 = -1;
      if (iVar4 < this->MaxValidIndex) {
        iVar5 = iVar4;
      }
      return iVar5;
    }
  }
  if (this->MaxValidIndex <= param_1) {
    param_1 = -1;
  }
  return param_1;
}

