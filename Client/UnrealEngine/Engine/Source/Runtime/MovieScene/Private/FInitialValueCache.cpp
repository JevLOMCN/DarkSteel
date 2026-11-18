// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetExtensionID @ 14613aca0

TEntitySystemLinkerExtensionID<UE::MovieScene::FInitialValueCache> __cdecl
UE::MovieScene::FInitialValueCache::GetExtensionID(void)

{
  TEntitySystemLinkerExtensionID<UE::MovieScene::FInitialValueCache> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ID = (TEntitySystemLinkerExtensionID<UE::MovieScene::FInitialValueCache>)::StaticID;
      ::StaticID = ::StaticID + 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ID;
  return SUB84(in_RCX,0);
}

// GetGlobalInitialValues @ 14613afe0

TSharedPtr<UE::MovieScene::FInitialValueCache,1> * __cdecl
UE::MovieScene::FInitialValueCache::GetGlobalInitialValues
          (TSharedPtr<UE::MovieScene::FInitialValueCache,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> FVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  TSharedRef<UE::MovieScene::FInitialValueCache,1> *pTVar7;
  bool bVar8;
  TSharedPtr<UE::MovieScene::FInitialValueCache,1> local_28;
  TSharedRef<UE::MovieScene::FInitialValueCache,1> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar7 = MakeShared<UE::MovieScene::FInitialValueCache,1>(&local_18);
    GSharedInitialValues.Object = pTVar7->Object;
    GSharedInitialValues.WeakReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (GSharedInitialValues.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (GSharedInitialValues.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(GSharedInitialValues.WeakReferenceCount.ReferenceController)->WeakReferenceCount +
           1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    atexit(`UE::MovieScene::FInitialValueCache::GetGlobalInitialValues'::__l2::
           _dynamic_atexit_destructor_for__GSharedInitialValues__);
    _Init_thread_footer(&::_TSS0);
  }
  __return_storage_ptr__->Object = (FInitialValueCache *)0x0;
  FVar5 = GSharedInitialValues.WeakReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       GSharedInitialValues.WeakReferenceCount.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar6;
      if (bVar8) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar8);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = GSharedInitialValues.Object;
  }
  FVar5.ReferenceController = GSharedInitialValues.WeakReferenceCount.ReferenceController;
  if (__return_storage_ptr__->Object == (FInitialValueCache *)0x0) {
    pTVar7 = MakeShared<UE::MovieScene::FInitialValueCache,1>(&local_18);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar7->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (FInitialValueCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    GSharedInitialValues.Object = __return_storage_ptr__->Object;
    pTVar3 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    FVar5 = GSharedInitialValues.WeakReferenceCount;
    if (pTVar3 != GSharedInitialValues.WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      FVar4.ReferenceController = GSharedInitialValues.WeakReferenceCount.ReferenceController;
      FVar5.ReferenceController = pTVar3;
      if (GSharedInitialValues.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(GSharedInitialValues.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
        }
      }
    }
  }
  GSharedInitialValues.WeakReferenceCount.ReferenceController = FVar5.ReferenceController;
  return __return_storage_ptr__;
}

