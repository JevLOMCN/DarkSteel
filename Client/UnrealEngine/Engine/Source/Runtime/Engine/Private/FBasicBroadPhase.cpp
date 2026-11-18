// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ProduceOverlaps @ 14829d770

void __thiscall
Chaos::FBasicBroadPhase::ProduceOverlaps
          (FBasicBroadPhase *this,double param_1,FCollisionContext *param_2,
          TGeometryParticleHandleImp<double,3,1> *param_3,
          TGeometryParticleHandleImp<double,3,1> *param_4,
          TGeometryParticleHandleImp<double,3,1> *param_5)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  FCollisionContextAllocator *this_00;
  bool *pbVar3;
  TAABB<double,3> *pTVar4;
  TAABB<double,3> *pTVar5;
  FParticlePairMidPhase *this_01;
  TVector<double,3> *pTVar6;
  longlong lVar7;
  
  pbVar3 = TGeometryParticlesImp<double,3,0>::HasCollision
                     ((TGeometryParticlesImp<double,3,0> *)param_3->_padding_,
                      (int)param_3->_padding_);
  if ((*pbVar3 != false) &&
     (pbVar3 = TGeometryParticlesImp<double,3,0>::HasCollision
                         ((TGeometryParticlesImp<double,3,0> *)param_4->_padding_,
                          (int)param_4->_padding_), *pbVar3 != false)) {
    pTVar4 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(param_3);
    pTVar5 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(param_4);
    lVar7 = 0;
    pTVar1 = &pTVar5->MMax;
    pTVar6 = pTVar1;
    do {
      dVar2 = *(double *)((longlong)pTVar6 + ((longlong)pTVar4 - (longlong)pTVar1));
      if (*(double *)pTVar6 <= dVar2 && dVar2 != *(double *)pTVar6) {
        return;
      }
      if (*(double *)((longlong)pTVar4 + (0x18 - (longlong)pTVar1) + (longlong)pTVar6) <
          *(double *)&((TAABB<double,3> *)(pTVar6 + -1))->MMin) {
        return;
      }
      lVar7 = lVar7 + 1;
      pTVar6 = (TVector<double,3> *)&pTVar6->field_0x8;
    } while (lVar7 < 3);
    this_00 = param_2->Allocator;
    this_01 = Chaos::Private::FCollisionContextAllocator::FindMidPhaseImpl
                        (this_00,param_3,param_4,param_5);
    if ((this_01 != (FParticlePairMidPhase *)0x0) ||
       (this_01 = Chaos::Private::FCollisionContextAllocator::CreateMidPhase
                            (this_00,param_3,param_4,param_2),
       this_01 != (FParticlePairMidPhase *)0x0)) {
      FParticlePairMidPhase::GenerateCollisions
                (this_01,param_2->Settings->BoundsExpansion,param_1,param_2);
    }
  }
  return;
}

// ProduceOverlaps @ 14829d880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FBasicBroadPhase::ProduceOverlaps
          (FBasicBroadPhase *this,double param_1,FCollisionConstraintAllocator *param_2,
          FCollisionDetectorSettings *param_3)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  int iVar3;
  TArray<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FCollisionContextAllocator *this_01;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Collisions_ParticlePairBroadPhase> FVar16;
  bool *pbVar17;
  TAABB<double,3> *pTVar18;
  TAABB<double,3> *pTVar19;
  FParticlePairMidPhase *this_02;
  TVector<double,3> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  FName FVar23;
  FName FVar24;
  FScriptContainerElement *pFVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  uint local_res20 [2];
  undefined1 local_98;
  undefined1 local_97 [7];
  FName local_90;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_88;
  FName local_80;
  FName local_78;
  FCollisionContext local_68;
  FName local_50 [3];
  
  FVar16 = StatPtr_STAT_Collisions_ParticlePairBroadPhase;
  if (StatPtr_STAT_Collisions_ParticlePairBroadPhase ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_ParticlePairBroadPhase>)0x0) {
    pFVar15 = ::FName::FName(local_50,"STAT_Collisions_ParticlePairBroadPhase");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Collisions_ParticlePairBroadPhase>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ParticlePairBroadPhase
                        ,*pFVar15,L"Collisions::BroadPhase::ParticlePair","STATGROUP_ChaosCollision"
                        ,"STATCAT_Advanced",L"ChaosCollision",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar24 = *(FName *)FVar16;
  bVar9 = false;
  bVar12 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar13 = false;
  bVar10 = false;
  if ((FVar24.ComparisonIndex.Value.Value != 0) ||
     (bVar8 = bVar9, bVar11 = bVar12, FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                  *)((ulonglong)local_88 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar12 = true;
      bVar13 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90 = FVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\BasicBroadPhase.h"
                   ,0x28);
        bVar9 = true;
        bVar12 = true;
        bVar13 = true;
        bVar10 = true;
      }
    }
    bVar8 = bVar9;
    bVar11 = bVar12;
    if (FThreadStats::bPrimaryEnable != false) {
      local_80 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar13 = true;
      bVar10 = true;
      goto LAB_14829da15;
    }
  }
  bVar12 = bVar10;
  bVar9 = bVar13;
  bVar13 = false;
  bVar10 = false;
  local_80 = local_78;
  FVar24 = local_78;
LAB_14829da15:
  Chaos::Private::FCollisionConstraintAllocator::SetMaxContexts(param_2,1);
  local_68.MidPhase = (FParticlePairMidPhase *)0x0;
  local_68.Settings = param_3;
  if (((param_2->ContextAllocators).ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar4 = this->ParticlePairs;
  local_68.Allocator =
       *(FCollisionContextAllocator **)(param_2->ContextAllocators).AllocatorInstance.Data;
  if (pTVar4 != (TArray<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    iVar3 = pTVar4->ArrayNum;
    pFVar25 = (pTVar4->AllocatorInstance).Data;
    pFVar27 = pFVar25 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (pTVar4->ArrayNum != iVar3) {
        `TCheckedPointerIterator<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar25 == pFVar27) break;
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar25;
      if ((pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (*(TGeometryParticleHandleImp<double,3,1> **)(pFVar25 + 8) !=
          (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
        ProduceOverlaps(this,param_1,&local_68,pTVar5,
                        *(TGeometryParticleHandleImp<double,3,1> **)(pFVar25 + 8),pTVar5);
      }
      pFVar25 = pFVar25 + 0x10;
    }
  }
  local_88 = this->ParticlesA;
  if ((local_88 !=
       (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0)
     && (this->ParticlesB !=
         (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0)
     ) {
    local_res20[0] = local_88->ArrayNum;
    uVar21 = (ulonglong)(int)local_res20[0];
    FVar26 = (FName)(local_88->AllocatorInstance).Data;
    FVar23 = (FName)(uVar21 * 8 + (longlong)FVar26);
    local_90 = FVar23;
    while( true ) {
      if (local_88->ArrayNum != (int)uVar21) {
        `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_*_const,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_98);
      }
      FVar24 = local_80;
      bVar8 = bVar9;
      bVar13 = bVar10;
      bVar11 = bVar12;
      if (FVar26 == FVar23) break;
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)FVar26;
      if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar6 = this->ParticlesB;
        pFVar27 = (pTVar6->AllocatorInstance).Data;
        iVar3 = pTVar6->ArrayNum;
        pFVar25 = pFVar27 + (longlong)iVar3 * 8;
        while( true ) {
          if (pTVar6->ArrayNum != iVar3) {
            `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_*_const,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_97);
          }
          FVar23 = local_90;
          if (pFVar27 == pFVar25) break;
          this_00 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar27;
          if (((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
              (pbVar17 = TGeometryParticlesImp<double,3,0>::HasCollision
                                   ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                                    (int)pTVar5->_padding_), *pbVar17 != false)) &&
             (pbVar17 = TGeometryParticlesImp<double,3,0>::HasCollision
                                  ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                                   (int)this_00->_padding_), *pbVar17 != false)) {
            pTVar18 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(pTVar5);
            pTVar19 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(this_00);
            this_01 = local_68.Allocator;
            lVar22 = 0;
            pTVar1 = &pTVar19->MMax;
            pTVar20 = pTVar1;
            do {
              dVar2 = *(double *)(((longlong)pTVar18 - (longlong)pTVar1) + (longlong)pTVar20);
              if ((*(double *)pTVar20 <= dVar2 && dVar2 != *(double *)pTVar20) ||
                 (*(double *)((longlong)pTVar18 + (0x18 - (longlong)pTVar1) + (longlong)pTVar20) <
                  *(double *)&((TAABB<double,3> *)(pTVar20 + -1))->MMin)) goto LAB_14829dc57;
              lVar22 = lVar22 + 1;
              pTVar20 = (TVector<double,3> *)&pTVar20->field_0x8;
            } while (lVar22 < 3);
            this_02 = Chaos::Private::FCollisionContextAllocator::FindMidPhaseImpl
                                (local_68.Allocator,pTVar5,this_00,pTVar5);
            if ((this_02 != (FParticlePairMidPhase *)0x0) ||
               (this_02 = Chaos::Private::FCollisionContextAllocator::CreateMidPhase
                                    (this_01,pTVar5,this_00,&local_68),
               this_02 != (FParticlePairMidPhase *)0x0)) {
              FParticlePairMidPhase::GenerateCollisions
                        (this_02,(local_68.Settings)->BoundsExpansion,param_1,&local_68);
            }
          }
LAB_14829dc57:
          pFVar27 = pFVar27 + 8;
        }
      }
      FVar26 = (FName)((longlong)FVar26 + 8);
      uVar21 = (ulonglong)local_res20[0];
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

