// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// DestroyObject @ 1462d6d00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1>
              *this)

{
  *(undefined ***)(this->ObjectStorage).Pad =
       &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
        _vftable__for__UE__Dataflow__IContextCacheStore__;
  *(undefined ***)((this->ObjectStorage).Pad + 8) =
       &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
        _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  UE::Dataflow::FContext::~FContext((FContext *)&this->ObjectStorage);
  return;
}

