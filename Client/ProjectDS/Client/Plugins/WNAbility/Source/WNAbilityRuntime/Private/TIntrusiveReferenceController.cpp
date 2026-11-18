// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 1

// DestroyObject @ 148db9410

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_AbilityInstanceHandleImpl,1>::
DestroyObject(TIntrusiveReferenceController<FWN_AbilityInstanceHandleImpl,1> *this)

{
  FWN_AbilityInstanceHandleImpl::~FWN_AbilityInstanceHandleImpl
            ((FWN_AbilityInstanceHandleImpl *)&this->ObjectStorage);
  return;
}

