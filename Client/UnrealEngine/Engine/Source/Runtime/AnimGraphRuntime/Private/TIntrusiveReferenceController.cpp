// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// DestroyObject @ 146423040

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FAnimInertializationSyncScope,1>::
DestroyObject(TIntrusiveReferenceController<UE::Anim::FAnimInertializationSyncScope,1> *this)

{
  return;
}

// DestroyObject @ 146423050

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FAnimSyncGroupScope,1>::
DestroyObject(TIntrusiveReferenceController<UE::Anim::FAnimSyncGroupScope,1> *this)

{
  return;
}

// DestroyObject @ 146423060

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FMirrorSyncScope,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Anim::FMirrorSyncScope,1> *this)

{
  UE::Anim::FMirrorSyncScope::~FMirrorSyncScope((FMirrorSyncScope *)&this->ObjectStorage);
  return;
}

