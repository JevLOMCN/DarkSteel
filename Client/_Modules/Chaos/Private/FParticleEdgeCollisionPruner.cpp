// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// operator() @ 1439c2fe0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

ECollisionVisitorResult __thiscall
`Chaos::FParticleEdgeCollisionPruner::Prune'::__l2::<lambda_1>::operator()
          (void *this,FPBDCollisionConstraint *param_1)

{
  double *pdVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  ECollisionVisitorResult EVar12;
  uint uVar13;
  FImplicitObject *this_00;
  int iVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ForElementType<Chaos::FManifoldPoint> FVar18;
  ulonglong uVar19;
  ForElementType<Chaos::FManifoldPoint> FVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_d0 [16];
  double local_c0;
  undefined1 local_b8 [16];
  double local_a8;
  <lambda_1> local_98 [3];
  
  if ((*(byte *)&param_1->Flags >> 1 & 1) != 0) {
    return Continue;
  }
  pTVar2 = param_1->Particle[0];
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)**(longlong **)this;
  uVar19 = (ulonglong)(pTVar2 == pTVar3);
  this_00 = Chaos::FPBDCollisionConstraint::GetImplicit(param_1,(uint)(pTVar2 == pTVar3));
  bVar11 = Chaos::FImplicitObject::IsUnderlyingMesh(this_00);
  if (!bVar11) {
    iVar14 = (param_1->ManifoldPoints).ArrayNum;
    FVar18 = (param_1->ManifoldPoints).AllocatorInstance.SecondaryData;
    if (FVar18 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar18 = (ForElementType<Chaos::FManifoldPoint>)&param_1->ManifoldPoints;
    }
    if ((iVar14 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      EVar12 = (*pcVar5)();
      return EVar12;
    }
    FVar20 = (ForElementType<Chaos::FManifoldPoint>)((longlong)iVar14 * 0x6c + (longlong)FVar18);
    for (; FVar18 != FVar20;
        FVar18 = (ForElementType<Chaos::FManifoldPoint>)((longlong)FVar18 + 0x6c)) {
      if (*(uchar *)((longlong)FVar18 + 0x2c) == '\x02') {
        lVar15 = 0x170;
        if (pTVar2 == pTVar3) {
          lVar15 = 0x1d0;
        }
        pauVar16 = (undefined1 (*) [16])((longlong)param_1->CollisionMargins + lVar15 + -0x18);
        plVar4 = *(longlong **)((longlong)this + 8);
        lVar15 = 400;
        auVar30 = pauVar16[1];
        if (pTVar2 == pTVar3) {
          lVar15 = 0x1f0;
        }
        uVar17 = 0;
        dVar10 = *(double *)(pauVar16[1] + 8);
        local_c0 = (double)*(float *)((uchar *)((longlong)FVar18 + 8) + uVar19 * 0xc);
        dVar27 = (double)*(float *)((uchar *)((longlong)FVar18 + 4) + uVar19 * 0xc);
        auVar21 = *pauVar16;
        auVar23 = blendpd(auVar21,auVar30,2);
        dVar9 = (double)*(float *)((longlong)FVar18 + uVar19 * 0xc);
        auVar25 = *pauVar16;
        uVar31 = SUB84(dVar27,0);
        uVar32 = (undefined4)((ulonglong)dVar27 >> 0x20);
        auVar33._8_4_ = uVar31;
        auVar33._0_8_ = dVar9;
        auVar33._12_4_ = uVar32;
        dVar7 = auVar30._0_8_;
        local_d0._8_4_ = uVar31;
        local_d0._0_8_ = dVar9;
        local_d0._12_4_ = uVar32;
        auVar34._0_8_ = auVar33._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar9;
        auVar34._8_8_ = local_c0 * auVar21._8_8_ - dVar7 * dVar27;
        auVar26._8_4_ = uVar31;
        auVar26._0_8_ = dVar9;
        auVar26._12_4_ = uVar32;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = local_c0;
        auVar21 = blendpd(auVar26,auVar21,2);
        auVar22._0_8_ = auVar21._0_8_ * dVar7 - auVar23._0_8_ * local_c0;
        auVar22._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar23._8_8_ * 0.0;
        auVar21 = blendpd(auVar34,auVar22,2);
        dVar6 = auVar34._8_8_ + auVar34._8_8_;
        dVar8 = auVar22._0_8_ + auVar22._0_8_;
        uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
        auVar35._0_8_ = auVar21._0_8_ + auVar21._0_8_;
        auVar35._8_8_ = auVar21._8_8_ + auVar21._8_8_;
        auVar28._8_4_ = SUB84(dVar8,0);
        auVar28._0_8_ = dVar6;
        auVar28._12_4_ = uVar31;
        auVar24._8_4_ = SUB84(dVar8,0);
        auVar24._0_8_ = dVar6;
        auVar24._12_4_ = uVar31;
        auVar21 = blendpd(auVar24,auVar35,2);
        auVar29._0_8_ = auVar28._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar6;
        auVar29._8_8_ = auVar35._0_8_ * auVar25._8_8_ - dVar7 * dVar8;
        auVar23._8_4_ = SUB84(auVar29._8_8_,0);
        auVar23._0_8_ = auVar29._0_8_;
        auVar23._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
        auVar26 = blendpd(auVar25,auVar30,2);
        auVar25._0_8_ = auVar21._0_8_ * dVar7 - auVar26._0_8_ * auVar35._0_8_;
        auVar25._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar26._8_8_ * auVar35._8_8_;
        local_98[0].EdgePlaneTolerance = *(double *)((longlong)this + 0x10);
        pdVar1 = (double *)((longlong)param_1->CollisionMargins + lVar15 + -0x18);
        dVar7 = dVar6 * dVar10 + dVar9 + auVar23._8_8_ + *pdVar1;
        dVar6 = dVar8 * dVar10 + dVar27 + auVar25._0_8_ + pdVar1[1];
        uVar31 = SUB84(dVar6,0);
        uVar32 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar30 = blendpd(auVar29,auVar25,2);
        local_e8._8_4_ = uVar31;
        local_e8._0_8_ = dVar7;
        local_e8._12_4_ = uVar32;
        local_d8 = auVar35._0_8_ * dVar10 + local_c0 + auVar30._0_8_ +
                   *(double *)((longlong)param_1->CollisionMargins + lVar15 + -8);
        local_98[0].EdgeCollision = param_1;
        local_98[0].__this = (FParticleEdgeCollisionPruner *)*(undefined8 *)this;
        local_98[0].EdgePos = (TVector<double,3> *)local_e8;
        iVar14 = (int)plVar4[1];
        local_b8._8_4_ = uVar31;
        local_b8._0_8_ = dVar7;
        local_b8._12_4_ = uVar32;
        if (0 < iVar14) {
          lVar15 = 0;
          local_a8 = local_d8;
          do {
            uVar13 = 0;
            if ((int)uVar17 < iVar14) {
              uVar13 = ~uVar17 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              EVar12 = (*pcVar5)();
              return EVar12;
            }
            EVar12 = Chaos::FParticlePairMidPhase::
                     VisitConstCollisions<__Chaos::FParticleEdgeCollisionPruner::Prune_::__l2::<lambda_1>::operator()_::__l15::<lambda_1>_>
                               (*(FParticlePairMidPhase **)(lVar15 + 8 + *plVar4),local_98,
                                VisitDefault);
            if (EVar12 == Stop) {
              return Continue;
            }
            iVar14 = (int)plVar4[1];
            uVar17 = uVar17 + 1;
            lVar15 = lVar15 + 0x10;
          } while ((int)uVar17 < iVar14);
        }
      }
    }
  }
  return Continue;
}

// Prune @ 1439d98b0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall Chaos::FParticleEdgeCollisionPruner::Prune(FParticleEdgeCollisionPruner *this)

{
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  ECollisionVisitorResult EVar6;
  bool *pbVar7;
  TAABB<double,3> *pTVar8;
  FParticleCollisions *pFVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  <lambda_1> local_48 [2];
  
  this_00 = this->Particle;
  dVar3 = (double)Chaos_Collision_EdgePrunePlaneDistance;
  pbVar7 = TGeometryParticlesImp<double,3,0>::HasBounds
                     ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                      (int)this_00->_padding_);
  dVar2 = __real_3ff0000000000000;
  if (*pbVar7 != false) {
    pTVar8 = TGeometryParticleHandleImp<double,3,1>::LocalBounds(this_00);
    dVar14 = *(double *)&(pTVar8->MMax).field_0x8 - *(double *)&(pTVar8->MMin).field_0x8;
    dVar2 = *(double *)&pTVar8->MMax - *(double *)&pTVar8->MMin;
    dVar13 = *(double *)&(pTVar8->MMax).field_0x10 - *(double *)&(pTVar8->MMin).field_0x10;
    if (((dVar14 <= dVar2) || (dVar13 <= dVar2)) && (dVar2 = dVar13, dVar14 <= dVar13)) {
      dVar2 = dVar14;
    }
  }
  pFVar9 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)this->Particle->_padding_,
                      (int)this->Particle->_padding_);
  uVar11 = 0;
  iVar10 = (pFVar9->MidPhases).ArrayNum;
  local_48[0].EdgePlaneTolerance = dVar3 * dVar2 * __real_3f847ae147ae147b;
  if (0 < iVar10) {
    lVar12 = 0;
    local_48[0].__this = this;
    local_48[0].ParticleCollisions = pFVar9;
    do {
      uVar5 = 0;
      if ((int)uVar11 < iVar10) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EVar6 = FParticlePairMidPhase::
              VisitCollisions<_Chaos::FParticleEdgeCollisionPruner::Prune_::__l2::<lambda_1>_>
                        (*(FParticlePairMidPhase **)
                          ((pFVar9->MidPhases).AllocatorInstance.Data + lVar12 + 8),local_48,
                         VisitDefault);
      if (EVar6 == Stop) {
        return;
      }
      iVar10 = (pFVar9->MidPhases).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < iVar10);
  }
  return;
}

