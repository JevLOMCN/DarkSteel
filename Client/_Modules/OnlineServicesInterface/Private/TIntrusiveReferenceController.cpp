// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 3

// DestroyObject @ 14ec27eb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FSchemaDefinition,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::FSchemaDefinition,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0xa8] = '\0';
  (this->ObjectStorage).Pad[0xa9] = '\0';
  (this->ObjectStorage).Pad[0xaa] = '\0';
  (this->ObjectStorage).Pad[0xab] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xa0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x60));
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaCategoryDefinition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaCategoryDefinition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaCategoryDefinition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14ec27f10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FOnlineError,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::FOnlineError,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14ec27f40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FOnlineErrorDetails,1>::
DestroyObject(TIntrusiveReferenceController<UE::Online::FOnlineErrorDetails,1> *this)

{
  longlong *plVar1;
  void *pvVar2;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOnlineErrorDetails_Online_UE__6B_;
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

