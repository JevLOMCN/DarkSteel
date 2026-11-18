// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// New<UE::LLMPrivate::FTagData,enum_ELLMTag_&> @ 141674980

FTagData * __thiscall
UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
          (FLLMAllocator *this,ELLMTag *param_1)

{
  ELLMTag EVar1;
  FTagData *pFVar2;
  
  pFVar2 = Alloc(this,0x40);
  EVar1 = *param_1;
  (pFVar2->Name).ComparisonIndex = 0;
  (pFVar2->Name).Number = 0;
  (pFVar2->DisplayName).ComparisonIndex = 0;
  (pFVar2->DisplayName).Number = 0;
  (pFVar2->field2_0x10).Parent = (FTagData *)0x0;
  (pFVar2->StatName).ComparisonIndex = 0;
  (pFVar2->StatName).Number = 0;
  (pFVar2->SummaryStatName).ComparisonIndex = 0;
  (pFVar2->SummaryStatName).Number = 0;
  pFVar2->EnumTag = EVar1;
  pFVar2->ReferenceSource = EnumTag;
  pFVar2->TagSet = None;
  pFVar2->bIsFinishConstructed = false;
  pFVar2->bParentIsName = true;
  pFVar2->bHasEnumTag = true;
  pFVar2->bIsReportable = true;
  return pFVar2;
}

// FLLMAllocator @ 1416779b0

FLLMAllocator * __thiscall UE::LLMPrivate::FLLMAllocator::FLLMAllocator(FLLMAllocator *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  this->PlatformAlloc = (_func___cdecl_void_ptr_ulong64 *)0x0;
  this->PlatformFree = (_func___cdecl_void_void_ptr_ulong64 *)0x0;
  this->Bins = (FBin *)0x0;
  this->Total = 0;
  this->PageSize = 0;
  this->NumBins = 0;
  return this;
}

// ~FLLMAllocator @ 14167b940

void __thiscall UE::LLMPrivate::FLLMAllocator::~FLLMAllocator(FLLMAllocator *this)

{
  Clear(this);
                    /* WARNING: Could not recover jumptable at 0x00014167b956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Alloc @ 141680070

void * __thiscall UE::LLMPrivate::FLLMAllocator::Alloc(FLLMAllocator *this,ulong64 param_1)

{
  void *pvVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  uVar3 = 0;
  uVar4 = 0;
  if (0 < this->NumBins) {
    piVar2 = &this->Bins->BinSize;
    uVar5 = uVar3;
    do {
      uVar4 = (uint)uVar5;
      if (param_1 <= (ulonglong)(longlong)*piVar2) break;
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 4;
    } while ((longlong)uVar3 < (longlong)this->NumBins);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (uVar4 == this->NumBins) {
    pvVar1 = AllocPages(this,param_1);
  }
  else {
    pvVar1 = AllocatorPrivate::FBin::Allocate(this->Bins + (int)uVar4,this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return pvVar1;
}

// AllocPages @ 1416804d0

void * __thiscall UE::LLMPrivate::FLLMAllocator::AllocPages(FLLMAllocator *this,ulong64 param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  uVar2 = (param_1 - 1) + (longlong)this->PageSize & ~((longlong)this->PageSize - 1U);
  pvVar1 = (*this->PlatformAlloc)(uVar2);
  if (pvVar1 == (void *)0x0) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  if (((ulonglong)pvVar1 & (longlong)(this->PageSize + -1)) != 0) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->Total = this->Total + uVar2;
  return pvVar1;
}

// Clear @ 14168a6e0

void __thiscall UE::LLMPrivate::FLLMAllocator::Clear(FLLMAllocator *this)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar1 = this->NumBins;
  if (iVar1 != 0) {
    iVar4 = 0;
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(int *)((longlong)&this->Bins->UsedCount + lVar2) != 0) {
          HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        iVar1 = this->NumBins;
        iVar4 = iVar4 + 1;
        lVar2 = lVar2 + 0x10;
      } while (iVar4 < iVar1);
    }
    uVar3 = (longlong)this->PageSize + -1 + (longlong)iVar1 * 0x10 &
            ~((longlong)this->PageSize - 1U);
    (*this->PlatformFree)(this->Bins,uVar3);
    this->Total = this->Total - uVar3;
    this->Bins = (FBin *)0x0;
    this->NumBins = 0;
  }
  return;
}

// Free @ 1416959c0

void __thiscall
UE::LLMPrivate::FLLMAllocator::Free(FLLMAllocator *this,void *param_1,ulong64 param_2)

{
  int iVar1;
  ulonglong uVar2;
  FBin *pFVar3;
  longlong lVar4;
  FPage *pFVar5;
  int *piVar6;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  iVar1 = 0;
  if (0 < this->NumBins) {
    piVar6 = &this->Bins->BinSize;
    iVar1 = 0;
    do {
      if (param_2 <= (ulonglong)(longlong)*piVar6) break;
      iVar1 = iVar1 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar1 < this->NumBins);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  lVar4 = (longlong)this->PageSize;
  if (iVar1 == this->NumBins) {
    uVar2 = (param_2 - 1) + lVar4;
    pFVar5 = param_1;
  }
  else {
    pFVar5 = (FPage *)(-lVar4 & (ulonglong)param_1);
    pFVar3 = this->Bins + iVar1;
    if (pFVar5->FreeList == (FAlloc *)0x0) {
      pFVar5->Next = pFVar3->FreePages;
      pFVar5->Prev = (FPage *)0x0;
      pFVar3->FreePages = pFVar5;
      if (pFVar5->Next != (FPage *)0x0) {
        pFVar5->Next->Prev = pFVar5;
      }
    }
    if (pFVar5->UsedCount < 1) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    *(FAlloc **)param_1 = pFVar5->FreeList;
    piVar6 = &pFVar5->UsedCount;
    *piVar6 = *piVar6 + -1;
    pFVar5->FreeList = param_1;
    if (*piVar6 != 0) goto LAB_141695b12;
    if (pFVar5->Prev == (FPage *)0x0) {
      pFVar3->FreePages = pFVar5->Next;
      if (pFVar5->Next != (FPage *)0x0) {
        pFVar5->Next->Prev = (FPage *)0x0;
      }
    }
    else {
      pFVar5->Prev->Next = pFVar5->Next;
      if (pFVar5->Next != (FPage *)0x0) {
        pFVar5->Next->Prev = pFVar5->Prev;
      }
    }
    pFVar5->Prev = (FPage *)0x0;
    pFVar5->Next = (FPage *)0x0;
    pFVar3->UsedCount = pFVar3->UsedCount + -1;
    lVar4 = (longlong)this->PageSize;
    uVar2 = lVar4 * 2 - 1;
  }
  uVar2 = uVar2 & ~(lVar4 - 1U);
  (*this->PlatformFree)(pFVar5,uVar2);
  this->Total = this->Total - uVar2;
LAB_141695b12:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// FreePages @ 141697cc0

void __thiscall
UE::LLMPrivate::FLLMAllocator::FreePages(FLLMAllocator *this,void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = (param_2 - 1) + (longlong)this->PageSize & ~((longlong)this->PageSize - 1U);
  (*this->PlatformFree)(param_1,uVar1);
  this->Total = this->Total - uVar1;
  return;
}

// Get @ 141698250

FLLMAllocator ** __cdecl UE::LLMPrivate::FLLMAllocator::Get(void)

{
  return &Allocator;
}

// GetBinIndex @ 141699230

int __thiscall UE::LLMPrivate::FLLMAllocator::GetBinIndex(FLLMAllocator *this,ulong64 param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (0 < this->NumBins) {
    lVar3 = 0;
    piVar2 = &this->Bins->BinSize;
    do {
      if (param_1 <= (ulonglong)(longlong)*piVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 1;
      piVar2 = piVar2 + 4;
    } while (lVar3 < this->NumBins);
  }
  return iVar1;
}

// GetTotal @ 1416a1580

long64 __thiscall UE::LLMPrivate::FLLMAllocator::GetTotal(FLLMAllocator *this)

{
  long64 lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  lVar1 = this->Total;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return lVar1;
}

// Initialise @ 1416a5680

void __thiscall
UE::LLMPrivate::FLLMAllocator::Initialise
          (FLLMAllocator *this,_func___cdecl_void_ptr_ulong64 *param_1,
          _func___cdecl_void_void_ptr_ulong64 *param_2,int param_3)

{
  int iVar1;
  FBin *pFVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  this->PlatformAlloc = param_1;
  this->PlatformFree = param_2;
  this->PageSize = param_3;
  if (param_1 != (_func___cdecl_void_ptr_ulong64 *)0x0) {
    iVar8 = 0x10;
    iVar3 = 0x10;
    iVar1 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
    if (0xf < iVar1) {
      iVar5 = this->NumBins;
      do {
        iVar3 = iVar3 * 2;
        iVar5 = iVar5 + 1;
      } while (iVar3 <= iVar1);
      this->NumBins = iVar5;
    }
    if (0 < this->NumBins) {
      pFVar2 = AllocPages(this,(longlong)this->NumBins << 4);
      uVar4 = 0;
      this->Bins = pFVar2;
      uVar7 = uVar4;
      if (0 < this->NumBins) {
        do {
          pFVar2 = this->Bins;
          uVar6 = (int)uVar7 + 1;
          *(int *)((longlong)&pFVar2->BinSize + uVar4) = iVar8;
          iVar8 = iVar8 * 2;
          *(undefined8 *)((longlong)&pFVar2->FreePages + uVar4) = 0;
          *(undefined4 *)((longlong)&pFVar2->UsedCount + uVar4) = 0;
          uVar4 = uVar4 + 0x10;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < this->NumBins);
      }
    }
  }
  return;
}

// Malloc @ 1416b2090

void * __thiscall UE::LLMPrivate::FLLMAllocator::Malloc(FLLMAllocator *this,ulong64 param_1)

{
  void *pvVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  uVar3 = 0;
  uVar4 = 0;
  if (0 < this->NumBins) {
    piVar2 = &this->Bins->BinSize;
    uVar5 = uVar3;
    do {
      uVar4 = (uint)uVar5;
      if (param_1 <= (ulonglong)(longlong)*piVar2) break;
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 4;
    } while ((longlong)uVar3 < (longlong)this->NumBins);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (uVar4 == this->NumBins) {
    pvVar1 = AllocPages(this,param_1);
  }
  else {
    pvVar1 = AllocatorPrivate::FBin::Allocate(this->Bins + (int)uVar4,this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return pvVar1;
}

// Realloc @ 1416ba0d0

void * __thiscall
UE::LLMPrivate::FLLMAllocator::Realloc
          (FLLMAllocator *this,void *param_1,ulong64 param_2,ulong64 param_3)

{
  void *_Dst;
  
  if (param_3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = Alloc(this,param_3);
    if (param_2 != 0) {
      if (param_2 < param_3) {
        param_3 = param_2;
      }
      memcpy(_Dst,param_1,param_3);
    }
  }
  Free(this,param_1,param_2);
  return _Dst;
}

