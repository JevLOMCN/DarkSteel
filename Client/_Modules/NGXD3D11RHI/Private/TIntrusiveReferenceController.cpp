// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D11RHI
// Functions: 1

// DestroyObject @ 14de132d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D11NGXFeatureHandle,1>::DestroyObject
          (TIntrusiveReferenceController<FD3D11NGXFeatureHandle,1> *this)

{
  FD3D11NGXFeatureHandle::~FD3D11NGXFeatureHandle((FD3D11NGXFeatureHandle *)&this->ObjectStorage);
  return;
}

