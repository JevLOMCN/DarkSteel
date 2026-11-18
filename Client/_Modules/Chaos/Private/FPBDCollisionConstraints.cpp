// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 28

// FPBDCollisionConstraints @ 143c43a00

FPBDCollisionConstraints * __thiscall
Chaos::FPBDCollisionConstraints::FPBDCollisionConstraints
          (FPBDCollisionConstraints *this,FPBDRigidsSOAs *param_1,
          TArrayCollectionArray<bool> *param_2,
          TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *param_3,
          TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
          *param_4,THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_5,int param_6,
          double param_7)

{
  FName FVar1;
  FConstraintHandleTypeID *pFVar2;
  
  pFVar2 = FPBDCollisionConstraintHandle::StaticType();
  FVar1 = pFVar2->TypeName;
  pFVar2 = pFVar2->BaseType;
  this->Particles = param_1;
  this->_padding_ = (longlong)FVar1;
  this->_padding_ = (longlong)pFVar2;
  this->_padding_ = (longlong)&___7FPBDCollisionConstraints_Chaos__6B_;
  (this->ConstraintAllocator).NumCollisionsPerBlock = param_6;
  this->MPerParticlePhysicsMaterials = param_4;
  this->SimMaterials = param_5;
  this->MCollided = param_2;
  this->MPhysicsMaterials = param_3;
  *(undefined8 *)&(this->GravityDirection).field_0x10 = 0xbff0000000000000;
  this->GravitySize = 980.0;
  this->RestitutionThreshold = param_7;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  (this->ConstraintAllocator).ContextAllocators.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstraintAllocator).ContextAllocators.ArrayNum = 0;
  (this->ConstraintAllocator).ContextAllocators.ArrayMax = 0;
  (this->ConstraintAllocator).ParticlePairMidPhases.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstraintAllocator).ParticlePairMidPhases.ArrayNum = 0;
  (this->ConstraintAllocator).ParticlePairMidPhases.ArrayMax = 0;
  (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstraintAllocator).ActiveConstraints.ArrayNum = 0;
  (this->ConstraintAllocator).ActiveConstraints.ArrayMax = 0;
  (this->ConstraintAllocator).ActiveCCDConstraints.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstraintAllocator).ActiveCCDConstraints.ArrayNum = 0;
  (this->ConstraintAllocator).ActiveCCDConstraints.ArrayMax = 0;
  (this->ConstraintAllocator).CurrentEpoch = 0;
  (this->ConstraintAllocator).bIsDeteministic = false;
  (this->ConstraintAllocator).bInCollisionDetectionPhase = false;
  this->NumActivePointConstraints = 0;
  (this->TempCollisions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempCollisions).ArrayNum = 0;
  (this->TempCollisions).ArrayMax = 0;
  this->bEnableCollisions = true;
  this->bEnableRestitution = true;
  this->bHandlesEnabled = true;
  this->bEnableEdgePruning = true;
  this->bIsDeterministic = false;
  this->bCanDisableContacts = true;
  this->CollisionSolverType = GaussSeidel;
  (this->SolverSettings).MaxPushOutVelocity = 0.0;
  (this->SolverSettings).DepenetrationVelocity = 0.0;
  (this->SolverSettings).NumPositionFrictionIterations = 4;
  (this->SolverSettings).NumVelocityFrictionIterations = 1;
  (this->SolverSettings).NumPositionShockPropagationIterations = 3;
  (this->SolverSettings).NumVelocityShockPropagationIterations = 2;
  (this->DetectorSettings).BoundsExpansion = 0.0;
  (this->DetectorSettings).BoundsVelocityInflation = 0.0;
  (this->DetectorSettings).MaxVelocityBoundsExpansion = 0.0;
  (this->DetectorSettings).BoundsVelocityInflationMACD = 0.0;
  (this->DetectorSettings).MaxVelocityBoundsExpansionMACD = 0.0;
  (this->DetectorSettings).bFilteringEnabled = true;
  (this->DetectorSettings).bDeferNarrowPhase = false;
  (this->DetectorSettings).bAllowManifolds = true;
  (this->DetectorSettings).bAllowManifoldReuse = true;
  (this->DetectorSettings).bAllowCCD = true;
  (this->DetectorSettings).bAllowMACD = false;
  (this->DetectorSettings).EvolutionName.Name.Object = (FString *)0x0;
  (this->DetectorSettings).EvolutionName.Name.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->GravityDirection = 0;
  *(undefined8 *)&(this->GravityDirection).field_0x8 = 0;
  (this->ConstraintAllocator).CollisionContainer = this;
  return this;
}

// ~FPBDCollisionConstraints @ 143c454a0

void __thiscall
Chaos::FPBDCollisionConstraints::~FPBDCollisionConstraints(FPBDCollisionConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDCollisionConstraints_Chaos__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DetectorSettings).EvolutionName.Name.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TempCollisions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Chaos::Private::FCollisionConstraintAllocator::~FCollisionConstraintAllocator
            (&this->ConstraintAllocator);
  this->_padding_ = (longlong)&___7FPBDConstraintContainer_Chaos__6B_;
  return;
}

// AddConstraintsToGraph @ 143c561c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionConstraints::AddConstraintsToGraph
          (FPBDCollisionConstraints *this,FPBDIslandManager *param_1)

{
  int *piVar1;
  TArray<Chaos::FPBDCollisionConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  FPBDCollisionConstraint *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  ForElementType<Chaos::FManifoldPoint> FVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Sort> FVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  FNameEntryId FVar26;
  FScriptContainerElement *pFVar27;
  FName FVar28;
  longlong lVar29;
  FScriptContainerElement *pFVar30;
  ForElementType<Chaos::FManifoldPoint> FVar31;
  TGeometryParticleHandleImp<double,3,1> *pTVar32;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1b8 [8];
  uint local_1b0;
  uint uStack_1ac;
  longlong local_1a8;
  FColor_u_0 local_1a0 [2];
  FName local_198;
  FName local_190;
  TGeometryParticleHandleImp<double,3,1> *local_180;
  TGeometryParticleHandleImp<double,3,1> *local_178;
  undefined1 local_170 [16];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  FPBDCollisionConstraints **local_140;
  FScriptContainerElement *local_138;
  FPBDCollisionConstraints *local_130;
  undefined1 local_128;
  TGeometryParticleHandleImp<double,3,1> *local_120;
  TGeometryParticleHandleImp<double,3,1> *pTStack_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  FName local_e0;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_d8;
  TGeometryParticleHandleImp<double,3,1> *local_c8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_c0;
  
  if (this->bEnableCollisions == false) {
    Chaos::Private::FPBDIslandManager::RemoveContainerConstraints(param_1,(int)this->_padding_);
    return;
  }
  pTVar2 = &this->TempCollisions;
  piVar1 = &(this->TempCollisions).ArrayMax;
  (this->TempCollisions).ArrayNum = 0;
  if ((this->TempCollisions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_128 = CVars::bChaosSolverPersistentGraph == false;
  local_140 = &local_130;
  local_130 = this;
  Chaos::Private::FPBDIslandManager::
  VisitAwakeConstConstraints<_Chaos::Private::FPBDIslandManager::VisitAwakeConstraints<_Chaos::FPBDCollisionConstraints::AddConstraintsToGraph_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
            (param_1,(int)this->_padding_,(<lambda_1> *)&local_140);
  pFVar27 = (pTVar2->AllocatorInstance).Data;
  iVar19 = (this->TempCollisions).ArrayNum;
  pFVar30 = pFVar27 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this->TempCollisions).ArrayNum != iVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::FPBDCollisionConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar27 == pFVar30) break;
    Chaos::Private::FPBDIslandManager::RemoveConstraint(param_1,*(FConstraintHandle **)pFVar27);
    pFVar27 = pFVar27 + 8;
  }
  (this->TempCollisions).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar19 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  pFVar30 = (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data;
  if ((iVar19 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar27 = pFVar30 + (longlong)iVar19 * 8;
  FVar22 = StatPtr_STAT_Collisions_Sort;
  for (; StatPtr_STAT_Collisions_Sort = FVar22, pFVar30 != pFVar27; pFVar30 = pFVar30 + 8) {
    local_1a8 = *(longlong *)pFVar30;
    if (((*(longlong *)(local_1a8 + 0x10) == 0) &&
        (((byte)*(ushort *)(local_1a8 + 0x374) >> 1 & 1) == 0)) &&
       ((*(ushort *)(local_1a8 + 0x374) >> 8 & 1) == 0)) {
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar19 = (this->TempCollisions).ArrayNum;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->TempCollisions).ArrayNum = iVar19 + 1;
      *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_1a8;
    }
    FVar22 = StatPtr_STAT_Collisions_Sort;
  }
  if (this->bIsDeterministic != false) goto LAB_143c56597;
  if (FVar22 == (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Sort>)0x0) {
    pFVar21 = ::FName::FName(&local_e0,"STAT_Collisions_Sort");
    FVar22 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Sort>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Sort,*pFVar21,
                        L"Collisions::Sort","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar22;
  bVar18 = false;
  bVar14 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  FVar26 = FVar28.ComparisonIndex.Value;
  uVar23 = FVar28.Number;
  if ((FVar26.Value == 0) && (uVar23 == 0)) {
LAB_143c56552:
    bVar13 = false;
    FVar28 = local_190;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a0[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar18 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar26.Value;
        local_198.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                   ,0x2c2);
        bVar18 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c56552;
    local_1b0 = FVar26.Value;
    uStack_1ac = uVar23;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar13 = true;
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<Chaos::FPBDCollisionConstraintHandle_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FPBDCollisionConstraintHandle_*,_Chaos::FPBDCollisionConstraints::AddConstraintsToGraph_::__l19::<lambda_2>_>_>
            ((FPBDCollisionConstraintHandle **)(pTVar2->AllocatorInstance).Data,
             (this->TempCollisions).ArrayNum,local_res8,(<lambda_2> *)local_1b8);
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
LAB_143c56597:
  dVar17 = __real_403e000000000000;
  dVar16 = __real_7fefffffffffffff;
  dVar15 = __real_3f1a36e2e0000000;
  local_1b0 = (this->TempCollisions).ArrayNum;
  uVar24 = (ulonglong)(int)local_1b0;
  pFVar30 = (pTVar2->AllocatorInstance).Data;
  local_138 = pFVar30 + uVar24 * 8;
  do {
    pFVar27 = local_138;
    if ((this->TempCollisions).ArrayNum != (int)uVar24) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::FPBDCollisionConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar30 == pFVar27) {
      (this->TempCollisions).ArrayNum = 0;
      if ((this->TempCollisions).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar2->AllocatorInstance,0,&(this->TempCollisions).ArrayMax);
      }
      return;
    }
    this_00 = *(FPBDCollisionConstraint **)pFVar30;
    local_180 = this_00->Particle[0];
    local_178 = this_00->Particle[1];
    lVar25 = 0;
    do {
      *(undefined8 *)((longlong)local_d8.V + lVar25) =
           *(undefined8 *)((longlong)&local_180 + lVar25);
      lVar29 = lVar25 + -8;
      lVar25 = lVar25 + 8;
    } while (local_170 + lVar29 != local_170);
    Chaos::Private::FPBDIslandManager::AddConstraint
              (param_1,(int)this->_padding_,(FConstraintHandle *)this_00,&local_d8);
    pTVar7 = this_00->Particle[0];
    pTStack_118 = this_00->Particle[1];
    local_120 = pTVar7;
    local_c8 = pTVar7;
    pTStack_c0 = pTStack_118;
    bVar18 = Chaos::Private::FPBDIslandManager::WasParticleTransformSetExplicitly(param_1,pTVar7);
    if (bVar18) {
      pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
        pTVar32 = pTVar7;
      }
      if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar23 = this_00->ClosestManifoldPointIndex;
        dVar12 = dVar16;
        if (uVar23 != 0xffffffff) {
          uVar20 = 0;
          if ((int)uVar23 < (this_00->ManifoldPoints).ArrayNum) {
            uVar20 = ~uVar23 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar8 = (this_00->ManifoldPoints).AllocatorInstance.SecondaryData;
          FVar31 = (ForElementType<Chaos::FManifoldPoint>)&this_00->ManifoldPoints;
          if (FVar8 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar31 = FVar8;
          }
          dVar12 = (double)*(float *)((longlong)(int)uVar23 * 0x6c + 0x24 + (longlong)FVar31);
        }
        FPBDCollisionConstraint::CalculateWorldContactNormal
                  (this_00,(TVector<double,3> *)&local_110);
        uVar23 = (uint)pTVar32->_padding_;
        lVar29 = (longlong)(int)uVar23;
        lVar25 = pTVar32->_padding_;
        uVar20 = 0;
        if ((int)uVar23 < *(int *)(lVar25 + 0x2f8)) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        dVar11 = local_110 * dVar12 * dVar17;
        dVar10 = local_108 * dVar12 * dVar17;
        dVar12 = local_100 * dVar12 * dVar17;
        local_170._0_8_ = dVar11;
        local_170._8_8_ = dVar10;
        local_160 = dVar12;
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar25 = *(longlong *)(lVar25 + 0x2f0);
        dVar3 = *(double *)(lVar25 + 0x10 + lVar29 * 0x18);
        dVar4 = *(double *)(lVar25 + lVar29 * 0x18);
        dVar5 = *(double *)(lVar25 + 8 + lVar29 * 0x18);
        if (dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3 + dVar15 <
            dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12) {
          TPBDRigidParticleHandleImp<double,3,1>::SetVSmooth
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,
                     (TVector<double,3> *)local_170);
        }
      }
    }
    pTVar7 = pTStack_c0;
    bVar18 = Chaos::Private::FPBDIslandManager::WasParticleTransformSetExplicitly
                       (param_1,pTStack_c0);
    if (bVar18) {
      pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
        pTVar32 = pTVar7;
      }
      if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar23 = this_00->ClosestManifoldPointIndex;
        dVar12 = dVar16;
        if (uVar23 != 0xffffffff) {
          uVar20 = 0;
          if ((int)uVar23 < (this_00->ManifoldPoints).ArrayNum) {
            uVar20 = ~uVar23 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar8 = (this_00->ManifoldPoints).AllocatorInstance.SecondaryData;
          FVar31 = (ForElementType<Chaos::FManifoldPoint>)&this_00->ManifoldPoints;
          if (FVar8 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar31 = FVar8;
          }
          dVar12 = (double)*(float *)((longlong)(int)uVar23 * 0x6c + 0x24 + (longlong)FVar31);
        }
        FPBDCollisionConstraint::CalculateWorldContactNormal(this_00,(TVector<double,3> *)&local_f8)
        ;
        uVar23 = (uint)pTVar32->_padding_;
        lVar29 = (longlong)(int)uVar23;
        lVar25 = pTVar32->_padding_;
        uVar20 = 0;
        if ((int)uVar23 < *(int *)(lVar25 + 0x2f8)) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        dVar11 = local_f8 * dVar12 * dVar17;
        dVar10 = local_f0 * dVar12 * dVar17;
        dVar12 = local_e8 * dVar12 * dVar17;
        local_158 = dVar11;
        local_150 = dVar10;
        local_148 = dVar12;
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar25 = *(longlong *)(lVar25 + 0x2f0);
        dVar3 = *(double *)(lVar25 + 0x10 + lVar29 * 0x18);
        dVar4 = *(double *)(lVar25 + lVar29 * 0x18);
        dVar5 = *(double *)(lVar25 + 8 + lVar29 * 0x18);
        if (dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3 + dVar15 <
            dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12) {
          TPBDRigidParticleHandleImp<double,3,1>::SetVSmooth
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,
                     (TVector<double,3> *)&local_158);
        }
      }
    }
    uVar24 = (ulonglong)local_1b0;
    pFVar30 = pFVar30 + 8;
  } while( true );
}

// ApplyCCDModifier @ 143c59a90

void __thiscall
Chaos::FPBDCollisionConstraints::ApplyCCDModifier
          (FPBDCollisionConstraints *this,
          TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [16];
  FCCDModifierAccessor local_res20;
  
  FCCDModifierAccessor::FCCDModifierAccessor(&local_res20,param_2);
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x88))(*(longlong **)pFVar3,&local_res20);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ApplyCollisionModifier @ 143c59b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionConstraints::ApplyCollisionModifier
          (FPBDCollisionConstraints *this,
          TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TStatId TVar8;
  bool bVar9;
  uint uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar11;
  ulonglong uVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FNameEntryId FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [4];
  FColor_u_0 local_144;
  undefined4 local_140 [2];
  uint local_138;
  FName local_130;
  FName local_120;
  uint local_118;
  uint uStack_114;
  FStatMessage local_110;
  undefined8 local_100;
  LARGE_INTEGER local_f8;
  FScriptContainerElement *local_f0;
  undefined8 *local_e8;
  undefined4 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar2 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (iVar2 < 1) {
    return;
  }
  pFVar3 = (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data;
  iVar2 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_138 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_138;
  pFVar16 = (param_1->AllocatorInstance).Data;
  local_f0 = pFVar16 + uVar12 * 8;
  local_b8._12_4_ = local_110.NameAndInfo.Number;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.NumBits = 0;
  local_98.MaxBits = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_b8._0_8_ = pFVar3;
  local_b8._8_4_ = iVar2;
  local_58 = param_2;
LAB_143c59c20:
  do {
    while( true ) {
      pFVar3 = local_f0;
      if (param_1->ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<Chaos::ISimCallbackObject_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_148);
      }
      if (pFVar16 == pFVar3) {
        FCollisionContactModifier::UpdateConstraintManifolds((FCollisionContactModifier *)local_b8);
        local_60 = 0;
        if (local_68 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_68);
        }
        bVar9 = local_a0._4_4_ != 0;
        local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
        if (bVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
        }
        local_78 = 0xffffffff;
        local_74 = 0;
        local_98.NumBits = 0;
        if (0x80 < (uint)local_98.MaxBits) {
          local_98.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
        }
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
        }
        if (local_a8.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_a8.Data);
        return;
      }
      plVar4 = *(longlong **)pFVar16;
      FVar15.Value = 0;
      bVar6 = false;
      bVar9 = false;
      local_130.ComparisonIndex.Value = 0;
      local_130.Number = 0;
      if (plVar4 == (longlong *)0x0) break;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'::
         __l2::_thread_safe_static_guard_0__ == -1)) {
        local_150[0] = 1;
        local_158[0] = 1;
        local_140[0] = 2;
        puVar11 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_c8);
        local_100 = *puVar11;
        local_e8 = &local_100;
        local_e0 = local_140;
        local_d8 = local_158;
        local_d0 = local_150;
        `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Chaos>'::__l2::<lambda_1>::
        operator()(&local_e8);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      TVar8.StatIdPtr =
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::StatId.StatIdPtr;
      if (((SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                   ::__l2::StatId.StatIdPtr)->Name,0) != 0) ||
          (SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                  ::__l2::StatId.StatIdPtr)->Name,4) != 0)) &&
         (FThreadStats::bPrimaryEnable != false)) {
        FVar13 = *(FName *)&(`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                             ::__l2::StatId.StatIdPtr)->Name;
        FVar14 = FVar13.ComparisonIndex.Value;
        uVar10 = FVar13.Number;
        if ((FVar14.Value != 0) || (uVar10 != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_144.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_144._s_0,
                       ((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                         ::__l2::StatId.StatIdPtr)->StatDescriptionAnsi).Ptr);
            bVar6 = false;
            bVar9 = true;
            if (-1 < CpuChannel->Enabled) {
              local_120.ComparisonIndex.Value = FVar14.Value;
              local_120.Number = uVar10;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_120,((TVar8.StatIdPtr)->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x125);
              bVar6 = true;
              bVar9 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) break;
          local_130 = FVar13;
          local_118 = FVar14.Value;
          uStack_114 = uVar10;
          FThreadStats::AddMessage(FVar13,CycleScopeStart);
          bVar6 = false;
          bVar7 = true;
          FVar15.Value = local_130.ComparisonIndex.Value;
          goto LAB_143c59d7b;
        }
      }
      (**(code **)(*plVar4 + 0x98))(plVar4,local_b8);
      uVar12 = (ulonglong)local_138;
      pFVar16 = pFVar16 + 8;
    }
    bVar7 = false;
    FVar13 = local_130;
LAB_143c59d7b:
    (**(code **)(*plVar4 + 0x98))(plVar4,local_b8);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((!bVar7) || (FVar13 == (FName)0x0)) ||
       ((FThreadStats::bPrimaryDisableForever != false || (FThreadStats::TlsSlot == 0xffffffff)))) {
LAB_143c59e66:
      uVar12 = (ulonglong)local_138;
      pFVar16 = pFVar16 + 8;
      goto LAB_143c59c20;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_143c59e66;
    local_110.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
    local_110.NameAndInfo.Index.Value = FVar15.Value;
    QueryPerformanceCounter(&local_f8);
    local_110.StatData.Pad[4] = '\0';
    local_110.StatData.Pad[5] = '\0';
    local_110.StatData.Pad[6] = '\0';
    local_110.StatData.Pad[7] = '\0';
    local_110.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
    local_110.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
    local_110.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
    local_110.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_110);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
      goto LAB_143c59e66;
    }
    FThreadStats::Flush(this_00,false,false);
    uVar12 = (ulonglong)local_138;
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// BeginDetectCollisions @ 143c5bd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionConstraints::BeginDetectCollisions(FPBDCollisionConstraints *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_BeginDetect> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FScriptContainerElement *pFVar16;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FVar12 = StatPtr_STAT_Collisions_BeginDetect;
  if (StatPtr_STAT_Collisions_BeginDetect ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_BeginDetect>)0x0) {
    pFVar11 = ::FName::FName(&local_78,"STAT_Collisions_BeginDetect");
    FVar12 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_BeginDetect>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_BeginDetect,*pFVar11,
                        L"Collisions::BeginDetect","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                   ,0x235);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar14.Value;
      uStackX_c = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar8 = true;
      goto LAB_143c5bec5;
    }
  }
  bVar8 = false;
  FVar15 = local_70;
LAB_143c5bec5:
  if ((this->ConstraintAllocator).bInCollisionDetectionPhase != false) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bInCollisionDetectionPhase",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\CollisionConstraintAllocator.h"
                        ,0x16f,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  piVar1 = &(this->ConstraintAllocator).CurrentEpoch;
  *piVar1 = *piVar1 + 1;
  (this->ConstraintAllocator).bInCollisionDetectionPhase = true;
  pFVar16 = (this->ConstraintAllocator).ContextAllocators.AllocatorInstance.Data;
  iVar3 = (this->ConstraintAllocator).ContextAllocators.ArrayNum;
  pFVar2 = pFVar16 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ConstraintAllocator).ContextAllocators.ArrayNum != iVar3) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar2) break;
    lVar5 = *(longlong *)pFVar16;
    iVar4 = (this->ConstraintAllocator).CurrentEpoch;
    if (*(int *)(lVar5 + 0x18) != 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewActiveConstraints.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\CollisionConstraintAllocator.h"
                          ,0x98,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(int *)(lVar5 + 0x28) != 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewMidPhases.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\CollisionConstraintAllocator.h"
                          ,0x99,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(int *)(lVar5 + 8) = iVar4;
    pFVar16 = pFVar16 + 8;
  }
  Chaos::Private::FCollisionConstraintAllocator::ResetActiveConstraints(&this->ConstraintAllocator);
  iVar3 = (this->ConstraintAllocator).ActiveConstraints.ArrayMax;
  (this->ConstraintAllocator).ActiveConstraints.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConstraintAllocator).ActiveConstraints.AllocatorInstance,0,
               &(this->ConstraintAllocator).ActiveConstraints.ArrayMax);
  }
  iVar3 = (this->ConstraintAllocator).ActiveCCDConstraints.ArrayMax;
  (this->ConstraintAllocator).ActiveCCDConstraints.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConstraintAllocator).ActiveCCDConstraints.AllocatorInstance,0,
               &(this->ConstraintAllocator).ActiveCCDConstraints.ArrayMax);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
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

// BeginFrame @ 143c5c0f0

void __thiscall Chaos::FPBDCollisionConstraints::BeginFrame(FPBDCollisionConstraints *this)

{
  int iVar1;
  
  Chaos::Private::FCollisionConstraintAllocator::ResetActiveConstraints(&this->ConstraintAllocator);
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayMax;
  (this->ConstraintAllocator).ActiveConstraints.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConstraintAllocator).ActiveConstraints.AllocatorInstance,0,
               &(this->ConstraintAllocator).ActiveConstraints.ArrayMax);
  }
  iVar1 = (this->ConstraintAllocator).ActiveCCDConstraints.ArrayMax;
  (this->ConstraintAllocator).ActiveCCDConstraints.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConstraintAllocator).ActiveCCDConstraints.AllocatorInstance,0,
               &(this->ConstraintAllocator).ActiveCCDConstraints.ArrayMax);
  }
  return;
}

// CreateGroupSolver @ 143c634c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::FPBDCollisionConstraints::CreateGroupSolver(FPBDCollisionConstraints *this,int param_1)

{
  ECollisionSolverType EVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
  TVar4;
  FPBDCollisionContainerSolverJacobi *this_00;
  TUniquePtr<Chaos::Private::FPBDCollisionContainerSolverSimd,TDefaultDelete<Chaos::Private::FPBDCollisionContainerSolverSimd>_>
  TVar5;
  FPBDCollisionContainerSolver *pFVar6;
  TUniquePtr<Chaos::FPBDCollisionContainerSolver,TDefaultDelete<Chaos::FPBDCollisionContainerSolver>_>
  TVar7;
  TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
  *this_01;
  FPBDCollisionContainerSolverSimd *pFVar8;
  undefined4 in_register_00000014;
  FConstraintContainerSolver *pFVar9;
  FPBDCollisionContainerSolverSimd *pFVar10;
  int in_R8D;
  undefined1 auStackY_b8 [32];
  TUniquePtr<Chaos::Private::FPBDCollisionContainerSolverSimd,TDefaultDelete<Chaos::Private::FPBDCollisionContainerSolverSimd>_>
  local_88;
  TUniquePtr<Chaos::FPBDCollisionContainerSolver,TDefaultDelete<Chaos::FPBDCollisionContainerSolver>_>
  local_80;
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_38;
  
  pFVar9 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar8 = (FPBDCollisionContainerSolverSimd *)0x0;
  pFVar10 = (FPBDCollisionContainerSolverSimd *)0x0;
  local_88.Ptr = local_88.Ptr & 0xffffffff00000000;
  EVar1 = this->CollisionSolverType;
  if (EVar1 == GaussSeidel) {
    pFVar6 = ::operator_new(0x80);
    if (pFVar6 != (FPBDCollisionContainerSolver *)0x0) {
      pFVar10 = (FPBDCollisionContainerSolverSimd *)
                FPBDCollisionContainerSolver::FPBDCollisionContainerSolver(pFVar6,this,in_R8D);
    }
  }
  else if (EVar1 == GaussSeidelSimd) {
    if (CVars::bCollisionsEnableSolverABTest) {
      pFVar10 = ::operator_new(0xb90);
      TVar5.Ptr = pFVar8;
      if (pFVar10 != (FPBDCollisionContainerSolverSimd *)0x0) {
        TVar5.Ptr = Chaos::Private::FPBDCollisionContainerSolverSimd::
                    FPBDCollisionContainerSolverSimd(pFVar10,this,in_R8D);
      }
      local_88.Ptr = TVar5.Ptr;
      pFVar6 = ::operator_new(0x80);
      TVar7.Ptr = (FPBDCollisionContainerSolver *)pFVar8;
      if (pFVar6 != (FPBDCollisionContainerSolver *)0x0) {
        TVar7.Ptr = FPBDCollisionContainerSolver::FPBDCollisionContainerSolver(pFVar6,this,in_R8D);
      }
      local_80.Ptr = TVar7.Ptr;
      this_01 = ::operator_new(0xe8);
      if (this_01 !=
          (TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
           *)0x0) {
        local_78._0_8_ =
             &
             ___7___Func_impl_no_alloc_P6AXW4ESolverPhase___TABTestingConstraintContainerSolver_VFPBDCollisionContainerSolver_Chaos__VFPBDCollisionContainerSolverSimd_Private_2__Private_Chaos__AEBVFPBDCollisionContainerSolver_4_AEBVFPBDCollisionContainerSolverSimd_34_AEBVFSolverBodyContainer_4_3_ZXW41234_AEBV54_AEBV634_AEBV74_AEBV74__std__6B_
        ;
        local_78._8_8_ = ABTestSimdCollisionSolver;
        local_40 = (longlong *)local_78;
        pFVar8 = (FPBDCollisionContainerSolverSimd *)
                 Chaos::Private::
                 TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
                 ::
                 TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>
                           (this_01,&local_80,&local_88,in_R8D,
                            (function<void___cdecl(Chaos::Private::TABTestingConstraintContainerSolver<Chaos::FPBDCollisionContainerSolver,Chaos::Private::FPBDCollisionContainerSolverSimd>::ESolverPhase,Chaos::FPBDCollisionContainerSolver_const_&,Chaos::Private::FPBDCollisionContainerSolverSimd_const_&,Chaos::FSolverBodyContainer_const_&,Chaos::FSolverBodyContainer_const_&)>
                             *)local_78);
        TVar7.Ptr = local_80.Ptr;
        TVar5.Ptr = local_88.Ptr;
        if (local_40 != (longlong *)0x0) {
          (**(code **)(*local_40 + 0x20))(local_40,local_40 != (longlong *)local_78);
        }
      }
      pFVar9->_padding_ = (longlong)pFVar8;
      if ((FPBDCollisionContainerSolverSimd *)TVar7.Ptr != (FPBDCollisionContainerSolverSimd *)0x0)
      {
        (**(code **)((FPBDCollisionContainerSolverSimd *)TVar7.Ptr)->_padding_)(TVar7.Ptr,1);
      }
      if (TVar5.Ptr == (FPBDCollisionContainerSolverSimd *)0x0) {
        return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
                )pFVar9;
      }
      (**(code **)(TVar5.Ptr)->_padding_)(TVar5.Ptr,1);
      return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
              )pFVar9;
    }
    pFVar8 = ::operator_new(0xb90);
    if (pFVar8 != (FPBDCollisionContainerSolverSimd *)0x0) {
      pFVar10 = Chaos::Private::FPBDCollisionContainerSolverSimd::FPBDCollisionContainerSolverSimd
                          (pFVar8,this,in_R8D);
    }
  }
  else {
    pFVar10 = pFVar8;
    if (EVar1 == PartialJacobi) {
      this_00 = ::operator_new(0x50);
      if (this_00 != (FPBDCollisionContainerSolverJacobi *)0x0) {
        pFVar10 = (FPBDCollisionContainerSolverSimd *)
                  Chaos::Private::FPBDCollisionContainerSolverJacobi::
                  FPBDCollisionContainerSolverJacobi(this_00,this,in_R8D);
      }
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (FConstraintContainerSolver *)(*pcVar2)();
        return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
                )TVar4.Ptr;
      }
    }
  }
  pFVar9->_padding_ = (longlong)pFVar10;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar9;
}

// CreateSceneSolver @ 143c63760

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::FPBDCollisionConstraints::CreateSceneSolver(FPBDCollisionConstraints *this,int param_1)

{
  FPBDCollisionContainerSolver *pFVar1;
  undefined4 in_register_00000014;
  FConstraintContainerSolver *pFVar2;
  int in_R8D;
  
  pFVar2 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  pFVar1 = ::operator_new(0x80);
  if (pFVar1 != (FPBDCollisionContainerSolver *)0x0) {
    pFVar1 = FPBDCollisionContainerSolver::FPBDCollisionContainerSolver(pFVar1,this,in_R8D);
    pFVar2->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar2;
  }
  pFVar2->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar2;
}

// DetectProbeCollisions @ 143c64590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionConstraints::DetectProbeCollisions
          (FPBDCollisionConstraints *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  FPBDCollisionConstraint *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_DetectProbeCollisions> FVar22;
  TGeometryParticleHandleImp<double,3,1> *pTVar23;
  TVector<double,3> *pTVar24;
  TGeometryParticleHandleImp<double,3,1> *pTVar25;
  longlong lVar26;
  FName FVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  undefined1 auStackY_4c8 [32];
  FColor_u_0 local_458 [2];
  FName local_450;
  FName local_448;
  FGenericParticleHandleImp local_438;
  FGenericParticleHandleImp local_430;
  FGenericParticleHandleImp local_428;
  FGenericParticleHandleImp local_420;
  FName local_418 [2];
  FChaosDebugDrawSettings local_408;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  FVar22 = StatPtr_STAT_Collisions_DetectProbeCollisions;
  if (StatPtr_STAT_Collisions_DetectProbeCollisions ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_DetectProbeCollisions>)0x0) {
    pFVar21 = ::FName::FName(local_418,"STAT_Collisions_DetectProbeCollisions");
    FVar22 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_DetectProbeCollisions>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_DetectProbeCollisions,
                        *pFVar21,L"Collisions::DetectProbeCollisions","STATGROUP_ChaosCollision",
                        "STATCAT_Advanced",L"ChaosCollision",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar27 = *(FName *)FVar22;
  bVar11 = false;
  bVar12 = false;
  local_448.ComparisonIndex.Value = 0;
  local_448.Number = 0;
  bVar18 = false;
  bVar19 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_458[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_458[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar18 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_450.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_450.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_450,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                   ,0x248);
        bVar11 = true;
        bVar12 = true;
        bVar18 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar18 = true;
      goto LAB_143c6470d;
    }
  }
  bVar12 = bVar19;
  bVar11 = bVar18;
  bVar18 = false;
  FVar27 = local_448;
LAB_143c6470d:
  iVar4 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  pFVar28 = (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar17 = _UNK_150689688;
  dVar16 = ___xmm_3ff00000000000003ff0000000000000;
  dVar15 = _UNK_150689518;
  dVar14 = ___xmm_00000000000000003ff0000000000000;
  fVar13 = __real_3f800000;
  pFVar1 = pFVar28 + (longlong)iVar4 * 8;
  do {
    if (pFVar28 == pFVar1) {
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar18) {
        FThreadStats::AddMessage(FVar27,CycleScopeEnd);
      }
      return;
    }
    pFVar6 = *(FPBDCollisionConstraint **)pFVar28;
    if ((pFVar6 != (FPBDCollisionConstraint *)0x0) &&
       ((*(byte *)((longlong)&pFVar6->Flags + 1) & 1) != 0)) {
      pTVar25 = pFVar6->Particle[0];
      pTVar7 = pFVar6->Particle[1];
      local_438.MHandle = pTVar25;
      bVar19 = FGenericParticleHandleImp::IsDynamic(&local_438);
      if (bVar19) {
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar25->_padding_ + 4)) {
          pTVar23 = pTVar25;
        }
        uVar5 = (uint)pTVar23->_padding_;
        lVar26 = pTVar23->_padding_;
        uVar20 = 0;
        if ((int)uVar5 < *(int *)(lVar26 + 0x568)) {
          uVar20 = ~uVar5 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar26 = *(longlong *)(lVar26 + 0x560);
      }
      else {
        uVar5 = (uint)pTVar25->_padding_;
        lVar26 = pTVar25->_padding_;
        uVar20 = 0;
        if ((int)uVar5 < *(int *)(lVar26 + 0x50)) {
          uVar20 = ~uVar5 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar26 = *(longlong *)(lVar26 + 0x48);
      }
      lVar29 = (longlong)(int)uVar5;
      fVar2 = *(float *)(lVar26 + lVar29 * 0x10);
      uVar3 = *(undefined8 *)(lVar26 + 8 + lVar29 * 0x10);
      dVar10 = (double)(float)((ulonglong)uVar3 >> 0x20);
      dVar9 = (double)*(float *)(lVar26 + 4 + lVar29 * 0x10);
      local_430.MHandle = pTVar25;
      bVar19 = FGenericParticleHandleImp::IsDynamic(&local_430);
      if (bVar19) {
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar25->_padding_ + 4)) {
          pTVar23 = pTVar25;
        }
        pTVar24 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar23);
      }
      else {
        pTVar24 = TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar25->_padding_,(int)pTVar25->_padding_);
      }
      local_238.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
      local_238.Rotation.ZW.m128d_f64[0] = (double)(float)uVar3;
      local_238.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_238.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
      local_238.Rotation.XY.m128d_f64[0] = (double)fVar2;
      local_238.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_238.Translation.XY.m128d_f64[0] = *(double *)pTVar24;
      local_238.Translation.XY.m128d_f64[1] = *(double *)&pTVar24->field_0x8;
      local_238.Translation.ZW.m128d_f64[0] = *(double *)&pTVar24->field_0x10;
      local_358.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_358.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_358.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_238.Translation.ZW.m128d_f64[1] = 0.0;
      local_358.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_358.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_358.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_358.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_358.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_358.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_358.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_358.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_358.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_238.Scale3D.XY.m128d_f64[0] = dVar16;
      local_238.Scale3D.XY.m128d_f64[1] = dVar17;
      local_358.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_358.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_358.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_238.Scale3D.ZW.m128d_f64[0] = dVar14;
      local_238.Scale3D.ZW.m128d_f64[1] = dVar15;
      local_358.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_358.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_358.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_358,(TTransform<double> *)pFVar6->ImplicitTransform,&local_238);
      local_298 = local_358.Rotation.XY.m128d_f64[0];
      dStack_290 = local_358.Rotation.XY.m128d_f64[1];
      local_288 = local_358.Rotation.ZW.m128d_f64[0];
      dStack_280 = local_358.Rotation.ZW.m128d_f64[1];
      local_278 = local_358.Translation.XY.m128d_f64[0];
      dStack_270 = local_358.Translation.XY.m128d_f64[1];
      local_268 = local_358.Translation.ZW.m128d_f64[0];
      dStack_260 = local_358.Translation.ZW.m128d_f64[1];
      local_258 = local_358.Scale3D.XY.m128d_f64[0];
      dStack_250 = local_358.Scale3D.XY.m128d_f64[1];
      local_248 = local_358.Scale3D.ZW.m128d_f64[0];
      dStack_240 = local_358.Scale3D.ZW.m128d_f64[1];
      local_428.MHandle = pTVar7;
      bVar19 = FGenericParticleHandleImp::IsDynamic(&local_428);
      if (bVar19) {
        pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
          pTVar25 = pTVar7;
        }
        uVar5 = (uint)pTVar25->_padding_;
        lVar26 = pTVar25->_padding_;
        uVar20 = 0;
        if ((int)uVar5 < *(int *)(lVar26 + 0x568)) {
          uVar20 = ~uVar5 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar26 = *(longlong *)(lVar26 + 0x560);
      }
      else {
        uVar5 = (uint)pTVar7->_padding_;
        lVar26 = pTVar7->_padding_;
        uVar20 = 0;
        if ((int)uVar5 < *(int *)(lVar26 + 0x50)) {
          uVar20 = ~uVar5 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar26 = *(longlong *)(lVar26 + 0x48);
      }
      lVar29 = (longlong)(int)uVar5;
      fVar2 = *(float *)(lVar26 + lVar29 * 0x10);
      uVar3 = *(undefined8 *)(lVar26 + 8 + lVar29 * 0x10);
      dVar10 = (double)(float)((ulonglong)uVar3 >> 0x20);
      dVar9 = (double)*(float *)(lVar26 + 4 + lVar29 * 0x10);
      local_420.MHandle = pTVar7;
      bVar19 = FGenericParticleHandleImp::IsDynamic(&local_420);
      if (bVar19) {
        pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
          pTVar25 = pTVar7;
        }
        pTVar24 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar25);
      }
      else {
        pTVar24 = TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar7->_padding_,(int)pTVar7->_padding_);
      }
      local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
      local_1d8.Rotation.ZW.m128d_f64[0] = (double)(float)uVar3;
      local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_1d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
      local_1d8.Rotation.XY.m128d_f64[0] = (double)fVar2;
      local_1d8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_1d8.Translation.XY.m128d_f64[0] = *(double *)pTVar24;
      local_1d8.Translation.XY.m128d_f64[1] = *(double *)&pTVar24->field_0x8;
      local_1d8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar24->field_0x10;
      local_2f8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_2f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2f8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1d8.Translation.ZW.m128d_f64[1] = 0.0;
      local_2f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_2f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_2f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_2f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1d8.Scale3D.XY.m128d_f64[0] = dVar16;
      local_1d8.Scale3D.XY.m128d_f64[1] = dVar17;
      local_2f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_2f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_1d8.Scale3D.ZW.m128d_f64[0] = dVar14;
      local_1d8.Scale3D.ZW.m128d_f64[1] = dVar15;
      local_2f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_2f8,(TTransform<double> *)(pFVar6->ImplicitTransform + 1),&local_1d8);
      pFVar6->CullDistance = 0.0;
      *(double *)pFVar6->ShapeWorldTransforms = local_298;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x8 = dStack_290;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x10 = local_288;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x18 = dStack_280;
      *(double *)(pFVar6->ShapeWorldTransforms + 1) = local_2f8.Rotation.XY.m128d_f64[0];
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x8 = local_2f8.Rotation.XY.m128d_f64[1];
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x10 = local_2f8.Rotation.ZW.m128d_f64[0];
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x18 = local_2f8.Rotation.ZW.m128d_f64[1];
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x20 = local_278;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x28 = dStack_270;
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x20 = local_2f8.Translation.XY.m128d_f64[0]
      ;
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x28 = local_2f8.Translation.XY.m128d_f64[1]
      ;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x30 = local_268;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x38 = dStack_260;
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x30 = local_2f8.Translation.ZW.m128d_f64[0]
      ;
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x38 = local_2f8.Translation.ZW.m128d_f64[1]
      ;
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x40 = local_2f8.Scale3D.XY.m128d_f64[0];
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x48 = local_2f8.Scale3D.XY.m128d_f64[1];
      local_138 = local_2f8.Scale3D.XY.m128d_f64[0];
      dStack_130 = local_2f8.Scale3D.XY.m128d_f64[1];
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x40 = local_258;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x48 = dStack_250;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x50 = local_248;
      *(double *)&pFVar6->ShapeWorldTransforms[0].field_0x58 = dStack_240;
      local_178 = local_2f8.Rotation.XY.m128d_f64[0];
      dStack_170 = local_2f8.Rotation.XY.m128d_f64[1];
      local_168 = local_2f8.Rotation.ZW.m128d_f64[0];
      dStack_160 = local_2f8.Rotation.ZW.m128d_f64[1];
      local_158 = local_2f8.Translation.XY.m128d_f64[0];
      dStack_150 = local_2f8.Translation.XY.m128d_f64[1];
      local_148 = local_2f8.Translation.ZW.m128d_f64[0];
      dStack_140 = local_2f8.Translation.ZW.m128d_f64[1];
      local_128 = local_2f8.Scale3D.ZW.m128d_f64[0];
      dStack_120 = local_2f8.Scale3D.ZW.m128d_f64[1];
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x50 = local_2f8.Scale3D.ZW.m128d_f64[0];
      *(double *)&pFVar6->ShapeWorldTransforms[1].field_0x58 = local_2f8.Scale3D.ZW.m128d_f64[1];
      Collisions::UpdateConstraint
                (pFVar6,(TRigidTransform<double,3> *)&local_298,
                 (TRigidTransform<double,3> *)&local_178,param_1);
      if (DebugDrawProbeDetection != false) {
        local_408.ArrowSize = CVars::ChaosSolverDebugDebugDrawSettings.ArrowSize;
        local_408.BodyAxisLen = CVars::ChaosSolverDebugDebugDrawSettings.BodyAxisLen;
        local_408.ContactLen = CVars::ChaosSolverDebugDebugDrawSettings.ContactLen;
        local_408.ContactWidth = CVars::ChaosSolverDebugDebugDrawSettings.ContactWidth;
        local_408.ContactInfoWidth = CVars::ChaosSolverDebugDebugDrawSettings.ContactInfoWidth;
        local_408.ContactOwnerWidth = CVars::ChaosSolverDebugDebugDrawSettings.ContactOwnerWidth;
        local_408.ConstraintAxisLen = CVars::ChaosSolverDebugDebugDrawSettings.ConstraintAxisLen;
        local_408.JointComSize = CVars::ChaosSolverDebugDebugDrawSettings.JointComSize;
        local_408.LineThickness = CVars::ChaosSolverDebugDebugDrawSettings.LineThickness;
        local_408.DrawScale = CVars::ChaosSolverDebugDebugDrawSettings.DrawScale;
        local_408.FontHeight = CVars::ChaosSolverDebugDebugDrawSettings.FontHeight;
        local_408.FontScale = CVars::ChaosSolverDebugDebugDrawSettings.FontScale;
        local_408.ShapeThicknesScale = CVars::ChaosSolverDebugDebugDrawSettings.ShapeThicknesScale;
        local_408.PointSize = CVars::ChaosSolverDebugDebugDrawSettings.PointSize;
        local_408.VelScale = CVars::ChaosSolverDebugDebugDrawSettings.VelScale;
        local_408.AngVelScale = CVars::ChaosSolverDebugDebugDrawSettings.AngVelScale;
        local_408.ImpulseScale = CVars::ChaosSolverDebugDebugDrawSettings.ImpulseScale;
        local_408.PushOutScale = CVars::ChaosSolverDebugDebugDrawSettings.PushOutScale;
        local_408.DrawPriority = CVars::ChaosSolverDebugDebugDrawSettings.DrawPriority;
        local_408.bShowSimpleCollision =
             CVars::ChaosSolverDebugDebugDrawSettings.bShowSimpleCollision;
        local_408.bShowComplexCollision =
             CVars::ChaosSolverDebugDebugDrawSettings.bShowComplexCollision;
        local_408.bShowLevelSetCollision =
             CVars::ChaosSolverDebugDebugDrawSettings.bShowLevelSetCollision;
        local_408._87_1_ = CVars::ChaosSolverDebugDebugDrawSettings._87_1_;
        local_408.ShapesColorsPerState.DynamicColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DynamicColor.field0_0x0;
        local_408.ShapesColorsPerState.SleepingColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.SleepingColor.field0_0x0;
        local_408.ShapesColorsPerState.KinematicColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.KinematicColor.field0_0x0
        ;
        local_408.ShapesColorsPerState.StaticColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.StaticColor.field0_0x0;
        local_408.ShapesColorsPerState.DebrisColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState.DebrisColor.field0_0x0;
        local_408.ShapesColorsPerShapeType.SimpleTypeColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerShapeType.SimpleTypeColor.
             field0_0x0;
        local_408.ShapesColorsPerShapeType.ConvexColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerShapeType.ConvexColor.
             field0_0x0;
        local_408.ShapesColorsPerShapeType.HeightFieldColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerShapeType.HeightFieldColor.
             field0_0x0;
        local_408.ShapesColorsPerShapeType.TriangleMeshColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerShapeType.TriangleMeshColor.
             field0_0x0;
        local_408.ShapesColorsPerShapeType.LevelSetColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerShapeType.LevelSetColor.
             field0_0x0;
        local_408.BoundsColorsPerState.DynamicColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerState.DynamicColor.field0_0x0;
        local_408.BoundsColorsPerState.SleepingColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerState.SleepingColor.field0_0x0;
        local_408.BoundsColorsPerState.KinematicColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerState.KinematicColor.field0_0x0
        ;
        local_408.BoundsColorsPerState.StaticColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerState.StaticColor.field0_0x0;
        local_408.BoundsColorsPerState.DebrisColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerState.DebrisColor.field0_0x0;
        local_408.BoundsColorsPerShapeType.SimpleTypeColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerShapeType.SimpleTypeColor.
             field0_0x0;
        local_408.BoundsColorsPerShapeType.ConvexColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerShapeType.ConvexColor.
             field0_0x0;
        local_408.BoundsColorsPerShapeType.HeightFieldColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerShapeType.HeightFieldColor.
             field0_0x0;
        local_408.BoundsColorsPerShapeType.TriangleMeshColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerShapeType.TriangleMeshColor.
             field0_0x0;
        local_408.BoundsColorsPerShapeType.LevelSetColor.field0_0x0 =
             CVars::ChaosSolverDebugDebugDrawSettings.BoundsColorsPerShapeType.LevelSetColor.
             field0_0x0;
        local_408.InertiaScale = CVars::ChaosSolverDebugDebugDrawSettings.InertiaScale;
        local_408.DrawDuration = 1.0;
        local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_118._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_108._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_108._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_f8._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_e8._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_d8._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_c8._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        Chaos::DebugDraw::DrawCollidingShapes
                  ((TRigidTransform<double,3> *)local_118,pFVar6,fVar13,fVar13,&local_408);
      }
    }
    pFVar28 = pFVar28 + 8;
  } while( true );
}

// DisableHandles @ 143c64ea0

void __thiscall Chaos::FPBDCollisionConstraints::DisableHandles(FPBDCollisionConstraints *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    this->bHandlesEnabled = false;
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("NumConstraints() == 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                     ,0x19d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bHandlesEnabled = false;
  return;
}

// DisconnectConstraints @ 143c64f20

void __thiscall
Chaos::FPBDCollisionConstraints::DisconnectConstraints
          (FPBDCollisionConstraints *this,
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
  undefined1 auStackX_10 [8];
  int iStackX_18;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143c6e7fd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStackX_18 = (int)lVar8;
    iVar7 = iStackX_18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_143c6e7fd:
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
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143c6e900;
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
LAB_143c6e900:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    Chaos::Private::FCollisionConstraintAllocator::RemoveParticle
              (&this->ConstraintAllocator,
               *(TGeometryParticleHandleImp<double,3,1> **)
                (*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// EndDetectCollisions @ 143c65910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDCollisionConstraints::EndDetectCollisions(FPBDCollisionConstraints *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_EndDetect> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_Collisions_EndDetect;
  if (StatPtr_STAT_Collisions_EndDetect ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_EndDetect>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_Collisions_EndDetect");
    FVar5 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_EndDetect>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_EndDetect,*pFVar4,
                       L"Collisions::EndDetect","STATGROUP_ChaosCollision","STATCAT_Advanced",
                       L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    Chaos::Private::FCollisionConstraintAllocator::EndDetectCollisions(&this->ConstraintAllocator);
    PruneEdgeCollisions(this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                   ,0x23c);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    Chaos::Private::FCollisionConstraintAllocator::EndDetectCollisions(&this->ConstraintAllocator);
    PruneEdgeCollisions(this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  return;
}

// GetConstConstraint @ 143c67b10

FPBDCollisionConstraint * __thiscall
Chaos::FPBDCollisionConstraints::GetConstConstraint(FPBDCollisionConstraints *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDCollisionConstraint *pFVar4;
  FPBDCollisionConstraint **ppFVar5;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_18;
  
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (iVar1 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                       ,0x2ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_18.DataPtr =
       (FPBDCollisionConstraint **)
       (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data;
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_18.ArrayNum = iVar1;
  ppFVar5 = TArrayView<Chaos::FPBDCollisionConstraint_*_const,int>::operator[](&local_18,param_1);
  return *ppFVar5;
}

// GetConstConstraintHandles @ 143c67be0

TArrayView<Chaos::FPBDCollisionConstraint_const_*_const,int> * __thiscall
Chaos::FPBDCollisionConstraints::GetConstConstraintHandles
          (FPBDCollisionConstraints *this,
          TArrayView<Chaos::FPBDCollisionConstraint_const_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<Chaos::FPBDCollisionConstraint_const_*_const,int> *pTVar5;
  
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  pFVar2 = (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::FPBDCollisionConstraint_const_*_const,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->DataPtr = (FPBDCollisionConstraint **)pFVar2;
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetConstraint @ 143c67d20

FPBDCollisionConstraint * __thiscall
Chaos::FPBDCollisionConstraints::GetConstraint(FPBDCollisionConstraints *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDCollisionConstraint *pFVar4;
  FPBDCollisionConstraint **ppFVar5;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_18;
  
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (iVar1 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                       ,0x306,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_18.DataPtr =
       (FPBDCollisionConstraint **)
       (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data;
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_18.ArrayNum = iVar1;
  ppFVar5 = TArrayView<Chaos::FPBDCollisionConstraint_*_const,int>::operator[](&local_18,param_1);
  return *ppFVar5;
}

// GetConstraint @ 143c67df0

FPBDCollisionConstraint * __thiscall
Chaos::FPBDCollisionConstraints::GetConstraint(FPBDCollisionConstraints *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPBDCollisionConstraint *pFVar4;
  FPBDCollisionConstraint **ppFVar5;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_18;
  
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (iVar1 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumConstraints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                       ,0x2f8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_18.DataPtr =
       (FPBDCollisionConstraint **)
       (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data;
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPBDCollisionConstraint *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_18.ArrayNum = iVar1;
  ppFVar5 = TArrayView<Chaos::FPBDCollisionConstraint_*_const,int>::operator[](&local_18,param_1);
  return *ppFVar5;
}

// GetConstraintHandles @ 143c68220

TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> * __thiscall
Chaos::FPBDCollisionConstraints::GetConstraintHandles
          (FPBDCollisionConstraints *this,
          TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *pTVar4;
  
  iVar1 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FPBDCollisionConstraint **)
       (this->ConstraintAllocator).ActiveConstraints.AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetIsDeterministic @ 143c690e0

bool __thiscall Chaos::FPBDCollisionConstraints::GetIsDeterministic(FPBDCollisionConstraints *this)

{
  return this->bIsDeterministic;
}

// GetNumConstraints @ 143c69560

int __thiscall Chaos::FPBDCollisionConstraints::GetNumConstraints(FPBDCollisionConstraints *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (this->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// PrepareTick @ 143c6c560

void __thiscall Chaos::FPBDCollisionConstraints::PrepareTick(FPBDCollisionConstraints *this)

{
  return;
}

// PruneEdgeCollisions @ 143c6d2f0

void __thiscall Chaos::FPBDCollisionConstraints::PruneEdgeCollisions(FPBDCollisionConstraints *this)

{
  undefined8 uVar1;
  longlong lVar2;
  TParticleHandleBase<double,3>_u_0 *pTVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  TParticleHandleBase<double,3>_u_0 this_00;
  FParticleMeshCollisionPruner local_res8;
  FParticleEdgeCollisionPruner local_res10;
  FParticleSubSurfaceCollisionPruner local_res18 [2];
  undefined1 local_e8 [24];
  uint uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  TParticleHandleBase<double,3>_u_0 local_b8;
  uint uStack_b0;
  int iStack_ac;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  double local_70;
  double dStack_68;
  double local_60;
  TQuat<double> local_58;
  
  if ((this->bEnableEdgePruning != false) &&
     (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_e8,
                 (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                  *)&this->Particles->NonDisabledDynamicView), dVar5 = __real_3ff0000000000000,
     (TPBDRigidParticles<double,3> *)local_e8._16_8_ != (TPBDRigidParticles<double,3> *)0x0)) {
    this_00 = (TParticleHandleBase<double,3>_u_0)local_e8._16_8_;
    uVar8 = uStack_d0;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_e8);
      uVar7 = 0;
      if ((int)uVar8 < (int)(this_00.PBDRigidParticles)->_padding_) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(byte *)((this_00.PBDRigidParticles)->_padding_ + 4 + (longlong)(int)uVar8 * 0x10) & 2)
          != 0) {
        if (bCollisionsEnableMeshCollisionPruning != false) {
          local_res8.Particle =
               (TGeometryParticleHandleImp<double,3,1> *)
               TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar8);
          FParticleMeshCollisionPruner::Prune(&local_res8);
        }
        if (bCollisionsEnableEdgeCollisionPruning != false) {
          local_res10.Particle =
               (TGeometryParticleHandleImp<double,3,1> *)
               TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar8);
          FParticleEdgeCollisionPruner::Prune(&local_res10);
        }
        if (bCollisionsEnableSubSurfaceCollisionPruning != false) {
          lVar10 = (longlong)(int)uVar8;
          uVar7 = 0;
          if ((int)uVar8 < (int)(this_00.GeometryParticles)->_padding_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = (this_00.GeometryParticles)->_padding_;
          local_a8._s_0.Z = dVar5;
          local_58.X = (double)*(float *)(lVar2 + lVar10 * 0x10);
          local_58.Y = (double)*(float *)(lVar2 + 4 + lVar10 * 0x10);
          uVar1 = *(undefined8 *)(lVar2 + 8 + lVar10 * 0x10);
          local_58.Z = (double)(float)uVar1;
          local_58.W = (double)(float)((ulonglong)uVar1 >> 0x20);
          local_a8._s_0.X = 0.0;
          local_a8._s_0.Y = 0.0;
          UE::Math::TQuat<double>::RotateVector
                    (&local_58,(TVector<double> *)&local_88._s_0,(TVector<double> *)&local_a8._s_0);
          local_70 = local_88._s_0.X;
          dStack_68 = local_88._s_0.Y;
          local_60 = local_88._s_0.Z;
          local_res18[0].Particle =
               (TGeometryParticleHandleImp<double,3,1> *)
               TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar8);
          FParticleSubSurfaceCollisionPruner::Prune(local_res18,(TVector<double,3> *)&local_70);
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_e8);
      do {
        uVar1 = local_e8._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_e8._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar8 = uVar8 + 1;
          uStack_d0 = uVar8;
          if (local_c4 <= (int)uVar8) {
LAB_143c6d516:
            local_c8 = local_c8 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_e8);
            this_00 = (TParticleHandleBase<double,3>_u_0)local_e8._16_8_;
            uVar8 = uStack_d0;
          }
        }
        else {
          iVar9 = local_c0 + 1;
          local_c0 = iVar9;
          if (*(int *)(local_e8._8_8_ + 8) <= iVar9) goto LAB_143c6d516;
          if ((iVar9 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar3 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar1)->Data + (longlong)iVar9 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar3->PBDRigidParticles;
          uVar8 = *(uint *)(pTVar3 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_ac = (uint)iStack_ac._1_3_ << 8;
          }
          else {
            iStack_ac = CONCAT31(iStack_ac._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_cc = iStack_ac;
          uStack_d0 = uVar8;
          local_e8._16_8_ = this_00;
          local_b8 = this_00;
          uStack_b0 = uVar8;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_e8);
        bVar6 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_e8 + 0x10));
      } while (bVar6);
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// RemoveConstraints @ 143c6e760

void __thiscall
Chaos::FPBDCollisionConstraints::RemoveConstraints
          (FPBDCollisionConstraints *this,
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143c6e7fd;
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
LAB_143c6e7fd:
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
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143c6e900;
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
LAB_143c6e900:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    Chaos::Private::FCollisionConstraintAllocator::RemoveParticle
              (&this->ConstraintAllocator,
               *(TGeometryParticleHandleImp<double,3,1> **)
                (*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Reset @ 143c70eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDCollisionConstraints::Reset(FPBDCollisionConstraints *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Reset> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_Collisions_Reset;
  if (StatPtr_STAT_Collisions_Reset ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Reset>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_Collisions_Reset");
    FVar5 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Reset>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Reset,*pFVar4,
                       L"Collisions::Reset","STATGROUP_ChaosCollision","STATCAT_Advanced",
                       L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    Chaos::Private::FCollisionConstraintAllocator::Reset(&this->ConstraintAllocator);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                   ,0x22e);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    Chaos::Private::FCollisionConstraintAllocator::Reset(&this->ConstraintAllocator);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  return;
}

// ResetConstraints @ 143c714c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPBDCollisionConstraints::ResetConstraints(FPBDCollisionConstraints *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Reset> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  FStatMessage FStack_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_Collisions_Reset;
  if (StatPtr_STAT_Collisions_Reset ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Reset>)0x0) {
    pFVar4 = ::FName::FName(&FStackX_10,"STAT_Collisions_Reset");
    FVar5 = (FThreadSafeStaticStat<Chaos::FStat_STAT_Collisions_Reset>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Reset,*pFVar4,
                       L"Collisions::Reset","STATGROUP_ChaosCollision","STATCAT_Advanced",
                       L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    Chaos::Private::FCollisionConstraintAllocator::Reset(&this->ConstraintAllocator);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar7.Value;
        LStackX_8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDCollisionConstraints.cpp"
                   ,0x22e);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      LStackX_8.s.LowPart = FVar7.Value;
      LStackX_8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    Chaos::Private::FCollisionConstraintAllocator::Reset(&this->ConstraintAllocator);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        FStack_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        FStack_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&LStackX_8);
        FStack_28.StatData.Pad[4] = '\0';
        FStack_28.StatData.Pad[5] = '\0';
        FStack_28.StatData.Pad[6] = '\0';
        FStack_28.StatData.Pad[7] = '\0';
        FStack_28.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
        FStack_28.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
        FStack_28.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
        FStack_28.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&FStack_28);
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
  return;
}

// SetIsDeterministic @ 143c73f50

void __thiscall
Chaos::FPBDCollisionConstraints::SetIsDeterministic(FPBDCollisionConstraints *this,bool param_1)

{
  this->bIsDeterministic = param_1;
  (this->ConstraintAllocator).bIsDeteministic = param_1;
  return;
}

// UnprepareTick @ 143c79180

void __thiscall Chaos::FPBDCollisionConstraints::UnprepareTick(FPBDCollisionConstraints *this)

{
  return;
}

// UpdateConstraintMaterialProperties @ 143c79dd0

void __thiscall
Chaos::FPBDCollisionConstraints::UpdateConstraintMaterialProperties
          (FPBDCollisionConstraints *this,FPBDCollisionConstraint *param_1)

{
  code *pcVar1;
  bool bVar2;
  FChaosPhysicsMaterial *pFVar3;
  FChaosPhysicsMaterial *pFVar4;
  int iVar5;
  ECombineMode EVar6;
  ForElementType<Chaos::FManifoldPoint> FVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double local_res8;
  
  iVar5 = -1;
  if (0 < (param_1->ManifoldPoints).ArrayNum) {
    FVar7 = (param_1->ManifoldPoints).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar7 = (ForElementType<Chaos::FManifoldPoint>)&param_1->ManifoldPoints;
    }
    iVar5 = *(int *)((longlong)FVar7 + 0x28);
  }
  pFVar3 = Chaos::Private::GetPhysicsMaterial
                     (param_1->Particle[0],param_1->Shape[0],iVar5,this->MPhysicsMaterials,
                      this->MPerParticlePhysicsMaterials,this->SimMaterials);
  pFVar4 = Chaos::Private::GetPhysicsMaterial
                     (param_1->Particle[1],param_1->Shape[1],iVar5,this->MPhysicsMaterials,
                      this->MPerParticlePhysicsMaterials,this->SimMaterials);
  local_res8 = 0.0;
  dVar11 = 0.0;
  if (pFVar3 == (FChaosPhysicsMaterial *)0x0) {
    if (pFVar4 == (FChaosPhysicsMaterial *)0x0) {
      dVar10 = (double)DefaultCollisionFriction;
      dVar8 = (double)DefaultCollisionRestitution;
      dVar9 = dVar10;
    }
    else {
      dVar9 = pFVar4->Friction;
      dVar10 = pFVar4->StaticFriction;
      if (pFVar4->StaticFriction <= dVar9) {
        dVar10 = dVar9;
      }
      dVar8 = pFVar4->Restitution;
      dVar11 = (double)pFVar4->BaseFrictionImpulse;
      UpdateSoftCollisionSettings(pFVar4,param_1->Particle[1],&local_res8);
    }
  }
  else if (pFVar4 == (FChaosPhysicsMaterial *)0x0) {
    dVar9 = pFVar3->Friction;
    dVar10 = pFVar3->StaticFriction;
    if (pFVar3->StaticFriction <= dVar9) {
      dVar10 = dVar9;
    }
    dVar8 = pFVar3->Restitution;
    dVar11 = (double)pFVar3->BaseFrictionImpulse;
    UpdateSoftCollisionSettings(pFVar3,param_1->Particle[0],&local_res8);
  }
  else {
    EVar6 = pFVar4->RestitutionCombineMode;
    if (pFVar4->RestitutionCombineMode < pFVar3->RestitutionCombineMode) {
      EVar6 = pFVar3->RestitutionCombineMode;
    }
    dVar8 = FChaosPhysicsMaterial::CombineHelper(pFVar3->Restitution,pFVar4->Restitution,EVar6);
    EVar6 = pFVar4->FrictionCombineMode;
    if (pFVar4->FrictionCombineMode < pFVar3->FrictionCombineMode) {
      EVar6 = pFVar3->FrictionCombineMode;
    }
    dVar9 = FChaosPhysicsMaterial::CombineHelper(pFVar3->Friction,pFVar4->Friction,EVar6);
    dVar11 = pFVar4->StaticFriction;
    uVar13 = SUB84(dVar11,0);
    uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar10 = pFVar3->StaticFriction;
    if (pFVar3->StaticFriction <= pFVar3->Friction) {
      dVar10 = pFVar3->Friction;
    }
    dVar12 = pFVar4->Friction;
    if (dVar11 <= dVar12) {
      uVar13 = SUB84(dVar12,0);
      uVar14 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    if (EVar6 == Avg) {
      dVar10 = ((double)CONCAT44(uVar14,uVar13) + dVar10) * __real_3fe0000000000000;
    }
    else {
      uVar15 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (EVar6 == Min) {
        if (dVar10 <= (double)CONCAT44(uVar14,uVar13)) {
          uVar13 = SUB84(dVar10,0);
          uVar14 = uVar15;
        }
        dVar10 = (double)CONCAT44(uVar14,uVar13);
      }
      else if (EVar6 == Multiply) {
        dVar10 = (double)CONCAT44(uVar14,uVar13) * dVar10;
      }
      else if (EVar6 == Max) {
        if ((double)CONCAT44(uVar14,uVar13) <= dVar10) {
          uVar13 = SUB84(dVar10,0);
          uVar14 = uVar15;
        }
        dVar10 = (double)CONCAT44(uVar14,uVar13);
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8879800981324300134>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Defines.h"
                           ,0x9a,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        dVar10 = 0.0;
      }
    }
    UpdateSoftCollisionSettings(pFVar3,param_1->Particle[0],&local_res8);
    UpdateSoftCollisionSettings(pFVar4,param_1->Particle[1],&local_res8);
    dVar11 = FChaosPhysicsMaterial::CombineHelper
                       ((double)pFVar3->BaseFrictionImpulse,(double)pFVar4->BaseFrictionImpulse,
                        EVar6);
  }
  dVar12 = this->RestitutionThreshold;
  if (0.0 <= CollisionFrictionOverride) {
    dVar10 = (double)CollisionFrictionOverride;
    dVar9 = dVar10;
  }
  if (0.0 <= CollisionRestitutionOverride) {
    dVar8 = (double)CollisionRestitutionOverride;
  }
  if (0.0 <= CollisionRestitutionThresholdOverride) {
    dVar12 = (double)CollisionRestitutionThresholdOverride;
  }
  if (0.0 <= CollisionAngularFrictionOverride) {
    dVar10 = (double)CollisionAngularFrictionOverride;
  }
  if (0.0 <= CollisionBaseFrictionImpulseOverride) {
    dVar11 = (double)CollisionBaseFrictionImpulseOverride;
  }
  if (this->bEnableRestitution == false) {
    dVar8 = 0.0;
  }
  (param_1->Material).InvMassScale0 = 1.0;
  (param_1->Material).InvMassScale1 = 1.0;
  (param_1->Material).InvInertiaScale0 = 1.0;
  (param_1->Material).InvInertiaScale1 = 1.0;
  (param_1->Material).Restitution = (float)dVar8;
  (param_1->Material).StaticFriction = (float)dVar10;
  (param_1->Material).SoftSeparation =
       (float)(double)CONCAT44((uint)((ulonglong)local_res8 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(local_res8,0) ^ (uint)__xmm_80000000000000008000000000000000);
  (param_1->Material).RestitutionThreshold = (float)dVar12;
  (param_1->Material).BaseFrictionImpulse = (float)dVar11;
  (param_1->Material).DynamicFriction = (float)dVar9;
  return;
}

