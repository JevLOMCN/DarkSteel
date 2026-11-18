// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FMeshMergeScratchMeshes @ 14a976870

FMeshMergeScratchMeshes * __thiscall
UE::Mutable::Private::FMeshMergeScratchMeshes::FMeshMergeScratchMeshes
          (FMeshMergeScratchMeshes *this)

{
  (this->FirstReformat).Object = (FMesh *)0x0;
  (this->FirstReformat).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SecondReformat).Object = (FMesh *)0x0;
  (this->SecondReformat).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

