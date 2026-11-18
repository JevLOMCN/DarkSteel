// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FVirtualAllocPageStatus @ 141a71ee0

FVirtualAllocPageStatus * __thiscall
FVirtualAllocPageStatus::FVirtualAllocPageStatus(FVirtualAllocPageStatus *this)

{
  ulonglong uVar1;
  _SYSTEM_INFO local_38;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  (this->GroupToPageBitsMap).Buckets = (FBucketEntry *)0x0;
  (this->GroupToPageBitsMap).NumBuckets = 0;
  (this->GroupToPageBitsMap).NumActive = 0;
  (this->PageToReservationSizeMap).Buckets = (FBucketEntry *)0x0;
  (this->PageToReservationSizeMap).NumBuckets = 0;
  (this->PageToReservationSizeMap).NumActive = 0;
  this->PageSize = 1;
  this->ReservationAlignment = 1;
  this->AccumulatedSize = 0;
  local_38.u = (_union_552)0x0;
  local_38.dwPageSize = 0;
  local_38.lpMinimumApplicationAddress = (LPVOID)0x0;
  local_38.lpMaximumApplicationAddress = (LPVOID)0x0;
  local_38.dwActiveProcessorMask = 0;
  local_38.dwNumberOfProcessors = 0;
  local_38.dwProcessorType = 0;
  local_38.dwAllocationGranularity = 0;
  local_38.wProcessorLevel = 0;
  local_38.wProcessorRevision = 0;
  GetSystemInfo(&local_38);
  this->PageSize = (ulonglong)local_38.dwPageSize;
  uVar1 = (ulonglong)(local_38.dwPageSize >> 4);
  this->ReservationAlignment = local_38._40_8_ & 0xffffffff;
  if (uVar1 < 0x40) {
    uVar1 = 0x40;
  }
  FHashMapLinearProbingVAlloc::Realloc(&this->GroupToPageBitsMap,uVar1);
  uVar1 = this->PageSize >> 4;
  if (uVar1 < 0x40) {
    uVar1 = 0x40;
  }
  FHashMapLinearProbingVAlloc::Realloc(&this->PageToReservationSizeMap,uVar1);
  return this;
}

// AddReservationSize @ 141a75040

void __thiscall
FVirtualAllocPageStatus::AddReservationSize
          (FVirtualAllocPageStatus *this,void *param_1,ulong64 param_2,ulong64 *param_3)

{
  ulong64 *puVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  puVar1 = FHashMapLinearProbingVAlloc::FindOrAdd
                     (&this->PageToReservationSizeMap,
                      (ulonglong)param_1 / this->ReservationAlignment,0);
  *param_3 = *puVar1;
  *puVar1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x000141a7509e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// GetAndRemoveReservationSize @ 141a80770

ulong64 __thiscall
FVirtualAllocPageStatus::GetAndRemoveReservationSize(FVirtualAllocPageStatus *this,void *param_1)

{
  ulong64 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar1 = FHashMapLinearProbingVAlloc::RemoveAndGetValue
                    (&this->PageToReservationSizeMap,(ulonglong)param_1 / this->ReservationAlignment
                     ,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return uVar1;
}

// MarkChangedAndReturnDeltaSize @ 141a8b550

long64 __thiscall
FVirtualAllocPageStatus::MarkChangedAndReturnDeltaSize
          (FVirtualAllocPageStatus *this,void *param_1,ulong64 param_2,bool param_3)

{
  ulonglong uVar1;
  ulong64 *puVar2;
  ulong64 uVar3;
  FBucketEntry *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FHashMapLinearProbingVAlloc *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar12 = this->PageSize;
  uVar6 = (ulonglong)param_1 / uVar12 >> 6;
  uVar1 = ((longlong)param_1 + (param_2 - 1) + uVar12) / uVar12;
  uVar11 = uVar1 + 0x3f >> 6;
  uVar5 = uVar11 - 1;
  lVar10 = uVar1 + uVar5 * -0x40;
  uVar8 = 0;
  uVar1 = uVar11;
  if (lVar10 != 0x40) {
    uVar1 = uVar5;
  }
  lVar9 = (ulonglong)param_1 / uVar12 + uVar6 * -0x40;
  if (lVar9 != 0) {
    lVar13 = -lVar9 + 0x40;
    uVar12 = ~((1L << ((byte)lVar9 & 0x3f)) - 1U);
    if ((uVar6 == uVar5) && (lVar10 != 0x40)) {
      uVar12 = uVar12 & (1L << ((byte)lVar10 & 0x3f)) - 1U;
      lVar13 = -lVar9 + lVar10;
    }
    pFVar7 = &this->GroupToPageBitsMap;
    if (param_3) {
      puVar2 = FHashMapLinearProbingVAlloc::FindOrAdd(pFVar7,uVar6,0);
      uVar5 = *puVar2 & uVar12;
      *puVar2 = *puVar2 | uVar12;
      uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
      uVar8 = lVar13 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
      uVar6 = uVar6 + 1;
    }
    else {
      pFVar4 = FHashMapLinearProbingVAlloc::FindBucket(pFVar7,uVar6);
      puVar2 = &pFVar4->Value;
      if (pFVar4 == (FBucketEntry *)0x0) {
        puVar2 = (ulong64 *)0x0;
      }
      if (puVar2 != (ulong64 *)0x0) {
        uVar5 = (*puVar2 & uVar12) - ((*puVar2 & uVar12) >> 1 & 0x5555555555555555);
        uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
        uVar8 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        *puVar2 = *puVar2 & ~uVar12;
        if (*puVar2 == 0) {
          FHashMapLinearProbingVAlloc::RemoveAndGetValue(pFVar7,uVar6,0);
        }
      }
      uVar6 = uVar6 + 1;
    }
  }
  if (uVar6 < uVar1) {
    if (param_3) {
      do {
        puVar2 = FHashMapLinearProbingVAlloc::FindOrAdd(&this->GroupToPageBitsMap,uVar6,0);
        uVar6 = uVar6 + 1;
        uVar5 = *puVar2;
        *puVar2 = 0xffffffffffffffff;
        uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
        uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
        uVar8 = uVar8 + (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38));
      } while (uVar6 < uVar1);
    }
    else {
      do {
        uVar3 = FHashMapLinearProbingVAlloc::RemoveAndGetValue(&this->GroupToPageBitsMap,uVar6,0);
        uVar6 = uVar6 + 1;
        uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
        uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
        uVar8 = uVar8 + (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
      } while (uVar6 < uVar1);
    }
  }
  pFVar7 = &this->GroupToPageBitsMap;
  if (uVar6 < uVar11) {
    uVar5 = (1L << ((byte)lVar10 & 0x3f)) - 1;
    if (param_3) {
      puVar2 = FHashMapLinearProbingVAlloc::FindOrAdd(pFVar7,uVar6,0);
      uVar12 = *puVar2 & uVar5;
      uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar8 = uVar8 + (lVar10 - (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38));
      *puVar2 = *puVar2 | uVar5;
    }
    else {
      pFVar4 = FHashMapLinearProbingVAlloc::FindBucket(pFVar7,uVar6);
      puVar2 = &pFVar4->Value;
      if (pFVar4 == (FBucketEntry *)0x0) {
        puVar2 = (ulong64 *)0x0;
      }
      if (puVar2 != (ulong64 *)0x0) {
        uVar12 = (*puVar2 & uVar5) - ((*puVar2 & uVar5) >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar8 = uVar8 + (((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
        *puVar2 = *puVar2 & ~uVar5;
        if (*puVar2 == 0) {
          FHashMapLinearProbingVAlloc::RemoveAndGetValue(pFVar7,uVar6,0);
        }
      }
    }
  }
  uVar8 = ((ulonglong)param_3 * 2 + -1) * this->PageSize * uVar8;
  if ((longlong)uVar8 < 0) {
    if (-uVar8 <= this->AccumulatedSize) goto LAB_141a8ba76;
  }
  else if (((longlong)uVar8 < 1) || (uVar8 <= ~this->AccumulatedSize)) goto LAB_141a8ba76;
  UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
  FWindowsPlatformMisc::RaiseException(1);
LAB_141a8ba76:
  this->AccumulatedSize = this->AccumulatedSize + uVar8;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return uVar8;
}

