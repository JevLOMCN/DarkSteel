// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FEngineFontServices @ 148907350

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FEngineFontServices * __thiscall FEngineFontServices::FEngineFontServices(FEngineFontServices *this)

{
  longlong lVar1;
  FSlateFontServices *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FEngineFontServices *pFVar6;
  FSlateApplication *pFVar7;
  FEngineFontServices local_18;
  
  (this->SlateFontServices).Object = (FSlateFontServices *)0x0;
  (this->SlateFontServices).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                       ,0xb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FEngineFontServices *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar7 = FSlateApplication::Get();
    lVar1 = *(longlong *)&pFVar7->field_0x60;
    if (lVar1 == 0) {
      return this;
    }
    if (*(longlong *)(lVar1 + 8) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FEngineFontServices *)(*pcVar4)();
        return pFVar6;
      }
    }
    pFVar2 = *(FSlateFontServices **)(lVar1 + 8);
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FSlateFontServices *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FEngineFontServices *)(*pcVar4)();
        return pFVar6;
      }
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.SlateFontServices.Object = pFVar2;
    local_18.SlateFontServices.SharedReferenceCount.ReferenceController = pTVar3;
    if (this != &local_18) {
      (this->SlateFontServices).Object = pFVar2;
      local_18.SlateFontServices.Object = (FSlateFontServices *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SlateFontServices).SharedReferenceCount,
                 &local_18.SlateFontServices.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SlateFontServices.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return this;
  }
  return this;
}

// ~FEngineFontServices @ 14890df30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FEngineFontServices::~FEngineFontServices(FEngineFontServices *this)

{
  code *pcVar1;
  bool bVar2;
  FEngineFontServices local_18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                         ,0x18,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_18.SlateFontServices.Object = (FSlateFontServices *)0x0;
  local_18.SlateFontServices.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    (this->SlateFontServices).Object = (FSlateFontServices *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SlateFontServices).SharedReferenceCount,
               &local_18.SlateFontServices.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SlateFontServices.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateFontServices).SharedReferenceCount.ReferenceController);
  return;
}

// Create @ 148922c00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FEngineFontServices::Create(void)

{
  longlong lVar1;
  FSlateFontServices *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FEngineFontServices *pFVar6;
  FSlateApplication *pFVar7;
  FEngineFontServices local_18;
  
  if ((Instance != (FEngineFontServices *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                         ,0x1f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = ::operator_new(0x10);
  if (pFVar6 == (FEngineFontServices *)0x0) {
    Instance = (FEngineFontServices *)0x0;
    return;
  }
  (pFVar6->SlateFontServices).Object = (FSlateFontServices *)0x0;
  (pFVar6->SlateFontServices).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                         ,0xb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar7 = FSlateApplication::Get();
    lVar1 = *(longlong *)&pFVar7->field_0x60;
    if (lVar1 != 0) {
      if ((*(longlong *)(lVar1 + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = *(FSlateFontServices **)(lVar1 + 8);
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x10);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar2 == (FSlateFontServices *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.SlateFontServices.Object = pFVar2;
      local_18.SlateFontServices.SharedReferenceCount.ReferenceController = pTVar3;
      if (pFVar6 != &local_18) {
        (pFVar6->SlateFontServices).Object = pFVar2;
        local_18.SlateFontServices.Object = (FSlateFontServices *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar6->SlateFontServices).SharedReferenceCount,
                   &local_18.SlateFontServices.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SlateFontServices.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  Instance = pFVar6;
  return;
}

// Destroy @ 148925020

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl FEngineFontServices::Destroy(void)

{
  code *pcVar1;
  FEngineFontServices *pFVar2;
  bool bVar3;
  FEngineFontServices local_18;
  
  if (Instance == (FEngineFontServices *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                       ,0x25,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = Instance;
  if (Instance != (FEngineFontServices *)0x0) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                         ,0x18,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18.SlateFontServices.Object = (FSlateFontServices *)0x0;
    local_18.SlateFontServices.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pFVar2 != &local_18) {
      (pFVar2->SlateFontServices).Object = (FSlateFontServices *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar2->SlateFontServices).SharedReferenceCount,
                 &local_18.SlateFontServices.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SlateFontServices.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar2->SlateFontServices).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar2,0x10);
  }
  Instance = (FEngineFontServices *)0x0;
  return;
}

// Get @ 1489545c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FEngineFontServices * __cdecl FEngineFontServices::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FEngineFontServices *pFVar3;
  
  if ((Instance == (FEngineFontServices *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                         ,0x31,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FEngineFontServices *)(*pcVar1)();
    return pFVar3;
  }
  return Instance;
}

// GetFontCache @ 148958aa0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<FSlateFontCache,1> * __thiscall
FEngineFontServices::GetFontCache
          (FEngineFontServices *this,TSharedPtr<FSlateFontCache,1> *__return_storage_ptr__)

{
  FSlateFontServices *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FSlateFontCache,1> *pTVar2;
  TSharedRef<FSlateFontCache,1> local_18;
  
  this_00 = (this->SlateFontServices).Object;
  if (this_00 != (FSlateFontServices *)0x0) {
    pTVar2 = FSlateFontServices::GetFontCache(this_00,&local_18);
    __return_storage_ptr__->Object = pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSlateFontCache *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetFontMeasure @ 148958b20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<FSlateFontMeasure,1> * __thiscall
FEngineFontServices::GetFontMeasure
          (FEngineFontServices *this,TSharedPtr<FSlateFontMeasure,1> *__return_storage_ptr__)

{
  FSlateFontServices *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FSlateFontMeasure,1> *pTVar2;
  TSharedRef<FSlateFontMeasure,1> local_18;
  
  this_00 = (this->SlateFontServices).Object;
  if (this_00 != (FSlateFontServices *)0x0) {
    pTVar2 = FSlateFontServices::GetFontMeasureService(this_00,&local_18);
    __return_storage_ptr__->Object = pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSlateFontMeasure *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsInitialized @ 148966ac0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __cdecl FEngineFontServices::IsInitialized(void)

{
  return Instance != (FEngineFontServices *)0x0;
}

// OnReleaseResources @ 14896ddd0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TMulticastDelegate<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy> * __thiscall
FEngineFontServices::OnReleaseResources(FEngineFontServices *this)

{
  FSlateFontServices *this_00;
  TMulticastDelegate<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy> *pTVar1;
  
  this_00 = (this->SlateFontServices).Object;
  if (this_00 != (FSlateFontServices *)0x0) {
    pTVar1 = FSlateFontServices::OnReleaseResources(this_00);
    return pTVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FEngineFontServices::OnReleaseResources'::__l2::
             _dynamic_atexit_destructor_for__DummyDelegate__);
      _Init_thread_footer(&::_TSS0);
      return &DummyDelegate;
    }
  }
  return &DummyDelegate;
}

// UpdateCache @ 148988f00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FEngineFontServices::UpdateCache(FEngineFontServices *this)

{
  FSlateFontServices *this_00;
  TSharedRef<FSlateFontCache,1> local_18;
  
  this_00 = (this->SlateFontServices).Object;
  if (this_00 != (FSlateFontServices *)0x0) {
    FSlateFontServices::GetFontCache(this_00,&local_18);
    FSlateFontCache::UpdateCache(local_18.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

