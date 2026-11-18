// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// CreateCamelCaseBreakIterator @ 1416e7240

TSharedRef<IBreakIterator,1> * __cdecl
FBreakIterator::CreateCamelCaseBreakIterator(TSharedRef<IBreakIterator,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FICUCamelCaseBreakIterator *pFVar5;
  TSharedRef<IBreakIterator,1> *pTVar6;
  undefined1 *puVar7;
  TRawPtrProxy<FICUCamelCaseBreakIterator> local_res8;
  undefined4 local_18 [4];
  
  pFVar5 = ::operator_new(0xc0);
  local_res8.Object = (FICUCamelCaseBreakIterator *)0x0;
  if (pFVar5 != (FICUCamelCaseBreakIterator *)0x0) {
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    puVar1 = &pFVar5->field_0x30;
    *(undefined8 *)&pFVar5->field_0x2c = 0;
    *(undefined8 *)&pFVar5->field_0x34 = 0;
    local_18[0] = 0;
    *(undefined8 *)&pFVar5->field_0x3c = 0;
    *(undefined8 *)&pFVar5->field_0x44 = 0;
    *(undefined8 *)&pFVar5->field_0x4c = 0;
    *(undefined8 *)&pFVar5->field_0x54 = 0;
    *(undefined8 *)&pFVar5->field_0x5c = 0;
    *(undefined8 *)&pFVar5->field_0x64 = 0;
    *(undefined8 *)&pFVar5->field_0x6c = 0;
    *(undefined8 *)&pFVar5->field_0x74 = 0;
    *(undefined8 *)&pFVar5->field_0x7c = 0;
    *(undefined8 *)&pFVar5->field_0x84 = 0;
    *(undefined8 *)&pFVar5->field_0x8c = 0;
    *(undefined8 *)&pFVar5->field_0x94 = 0;
    *(undefined8 *)&pFVar5->field_0x9c = 0;
    *(undefined8 *)&pFVar5->field_0xa4 = 0;
    *(undefined4 *)&pFVar5->field_0xac = 0;
    *(undefined ***)pFVar5 = &___7FCamelCaseBreakIterator__6B_;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined4 *)&pFVar5->field_0x28 = 0;
    *(undefined8 *)&pFVar5->field_0xb0 = 0;
    *(undefined4 *)&pFVar5->field_0xb8 = 0;
    *(undefined4 *)&pFVar5->field_0xbc = 0x20;
    if (((puVar1 <= local_18) && (local_18 < &pFVar5->field_0xb0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<IBreakIterator,1> *)(*pcVar2)();
      return pTVar6;
    }
    iVar4 = *(int *)&pFVar5->field_0xb8;
    if (iVar4 == *(int *)&pFVar5->field_0xbc) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,(ForElementType<int> *)puVar1,(int *)&pFVar5->field_0xbc);
    }
    *(int *)&pFVar5->field_0xb8 = iVar4 + 1;
    puVar7 = *(undefined1 **)&pFVar5->field_0xb0;
    if (*(undefined1 **)&pFVar5->field_0xb0 == (undefined1 *)0x0) {
      puVar7 = puVar1;
    }
    *(undefined4 *)(puVar7 + (longlong)iVar4 * 4) = local_18[0];
    *(undefined ***)pFVar5 = &___7FICUCamelCaseBreakIterator__6B_;
    local_res8.Object = pFVar5;
  }
  TSharedRef<IBreakIterator,1>::TSharedRef<IBreakIterator,1><FICUCamelCaseBreakIterator>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateCharacterBoundaryIterator @ 1416e73d0

TSharedRef<IBreakIterator,1> * __cdecl
FBreakIterator::CreateCharacterBoundaryIterator
          (TSharedRef<IBreakIterator,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FICUBreakIterator *pFVar6;
  TSharedRef<IBreakIterator,1> *pTVar7;
  TWeakPtr<icu_64::BreakIterator,1> *pTVar8;
  FICUBreakIterator *pFVar9;
  FICUBreakIterator *pFVar10;
  TRawPtrProxy<FICUBreakIterator> local_res8;
  TWeakPtr<icu_64::BreakIterator,1> local_18;
  
  pFVar9 = (FICUBreakIterator *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  pFVar6 = ::operator_new(0x18);
  pFVar10 = pFVar9;
  if (pFVar6 != (FICUBreakIterator *)0x0) {
    if ((FICUBreakIteratorManager::Singleton == (FICUBreakIteratorManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                           ,0x21,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBreakIterator,1> *)(*pcVar4)();
      return pTVar7;
    }
    pTVar8 = FICUBreakIteratorManager::CreateCharacterBoundaryIterator
                       (FICUBreakIteratorManager::Singleton,&local_18);
    pFVar6->_padding_ = (longlong)&___7FICUBreakIterator__6B_;
    (pFVar6->ICUBreakIteratorHandle).Object = pTVar8->Object;
    pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pFVar6->ICUBreakIteratorHandle).WeakReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = pFVar6;
    pFVar10 = (FICUBreakIterator *)&DAT_00000001;
  }
  local_res8.Object = pFVar9;
  TSharedRef<IBreakIterator,1>::TSharedRef<IBreakIterator,1><FICUBreakIterator>
            (__return_storage_ptr__,&local_res8);
  if ((pFVar10 != (FICUBreakIterator *)0x0) &&
     (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// CreateLineBreakIterator @ 1416e88e0

TSharedRef<IBreakIterator,1> * __cdecl
FBreakIterator::CreateLineBreakIterator(TSharedRef<IBreakIterator,1> *__return_storage_ptr__)

{
  FICULineBreakIterator *this;
  TRawPtrProxy<FICULineBreakIterator> local_res8 [4];
  
  this = ::operator_new(0x20);
  local_res8[0].Object = (FICULineBreakIterator *)0x0;
  if (this != (FICULineBreakIterator *)0x0) {
    local_res8[0].Object = FICULineBreakIterator::FICULineBreakIterator(this);
  }
  TSharedRef<IBreakIterator,1>::TSharedRef<IBreakIterator,1><FICULineBreakIterator>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// CreateWordBreakIterator @ 1416e9270

TSharedRef<IBreakIterator,1> * __cdecl
FBreakIterator::CreateWordBreakIterator(TSharedRef<IBreakIterator,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FICUBreakIterator *pFVar6;
  TSharedRef<IBreakIterator,1> *pTVar7;
  TWeakPtr<icu_64::BreakIterator,1> *pTVar8;
  FICUBreakIterator *pFVar9;
  FICUBreakIterator *pFVar10;
  TRawPtrProxy<FICUBreakIterator> local_res8;
  TWeakPtr<icu_64::BreakIterator,1> local_18;
  
  pFVar9 = (FICUBreakIterator *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  pFVar6 = ::operator_new(0x18);
  pFVar10 = pFVar9;
  if (pFVar6 != (FICUBreakIterator *)0x0) {
    if ((FICUBreakIteratorManager::Singleton == (FICUBreakIteratorManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                           ,0x21,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBreakIterator,1> *)(*pcVar4)();
      return pTVar7;
    }
    pTVar8 = FICUBreakIteratorManager::CreateWordBreakIterator
                       (FICUBreakIteratorManager::Singleton,&local_18);
    pFVar6->_padding_ = (longlong)&___7FICUBreakIterator__6B_;
    (pFVar6->ICUBreakIteratorHandle).Object = pTVar8->Object;
    pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pFVar6->ICUBreakIteratorHandle).WeakReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = pFVar6;
    pFVar10 = (FICUBreakIterator *)&DAT_00000001;
  }
  local_res8.Object = pFVar9;
  TSharedRef<IBreakIterator,1>::TSharedRef<IBreakIterator,1><FICUBreakIterator>
            (__return_storage_ptr__,&local_res8);
  if ((pFVar10 != (FICUBreakIterator *)0x0) &&
     (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// GetCharacterBoundaryIterator @ 1416f4840

TSharedRef<IBreakIterator,1> * __cdecl
FBreakIterator::GetCharacterBoundaryIterator(TSharedRef<IBreakIterator,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FICUBreakIterator *pFVar7;
  TSharedRef<IBreakIterator,1> *pTVar8;
  TWeakPtr<icu_64::BreakIterator,1> *pTVar9;
  ulonglong uVar10;
  FICUBreakIterator *pFVar11;
  FICUBreakIterator *pFVar12;
  TRawPtrProxy<FICUBreakIterator> local_res8;
  TWeakPtr<icu_64::BreakIterator,1> local_28;
  
  pFVar11 = (FICUBreakIterator *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  uVar10 = (ulonglong)_tls_index;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
  if ((*(uint *)(lVar3 + 0xa20) & 1) == 0) {
    *(longlong *)(lVar3 + 0xa10) = 0;
    *(uint *)(lVar3 + 0xa20) = *(uint *)(lVar3 + 0xa20) | 1;
    *(undefined8 *)(lVar3 + 0xa18) = 0;
    __tlregdtor(`FBreakIterator::GetCharacterBoundaryIterator'::__l2::
                _dynamic_atexit_destructor_for__CachedCharacterBoundaryIterator__);
  }
  if (*(longlong *)(lVar3 + 0xa10) == 0) {
    pFVar7 = ::operator_new(0x18);
    pFVar12 = pFVar11;
    if (pFVar7 != (FICUBreakIterator *)0x0) {
      if ((FICUBreakIteratorManager::Singleton == (FICUBreakIteratorManager *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                             ,0x21,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<IBreakIterator,1> *)(*pcVar5)();
        return pTVar8;
      }
      pTVar9 = FICUBreakIteratorManager::CreateCharacterBoundaryIterator
                         (FICUBreakIteratorManager::Singleton,&local_28);
      pFVar7->_padding_ = (longlong)&___7FICUBreakIterator__6B_;
      (pFVar7->ICUBreakIteratorHandle).Object = pTVar9->Object;
      pTVar4 = (pTVar9->WeakReferenceCount).ReferenceController;
      (pFVar7->ICUBreakIteratorHandle).WeakReferenceCount.ReferenceController = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (FICUBreakIterator *)&DAT_00000001;
      pFVar12 = pFVar7;
    }
    local_res8.Object = pFVar12;
    TSharedPtr<IBreakIterator,1>::operator=<FICUBreakIterator>
              ((TSharedPtr<IBreakIterator,1> *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0xa10),&local_res8
              );
    if ((pFVar11 != (FICUBreakIterator *)0x0) &&
       (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_28.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  if ((*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0xa10) == 0)
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("CachedCharacterBoundaryIterator.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCharacterBoundaryIterator.cpp"
                            ,0x18,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedRef<IBreakIterator,1> *)(*pcVar5)();
    return pTVar8;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
  if ((*(longlong *)(lVar3 + 0xa10) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedRef<IBreakIterator,1> *)(*pcVar5)();
    return pTVar8;
  }
  __return_storage_ptr__->Object = *(IBreakIterator **)(lVar3 + 0xa10);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0xa18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (IBreakIterator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedRef<IBreakIterator,1> *)(*pcVar5)();
    return pTVar8;
  }
  return __return_storage_ptr__;
}

// GetLineBreakIterator @ 1416f8960

TSharedRef<IBreakIterator,1> * __cdecl
FBreakIterator::GetLineBreakIterator(TSharedRef<IBreakIterator,1> *__return_storage_ptr__)

{
  TSharedPtr<IBreakIterator,1> *this;
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FICULineBreakIterator *this_00;
  FICULineBreakIterator *pFVar6;
  TSharedRef<IBreakIterator,1> *pTVar7;
  ulonglong uVar8;
  TRawPtrProxy<FICULineBreakIterator> local_res8;
  
  uVar8 = (ulonglong)_tls_index;
  pFVar6 = (FICULineBreakIterator *)0x0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
  uVar1 = *(uint *)(lVar2 + 0xa38);
  this = (TSharedPtr<IBreakIterator,1> *)(lVar2 + 0xa28);
  if ((uVar1 & 1) == 0) {
    this->Object = (IBreakIterator *)0x0;
    *(uint *)(lVar2 + 0xa38) = uVar1 | 1;
    *(undefined8 *)(lVar2 + 0xa30) = 0;
    __tlregdtor(`FBreakIterator::GetLineBreakIterator'::__l2::
                _dynamic_atexit_destructor_for__CachedLineBreakIterator__);
  }
  if (this->Object == (IBreakIterator *)0x0) {
    this_00 = ::operator_new(0x20);
    if (this_00 != (FICULineBreakIterator *)0x0) {
      pFVar6 = FICULineBreakIterator::FICULineBreakIterator(this_00);
    }
    local_res8.Object = pFVar6;
    TSharedPtr<IBreakIterator,1>::operator=<FICULineBreakIterator>(this,&local_res8);
  }
  if (this->Object == (IBreakIterator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedLineBreakIterator.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICULineBreakIterator.cpp"
                       ,0xdf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBreakIterator,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
  if (*(longlong *)(lVar2 + 0xa28) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBreakIterator,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = *(IBreakIterator **)(lVar2 + 0xa28);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0xa30);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (IBreakIterator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBreakIterator,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// GetWordBreakIterator @ 1416fca30

TSharedRef<IBreakIterator,1> * __cdecl
FBreakIterator::GetWordBreakIterator(TSharedRef<IBreakIterator,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FICUBreakIterator *pFVar7;
  TSharedRef<IBreakIterator,1> *pTVar8;
  TWeakPtr<icu_64::BreakIterator,1> *pTVar9;
  ulonglong uVar10;
  FICUBreakIterator *pFVar11;
  FICUBreakIterator *pFVar12;
  TRawPtrProxy<FICUBreakIterator> local_res8;
  TWeakPtr<icu_64::BreakIterator,1> local_28;
  
  pFVar11 = (FICUBreakIterator *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  uVar10 = (ulonglong)_tls_index;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
  if ((*(uint *)(lVar3 + 0xa50) & 1) == 0) {
    *(longlong *)(lVar3 + 0xa40) = 0;
    *(uint *)(lVar3 + 0xa50) = *(uint *)(lVar3 + 0xa50) | 1;
    *(undefined8 *)(lVar3 + 0xa48) = 0;
    __tlregdtor(`FBreakIterator::GetWordBreakIterator'::__l2::
                _dynamic_atexit_destructor_for__CachedWordBreakIterator__);
  }
  if (*(longlong *)(lVar3 + 0xa40) == 0) {
    pFVar7 = ::operator_new(0x18);
    pFVar12 = pFVar11;
    if (pFVar7 != (FICUBreakIterator *)0x0) {
      if ((FICUBreakIteratorManager::Singleton == (FICUBreakIteratorManager *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                             ,0x21,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<IBreakIterator,1> *)(*pcVar5)();
        return pTVar8;
      }
      pTVar9 = FICUBreakIteratorManager::CreateWordBreakIterator
                         (FICUBreakIteratorManager::Singleton,&local_28);
      pFVar7->_padding_ = (longlong)&___7FICUBreakIterator__6B_;
      (pFVar7->ICUBreakIteratorHandle).Object = pTVar9->Object;
      pTVar4 = (pTVar9->WeakReferenceCount).ReferenceController;
      (pFVar7->ICUBreakIteratorHandle).WeakReferenceCount.ReferenceController = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = (FICUBreakIterator *)&DAT_00000001;
      pFVar12 = pFVar7;
    }
    local_res8.Object = pFVar12;
    TSharedPtr<IBreakIterator,1>::operator=<FICUBreakIterator>
              ((TSharedPtr<IBreakIterator,1> *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0xa40),&local_res8
              );
    if ((pFVar11 != (FICUBreakIterator *)0x0) &&
       (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_28.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  if ((*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0xa40) == 0)
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("CachedWordBreakIterator.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUWordBreakIterator.cpp"
                            ,0x18,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedRef<IBreakIterator,1> *)(*pcVar5)();
    return pTVar8;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
  if ((*(longlong *)(lVar3 + 0xa40) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedRef<IBreakIterator,1> *)(*pcVar5)();
    return pTVar8;
  }
  __return_storage_ptr__->Object = *(IBreakIterator **)(lVar3 + 0xa40);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0xa48);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (IBreakIterator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedRef<IBreakIterator,1> *)(*pcVar5)();
    return pTVar8;
  }
  return __return_storage_ptr__;
}

