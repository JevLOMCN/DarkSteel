// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FRegexMatcher @ 1416d6560

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FRegexMatcher * __thiscall
FRegexMatcher::FRegexMatcher(FRegexMatcher *this,FRegexPattern *param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Pattern).Implementation.Object = (param_1->Implementation).Object;
  pTVar1 = (param_1->Implementation).SharedReferenceCount.ReferenceController;
  (this->Pattern).Implementation.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  MakeShared<FRegexMatcherImplementation,1,FRegexPatternImplementation_&,FString_const_&>
            (&this->Implementation,(this->Pattern).Implementation.Object,param_2);
  return this;
}

// FRegexMatcher @ 1416d65a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FRegexMatcher * __thiscall
FRegexMatcher::FRegexMatcher(FRegexMatcher *this,FRegexPattern *param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Pattern).Implementation.Object = (param_1->Implementation).Object;
  pTVar1 = (param_1->Implementation).SharedReferenceCount.ReferenceController;
  (this->Pattern).Implementation.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  MakeShared<FRegexMatcherImplementation,1,FRegexPatternImplementation_&,FString_const_&>
            (&this->Implementation,(this->Pattern).Implementation.Object,param_2);
  return this;
}

// FindNext @ 1416ef0c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall FRegexMatcher::FindNext(FRegexMatcher *this)

{
  FRegexMatcherImplementation *pFVar1;
  RegexMatcher *this_00;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pFVar1 = (this->Implementation).Object;
  pTVar5 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416ef0f0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    if ((this_00 != (RegexMatcher *)0x0) &&
       (cVar3 = icu_64::RegexMatcher::find(this_00), cVar3 != '\0')) {
      bVar6 = true;
      goto LAB_1416ef0f3;
    }
  }
LAB_1416ef0f0:
  bVar6 = false;
LAB_1416ef0f3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return bVar6;
}

// GetBeginLimit @ 1416f2710

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FRegexMatcher::GetBeginLimit(FRegexMatcher *this)

{
  FRegexMatcherImplementation *pFVar1;
  RegexMatcher *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pFVar1 = (this->Implementation).Object;
  pTVar5 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416f2740;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    if (this_00 != (RegexMatcher *)0x0) {
      iVar4 = icu_64::RegexMatcher::regionStart(this_00);
      goto LAB_1416f2745;
    }
  }
LAB_1416f2740:
  iVar4 = -1;
LAB_1416f2745:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar4;
}

// GetCaptureGroup @ 1416f4690

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FRegexMatcher::GetCaptureGroup(FRegexMatcher *this,FString *__return_storage_ptr__,int param_1)

{
  FRegexMatcherImplementation *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  RegexMatcher *this_00;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  bool bVar9;
  UErrorCode local_res8 [2];
  
  pFVar1 = (this->Implementation).Object;
  iVar8 = 0;
  pTVar2 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  pTVar7 = pTVar2;
  iVar5 = 0;
  iVar6 = iVar8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar2->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      iVar5 = iVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1416f46e1;
      LOCK();
      aVar4 = pTVar2->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    pTVar7 = pTVar2;
    if (this_00 != (RegexMatcher *)0x0) {
      local_res8[0] = U_ZERO_ERROR;
      iVar5 = icu_64::RegexMatcher::start(this_00,param_1,local_res8);
      iVar6 = icu_64::RegexMatcher::end(this_00,param_1,local_res8);
    }
  }
LAB_1416f46e1:
  if (iVar5 < 0) {
    iVar5 = iVar8;
  }
  if (iVar6 < iVar5) {
    iVar6 = iVar5;
  }
  ::FString::Mid(&((this->Implementation).Object)->OriginalString,__return_storage_ptr__,iVar5,
                 iVar6 - iVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetCaptureGroupBeginning @ 1416f4760

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FRegexMatcher::GetCaptureGroupBeginning(FRegexMatcher *this,int param_1)

{
  FRegexMatcherImplementation *pFVar1;
  RegexMatcher *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  UErrorCode local_res8 [2];
  
  pFVar1 = (this->Implementation).Object;
  local_res8[0] = U_ZERO_ERROR;
  pTVar5 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416f4796;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    if (this_00 != (RegexMatcher *)0x0) {
      iVar4 = icu_64::RegexMatcher::start(this_00,param_1,local_res8);
      goto LAB_1416f479b;
    }
  }
LAB_1416f4796:
  iVar4 = -1;
LAB_1416f479b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar4;
}

// GetCaptureGroupEnding @ 1416f47d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FRegexMatcher::GetCaptureGroupEnding(FRegexMatcher *this,int param_1)

{
  FRegexMatcherImplementation *pFVar1;
  RegexMatcher *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  UErrorCode local_res8 [2];
  
  pFVar1 = (this->Implementation).Object;
  local_res8[0] = U_ZERO_ERROR;
  pTVar5 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416f4806;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    if (this_00 != (RegexMatcher *)0x0) {
      iVar4 = icu_64::RegexMatcher::end(this_00,param_1,local_res8);
      goto LAB_1416f480b;
    }
  }
LAB_1416f4806:
  iVar4 = -1;
LAB_1416f480b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar4;
}

// GetEndLimit @ 1416f8020

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FRegexMatcher::GetEndLimit(FRegexMatcher *this)

{
  FRegexMatcherImplementation *pFVar1;
  RegexMatcher *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pFVar1 = (this->Implementation).Object;
  pTVar5 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416f8050;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    if (this_00 != (RegexMatcher *)0x0) {
      iVar4 = icu_64::RegexMatcher::regionEnd(this_00);
      goto LAB_1416f8055;
    }
  }
LAB_1416f8050:
  iVar4 = -1;
LAB_1416f8055:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar4;
}

// GetMatchBeginning @ 1416f8af0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FRegexMatcher::GetMatchBeginning(FRegexMatcher *this)

{
  FRegexMatcherImplementation *pFVar1;
  RegexMatcher *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  UErrorCode local_res8 [2];
  
  pFVar1 = (this->Implementation).Object;
  local_res8[0] = U_ZERO_ERROR;
  pTVar5 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416f8b26;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    if (this_00 != (RegexMatcher *)0x0) {
      iVar4 = icu_64::RegexMatcher::start(this_00,local_res8);
      goto LAB_1416f8b2b;
    }
  }
LAB_1416f8b26:
  iVar4 = -1;
LAB_1416f8b2b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar4;
}

// GetMatchEnding @ 1416f8b60

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FRegexMatcher::GetMatchEnding(FRegexMatcher *this)

{
  FRegexMatcherImplementation *pFVar1;
  RegexMatcher *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  UErrorCode local_res8 [2];
  
  pFVar1 = (this->Implementation).Object;
  local_res8[0] = U_ZERO_ERROR;
  pTVar5 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416f8b96;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    if (this_00 != (RegexMatcher *)0x0) {
      iVar4 = icu_64::RegexMatcher::end(this_00,local_res8);
      goto LAB_1416f8b9b;
    }
  }
LAB_1416f8b96:
  iVar4 = -1;
LAB_1416f8b9b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar4;
}

// SetLimits @ 141711440

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FRegexMatcher::SetLimits(FRegexMatcher *this,int param_1,int param_2)

{
  FRegexMatcherImplementation *pFVar1;
  RegexMatcher *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  UErrorCode local_res8 [8];
  
  pFVar1 = (this->Implementation).Object;
  pTVar4 = (pFVar1->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_141711470;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (pFVar1->ICURegexMatcher).Object;
    if (this_00 != (RegexMatcher *)0x0) {
      local_res8[0] = U_ZERO_ERROR;
      icu_64::RegexMatcher::region(this_00,(longlong)param_1,(longlong)param_2,local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_141711470:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

