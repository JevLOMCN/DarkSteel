// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FPhysicsReplicationLODAsync @ 1482d97d0

FPhysicsReplicationLODAsync * __thiscall
FPhysicsReplicationLODAsync::FPhysicsReplicationLODAsync(FPhysicsReplicationLODAsync *this)

{
  undefined8 *puVar1;
  
  this->_padding_ = (longlong)&___7IPhysicsReplicationLODAsync__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TSimCallbackObject_UFPhysicsReplicationLODAsyncInput__UFSimCallbackNoOutput_Chaos___0GAB__Chaos__6B_
  ;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x601;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x10,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x10,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x10,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsReplicationLODAsync__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Chaos__TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>__
  ;
  this->bEnabled = false;
  (this->DefaultSettings).bEnablePhysicsReplicationLOD = false;
  (this->DefaultSettings).MinimumBaseDistance = 200.0;
  (this->DefaultSettings).BaseDistanceRadiusMultiplier = 0.75;
  (this->DefaultSettings).BaseDistancesForResimulationMode = 0.25;
  (this->DefaultSettings).BaseDistancesForFullPrediction = 0.8;
  (this->DefaultSettings).TimeOverDistance = 0.15;
  (this->LodData).DataAssigned = false;
  (this->LodData).AlignedTime = 0.0;
  (this->LodData).AlignedFrame = 0;
  (this->LodData).ReplicationMode = PredictiveInterpolation;
  (this->LodData).bKinematic = false;
  (this->FocalParticles).ArrayNum = 0;
  (this->FocalParticles).ArrayMax = 0;
  (this->ParticlesInFocalIslands).ArrayNum = 0;
  (this->ParticlesInFocalIslands).ArrayMax = 0;
  (this->FocalParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlesInFocalIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->CachedIslandLodData).field_0x10 = 0;
  *(undefined8 *)&(this->CachedIslandLodData).field_0x18 = 0;
  *(undefined8 *)&(this->CachedIslandLodData).field_0x38 = 0;
  *(undefined8 *)&(this->CachedIslandLodData).field_0x48 = 0;
  *(undefined8 *)&(this->CachedIslandLodData).field_0x8 = 0;
  *(undefined8 *)&this->CachedIslandLodData = 0;
  *(undefined8 *)&(this->CachedIslandLodData).field_0x20 = 0;
  *(undefined4 *)&(this->CachedIslandLodData).field_0x28 = 0;
  *(undefined4 *)&(this->CachedIslandLodData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedIslandLodData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedIslandLodData).field_0x34 = 0;
  *(undefined8 *)&(this->CachedIslandLodData).field_0x40 = 0;
  (this->ParticleIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleIslands).ArrayNum = 0;
  (this->ParticleIslands).ArrayMax = 0;
  (this->IslandParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandParticles).ArrayNum = 0;
  (this->IslandParticles).ArrayMax = 0;
  *(undefined8 *)&(this->IslandAABB).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined8 *)&(this->ParticleAABB).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->ParticleAABB).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->ParticleAABB).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined8 *)&(this->ParticleAABB).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->ParticleAABB).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->ParticleAABB).MMin.field_0x10 = 0x7fefffffffffffff;
  return this;
}

// ~FPhysicsReplicationLODAsync @ 1482ddbe0

void __thiscall
FPhysicsReplicationLODAsync::~FPhysicsReplicationLODAsync(FPhysicsReplicationLODAsync *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__IPhysicsReplicationLODAsync__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Chaos__TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>__
  ;
  pFVar1 = (this->IslandParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CachedIslandLodData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedIslandLodData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPhysicsRepLodData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPhysicsRepLodData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPhysicsRepLodData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedIslandLodData);
  pFVar1 = (this->ParticlesInFocalIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FocalParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
  ~TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
            ((TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
              *)&this->_padding_);
  this->_padding_ = (longlong)&___7IPhysicsReplicationLODAsync__6B_;
  return;
}

// operator() @ 1482e05a0

void __thiscall
`FPhysicsReplicationLODAsync::PerformDistanceLOD'::__l2::<lambda_1>::operator()
          (void *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  TAABB<double,3> *pTVar4;
  TVector<double,3> *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  
  pTVar4 = Chaos::TGeometryParticleHandleImp<double,3,1>::LocalBounds(param_1);
  lVar1 = *(longlong *)this;
  uVar3 = *(undefined8 *)&(pTVar4->MMin).field_0x8;
  *(undefined8 *)(lVar1 + 0x1e0) = *(undefined8 *)&pTVar4->MMin;
  *(undefined8 *)(lVar1 + 0x1e8) = uVar3;
  *(undefined8 *)(lVar1 + 0x1f0) = *(undefined8 *)&(pTVar4->MMin).field_0x10;
  uVar3 = *(undefined8 *)&(pTVar4->MMax).field_0x8;
  *(undefined8 *)(lVar1 + 0x1f8) = *(undefined8 *)&pTVar4->MMax;
  *(undefined8 *)(lVar1 + 0x200) = uVar3;
  *(undefined8 *)(lVar1 + 0x208) = *(undefined8 *)&(pTVar4->MMax).field_0x10;
  lVar1 = *(longlong *)this;
  pTVar5 = Chaos::TParticles<double,3>::GetX
                     ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
  dVar9 = *(double *)pTVar5;
  dVar2 = *(double *)&pTVar5->field_0x8;
  dVar8 = *(double *)&pTVar5->field_0x10;
  *(double *)(lVar1 + 0x1e0) = dVar9 + *(double *)(lVar1 + 0x1e0);
  *(double *)(lVar1 + 0x1e8) = dVar2 + *(double *)(lVar1 + 0x1e8);
  *(double *)(lVar1 + 0x1f0) = dVar8 + *(double *)(lVar1 + 0x1f0);
  *(double *)(lVar1 + 0x200) = dVar2 + *(double *)(lVar1 + 0x200);
  *(double *)(lVar1 + 0x1f8) = dVar9 + *(double *)(lVar1 + 0x1f8);
  *(double *)(lVar1 + 0x208) = dVar8 + *(double *)(lVar1 + 0x208);
  lVar1 = *(longlong *)this;
  dVar8 = *(double *)(lVar1 + 0x1b0);
  uVar6 = SUB84(dVar8,0);
  uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar9 = *(double *)(lVar1 + 0x1e0);
  if (dVar9 <= dVar8) {
    uVar6 = SUB84(dVar9,0);
    uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
  }
  dVar8 = *(double *)(lVar1 + 0x1e8);
  if (*(double *)(lVar1 + 0x1b8) <= *(double *)(lVar1 + 0x1e8)) {
    dVar8 = *(double *)(lVar1 + 0x1b8);
  }
  dVar9 = *(double *)(lVar1 + 0x1f0);
  if (*(double *)(lVar1 + 0x1c0) <= *(double *)(lVar1 + 0x1f0)) {
    dVar9 = *(double *)(lVar1 + 0x1c0);
  }
  *(ulonglong *)(lVar1 + 0x1b0) = CONCAT44(uVar7,uVar6);
  *(double *)(lVar1 + 0x1b8) = dVar8;
  *(double *)(lVar1 + 0x1c0) = dVar9;
  dVar8 = *(double *)(lVar1 + 0x1f8);
  uVar6 = SUB84(dVar8,0);
  uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar9 = *(double *)(lVar1 + 0x1c8);
  if (dVar8 <= dVar9) {
    uVar6 = SUB84(dVar9,0);
    uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
  }
  dVar8 = *(double *)(lVar1 + 0x200);
  if (*(double *)(lVar1 + 0x200) <= *(double *)(lVar1 + 0x1d0)) {
    dVar8 = *(double *)(lVar1 + 0x1d0);
  }
  dVar9 = *(double *)(lVar1 + 0x208);
  if (*(double *)(lVar1 + 0x208) <= *(double *)(lVar1 + 0x1d8)) {
    dVar9 = *(double *)(lVar1 + 0x1d8);
  }
  *(ulonglong *)(lVar1 + 0x1c8) = CONCAT44(uVar7,uVar6);
  *(double *)(lVar1 + 0x1d0) = dVar8;
  *(double *)(lVar1 + 0x1d8) = dVar9;
  return;
}

// CacheParticlesInFocalIslands @ 1482ea780

void __thiscall
FPhysicsReplicationLODAsync::CacheParticlesInFocalIslands(FPhysicsReplicationLODAsync *this)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  int iVar13;
  longlong lVar14;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_> *pTVar15
  ;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  FReadPhysicsObjectInterface<1> local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined4 local_68 [2];
  longlong local_60;
  FPBDIslandManager *local_58;
  
  lVar14 = this->_padding_;
  pTVar3 = &this->ParticlesInFocalIslands;
  piVar1 = &(this->ParticlesInFocalIslands).ArrayMax;
  (this->ParticlesInFocalIslands).ArrayNum = 0;
  if ((this->ParticlesInFocalIslands).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  local_58 = (FPBDIslandManager *)(*(longlong *)(lVar14 + 0xbd0) + 0x100);
  local_res10[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
  uVar19 = (this->FocalParticles).ArrayNum - 1;
  if (-1 < (int)uVar19) {
    lVar18 = (longlong)(int)uVar19;
    pTVar4 = &this->FocalParticles;
    lVar14 = lVar18 * 8;
    do {
      uVar16 = ~uVar19 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar19 < (this->FocalParticles).ArrayNum) {
        uVar10 = uVar16;
      }
      local_res20 = lVar18;
      local_60 = lVar14;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar12 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle
                          (local_res10,
                           *(FPhysicsObject **)((pTVar4->AllocatorInstance).Data + lVar14));
      if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar10 = 0;
        if ((int)uVar19 < (this->FocalParticles).ArrayNum) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pTVar4->AllocatorInstance).Data + lVar18 * 8;
        iVar13 = (this->FocalParticles).ArrayNum + ~uVar19;
        if (iVar13 != 0) {
          memmove(pFVar6,pFVar6 + 8,(longlong)iVar13 << 3);
        }
        piVar2 = &(this->FocalParticles).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar4->AllocatorInstance,(this->FocalParticles).ArrayNum,
                   &(this->FocalParticles).ArrayMax);
        local_res20 = lVar18;
      }
      else {
        pTVar5 = &this->ParticleIslands;
        (this->ParticleIslands).ArrayNum = 0;
        if ((this->ParticleIslands).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&pTVar5->AllocatorInstance,0,&(this->ParticleIslands).ArrayMax);
        }
        pTVar15 = &this->IslandParticles;
        (this->IslandParticles).ArrayNum = 0;
        if ((this->IslandParticles).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&pTVar15->AllocatorInstance,0,&(this->IslandParticles).ArrayMax);
        }
        Chaos::Private::FPBDIslandManager::FindParticleIslands(local_58,pTVar12,pTVar5);
        Chaos::Private::FPBDIslandManager::FindParticlesInIslands(local_58,pTVar5,pTVar15);
        pFVar17 = (pTVar15->AllocatorInstance).Data;
        iVar13 = (this->IslandParticles).ArrayNum;
        pFVar6 = pFVar17 + (longlong)iVar13 * 8;
        while( true ) {
          if ((this->IslandParticles).ArrayNum != iVar13) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (pFVar17 == pFVar6) break;
          if (*(char *)(*(longlong *)pFVar17 + 0xc) != '\0') {
            local_68[0] = *(undefined4 *)(*(longlong *)pFVar17 + 0x10);
            pFVar7 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)local_68) &&
                ((FScriptContainerElement *)local_68 < pFVar7 + (longlong)*piVar1 * 4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = (this->ParticlesInFocalIslands).ArrayNum;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->ParticlesInFocalIslands).ArrayNum = iVar11 + 1;
            *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_68[0];
          }
          pFVar17 = pFVar17 + 8;
        }
      }
      lVar18 = local_res20 + -1;
      lVar14 = local_60 + -8;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
  }
  return;
}

// ConsumeAsyncInput @ 1482f0a00

void __thiscall FPhysicsReplicationLODAsync::ConsumeAsyncInput(FPhysicsReplicationLODAsync *this)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x11) != '\0') {
      this->bEnabled = *(bool *)(lVar3 + 0x10);
    }
    Chaos::FPhysicsObjectInternalInterface::GetRead();
    puVar4 = *(undefined8 **)(lVar3 + 0x18);
    iVar2 = *(int *)(lVar3 + 0x20);
    puVar1 = puVar4 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x20) != iVar2) {
        `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar1) break;
      (**(code **)(this->_padding_ + 0x10))(this,*puVar4);
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0x28);
    iVar2 = *(int *)(lVar3 + 0x30);
    puVar1 = puVar4 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x30) != iVar2) {
        `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar1) break;
      (**(code **)(this->_padding_ + 0x18))(this,*puVar4);
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

// GetLODData_Internal @ 14830aa50

FPhysicsRepLodData * __thiscall
FPhysicsReplicationLODAsync::GetLODData_Internal
          (FPhysicsReplicationLODAsync *this,FPhysicsObject *param_1,uint param_2)

{
  FPhysicsRepLodData *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  FPhysicsRepLodData *pFVar8;
  FScriptContainerElement *pFVar9;
  FReadPhysicsObjectInterface<1> local_res8 [8];
  undefined1 local_res20 [8];
  
  if ((this->FocalParticles).ArrayNum == 0) {
    return (FPhysicsRepLodData *)0x0;
  }
  local_res8[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
  pTVar7 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle(local_res8,param_1);
  if (pTVar7 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return (FPhysicsRepLodData *)0x0;
  }
  pFVar9 = (this->FocalParticles).AllocatorInstance.Data;
  iVar3 = (this->FocalParticles).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->FocalParticles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar9 == pFVar2) break;
    if (param_1 == *(FPhysicsObject **)pFVar9) {
      return (FPhysicsRepLodData *)0x0;
    }
    pFVar9 = pFVar9 + 8;
  }
  pFVar1 = &this->LodData;
  pFVar1->DataAssigned = false;
  (this->LodData).AlignedTime = 0.0;
  (this->LodData).AlignedFrame = 0;
  (this->LodData).ReplicationMode = PredictiveInterpolation;
  (this->LodData).bKinematic = false;
  if ((param_2 & 1) != 0) {
    pFVar9 = (this->ParticlesInFocalIslands).AllocatorInstance.Data;
    pFVar2 = pFVar9 + (longlong)(this->ParticlesInFocalIslands).ArrayNum * 4;
    cVar5 = '\0';
    if (pFVar9 != pFVar2) {
      do {
        if (*(int *)pFVar9 == pTVar7->HandleIdx) {
          lVar4 = this->_padding_;
          pFVar1->DataAssigned = true;
          (this->LodData).ReplicationMode = Resimulation;
          (this->LodData).AlignedFrame = *(int *)(lVar4 + 0x328);
          (this->LodData).AlignedTime = 0.0;
          return pFVar1;
        }
        pFVar9 = pFVar9 + 4;
      } while (pFVar9 != pFVar2);
      cVar5 = pFVar1->DataAssigned;
    }
    if (cVar5 != '\0') {
      return pFVar1;
    }
  }
  bVar6 = PerformDistanceLOD(this,pTVar7,param_2);
  pFVar8 = (FPhysicsRepLodData *)0x0;
  if (bVar6) {
    pFVar8 = pFVar1;
  }
  return pFVar8;
}

// IsEnabled @ 148310af0

bool __thiscall FPhysicsReplicationLODAsync::IsEnabled(FPhysicsReplicationLODAsync *this)

{
  if ((PhysicsReplicationLODCVars::OverrideEnabled != -1) &&
     (((this->bEnabled != false || (PhysicsReplicationLODCVars::OverrideEnabled == 1)) &&
      (0 < (this->FocalParticles).ArrayNum)))) {
    return true;
  }
  return false;
}

// OnPhysicsObjectUnregistered_Internal @ 148313460

void __thiscall
FPhysicsReplicationLODAsync::OnPhysicsObjectUnregistered_Internal
          (FPhysicsReplicationLODAsync *this,FPhysicsObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148313468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].ParticleAABB.MMax.field_0x10 + 0x18))
            (&this[-1].ParticleAABB.MMax.field_0x10);
  return;
}

// OnPostInitialize_Internal @ 1483134e0

void __thiscall
FPhysicsReplicationLODAsync::OnPostInitialize_Internal(FPhysicsReplicationLODAsync *this)

{
  *(undefined1 **)(this->_padding_ + 600) = &this[-1].ParticleAABB.MMax.field_0x10;
  return;
}

// OnPreSimulate_Internal @ 1483145c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPhysicsReplicationLODAsync::OnPreSimulate_Internal(FPhysicsReplicationLODAsync *this)

{
  FWindowsRecursiveMutex *pFVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  FColor_u_0 FVar7;
  FColor_u_0 FVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  FDebugDrawQueue *pFVar15;
  FDebugDrawQueue *pFVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auStack_4a8 [32];
  longlong local_488;
  longlong local_480;
  undefined1 local_478;
  FReadPhysicsObjectInterface<1> local_477 [3];
  uint local_474;
  undefined8 *local_470;
  longlong local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  TVector<double>_u_0 local_428 [2];
  FColor_u_0 local_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0;
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined4 local_3e0;
  double local_3d8;
  void *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_280;
  TVector<double>_u_0 local_278 [2];
  FColor_u_0 local_248;
  undefined4 local_244;
  undefined1 local_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined4 local_230;
  double local_228;
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  if (PhysicsReplicationLODCVars::bDrawDebugEnabled) {
    local_477[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
    dVar10 = __real_3fd0000000000000;
    dVar9 = __real_3fe0000000000000;
    local_474 = *(uint *)&(this->FocalParticles).AllocatorInstance.Data;
    uVar17 = (ulonglong)(int)local_474;
    puVar21 = *(undefined8 **)&(this->LodData).ReplicationMode;
    puVar20 = puVar21 + uVar17;
    local_470 = puVar20;
    while( true ) {
      if (*(int *)&(this->FocalParticles).AllocatorInstance.Data != (int)uVar17) {
        local_478 = 0;
        `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_478);
      }
      if (puVar21 == puVar20) break;
      pTVar14 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle
                          (local_477,(FPhysicsObject *)*puVar21);
      if (pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        fVar33 = PhysicsReplicationLODCVars::MinimumBaseDistance;
        if (PhysicsReplicationLODCVars::MinimumBaseDistance < 0.0) {
          fVar33 = *(float *)&this->bEnabled;
        }
        fVar30 = PhysicsReplicationLODCVars::BaseDistanceRadiusMultiplier;
        if (PhysicsReplicationLODCVars::BaseDistanceRadiusMultiplier < 0.0) {
          fVar30 = *(float *)&this->DefaultSettings;
        }
        fVar29 = PhysicsReplicationLODCVars::BaseDistancesForFullPrediction;
        if (PhysicsReplicationLODCVars::BaseDistancesForFullPrediction < 0.0) {
          fVar29 = (this->DefaultSettings).BaseDistanceRadiusMultiplier;
        }
        fVar31 = PhysicsReplicationLODCVars::BaseDistancesForResimulationMode;
        if (PhysicsReplicationLODCVars::BaseDistancesForResimulationMode < 0.0) {
          fVar31 = (this->DefaultSettings).MinimumBaseDistance;
        }
        uVar2 = (uint)pTVar14->_padding_;
        lVar18 = (longlong)(int)uVar2;
        lVar22 = pTVar14->_padding_;
        iVar3 = *(int *)(lVar22 + 0x118);
        uVar13 = 0;
        if ((int)uVar2 < iVar3) {
          uVar13 = ~uVar2 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (local_488 = lVar18, local_480 = (longlong)iVar3,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x110);
        dVar25 = *(double *)(lVar22 + 0x18 + lVar18 * 0x30) - *(double *)(lVar22 + lVar18 * 0x30);
        dVar24 = *(double *)(lVar22 + 0x20 + lVar18 * 0x30) -
                 *(double *)(lVar22 + 8 + lVar18 * 0x30);
        dVar26 = *(double *)(lVar22 + 0x28 + lVar18 * 0x30) -
                 *(double *)(lVar22 + 0x10 + lVar18 * 0x30);
        auVar27._0_8_ = dVar26 * dVar26;
        auVar27._8_8_ = 0;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = (dVar25 * dVar25 + dVar24 * dVar24 + auVar27._0_8_) * dVar10;
        auVar28 = sqrtpd(auVar27,auVar28);
        fVar33 = (float)(auVar28._0_8_ * (double)fVar30 + (double)fVar33);
        cVar12 = (**(code **)(*(longlong *)&this[-1].ParticleAABB.MMax.field_0x10 + 8))
                           (&this[-1].ParticleAABB.MMax.field_0x10);
        FVar7 = FColor::Black.field0_0x0;
        if (cVar12 != '\0') {
          FVar7 = FColor::Blue.field0_0x0;
        }
        cVar12 = (**(code **)(*(longlong *)&this[-1].ParticleAABB.MMax.field_0x10 + 8))();
        FVar8 = FColor::Black.field0_0x0;
        if (cVar12 != '\0') {
          FVar8 = FColor::Red.field0_0x0;
        }
        pFVar15 = Chaos::FDebugDrawQueue::GetInstance();
        uVar2 = (uint)pTVar14->_padding_;
        lVar22 = (longlong)(int)uVar2;
        local_468 = pTVar14->_padding_;
        uVar13 = 0;
        if ((int)uVar2 < *(int *)(local_468 + 0x118)) {
          uVar13 = ~uVar2 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (local_488 = lVar22, local_480 = (longlong)*(int *)(local_468 + 0x118),
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar2 = (uint)pTVar14->_padding_;
        lVar23 = (longlong)(int)uVar2;
        lVar18 = *(longlong *)(local_468 + 0x110);
        dVar24 = *(double *)(lVar18 + 0x20 + lVar22 * 0x30) -
                 *(double *)(lVar18 + 8 + lVar22 * 0x30);
        dVar25 = *(double *)(lVar18 + 0x18 + lVar22 * 0x30) - *(double *)(lVar18 + lVar22 * 0x30);
        dVar26 = *(double *)(lVar18 + 0x28 + lVar22 * 0x30) -
                 *(double *)(lVar18 + 0x10 + lVar22 * 0x30);
        local_468 = pTVar14->_padding_;
        uVar13 = 0;
        if ((int)uVar2 < *(int *)(local_468 + 0x148)) {
          uVar13 = ~uVar2 >> 0x1f;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (dVar25 * dVar25 + dVar24 * dVar24 + dVar26 * dVar26) * dVar10;
        auVar28 = sqrtpd(unaff_XMM10,auVar5);
        auVar32._8_8_ = auVar28._8_8_;
        auVar32._0_8_ = auVar28._0_8_ + (double)(fVar33 * fVar29);
        if ((uVar13 == 0) &&
           (local_488 = lVar23, local_480 = (longlong)*(int *)(local_468 + 0x148),
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar22 = *(longlong *)(local_468 + 0x140);
        dVar24 = (*(double *)(lVar22 + 0x18 + lVar23 * 0x30) - *(double *)(lVar22 + lVar23 * 0x30))
                 * dVar9 + *(double *)(lVar22 + lVar23 * 0x30);
        dVar25 = (*(double *)(lVar22 + 0x20 + lVar23 * 0x30) -
                 *(double *)(lVar22 + 8 + lVar23 * 0x30)) * dVar9 +
                 *(double *)(lVar22 + 8 + lVar23 * 0x30);
        dVar26 = (*(double *)(lVar22 + 0x28 + lVar23 * 0x30) -
                 *(double *)(lVar22 + 0x10 + lVar23 * 0x30)) * dVar9 +
                 *(double *)(lVar22 + 0x10 + lVar23 * 0x30);
        pFVar16 = Chaos::FDebugDrawQueue::GetInstance();
        if ((pFVar16->bEnableDebugDrawing != false) &&
           (pFVar16 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar16->NumConsumers)) {
          pFVar1 = &pFVar15->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_148314d6c;
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_460 = dVar24;
          local_458 = dVar25;
          local_450 = dVar26;
          bVar11 = Chaos::FDebugDrawQueue::AcceptCommand
                             (pFVar15,0x40,(TVector<double,3> *)&local_460);
          if (bVar11) {
            local_360 = (void *)0x0;
            local_358 = 0;
            local_350 = 0;
            local_3f0 = 0;
            local_3e4 = 0;
            local_3f4 = 8;
            local_3e8 = 0xbf800000;
            local_3e0 = 0x3f800000;
            local_280 = 3;
            local_428[0]._0_8_ = dVar24;
            local_428[0]._8_8_ = dVar25;
            local_428[0]._16_8_ = dVar26;
            local_3f8 = FVar7;
            local_3d8 = auVar32._0_8_;
            Chaos::FDebugDrawQueue::AddCommand(pFVar15,(FLatentDrawCommand *)&local_428[0]._s_0);
            if (local_360 != (void *)0x0) {
              FMemory::Free(local_360);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
        pFVar15 = Chaos::FDebugDrawQueue::GetInstance();
        uVar2 = (uint)pTVar14->_padding_;
        lVar18 = (longlong)(int)uVar2;
        lVar22 = pTVar14->_padding_;
        iVar3 = *(int *)(lVar22 + 0x118);
        uVar13 = 0;
        if ((int)uVar2 < iVar3) {
          uVar13 = ~uVar2 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (local_488 = lVar18, local_480 = (longlong)iVar3,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x110);
        uVar2 = (uint)pTVar14->_padding_;
        lVar19 = (longlong)(int)uVar2;
        lVar23 = pTVar14->_padding_;
        dVar25 = *(double *)(lVar22 + 0x18 + lVar18 * 0x30) - *(double *)(lVar22 + lVar18 * 0x30);
        dVar24 = *(double *)(lVar22 + 0x20 + lVar18 * 0x30) -
                 *(double *)(lVar22 + 8 + lVar18 * 0x30);
        dVar26 = *(double *)(lVar22 + 0x28 + lVar18 * 0x30) -
                 *(double *)(lVar22 + 0x10 + lVar18 * 0x30);
        iVar3 = *(int *)(lVar23 + 0x148);
        uVar13 = 0;
        if ((int)uVar2 < iVar3) {
          uVar13 = ~uVar2 >> 0x1f;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (dVar25 * dVar25 + dVar24 * dVar24 + dVar26 * dVar26) * dVar10;
        auVar28 = sqrtpd(auVar32,auVar6);
        unaff_XMM10._8_8_ = auVar28._8_8_;
        unaff_XMM10._0_8_ = auVar28._0_8_ + (double)(fVar33 * fVar31);
        if ((uVar13 == 0) &&
           (local_488 = lVar19, local_480 = (longlong)iVar3,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar22 = *(longlong *)(lVar23 + 0x140);
        dVar24 = (*(double *)(lVar22 + 0x18 + lVar19 * 0x30) - *(double *)(lVar22 + lVar19 * 0x30))
                 * dVar9 + *(double *)(lVar22 + lVar19 * 0x30);
        dVar25 = (*(double *)(lVar22 + 0x20 + lVar19 * 0x30) -
                 *(double *)(lVar22 + 8 + lVar19 * 0x30)) * dVar9 +
                 *(double *)(lVar22 + 8 + lVar19 * 0x30);
        dVar26 = (*(double *)(lVar22 + 0x28 + lVar19 * 0x30) -
                 *(double *)(lVar22 + 0x10 + lVar19 * 0x30)) * dVar9 +
                 *(double *)(lVar22 + 0x10 + lVar19 * 0x30);
        pFVar16 = Chaos::FDebugDrawQueue::GetInstance();
        puVar20 = local_470;
        if ((pFVar16->bEnableDebugDrawing != false) &&
           (pFVar16 = Chaos::FDebugDrawQueue::GetInstance(), puVar20 = local_470,
           0 < pFVar16->NumConsumers)) {
          pFVar1 = &pFVar15->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_148314d6c:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_448 = dVar24;
          local_440 = dVar25;
          local_438 = dVar26;
          bVar11 = Chaos::FDebugDrawQueue::AcceptCommand
                             (pFVar15,0x40,(TVector<double,3> *)&local_448);
          if (bVar11) {
            local_1b0 = (void *)0x0;
            local_1a8 = 0;
            local_1a0 = 0;
            local_244 = 8;
            local_240 = 0;
            local_238 = 0xbf800000;
            local_234 = 0;
            local_230 = 0x3f800000;
            local_d0 = 3;
            local_278[0]._0_8_ = dVar24;
            local_278[0]._8_8_ = dVar25;
            local_278[0]._16_8_ = dVar26;
            local_248 = FVar8;
            local_228 = unaff_XMM10._0_8_;
            Chaos::FDebugDrawQueue::AddCommand(pFVar15,(FLatentDrawCommand *)&local_278[0]._s_0);
            if (local_1b0 != (void *)0x0) {
              FMemory::Free(local_1b0);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          puVar20 = local_470;
        }
      }
      uVar17 = (ulonglong)local_474;
      puVar21 = puVar21 + 1;
    }
  }
  return;
}

// PerformDistanceLOD @ 1483167d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPhysicsReplicationLODAsync::PerformDistanceLOD
          (FPhysicsReplicationLODAsync *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          uint param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  undefined1 auVar14 [12];
  undefined8 uVar15;
  float fVar16;
  FPhysicsReplicationLODAsync *pFVar17;
  EObjectStateType EVar18;
  bool bVar19;
  undefined1 uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  TGeometryParticleHandleImp<double,3,1> *pTVar24;
  TAABB<double,3> *pTVar25;
  TVector<double,3> *pTVar26;
  TGeometryParticleHandleImp<double,3,1> *pTVar27;
  FLinearColor *pFVar28;
  FDebugDrawQueue *pFVar29;
  FDebugDrawQueue *pFVar30;
  int iVar31;
  uint *puVar32;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  undefined1 *puVar33;
  FScriptContainerElement *pFVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  longlong lVar37;
  FPBDIslandManager *this_01;
  float fVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined8 uVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar46;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  double dVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auStackY_568 [32];
  undefined1 local_538;
  undefined1 local_537;
  undefined1 local_536;
  FReadPhysicsObjectInterface<1> local_535;
  undefined4 local_534;
  undefined1 local_530 [4];
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  FPhysicsReplicationLODAsync *local_518;
  FScriptContainerElement *local_510;
  TGeometryParticleHandleImp<double,3,1> *local_508;
  undefined4 local_500 [2];
  undefined1 local_4f8 [16];
  double local_4e8;
  FPhysicsReplicationLODAsync *local_4e0;
  TPairInitializer<int_&&,FPhysicsRepLodData_const_&> local_4d8;
  double local_4c8;
  FScriptContainerElement *local_4c0;
  undefined4 *local_4b8;
  FPhysicsRepLodData *local_4b0;
  undefined1 local_4a8 [16];
  double local_498;
  undefined1 local_490 [16];
  double local_480;
  FLinearColor local_478 [2];
  double local_458;
  TVector<double>_u_0 local_448;
  double local_430;
  double local_428;
  double local_420;
  undefined4 local_418;
  undefined1 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined1 local_404;
  undefined4 local_400;
  void *local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_2a0;
  TVector<double>_u_0 local_298 [2];
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined4 local_250;
  double local_248;
  void *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_568;
  if ((param_2 & 2) == 0) {
    return false;
  }
  local_4d8.Value = (FPhysicsRepLodData *)this->_padding_;
  pTVar2 = &this->ParticleIslands;
  this_01 = (FPBDIslandManager *)(*(longlong *)(local_4d8.Value + 0xbd) + 0x100);
  (this->ParticleIslands).ArrayNum = 0;
  local_518 = this;
  local_508 = param_1;
  if ((this->ParticleIslands).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->ParticleIslands).ArrayMax);
  }
  Chaos::Private::FPBDIslandManager::FindParticleIslands(this_01,param_1,pTVar2);
  pFVar35 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->ParticleIslands).ArrayNum;
  pFVar34 = pFVar35 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->ParticleIslands).ArrayNum != iVar7) {
      local_538 = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_538);
    }
    if (pFVar35 == pFVar34) break;
    if (*(int *)&(this->CachedIslandLodData).field_0x8 ==
        *(int *)&(this->CachedIslandLodData).field_0x34) {
LAB_148316931:
      pFVar35 = pFVar35 + 8;
    }
    else {
      puVar9 = *(undefined1 **)&(this->CachedIslandLodData).field_0x40;
      puVar33 = &(this->CachedIslandLodData).field_0x38;
      if (puVar9 != (undefined1 *)0x0) {
        puVar33 = puVar9;
      }
      uVar21 = *(uint *)(puVar33 +
                        (ulonglong)
                        (*(int *)&(this->CachedIslandLodData).field_0x48 - 1U &
                        *(uint *)(*(longlong *)pFVar35 + 0x7c)) * 4);
      if (uVar21 == 0xffffffff) goto LAB_148316931;
      do {
        puVar23 = (uint *)((longlong)(int)uVar21 * 0x1c + *(longlong *)&this->CachedIslandLodData);
        if (*puVar23 == *(uint *)(*(longlong *)pFVar35 + 0x7c)) {
          puVar32 = puVar23 + 1;
          if (puVar23 == (uint *)0x0) {
            puVar32 = (uint *)0x0;
          }
          if (puVar32 != (uint *)0x0) {
            uVar53 = *(undefined8 *)puVar32;
            uVar15 = *(undefined8 *)(puVar32 + 2);
            (this->LodData).DataAssigned = (bool)(char)uVar53;
            *(int3 *)&(this->LodData).field_0x1 = (int3)((ulonglong)uVar53 >> 8);
            (this->LodData).AlignedTime = (float)(int)((ulonglong)uVar53 >> 0x20);
            (this->LodData).AlignedFrame = (int)uVar15;
            (this->LodData).ReplicationMode = (char)((ulonglong)uVar15 >> 0x20);
            (this->LodData).bKinematic = (bool)(char)((ulonglong)uVar15 >> 0x28);
            *(short *)&(this->LodData).field_0xe = (short)((ulonglong)uVar15 >> 0x30);
            return (this->LodData).DataAssigned;
          }
          goto LAB_148316931;
        }
        uVar21 = puVar23[5];
      } while (uVar21 != 0xffffffff);
      pFVar35 = pFVar35 + 8;
    }
  }
  *(undefined8 *)&(this->IslandAABB).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->IslandAABB).MMax.field_0x10 = 0xffefffffffffffff;
  local_4e0 = this;
  `FPhysicsReplicationLODAsync::PerformDistanceLOD'::__l2::<lambda_1>::operator()
            (&local_4e0,param_1);
  pTVar3 = &this->IslandParticles;
  (this->IslandParticles).ArrayNum = 0;
  if ((this->IslandParticles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,&(this->IslandParticles).ArrayMax);
  }
  Chaos::Private::FPBDIslandManager::FindParticlesInIslands(this_01,pTVar2,pTVar3);
  pFVar35 = (pTVar3->AllocatorInstance).Data;
  iVar7 = (this->IslandParticles).ArrayNum;
  pFVar34 = pFVar35 + (longlong)iVar7 * 8;
  local_510 = pFVar34;
  while( true ) {
    if ((this->IslandParticles).ArrayNum != iVar7) {
      local_537 = 0;
      `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_537);
    }
    pFVar17 = local_518;
    if (pFVar35 == pFVar34) break;
    pTVar27 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar35;
    cVar6 = *(char *)((longlong)&pTVar27->_padding_ + 4);
    if ((cVar6 != '\0') && (pTVar27->HandleIdx != local_508->HandleIdx)) {
      if (cVar6 == '\x01') {
LAB_148316ab0:
        Chaos::Private::FPBDIslandManager::FindParticleIslands(this_01,pTVar27,pTVar2);
      }
      else {
        pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (cVar6 != '\0') {
          pTVar24 = pTVar27;
        }
        if (pTVar24 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
            this_00 = pTVar24;
          }
          if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            EVar18 = Kinematic;
          }
          else {
            EVar18 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
          }
          if (EVar18 == Kinematic) goto LAB_148316ab0;
        }
      }
      pTVar25 = Chaos::TGeometryParticleHandleImp<double,3,1>::LocalBounds(pTVar27);
      pFVar17 = local_4e0;
      uVar53 = *(undefined8 *)&(pTVar25->MMin).field_0x8;
      *(undefined8 *)&(local_4e0->ParticleAABB).MMin = *(undefined8 *)&pTVar25->MMin;
      *(undefined8 *)&(local_4e0->ParticleAABB).MMin.field_0x8 = uVar53;
      *(undefined8 *)&(local_4e0->ParticleAABB).MMin.field_0x10 =
           *(undefined8 *)&(pTVar25->MMin).field_0x10;
      uVar53 = *(undefined8 *)&(pTVar25->MMax).field_0x8;
      *(undefined8 *)&(local_4e0->ParticleAABB).MMax = *(undefined8 *)&pTVar25->MMax;
      *(undefined8 *)&(local_4e0->ParticleAABB).MMax.field_0x8 = uVar53;
      uVar53 = 0;
      *(undefined8 *)&(local_4e0->ParticleAABB).MMax.field_0x10 =
           *(undefined8 *)&(pTVar25->MMax).field_0x10;
      pTVar26 = Chaos::TParticles<double,3>::GetX
                          ((TParticles<double,3> *)pTVar27->_padding_,(int)pTVar27->_padding_);
      auVar42 = *(undefined1 (*) [16])pTVar26;
      local_458 = *(double *)&pTVar26->field_0x10;
      auVar14._4_8_ = uVar53;
      auVar14._0_4_ = auVar42._4_4_;
      auVar47._0_8_ = auVar14._0_8_ << 0x20;
      auVar47._8_4_ = auVar42._8_4_;
      auVar47._12_4_ = auVar42._12_4_;
      dVar59 = local_458 + *(double *)&(pFVar17->ParticleAABB).MMin.field_0x10;
      *(double *)&(pFVar17->ParticleAABB).MMin =
           auVar42._0_8_ + *(double *)&(pFVar17->ParticleAABB).MMin;
      dVar39 = auVar47._8_8_ + *(double *)&(pFVar17->ParticleAABB).MMin.field_0x8;
      *(double *)&(pFVar17->ParticleAABB).MMin.field_0x10 = dVar59;
      *(double *)&(pFVar17->ParticleAABB).MMin.field_0x8 = dVar39;
      dVar4 = *(double *)&(pFVar17->ParticleAABB).MMax;
      dVar5 = *(double *)&(pFVar17->ParticleAABB).MMax.field_0x10;
      *(double *)&(pFVar17->ParticleAABB).MMax.field_0x8 =
           auVar47._8_8_ + *(double *)&(pFVar17->ParticleAABB).MMax.field_0x8;
      *(double *)&(pFVar17->ParticleAABB).MMax = auVar42._0_8_ + dVar4;
      *(double *)&(pFVar17->ParticleAABB).MMax.field_0x10 = local_458 + dVar5;
      dVar4 = *(double *)&(pFVar17->IslandAABB).MMin.field_0x8;
      dVar5 = *(double *)&(pFVar17->IslandAABB).MMin.field_0x10;
      if (dVar5 <= dVar59) {
        dVar59 = dVar5;
      }
      if (dVar39 <= dVar4) {
        dVar4 = dVar39;
      }
      dVar39 = *(double *)&(pFVar17->ParticleAABB).MMin;
      dVar5 = *(double *)&(pFVar17->IslandAABB).MMin;
      if (dVar5 <= dVar39) {
        dVar39 = dVar5;
      }
      *(double *)&(pFVar17->IslandAABB).MMin = dVar39;
      *(double *)&(pFVar17->IslandAABB).MMin.field_0x8 = dVar4;
      *(double *)&(pFVar17->IslandAABB).MMin.field_0x10 = dVar59;
      dVar59 = *(double *)&(pFVar17->ParticleAABB).MMax;
      dVar39 = *(double *)&(pFVar17->IslandAABB).MMax.field_0x8;
      dVar4 = *(double *)&(pFVar17->IslandAABB).MMax.field_0x10;
      uVar54 = SUB84(dVar4,0);
      uVar55 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)&(pFVar17->IslandAABB).MMax;
      if (dVar59 <= dVar5) {
        dVar59 = dVar5;
      }
      dVar5 = *(double *)&(pFVar17->ParticleAABB).MMax.field_0x8;
      if (dVar39 <= dVar5) {
        dVar39 = dVar5;
      }
      dVar5 = *(double *)&(pFVar17->ParticleAABB).MMax.field_0x10;
      if (dVar4 <= dVar5) {
        uVar54 = SUB84(dVar5,0);
        uVar55 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      *(double *)&(pFVar17->IslandAABB).MMax = dVar59;
      *(double *)&(pFVar17->IslandAABB).MMax.field_0x8 = dVar39;
      *(ulonglong *)&(pFVar17->IslandAABB).MMax.field_0x10 = CONCAT44(uVar55,uVar54);
      pFVar34 = local_510;
    }
    pFVar35 = pFVar35 + 8;
  }
  uVar60 = SUB84(__real_3fd0000000000000,0);
  uVar61 = (undefined4)((ulonglong)__real_3fd0000000000000 >> 0x20);
  uVar62 = SUB84(__real_3fe0000000000000,0);
  uVar63 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  dVar4 = *(double *)&(local_518->IslandAABB).MMin.field_0x8;
  dVar5 = *(double *)&(local_518->IslandAABB).MMin;
  dVar40 = *(double *)&(local_518->IslandAABB).MMax.field_0x8 - dVar4;
  dVar59 = *(double *)&(local_518->IslandAABB).MMin.field_0x10;
  dVar39 = *(double *)&(local_518->IslandAABB).MMax - dVar5;
  dVar45 = *(double *)&(local_518->IslandAABB).MMax.field_0x10 - dVar59;
  auVar50._0_8_ = dVar40 * dVar40;
  auVar50._8_8_ = 0;
  dVar4 = dVar40 * __real_3fe0000000000000 + dVar4;
  uVar54 = SUB84(dVar4,0);
  uVar55 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar59 = dVar45 * __real_3fe0000000000000 + dVar59;
  dVar5 = dVar39 * __real_3fe0000000000000 + dVar5;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = (dVar39 * dVar39 + auVar50._0_8_ + dVar45 * dVar45) * __real_3fd0000000000000;
  auVar42 = sqrtpd(auVar50,auVar42);
  local_510 = (FScriptContainerElement *)CONCAT44(local_510._4_4_,(float)auVar42._0_8_);
  local_4e8 = dVar59;
  local_535 = Chaos::FPhysicsObjectInternalInterface::GetRead();
  fVar16 = __real_3f800000;
  local_528 = PhysicsReplicationLODCVars::MinimumBaseDistance;
  if (PhysicsReplicationLODCVars::MinimumBaseDistance < 0.0) {
    local_528 = (pFVar17->DefaultSettings).MinimumBaseDistance;
  }
  local_52c = PhysicsReplicationLODCVars::BaseDistanceRadiusMultiplier;
  if (PhysicsReplicationLODCVars::BaseDistanceRadiusMultiplier < 0.0) {
    local_52c = (pFVar17->DefaultSettings).BaseDistanceRadiusMultiplier;
  }
  local_520 = PhysicsReplicationLODCVars::BaseDistancesForFullPrediction;
  if (PhysicsReplicationLODCVars::BaseDistancesForFullPrediction < 0.0) {
    local_520 = (pFVar17->DefaultSettings).BaseDistancesForFullPrediction;
  }
  local_524 = PhysicsReplicationLODCVars::BaseDistancesForResimulationMode;
  if (PhysicsReplicationLODCVars::BaseDistancesForResimulationMode < 0.0) {
    local_524 = (pFVar17->DefaultSettings).BaseDistancesForResimulationMode;
  }
  fVar56 = PhysicsReplicationLODCVars::TimeOverDistance;
  if (PhysicsReplicationLODCVars::TimeOverDistance <= 0.0) {
    fVar56 = (pFVar17->DefaultSettings).TimeOverDistance;
  }
  local_518 = (FPhysicsReplicationLODAsync *)CONCAT44(local_518._4_4_,fVar56);
  pFVar34 = (pFVar17->FocalParticles).AllocatorInstance.Data;
  iVar7 = (pFVar17->FocalParticles).ArrayNum;
  local_4c0 = pFVar34 + (longlong)iVar7 * 8;
  local_4f8._8_4_ = uVar54;
  local_4f8._0_8_ = dVar5;
  local_4f8._12_4_ = uVar55;
  do {
    pFVar35 = local_4c0;
    if ((pFVar17->FocalParticles).ArrayNum != iVar7) {
      local_536 = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_536);
    }
    if (pFVar34 == pFVar35) goto LAB_148317358;
    pTVar27 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle
                        (&local_535,*(FPhysicsObject **)pFVar34);
    if (pTVar27 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      uVar21 = (uint)pTVar27->_padding_;
      lVar36 = (longlong)(int)uVar21;
      lVar10 = pTVar27->_padding_;
      uVar22 = 0;
      if ((int)uVar21 < *(int *)(lVar10 + 0x118)) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        uVar20 = (*pcVar12)();
        return (bool)uVar20;
      }
      lVar10 = *(longlong *)(lVar10 + 0x110);
      uVar21 = (uint)pTVar27->_padding_;
      lVar37 = (longlong)(int)uVar21;
      lVar11 = pTVar27->_padding_;
      dVar45 = *(double *)(lVar10 + 0x18 + lVar36 * 0x30) - *(double *)(lVar10 + lVar36 * 0x30);
      dVar40 = *(double *)(lVar10 + 0x20 + lVar36 * 0x30) - *(double *)(lVar10 + 8 + lVar36 * 0x30);
      dVar39 = *(double *)(lVar10 + 0x28 + lVar36 * 0x30) -
               *(double *)(lVar10 + 0x10 + lVar36 * 0x30);
      auVar43._0_8_ = dVar40 * dVar40;
      auVar43._8_8_ = 0;
      uVar22 = 0;
      if ((int)uVar21 < *(int *)(lVar11 + 0x148)) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      auVar48._0_8_ =
           (dVar45 * dVar45 + auVar43._0_8_ + dVar39 * dVar39) * (double)CONCAT44(uVar61,uVar60);
      auVar48._8_8_ = 0;
      auVar42 = sqrtpd(auVar43,auVar48);
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        uVar20 = (*pcVar12)();
        return (bool)uVar20;
      }
      lVar10 = *(longlong *)(lVar11 + 0x140);
      fVar56 = (float)auVar42._0_8_ * local_52c + local_528;
      local_4c8 = (double)local_510._0_4_;
      dVar40 = (*(double *)(lVar10 + 0x18 + lVar37 * 0x30) - *(double *)(lVar10 + lVar37 * 0x30)) *
               (double)CONCAT44(uVar63,uVar62) + *(double *)(lVar10 + lVar37 * 0x30);
      local_508 = (TGeometryParticleHandleImp<double,3,1> *)
                  CONCAT44(local_508._4_4_,fVar56 * local_524);
      dVar45 = (*(double *)(lVar10 + 0x20 + lVar37 * 0x30) - *(double *)(lVar10 + 8 + lVar37 * 0x30)
               ) * (double)CONCAT44(uVar63,uVar62) + *(double *)(lVar10 + 8 + lVar37 * 0x30);
      dVar46 = dVar40 - dVar5;
      dVar41 = dVar45 - dVar4;
      dVar13 = (*(double *)(lVar10 + 0x28 + lVar37 * 0x30) -
               *(double *)(lVar10 + 0x10 + lVar37 * 0x30)) * __real_3fe0000000000000 +
               *(double *)(lVar10 + 0x10 + lVar37 * 0x30);
      dVar39 = dVar13 - dVar59;
      auVar49._0_8_ = dVar46 * dVar46 + dVar41 * dVar41 + dVar39 * dVar39;
      auVar49._8_8_ = 0;
      auVar50 = sqrtpd(auVar49,auVar49);
      dVar39 = (auVar50._0_8_ - (double)(float)auVar42._0_8_) - local_4c8;
      if (dVar39 <= __real_0000000000000000) {
        dVar39 = __real_0000000000000000;
      }
      fVar56 = (float)dVar39 - fVar56 * local_520;
      if (fVar56 <= 0.0) {
        fVar56 = 0.0;
      }
      fVar57 = fVar56 * local_518._0_4_ * __real_3a83126f;
      auVar44._8_8_ = (double)(float)auVar50._8_8_;
      fVar38 = (pFVar17->LodData).AlignedTime;
      fVar58 = fVar57;
      if (fVar57 <= fVar38) {
        fVar58 = fVar38;
      }
      auVar44._0_8_ = (double)fVar57 / *(double *)(local_4d8.Value + 0x2b);
      (pFVar17->LodData).AlignedTime = fVar58;
      iVar31 = local_4d8.Value[0x32].AlignedFrame;
      auVar51._0_4_ = (float)auVar44._0_8_;
      auVar51._4_4_ = (float)auVar50._8_8_;
      auVar51._8_8_ = 0;
      (pFVar17->LodData).DataAssigned = true;
      auVar42 = roundps(auVar44,auVar51,1);
      iVar31 = iVar31 - (int)auVar42._0_4_;
      iVar8 = (pFVar17->LodData).AlignedFrame;
      if (iVar31 < iVar8) {
        iVar31 = iVar8;
      }
      (pFVar17->LodData).AlignedFrame = iVar31;
      if (PhysicsReplicationLODCVars::bDrawDebugEnabled != false) {
        if (PhysicsReplicationLODCVars::DrawDebugWorstLatency <= fVar16) {
          PhysicsReplicationLODCVars::DrawDebugWorstLatency = fVar16;
        }
        fVar56 = (fVar56 * local_518._0_4_) / PhysicsReplicationLODCVars::DrawDebugWorstLatency;
        if (fVar16 <= fVar56) {
          fVar56 = fVar16;
        }
        pFVar28 = FLinearColor::MakeFromHSV8
                            (local_478,
                             -(char)((int)ROUND(__real_bf000000 - fVar56 * ___real_43cc0000) >> 1),
                             0x96,0xff);
        fVar56 = (pFVar28->field0_0x0)._s_0.B;
        fVar38 = (pFVar28->field0_0x0)._s_0.G;
        auVar52 = ZEXT416((uint)fVar38);
        if (fVar56 <= 0.0) {
          fVar56 = 0.0;
        }
        if (fVar38 <= 0.0) {
          auVar52 = ZEXT816(0) << 0x20;
        }
        if (fVar16 <= fVar56) {
          fVar56 = fVar16;
        }
        if (fVar16 <= auVar52._0_4_) {
          auVar52._0_4_ = fVar16;
        }
        fVar38 = (pFVar28->field0_0x0)._s_0.R;
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        if (fVar16 <= fVar38) {
          fVar38 = fVar16;
        }
        local_534 = CONCAT13(0xff,CONCAT12((char)(int)(fVar38 * __real_437f0000 + __real_3f000000),
                                           CONCAT11((char)(int)(auVar52._0_4_ * __real_437f0000 +
                                                               __real_3f000000),
                                                    (char)(int)(fVar56 * __real_437f0000 +
                                                               __real_3f000000))));
        pFVar29 = Chaos::FDebugDrawQueue::GetInstance();
        pFVar30 = Chaos::FDebugDrawQueue::GetInstance();
        uVar60 = local_534;
        if ((pFVar30->bEnableDebugDrawing != false) &&
           (pFVar30 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
          pFVar1 = &pFVar29->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_148317458;
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_498 = local_4e8;
          local_4a8._8_4_ = uVar54;
          local_4a8._0_8_ = dVar5;
          local_4a8._12_4_ = uVar55;
          bVar19 = Chaos::FDebugDrawQueue::AcceptCommand(pFVar29,3,(TVector<double,3> *)local_4a8);
          if (bVar19) {
            local_380 = (void *)0x0;
            local_378 = 0;
            local_370 = 0;
            local_410 = 0;
            local_404 = 0;
            local_40c = 0x3f800000;
            local_418 = uVar60;
            local_408 = 0xbf800000;
            local_400 = 0x3f800000;
            local_2a0 = 2;
            local_448._s_0.X = dVar5;
            local_448._s_0.Y = dVar4;
            local_448._s_0.Z = dVar59;
            local_430 = dVar40;
            local_428 = dVar45;
            local_420 = dVar13;
            Chaos::FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_448._s_0);
            if (local_380 != (void *)0x0) {
              FMemory::Free(local_380);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
        pFVar29 = Chaos::FDebugDrawQueue::GetInstance();
        pFVar30 = Chaos::FDebugDrawQueue::GetInstance();
        if ((pFVar30->bEnableDebugDrawing != false) &&
           (pFVar30 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
          pFVar1 = &pFVar29->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_148317458:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_480 = local_4e8;
          local_490._8_4_ = uVar54;
          local_490._0_8_ = dVar5;
          local_490._12_4_ = uVar55;
          bVar19 = Chaos::FDebugDrawQueue::AcceptCommand
                             (pFVar29,0x40,(TVector<double,3> *)local_490);
          if (bVar19) {
            local_248 = local_4c8;
            local_1d0 = (void *)0x0;
            local_1c8 = 0;
            local_1c0 = 0;
            local_260 = 0;
            local_254 = 0;
            local_268 = uVar60;
            local_264 = 8;
            local_258 = 0xbf800000;
            local_250 = 0x3f800000;
            local_f0 = 3;
            local_298[0]._0_8_ = dVar5;
            local_298[0]._8_8_ = dVar4;
            local_298[0]._16_8_ = dVar59;
            Chaos::FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_298[0]._s_0);
            if (local_1d0 != (void *)0x0) {
              FMemory::Free(local_1d0);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
      }
      if ((float)dVar39 <= local_508._0_4_) {
        (pFVar17->LodData).ReplicationMode = Resimulation;
LAB_148317358:
        pFVar35 = (pTVar2->AllocatorInstance).Data;
        iVar7 = (this->ParticleIslands).ArrayNum;
        pFVar34 = pFVar35 + (longlong)iVar7 * 8;
        while( true ) {
          if ((this->ParticleIslands).ArrayNum != iVar7) {
            `TCheckedPointerIterator<Chaos::Private::FPBDIsland_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_530);
          }
          if (pFVar35 == pFVar34) break;
          local_500[0] = *(undefined4 *)(*(longlong *)pFVar35 + 0x7c);
          local_4b8 = local_500;
          local_4b0 = &pFVar17->LodData;
          TSet<TTuple<int,FPhysicsRepLodData>,TDefaultMapHashableKeyFuncs<int,FPhysicsRepLodData,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&&,FPhysicsRepLodData_const_&>_>
                    ((TSet<TTuple<int,FPhysicsRepLodData>,TDefaultMapHashableKeyFuncs<int,FPhysicsRepLodData,0>,FDefaultSetAllocator>
                      *)&pFVar17->CachedIslandLodData,&local_4d8,(bool *)&local_4b8);
          pFVar35 = pFVar35 + 8;
        }
        return (pFVar17->LodData).DataAssigned;
      }
      uVar62 = SUB84(__real_3fe0000000000000,0);
      uVar63 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      uVar60 = SUB84(__real_3fd0000000000000,0);
      uVar61 = (undefined4)((ulonglong)__real_3fd0000000000000 >> 0x20);
    }
    pFVar34 = pFVar34 + 8;
  } while( true );
}

// PerformIslandLOD @ 148317470

bool __thiscall
FPhysicsReplicationLODAsync::PerformIslandLOD
          (FPhysicsReplicationLODAsync *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          uint param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  
  if ((param_2 & 1) == 0) {
    return false;
  }
  pFVar3 = (this->ParticlesInFocalIslands).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->ParticlesInFocalIslands).ArrayNum * 4;
  if (pFVar3 != pFVar1) {
    while (*(int *)pFVar3 != param_1->HandleIdx) {
      pFVar3 = pFVar3 + 4;
      if (pFVar3 == pFVar1) {
        return (this->LodData).DataAssigned;
      }
    }
    lVar2 = this->_padding_;
    (this->LodData).DataAssigned = true;
    (this->LodData).ReplicationMode = Resimulation;
    (this->LodData).AlignedFrame = *(int *)(lVar2 + 0x328);
    (this->LodData).AlignedTime = 0.0;
  }
  return (this->LodData).DataAssigned;
}

// ProcessInputs_Internal @ 14831a8d0

void __thiscall
FPhysicsReplicationLODAsync::ProcessInputs_Internal(FPhysicsReplicationLODAsync *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x11) != '\0') {
      *(undefined1 *)&this->_padding_ = *(undefined1 *)(lVar3 + 0x10);
    }
    Chaos::FPhysicsObjectInternalInterface::GetRead();
    puVar4 = *(undefined8 **)(lVar3 + 0x18);
    iVar2 = *(int *)(lVar3 + 0x20);
    puVar1 = puVar4 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x20) != iVar2) {
        `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar1) break;
      (**(code **)(*(longlong *)&this[-1].ParticleAABB.MMax.field_0x10 + 0x10))
                (&this[-1].ParticleAABB.MMax.field_0x10,*puVar4);
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0x28);
    iVar2 = *(int *)(lVar3 + 0x30);
    puVar1 = puVar4 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x30) != iVar2) {
        `TCheckedPointerIterator<Chaos::FPhysicsObject_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar1) break;
      (**(code **)(*(longlong *)&this[-1].ParticleAABB.MMax.field_0x10 + 0x18))
                (&this[-1].ParticleAABB.MMax.field_0x10,*puVar4);
      puVar4 = puVar4 + 1;
    }
  }
  CacheParticlesInFocalIslands
            ((FPhysicsReplicationLODAsync *)&this[-1].ParticleAABB.MMax.field_0x10);
  TSet<TTuple<int,FPhysicsRepLodData>,TDefaultMapHashableKeyFuncs<int,FPhysicsRepLodData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FPhysicsRepLodData>,TDefaultMapHashableKeyFuncs<int,FPhysicsRepLodData,0>,FDefaultSetAllocator>
           *)&(this->ParticlesInFocalIslands).ArrayNum);
  return;
}

// RegisterFocalPoint_Internal @ 14831ad70

void __thiscall
FPhysicsReplicationLODAsync::RegisterFocalPoint_Internal
          (FPhysicsReplicationLODAsync *this,FPhysicsObject *param_1)

{
  int *piVar1;
  TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  FPhysicsObject *local_res10;
  
  if (param_1 != (FPhysicsObject *)0x0) {
    pTVar2 = &this->FocalParticles;
    uVar9 = 0;
    local_res10 = param_1;
    if (0 < (this->FocalParticles).ArrayNum) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->FocalParticles).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(FPhysicsObject **)((pTVar2->AllocatorInstance).Data + lVar8) == local_res10) {
          return;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar9 < (this->FocalParticles).ArrayNum);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar3 + (longlong)(this->FocalParticles).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->FocalParticles).ArrayNum;
    piVar1 = &(this->FocalParticles).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
      (this->FocalParticles).ArrayNum = iVar7;
    }
    (this->FocalParticles).ArrayNum = iVar7 + 1;
    *(FPhysicsObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_res10;
  }
  return;
}

// UnregisterFocalPoint_Internal @ 148326320

void __thiscall
FPhysicsReplicationLODAsync::UnregisterFocalPoint_Internal
          (FPhysicsReplicationLODAsync *this,FPhysicsObject *param_1)

{
  FPhysicsObject *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<Chaos::FPhysicsObject_const_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->FocalParticles,local_res10);
  return;
}

