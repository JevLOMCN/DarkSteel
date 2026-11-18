// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// ~FMeshOcclusionMapBaker @ 14c9a9340

void __thiscall
UE::Geometry::FMeshOcclusionMapBaker::~FMeshOcclusionMapBaker(FMeshOcclusionMapBaker *this)

{
  TImageBuilder<UE::Math::TVector<float>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMeshOcclusionMapBaker_Geometry_UE__6B_;
  pTVar1 = (this->NormalBuilder).Ptr;
  if (pTVar1 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
    pFVar2 = (pTVar1->Image).Buffer.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x30);
  }
  pTVar1 = (this->OcclusionBuilder).Ptr;
  if (pTVar1 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
    pFVar2 = (pTVar1->Image).Buffer.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x30);
  }
  this->_padding_ = (longlong)&___7FMeshImageBaker_Geometry_UE__6B_;
  return;
}

