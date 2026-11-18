// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FOneRingWedge @ 14c6df930

FOneRingWedge * __thiscall
UE::Geometry::FMeshBevel::FOneRingWedge::FOneRingWedge(FOneRingWedge *this,FOneRingWedge *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  double dVar3;
  
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Triangles).ArrayMax;
  iVar2 = (param_1->Triangles).ArrayNum;
  _Src = (param_1->Triangles).AllocatorInstance.Data;
  (this->Triangles).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Triangles).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  (this->BorderEdges).field0_0x0 = (param_1->BorderEdges).field0_0x0;
  (this->BorderEdgeTriEdgeIndices).field0_0x0 = (param_1->BorderEdgeTriEdgeIndices).field0_0x0;
  this->WedgeVertex = param_1->WedgeVertex;
  dVar3 = (param_1->NewPosition).field0_0x0._s_0.Y;
  (this->NewPosition).field0_0x0._s_0.X = (param_1->NewPosition).field0_0x0._s_0.X;
  (this->NewPosition).field0_0x0._s_0.Y = dVar3;
  (this->NewPosition).field0_0x0._s_0.Z = (param_1->NewPosition).field0_0x0._s_0.Z;
  this->bHaveNewPosition = param_1->bHaveNewPosition;
  return this;
}

