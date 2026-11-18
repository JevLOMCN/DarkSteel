// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 2

// Allocate @ 1446d20e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientPagePool::Allocate(FRHITransientPagePool *this,FAllocationContext *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  TArray<FRHITransientPagePoolAllocation,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<FRHITransientPageSpan,TSizedDefaultAllocator<32>_> *pTVar6;
  code *pcVar7;
  FAllocationContext *pFVar8;
  FAllocationContext *pFVar9;
  undefined2 uVar10;
  bool bVar11;
  int iVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  ForElementType<FRHITransientPagePoolAllocation> FVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint local_res8 [2];
  FAllocationContext *local_res10;
  uint local_res18 [2];
  uint local_res20;
  undefined2 uStack_52;
  
  uVar18 = param_1->MaxAllocationPage;
  local_res18[0] = 0;
  local_res8[0] = 0;
  uVar21 = param_1->PagesRemaining;
  uVar20 = uVar21;
  if ((uVar18 != 0) && (uVar20 = uVar18, uVar21 < uVar18)) {
    uVar20 = uVar21;
  }
  local_res10 = param_1;
  bVar11 = FRHITransientPageSpanAllocator::Allocate
                     (&this->Allocator,param_1->Resource,&param_1->Fences,uVar20,local_res8,
                      local_res18);
  uVar18 = local_res18[0];
  if (!bVar11) {
    return;
  }
  uVar13 = (ulonglong)((this->Initializer).PageSize * param_1->PagesAllocated) +
           param_1->GpuVirtualAddress;
  local_res20 = (this->PageSpans).ArrayNum;
  if ((local_res18[0] == 0xffffffff) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpanIndex != InvalidIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
                          ,0x310,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  do {
    uVar21 = 0;
    if ((int)uVar18 < (this->Allocator).PageSpans.ArrayNum) {
      uVar21 = ~uVar18 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar16 = (this->Allocator).PageSpans.AllocatorInstance.Data;
    iVar12 = (this->PageSpans).ArrayNum;
    if (iVar12 == (this->PageSpans).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x204,&(this->PageSpans).AllocatorInstance,&(this->PageSpans).ArrayMax);
    }
    (this->PageSpans).ArrayNum = iVar12 + 1;
    *(undefined4 *)((this->PageSpans).AllocatorInstance.Data + (longlong)iVar12 * 4) =
         *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 * 0x30);
    uVar21 = 0;
    if ((int)uVar18 < (this->Allocator).PageSpans.ArrayNum) {
      uVar21 = ~uVar18 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar8 = local_res10;
    uVar18 = *(uint *)((this->Allocator).PageSpans.AllocatorInstance.Data +
                      (longlong)(int)uVar18 * 0x30 + 0x24);
  } while (uVar18 != 0xffffffff);
  lVar19 = (longlong)(int)local_res20;
  iVar12 = (this->PageSpans).ArrayNum;
  iVar17 = iVar12 - local_res20;
  uVar21 = ~local_res20;
  iVar3 = local_res10->Allocations->ArrayNum;
  uVar18 = 0;
  if ((int)local_res20 < iVar12) {
    uVar18 = uVar21 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_res10 = (FAllocationContext *)lVar19;
  uVar14 = CityHash64WithSeed((char *)((this->PageSpans).AllocatorInstance.Data + lVar19 * 4),
                              iVar17 * 4,uVar13);
  pTVar4 = pFVar8->Allocations;
  sVar2 = (short)pFVar8->Spans->ArrayNum;
  uVar10 = (undefined2)local_res18[0];
  iVar12 = pTVar4->ArrayNum;
  if (iVar12 == pTVar4->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pFVar9 = local_res10;
  pTVar4->ArrayNum = iVar12 + 1;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  pFVar16 = pFVar5 + (longlong)iVar12 * 0x18;
  *(FRHITransientPagePool **)pFVar16 = this;
  *(ulong64 *)(pFVar16 + 8) = uVar14;
  *(ulonglong *)(pFVar5 + (longlong)iVar12 * 0x18 + 0x10) =
       CONCAT26(uStack_52,CONCAT24(sVar2 + (short)iVar17,CONCAT22(sVar2,uVar10)));
  pTVar6 = pFVar8->Spans;
  uVar18 = 0;
  if ((int)local_res20 < (this->PageSpans).ArrayNum) {
    uVar18 = uVar21 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = (this->PageSpans).AllocatorInstance.Data + (longlong)pFVar9 * 4;
  if (((pFVar16 == (FScriptContainerElement *)0x0) && (iVar17 != 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ptr != nullptr || Count == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x9c1,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,2,iVar17,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,&pTVar6->ArrayMax);
  if (iVar17 != 0) {
    memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar12 * 4,pFVar16,(longlong)iVar17 << 2);
  }
  if (iVar3 < (pFVar8->AllocationsBefore).ArrayNum) {
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar15 = (pFVar8->AllocationsBefore).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<FRHITransientPagePoolAllocation>)0x0) {
      FVar15 = (ForElementType<FRHITransientPagePoolAllocation>)&pFVar8->AllocationsBefore;
    }
    if ((*(ulong64 *)((uchar *)((longlong)FVar15 + 8) + (longlong)iVar3 * 0x18) == uVar14) &&
       (*(FRHITransientPagePool **)((longlong)FVar15 + (longlong)iVar3 * 0x18) == this)) {
      pFVar8->AllocationMatchingCount = pFVar8->AllocationMatchingCount + 1;
      goto LAB_1446d2572;
    }
  }
  iVar12 = (this->PageMapRequests).ArrayNum;
  piVar1 = &(this->PageMapRequests).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&(this->PageMapRequests).AllocatorInstance,piVar1);
  }
  (this->PageMapRequests).ArrayNum = iVar12 + 1;
  uVar18 = (this->Initializer).PageCount;
  pFVar16 = (this->PageMapRequests).AllocatorInstance.Data + (longlong)iVar12 * 0x20;
  *(ulong64 *)(pFVar16 + 8) = this->GpuVirtualAddress;
  *(uint *)(pFVar16 + 0x14) = local_res20;
  *(ulong64 *)pFVar16 = uVar13;
  *(uint *)(pFVar16 + 0x10) = uVar18;
  *(int *)(pFVar16 + 0x18) = iVar17;
  pFVar8->PagesMapped = pFVar8->PagesMapped + local_res8[0];
LAB_1446d2572:
  uVar18 = local_res8[0];
  if ((pFVar8->PagesRemaining < local_res8[0]) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.PagesRemaining >= PagesAllocated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                          ,0x4e0,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar8->PagesRemaining = pFVar8->PagesRemaining - uVar18;
  pFVar8->PagesAllocated = pFVar8->PagesAllocated + uVar18;
  pFVar8->PageSpansAllocated = pFVar8->PageSpansAllocated + iVar17;
  pFVar8->AllocationCount = pFVar8->AllocationCount + 1;
  return;
}

// Flush @ 1446da9e0

void __thiscall
FRHITransientPagePool::Flush(FRHITransientPagePool *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (this->PageMapRequests).ArrayNum;
  if (uVar2 != 0) {
    uVar3 = this->PageMapRequestCountMax;
    if (this->PageMapRequestCountMax < uVar2) {
      uVar3 = uVar2;
    }
    uVar2 = (this->PageSpans).ArrayNum;
    this->PageMapRequestCountMax = uVar3;
    uVar3 = this->PageSpanCountMax;
    if (this->PageSpanCountMax < uVar2) {
      uVar3 = (this->PageSpans).ArrayNum;
    }
    this->PageSpanCountMax = uVar3;
    (**(code **)(this->_padding_ + 8))(this,param_1,&this->PageMapRequests,&this->PageSpans);
    uVar2 = this->PageMapRequestCountMax;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((this->PageMapRequests).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar2,&(this->PageMapRequests).AllocatorInstance,
                 (this->PageMapRequests).ArrayNum,&(this->PageMapRequests).ArrayMax);
    }
    uVar2 = this->PageSpanCountMax;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->PageSpans).ArrayMax;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,uVar2,&(this->PageSpans).AllocatorInstance,(this->PageSpans).ArrayNum,piVar1);
    }
  }
  FRHITransientPageSpanAllocator::Flush(&this->Allocator);
  return;
}

