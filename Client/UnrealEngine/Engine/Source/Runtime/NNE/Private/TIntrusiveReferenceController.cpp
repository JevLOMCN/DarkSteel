// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 1

// DestroyObject @ 1436e8b90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNE::FSharedModelData,1>::DestroyObject
          (TIntrusiveReferenceController<UE::NNE::FSharedModelData,1> *this)

{
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->ObjectStorage);
  return;
}

