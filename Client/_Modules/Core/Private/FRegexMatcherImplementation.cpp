// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FRegexMatcherImplementation @ 1416d65e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FRegexMatcherImplementation * __thiscall
FRegexMatcherImplementation::FRegexMatcherImplementation
          (FRegexMatcherImplementation *this,FRegexPatternImplementation *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  FICURegexManager *pFVar3;
  bool bVar4;
  wchar16 *_Dst;
  FRegexMatcherImplementation *pFVar5;
  RegexMatcher *pRVar6;
  RegexPattern *pRVar7;
  RegexPattern *pRVar8;
  int iVar9;
  RegexPattern *pRVar10;
  UErrorCode local_68 [2];
  RegexMatcher *local_60;
  FSharedReferencer<1> FStack_58;
  TSharedPtr<icu_64::RegexMatcher,1> local_50;
  FSharedReferencer<1> local_40;
  
  iVar1 = (param_2->Data).ArrayNum;
  pRVar8 = (RegexPattern *)0x0;
  _Src = (param_2->Data).AllocatorInstance.Data;
  (this->ICUString).fUnion.fStackFields.fLengthAndFlags = 2;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  (this->ICUString)._padding_ = (longlong)icu_64::UnicodeString::vftable;
  if (0 < iVar9) {
    _Dst = icu_64::UnicodeString::getBuffer(&this->ICUString,iVar9 + 1);
    memcpy(_Dst,_Src,(longlong)iVar9 * 2);
    _Dst[iVar9] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&this->ICUString,iVar9);
  }
  if ((FICURegexManager::Singleton == (FICURegexManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICURegex.cpp"
                         ,0x68,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRegexMatcherImplementation *)(*pcVar2)();
    return pFVar5;
  }
  pFVar3 = FICURegexManager::Singleton;
  pRVar10 = (RegexPattern *)(param_1->ICURegexPattern).WeakReferenceCount.ReferenceController;
  pRVar7 = pRVar8;
  if (pRVar10 != (RegexPattern *)0x0) {
    iVar1 = *(int *)&pRVar10->fPattern;
    do {
      if (iVar1 == 0) {
        local_60 = (RegexMatcher *)0x0;
        FStack_58.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pRVar6 = (RegexMatcher *)0x0;
        pRVar10 = pRVar8;
        goto LAB_1416d678b;
      }
      LOCK();
      iVar9 = *(int *)&pRVar10->fPattern;
      bVar4 = iVar1 == iVar9;
      if (bVar4) {
        *(int *)&pRVar10->fPattern = iVar1 + 1;
        iVar9 = iVar1;
      }
      UNLOCK();
      iVar1 = iVar9;
    } while (!bVar4);
    pRVar7 = (param_1->ICURegexPattern).Object;
  }
  local_60 = (RegexMatcher *)0x0;
  FStack_58.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pRVar7 == (RegexPattern *)0x0) {
    pRVar6 = (RegexMatcher *)0x0;
  }
  else {
    local_68[0] = U_ZERO_ERROR;
    pRVar6 = icu_64::RegexPattern::matcher(pRVar7,&this->ICUString,local_68);
    pRVar7 = ::operator_new(0x18);
    if (pRVar7 != (RegexPattern *)0x0) {
      *(undefined4 *)&pRVar7->fPattern = 1;
      pRVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VRegexMatcher_icu_64__U__DefaultDeleter_VRegexMatcher_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&pRVar7->fPattern + 4) = 1;
      pRVar7->fPatternString = (UnicodeString *)pRVar6;
      pRVar8 = pRVar7;
    }
    local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_60 = pRVar6;
    local_40.ReferenceController = (TReferenceControllerBase<1> *)pRVar8;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_58,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    pRVar6 = local_60;
    if (local_60 != (RegexMatcher *)0x0) {
      lpCriticalSection = &pFVar3->AllocatedRegexMatchersCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TSet<TSharedPtr<icu_64::RegexMatcher,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexMatcher,1>,0>,FDefaultSetAllocator>
      ::Emplace<TSharedPtr<icu_64::RegexMatcher,1>_const_&>
                (&pFVar3->AllocatedRegexMatchers,&local_50,(bool *)&local_60);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_1416d678b:
  (this->ICURegexMatcher).Object = pRVar6;
  (this->ICURegexMatcher).WeakReferenceCount.ReferenceController = FStack_58.ReferenceController;
  if (FStack_58.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_58.ReferenceController)->WeakReferenceCount =
         (atomic<int>)((int)(FStack_58.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pRVar10);
  ::FString::FString(&this->OriginalString,param_2);
  return this;
}

// ~FRegexMatcherImplementation @ 1416d9050

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FRegexMatcherImplementation::~FRegexMatcherImplementation(FRegexMatcherImplementation *this)

{
  TWeakPtr<icu_64::RegexMatcher,1> *pTVar1;
  atomic<int> *paVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  RegexMatcher *pRVar6;
  FICURegexManager *pFVar7;
  atomic<int> aVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  TSharedPtr<icu_64::RegexMatcher_const_,1> local_38;
  ulonglong local_28 [2];
  
  pFVar7 = FICURegexManager::Singleton;
  if (FICURegexManager::Singleton != (FICURegexManager *)0x0) {
    pTVar10 = (this->ICURegexMatcher).WeakReferenceCount.ReferenceController;
    pTVar1 = &this->ICURegexMatcher;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar10->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1416d90b4;
        }
        LOCK();
        aVar8 = pTVar10->SharedReferenceCount;
        bVar11 = aVar3 == aVar8;
        if (bVar11) {
          pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar8 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar8;
      } while (!bVar11);
      pRVar6 = pTVar1->Object;
      if (pRVar6 != (RegexMatcher *)0x0) {
        lpCriticalSection = &pFVar7->AllocatedRegexMatchersCS;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        local_38.Object = pRVar6;
        local_38.SharedReferenceCount.ReferenceController = pTVar10;
        if (*(int *)&(pFVar7->AllocatedRegexMatchers).Elements.field_0x8 !=
            *(int *)&(pFVar7->AllocatedRegexMatchers).Elements.field_0x34) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
          uVar9 = ((uint)((ulonglong)pRVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pRVar6 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          TSet<TSharedPtr<icu_64::RegexMatcher,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexMatcher,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TSharedPtr<icu_64::RegexMatcher_const_,1>_>
                    (&pFVar7->AllocatedRegexMatchers,uVar9 >> 0x10 ^ uVar9,&local_38);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
LAB_1416d90b4:
    if (pTVar1 != (TWeakPtr<icu_64::RegexMatcher,1> *)local_28) {
      pTVar4 = (this->ICURegexMatcher).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (RegexMatcher *)0x0;
      (this->ICURegexMatcher).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  pFVar5 = (this->OriginalString).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar10 = (this->ICURegexMatcher).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar10->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  icu_64::UnicodeString::~UnicodeString(&this->ICUString);
  return;
}

