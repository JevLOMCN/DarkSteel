// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// FBevelEdge @ 14c6dd4f0

FBevelEdge * __thiscall
UE::Geometry::FMeshBevel::FBevelEdge::FBevelEdge(FBevelEdge *this,FBevelEdge *param_1)

{
  int iVar1;
  
  iVar1 = param_1->EdgeIndex;
  (this->MeshVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EdgeIndex = iVar1;
  (this->MeshVertices).AllocatorInstance.Data = (param_1->MeshVertices).AllocatorInstance.Data;
  (param_1->MeshVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshVertices).ArrayNum = (param_1->MeshVertices).ArrayNum;
  (this->MeshVertices).ArrayMax = (param_1->MeshVertices).ArrayMax;
  (param_1->MeshVertices).ArrayNum = 0;
  (param_1->MeshVertices).ArrayMax = 0;
  (this->MeshEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshEdges).AllocatorInstance.Data = (param_1->MeshEdges).AllocatorInstance.Data;
  (param_1->MeshEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshEdges).ArrayNum = (param_1->MeshEdges).ArrayNum;
  (this->MeshEdges).ArrayMax = (param_1->MeshEdges).ArrayMax;
  (param_1->MeshEdges).ArrayNum = 0;
  (param_1->MeshEdges).ArrayMax = 0;
  (this->MeshEdgeTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshEdgeTris).AllocatorInstance.Data = (param_1->MeshEdgeTris).AllocatorInstance.Data;
  (param_1->MeshEdgeTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshEdgeTris).ArrayNum = (param_1->MeshEdgeTris).ArrayNum;
  (this->MeshEdgeTris).ArrayMax = (param_1->MeshEdgeTris).ArrayMax;
  (param_1->MeshEdgeTris).ArrayNum = 0;
  (param_1->MeshEdgeTris).ArrayMax = 0;
  this->GroupEdgeID = param_1->GroupEdgeID;
  (this->GroupIDs).field0_0x0 = (param_1->GroupIDs).field0_0x0;
  *(undefined2 *)this->bEndpointBoundaryFlag = *(undefined2 *)param_1->bEndpointBoundaryFlag;
  (this->InitialPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialPositions).AllocatorInstance.Data =
       (param_1->InitialPositions).AllocatorInstance.Data;
  (param_1->InitialPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialPositions).ArrayNum = (param_1->InitialPositions).ArrayNum;
  (this->InitialPositions).ArrayMax = (param_1->InitialPositions).ArrayMax;
  (param_1->InitialPositions).ArrayNum = 0;
  (param_1->InitialPositions).ArrayMax = 0;
  (this->BevelVertices).field0_0x0 = (param_1->BevelVertices).field0_0x0;
  (this->NewMeshVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewMeshVertices).AllocatorInstance.Data = (param_1->NewMeshVertices).AllocatorInstance.Data
  ;
  (param_1->NewMeshVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewMeshVertices).ArrayNum = (param_1->NewMeshVertices).ArrayNum;
  (this->NewMeshVertices).ArrayMax = (param_1->NewMeshVertices).ArrayMax;
  (param_1->NewMeshVertices).ArrayNum = 0;
  (param_1->NewMeshVertices).ArrayMax = 0;
  (this->NewMeshEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewMeshEdges).AllocatorInstance.Data = (param_1->NewMeshEdges).AllocatorInstance.Data;
  (param_1->NewMeshEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewMeshEdges).ArrayNum = (param_1->NewMeshEdges).ArrayNum;
  (this->NewMeshEdges).ArrayMax = (param_1->NewMeshEdges).ArrayMax;
  (param_1->NewMeshEdges).ArrayNum = 0;
  (param_1->NewMeshEdges).ArrayMax = 0;
  (this->NewPositions0).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewPositions0).AllocatorInstance.Data = (param_1->NewPositions0).AllocatorInstance.Data;
  (param_1->NewPositions0).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewPositions0).ArrayNum = (param_1->NewPositions0).ArrayNum;
  (this->NewPositions0).ArrayMax = (param_1->NewPositions0).ArrayMax;
  (param_1->NewPositions0).ArrayNum = 0;
  (param_1->NewPositions0).ArrayMax = 0;
  (this->NewPositions1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewPositions1).AllocatorInstance.Data = (param_1->NewPositions1).AllocatorInstance.Data;
  (param_1->NewPositions1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewPositions1).ArrayNum = (param_1->NewPositions1).ArrayNum;
  (this->NewPositions1).ArrayMax = (param_1->NewPositions1).ArrayMax;
  (param_1->NewPositions1).ArrayNum = 0;
  (param_1->NewPositions1).ArrayMax = 0;
  this->NewGroupID = param_1->NewGroupID;
  (this->StripQuads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StripQuads).AllocatorInstance.Data = (param_1->StripQuads).AllocatorInstance.Data;
  (param_1->StripQuads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StripQuads).ArrayNum = (param_1->StripQuads).ArrayNum;
  (this->StripQuads).ArrayMax = (param_1->StripQuads).ArrayMax;
  (param_1->StripQuads).ArrayNum = 0;
  (param_1->StripQuads).ArrayMax = 0;
  (this->StripQuadPatch).NumVertexColsU = (param_1->StripQuadPatch).NumVertexColsU;
  (this->StripQuadPatch).NumVertexRowsV = (param_1->StripQuadPatch).NumVertexRowsV;
  (this->StripQuadPatch).VertexSpans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StripQuadPatch).VertexSpans.AllocatorInstance.Data =
       (param_1->StripQuadPatch).VertexSpans.AllocatorInstance.Data;
  (param_1->StripQuadPatch).VertexSpans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StripQuadPatch).VertexSpans.ArrayNum = (param_1->StripQuadPatch).VertexSpans.ArrayNum;
  (this->StripQuadPatch).VertexSpans.ArrayMax = (param_1->StripQuadPatch).VertexSpans.ArrayMax;
  (param_1->StripQuadPatch).VertexSpans.ArrayNum = 0;
  (param_1->StripQuadPatch).VertexSpans.ArrayMax = 0;
  (this->StripQuadPatch).QuadTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StripQuadPatch).QuadTriangles.AllocatorInstance.Data =
       (param_1->StripQuadPatch).QuadTriangles.AllocatorInstance.Data;
  (param_1->StripQuadPatch).QuadTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StripQuadPatch).QuadTriangles.ArrayNum = (param_1->StripQuadPatch).QuadTriangles.ArrayNum;
  (this->StripQuadPatch).QuadTriangles.ArrayMax = (param_1->StripQuadPatch).QuadTriangles.ArrayMax;
  (param_1->StripQuadPatch).QuadTriangles.ArrayNum = 0;
  (param_1->StripQuadPatch).QuadTriangles.ArrayMax = 0;
  (this->NormalsA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsA).AllocatorInstance.Data = (param_1->NormalsA).AllocatorInstance.Data;
  (param_1->NormalsA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsA).ArrayNum = (param_1->NormalsA).ArrayNum;
  (this->NormalsA).ArrayMax = (param_1->NormalsA).ArrayMax;
  (param_1->NormalsA).ArrayNum = 0;
  (param_1->NormalsA).ArrayMax = 0;
  (this->NormalsB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsB).AllocatorInstance.Data = (param_1->NormalsB).AllocatorInstance.Data;
  (param_1->NormalsB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsB).ArrayNum = (param_1->NormalsB).ArrayNum;
  (this->NormalsB).ArrayMax = (param_1->NormalsB).ArrayMax;
  (param_1->NormalsB).ArrayNum = 0;
  (param_1->NormalsB).ArrayMax = 0;
  return this;
}

// ~FBevelEdge @ 14c6e1100

void __thiscall UE::Geometry::FMeshBevel::FBevelEdge::~FBevelEdge(FBevelEdge *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NormalsB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NormalsA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
             (this->StripQuadPatch).QuadTriangles.AllocatorInstance.Data,
             (this->StripQuadPatch).QuadTriangles.ArrayNum);
  pFVar1 = (this->StripQuadPatch).QuadTriangles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->StripQuadPatch).VertexSpans.AllocatorInstance.Data,
             (this->StripQuadPatch).VertexSpans.ArrayNum);
  pFVar1 = (this->StripQuadPatch).VertexSpans.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StripQuads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewPositions1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewPositions0).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewMeshEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewMeshVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitialPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshEdgeTris).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

