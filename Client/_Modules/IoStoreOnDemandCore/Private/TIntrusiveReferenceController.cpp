// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 2

// DestroyObject @ 14458bb30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandHostGroup::FImpl,1>::
DestroyObject(TIntrusiveReferenceController<UE::IoStore::FOnDemandHostGroup::FImpl,1> *this)

{
  void *pvVar1;
  
  DestructItems<FAnsiString,int>
            (*(FAnsiString **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14458bb70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandInternalContentHandle,1>
::DestroyObject(TIntrusiveReferenceController<UE::IoStore::FOnDemandInternalContentHandle,1> *this)

{
  UE::IoStore::FOnDemandInternalContentHandle::~FOnDemandInternalContentHandle
            ((FOnDemandInternalContentHandle *)&this->ObjectStorage);
  return;
}

