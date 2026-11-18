// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// FGroupEdge @ 14cd4ef60

FGroupEdge * __thiscall
UE::Geometry::FGroupTopology::FGroupEdge::FGroupEdge(FGroupEdge *this,FGroupEdge *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &(this->Span).Vertices;
  (this->Groups).field0_0x0 = (param_1->Groups).field0_0x0;
  (this->Span).Mesh = (param_1->Span).Mesh;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Span).Vertices.ArrayMax;
  iVar3 = (param_1->Span).Vertices.ArrayNum;
  pFVar4 = (param_1->Span).Vertices.AllocatorInstance.Data;
  (this->Span).Vertices.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &(this->Span).Edges;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Span).Edges.ArrayMax;
  iVar3 = (param_1->Span).Edges.ArrayNum;
  pFVar4 = (param_1->Span).Edges.AllocatorInstance.Data;
  (this->Span).Edges.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &(this->Span).BowtieVertices;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Span).BowtieVertices.ArrayMax;
  iVar3 = (param_1->Span).BowtieVertices.ArrayNum;
  pFVar4 = (param_1->Span).BowtieVertices.AllocatorInstance.Data;
  (this->Span).BowtieVertices.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  (this->Span).bBowtiesCalculated = (param_1->Span).bBowtiesCalculated;
  (this->EndpointCorners).field0_0x0 = (param_1->EndpointCorners).field0_0x0;
  return this;
}

