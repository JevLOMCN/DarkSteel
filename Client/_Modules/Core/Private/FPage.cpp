// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FPage @ 14167a530

FPage * __thiscall
UE::LLMPrivate::AllocatorPrivate::FPage::FPage(FPage *this,int param_1,int param_2)

{
  FAlloc *pFVar1;
  FAlloc *pFVar2;
  int iVar3;
  FAlloc *pFVar4;
  longlong lVar5;
  
  this->Prev = (FPage *)0x0;
  this->Next = (FPage *)0x0;
  this->UsedCount = 0;
  iVar3 = param_2;
  if (param_2 < 0x20) {
    iVar3 = 0x20;
  }
  iVar3 = (iVar3 + -1 + param_2) / param_2;
  lVar5 = (longlong)(iVar3 * param_2);
  pFVar2 = (FAlloc *)((longlong)&this->FreeList + lVar5);
  this->FreeList = pFVar2;
  pFVar4 = (FAlloc *)
           ((longlong)&this->FreeList + ((param_1 / param_2 - iVar3) + -1) * param_2 + lVar5);
  while (pFVar2 != pFVar4) {
    pFVar1 = (FAlloc *)((longlong)&pFVar2->Next + (longlong)param_2);
    pFVar2->Next = pFVar1;
    pFVar2 = pFVar1;
  }
  pFVar4->Next = (FAlloc *)0x0;
  return this;
}

// AddToList @ 14167f9f0

void __thiscall UE::LLMPrivate::AllocatorPrivate::FPage::AddToList(FPage *this,FPage **param_1)

{
  this->Next = *param_1;
  this->Prev = (FPage *)0x0;
  *param_1 = this;
  if (this->Next != (FPage *)0x0) {
    this->Next->Prev = this;
  }
  return;
}

// Allocate @ 141680750

void * __thiscall UE::LLMPrivate::AllocatorPrivate::FPage::Allocate(FPage *this)

{
  FAlloc *pFVar1;
  FAlloc *pFVar2;
  
  if (this->FreeList == (FAlloc *)0x0) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  pFVar1 = this->FreeList;
  pFVar2 = pFVar1->Next;
  this->UsedCount = this->UsedCount + 1;
  this->FreeList = pFVar2;
  return pFVar1;
}

// Free @ 141696200

void __thiscall UE::LLMPrivate::AllocatorPrivate::FPage::Free(FPage *this,void *param_1)

{
  if (this->UsedCount < 1) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  *(FAlloc **)param_1 = this->FreeList;
  this->UsedCount = this->UsedCount + -1;
  this->FreeList = param_1;
  return;
}

// IsEmpty @ 1416b0b50

bool __thiscall UE::LLMPrivate::AllocatorPrivate::FPage::IsEmpty(FPage *this)

{
  return this->UsedCount == 0;
}

// IsFull @ 1416b0b70

bool __thiscall UE::LLMPrivate::AllocatorPrivate::FPage::IsFull(FPage *this)

{
  return this->FreeList == (FAlloc *)0x0;
}

// RemoveFromList @ 1416bdad0

void __thiscall UE::LLMPrivate::AllocatorPrivate::FPage::RemoveFromList(FPage *this,FPage **param_1)

{
  if (this->Prev == (FPage *)0x0) {
    *param_1 = this->Next;
    if (this->Next != (FPage *)0x0) {
      this->Next->Prev = (FPage *)0x0;
      this->Next = (FPage *)0x0;
      this->Prev = (FPage *)0x0;
      return;
    }
  }
  else {
    this->Prev->Next = this->Next;
    if (this->Next != (FPage *)0x0) {
      this->Next->Prev = this->Prev;
    }
  }
  this->Next = (FPage *)0x0;
  this->Prev = (FPage *)0x0;
  return;
}

