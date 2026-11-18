// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FBevelLoop @ 14c6dd7a0

FBevelLoop * __thiscall
UE::Geometry::FMeshBevel::FBevelLoop::FBevelLoop(FBevelLoop *this,FBevelLoop *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *pTVar8;
  
  piVar1 = &(this->MeshVertices).ArrayMax;
  (this->MeshVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->MeshVertices).ArrayNum;
  pFVar6 = (param_1->MeshVertices).AllocatorInstance.Data;
  (this->MeshVertices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->MeshVertices).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar7 = &this->MeshEdges;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MeshEdges).ArrayMax;
  iVar5 = (param_1->MeshEdges).ArrayNum;
  pFVar6 = (param_1->MeshEdges).AllocatorInstance.Data;
  (this->MeshEdges).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar7->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar8 = &this->MeshEdgeTris;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MeshEdgeTris).ArrayMax;
  iVar5 = (param_1->MeshEdgeTris).ArrayNum;
  pFVar6 = (param_1->MeshEdgeTris).AllocatorInstance.Data;
  (this->MeshEdgeTris).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar8->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar2 = &this->InitialPositions;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InitialPositions).ArrayMax;
  iVar5 = (param_1->InitialPositions).ArrayNum;
  pFVar6 = (param_1->InitialPositions).AllocatorInstance.Data;
  (this->InitialPositions).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  pTVar7 = &this->NewMeshVertices;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NewMeshVertices).ArrayMax;
  iVar5 = (param_1->NewMeshVertices).ArrayNum;
  pFVar6 = (param_1->NewMeshVertices).AllocatorInstance.Data;
  (this->NewMeshVertices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar7->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar7 = &this->NewMeshEdges;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NewMeshEdges).ArrayMax;
  iVar5 = (param_1->NewMeshEdges).ArrayNum;
  pFVar6 = (param_1->NewMeshEdges).AllocatorInstance.Data;
  (this->NewMeshEdges).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar7->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar2 = &this->NewPositions0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NewPositions0).ArrayMax;
  iVar5 = (param_1->NewPositions0).ArrayNum;
  pFVar6 = (param_1->NewPositions0).AllocatorInstance.Data;
  (this->NewPositions0).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  pTVar2 = &this->NewPositions1;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NewPositions1).ArrayMax;
  iVar5 = (param_1->NewPositions1).ArrayNum;
  pFVar6 = (param_1->NewPositions1).AllocatorInstance.Data;
  (this->NewPositions1).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  pTVar7 = &this->NewGroupIDs;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NewGroupIDs).ArrayMax;
  iVar5 = (param_1->NewGroupIDs).ArrayNum;
  pFVar6 = (param_1->NewGroupIDs).AllocatorInstance.Data;
  (this->NewGroupIDs).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar7->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar8 = &this->StripQuads;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StripQuads).ArrayMax;
  iVar5 = (param_1->StripQuads).ArrayNum;
  pFVar6 = (param_1->StripQuads).AllocatorInstance.Data;
  (this->StripQuads).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar8->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar3 = &(this->StripQuadPatch).VertexSpans;
  (this->StripQuadPatch).NumVertexColsU = (param_1->StripQuadPatch).NumVertexColsU;
  (this->StripQuadPatch).NumVertexRowsV = (param_1->StripQuadPatch).NumVertexRowsV;
  piVar1 = &(this->StripQuadPatch).VertexSpans.ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->StripQuadPatch).VertexSpans.ArrayNum;
  pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (param_1->StripQuadPatch).VertexSpans.AllocatorInstance.Data;
  (this->StripQuadPatch).VertexSpans.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar7,iVar5);
  }
  pTVar4 = &(this->StripQuadPatch).QuadTriangles;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StripQuadPatch).QuadTriangles.ArrayMax;
  iVar5 = (param_1->StripQuadPatch).QuadTriangles.ArrayNum;
  pTVar8 = (TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
           (param_1->StripQuadPatch).QuadTriangles.AllocatorInstance.Data;
  (this->StripQuadPatch).QuadTriangles.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
              ((pTVar4->AllocatorInstance).Data,pTVar8,iVar5);
  }
  pTVar2 = &this->NormalsA;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NormalsA).ArrayMax;
  iVar5 = (param_1->NormalsA).ArrayNum;
  pFVar6 = (param_1->NormalsA).AllocatorInstance.Data;
  (this->NormalsA).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  pTVar2 = &this->NormalsB;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NormalsB).ArrayMax;
  iVar5 = (param_1->NormalsB).ArrayNum;
  pFVar6 = (param_1->NormalsB).AllocatorInstance.Data;
  (this->NormalsB).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  return this;
}

