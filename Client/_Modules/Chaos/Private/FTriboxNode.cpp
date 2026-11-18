// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FTriboxNode @ 143a381a0

FTriboxNode * __thiscall
Chaos::Private::FConvexOptimizer::FTriboxNode::FTriboxNode(FTriboxNode *this,FTriboxNode *param_1)

{
  TMap<Chaos::FImplicitObject_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>_>
  *pTVar1;
  TMap<Chaos::FImplicitObject_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FImplicitObject_*,bool,0>_>
  *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  
  (this->NodeTribox).MaxDists[0] = 0.0;
  (this->NodeTribox).MaxDists[1] = 0.0;
  (this->NodeTribox).MaxDists[2] = 0.0;
  (this->NodeTribox).MaxDists[3] = 0.0;
  (this->NodeTribox).MaxDists[4] = 0.0;
  (this->NodeTribox).MaxDists[5] = 0.0;
  (this->NodeTribox).MaxDists[6] = 0.0;
  (this->NodeTribox).MaxDists[7] = 0.0;
  (this->NodeTribox).MaxDists[8] = 0.0;
  (this->NodeTribox).MaxDists[9] = 0.0;
  (this->NodeTribox).MaxDists[10] = 0.0;
  (this->NodeTribox).MaxDists[0xb] = 0.0;
  (this->NodeTribox).MaxDists[0xc] = 0.0;
  (this->NodeTribox).MaxDists[0xd] = 0.0;
  (this->NodeTribox).MaxDists[0xe] = 0.0;
  (this->NodeTribox).MaxDists[0xf] = 0.0;
  (this->NodeTribox).MaxDists[0x10] = 0.0;
  (this->NodeTribox).MaxDists[0x11] = 0.0;
  (this->NodeTribox).bIsValid = false;
  (this->NodeTribox).bHasDatas = false;
  if (((FTriboxNode *)((param_1->NodeTribox).MaxDists + 0x11) < this) ||
     ((FTriboxNode *)((this->NodeTribox).MaxDists + 0x11) < param_1)) {
    uVar3 = *(undefined8 *)((param_1->NodeTribox).MaxDists + 2);
    uVar5 = *(undefined8 *)((param_1->NodeTribox).MaxDists + 4);
    uVar6 = *(undefined8 *)((param_1->NodeTribox).MaxDists + 6);
    *(undefined8 *)(this->NodeTribox).MaxDists = *(undefined8 *)(param_1->NodeTribox).MaxDists;
    *(undefined8 *)((this->NodeTribox).MaxDists + 2) = uVar3;
    uVar3 = *(undefined8 *)((param_1->NodeTribox).MaxDists + 8);
    uVar7 = *(undefined8 *)((param_1->NodeTribox).MaxDists + 10);
    *(undefined8 *)((this->NodeTribox).MaxDists + 4) = uVar5;
    *(undefined8 *)((this->NodeTribox).MaxDists + 6) = uVar6;
    uVar5 = *(undefined8 *)((param_1->NodeTribox).MaxDists + 0xc);
    uVar6 = *(undefined8 *)((param_1->NodeTribox).MaxDists + 0xe);
    *(undefined8 *)((this->NodeTribox).MaxDists + 8) = uVar3;
    *(undefined8 *)((this->NodeTribox).MaxDists + 10) = uVar7;
    uVar3 = *(undefined8 *)((param_1->NodeTribox).MaxDists + 0x10);
    *(undefined8 *)((this->NodeTribox).MaxDists + 0xc) = uVar5;
    *(undefined8 *)((this->NodeTribox).MaxDists + 0xe) = uVar6;
    *(undefined8 *)((this->NodeTribox).MaxDists + 0x10) = uVar3;
  }
  else {
    pfVar8 = (this->NodeTribox).MaxDists + 1;
    lVar9 = (longlong)param_1 - (longlong)this;
    lVar10 = 4;
    do {
      ((FTribox *)(pfVar8 + -1))->MaxDists[0] = *(float *)(lVar9 + -4 + (longlong)pfVar8);
      *pfVar8 = *(float *)(lVar9 + (longlong)pfVar8);
      pfVar8[1] = *(float *)(lVar9 + 4 + (longlong)pfVar8);
      pfVar8[2] = *(float *)(lVar9 + 8 + (longlong)pfVar8);
      pfVar8 = pfVar8 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    pfVar8 = (this->NodeTribox).MaxDists + 0x10;
    lVar10 = 2;
    do {
      *pfVar8 = *(float *)(lVar9 + (longlong)pfVar8);
      pfVar8 = pfVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  pTVar1 = &this->bValidEdges;
  (this->NodeTribox).bIsValid = (param_1->NodeTribox).bIsValid;
  pTVar2 = &param_1->bValidEdges;
  (this->NodeTribox).bHasDatas = (param_1->NodeTribox).bHasDatas;
  (this->TriboxConvex).Reference = (FImplicitObject *)0x0;
  (this->TriboxConvex).Reference = (param_1->TriboxConvex).Reference;
  (param_1->TriboxConvex).Reference = (FImplicitObject *)0x0;
  this->ShapeIndex = param_1->ShapeIndex;
  this->NodeVolume = param_1->NodeVolume;
  this->bValidNode = param_1->bValidNode;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->bValidEdges).field_0x8 = 0;
  *(undefined8 *)&(this->bValidEdges).field_0x20 = 0;
  *(undefined4 *)&(this->bValidEdges).field_0x28 = 0;
  *(undefined4 *)&(this->bValidEdges).field_0x2c = 0x80;
  *(undefined4 *)&(this->bValidEdges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->bValidEdges).field_0x34 = 0;
  *(undefined8 *)&(this->bValidEdges).field_0x40 = 0;
  *(undefined4 *)&(this->bValidEdges).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Src = &(param_1->bValidEdges).field_0x10;
    *(undefined4 *)&(this->bValidEdges).field_0x8 = *(undefined4 *)&(param_1->bValidEdges).field_0x8
    ;
    _Dst = &(this->bValidEdges).field_0x10;
    *(undefined4 *)&(this->bValidEdges).field_0xc = *(undefined4 *)&(param_1->bValidEdges).field_0xc
    ;
    *(undefined8 *)&(param_1->bValidEdges).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->bValidEdges).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->bValidEdges).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->bValidEdges).field_0x20 =
           *(undefined8 *)&(param_1->bValidEdges).field_0x20;
      *(undefined8 *)&(param_1->bValidEdges).field_0x20 = 0;
      *(undefined4 *)&(this->bValidEdges).field_0x28 =
           *(undefined4 *)&(param_1->bValidEdges).field_0x28;
      *(undefined4 *)&(this->bValidEdges).field_0x2c =
           *(undefined4 *)&(param_1->bValidEdges).field_0x2c;
      *(undefined8 *)&(param_1->bValidEdges).field_0x28 = 0;
    }
    *(undefined4 *)&(this->bValidEdges).field_0x30 =
         *(undefined4 *)&(param_1->bValidEdges).field_0x30;
    *(undefined4 *)&(this->bValidEdges).field_0x34 =
         *(undefined4 *)&(param_1->bValidEdges).field_0x34;
    *(undefined4 *)&(param_1->bValidEdges).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->bValidEdges).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->bValidEdges).field_0x40 == 0) {
    *(undefined4 *)&(this->bValidEdges).field_0x38 =
         *(undefined4 *)&(param_1->bValidEdges).field_0x38;
  }
  pvVar4 = *(void **)&(this->bValidEdges).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined8 *)&(this->bValidEdges).field_0x40 = *(undefined8 *)&(param_1->bValidEdges).field_0x40
  ;
  *(undefined8 *)&(param_1->bValidEdges).field_0x40 = 0;
  *(undefined4 *)&(this->bValidEdges).field_0x48 = *(undefined4 *)&(param_1->bValidEdges).field_0x48
  ;
  *(undefined4 *)&(param_1->bValidEdges).field_0x48 = 0;
  this->ConvexId = param_1->ConvexId;
  return this;
}

// ~FTriboxNode @ 143a3ae30

void __thiscall Chaos::Private::FConvexOptimizer::FTriboxNode::~FTriboxNode(FTriboxNode *this)

{
  longlong *plVar1;
  void *pvVar2;
  FImplicitObject *pFVar3;
  longlong lVar4;
  
  *(undefined4 *)&(this->bValidEdges).field_0x48 = 0;
  pvVar2 = *(void **)&(this->bValidEdges).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->bValidEdges);
  pFVar3 = (this->TriboxConvex).Reference;
  if (pFVar3 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar3->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

