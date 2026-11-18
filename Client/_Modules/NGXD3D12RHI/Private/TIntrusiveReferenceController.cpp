// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D12RHI
// Functions: 1

// DestroyObject @ 14de16fa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D12NGXDLSSFeature,1>::DestroyObject
          (TIntrusiveReferenceController<FD3D12NGXDLSSFeature,1> *this)

{
  FD3D12NGXDLSSFeature::~FD3D12NGXDLSSFeature((FD3D12NGXDLSSFeature *)&this->ObjectStorage);
  return;
}

