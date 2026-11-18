// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FGroup @ 14c6debf0

FGroup * __thiscall UE::Geometry::FGroupTopology::FGroup::FGroup(FGroup *this,FGroup *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FGroupBoundary *pFVar6;
  
  pTVar1 = &this->Triangles;
  this->GroupID = param_1->GroupID;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Triangles).ArrayMax;
  iVar4 = (param_1->Triangles).ArrayNum;
  pFVar5 = (param_1->Triangles).AllocatorInstance.Data;
  (this->Triangles).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->Boundaries;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Boundaries).ArrayMax;
  iVar4 = (param_1->Boundaries).ArrayNum;
  pFVar6 = (FGroupBoundary *)(param_1->Boundaries).AllocatorInstance.Data;
  (this->Boundaries).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<UE::Geometry::FGroupTopology::FGroupBoundary,UE::Geometry::FGroupTopology::FGroupBoundary,int>
              ((pTVar3->AllocatorInstance).Data,pFVar6,iVar4);
  }
  pTVar1 = &this->NeighbourGroupIDs;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NeighbourGroupIDs).ArrayMax;
  iVar4 = (param_1->NeighbourGroupIDs).ArrayNum;
  pFVar5 = (param_1->NeighbourGroupIDs).AllocatorInstance.Data;
  (this->NeighbourGroupIDs).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  return this;
}

