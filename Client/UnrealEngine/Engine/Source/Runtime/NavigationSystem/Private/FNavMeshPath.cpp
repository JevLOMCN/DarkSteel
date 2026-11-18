// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 30

// FNavMeshPath @ 146dd4970

FNavMeshPath * __thiscall FNavMeshPath::FNavMeshPath(FNavMeshPath *this,FNavMeshPath *param_1)

{
  uint uVar1;
  
  FNavigationPath::FNavigationPath((FNavigationPath *)this,(FNavigationPath *)param_1);
  this->_padding_ = (longlong)&___7FNavMeshPath__6B_;
  (this->PathCorridor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridor).AllocatorInstance.Data = (param_1->PathCorridor).AllocatorInstance.Data;
  (param_1->PathCorridor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridor).ArrayNum = (param_1->PathCorridor).ArrayNum;
  (this->PathCorridor).ArrayMax = (param_1->PathCorridor).ArrayMax;
  (param_1->PathCorridor).ArrayNum = 0;
  (param_1->PathCorridor).ArrayMax = 0;
  (this->PathCorridorCost).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridorCost).AllocatorInstance.Data =
       (param_1->PathCorridorCost).AllocatorInstance.Data;
  (param_1->PathCorridorCost).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridorCost).ArrayNum = (param_1->PathCorridorCost).ArrayNum;
  (this->PathCorridorCost).ArrayMax = (param_1->PathCorridorCost).ArrayMax;
  (param_1->PathCorridorCost).ArrayNum = 0;
  (param_1->PathCorridorCost).ArrayMax = 0;
  (this->CustomLinkIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomLinkIds).AllocatorInstance.Data = (param_1->CustomLinkIds).AllocatorInstance.Data;
  (param_1->CustomLinkIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomLinkIds).ArrayNum = (param_1->CustomLinkIds).ArrayNum;
  (this->CustomLinkIds).ArrayMax = (param_1->CustomLinkIds).ArrayMax;
  (param_1->CustomLinkIds).ArrayNum = 0;
  (param_1->CustomLinkIds).ArrayMax = 0;
  (this->CustomNavLinkIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomNavLinkIds).AllocatorInstance.Data =
       (param_1->CustomNavLinkIds).AllocatorInstance.Data;
  (param_1->CustomNavLinkIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomNavLinkIds).ArrayNum = (param_1->CustomNavLinkIds).ArrayNum;
  (this->CustomNavLinkIds).ArrayMax = (param_1->CustomNavLinkIds).ArrayMax;
  (param_1->CustomNavLinkIds).ArrayNum = 0;
  (param_1->CustomNavLinkIds).ArrayMax = 0;
  (this->PathCorridorEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridorEdges).AllocatorInstance.Data =
       (param_1->PathCorridorEdges).AllocatorInstance.Data;
  (param_1->PathCorridorEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridorEdges).ArrayNum = (param_1->PathCorridorEdges).ArrayNum;
  (this->PathCorridorEdges).ArrayMax = (param_1->PathCorridorEdges).ArrayMax;
  (param_1->PathCorridorEdges).ArrayNum = 0;
  (param_1->PathCorridorEdges).ArrayMax = 0;
  uVar1 = (ZPULL(*(undefined4 *)&this->field_0x180,0,1) ^ param_1->bCorridorEdgesGenerated) & 1 ^
          *(undefined4 *)&this->field_0x180;
  *(uint *)&this->field_0x180 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x180) & 2 ^ uVar1;
  *(uint *)&this->field_0x180 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x180) & 4 ^ uVar1;
  *(uint *)&this->field_0x180 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x180) & 8 ^ uVar1;
  *(uint *)&this->field_0x180 = uVar1;
  *(uint *)&this->field_0x180 = (uVar1 ^ *(uint *)&param_1->field_0x180) & 0x10 ^ uVar1;
  return this;
}

// FNavMeshPath @ 146dd4b40

FNavMeshPath * __thiscall FNavMeshPath::FNavMeshPath(FNavMeshPath *this,FNavMeshPath *param_1)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FNavLinkId,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  FNavigationPath::FNavigationPath((FNavigationPath *)this,(FNavigationPath *)param_1);
  pTVar2 = &this->PathCorridor;
  this->_padding_ = (longlong)&___7FNavMeshPath__6B_;
  piVar1 = &(this->PathCorridor).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->PathCorridor).ArrayNum;
  pFVar8 = (param_1->PathCorridor).AllocatorInstance.Data;
  (this->PathCorridor).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  pTVar3 = &this->PathCorridorCost;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PathCorridorCost).ArrayMax;
  iVar7 = (param_1->PathCorridorCost).ArrayNum;
  pFVar8 = (param_1->PathCorridorCost).AllocatorInstance.Data;
  (this->PathCorridorCost).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  pTVar4 = &this->CustomLinkIds;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CustomLinkIds).ArrayMax;
  iVar7 = (param_1->CustomLinkIds).ArrayNum;
  pFVar8 = (param_1->CustomLinkIds).AllocatorInstance.Data;
  (this->CustomLinkIds).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  pTVar5 = &this->CustomNavLinkIds;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CustomNavLinkIds).ArrayMax;
  iVar7 = (param_1->CustomNavLinkIds).ArrayNum;
  pFVar8 = (param_1->CustomNavLinkIds).AllocatorInstance.Data;
  (this->CustomNavLinkIds).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  pTVar6 = &this->PathCorridorEdges;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PathCorridorEdges).ArrayMax;
  iVar7 = (param_1->PathCorridorEdges).ArrayNum;
  pFVar8 = (param_1->PathCorridorEdges).AllocatorInstance.Data;
  (this->PathCorridorEdges).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x38);
  }
  uVar9 = (ZPULL(*(undefined4 *)&this->field_0x180,0,1) ^ param_1->bCorridorEdgesGenerated) & 1 ^
          *(undefined4 *)&this->field_0x180;
  *(uint *)&this->field_0x180 = uVar9;
  uVar9 = (uVar9 ^ *(uint *)&param_1->field_0x180) & 2 ^ uVar9;
  *(uint *)&this->field_0x180 = uVar9;
  uVar9 = (uVar9 ^ *(uint *)&param_1->field_0x180) & 4 ^ uVar9;
  *(uint *)&this->field_0x180 = uVar9;
  uVar9 = (uVar9 ^ *(uint *)&param_1->field_0x180) & 8 ^ uVar9;
  *(uint *)&this->field_0x180 = uVar9;
  *(uint *)&this->field_0x180 = (uVar9 ^ *(uint *)&param_1->field_0x180) & 0x10 ^ uVar9;
  return this;
}

// FNavMeshPath @ 146dd4dc0

FNavMeshPath * __thiscall FNavMeshPath::FNavMeshPath(FNavMeshPath *this)

{
  FNavigationPath::FNavigationPath((FNavigationPath *)this);
  this->_padding_ = (longlong)&___7FNavMeshPath__6B_;
  (this->PathCorridor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridor).ArrayNum = 0;
  (this->PathCorridor).ArrayMax = 0;
  (this->PathCorridorCost).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridorCost).ArrayNum = 0;
  (this->PathCorridorCost).ArrayMax = 0;
  (this->CustomLinkIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomLinkIds).ArrayNum = 0;
  (this->CustomLinkIds).ArrayMax = 0;
  (this->CustomNavLinkIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomNavLinkIds).ArrayNum = 0;
  (this->CustomNavLinkIds).ArrayMax = 0;
  (this->PathCorridorEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathCorridorEdges).ArrayNum = 0;
  (this->PathCorridorEdges).ArrayMax = 0;
  this->bWantsStringPulling = 1;
  this->bWantsPathCorridor = 0;
  *(FNavPathType *)&this->_padding_ = Type;
  InternalResetNavMeshPath(this);
  return this;
}

// ~FNavMeshPath @ 146dd9570

void __thiscall FNavMeshPath::~FNavMeshPath(FNavMeshPath *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNavMeshPath__6B_;
  pFVar1 = (this->PathCorridorEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomNavLinkIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomLinkIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PathCorridorCost).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PathCorridor).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNavigationPath::~FNavigationPath((FNavigationPath *)this);
  return;
}

// operator= @ 146dda580

FNavMeshPath * __thiscall FNavMeshPath::operator=(FNavMeshPath *this,FNavMeshPath *param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FNavLinkId,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FNavLinkId,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  
  FNavigationPath::operator=((FNavigationPath *)this,(FNavigationPath *)param_1);
  pTVar1 = &param_1->PathCorridor;
  pTVar2 = &this->PathCorridor;
  if (pTVar2 != pTVar1) {
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PathCorridor).ArrayNum = (param_1->PathCorridor).ArrayNum;
    (this->PathCorridor).ArrayMax = (param_1->PathCorridor).ArrayMax;
    (param_1->PathCorridor).ArrayNum = 0;
    (param_1->PathCorridor).ArrayMax = 0;
  }
  pTVar3 = &param_1->PathCorridorCost;
  pTVar4 = &this->PathCorridorCost;
  if (pTVar4 != pTVar3) {
    pFVar11 = (pTVar4->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PathCorridorCost).ArrayNum = (param_1->PathCorridorCost).ArrayNum;
    (this->PathCorridorCost).ArrayMax = (param_1->PathCorridorCost).ArrayMax;
    (param_1->PathCorridorCost).ArrayNum = 0;
    (param_1->PathCorridorCost).ArrayMax = 0;
  }
  pTVar5 = &param_1->CustomLinkIds;
  pTVar6 = &this->CustomLinkIds;
  if (pTVar6 != pTVar5) {
    pFVar11 = (pTVar6->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CustomLinkIds).ArrayNum = (param_1->CustomLinkIds).ArrayNum;
    (this->CustomLinkIds).ArrayMax = (param_1->CustomLinkIds).ArrayMax;
    (param_1->CustomLinkIds).ArrayNum = 0;
    (param_1->CustomLinkIds).ArrayMax = 0;
  }
  pTVar7 = &param_1->CustomNavLinkIds;
  pTVar8 = &this->CustomNavLinkIds;
  if (pTVar8 != pTVar7) {
    pFVar11 = (pTVar8->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CustomNavLinkIds).ArrayNum = (param_1->CustomNavLinkIds).ArrayNum;
    (this->CustomNavLinkIds).ArrayMax = (param_1->CustomNavLinkIds).ArrayMax;
    (param_1->CustomNavLinkIds).ArrayNum = 0;
    (param_1->CustomNavLinkIds).ArrayMax = 0;
  }
  pTVar9 = &param_1->PathCorridorEdges;
  pTVar10 = &this->PathCorridorEdges;
  if (pTVar10 != pTVar9) {
    pFVar11 = (pTVar10->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PathCorridorEdges).ArrayNum = (param_1->PathCorridorEdges).ArrayNum;
    (this->PathCorridorEdges).ArrayMax = (param_1->PathCorridorEdges).ArrayMax;
    (param_1->PathCorridorEdges).ArrayNum = 0;
    (param_1->PathCorridorEdges).ArrayMax = 0;
  }
  uVar12 = (ZPULL(*(undefined4 *)&this->field_0x180,0,1) ^ param_1->bCorridorEdgesGenerated) & 1 ^
           *(undefined4 *)&this->field_0x180;
  *(uint *)&this->field_0x180 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x180) & 2 ^ uVar12;
  *(uint *)&this->field_0x180 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x180) & 4 ^ uVar12;
  *(uint *)&this->field_0x180 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x180) & 8 ^ uVar12;
  *(uint *)&this->field_0x180 = uVar12;
  *(uint *)&this->field_0x180 = (uVar12 ^ *(uint *)&param_1->field_0x180) & 0x10 ^ uVar12;
  return this;
}

// operator= @ 146dda760

FNavMeshPath * __thiscall FNavMeshPath::operator=(FNavMeshPath *this,FNavMeshPath *param_1)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNavLinkId,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  FNavigationPath::operator=((FNavigationPath *)this,(FNavigationPath *)param_1);
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
            (&this->PathCorridor,&param_1->PathCorridor);
  pTVar2 = &this->PathCorridorCost;
  if (pTVar2 != &param_1->PathCorridorCost) {
    iVar4 = (param_1->PathCorridorCost).ArrayNum;
    piVar1 = &(this->PathCorridorCost).ArrayMax;
    pFVar5 = (param_1->PathCorridorCost).AllocatorInstance.Data;
    (this->PathCorridorCost).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
      }
    }
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CustomLinkIds,&param_1->CustomLinkIds);
  pTVar3 = &this->CustomNavLinkIds;
  if (pTVar3 != &param_1->CustomNavLinkIds) {
    iVar4 = (param_1->CustomNavLinkIds).ArrayNum;
    piVar1 = &(this->CustomNavLinkIds).ArrayMax;
    pFVar5 = (param_1->CustomNavLinkIds).AllocatorInstance.Data;
    (this->CustomNavLinkIds).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
      }
    }
  }
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_>::operator=
            (&this->PathCorridorEdges,&param_1->PathCorridorEdges);
  uVar6 = (ZPULL(*(undefined4 *)&this->field_0x180,0,1) ^ param_1->bCorridorEdgesGenerated) & 1 ^
          *(undefined4 *)&this->field_0x180;
  *(uint *)&this->field_0x180 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x180) & 2 ^ uVar6;
  *(uint *)&this->field_0x180 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x180) & 4 ^ uVar6;
  *(uint *)&this->field_0x180 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x180) & 8 ^ uVar6;
  *(uint *)&this->field_0x180 = uVar6;
  *(uint *)&this->field_0x180 = (uVar6 ^ *(uint *)&param_1->field_0x180) & 0x10 ^ uVar6;
  return this;
}

// ApplyFlags @ 146ddfbf0

void __thiscall FNavMeshPath::ApplyFlags(FNavMeshPath *this,int param_1)

{
  if ((param_1 & 1U) != 0) {
    this->bWantsStringPulling = 0;
  }
  if ((param_1 & 2U) != 0) {
    this->bWantsPathCorridor = 1;
  }
  return;
}

// ContainsAnyCustomLink @ 146de55f0

bool __thiscall FNavMeshPath::ContainsAnyCustomLink(FNavMeshPath *this)

{
  return 0 < (this->CustomNavLinkIds).ArrayNum;
}

// ContainsCustomLink @ 146de5610

bool __thiscall FNavMeshPath::ContainsCustomLink(FNavMeshPath *this,FNavLinkId param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->CustomNavLinkIds).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->CustomNavLinkIds).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(ulong64 *)pFVar2 == param_1.Id) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// ContainsNode @ 146de5650

bool __thiscall FNavMeshPath::ContainsNode(FNavMeshPath *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->PathCorridor).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->PathCorridor).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(ulong64 *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// ContainsWithSameEnd @ 146de5690

bool __thiscall FNavMeshPath::ContainsWithSameEnd(FNavMeshPath *this,FNavMeshPath *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  iVar6 = (this->PathCorridor).ArrayNum;
  if (iVar6 < (param_1->PathCorridor).ArrayNum) {
    return false;
  }
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar6 = (param_1->PathCorridor).ArrayNum;
  uVar9 = iVar6 - 1;
  pFVar8 = (this->PathCorridor).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
  uVar5 = 0;
  if ((int)uVar9 < iVar6) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  bVar3 = true;
  iVar6 = (param_1->PathCorridor).ArrayNum + -1;
  if (-1 < iVar6) {
    lVar2 = (longlong)(int)uVar9 * 8 - (longlong)pFVar8;
    do {
      if (!bVar3) {
        return bVar3;
      }
      bVar3 = *(longlong *)pFVar8 ==
              *(longlong *)
               (pFVar8 + (longlong)((param_1->PathCorridor).AllocatorInstance.Data + lVar2));
      pFVar8 = pFVar8 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return bVar3;
}

// DebugDraw @ 146de6c90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNavMeshPath::DebugDraw
          (FNavMeshPath *this,ANavigationData *param_1,FColor param_2,UCanvas *param_3,bool param_4,
          float param_5,uint param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar10;
  UWorld *pUVar11;
  UFont *pUVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ANavigationData *local_res10;
  FName local_168;
  FString local_160;
  FString local_150;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TStringView<wchar_t> local_f8;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  FFontRenderInfo local_b0;
  double local_60;
  
  FNavigationPath::DebugDraw
            ((FNavigationPath *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (param_1 != (ANavigationData *)0x0) {
    pUVar9 = ARecastNavMesh::GetPrivateStaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_res10 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar9->_padding_)) goto LAB_146de6d23;
  }
  local_res10 = (ANavigationData *)0x0;
LAB_146de6d23:
  if (this->bCorridorEdgesGenerated == 0) {
    pTVar10 = GeneratePathCorridorEdges(this);
  }
  else {
    pTVar10 = &this->PathCorridorEdges;
  }
  iVar1 = pTVar10->ArrayNum;
  lVar13 = (longlong)iVar1;
  pUVar11 = AActor::GetWorld((AActor *)param_1);
  uVar15 = 0;
  if (0 < iVar1) {
    lVar14 = 0;
    do {
      fVar5 = NavigationDebugDrawing::PathLineThickness;
      uVar8 = 0;
      if ((int)uVar15 < pTVar10->ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pTVar10->AllocatorInstance).Data;
      local_128._s_0.Z =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z +
           *(double *)(pFVar2 + lVar14 + 0x28);
      local_128._s_0.Y =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y +
           *(double *)(pFVar2 + lVar14 + 0x20);
      local_128._s_0.X =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X +
           *(double *)(pFVar2 + lVar14 + 0x18);
      uVar8 = 0;
      if ((int)uVar15 < pTVar10->ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pTVar10->AllocatorInstance).Data;
      local_110._s_0.Z =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z +
           *(double *)(pFVar2 + lVar14 + 0x10);
      local_110._s_0.Y =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y + *(double *)(pFVar2 + lVar14 + 8);
      local_110._s_0.X =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X + *(double *)(pFVar2 + lVar14);
      DrawDebugLine(pUVar11,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0,
                    &FColor::Blue,param_4,param_5,'\0',fVar5);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x38;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (((param_3 != (UCanvas *)0x0) && (local_res10 != (ANavigationData *)0x0)) &&
     ((local_res10[1]._padding_ & 0x4000) != 0)) {
    pUVar12 = UEngine::GetSmallFont();
    dVar6 = __real_4000000000000000;
    fVar5 = __real_3f800000;
    uVar15 = 0;
    if (0 < (int)this->_padding_) {
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar15 < (int)this->_padding_) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar14 = this->_padding_;
        dVar4 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y +
                *(double *)(lVar14 + 8 + lVar13);
        local_e8._8_4_ = SUB84(dVar4,0);
        local_e8._0_8_ =
             NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X + *(double *)(lVar14 + lVar13);
        local_e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_e8._s_0.Z =
             NavigationDebugDrawing::PathNodeBoxExtent.field0_0x0._s_0.Z * dVar6 +
             *(double *)(lVar14 + 0x10 + lVar13) +
             NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z;
        local_60 = local_e8._s_0.Z;
        UCanvas::Project(param_3,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_e8._s_0
                         ,true);
        uVar8 = 0;
        if ((int)uVar15 < (int)this->_padding_) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar9 = ANavigationData::GetAreaClass
                           (local_res10,*(uint *)(this->_padding_ + 0x20 + lVar13) >> 8 & 0xff);
        local_b0._0_4_ = local_b0._0_4_ & 0xfffffffc;
        local_b0.GlowInfo._0_4_ = local_b0.GlowInfo._0_4_ & 0xfffffffe;
        local_b0.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
        local_b0.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
        local_b0.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
        local_b0.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
        local_b0.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
        local_b0.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
        if (pUVar9 == (UClass *)0x0) {
          ::FString::FString(&local_160,L"None");
        }
        else {
          local_168 = (FName)pUVar9->_padding_;
          ::FName::ToString(&local_168,&local_160);
        }
        ::FString::PrintfImpl(&local_150,L"%d: %s");
        local_138 = local_150.Data.AllocatorInstance.Data;
        if (local_150.Data.ArrayNum == 0) {
          iStack_130 = 0;
        }
        else {
          iStack_130 = local_150.Data.ArrayNum + -1;
        }
        local_f8._12_4_ = uStack_12c;
        local_f8.Size = iStack_130;
        local_f8.DataPtr = (wchar_t *)local_150.Data.AllocatorInstance.Data;
        UCanvas::DrawText(param_3,pUVar12,&local_f8,(float)local_c8._s_0.X,(float)local_c8._s_0.Y,
                          fVar5,fVar5,&local_b0);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 0x30;
      } while ((int)uVar15 < (int)this->_padding_);
    }
  }
  return;
}

// DescribeSelfToVisLog @ 146de8f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNavMeshPath::DescribeSelfToVisLog(FNavMeshPath *this,FVisualLogEntry *param_1)

{
  dtNavMesh *this_00;
  FVisualLogShapeElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  FVisualLogEntry *pFVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  ANavigationData *this_01;
  UClass *pUVar21;
  UNavArea *pUVar22;
  UClass *pUVar23;
  UClass *pUVar24;
  FColor *pFVar25;
  UClass *pUVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_378 [32];
  undefined4 local_328;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_320;
  int local_310;
  UClass *local_308;
  ANavigationData *local_300;
  longlong local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  FString local_2d8;
  longlong local_2c8;
  longlong *local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  dtPoly *local_288;
  FVisualLogEntry *local_280;
  FName local_278;
  dtMeshTile *local_270;
  FVisualLogShapeElement local_268;
  FVisualLogShapeElement local_1a8;
  ulonglong local_e8;
  
  if (param_1 != (FVisualLogEntry *)0x0) {
    local_e8 = __security_cookie.value ^ (ulonglong)auStackY_378;
    local_280 = param_1;
    if (this->bStringPulled != 0) {
      FNavigationPath::DescribeSelfToVisLog((FNavigationPath *)this,param_1);
    }
    FVisualLogShapeElement::FVisualLogShapeElement(&local_1a8,Polygon);
    local_328 = CONCAT13(100,FColorList::Cyan.field0_0x0._0_3_);
    local_1a8.Verbosity.Value = '\x06';
    local_1a8.Color =
         (byte)(local_328 >> 0x12) & 0x30 | 0x40 | (byte)(local_328 >> 0xc) & 0xc |
         (byte)(local_328 >> 6) & 3;
    local_1a8.Category.ComparisonIndex.Value = LogNavigation._4_4_;
    local_1a8.Category.Number = LogNavigation._8_4_;
    uVar29 = (this->PathCorridor).ArrayNum * 6;
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    if (local_1a8.Points.ArrayMax < (int)uVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar29,&local_1a8.Points.AllocatorInstance,local_1a8.Points.ArrayNum,
                 &local_1a8.Points.ArrayMax);
    }
    dVar9 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z * __real_3ff4000000000000;
    local_310 = 1;
    dVar10 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y * __real_3ff4000000000000;
    dVar11 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X * __real_3ff4000000000000;
    this_01 = (ANavigationData *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    if (this_01 != (ANavigationData *)0x0) {
      pUVar21 = ARecastNavMesh::GetPrivateStaticClass();
      iVar20 = (int)pUVar21->_padding_;
      if ((iVar20 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
          &pUVar21->_padding_)) {
        (**(code **)(this_01->_padding_ + 0x848))(this_01);
        dVar13 = __real_4049000000000000;
        dVar12 = __real_4059000000000000;
        uVar29 = 0;
        local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.ArrayNum = 0;
        local_320.ArrayMax = 0;
        if (0 < (this->PathCorridor).ArrayNum) {
          local_2c0 = &this_01[1]._padding_;
          uVar30 = (undefined4)__real_3ff0000000000000;
          uVar31 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          local_2f8 = 0;
          local_2c8 = 0;
          local_300 = this_01;
          do {
            plVar16 = local_2c0;
            lVar15 = local_2c8;
            lVar28 = local_2f8;
            uVar27 = 0;
            if ((int)uVar29 < (this->PathCorridor).ArrayNum) {
              uVar27 = ~uVar29 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar27 = 0x3f;
            if (*plVar16 != 0) {
              this_00 = *(dtNavMesh **)(*plVar16 + 8);
              uVar27 = 0;
              if ((this_00 != (dtNavMesh *)0x0) &&
                 (uVar19 = dtNavMesh::getTileAndPolyByRef
                                     (this_00,*(ulong64 *)
                                               ((this->PathCorridor).AllocatorInstance.Data + lVar15
                                               ),&local_270,&local_288), uVar27 = 0,
                 (uVar19 >> 0x1e & 1) != 0)) {
                uVar27 = local_288->areaAndtype & 0x3f;
              }
            }
            pUVar21 = ANavigationData::GetAreaClass(this_01,uVar27);
            uVar3 = local_320._8_8_;
            iVar20 = local_320.ArrayMax;
            pUVar22 = (UNavArea *)0x0;
            local_320._8_8_ = (ulonglong)(uint)local_320.ArrayMax << 0x20;
            if (((longlong)uVar3 < 0) && (iVar20 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,&local_320.AllocatorInstance,0,&local_320.ArrayMax);
            }
            uVar27 = 0;
            if ((int)uVar29 < (this->PathCorridor).ArrayNum) {
              uVar27 = ~uVar29 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((((FPImplRecastNavMesh *)*local_2c0 != (FPImplRecastNavMesh *)0x0) &&
                (bVar18 = FPImplRecastNavMesh::GetPolyVerts
                                    ((FPImplRecastNavMesh *)*local_2c0,
                                     *(ulong64 *)
                                      ((this->PathCorridor).AllocatorInstance.Data + lVar28 * 8),
                                     &local_320), bVar18)) && (local_320.ArrayNum != 0)) {
              if (pUVar21 != (UClass *)0x0) {
                pUVar22 = UClass::GetDefaultObject<UNavArea>(pUVar21);
              }
              FNavigationSystem::GetDefaultWalkableArea();
              pUVar24 = local_308;
              if ((local_308 == (UClass *)0x0) ||
                 (pUVar23 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar23 == (UClass *)0x0))
              {
LAB_146de9394:
                pUVar24 = (UClass *)0x0;
              }
              else {
                iVar20 = (int)pUVar23->_padding_;
                if (((int)pUVar24->_padding_ < iVar20) ||
                   ((longlong *)*(undefined1 **)(pUVar24->_padding_ + (longlong)iVar20 * 8) !=
                    &pUVar23->_padding_)) {
                  bVar18 = false;
                }
                else {
                  bVar18 = true;
                }
                pUVar24 = local_308;
                if (!bVar18) goto LAB_146de9394;
              }
              if (pUVar21 == pUVar24) {
                pFVar25 = &FColorList::Cyan;
              }
              else if (pUVar22 == (UNavArea *)0x0) {
                pFVar25 = &(this_01->NavDataConfig).Color;
              }
              else {
                pFVar25 = &pUVar22->DrawColor;
              }
              pUVar24 = (UClass *)0x0;
              local_328 = CONCAT13(100,(int3)pFVar25->field0_0x0);
              local_1a8.Points.ArrayNum = 0;
              local_1a8.Color =
                   (byte)(local_328 >> 0x12) & 0x30 | 0x40 | (byte)(local_328 >> 0xc) & 0xc |
                   (byte)(local_328 >> 6) & 3;
              if ((local_1a8.Points.ArrayMax < 0) && (local_1a8.Points.ArrayMax != 0)) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,0,&local_1a8.Points.AllocatorInstance,0,&local_1a8.Points.ArrayMax
                          );
              }
              lVar28 = (longlong)local_320.ArrayNum;
              if (local_320.ArrayNum != 0) {
                iVar20 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x18,8,local_320.ArrayNum,&local_1a8.Points.AllocatorInstance,
                                    &local_1a8.Points.ArrayNum,&local_1a8.Points.ArrayMax);
                memcpy(local_1a8.Points.AllocatorInstance.Data + (longlong)iVar20 * 0x18,
                       local_320.AllocatorInstance.Data,lVar28 * 0x18);
              }
              pFVar17 = local_280;
              pFVar1 = (FVisualLogShapeElement *)(local_280->ElementsToDraw).AllocatorInstance.Data;
              if (((pFVar1 <= &local_1a8) &&
                  (&local_1a8 < pFVar1 + (local_280->ElementsToDraw).ArrayMax)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar20 = (pFVar17->ElementsToDraw).ArrayNum;
              if (iVar20 == (pFVar17->ElementsToDraw).ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10c0,&(pFVar17->ElementsToDraw).AllocatorInstance,
                                    &(pFVar17->ElementsToDraw).ArrayMax);
              }
              (pFVar17->ElementsToDraw).ArrayNum = iVar20 + 1;
              FVisualLogShapeElement::FVisualLogShapeElement
                        ((FVisualLogShapeElement *)
                         ((pFVar17->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar20 * 0xc0
                         ),&local_1a8);
              pUVar23 = local_308;
              this_01 = local_300;
              if (pUVar21 != (UClass *)0x0) {
                if ((local_308 == (UClass *)0x0) ||
                   (pUVar26 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar26 == (UClass *)0x0
                   )) {
LAB_146de9595:
                  pUVar23 = pUVar24;
                }
                else {
                  iVar20 = (int)pUVar26->_padding_;
                  if (((int)pUVar23->_padding_ < iVar20) ||
                     ((longlong *)*(undefined1 **)(pUVar23->_padding_ + (longlong)iVar20 * 8) !=
                      &pUVar26->_padding_)) {
                    bVar18 = false;
                  }
                  else {
                    bVar18 = true;
                  }
                  pUVar23 = local_308;
                  if (!bVar18) goto LAB_146de9595;
                }
                this_01 = local_300;
                if (pUVar21 != pUVar23) {
                  local_2f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  dStack_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  pUVar23 = pUVar24;
                  iVar20 = local_320.ArrayNum;
                  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  if (0 < local_320.ArrayNum) {
                    do {
                      uVar19 = (uint)pUVar24;
                      uVar27 = 0;
                      if ((int)uVar19 < iVar20) {
                        uVar27 = ~uVar19 >> 0x1f;
                      }
                      if (uVar27 == 0) {
                        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar18) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        iVar20 = local_320.ArrayNum;
                      }
                      pUVar24 = (UClass *)(ulonglong)(uVar19 + 1);
                      uVar6 = (double)uVar6 +
                              *(double *)
                               (local_320.AllocatorInstance.Data + (longlong)&pUVar23->_padding_);
                      uVar4 = (double)uVar4 +
                              *(double *)
                               ((longlong)&pUVar23->_padding_ + local_320.AllocatorInstance.Data);
                      uVar3 = (double)uVar3 +
                              *(double *)
                               ((longlong)&pUVar23->_padding_ + local_320.AllocatorInstance.Data);
                      pUVar23 = (UClass *)&pUVar23->_padding_;
                    } while ((int)(uVar19 + 1) < iVar20);
                  }
                  dVar8 = (double)CONCAT44(uVar31,uVar30) / (double)iVar20;
                  local_2f0 = dVar8 * (double)uVar6;
                  dStack_2e8 = dVar8 * (double)uVar4;
                  local_2e0 = dVar8 * (double)uVar3;
                  FVisualLogShapeElement::FVisualLogShapeElement(&local_268,Segment);
                  local_268.Verbosity.Value = '\x06';
                  local_268.Color =
                       (byte)((uint)FColorList::Orange.field0_0x0 >> 0x12) & 0x30 |
                       (byte)((uint)FColorList::Orange.field0_0x0 >> 0xc) & 0xc |
                       (byte)((uint)FColorList::Orange.field0_0x0 >> 6) & 3 |
                       FColorList::Orange.field0_0x0._3_1_ & 0xc0;
                  local_268.Category.ComparisonIndex.Value = LogNavigation._4_4_;
                  local_268.Category.Number = LogNavigation._8_4_;
                  local_268.field15_0xb6.Thickness = 2;
                  local_278 = (FName)pUVar21->_padding_;
                  ::FName::ToString(&local_278,&local_2d8);
                  if (local_268.Description.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_268.Description.Data.AllocatorInstance.Data);
                  }
                  dVar5 = dVar10 + dVar8 * (double)uVar4;
                  local_268.Description.Data.AllocatorInstance.Data =
                       local_2d8.Data.AllocatorInstance.Data;
                  dVar7 = dVar9 + dVar8 * (double)uVar3;
                  local_268.Description.Data.ArrayNum = local_2d8.Data.ArrayNum;
                  dVar8 = dVar11 + dVar8 * (double)uVar6;
                  local_268.Description.Data.ArrayMax = local_2d8.Data.ArrayMax;
                  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_2d8.Data.ArrayNum = 0;
                  local_2d8.Data.ArrayMax = 0;
                  local_2b8 = dVar8;
                  dStack_2b0 = dVar5;
                  local_2a8 = dVar7;
                  if (((local_268.Points.AllocatorInstance.Data <=
                        (FScriptContainerElement *)&local_2b8) &&
                      ((FScriptContainerElement *)&local_2b8 <
                       local_268.Points.AllocatorInstance.Data +
                       (longlong)local_268.Points.ArrayMax * 0x18)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (local_268.Points.ArrayNum == local_268.Points.ArrayMax) {
                    local_268.Points.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_268.Points.AllocatorInstance,
                                    &local_268.Points.ArrayMax);
                  }
                  iVar14 = local_310;
                  iVar20 = local_268.Points.ArrayNum + 1;
                  *(double *)
                   (local_268.Points.AllocatorInstance.Data +
                   (longlong)local_268.Points.ArrayNum * 0x18) = local_2b8;
                  *(double *)
                   (local_268.Points.AllocatorInstance.Data +
                    (longlong)local_268.Points.ArrayNum * 0x18 + 8) = dStack_2b0;
                  *(double *)
                   (local_268.Points.AllocatorInstance.Data +
                   (longlong)local_268.Points.ArrayNum * 0x18 + 0x10) = local_2a8;
                  local_290 = (double)local_310 * dVar13 + dVar12 + dVar7;
                  local_2a0 = dVar8;
                  dStack_298 = dVar5;
                  local_268.Points.ArrayNum = iVar20;
                  if (((local_268.Points.AllocatorInstance.Data <=
                        (FScriptContainerElement *)&local_2a0) &&
                      ((FScriptContainerElement *)&local_2a0 <
                       local_268.Points.AllocatorInstance.Data +
                       (longlong)local_268.Points.ArrayMax * 0x18)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (local_268.Points.ArrayNum == local_268.Points.ArrayMax) {
                    local_268.Points.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_268.Points.AllocatorInstance,
                                    &local_268.Points.ArrayMax);
                  }
                  iVar20 = local_268.Points.ArrayNum + 1;
                  *(double *)
                   (local_268.Points.AllocatorInstance.Data +
                   (longlong)local_268.Points.ArrayNum * 0x18) = local_2a0;
                  *(double *)
                   (local_268.Points.AllocatorInstance.Data +
                    (longlong)local_268.Points.ArrayNum * 0x18 + 8) = dStack_298;
                  *(double *)
                   (local_268.Points.AllocatorInstance.Data +
                   (longlong)local_268.Points.ArrayNum * 0x18 + 0x10) = local_290;
                  pFVar1 = (FVisualLogShapeElement *)
                           (pFVar17->ElementsToDraw).AllocatorInstance.Data;
                  local_268.Points.ArrayNum = iVar20;
                  if (((pFVar1 <= &local_268) &&
                      (&local_268 < pFVar1 + (pFVar17->ElementsToDraw).ArrayMax)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  iVar20 = (pFVar17->ElementsToDraw).ArrayNum;
                  if (iVar20 == (pFVar17->ElementsToDraw).ArrayMax) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x10c0,&(pFVar17->ElementsToDraw).AllocatorInstance,
                                        &(pFVar17->ElementsToDraw).ArrayMax);
                  }
                  (pFVar17->ElementsToDraw).ArrayNum = iVar20 + 1;
                  FVisualLogShapeElement::FVisualLogShapeElement
                            ((FVisualLogShapeElement *)
                             ((pFVar17->ElementsToDraw).AllocatorInstance.Data +
                             (longlong)iVar20 * 0xc0),&local_268);
                  local_310 = (iVar14 + 1) % 5;
                  if (local_268.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_268.Points.AllocatorInstance.Data);
                  }
                  if (local_268.Description.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_268.Description.Data.AllocatorInstance.Data);
                  }
                  uVar30 = (undefined4)__real_3ff0000000000000;
                  uVar31 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                  this_01 = local_300;
                }
              }
            }
            uVar29 = uVar29 + 1;
            local_2f8 = local_2f8 + 1;
            local_2c8 = local_2c8 + 8;
          } while ((int)uVar29 < (this->PathCorridor).ArrayNum);
        }
        (**(code **)(this_01->_padding_ + 0x850))(this_01);
        if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.AllocatorInstance.Data);
        }
      }
    }
    if (local_1a8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Points.AllocatorInstance.Data);
    }
    if (local_1a8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Description.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DoesIntersectBox @ 146dee4d0

bool __thiscall
FNavMeshPath::DoesIntersectBox
          (FNavMeshPath *this,TBox<double> *param_1,TVector<double> *param_2,uint param_3,
          int *param_4,TVector<double> *param_5)

{
  bool bVar1;
  
  if (this->bStringPulled != 0) {
    bVar1 = FNavigationPath::DoesIntersectBox
                      ((FNavigationPath *)this,param_1,param_2,param_3,param_4,param_5);
    return bVar1;
  }
  bVar1 = DoesPathIntersectBoxImplementation(this,param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// DoesIntersectBox @ 146dee510

bool __thiscall
FNavMeshPath::DoesIntersectBox
          (FNavMeshPath *this,TBox<double> *param_1,uint param_2,int *param_3,
          TVector<double> *param_4)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  TVector<double>_u_0 local_58;
  
  if (this->bStringPulled != 0) {
    bVar6 = FNavigationPath::DoesIntersectBox
                      ((FNavigationPath *)this,param_1,param_2,param_3,(TVector<double> *)0x0);
    return bVar6;
  }
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pdVar1 = (double *)this->_padding_;
  local_58._s_0.X = *pdVar1;
  local_58._s_0.Y = pdVar1[1];
  local_58._s_0.Z = pdVar1[2];
  if (this->bCorridorEdgesGenerated == 0) {
    pTVar10 = GeneratePathCorridorEdges(this);
  }
  else {
    pTVar10 = &this->PathCorridorEdges;
  }
  uVar9 = pTVar10->ArrayNum;
  if (param_2 < uVar9) {
    uVar12 = ~param_2 >> 0x1f;
    uVar8 = 0;
    if ((int)param_2 < (int)uVar9) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar2 = (pTVar10->AllocatorInstance).Data;
    lVar11 = (longlong)(int)param_2 * 0x38;
    uVar9 = 0;
    if ((int)param_2 < pTVar10->ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar3 = (pTVar10->AllocatorInstance).Data;
    uVar9 = 0;
    if ((int)param_2 < pTVar10->ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    param_2 = param_2 + 1;
    pFVar4 = (pTVar10->AllocatorInstance).Data;
    local_58._s_0.X =
         (*(double *)(pFVar3 + lVar11) - *(double *)(pFVar4 + lVar11 + 0x18)) *
         __real_3fe0000000000000 + *(double *)(pFVar2 + lVar11 + 0x18);
    local_58._s_0.Z =
         (*(double *)(pFVar3 + lVar11 + 0x10) - *(double *)(pFVar4 + lVar11 + 0x28)) *
         __real_3fe0000000000000 + *(double *)(pFVar2 + lVar11 + 0x28);
    local_58._s_0.Y =
         (*(double *)(pFVar3 + lVar11 + 8) - *(double *)(pFVar4 + lVar11 + 0x20)) *
         __real_3fe0000000000000 + *(double *)(pFVar2 + lVar11 + 0x20);
  }
  else if (uVar9 < param_2) {
    return false;
  }
  bVar6 = DoesPathIntersectBoxImplementation
                    (this,param_1,(TVector<double> *)&local_58._s_0,param_2,param_3,param_4);
  if (!bVar6) {
    return false;
  }
  return true;
}

// DoesPathIntersectBoxImplementation @ 146dee8b0

bool __thiscall
FNavMeshPath::DoesPathIntersectBoxImplementation
          (FNavMeshPath *this,TBox<double> *param_1,TVector<double> *param_2,uint param_3,
          int *param_4,TVector<double> *param_5)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float local_res8 [2];
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  float local_2a0;
  float local_29c;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  TVector<double> local_160;
  TVector<double> local_148;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double> local_e8 [8];
  
  uVar14 = (ulonglong)(int)param_3;
  if (this->bCorridorEdgesGenerated == 0) {
    pTVar10 = GeneratePathCorridorEdges(this);
  }
  else {
    pTVar10 = &this->PathCorridorEdges;
  }
  dVar25 = __real_3fe0000000000000;
  uVar16 = pTVar10->ArrayNum;
  if ((uVar16 == 0) || (uVar16 < param_3)) {
    return false;
  }
  local_318._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_318._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_318._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if (((int)param_3 < 0) || (pTVar10->ArrayNum <= (int)param_3)) {
    if (param_3 == uVar16) {
      iVar9 = (int)this->_padding_;
      uVar15 = iVar9 - 1;
      uVar16 = 0;
      if ((int)uVar15 < iVar9) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      lVar11 = (longlong)(int)this->_padding_;
      lVar12 = this->_padding_;
      if (param_5 == (TVector<double> *)0x0) {
        local_178._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_178._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_178._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_178._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        dVar25 = local_178._8_8_;
        local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_280._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        local_180 = (param_5->field0_0x0)._s_0.Z;
        local_190 = 0;
        uStack_188 = 0;
        dVar25 = 0.0;
        uVar19 = 0;
        uVar21 = 0;
        local_280._s_0.Z = local_180;
      }
      local_280._s_0.Y = dVar25 + *(double *)(lVar12 + -0x28 + lVar11 * 0x30);
      local_280._s_0.X =
           (double)CONCAT44(uVar21,uVar19) + *(double *)(lVar12 + -0x30 + lVar11 * 0x30);
      local_280._s_0.Z = local_280._s_0.Z + *(double *)(lVar12 + -0x20 + lVar11 * 0x30);
      dVar22 = local_280._s_0.Y - local_318._s_0.Y;
      dVar25 = local_280._s_0.X - local_318._s_0.X;
      dVar23 = local_280._s_0.Z - local_318._s_0.Z;
      if (__real_3e45798ee0000000 < dVar22 * dVar22 + dVar25 * dVar25 + dVar23 * dVar23) {
        local_238._s_0.X = dVar25;
        local_238._s_0.Y = dVar22;
        local_238._s_0.Z = dVar23;
        if (param_5 == (TVector<double> *)0x0) {
          if (dVar25 == 0.0) {
            local_2b8._s_0.X = __real_47eff933c0000000;
          }
          else {
            local_2b8._s_0.X = __real_3ff0000000000000 / dVar25;
          }
          if (dVar22 == 0.0) {
            local_2b8._s_0.Y = __real_47eff933c0000000;
          }
          else {
            local_2b8._s_0.Y = __real_3ff0000000000000 / dVar22;
          }
          if (dVar23 == 0.0) {
            local_2b8._s_0.Z = __real_47eff933c0000000;
          }
          else {
            local_2b8._s_0.Z = __real_3ff0000000000000 / dVar23;
          }
          bVar7 = FMath::LineBoxIntersection<double>
                            (param_1,(TVector<double> *)&local_318._s_0,
                             (TVector<double> *)&local_280._s_0,(TVector<double> *)&local_238._s_0,
                             (TVector<double> *)&local_2b8._s_0);
          if (bVar7) goto LAB_146def279;
        }
        else {
          bVar7 = FMath::LineExtentBoxIntersection
                            (param_1,(TVector<double> *)&local_318._s_0,
                             (TVector<double> *)&local_280._s_0,param_5,local_e8,&local_100,
                             &local_29c);
          if (bVar7) {
LAB_146def279:
            if (param_4 != (int *)0x0) {
              *param_4 = pTVar10->ArrayNum;
              return true;
            }
            return true;
          }
        }
      }
    }
  }
  else {
    iVar9 = param_3 - 1;
    if ((iVar9 < 0) || (pTVar10->ArrayNum <= iVar9)) {
      uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      dVar23 = __real_3ff0000000000000;
      dVar22 = __real_3e45798ee0000000;
      dVar24 = __real_47eff933c0000000;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar2 = (pTVar10->AllocatorInstance).Data;
      uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      dVar23 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      lVar12 = uVar14 * 0x38;
      if (param_5 == (TVector<double> *)0x0) {
        local_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_204 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uStack_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uStack_1fc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_318._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        local_210 = (param_5->field0_0x0)._s_0.Z;
        dVar23 = 0.0;
        local_220 = 0;
        uStack_218 = 0;
        uVar17 = 0;
        uVar29 = 0;
        local_318._s_0.Z = local_210;
      }
      local_318._s_0.X =
           dVar23 + (*(double *)(pFVar2 + lVar12 + -0x38) - *(double *)(pFVar2 + lVar12 + -0x20)) *
                    dVar25 + *(double *)(pFVar2 + lVar12 + -0x20);
      local_318._s_0.Y =
           (double)CONCAT44(uVar29,uVar17) +
           (*(double *)(pFVar2 + lVar12 + -0x30) - *(double *)(pFVar2 + lVar12 + -0x18)) * dVar25 +
           *(double *)(pFVar2 + lVar12 + -0x18);
      local_318._s_0.Z =
           (*(double *)(pFVar2 + lVar12 + -0x28) - *(double *)(pFVar2 + lVar12 + -0x10)) * dVar25 +
           *(double *)(pFVar2 + lVar12 + -0x10) + local_318._s_0.Z;
      dVar23 = __real_3ff0000000000000;
      dVar22 = __real_3e45798ee0000000;
      dVar24 = __real_47eff933c0000000;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    while (dVar6 = __real_47eff933c0000000, dVar5 = __real_3e45798ee0000000,
          dVar4 = __real_3ff0000000000000, __real_3ff0000000000000 = dVar23,
          __real_3e45798ee0000000 = dVar22, __real_47eff933c0000000 = dVar24, param_3 < uVar16) {
      uVar13 = (uint)uVar14;
      uVar15 = 0;
      if ((int)uVar13 < pTVar10->ArrayNum) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar21 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      }
      lVar12 = (longlong)(int)uVar13 * 0x38;
      pFVar2 = (pTVar10->AllocatorInstance).Data;
      if (param_5 == (TVector<double> *)0x0) {
        dVar23 = (double)CONCAT44(uVar21,uVar19);
        dVar22 = (double)CONCAT44(uVar30,uVar29);
        uVar18 = uVar26;
        uVar20 = uVar28;
        local_1d8 = uVar17;
        uStack_1d4 = uVar27;
        uStack_1d0 = uVar26;
        uStack_1cc = uVar28;
        local_1c8 = dVar23;
      }
      else {
        dVar23 = (param_5->field0_0x0)._s_0.Z;
        dVar22 = 0.0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        uVar18 = 0;
        uVar20 = 0;
        local_1e0 = dVar23;
      }
      local_2e8._s_0.Z =
           dVar23 + (*(double *)(pFVar2 + lVar12 + 0x10) - *(double *)(pFVar2 + lVar12 + 0x28)) *
                    dVar25 + *(double *)(pFVar2 + lVar12 + 0x28);
      local_2e8._s_0.X =
           dVar22 + (*(double *)(pFVar2 + lVar12) - *(double *)(pFVar2 + lVar12 + 0x18)) * dVar25 +
                    *(double *)(pFVar2 + lVar12 + 0x18);
      local_2e8._s_0.Y =
           (double)CONCAT44(uVar20,uVar18) +
           (*(double *)(pFVar2 + lVar12 + 8) - *(double *)(pFVar2 + lVar12 + 0x20)) * dVar25 +
           *(double *)(pFVar2 + lVar12 + 0x20);
      dVar22 = local_2e8._s_0.Z - local_318._s_0.Z;
      dVar24 = local_2e8._s_0.X - local_318._s_0.X;
      dVar23 = local_2e8._s_0.Y - local_318._s_0.Y;
      if (dVar5 < dVar23 * dVar23 + dVar24 * dVar24 + dVar22 * dVar22) {
        local_268._s_0.X = dVar24;
        local_268._s_0.Y = dVar23;
        local_268._s_0.Z = dVar22;
        if (param_5 == (TVector<double> *)0x0) {
          if (dVar24 == 0.0) {
            local_300._s_0.X = dVar6;
          }
          else {
            local_300._s_0.X = dVar4 / dVar24;
          }
          if (dVar23 == 0.0) {
            local_300._s_0.Y = dVar6;
          }
          else {
            local_300._s_0.Y = dVar4 / dVar23;
          }
          if (dVar22 == 0.0) {
            local_300._s_0.Z = dVar6;
          }
          else {
            local_300._s_0.Z = dVar4 / dVar22;
          }
          bVar7 = FMath::LineBoxIntersection<double>
                            (param_1,(TVector<double> *)&local_318._s_0,
                             (TVector<double> *)&local_2e8._s_0,(TVector<double> *)&local_268._s_0,
                             (TVector<double> *)&local_300._s_0);
          if (bVar7) goto LAB_146deee38;
        }
        else {
          bVar7 = FMath::LineExtentBoxIntersection
                            (param_1,(TVector<double> *)&local_318._s_0,
                             (TVector<double> *)&local_2e8._s_0,param_5,&local_148,&local_160,
                             local_res8);
          if (bVar7) {
LAB_146deee38:
            if (param_4 == (int *)0x0) {
              return true;
            }
            *param_4 = uVar13;
            return true;
          }
          uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar21 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        }
      }
      param_3 = uVar13 + 1;
      uVar14 = (ulonglong)param_3;
      dVar23 = __real_3ff0000000000000;
      dVar22 = __real_3e45798ee0000000;
      dVar24 = __real_47eff933c0000000;
      local_318._s_0.X = local_2e8._s_0.X;
      local_318._s_0.Y = local_2e8._s_0.Y;
      local_318._s_0.Z = local_2e8._s_0.Z;
      __real_47eff933c0000000 = dVar6;
      __real_3e45798ee0000000 = dVar5;
      __real_3ff0000000000000 = dVar4;
    }
    if ((int)this->_padding_ < 2) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8653150630786892427>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\NavMeshPath.cpp"
                         ,0x28b,"PathPoints.Num() >= 2");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    }
    iVar9 = (int)this->_padding_;
    uVar13 = iVar9 - 1;
    uVar15 = 0;
    if ((int)uVar13 < iVar9) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    }
    lVar11 = (longlong)(int)this->_padding_;
    lVar12 = this->_padding_;
    if (param_5 == (TVector<double> *)0x0) {
      local_198 = CONCAT44(uVar21,uVar19);
      local_1a8 = uVar17;
      uStack_1a4 = uVar27;
      uStack_1a0 = uVar26;
      uStack_19c = uVar28;
    }
    else {
      local_1b0 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 0x10);
      uVar19 = (undefined4)local_1b0;
      uVar21 = (undefined4)((ulonglong)local_1b0 >> 0x20);
      uVar29 = 0;
      uVar30 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      uVar26 = 0;
      uVar28 = 0;
    }
    local_298._s_0.Y = (double)CONCAT44(uVar28,uVar26) + *(double *)(lVar12 + -0x28 + lVar11 * 0x30)
    ;
    local_298._s_0.X = (double)CONCAT44(uVar30,uVar29) + *(double *)(lVar12 + -0x30 + lVar11 * 0x30)
    ;
    local_298._s_0.Z = (double)CONCAT44(uVar21,uVar19) + *(double *)(lVar12 + -0x20 + lVar11 * 0x30)
    ;
    dVar23 = local_298._s_0.Y - local_318._s_0.Y;
    dVar22 = local_298._s_0.X - local_318._s_0.X;
    dVar25 = local_298._s_0.Z - local_318._s_0.Z;
    if (dVar5 < dVar23 * dVar23 + dVar22 * dVar22 + dVar25 * dVar25) {
      local_250._s_0.X = dVar22;
      local_250._s_0.Y = dVar23;
      local_250._s_0.Z = dVar25;
      if (param_5 == (TVector<double> *)0x0) {
        if (dVar22 == 0.0) {
          local_2d0._s_0.X = dVar6;
        }
        else {
          local_2d0._s_0.X = dVar4 / dVar22;
        }
        if (dVar23 == 0.0) {
          local_2d0._s_0.Y = dVar6;
        }
        else {
          local_2d0._s_0.Y = dVar4 / dVar23;
        }
        if (dVar25 == 0.0) {
          local_2d0._s_0.Z = dVar6;
        }
        else {
          local_2d0._s_0.Z = dVar4 / dVar25;
        }
        bVar7 = FMath::LineBoxIntersection<double>
                          (param_1,(TVector<double> *)&local_318._s_0,
                           (TVector<double> *)&local_298._s_0,(TVector<double> *)&local_250._s_0,
                           (TVector<double> *)&local_2d0._s_0);
      }
      else {
        bVar7 = FMath::LineExtentBoxIntersection
                          (param_1,(TVector<double> *)&local_318._s_0,
                           (TVector<double> *)&local_298._s_0,param_5,&local_118,&local_130,
                           &local_2a0);
      }
      if (bVar7) {
        if (param_4 == (int *)0x0) {
          return true;
        }
        *param_4 = uVar16;
        return true;
      }
    }
  }
  iVar9 = (int)this->_padding_;
  uVar15 = iVar9 - 1;
  uVar16 = 0;
  if ((int)uVar15 < iVar9) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  lVar11 = (longlong)(int)this->_padding_;
  lVar12 = this->_padding_;
  dVar25 = *(double *)(lVar12 + -0x30 + lVar11 * 0x30);
  if ((((dVar25 < (param_1->Min).field0_0x0._s_0.X || dVar25 == (param_1->Min).field0_0x0._s_0.X) ||
       ((param_1->Max).field0_0x0._s_0.X <= dVar25)) ||
      (dVar25 = *(double *)(lVar12 + -0x28 + lVar11 * 0x30),
      pdVar1 = &(param_1->Min).field0_0x0._s_0.Y, dVar25 < *pdVar1 || dVar25 == *pdVar1)) ||
     ((((param_1->Max).field0_0x0._s_0.Y <= dVar25 ||
       (dVar25 = *(double *)(lVar12 + -0x20 + lVar11 * 0x30),
       pdVar1 = &(param_1->Min).field0_0x0._s_0.Z, dVar25 < *pdVar1 || dVar25 == *pdVar1)) ||
      ((param_1->Max).field0_0x0._s_0.Z <= dVar25)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    if (param_4 != (int *)0x0) {
      *param_4 = pTVar10->ArrayNum;
    }
  }
  return bVar7;
}

// GeneratePathCorridorEdges @ 146dffce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> * __thiscall
FNavMeshPath::GeneratePathCorridorEdges(FNavMeshPath *this)

{
  int iVar1;
  FPImplRecastNavMesh *this_00;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar6;
  dtNavMeshQuery *this_01;
  undefined1 auStack_e8 [32];
  dtNavMeshQuery local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (((((this->PathCorridor).ArrayNum != 0) && (bVar3 = IsInGameThread(), bVar3)) &&
      (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4)), bVar3))
     && (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4)),
        pUVar4 != (UObject *)0x0)) {
    pUVar5 = ARecastNavMesh::GetPrivateStaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      if (((&this->PathCorridor == (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) ||
          (&this->PathCorridorEdges ==
           (TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *)0x0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PathCorridor != 0 && PathCorridorEdges != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                             ,0x6e2,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      this_00 = *(FPImplRecastNavMesh **)&pUVar4[0x2f].field_0x8;
      if ((this_00 != (FPImplRecastNavMesh *)0x0) && (this_00->DetourNavMesh != (dtNavMesh *)0x0)) {
        dtNavMeshQuery::dtNavMeshQuery(&local_c8);
        bVar3 = IsInGameThread();
        this_01 = &this_00->SharedNavQuery;
        if (!bVar3) {
          this_01 = &local_c8;
        }
        dtNavMeshQuery::init(this_01,this_00->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
        FPImplRecastNavMesh::GetEdgesForPathCorridorImpl
                  (this_00,&this->PathCorridor,&this->PathCorridorEdges,this_01);
        dtNavMeshQuery::~dtNavMeshQuery(&local_c8);
      }
      this->bCorridorEdgesGenerated = 0;
      *(uint *)&this->field_0x180 =
           *(uint *)&this->field_0x180 | (uint)(0 < (this->PathCorridorEdges).ArrayNum);
    }
  }
  return &this->PathCorridorEdges;
}

// GetCostFromIndex @ 146e012f0

double __thiscall FNavMeshPath::GetCostFromIndex(FNavMeshPath *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar2 = (this->PathCorridorCost).ArrayNum;
  dVar10 = 0.0;
  dVar11 = 0.0;
  pFVar7 = (this->PathCorridorCost).AllocatorInstance.Data;
  if (iVar2 <= param_1) {
    return 0.0;
  }
  if (3 < (uint)(iVar2 - param_1)) {
    uVar4 = iVar2 - param_1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    dVar8 = 0.0;
    dVar9 = 0.0;
    do {
      param_1 = param_1 + 4;
      dVar8 = dVar8 + *(double *)pFVar7;
      dVar9 = dVar9 + *(double *)(pFVar7 + 8);
      pFVar1 = pFVar7 + 0x10;
      pFVar3 = pFVar7 + 0x18;
      pFVar7 = pFVar7 + 0x20;
      dVar10 = dVar10 + *(double *)pFVar1;
      dVar11 = dVar11 + *(double *)pFVar3;
    } while (param_1 < (int)(iVar2 - uVar4));
    dVar10 = dVar10 + dVar8 + dVar11 + dVar9;
    if (iVar2 <= param_1) {
      return dVar10;
    }
  }
  if (3 < iVar2 - param_1) {
    uVar4 = ((iVar2 - param_1) - 4U >> 2) + 1;
    uVar6 = (ulonglong)uVar4;
    param_1 = param_1 + uVar4 * 4;
    do {
      dVar10 = dVar10 + *(double *)pFVar7 + *(double *)(pFVar7 + 8) + *(double *)(pFVar7 + 0x10) +
               *(double *)(pFVar7 + 0x18);
      pFVar7 = pFVar7 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (iVar2 <= param_1) {
      return dVar10;
    }
  }
  lVar5 = (longlong)(iVar2 - param_1);
  do {
    dVar10 = dVar10 + *(double *)pFVar7;
    pFVar7 = pFVar7 + 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return dVar10;
}

// GetCostFromNode @ 146e013d0

double __thiscall FNavMeshPath::GetCostFromNode(FNavMeshPath *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  FScriptContainerElement *pFVar2;
  double dVar3;
  
  pFVar1 = (this->PathCorridor).AllocatorInstance.Data;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(this->_padding_ + 0x48);
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->PathCorridor).ArrayNum * 8) {
                    /* WARNING: Could not recover jumptable at 0x000146e01409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      dVar3 = (double)(*UNRECOVERED_JUMPTABLE_00)(this,0);
      return dVar3;
    }
    if (*(ulong64 *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
                    /* WARNING: Could not recover jumptable at 0x000146e01415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar3 = (double)(*UNRECOVERED_JUMPTABLE_00)
                            (this,(int)((longlong)pFVar2 - (longlong)pFVar1 >> 3) + 1);
  return dVar3;
}

// GetDescription @ 146e02510

FString * __thiscall
FNavMeshPath::GetDescription(FNavMeshPath *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,L"NotifyPathUpdate points:%d corridor length %d valid:%s");
  return __return_storage_ptr__;
}

// GetNodeFlags @ 146e0a9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FNavMeshPath::GetNodeFlags(FNavMeshPath *this,int param_1,FNavMeshNodeFlags *param_2)

{
  ushort uVar1;
  int iVar2;
  dtNavMesh *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  ANavigationData *this_01;
  UClass *pUVar8;
  UNavArea *pUVar9;
  byte bVar10;
  bool bVar11;
  dtPoly *local_res20;
  dtMeshTile *local_28 [2];
  
  bVar11 = false;
  bVar4 = false;
  if (this->bStringPulled == 0) {
    if (((-1 < param_1) && (param_1 < (this->PathCorridor).ArrayNum)) &&
       (this_01 = (ANavigationData *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4)),
       bVar4 = bVar11, this_01 != (ANavigationData *)0x0)) {
      pUVar8 = ARecastNavMesh::GetPrivateStaticClass();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar8->_padding_)) {
        if (((this->PathCorridor).ArrayNum <= param_1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (((this_01[1]._padding_ != 0) &&
            (this_00 = *(dtNavMesh **)(this_01[1]._padding_ + 8), this_00 != (dtNavMesh *)0x0)) &&
           (uVar7 = dtNavMesh::getTileAndPolyByRef
                              (this_00,*(ulong64 *)
                                        ((this->PathCorridor).AllocatorInstance.Data +
                                        (longlong)param_1 * 8),local_28,&local_res20),
           (uVar7 >> 0x1e & 1) != 0)) {
          uVar1 = local_res20->flags;
          bVar10 = local_res20->areaAndtype & 0x3f;
          param_2->Area = bVar10;
          pUVar8 = ANavigationData::GetAreaClass(this_01,(uint)bVar10);
          if ((pUVar8 == (UClass *)0x0) ||
             (pUVar9 = UClass::GetDefaultObject<UNavArea>(pUVar8), pUVar9 == (UNavArea *)0x0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = pUVar9->AreaFlags;
          }
          param_2->AreaFlags = uVar6;
          param_2->PathFlags = -((uVar1 & ARecastNavMesh::NavLinkFlag) != 0) & 4;
        }
        bVar4 = true;
      }
    }
  }
  else if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    if (((int)this->_padding_ <= param_1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *param_2 = *(FNavMeshNodeFlags *)(this->_padding_ + 0x20 + (longlong)param_1 * 0x30);
    return true;
  }
  return bVar4;
}

// GetPathCorridorLength @ 146e0abe0

double __thiscall FNavMeshPath::GetPathCorridorLength(FNavMeshPath *this,int param_1)

{
  int iVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  bool bVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  double *pdVar23;
  ulonglong uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM1 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar36 [16];
  double local_res8;
  
  auVar26._0_8_ = __real_3fe0000000000000;
  if (this->bCorridorEdgesGenerated == 0) {
    return 0.0;
  }
  iVar20 = (this->PathCorridorEdges).ArrayNum;
  if (param_1 < iVar20) {
    pFVar3 = (this->PathCorridorEdges).AllocatorInstance.Data;
    lVar19 = (longlong)param_1 * 0x38;
    pFVar21 = pFVar3 + lVar19 + 0x38;
    uVar34 = SUB84(__real_3fe0000000000000,0);
    uVar35 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    dVar7 = (*(double *)(pFVar3 + lVar19 + 0x18) - *(double *)(pFVar3 + lVar19)) *
            __real_3fe0000000000000 + *(double *)(pFVar3 + lVar19);
    dVar16 = (*(double *)(pFVar3 + lVar19 + 0x20) - *(double *)(pFVar3 + lVar19 + 8)) *
             __real_3fe0000000000000 + *(double *)(pFVar3 + lVar19 + 8);
    auVar27._0_8_ =
         (*(double *)(pFVar3 + lVar19 + 0x28) - *(double *)(pFVar3 + lVar19 + 0x10)) *
         __real_3fe0000000000000 + *(double *)(pFVar3 + lVar19 + 0x10);
    if (param_1 == 0) {
      if (((int)this->_padding_ < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        auVar26._0_8_ = (double)(*pcVar4)();
        return auVar26._0_8_;
      }
      pdVar23 = (double *)this->_padding_;
      dVar25 = auVar27._0_8_ - pdVar23[2];
      in_XMM1._0_8_ = (dVar7 - *pdVar23) * (dVar7 - *pdVar23);
      in_XMM1._8_8_ = 0;
      auVar26._0_8_ = (dVar16 - pdVar23[1]) * (dVar16 - pdVar23[1]) + in_XMM1._0_8_;
    }
    else {
      uVar22 = param_1 - 1;
      uVar18 = 0;
      if ((int)uVar22 < iVar20) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        auVar26._0_8_ = (double)(*pcVar4)();
        return auVar26._0_8_;
      }
      lVar19 = (longlong)(int)uVar22 * 0x38;
      pFVar3 = (this->PathCorridorEdges).AllocatorInstance.Data;
      dVar33 = ((*(double *)(pFVar3 + lVar19 + 0x18) - *(double *)(pFVar3 + lVar19)) * auVar26._0_8_
               + *(double *)(pFVar3 + lVar19)) - dVar7;
      dVar6 = ((*(double *)(pFVar3 + lVar19 + 0x20) - *(double *)(pFVar3 + lVar19 + 8)) *
               auVar26._0_8_ + *(double *)(pFVar3 + lVar19 + 8)) - dVar16;
      dVar25 = ((*(double *)(pFVar3 + lVar19 + 0x28) - *(double *)(pFVar3 + lVar19 + 0x10)) *
                auVar26._0_8_ + *(double *)(pFVar3 + lVar19 + 0x10)) - auVar27._0_8_;
      auVar26._0_8_ = dVar6 * dVar6 + dVar33 * dVar33;
    }
    iVar1 = (this->PathCorridorEdges).ArrayNum;
    iVar20 = param_1 + 1;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = auVar26._0_8_ + dVar25 * dVar25;
    auVar26 = sqrtpd(unaff_XMM9,auVar30);
    if (iVar20 < iVar1) {
      if (3 < iVar1 - iVar20) {
        uVar18 = ((iVar1 - iVar20) - 4U >> 2) + 1;
        uVar24 = (ulonglong)uVar18;
        iVar20 = iVar20 + uVar18 * 4;
        local_res8 = auVar26._0_8_;
        do {
          auVar26._0_8_ = *(double *)(pFVar21 + 0xb0);
          in_XMM1._8_8_ = 0;
          in_XMM1._0_8_ = auVar26._0_8_;
          dVar13 = (*(double *)(pFVar21 + 0x20) - *(double *)(pFVar21 + 8)) *
                   (double)CONCAT44(uVar35,uVar34) + *(double *)(pFVar21 + 8);
          dVar14 = (*(double *)(pFVar21 + 0x18) - *(double *)pFVar21) *
                   (double)CONCAT44(uVar35,uVar34) + *(double *)pFVar21;
          dVar11 = (*(double *)(pFVar21 + 0x28) - *(double *)(pFVar21 + 0x10)) *
                   (double)CONCAT44(uVar35,uVar34) + *(double *)(pFVar21 + 0x10);
          dVar16 = dVar16 - dVar13;
          dVar10 = (*(double *)(pFVar21 + 0x50) - *(double *)(pFVar21 + 0x38)) *
                   (double)CONCAT44(uVar35,uVar34) + *(double *)(pFVar21 + 0x38);
          dVar25 = dVar7 - dVar14;
          auVar27._0_8_ = auVar27._0_8_ - dVar11;
          dVar14 = dVar14 - dVar10;
          dVar9 = (*(double *)(pFVar21 + 0x58) - *(double *)(pFVar21 + 0x40)) *
                  __real_3fe0000000000000 + *(double *)(pFVar21 + 0x40);
          dVar32 = (*(double *)(pFVar21 + 0x88) - *(double *)(pFVar21 + 0x70)) *
                   __real_3fe0000000000000 + *(double *)(pFVar21 + 0x70);
          dVar6 = (*(double *)(pFVar21 + 0x90) - *(double *)(pFVar21 + 0x78)) *
                  __real_3fe0000000000000 + *(double *)(pFVar21 + 0x78);
          dVar13 = dVar13 - dVar9;
          dVar10 = dVar10 - dVar32;
          dVar9 = dVar9 - dVar6;
          dVar31 = (*(double *)(pFVar21 + 0x98) - *(double *)(pFVar21 + 0x80)) *
                   __real_3fe0000000000000 + *(double *)(pFVar21 + 0x80);
          dVar33 = (*(double *)(pFVar21 + 0x60) - *(double *)(pFVar21 + 0x48)) *
                   __real_3fe0000000000000 + *(double *)(pFVar21 + 0x48);
          dVar11 = dVar11 - dVar33;
          dVar33 = dVar33 - dVar31;
          dVar7 = (*(double *)(pFVar21 + 0xc0) - *(double *)(pFVar21 + 0xa8)) *
                  __real_3fe0000000000000 + *(double *)(pFVar21 + 0xa8);
          auVar36._0_8_ = dVar16 * dVar16 + dVar25 * dVar25 + auVar27._0_8_ * auVar27._0_8_;
          auVar36._8_8_ = 0;
          dVar32 = dVar32 - dVar7;
          auVar36 = sqrtpd(auVar36,auVar36);
          auVar26._8_8_ = auVar36._8_8_;
          auVar27._0_8_ =
               (*(double *)(pFVar21 + 0xd0) - *(double *)(pFVar21 + 0xb8)) * __real_3fe0000000000000
               + *(double *)(pFVar21 + 0xb8);
          auVar27._8_8_ = 0;
          dVar16 = (*(double *)(pFVar21 + 200) - auVar26._0_8_) * __real_3fe0000000000000 +
                   auVar26._0_8_;
          dVar31 = dVar31 - auVar27._0_8_;
          dVar6 = dVar6 - dVar16;
          pFVar21 = pFVar21 + 0xe0;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = dVar13 * dVar13 + dVar14 * dVar14 + dVar11 * dVar11;
          auVar28 = sqrtpd(auVar27,auVar12);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = dVar9 * dVar9 + dVar10 * dVar10 + dVar33 * dVar33;
          auVar29 = sqrtpd(auVar28,auVar8);
          uVar34 = SUB84(__real_3fe0000000000000,0);
          uVar35 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = dVar6 * dVar6 + dVar32 * dVar32 + dVar31 * dVar31;
          auVar30 = sqrtpd(auVar29,auVar5);
          auVar26._0_8_ = auVar36._0_8_ + local_res8 + auVar28._0_8_ + auVar29._0_8_ + auVar30._0_8_
          ;
          uVar24 = uVar24 - 1;
          local_res8 = auVar26._0_8_;
        } while (uVar24 != 0);
        if (iVar1 <= iVar20) {
          return auVar26._0_8_;
        }
      }
      pFVar21 = pFVar21 + 8;
      lVar19 = (longlong)(iVar1 - iVar20);
      do {
        dVar33 = (*(double *)(pFVar21 + 0x10) - *(double *)(pFVar21 + -8)) *
                 (double)CONCAT44(uVar35,uVar34) + *(double *)(pFVar21 + -8);
        dVar25 = (*(double *)(pFVar21 + 0x18) - *(double *)pFVar21) *
                 (double)CONCAT44(uVar35,uVar34) + *(double *)pFVar21;
        dVar6 = (*(double *)(pFVar21 + 0x20) - *(double *)(pFVar21 + 8)) *
                (double)CONCAT44(uVar35,uVar34) + *(double *)(pFVar21 + 8);
        pFVar21 = pFVar21 + 0x38;
        dVar7 = dVar7 - dVar33;
        dVar16 = dVar16 - dVar25;
        auVar27._0_8_ = auVar27._0_8_ - dVar6;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = dVar16 * dVar16 + dVar7 * dVar7 + auVar27._0_8_ * auVar27._0_8_;
        in_XMM1 = sqrtpd(in_XMM1,auVar15);
        auVar26._0_8_ = auVar26._0_8_ + in_XMM1._0_8_;
        lVar19 = lVar19 + -1;
        dVar7 = dVar33;
        auVar27._0_8_ = dVar6;
        dVar16 = dVar25;
      } while (lVar19 != 0);
    }
    return auVar26._0_8_;
  }
  if ((param_1 != 0) || (iVar20 = (int)this->_padding_, iVar20 < 2)) {
    return 0.0;
  }
  uVar22 = iVar20 - 1;
  uVar18 = 0;
  if ((int)uVar22 < iVar20) {
    uVar18 = ~uVar22 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    auVar26._0_8_ = (double)(*pcVar4)();
    return auVar26._0_8_;
  }
  pdVar23 = (double *)((longlong)(int)uVar22 * 0x30 + this->_padding_);
  if (((int)this->_padding_ < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    auVar26._0_8_ = (double)(*pcVar4)();
    return auVar26._0_8_;
  }
  pdVar2 = (double *)this->_padding_;
  auVar29._0_8_ = (pdVar23[2] - pdVar2[2]) * (pdVar23[2] - pdVar2[2]);
  auVar29._8_8_ = 0;
  auVar28._8_8_ = 0;
  auVar28._0_8_ =
       (pdVar23[1] - pdVar2[1]) * (pdVar23[1] - pdVar2[1]) +
       (*pdVar23 - *pdVar2) * (*pdVar23 - *pdVar2) + auVar29._0_8_;
  auVar26 = sqrtpd(auVar29,auVar28);
  return auVar26._0_8_;
}

// GetSegmentDirection @ 146e0fd60

TVector<double> * __thiscall
FNavMeshPath::GetSegmentDirection
          (FNavMeshPath *this,TVector<double> *__return_storage_ptr__,uint param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  double *pdVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar13;
  TVector<double> *pTVar14;
  uint uVar15;
  longlong lVar16;
  TVector<double>_u_0 *this_00;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double> local_90;
  TVector<double> local_78;
  TVector<double> local_60 [3];
  
  uVar22 = FNavigationSystem::InvalidLocation.field0_0x0._12_4_;
  uVar21 = FNavigationSystem::InvalidLocation.field0_0x0._8_4_;
  uVar20 = FNavigationSystem::InvalidLocation.field0_0x0._4_4_;
  uVar19 = FNavigationSystem::InvalidLocation.field0_0x0._0_4_;
  if (this->bStringPulled != 0) {
    FNavigationPath::GetSegmentDirection((FNavigationPath *)this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  uVar23 = SUB84(FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z,0);
  uVar24 = (undefined4)((ulonglong)FNavigationSystem::InvalidLocation.field0_0x0._16_8_ >> 0x20);
  if (this->bCorridorEdgesGenerated == 0) {
    pTVar13 = GeneratePathCorridorEdges(this);
  }
  else {
    pTVar13 = &this->PathCorridorEdges;
  }
  uVar18 = pTVar13->ArrayNum;
  if (((int)uVar18 < 1) || ((int)this->_padding_ < 2)) goto LAB_146e10190;
  if (((int)param_1 < 0) || ((int)uVar18 <= (int)param_1)) {
    if (param_1 < uVar18) goto LAB_146e10190;
    uVar17 = uVar18 - 1;
    uVar15 = 0;
    if ((int)uVar17 < (int)uVar18) {
      uVar15 = ~uVar17 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar7)();
      return pTVar14;
    }
    lVar16 = (longlong)(int)uVar17 * 0x38;
    pFVar5 = (pTVar13->AllocatorInstance).Data;
    dVar8 = (*(double *)(pFVar5 + lVar16 + 0x18) - *(double *)(pFVar5 + lVar16)) *
            __real_3fe0000000000000;
    dVar9 = (*(double *)(pFVar5 + lVar16 + 0x20) - *(double *)(pFVar5 + lVar16 + 8)) *
            __real_3fe0000000000000;
    dVar10 = (*(double *)(pFVar5 + lVar16 + 0x28) - *(double *)(pFVar5 + lVar16 + 0x10)) *
             __real_3fe0000000000000;
    dVar1 = *(double *)(pFVar5 + lVar16);
    dVar2 = *(double *)(pFVar5 + lVar16 + 8);
    dVar3 = *(double *)(pFVar5 + lVar16 + 0x10);
    if (((int)this->_padding_ < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar7)();
      return pTVar14;
    }
    pdVar6 = (double *)this->_padding_;
    pTVar14 = local_60;
    this_00 = &local_a8;
    local_a8._s_0.X = (dVar8 + dVar1) - *pdVar6;
    local_a8._s_0.Y = (dVar9 + dVar2) - pdVar6[1];
    local_a8._s_0.Z = (dVar10 + dVar3) - pdVar6[2];
LAB_146e10163:
    pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&this_00->_s_0,pTVar14,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
  }
  else {
    if (param_1 == 0) {
      pFVar5 = (pTVar13->AllocatorInstance).Data;
      dVar8 = (*(double *)(pFVar5 + 0x18) - *(double *)pFVar5) * __real_3fe0000000000000;
      dVar9 = (*(double *)(pFVar5 + 0x20) - *(double *)(pFVar5 + 8)) * __real_3fe0000000000000;
      dVar10 = (*(double *)(pFVar5 + 0x28) - *(double *)(pFVar5 + 0x10)) * __real_3fe0000000000000;
      dVar1 = *(double *)pFVar5;
      dVar2 = *(double *)(pFVar5 + 8);
      dVar3 = *(double *)(pFVar5 + 0x10);
      if (((int)this->_padding_ < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TVector<double> *)(*pcVar7)();
        return pTVar14;
      }
      pdVar6 = (double *)this->_padding_;
      pTVar14 = &local_78;
      this_00 = &local_c0;
      local_c0._s_0.X = (dVar8 + dVar1) - *pdVar6;
      local_c0._s_0.Y = (dVar9 + dVar2) - pdVar6[1];
      local_c0._s_0.Z = (dVar10 + dVar3) - pdVar6[2];
      goto LAB_146e10163;
    }
    if (((int)param_1 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar7)();
      return pTVar14;
    }
    dVar11 = __real_3fe0000000000000;
    pFVar5 = (pTVar13->AllocatorInstance).Data;
    lVar16 = (longlong)(int)param_1 * 0x38;
    dVar8 = (*(double *)(pFVar5 + lVar16 + 0x18) - *(double *)(pFVar5 + lVar16)) *
            __real_3fe0000000000000;
    dVar9 = (*(double *)(pFVar5 + lVar16 + 0x20) - *(double *)(pFVar5 + lVar16 + 8)) *
            __real_3fe0000000000000;
    dVar10 = (*(double *)(pFVar5 + lVar16 + 0x28) - *(double *)(pFVar5 + lVar16 + 0x10)) *
             __real_3fe0000000000000;
    dVar1 = *(double *)(pFVar5 + lVar16);
    dVar2 = *(double *)(pFVar5 + lVar16 + 8);
    dVar3 = *(double *)(pFVar5 + lVar16 + 0x10);
    uVar18 = 0;
    if ((int)(param_1 - 1) < pTVar13->ArrayNum) {
      uVar18 = ~(param_1 - 1) >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar7)();
      return pTVar14;
    }
    pFVar5 = (pTVar13->AllocatorInstance).Data;
    lVar16 = (longlong)(int)param_1 * 0x38;
    local_d8._s_0.X =
         (dVar8 + dVar1) -
         ((*(double *)(pFVar5 + lVar16 + -0x20) - *(double *)(pFVar5 + lVar16 + -0x38)) * dVar11 +
         *(double *)(pFVar5 + lVar16 + -0x38));
    local_d8._s_0.Y =
         (dVar9 + dVar2) -
         ((*(double *)(pFVar5 + lVar16 + -0x18) - *(double *)(pFVar5 + lVar16 + -0x30)) * dVar11 +
         *(double *)(pFVar5 + lVar16 + -0x30));
    local_d8._s_0.Z =
         (dVar10 + dVar3) -
         ((*(double *)(pFVar5 + lVar16 + -0x10) - *(double *)(pFVar5 + lVar16 + -0x28)) * dVar11 +
         *(double *)(pFVar5 + lVar16 + -0x28));
    pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_d8._s_0,&local_90,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
  }
  uVar19 = *(undefined4 *)&pTVar14->field0_0x0;
  uVar20 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 4);
  uVar21 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 8);
  uVar22 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 0xc);
  uVar4 = *(undefined8 *)((longlong)&pTVar14->field0_0x0 + 0x10);
  uVar23 = (undefined4)uVar4;
  uVar24 = (undefined4)((ulonglong)uVar4 >> 0x20);
LAB_146e10190:
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar19;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar20;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar21;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar22;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar24,uVar23);
  return __return_storage_ptr__;
}

// GetStringPulledLength @ 146e11100

double __thiscall FNavMeshPath::GetStringPulledLength(FNavMeshPath *this,int param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  ulonglong uVar12;
  double *pdVar13;
  double *pdVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  
  if (((((this->_padding_ & 2) == 0) || (iVar7 = (int)this->_padding_, iVar7 < 2)) ||
      ((this->_padding_ & 1) == 0)) || (iVar7 <= param_1)) {
    return 0.0;
  }
  iVar16 = param_1 + 1;
  dVar27 = 0.0;
  pdVar11 = (double *)((longlong)param_1 * 0x30 + this->_padding_);
  pdVar14 = pdVar11 + 6;
  if (iVar16 < iVar7) {
    if (3 < iVar7 - iVar16) {
      uVar9 = ((iVar7 - iVar16) - 4U >> 2) + 1;
      uVar12 = (ulonglong)uVar9;
      iVar16 = iVar16 + uVar9 * 4;
      do {
        auVar17._0_8_ = (pdVar14[2] - pdVar11[2]) * (pdVar14[2] - pdVar11[2]);
        auVar17._8_8_ = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ =
             (pdVar14[1] - pdVar11[1]) * (pdVar14[1] - pdVar11[1]) +
             (*pdVar14 - *pdVar11) * (*pdVar14 - *pdVar11) + auVar17._0_8_;
        auVar18 = sqrtpd(auVar17,auVar18);
        auVar19._0_8_ = (pdVar14[8] - pdVar11[8]) * (pdVar14[8] - pdVar11[8]);
        auVar19._8_8_ = 0;
        auVar20._8_8_ = 0;
        auVar20._0_8_ =
             (pdVar14[7] - pdVar11[7]) * (pdVar14[7] - pdVar11[7]) +
             (pdVar14[6] - pdVar11[6]) * (pdVar14[6] - pdVar11[6]) + auVar19._0_8_;
        auVar20 = sqrtpd(auVar19,auVar20);
        pdVar13 = pdVar14 + 0x13;
        pdVar10 = pdVar11 + 0x13;
        auVar21._0_8_ = (pdVar14[0xd] - pdVar11[0xd]) * (pdVar14[0xd] - pdVar11[0xd]);
        auVar21._8_8_ = 0;
        pdVar1 = pdVar14 + 0x12;
        pdVar2 = pdVar11 + 0x12;
        auVar22._8_8_ = 0;
        auVar22._0_8_ =
             (pdVar14[0xc] - pdVar11[0xc]) * (pdVar14[0xc] - pdVar11[0xc]) + auVar21._0_8_ +
             (pdVar14[0xe] - pdVar11[0xe]) * (pdVar14[0xe] - pdVar11[0xe]);
        auVar22 = sqrtpd(auVar21,auVar22);
        pdVar3 = pdVar14 + 0x14;
        pdVar4 = pdVar11 + 0x14;
        pdVar14 = pdVar14 + 0x18;
        pdVar11 = pdVar11 + 0x18;
        auVar23._0_8_ = (*pdVar3 - *pdVar4) * (*pdVar3 - *pdVar4);
        auVar23._8_8_ = 0;
        auVar24._8_8_ = 0;
        auVar24._0_8_ =
             (*pdVar13 - *pdVar10) * (*pdVar13 - *pdVar10) +
             (*pdVar1 - *pdVar2) * (*pdVar1 - *pdVar2) + auVar23._0_8_;
        auVar24 = sqrtpd(auVar23,auVar24);
        dVar27 = dVar27 + auVar18._0_8_ + auVar20._0_8_ + auVar22._0_8_ + auVar24._0_8_;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (iVar7 <= iVar16) {
        return dVar27;
      }
    }
    pdVar13 = pdVar11 + 2;
    pdVar10 = pdVar14 + 2;
    lVar15 = (longlong)(iVar7 - iVar16);
    do {
      pdVar1 = pdVar10 + -1;
      pdVar2 = pdVar13 + -1;
      dVar5 = *pdVar10;
      dVar6 = *pdVar13;
      pdVar13 = pdVar13 + 6;
      dVar26 = pdVar10[-2] -
               *(double *)((longlong)pdVar11 + (-0x10 - (longlong)pdVar14) + (longlong)pdVar10);
      pdVar10 = pdVar10 + 6;
      auVar25._0_8_ = (dVar5 - dVar6) * (dVar5 - dVar6);
      auVar25._8_8_ = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (*pdVar1 - *pdVar2) * (*pdVar1 - *pdVar2) + dVar26 * dVar26 + auVar25._0_8_;
      auVar18 = sqrtpd(auVar25,auVar8);
      dVar27 = dVar27 + auVar18._0_8_;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return dVar27;
}

// InternalResetNavMeshPath @ 146e15170

void __thiscall FNavMeshPath::InternalResetNavMeshPath(FNavMeshPath *this)

{
  undefined1 *puVar1;
  
  (this->PathCorridor).ArrayNum = 0;
  if ((this->PathCorridor).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PathCorridor).AllocatorInstance,0,&(this->PathCorridor).ArrayMax);
  }
  (this->PathCorridorCost).ArrayNum = 0;
  if ((this->PathCorridorCost).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PathCorridorCost).AllocatorInstance,0,
               &(this->PathCorridorCost).ArrayMax);
  }
  (this->CustomNavLinkIds).ArrayNum = 0;
  if ((this->CustomNavLinkIds).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CustomNavLinkIds).AllocatorInstance,0,
               &(this->CustomNavLinkIds).ArrayMax);
  }
  (this->PathCorridorEdges).ArrayNum = 0;
  if ((this->PathCorridorEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->PathCorridorEdges).AllocatorInstance,0,
               &(this->PathCorridorEdges).ArrayMax);
  }
  this->bCorridorEdgesGenerated = 0;
  this->bStringPulled = 0;
  this->bDynamic = 0;
  return;
}

// Invert @ 146e15600

void __thiscall FNavMeshPath::Invert(FNavMeshPath *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  AlgoImpl::Reverse<FNavPathPoint>((FNavPathPoint *)this->_padding_,(int)this->_padding_);
  iVar1 = (this->PathCorridor).ArrayNum;
  pFVar2 = (this->PathCorridor).AllocatorInstance.Data;
  iVar4 = iVar1 / 2;
  if (0 < iVar4) {
    lVar6 = 0;
    pFVar5 = pFVar2 + (longlong)(iVar1 + -1) * 8;
    do {
      uVar3 = *(undefined8 *)(pFVar2 + lVar6 * 8);
      *(undefined8 *)(pFVar2 + lVar6 * 8) = *(undefined8 *)pFVar5;
      lVar6 = lVar6 + 1;
      *(undefined8 *)pFVar5 = uVar3;
      pFVar5 = pFVar5 + -8;
    } while (lVar6 < iVar4);
  }
  AlgoImpl::Reverse<double>
            ((double *)(this->PathCorridorCost).AllocatorInstance.Data,
             (this->PathCorridorCost).ArrayNum);
  if (this->bCorridorEdgesGenerated != 0) {
    AlgoImpl::Reverse<FNavigationPortalEdge>
              ((FNavigationPortalEdge *)(this->PathCorridorEdges).AllocatorInstance.Data,
               (this->PathCorridorEdges).ArrayNum);
    return;
  }
  return;
}

// IsPathSegmentANavLink @ 146e15980

bool __thiscall FNavMeshPath::IsPathSegmentANavLink(FNavMeshPath *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar4 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((*(byte *)(this->_padding_ + 0x20 + (longlong)param_1 * 0x30) & 4) != 0) {
      return true;
    }
  }
  return false;
}

// OffsetFromCorners @ 146e17040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavMeshPath::OffsetFromCorners(FNavMeshPath *this,double param_1)

{
  int iVar1;
  int *piVar2;
  FName FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  ForAnyElementType _Src;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_Navigation_OffsetFromCorners> FVar18;
  UObject *pUVar19;
  UClass *pUVar20;
  ulonglong uVar21;
  longlong lVar22;
  TVector<double> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  undefined8 *puVar31;
  FScriptContainerElement *pFVar32;
  longlong *plVar33;
  ulonglong uVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  double dVar46;
  double dVar47;
  undefined8 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int local_res18;
  uint local_res20;
  TArray<_anonymous_namespace_::FPathPointInfo,TSizedDefaultAllocator<32>_> local_668;
  int local_658;
  TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> local_650;
  FName local_640;
  byte local_638;
  ulonglong local_630;
  undefined8 *local_628;
  FColor_u_0 local_620 [2];
  TVector<double>_u_0 local_618;
  TVector<double>_u_0 local_600;
  undefined1 local_5e8 [16];
  double local_5d8;
  FName local_5d0;
  undefined1 local_5c8 [16];
  double local_5b8;
  uint local_5a8;
  uint uStack_5a4;
  uint uStack_5a0;
  uint uStack_59c;
  double local_598;
  double dStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  UObject *local_548;
  double local_530;
  TVector<double>_u_0 local_528;
  undefined1 local_510 [16];
  double local_500;
  TVector<double>_u_0 local_4f8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  double dStack_460;
  double dStack_458;
  TVector<double>_u_0 local_450;
  TVector<double>_u_0 local_438;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  double local_390;
  double dStack_388;
  double local_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  double local_340;
  double dStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  FName local_240;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double local_1d8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108 [3];
  
  uVar34 = 0;
  FVar18 = StatPtr_STAT_Navigation_OffsetFromCorners;
  if (StatPtr_STAT_Navigation_OffsetFromCorners ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_OffsetFromCorners>)0x0) {
    pFVar17 = ::FName::FName(&local_240,"STAT_Navigation_OffsetFromCorners");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Navigation_OffsetFromCorners>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_OffsetFromCorners,
                        *pFVar17,L"Offset from corners","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_640.ComparisonIndex.Value = 0;
  local_640.Number = 0;
  local_638 = 0;
  FVar3 = *(FName *)FVar18;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_620[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_620[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      local_638 = local_638 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_5d0.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_5d0.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_5d0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\NavMeshPath.cpp"
                   ,0x124);
        local_638 = local_638 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_640 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_638 = local_638 | 4;
    }
  }
  pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_548 = pUVar19;
  if (pUVar19 != (UObject *)0x0) {
    pUVar20 = ARecastNavMesh::GetPrivateStaticClass();
    iVar15 = (int)pUVar20->_padding_;
    if ((((iVar15 <= *(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar20->_padding_)) && (iVar15 = (int)this->_padding_, iVar15 != 0)) && (iVar15 < 0x65))
    {
      if (this->bCorridorEdgesGenerated == 0) {
        GeneratePathCorridorEdges(this);
      }
      puVar31 = (undefined8 *)this->_padding_;
      bVar12 = false;
      local_668.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res18 = 0;
      uVar26 = 0;
      uVar14 = (int)this->_padding_ + 2;
      local_668.ArrayNum = 0;
      local_668.ArrayMax = 0;
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      iVar15 = 0;
      if (0 < (int)uVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,uVar14,&local_668.AllocatorInstance,0,&local_668.ArrayMax);
        iVar15 = local_668.ArrayNum;
      }
      local_420 = *puVar31;
      uStack_418 = puVar31[1];
      local_410 = puVar31[2];
      uStack_408 = puVar31[3];
      local_400 = puVar31[4];
      uStack_3f8 = puVar31[5];
      local_3f0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      dStack_3e8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_3e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dStack_3c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dStack_3d8 = local_3f0;
      dStack_3d0 = dStack_3e8;
      if ((local_668.AllocatorInstance.Data <= (FScriptContainerElement *)&local_420) &&
         ((FScriptContainerElement *)&local_420 <
          local_668.AllocatorInstance.Data + (longlong)local_668.ArrayMax * 0x60)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar15 = local_668.ArrayNum;
      }
      if (iVar15 == local_668.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&local_668.AllocatorInstance,&local_668.ArrayMax);
      }
      local_668.ArrayNum = iVar15 + 1;
      pTVar23 = (TVector<double> *)(puVar31 + 6);
      lVar25 = (longlong)iVar15 * 0x60;
      local_res20 = 1;
      local_658 = 1;
      *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25) = local_420;
      *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 8) = uStack_418;
      *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x10) = local_410;
      *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x10 + 8) = uStack_408;
      *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20) = local_400;
      *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20 + 8) = uStack_3f8;
      *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x30) = local_3f0;
      *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x30 + 8) = dStack_3e8;
      *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x40) = local_3e0;
      *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x40 + 8) = dStack_3d8;
      *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x50) = dStack_3d0;
      *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x50 + 8) = dStack_3c8;
      fVar36 = __real_322bcc76;
      dVar51 = __real_3ff0000000000000;
      if (1 < (int)this->_padding_ + -1) {
        local_628 = puVar31 + 0xc;
        uVar40 = SUB84(__real_3fe0000000000000,0);
        uVar42 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
        local_630 = 0;
        do {
          puVar31 = local_628;
          iVar15 = local_658;
          if ((this->PathCorridorEdges).ArrayNum <= (int)uVar26) break;
          if ((*(byte *)((longlong)&pTVar23[1].field0_0x0 + 8) & 4) == 0) {
            uVar14 = 0;
            if ((int)uVar26 < (this->PathCorridorEdges).ArrayNum) {
              uVar14 = ~uVar26 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar28 = (this->PathCorridorEdges).AllocatorInstance.Data +
                      (longlong)(int)uVar26 * 0x38;
            uVar14 = uVar26;
            if ((int)uVar26 < (this->PathCorridorEdges).ArrayNum) {
              do {
                fVar35 = FMath::PointDistToSegmentSquared
                                   (pTVar23,(TVector<double> *)pFVar28,
                                    (TVector<double> *)(pFVar28 + 0x18));
                puVar31 = local_628;
                if (fVar35 <= fVar36) {
                  dVar47 = *(double *)(pFVar28 + 8) - (pTVar23->field0_0x0)._s_0.Y;
                  dVar50 = *(double *)(pFVar28 + 0x10) - (pTVar23->field0_0x0)._s_0.Z;
                  dVar49 = *(double *)&pFVar28->field_0x0 - (pTVar23->field0_0x0)._s_0.X;
                  dVar46 = *(double *)(pFVar28 + 0x20) - (pTVar23->field0_0x0)._s_0.Y;
                  dVar53 = *(double *)(pFVar28 + 0x28) - (pTVar23->field0_0x0)._s_0.Z;
                  dVar50 = dVar49 * dVar49 + dVar47 * dVar47 + dVar50 * dVar50;
                  dVar47 = *(double *)&pFVar28[0x18].field_0x0 - (pTVar23->field0_0x0)._s_0.X;
                  dVar47 = dVar46 * dVar46 + dVar47 * dVar47 + dVar53 * dVar53;
                  if ((dVar50 <= param_1 * param_1) || (dVar47 <= param_1 * param_1)) {
                    bVar12 = true;
                    uVar27 = (ulonglong)(dVar47 <= dVar50);
                    uVar26 = 0;
                    if ((int)uVar14 < (this->PathCorridorEdges).ArrayNum) {
                      uVar26 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    local_3a0 = *(undefined1 (*) [16])((longlong)&pTVar23[1].field0_0x0 + 8);
                    pFVar28 = (this->PathCorridorEdges).AllocatorInstance.Data + uVar34 * 0x38;
                    uVar21 = (ulonglong)((dVar47 <= dVar50) - 1 & 1);
                    local_380 = *(double *)(pFVar28 + (uVar27 * 3 + 2) * 8);
                    local_168 = (pTVar23->field0_0x0)._s_0.X;
                    dStack_160 = (pTVar23->field0_0x0)._s_0.Y;
                    auVar57._8_8_ = 0;
                    auVar57._0_8_ =
                         (*(double *)(pFVar28 + 0x20) - *(double *)(pFVar28 + 8)) *
                         (*(double *)(pFVar28 + 0x20) - *(double *)(pFVar28 + 8)) +
                         (*(double *)(pFVar28 + 0x18) - *(double *)pFVar28) *
                         (*(double *)(pFVar28 + 0x18) - *(double *)pFVar28) +
                         (*(double *)(pFVar28 + 0x28) - *(double *)(pFVar28 + 0x10)) *
                         (*(double *)(pFVar28 + 0x28) - *(double *)(pFVar28 + 0x10));
                    auVar57 = sqrtpd(unaff_XMM7,auVar57);
                    unaff_XMM7._8_8_ = auVar57._8_8_;
                    dVar47 = auVar57._0_8_ * (double)CONCAT44(uVar42,uVar40);
                    local_390 = *(double *)(pFVar28 + uVar27 * 0x18);
                    dStack_388 = *(double *)(pFVar28 + uVar27 * 0x18 + 8);
                    if (param_1 <= dVar47) {
                      dVar47 = param_1;
                    }
                    unaff_XMM7._0_8_ = dVar47;
                    local_530 = *(double *)(pFVar28 + (uVar21 * 3 + 2) * 8) - local_380;
                    dVar53 = *(double *)(pFVar28 + uVar21 * 0x18) - local_390;
                    dVar50 = *(double *)(pFVar28 + uVar21 * 0x18 + 8) - dStack_388;
                    dVar46 = dVar50 * dVar50 + dVar53 * dVar53 + local_530 * local_530;
                    if (dVar46 == dVar51) {
                      local_5e8._8_4_ = SUB84(dVar50,0);
                      local_5e8._0_8_ = dVar53;
                      local_5e8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                      local_5d8 = local_530;
                    }
                    else if (__real_3e45798ee0000000 <= dVar46) {
                      local_1d8 = dVar51 / SQRT(dVar46);
                      local_5d8 = local_530 * local_1d8;
                      dVar53 = local_1d8 * dVar53;
                      dVar50 = local_1d8 * dVar50;
                      local_5e8._8_8_ = dVar50;
                      local_5e8._0_8_ = dVar53;
                    }
                    else {
                      dVar53 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                _4_4_,UE::Math::TVector<double>::ZeroVector.
                                                      field0_0x0._0_4_);
                      dVar50 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                _12_4_,UE::Math::TVector<double>::ZeroVector.
                                                       field0_0x0._8_4_);
                      local_5d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                      local_5e8._8_8_ = dVar50;
                      local_5e8._0_8_ = dVar53;
                    }
                    dStack_378 = *(double *)(pFVar28 + uVar21 * 0x18);
                    dStack_370 = *(double *)(pFVar28 + uVar21 * 0x18 + 8);
                    dVar50 = dVar50 * dVar47 + dStack_388;
                    dVar46 = local_5d8 * dVar47 + local_380;
                    local_158._8_4_ = SUB84(*(double *)(pFVar28 + 0x30),0);
                    local_158._12_4_ = (undefined4)((ulonglong)*(double *)(pFVar28 + 0x30) >> 0x20);
                    local_3c0._8_4_ = SUB84(dVar50,0);
                    local_3c0._0_8_ = dVar53 * dVar47 + local_390;
                    local_3c0._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                    local_158._0_8_ = dVar46;
                    local_3b0._8_4_ = local_158._8_4_;
                    local_3b0._0_8_ = dVar46;
                    local_3b0._12_4_ = local_158._12_4_;
                    dStack_368 = *(double *)(pFVar28 + (uVar21 * 3 + 2) * 8);
                    if (((local_668.AllocatorInstance.Data <= (FScriptContainerElement *)local_3c0)
                        && ((FScriptContainerElement *)local_3c0 <
                            local_668.AllocatorInstance.Data + (longlong)local_668.ArrayMax * 0x60))
                       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar11)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar15 = local_668.ArrayNum;
                    if (local_668.ArrayNum == local_668.ArrayMax) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x860,&local_668.AllocatorInstance,&local_668.ArrayMax);
                    }
                    uVar40 = SUB84(__real_3fe0000000000000,0);
                    uVar42 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
                    uVar26 = uVar14 + 1;
                    local_668.ArrayNum = iVar15 + 1;
                    lVar25 = (longlong)iVar15 * 0x60;
                    uVar34 = uVar34 + 1;
                    local_res18 = local_res18 + 1;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25) = local_3c0._0_8_;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 8) = local_3c0._8_8_
                    ;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x10) =
                         local_3b0._0_8_;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x10 + 8) =
                         local_3b0._8_8_;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20) =
                         local_3a0._0_8_;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20 + 8) =
                         local_3a0._8_8_;
                    *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x30) = local_390;
                    *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x30 + 8) = dStack_388;
                    *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x40) = local_380;
                    *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x40 + 8) = dStack_378;
                    *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x50) = dStack_370;
                    *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x50 + 8) = dStack_368;
                    local_630 = uVar34;
                    goto LAB_146e17cef;
                  }
                  uVar26 = uVar26 + 1;
                  local_630 = local_630 + 1;
                  break;
                }
                pFVar28 = pFVar28 + 0x38;
                uVar14 = uVar14 + 1;
                uVar34 = uVar34 + 1;
              } while ((int)uVar14 < (this->PathCorridorEdges).ArrayNum);
            }
            uVar34 = local_630;
            if (local_res18 == 0) {
              local_2a0 = (pTVar23->field0_0x0)._s_0.X;
              dStack_298 = (pTVar23->field0_0x0)._s_0.Y;
              local_290 = (pTVar23->field0_0x0)._s_0.Z;
              dStack_288 = pTVar23[1].field0_0x0._s_0.X;
              local_280 = pTVar23[1].field0_0x0._s_0.Y;
              dStack_278 = pTVar23[1].field0_0x0._s_0.Z;
              local_260 = 0;
              uStack_258 = 0;
              local_270 = 0;
              uStack_268 = 0;
              local_250 = 0;
              uStack_248 = 0;
              if (((local_668.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2a0) &&
                  ((FScriptContainerElement *)&local_2a0 <
                   local_668.AllocatorInstance.Data + (longlong)local_668.ArrayMax * 0x60)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar15 = local_668.ArrayNum;
              if (local_668.ArrayNum == local_668.ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x860,&local_668.AllocatorInstance,&local_668.ArrayMax);
              }
              local_668.ArrayNum = iVar15 + 1;
              lVar25 = (longlong)iVar15 * 0x60;
              *(double *)(local_668.AllocatorInstance.Data + lVar25) = local_2a0;
              *(double *)(local_668.AllocatorInstance.Data + lVar25 + 8) = dStack_298;
              *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x10) = local_290;
              *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x10 + 8) = dStack_288;
              *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x20) = local_280;
              *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x20 + 8) = dStack_278;
              *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x30) = local_270;
              *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x30 + 8) = uStack_268;
              *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x40) = local_260;
              *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x40 + 8) = uStack_258;
              *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x50) = local_250;
              *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x50 + 8) = uStack_248;
            }
            else {
              local_res18 = 0;
            }
            pTVar23 = pTVar23 + 2;
            local_658 = local_658 + 1;
            local_628 = puVar31 + 6;
          }
          else {
            local_360 = (pTVar23->field0_0x0)._s_0.X;
            dStack_358 = (pTVar23->field0_0x0)._s_0.Y;
            local_350 = (pTVar23->field0_0x0)._s_0.Z;
            dStack_348 = pTVar23[1].field0_0x0._s_0.X;
            local_340 = pTVar23[1].field0_0x0._s_0.Y;
            dStack_338 = pTVar23[1].field0_0x0._s_0.Z;
            local_320 = 0;
            uStack_318 = 0;
            local_330 = 0;
            uStack_328 = 0;
            local_310 = 0;
            uStack_308 = 0;
            if (((local_668.AllocatorInstance.Data <= (FScriptContainerElement *)&local_360) &&
                ((FScriptContainerElement *)&local_360 <
                 local_668.AllocatorInstance.Data + (longlong)local_668.ArrayMax * 0x60)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar16 = local_668.ArrayNum;
            if (local_668.ArrayNum == local_668.ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x860,&local_668.AllocatorInstance,&local_668.ArrayMax);
            }
            iVar1 = iVar16 + 1;
            lVar25 = (longlong)iVar16 * 0x60;
            *(double *)(local_668.AllocatorInstance.Data + lVar25) = local_360;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 8) = dStack_358;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x10) = local_350;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x10 + 8) = dStack_348;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x20) = local_340;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x20 + 8) = dStack_338;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x30) = local_330;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x30 + 8) = uStack_328;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x40) = local_320;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x40 + 8) = uStack_318;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x50) = local_310;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x50 + 8) = uStack_308;
            local_300 = *puVar31;
            uStack_2f8 = puVar31[1];
            local_2f0 = puVar31[2];
            uStack_2e8 = puVar31[3];
            local_2e0 = puVar31[4];
            uStack_2d8 = puVar31[5];
            local_2c0 = 0;
            uStack_2b8 = 0;
            local_2d0 = 0;
            uStack_2c8 = 0;
            local_2b0 = 0;
            uStack_2a8 = 0;
            local_668.ArrayNum = iVar1;
            if (((local_668.AllocatorInstance.Data <= (FScriptContainerElement *)&local_300) &&
                ((FScriptContainerElement *)&local_300 <
                 local_668.AllocatorInstance.Data + (longlong)local_668.ArrayMax * 0x60)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar16 = local_668.ArrayNum;
            if (local_668.ArrayNum == local_668.ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x860,&local_668.AllocatorInstance,&local_668.ArrayMax);
            }
            local_658 = iVar15 + 2;
            local_668.ArrayNum = iVar16 + 1;
            pTVar23 = pTVar23 + 4;
            lVar25 = (longlong)iVar16 * 0x60;
            local_628 = puVar31 + 0xc;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25) = local_300;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 8) = uStack_2f8;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x10) = local_2f0;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x10 + 8) = uStack_2e8;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20) = local_2e0;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20 + 8) = uStack_2d8;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x30) = local_2d0;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x30 + 8) = uStack_2c8;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x40) = local_2c0;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x40 + 8) = uStack_2b8;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x50) = local_2b0;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x50 + 8) = uStack_2a8;
          }
LAB_146e17cef:
        } while (local_658 < (int)this->_padding_ + -1);
        if (bVar12) {
          if ((local_668.ArrayNum < 3) || ((*(uint *)&local_548[0x26].field_0x8 & 0x200) == 0)) {
            iVar15 = (int)this->_padding_;
            uVar26 = iVar15 - 1;
            uVar14 = 0;
            if ((int)uVar26 < iVar15) {
              uVar14 = ~uVar26 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar22 = (longlong)(int)this->_padding_;
            piVar2 = (int *)((longlong)&this->_padding_ + 4);
            lVar25 = this->_padding_;
            puVar31 = (undefined8 *)(lVar25 + -0x30 + lVar22 * 0x30);
            local_4e0 = *puVar31;
            uStack_4d8 = puVar31[1];
            puVar31 = (undefined8 *)(lVar25 + -0x20 + lVar22 * 0x30);
            local_4d0 = *puVar31;
            uStack_4c8 = puVar31[1];
            puVar31 = (undefined8 *)(lVar25 + -0x10 + lVar22 * 0x30);
            local_4c0 = *puVar31;
            uStack_4b8 = puVar31[1];
            iVar15 = *piVar2;
            *(undefined4 *)&this->_padding_ = 0;
            if (iVar15 < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
            }
            uVar14 = 0;
            if (0 < local_668.ArrayNum) {
              lVar25 = 0;
              do {
                uVar26 = 0;
                if ((int)uVar14 < local_668.ArrayNum) {
                  uVar26 = ~uVar14 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar28 = local_668.AllocatorInstance.Data + lVar25;
                if ((((FScriptContainerElement *)this->_padding_ <= pFVar28) &&
                    (pFVar28 < (FScriptContainerElement *)this->_padding_ + (longlong)*piVar2 * 0x30
                    )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar15 = (int)this->_padding_;
                if (iVar15 == *piVar2) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x830,(ForAnyElementType *)&this->_padding_,piVar2);
                }
                uVar14 = uVar14 + 1;
                *(int *)&this->_padding_ = iVar15 + 1;
                lVar25 = lVar25 + 0x60;
                uVar48 = *(undefined8 *)(pFVar28 + 8);
                lVar24 = (longlong)iVar15;
                lVar22 = this->_padding_;
                puVar31 = (undefined8 *)(lVar22 + lVar24 * 0x30);
                *puVar31 = *(undefined8 *)pFVar28;
                puVar31[1] = uVar48;
                uVar48 = *(undefined8 *)(pFVar28 + 0x18);
                puVar31 = (undefined8 *)(lVar22 + 0x10 + lVar24 * 0x30);
                *puVar31 = *(undefined8 *)(pFVar28 + 0x10);
                puVar31[1] = uVar48;
                uVar48 = *(undefined8 *)(pFVar28 + 0x28);
                puVar31 = (undefined8 *)(lVar22 + 0x20 + lVar24 * 0x30);
                *puVar31 = *(undefined8 *)(pFVar28 + 0x20);
                puVar31[1] = uVar48;
              } while ((int)uVar14 < local_668.ArrayNum);
            }
            if ((((undefined8 *)this->_padding_ <= &local_4e0) &&
                (&local_4e0 <
                 (undefined8 *)this->_padding_ +
                 (longlong)*(int *)((longlong)&this->_padding_ + 4) * 6)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar15 = (int)this->_padding_;
            if (iVar15 == *(int *)((longlong)&this->_padding_ + 4)) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,(ForAnyElementType *)&this->_padding_,
                                  (int *)((longlong)&this->_padding_ + 4));
            }
            lVar22 = (longlong)iVar15;
            *(int *)&this->_padding_ = iVar15 + 1;
            lVar25 = this->_padding_;
            puVar31 = (undefined8 *)(lVar25 + lVar22 * 0x30);
            *puVar31 = local_4e0;
            puVar31[1] = uStack_4d8;
            puVar31 = (undefined8 *)(lVar25 + 0x10 + lVar22 * 0x30);
            *puVar31 = local_4d0;
            puVar31[1] = uStack_4c8;
            puVar31 = (undefined8 *)(lVar25 + 0x20 + lVar22 * 0x30);
            *puVar31 = local_4c0;
            puVar31[1] = uStack_4b8;
          }
          else {
            uVar14 = local_668.ArrayNum + 2;
            local_650.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_650.ArrayNum = 0;
            local_650.ArrayMax = 0;
            if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
            }
            if (0 < (int)uVar14) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,uVar14,&local_650.AllocatorInstance,0,&local_650.ArrayMax);
            }
            uVar26 = (int)this->_padding_ - 1;
            uVar14 = 0;
            if ((int)uVar26 < (int)this->_padding_) {
              uVar14 = ~uVar26 >> 0x1f;
            }
            local_res18 = local_668.ArrayNum;
            if (uVar14 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_res18 = local_668.ArrayNum;
            }
            lVar22 = (longlong)(int)uVar26;
            lVar25 = this->_padding_;
            puVar31 = (undefined8 *)(lVar25 + lVar22 * 0x30);
            local_4b0 = *puVar31;
            uStack_4a8 = puVar31[1];
            puVar31 = (undefined8 *)(lVar25 + 0x10 + lVar22 * 0x30);
            local_4a0 = *puVar31;
            uStack_498 = puVar31[1];
            puVar31 = (undefined8 *)(lVar25 + 0x20 + lVar22 * 0x30);
            local_490 = *puVar31;
            uStack_488 = puVar31[1];
            local_480 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dStack_478 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            local_470 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dStack_458 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dStack_468 = local_480;
            dStack_460 = dStack_478;
            if ((local_668.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4b0) &&
               ((FScriptContainerElement *)&local_4b0 <
                local_668.AllocatorInstance.Data + (longlong)local_668.ArrayMax * 0x60)) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_res18 = local_668.ArrayNum;
            }
            if (local_res18 == local_668.ArrayMax) {
              local_res18 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x860,&local_668.AllocatorInstance,&local_668.ArrayMax);
            }
            auVar52._8_8_ = 0;
            auVar52._0_8_ = __real_7fefffffffffffff;
            uVar26 = 0;
            local_668.ArrayNum = local_res18 + 1;
            uVar14 = 0;
            lVar25 = (longlong)local_res18 * 0x60;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25) = local_4b0;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 8) = uStack_4a8;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x10) = local_4a0;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x10 + 8) = uStack_498;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20) = local_490;
            *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20 + 8) = uStack_488;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x30) = local_480;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x30 + 8) = dStack_478;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x40) = local_470;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x40 + 8) = dStack_468;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x50) = dStack_460;
            *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x50 + 8) = dStack_458;
            local_658 = 200;
            uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            do {
              dVar51 = __real_3e45798ec0000000;
              if ((uVar26 == local_res20) || (local_658 == 0)) {
joined_r0x000146e18b35:
                if (-1 < (longlong)local_650._8_8_) {
                  local_650._8_8_ = local_650._8_8_ & 0xffffffff00000000;
                  goto LAB_146e18aef;
                }
                bVar12 = local_650.ArrayMax == 0;
                local_650._8_8_ = local_650._8_8_ & 0xffffffff00000000;
                if (bVar12) goto LAB_146e18aef;
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,0,&local_650.AllocatorInstance,0,&local_650.ArrayMax);
                break;
              }
              uVar29 = 0;
              if ((int)uVar14 < local_668.ArrayNum) {
                uVar29 = ~uVar14 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
                 uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                 uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
                 uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                 uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar38 = *(undefined4 *)
                        (local_668.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x60 + 0x20);
              local_630 = CONCAT44(local_630._4_4_,uVar38);
              uVar29 = 0;
              if ((int)uVar26 < local_668.ArrayNum) {
                uVar29 = ~uVar26 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
                 uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                 uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
                 uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                 uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar29 = *(uint *)(local_668.AllocatorInstance.Data +
                                (longlong)(int)uVar26 * 0x60 + 0x20);
              bVar12 = (uVar29 & 4) != 0;
              if (bVar12) {
                AppendPathPointsHelper(&local_650,&local_668,uVar26);
                uVar14 = uVar26 + 1;
                AppendPathPointsHelper(&local_650,&local_668,uVar14);
                local_res20 = uVar26 + 2;
                uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar26 = uVar14;
              }
              bVar11 = false;
              if (((local_630 & 4) == 0) && ((char)(uVar29 >> 8) == (char)((uint)uVar38 >> 8))) {
                dStack_590 = 0.0;
                local_588 = 0;
                uVar29 = 0;
                if ((int)local_res20 < local_668.ArrayNum) {
                  uVar29 = ~local_res20 >> 0x1f;
                }
                uStack_580 = 0;
                local_5a8 = uVar40;
                uStack_5a4 = uVar42;
                uStack_5a0 = uVar44;
                uStack_59c = uVar45;
                local_598 = (double)uVar48;
                if ((uVar29 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ),
                   uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
                   uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                   uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
                   uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                   uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar28 = local_668.AllocatorInstance.Data + (longlong)(int)local_res20 * 0x60;
                uVar29 = 0;
                if ((int)uVar26 < local_668.ArrayNum) {
                  uVar29 = ~uVar26 >> 0x1f;
                }
                uVar38 = uVar40;
                uVar39 = uVar42;
                uVar41 = uVar44;
                uVar43 = uVar45;
                if ((uVar29 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ),
                   uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
                   uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                   uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
                   uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                   uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar15 = (this->PathCorridorEdges).ArrayNum;
                pFVar32 = (FScriptContainerElement *)0x0;
                uVar29 = 0;
                local_600._0_16_ =
                     *(undefined1 (*) [16])
                      (local_668.AllocatorInstance.Data + (longlong)(int)uVar26 * 0x60);
                local_600._s_0.Z =
                     (double)*(undefined8 *)
                              (local_668.AllocatorInstance.Data +
                              (longlong)(int)uVar26 * 0x60 + 0x10);
                local_618._0_16_ = *(undefined1 (*) [16])pFVar28;
                local_618._s_0.Z = (double)*(undefined8 *)(pFVar28 + 0x10);
                pFVar28 = (FScriptContainerElement *)0x0;
                uVar40 = uVar38;
                uVar42 = uVar39;
                uVar44 = uVar41;
                uVar45 = uVar43;
                auVar54 = auVar52;
                uVar10 = uVar48;
                local_1c8._0_4_ = uVar38;
                local_1c8._4_4_ = uVar39;
                local_1c8._8_4_ = uVar41;
                local_1c8._12_4_ = uVar43;
                local_1c8._16_8_ = uVar48;
                if (iVar15 < 1) {
LAB_146e1884b:
                  local_598 = (double)uVar10;
                  uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                  uVar37 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                  bVar11 = false;
                  local_5a8 = uVar38;
                  uStack_5a4 = uVar39;
                  uStack_5a0 = uVar41;
                  uStack_59c = uVar43;
                  if ((((double)CONCAT44(uVar39 & uVar37,uVar38 & uVar29) < __real_3f1a36e2e0000000
                        || (double)CONCAT44(uVar39 & uVar37,uVar38 & uVar29) ==
                           __real_3f1a36e2e0000000) &&
                      ((double)CONCAT44(uVar43 & uVar37,uVar41 & uVar29) < __real_3f1a36e2e0000000
                       || (double)CONCAT44(uVar43 & uVar37,uVar41 & uVar29) ==
                          __real_3f1a36e2e0000000)) &&
                     (uVar29 = SUB84(local_598,0) & uVar29,
                     uVar37 = (uint)((ulonglong)local_598 >> 0x20) & uVar37,
                     (double)CONCAT44(uVar37,uVar29) < __real_3f1a36e2e0000000 ||
                     (double)CONCAT44(uVar37,uVar29) == __real_3f1a36e2e0000000)) {
                    goto joined_r0x000146e18b35;
                  }
                  bVar13 = false;
                  if (uVar26 == uVar14) {
                    uVar29 = 0;
                    if ((int)uVar14 < local_668.ArrayNum) {
                      uVar29 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar29 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    lVar25 = (longlong)(int)uVar14;
                    uVar14 = uVar26 + 1;
                    local_588 = CONCAT44(local_588._4_4_,
                                         *(undefined4 *)
                                          (local_668.AllocatorInstance.Data + lVar25 * 0x60 + 0x20))
                    ;
                    if (((local_668.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5a8)
                        && ((FScriptContainerElement *)&local_5a8 <
                            local_668.AllocatorInstance.Data + (longlong)local_668.ArrayMax * 0x60))
                       && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar13)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (local_668.ArrayNum == local_668.ArrayMax) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x860,&local_668.AllocatorInstance,&local_668.ArrayMax);
                      local_668.ArrayNum = iVar15;
                    }
                    iVar15 = local_668.ArrayNum - uVar14;
                    local_668.ArrayNum = local_668.ArrayNum + 1;
                    lVar25 = (longlong)(int)uVar14 * 0x60;
                    memmove(local_668.AllocatorInstance.Data + lVar25 + 0x60,
                            local_668.AllocatorInstance.Data + lVar25,(longlong)iVar15 * 0x60);
                    auVar52._8_8_ = 0;
                    auVar52._0_8_ = __real_7fefffffffffffff;
                    *(ulonglong *)(local_668.AllocatorInstance.Data + lVar25) =
                         CONCAT44(uStack_5a4,local_5a8);
                    *(ulonglong *)(local_668.AllocatorInstance.Data + lVar25 + 8) =
                         CONCAT44(uStack_59c,uStack_5a0);
                    *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x10) = local_598;
                    *(double *)(local_668.AllocatorInstance.Data + lVar25 + 0x10 + 8) = dStack_590;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20) = local_588;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x20 + 8) =
                         uStack_580;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x30) = local_578;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x30 + 8) =
                         uStack_570;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x40) = local_568;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x40 + 8) =
                         uStack_560;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x50) = uStack_558;
                    *(undefined8 *)(local_668.AllocatorInstance.Data + lVar25 + 0x50 + 8) =
                         uStack_550;
                    local_res18 = local_668.ArrayNum + -1;
                    uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                    uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                    uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                    uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                    uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    goto LAB_146e1831d;
                  }
                }
                else {
                  do {
                    uVar37 = 0;
                    if ((int)uVar29 < iVar15) {
                      uVar37 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar37 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pFVar30 = (this->PathCorridorEdges).AllocatorInstance.Data +
                              (longlong)(int)uVar29 * 0x38;
                    if (dVar51 < auVar52._0_8_) {
                      fVar36 = FMath::PointDistToSegmentSquared
                                         ((TVector<double> *)&local_600._s_0,
                                          (TVector<double> *)pFVar30,
                                          (TVector<double> *)(pFVar30 + 0x18));
                      if ((double)fVar36 < auVar52._0_8_) {
                        auVar52._8_8_ = 0;
                        auVar52._0_8_ = (double)fVar36;
                        pFVar28 = pFVar30;
                      }
                    }
                    if (dVar51 < auVar54._0_8_) {
                      fVar36 = FMath::PointDistToSegmentSquared
                                         ((TVector<double> *)&local_618._s_0,
                                          (TVector<double> *)pFVar30,
                                          (TVector<double> *)(pFVar30 + 0x18));
                      if ((double)fVar36 < auVar54._0_8_) {
                        auVar54._8_8_ = 0;
                        auVar54._0_8_ = (double)fVar36;
                        pFVar32 = pFVar30;
                      }
                    }
                    iVar15 = (this->PathCorridorEdges).ArrayNum;
                    uVar29 = uVar29 + 1;
                  } while ((int)uVar29 < iVar15);
                  uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                  uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                  uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                  uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                  uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  if ((pFVar28 == (FScriptContainerElement *)0x0) ||
                     (uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                     pFVar32 == (FScriptContainerElement *)0x0)) goto LAB_146e1884b;
                  if (auVar52._0_8_ <= dVar51) {
                    pFVar28 = pFVar28 + 0x38;
                  }
                  dVar51 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                  auVar9._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  auVar9._0_8_ = dVar51;
                  auVar9._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  if (pFVar28 != pFVar32) {
                    local_510._0_8_ = local_600._s_0.X - local_618._s_0.X;
                    dVar53 = local_600._s_0.Y - local_618._s_0.Y;
                    local_500 = local_600._s_0.Z - local_618._s_0.Z;
                    uVar40 = (undefined4)((ulonglong)dVar53 >> 0x20);
                    local_510._8_8_ = dVar53;
                    dVar47 = dVar53 * dVar53 + (double)local_510._0_8_ * (double)local_510._0_8_ +
                             local_500 * local_500;
                    if (dVar47 == __real_3ff0000000000000) {
                      local_510._8_4_ = SUB84(dVar53,0);
                      local_510._12_4_ = uVar40;
                      local_5c8._8_4_ = SUB84(dVar53,0);
                      local_5c8._0_8_ = local_510._0_8_;
                      local_5c8._12_4_ = uVar40;
                      dVar51 = (double)local_510._0_8_;
                      local_5b8 = local_500;
                    }
                    else if (__real_3e45798ee0000000 <= dVar47) {
                      local_1e0 = __real_3ff0000000000000 / SQRT(dVar47);
                      dVar51 = (double)local_510._0_8_ * local_1e0;
                      dVar53 = dVar53 * local_1e0;
                      local_5b8 = local_500 * local_1e0;
                      local_5c8._8_8_ = dVar53;
                      local_5c8._0_8_ = dVar51;
                    }
                    else {
                      local_5b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                      dVar53 = auVar9._8_8_;
                      local_5c8 = auVar9;
                    }
                    uVar29 = 0;
                    if ((int)(iVar15 - 1U) < iVar15) {
                      uVar29 = ~(iVar15 - 1U) >> 0x1f;
                    }
                    auVar56._0_8_ = local_600._s_0.Y + dVar53 * param_1;
                    auVar56._8_8_ = 0;
                    local_600._s_0.Z = local_600._s_0.Z + local_5b8 * param_1;
                    local_618._s_0.Z = local_618._s_0.Z - local_5b8 * param_1;
                    dVar47 = local_618._s_0.Y - dVar53 * param_1;
                    local_600._8_4_ = SUB84(auVar56._0_8_,0);
                    local_600._s_0.X = local_600._s_0.X + dVar51 * param_1;
                    local_600._12_4_ = (int)((ulonglong)auVar56._0_8_ >> 0x20);
                    local_618._8_4_ = SUB84(dVar47,0);
                    local_618._s_0.X = local_618._s_0.X - dVar51 * param_1;
                    local_618._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
                    local_530 = local_618._s_0.Z;
                    if ((uVar29 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    for (; pFVar28 <= pFVar32; pFVar28 = pFVar28 + 0x38) {
                      local_4f8._s_0.X = (double)*(undefined8 *)&pFVar28->field_0x0;
                      local_4f8._s_0.Y = (double)*(undefined8 *)(pFVar28 + 8);
                      local_4f8._s_0.Z = (double)*(undefined8 *)(pFVar28 + 0x10);
                      local_528._0_16_ = *(undefined1 (*) [16])&pFVar28[0x18].field_0x0;
                      local_528._s_0.Z = (double)*(undefined8 *)(pFVar28 + 0x28);
                      bVar11 = FMath::SegmentIntersection2D
                                         ((TVector<double> *)&local_4f8._s_0,
                                          (TVector<double> *)&local_528._s_0,
                                          (TVector<double> *)&local_600._s_0,
                                          (TVector<double> *)&local_618._s_0,
                                          (TVector<double> *)&local_1c8._s_0);
                      if (!bVar11) {
                        dVar51 = *(double *)&pFVar28->field_0x0;
                        dVar47 = *(double *)(pFVar28 + 8);
                        dVar53 = *(double *)&pFVar28[0x18].field_0x0;
                        dVar50 = *(double *)(pFVar28 + 0x20);
                        dVar46 = *(double *)(pFVar28 + 0x10);
                        dVar8 = dVar51 - dVar53;
                        dVar49 = *(double *)(pFVar28 + 0x28);
                        dVar7 = dVar47 - dVar50;
                        dVar6 = dVar46 - dVar49;
                        local_450._s_0.X = dVar53 - dVar51;
                        local_450._s_0.Y = dVar50 - dVar47;
                        local_450._s_0.Z = dVar49 - dVar46;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = dVar7 * dVar7 + dVar8 * dVar8 + dVar6 * dVar6;
                        auVar57 = sqrtpd(auVar56,auVar5);
                        dVar55 = auVar57._0_8_ * __real_3fe0000000000000;
                        if (param_1 <= dVar55) {
                          dVar55 = param_1;
                        }
                        dVar55 = dVar55 * __real_3fb99999a0000000;
                        pTVar23 = UE::Math::TVector<double>::GetSafeNormal
                                            ((TVector<double> *)&local_450._s_0,&local_138,
                                             __real_3e45798ee0000000,
                                             &UE::Math::TVector<double>::ZeroVector);
                        dVar51 = dVar55 * (pTVar23->field0_0x0)._s_0.X + dVar51;
                        dVar46 = dVar55 * (pTVar23->field0_0x0)._s_0.Z + dVar46;
                        dVar47 = dVar55 * (pTVar23->field0_0x0)._s_0.Y + dVar47;
                        local_530 = dVar46;
                        local_4f8._s_0.X = dVar51;
                        local_4f8._s_0.Y = dVar47;
                        local_4f8._s_0.Z = dVar46;
                        local_438._s_0.X = dVar8;
                        local_438._s_0.Y = dVar7;
                        local_438._s_0.Z = dVar6;
                        pTVar23 = UE::Math::TVector<double>::GetSafeNormal
                                            ((TVector<double> *)&local_438._s_0,&local_120,
                                             __real_3e45798ee0000000,
                                             &UE::Math::TVector<double>::ZeroVector);
                        dVar50 = dVar55 * (pTVar23->field0_0x0)._s_0.Y + dVar50;
                        dVar53 = dVar55 * (pTVar23->field0_0x0)._s_0.X + dVar53;
                        local_530 = dVar55 * (pTVar23->field0_0x0)._s_0.Z + dVar49;
                        uVar40 = SUB84(dVar50,0);
                        uVar42 = (undefined4)((ulonglong)dVar50 >> 0x20);
                        local_528._8_4_ = uVar40;
                        local_528._0_8_ = dVar53;
                        local_528._12_4_ = uVar42;
                        local_188._8_4_ = uVar40;
                        local_188._0_8_ = dVar53;
                        local_188._12_4_ = uVar42;
                        local_238._s_0.X = local_618._s_0.X;
                        local_238._s_0.Y = local_618._s_0.Y;
                        local_238._s_0.Z = local_618._s_0.Z;
                        local_218._s_0.X = local_600._s_0.X;
                        local_218._s_0.Y = local_600._s_0.Y;
                        local_218._s_0.Z = local_600._s_0.Z;
                        local_528._s_0.Z = local_530;
                        local_1a8._s_0.X = dVar51;
                        local_1a8._s_0.Y = dVar47;
                        local_1a8._s_0.Z = dVar46;
                        local_188._s_0.Z = local_530;
                        FMath::SegmentDistToSegment
                                  ((TVector<double> *)&local_218._s_0,
                                   (TVector<double> *)&local_238._s_0,
                                   (TVector<double> *)&local_188._s_0,
                                   (TVector<double> *)&local_1a8._s_0,local_108,
                                   (TVector<double> *)&local_1f8._s_0);
                        local_598 = (double)local_1f8._16_8_;
                        local_578 = *(undefined8 *)&pFVar28->field_0x0;
                        uStack_570 = *(undefined8 *)(pFVar28 + 8);
                        local_568 = *(undefined8 *)(pFVar28 + 0x10);
                        uStack_560 = *(undefined8 *)&pFVar28[0x18].field_0x0;
                        uStack_558 = *(undefined8 *)(pFVar28 + 0x20);
                        uStack_550 = *(undefined8 *)(pFVar28 + 0x28);
                        uVar38 = local_1f8._0_4_;
                        uVar39 = local_1f8._4_4_;
                        uVar41 = local_1f8._8_4_;
                        uVar43 = local_1f8._12_4_;
                        uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                        uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                        uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                        uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                        uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        uVar10 = local_598;
                        goto LAB_146e1884b;
                      }
                    }
                  }
                  uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                  uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                  uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  bVar13 = true;
                }
                bVar11 = bVar13;
                auVar52._8_8_ = 0;
                auVar52._0_8_ = __real_7fefffffffffffff;
              }
LAB_146e1831d:
              if (!bVar12) {
                AppendPathPointsHelper(&local_650,&local_668,uVar26);
                uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                if (bVar11) {
                  uVar14 = local_res20;
                  uVar26 = local_res20;
                  local_res20 = local_res20 + 1;
                }
                else {
                  local_res20 = uVar14 + 1;
                  uVar26 = uVar14;
                }
              }
              if (local_res18 < (int)local_res20) {
                AppendPathPointsHelper(&local_650,&local_668,uVar26);
                AppendPathPointsHelper(&local_650,&local_668,local_res18);
                break;
              }
              local_658 = local_658 + -1;
            } while (-1 < local_658);
            _Src.Data = local_650.AllocatorInstance.Data;
            iVar15 = local_650.ArrayNum;
            lVar25 = (longlong)local_650.ArrayNum;
            if ((local_650.ArrayNum != 0) &&
               (plVar33 = &this->_padding_,
               (TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)plVar33 != &local_650)) {
              piVar2 = (int *)((longlong)&this->_padding_ + 4);
              iVar16 = *piVar2;
              *(int *)&this->_padding_ = local_650.ArrayNum;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,local_650.ArrayNum,iVar16,(ForAnyElementType *)plVar33,
                         local_650.ArrayNum,piVar2);
              if (iVar15 != 0) {
                memcpy((void *)*plVar33,_Src.Data,lVar25 * 0x30);
              }
            }
LAB_146e18aef:
            if (local_650.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_650.AllocatorInstance.Data);
            }
          }
        }
      }
      if (local_668.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_668.AllocatorInstance.Data);
      }
    }
  }
  if ((local_638 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_638 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_638 & 4) != 0) {
    FThreadStats::AddMessage(local_640,CycleScopeEnd);
  }
  return;
}

// PerformStringPulling @ 146e1af00

void __thiscall
FNavMeshPath::PerformStringPulling
          (FNavMeshPath *this,TVector<double> *param_1,TVector<double> *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pUVar5 = ARecastNavMesh::GetPrivateStaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  if ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0) {
    if ((this->PathCorridor).ArrayNum != 0) {
      if ((*(FPImplRecastNavMesh **)&pUVar4[0x2f].field_0x8 == (FPImplRecastNavMesh *)0x0) ||
         (bVar2 = FPImplRecastNavMesh::FindStraightPath
                            (*(FPImplRecastNavMesh **)&pUVar4[0x2f].field_0x8,param_1,param_2,
                             &this->PathCorridor,
                             (TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                             &this->CustomNavLinkIds), !bVar2)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 4;
      }
      this->bStringPulled = 0;
      *(uint *)&this->field_0x180 = *(uint *)&this->field_0x180 | uVar3;
      return;
    }
    return;
  }
  return;
}

// ResetForRepath @ 146e21ec0

void __thiscall FNavMeshPath::ResetForRepath(FNavMeshPath *this)

{
  FNavigationPath::ResetForRepath((FNavigationPath *)this);
  InternalResetNavMeshPath(this);
  return;
}

