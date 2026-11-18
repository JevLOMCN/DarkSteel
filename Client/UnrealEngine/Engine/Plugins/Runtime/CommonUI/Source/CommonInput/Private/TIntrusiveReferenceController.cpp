// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 1

// DestroyObject @ 14a7748e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCommonInputPreprocessor,1>::DestroyObject
          (TIntrusiveReferenceController<FCommonInputPreprocessor,1> *this)

{
  FCommonInputPreprocessor::~FCommonInputPreprocessor
            ((FCommonInputPreprocessor *)&this->ObjectStorage);
  return;
}

