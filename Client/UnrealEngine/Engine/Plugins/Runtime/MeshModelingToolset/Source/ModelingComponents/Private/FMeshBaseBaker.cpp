// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ~FMeshBaseBaker @ 14ca6ae00

void __thiscall UE::Geometry::FMeshBaseBaker::~FMeshBaseBaker(FMeshBaseBaker *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TargetMeshTangents).SharedReferenceCount.ReferenceController);
  return;
}

