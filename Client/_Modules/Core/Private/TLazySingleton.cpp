// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// Get @ 14163dc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStaticData * __cdecl TLazySingleton<FGenericPlatformMisc::FStaticData>::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FStaticData *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    _DAT_154ea8450 = 0;
    _DAT_154ea8458 = 0;
    _DAT_154ea8470 = 0;
    _DAT_154ea8478 = 0;
    _DAT_154ea8480 = 0;
    _DAT_154ea8488 = 0;
    _DAT_154ea8490 = 0;
    _DAT_154ea8498 = 0;
    _DAT_154ea84a0 = 0;
    _DAT_154ea84a8 = 0;
    DAT_154ea84b0 =
         &`private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    _DAT_154ea8460 = 0;
    uRam0000000154ea8468 = 0;
    atexit(`TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FStaticData *)DAT_154ea84b0 == (FStaticData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStaticData *)(*pcVar1)();
    return pFVar3;
  }
  return (FStaticData *)DAT_154ea84b0;
}

// Get @ 14163dd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TEventPool<1> * __cdecl TLazySingleton<TEventPool<1>_>::Get(void)

{
  code *pcVar1;
  bool bVar2;
  TEventPool<1> *pTVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    DAT_154ea8400 =
         &`private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<TEventPool<1>_>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_154ea8400 == (TLazySingleton<class_TEventPool<1>_> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TEventPool<1> *)(*pcVar1)();
    return pTVar3;
  }
  return (TEventPool<1> *)DAT_154ea8400;
}

// Get @ 14163dde0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TEventPool<0> * __cdecl TLazySingleton<TEventPool<0>_>::Get(void)

{
  code *pcVar1;
  bool bVar2;
  TEventPool<0> *pTVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    DAT_154ea8340 =
         &`private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<TEventPool<0>_>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_154ea8340 == (TLazySingleton<class_TEventPool<0>_> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TEventPool<0> *)(*pcVar1)();
    return pTVar3;
  }
  return (TEventPool<0> *)DAT_154ea8340;
}

// Reset @ 141657d70

void __thiscall
TLazySingleton<FGenericPlatformMisc::FStaticData>::Reset
          (TLazySingleton<FGenericPlatformMisc::FStaticData> *this)

{
  FStaticData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FStaticData *)0x0) {
    pFVar2 = (pFVar1->GamePersistentDownloadDir).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->ProjectDir).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->LaunchDir).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->EngineDirectory).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pFVar1->AdditionalRootDirectoriesLock);
    if (BVar4 == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar1->AdditionalRootDirectoriesLock);
    }
    DestructItems<FString,int>
              ((FString *)(pFVar1->AdditionalRootDirectories).AllocatorInstance.Data,
               (pFVar1->AdditionalRootDirectories).ArrayNum);
    pFVar2 = (pFVar1->AdditionalRootDirectories).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->RootDir).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    this->Ptr = (FStaticData *)0x0;
  }
  return;
}

// Reset @ 141657e50

void __thiscall TLazySingleton<TEventPool<1>_>::Reset(TLazySingleton<TEventPool<1>_> *this)

{
  TEventPool<1> *this_00;
  FEvent *pFVar1;
  
  this_00 = this->Ptr;
  if (this_00 != (TEventPool<1> *)0x0) {
    pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                       ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
    while (pFVar1 != (FEvent *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
      pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                         ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
    }
    FLockFreePointerListLIFOBase<FEvent,64,1>::~FLockFreePointerListLIFOBase<FEvent,64,1>
              ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
    this->Ptr = (TEventPool<1> *)0x0;
  }
  return;
}

// Reset @ 141657ec0

void __thiscall TLazySingleton<TEventPool<0>_>::Reset(TLazySingleton<TEventPool<0>_> *this)

{
  TEventPool<0> *this_00;
  FEvent *pFVar1;
  
  this_00 = this->Ptr;
  if (this_00 != (TEventPool<0> *)0x0) {
    pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                       ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
    while (pFVar1 != (FEvent *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
      pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                         ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
    }
    FLockFreePointerListLIFOBase<FEvent,64,1>::~FLockFreePointerListLIFOBase<FEvent,64,1>
              ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
    this->Ptr = (TEventPool<0> *)0x0;
  }
  return;
}

// Reset @ 14170d860

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
TLazySingleton<FInternationalization>::Reset(TLazySingleton<FInternationalization> *this)

{
  FInternationalization *this_00;
  FScriptContainerElement *pFVar1;
  FICUInternationalization *this_01;
  void *pvVar2;
  
  this_00 = this->Ptr;
  if (this_00 != (FInternationalization *)0x0) {
    if (this_00->bIsInitialized != false) {
      FInternationalization::Terminate(this_00);
    }
    DestructItems<TSharedRef<FCulture,1>,int>
              ((TSharedRef<FCulture,1> *)(this_00->CustomCultures).AllocatorInstance.Data,
               (this_00->CustomCultures).ArrayNum);
    pFVar1 = (this_00->CustomCultures).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_00->InvariantCulture).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_00->DefaultLocale).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_00->DefaultLanguage).SharedReferenceCount.ReferenceController);
    DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>
              ((TTuple<FName,TSharedPtr<FCulture,1>_> *)
               (this_00->CurrentAssetGroupCultures).AllocatorInstance.Data,
               (this_00->CurrentAssetGroupCultures).ArrayNum);
    pFVar1 = (this_00->CurrentAssetGroupCultures).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_00->CurrentLocale).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_00->CurrentLanguage).SharedReferenceCount.ReferenceController);
    this_01 = (this_00->Implementation).Obj.Ptr;
    if (this_01 != (FICUInternationalization *)0x0) {
      FICUInternationalization::~FICUInternationalization(this_01);
      ::operator_delete(this_01,0x270);
    }
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(this_00->CultureChangedEvent).field_0x8,
               *(int *)&(this_00->CultureChangedEvent).field_0x10);
    pvVar2 = *(void **)&(this_00->CultureChangedEvent).field_0x8;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&this_00->CultureChangedEvent);
    this->Ptr = (FInternationalization *)0x0;
  }
  return;
}

// GetLazy @ 14175e770

TLazySingleton<FTextLocalizationManager> * __cdecl
TLazySingleton<FTextLocalizationManager>::GetLazy(_func___cdecl_void_void_ptr *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (param_1 == (_func___cdecl_void_void_ptr *)0x0) {
        DAT_154eb5200 = (TLazySingleton<class_FTextLocalizationManager> *)0x0;
      }
      else {
        (*param_1)(&`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                    ::__l2::Singleton);
        DAT_154eb5200 =
             &`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton;
      }
      atexit(`TLazySingleton<FTextLocalizationManager>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TLazySingleton<FTextLocalizationManager> *)
             &`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton;
    }
  }
  return (TLazySingleton<FTextLocalizationManager> *)
         &`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
}

// GetValue @ 141762230

FTextLocalizationManager * __thiscall
TLazySingleton<FTextLocalizationManager>::GetValue(TLazySingleton<FTextLocalizationManager> *this)

{
  code *pcVar1;
  bool bVar2;
  FTextLocalizationManager *pFVar3;
  
  if (this->Ptr != (FTextLocalizationManager *)0x0) {
    return this->Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Ptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                     ,0x6d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTextLocalizationManager *)(*pcVar1)();
    return pFVar3;
  }
  return this->Ptr;
}

// Reset @ 1417773e0

void __thiscall TLazySingleton<FTextKeyState>::Reset(TLazySingleton<FTextKeyState> *this)

{
  FTextKeyState *SRWLock;
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  SRWLock = this->Ptr;
  if (SRWLock != (FTextKeyState *)0x0) {
    *(undefined4 *)&(SRWLock->LegacyTCHARState).field_0x48 = 0;
    pvVar1 = *(void **)&(SRWLock->LegacyTCHARState).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&SRWLock->LegacyTCHARState);
    FMemory::Free((SRWLock->KeyDataAllocations).Hash);
    (SRWLock->KeyDataAllocations).Hash = (int *)0x0;
    TChunkedPackedArray<FTextKeyState::FKeyData,16>::
    ~TChunkedPackedArray<FTextKeyState::FKeyData,16>(&(SRWLock->KeyDataAllocations).Elements);
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    this->Ptr = (FTextKeyState *)0x0;
  }
  return;
}

// Reset @ 14188c7f0

void __thiscall
TLazySingleton<FCoreTextsSingleton>::Reset(TLazySingleton<FCoreTextsSingleton> *this)

{
  FCoreTextsSingleton *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FCoreTextsSingleton *)0x0) {
    pIVar2 = (pFVar1->None).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar2 = (pFVar1->No).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar2 = (pFVar1->Yes).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar2 = (pFVar1->False).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar2 = (pFVar1->True).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    this->Ptr = (FCoreTextsSingleton *)0x0;
  }
  return;
}

// Get @ 1418dc0f0

FGlobalEngineVersions * __cdecl TLazySingleton<FGlobalEngineVersions>::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FGlobalEngineVersions *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FGlobalEngineVersions::FGlobalEngineVersions
              ((FGlobalEngineVersions *)
               &`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_154f09f68 =
         &`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FGlobalEngineVersions>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FGlobalEngineVersions *)DAT_154f09f68 == (FGlobalEngineVersions *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGlobalEngineVersions *)(*pcVar1)();
    return pFVar3;
  }
  return (FGlobalEngineVersions *)DAT_154f09f68;
}

// Get @ 1419447a0

FStaticData * __cdecl TLazySingleton<FPaths::FStaticData>::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FStaticData *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FLazySingleton::Construct<FPaths::FStaticData>
              (&`private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_154f0c830 =
         &`private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FPaths::FStaticData>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FStaticData *)DAT_154f0c830 == (FStaticData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStaticData *)(*pcVar1)();
    return pFVar3;
  }
  return (FStaticData *)DAT_154f0c830;
}

