// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 4

// DestroyObject @ 142a67d70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPakSignatureFile,1>::DestroyObject
          (TIntrusiveReferenceController<FPakSignatureFile,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 142a67dc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FFileIoDispatcherBackend,1>::
DestroyObject(TIntrusiveReferenceController<UE::IoStore::FFileIoDispatcherBackend,1> *this)

{
  UE::IoStore::FFileIoDispatcherBackend::~FFileIoDispatcherBackend
            ((FFileIoDispatcherBackend *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142a67dd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFileIoStore,1>::DestroyObject
          (TIntrusiveReferenceController<FFileIoStore,1> *this)

{
  FFileIoStore::~FFileIoStore((FFileIoStore *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142a67de0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFilePackageStoreBackend,1>::DestroyObject
          (TIntrusiveReferenceController<FFilePackageStoreBackend,1> *this)

{
  FFilePackageStoreBackend::~FFilePackageStoreBackend
            ((FFilePackageStoreBackend *)&this->ObjectStorage);
  return;
}

