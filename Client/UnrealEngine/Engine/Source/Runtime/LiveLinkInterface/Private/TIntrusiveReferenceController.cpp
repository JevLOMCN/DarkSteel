// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 1

// DestroyObject @ 14cfb8100

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCachedSubjectFrame,1>::DestroyObject
          (TIntrusiveReferenceController<FCachedSubjectFrame,1> *this)

{
  FCachedSubjectFrame::~FCachedSubjectFrame((FCachedSubjectFrame *)&this->ObjectStorage);
  return;
}

