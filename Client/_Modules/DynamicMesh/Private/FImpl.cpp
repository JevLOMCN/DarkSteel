// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// ~FImpl @ 14c7b7240

void __thiscall UE::Geometry::FWrapMesh::FImpl::~FImpl(FImpl *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  FMemory_Free((this->SourceLaplacian).m_outerIndex);
  FMemory_Free((this->SourceLaplacian).m_innerNonZeros);
  operator_delete__((this->SourceLaplacian).m_data.m_values);
  operator_delete__((this->SourceLaplacian).m_data.m_indices);
  pvVar1 = *(void **)&(this->SourceVtxLinearization).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->SourceVtxLinearization != (void *)0x0) {
    FMemory::Free(*(void **)&this->SourceVtxLinearization);
  }
  pFVar2 = (this->SourceToWelded).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDynamicMesh3::~FDynamicMesh3(&this->WeldedSourceMesh);
  return;
}

