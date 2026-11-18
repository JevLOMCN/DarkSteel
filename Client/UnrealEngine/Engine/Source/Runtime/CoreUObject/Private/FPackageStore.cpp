// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// FPackageStore @ 141f21ad0

FPackageStore * __thiscall FPackageStore::FPackageStore(FPackageStore *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPackageStore *pFVar4;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  FPackageStore *local_res8;
  <lambda_1> local_res10;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->BackendContext).Object = (FPackageStoreBackendContext *)0x10;
    (this->BackendContext).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPackageStoreBackendContext___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->BackendContext).Object = (FPackageStoreBackendContext *)(pTVar3 + 1);
    (this->BackendContext).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPackageStore *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->Backends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Backends).ArrayNum = 0;
  (this->Backends).ArrayMax = 0;
  (this->LinkerLoadBackend).Object = (IPackageStoreBackend *)0x0;
  (this->LinkerLoadBackend).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res8 = this;
  if ((GConfig != (FConfigCacheIni *)0x0) && (GConfig->bIsReadyForUse != false)) {
    `FPackageStore::FPackageStore'::__l2::<lambda_1>::operator()(&local_res8);
    return this;
  }
  this_00 = FCoreDelegates::TSConfigReadyForUse();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddLambda<_FPackageStore::FPackageStore_::__l2::<lambda_1>_&>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             this_00,&local_res10);
  return this;
}

// operator() @ 141f26610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FPackageStore::FPackageStore'::__l2::<lambda_1>::operator()(void *this)

{
  FPackageStore *this_00;
  code *pcVar1;
  bool bVar2;
  FAsyncLoadingThreadSettings *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> *paVar5;
  TReferenceControllerBase<1> **ppTVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<IPackageStoreBackend,1> local_18;
  
  pFVar3 = FAsyncLoadingThreadSettings::Get();
  if (pFVar3->bLooseFileLoadingEnabled != false) {
    pTVar4 = ::operator_new(0xb20);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFLinkerLoadPackageStoreBackend___00_SharedPointerInternals__6B_
      ;
      memset(&pTVar4[1].SharedReferenceCount,0,0xb00);
      lVar7 = 0x20;
      pTVar4[1]._padding_ = (longlong)&___7FLinkerLoadPackageStoreBackend__6B_;
      paVar5 = &pTVar4[1].SharedReferenceCount;
      do {
        *(undefined8 *)paVar5 = 0;
        *(undefined8 *)(paVar5 + 2) = 0;
        *(undefined8 *)(paVar5 + 4) = 0;
        *(undefined8 *)(paVar5 + 10) = 0;
        paVar5[0xc] = (atomic<int>)0x0;
        paVar5[0xd] = (atomic<int>)0x80;
        paVar5[0xe] = (atomic<int>)0xffffffff;
        paVar5[0xf] = (atomic<int>)0x0;
        *(undefined8 *)(paVar5 + 0x12) = 0;
        paVar5[0x14] = (atomic<int>)0x0;
        paVar5 = paVar5 + 0x16;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      pTVar8 = pTVar4 + 1;
      pTVar4[0xb1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[0xb1].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar4;
      local_28 = pTVar8;
    }
    lVar7 = *(longlong *)this;
    ppTVar6 = (TReferenceControllerBase<1> **)(lVar7 + 0x20);
    if (ppTVar6 != &local_28) {
      *ppTVar6 = pTVar8;
      local_28 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar7 + 0x28),&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    this_00 = *(FPackageStore **)this;
    local_18.Object = (this_00->LinkerLoadBackend).Object;
    if (local_18.Object != (IPackageStoreBackend *)0x0) {
      local_18.SharedReferenceCount.ReferenceController =
           (this_00->LinkerLoadBackend).SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FPackageStore::Mount(this_00,&local_18,-1);
    }
  }
  return;
}

// Get @ 141f329d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPackageStore * __cdecl FPackageStore::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FPackageStore *pFVar3;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this;
  FPackageStore *local_res8;
  <lambda_1> local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Instance.BackendContext.SharedReferenceCount.ReferenceController = ::operator_new(0x30);
      if (::Instance.BackendContext.SharedReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        ::Instance.BackendContext = ___xmm_00000000000000000000000000000010;
      }
      else {
        (::Instance.BackendContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)0x1;
        (::Instance.BackendContext.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)0x1;
        (::Instance.BackendContext.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPackageStoreBackendContext___00_SharedPointerInternals__6B_
        ;
        ::Instance.BackendContext.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
        ::Instance.BackendContext.SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
             (atomic<int>)0x0;
        ::Instance.BackendContext.SharedReferenceCount.ReferenceController[1].WeakReferenceCount =
             (atomic<int>)0x0;
        ::Instance.BackendContext.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
        ::Instance.BackendContext.SharedReferenceCount.ReferenceController[2].SharedReferenceCount =
             (atomic<int>)0x2;
        ::Instance.BackendContext.SharedReferenceCount.ReferenceController[2].WeakReferenceCount =
             (atomic<int>)0x0;
        ::Instance.BackendContext.Object =
             (FPackageStoreBackendContext *)
             (::Instance.BackendContext.SharedReferenceCount.ReferenceController + 1);
        if (::Instance.BackendContext.SharedReferenceCount.ReferenceController + 1 ==
            (TReferenceControllerBase<1> *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar3 = (FPackageStore *)(*pcVar1)();
            return pFVar3;
          }
        }
      }
      ::Instance.LinkerLoadBackend = (TSharedPtr<IPackageStoreBackend,1>)ZEXT816(0);
      ::Instance.Backends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Instance.Backends.ArrayNum = 0;
      ::Instance.Backends.ArrayMax = 0;
      local_res8 = &::Instance;
      if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
        this = FCoreDelegates::TSConfigReadyForUse();
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
        AddLambda<_FPackageStore::FPackageStore_::__l2::<lambda_1>_&>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                    *)this,local_res10);
      }
      else {
        `FPackageStore::FPackageStore'::__l2::<lambda_1>::operator()(&local_res8);
      }
      atexit(`FPackageStore::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetPackageRedirectInfo @ 141f353e0

bool __thiscall
FPackageStore::GetPackageRedirectInfo
          (FPackageStore *this,FPackageId param_1,FName *param_2,FPackageId *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc88) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadReadCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageStore.cpp"
                         ,0x233,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar2 = (this->Backends).ArrayNum;
  pFVar7 = (this->Backends).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Backends).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    cVar6 = (**(code **)(**(longlong **)(pFVar7 + 8) + 0x30))
                      (*(longlong **)(pFVar7 + 8),param_1.Id,param_2,param_3);
    if (cVar6 != '\0') {
      return true;
    }
    pFVar7 = pFVar7 + 0x18;
  }
  return false;
}

// GetPackageStoreEntry @ 141f35970

EPackageStoreEntryStatus __thiscall
FPackageStore::GetPackageStoreEntry
          (FPackageStore *this,FPackageId param_1,FName param_2,FPackageStoreEntry *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  EPackageStoreEntryStatus EVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc88) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadReadCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageStore.cpp"
                         ,0x21f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  iVar2 = (this->Backends).ArrayNum;
  pFVar6 = (this->Backends).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Backends).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    EVar5 = (**(code **)(**(longlong **)(pFVar6 + 8) + 0x28))
                      (*(longlong **)(pFVar6 + 8),param_1.Id,param_2,param_3);
    if (Missing < EVar5) {
      return EVar5;
    }
    pFVar6 = pFVar6 + 0x18;
  }
  return Missing;
}

// GetSoftReferences @ 141f36bb0

TArrayView<unsigned_int_const_,int> * __thiscall
FPackageStore::GetSoftReferences
          (FPackageStore *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          FPackageId param_1,TArrayView<FPackageId_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<unsigned_int_const_,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  uint *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc88) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadReadCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageStore.cpp"
                         ,0x240,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<unsigned_int_const_,int> *)(*pcVar3)();
    return pTVar5;
  }
  iVar2 = (this->Backends).ArrayNum;
  pFVar6 = (this->Backends).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Backends).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    (**(code **)(**(longlong **)(pFVar6 + 8) + 0x38))
              (*(longlong **)(pFVar6 + 8),&local_38,param_1.Id,param_2);
    if (iStack_30 != 0) {
      __return_storage_ptr__->DataPtr = local_38;
      *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(uStack_2c,iStack_30);
      return __return_storage_ptr__;
    }
    pFVar6 = pFVar6 + 0x18;
  }
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// HasAnyBackendsMounted @ 141f370b0

bool __thiscall FPackageStore::HasAnyBackendsMounted(FPackageStore *this)

{
  return (this->Backends).ArrayNum != 0;
}

// Mount @ 141f3e820

void __thiscall
FPackageStore::Mount(FPackageStore *this,TSharedRef<IPackageStoreBackend,1> *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  IPackageStoreBackend *pIVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  FPackageStoreBackendContext *local_38;
  TReferenceControllerBase<1> *local_30;
  int local_28 [2];
  IPackageStoreBackend *local_20;
  TReferenceControllerBase<1> *local_18;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageStore.cpp"
                         ,0x1f1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = (this->Backends).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar10) {
    do {
      iVar7 = (uVar10 >> 1) + iVar9;
      if (param_2 < *(int *)((this->Backends).AllocatorInstance.Data + (longlong)iVar7 * 0x18)) {
        iVar9 = iVar7 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  local_20 = param_1->Object;
  local_18 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar8 = (this->Backends).AllocatorInstance.Data;
  local_28[0] = param_2;
  if (((pFVar8 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar8 + (longlong)(this->Backends).ArrayMax * 0x18))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Backends).ArrayNum;
  piVar1 = &(this->Backends).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Backends).AllocatorInstance,piVar1);
  }
  (this->Backends).ArrayNum = iVar7 + 1;
  lVar2 = (longlong)iVar9 * 0x18;
  pFVar8 = (this->Backends).AllocatorInstance.Data + lVar2;
  memmove(pFVar8 + 0x18,pFVar8,(longlong)(iVar7 - iVar9) * 0x18);
  pFVar8 = (this->Backends).AllocatorInstance.Data;
  *(int *)(pFVar8 + lVar2) = local_28[0];
  *(IPackageStoreBackend **)(pFVar8 + lVar2 + 8) = local_20;
  *(TReferenceControllerBase<1> **)(pFVar8 + lVar2 + 0x10) = local_18;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  pIVar3 = param_1->Object;
  pcVar4 = *(code **)((longlong)*pIVar3 + 0x10);
  local_38 = (this->BackendContext).Object;
  local_30 = (this->BackendContext).SharedReferenceCount.ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar4)(pIVar3,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnPendingEntriesAdded @ 141f3f390

FPendingEntriesAddedEvent * __thiscall FPackageStore::OnPendingEntriesAdded(FPackageStore *this)

{
  return &((this->BackendContext).Object)->PendingEntriesAdded;
}

