// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 1

// DestroyObject @ 1443d5b00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FDynamicMesh3,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Geometry::FDynamicMesh3,1> *this)

{
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3((FDynamicMesh3 *)&this->ObjectStorage);
  return;
}

