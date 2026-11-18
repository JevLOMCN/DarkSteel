// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 1

// DestroyObject @ 148d21770

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGameplayMediaEncoder,1>::DestroyObject
          (TIntrusiveReferenceController<FGameplayMediaEncoder,1> *this)

{
  FGameplayMediaEncoder::~FGameplayMediaEncoder((FGameplayMediaEncoder *)&this->ObjectStorage);
  return;
}

