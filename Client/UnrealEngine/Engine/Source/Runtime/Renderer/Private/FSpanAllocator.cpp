// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Allocate @ 1448ffd20

int __thiscall FSpanAllocator::Allocate(FSpanAllocator *this,int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar8;
  
  uVar4 = SearchFreeList(this,param_1,this->FirstNonEmptySpan);
  if ((uVar4 == 0xffffffff) && ((this->PendingFreeSpans).ArrayNum != 0)) {
    Consolidate(this);
    uVar4 = SearchFreeList(this,param_1,this->FirstNonEmptySpan);
  }
  this->CurrentSize = this->CurrentSize + param_1;
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < (this->FreeSpans).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FVar8 = (ForElementType<FSpanAllocator::FLinearAllocation>)&this->FreeSpans;
    }
    uVar1 = *(undefined8 *)((longlong)FVar8 + (longlong)(int)uVar4 * 8);
    iVar7 = (int)((ulonglong)uVar1 >> 0x20);
    iVar6 = (int)uVar1;
    uVar5 = 0;
    if ((int)uVar4 < (this->FreeSpans).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    FVar8 = (this->FreeSpans).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FVar8 = (ForElementType<FSpanAllocator::FLinearAllocation>)&this->FreeSpans;
    }
    *(ulonglong *)((longlong)FVar8 + (longlong)(int)uVar4 * 8) =
         CONCAT44(iVar7 - param_1,iVar6 + param_1);
    if ((iVar7 == param_1) && (this->FirstNonEmptySpan == uVar4)) {
      this->FirstNonEmptySpan = uVar4 + 1;
    }
    return iVar6;
  }
  iVar7 = this->CurrentMaxSize;
  iVar6 = iVar7 + param_1;
  this->CurrentMaxSize = iVar6;
  if (iVar6 < this->PeakMaxSize) {
    iVar6 = this->PeakMaxSize;
  }
  this->PeakMaxSize = iVar6;
  return iVar7;
}

// Free @ 1449193d0

void __thiscall FSpanAllocator::Free(FSpanAllocator *this,int param_1,int param_2)

{
  TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar6;
  int local_18;
  int iStack_14;
  
  pTVar1 = &this->PendingFreeSpans;
  FVar6 = (this->PendingFreeSpans).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar1;
  }
  local_18 = param_1;
  iStack_14 = param_2;
  if (((ulonglong)FVar6 <= &local_18) &&
     (&local_18 < (int *)((longlong)FVar6 + (longlong)(this->PendingFreeSpans).ArrayMax * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->PendingFreeSpans).ArrayNum;
  piVar2 = &(this->PendingFreeSpans).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                      (0x408,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->PendingFreeSpans).ArrayNum = iVar5 + 1;
  FVar6 = (this->PendingFreeSpans).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FVar6 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar6 + (longlong)iVar5 * 8) = CONCAT44(iStack_14,local_18);
  this->CurrentSize = this->CurrentSize - param_2;
  return;
}

