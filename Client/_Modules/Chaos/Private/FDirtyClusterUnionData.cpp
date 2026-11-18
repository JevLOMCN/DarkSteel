// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ~FDirtyClusterUnionData @ 143afcef0

void __thiscall Chaos::FDirtyClusterUnionData::~FDirtyClusterUnionData(FDirtyClusterUnionData *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FImplicitObject *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->SimData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->QueryData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CollisionData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedGeometry).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->Geometry).Reference;
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
  pFVar2 = (this->ChildParticles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// operator= @ 143afdc80

FDirtyClusterUnionData * __thiscall
Chaos::FDirtyClusterUnionData::operator=
          (FDirtyClusterUnionData *this,FDirtyClusterUnionData *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TArray<Chaos::FDirtyClusterUnionParticleData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::FCollisionData,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FImplicitObject *pFVar9;
  FImplicitObject *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 uVar12;
  double dVar13;
  TReferenceControllerBase<1> *pTVar14;
  
  this->_padding_ = param_1->_padding_;
  lVar6 = param_1->_padding_;
  lVar7 = param_1->_padding_;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = lVar7;
  this->_padding_ = lVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  uVar12 = *(undefined8 *)&(param_1->X).field_0x8;
  pTVar3 = &this->ChildParticles;
  *(undefined8 *)&this->X = *(undefined8 *)&param_1->X;
  *(undefined8 *)&(this->X).field_0x8 = uVar12;
  *(undefined8 *)&(this->X).field_0x10 = *(undefined8 *)&(param_1->X).field_0x10;
  dVar13 = (param_1->R).Y;
  (this->R).X = (param_1->R).X;
  (this->R).Y = dVar13;
  dVar13 = (param_1->R).W;
  (this->R).Z = (param_1->R).Z;
  (this->R).W = dVar13;
  uVar12 = *(undefined8 *)&(param_1->V).field_0x8;
  *(undefined8 *)&this->V = *(undefined8 *)&param_1->V;
  *(undefined8 *)&(this->V).field_0x8 = uVar12;
  *(undefined8 *)&(this->V).field_0x10 = *(undefined8 *)&(param_1->V).field_0x10;
  uVar12 = *(undefined8 *)&(param_1->W).field_0x8;
  *(undefined8 *)&this->W = *(undefined8 *)&param_1->W;
  *(undefined8 *)&(this->W).field_0x8 = uVar12;
  *(undefined8 *)&(this->W).field_0x10 = *(undefined8 *)&(param_1->W).field_0x10;
  this->Mass = param_1->Mass;
  *(undefined8 *)&this->Inertia = *(undefined8 *)&param_1->Inertia;
  *(undefined4 *)&(this->Inertia).field_0x8 = *(undefined4 *)&(param_1->Inertia).field_0x8;
  this->ObjectState = param_1->ObjectState;
  this->bIsAnchored = param_1->bIsAnchored;
  if (pTVar3 != &param_1->ChildParticles) {
    iVar5 = (param_1->ChildParticles).ArrayNum;
    piVar1 = &(this->ChildParticles).ArrayMax;
    pFVar8 = (param_1->ChildParticles).AllocatorInstance.Data;
    (this->ChildParticles).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,0x10,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar5 * 0x90);
      }
    }
  }
  pFVar9 = (param_1->Geometry).Reference;
  pFVar10 = (this->Geometry).Reference;
  if (pFVar10 != pFVar9) {
    (this->Geometry).Reference = pFVar9;
    if (pFVar9 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar10 != (FImplicitObject *)0x0) {
      LOCK();
      plVar2 = &pFVar10->_padding_;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (*(int *)((longlong)&pFVar10->_padding_ + 4) == 0)) {
        (**(code **)pFVar10->_padding_)(pFVar10,1);
      }
    }
  }
  pTVar11 = (param_1->SharedGeometry).SharedReferenceCount.ReferenceController;
  pFVar9 = (param_1->SharedGeometry).Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = (this->SharedGeometry).SharedReferenceCount.ReferenceController;
  (this->SharedGeometry).Object = pFVar9;
  (this->SharedGeometry).SharedReferenceCount.ReferenceController = pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pTVar4 = &this->CollisionData;
  if (pTVar4 != &param_1->CollisionData) {
    iVar5 = (param_1->CollisionData).ArrayNum;
    piVar1 = &(this->CollisionData).ArrayMax;
    pFVar8 = (param_1->CollisionData).AllocatorInstance.Data;
    (this->CollisionData).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar5 * 0x30);
      }
    }
  }
  TArray<FCollisionFilterData,TSizedDefaultAllocator<32>_>::operator=
            (&this->QueryData,&param_1->QueryData);
  TArray<FCollisionFilterData,TSizedDefaultAllocator<32>_>::operator=
            (&this->SimData,&param_1->SimData);
  return this;
}

