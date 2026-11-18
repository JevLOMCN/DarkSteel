// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator= @ 1447f9210

FBatchedElements * __thiscall
FBatchedElements::operator=(FBatchedElements *this,FBatchedElements *param_1)

{
  TArray<FBatchedElements::FBatchedPoint,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FBatchedElements::FBatchedWireTris,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  longlong *plVar5;
  TArray<FBatchedElements::FBatchedThickLines,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FBatchedElements::FBatchedSprite,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FBatchedElements::FBatchedMeshElement,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FBatchedMeshElement *pFVar12;
  void *_Dst;
  void *_Src;
  
  TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>::operator=
            (&this->LineVertices,&param_1->LineVertices);
  pTVar1 = &this->Points;
  if (pTVar1 != &param_1->Points) {
    iVar9 = (param_1->Points).ArrayNum;
    piVar2 = &(this->Points).ArrayMax;
    pFVar11 = (param_1->Points).AllocatorInstance.Data;
    (this->Points).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar9,*piVar2,&pTVar1->AllocatorInstance,iVar9,piVar2);
      if (iVar9 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar11,(longlong)iVar9 * 0x28);
      }
    }
  }
  pTVar3 = &this->WireTris;
  if (pTVar3 != &param_1->WireTris) {
    iVar9 = (param_1->WireTris).ArrayNum;
    piVar2 = &(this->WireTris).ArrayMax;
    pFVar11 = (param_1->WireTris).AllocatorInstance.Data;
    (this->WireTris).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar9,*piVar2,&pTVar3->AllocatorInstance,iVar9,piVar2);
      if (iVar9 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar11,(longlong)iVar9 << 2);
      }
    }
  }
  plVar4 = &(this->WireTriVerts)._padding_;
  plVar5 = &(param_1->WireTriVerts)._padding_;
  if (plVar4 != plVar5) {
    _Src = (void *)*plVar5;
    piVar2 = (int *)((longlong)&(this->WireTriVerts)._padding_ + 4);
    iVar9 = *piVar2;
    iVar10 = (int)(param_1->WireTriVerts)._padding_;
    if (((ulonglong)_Src & 1) != 0) {
      _Src = (void *)((longlong)plVar5 + ((longlong)_Src >> 0x18));
    }
    *(int *)&(this->WireTriVerts)._padding_ = iVar10;
    if ((iVar10 == 0) && (iVar9 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x40,0x10,iVar10,iVar9,(ForAnyElementType *)plVar4,iVar10,piVar2);
      _Dst = (void *)*plVar4;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)((longlong)plVar4 + ((longlong)_Dst >> 0x18));
      }
      if (iVar10 != 0) {
        memcpy(_Dst,_Src,(longlong)iVar10 << 6);
      }
    }
  }
  pTVar6 = &this->ThickLines;
  (this->WireTriVerts).bNeedsCPUAccess = (param_1->WireTriVerts).bNeedsCPUAccess;
  if (pTVar6 != &param_1->ThickLines) {
    iVar9 = (param_1->ThickLines).ArrayNum;
    piVar2 = &(this->ThickLines).ArrayMax;
    pFVar11 = (param_1->ThickLines).AllocatorInstance.Data;
    (this->ThickLines).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar9,*piVar2,&pTVar6->AllocatorInstance,iVar9,piVar2);
      if (iVar9 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar11,(longlong)iVar9 * 0x50);
      }
    }
  }
  pTVar7 = &this->Sprites;
  if (pTVar7 != &param_1->Sprites) {
    iVar9 = (param_1->Sprites).ArrayNum;
    piVar2 = &(this->Sprites).ArrayMax;
    pFVar11 = (param_1->Sprites).AllocatorInstance.Data;
    (this->Sprites).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar9,*piVar2,&pTVar7->AllocatorInstance,iVar9,piVar2);
      if (iVar9 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar11,(longlong)iVar9 * 0x58);
      }
    }
  }
  pTVar8 = &this->MeshElements;
  this->MaxMeshIndicesAllowed = param_1->MaxMeshIndicesAllowed;
  this->MaxMeshVerticesAllowed = param_1->MaxMeshVerticesAllowed;
  if (pTVar8 != &param_1->MeshElements) {
    DestructItems<FBatchedElements::FBatchedMeshElement,int>
              ((FBatchedMeshElement *)(pTVar8->AllocatorInstance).Data,(this->MeshElements).ArrayNum
              );
    iVar9 = (param_1->MeshElements).ArrayNum;
    piVar2 = &(this->MeshElements).ArrayMax;
    pFVar12 = (FBatchedMeshElement *)(param_1->MeshElements).AllocatorInstance.Data;
    (this->MeshElements).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,iVar9,*piVar2,&pTVar8->AllocatorInstance,iVar9,piVar2);
      ConstructItems<FBatchedElements::FBatchedMeshElement,FBatchedElements::FBatchedMeshElement,int>
                ((pTVar8->AllocatorInstance).Data,pFVar12,iVar9);
    }
  }
  TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>::operator=
            (&this->MeshVertices,&param_1->MeshVertices);
  return this;
}

// HasPrimsToDraw @ 1454fa960

bool __thiscall FBatchedElements::HasPrimsToDraw(FBatchedElements *this)

{
  if (((((this->LineVertices).ArrayNum == 0) && ((this->Points).ArrayNum == 0)) &&
      ((this->Sprites).ArrayNum == 0)) &&
     ((((this->MeshElements).ArrayNum == 0 && ((this->ThickLines).ArrayNum == 0)) &&
      ((this->WireTris).ArrayNum < 1)))) {
    return false;
  }
  return true;
}

