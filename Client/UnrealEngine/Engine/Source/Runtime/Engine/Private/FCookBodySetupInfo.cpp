// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FCookBodySetupInfo @ 14824ea90

FCookBodySetupInfo * __thiscall FCookBodySetupInfo::FCookBodySetupInfo(FCookBodySetupInfo *this)

{
  undefined1 *puVar1;
  
  (this->TriangleMeshDesc).bFlipNormals = 0;
  (this->TriangleMeshDesc).bDisableActiveEdgePrecompute = 0;
  (this->TriangleMeshDesc).bFastCook = 0;
  (this->TriangleMeshDesc).bDeformableMesh = 0;
  (this->TriangleMeshDesc).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleMeshDesc).Vertices.ArrayNum = 0;
  (this->TriangleMeshDesc).Vertices.ArrayMax = 0;
  (this->TriangleMeshDesc).Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleMeshDesc).Indices.ArrayNum = 0;
  (this->TriangleMeshDesc).Indices.ArrayMax = 0;
  (this->TriangleMeshDesc).MaterialIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleMeshDesc).MaterialIndices.ArrayNum = 0;
  (this->TriangleMeshDesc).MaterialIndices.ArrayMax = 0;
  (this->TriangleMeshDesc).UVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleMeshDesc).UVs.ArrayNum = 0;
  (this->TriangleMeshDesc).UVs.ArrayMax = 0;
  (this->NonMirroredConvexVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonMirroredConvexVertices).ArrayNum = 0;
  (this->NonMirroredConvexVertices).ArrayMax = 0;
  (this->MirroredConvexVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MirroredConvexVertices).ArrayNum = 0;
  (this->MirroredConvexVertices).ArrayMax = 0;
  (this->OuterDebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OuterDebugName).Data.ArrayNum = 0;
  (this->OuterDebugName).Data.ArrayMax = 0;
  this->bCookNonMirroredConvex = false;
  this->bCookMirroredConvex = false;
  this->bConvexDeformableMesh = false;
  this->bCookTriMesh = false;
  this->bSupportUVFromHitResults = false;
  this->bSupportFaceRemap = false;
  this->bTriMeshError = false;
  return this;
}

// ~FCookBodySetupInfo @ 1482527f0

void __thiscall FCookBodySetupInfo::~FCookBodySetupInfo(FCookBodySetupInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OuterDebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (this->MirroredConvexVertices).AllocatorInstance.Data,
             (this->MirroredConvexVertices).ArrayNum);
  pFVar1 = (this->MirroredConvexVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (this->NonMirroredConvexVertices).AllocatorInstance.Data,
             (this->NonMirroredConvexVertices).ArrayNum);
  pFVar1 = (this->NonMirroredConvexVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (this->TriangleMeshDesc).UVs.AllocatorInstance.Data,
             (this->TriangleMeshDesc).UVs.ArrayNum);
  pFVar1 = (this->TriangleMeshDesc).UVs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleMeshDesc).MaterialIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleMeshDesc).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleMeshDesc).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

