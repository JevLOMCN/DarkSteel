// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 1

// DestroyObject @ 14dec3770

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FControlRigSplineImpl,1>::DestroyObject
          (TIntrusiveReferenceController<FControlRigSplineImpl,1> *this)

{
  FControlRigSplineImpl::~FControlRigSplineImpl((FControlRigSplineImpl *)&this->ObjectStorage);
  return;
}

