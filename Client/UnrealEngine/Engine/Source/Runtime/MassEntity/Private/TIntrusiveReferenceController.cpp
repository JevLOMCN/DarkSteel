// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// DestroyObject @ 147212410

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMassCommandBuffer,1>::DestroyObject
          (TIntrusiveReferenceController<FMassCommandBuffer,1> *this)

{
  FMassCommandBuffer::~FMassCommandBuffer((FMassCommandBuffer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147212420

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStructOnScope,1>::DestroyObject
          (TIntrusiveReferenceController<FStructOnScope,1> *this)

{
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->ObjectStorage);
  return;
}

