// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~FSharedReferencer<1> @ 1426663a0

void __thiscall
SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(FSharedReferencer<1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(this->ReferenceController);
  return;
}

