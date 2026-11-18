// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator= @ 14c7b7f40

TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> * __thiscall
TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>::operator=
          (TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> *this,
          TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>
          *param_1)

{
  FMeshNormals *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FMeshNormals *)0x0;
    if (pFVar1 != (FMeshNormals *)0x0) {
      pFVar2 = (pFVar1->Normals).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0x18);
    }
    return this;
  }
  return this;
}

