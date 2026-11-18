// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 1

// DestroyObject @ 14cfc4940

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkSubjectFrameData,1>::DestroyObject
          (TIntrusiveReferenceController<FLiveLinkSubjectFrameData,1> *this)

{
  FStructOnScope::~FStructOnScope((FStructOnScope *)((this->ObjectStorage).Pad + 0x28));
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->ObjectStorage);
  return;
}

