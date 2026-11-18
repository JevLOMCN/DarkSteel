// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FBin @ 1416778e0

FBin * __thiscall UE::LLMPrivate::AllocatorPrivate::FBin::FBin(FBin *this,int param_1)

{
  this->BinSize = param_1;
  this->FreePages = (FPage *)0x0;
  this->UsedCount = 0;
  return this;
}

// Allocate @ 1416805a0

void * __thiscall
UE::LLMPrivate::AllocatorPrivate::FBin::Allocate(FBin *this,FLLMAllocator *param_1)

{
  FAlloc *pFVar1;
  int iVar2;
  int iVar3;
  FAlloc *pFVar4;
  int iVar5;
  FPage *pFVar6;
  FAlloc *pFVar7;
  longlong lVar8;
  
  if (this->FreePages == (FPage *)0x0) {
    pFVar6 = FLLMAllocator::AllocPages(param_1,(longlong)param_1->PageSize);
    this->UsedCount = this->UsedCount + 1;
    if (pFVar6 == (FPage *)0x0) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    iVar2 = this->BinSize;
    iVar3 = param_1->PageSize;
    pFVar6->Prev = (FPage *)0x0;
    iVar5 = iVar2;
    if (iVar2 < 0x20) {
      iVar5 = 0x20;
    }
    pFVar6->Next = (FPage *)0x0;
    pFVar6->UsedCount = 0;
    iVar5 = (iVar2 + -1 + iVar5) / iVar2;
    lVar8 = (longlong)(iVar5 * iVar2);
    pFVar4 = (FAlloc *)((longlong)&pFVar6->FreeList + lVar8);
    pFVar6->FreeList = pFVar4;
    pFVar7 = (FAlloc *)
             ((longlong)&pFVar6->FreeList + ((iVar3 / iVar2 - iVar5) + -1) * iVar2 + lVar8);
    while (pFVar4 != pFVar7) {
      pFVar1 = (FAlloc *)((longlong)&pFVar4->Next + (longlong)iVar2);
      pFVar4->Next = pFVar1;
      pFVar4 = pFVar1;
    }
    pFVar7->Next = (FAlloc *)0x0;
    pFVar6->Next = this->FreePages;
    pFVar6->Prev = (FPage *)0x0;
    this->FreePages = pFVar6;
    if (pFVar6->Next != (FPage *)0x0) {
      pFVar6->Next->Prev = pFVar6;
    }
  }
  pFVar6 = this->FreePages;
  if (pFVar6->FreeList == (FAlloc *)0x0) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  pFVar4 = pFVar6->FreeList;
  pFVar7 = pFVar4->Next;
  pFVar6->UsedCount = pFVar6->UsedCount + 1;
  pFVar6->FreeList = pFVar7;
  pFVar6 = this->FreePages;
  if (pFVar6->FreeList == (FAlloc *)0x0) {
    if (pFVar6->Prev == (FPage *)0x0) {
      this->FreePages = pFVar6->Next;
      if (pFVar6->Next != (FPage *)0x0) {
        pFVar6->Next->Prev = (FPage *)0x0;
      }
    }
    else {
      pFVar6->Prev->Next = pFVar6->Next;
      if (pFVar6->Next != (FPage *)0x0) {
        pFVar6->Next->Prev = pFVar6->Prev;
      }
    }
    pFVar6->Prev = (FPage *)0x0;
    pFVar6->Next = (FPage *)0x0;
  }
  return pFVar4;
}

// Free @ 1416958b0

void __thiscall
UE::LLMPrivate::AllocatorPrivate::FBin::Free(FBin *this,void *param_1,FLLMAllocator *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  FPage *pFVar3;
  
  pFVar3 = (FPage *)(-(longlong)param_2->PageSize & (ulonglong)param_1);
  if (pFVar3->FreeList == (FAlloc *)0x0) {
    pFVar3->Next = this->FreePages;
    pFVar3->Prev = (FPage *)0x0;
    this->FreePages = pFVar3;
    if (pFVar3->Next != (FPage *)0x0) {
      pFVar3->Next->Prev = pFVar3;
    }
  }
  if (pFVar3->UsedCount < 1) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  *(FAlloc **)param_1 = pFVar3->FreeList;
  piVar1 = &pFVar3->UsedCount;
  *piVar1 = *piVar1 + -1;
  pFVar3->FreeList = param_1;
  if (*piVar1 == 0) {
    if (pFVar3->Prev == (FPage *)0x0) {
      this->FreePages = pFVar3->Next;
      if (pFVar3->Next != (FPage *)0x0) {
        pFVar3->Next->Prev = (FPage *)0x0;
      }
    }
    else {
      pFVar3->Prev->Next = pFVar3->Next;
      if (pFVar3->Next != (FPage *)0x0) {
        pFVar3->Next->Prev = pFVar3->Prev;
      }
    }
    pFVar3->Prev = (FPage *)0x0;
    pFVar3->Next = (FPage *)0x0;
    this->UsedCount = this->UsedCount + -1;
    uVar2 = (longlong)param_2->PageSize * 2 - 1U & ~((longlong)param_2->PageSize - 1U);
    (*param_2->PlatformFree)(pFVar3,uVar2);
    param_2->Total = param_2->Total - uVar2;
  }
  return;
}

