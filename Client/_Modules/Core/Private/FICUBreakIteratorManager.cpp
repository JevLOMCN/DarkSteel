// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// Create @ 1416e6bc0

void __cdecl FICUBreakIteratorManager::Create(void)

{
  code *pcVar1;
  bool bVar2;
  FICUBreakIteratorManager *lpCriticalSection;
  
  if (Singleton != (FICUBreakIteratorManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                       ,0xf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = ::operator_new(0x78);
  if (lpCriticalSection != (FICUBreakIteratorManager *)0x0) {
    (lpCriticalSection->AllocatedIteratorsCS).CriticalSection.Opaque1[0] = (void *)0x0;
    (lpCriticalSection->AllocatedIteratorsCS).CriticalSection.Opaque2[0] = 0;
    (lpCriticalSection->AllocatedIteratorsCS).CriticalSection.Opaque2[1] = 0;
    (lpCriticalSection->AllocatedIteratorsCS).CriticalSection.Opaque3[0] = (void *)0x0;
    (lpCriticalSection->AllocatedIteratorsCS).CriticalSection.Opaque3[1] = (void *)0x0;
    (lpCriticalSection->AllocatedIteratorsCS).CriticalSection.Opaque3[2] = (void *)0x0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x8 = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x10 = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x18 = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x20 = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x28 = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x30 = 0;
    (lpCriticalSection->AllocatedIterators).Hash.InlineData[0] = '\0';
    (lpCriticalSection->AllocatedIterators).Hash.InlineData[1] = '\0';
    (lpCriticalSection->AllocatedIterators).Hash.InlineData[2] = '\0';
    (lpCriticalSection->AllocatedIterators).Hash.InlineData[3] = '\0';
    (lpCriticalSection->AllocatedIterators).Hash._padding_ = 0;
    (lpCriticalSection->AllocatedIterators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).HashSize = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x8 = 0;
    *(undefined8 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x20 = 0;
    *(undefined4 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x28 = 0;
    *(undefined4 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(lpCriticalSection->AllocatedIterators).Elements.field_0x34 = 0;
    (lpCriticalSection->AllocatedIterators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (lpCriticalSection->AllocatedIterators).HashSize = 0;
    Singleton = lpCriticalSection;
    return;
  }
  Singleton = lpCriticalSection;
  return;
}

// CreateCharacterBoundaryIterator @ 1416e74c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TWeakPtr<icu_64::BreakIterator,1> * __thiscall
FICUBreakIteratorManager::CreateCharacterBoundaryIterator
          (FICUBreakIteratorManager *this,TWeakPtr<icu_64::BreakIterator,1> *__return_storage_ptr__)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  TWeakPtr<icu_64::BreakIterator,1> *pTVar6;
  TSharedRef<icu_64::BreakIterator_const_,1> *pTVar7;
  BreakIterator *pBVar8;
  TReferenceControllerBase<1> *pTVar9;
  BreakIterator *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<icu_64::BreakIterator_const_,1> local_28;
  
  if (this == (FICUBreakIteratorManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar5 = FInternationalization::Get();
  if ((pFVar5->DefaultLanguage).Object == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar1 = (pFVar5->DefaultLanguage).Object;
  pTVar2 = (pFVar5->DefaultLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar7 = FICUCultureImplementation::GetBreakIterator
                     ((pFVar1->Implementation).Ptr,&local_28,Grapheme);
  pBVar8 = (BreakIterator *)(**(code **)(pTVar7->Object->_padding_ + 0x18))();
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VBreakIterator_icu_64__U__DefaultDeleter_VBreakIterator_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = (longlong)pBVar8;
  }
  if (pBVar8 == (BreakIterator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pBVar8;
  local_30 = pTVar9;
  TSet<TSharedPtr<icu_64::BreakIterator,1>,DefaultKeyFuncs<TSharedPtr<icu_64::BreakIterator,1>,0>,FDefaultSetAllocator>
  ::Emplace<TSharedPtr<icu_64::BreakIterator,1>_>
            (&this->AllocatedIterators,(TSharedPtr<icu_64::BreakIterator,1> *)&stack0x00000008,
             (bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  __return_storage_ptr__->Object = pBVar8;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

// CreateLineBreakIterator @ 1416e8930

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TWeakPtr<icu_64::BreakIterator,1> * __thiscall
FICUBreakIteratorManager::CreateLineBreakIterator
          (FICUBreakIteratorManager *this,TWeakPtr<icu_64::BreakIterator,1> *__return_storage_ptr__)

{
  TSharedPtr<icu_64::BreakIterator_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCulture *pFVar3;
  FICUCultureImplementation *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FInternationalization *pFVar10;
  TWeakPtr<icu_64::BreakIterator,1> *pTVar11;
  TSharedRef<icu_64::BreakIterator_const_,1> *pTVar12;
  BreakIterator *pBVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined4 local_res8;
  BreakIterator *local_48;
  FSharedReferencer<1> local_40;
  BreakIterator *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<icu_64::BreakIterator_const_,1> local_28;
  
  bVar7 = false;
  bVar9 = false;
  local_res8 = 0;
  if (this == (FICUBreakIteratorManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar10 = FInternationalization::Get();
  if ((pFVar10->DefaultLanguage).Object == (FCulture *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  pTVar2 = (pFVar10->DefaultLanguage).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar10->DefaultLanguage).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FCulture *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  pFVar4 = (pFVar3->Implementation).Ptr;
  pTVar1 = &pFVar4->ICULineBreakIterator;
  if (pTVar1->Object == (BreakIterator *)0x0) {
    pTVar12 = ::`anonymous_namespace'::CreateBreakIterator(&local_28,&pFVar4->ICULocale,Line);
    local_40.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
    local_48 = pTVar12->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<icu_64::BreakIterator_const_,1> *)&local_48) {
      pTVar1->Object = local_48;
      local_48 = (BreakIterator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar4->ICULineBreakIterator).SharedReferenceCount,&local_40);
    }
    bVar7 = true;
    bVar9 = true;
  }
  pTVar5 = (pFVar4->ICULineBreakIterator).SharedReferenceCount.ReferenceController;
  pBVar13 = pTVar1->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if (pBVar13 == (BreakIterator *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pBVar13 == (BreakIterator *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pBVar13 = (BreakIterator *)(**(code **)(pBVar13->_padding_ + 0x18))(pBVar13);
  pTVar14 = ::operator_new(0x18);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VBreakIterator_icu_64__U__DefaultDeleter_VBreakIterator_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar14[1]._padding_ = (longlong)pBVar13;
  }
  if (pBVar13 == (BreakIterator *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pBVar13;
  local_30 = pTVar14;
  TSet<TSharedPtr<icu_64::BreakIterator,1>,DefaultKeyFuncs<TSharedPtr<icu_64::BreakIterator,1>,0>,FDefaultSetAllocator>
  ::Emplace<TSharedPtr<icu_64::BreakIterator,1>_>
            (&this->AllocatedIterators,(TSharedPtr<icu_64::BreakIterator,1> *)&local_res8,
             (bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  __return_storage_ptr__->Object = pBVar13;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar14;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

// CreateWordBreakIterator @ 1416e9360

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TWeakPtr<icu_64::BreakIterator,1> * __thiscall
FICUBreakIteratorManager::CreateWordBreakIterator
          (FICUBreakIteratorManager *this,TWeakPtr<icu_64::BreakIterator,1> *__return_storage_ptr__)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  TWeakPtr<icu_64::BreakIterator,1> *pTVar6;
  TSharedRef<icu_64::BreakIterator_const_,1> *pTVar7;
  BreakIterator *pBVar8;
  TReferenceControllerBase<1> *pTVar9;
  BreakIterator *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<icu_64::BreakIterator_const_,1> local_28;
  
  if (this == (FICUBreakIteratorManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar5 = FInternationalization::Get();
  if ((pFVar5->DefaultLanguage).Object == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar1 = (pFVar5->DefaultLanguage).Object;
  pTVar2 = (pFVar5->DefaultLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar7 = FICUCultureImplementation::GetBreakIterator((pFVar1->Implementation).Ptr,&local_28,Word);
  pBVar8 = (BreakIterator *)(**(code **)(pTVar7->Object->_padding_ + 0x18))();
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VBreakIterator_icu_64__U__DefaultDeleter_VBreakIterator_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = (longlong)pBVar8;
  }
  if (pBVar8 == (BreakIterator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TWeakPtr<icu_64::BreakIterator,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pBVar8;
  local_30 = pTVar9;
  TSet<TSharedPtr<icu_64::BreakIterator,1>,DefaultKeyFuncs<TSharedPtr<icu_64::BreakIterator,1>,0>,FDefaultSetAllocator>
  ::Emplace<TSharedPtr<icu_64::BreakIterator,1>_>
            (&this->AllocatedIterators,(TSharedPtr<icu_64::BreakIterator,1> *)&stack0x00000008,
             (bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  __return_storage_ptr__->Object = pBVar8;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

// Destroy @ 1416ea2d0

void __cdecl FICUBreakIteratorManager::Destroy(void)

{
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  FICUBreakIteratorManager *lpCriticalSection;
  bool bVar3;
  
  if (Singleton == (FICUBreakIteratorManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                       ,0x15,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lpCriticalSection = Singleton;
  if (Singleton != (FICUBreakIteratorManager *)0x0) {
    (Singleton->AllocatedIterators).HashSize = 0;
    FVar1 = (lpCriticalSection->AllocatedIterators).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<icu_64::BreakIterator,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<icu_64::BreakIterator,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(lpCriticalSection->AllocatedIterators).Elements);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x78);
  }
  Singleton = (FICUBreakIteratorManager *)0x0;
  return;
}

// DestroyIterator @ 1416eb290

void __thiscall
FICUBreakIteratorManager::DestroyIterator
          (FICUBreakIteratorManager *this,TWeakPtr<icu_64::BreakIterator,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  BreakIterator *pBVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TSharedPtr<icu_64::BreakIterator_const_,1> local_28;
  TWeakPtr<icu_64::BreakIterator,1> local_18;
  
  if (this == (FICUBreakIteratorManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pTVar7 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1416eb2e0;
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
    pBVar4 = param_1->Object;
    if (pBVar4 != (BreakIterator *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      local_28.Object = pBVar4;
      local_28.SharedReferenceCount.ReferenceController = pTVar7;
      if (*(int *)&(this->AllocatedIterators).Elements.field_0x8 ==
          *(int *)&(this->AllocatedIterators).Elements.field_0x34) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      }
      else {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        uVar6 = ((uint)((ulonglong)pBVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pBVar4 >> 4)) *
                -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        TSet<TSharedPtr<icu_64::BreakIterator,1>,DefaultKeyFuncs<TSharedPtr<icu_64::BreakIterator,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TSharedPtr<icu_64::BreakIterator_const_,1>_>
                  (&this->AllocatedIterators,uVar6 >> 0x10 ^ uVar6,&local_28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      }
    }
  }
LAB_1416eb2e0:
  if (param_1 != &local_18) {
    pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
    param_1->Object = (BreakIterator *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x0001416eb33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Get @ 1416f1300

FICUBreakIteratorManager * __cdecl FICUBreakIteratorManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FICUBreakIteratorManager *pFVar3;
  
  if ((Singleton == (FICUBreakIteratorManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                         ,0x21,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FICUBreakIteratorManager *)(*pcVar1)();
    return pFVar3;
  }
  return Singleton;
}

// IsInitialized @ 1417024a0

bool __cdecl FICUBreakIteratorManager::IsInitialized(void)

{
  return Singleton != (FICUBreakIteratorManager *)0x0;
}

