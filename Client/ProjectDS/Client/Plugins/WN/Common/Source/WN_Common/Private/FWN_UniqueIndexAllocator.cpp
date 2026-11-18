// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 1

// TryResize @ 1494af070

void __thiscall FWN_UniqueIndexAllocator::TryResize(FWN_UniqueIndexAllocator *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((this->Granularity < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Granularity > 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Public\\WN_UniqueIndexAllocator.h"
                         ,0x7d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->FreedIndices).ArrayNum == 0) {
    uVar7 = this->Granularity * 2 + -1 + this->NumIndices & -this->Granularity;
    uVar6 = uVar7 - this->NumIndices;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar1 = &(this->FreedIndices).ArrayMax;
    if ((this->FreedIndices).ArrayMax < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,&(this->FreedIndices).AllocatorInstance,0,piVar1);
    }
    iVar5 = uVar7 - 1;
    iVar4 = this->NumIndices;
    if (this->NumIndices < this->BaseIndex) {
      iVar4 = this->BaseIndex;
    }
    if (iVar4 <= iVar5) {
      do {
        iVar4 = (this->FreedIndices).ArrayNum;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->FreedIndices).AllocatorInstance,piVar1);
        }
        (this->FreedIndices).ArrayNum = iVar4 + 1;
        *(int *)((this->FreedIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = iVar5;
        iVar5 = iVar5 + -1;
        iVar4 = this->NumIndices;
        if (this->NumIndices < this->BaseIndex) {
          iVar4 = this->BaseIndex;
        }
      } while (iVar4 <= iVar5);
    }
    this->NumIndices = uVar7;
  }
  return;
}

