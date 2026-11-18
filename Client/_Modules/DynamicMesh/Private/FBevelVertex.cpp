// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// FBevelVertex @ 14c6ddce0

FBevelVertex * __thiscall
UE::Geometry::FMeshBevel::FBevelVertex::FBevelVertex(FBevelVertex *this,FBevelVertex *param_1)

{
  EBevelVertexType EVar1;
  int iVar2;
  
  this->VertexID = param_1->VertexID;
  this->CornerID = param_1->CornerID;
  EVar1 = param_1->VertexType;
  (this->IncomingBevelMeshEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VertexType = EVar1;
  (this->IncomingBevelMeshEdges).AllocatorInstance.Data =
       (param_1->IncomingBevelMeshEdges).AllocatorInstance.Data;
  (param_1->IncomingBevelMeshEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingBevelMeshEdges).ArrayNum = (param_1->IncomingBevelMeshEdges).ArrayNum;
  (this->IncomingBevelMeshEdges).ArrayMax = (param_1->IncomingBevelMeshEdges).ArrayMax;
  (param_1->IncomingBevelMeshEdges).ArrayNum = 0;
  (param_1->IncomingBevelMeshEdges).ArrayMax = 0;
  (this->IncomingBevelTopoEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingBevelTopoEdges).AllocatorInstance.Data =
       (param_1->IncomingBevelTopoEdges).AllocatorInstance.Data;
  (param_1->IncomingBevelTopoEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingBevelTopoEdges).ArrayNum = (param_1->IncomingBevelTopoEdges).ArrayNum;
  (this->IncomingBevelTopoEdges).ArrayMax = (param_1->IncomingBevelTopoEdges).ArrayMax;
  (param_1->IncomingBevelTopoEdges).ArrayNum = 0;
  (param_1->IncomingBevelTopoEdges).ArrayMax = 0;
  (this->IncomingBevelEdgeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingBevelEdgeIndices).AllocatorInstance.Data =
       (param_1->IncomingBevelEdgeIndices).AllocatorInstance.Data;
  (param_1->IncomingBevelEdgeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingBevelEdgeIndices).ArrayNum = (param_1->IncomingBevelEdgeIndices).ArrayNum;
  (this->IncomingBevelEdgeIndices).ArrayMax = (param_1->IncomingBevelEdgeIndices).ArrayMax;
  (param_1->IncomingBevelEdgeIndices).ArrayNum = 0;
  (param_1->IncomingBevelEdgeIndices).ArrayMax = 0;
  (this->SortedTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedTriangles).AllocatorInstance.Data = (param_1->SortedTriangles).AllocatorInstance.Data
  ;
  (param_1->SortedTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedTriangles).ArrayNum = (param_1->SortedTriangles).ArrayNum;
  (this->SortedTriangles).ArrayMax = (param_1->SortedTriangles).ArrayMax;
  (param_1->SortedTriangles).ArrayNum = 0;
  (param_1->SortedTriangles).ArrayMax = 0;
  (this->Wedges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Wedges).AllocatorInstance.Data = (param_1->Wedges).AllocatorInstance.Data;
  (param_1->Wedges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Wedges).ArrayNum = (param_1->Wedges).ArrayNum;
  (this->Wedges).ArrayMax = (param_1->Wedges).ArrayMax;
  (param_1->Wedges).ArrayNum = 0;
  (param_1->Wedges).ArrayMax = 0;
  iVar2 = param_1->NewGroupID;
  (this->NewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NewGroupID = iVar2;
  (this->NewTriangles).AllocatorInstance.Data = (param_1->NewTriangles).AllocatorInstance.Data;
  (param_1->NewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewTriangles).ArrayNum = (param_1->NewTriangles).ArrayNum;
  (this->NewTriangles).ArrayMax = (param_1->NewTriangles).ArrayMax;
  (param_1->NewTriangles).ArrayNum = 0;
  (param_1->NewTriangles).ArrayMax = 0;
  (this->TerminatorInfo).field0_0x0 = (param_1->TerminatorInfo).field0_0x0;
  iVar2 = param_1->ConnectedBevelVertex;
  (this->InteriorVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ConnectedBevelVertex = iVar2;
  (this->InteriorVertices).AllocatorInstance.Data =
       (param_1->InteriorVertices).AllocatorInstance.Data;
  (param_1->InteriorVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InteriorVertices).ArrayNum = (param_1->InteriorVertices).ArrayNum;
  (this->InteriorVertices).ArrayMax = (param_1->InteriorVertices).ArrayMax;
  (param_1->InteriorVertices).ArrayNum = 0;
  (param_1->InteriorVertices).ArrayMax = 0;
  (this->InteriorBorderLoop).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InteriorBorderLoop).AllocatorInstance.Data =
       (param_1->InteriorBorderLoop).AllocatorInstance.Data;
  (param_1->InteriorBorderLoop).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InteriorBorderLoop).ArrayNum = (param_1->InteriorBorderLoop).ArrayNum;
  (this->InteriorBorderLoop).ArrayMax = (param_1->InteriorBorderLoop).ArrayMax;
  (param_1->InteriorBorderLoop).ArrayNum = 0;
  (param_1->InteriorBorderLoop).ArrayMax = 0;
  return this;
}

// FBevelVertex @ 14c6dde50

FBevelVertex * __thiscall
UE::Geometry::FMeshBevel::FBevelVertex::FBevelVertex(FBevelVertex *this,FBevelVertex *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Geometry::FMeshBevel::FOneRingWedge,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FOneRingWedge *pFVar7;
  FBevelVertex_InteriorVertex *pFVar8;
  
  pTVar1 = &this->IncomingBevelMeshEdges;
  this->VertexID = param_1->VertexID;
  this->CornerID = param_1->CornerID;
  this->VertexType = param_1->VertexType;
  piVar2 = &(this->IncomingBevelMeshEdges).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->IncomingBevelMeshEdges).ArrayNum;
  pFVar6 = (param_1->IncomingBevelMeshEdges).AllocatorInstance.Data;
  (this->IncomingBevelMeshEdges).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar1 = &this->IncomingBevelTopoEdges;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->IncomingBevelTopoEdges).ArrayMax;
  iVar5 = (param_1->IncomingBevelTopoEdges).ArrayNum;
  pFVar6 = (param_1->IncomingBevelTopoEdges).AllocatorInstance.Data;
  (this->IncomingBevelTopoEdges).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar1 = &this->IncomingBevelEdgeIndices;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->IncomingBevelEdgeIndices).ArrayMax;
  iVar5 = (param_1->IncomingBevelEdgeIndices).ArrayNum;
  pFVar6 = (param_1->IncomingBevelEdgeIndices).AllocatorInstance.Data;
  (this->IncomingBevelEdgeIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar1 = &this->SortedTriangles;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SortedTriangles).ArrayMax;
  iVar5 = (param_1->SortedTriangles).ArrayNum;
  pFVar6 = (param_1->SortedTriangles).AllocatorInstance.Data;
  (this->SortedTriangles).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->Wedges;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Wedges).ArrayMax;
  iVar5 = (param_1->Wedges).ArrayNum;
  pFVar7 = (FOneRingWedge *)(param_1->Wedges).AllocatorInstance.Data;
  (this->Wedges).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<UE::Geometry::FMeshBevel::FOneRingWedge,UE::Geometry::FMeshBevel::FOneRingWedge,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pTVar1 = &this->NewTriangles;
  this->NewGroupID = param_1->NewGroupID;
  piVar2 = &(this->NewTriangles).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->NewTriangles).ArrayNum;
  pFVar6 = (param_1->NewTriangles).AllocatorInstance.Data;
  (this->NewTriangles).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->InteriorVertices;
  (this->TerminatorInfo).field0_0x0 = (param_1->TerminatorInfo).field0_0x0;
  this->ConnectedBevelVertex = param_1->ConnectedBevelVertex;
  piVar2 = &(this->InteriorVertices).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->InteriorVertices).ArrayNum;
  pFVar8 = (FBevelVertex_InteriorVertex *)(param_1->InteriorVertices).AllocatorInstance.Data;
  (this->InteriorVertices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    ConstructItems<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,int>
              ((pTVar4->AllocatorInstance).Data,pFVar8,iVar5);
  }
  pTVar1 = &this->InteriorBorderLoop;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InteriorBorderLoop).ArrayMax;
  iVar5 = (param_1->InteriorBorderLoop).ArrayNum;
  pFVar6 = (param_1->InteriorBorderLoop).AllocatorInstance.Data;
  (this->InteriorBorderLoop).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  return this;
}

