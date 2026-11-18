// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// Create @ 1416e6c90

void __cdecl FICURegexManager::Create(void)

{
  code *pcVar1;
  bool bVar2;
  FICURegexManager *lpCriticalSection;
  
  if (Singleton != (FICURegexManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICURegex.cpp"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = ::operator_new(0xf0);
  if (lpCriticalSection != (FICURegexManager *)0x0) {
    memset(lpCriticalSection,0,0xf0);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    *(undefined8 *)&(lpCriticalSection->AllocatedRegexPatterns).Elements = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedRegexPatterns).Elements.field_0x8 = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedRegexPatterns).Elements.field_0x20 = 0;
    *(undefined4 *)&(lpCriticalSection->AllocatedRegexPatterns).Elements.field_0x28 = 0;
    *(undefined4 *)&(lpCriticalSection->AllocatedRegexPatterns).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(lpCriticalSection->AllocatedRegexPatterns).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(lpCriticalSection->AllocatedRegexPatterns).Elements.field_0x34 = 0;
    (lpCriticalSection->AllocatedRegexPatterns).Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    (lpCriticalSection->AllocatedRegexPatterns).HashSize = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&lpCriticalSection->AllocatedRegexMatchersCS,4000);
    *(undefined8 *)&(lpCriticalSection->AllocatedRegexMatchers).Elements = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedRegexMatchers).Elements.field_0x8 = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedRegexMatchers).Elements.field_0x20 = 0;
    *(undefined4 *)&(lpCriticalSection->AllocatedRegexMatchers).Elements.field_0x28 = 0;
    *(undefined4 *)&(lpCriticalSection->AllocatedRegexMatchers).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(lpCriticalSection->AllocatedRegexMatchers).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(lpCriticalSection->AllocatedRegexMatchers).Elements.field_0x34 = 0;
    (lpCriticalSection->AllocatedRegexMatchers).Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    (lpCriticalSection->AllocatedRegexMatchers).HashSize = 0;
    Singleton = lpCriticalSection;
    return;
  }
  Singleton = (FICURegexManager *)0x0;
  return;
}

// CreateRegexMatcher @ 1416e8d00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TWeakPtr<icu_64::RegexMatcher,1> * __thiscall
FICURegexManager::CreateRegexMatcher
          (FICURegexManager *this,TWeakPtr<icu_64::RegexMatcher,1> *__return_storage_ptr__,
          RegexPattern *param_1,UnicodeString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  RegexMatcher *pRVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  UErrorCode local_res18 [2];
  RegexMatcher *local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  local_28 = (RegexMatcher *)0x0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((param_1 == (RegexPattern *)0x0) || (param_2 == (UnicodeString *)0x0)) {
    pRVar1 = (RegexMatcher *)0x0;
  }
  else {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_res18[0] = U_ZERO_ERROR;
    pRVar1 = icu_64::RegexPattern::matcher(param_1,param_2,local_res18);
    pTVar2 = ::operator_new(0x18);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      pTVar2->SharedReferenceCount = (atomic<int>)0x1;
      pTVar2->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VRegexMatcher_icu_64__U__DefaultDeleter_VRegexMatcher_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar2->WeakReferenceCount = (atomic<int>)0x1;
      pTVar2[1]._padding_ = (longlong)pRVar1;
      pTVar3 = pTVar2;
    }
    local_18 = 0;
    local_28 = pRVar1;
    local_10.ReferenceController = pTVar3;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_20,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    pRVar1 = local_28;
    if (local_28 != (RegexMatcher *)0x0) {
      lpCriticalSection = &this->AllocatedRegexMatchersCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TSet<TSharedPtr<icu_64::RegexMatcher,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexMatcher,1>,0>,FDefaultSetAllocator>
      ::Emplace<TSharedPtr<icu_64::RegexMatcher,1>_const_&>
                (&this->AllocatedRegexMatchers,(TSharedPtr<icu_64::RegexMatcher,1> *)local_res18,
                 (bool *)&local_28);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  __return_storage_ptr__->Object = pRVar1;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = FStack_20.ReferenceController;
  if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_20.ReferenceController)->WeakReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return __return_storage_ptr__;
}

// CreateRegexPattern @ 1416e8e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TWeakPtr<icu_64::RegexPattern_const_,1> * __thiscall
FICURegexManager::CreateRegexPattern
          (FICURegexManager *this,TWeakPtr<icu_64::RegexPattern_const_,1> *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  wchar16 *_Dst;
  RegexPattern *pRVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  undefined1 auStack_c8 [32];
  UErrorCode local_a8;
  undefined1 local_a4 [4];
  RegexPattern *local_a0;
  TReferenceControllerBase<1> *local_98;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  _Src = (param_1->Data).AllocatorInstance.Data;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_88.fUnion.fStackFields.fLengthAndFlags = 2;
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_88,iVar5 + 1);
    memcpy(_Dst,_Src,(longlong)iVar5 * 2);
    _Dst[iVar5] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_88,iVar5);
  }
  local_a8 = U_ZERO_ERROR;
  pRVar2 = icu_64::RegexPattern::compile(&local_88,param_2,&local_a8);
  local_a0 = pRVar2;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VRegexPattern_icu_64__U__DefaultDeleter_VRegexPattern_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)pRVar2;
    pTVar4 = pTVar3;
  }
  local_98 = pTVar4;
  if (pRVar2 != (RegexPattern *)0x0) {
    if (this == (FICURegexManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    TSet<TSharedPtr<icu_64::RegexPattern_const_,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexPattern_const_,1>,0>,FDefaultSetAllocator>
    ::Emplace<TSharedPtr<icu_64::RegexPattern_const_,1>_const_&>
              (&this->AllocatedRegexPatterns,(TSharedPtr<icu_64::RegexPattern_const_,1> *)local_a4,
               (bool *)(local_a4 + 4));
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  __return_storage_ptr__->Object = pRVar2;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  icu_64::UnicodeString::~UnicodeString(&local_88);
  return __return_storage_ptr__;
}

// Destroy @ 1416ea370

void __cdecl FICURegexManager::Destroy(void)

{
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  FICURegexManager *lpCriticalSection;
  bool bVar3;
  
  if (Singleton == (FICURegexManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICURegex.cpp"
                       ,0x5c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lpCriticalSection = Singleton;
  if (Singleton != (FICURegexManager *)0x0) {
    (Singleton->AllocatedRegexMatchers).HashSize = 0;
    FVar1 = (lpCriticalSection->AllocatedRegexMatchers).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<icu_64::RegexMatcher,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<icu_64::RegexMatcher,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(lpCriticalSection->AllocatedRegexMatchers).Elements);
    DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection->AllocatedRegexMatchersCS);
    (lpCriticalSection->AllocatedRegexPatterns).HashSize = 0;
    FVar1 = (lpCriticalSection->AllocatedRegexPatterns).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<icu_64::RegexPattern_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<icu_64::RegexPattern_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(lpCriticalSection->AllocatedRegexPatterns).Elements);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0xf0);
  }
  Singleton = (FICURegexManager *)0x0;
  return;
}

// DestroyRegexMatcher @ 1416eb840

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICURegexManager::DestroyRegexMatcher
          (FICURegexManager *this,TWeakPtr<icu_64::RegexMatcher,1> *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  RegexMatcher *pRVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TSharedPtr<icu_64::RegexMatcher_const_,1> local_28;
  TWeakPtr<icu_64::RegexMatcher,1> local_18;
  
  pTVar7 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416eb880;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar8);
    pRVar4 = param_1->Object;
    if (pRVar4 != (RegexMatcher *)0x0) {
      lpCriticalSection = &this->AllocatedRegexMatchersCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      local_28.Object = pRVar4;
      local_28.SharedReferenceCount.ReferenceController = pTVar7;
      if (*(int *)&(this->AllocatedRegexMatchers).Elements.field_0x8 !=
          *(int *)&(this->AllocatedRegexMatchers).Elements.field_0x34) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        uVar6 = ((uint)((ulonglong)pRVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pRVar4 >> 4)) *
                -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        TSet<TSharedPtr<icu_64::RegexMatcher,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexMatcher,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TSharedPtr<icu_64::RegexMatcher_const_,1>_>
                  (&this->AllocatedRegexMatchers,uVar6 >> 0x10 ^ uVar6,&local_28);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_1416eb880:
  if (param_1 != &local_18) {
    pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
    param_1->Object = (RegexMatcher *)0x0;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// DestroyRegexPattern @ 1416eb980

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICURegexManager::DestroyRegexPattern
          (FICURegexManager *this,TWeakPtr<icu_64::RegexPattern_const_,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  RegexPattern *pRVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TSharedPtr<icu_64::RegexPattern_const_,1> local_28;
  TWeakPtr<icu_64::RegexPattern_const_,1> local_18;
  
  pTVar7 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416eb9c0;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar8);
    pRVar4 = param_1->Object;
    if (pRVar4 != (RegexPattern *)0x0) {
      if (this == (FICURegexManager *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      local_28.Object = pRVar4;
      local_28.SharedReferenceCount.ReferenceController = pTVar7;
      if (*(int *)&(this->AllocatedRegexPatterns).Elements.field_0x8 !=
          *(int *)&(this->AllocatedRegexPatterns).Elements.field_0x34) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        uVar6 = ((uint)((ulonglong)pRVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pRVar4 >> 4)) *
                -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        TSet<TSharedPtr<icu_64::RegexPattern_const_,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexPattern_const_,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TSharedPtr<icu_64::RegexPattern_const_,1>_>
                  (&this->AllocatedRegexPatterns,uVar6 >> 0x10 ^ uVar6,&local_28);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
    }
  }
LAB_1416eb9c0:
  if (param_1 != &local_18) {
    pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
    param_1->Object = (RegexPattern *)0x0;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Get @ 1416f1350

FICURegexManager * __cdecl FICURegexManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FICURegexManager *pFVar3;
  
  if ((Singleton == (FICURegexManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICURegex.cpp"
                         ,0x68,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FICURegexManager *)(*pcVar1)();
    return pFVar3;
  }
  return Singleton;
}

// IsInitialized @ 1417024c0

bool __cdecl FICURegexManager::IsInitialized(void)

{
  return Singleton != (FICURegexManager *)0x0;
}

