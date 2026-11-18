// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// Grow @ 145f96c50

void __thiscall
TAllocatorFixedSizeFreeList<48,32>::Grow(TAllocatorFixedSizeFreeList<48,32> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FreeListNode *pFVar3;
  int iVar4;
  uint uVar5;
  FreeListNode *pFVar6;
  FreeListNode *pFVar7;
  
  if (param_1 != 0) {
    if ((param_1 * 0x30 < 8) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationSize*NumElements >= sizeof(FreeListNode)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\AllocatorFixedSizeFreeList.h"
                           ,0x74,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = FMemory::Malloc((ulonglong)(param_1 * 0x30),0);
    uVar5 = 0;
    pFVar7 = pFVar3;
    pFVar6 = pFVar3;
    if (param_1 != 1) {
      do {
        iVar4 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        pFVar7 = (FreeListNode *)
                 ((longlong)&pFVar3->NextFreeAllocation + (ulonglong)(uint)(iVar4 * 0x30));
        pFVar6->NextFreeAllocation = pFVar7;
        pFVar6 = pFVar7;
      } while (uVar5 < param_1 - 1);
    }
    pFVar7->NextFreeAllocation = this->FreeList;
    this->NumAllocated = this->NumAllocated + param_1;
    this->FreeList = pFVar3;
  }
  return;
}

