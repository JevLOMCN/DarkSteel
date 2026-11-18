// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 30

// FInternationalization @ 1416d5890

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FInternationalization * __thiscall
FInternationalization::FInternationalization(FInternationalization *this)

{
  bool bVar1;
  FICUInternationalization *this_00;
  FICUInternationalization *this_01;
  
  this->bIsInitialized = false;
  this_01 = (FICUInternationalization *)0x0;
  *(undefined8 *)&this->CultureChangedEvent = 0;
  *(undefined8 *)&(this->CultureChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->CultureChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->CultureChangedEvent).field_0x18 = 2;
  this_00 = ::operator_new(0x270);
  if (this_00 != (FICUInternationalization *)0x0) {
    this_01 = FICUInternationalization::FICUInternationalization(this_00,this);
  }
  (this->Implementation).Obj.Ptr = this_01;
  (this->CurrentLanguage).Object = (FCulture *)0x0;
  (this->CurrentLanguage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentLocale).Object = (FCulture *)0x0;
  (this->CurrentLocale).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentAssetGroupCultures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentAssetGroupCultures).ArrayNum = 0;
  (this->CurrentAssetGroupCultures).ArrayMax = 0;
  (this->DefaultLanguage).Object = (FCulture *)0x0;
  (this->DefaultLanguage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DefaultLocale).Object = (FCulture *)0x0;
  (this->DefaultLocale).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InvariantCulture).Object = (FCulture *)0x0;
  (this->InvariantCulture).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CustomCultures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomCultures).ArrayNum = 0;
  (this->CustomCultures).ArrayMax = 0;
  if ((this->bIsInitialized == false) && (IsInitializing == false)) {
    IsInitializing = true;
    bVar1 = FICUInternationalization::Initialize(this_01);
    this->bIsInitialized = bVar1;
    IsInitializing = false;
  }
  return this;
}

// ~FInternationalization @ 1416d8d90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FInternationalization::~FInternationalization(FInternationalization *this)

{
  FScriptContainerElement *pFVar1;
  FICUInternationalization *this_00;
  void *pvVar2;
  
  if (this->bIsInitialized != false) {
    Terminate(this);
  }
  DestructItems<TSharedRef<FCulture,1>,int>
            ((TSharedRef<FCulture,1> *)(this->CustomCultures).AllocatorInstance.Data,
             (this->CustomCultures).ArrayNum);
  pFVar1 = (this->CustomCultures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InvariantCulture).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultLocale).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultLanguage).SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>
            ((TTuple<FName,TSharedPtr<FCulture,1>_> *)
             (this->CurrentAssetGroupCultures).AllocatorInstance.Data,
             (this->CurrentAssetGroupCultures).ArrayNum);
  pFVar1 = (this->CurrentAssetGroupCultures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentLocale).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentLanguage).SharedReferenceCount.ReferenceController);
  this_00 = (this->Implementation).Obj.Ptr;
  if (this_00 != (FICUInternationalization *)0x0) {
    FICUInternationalization::~FICUInternationalization(this_00);
    ::operator_delete(this_00,0x270);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CultureChangedEvent).field_0x8,*(int *)&(this->CultureChangedEvent).field_0x10
            );
  pvVar2 = *(void **)&(this->CultureChangedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CultureChangedEvent);
  return;
}

// AddCustomCulture @ 1416defd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FInternationalization::AddCustomCulture
          (FInternationalization *this,TSharedRef<ICustomCulture,1> *param_1)

{
  int *piVar1;
  TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<FCulture,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FCustomCultureImplementation *this_00;
  TSharedRef<FCulture,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TUniquePtr<FICUCultureImplementation,TDefaultDelete<FICUCultureImplementation>_> local_res8;
  TSharedRef<FCulture,1> local_18;
  
  pTVar2 = &this->CustomCultures;
  this_00 = ::operator_new(0x2e8);
  local_res8.Ptr = (FICUCultureImplementation *)0x0;
  if (this_00 != (FCustomCultureImplementation *)0x0) {
    local_res8.Ptr =
         (FICUCultureImplementation *)
         FCustomCultureImplementation::FCustomCultureImplementation(this_00,param_1);
  }
  pTVar8 = FCulture::Create(&local_18,&local_res8);
  pTVar3 = (TSharedRef<FCulture,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= pTVar8) && (pTVar8 < pTVar3 + (this->CustomCultures).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->CustomCultures).ArrayNum;
  piVar1 = &(this->CustomCultures).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->CustomCultures).ArrayNum = iVar7 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FCulture **)pFVar9 = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((FCustomCultureImplementation *)local_res8.Ptr != (FCustomCultureImplementation *)0x0) {
    (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
  }
  return;
}

// BackupCultureState @ 1416e1580

/* WARNING: Removing unreachable block (ram,0x0001416e17d1) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FInternationalization::BackupCultureState
          (FInternationalization *this,FCultureStateSnapshot *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,FString> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_48;
  FString local_40;
  
  if (((this->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&param_1->Language,&((this->CurrentLanguage).Object)->CachedName);
  if (((this->CurrentLocale).Object == (FCulture *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&param_1->Locale,&((this->CurrentLocale).Object)->CachedName);
  uVar3 = (this->CurrentAssetGroupCultures).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  pTVar5 = (TTuple<FName,FString> *)(param_1->AssetGroups).AllocatorInstance.Data;
  iVar4 = (param_1->AssetGroups).ArrayNum;
  piVar1 = &(param_1->AssetGroups).ArrayMax;
  if (*piVar1 < (int)uVar3) {
    DestructItems<TTuple<FName,FString>,int>(pTVar5,iVar4);
    (param_1->AssetGroups).ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar3,&(param_1->AssetGroups).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<FName,FString>,int>(pTVar5,iVar4);
    (param_1->AssetGroups).ArrayNum = 0;
  }
  iVar4 = (this->CurrentAssetGroupCultures).ArrayNum;
  pFVar10 = (this->CurrentAssetGroupCultures).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->CurrentAssetGroupCultures).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,TSharedPtr<FCulture,1>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) {
      return;
    }
    if ((*(longlong *)(pFVar10 + 8) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_48 = *(undefined8 *)pFVar10;
    ::FString::FString(&local_40,(FString *)(*(longlong *)(pFVar10 + 8) + 0x28));
    pFVar6 = (param_1->AssetGroups).AllocatorInstance.Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    iVar9 = (param_1->AssetGroups).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_1->AssetGroups).AllocatorInstance,piVar1);
    }
    (param_1->AssetGroups).ArrayNum = iVar9 + 1;
    pFVar6 = (param_1->AssetGroups).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
    *(undefined8 *)pFVar6 = local_48;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(FScriptContainerElement **)(pFVar6 + 8) = local_40.Data.AllocatorInstance.Data;
    local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 0x10) = local_40.Data.ArrayNum;
    *(int *)(pFVar6 + 0x14) = local_40.Data.ArrayMax;
    local_40.Data.ArrayNum = 0;
    local_40.Data.ArrayMax = 0;
    pFVar10 = pFVar10 + 0x18;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ClearCurrentAssetGroupCulture @ 1416e3120

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FInternationalization::ClearCurrentAssetGroupCulture(FInternationalization *this,FName *param_1)

{
  FName FVar1;
  FName *pFVar2;
  longlong lVar3;
  FName *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  iVar6 = (this->CurrentAssetGroupCultures).ArrayNum;
  lVar3 = (longlong)iVar6;
  FVar1 = *param_1;
  if (iVar6 != 0) {
    iVar9 = 0;
    pFVar2 = (FName *)(this->CurrentAssetGroupCultures).AllocatorInstance.Data;
    bVar10 = *pFVar2 != FVar1;
    lVar8 = 0;
    iVar6 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar7 = iVar6 + 1;
      if (lVar8 < lVar3) {
        pFVar4 = pFVar2 + lVar8 * 3;
        do {
          if (bVar10 != (*pFVar4 != FVar1)) break;
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 1;
          pFVar4 = pFVar4 + 3;
        } while (lVar8 < lVar3);
      }
      iVar5 = iVar7 - iVar6;
      if (bVar10 == false) {
        DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>
                  ((TTuple<FName,TSharedPtr<FCulture,1>_> *)(pFVar2 + (longlong)iVar6 * 3),iVar5);
      }
      else {
        if (iVar9 != iVar6) {
          memmove(pFVar2 + (longlong)iVar9 * 3,pFVar2 + (longlong)iVar6 * 3,(longlong)iVar5 * 0x18);
        }
        iVar9 = iVar9 + iVar5;
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar3);
    (this->CurrentAssetGroupCultures).ArrayNum = iVar9;
  }
  return;
}

// Get @ 1416f13a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FInternationalization * __cdecl FInternationalization::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FInternationalization *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FLazySingleton::Construct<FInternationalization>
              (&`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_154eb4998 =
         &`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FInternationalization>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FInternationalization *)DAT_154eb4998 == (FInternationalization *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInternationalization *)(*pcVar1)();
    return pFVar3;
  }
  return (FInternationalization *)DAT_154eb4998;
}

// GetAvailableCultures @ 1416f2230

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> * __thiscall
FInternationalization::GetAvailableCultures
          (FInternationalization *this,
          TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  FICUInternationalization *pFVar2;
  FInternationalization *pFVar3;
  code *pcVar4;
  FCulture *pFVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FSharedReferencer<1> FVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res20 [8];
  undefined1 local_108;
  undefined1 local_107 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_100;
  uint local_f0;
  TSharedPtr<FCulture,1> local_e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  FScriptContainerElement *local_c8;
  TSharedPtr<FCulture,1> local_b8;
  FScriptContainerElement *local_a8;
  TSharedRef<FCulture,1> local_98;
  TSharedRef<FCulture,1> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_2) {
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    FICUInternationalization::GetCultureNames((this->Implementation).Obj.Ptr,&local_100);
    uVar8 = (ulonglong)local_100.ArrayNum;
    local_a8 = local_100.AllocatorInstance.Data + uVar8 * 0x10;
    local_f0 = local_100.ArrayNum;
    FVar12.Data = local_100.AllocatorInstance.Data;
    while( true ) {
      pFVar14 = local_a8;
      local_c8 = FVar12.Data;
      if (local_100.ArrayNum != (int)uVar8) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar12.Data == pFVar14) break;
      pFVar2 = (this->Implementation).Obj.Ptr;
      pFVar3 = pFVar2->I18N;
      ::FString::FString(&local_78,L"en-US-POSIX");
      InternationalizationUtilities::GetCanonicalCultureName
                (&local_68,(FString *)FVar12.Data,&local_78,pFVar3);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      FICUInternationalization::FindOrMakeCanonizedCulture(pFVar2,&local_e8,&local_68,No);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar5 = local_e8.Object;
      FVar11.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
      if (local_e8.Object != (FCulture *)0x0) {
        if ((local_e8.Object == (FCulture *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        FCulture::GetPrioritizedParentCultureNames
                  (&local_d8,&pFVar5->CachedTwoLetterISOLanguageName,&pFVar5->CachedScript,
                   &pFVar5->CachedRegion);
        iVar1 = local_d8.ArrayNum;
        pFVar14 = local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayNum * 0x10;
        FVar12.Data = local_d8.AllocatorInstance.Data;
        while( true ) {
          if (local_d8.ArrayNum != iVar1) {
            local_108 = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_108);
          }
          FVar11.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
          if (FVar12.Data == pFVar14) break;
          pFVar10 = (param_1->AllocatorInstance).Data;
          pFVar13 = pFVar10 + (longlong)param_1->ArrayNum * 0x10;
          if (pFVar10 == pFVar13) {
LAB_1416f2440:
            FVar12.Data = FVar12.Data + 0x10;
          }
          else {
            do {
              iVar7 = *(int *)(pFVar10 + 8);
              if (iVar7 == *(int *)(FVar12.Data + 8)) {
                if (1 < iVar7) {
                  iVar7 = FGenericPlatformStricmp::Stricmp
                                    (*(wchar_t **)pFVar10,*(wchar_t **)FVar12.Data);
                  bVar6 = iVar7 == 0;
                  goto LAB_1416f23e5;
                }
LAB_1416f23fb:
                if ((pFVar5 == (FCulture *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pTVar9 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
                  ;
                  return pTVar9;
                }
                bVar6 = FICUInternationalization::IsCultureAllowed
                                  ((this->Implementation).Obj.Ptr,&pFVar5->CachedName);
                if (!bVar6) goto LAB_1416f2440;
                if ((pFVar5 == (FCulture *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x408,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pTVar9 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
                  ;
                  return pTVar9;
                }
                FVar11.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
                local_98.Object = local_e8.Object;
                local_98.SharedReferenceCount.ReferenceController =
                     local_e8.SharedReferenceCount.ReferenceController;
                if (local_e8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_e8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((local_e8.Object == (FCulture *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x25d,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pTVar9 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
                  ;
                  return pTVar9;
                }
                TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<TSharedRef<FCulture,1>_>(__return_storage_ptr__,&local_98);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_98.SharedReferenceCount.ReferenceController);
                goto LAB_1416f24e7;
              }
              bVar6 = iVar7 + *(int *)(FVar12.Data + 8) == 1;
LAB_1416f23e5:
              if (bVar6) goto LAB_1416f23fb;
              pFVar10 = pFVar10 + 0x10;
            } while (pFVar10 != pFVar13);
            FVar12.Data = FVar12.Data + 0x10;
          }
        }
LAB_1416f24e7:
        DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
        if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      FVar12.Data = local_c8 + 0x10;
      uVar8 = (ulonglong)local_f0;
    }
    DestructItems<FString,int>((FString *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
  }
  else {
    iVar1 = param_1->ArrayNum;
    pFVar14 = (param_1->AllocatorInstance).Data;
    pFVar10 = pFVar14 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        local_107[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_107);
      }
      if (pFVar14 == pFVar10) break;
      pFVar2 = (this->Implementation).Obj.Ptr;
      pFVar3 = pFVar2->I18N;
      ::FString::FString(&local_58,L"en-US-POSIX");
      InternationalizationUtilities::GetCanonicalCultureName
                (&local_48,(FString *)pFVar14,&local_58,pFVar3);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FICUInternationalization::FindOrMakeCanonizedCulture(pFVar2,&local_b8,&local_48,No);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      FVar11.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
      if (local_b8.Object != (FCulture *)0x0) {
        if ((local_b8.Object == (FCulture *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        FVar11.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
        local_88.Object = local_b8.Object;
        local_88.SharedReferenceCount.ReferenceController =
             local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_b8.Object == (FCulture *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TSharedRef<FCulture,1>_>(__return_storage_ptr__,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      pFVar14 = pFVar14 + 0x10;
    }
  }
  return __return_storage_ptr__;
}

// GetCulture @ 1416f4e00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FCulture,1> * __thiscall
FInternationalization::GetCulture
          (FInternationalization *this,TSharedPtr<FCulture,1> *__return_storage_ptr__,
          FString *param_1)

{
  FICUInternationalization::FindOrMakeCulture
            ((this->Implementation).Obj.Ptr,__return_storage_ptr__,param_1,No);
  return __return_storage_ptr__;
}

// GetCultureNames @ 1416f51d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FInternationalization::GetCultureNames
          (FInternationalization *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FICUInternationalization::GetCultureNames((this->Implementation).Obj.Ptr,param_1);
  return;
}

// GetCulturesWithAvailableLocalization @ 1416f51e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FInternationalization::GetCulturesWithAvailableLocalization
          (FInternationalization *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> local_18;
  
  TextLocalizationResourceUtil::GetLocalizedCultureNames(&local_28,param_1);
  pTVar2 = GetAvailableCultures(this,&local_18,&local_28,param_3);
  if (param_2 != pTVar2) {
    DestructItems<TSharedRef<FCulture,1>,int>
              ((TSharedRef<FCulture,1> *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayNum = pTVar2->ArrayNum;
    param_2->ArrayMax = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<TSharedRef<FCulture,1>,int>
            ((TSharedRef<FCulture,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((TSharedRef<FCulture,1> *)local_18.AllocatorInstance.Data != (TSharedRef<FCulture,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetCurrentAssetGroupCulture @ 1416f5e40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FCulture,1> * __thiscall
FInternationalization::GetCurrentAssetGroupCulture
          (FInternationalization *this,TSharedRef<FCulture,1> *__return_storage_ptr__,FName *param_1
          )

{
  FName *pFVar1;
  int iVar2;
  TSharedPtr<FCulture,1> *this_00;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->CurrentAssetGroupCultures).ArrayNum;
  pFVar3 = (FName *)(this->CurrentAssetGroupCultures).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 3;
  while( true ) {
    if ((this->CurrentAssetGroupCultures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<FName,TSharedPtr<FCulture,1>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 == *param_1) {
      this_00 = (TSharedPtr<FCulture,1> *)(pFVar3 + 1);
LAB_1416f5ea4:
      TSharedPtr<FCulture,1>::ToSharedRef(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    pFVar3 = pFVar3 + 3;
  }
  this_00 = &this->CurrentLanguage;
  goto LAB_1416f5ea4;
}

// GetCurrentCultures @ 1416f5ed0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> * __thiscall
FInternationalization::GetCurrentCultures
          (FInternationalization *this,
          TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [16];
  TSharedRef<FCulture,1> local_48;
  TSharedRef<FCulture,1> local_38;
  TSharedRef<FCulture,1> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1) {
    if (((this->CurrentLanguage).Object == (FCulture *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
    local_48.SharedReferenceCount.ReferenceController =
         (this->CurrentLanguage).SharedReferenceCount.ReferenceController;
    local_48.Object = (this->CurrentLanguage).Object;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_48.Object == (FCulture *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
    TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedRef<FCulture,1>_>(__return_storage_ptr__,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (param_2) {
    if (((this->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
    local_38.SharedReferenceCount.ReferenceController =
         (this->CurrentLocale).SharedReferenceCount.ReferenceController;
    local_38.Object = (this->CurrentLocale).Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_38.Object == (FCulture *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
    TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedRef<FCulture,1>_>(__return_storage_ptr__,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (param_3) {
    pFVar6 = (this->CurrentAssetGroupCultures).AllocatorInstance.Data;
    iVar2 = (this->CurrentAssetGroupCultures).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->CurrentAssetGroupCultures).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TSharedPtr<FCulture,1>_>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      if ((*(longlong *)(pFVar6 + 8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar5;
      }
      local_28.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar6 + 0x10);
      local_28.Object = *(FCulture **)(pFVar6 + 8);
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_28.Object == (FCulture *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar5;
      }
      TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSharedRef<FCulture,1>_>(__return_storage_ptr__,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      pFVar6 = pFVar6 + 0x18;
    }
  }
  return __return_storage_ptr__;
}

// GetCustomCulture @ 1416f61d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FCulture,1> * __thiscall
FInternationalization::GetCustomCulture
          (FInternationalization *this,TSharedPtr<FCulture,1> *__return_storage_ptr__,
          FString *param_1)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<FCulture,1> *pTVar3;
  
  pTVar3 = TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FInternationalization::GetCustomCulture_::__l2::<lambda_1>_>
                     (&this->CustomCultures,(<lambda_1>)param_1);
  if (pTVar3 != (TSharedRef<FCulture,1> *)0x0) {
    pFVar1 = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FCulture *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetPrioritizedCultureNames @ 1416fb140

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FInternationalization::GetPrioritizedCultureNames
          (FInternationalization *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  FICUInternationalization::GetPrioritizedCultureNames
            ((this->Implementation).Obj.Ptr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Initialize @ 1416ff6b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FInternationalization::Initialize(FInternationalization *this)

{
  bool bVar1;
  
  if ((this->bIsInitialized == false) && (!IsInitializing)) {
    IsInitializing = true;
    bVar1 = FICUInternationalization::Initialize((this->Implementation).Obj.Ptr);
    this->bIsInitialized = bVar1;
    IsInitializing = false;
  }
  return;
}

// IsAvailable @ 1417015c0

bool __cdecl FInternationalization::IsAvailable(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FLazySingleton::Construct<FInternationalization>
                (&`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                  ::__l2::Singleton);
      DAT_154eb4998 =
           &`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
            ::__l2::Singleton;
      atexit(`TLazySingleton<FInternationalization>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((DAT_154eb4998 != (TLazySingleton<class_FInternationalization> *)0x0) &&
     (*DAT_154eb4998 != (TLazySingleton<class_FInternationalization>)0x0)) {
    return true;
  }
  return false;
}

// IsCultureAllowed @ 1417018f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FInternationalization::IsCultureAllowed(FInternationalization *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = FICUInternationalization::IsCultureAllowed((this->Implementation).Obj.Ptr,param_1);
  return bVar1;
}

// IsCultureRemapped @ 1417019c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FInternationalization::IsCultureRemapped
          (FInternationalization *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  
  bVar1 = FICUInternationalization::IsCultureRemapped
                    ((this->Implementation).Obj.Ptr,param_1,param_2);
  return bVar1;
}

// Leetify @ 1417034f0

FString * __cdecl FInternationalization::Leetify(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t wVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FString local_38;
  
  iVar9 = (param_1->Data).ArrayNum;
  if (iVar9 < 2) {
    return param_1;
  }
  iVar10 = 0;
  if ((1 < iVar9 + -1) && (*(short *)(param_1->Data).AllocatorInstance.Data == 0x2021)) {
    iVar11 = (param_1->Data).ArrayNum;
    iVar9 = iVar11 + -1;
    iVar8 = iVar9;
    if (iVar11 == 0) {
      iVar8 = 0;
    }
    if (((iVar8 + -1 < 0) || (iVar9 <= iVar8 + -1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar8 * 2 + -2) == 0x2021) {
      return param_1;
    }
  }
  iVar11 = (param_1->Data).ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = iVar11 + 0x11;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (iVar11 == 0) {
    iVar9 = 0x12;
  }
  ::FString::Reserve(&local_38,iVar9);
  ::FString::AppendChar(&local_38,L'‡');
  iVar9 = (param_1->Data).ArrayNum;
  bVar3 = false;
  iVar11 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    do {
      if (iVar10 < 0) {
code_r0x000141703622:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
      }
      else {
        iVar8 = (param_1->Data).ArrayNum;
        iVar9 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar9 = 0;
        }
        if (iVar9 <= iVar10) goto code_r0x000141703622;
      }
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      wVar7 = *(wchar_t *)(pFVar1 + (longlong)iVar10 * 2);
      if ((bVar3) || (wVar7 != L'{')) {
        if (wVar7 != L'`') goto LAB_1417036e1;
        bVar3 = !bVar3;
LAB_1417036e4:
        switch(wVar7) {
        case L'A':
          wVar7 = L'4';
          break;
        case L'B':
        case L'b':
          wVar7 = L'8';
          break;
        default:
          break;
        case L'E':
        case L'e':
          wVar7 = L'3';
          break;
        case L'G':
        case L'g':
          wVar7 = L'9';
          break;
        case L'I':
          wVar7 = L'1';
          break;
        case L'O':
        case L'o':
          wVar7 = L'0';
          break;
        case L'S':
          wVar7 = L'5';
          break;
        case L'T':
        case L't':
          wVar7 = L'7';
          break;
        case L'Z':
        case L'z':
          wVar7 = L'2';
          break;
        case L'a':
          wVar7 = L'@';
          break;
        case L'i':
          wVar7 = L'!';
          break;
        case L's':
          wVar7 = L'$';
        }
      }
      else {
        pwVar6 = wcschr((wchar_t *)(pFVar1 + (longlong)iVar10 * 2 + 2),L'}');
        if (pwVar6 == (wchar_t *)0x0) {
LAB_1417036e1:
          bVar3 = false;
          goto LAB_1417036e4;
        }
        ::FString::AppendChar(&local_38,L'«');
        iVar9 = (int)((longlong)pwVar6 - (longlong)pFVar1 >> 1);
        if ((iVar9 < iVar10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArgumentEndIndex >= SourceCharIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Internationalization.cpp"
                               ,0x179,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
        ::FString::AppendChars
                  (&local_38,(wchar_t *)(pFVar1 + (longlong)iVar10 * 2),(iVar9 - iVar10) + 1);
        wVar7 = L'»';
        iVar10 = iVar9;
      }
      ::FString::AppendChar(&local_38,wVar7);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  ::FString::AppendChar(&local_38,L'‡');
  iVar9 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar9);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// LoadAllCultureData @ 141703f00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FInternationalization::LoadAllCultureData(FInternationalization *this)

{
  int iVar1;
  FICUInternationalization *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  TSharedPtr<FCulture,1> local_28;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId412,"FInternationalization::LoadAllCultureData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Internationalization.cpp"
               ,0x19c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId412);
  }
  this_00 = (this->Implementation).Obj.Ptr;
  iVar1 = (this_00->AllAvailableCultures).ArrayNum;
  pFVar3 = (this_00->AllAvailableCultures).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this_00->AllAvailableCultures).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FICUInternationalization::FICUCultureData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FICUInternationalization::FindOrMakeCanonizedCulture(this_00,&local_28,(FString *)pFVar3,No);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    pFVar3 = pFVar3 + 0x40;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RefreshCachedConfigData @ 141709200

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FInternationalization::RefreshCachedConfigData(FInternationalization *this)

{
  FICUInternationalization *this_00;
  FCultureFilter *pFVar1;
  
  this_00 = (this->Implementation).Obj.Ptr;
  this_00->bHasInitializedCultureMappings = false;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&this_00->CultureMappings);
  FICUInternationalization::ConditionalInitializeCultureMappings(this_00);
  this_00->bHasInitializedAllowedCultures = false;
  pFVar1 = (this_00->AllowedCulturesFilter).Ptr;
  if (pFVar1 != (FCultureFilter *)0x0) {
    (this_00->AllowedCulturesFilter).Ptr = (FCultureFilter *)0x0;
    (*(code *)pFVar1[-1].DisabledCultures.Hash.SecondaryData)();
  }
  FICUInternationalization::ConditionalInitializeAllowedCultures(this_00);
  return;
}

// RefreshCultureDisplayNames @ 1417098e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FInternationalization::RefreshCultureDisplayNames
          (FInternationalization *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FICUInternationalization::RefreshCultureDisplayNames((this->Implementation).Obj.Ptr,param_1);
  return;
}

// RestoreCultureState @ 14170e200

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FInternationalization::RestoreCultureState
          (FInternationalization *this,FCultureStateSnapshot *param_1)

{
  int *piVar1;
  FICUInternationalization *pFVar2;
  FInternationalization *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<FCulture,1> *pTVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  undefined8 local_118;
  FCulture *local_110;
  TReferenceControllerBase<1> *local_108;
  TSharedPtr<FCulture,1> local_100;
  TSharedPtr<FCulture,1> local_f0;
  TSharedPtr<FCulture,1> local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FCulture *local_70;
  TReferenceControllerBase<1> *pTStack_68;
  FCulture *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TSharedRef<FCulture,1> local_50;
  
  bVar7 = 0;
  if (1 < (param_1->Language).Data.ArrayNum) {
    pFVar2 = (this->Implementation).Obj.Ptr;
    pFVar3 = pFVar2->I18N;
    ::FString::FString(&local_d0,L"en-US-POSIX");
    InternationalizationUtilities::GetCanonicalCultureName
              (&local_c0,&param_1->Language,&local_d0,pFVar3);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    FICUInternationalization::FindOrMakeCanonizedCulture(pFVar2,&local_f0,&local_c0,No);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if ((local_f0.Object != (FCulture *)0x0) && ((this->CurrentLanguage).Object != local_f0.Object))
    {
      bVar7 = 1;
      if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_70 = (this->CurrentLanguage).Object;
      pTStack_68 = (this->CurrentLanguage).SharedReferenceCount.ReferenceController;
      (this->CurrentLanguage).Object = local_f0.Object;
      (this->CurrentLanguage).SharedReferenceCount.ReferenceController =
           local_f0.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_68);
      pFVar2 = (this->Implementation).Obj.Ptr;
      pTVar11 = TSharedPtr<FCulture,1>::ToSharedRef(&this->CurrentLanguage,&local_50);
      FICUInternationalization::HandleLanguageChanged(pFVar2,pTVar11);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.SharedReferenceCount.ReferenceController);
  }
  if (1 < (param_1->Locale).Data.ArrayNum) {
    pFVar2 = (this->Implementation).Obj.Ptr;
    pFVar3 = pFVar2->I18N;
    ::FString::FString(&local_b0,L"en-US-POSIX");
    InternationalizationUtilities::GetCanonicalCultureName
              (&local_a0,&param_1->Locale,&local_b0,pFVar3);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    FICUInternationalization::FindOrMakeCanonizedCulture(pFVar2,&local_e0,&local_a0,No);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((local_e0.Object != (FCulture *)0x0) && ((this->CurrentLocale).Object != local_e0.Object)) {
      bVar7 = 1;
      if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_60 = (this->CurrentLocale).Object;
      pTStack_58 = (this->CurrentLocale).SharedReferenceCount.ReferenceController;
      (this->CurrentLocale).Object = local_e0.Object;
      (this->CurrentLocale).SharedReferenceCount.ReferenceController =
           local_e0.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
  }
  bVar6 = (bool)(bVar7 | 0 < (this->CurrentAssetGroupCultures).ArrayNum);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,TSizedDefaultAllocator<32>_>::Reset
            (&this->CurrentAssetGroupCultures,(param_1->AssetGroups).ArrayNum);
  local_res10 = (param_1->AssetGroups).ArrayNum;
  uVar12 = (ulonglong)(int)local_res10;
  pFVar13 = (param_1->AssetGroups).AllocatorInstance.Data;
  local_res18 = pFVar13 + uVar12 * 0x18;
  while( true ) {
    pFVar4 = local_res18;
    if ((param_1->AssetGroups).ArrayNum != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,FString>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar4) break;
    pFVar2 = (this->Implementation).Obj.Ptr;
    pFVar3 = pFVar2->I18N;
    ::FString::FString(&local_90,L"en-US-POSIX");
    InternationalizationUtilities::GetCanonicalCultureName
              (&local_80,(FString *)(pFVar13 + 8),&local_90,pFVar3);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    FICUInternationalization::FindOrMakeCanonizedCulture(pFVar2,&local_100,&local_80,No);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    FVar8.ReferenceController = local_100.SharedReferenceCount.ReferenceController;
    if (local_100.Object != (FCulture *)0x0) {
      local_118 = *(undefined8 *)pFVar13;
      bVar6 = true;
      local_110 = local_100.Object;
      local_108 = local_100.SharedReferenceCount.ReferenceController;
      if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar4 = (this->CurrentAssetGroupCultures).AllocatorInstance.Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_118) &&
         ((FScriptContainerElement *)&local_118 <
          pFVar4 + (longlong)(this->CurrentAssetGroupCultures).ArrayMax * 0x18)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar10 = (this->CurrentAssetGroupCultures).ArrayNum;
      piVar1 = &(this->CurrentAssetGroupCultures).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->CurrentAssetGroupCultures).AllocatorInstance,piVar1);
      }
      (this->CurrentAssetGroupCultures).ArrayNum = iVar10 + 1;
      pFVar4 = (this->CurrentAssetGroupCultures).AllocatorInstance.Data + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar4 = local_118;
      *(FCulture **)(pFVar4 + 8) = local_110;
      *(TReferenceControllerBase<1> **)(pFVar4 + 0x10) = local_108;
      local_108 = (TReferenceControllerBase<1> *)0x0;
      local_110 = (FCulture *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    uVar12 = (ulonglong)local_res10;
    pFVar13 = pFVar13 + 0x18;
  }
  if (bVar6) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->CultureChangedEvent);
  }
  return;
}

// SetCurrentAssetGroupCulture @ 141710be0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FInternationalization::SetCurrentAssetGroupCulture
          (FInternationalization *this,FName *param_1,FString *param_2)

{
  int *piVar1;
  FICUInternationalization *this_00;
  FInternationalization *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FName FVar8;
  FName *pFVar9;
  TSharedPtr<FCulture,1> local_78;
  FString local_68;
  FString local_58;
  FName local_48;
  FName FStack_40;
  FName local_38;
  FName local_30;
  FName local_28;
  
  this_00 = (this->Implementation).Obj.Ptr;
  pFVar2 = this_00->I18N;
  ::FString::FString(&local_68,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName(&local_58,param_2,&local_68,pFVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FICUInternationalization::FindOrMakeCanonizedCulture(this_00,&local_78,&local_58,No);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((FName)local_78.Object == (FName)0x0) {
    bVar5 = false;
  }
  else {
    pFVar9 = (FName *)(this->CurrentAssetGroupCultures).AllocatorInstance.Data;
    FVar8 = *param_1;
    pFVar3 = pFVar9 + (longlong)(this->CurrentAssetGroupCultures).ArrayNum * 3;
    for (; pFVar9 != pFVar3; pFVar9 = pFVar9 + 3) {
      if (*pFVar9 == FVar8) {
        if (pFVar9 != (FName *)0x0) {
          if (pFVar9[1] == (FName)local_78.Object) goto LAB_141710d80;
          if ((FName)local_78.SharedReferenceCount.ReferenceController != (FName)0x0) {
            LOCK();
            *(int *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8) =
                 *(int *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8) + 1;
            UNLOCK();
          }
          local_48 = pFVar9[1];
          FVar8 = pFVar9[2];
          pFVar9[1] = (FName)local_78.Object;
          pFVar9[2] = (FName)local_78.SharedReferenceCount.ReferenceController;
          FStack_40 = FVar8;
          goto LAB_141710d72;
        }
        break;
      }
    }
    local_30 = (FName)local_78.Object;
    local_28 = (FName)local_78.SharedReferenceCount.ReferenceController;
    if ((FName)local_78.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(int *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8) =
           *(int *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8) + 1;
      UNLOCK();
    }
    pFVar3 = (FName *)(this->CurrentAssetGroupCultures).AllocatorInstance.Data;
    local_38 = FVar8;
    if (((pFVar3 <= &local_38) &&
        (&local_38 < pFVar3 + (longlong)(this->CurrentAssetGroupCultures).ArrayMax * 3)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->CurrentAssetGroupCultures).ArrayNum;
    piVar1 = &(this->CurrentAssetGroupCultures).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->CurrentAssetGroupCultures).AllocatorInstance,piVar1);
    }
    (this->CurrentAssetGroupCultures).ArrayNum = iVar7 + 1;
    pFVar3 = (FName *)((this->CurrentAssetGroupCultures).AllocatorInstance.Data +
                      (longlong)iVar7 * 0x18);
    *pFVar3 = local_38;
    pFVar3[1] = local_30;
    pFVar3[2] = local_28;
    local_28.ComparisonIndex.Value = 0;
    local_28.Number = 0;
    FVar8.ComparisonIndex.Value = 0;
    FVar8.Number = 0;
    local_30.ComparisonIndex.Value = 0;
    local_30.Number = 0;
LAB_141710d72:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar8);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->CultureChangedEvent);
LAB_141710d80:
    bVar5 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return bVar5;
}

// SetCurrentCulture @ 141710df0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FInternationalization::SetCurrentCulture(FInternationalization *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FICUInternationalization *pFVar3;
  FInternationalization *pFVar4;
  TTuple<FName,TSharedPtr<FCulture,1>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FCulture,1> *pTVar7;
  bool bVar8;
  TSharedPtr<FCulture,1> local_38;
  TSharedRef<FCulture,1> local_28;
  
  pFVar3 = (this->Implementation).Obj.Ptr;
  pFVar4 = pFVar3->I18N;
  ::FString::FString((FString *)&local_38,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName
            ((FString *)&local_28,param_1,(FString *)&local_38,pFVar4);
  if (local_38.Object != (FCulture *)0x0) {
    FMemory::Free(local_38.Object);
  }
  FICUInternationalization::FindOrMakeCanonizedCulture(pFVar3,&local_38,(FString *)&local_28,No);
  if (local_28.Object != (FCulture *)0x0) {
    FMemory::Free(local_28.Object);
  }
  if ((local_38.Object != (FCulture *)0x0) &&
     ((((this->CurrentLanguage).Object != local_38.Object ||
       ((this->CurrentLocale).Object != local_38.Object)) ||
      (0 < (this->CurrentAssetGroupCultures).ArrayNum)))) {
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->CurrentLanguage).SharedReferenceCount.ReferenceController;
    (this->CurrentLanguage).Object = local_38.Object;
    (this->CurrentLanguage).SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->CurrentLocale).SharedReferenceCount.ReferenceController;
    (this->CurrentLocale).Object = local_38.Object;
    (this->CurrentLocale).SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    piVar1 = &(this->CurrentAssetGroupCultures).ArrayMax;
    pTVar5 = (TTuple<FName,TSharedPtr<FCulture,1>_> *)
             (this->CurrentAssetGroupCultures).AllocatorInstance.Data;
    iVar2 = (this->CurrentAssetGroupCultures).ArrayNum;
    if ((this->CurrentAssetGroupCultures).ArrayMax < 0) {
      DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>(pTVar5,iVar2);
      (this->CurrentAssetGroupCultures).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->CurrentAssetGroupCultures).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>(pTVar5,iVar2);
      (this->CurrentAssetGroupCultures).ArrayNum = 0;
    }
    pFVar3 = (this->Implementation).Obj.Ptr;
    pTVar7 = TSharedPtr<FCulture,1>::ToSharedRef(&this->CurrentLanguage,&local_28);
    FICUInternationalization::HandleLanguageChanged(pFVar3,pTVar7);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->CultureChangedEvent);
  }
  if ((((this->CurrentLanguage).Object == local_38.Object) &&
      ((this->CurrentLocale).Object == local_38.Object)) &&
     ((this->CurrentAssetGroupCultures).ArrayNum == 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return bVar8;
}

// SetCurrentLanguage @ 141710fa0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FInternationalization::SetCurrentLanguage(FInternationalization *this,FString *param_1)

{
  FICUInternationalization *pFVar1;
  FInternationalization *pFVar2;
  FCulture *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FCulture,1> *pTVar5;
  TSharedPtr<FCulture,1> local_28;
  TSharedRef<FCulture,1> local_18;
  
  pFVar1 = (this->Implementation).Obj.Ptr;
  pFVar2 = pFVar1->I18N;
  ::FString::FString((FString *)&local_28,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName
            ((FString *)&local_18,param_1,(FString *)&local_28,pFVar2);
  if (local_28.Object != (FCulture *)0x0) {
    FMemory::Free(local_28.Object);
  }
  FICUInternationalization::FindOrMakeCanonizedCulture(pFVar1,&local_28,(FString *)&local_18,No);
  if (local_18.Object != (FCulture *)0x0) {
    FMemory::Free(local_18.Object);
  }
  if ((local_28.Object != (FCulture *)0x0) && ((this->CurrentLanguage).Object != local_28.Object)) {
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->CurrentLanguage).SharedReferenceCount.ReferenceController;
    (this->CurrentLanguage).Object = local_28.Object;
    (this->CurrentLanguage).SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar1 = (this->Implementation).Obj.Ptr;
    pTVar5 = TSharedPtr<FCulture,1>::ToSharedRef(&this->CurrentLanguage,&local_18);
    FICUInternationalization::HandleLanguageChanged(pFVar1,pTVar5);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->CultureChangedEvent);
  }
  pFVar3 = (this->CurrentLanguage).Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return pFVar3 == local_28.Object;
}

// SetCurrentLanguageAndLocale @ 1417110b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FInternationalization::SetCurrentLanguageAndLocale(FInternationalization *this,FString *param_1)

{
  FICUInternationalization *pFVar1;
  FInternationalization *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FCulture,1> *pTVar4;
  bool bVar5;
  TSharedPtr<FCulture,1> local_28;
  TSharedRef<FCulture,1> local_18;
  
  pFVar1 = (this->Implementation).Obj.Ptr;
  pFVar2 = pFVar1->I18N;
  ::FString::FString((FString *)&local_28,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName
            ((FString *)&local_18,param_1,(FString *)&local_28,pFVar2);
  if (local_28.Object != (FCulture *)0x0) {
    FMemory::Free(local_28.Object);
  }
  FICUInternationalization::FindOrMakeCanonizedCulture(pFVar1,&local_28,(FString *)&local_18,No);
  if (local_18.Object != (FCulture *)0x0) {
    FMemory::Free(local_18.Object);
  }
  if ((local_28.Object != (FCulture *)0x0) &&
     (((this->CurrentLanguage).Object != local_28.Object ||
      ((this->CurrentLocale).Object != local_28.Object)))) {
    if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (this->CurrentLanguage).SharedReferenceCount.ReferenceController;
      (this->CurrentLanguage).Object = local_28.Object;
      (this->CurrentLanguage).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    else {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar3 = (this->CurrentLanguage).SharedReferenceCount.ReferenceController;
      (this->CurrentLanguage).Object = local_28.Object;
      (this->CurrentLanguage).SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->CurrentLocale).SharedReferenceCount.ReferenceController;
    (this->CurrentLocale).Object = local_28.Object;
    (this->CurrentLocale).SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar1 = (this->Implementation).Obj.Ptr;
    pTVar4 = TSharedPtr<FCulture,1>::ToSharedRef(&this->CurrentLanguage,&local_18);
    FICUInternationalization::HandleLanguageChanged(pFVar1,pTVar4);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->CultureChangedEvent);
  }
  if (((this->CurrentLanguage).Object == local_28.Object) &&
     ((this->CurrentLocale).Object == local_28.Object)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar5;
}

// SetCurrentLocale @ 141711220

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FInternationalization::SetCurrentLocale(FInternationalization *this,FString *param_1)

{
  FICUInternationalization *this_00;
  FInternationalization *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  TSharedPtr<FCulture,1> local_28;
  FString local_18;
  
  this_00 = (this->Implementation).Obj.Ptr;
  pFVar1 = this_00->I18N;
  ::FString::FString((FString *)&local_28,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName
            (&local_18,param_1,(FString *)&local_28,pFVar1);
  if (local_28.Object != (FCulture *)0x0) {
    FMemory::Free(local_28.Object);
  }
  FICUInternationalization::FindOrMakeCanonizedCulture(this_00,&local_28,&local_18,No);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Object != (FCulture *)0x0) {
    bVar3 = true;
    if ((this->CurrentLocale).Object == local_28.Object) goto LAB_1417112e1;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (this->CurrentLocale).SharedReferenceCount.ReferenceController;
    (this->CurrentLocale).Object = local_28.Object;
    (this->CurrentLocale).SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->CultureChangedEvent);
  }
  bVar3 = (this->CurrentLocale).Object == local_28.Object;
LAB_1417112e1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// TearDown @ 1417145d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl FInternationalization::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154eb4998 = 0;
      atexit(`TLazySingleton<FInternationalization>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<FInternationalization>::Reset
            ((TLazySingleton<FInternationalization> *)
             &`private:_static_class_TLazySingleton<class_FInternationalization>&___ptr64___cdecl_TLazySingleton<FInternationalization>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// Terminate @ 141714b80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FInternationalization::Terminate(FInternationalization *this)

{
  int *piVar1;
  int iVar2;
  TTuple<FName,TSharedPtr<FCulture,1>_> *pTVar3;
  TSharedRef<FCulture,1> *pTVar4;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CurrentLanguage != (TSharedPtr<FCulture,1> *)&local_58) {
    (this->CurrentLanguage).Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentLanguage).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CurrentLocale != (TSharedPtr<FCulture,1> *)&local_48) {
    (this->CurrentLocale).Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentLocale).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  piVar1 = &(this->CurrentAssetGroupCultures).ArrayMax;
  pTVar3 = (TTuple<FName,TSharedPtr<FCulture,1>_> *)
           (this->CurrentAssetGroupCultures).AllocatorInstance.Data;
  iVar2 = (this->CurrentAssetGroupCultures).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>(pTVar3,iVar2);
    (this->CurrentAssetGroupCultures).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->CurrentAssetGroupCultures).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<FName,TSharedPtr<FCulture,1>_>,int>(pTVar3,iVar2);
    (this->CurrentAssetGroupCultures).ArrayNum = 0;
  }
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DefaultLanguage != (TSharedPtr<FCulture,1> *)&local_38) {
    (this->DefaultLanguage).Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DefaultLanguage).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DefaultLocale != (TSharedPtr<FCulture,1> *)&local_28) {
    (this->DefaultLocale).Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DefaultLocale).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  piVar1 = &(this->CustomCultures).ArrayMax;
  pTVar4 = (TSharedRef<FCulture,1> *)(this->CustomCultures).AllocatorInstance.Data;
  iVar2 = (this->CustomCultures).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedRef<FCulture,1>,int>(pTVar4,iVar2);
    (this->CustomCultures).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->CustomCultures).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FCulture,1>,int>(pTVar4,iVar2);
    (this->CustomCultures).ArrayNum = 0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->InvariantCulture != (TSharedPtr<FCulture,1> *)&local_18) {
    (this->InvariantCulture).Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InvariantCulture).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  FICUInternationalization::Terminate((this->Implementation).Obj.Ptr);
  this->bIsInitialized = false;
  return;
}

