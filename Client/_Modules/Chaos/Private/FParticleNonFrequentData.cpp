// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// operator= @ 143741c40

FParticleNonFrequentData * __thiscall
Chaos::FParticleNonFrequentData::operator=
          (FParticleNonFrequentData *this,FParticleNonFrequentData *param_1)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  FImplicitObject *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FString *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  
  pFVar2 = (param_1->MGeometry).Reference;
  pFVar3 = (this->MGeometry).Reference;
  if (pFVar3 != pFVar2) {
    (this->MGeometry).Reference = pFVar2;
    if (pFVar2 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar3->_padding_;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  (this->MUniqueIdx).Idx = (param_1->MUniqueIdx).Idx;
  this->MSpatialIdx = param_1->MSpatialIdx;
  this->MResimType = param_1->MResimType;
  this->MEnabledDuringResim = param_1->MEnabledDuringResim;
  this->MParticleID = param_1->MParticleID;
  pTVar4 = (param_1->MDebugName).SharedReferenceCount.ReferenceController;
  pFVar5 = (param_1->MDebugName).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->MDebugName).SharedReferenceCount.ReferenceController;
  (this->MDebugName).Object = pFVar5;
  (this->MDebugName).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// operator= @ 14388d050

FParticleNonFrequentData * __thiscall
Chaos::FParticleNonFrequentData::operator=
          (FParticleNonFrequentData *this,FParticleNonFrequentData *param_1)

{
  longlong *plVar1;
  TSharedPtr<FString,1> *pTVar2;
  FImplicitObject *pFVar3;
  longlong lVar4;
  
  if (this != param_1) {
    pFVar3 = (this->MGeometry).Reference;
    (this->MGeometry).Reference = (param_1->MGeometry).Reference;
    (param_1->MGeometry).Reference = (FImplicitObject *)0x0;
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
  }
  pTVar2 = &param_1->MDebugName;
  (this->MUniqueIdx).Idx = (param_1->MUniqueIdx).Idx;
  this->MSpatialIdx = param_1->MSpatialIdx;
  this->MResimType = param_1->MResimType;
  this->MEnabledDuringResim = param_1->MEnabledDuringResim;
  this->MParticleID = param_1->MParticleID;
  if (&this->MDebugName != pTVar2) {
    (this->MDebugName).Object = pTVar2->Object;
    pTVar2->Object = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MDebugName).SharedReferenceCount,&(param_1->MDebugName).SharedReferenceCount)
    ;
  }
  return this;
}

// CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440c1150

void __thiscall
Chaos::FParticleNonFrequentData::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FParticleNonFrequentData *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  FImplicitObject *pFVar4;
  FImplicitObject *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FString *pFVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  EResimType EVar11;
  FUniqueIdx *pFVar12;
  FSpatialAccelerationIdx *pFVar13;
  TSharedPtr<FString,1> *pTVar14;
  uint uVar15;
  
  uVar2 = (uint)param_1->_padding_;
  lVar3 = param_1->_padding_;
  uVar15 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x68)) {
    uVar15 = ~uVar2 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar4 = *(FImplicitObject **)(*(longlong *)(lVar3 + 0x60) + (longlong)(int)uVar2 * 8);
  if (pFVar4 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  pFVar5 = (this->MGeometry).Reference;
  if (pFVar5 != pFVar4) {
    (this->MGeometry).Reference = pFVar4;
    if (pFVar4 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar5 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar5->_padding_;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar5->_padding_ + 4) == 0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  if (pFVar4 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar4->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar12 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  (this->MUniqueIdx).Idx = pFVar12->Idx;
  pFVar13 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  this->MSpatialIdx = *pFVar13;
  EVar11 = TGeometryParticleHandleImp<double,3,1>::ResimType(param_1);
  this->MResimType = EVar11;
  uVar2 = (uint)param_1->_padding_;
  lVar3 = param_1->_padding_;
  uVar15 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x220)) {
    uVar15 = ~uVar2 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this->MEnabledDuringResim = *(bool *)((longlong)(int)uVar2 + *(longlong *)(lVar3 + 0x218));
  pTVar14 = TGeometryParticlesImp<double,3,0>::DebugName
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  pTVar6 = (pTVar14->SharedReferenceCount).ReferenceController;
  pFVar7 = pTVar14->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (this->MDebugName).SharedReferenceCount.ReferenceController;
  (this->MDebugName).Object = pFVar7;
  (this->MDebugName).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

