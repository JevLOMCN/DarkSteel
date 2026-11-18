// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// DestroyObject @ 141e966b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAssetDataToken,1>::DestroyObject
          (TIntrusiveReferenceController<FAssetDataToken,1> *this)

{
  FAssetDataToken::~FAssetDataToken((FAssetDataToken *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141e966c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDefaultPackageLocalizationCache,1>::
DestroyObject(TIntrusiveReferenceController<FDefaultPackageLocalizationCache,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDefaultPackageLocalizationCache__6B_;
  FPackageLocalizationCache::~FPackageLocalizationCache
            ((FPackageLocalizationCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141e966e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPackageLocalizationCultureCache,1>::
DestroyObject(TIntrusiveReferenceController<FPackageLocalizationCultureCache,1> *this)

{
  FPackageLocalizationCultureCache::~FPackageLocalizationCultureCache
            ((FPackageLocalizationCultureCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141ee8940

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFlushRequestData,1>::DestroyObject
          (TIntrusiveReferenceController<FFlushRequestData,1> *this)

{
  operator_delete__(*(void **)(this->ObjectStorage).Pad);
  return;
}

// DestroyObject @ 141f2d130

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FCompressedBuffer>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<FCompressedBuffer>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if ((this->ObjectStorage).Pad[0x68] != '\0') {
    FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)((this->ObjectStorage).Pad + 0x70));
  }
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141f2d186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141f2d1a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FSharedBuffer>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<FSharedBuffer>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if ((this->ObjectStorage).Pad[0x68] != '\0') {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
               ((this->ObjectStorage).Pad + 0x70));
  }
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141f2d1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141f2d210

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLinkerLoadPackageStoreBackend,1>::
DestroyObject(TIntrusiveReferenceController<FLinkerLoadPackageStoreBackend,1> *this)

{
  longlong lVar1;
  IAssetRegistryInterface *pIVar2;
  
  lVar1 = *(longlong *)((this->ObjectStorage).Pad + 0xb08);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FLinkerLoadPackageStoreBackend__6B_;
  if (lVar1 != 0) {
    pIVar2 = IAssetRegistryInterface::GetPtr();
    if (pIVar2 != (IAssetRegistryInterface *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,(this->ObjectStorage).Pad + 0xb08);
    }
  }
  TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
  ::
  ~TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
            ((TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)((this->ObjectStorage).Pad + 8));
  *(undefined ***)(this->ObjectStorage).Pad = &___7IPackageStoreBackend__6B_;
  return;
}

// DestroyObject @ 141f2d280

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPackageStoreBackendContext,1>::DestroyObject
          (TIntrusiveReferenceController<FPackageStoreBackendContext,1> *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              ((this->ObjectStorage).Pad + 8),*(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142025e90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::GC::FWorkCoordinator,1>::DestroyObject
          (TIntrusiveReferenceController<UE::GC::FWorkCoordinator,1> *this)

{
  UE::GC::FWorkCoordinator::~FWorkCoordinator((FWorkCoordinator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1420b2680

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>::
DestroyObject(TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
              *this)

{
  FLinkerInstancingContext::FSharedLinkerInstancingContextData::~FSharedLinkerInstancingContextData
            ((FSharedLinkerInstancingContextData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1420f5e30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAssetBundleData,1>::DestroyObject
          (TIntrusiveReferenceController<FAssetBundleData,1> *this)

{
  void *pvVar1;
  
  DestructItems<FAssetBundleEntry,int>
            (*(FAssetBundleEntry **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 142137eb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPackageReloadedEvent,1>::DestroyObject
          (TIntrusiveReferenceController<FPackageReloadedEvent,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 142137ef0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::FPackageResourceIoBackend,1>::
DestroyObject(TIntrusiveReferenceController<UE::FPackageResourceIoBackend,1> *this)

{
  UE::FPackageResourceIoBackend::~FPackageResourceIoBackend
            ((FPackageResourceIoBackend *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1421753a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPropertyChangedChainEvent,1>::DestroyObject
          (TIntrusiveReferenceController<FPropertyChangedChainEvent,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x70] = '\0';
  (this->ObjectStorage).Pad[0x71] = '\0';
  (this->ObjectStorage).Pad[0x72] = '\0';
  (this->ObjectStorage).Pad[0x73] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x28));
  return;
}

// DestroyObject @ 142209a00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>::DestroyObject
          (TIntrusiveReferenceController<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>
           *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1422695c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Verse::FNativeString::FCopyOnWriteContents,1>
::DestroyObject(TIntrusiveReferenceController<Verse::FNativeString::FCopyOnWriteContents,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

