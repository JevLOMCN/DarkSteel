// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 5

// DestroyObject @ 148cc1940

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FStorageServerPackageStoreBackend::FAsyncInitRunnable,1>::
DestroyObject(TIntrusiveReferenceController<FStorageServerPackageStoreBackend::FAsyncInitRunnable,1>
              *this)

{
  longlong *plVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7FAsyncInitRunnable_FStorageServerPackageStoreBackend__6B_;
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7FRunnable__6B_;
  return;
}

// DestroyObject @ 148cc1990

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FStorageServerConnection::FAsyncQueryLatestServerChunkInfo,1>::
DestroyObject(TIntrusiveReferenceController<FStorageServerConnection::FAsyncQueryLatestServerChunkInfo,1>
              *this)

{
  longlong *plVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7FAsyncQueryLatestServerChunkInfo_FStorageServerConnection__6B_;
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)((this->ObjectStorage).Pad + 0x10));
  *(undefined ***)(this->ObjectStorage).Pad = &___7FRunnable__6B_;
  return;
}

// DestroyObject @ 148cc19e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCookOnTheFlyPackageStoreBackend,1>::
DestroyObject(TIntrusiveReferenceController<FCookOnTheFlyPackageStoreBackend,1> *this)

{
  FCookOnTheFlyPackageStoreBackend::~FCookOnTheFlyPackageStoreBackend
            ((FCookOnTheFlyPackageStoreBackend *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148cc19f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStorageServerIoDispatcherBackend,1>::
DestroyObject(TIntrusiveReferenceController<FStorageServerIoDispatcherBackend,1> *this)

{
  FStorageServerIoDispatcherBackend::~FStorageServerIoDispatcherBackend
            ((FStorageServerIoDispatcherBackend *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148cc1a00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1>::
DestroyObject(TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x60));
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 8));
  *(undefined ***)(this->ObjectStorage).Pad = &___7IPackageStoreBackend__6B_;
  return;
}

