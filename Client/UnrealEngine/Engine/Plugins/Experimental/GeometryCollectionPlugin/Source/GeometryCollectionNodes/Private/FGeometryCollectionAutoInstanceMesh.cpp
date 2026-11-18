// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// ~FGeometryCollectionAutoInstanceMesh @ 14e933370

void __thiscall
FGeometryCollectionAutoInstanceMesh::~FGeometryCollectionAutoInstanceMesh
          (FGeometryCollectionAutoInstanceMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CustomData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

