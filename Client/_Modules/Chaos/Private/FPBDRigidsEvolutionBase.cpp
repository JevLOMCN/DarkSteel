// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 54

// DisableParticle @ 1438ade40

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DisableParticle
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  byte *pbVar2;
  FUniqueIdx FVar3;
  int iVar4;
  uint uVar5;
  TGeometryParticle<double,3> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  FUniqueIdx *pFVar10;
  FPendingSpatialData *pFVar11;
  FSpatialAccelerationIdx *pFVar12;
  TGeometryParticle<double,3> **ppTVar13;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  FCollisionFilterData FStack_44;
  FCollisionFilterData FStack_34;
  uint local_24;
  
  TestModeParticleDisabled(this,param_1);
  Chaos::Private::FPBDIslandManager::RemoveParticle(&this->IslandManager,param_1);
  pFVar10 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  FVar3.Idx = pFVar10->Idx;
  pFVar11 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar3,Delete);
  pFVar11->Operation = Delete;
  pFVar12 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  pFVar11->SpatialIdx = *pFVar12;
  ppTVar13 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
  pTVar6 = *ppTVar13;
  pFVar10 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  FStack_44.Word2 = 0;
  FStack_44.Word3 = 0;
  FStack_44.Word0 = 0;
  FStack_44.Word1 = 0;
  iVar4 = pFVar10->Idx;
  FStack_34.Word2 = 0;
  FStack_34.Word3 = 0;
  FStack_34.Word0 = 0;
  FStack_34.Word1 = 0;
  local_24 = local_24 & 0xffffff00;
  if (iVar4 == -1) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564217994>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xf76,"CachedUniqueIdx.IsValid()");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FAccelerationStructureHandle::
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&FStack_44);
  FAccelerationStructureHandle::
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&FStack_34);
  local_24 = CONCAT31(local_24._1_3_,1);
  (pFVar11->AccelerationHandle).ExternalGeometryParticle = pTVar6;
  (pFVar11->AccelerationHandle).GeometryParticleHandle = param_1;
  (pFVar11->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar4;
  (pFVar11->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_44.Word0;
  (pFVar11->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_44.Word1;
  (pFVar11->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_44.Word2;
  *(ulonglong *)&(pFVar11->AccelerationHandle).UnionQueryFilterData.Word3 =
       CONCAT44(FStack_34.Word0,FStack_44.Word3);
  (pFVar11->AccelerationHandle).UnionSimFilterData.Word1 = FStack_34.Word1;
  (pFVar11->AccelerationHandle).UnionSimFilterData.Word2 = FStack_34.Word2;
  *(ulonglong *)&(pFVar11->AccelerationHandle).UnionSimFilterData.Word3 =
       CONCAT44(local_24,FStack_34.Word3);
  FPendingSpatialInternalDataQueue::Remove(&this->InternalAccelerationQueue,FVar3);
  (**(code **)(this->InternalAcceleration->_padding_ + 0x88))
            (this->InternalAcceleration,pFVar11,pFVar11->SpatialIdx);
  FPBDRigidsSOAs::DisableParticle(this->Particles,param_1);
  pFVar16 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar4 = (this->ConstraintContainers).ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar16 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar16 + 0x38))(*(longlong **)pFVar16,param_1);
    pFVar16 = pFVar16 + 8;
  }
  pTVar14 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  RemoveConstraintsFromConstraintGraph(this,pTVar14);
  (**(code **)(*(longlong *)this + 0x18))(this,param_1);
  pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar15 = param_1;
  }
  if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar5 = (uint)pTVar15->_padding_;
    lVar7 = pTVar15->_padding_;
    uVar17 = 0;
    if ((int)uVar5 < *(int *)(lVar7 + 0x2e0)) {
      uVar17 = ~uVar5 >> 0x1f;
    }
    if (uVar17 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pbVar2 = (byte *)((longlong)(int)uVar5 * 0x10 + 10 + *(longlong *)(lVar7 + 0x2d8));
    *pbVar2 = *pbVar2 & 0xfb;
  }
  FChaosVisualDebuggerTrace::TraceParticle(param_1);
  return;
}

// EnableParticle @ 1438aee20

void __thiscall
Chaos::FPBDRigidsEvolutionBase::EnableParticle
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  int iVar3;
  FUniqueIdx FVar4;
  FPBDRigidsSOAs *this_00;
  TGeometryParticle<double,3> *pTVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FSpatialAccelerationIdx FVar10;
  undefined2 uVar11;
  undefined7 uVar12;
  bool bVar13;
  EObjectStateType EVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  ClusterId *pCVar17;
  FRigidClusteredFlags_u_0 *pFVar18;
  IPhysicsProxyBase *pIVar19;
  IPhysicsProxyBase *pIVar20;
  bool *pbVar21;
  FUniqueIdx *pFVar22;
  FPendingSpatialData *pFVar23;
  TGeometryParticle<double,3> **ppTVar24;
  FSpatialAccelerationIdx *pFVar25;
  FPendingSpatialData *pFVar26;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar27;
  FScriptContainerElement *pFVar28;
  TGeometryParticleHandleImp<double,3,1> *pTVar29;
  undefined1 local_res8 [8];
  FCollisionFilterData FStack_44;
  FCollisionFilterData FStack_34;
  uint local_24;
  
  this_00 = this->Particles;
  pTVar29 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 4);
  pTVar16 = pTVar29;
  if (1 < bVar2) {
    pTVar16 = param_1;
  }
  if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar16 = pTVar29;
    if (bVar2 != 0) {
      pTVar16 = param_1;
    }
    if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar27 = (TKinematicGeometryParticlesImp<double,3,0> *)(this_00->StaticParticles).Ptr;
    }
    else {
      pTVar27 = (this_00->KinematicParticles).Ptr;
    }
    TGeometryParticleHandleImp<double,3,1>::MoveToSOA
              (param_1,(TGeometryParticlesImp<double,3,0> *)pTVar27);
  }
  else {
    TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16,false);
    bVar2 = *(byte *)((longlong)&param_1->_padding_ + 4);
    pTVar15 = pTVar29;
    if (5 < bVar2) {
      pTVar15 = param_1;
    }
    if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar15 = pTVar29;
      if (2 < bVar2) {
        pTVar15 = param_1;
      }
      if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        FPBDRigidsSOAs::SetDynamicParticleSOA
                  (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
      }
      else {
        FPBDRigidsSOAs::InsertClusteredParticle
                  (this_00,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar15);
      }
    }
    else {
      FPBDRigidsSOAs::RemoveGeometryCollectionParticle
                (this_00,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar15);
      FPBDRigidsSOAs::InsertGeometryCollectionParticle
                (this_00,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar15);
    }
    bVar13 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
    if (!bVar13) {
      pTVar15 = pTVar29;
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        pTVar15 = param_1;
      }
      if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_01 = pTVar29;
        if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
          this_01 = pTVar15;
        }
        if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar14 = Kinematic;
        }
        else {
          EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
        }
        if (EVar14 == Dynamic) {
          FPBDRigidsSOAs::AddToActiveArray
                    (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
        }
      }
    }
  }
  if (CVars::bChaosSolverCheckParticleViews != false) {
    FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,param_1);
  }
  FPBDRigidsSOAs::UpdateViews(this_00);
  pFVar28 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar3 = (this->ConstraintContainers).ArrayNum;
  pFVar1 = pFVar28 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar28 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar28 + 0x40))();
    pFVar28 = pFVar28 + 8;
  }
  Chaos::Private::FPBDIslandManager::AddParticle(&this->IslandManager,param_1);
  pTVar16 = pTVar29;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar16 = param_1;
  }
  if ((pTVar16 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (bVar13 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16), bVar13)) {
    pTVar16 = pTVar29;
    if (2 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar16 = param_1;
    }
    if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      return;
    }
    pCVar17 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        ((TPBDRigidClusteredParticles<double,3> *)pTVar16->_padding_,
                         (int)pTVar16->_padding_);
    pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)pCVar17->Id;
    if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      return;
    }
    if (2 < *(byte *)((longlong)&pTVar16->_padding_ + 4)) {
      pTVar29 = pTVar16;
    }
    if (pTVar29 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2113888976451403243>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                          ,0x215,"false");
      if (!bVar13) {
        return;
      }
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar18 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         ((TPBDRigidClusteredParticles<double,3> *)pTVar29->_padding_,
                          (int)pTVar29->_padding_)->field0_0x0;
    if ((pFVar18->Bits & 1) == 0) {
      return;
    }
    pIVar19 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar29);
    pIVar20 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(param_1);
    if (pIVar19 != pIVar20) {
      return;
    }
  }
  pbVar21 = TGeometryParticlesImp<double,3,0>::HasCollision
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  if ((*pbVar21 != false) || (ForceNoCollisionIntoSQ != 0)) {
    pFVar22 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    FVar4.Idx = pFVar22->Idx;
    pFVar23 = FPendingSpatialInternalDataQueue::Add(&this->InternalAccelerationQueue,0,FVar4,Add);
    pFVar23->Operation = Add;
    ppTVar24 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                         ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                          (int)param_1->_padding_);
    pTVar5 = *ppTVar24;
    pFVar22 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    FStack_44.Word2 = 0;
    FStack_44.Word3 = 0;
    FStack_44.Word0 = 0;
    FStack_44.Word1 = 0;
    FStack_34.Word2 = 0;
    FStack_34.Word3 = 0;
    iVar3 = pFVar22->Idx;
    FStack_34.Word0 = 0;
    FStack_34.Word1 = 0;
    local_24 = local_24 & 0xffffff00;
    if ((iVar3 == -1) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3133560516564217994>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                            ,0xf76,"CachedUniqueIdx.IsValid()"), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_1,&FStack_44);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_1,&FStack_34);
    local_24 = CONCAT31(local_24._1_3_,1);
    (pFVar23->AccelerationHandle).ExternalGeometryParticle = pTVar5;
    (pFVar23->AccelerationHandle).GeometryParticleHandle = param_1;
    (pFVar23->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar3;
    (pFVar23->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_44.Word0;
    (pFVar23->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_44.Word1;
    (pFVar23->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_44.Word2;
    *(ulonglong *)&(pFVar23->AccelerationHandle).UnionQueryFilterData.Word3 =
         CONCAT44(FStack_34.Word0,FStack_44.Word3);
    (pFVar23->AccelerationHandle).UnionSimFilterData.Word1 = FStack_34.Word1;
    (pFVar23->AccelerationHandle).UnionSimFilterData.Word2 = FStack_34.Word2;
    *(ulonglong *)&(pFVar23->AccelerationHandle).UnionSimFilterData.Word3 =
         CONCAT44(local_24,FStack_34.Word3);
    pFVar25 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    pFVar23->SpatialIdx = *pFVar25;
    pFVar26 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar4,Add);
    pTVar29 = (pFVar23->AccelerationHandle).GeometryParticleHandle;
    (pFVar26->AccelerationHandle).ExternalGeometryParticle =
         (pFVar23->AccelerationHandle).ExternalGeometryParticle;
    (pFVar26->AccelerationHandle).GeometryParticleHandle = pTVar29;
    uVar7 = (pFVar23->AccelerationHandle).UnionQueryFilterData.Word0;
    uVar8 = (pFVar23->AccelerationHandle).UnionQueryFilterData.Word1;
    uVar9 = (pFVar23->AccelerationHandle).UnionQueryFilterData.Word2;
    (pFVar26->AccelerationHandle).CachedUniqueIdx =
         (FUniqueIdx)(pFVar23->AccelerationHandle).CachedUniqueIdx.Idx;
    (pFVar26->AccelerationHandle).UnionQueryFilterData.Word0 = uVar7;
    (pFVar26->AccelerationHandle).UnionQueryFilterData.Word1 = uVar8;
    (pFVar26->AccelerationHandle).UnionQueryFilterData.Word2 = uVar9;
    uVar7 = (pFVar23->AccelerationHandle).UnionSimFilterData.Word1;
    uVar8 = (pFVar23->AccelerationHandle).UnionSimFilterData.Word2;
    *(undefined8 *)&(pFVar26->AccelerationHandle).UnionQueryFilterData.Word3 =
         *(undefined8 *)&(pFVar23->AccelerationHandle).UnionQueryFilterData.Word3;
    (pFVar26->AccelerationHandle).UnionSimFilterData.Word1 = uVar7;
    (pFVar26->AccelerationHandle).UnionSimFilterData.Word2 = uVar8;
    FVar10 = pFVar23->SpatialIdx;
    uVar11 = *(undefined2 *)&pFVar23->field_0x3a;
    iVar3 = pFVar23->SyncTimestamp;
    *(undefined8 *)&(pFVar26->AccelerationHandle).UnionSimFilterData.Word3 =
         *(undefined8 *)&(pFVar23->AccelerationHandle).UnionSimFilterData.Word3;
    pFVar26->SpatialIdx = FVar10;
    *(undefined2 *)&pFVar26->field_0x3a = uVar11;
    pFVar26->SyncTimestamp = iVar3;
    uVar12 = *(undefined7 *)&pFVar23->field_0x41;
    pFVar26->Operation = pFVar23->Operation;
    *(undefined7 *)&pFVar26->field_0x41 = uVar12;
  }
  return;
}

// RemoveConstraintsFromConstraintGraph @ 1438cbcd0

void __thiscall
Chaos::FPBDRigidsEvolutionBase::RemoveConstraintsFromConstraintGraph
          (FPBDRigidsEvolutionBase *this,
          TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FConstraintHandle_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(FConstraintHandle **)pFVar3)->GraphEdge != (FPBDIslandConstraint *)0x0) {
      Chaos::Private::FPBDIslandManager::RemoveConstraint
                (&this->IslandManager,*(FConstraintHandle **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ResetConstraints @ 143b36db0

void __thiscall Chaos::FPBDRigidsEvolutionBase::ResetConstraints(FPBDRigidsEvolutionBase *this)

{
  FScriptContainerElement *pFVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FParticleCollisions *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TParticleHandleBase<double,3>_u_0 this_00;
  undefined1 local_res8 [8];
  int iStack_4c;
  undefined1 local_48 [24];
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  int local_20;
  
  Chaos::Private::FPBDIslandManager::Reset(&this->IslandManager);
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48,
             (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->AllParticlesView);
  if ((TGeometryParticlesImp<double,3,0> *)local_48._16_8_ !=
      (TGeometryParticlesImp<double,3,0> *)0x0) {
    this_00 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
    iVar8 = iStack_30;
    do {
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48);
      pTVar6 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                         (this_00.GeometryParticles,iVar8);
      pTVar6->ArrayNum = 0;
      if (pTVar6->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar6->AllocatorInstance,0,&pTVar6->ArrayMax);
      }
      pFVar7 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                         ((TGeometryParticlesImp<double,3,0> *)local_48._16_8_,iStack_30);
      (pFVar7->MidPhases).ArrayNum = 0;
      if ((pFVar7->MidPhases).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)pFVar7,0,&(pFVar7->MidPhases).ArrayMax);
      }
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48);
      this_00 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
      iVar8 = iStack_30;
      do {
        uVar4 = local_48._8_8_;
        if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_48._8_8_ ==
            (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar8 = iVar8 + 1;
          iStack_30 = iVar8;
          if (local_24 <= iVar8) {
LAB_143b36e98:
            local_28 = local_28 + 1;
            TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48
                      );
            this_00 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
            iVar8 = iStack_30;
          }
        }
        else {
          iVar8 = local_20 + 1;
          local_20 = iVar8;
          if (*(int *)(local_48._8_8_ + 8) <= iVar8) goto LAB_143b36e98;
          if (iVar8 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar4)->Data + (longlong)iVar8 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar2->GeometryParticles;
          iVar8 = *(int *)(pTVar2 + 1);
          if (this_00.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_4c = (uint)iStack_4c._1_3_ << 8;
          }
          else {
            iStack_4c = CONCAT31(iStack_4c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_2c = iStack_4c;
          iStack_30 = iVar8;
          local_48._16_8_ = this_00;
        }
        if (this_00.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
        goto LAB_143b36ecf;
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48);
        bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_48 + 0x10));
      } while (bVar5);
    } while (this_00.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
  }
LAB_143b36ecf:
  pFVar9 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar8 = (this->ConstraintContainers).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar8 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar8) {
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar9 + 0x10))();
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// CreateClusteredParticles @ 143c97610

TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::FPBDRigidsEvolutionBase::CreateClusteredParticles
          (FPBDRigidsEvolutionBase *this,
          TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          FPBDRigidParticleParameters *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FUniqueIdx FVar3;
  int iVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  TGeometryParticle<double,3> *pTVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FSpatialAccelerationIdx FVar11;
  undefined2 uVar12;
  undefined7 uVar13;
  bool bVar14;
  ClusterId *pCVar15;
  FRigidClusteredFlags_u_0 *pFVar16;
  IPhysicsProxyBase *pIVar17;
  IPhysicsProxyBase *pIVar18;
  bool *pbVar19;
  FUniqueIdx *pFVar20;
  FPendingSpatialData *pFVar21;
  TGeometryParticle<double,3> **ppTVar22;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar23;
  FSpatialAccelerationIdx *pFVar24;
  FPendingSpatialData *pFVar25;
  TGeometryParticleHandleImp<double,3,1> *pTVar26;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar27;
  undefined1 local_res8 [8];
  FCollisionFilterData FStack_54;
  FCollisionFilterData FStack_44;
  uint local_34;
  
  FPBDRigidsSOAs::CreateClusteredParticles
            (this->Particles,__return_storage_ptr__,param_1,param_2,param_3);
  pFVar27 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar2 = __return_storage_ptr__->ArrayNum;
  pFVar1 = pFVar27 + (longlong)iVar2 * 8;
  do {
    if (__return_storage_ptr__->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar27 == pFVar1) {
      return __return_storage_ptr__;
    }
    pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar27;
    pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
      pTVar26 = pTVar5;
    }
    if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143c9770f:
      pbVar19 = TGeometryParticlesImp<double,3,0>::HasCollision
                          ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                           (int)pTVar5->_padding_);
      if ((*pbVar19 != false) || (ForceNoCollisionIntoSQ != 0)) {
        pFVar20 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                             (int)pTVar5->_padding_);
        FVar3.Idx = pFVar20->Idx;
        pFVar21 = FPendingSpatialInternalDataQueue::Add
                            (&this->InternalAccelerationQueue,0,FVar3,Add);
        pFVar21->Operation = Update;
        ppTVar22 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                              (int)pTVar5->_padding_);
        pTVar6 = *ppTVar22;
        pFVar20 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                             (int)pTVar5->_padding_);
        iVar4 = pFVar20->Idx;
        FStack_54.Word2 = 0;
        FStack_54.Word3 = 0;
        FStack_54.Word0 = 0;
        FStack_54.Word1 = 0;
        FStack_44.Word2 = 0;
        FStack_44.Word3 = 0;
        FStack_44.Word0 = 0;
        FStack_44.Word1 = 0;
        local_34 = local_34 & 0xffffff00;
        if (iVar4 == -1) {
          bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3133560516564217994>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                              ,0xf76,"CachedUniqueIdx.IsValid()");
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            pTVar23 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)(*pcVar7)();
            return pTVar23;
          }
        }
        FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar5,&FStack_54);
        FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar5,&FStack_44);
        local_34 = CONCAT31(local_34._1_3_,1);
        (pFVar21->AccelerationHandle).ExternalGeometryParticle = pTVar6;
        (pFVar21->AccelerationHandle).GeometryParticleHandle = pTVar5;
        (pFVar21->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar4;
        (pFVar21->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_54.Word0;
        (pFVar21->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_54.Word1;
        (pFVar21->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_54.Word2;
        *(ulonglong *)&(pFVar21->AccelerationHandle).UnionQueryFilterData.Word3 =
             CONCAT44(FStack_44.Word0,FStack_54.Word3);
        (pFVar21->AccelerationHandle).UnionSimFilterData.Word1 = FStack_44.Word1;
        (pFVar21->AccelerationHandle).UnionSimFilterData.Word2 = FStack_44.Word2;
        *(ulonglong *)&(pFVar21->AccelerationHandle).UnionSimFilterData.Word3 =
             CONCAT44(local_34,FStack_44.Word3);
        pFVar24 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                             (int)pTVar5->_padding_);
        pFVar21->SpatialIdx = *pFVar24;
        pFVar25 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar3,Add);
        pTVar5 = (pFVar21->AccelerationHandle).GeometryParticleHandle;
        (pFVar25->AccelerationHandle).ExternalGeometryParticle =
             (pFVar21->AccelerationHandle).ExternalGeometryParticle;
        (pFVar25->AccelerationHandle).GeometryParticleHandle = pTVar5;
        uVar8 = (pFVar21->AccelerationHandle).UnionQueryFilterData.Word0;
        uVar9 = (pFVar21->AccelerationHandle).UnionQueryFilterData.Word1;
        uVar10 = (pFVar21->AccelerationHandle).UnionQueryFilterData.Word2;
        (pFVar25->AccelerationHandle).CachedUniqueIdx =
             (FUniqueIdx)(pFVar21->AccelerationHandle).CachedUniqueIdx.Idx;
        (pFVar25->AccelerationHandle).UnionQueryFilterData.Word0 = uVar8;
        (pFVar25->AccelerationHandle).UnionQueryFilterData.Word1 = uVar9;
        (pFVar25->AccelerationHandle).UnionQueryFilterData.Word2 = uVar10;
        uVar8 = (pFVar21->AccelerationHandle).UnionSimFilterData.Word1;
        uVar9 = (pFVar21->AccelerationHandle).UnionSimFilterData.Word2;
        *(undefined8 *)&(pFVar25->AccelerationHandle).UnionQueryFilterData.Word3 =
             *(undefined8 *)&(pFVar21->AccelerationHandle).UnionQueryFilterData.Word3;
        (pFVar25->AccelerationHandle).UnionSimFilterData.Word1 = uVar8;
        (pFVar25->AccelerationHandle).UnionSimFilterData.Word2 = uVar9;
        FVar11 = pFVar21->SpatialIdx;
        uVar12 = *(undefined2 *)&pFVar21->field_0x3a;
        iVar4 = pFVar21->SyncTimestamp;
        *(undefined8 *)&(pFVar25->AccelerationHandle).UnionSimFilterData.Word3 =
             *(undefined8 *)&(pFVar21->AccelerationHandle).UnionSimFilterData.Word3;
        pFVar25->SpatialIdx = FVar11;
        *(undefined2 *)&pFVar25->field_0x3a = uVar12;
        pFVar25->SyncTimestamp = iVar4;
        uVar13 = *(undefined7 *)&pFVar21->field_0x41;
        pFVar25->Operation = pFVar21->Operation;
        *(undefined7 *)&pFVar25->field_0x41 = uVar13;
      }
    }
    else {
      bVar14 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
      if (!bVar14) goto LAB_143c9770f;
      pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (2 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
        pTVar26 = pTVar5;
      }
      if (pTVar26 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar26->_padding_,
                             (int)pTVar26->_padding_);
        pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)pCVar15->Id;
        if (pTVar26 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (2 < *(byte *)((longlong)&pTVar26->_padding_ + 4)) {
            this_00 = pTVar26;
          }
          if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            bVar14 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                ,0x215,"false");
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              pTVar23 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                         *)(*pcVar7)();
              return pTVar23;
            }
          }
          else {
            pFVar16 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                 ((TPBDRigidClusteredParticles<double,3> *)this_00->_padding_,
                                  (int)this_00->_padding_)->field0_0x0;
            if ((pFVar16->Bits & 1) != 0) {
              pIVar17 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_00);
              pIVar18 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar5);
              if (pIVar17 == pIVar18) goto LAB_143c9770f;
            }
          }
        }
      }
    }
    pFVar27 = pFVar27 + 8;
  } while( true );
}

// DestroyParticle @ 143c99760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DestroyParticle
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FUniqueIdx FVar1;
  code *pcVar2;
  bool bVar3;
  FUniqueIdx *pFVar4;
  FPendingSpatialData *pFVar5;
  FSpatialAccelerationIdx *pFVar6;
  TGeometryParticle<double,3> **ppTVar7;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar8;
  undefined1 auStackY_108 [32];
  TGeometryParticleHandleImp<double,3,1> *local_d8;
  TGeometryParticle<double,3> *local_d0;
  TGeometryParticleHandleImp<double,3,1> *pTStack_c8;
  int local_c0;
  FCollisionFilterData FStack_bc;
  FCollisionFilterData FStack_ac;
  uint local_9c;
  initializer_list<Chaos::TGeometryParticleHandleImp<double,3,1>_*> local_98;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TestModeParticleDisabled(this,param_1);
  if (this->MRewindData != (FRewindData *)0x0) {
    TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
    ::Remove(&this->MRewindData->DirtyParticles,param_1,Default);
  }
  pFVar4 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  FVar1.Idx = pFVar4->Idx;
  pFVar5 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar1,Delete);
  pFVar5->Operation = Delete;
  pFVar6 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  pFVar5->SpatialIdx = *pFVar6;
  ppTVar7 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  local_d0 = *ppTVar7;
  pTStack_c8 = param_1;
  pFVar4 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  FStack_bc.Word2 = 0;
  FStack_bc.Word3 = 0;
  FStack_bc.Word0 = 0;
  FStack_bc.Word1 = 0;
  local_c0 = pFVar4->Idx;
  FStack_ac.Word2 = 0;
  FStack_ac.Word3 = 0;
  FStack_ac.Word0 = 0;
  FStack_ac.Word1 = 0;
  local_9c = local_9c & 0xffffff00;
  if (local_c0 == -1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564217994>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xf76,"CachedUniqueIdx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FAccelerationStructureHandle::
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&FStack_bc);
  FAccelerationStructureHandle::
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&FStack_ac);
  local_9c = CONCAT31(local_9c._1_3_,1);
  (pFVar5->AccelerationHandle).ExternalGeometryParticle = local_d0;
  (pFVar5->AccelerationHandle).GeometryParticleHandle = pTStack_c8;
  (pFVar5->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_c0;
  (pFVar5->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_bc.Word0;
  (pFVar5->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_bc.Word1;
  (pFVar5->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_bc.Word2;
  *(ulonglong *)&(pFVar5->AccelerationHandle).UnionQueryFilterData.Word3 =
       CONCAT44(FStack_ac.Word0,FStack_bc.Word3);
  (pFVar5->AccelerationHandle).UnionSimFilterData.Word1 = FStack_ac.Word1;
  (pFVar5->AccelerationHandle).UnionSimFilterData.Word2 = FStack_ac.Word2;
  *(ulonglong *)&(pFVar5->AccelerationHandle).UnionSimFilterData.Word3 =
       CONCAT44(local_9c,FStack_ac.Word3);
  FPendingSpatialInternalDataQueue::Remove(&this->InternalAccelerationQueue,FVar1);
  (**(code **)(this->InternalAcceleration->_padding_ + 0x88))
            (this->InternalAcceleration,pFVar5,pFVar5->SpatialIdx);
  local_98._First = &local_d8;
  local_98._Last = (TGeometryParticleHandleImp<double,3,1> **)&local_d0;
  local_d8 = param_1;
  pTVar8 = TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
           ::
           TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                     (&local_88,&local_98);
  DisconnectConstraints(this,pTVar8);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  (**(code **)(*(longlong *)this + 0x18))(this,param_1);
  Chaos::Private::FPBDIslandManager::RemoveParticle(&this->IslandManager,param_1);
  FPBDRigidsSOAs::DestroyParticle(this->Particles,param_1);
  return;
}

// DisableParticles @ 143c9a050

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DisableParticles
          (FPBDRigidsEvolutionBase *this,
          TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143c9a0ed;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_143c9a0ed:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143c9a1f0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_143c9a1f0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    DisableParticle(this,*(TGeometryParticleHandleImp<double,3,1> **)
                          (*(longlong *)&param_1->Elements +
                          (longlong)TStack_60.CurrentBitIndex * 0x10));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// DisconnectConstraints @ 143c9a270

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DisconnectConstraints
          (FPBDRigidsEvolutionBase *this,
          TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pFVar12 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar4 = (this->ConstraintContainers).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar12 + 0x30))(*(longlong **)pFVar12,param_1);
    pFVar12 = pFVar12 + 8;
  }
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar15 = 0;
  iVar17 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_143c9a34d;
      uVar14 = puVar18[lVar11 + 1];
    }
    uVar8 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar17 + -1 + (int)lVar11;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_143c9a34d:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar8,iVar15);
  TStack_78.CurrentBitIndex = iVar9;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iVar9;
  TStack_78.BaseBitIndex = iVar17;
  uStack_58 = CONCAT44(uStack_84,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res20 = uVar14;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar8) {
    puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar8;
      local_res20 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_143c9a450;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    local_res20 = uVar14;
    if ((int)uVar8 < (int)uVar14) {
      uVar14 = uVar8;
      local_res20 = uVar8;
    }
  }
LAB_143c9a450:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_78.CurrentBitIndex == uVar14) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10))
    break;
    puVar5 = *(undefined8 **)
              (*(longlong *)&param_1->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
    pTVar10 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                        ((TGeometryParticlesImp<double,3,0> *)*puVar5,*(int *)(puVar5 + 1));
    pFVar12 = (pTVar10->AllocatorInstance).Data;
    iVar4 = pTVar10->ArrayNum;
    pFVar2 = pFVar12 + (longlong)iVar4 * 8;
    while( true ) {
      if (pTVar10->ArrayNum != iVar4) {
        `TCheckedPointerIterator<Chaos::FConstraintHandle_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar2) break;
      if ((*(FConstraintHandle **)pFVar12)->GraphEdge != (FPBDIslandConstraint *)0x0) {
        Chaos::Private::FPBDIslandManager::RemoveConstraint
                  (&this->IslandManager,*(FConstraintHandle **)pFVar12);
      }
      pFVar12 = pFVar12 + 8;
    }
    pTVar10 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                        ((TGeometryParticlesImp<double,3,0> *)*puVar5,*(int *)(puVar5 + 1));
    pTVar10->ArrayNum = 0;
    if (pTVar10->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar10->AllocatorInstance,0,&pTVar10->ArrayMax);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    uVar14 = local_res20;
  }
  return;
}

// FPBDRigidsEvolutionBase @ 143d01450

FPBDRigidsEvolutionBase * __thiscall
Chaos::FPBDRigidsEvolutionBase::FPBDRigidsEvolutionBase
          (FPBDRigidsEvolutionBase *this,FPBDRigidsSOAs *param_1,
          THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_2,bool param_3)

{
  FUniqueIdx FVar1;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  TParticleHandleBase<double,3>_u_0 *pTVar3;
  code *pcVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FSpatialAccelerationIdx FVar9;
  undefined2 uVar10;
  undefined7 uVar11;
  undefined8 uVar12;
  EParticleType EVar13;
  bool bVar14;
  int iVar15;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar16;
  FTaskGraphInterface *pFVar17;
  ISpatialAccelerationCollectionFactory *pIVar18;
  ISpatialAccelerationCollectionFactory *pIVar19;
  ClusterId *pCVar20;
  IPhysicsProxyBase *pIVar21;
  IPhysicsProxyBase *pIVar22;
  bool *pbVar23;
  FUniqueIdx *pFVar24;
  FPendingSpatialData *pFVar25;
  TGeometryParticle<double,3> **ppTVar26;
  FPBDRigidsEvolutionBase *pFVar27;
  FSpatialAccelerationIdx *pFVar28;
  FPendingSpatialData *pFVar29;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar30;
  TPBDRigidParticleHandleImp<double,3,0> *this_00;
  TParticleHandleBase<double,3>_u_0 this_01;
  int iVar31;
  int iStack_9c;
  undefined1 local_98 [24];
  int iStack_80;
  EParticleType EStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TGeometryParticle<double,3> *local_68;
  TGeometryParticleHandleImp<double,3,1> *pTStack_60;
  int local_58;
  FCollisionFilterData FStack_54;
  FCollisionFilterData FStack_44;
  uint local_34;
  
  *(undefined ***)this = &___7FPBDRigidsEvolutionBase_Chaos__6B_;
  (this->ForceRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceRules).ArrayNum = 0;
  (this->ForceRules).ArrayMax = 0;
  (this->ImpulseRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImpulseRules).ArrayNum = 0;
  (this->ImpulseRules).ArrayMax = 0;
  *(undefined8 *)&this->ParticleUpdatePosition = 0;
  *(undefined8 *)&(this->ParticleUpdatePosition).field_0x28 = 0;
  *(undefined8 *)&this->KinematicUpdate = 0;
  *(undefined8 *)&(this->KinematicUpdate).field_0x28 = 0;
  *(undefined8 *)&this->CaptureRewindData = 0;
  *(undefined8 *)&(this->CaptureRewindData).field_0x28 = 0;
  *(undefined8 *)&this->CaptureRewindKinematicTarget = 0;
  *(undefined8 *)&(this->CaptureRewindKinematicTarget).field_0x28 = 0;
  (this->ConstraintContainers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintContainers).ArrayNum = 0;
  (this->ConstraintContainers).ArrayMax = 0;
  Chaos::Private::FPBDIslandManager::FPBDIslandManager(&this->IslandManager,param_1);
  Chaos::Private::FPBDIslandGroupManager::FPBDIslandGroupManager
            (&this->IslandGroupManager,&this->IslandManager);
  *(undefined8 *)&(this->PhysicsMaterials).field_0x8 = 0;
  *(undefined ***)&this->PhysicsMaterials =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_VFChaosPhysicsMaterial_Chaos___Chaos___Chaos__6B_
  ;
  *(undefined8 *)&(this->PhysicsMaterials).field_0x10 = 0;
  *(undefined ***)&this->PerParticlePhysicsMaterials =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFChaosPhysicsMaterial_Chaos__U__TDefaultDelete_VFChaosPhysicsMaterial_Chaos_______Chaos__6B_
  ;
  *(undefined8 *)&(this->PerParticlePhysicsMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->Collided).field_0x8 = 0;
  *(undefined8 *)&(this->Collided).field_0x10 = 0;
  *(undefined ***)&this->Collided = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->PerParticlePhysicsMaterials).field_0x10 = 0;
  this->SolverPhysicsMaterials = param_2;
  pIVar19 = (ISpatialAccelerationCollectionFactory *)0x0;
  this->Particles = param_1;
  this->InternalAcceleration =
       (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  this->AsyncInternalAcceleration =
       (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  this->AsyncExternalAcceleration =
       (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  this->MRewindData = (FRewindData *)0x0;
  (this->ExternalStructuresQueue).Tail =
       (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
        )0x0;
  (this->ExternalStructuresQueue).NumElems = (atomic<int>)0x0;
  aVar16 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
            )FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar16 = 0;
  (this->ExternalStructuresQueue).Tail = aVar16;
  (this->ExternalStructuresQueue).TailCopy = (FNode *)aVar16;
  (this->ExternalStructuresQueue).First = (FNode *)aVar16;
  (this->ExternalStructuresQueue).Head = (FNode *)aVar16;
  LOCK();
  (this->ExternalStructuresQueue).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->ExternalStructuresPool).Tail =
       (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
        )0x0;
  (this->ExternalStructuresPool).NumElems = (atomic<int>)0x0;
  aVar16 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
            )FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar16 = 0;
  (this->ExternalStructuresPool).Tail = aVar16;
  (this->ExternalStructuresPool).TailCopy = (FNode *)aVar16;
  (this->ExternalStructuresPool).First = (FNode *)aVar16;
  (this->ExternalStructuresPool).Head = (FNode *)aVar16;
  LOCK();
  (this->ExternalStructuresPool).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->AccelerationBackingBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccelerationBackingBuffer).ArrayNum = 0;
  (this->AccelerationBackingBuffer).ArrayMax = 0;
  this->bIsSingleThreaded = param_3;
  this->bCanStartAsyncTasks = true;
  (this->UniqueIndicesPendingRelease).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueIndicesPendingRelease).ArrayNum = 0;
  (this->UniqueIndicesPendingRelease).ArrayMax = 0;
  (this->MAllRemovals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MAllRemovals).ArrayNum = 0;
  (this->MAllRemovals).ArrayMax = 0;
  this->LatestExternalTimestampConsumed_Internal = -1;
  (this->AsyncAccelerationQueue).PendingData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->InternalAccelerationQueue).PendingDataArrays.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InternalAccelerationQueue).PendingDataArrays.ArrayNum = 0;
  (this->InternalAccelerationQueue).PendingDataArrays.ArrayMax = 0;
  (this->InternalAccelerationQueue).ParticleToPendingData.Entries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InternalAccelerationQueue).ParticleToPendingData.Entries.ArrayNum = 0;
  (this->InternalAccelerationQueue).ParticleToPendingData.Entries.ArrayMax = 0;
  (this->InternalAccelerationQueue).Duplicated.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InternalAccelerationQueue).Duplicated.ArrayNum = 0;
  (this->InternalAccelerationQueue).Duplicated.ArrayMax = 0;
  (this->InternalAccelerationQueue).KinematicBatchStartIndex = 0;
  (this->AsyncAccelerationQueue).PendingData.ArrayNum = 0;
  (this->AsyncAccelerationQueue).PendingData.ArrayMax = 0;
  (this->AsyncAccelerationQueue).ParticleToPendingData.Entries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AsyncAccelerationQueue).ParticleToPendingData.Entries.ArrayNum = 0;
  (this->AsyncAccelerationQueue).ParticleToPendingData.Entries.ArrayMax = 0;
  (this->TaskDispatcher).Particles = this->Particles;
  (this->TaskDispatcher).AsyncQueueDynTask.Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskDispatcher).AsyncQueueKinTask.Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskDispatcher).FlushAsyncQueueTask.Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskDispatcher).UpdateViewTask.Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskDispatcher).IntegrationPendingTasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TaskDispatcher).IntegrationPendingTasks.ArrayNum = 0;
  (this->TaskDispatcher).IntegrationPendingTasks.ArrayMax = 0;
  (this->TaskDispatcher).KinematicPendingTasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TaskDispatcher).KinematicPendingTasks.ArrayNum = 0;
  (this->TaskDispatcher).KinematicPendingTasks.ArrayMax = 0;
  (this->TaskDispatcher).InternalAccelerationQueue = &this->InternalAccelerationQueue;
  iVar31 = MaxNumWorkers;
  pFVar17 = FTaskGraphInterface::Get();
  iVar15 = (**(code **)((longlong)*pFVar17 + 0x20))(pFVar17);
  (this->TaskDispatcher).NumDynParticles = 0;
  (this->TaskDispatcher).NumKinBatches = 0;
  if (iVar15 < iVar31) {
    iVar31 = iVar15;
  }
  iVar15 = 1;
  if (1 < iVar31) {
    iVar15 = iVar31;
  }
  (this->TaskDispatcher).NumTasks = iVar15;
  (this->ParticleToCacheInnerIdx).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleToCacheInnerIdx).Entries.ArrayNum = 0;
  (this->ParticleToCacheInnerIdx).Entries.ArrayMax = 0;
  *(undefined8 *)&this->SpatialAccelerationCache = 0;
  *(undefined8 *)&(this->SpatialAccelerationCache).field_0x8 = 0;
  *(undefined8 *)&(this->SpatialAccelerationCache).field_0x20 = 0;
  *(undefined4 *)&(this->SpatialAccelerationCache).field_0x28 = 0;
  *(undefined4 *)&(this->SpatialAccelerationCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpatialAccelerationCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpatialAccelerationCache).field_0x34 = 0;
  *(undefined8 *)&(this->SpatialAccelerationCache).field_0x40 = 0;
  *(undefined4 *)&(this->SpatialAccelerationCache).field_0x48 = 0;
  (this->AccelerationStructureTaskComplete).Reference = (FBaseGraphTask *)0x0;
  this->bAccelerationStructureTaskStarted = (atomic<bool> *)0x0;
  this->bAccelerationStructureTaskSignalKill = (atomic<bool> *)0x0;
  pIVar18 = ::operator_new(8);
  if (pIVar18 != (ISpatialAccelerationCollectionFactory *)0x0) {
    *pIVar18 = (ISpatialAccelerationCollectionFactory)&___7FDefaultCollectionFactory_Chaos__6B_;
    pIVar19 = pIVar18;
  }
  (this->SpatialCollectionFactory).Ptr = pIVar19;
  (this->PendingReleaseIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingReleaseIndices).ArrayNum = 0;
  (this->PendingReleaseIndices).ArrayMax = 0;
  (this->EvolutionName).Name.Object = (FString *)0x0;
  (this->EvolutionName).Name.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->TestModeData = 0;
  *(undefined8 *)&(this->TestModeData).field_0x8 = 0;
  *(undefined8 *)&(this->TestModeData).field_0x20 = 0;
  this->bIsResim = false;
  this->bIsReset = false;
  *(undefined4 *)&(this->TestModeData).field_0x28 = 0;
  *(undefined4 *)&(this->TestModeData).field_0x2c = 0x80;
  *(undefined4 *)&(this->TestModeData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TestModeData).field_0x34 = 0;
  *(undefined8 *)&(this->TestModeData).field_0x40 = 0;
  *(undefined4 *)&(this->TestModeData).field_0x48 = 0;
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles->ParticleHandles,
             (TArrayCollectionArrayBase *)&this->PhysicsMaterials);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles->ParticleHandles,
             (TArrayCollectionArrayBase *)&this->PerParticlePhysicsMaterials);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->Particles->ParticleHandles,
             (TArrayCollectionArrayBase *)&this->Collided);
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,
             (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
              *)&param_1->NonDisabledView);
  if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
      (TGeometryParticlesImp<double,3,0> *)0x0) {
    this_01 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
    iVar31 = iStack_80;
    do {
      this_00 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      EVar13 = EStack_7c;
      pTVar30 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_98 + 0x10);
      if (EStack_7c < Rigid) {
        pTVar30 = this_00;
      }
      if ((pTVar30 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) ||
         (bVar14 = TPBDRigidParticleHandleImp<double,3,0>::Disabled(pTVar30), !bVar14)) {
LAB_143d01917:
        pbVar23 = TGeometryParticlesImp<double,3,0>::HasCollision(this_01.GeometryParticles,iVar31);
        if ((*pbVar23 != false) || (ForceNoCollisionIntoSQ != 0)) {
          pFVar24 = TGeometryParticlesImp<double,3,0>::UniqueIdx(this_01.GeometryParticles,iVar31);
          FVar1.Idx = pFVar24->Idx;
          pFVar25 = FPendingSpatialInternalDataQueue::Add
                              (&this->InternalAccelerationQueue,0,FVar1,Add);
          pFVar25->Operation = Update;
          ppTVar26 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                               (this_01.GeometryParticles,iVar31);
          local_68 = *ppTVar26;
          pTStack_60 = TGeometryParticleHandleImp<double,3,0>::Handle
                                 ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
          pFVar24 = TGeometryParticlesImp<double,3,0>::UniqueIdx(this_01.GeometryParticles,iVar31);
          local_58 = pFVar24->Idx;
          FStack_54.Word2 = 0;
          FStack_54.Word3 = 0;
          FStack_54.Word0 = 0;
          FStack_54.Word1 = 0;
          FStack_44.Word2 = 0;
          FStack_44.Word3 = 0;
          FStack_44.Word0 = 0;
          FStack_44.Word1 = 0;
          local_34 = local_34 & 0xffffff00;
          if ((local_58 == -1) &&
             (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                  ,0xf76,"CachedUniqueIdx.IsValid()"), bVar14)) {
            pcVar4 = (code *)swi(3);
            pFVar27 = (FPBDRigidsEvolutionBase *)(*pcVar4)();
            return pFVar27;
          }
          FAccelerationStructureHandle::
          ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10),&FStack_54);
          FAccelerationStructureHandle::
          ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10),&FStack_44);
          local_34 = CONCAT31(local_34._1_3_,1);
          (pFVar25->AccelerationHandle).ExternalGeometryParticle = local_68;
          (pFVar25->AccelerationHandle).GeometryParticleHandle = pTStack_60;
          (pFVar25->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_58;
          (pFVar25->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_54.Word0;
          (pFVar25->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_54.Word1;
          (pFVar25->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_54.Word2;
          *(ulonglong *)&(pFVar25->AccelerationHandle).UnionQueryFilterData.Word3 =
               CONCAT44(FStack_44.Word0,FStack_54.Word3);
          (pFVar25->AccelerationHandle).UnionSimFilterData.Word1 = FStack_44.Word1;
          (pFVar25->AccelerationHandle).UnionSimFilterData.Word2 = FStack_44.Word2;
          *(ulonglong *)&(pFVar25->AccelerationHandle).UnionSimFilterData.Word3 =
               CONCAT44(local_34,FStack_44.Word3);
          pFVar28 = TGeometryParticlesImp<double,3,0>::SpatialIdx(this_01.GeometryParticles,iVar31);
          pFVar25->SpatialIdx = *pFVar28;
          pFVar29 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar1,Add);
          pTVar5 = (pFVar25->AccelerationHandle).GeometryParticleHandle;
          (pFVar29->AccelerationHandle).ExternalGeometryParticle =
               (pFVar25->AccelerationHandle).ExternalGeometryParticle;
          (pFVar29->AccelerationHandle).GeometryParticleHandle = pTVar5;
          uVar6 = (pFVar25->AccelerationHandle).UnionQueryFilterData.Word0;
          uVar7 = (pFVar25->AccelerationHandle).UnionQueryFilterData.Word1;
          uVar8 = (pFVar25->AccelerationHandle).UnionQueryFilterData.Word2;
          (pFVar29->AccelerationHandle).CachedUniqueIdx =
               (FUniqueIdx)(pFVar25->AccelerationHandle).CachedUniqueIdx.Idx;
          (pFVar29->AccelerationHandle).UnionQueryFilterData.Word0 = uVar6;
          (pFVar29->AccelerationHandle).UnionQueryFilterData.Word1 = uVar7;
          (pFVar29->AccelerationHandle).UnionQueryFilterData.Word2 = uVar8;
          uVar6 = (pFVar25->AccelerationHandle).UnionSimFilterData.Word1;
          uVar7 = (pFVar25->AccelerationHandle).UnionSimFilterData.Word2;
          *(undefined8 *)&(pFVar29->AccelerationHandle).UnionQueryFilterData.Word3 =
               *(undefined8 *)&(pFVar25->AccelerationHandle).UnionQueryFilterData.Word3;
          (pFVar29->AccelerationHandle).UnionSimFilterData.Word1 = uVar6;
          (pFVar29->AccelerationHandle).UnionSimFilterData.Word2 = uVar7;
          FVar9 = pFVar25->SpatialIdx;
          uVar10 = *(undefined2 *)&pFVar25->field_0x3a;
          iVar15 = pFVar25->SyncTimestamp;
          *(undefined8 *)&(pFVar29->AccelerationHandle).UnionSimFilterData.Word3 =
               *(undefined8 *)&(pFVar25->AccelerationHandle).UnionSimFilterData.Word3;
          pFVar29->SpatialIdx = FVar9;
          *(undefined2 *)&pFVar29->field_0x3a = uVar10;
          pFVar29->SyncTimestamp = iVar15;
          uVar11 = *(undefined7 *)&pFVar25->field_0x41;
          pFVar29->Operation = pFVar25->Operation;
          *(undefined7 *)&pFVar29->field_0x41 = uVar11;
        }
      }
      else {
        pTVar30 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_98 + 0x10);
        if (EVar13 < Clustered) {
          pTVar30 = this_00;
        }
        if (pTVar30 != (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
          pCVar20 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                              (*(TPBDRigidClusteredParticles<double,3> **)pTVar30,
                               *(int *)&pTVar30->field_0x8);
          pTVar2 = pCVar20->Id;
          if (pTVar2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            if (2 < (byte)pTVar2->field_0xc) {
              this_00 = (TPBDRigidParticleHandleImp<double,3,0> *)pTVar2;
            }
            if (this_00 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
              bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                  ,0x215,"false");
              if (bVar14) {
                pcVar4 = (code *)swi(3);
                pFVar27 = (FPBDRigidsEvolutionBase *)(*pcVar4)();
                return pFVar27;
              }
            }
            else {
              bVar14 = TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                 ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00);
              if (bVar14) {
                pIVar21 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    (*(TGeometryParticlesImp<double,3,0> **)this_00,
                                     *(int *)&((TPBDRigidClusteredParticleHandleImp<double,3,1> *)
                                              this_00)->field_0x8);
                pIVar22 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    (this_01.GeometryParticles,iVar31);
                if (pIVar21 == pIVar22) goto LAB_143d01917;
              }
            }
          }
        }
      }
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      do {
        uVar12 = local_98._8_8_;
        if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_98._8_8_ ==
            (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar31 = iVar31 + 1;
          iStack_80 = iVar31;
          if (local_74 <= iVar31) {
LAB_143d01a88:
            local_78 = local_78 + 1;
            TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98
                      );
            this_01 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
            iVar31 = iStack_80;
          }
        }
        else {
          iVar31 = local_70 + 1;
          local_70 = iVar31;
          if (*(int *)(local_98._8_8_ + 8) <= iVar31) goto LAB_143d01a88;
          if ((iVar31 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            pFVar27 = (FPBDRigidsEvolutionBase *)(*pcVar4)();
            return pFVar27;
          }
          pTVar3 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar12)->Data + (longlong)iVar31 * 8);
          this_01 = (TParticleHandleBase<double,3>_u_0)pTVar3->GeometryParticles;
          iVar31 = *(int *)(pTVar3 + 1);
          if (this_01.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_9c = (uint)iStack_9c._1_3_ << 8;
          }
          else {
            iStack_9c = CONCAT31(iStack_9c._1_3_,(this_01.GeometryParticles)->MParticleType);
          }
          _EStack_7c = iStack_9c;
          iStack_80 = iVar31;
          local_98._16_8_ = this_01;
        }
        if (this_01.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
        goto LAB_143d01abf;
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        bVar14 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
      } while (bVar14);
    } while (this_01.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
  }
LAB_143d01abf:
  ComputeIntermediateSpatialAcceleration(this,false);
  return this;
}

// ~FPBDRigidsEvolutionBase @ 143d03450

void __thiscall
Chaos::FPBDRigidsEvolutionBase::~FPBDRigidsEvolutionBase(FPBDRigidsEvolutionBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ISpatialAccelerationCollectionFactory *pIVar5;
  FBaseGraphTask *pFVar6;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar7;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar8;
  longlong *plVar9;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar10;
  longlong *plVar11;
  bool bVar12;
  
  *(undefined ***)this = &___7FPBDRigidsEvolutionBase_Chaos__6B_;
  TArrayCollection::RemoveArray
            ((TArrayCollection *)&this->Particles->ParticleHandles,
             (TArrayCollectionArrayBase *)&this->PhysicsMaterials);
  TArrayCollection::RemoveArray
            ((TArrayCollection *)&this->Particles->ParticleHandles,
             (TArrayCollectionArrayBase *)&this->PerParticlePhysicsMaterials);
  TArrayCollection::RemoveArray
            ((TArrayCollection *)&this->Particles->ParticleHandles,
             (TArrayCollectionArrayBase *)&this->Collided);
  WaitOnAccelerationStructure(this);
  *(undefined4 *)&(this->TestModeData).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TestModeData).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TestModeData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EvolutionName).Name.SharedReferenceCount.ReferenceController);
  pFVar4 = (this->PendingReleaseIndices).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pIVar5 = (this->SpatialCollectionFactory).Ptr;
  if (pIVar5 != (ISpatialAccelerationCollectionFactory *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,1);
  }
  pFVar6 = (this->AccelerationStructureTaskComplete).Reference;
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar6->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
  }
  *(undefined4 *)&(this->SpatialAccelerationCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SpatialAccelerationCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpatialAccelerationCache);
  pFVar4 = (this->ParticleToCacheInnerIdx).Entries.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  Chaos::Private::FTaskDispatcherEvolution::~FTaskDispatcherEvolution(&this->TaskDispatcher);
  pFVar4 = (this->AsyncAccelerationQueue).ParticleToPendingData.Entries.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->AsyncAccelerationQueue).PendingData.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InternalAccelerationQueue).Duplicated.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InternalAccelerationQueue).ParticleToPendingData.Entries.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_> *)
             (this->InternalAccelerationQueue).PendingDataArrays.AllocatorInstance.Data,
             (this->InternalAccelerationQueue).PendingDataArrays.ArrayNum);
  pFVar4 = (this->InternalAccelerationQueue).PendingDataArrays.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->MAllRemovals).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->UniqueIndicesPendingRelease).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>,int>
            ((TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>
              *)(this->AccelerationBackingBuffer).AllocatorInstance.Data,
             (this->AccelerationBackingBuffer).ArrayNum);
  pFVar4 = (this->AccelerationBackingBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  aVar7 = (this->ExternalStructuresPool).Tail;
  aVar10 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
            )(this->ExternalStructuresPool).First;
  do {
    aVar8 = *(atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
              *)aVar10;
    FMemory::Free((void *)aVar10);
    bVar12 = aVar10 != aVar7;
    aVar10 = aVar8;
  } while (bVar12);
  while (aVar8 != (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                   )0x0) {
    aVar7 = *(atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
              *)aVar8;
    FMemory::Free((void *)aVar8);
    aVar8 = aVar7;
  }
  aVar7 = (this->ExternalStructuresQueue).Tail;
  aVar10 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
            )(this->ExternalStructuresQueue).First;
  do {
    aVar8 = *(atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
              *)aVar10;
    FMemory::Free((void *)aVar10);
    bVar12 = aVar10 != aVar7;
    aVar10 = aVar8;
  } while (bVar12);
  while (aVar8 != (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                   )0x0) {
    aVar7 = *(atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
              *)aVar8;
    FMemory::Free((void *)aVar8);
    aVar8 = aVar7;
  }
  *(undefined ***)&this->Collided = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar3 = *(void **)&(this->Collided).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->PerParticlePhysicsMaterials =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFChaosPhysicsMaterial_Chaos__U__TDefaultDelete_VFChaosPhysicsMaterial_Chaos_______Chaos__6B_
  ;
  DestructItems<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,int>
            (*(TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>
               **)&(this->PerParticlePhysicsMaterials).field_0x8,
             *(int *)&(this->PerParticlePhysicsMaterials).field_0x10);
  pvVar3 = *(void **)&(this->PerParticlePhysicsMaterials).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->PhysicsMaterials =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_VFChaosPhysicsMaterial_Chaos___Chaos___Chaos__6B_
  ;
  pvVar3 = *(void **)&(this->PhysicsMaterials).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  Chaos::Private::FPBDIslandGroupManager::~FPBDIslandGroupManager(&this->IslandGroupManager);
  Chaos::Private::FPBDIslandManager::~FPBDIslandManager(&this->IslandManager);
  pFVar4 = (this->ConstraintContainers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if (*(longlong *)&this->CaptureRewindKinematicTarget != 0) {
    plVar9 = *(longlong **)&(this->CaptureRewindKinematicTarget).field_0x28;
    plVar11 = (longlong *)&(this->CaptureRewindKinematicTarget).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar11 = plVar9;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (*(longlong *)&this->CaptureRewindData != 0) {
    plVar9 = *(longlong **)&(this->CaptureRewindData).field_0x28;
    plVar11 = (longlong *)&(this->CaptureRewindData).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar11 = plVar9;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (*(longlong *)&this->KinematicUpdate != 0) {
    plVar9 = *(longlong **)&(this->KinematicUpdate).field_0x28;
    plVar11 = (longlong *)&(this->KinematicUpdate).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar11 = plVar9;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (*(longlong *)&this->ParticleUpdatePosition != 0) {
    plVar9 = *(longlong **)&(this->ParticleUpdatePosition).field_0x28;
    plVar11 = (longlong *)&(this->ParticleUpdatePosition).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar11 = plVar9;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  DestructItems<TFunction<void___cdecl(Chaos::TPBDRigidParticleHandleImp<double,3,0>_&,double)>,int>
            ((TFunction<void___cdecl(Chaos::TPBDRigidParticleHandleImp<double,3,0>_&,double)> *)
             (this->ImpulseRules).AllocatorInstance.Data,(this->ImpulseRules).ArrayNum);
  pFVar4 = (this->ImpulseRules).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TFunction<void___cdecl(Chaos::TPBDRigidParticleHandleImp<double,3,0>_&,double)>,int>
            ((TFunction<void___cdecl(Chaos::TPBDRigidParticleHandleImp<double,3,0>_&,double)> *)
             (this->ForceRules).AllocatorInstance.Data,(this->ForceRules).ArrayNum);
  pFVar4 = (this->ForceRules).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator() @ 143d10f90

void __thiscall
`Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue'::__l2::<lambda_1>::operator()
          (void *this)

{
  TArrayAsMap<Chaos::FUniqueIdx,unsigned_int> *this_00;
  undefined4 *puVar1;
  FSpatialAccelerationIdx FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  code *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  uint *puVar15;
  TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
  *pTVar16;
  FAccelerationStructureHandle *pFVar17;
  FSpatialAccelerationCache *this_01;
  FSpatialAccelerationCache *pFVar18;
  TAABB<double,3> *pTVar19;
  TAABB<double,3> *pTVar20;
  bool *pbVar21;
  TGeometryParticle<double,3> **ppTVar22;
  FUniqueIdx *pFVar23;
  ForAnyElementType *pFVar24;
  FSpatialAccelerationIdx *pFVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  undefined1 local_res18 [8];
  FUniqueIdx local_res20 [2];
  undefined4 local_138 [2];
  FUniqueIdx local_130;
  FUniqueIdx local_12c;
  undefined1 local_128 [4];
  FUniqueIdx local_124;
  FUniqueIdx local_120;
  uint local_11c;
  FSpatialAccelerationCache *local_118;
  TGeometryParticle<double,3> *local_110;
  TGeometryParticleHandleImp<double,3,1> *pTStack_108;
  TGeometryParticle<double,3> *local_100;
  TGeometryParticleHandleImp<double,3,1> *local_f8;
  int local_f0;
  FCollisionFilterData local_ec;
  FCollisionFilterData local_dc;
  undefined1 local_cc;
  TGeometryParticle<double,3> *local_c8;
  TGeometryParticleHandleImp<double,3,1> *local_c0;
  int local_b8;
  FCollisionFilterData local_b4;
  FCollisionFilterData local_a4;
  undefined1 local_94;
  TAABB<double,3> *local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 *local_78;
  FSpatialAccelerationIdx *local_70;
  FSpatialAccelerationCache **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_80 = *(longlong *)this;
  local_11c = *(uint *)(local_80 + 0x3d8);
  uVar27 = (ulonglong)(int)local_11c;
  puVar28 = *(undefined8 **)(local_80 + 0x3d0);
  local_78 = puVar28 + uVar27 * 9;
  pFVar25 = (FSpatialAccelerationIdx *)(puVar28 + 7);
  while( true ) {
    puVar11 = local_78;
    if (*(int *)(local_80 + 0x3d8) != (int)uVar27) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPendingSpatialData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    lVar5 = *(longlong *)this;
    if (puVar28 == puVar11) break;
    plVar6 = *(longlong **)(lVar5 + 0x2f0);
    if (*(char *)(pFVar25 + 4) == '\0') {
      if ((Chaos::AccelerationStructureUseDynamicTree == 0) ||
         ((uVar13 = pFVar25->InnerIdx, uVar13 != 1 && (uVar13 != 3)))) {
        (**(code **)(*plVar6 + 0x88))(plVar6,puVar28,*pFVar25);
      }
      local_res20[0].Idx = *(int *)(pFVar25 + -0x14);
      this_00 = (TArrayAsMap<Chaos::FUniqueIdx,unsigned_int> *)(lVar5 + 0x450);
      puVar15 = Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::Find(this_00,local_res20);
      if (puVar15 != (uint *)0x0) {
        pTVar16 = TMapBase<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
                  ::FindChecked((TMapBase<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
                                 *)(lVar5 + 0x460),pFVar25);
        uVar29 = *puVar15;
        pFVar18 = pTVar16->Ptr;
        uVar3 = (uint)pFVar18->_padding_;
        if (uVar29 + 1 < uVar3) {
          pFVar17 = Chaos::FSpatialAccelerationCache::Payload(pFVar18,uVar3 - 1);
          local_130.Idx = (pFVar17->CachedUniqueIdx).Idx;
          puVar15 = Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::FindChecked
                              (this_00,&local_130);
          *puVar15 = uVar29;
        }
        Chaos::TArrayCollection::RemoveAtSwapHelper((TArrayCollection *)pFVar18,uVar29);
        pFVar18->MDirtyValidationCount = pFVar18->MDirtyValidationCount + 1;
        local_12c.Idx = *(int *)(pFVar25 + -0x14);
        Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::Remove(this_00,&local_12c);
      }
    }
    else {
      pTVar7 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar25 + -0x18);
      if ((Chaos::AccelerationStructureUseDynamicTree == 0) ||
         ((uVar13 = pFVar25->InnerIdx, uVar13 != 1 && (uVar13 != 3)))) {
        FVar2 = *pFVar25;
        local_110 = *(TGeometryParticle<double,3> **)(*plVar6 + 0x98);
        pbVar21 = Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
                            ((TGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                             (int)pTVar7->_padding_);
        local_res10 = CONCAT71(local_res10._1_7_,*pbVar21);
        local_90 = Chaos::TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(pTVar7);
        ppTVar22 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                              (int)pTVar7->_padding_);
        local_100 = *ppTVar22;
        local_f8 = pTVar7;
        pFVar23 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                             (int)pTVar7->_padding_);
        local_f0 = pFVar23->Idx;
        local_ec.Word2 = 0;
        local_ec.Word3 = 0;
        local_ec.Word0 = 0;
        local_ec.Word1 = 0;
        local_dc.Word2 = 0;
        local_dc.Word3 = 0;
        local_dc.Word0 = 0;
        local_dc.Word1 = 0;
        local_cc = 0;
        if (local_f0 == -1) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3133560516564218025>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                              ,0xf57,"CachedUniqueIdx.IsValid()");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        Chaos::FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar7,&local_ec);
        Chaos::FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar7,&local_dc);
        local_cc = 1;
        (*(code *)local_110)(plVar6,&local_100,local_90,local_res10 & 0xff,FVar2);
      }
      pTVar16 = TMapBase<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
                ::Find((TMapBase<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
                        *)(lVar5 + 0x460),pFVar25);
      if (pTVar16 ==
          (TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
           *)0x0) {
        this_01 = ::operator_new(0x70);
        pFVar18 = (FSpatialAccelerationCache *)0x0;
        if (this_01 != (FSpatialAccelerationCache *)0x0) {
          pFVar18 = Chaos::FSpatialAccelerationCache::FSpatialAccelerationCache(this_01);
        }
        local_68 = &local_118;
        local_118 = pFVar18;
        local_70 = pFVar25;
        TSet<TTuple<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Chaos::FSpatialAccelerationIdx_const_&,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_&&>_>
                  ((TSet<TTuple<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_>,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>,FDefaultSetAllocator>
                    *)(lVar5 + 0x460),
                   (TPairInitializer<Chaos::FSpatialAccelerationIdx_const_&,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_&&>
                    *)local_128,(bool *)&local_70);
        pTVar16 = (TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>
                   *)(*(longlong *)(lVar5 + 0x460) + ((longlong)(int)local_128 * 3 + 1) * 8);
        if (local_118 != (FSpatialAccelerationCache *)0x0) {
          (**(code **)local_118->_padding_)(local_118,1);
        }
      }
      local_124.Idx = *(int *)(pFVar25 + -0x14);
      pFVar18 = pTVar16->Ptr;
      puVar15 = Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::Find
                          ((TArrayAsMap<Chaos::FUniqueIdx,unsigned_int> *)(lVar5 + 0x450),&local_124
                          );
      if (puVar15 == (uint *)0x0) {
        uVar29 = (uint)pFVar18->_padding_;
        Chaos::TArrayCollection::ResizeHelper((TArrayCollection *)pFVar18,uVar29 + 1);
        pFVar18->MDirtyValidationCount = pFVar18->MDirtyValidationCount + 1;
        local_120.Idx = *(int *)(pFVar25 + -0x14);
        puVar15 = Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::Add
                            ((TArrayAsMap<Chaos::FUniqueIdx,unsigned_int> *)(lVar5 + 0x450),
                             &local_120);
        *puVar15 = uVar29;
      }
      else {
        uVar29 = *puVar15;
      }
      pbVar21 = Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
                          ((TGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                           (int)pTVar7->_padding_);
      bVar12 = *pbVar21;
      pbVar21 = Chaos::FSpatialAccelerationCache::HasBounds(pFVar18,uVar29);
      *pbVar21 = bVar12;
      pTVar19 = Chaos::TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(pTVar7);
      pTVar20 = Chaos::FSpatialAccelerationCache::Bounds(pFVar18,uVar29);
      uVar10 = *(undefined8 *)&(pTVar19->MMin).field_0x8;
      *(undefined8 *)&pTVar20->MMin = *(undefined8 *)&pTVar19->MMin;
      *(undefined8 *)&(pTVar20->MMin).field_0x8 = uVar10;
      *(undefined8 *)&(pTVar20->MMin).field_0x10 = *(undefined8 *)&(pTVar19->MMin).field_0x10;
      uVar10 = *(undefined8 *)&(pTVar19->MMax).field_0x8;
      *(undefined8 *)&pTVar20->MMax = *(undefined8 *)&pTVar19->MMax;
      *(undefined8 *)&(pTVar20->MMax).field_0x8 = uVar10;
      *(undefined8 *)&(pTVar20->MMax).field_0x10 = *(undefined8 *)&(pTVar19->MMax).field_0x10;
      local_110 = (TGeometryParticle<double,3> *)*puVar28;
      pTStack_108 = (TGeometryParticleHandleImp<double,3,1> *)puVar28[1];
      local_90 = (TAABB<double,3> *)puVar28[2];
      uStack_88 = puVar28[3];
      local_60 = puVar28[4];
      uStack_58 = puVar28[5];
      local_res10 = puVar28[6];
      pFVar17 = Chaos::FSpatialAccelerationCache::Payload(pFVar18,uVar29);
      pFVar17->ExternalGeometryParticle = local_110;
      pFVar17->GeometryParticleHandle = pTStack_108;
      *(TAABB<double,3> **)&pFVar17->CachedUniqueIdx = local_90;
      (pFVar17->UnionQueryFilterData).Word1 = (undefined4)uStack_88;
      (pFVar17->UnionQueryFilterData).Word2 = uStack_88._4_4_;
      *(undefined8 *)&(pFVar17->UnionQueryFilterData).Word3 = local_60;
      (pFVar17->UnionSimFilterData).Word1 = (undefined4)uStack_58;
      (pFVar17->UnionSimFilterData).Word2 = uStack_58._4_4_;
      *(ulonglong *)&(pFVar17->UnionSimFilterData).Word3 = local_res10;
    }
    plVar6 = *(longlong **)(*(longlong *)this + 0x2f8);
    if (*(char *)(pFVar25 + 4) == '\0') {
      if ((Chaos::AccelerationStructureUseDynamicTree == 0) ||
         ((uVar13 = pFVar25->InnerIdx, uVar13 != 1 && (uVar13 != 3)))) {
        (**(code **)(*plVar6 + 0x88))(plVar6,puVar28,*pFVar25);
      }
    }
    else {
      pTVar7 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar25 + -0x18);
      if ((Chaos::AccelerationStructureUseDynamicTree == 0) ||
         ((uVar13 = pFVar25->InnerIdx, uVar13 != 1 && (uVar13 != 3)))) {
        FVar2 = *pFVar25;
        pcVar8 = *(code **)(*plVar6 + 0x98);
        pbVar21 = Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
                            ((TGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                             (int)pTVar7->_padding_);
        local_res10 = CONCAT71(local_res10._1_7_,*pbVar21);
        local_110 = (TGeometryParticle<double,3> *)
                    Chaos::TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(pTVar7);
        ppTVar22 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                              (int)pTVar7->_padding_);
        local_c8 = *ppTVar22;
        local_c0 = pTVar7;
        pFVar23 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                             (int)pTVar7->_padding_);
        local_b8 = pFVar23->Idx;
        local_b4.Word2 = 0;
        local_b4.Word3 = 0;
        local_b4.Word0 = 0;
        local_b4.Word1 = 0;
        local_a4.Word2 = 0;
        local_a4.Word3 = 0;
        local_a4.Word0 = 0;
        local_a4.Word1 = 0;
        local_94 = 0;
        if (local_b8 == -1) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3133560516564218025>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                              ,0xf57,"CachedUniqueIdx.IsValid()");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        Chaos::FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar7,&local_b4);
        Chaos::FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar7,&local_a4);
        local_94 = 1;
        (*pcVar8)(plVar6,&local_c8,local_110,local_res10 & 0xff,FVar2);
      }
    }
    puVar28 = puVar28 + 9;
    uVar27 = (ulonglong)local_11c;
    pFVar25 = pFVar25 + 0x24;
  }
  puVar26 = *(undefined4 **)(lVar5 + 0x370);
  iVar4 = *(int *)(lVar5 + 0x378);
  puVar1 = puVar26 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0x378) != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::FUniqueIdx,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (puVar26 == puVar1) break;
    local_138[0] = *puVar26;
    lVar9 = *(longlong *)this;
    pFVar24 = (ForAnyElementType *)(lVar9 + 0x4d0);
    if ((pFVar24->Data <= (FScriptContainerElement *)local_138) &&
       ((FScriptContainerElement *)local_138 < pFVar24->Data + (longlong)*(int *)(lVar9 + 0x4dc) * 4
       )) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar14 = *(int *)(lVar9 + 0x4d8);
    if (iVar14 == *(int *)(lVar9 + 0x4dc)) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,pFVar24,(int *)(lVar9 + 0x4dc));
    }
    puVar26 = puVar26 + 1;
    *(int *)(lVar9 + 0x4d8) = iVar14 + 1;
    *(undefined4 *)(pFVar24->Data + (longlong)iVar14 * 4) = local_138[0];
  }
  lVar5 = *(longlong *)this;
  *(undefined4 *)(lVar5 + 0x378) = 0;
  if (*(int *)(lVar5 + 0x37c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(lVar5 + 0x370),0,(int *)(lVar5 + 0x37c));
  }
  Chaos::FPendingSpatialDataQueue::Reset((FPendingSpatialDataQueue *)(*(longlong *)this + 0x3d0));
  *(undefined4 *)(*(longlong *)(*(longlong *)this + 0x2f0) + 8) =
       *(undefined4 *)(*(longlong *)this + 0x390);
  *(undefined4 *)(*(longlong *)(*(longlong *)this + 0x2f8) + 8) =
       *(undefined4 *)(*(longlong *)this + 0x390);
  return;
}

// AddConstraintContainer @ 143d3a3a0

void __thiscall
Chaos::FPBDRigidsEvolutionBase::AddConstraintContainer
          (FPBDRigidsEvolutionBase *this,FPBDConstraintContainer *param_1,int param_2)

{
  int *piVar1;
  TArray<Chaos::FPBDConstraintContainer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPBDConstraintContainer *local_18 [2];
  
  pTVar2 = &this->ConstraintContainers;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->ConstraintContainers).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConstraintContainers).ArrayNum;
  piVar1 = &(this->ConstraintContainers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->ConstraintContainers).ArrayNum = iVar6 + 1;
  *(FPBDConstraintContainer **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  param_1->ContainerId = iVar6;
  Chaos::Private::FPBDIslandManager::AddConstraintContainer(&this->IslandManager,param_1);
  Chaos::Private::FPBDIslandGroupManager::AddConstraintContainer
            (&this->IslandGroupManager,param_1,param_2);
  return;
}

// ApplyKinematicTargets @ 143d420c0

void __thiscall
Chaos::FPBDRigidsEvolutionBase::ApplyKinematicTargets
          (FPBDRigidsEvolutionBase *this,double param_1,double param_2)

{
  return;
}

// ComputeIntermediateSpatialAcceleration @ 143d47820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionBase::ComputeIntermediateSpatialAcceleration
          (FPBDRigidsEvolutionBase *this,bool param_1)

{
  FMutex *this_00;
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  undefined1 *puVar4;
  atomic<unsigned_char> aVar5;
  int iVar6;
  atomic<unsigned_int> aVar7;
  bool bVar8;
  FBaseGraphTask *pFVar9;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar10;
  ISpatialAccelerationCollectionFactory *pIVar11;
  bool bVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeIntermediateSpatialAcceleration> FVar20;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar21;
  FThreadSafeStaticStat<Chaos::FStat_STAT_SwapAccelerationStructures> FVar22;
  FTaskBase *pFVar23;
  atomic<unsigned___int64> aVar24;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar25;
  FNameEntryId FVar26;
  FName FVar27;
  FName FVar28;
  TRefCountPtr<FBaseGraphTask> *pTVar29;
  double dVar30;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  ETaskPriority local_res18 [8];
  FLLMScope local_res20 [2];
  FColor_u_0 local_108 [2];
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e0;
  wchar_t *local_d0;
  FOutputDeviceRedirector *local_c8;
  double local_c0;
  double local_b8;
  double *local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FMemScope local_88;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  longlong local_60 [4];
  
  FLLMScope::FLLMScope(local_res20,ChaosAcceleration,false,None,Default,true);
  FMemScope::FMemScope(&local_88,ChaosAcceleration,true);
  FVar20 = StatPtr_STAT_ComputeIntermediateSpatialAcceleration;
  if (StatPtr_STAT_ComputeIntermediateSpatialAcceleration ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeIntermediateSpatialAcceleration>)0x0) {
    pFVar19 = ::FName::FName(&local_70,"STAT_ComputeIntermediateSpatialAcceleration");
    FVar20 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeIntermediateSpatialAcceleration>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ComputeIntermediateSpatialAcceleration,*pFVar19,
                        L"ComputeIntermediateSpatialAcceleration","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar20;
  bVar15 = false;
  bVar17 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar26 = FVar27.ComparisonIndex.Value;
  uVar25 = FVar27.Number;
  if ((FVar26.Value == 0) && (uVar25 == 0)) {
LAB_143d47993:
    bVar16 = false;
    FVar27 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar26.Value;
        local_100.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                   ,0x30f);
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143d47993;
    local_res8 = FVar26.Value;
    uStackX_c = uVar25;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar16 = true;
  }
  local_d0 = L"ComputeIntermediateSpatialAcceleration";
  local_c8 = GetGlobalLogSingleton();
  local_c0 = 0.0;
  QueryPerformanceCounter(&local_a8);
  dVar30 = __real_4170000000000000;
  local_b0 = &local_c0;
  local_b8 = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  QueryPerformanceCounter(&local_a0);
  local_b8 = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar30;
  if ((this->AccelerationStructureTaskComplete).Reference == (FBaseGraphTask *)0x0) {
    pIVar21 = GetFreeSpatialAcceleration_Internal(this);
    this->InternalAcceleration = pIVar21;
    pIVar21 = GetFreeSpatialAcceleration_Internal(this);
    this->AsyncInternalAcceleration = pIVar21;
    pIVar21 = GetFreeSpatialAcceleration_Internal(this);
    this->AsyncExternalAcceleration = pIVar21;
    FlushInternalAccelerationQueue(this);
    pFVar23 = (this->TaskDispatcher).FlushAsyncQueueTask.Pimpl.Reference;
    if (pFVar23 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar23);
    }
    TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>
    ::
    Enqueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*_&>
              (&this->ExternalStructuresQueue,&this->AsyncExternalAcceleration);
    pIVar21 = GetFreeSpatialAcceleration_Internal(this);
    this->AsyncExternalAcceleration = pIVar21;
  }
  if (param_1) {
    WaitOnAccelerationStructure(this);
  }
  pFVar9 = (this->AccelerationStructureTaskComplete).Reference;
  if (((pFVar9 != (FBaseGraphTask *)0x0) && (pFVar9->field_0xd0 == '\0')) ||
     (this->bIsResim != false)) {
    FlushInternalAccelerationQueue(this);
    pFVar23 = (this->TaskDispatcher).FlushAsyncQueueTask.Pimpl.Reference;
    if (pFVar23 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar23);
    }
    goto LAB_143d47f67;
  }
  local_res10[0].Bits = local_res10[0].Bits & 0xffffff00;
  if (((this->AccelerationStructureTaskComplete).Reference == (FBaseGraphTask *)0x0) ||
     (this->AsyncInternalAcceleration->AllAsyncTasksComplete == false)) {
    FlushInternalAccelerationQueue(this);
    pFVar23 = (this->TaskDispatcher).FlushAsyncQueueTask.Pimpl.Reference;
    if (pFVar23 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar23);
    }
    if ((GAccelerationStructureCacheOverlappingLeaves != 0) &&
       (AccelerationStructureUseDynamicTree != 0)) {
      (**(code **)(this->InternalAcceleration->_padding_ + 0x40))();
    }
  }
  else {
    FVar22 = StatPtr_STAT_SwapAccelerationStructures;
    if (StatPtr_STAT_SwapAccelerationStructures ==
        (FThreadSafeStaticStat<Chaos::FStat_STAT_SwapAccelerationStructures>)0x0) {
      pFVar19 = ::FName::FName(&local_68,"STAT_SwapAccelerationStructures");
      FVar22 = (FThreadSafeStaticStat<Chaos::FStat_STAT_SwapAccelerationStructures>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SwapAccelerationStructures,
                          *pFVar19,L"SwapAccelerationStructures","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar22;
    bVar12 = false;
    bVar8 = false;
    local_e0.ComparisonIndex.Value = 0;
    local_e0.Number = 0;
    FVar26 = FVar28.ComparisonIndex.Value;
    uVar25 = FVar28.Number;
    if ((FVar26.Value == 0) && (uVar25 == 0)) {
LAB_143d47be5:
      bVar14 = false;
      FVar28 = local_e0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
        bVar12 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f8.ComparisonIndex.Value = FVar26.Value;
          local_f8.Number = uVar25;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                     ,0x332);
          bVar12 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_143d47be5;
      local_res8 = FVar26.Value;
      uStackX_c = uVar25;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar14 = true;
    }
    if (this->AsyncInternalAcceleration->AllAsyncTasksComplete == false) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("AsyncInternalAcceleration->IsAllAsyncTasksComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                          ,0x334,L"");
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    local_res10[0]._s_0.B = 1;
    Chaos::Private::FTaskDispatcherEvolution::
    FlushAccelerationQueue<_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue_::__l2::<lambda_1>_>
              (&this->TaskDispatcher,(<lambda_1>)this);
    if (AccelerationStructureSplitStaticAndDynamic == 1) {
      FlushInternalAccelerationQueue(this);
    }
    else {
      Chaos::Private::FTaskDispatcherEvolution::WaitIntegrationComplete(&this->TaskDispatcher);
      FPendingSpatialInternalDataQueue::Reset(&this->InternalAccelerationQueue);
    }
    pFVar23 = (this->TaskDispatcher).FlushAsyncQueueTask.Pimpl.Reference;
    if (pFVar23 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar23);
    }
    pIVar21 = this->InternalAcceleration;
    pIVar10 = this->AsyncInternalAcceleration;
    this->InternalAcceleration = pIVar10;
    this->AsyncInternalAcceleration = pIVar21;
    if (AccelerationStructureUseDynamicTree != 0) {
      CopyUnBuiltDynamicAccelerationStructures
                (&this->SpatialAccelerationCache,pIVar10,pIVar21,this->AsyncExternalAcceleration);
      if (GAccelerationStructureCacheOverlappingLeaves != 0) {
        (**(code **)(this->InternalAcceleration->_padding_ + 0x40))();
      }
    }
    TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>
    ::
    Enqueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*_&>
              (&this->ExternalStructuresQueue,&this->AsyncExternalAcceleration);
    pIVar21 = GetFreeSpatialAcceleration_Internal(this);
    this->AsyncExternalAcceleration = pIVar21;
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar14) {
      FThreadStats::AddMessage(FVar28,CycleScopeEnd);
    }
  }
  if (this->bCanStartAsyncTasks != false) {
    pIVar11 = (this->SpatialCollectionFactory).Ptr;
    bVar12 = AccelerationStructureTimeSlicingMaxQueueSizeBeforeForce <
             (this->AsyncAccelerationQueue).PendingData.ArrayNum;
    pFVar23 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
    if (pFVar23 == (FTaskBase *)0x0) {
      pFVar23 = (FTaskBase *)0x0;
    }
    else {
      pFVar23->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
      pFVar23->Pipe = (FPipe *)0x0;
      (pFVar23->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
      pFVar23->TaskTriggered = (atomic<bool>)0x0;
      pFVar23->RefCount = (atomic<unsigned_int>)0x1;
      pFVar23->NumLocks = (atomic<unsigned_int>)0x1;
      pFVar23->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
      aVar24 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
      pFVar23->TraceId = aVar24;
      this_00 = &(pFVar23->Prerequisites).Mutex;
      (pFVar23->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
      (pFVar23->Prerequisites).Prerequisites.ArrayNum = 0;
      (pFVar23->Prerequisites).Prerequisites.ArrayMax = 1;
      this_00->State = (atomic<unsigned_char>)0x1;
      *(undefined ***)&(pFVar23->LowLevelTask).field_0x28 =
           &
           ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(undefined8 *)&(pFVar23->LowLevelTask).field_0x38 = 0xe800000000000020;
      *(undefined8 *)&(pFVar23->LowLevelTask).field_0x30 = 0;
      (pFVar23->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
      (pFVar23->Subsequents).Subsequents.ArrayNum = 0;
      (pFVar23->Subsequents).Subsequents.ArrayMax = 1;
      (pFVar23->Subsequents).bIsClosed = (atomic<bool>)0x0;
      (pFVar23->Subsequents).Mutex = (atomic<unsigned_char>)0x0;
      pFVar23->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
      LOCK();
      aVar5 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar5 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
      pFVar23->_padding_ =
           (longlong)
           &___7__TGraphTask_VFChaosAccelerationStructureTask_FPBDRigidsEvolutionBase_Chaos____6B_;
    }
    bVar8 = this->bIsSingleThreaded;
    pIVar21 = this->AsyncExternalAcceleration;
    pIVar10 = this->AsyncInternalAcceleration;
    pFVar23[1]._padding_ = (longlong)&this->SpatialAccelerationCache;
    pFVar23[1]._padding_ = (longlong)pIVar10;
    puVar1 = (undefined1 *)((longlong)&pFVar23[1]._padding_ + 3);
    *(undefined1 *)((longlong)&pFVar23[1]._padding_ + 2) = local_res10[0]._s_0.B;
    puVar4 = (undefined1 *)((longlong)&pFVar23[1]._padding_ + 4);
    pFVar23[1]._padding_ = (longlong)pIVar21;
    *(bool *)((longlong)&pFVar23[1]._padding_ + 1) = bVar8;
    *puVar1 = 0;
    *puVar4 = 0;
    pFVar23[1]._padding_ = (longlong)pIVar11;
    *(bool *)&pFVar23[1]._padding_ = bVar12;
    this->bAccelerationStructureTaskStarted = (atomic<bool> *)puVar1;
    this->bAccelerationStructureTaskSignalKill = (atomic<bool> *)puVar4;
    UE::Tasks::Private::TranslatePriority
              (AnyBackgroundThreadNormalTask,local_res18,(EExtendedTaskPriority *)&local_res8);
    UE::Tasks::Private::FTaskBase::Init
              (pFVar23,L"GraphTask",local_res18[0],(EExtendedTaskPriority)local_res8,None);
    if (pFVar23 != (FTaskBase *)0x0) {
      LOCK();
      pFVar23->RefCount = (atomic<unsigned_int>)((int)pFVar23->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar23,0x100);
    pTVar29 = &this->AccelerationStructureTaskComplete;
    if (pTVar29 == (TRefCountPtr<FBaseGraphTask> *)local_60) {
      if (pFVar23 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar23->RefCount;
        aVar7 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar7 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar23->_padding_)(pFVar23,1);
        }
      }
    }
    else {
      pFVar9 = pTVar29->Reference;
      pTVar29->Reference = (FBaseGraphTask *)pFVar23;
      if (pFVar9 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar9->field_0x30;
        iVar6 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
        }
      }
    }
  }
LAB_143d47f67:
  QueryPerformanceCounter(&local_98);
  dVar30 = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar30;
  *local_b0 = (dVar30 - local_b8) + *local_b0;
  local_b8 = dVar30;
  if (FChaosScopedDurationTimeLogger::GlobalLabel != (wchar_t *)0x0) {
    FOutputDevice::LogfImpl((FOutputDevice *)local_c8,L"%s - %s: %f%s");
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_80.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_80);
      piVar3 = &this_01->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// CopyPristineAccelerationStructures @ 143d49610

void __cdecl
Chaos::FPBDRigidsEvolutionBase::CopyPristineAccelerationStructures
          (TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
           *param_1,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_3,
          bool param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  int local_res18;
  char local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143d496bd;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar8 = iVar16 + -1 + local_res18;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_143d496bd:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar7,iVar17);
  TStack_78.CurrentBitIndex = iVar8;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_78._28_4_ = iVar8;
  TStack_78.BaseBitIndex = iVar16;
  uStack_58 = CONCAT44(uStack_84,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res20 = param_4;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143d497c1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_143d497c1:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_58) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_78.CurrentBitIndex == uVar13) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar9 = (longlong *)
             (**(code **)(param_2->_padding_ + 0xf0))
                       (param_2,*(undefined2 *)
                                 (*(longlong *)param_1 + (longlong)TStack_78.CurrentBitIndex * 0x18)
                       );
    plVar10 = (longlong *)(**(code **)(param_3->_padding_ + 0xf0))(param_3);
    if ((plVar9 == (longlong *)0x0) || (plVar10 == (longlong *)0x0)) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7803858562110718911>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                         ,0x3bf,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if ((local_res20 == '\0') ||
            ((cVar6 = (**(code **)(*plVar10 + 0x18))(plVar10), cVar6 != '\0' &&
             (cVar6 = (**(code **)(*plVar9 + 0x18))(plVar9), cVar6 == '\0')))) {
      (**(code **)(*plVar10 + 0xa8))(plVar10,plVar9);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  *(undefined1 *)((longlong)&param_3->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 5);
  *(int *)&param_3->_padding_ = (int)param_2->_padding_;
  *(undefined1 *)((longlong)&param_3->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  if ((param_3->ActiveBucketsMask != param_2->ActiveBucketsMask) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveBucketsMask == Other.ActiveBucketsMask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAccelerationCollection.h"
                         ,0x35,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_3->AllAsyncTasksComplete = param_2->AllAsyncTasksComplete;
  return;
}

// CopyUnBuiltDynamicAccelerationStructures @ 143d49920

void __cdecl
Chaos::FPBDRigidsEvolutionBase::CopyUnBuiltDynamicAccelerationStructures
          (TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
           *param_1,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_3,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
  *pTVar7;
  bool bVar8;
  char cVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined1 local_a8 [8];
  TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  int local_6c;
  TMap<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar15 = *puVar16;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_143d499cd;
      uVar15 = puVar16[lVar12 + 1];
    }
    uStack_94 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_70 = (int)lVar12;
    iStack_84 = local_80 + -1 + local_70;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_143d499cd:
  uVar15 = *(uint *)&param_1->field_0x28;
  iStack_78 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  uStack_88 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar5) {
    puVar17 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_143d49ae0;
      uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_6c = (int)lVar12;
    uVar15 = local_6c + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_143d49ae0:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_a8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::FSpatialAccelerationIdx,TUniquePtr<Chaos::FSpatialAccelerationCache,TDefaultDelete<Chaos::FSpatialAccelerationCache>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    {
      return;
    }
    uVar3 = *(undefined2 *)(*(longlong *)pTVar7 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    plVar10 = (longlong *)(**(code **)(param_2->_padding_ + 0xf0))(param_2);
    if (plVar10 == (longlong *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7803858562110718861>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                         ,0x38d,"false");
      if (bVar8) {
code_r0x000143d49c37:
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      cVar9 = (**(code **)(*plVar10 + 0x20))(plVar10);
      if (cVar9 != '\0') {
        plVar10 = (longlong *)(**(code **)(param_3->_padding_ + 0xf0))();
        if (plVar10 == (longlong *)0x0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7803858562110718873>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                             ,0x399,"false");
          if (bVar8) goto code_r0x000143d49c37;
        }
        else {
          cVar9 = (**(code **)(*plVar10 + 0x20))(plVar10);
          if ((cVar9 == '\0') &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("AsyncInternalAccelerationSubStructure->IsTreeDynamic()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                                 ,0x39d,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (param_4 !=
              (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
            plVar11 = (longlong *)(**(code **)(param_4->_padding_ + 0xf0))(param_4);
            if (plVar11 == (longlong *)0x0) {
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7803858562110718884>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                                 ,0x3a4,"false");
              if (!bVar8) goto LAB_143d49c97;
              goto code_r0x000143d49c37;
            }
            cVar9 = (**(code **)(*plVar11 + 0x20))(plVar11);
            if ((cVar9 == '\0') &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ExternalAccelerationSubStructure->IsTreeDynamic()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                                   ,0x3a8,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (**(code **)(*plVar11 + 0xa8))(plVar11,plVar10);
          }
          (**(code **)(param_2->_padding_ + 0xf8))(param_2,param_3,uVar3);
        }
      }
    }
LAB_143d49c97:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// DestroyTransientConstraints @ 143d4c170

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DestroyTransientConstraints
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  return;
}

// DestroyTransientConstraints @ 143d4c180

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DestroyTransientConstraints(FPBDRigidsEvolutionBase *this)

{
  return;
}

// DisableConstraints @ 143d4c820

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DisableConstraints
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar2 = (this->ConstraintContainers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 0x38))(*(longlong **)pFVar4,param_1);
    pFVar4 = pFVar4 + 8;
  }
  pTVar3 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  RemoveConstraintsFromConstraintGraph(this,pTVar3);
  return;
}

// DisableParticleWithRemovalEvent @ 143d4c8b0

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DisableParticleWithRemovalEvent
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  IPhysicsProxyBase *pIVar8;
  TVector<double,3> *pTVar9;
  FImplicitObject *pFVar10;
  undefined8 *puVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 local_38 [48];
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    piVar1 = &(this->MAllRemovals).ArrayMax;
    iVar7 = (this->MAllRemovals).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->MAllRemovals).AllocatorInstance,piVar1);
    }
    (this->MAllRemovals).ArrayNum = iVar7 + 1;
    pFVar13 = (this->MAllRemovals).AllocatorInstance.Data + (longlong)iVar7 * 0x58;
    DefaultConstructItems<Chaos::FRemovalData,int>(pFVar13,1);
    pIVar8 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    *(IPhysicsProxyBase **)(pFVar13 + 0x20) = pIVar8;
    pTVar9 = TParticles<double,3>::GetX
                       ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
    uVar2 = *(undefined8 *)&pTVar9->field_0x8;
    *(undefined8 *)pFVar13 = *(undefined8 *)pTVar9;
    *(undefined8 *)(pFVar13 + 8) = uVar2;
    *(undefined8 *)(pFVar13 + 0x10) = *(undefined8 *)&pTVar9->field_0x10;
    pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar14 = param_1;
    }
    if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      uVar15 = 0;
      uVar16 = 0;
    }
    else {
      uVar3 = (uint)pTVar14->_padding_;
      lVar4 = pTVar14->_padding_;
      uVar12 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x3d0)) {
        uVar12 = ~uVar3 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 0x3c8) + (longlong)(int)uVar3 * 8);
      uVar15 = (undefined4)uVar2;
      uVar16 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    *(ulonglong *)(pFVar13 + 0x18) = CONCAT44(uVar16,uVar15);
    pFVar10 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_1);
    if (pFVar10 != (FImplicitObject *)0x0) {
      pFVar10 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_1);
      if (pFVar10->bHasBoundingBox != false) {
        pFVar10 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_1);
        puVar11 = (undefined8 *)(**(code **)(pFVar10->_padding_ + 0x90))(pFVar10,local_38);
        uVar2 = puVar11[1];
        *(undefined8 *)(pFVar13 + 0x28) = *puVar11;
        *(undefined8 *)(pFVar13 + 0x30) = uVar2;
        *(undefined8 *)(pFVar13 + 0x38) = puVar11[2];
        uVar2 = puVar11[4];
        *(undefined8 *)(pFVar13 + 0x40) = puVar11[3];
        *(undefined8 *)(pFVar13 + 0x48) = uVar2;
        *(undefined8 *)(pFVar13 + 0x50) = puVar11[5];
      }
    }
    DisableParticle(this,param_1);
  }
  return;
}

// DisableParticles @ 143d4ca50

void __thiscall
Chaos::FPBDRigidsEvolutionBase::DisableParticles
          (FPBDRigidsEvolutionBase *this,
          TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  FUniqueIdx FVar7;
  FPBDRigidsSOAs *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  TGeometryParticle<double,3> *pTVar8;
  code *pcVar9;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  FUniqueIdx *pFVar13;
  FPendingSpatialData *pFVar14;
  FSpatialAccelerationIdx *pFVar15;
  TGeometryParticle<double,3> **ppTVar16;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  TGeometryParticleHandleImp<double,3,1> *this_02;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FCollisionFilterData FStack_e4;
  FCollisionFilterData FStack_d4;
  uint local_c4;
  TVector<float,3> local_c0;
  TVector<float,3> local_b4;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a0 = 0;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar5 != 0) {
    puVar26 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar24 = *puVar26;
    while (uVar24 == 0) {
      lVar18 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_143d4cafd;
      uVar24 = puVar26[lVar18 + 1];
    }
    uStack_9c = -uVar24 & uVar24;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_78 = (int)lVar18;
    iStack_8c = local_78 + -1 + local_88;
    if (iVar5 < iStack_8c) {
      iStack_8c = iVar5;
    }
  }
LAB_143d4cafd:
  uVar24 = *(uint *)&(param_1->Elements).field_0x28;
  uVar23 = uVar24 & 0xffffffe0;
  iStack_80 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_68.CurrentBitIndex = iStack_8c;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar24 >> 5;
  TStack_68._28_4_ = iStack_8c;
  TStack_68.BaseBitIndex = local_88;
  uStack_48 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_1;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar24 < 0) || (iVar5 < (int)uVar24)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar24 != uVar6) {
    puVar25 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar1;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar21 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar21;
      uVar23 = uVar23 + 0x20;
      iVar21 = iVar21 + 1;
      uVar24 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_143d4cc00;
      uVar24 = *(uint *)(puVar25 + lVar18 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_74 = (int)lVar18;
    uVar24 = local_74 + -1 + uVar23;
    if ((int)uVar6 < (int)uVar24) {
      uVar24 = uVar6;
    }
  }
LAB_143d4cc00:
  while( true ) {
    pTVar10 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_68.CurrentBitIndex == uVar24) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == param_1)
       ) {
      return;
    }
    pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    this_00 = this->Particles;
    this_01 = *(TGeometryParticleHandleImp<double,3,1> **)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
    bVar4 = *(byte *)((longlong)&this_01->_padding_ + 4);
    this_02 = pTVar12;
    if (1 < bVar4) {
      this_02 = this_01;
    }
    if (this_02 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (bVar4 != 0) {
        pTVar12 = this_01;
      }
      if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar20 = (TKinematicGeometryParticlesImp<double,3,0> *)
                  (this_00->StaticDisabledParticles).Ptr;
      }
      else {
        pTVar20 = (this_00->KinematicDisabledParticles).Ptr;
      }
      TGeometryParticleHandleImp<double,3,1>::MoveToSOA
                (this_01,(TGeometryParticlesImp<double,3,0> *)pTVar20);
    }
    else {
      TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_02,true);
      local_c0._0_8_ = 0;
      local_c0._8_4_ = 0;
      TKinematicGeometryParticlesImp<double,3,0>::SetVf
                ((TKinematicGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                 (int)this_02->_padding_,&local_c0);
      local_b4._0_8_ = 0;
      local_b4._8_4_ = 0;
      TKinematicGeometryParticlesImp<double,3,0>::SetWf
                ((TKinematicGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                 (int)this_02->_padding_,&local_b4);
      bVar4 = *(byte *)((longlong)&this_01->_padding_ + 4);
      pTVar19 = pTVar12;
      if (5 < bVar4) {
        pTVar19 = this_01;
      }
      if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        if (2 < bVar4) {
          pTVar12 = this_01;
        }
        if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          FPBDRigidsSOAs::SetDynamicParticleSOA
                    (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)this_02);
        }
        else {
          FPBDRigidsSOAs::RemoveClusteredParticle
                    (this_00,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar12);
        }
      }
      else {
        FPBDRigidsSOAs::RemoveGeometryCollectionParticle
                  (this_00,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar19);
      }
      FPBDRigidsSOAs::RemoveFromActiveArray
                (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)this_02,false);
      if (CVars::bRemoveParticleFromMovingKinematicsOnDisable != false) {
        FPBDRigidsSOAs::
        RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)this_02,
                   &this_00->MovingKinematicsMapArray);
      }
    }
    if (CVars::bChaosSolverCheckParticleViews != false) {
      FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,this_01);
    }
    FPBDRigidsSOAs::UpdateViews(this_00);
    pFVar13 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)this_01->_padding_,
                         (int)this_01->_padding_);
    FVar7.Idx = pFVar13->Idx;
    pFVar14 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar7,Delete);
    pFVar14->Operation = Delete;
    pFVar15 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                        ((TGeometryParticlesImp<double,3,0> *)this_01->_padding_,
                         (int)this_01->_padding_);
    pFVar14->SpatialIdx = *pFVar15;
    ppTVar16 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                         ((TGeometryParticlesImp<double,3,0> *)this_01->_padding_,
                          (int)this_01->_padding_);
    pTVar8 = *ppTVar16;
    pFVar13 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)this_01->_padding_,
                         (int)this_01->_padding_);
    FStack_e4.Word2 = 0;
    FStack_e4.Word3 = 0;
    FStack_e4.Word0 = 0;
    FStack_e4.Word1 = 0;
    FStack_d4.Word2 = 0;
    FStack_d4.Word3 = 0;
    iVar5 = pFVar13->Idx;
    FStack_d4.Word0 = 0;
    FStack_d4.Word1 = 0;
    local_c4 = local_c4 & 0xffffff00;
    if ((iVar5 == -1) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3133560516564217994>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                            ,0xf76,"CachedUniqueIdx.IsValid()"), bVar11)) break;
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (this_01,&FStack_e4);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (this_01,&FStack_d4);
    local_c4 = CONCAT31(local_c4._1_3_,1);
    (pFVar14->AccelerationHandle).ExternalGeometryParticle = pTVar8;
    (pFVar14->AccelerationHandle).GeometryParticleHandle = this_01;
    (pFVar14->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar5;
    (pFVar14->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_e4.Word0;
    (pFVar14->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_e4.Word1;
    (pFVar14->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_e4.Word2;
    *(ulonglong *)&(pFVar14->AccelerationHandle).UnionQueryFilterData.Word3 =
         CONCAT44(FStack_d4.Word0,FStack_e4.Word3);
    (pFVar14->AccelerationHandle).UnionSimFilterData.Word1 = FStack_d4.Word1;
    (pFVar14->AccelerationHandle).UnionSimFilterData.Word2 = FStack_d4.Word2;
    *(ulonglong *)&(pFVar14->AccelerationHandle).UnionSimFilterData.Word3 =
         CONCAT44(local_c4,FStack_d4.Word3);
    FPendingSpatialInternalDataQueue::Remove(&this->InternalAccelerationQueue,FVar7);
    (**(code **)(this->InternalAcceleration->_padding_ + 0x88))(this->InternalAcceleration,pFVar14);
    pFVar22 = (this->ConstraintContainers).AllocatorInstance.Data;
    iVar5 = (this->ConstraintContainers).ArrayNum;
    pFVar2 = pFVar22 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->ConstraintContainers).ArrayNum != iVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar22 == pFVar2) break;
      (**(code **)(**(longlong **)pFVar22 + 0x38))(*(longlong **)pFVar22,this_01);
      pFVar22 = pFVar22 + 8;
    }
    pTVar17 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                        ((TGeometryParticlesImp<double,3,0> *)this_01->_padding_,
                         (int)this_01->_padding_);
    RemoveConstraintsFromConstraintGraph(this,pTVar17);
    Chaos::Private::FPBDIslandManager::RemoveParticle(&this->IslandManager,this_01);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// FlushAsyncAccelerationQueue @ 143d52600

void __thiscall
Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue(FPBDRigidsEvolutionBase *this)

{
  Chaos::Private::FTaskDispatcherEvolution::
  FlushAccelerationQueue<_Chaos::FPBDRigidsEvolutionBase::FlushAsyncAccelerationQueue_::__l2::<lambda_1>_>
            (&this->TaskDispatcher,(<lambda_1>)this);
  return;
}

// FlushExternalAccelerationQueue @ 143d52620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDRigidsEvolutionBase::FlushExternalAccelerationQueue
          (FPBDRigidsEvolutionBase *this,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          FPendingSpatialDataQueue *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  TGeometryParticle<double,3> *pTVar4;
  FImplicitObject *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  TAABB<double,3> *pTVar20;
  uint *puVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined1 auStackY_228 [32];
  FUniqueIdx local_1f8 [2];
  int local_1f0;
  FUniqueIdx local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  TGeometryParticle<double,3> *local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  FCollisionFilterData local_1c4;
  FCollisionFilterData local_1b4;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [48];
  TAABB<double,3> local_140;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  uVar16 = _UNK_150a9e6d8;
  uVar15 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar14 = _UNK_150a9e648;
  uVar13 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar12 = _UNK_1508ffb58;
  uVar11 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar10 = _UNK_150689688;
  uVar9 = ___xmm_3ff00000000000003ff0000000000000;
  uVar8 = _UNK_150689518;
  uVar7 = ___xmm_00000000000000003ff0000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar25 = (param_2->PendingData).ArrayNum - 1;
  iVar24 = (int)param_1->_padding_;
  if (-1 < (int)uVar25) {
    local_1e8 = (longlong)(int)uVar25;
    lVar22 = local_1e8 * 0x48;
    local_1f0 = iVar24;
    do {
      uVar18 = 0;
      if ((int)uVar25 < (param_2->PendingData).ArrayNum) {
        uVar18 = ~uVar25 >> 0x1f;
      }
      local_1e0 = lVar22;
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_2->PendingData).AllocatorInstance.Data + lVar22;
      if (*(int *)(pFVar23 + 0x3c) < iVar24) {
        local_1f8[0].Idx = *(int *)(pFVar23 + 0x10);
        puVar21 = (uint *)TArrayAsMap<Chaos::FUniqueIdx,int>::Find
                                    (&param_2->ParticleToPendingData,local_1f8);
        if (puVar21 != (uint *)0x0) {
          uVar18 = *puVar21;
          iVar24 = (param_2->PendingData).ArrayNum;
          if ((int)(uVar18 + 1) < iVar24) {
            uVar19 = 0;
            if ((int)(iVar24 - 1U) < iVar24) {
              uVar19 = ~(iVar24 - 1U) >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_1ec.Idx =
                 *(int *)((param_2->PendingData).AllocatorInstance.Data +
                         (longlong)(param_2->PendingData).ArrayNum * 0x48 + -0x38);
            puVar21 = (uint *)TArrayAsMap<Chaos::FUniqueIdx,int>::FindChecked
                                        (&param_2->ParticleToPendingData,&local_1ec);
            *puVar21 = uVar18;
          }
          uVar19 = 0;
          if ((int)uVar18 < (param_2->PendingData).ArrayNum) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar3 = (param_2->PendingData).ArrayNum;
          pFVar23 = (param_2->PendingData).AllocatorInstance.Data;
          iVar24 = iVar3 + ~uVar18;
          if (1 < iVar24) {
            iVar24 = 1;
          }
          if (iVar24 != 0) {
            memmove(pFVar23 + (longlong)(int)uVar18 * 0x48,
                    pFVar23 + (longlong)(iVar3 - iVar24) * 0x48,(longlong)iVar24 * 0x48);
          }
          piVar1 = &(param_2->PendingData).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,(ForAnyElementType *)param_2,(param_2->PendingData).ArrayNum,
                     &(param_2->PendingData).ArrayMax);
          TArrayAsMap<Chaos::FUniqueIdx,int>::RemoveChecked
                    (&param_2->ParticleToPendingData,local_1f8);
          iVar24 = local_1f0;
        }
      }
      else if (pFVar23[0x40] == (FScriptContainerElement)0x0) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar23,*(undefined2 *)(pFVar23 + 0x38));
      }
      else {
        pTVar4 = *(TGeometryParticle<double,3> **)pFVar23;
        local_1a0 = uVar13;
        uStack_198 = uVar14;
        local_190 = uVar15;
        uStack_188 = uVar16;
        local_180 = uVar11;
        uStack_178 = uVar12;
        pFVar5 = (pTVar4->MNonFrequentData).Property.MGeometry.Reference;
        if ((pFVar5 == (FImplicitObject *)0x0) || (pFVar5->bHasBoundingBox == false)) {
          uVar26 = 0;
        }
        else {
          uVar26 = 1;
          dVar27 = (double)*(float *)&(pTVar4->MXR).Property.MR.field_0x4;
          local_e8 = *(undefined4 *)&(pTVar4->MXR).Property.MX;
          uStack_e4 = *(undefined4 *)&(pTVar4->MXR).Property.MX.field_0x4;
          local_108._8_4_ = SUB84(dVar27,0);
          local_108._0_8_ = (double)*(float *)&(pTVar4->MXR).Property.MR;
          local_108._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          uVar2 = *(undefined8 *)&(pTVar4->MXR).Property.MX.field_0x8;
          uStack_e0 = (undefined4)uVar2;
          uStack_dc = (undefined4)((ulonglong)uVar2 >> 0x20);
          dVar27 = (double)*(float *)&(pTVar4->MXR).Property.MR.field_0xc;
          local_f8._8_4_ = SUB84(dVar27,0);
          local_f8._0_8_ = (double)*(float *)&(pTVar4->MXR).Property.MR.field_0x8;
          local_f8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          local_d8 = *(undefined8 *)&(pTVar4->MXR).Property.MX.field_0x10;
          uStack_d0 = 0;
          local_c8 = uVar9;
          uStack_c0 = uVar10;
          local_b8 = uVar7;
          uStack_b0 = uVar8;
          pTVar20 = (TAABB<double,3> *)(**(code **)(pFVar5->_padding_ + 0x90))(pFVar5,local_170);
          pTVar20 = TAABB<double,3>::TransformedAABB
                              (pTVar20,&local_140,(TRigidTransform<double,3> *)local_108);
          local_1a0 = *(undefined8 *)&pTVar20->MMin;
          uStack_198 = *(undefined8 *)&(pTVar20->MMin).field_0x8;
          local_190 = *(undefined8 *)&(pTVar20->MMin).field_0x10;
          uStack_188 = *(undefined8 *)&pTVar20->MMax;
          local_180 = *(undefined8 *)&(pTVar20->MMax).field_0x8;
          uStack_178 = *(undefined8 *)&(pTVar20->MMax).field_0x10;
        }
        pcVar6 = *(code **)(param_1->_padding_ + 0x98);
        local_1d8 = pTVar4;
        if (pTVar4->Proxy == (IPhysicsProxyBase *)0x0) {
          local_1d0 = 0;
        }
        else {
          local_1d0 = (**(code **)pTVar4->Proxy->_padding_)();
        }
        local_1c8 = (pTVar4->MNonFrequentData).Property.MUniqueIdx.Idx;
        local_1c4.Word2 = 0;
        local_1c4.Word3 = 0;
        local_1c4.Word0 = 0;
        local_1c4.Word1 = 0;
        local_1b4.Word2 = 0;
        local_1b4.Word3 = 0;
        local_1b4.Word0 = 0;
        local_1b4.Word1 = 0;
        local_1a4 = 0;
        if ((local_1c8 == -1) &&
           (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564218010>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf66,"CachedUniqueIdx.IsValid()"), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((CVars::bEnableAsyncInitBody == false) && (bVar17 = IsInGameThread(), !bVar17)) &&
           (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564218009>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf67,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()"),
           bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
                  (pTVar4,&local_1c4);
        FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
                  (pTVar4,&local_1b4);
        local_1a4 = 1;
        (*pcVar6)(param_1,&local_1d8,&local_1a0,uVar26);
        iVar24 = local_1f0;
      }
      local_1e8 = local_1e8 + -1;
      lVar22 = local_1e0 + -0x48;
      uVar25 = uVar25 - 1;
    } while (-1 < (int)uVar25);
  }
  return;
}

// FlushInternalAccelerationQueue @ 143d52b20

void __thiscall
Chaos::FPBDRigidsEvolutionBase::FlushInternalAccelerationQueue(FPBDRigidsEvolutionBase *this)

{
  longlong lVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar5;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  bool *pbVar9;
  TAABB<double,3> *pTVar10;
  TGeometryParticle<double,3> **ppTVar11;
  FUniqueIdx *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined2 *puVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20;
  TGeometryParticle<double,3> *local_88;
  TGeometryParticleHandleImp<double,3,1> *local_80;
  int local_78;
  FCollisionFilterData local_74;
  FCollisionFilterData local_64;
  undefined1 local_54;
  
  PruneInternalPendingData(this,this->InternalAcceleration);
  uVar3 = (this->InternalAccelerationQueue).PendingDataArrays.ArrayNum;
  uVar8 = (ulonglong)(int)uVar3;
  pFVar13 = (this->InternalAccelerationQueue).PendingDataArrays.AllocatorInstance.Data;
  pFVar15 = pFVar13 + uVar8 * 0x10;
  while( true ) {
    if ((this->InternalAccelerationQueue).PendingDataArrays.ArrayNum != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar15) break;
    lVar16 = *(longlong *)pFVar13;
    iVar4 = *(int *)(pFVar13 + 8);
    puVar14 = (undefined2 *)(lVar16 + 0x38);
    lVar1 = lVar16 + (longlong)iVar4 * 0x48;
    while( true ) {
      if (*(int *)(pFVar13 + 8) != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Chaos::FPendingSpatialData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (lVar16 == lVar1) break;
      pIVar5 = this->InternalAcceleration;
      if (*(char *)(puVar14 + 4) == '\0') {
        (**(code **)(pIVar5->_padding_ + 0x88))(pIVar5,lVar16,*puVar14);
        lVar16 = lVar16 + 0x48;
        puVar14 = puVar14 + 0x24;
      }
      else {
        this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(puVar14 + -0x18);
        pcVar6 = *(code **)(pIVar5->_padding_ + 0x98);
        uVar2 = *puVar14;
        pbVar9 = TGeometryParticlesImp<double,3,0>::HasBounds
                           ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                            (int)this_00->_padding_);
        local_res20 = *pbVar9;
        pTVar10 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(this_00);
        ppTVar11 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                              (int)this_00->_padding_);
        local_88 = *ppTVar11;
        local_80 = this_00;
        pFVar12 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                             (int)this_00->_padding_);
        local_78 = pFVar12->Idx;
        local_74.Word2 = 0;
        local_74.Word3 = 0;
        local_74.Word0 = 0;
        local_74.Word1 = 0;
        local_64.Word2 = 0;
        local_64.Word3 = 0;
        local_64.Word0 = 0;
        local_64.Word1 = 0;
        local_54 = 0;
        if (local_78 == -1) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3133560516564218025>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                             ,0xf57,"CachedUniqueIdx.IsValid()");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (this_00,&local_74);
        FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (this_00,&local_64);
        local_54 = 1;
        (*pcVar6)(pIVar5,&local_88,pTVar10,local_res20,uVar2);
        lVar16 = lVar16 + 0x48;
        puVar14 = puVar14 + 0x24;
      }
    }
    uVar8 = (ulonglong)uVar3;
    pFVar13 = pFVar13 + 0x10;
  }
  *(int *)&this->InternalAcceleration->_padding_ = this->LatestExternalTimestampConsumed_Internal;
  FPendingSpatialInternalDataQueue::Reset(&this->InternalAccelerationQueue);
  return;
}

// FlushSpatialAcceleration @ 143d52d50

void __thiscall
Chaos::FPBDRigidsEvolutionBase::FlushSpatialAcceleration(FPBDRigidsEvolutionBase *this)

{
  ComputeIntermediateSpatialAcceleration(this,true);
  ComputeIntermediateSpatialAcceleration(this,true);
  ComputeIntermediateSpatialAcceleration(this,true);
  return;
}

// FreeSpatialAcceleration_External @ 143d52d80

void __thiscall
Chaos::FPBDRigidsEvolutionBase::FreeSpatialAcceleration_External
          (FPBDRigidsEvolutionBase *this,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  atomic<int> *paVar1;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar2;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar3;
  
  aVar3 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
           )(this->ExternalStructuresPool).First;
  if (aVar3 == (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                )(this->ExternalStructuresPool).TailCopy) {
    aVar2 = (this->ExternalStructuresPool).Tail;
    aVar3 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
             )(this->ExternalStructuresPool).First;
    (this->ExternalStructuresPool).TailCopy = (FNode *)aVar2;
    if (aVar3 == aVar2) {
      aVar3 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
               )FMemory::Malloc(0x10,8);
      *(undefined8 *)aVar3 = 0;
      goto LAB_143d52de8;
    }
  }
  (this->ExternalStructuresPool).First = *(FNode **)aVar3;
  *(undefined8 *)aVar3 = 0;
LAB_143d52de8:
  *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
   ((TTypeCompatibleBytes<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*>
     *)((longlong)aVar3 + 8))->Pad = param_1;
  ((this->ExternalStructuresPool).Head)->Next = aVar3;
  (this->ExternalStructuresPool).Head = (FNode *)aVar3;
  LOCK();
  paVar1 = &(this->ExternalStructuresPool).NumElems;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  return;
}

// GetFirstPhysicsMaterial @ 143d55990

FChaosPhysicsMaterial * __thiscall
Chaos::FPBDRigidsEvolutionBase::GetFirstPhysicsMaterial
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FChaosPhysicsMaterial *pFVar1;
  
  pFVar1 = Chaos::Private::GetFirstPhysicsMaterial
                     (param_1,&this->PhysicsMaterials,&this->PerParticlePhysicsMaterials,
                      this->SolverPhysicsMaterials);
  return pFVar1;
}

// GetFreeSpatialAcceleration_Internal @ 143d559c0

ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
Chaos::FPBDRigidsEvolutionBase::GetFreeSpatialAcceleration_Internal(FPBDRigidsEvolutionBase *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar4;
  ISpatialAccelerationCollectionFactory *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  
  aVar4 = *(atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
            *)(this->ExternalStructuresPool).Tail;
  if (aVar4 != (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                )0x0) {
    pIVar11 = *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
               ((longlong)aVar4 + 8);
    (this->ExternalStructuresPool).Tail = aVar4;
    LOCK();
    paVar2 = &(this->ExternalStructuresPool).NumElems;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    return pIVar11;
  }
  pTVar3 = &this->AccelerationBackingBuffer;
  pIVar5 = (this->SpatialCollectionFactory).Ptr;
  pFVar10 = (FScriptContainerElement *)(**(code **)*pIVar5)(pIVar5,&local_res8);
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar6 <= pFVar10) &&
     (pFVar10 < pFVar6 + (longlong)(this->AccelerationBackingBuffer).ArrayMax * 8)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pIVar11 = (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)
                (*pcVar7)();
      return pIVar11;
    }
  }
  iVar9 = (this->AccelerationBackingBuffer).ArrayNum;
  piVar1 = &(this->AccelerationBackingBuffer).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->AccelerationBackingBuffer).ArrayNum = iVar9 + 1;
  *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8) = *(undefined8 *)pFVar10;
  *(undefined8 *)pFVar10 = 0;
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  iVar9 = (this->AccelerationBackingBuffer).ArrayNum;
  uVar12 = iVar9 - 1;
  uVar13 = 0;
  if ((int)uVar12 < iVar9) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pIVar11 = (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)
                (*pcVar7)();
      return pIVar11;
    }
  }
  return *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
          ((pTVar3->AllocatorInstance).Data +
          (longlong)(this->AccelerationBackingBuffer).ArrayNum * 8 + -8);
}

// PrepareTick @ 143d5c380

void __thiscall Chaos::FPBDRigidsEvolutionBase::PrepareTick(FPBDRigidsEvolutionBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar2 = (this->ConstraintContainers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x20))();
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// PruneInternalPendingData @ 143d5ee30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData
          (FPBDRigidsEvolutionBase *this,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::FStat_STAT_PruneInternalPendingData>
  FVar16;
  ulonglong uVar17;
  bool *pbVar18;
  TAABB<double,3> *pTVar19;
  TGeometryParticle<double,3> **ppTVar20;
  FUniqueIdx *pFVar21;
  longlong lVar22;
  FPendingSpatialInternalDataQueue *this_01;
  FScriptContainerElement *pFVar23;
  FName FVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  FColor_u_0 local_c0;
  uint local_bc;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  TGeometryParticle<double,3> *local_98;
  TGeometryParticleHandleImp<double,3,1> *local_90;
  int local_88;
  FCollisionFilterData local_84;
  FCollisionFilterData local_74;
  undefined1 local_64;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  FPendingSpatialInternalDataQueue *local_50;
  FName local_48;
  FName local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PruneInternalPendingData ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::FStat_STAT_PruneInternalPendingData>
         )0x0) {
      pFVar15 = ::FName::FName(&local_48,"STAT_PruneInternalPendingData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PruneInternalPendingData,*pFVar15,
                 L"STAT_PruneInternalPendingData","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_PruneInternalPendingData;
  if (StatPtr_STAT_PruneInternalPendingData ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::FStat_STAT_PruneInternalPendingData>
       )0x0) {
    pFVar15 = ::FName::FName(&local_40,"STAT_PruneInternalPendingData");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_&)_::_2_::FStat_STAT_PruneInternalPendingData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PruneInternalPendingData,
                          *pFVar15,L"STAT_PruneInternalPendingData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar16;
  bVar6 = false;
  bVar8 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar24.ComparisonIndex.Value.Value != 0) ||
     (bVar7 = bVar6, bVar9 = bVar8, FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c0._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_b8.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                   ,0x275);
        bVar6 = true;
        bVar8 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    bVar7 = bVar6;
    bVar9 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_b0 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar12 = true;
      bVar11 = true;
      goto LAB_143d5efac;
    }
  }
  bVar8 = bVar12;
  bVar6 = bVar11;
  bVar12 = false;
  bVar11 = false;
  local_b0 = local_a8;
  FVar24 = local_a8;
LAB_143d5efac:
  if (GSingleThreadedPhysics == 0) {
    Chaos::Private::FTaskDispatcherEvolution::
    PruneInternalPendingData<_Chaos::FPBDRigidsEvolutionBase::PruneInternalPendingData_::__l2::<lambda_1>_>
              (&this->TaskDispatcher,(<lambda_1>)param_1);
    bVar6 = bVar7;
    bVar11 = bVar12;
    bVar8 = bVar9;
  }
  else {
    this_01 = &this->InternalAccelerationQueue;
    local_50 = this_01;
    FPendingSpatialInternalDataQueue::CleanUpDuplicated(this_01);
    local_bc = (this->InternalAccelerationQueue).PendingDataArrays.ArrayNum;
    uVar17 = (ulonglong)(int)local_bc;
    pFVar25 = (this_01->PendingDataArrays).AllocatorInstance.Data;
    local_58 = pFVar25 + uVar17 * 0x10;
    while( true ) {
      pFVar23 = local_58;
      if ((this_01->PendingDataArrays).ArrayNum != (int)uVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar25 == pFVar23) break;
      uVar2 = *(uint *)&pFVar25[8].field_0x0;
      local_d0.Data = (FScriptContainerElement *)0x0;
      local_c8 = 0;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,uVar2,&local_d0,0,(int *)((longlong)&local_c8 + 4));
      }
      iVar3 = *(int *)&pFVar25[8].field_0x0;
      pFVar23 = *(FScriptContainerElement **)&pFVar25->field_0x0;
      local_60 = pFVar23 + (longlong)iVar3 * 0x48;
      while( true ) {
        pFVar10 = local_60;
        if (*(int *)&pFVar25[8].field_0x0 != iVar3) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<Chaos::FPendingSpatialData,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_d8);
        }
        FVar24 = local_b0;
        if (pFVar23 == pFVar10) break;
        this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar23 + 8);
        if (pFVar23[0x40] == (FScriptContainerElement)0x0) {
LAB_143d5f16e:
          if (((local_d0.Data <= pFVar23) &&
              (pFVar23 < local_d0.Data + (longlong)local_c8._4_4_ * 0x48)) &&
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
          if ((int)local_c8 == local_c8._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&local_d0,(int *)((longlong)&local_c8 + 4));
            local_c8 = CONCAT44(local_c8._4_4_,iVar14);
          }
          lVar22 = (longlong)(int)local_c8;
          local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
          uVar5 = *(undefined8 *)(pFVar23 + 8);
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48) = *(undefined8 *)pFVar23;
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48 + 8) = uVar5;
          uVar5 = *(undefined8 *)(pFVar23 + 0x18);
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48 + 0x10) = *(undefined8 *)(pFVar23 + 0x10);
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48 + 0x10 + 8) = uVar5;
          uVar5 = *(undefined8 *)(pFVar23 + 0x28);
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48 + 0x20) = *(undefined8 *)(pFVar23 + 0x20);
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48 + 0x20 + 8) = uVar5;
          uVar5 = *(undefined8 *)(pFVar23 + 0x38);
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48 + 0x30) = *(undefined8 *)(pFVar23 + 0x30);
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48 + 0x30 + 8) = uVar5;
          *(undefined8 *)(local_d0.Data + lVar22 * 0x48 + 0x40) = *(undefined8 *)(pFVar23 + 0x40);
        }
        else {
          pbVar18 = TGeometryParticlesImp<double,3,0>::HasBounds
                              ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                               (int)this_00->_padding_);
          if (*pbVar18 != false) {
            uVar1 = *(undefined2 *)(pFVar23 + 0x38);
            pcVar4 = *(code **)(param_1->_padding_ + 0x90);
            pTVar19 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(this_00);
            ppTVar20 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                                 ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                                  (int)this_00->_padding_);
            local_98 = *ppTVar20;
            local_90 = this_00;
            pFVar21 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                                 (int)this_00->_padding_);
            local_88 = pFVar21->Idx;
            local_84.Word2 = 0;
            local_84.Word3 = 0;
            local_84.Word0 = 0;
            local_84.Word1 = 0;
            local_74.Word2 = 0;
            local_74.Word3 = 0;
            local_74.Word0 = 0;
            local_74.Word1 = 0;
            local_64 = 0;
            if ((local_88 == -1) &&
               (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_3133560516564218025>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                    ,0xf57,"CachedUniqueIdx.IsValid()"), bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FAccelerationStructureHandle::
            ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                      (this_00,&local_84);
            FAccelerationStructureHandle::
            ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                      (this_00,&local_74);
            local_64 = 1;
            cVar13 = (*pcVar4)(param_1,&local_98,pTVar19,uVar1);
            if (cVar13 != '\0') goto LAB_143d5f16e;
          }
        }
        pFVar23 = pFVar23 + 0x48;
      }
      if (pFVar25 != (FScriptContainerElement *)&local_d0) {
        if (*(void **)&pFVar25->field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar25->field_0x0);
        }
        *(FScriptContainerElement **)&pFVar25->field_0x0 = local_d0.Data;
        *(int *)&pFVar25[8].field_0x0 = (int)local_c8;
        *(int *)(pFVar25 + 0xc) = local_c8._4_4_;
        local_c8 = 0;
        local_d0.Data = (FScriptContainerElement *)0x0;
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      pFVar25 = pFVar25 + 0x10;
      uVar17 = (ulonglong)local_bc;
      this_01 = local_50;
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// RebuildSpatialAccelerationForPerfTest @ 143d5fcc0

void __thiscall
Chaos::FPBDRigidsEvolutionBase::RebuildSpatialAccelerationForPerfTest(FPBDRigidsEvolutionBase *this)

{
  undefined1 *puVar1;
  FUniqueIdx FVar2;
  FBaseGraphTask *pFVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TParticleHandleBase<double,3>_u_0 *pTVar5;
  code *pcVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FSpatialAccelerationIdx FVar11;
  undefined2 uVar12;
  int iVar13;
  undefined7 uVar14;
  undefined8 uVar15;
  EParticleType EVar16;
  bool bVar17;
  ClusterId *pCVar18;
  IPhysicsProxyBase *pIVar19;
  IPhysicsProxyBase *pIVar20;
  bool *pbVar21;
  FUniqueIdx *pFVar22;
  FPendingSpatialData *pFVar23;
  TGeometryParticle<double,3> **ppTVar24;
  FSpatialAccelerationIdx *pFVar25;
  FPendingSpatialData *pFVar26;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar27;
  TParticleHandleBase<double,3>_u_0 this_00;
  int iVar28;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar29;
  int iStack_9c;
  undefined1 local_98 [24];
  int iStack_80;
  EParticleType EStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TGeometryParticle<double,3> *local_68;
  TGeometryParticleHandleImp<double,3,1> *pTStack_60;
  int local_58;
  FCollisionFilterData FStack_54;
  FCollisionFilterData FStack_44;
  uint local_34;
  
  WaitOnAccelerationStructure(this);
  iVar28 = (this->ParticleToCacheInnerIdx).Entries.ArrayMax;
  (this->ParticleToCacheInnerIdx).Entries.ArrayNum = 0;
  if (iVar28 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->ParticleToCacheInnerIdx,0,
               &(this->ParticleToCacheInnerIdx).Entries.ArrayMax);
  }
  FPendingSpatialDataQueue::Reset(&this->AsyncAccelerationQueue);
  FPendingSpatialInternalDataQueue::Reset(&this->InternalAccelerationQueue);
  pFVar3 = (this->AccelerationStructureTaskComplete).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    (this->AccelerationStructureTaskComplete).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar28 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar28 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,
             (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->NonDisabledView);
  if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
      (TGeometryParticlesImp<double,3,0> *)0x0) {
    pTVar29 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
    this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
    iVar28 = iStack_80;
    do {
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      EVar16 = EStack_7c;
      pTVar27 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_98 + 0x10);
      if (EStack_7c < Rigid) {
        pTVar27 = pTVar29;
      }
      if ((pTVar27 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) ||
         (bVar17 = TPBDRigidParticleHandleImp<double,3,0>::Disabled(pTVar27), !bVar17)) {
LAB_143d5fe3b:
        pbVar21 = TGeometryParticlesImp<double,3,0>::HasCollision(this_00.GeometryParticles,iVar28);
        if ((*pbVar21 != false) || (ForceNoCollisionIntoSQ != 0)) {
          pFVar22 = TGeometryParticlesImp<double,3,0>::UniqueIdx(this_00.GeometryParticles,iVar28);
          FVar2.Idx = pFVar22->Idx;
          pFVar23 = FPendingSpatialInternalDataQueue::Add
                              (&this->InternalAccelerationQueue,0,FVar2,Add);
          pFVar23->Operation = Update;
          ppTVar24 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                               (this_00.GeometryParticles,iVar28);
          local_68 = *ppTVar24;
          pTStack_60 = TGeometryParticleHandleImp<double,3,0>::Handle
                                 ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
          pFVar22 = TGeometryParticlesImp<double,3,0>::UniqueIdx(this_00.GeometryParticles,iVar28);
          FStack_54.Word2 = 0;
          FStack_54.Word3 = 0;
          FStack_54.Word0 = 0;
          FStack_54.Word1 = 0;
          FStack_44.Word2 = 0;
          FStack_44.Word3 = 0;
          local_58 = pFVar22->Idx;
          FStack_44.Word0 = 0;
          FStack_44.Word1 = 0;
          local_34 = local_34 & 0xffffff00;
          if ((local_58 == -1) &&
             (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                  ,0xf76,"CachedUniqueIdx.IsValid()"), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FAccelerationStructureHandle::
          ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10),&FStack_54);
          FAccelerationStructureHandle::
          ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10),&FStack_44);
          local_34 = CONCAT31(local_34._1_3_,1);
          (pFVar23->AccelerationHandle).ExternalGeometryParticle = local_68;
          (pFVar23->AccelerationHandle).GeometryParticleHandle = pTStack_60;
          (pFVar23->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_58;
          (pFVar23->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_54.Word0;
          (pFVar23->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_54.Word1;
          (pFVar23->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_54.Word2;
          *(ulonglong *)&(pFVar23->AccelerationHandle).UnionQueryFilterData.Word3 =
               CONCAT44(FStack_44.Word0,FStack_54.Word3);
          (pFVar23->AccelerationHandle).UnionSimFilterData.Word1 = FStack_44.Word1;
          (pFVar23->AccelerationHandle).UnionSimFilterData.Word2 = FStack_44.Word2;
          *(ulonglong *)&(pFVar23->AccelerationHandle).UnionSimFilterData.Word3 =
               CONCAT44(local_34,FStack_44.Word3);
          pFVar25 = TGeometryParticlesImp<double,3,0>::SpatialIdx(this_00.GeometryParticles,iVar28);
          pFVar23->SpatialIdx = *pFVar25;
          pFVar26 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar2,Add);
          pTVar7 = (pFVar23->AccelerationHandle).GeometryParticleHandle;
          (pFVar26->AccelerationHandle).ExternalGeometryParticle =
               (pFVar23->AccelerationHandle).ExternalGeometryParticle;
          (pFVar26->AccelerationHandle).GeometryParticleHandle = pTVar7;
          uVar8 = (pFVar23->AccelerationHandle).UnionQueryFilterData.Word0;
          uVar9 = (pFVar23->AccelerationHandle).UnionQueryFilterData.Word1;
          uVar10 = (pFVar23->AccelerationHandle).UnionQueryFilterData.Word2;
          (pFVar26->AccelerationHandle).CachedUniqueIdx =
               (FUniqueIdx)(pFVar23->AccelerationHandle).CachedUniqueIdx.Idx;
          (pFVar26->AccelerationHandle).UnionQueryFilterData.Word0 = uVar8;
          (pFVar26->AccelerationHandle).UnionQueryFilterData.Word1 = uVar9;
          (pFVar26->AccelerationHandle).UnionQueryFilterData.Word2 = uVar10;
          uVar8 = (pFVar23->AccelerationHandle).UnionSimFilterData.Word1;
          uVar9 = (pFVar23->AccelerationHandle).UnionSimFilterData.Word2;
          *(undefined8 *)&(pFVar26->AccelerationHandle).UnionQueryFilterData.Word3 =
               *(undefined8 *)&(pFVar23->AccelerationHandle).UnionQueryFilterData.Word3;
          (pFVar26->AccelerationHandle).UnionSimFilterData.Word1 = uVar8;
          (pFVar26->AccelerationHandle).UnionSimFilterData.Word2 = uVar9;
          FVar11 = pFVar23->SpatialIdx;
          uVar12 = *(undefined2 *)&pFVar23->field_0x3a;
          iVar13 = pFVar23->SyncTimestamp;
          *(undefined8 *)&(pFVar26->AccelerationHandle).UnionSimFilterData.Word3 =
               *(undefined8 *)&(pFVar23->AccelerationHandle).UnionSimFilterData.Word3;
          pFVar26->SpatialIdx = FVar11;
          *(undefined2 *)&pFVar26->field_0x3a = uVar12;
          pFVar26->SyncTimestamp = iVar13;
          uVar14 = *(undefined7 *)&pFVar23->field_0x41;
          pFVar26->Operation = pFVar23->Operation;
          *(undefined7 *)&pFVar26->field_0x41 = uVar14;
        }
      }
      else {
        pTVar27 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_98 + 0x10);
        if (EVar16 < Clustered) {
          pTVar27 = pTVar29;
        }
        if (pTVar27 != (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
          pCVar18 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                              (*(TPBDRigidClusteredParticles<double,3> **)pTVar27,
                               *(int *)&pTVar27->field_0x8);
          pTVar4 = pCVar18->Id;
          if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar27 = pTVar29;
            if (2 < (byte)pTVar4->field_0xc) {
              pTVar27 = (TPBDRigidParticleHandleImp<double,3,0> *)pTVar4;
            }
            if (pTVar27 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
              bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                  ,0x215,"false");
              if (bVar17) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              bVar17 = TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                 ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar27);
              if (bVar17) {
                pIVar19 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    (*(TGeometryParticlesImp<double,3,0> **)pTVar27,
                                     *(int *)&((TPBDRigidClusteredParticleHandleImp<double,3,1> *)
                                              pTVar27)->field_0x8);
                pIVar20 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    (this_00.GeometryParticles,iVar28);
                if (pIVar19 == pIVar20) goto LAB_143d5fe3b;
              }
            }
          }
        }
      }
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      do {
        uVar15 = local_98._8_8_;
        if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_98._8_8_ ==
            (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar28 = iVar28 + 1;
          iStack_80 = iVar28;
          if (local_74 <= iVar28) {
LAB_143d5ffa7:
            local_78 = local_78 + 1;
            TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98
                      );
            this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
            iVar28 = iStack_80;
          }
        }
        else {
          iVar28 = local_70 + 1;
          local_70 = iVar28;
          if (*(int *)(local_98._8_8_ + 8) <= iVar28) goto LAB_143d5ffa7;
          if ((iVar28 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar5 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar15)->Data + (longlong)iVar28 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar5->GeometryParticles;
          iVar28 = *(int *)(pTVar5 + 1);
          if (this_00.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_9c = (uint)iStack_9c._1_3_ << 8;
          }
          else {
            iStack_9c = CONCAT31(iStack_9c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          _EStack_7c = iStack_9c;
          iStack_80 = iVar28;
          local_98._16_8_ = this_00;
        }
        if (this_00.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
        goto LAB_143d5fff2;
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        bVar17 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
      } while (bVar17);
    } while (this_00.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
  }
LAB_143d5fff2:
  ComputeIntermediateSpatialAcceleration(this,true);
  ComputeIntermediateSpatialAcceleration(this,true);
  ComputeIntermediateSpatialAcceleration(this,true);
  return;
}

// ReleaseIdx @ 143d61150

void __thiscall
Chaos::FPBDRigidsEvolutionBase::ReleaseIdx(FPBDRigidsEvolutionBase *this,FUniqueIdx param_1)

{
  int *piVar1;
  TArray<Chaos::FUniqueIdx,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res10 [6];
  
  pTVar2 = &this->PendingReleaseIndices;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1.Idx;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->PendingReleaseIndices).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->PendingReleaseIndices).ArrayNum;
  piVar1 = &(this->PendingReleaseIndices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingReleaseIndices).ArrayNum = iVar6 + 1;
  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
  return;
}

// ReleasePendingIndices @ 143d61200

void __thiscall Chaos::FPBDRigidsEvolutionBase::ReleasePendingIndices(FPBDRigidsEvolutionBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->PendingReleaseIndices).AllocatorInstance.Data;
  iVar2 = (this->PendingReleaseIndices).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->PendingReleaseIndices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FUniqueIdx,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)((longlong)*this->Particles->UniqueIndices + 0x10))();
    pFVar3 = pFVar3 + 4;
  }
  (this->PendingReleaseIndices).ArrayNum = 0;
  if ((this->PendingReleaseIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PendingReleaseIndices).AllocatorInstance,0,
               &(this->PendingReleaseIndices).ArrayMax);
  }
  return;
}

// ResetCollisions @ 143d69070

void __thiscall Chaos::FPBDRigidsEvolutionBase::ResetCollisions(FPBDRigidsEvolutionBase *this)

{
  return;
}

// Serialize @ 143d6d500

void __thiscall
Chaos::FPBDRigidsEvolutionBase::Serialize(FPBDRigidsEvolutionBase *this,FChaosArchive *param_1)

{
  TArray<TUniquePtr<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FUniqueIdx FVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  ISpatialAccelerationCollectionFactory *pIVar5;
  FBaseGraphTask *pFVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  TParticleHandleBase<double,3>_u_0 *pTVar8;
  code *pcVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  longlong *plVar11;
  uint uVar12;
  FSpatialAccelerationIdx FVar13;
  undefined2 uVar14;
  undefined7 uVar15;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar16;
  undefined8 uVar17;
  EParticleType EVar18;
  bool bVar19;
  int iVar20;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  *pTVar21;
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *this_00;
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar22;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *this_01;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *this_02;
  FSpatialAccelerationIdx *pFVar23;
  ClusterId *pCVar24;
  IPhysicsProxyBase *pIVar25;
  IPhysicsProxyBase *pIVar26;
  bool *pbVar27;
  FUniqueIdx *pFVar28;
  FPendingSpatialData *pFVar29;
  TGeometryParticle<double,3> **ppTVar30;
  FPendingSpatialData *pFVar31;
  uint uVar32;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar33;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar34;
  undefined1 *puVar35;
  int iVar36;
  TParticleHandleBase<double,3>_u_0 this_03;
  uint uVar37;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar38;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  char *pcVar39;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  local_e8;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *local_e0;
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *local_d8;
  undefined1 local_d0 [24];
  int iStack_b8;
  EParticleType EStack_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a0;
  TGeometryParticle<double,3> *local_98;
  TGeometryParticleHandleImp<double,3,1> *pTStack_90;
  int local_88;
  FCollisionFilterData FStack_84;
  FCollisionFilterData FStack_74;
  uint local_64;
  TParticleHandleBase<double,3>_u_0 local_60;
  int iStack_58;
  int iStack_54;
  undefined8 *local_50 [2];
  
  pcVar39 = "false";
  bVar19 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<7803858562110718991>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                      ,0x40f,"false");
  iVar36 = BroadPhaseConfig.BroadphaseType;
  if (bVar19) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_a0 = BroadPhaseConfig.BroadphaseType;
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar20 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar20 < 0xb) {
    BroadPhaseConfig.BroadphaseType = 3;
  }
  else {
    piVar3 = *(int **)param_1->_padding_;
    if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar3 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&BroadPhaseConfig,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&BroadPhaseConfig);
      }
    }
    else {
      BroadPhaseConfig.BroadphaseType = *piVar3;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
  }
  FPBDRigidsSOAs::Serialize(this->Particles,param_1);
  iVar20 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar20 < 3) {
    if ((param_1->_padding_ & 1) != 0) {
      pFVar6 = (this->AccelerationStructureTaskComplete).Reference;
      pTVar38 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
      if (pFVar6 != (FBaseGraphTask *)0x0) {
        (this->AccelerationStructureTaskComplete).Reference = (FBaseGraphTask *)0x0;
        LOCK();
        puVar35 = &pFVar6->field_0x30;
        iVar20 = *(int *)puVar35;
        *(int *)puVar35 = *(int *)puVar35 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
        }
      }
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_d0,
                 (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                  *)&this->Particles->NonDisabledView);
      if ((TGeometryParticlesImp<double,3,0> *)local_d0._16_8_ !=
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        this_03 = (TParticleHandleBase<double,3>_u_0)local_d0._16_8_;
        iVar20 = iStack_b8;
        do {
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_d0);
          pFVar23 = TGeometryParticlesImp<double,3,0>::SpatialIdx(this_03.GeometryParticles,iVar20);
          EVar18 = EStack_b4;
          pTVar34 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_d0 + 0x10);
          if (EStack_b4 < Rigid) {
            pTVar34 = pTVar38;
          }
          pFVar23->Bucket = 0;
          pFVar23->InnerIdx = 0;
          if ((pTVar34 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) ||
             (bVar19 = TPBDRigidParticleHandleImp<double,3,0>::Disabled(pTVar34), !bVar19)) {
LAB_143d6da9c:
            pbVar27 = TGeometryParticlesImp<double,3,0>::HasCollision
                                (this_03.GeometryParticles,iVar20);
            if ((*pbVar27 != false) || (ForceNoCollisionIntoSQ != 0)) {
              pFVar28 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                  (this_03.GeometryParticles,iVar20);
              FVar2.Idx = pFVar28->Idx;
              pFVar29 = FPendingSpatialInternalDataQueue::Add
                                  (&this->InternalAccelerationQueue,0,FVar2,Add);
              pFVar29->Operation = Update;
              ppTVar30 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                                   (this_03.GeometryParticles,iVar20);
              local_98 = *ppTVar30;
              pTStack_90 = TGeometryParticleHandleImp<double,3,0>::Handle
                                     ((TGeometryParticleHandleImp<double,3,0> *)(local_d0 + 0x10));
              pFVar28 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                  (this_03.GeometryParticles,iVar20);
              FStack_84.Word2 = 0;
              FStack_84.Word3 = 0;
              FStack_84.Word0 = 0;
              FStack_84.Word1 = 0;
              FStack_74.Word2 = 0;
              FStack_74.Word3 = 0;
              local_88 = pFVar28->Idx;
              FStack_74.Word0 = 0;
              FStack_74.Word1 = 0;
              local_64 = local_64 & 0xffffff00;
              if ((local_88 == -1) &&
                 (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                      ,0xf76,"CachedUniqueIdx.IsValid()"), bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FAccelerationStructureHandle::
              ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_d0 + 0x10),&FStack_84);
              FAccelerationStructureHandle::
              ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_d0 + 0x10),&FStack_74);
              local_64 = CONCAT31(local_64._1_3_,1);
              (pFVar29->AccelerationHandle).ExternalGeometryParticle = local_98;
              (pFVar29->AccelerationHandle).GeometryParticleHandle = pTStack_90;
              (pFVar29->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_88;
              (pFVar29->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_84.Word0;
              (pFVar29->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_84.Word1;
              (pFVar29->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_84.Word2;
              *(ulonglong *)&(pFVar29->AccelerationHandle).UnionQueryFilterData.Word3 =
                   CONCAT44(FStack_74.Word0,FStack_84.Word3);
              (pFVar29->AccelerationHandle).UnionSimFilterData.Word1 = FStack_74.Word1;
              (pFVar29->AccelerationHandle).UnionSimFilterData.Word2 = FStack_74.Word2;
              *(ulonglong *)&(pFVar29->AccelerationHandle).UnionSimFilterData.Word3 =
                   CONCAT44(local_64,FStack_74.Word3);
              pFVar23 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                                  (this_03.GeometryParticles,iVar20);
              pFVar29->SpatialIdx = *pFVar23;
              pFVar31 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar2,Add)
              ;
              pTVar10 = (pFVar29->AccelerationHandle).GeometryParticleHandle;
              (pFVar31->AccelerationHandle).ExternalGeometryParticle =
                   (pFVar29->AccelerationHandle).ExternalGeometryParticle;
              (pFVar31->AccelerationHandle).GeometryParticleHandle = pTVar10;
              uVar37 = (pFVar29->AccelerationHandle).UnionQueryFilterData.Word0;
              uVar32 = (pFVar29->AccelerationHandle).UnionQueryFilterData.Word1;
              uVar12 = (pFVar29->AccelerationHandle).UnionQueryFilterData.Word2;
              (pFVar31->AccelerationHandle).CachedUniqueIdx =
                   (FUniqueIdx)(pFVar29->AccelerationHandle).CachedUniqueIdx.Idx;
              (pFVar31->AccelerationHandle).UnionQueryFilterData.Word0 = uVar37;
              (pFVar31->AccelerationHandle).UnionQueryFilterData.Word1 = uVar32;
              (pFVar31->AccelerationHandle).UnionQueryFilterData.Word2 = uVar12;
              uVar37 = (pFVar29->AccelerationHandle).UnionSimFilterData.Word1;
              uVar32 = (pFVar29->AccelerationHandle).UnionSimFilterData.Word2;
              *(undefined8 *)&(pFVar31->AccelerationHandle).UnionQueryFilterData.Word3 =
                   *(undefined8 *)&(pFVar29->AccelerationHandle).UnionQueryFilterData.Word3;
              (pFVar31->AccelerationHandle).UnionSimFilterData.Word1 = uVar37;
              (pFVar31->AccelerationHandle).UnionSimFilterData.Word2 = uVar32;
              FVar13 = pFVar29->SpatialIdx;
              uVar14 = *(undefined2 *)&pFVar29->field_0x3a;
              iVar36 = pFVar29->SyncTimestamp;
              *(undefined8 *)&(pFVar31->AccelerationHandle).UnionSimFilterData.Word3 =
                   *(undefined8 *)&(pFVar29->AccelerationHandle).UnionSimFilterData.Word3;
              pFVar31->SpatialIdx = FVar13;
              *(undefined2 *)&pFVar31->field_0x3a = uVar14;
              pFVar31->SyncTimestamp = iVar36;
              uVar15 = *(undefined7 *)&pFVar29->field_0x41;
              pFVar31->Operation = pFVar29->Operation;
              *(undefined7 *)&pFVar31->field_0x41 = uVar15;
            }
          }
          else {
            pTVar34 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_d0 + 0x10);
            if (EVar18 < Clustered) {
              pTVar34 = pTVar38;
            }
            if (pTVar34 != (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
              pCVar24 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar34,
                                   *(int *)&pTVar34->field_0x8);
              pTVar7 = pCVar24->Id;
              if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                pTVar34 = pTVar38;
                if (2 < (byte)pTVar7->field_0xc) {
                  pTVar34 = (TPBDRigidParticleHandleImp<double,3,0> *)pTVar7;
                }
                if (pTVar34 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
                  bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                      ,0x215,"false");
                  if (bVar19) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                else {
                  bVar19 = TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                     ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar34);
                  if (bVar19) {
                    pIVar25 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                        (*(TGeometryParticlesImp<double,3,0> **)pTVar34,
                                         *(int *)&((TPBDRigidClusteredParticleHandleImp<double,3,1>
                                                    *)pTVar34)->field_0x8);
                    pIVar26 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                        (this_03.GeometryParticles,iVar20);
                    if (pIVar25 == pIVar26) goto LAB_143d6da9c;
                  }
                }
              }
            }
          }
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_d0);
          do {
            uVar17 = local_d0._8_8_;
            if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)local_d0._8_8_ ==
                (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              iVar20 = iVar20 + 1;
              iStack_b8 = iVar20;
              if (local_ac <= iVar20) {
LAB_143d6dc15:
                local_b0 = local_b0 + 1;
                TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                          ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                           local_d0);
                this_03 = (TParticleHandleBase<double,3>_u_0)local_d0._16_8_;
                iVar20 = iStack_b8;
              }
            }
            else {
              iVar36 = local_a8 + 1;
              local_a8 = iVar36;
              if (*(int *)(local_d0._8_8_ + 8) <= iVar36) goto LAB_143d6dc15;
              if ((iVar36 < 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar8 = *(TParticleHandleBase<double,3>_u_0 **)
                        (((ForAnyElementType *)uVar17)->Data + (longlong)iVar36 * 8);
              this_03 = (TParticleHandleBase<double,3>_u_0)pTVar8->GeometryParticles;
              iVar20 = *(int *)(pTVar8 + 1);
              if (this_03.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
                iStack_54 = (uint)iStack_54._1_3_ << 8;
              }
              else {
                iStack_54 = CONCAT31(iStack_54._1_3_,(this_03.GeometryParticles)->MParticleType);
              }
              _EStack_b4 = iStack_54;
              iStack_b8 = iVar20;
              local_d0._16_8_ = this_03;
              local_60 = this_03;
              iStack_58 = iVar20;
            }
            iVar36 = local_a0;
            if (this_03.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
            goto LAB_143d6dc54;
            TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                      ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_d0
                      );
            bVar19 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                               ((TGeometryParticleHandleImp<double,3,0> *)(local_d0 + 0x10));
          } while (bVar19);
          iVar36 = local_a0;
        } while (this_03.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
      }
LAB_143d6dc54:
      ComputeIntermediateSpatialAcceleration(this,true);
      ComputeIntermediateSpatialAcceleration(this,true);
      ComputeIntermediateSpatialAcceleration(this,true);
    }
  }
  else {
    iVar20 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    if (0xe < iVar20) {
      FlushInternalAccelerationQueue(this);
    }
    iVar20 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    pTVar22 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)0x0;
    if (iVar20 < 8) {
      local_e8.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
      if ((param_1->_padding_ & 1) == 0) {
        pTVar21 = (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                   *)(**(code **)(this->InternalAcceleration->_padding_ + 0xe8))
                               (this->InternalAcceleration,local_50,0);
        TVar16.Ptr = local_e8.Ptr;
        TVar33.Ptr = local_e8.Ptr;
        if (&local_e8 != pTVar21) {
          TVar33.Ptr = pTVar21->Ptr;
          pTVar21->Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
          if ((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)local_e8.Ptr !=
              (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)0x0) {
            plVar11 = &(local_e8.Ptr)->_padding_;
            local_e8.Ptr = TVar33.Ptr;
            (**(code **)*plVar11)(TVar16.Ptr,1);
            TVar33.Ptr = local_e8.Ptr;
          }
        }
        local_e8.Ptr = TVar33.Ptr;
        if (local_50[0] != (undefined8 *)0x0) {
          (**(code **)*local_50[0])(local_50[0],1);
        }
        operator<<<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle_double_3>_>
                  (param_1,&local_e8);
        (**(code **)(this->InternalAcceleration->_padding_ + 0xe0))
                  (this->InternalAcceleration,local_res8,&local_e8,0,
                   (ulonglong)pcVar39 & 0xffffffffffff0000);
      }
      else {
        operator<<<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle_double_3>_>
                  (param_1,&local_e8);
        pTVar1 = &this->AccelerationBackingBuffer;
        TVar33.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)pTVar22;
        if ((local_e8.Ptr)->Type == '\0') {
          TVar33.Ptr = local_e8.Ptr;
        }
        if ((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
             *)TVar33.Ptr ==
            (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
             *)0x0) {
          TVar33.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)pTVar22
          ;
          if ((local_e8.Ptr)->Type == '\x01') {
            TVar33.Ptr = local_e8.Ptr;
          }
          if ((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)TVar33.Ptr ==
              (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)0x0) {
            this_02 = ::operator_new(0x140);
            if (this_02 !=
                (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *)0x0) {
              pTVar22 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                         *)TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                           ::
                           TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                                     (this_02);
            }
            puVar35 = local_res20;
          }
          else {
            this_01 = ::operator_new(0x140);
            if (this_01 ==
                (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *)0x0) {
              pTVar22 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                         *)0x0;
              puVar35 = local_res18;
            }
            else {
              pTVar22 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                         *)TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                           ::
                           TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                                     (this_01);
              puVar35 = local_res18;
            }
          }
        }
        else {
          this_00 = ::operator_new(0x140);
          if (this_00 ==
              (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)0x0) {
            puVar35 = local_res10;
          }
          else {
            pTVar22 = TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                      ::
                      TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                                (this_00);
            puVar35 = local_res10;
          }
        }
        (**(code **)(pTVar22->_padding_ + 0xe0))
                  (pTVar22,puVar35,&local_e8,0,(ulonglong)pcVar39 & 0xffffffffffff0000);
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        local_d8 = pTVar22;
        if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar4 + (longlong)(this->AccelerationBackingBuffer).ArrayMax * 8)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar20 = (this->AccelerationBackingBuffer).ArrayNum;
        piVar3 = &(this->AccelerationBackingBuffer).ArrayMax;
        if (iVar20 == *piVar3) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar3);
        }
        (this->AccelerationBackingBuffer).ArrayNum = iVar20 + 1;
        *(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
          **)((pTVar1->AllocatorInstance).Data + (longlong)iVar20 * 8) = local_d8;
        iVar20 = (this->AccelerationBackingBuffer).ArrayNum;
        local_d8 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                    *)0x0;
        uVar32 = iVar20 - 1;
        uVar37 = 0;
        if ((int)uVar32 < iVar20) {
          uVar37 = ~uVar32 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this->InternalAcceleration =
             *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
              ((pTVar1->AllocatorInstance).Data +
              (longlong)(this->AccelerationBackingBuffer).ArrayNum * 8 + -8);
      }
      if ((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *)local_e8.Ptr !=
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *)0x0) {
        (**(code **)(local_e8.Ptr)->_padding_)(local_e8.Ptr,1);
      }
    }
    else {
      pIVar5 = (this->SpatialCollectionFactory).Ptr;
      local_e0 = (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0
      ;
      (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,&local_e0,param_1);
      pTVar1 = &this->AccelerationBackingBuffer;
      this->InternalAcceleration = local_e0;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 <
           pFVar4 + (longlong)(this->AccelerationBackingBuffer).ArrayMax * 8)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar20 = (this->AccelerationBackingBuffer).ArrayNum;
      piVar3 = &(this->AccelerationBackingBuffer).ArrayMax;
      if (iVar20 == *piVar3) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar3);
      }
      (this->AccelerationBackingBuffer).ArrayNum = iVar20 + 1;
      *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
       ((pTVar1->AllocatorInstance).Data + (longlong)iVar20 * 8) = local_e0;
    }
  }
  BroadPhaseConfig.BroadphaseType = iVar36;
  return;
}

// SetName @ 143d6ed40

void __thiscall
Chaos::FPBDRigidsEvolutionBase::SetName(FPBDRigidsEvolutionBase *this,FString *param_1)

{
  FSharedDebugName *pFVar1;
  FSharedDebugName local_18;
  
  pFVar1 = FSharedDebugName::FSharedDebugName(&local_18,param_1);
  if (&this->EvolutionName != pFVar1) {
    (this->EvolutionName).Name.Object = (pFVar1->Name).Object;
    (pFVar1->Name).Object = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvolutionName).Name.SharedReferenceCount,&(pFVar1->Name).SharedReferenceCount
              );
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Name.SharedReferenceCount.ReferenceController);
  return;
}

// SetParticleObjectState @ 143d6fcc0

void __thiscall
Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
          (FPBDRigidsEvolutionBase *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          EObjectStateType param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  EObjectStateType EVar4;
  bool bVar5;
  bool *pbVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  char cVar8;
  uint uVar9;
  char cVar10;
  
  EVar4 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  if ((EVar4 == Dynamic) || (EVar4 == Sleeping)) {
    cVar10 = '\x01';
  }
  else {
    cVar10 = '\0';
  }
  if ((param_2 == Dynamic) || (param_2 == Sleeping)) {
    cVar8 = '\x01';
  }
  else {
    cVar8 = '\0';
  }
  TPBDRigidParticles<double,3>::SetObjectState
            (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8,param_2);
  pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  if (2 < (byte)param_1->field_0xc) {
    pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_1;
  }
  if (pTVar7 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    FPBDRigidsSOAs::SetDynamicParticleSOA(this->Particles,param_1);
  }
  else {
    FPBDRigidsSOAs::SetClusteredParticleSOA(this->Particles,pTVar7);
  }
  if (EVar4 != param_2) {
    pbVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(param_1);
    if (*pbVar6 == false) {
      if (param_2 != Dynamic) {
        FPBDRigidsSOAs::MarkTransientDirtyParticle
                  (this->Particles,(TGeometryParticleHandleImp<double,3,1> *)param_1,true);
      }
      if (cVar8 != '\0') {
        TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter(param_1,'\0');
      }
      if (param_2 == Sleeping) {
        Chaos::Private::FPBDIslandManager::SleepParticle
                  (&this->IslandManager,(TGeometryParticleHandleImp<double,3,1> *)param_1);
      }
      TPBDRigidParticleHandleImp<double,3,1>::ClearIsMovingKinematic(param_1);
    }
  }
  if ((cVar8 != '\0') && (cVar10 == '\0')) {
    pbVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(param_1);
    if (*pbVar6 == false) {
      Chaos::Private::FPBDIslandManager::AddParticle
                (&this->IslandManager,(TGeometryParticleHandleImp<double,3,1> *)param_1);
    }
  }
  uVar1 = *(uint *)&param_1->field_0x8;
  lVar2 = *(longlong *)param_1;
  uVar9 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((*(byte *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 4 & 1) != 0) &&
     (cVar10 != cVar8)) {
    TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty(param_1);
    return;
  }
  return;
}

// SetParticleSleepType @ 143d6fe70

void __thiscall
Chaos::FPBDRigidsEvolutionBase::SetParticleSleepType
          (FPBDRigidsEvolutionBase *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          ESleepType param_2)

{
  EObjectStateType EVar1;
  EObjectStateType EVar2;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar3;
  
  EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  TPBDRigidParticleHandleImp<double,3,1>::SetSleepType(param_1,param_2);
  EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  pTVar3 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  if (2 < (byte)param_1->field_0xc) {
    pTVar3 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_1;
  }
  if (pTVar3 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    FPBDRigidsSOAs::SetDynamicParticleSOA(this->Particles,param_1);
  }
  else {
    FPBDRigidsSOAs::SetClusteredParticleSOA(this->Particles,pTVar3);
  }
  if ((EVar1 != EVar2) && (EVar2 != Dynamic)) {
    FPBDRigidsSOAs::MarkTransientDirtyParticle
              (this->Particles,(TGeometryParticleHandleImp<double,3,1> *)param_1,true);
  }
  return;
}

// TestModeParticleDisabled @ 143d75350

void __thiscall
Chaos::FPBDRigidsEvolutionBase::TestModeParticleDisabled
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  TGeometryParticleHandleImp<double,3,1> *local_res10 [3];
  
  local_res10[0] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    local_res10[0] = param_1;
  }
  if (local_res10[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (*(int *)&(this->TestModeData).field_0x8 != *(int *)&(this->TestModeData).field_0x34) {
      uVar1 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*>
                ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
                  *)&this->TestModeData,uVar1 >> 0x10 ^ uVar1,
                 (TPBDRigidParticleHandleImp<double,3,1> **)local_res10);
    }
  }
  return;
}

// TestModeRestoreParticle @ 143d754e0

void __thiscall
Chaos::FPBDRigidsEvolutionBase::TestModeRestoreParticle
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FTestModeParticleData *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  if (CVars::bChaos_Solver_TestMode_Enabled) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      this_00 = param_1;
    }
    if ((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (pFVar1 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                 ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                         *)&this->TestModeData,(TPBDRigidParticleHandleImp<double,3,1> *)this_00),
       pFVar1 != (FTestModeParticleData *)0x0)) {
      TParticles<double,3>::SetX
                ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_,&pFVar1->X);
      TPBDRigidParticleHandleImp<double,3,1>::SetP
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&pFVar1->P);
      TGeometryParticleHandleImp<double,3,1>::SetR(this_00,&pFVar1->R,false);
      TPBDRigidParticleHandleImp<double,3,1>::SetQ
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&pFVar1->Q);
      TKinematicGeometryParticlesImp<double,3,0>::SetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                 (int)this_00->_padding_,&pFVar1->V);
      TKinematicGeometryParticlesImp<double,3,0>::SetW
                ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                 (int)this_00->_padding_,&pFVar1->W);
    }
  }
  return;
}

// TestModeRestoreParticles @ 143d75590

void __thiscall
Chaos::FPBDRigidsEvolutionBase::TestModeRestoreParticles(FPBDRigidsEvolutionBase *this)

{
  undefined1 *puVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  FTestModeParticleData *pFVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  int iVar13;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TParticleHandleBase<double,3>_u_0 this_01;
  int iStack_4c;
  undefined1 local_48 [24];
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if ((CVars::bChaos_Solver_TestMode_Enabled) &&
     (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48,
                 (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                  *)&this->Particles->NonDisabledDynamicView),
     (TPBDRigidParticles<double,3> *)local_48._16_8_ != (TPBDRigidParticles<double,3> *)0x0)) {
    this_01 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
    iVar13 = iStack_30;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
      pTVar7 = TPBDRigidParticles<double,3>::Handle(this_01.PBDRigidParticles,iVar13);
      uVar10 = ((uint)((ulonglong)pTVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar7 >> 4)) *
               -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      if (*(int *)&(this->TestModeData).field_0x8 != *(int *)&(this->TestModeData).field_0x34) {
        puVar1 = *(undefined1 **)&(this->TestModeData).field_0x40;
        puVar11 = &(this->TestModeData).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar11 = puVar1;
        }
        iVar6 = *(int *)(puVar11 +
                        (ulonglong)
                        (*(int *)&(this->TestModeData).field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10))
                        * 4);
        if (iVar6 != -1) {
          do {
            plVar12 = (longlong *)((longlong)iVar6 * 0xc0 + *(longlong *)&this->TestModeData);
            if ((TPBDRigidParticleHandleImp<double,3,1> *)*plVar12 == pTVar7) {
              pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)(plVar12 + 2);
              if (plVar12 == (longlong *)0x0) {
                pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              }
              if ((pTVar8 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                 (pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)
                           TPBDRigidParticles<double,3>::Handle(this_01.PBDRigidParticles,iVar13),
                 CVars::bChaos_Solver_TestMode_Enabled != false)) {
                this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
                  this_00 = pTVar8;
                }
                if ((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                   (pFVar9 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                             ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                                     *)&this->TestModeData,
                                    (TPBDRigidParticleHandleImp<double,3,1> *)this_00),
                   pFVar9 != (FTestModeParticleData *)0x0)) {
                  TParticles<double,3>::SetX
                            ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_,
                             &pFVar9->X);
                  TPBDRigidParticleHandleImp<double,3,1>::SetP
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&pFVar9->P);
                  TGeometryParticleHandleImp<double,3,1>::SetR(this_00,&pFVar9->R,false);
                  TPBDRigidParticleHandleImp<double,3,1>::SetQ
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&pFVar9->Q);
                  TKinematicGeometryParticlesImp<double,3,0>::SetV
                            ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                             (int)this_00->_padding_,&pFVar9->V);
                  TKinematicGeometryParticlesImp<double,3,0>::SetW
                            ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                             (int)this_00->_padding_,&pFVar9->W);
                }
              }
              break;
            }
            iVar6 = (int)plVar12[0x16];
          } while (iVar6 != -1);
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
      do {
        uVar4 = local_48._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_48._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar13 = iVar13 + 1;
          iStack_30 = iVar13;
          if (local_24 <= iVar13) {
LAB_143d75760:
            local_28 = local_28 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
            this_01 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
            iVar13 = iStack_30;
          }
        }
        else {
          iVar13 = local_20 + 1;
          local_20 = iVar13;
          if (*(int *)(local_48._8_8_ + 8) <= iVar13) goto LAB_143d75760;
          if ((iVar13 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar4)->Data + (longlong)iVar13 * 8);
          this_01 = (TParticleHandleBase<double,3>_u_0)pTVar2->GeometryParticles;
          iVar13 = *(int *)(pTVar2 + 1);
          if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_4c = (uint)iStack_4c._1_3_ << 8;
          }
          else {
            iStack_4c = CONCAT31(iStack_4c._1_3_,(this_01.GeometryParticles)->MParticleType);
          }
          uStack_2c = iStack_4c;
          iStack_30 = iVar13;
          local_48._16_8_ = this_01;
        }
        if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
        bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_48 + 0x10));
      } while (bVar5);
    } while ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// TestModeSaveParticle @ 143d75870

void __thiscall
Chaos::FPBDRigidsEvolutionBase::TestModeSaveParticle
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FTestModeParticleData *pFVar1;
  TKeyInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&> local_res18;
  TGeometryParticleHandleImp<double,3,1> *local_res20;
  TGeometryParticleHandleImp<double,3,1> **local_18 [2];
  
  if (CVars::bChaos_Solver_TestMode_Enabled) {
    local_res20 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      local_res20 = param_1;
    }
    if ((local_res20 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (pFVar1 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                 ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                         *)&this->TestModeData,(TPBDRigidParticleHandleImp<double,3,1> *)local_res20
                       ), pFVar1 == (FTestModeParticleData *)0x0)) {
      local_18[0] = &local_res20;
      TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>_>
                ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
                  *)&this->TestModeData,&local_res18,(bool *)local_18);
      TestModeUpdateSavedParticle(this,param_1);
    }
  }
  return;
}

// TestModeSaveParticles @ 143d75900

void __thiscall Chaos::FPBDRigidsEvolutionBase::TestModeSaveParticles(FPBDRigidsEvolutionBase *this)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FTestModeParticleData *pFVar6;
  int iVar7;
  TParticleHandleBase<double,3>_u_0 this_00;
  TKeyInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&> local_res10;
  TGeometryParticleHandleImp<double,3,1> *local_res18;
  TGeometryParticleHandleImp<double,3,1> **local_res20;
  int iStack_5c;
  undefined1 local_58 [24];
  int iStack_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  
  if ((CVars::bChaos_Solver_TestMode_Enabled) &&
     (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58,
                 (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                  *)&this->Particles->NonDisabledDynamicView),
     (TPBDRigidParticles<double,3> *)local_58._16_8_ != (TPBDRigidParticles<double,3> *)0x0)) {
    this_00 = (TParticleHandleBase<double,3>_u_0)local_58._16_8_;
    iVar7 = iStack_40;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58);
      pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)
               TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,iVar7);
      if (CVars::bChaos_Solver_TestMode_Enabled != false) {
        local_res18 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
          local_res18 = pTVar5;
        }
        if ((local_res18 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
           (pFVar6 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                     ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                             *)&this->TestModeData,
                            (TPBDRigidParticleHandleImp<double,3,1> *)local_res18),
           pFVar6 == (FTestModeParticleData *)0x0)) {
          local_res20 = &local_res18;
          TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>_>
                    ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
                      *)&this->TestModeData,&local_res10,(bool *)&local_res20);
          TestModeUpdateSavedParticle(this,pTVar5);
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58);
      do {
        uVar3 = local_58._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_58._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar7 = iVar7 + 1;
          iStack_40 = iVar7;
          if (local_34 <= iVar7) {
LAB_143d759e8:
            local_38 = local_38 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58);
            this_00 = (TParticleHandleBase<double,3>_u_0)local_58._16_8_;
            iVar7 = iStack_40;
          }
        }
        else {
          iVar7 = local_30 + 1;
          local_30 = iVar7;
          if (*(int *)(local_58._8_8_ + 8) <= iVar7) goto LAB_143d759e8;
          if ((iVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar7 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar7 = *(int *)(pTVar1 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_5c = (uint)iStack_5c._1_3_ << 8;
          }
          else {
            iStack_5c = CONCAT31(iStack_5c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_3c = iStack_5c;
          iStack_40 = iVar7;
          local_58._16_8_ = this_00;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58);
        bVar4 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_58 + 0x10));
      } while (bVar4);
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// TestModeStep @ 143d75af0

void __thiscall Chaos::FPBDRigidsEvolutionBase::TestModeStep(FPBDRigidsEvolutionBase *this)

{
  if (0 < CVars::Chaos_Solver_TestMode_Step) {
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
             *)&this->TestModeData);
    CVars::Chaos_Solver_TestMode_Step = CVars::Chaos_Solver_TestMode_Step + -1;
  }
  return;
}

// TestModeUpdateSavedParticle @ 143d75b20

void __thiscall
Chaos::FPBDRigidsEvolutionBase::TestModeUpdateSavedParticle
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  undefined8 uVar1;
  FTestModeParticleData *pFVar2;
  TVector<double,3> *pTVar3;
  TRotation<double,3> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TRotation<double,3> local_28;
  
  if (CVars::bChaos_Solver_TestMode_Enabled) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      this_00 = param_1;
    }
    if ((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (pFVar2 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                 ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>_>
                         *)&this->TestModeData,(TPBDRigidParticleHandleImp<double,3,1> *)this_00),
       pFVar2 != (FTestModeParticleData *)0x0)) {
      pTVar3 = TParticles<double,3>::GetX
                         ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
      uVar1 = *(undefined8 *)&pTVar3->field_0x8;
      *(undefined8 *)&pFVar2->X = *(undefined8 *)pTVar3;
      *(undefined8 *)&(pFVar2->X).field_0x8 = uVar1;
      *(undefined8 *)&(pFVar2->X).field_0x10 = *(undefined8 *)&pTVar3->field_0x10;
      pTVar3 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      uVar1 = *(undefined8 *)&pTVar3->field_0x8;
      *(undefined8 *)&pFVar2->P = *(undefined8 *)pTVar3;
      *(undefined8 *)&(pFVar2->P).field_0x8 = uVar1;
      *(undefined8 *)&(pFVar2->P).field_0x10 = *(undefined8 *)&pTVar3->field_0x10;
      pTVar4 = TGeometryParticleHandleImp<double,3,1>::GetR(this_00,&local_28);
      uVar1 = *(undefined8 *)&pTVar4->field_0x8;
      *(undefined8 *)&pFVar2->R = *(undefined8 *)pTVar4;
      *(undefined8 *)&(pFVar2->R).field_0x8 = uVar1;
      uVar1 = *(undefined8 *)&pTVar4->field_0x18;
      *(undefined8 *)&(pFVar2->R).field_0x10 = *(undefined8 *)&pTVar4->field_0x10;
      *(undefined8 *)&(pFVar2->R).field_0x18 = uVar1;
      pTVar4 = TPBDRigidParticleHandleImp<double,3,1>::GetQ
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&local_28);
      uVar1 = *(undefined8 *)&pTVar4->field_0x8;
      *(undefined8 *)&pFVar2->Q = *(undefined8 *)pTVar4;
      *(undefined8 *)&(pFVar2->Q).field_0x8 = uVar1;
      uVar1 = *(undefined8 *)&pTVar4->field_0x18;
      *(undefined8 *)&(pFVar2->Q).field_0x10 = *(undefined8 *)&pTVar4->field_0x10;
      *(undefined8 *)&(pFVar2->Q).field_0x18 = uVar1;
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                 (TVector<double,3> *)&local_28,(int)this_00->_padding_);
      *(undefined8 *)&pFVar2->V = local_28._0_8_;
      *(undefined8 *)&(pFVar2->V).field_0x8 = local_28._8_8_;
      *(undefined8 *)&(pFVar2->V).field_0x10 = local_28._16_8_;
      TKinematicGeometryParticlesImp<double,3,0>::GetW
                ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                 (TVector<double,3> *)&local_28,(int)this_00->_padding_);
      *(undefined8 *)&pFVar2->W = local_28._0_8_;
      *(undefined8 *)&(pFVar2->W).field_0x8 = local_28._8_8_;
      *(undefined8 *)&(pFVar2->W).field_0x10 = local_28._16_8_;
    }
  }
  return;
}

// UnprepareTick @ 143d76ec0

void __thiscall Chaos::FPBDRigidsEvolutionBase::UnprepareTick(FPBDRigidsEvolutionBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ConstraintContainers).AllocatorInstance.Data;
  iVar2 = (this->ConstraintContainers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConstraintContainers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x28))();
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// UpdateExternalAccelerationStructure_External @ 143d7d570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionBase::UpdateExternalAccelerationStructure_External
          (FPBDRigidsEvolutionBase *this,
          ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **param_1,
          FPendingSpatialDataQueue *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar3;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::UpdateExternalAccelerationStructure_External(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*_&,Chaos::FPendingSpatialDataQueue_&)_::_2_::FStat_STAT_CreateExternalAccelerationStructure>
  FVar11;
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar16;
  FLLMScope local_res8 [2];
  FColor_u_0 local_res10 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FMemScope local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  pIVar16 = (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_CreateExternalAccelerationStructure ==
          (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::UpdateExternalAccelerationStructure_External(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*_&,Chaos::FPendingSpatialDataQueue_&)_::_2_::FStat_STAT_CreateExternalAccelerationStructure>
           )0x0) {
        pFVar10 = ::FName::FName(&local_68,"STAT_CreateExternalAccelerationStructure");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateExternalAccelerationStructure,
                   *pFVar10,L"CreateExternalAccelerationStructure","STATGROUP_Physics",
                   "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_CreateExternalAccelerationStructure;
  if (StatPtr_STAT_CreateExternalAccelerationStructure ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::UpdateExternalAccelerationStructure_External(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*_&,Chaos::FPendingSpatialDataQueue_&)_::_2_::FStat_STAT_CreateExternalAccelerationStructure>
       )0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_CreateExternalAccelerationStructure");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::UpdateExternalAccelerationStructure_External(Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*_&,Chaos::FPendingSpatialDataQueue_&)_::_2_::FStat_STAT_CreateExternalAccelerationStructure>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_CreateExternalAccelerationStructure,*pFVar10,
                          L"CreateExternalAccelerationStructure","STATGROUP_Physics",
                          "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.Value;
        local_res20.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                   ,0x3cf);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar14.Value;
      local_78.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_143d7d6f3;
    }
  }
  bVar7 = false;
  FVar15 = local_58;
LAB_143d7d6f3:
  FLLMScope::FLLMScope(local_res8,ChaosAcceleration,false,None,Default,true);
  FMemScope::FMemScope(&local_70,ChaosAcceleration,true);
  while (aVar12 = *(atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                    *)(this->ExternalStructuresQueue).Tail,
        aVar12 != (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                   )0x0) {
    pIVar16 = *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
               ((longlong)aVar12 + 8);
    (this->ExternalStructuresQueue).Tail = aVar12;
    LOCK();
    paVar2 = &(this->ExternalStructuresQueue).NumElems;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    pIVar3 = *param_1;
    if (pIVar3 != (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)
                  0x0) {
      aVar12 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                )(this->ExternalStructuresPool).First;
      if (aVar12 == (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                     )(this->ExternalStructuresPool).TailCopy) {
        aVar4 = (this->ExternalStructuresPool).Tail;
        aVar12 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                  )(this->ExternalStructuresPool).First;
        (this->ExternalStructuresPool).TailCopy = (FNode *)aVar4;
        if (aVar12 == aVar4) {
          aVar12 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                    )FMemory::Malloc(0x10,8);
          *(undefined8 *)aVar12 = 0;
        }
        else {
          (this->ExternalStructuresPool).First = *(FNode **)aVar12;
          *(undefined8 *)aVar12 = 0;
        }
      }
      else {
        (this->ExternalStructuresPool).First = *(FNode **)aVar12;
        *(undefined8 *)aVar12 = 0;
      }
      *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
       ((TTypeCompatibleBytes<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*>
         *)((longlong)aVar12 + 8))->Pad = pIVar3;
      ((this->ExternalStructuresPool).Head)->Next = aVar12;
      (this->ExternalStructuresPool).Head = (FNode *)aVar12;
      LOCK();
      paVar2 = &(this->ExternalStructuresPool).NumElems;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    *param_1 = pIVar16;
  }
  if (*param_1 ==
      (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7803858562110718942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                       ,0x3de,"StructToUpdate");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (pIVar16 !=
           (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    FlushExternalAccelerationQueue(this,*param_1,param_2);
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// WaitIntegrationComplete @ 143d82870

void __thiscall
Chaos::FPBDRigidsEvolutionBase::WaitIntegrationComplete(FPBDRigidsEvolutionBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                     ,0x36b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// WaitOnAccelerationStructure @ 143d82bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionBase::WaitOnAccelerationStructure(FPBDRigidsEvolutionBase *this)

{
  int *piVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  FBaseGraphTask *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::WaitOnAccelerationStructure(void)_::_5_::FStat_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure>
  FVar10;
  FTaskGraphInterface *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  bool bVar16;
  undefined1 auStackY_f8 [32];
  FColor_u_0 local_98 [2];
  FName local_90;
  FName local_88;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FName local_60;
  FName local_58;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_50;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar2 = &this->AccelerationStructureTaskComplete;
  if (pTVar2->Reference != (FBaseGraphTask *)0x0) {
    FVar15.Value = 0;
    local_28 = 0;
    local_50.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_24 = 4;
    uVar8 = FVar15.Value;
    if ((&local_50 <= pTVar2) && (pTVar2 < &local_50.SecondaryData)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = local_28;
      if (local_28 == local_24) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                          (0x808,&local_50,(int *)&local_24);
      }
    }
    local_28 = uVar8 + 1;
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = local_50.SecondaryData;
    }
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar12 + (longlong)(int)uVar8 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    pFVar3 = pTVar2->Reference;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar12 + (longlong)(int)uVar8 * 8))->Reference =
         pFVar3;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar3->field_0x30 = *(int *)&pFVar3->field_0x30 + 1;
      UNLOCK();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::WaitOnAccelerationStructure(void)_::_5_::FStat_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure>
           )0x0) {
        pFVar9 = ::FName::FName(&local_60,"STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure,*pFVar9,
                   L"STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar10 = StatPtr_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure;
    if (StatPtr_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::WaitOnAccelerationStructure(void)_::_5_::FStat_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure>
         )0x0) {
      pFVar9 = ::FName::FName(&local_58,"STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure");
      FVar10 = (FThreadSafeStaticStat<_protected:_void___cdecl_Chaos::FPBDRigidsEvolutionBase::WaitOnAccelerationStructure(void)_::_5_::FStat_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure,*pFVar9,
                            L"STAT_TPBDRigidsEvolutionBase_WaitAccelerationStructure",
                            "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                            false,MCR_Invalid);
    }
    FVar4 = *(FName *)FVar10;
    bVar7 = false;
    bVar6 = false;
    local_88.ComparisonIndex.Value = 0;
    local_88.Number = 0;
    FVar13 = FVar4.ComparisonIndex.Value;
    uVar8 = FVar4.Number;
    if ((FVar13.Value == 0) && (uVar8 == 0)) {
      pFVar11 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar11 + 0x60))(pFVar11,&local_50,0xff);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_98[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
        bVar7 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_90.ComparisonIndex.Value = FVar13.Value;
          local_90.Number = uVar8;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_90,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                     ,0x2f5);
          bVar7 = true;
          bVar6 = true;
        }
      }
      bVar16 = FThreadStats::bPrimaryEnable != false;
      FVar14 = local_88;
      if (bVar16) {
        local_90.ComparisonIndex.Value = FVar13.Value;
        local_90.Number = uVar8;
        local_88 = FVar4;
        FThreadStats::AddMessage(FVar4,CycleScopeStart);
        FVar14 = FVar4;
        FVar15.Value = local_88.ComparisonIndex.Value;
      }
      pFVar11 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar11 + 0x60))(pFVar11,&local_50);
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar16) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_70.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
          local_70.NameAndInfo.Index.Value = FVar15.Value;
          QueryPerformanceCounter(&local_78);
          local_70.StatData.Pad[4] = '\0';
          local_70.StatData.Pad[5] = '\0';
          local_70.StatData.Pad[6] = '\0';
          local_70.StatData.Pad[7] = '\0';
          local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
          local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
          local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
          local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_70);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = local_50.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar12,local_28)
    ;
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_50.SecondaryData);
    }
  }
  return;
}

// WakeParticle @ 143d82fe0

void __thiscall
Chaos::FPBDRigidsEvolutionBase::WakeParticle
          (FPBDRigidsEvolutionBase *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  EObjectStateType EVar1;
  
  EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  if (EVar1 == Sleeping) {
    SetParticleObjectState(this,param_1,Dynamic);
  }
  Chaos::Private::FPBDIslandManager::WakeParticleIslands
            (&this->IslandManager,(TGeometryParticleHandleImp<double,3,1> *)param_1);
  Chaos::Private::FPBDIslandManager::FlagParticleUpdated
            (&this->IslandManager,(TGeometryParticleHandleImp<double,3,1> *)param_1);
  return;
}

// RegisterParticle @ 14409e120

void __thiscall
Chaos::FPBDRigidsEvolutionBase::RegisterParticle
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FUniqueIdx FVar1;
  int iVar2;
  TGeometryParticle<double,3> *pTVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FSpatialAccelerationIdx FVar8;
  undefined2 uVar9;
  undefined7 uVar10;
  EObjectStateType EVar11;
  bool bVar12;
  bool *pbVar13;
  ClusterId *pCVar14;
  FRigidClusteredFlags_u_0 *pFVar15;
  IPhysicsProxyBase *pIVar16;
  IPhysicsProxyBase *pIVar17;
  FUniqueIdx *pFVar18;
  FPendingSpatialData *pFVar19;
  TGeometryParticle<double,3> **ppTVar20;
  FSpatialAccelerationIdx *pFVar21;
  FPendingSpatialData *pFVar22;
  TGeometryParticleHandleImp<double,3,1> *pTVar23;
  TGeometryParticleHandleImp<double,3,1> *pTVar24;
  FCollisionFilterData FStack_34;
  FCollisionFilterData FStack_24;
  uint local_14;
  
  pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar23 = pTVar24;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar23 = param_1;
  }
  if ((pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (((EVar11 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23), EVar11 == Dynamic ||
       (EVar11 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23), EVar11 == Sleeping))
      && (pbVar13 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23), *pbVar13 == false
         )))) {
    Chaos::Private::FPBDIslandManager::AddParticle(&this->IslandManager,param_1);
  }
  FChaosVisualDebuggerTrace::TraceParticle(param_1);
  pTVar23 = pTVar24;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar23 = param_1;
  }
  if ((pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (bVar12 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23), bVar12)) {
    pTVar23 = pTVar24;
    if (2 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar23 = param_1;
    }
    if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      return;
    }
    pCVar14 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds
                        ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar23);
    pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)pCVar14->Id;
    if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      return;
    }
    if (2 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
      pTVar24 = pTVar23;
    }
    if (pTVar24 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2113888976451403243>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                          ,0x215,"false");
      if (!bVar12) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar15 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         ((TPBDRigidClusteredParticles<double,3> *)pTVar24->_padding_,
                          (int)pTVar24->_padding_)->field0_0x0;
    if ((pFVar15->Bits & 1) == 0) {
      return;
    }
    pIVar16 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                        ((TGeometryParticlesImp<double,3,0> *)pTVar24->_padding_,
                         (int)pTVar24->_padding_);
    pIVar17 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    if (pIVar16 != pIVar17) {
      return;
    }
  }
  pbVar13 = TGeometryParticlesImp<double,3,0>::HasCollision
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  if ((*pbVar13 != false) || (ForceNoCollisionIntoSQ != 0)) {
    pFVar18 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    FVar1.Idx = pFVar18->Idx;
    pFVar19 = FPendingSpatialInternalDataQueue::Add(&this->InternalAccelerationQueue,0,FVar1,Add);
    pFVar19->Operation = Update;
    ppTVar20 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                         ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                          (int)param_1->_padding_);
    pTVar3 = *ppTVar20;
    pFVar18 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    FStack_34.Word2 = 0;
    FStack_34.Word3 = 0;
    FStack_34.Word0 = 0;
    FStack_34.Word1 = 0;
    FStack_24.Word2 = 0;
    FStack_24.Word3 = 0;
    iVar2 = pFVar18->Idx;
    FStack_24.Word0 = 0;
    FStack_24.Word1 = 0;
    local_14 = local_14 & 0xffffff00;
    if ((iVar2 == -1) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3133560516564217994>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                            ,0xf76,"CachedUniqueIdx.IsValid()"), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_1,&FStack_34);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_1,&FStack_24);
    local_14 = CONCAT31(local_14._1_3_,1);
    (pFVar19->AccelerationHandle).ExternalGeometryParticle = pTVar3;
    (pFVar19->AccelerationHandle).GeometryParticleHandle = param_1;
    (pFVar19->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar2;
    (pFVar19->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_34.Word0;
    (pFVar19->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_34.Word1;
    (pFVar19->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_34.Word2;
    *(ulonglong *)&(pFVar19->AccelerationHandle).UnionQueryFilterData.Word3 =
         CONCAT44(FStack_24.Word0,FStack_34.Word3);
    (pFVar19->AccelerationHandle).UnionSimFilterData.Word1 = FStack_24.Word1;
    (pFVar19->AccelerationHandle).UnionSimFilterData.Word2 = FStack_24.Word2;
    *(ulonglong *)&(pFVar19->AccelerationHandle).UnionSimFilterData.Word3 =
         CONCAT44(local_14,FStack_24.Word3);
    pFVar21 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                         (int)param_1->_padding_);
    pFVar19->SpatialIdx = *pFVar21;
    pFVar22 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar1,Add);
    pTVar24 = (pFVar19->AccelerationHandle).GeometryParticleHandle;
    (pFVar22->AccelerationHandle).ExternalGeometryParticle =
         (pFVar19->AccelerationHandle).ExternalGeometryParticle;
    (pFVar22->AccelerationHandle).GeometryParticleHandle = pTVar24;
    uVar5 = (pFVar19->AccelerationHandle).UnionQueryFilterData.Word0;
    uVar6 = (pFVar19->AccelerationHandle).UnionQueryFilterData.Word1;
    uVar7 = (pFVar19->AccelerationHandle).UnionQueryFilterData.Word2;
    (pFVar22->AccelerationHandle).CachedUniqueIdx =
         (FUniqueIdx)(pFVar19->AccelerationHandle).CachedUniqueIdx.Idx;
    (pFVar22->AccelerationHandle).UnionQueryFilterData.Word0 = uVar5;
    (pFVar22->AccelerationHandle).UnionQueryFilterData.Word1 = uVar6;
    (pFVar22->AccelerationHandle).UnionQueryFilterData.Word2 = uVar7;
    uVar5 = (pFVar19->AccelerationHandle).UnionSimFilterData.Word1;
    uVar6 = (pFVar19->AccelerationHandle).UnionSimFilterData.Word2;
    *(undefined8 *)&(pFVar22->AccelerationHandle).UnionQueryFilterData.Word3 =
         *(undefined8 *)&(pFVar19->AccelerationHandle).UnionQueryFilterData.Word3;
    (pFVar22->AccelerationHandle).UnionSimFilterData.Word1 = uVar5;
    (pFVar22->AccelerationHandle).UnionSimFilterData.Word2 = uVar6;
    FVar8 = pFVar19->SpatialIdx;
    uVar9 = *(undefined2 *)&pFVar19->field_0x3a;
    iVar2 = pFVar19->SyncTimestamp;
    *(undefined8 *)&(pFVar22->AccelerationHandle).UnionSimFilterData.Word3 =
         *(undefined8 *)&(pFVar19->AccelerationHandle).UnionSimFilterData.Word3;
    pFVar22->SpatialIdx = FVar8;
    *(undefined2 *)&pFVar22->field_0x3a = uVar9;
    pFVar22->SyncTimestamp = iVar2;
    uVar10 = *(undefined7 *)&pFVar19->field_0x41;
    pFVar22->Operation = pFVar19->Operation;
    *(undefined7 *)&pFVar22->field_0x41 = uVar10;
  }
  return;
}

// GetPerParticlePhysicsMaterial @ 1440e5300

TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> * __thiscall
Chaos::FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *pTVar5;
  
  uVar1 = param_1->HandleIdx;
  uVar4 = 0;
  if ((int)uVar1 < *(int *)&(this->PerParticlePhysicsMaterials).field_0x10) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *)
         (*(longlong *)&(this->PerParticlePhysicsMaterials).field_0x8 + (longlong)(int)uVar1 * 8);
}

// SetPhysicsMaterial @ 1440f1890

void __thiscall
Chaos::FPBDRigidsEvolutionBase::SetPhysicsMaterial
          (FPBDRigidsEvolutionBase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TSerializablePtr<Chaos::FChaosPhysicsMaterial> param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *pTVar5;
  
  pTVar5 = TGeometryParticleHandleImp<double,3,1>::
           AuxilaryValue<Chaos::TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>_>
                     (param_1,&this->PerParticlePhysicsMaterials);
  if (pTVar5->Ptr != (FChaosPhysicsMaterial *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Particle->AuxilaryValue(PerParticlePhysicsMaterials)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                       ,0x2f6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = param_1->HandleIdx;
  uVar4 = 0;
  if ((int)uVar1 < *(int *)&(this->PhysicsMaterials).field_0x10) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FChaosPhysicsMaterial **)
   (*(longlong *)&(this->PhysicsMaterials).field_0x8 + (longlong)(int)uVar1 * 8) = param_2.Ptr;
  Chaos::Private::FPBDIslandManager::UpdateParticleMaterial(&this->IslandManager,param_1);
  return;
}

// CreateGeometryCollectionParticles @ 144112060

TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::FPBDRigidsEvolutionBase::CreateGeometryCollectionParticles
          (FPBDRigidsEvolutionBase *this,
          TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          FPBDRigidParticleParameters *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FUniqueIdx FVar3;
  int iVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  TGeometryParticle<double,3> *pTVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FSpatialAccelerationIdx FVar11;
  undefined2 uVar12;
  undefined7 uVar13;
  bool bVar14;
  ClusterId *pCVar15;
  FRigidClusteredFlags_u_0 *pFVar16;
  IPhysicsProxyBase *pIVar17;
  IPhysicsProxyBase *pIVar18;
  bool *pbVar19;
  FUniqueIdx *pFVar20;
  FPendingSpatialData *pFVar21;
  TGeometryParticle<double,3> **ppTVar22;
  TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar23;
  FSpatialAccelerationIdx *pFVar24;
  FPendingSpatialData *pFVar25;
  TGeometryParticleHandleImp<double,3,1> *pTVar26;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar27;
  undefined1 local_res8 [8];
  FCollisionFilterData FStack_54;
  FCollisionFilterData FStack_44;
  uint local_34;
  
  FPBDRigidsSOAs::CreateGeometryCollectionParticles
            (this->Particles,__return_storage_ptr__,param_1,param_2,param_3);
  pFVar27 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar2 = __return_storage_ptr__->ArrayNum;
  pFVar1 = pFVar27 + (longlong)iVar2 * 8;
  do {
    if (__return_storage_ptr__->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar27 == pFVar1) {
      return __return_storage_ptr__;
    }
    pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar27;
    pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
      pTVar26 = pTVar5;
    }
    if (pTVar26 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_14411215f:
      pbVar19 = TGeometryParticlesImp<double,3,0>::HasCollision
                          ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                           (int)pTVar5->_padding_);
      if ((*pbVar19 != false) || (ForceNoCollisionIntoSQ != 0)) {
        pFVar20 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                             (int)pTVar5->_padding_);
        FVar3.Idx = pFVar20->Idx;
        pFVar21 = FPendingSpatialInternalDataQueue::Add
                            (&this->InternalAccelerationQueue,0,FVar3,Add);
        pFVar21->Operation = Update;
        ppTVar22 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                              (int)pTVar5->_padding_);
        pTVar6 = *ppTVar22;
        pFVar20 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                             (int)pTVar5->_padding_);
        iVar4 = pFVar20->Idx;
        FStack_54.Word2 = 0;
        FStack_54.Word3 = 0;
        FStack_54.Word0 = 0;
        FStack_54.Word1 = 0;
        FStack_44.Word2 = 0;
        FStack_44.Word3 = 0;
        FStack_44.Word0 = 0;
        FStack_44.Word1 = 0;
        local_34 = local_34 & 0xffffff00;
        if (iVar4 == -1) {
          bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3133560516564217994>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                              ,0xf76,"CachedUniqueIdx.IsValid()");
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            pTVar23 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)(*pcVar7)();
            return pTVar23;
          }
        }
        FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar5,&FStack_54);
        FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar5,&FStack_44);
        local_34 = CONCAT31(local_34._1_3_,1);
        (pFVar21->AccelerationHandle).ExternalGeometryParticle = pTVar6;
        (pFVar21->AccelerationHandle).GeometryParticleHandle = pTVar5;
        (pFVar21->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar4;
        (pFVar21->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_54.Word0;
        (pFVar21->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_54.Word1;
        (pFVar21->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_54.Word2;
        *(ulonglong *)&(pFVar21->AccelerationHandle).UnionQueryFilterData.Word3 =
             CONCAT44(FStack_44.Word0,FStack_54.Word3);
        (pFVar21->AccelerationHandle).UnionSimFilterData.Word1 = FStack_44.Word1;
        (pFVar21->AccelerationHandle).UnionSimFilterData.Word2 = FStack_44.Word2;
        *(ulonglong *)&(pFVar21->AccelerationHandle).UnionSimFilterData.Word3 =
             CONCAT44(local_34,FStack_44.Word3);
        pFVar24 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                             (int)pTVar5->_padding_);
        pFVar21->SpatialIdx = *pFVar24;
        pFVar25 = FPendingSpatialDataQueue::FindOrAdd(&this->AsyncAccelerationQueue,FVar3,Add);
        pTVar5 = (pFVar21->AccelerationHandle).GeometryParticleHandle;
        (pFVar25->AccelerationHandle).ExternalGeometryParticle =
             (pFVar21->AccelerationHandle).ExternalGeometryParticle;
        (pFVar25->AccelerationHandle).GeometryParticleHandle = pTVar5;
        uVar8 = (pFVar21->AccelerationHandle).UnionQueryFilterData.Word0;
        uVar9 = (pFVar21->AccelerationHandle).UnionQueryFilterData.Word1;
        uVar10 = (pFVar21->AccelerationHandle).UnionQueryFilterData.Word2;
        (pFVar25->AccelerationHandle).CachedUniqueIdx =
             (FUniqueIdx)(pFVar21->AccelerationHandle).CachedUniqueIdx.Idx;
        (pFVar25->AccelerationHandle).UnionQueryFilterData.Word0 = uVar8;
        (pFVar25->AccelerationHandle).UnionQueryFilterData.Word1 = uVar9;
        (pFVar25->AccelerationHandle).UnionQueryFilterData.Word2 = uVar10;
        uVar8 = (pFVar21->AccelerationHandle).UnionSimFilterData.Word1;
        uVar9 = (pFVar21->AccelerationHandle).UnionSimFilterData.Word2;
        *(undefined8 *)&(pFVar25->AccelerationHandle).UnionQueryFilterData.Word3 =
             *(undefined8 *)&(pFVar21->AccelerationHandle).UnionQueryFilterData.Word3;
        (pFVar25->AccelerationHandle).UnionSimFilterData.Word1 = uVar8;
        (pFVar25->AccelerationHandle).UnionSimFilterData.Word2 = uVar9;
        FVar11 = pFVar21->SpatialIdx;
        uVar12 = *(undefined2 *)&pFVar21->field_0x3a;
        iVar4 = pFVar21->SyncTimestamp;
        *(undefined8 *)&(pFVar25->AccelerationHandle).UnionSimFilterData.Word3 =
             *(undefined8 *)&(pFVar21->AccelerationHandle).UnionSimFilterData.Word3;
        pFVar25->SpatialIdx = FVar11;
        *(undefined2 *)&pFVar25->field_0x3a = uVar12;
        pFVar25->SyncTimestamp = iVar4;
        uVar13 = *(undefined7 *)&pFVar21->field_0x41;
        pFVar25->Operation = pFVar21->Operation;
        *(undefined7 *)&pFVar25->field_0x41 = uVar13;
      }
    }
    else {
      bVar14 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26);
      if (!bVar14) goto LAB_14411215f;
      pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (2 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
        pTVar26 = pTVar5;
      }
      if (pTVar26 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar26->_padding_,
                             (int)pTVar26->_padding_);
        pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)pCVar15->Id;
        if (pTVar26 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (2 < *(byte *)((longlong)&pTVar26->_padding_ + 4)) {
            this_00 = pTVar26;
          }
          if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            bVar14 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                ,0x215,"false");
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              pTVar23 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                         *)(*pcVar7)();
              return pTVar23;
            }
          }
          else {
            pFVar16 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                 ((TPBDRigidClusteredParticles<double,3> *)this_00->_padding_,
                                  (int)this_00->_padding_)->field0_0x0;
            if ((pFVar16->Bits & 1) != 0) {
              pIVar17 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_00);
              pIVar18 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar5);
              if (pIVar17 == pIVar18) goto LAB_14411215f;
            }
          }
        }
      }
    }
    pFVar27 = pFVar27 + 8;
  } while( true );
}

