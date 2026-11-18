// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// operator() @ 1439c34c0

ECollisionVisitorResult __thiscall
`Chaos::FParticleSubSurfaceCollisionPruner::Prune'::__l2::<lambda_1>::operator()
          (void *this,FPBDCollisionConstraint *param_1)

{
  double *pdVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  ForElementType<Chaos::FManifoldPoint> FVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  EObjectStateType EVar11;
  uint uVar12;
  ECollisionVisitorResult EVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar18;
  ForElementType<Chaos::FManifoldPoint> FVar19;
  uint uVar20;
  longlong lVar21;
  TRigidTransform<double,3> *pTVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  longlong local_res10;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_130 [16];
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  undefined1 local_a8 [16];
  
  if ((*(byte *)&param_1->Flags >> 1 & 1) != 0) {
    return Continue;
  }
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)**(longlong **)this;
  pTVar3 = param_1->Particle[0];
  pTVar22 = param_1->ShapeWorldTransforms;
  pTVar18 = pTVar3;
  if (pTVar3 == pTVar2) {
    pTVar22 = param_1->ShapeWorldTransforms + 1;
    pTVar18 = param_1->Particle[1];
  }
  pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&pTVar18->_padding_ + 4) != '\0') {
    pTVar14 = pTVar18;
  }
  if (pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
      this_00 = pTVar14;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar11 = Kinematic;
    }
    else {
      EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    if (EVar11 == Dynamic) {
      return Continue;
    }
  }
  pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&pTVar18->_padding_ + 4) != '\0') {
    pTVar14 = pTVar18;
  }
  if (pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
      pTVar18 = pTVar14;
    }
    if (pTVar18 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar11 = Kinematic;
    }
    else {
      EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    }
    if (EVar11 == Sleeping) {
      return Continue;
    }
  }
  uVar20 = 0;
  if (0 < (param_1->ManifoldPoints).ArrayNum) {
    lVar21 = 0;
    bVar24 = pTVar3 == pTVar2;
    if (bVar24) {
      lVar21 = 0xc;
    }
    lVar15 = 4;
    if (bVar24) {
      lVar15 = 0x10;
    }
    lVar16 = 8;
    if (bVar24) {
      lVar16 = 0x14;
    }
    local_res10 = 0;
    lVar23 = 400;
    if (bVar24) {
      lVar23 = 0x1f0;
    }
    do {
      uVar12 = 0;
      if ((int)uVar20 < (param_1->ManifoldPoints).ArrayNum) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar5 = (code *)swi(3);
        EVar13 = (*pcVar5)();
        return EVar13;
      }
      auVar40 = *(undefined1 (*) [16])&pTVar22->field_0x10;
      dVar29 = auVar40._0_8_;
      FVar4 = (param_1->ManifoldPoints).AllocatorInstance.SecondaryData;
      dVar7 = *(double *)&pTVar22->field_0x18;
      FVar19 = (ForElementType<Chaos::FManifoldPoint>)&param_1->ManifoldPoints;
      if (FVar4 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar19 = FVar4;
      }
      lVar17 = local_res10 + (longlong)FVar19;
      local_e8 = (double)*(float *)(lVar17 + lVar16);
      dStack_f0 = (double)*(float *)(lVar15 + lVar17);
      auVar25 = *(undefined1 (*) [16])pTVar22;
      auVar33 = blendpd(auVar25,auVar40,2);
      local_f8 = (double)*(float *)(lVar21 + lVar17);
      auVar37 = *(undefined1 (*) [16])pTVar22;
      auVar48._8_4_ = SUB84(dStack_f0,0);
      auVar48._0_8_ = local_f8;
      uVar43 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
      auVar48._12_4_ = uVar43;
      auVar49._0_8_ = auVar48._8_8_ * auVar25._0_8_ - auVar25._8_8_ * local_f8;
      auVar49._8_8_ = local_e8 * auVar25._8_8_ - dVar29 * dStack_f0;
      auVar35._8_4_ = SUB84(dStack_f0,0);
      auVar35._0_8_ = local_f8;
      auVar35._12_4_ = uVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = local_e8;
      auVar25 = blendpd(auVar35,auVar25,2);
      auVar26._0_8_ = auVar25._0_8_ * dVar29 - auVar33._0_8_ * local_e8;
      auVar26._8_8_ = auVar25._8_8_ * auVar40._8_8_ - auVar33._8_8_ * 0.0;
      auVar25 = blendpd(auVar49,auVar26,2);
      auVar50._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar50._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      dVar6 = auVar49._8_8_ + auVar49._8_8_;
      dVar8 = auVar26._0_8_ + auVar26._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar38._8_4_ = SUB84(dVar8,0);
      auVar38._0_8_ = dVar6;
      auVar38._12_4_ = uVar43;
      auVar34._8_4_ = SUB84(dVar8,0);
      auVar34._0_8_ = dVar6;
      auVar34._12_4_ = uVar43;
      auVar35 = blendpd(auVar34,auVar50,2);
      auVar39._0_8_ = auVar38._8_8_ * auVar37._0_8_ - auVar37._8_8_ * dVar6;
      auVar39._8_8_ = auVar50._0_8_ * auVar37._8_8_ - dVar29 * dVar8;
      auVar37 = blendpd(auVar37,auVar40,2);
      auVar25 = *(undefined1 (*) [16])&param_1->ShapeWorldTransforms[1].field_0x10;
      dVar30 = auVar25._0_8_;
      auVar33._8_4_ = SUB84(auVar39._8_8_,0);
      auVar33._0_8_ = auVar39._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      dVar9 = (double)(float)*(undefined8 *)(lVar17 + 0x18);
      dVar10 = (double)(float)((ulonglong)*(undefined8 *)(lVar17 + 0x18) >> 0x20);
      uVar51 = SUB84(dVar10,0);
      uVar52 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar36._0_8_ = auVar35._0_8_ * dVar29 - auVar37._0_8_ * auVar50._0_8_;
      auVar36._8_8_ = auVar35._8_8_ * auVar40._8_8_ - auVar37._8_8_ * auVar50._8_8_;
      local_c8._8_4_ = uVar51;
      local_c8._0_8_ = dVar9;
      local_c8._12_4_ = uVar52;
      auVar45._8_4_ = uVar51;
      auVar45._0_8_ = dVar9;
      auVar45._12_4_ = uVar52;
      pdVar1 = (double *)((longlong)param_1->CollisionMargins + lVar23 + -0x18);
      dVar29 = dVar6 * dVar7 + local_f8 + auVar33._8_8_ + *pdVar1;
      dVar6 = dVar8 * dVar7 + dStack_f0 + auVar36._0_8_ + pdVar1[1];
      uVar43 = SUB84(dVar6,0);
      uVar44 = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_b8 = (double)*(float *)(lVar17 + 0x20);
      auVar40 = blendpd(auVar39,auVar36,2);
      local_120 = auVar50._0_8_ * dVar7 + local_e8 + auVar40._0_8_ +
                  *(double *)((longlong)param_1->CollisionMargins + lVar23 + -8);
      local_a8 = *(undefined1 (*) [16])(param_1->ShapeWorldTransforms + 1);
      dVar6 = *(double *)&param_1->ShapeWorldTransforms[1].field_0x18;
      local_e0._8_4_ = uVar43;
      local_e0._0_8_ = dVar29;
      local_e0._12_4_ = uVar44;
      local_130._8_4_ = uVar43;
      local_130._0_8_ = dVar29;
      local_130._12_4_ = uVar44;
      auVar40 = *(undefined1 (*) [16])(param_1->ShapeWorldTransforms + 1);
      auVar35 = blendpd(local_a8,auVar25,2);
      auVar46._0_8_ = auVar45._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar9;
      auVar46._8_8_ = local_b8 * local_a8._8_8_ - dVar30 * dVar10;
      auVar27._8_4_ = uVar51;
      auVar27._0_8_ = dVar9;
      auVar27._12_4_ = uVar52;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = local_b8;
      auVar37 = blendpd(auVar27,auVar37,2);
      auVar28._0_8_ = auVar37._0_8_ * dVar30 - auVar35._0_8_ * local_b8;
      auVar28._8_8_ = auVar37._8_8_ * auVar25._8_8_ - auVar35._8_8_ * 0.0;
      auVar37 = blendpd(auVar46,auVar28,2);
      dVar7 = auVar46._8_8_ + auVar46._8_8_;
      dVar29 = auVar28._0_8_ + auVar28._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar47._0_8_ = auVar37._0_8_ + auVar37._0_8_;
      auVar47._8_8_ = auVar37._8_8_ + auVar37._8_8_;
      auVar41._8_4_ = SUB84(dVar29,0);
      auVar41._0_8_ = dVar7;
      auVar41._12_4_ = uVar43;
      auVar31._8_4_ = SUB84(dVar29,0);
      auVar31._0_8_ = dVar7;
      auVar31._12_4_ = uVar43;
      auVar37 = blendpd(auVar31,auVar47,2);
      auVar42._0_8_ = auVar41._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar7;
      auVar42._8_8_ = auVar47._0_8_ * auVar40._8_8_ - dVar30 * dVar29;
      auVar35 = blendpd(auVar40,auVar25,2);
      auVar40._8_4_ = SUB84(auVar42._8_8_,0);
      auVar40._0_8_ = auVar42._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      auVar32._0_8_ = auVar37._0_8_ * dVar30 - auVar35._0_8_ * auVar47._0_8_;
      auVar32._8_8_ = auVar37._8_8_ * auVar25._8_8_ - auVar35._8_8_ * auVar47._8_8_;
      dVar7 = dVar7 * dVar6 + dVar9 + auVar40._8_8_;
      dVar29 = dVar29 * dVar6 + dVar10 + auVar32._0_8_;
      uVar43 = SUB84(dVar29,0);
      uVar44 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar40 = blendpd(auVar42,auVar32,2);
      local_138 = auVar47._0_8_ * dVar6 + local_b8 + auVar40._0_8_;
      local_118._8_4_ = uVar43;
      local_118._0_8_ = dVar7;
      local_118._12_4_ = uVar44;
      local_148._8_4_ = uVar43;
      local_148._0_8_ = dVar7;
      local_148._12_4_ = uVar44;
      local_108 = local_138;
      local_d0 = local_120;
      Chaos::FContactGroupContainer::Add
                (*(FContactGroupContainer **)((longlong)this + 8),param_1,uVar20,
                 (TVector<double,3> *)local_130,(TVector<double,3> *)local_148);
      local_res10 = local_res10 + 0x6c;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (param_1->ManifoldPoints).ArrayNum);
  }
  return Continue;
}

// Prune @ 1439d9ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall
Chaos::FParticleSubSurfaceCollisionPruner::Prune
          (FParticleSubSurfaceCollisionPruner *this,TVector<double,3> *param_1)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  ECollisionVisitorResult EVar9;
  bool *pbVar10;
  TAABB<double,3> *pTVar11;
  FParticleCollisions *pFVar12;
  ulonglong uVar13;
  ForElementType<Chaos::FContactGroup> FVar14;
  ForElementType<Chaos::FContactGroup> FVar15;
  uint uVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8;
  undefined1 local_1f7;
  FIdentityFunctor local_1f6 [2];
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  ForElementType<Chaos::FContactGroup> local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  ForElementType<Chaos::FContactGroup> local_1c8;
  <lambda_1> local_1c0;
  FContactGroupContainer local_1b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  dVar5 = (double)Chaos_Collision_EdgePrunePlaneDistance;
  pbVar10 = TGeometryParticlesImp<double,3,0>::HasBounds
                      ((TGeometryParticlesImp<double,3,0> *)this->Particle->_padding_,
                       (int)this->Particle->_padding_);
  dVar4 = __real_3ff0000000000000;
  if (*pbVar10 != false) {
    pTVar11 = TGeometryParticleHandleImp<double,3,1>::LocalBounds(this->Particle);
    dVar25 = *(double *)&(pTVar11->MMax).field_0x8 - *(double *)&(pTVar11->MMin).field_0x8;
    dVar4 = *(double *)&pTVar11->MMax - *(double *)&pTVar11->MMin;
    dVar24 = *(double *)&(pTVar11->MMax).field_0x10 - *(double *)&(pTVar11->MMin).field_0x10;
    if (((dVar25 <= dVar4) || (dVar24 <= dVar4)) && (dVar4 = dVar24, dVar25 <= dVar24)) {
      dVar4 = dVar25;
    }
  }
  local_1b0.UpVector._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_1b0.ContactGroups.AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FContactGroup>)0x0;
  local_1b0.UpVector._0_8_ = *(undefined8 *)param_1;
  local_1b0.UpVector._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_1b0.ContactGroups.ArrayNum = 0;
  local_1b0.ContactGroups.ArrayMax = 4;
  dVar4 = dVar5 * dVar4 * __real_3f847ae147ae147b;
  pFVar12 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                      ((TGeometryParticlesImp<double,3,0> *)this->Particle->_padding_,
                       (int)this->Particle->_padding_);
  uVar16 = 0;
  local_1c0.ContactGroupContainer = &local_1b0;
  iVar22 = (pFVar12->MidPhases).ArrayNum;
  local_1c0.__this = this;
  if (0 < iVar22) {
    lVar19 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar16 < iVar22) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_200 = (longlong)iVar22;
        local_208 = (longlong)(int)uVar16;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      EVar9 = FParticlePairMidPhase::
              VisitCollisions<_Chaos::FParticleSubSurfaceCollisionPruner::Prune_::__l2::<lambda_1>_>
                        (*(FParticlePairMidPhase **)
                          ((pFVar12->MidPhases).AllocatorInstance.Data + lVar19 + 8),&local_1c0,
                         VisitDefault);
      if (EVar9 == Stop) break;
      iVar22 = (pFVar12->MidPhases).ArrayNum;
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0x10;
    } while ((int)uVar16 < iVar22);
  }
  FVar15 = (ForElementType<Chaos::FContactGroup>)&local_1b0;
  if (local_1b0.ContactGroups.AllocatorInstance.SecondaryData !=
      (ForElementType<Chaos::FContactGroup>)0x0) {
    FVar15 = local_1b0.ContactGroups.AllocatorInstance.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<Chaos::FContactGroup,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FContactGroup,_Chaos::FContactGroupContainer::SortContactGroups_::__l2::<lambda_1>_>_>
            ((FContactGroup *)FVar15,local_1b0.ContactGroups.ArrayNum,local_1f6[0],
             (<lambda_1> *)local_1f6);
  local_1f0 = 0;
  iVar22 = local_1b0.ContactGroups.ArrayNum;
  if (0 < local_1b0.ContactGroups.ArrayNum) {
    local_1d8 = 0;
    do {
      lVar19 = local_1d8;
      uVar16 = 0;
      if ((int)local_1f0 < iVar22) {
        uVar16 = ~local_1f0 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_208 = (longlong)(int)local_1f0;
        local_200 = (longlong)iVar22;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        iVar22 = local_1b0.ContactGroups.ArrayNum;
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar15 = (ForElementType<Chaos::FContactGroup>)&local_1b0;
      if (local_1b0.ContactGroups.AllocatorInstance.SecondaryData !=
          (ForElementType<Chaos::FContactGroup>)0x0) {
        FVar15 = local_1b0.ContactGroups.AllocatorInstance.SecondaryData;
      }
      local_1c8 = FVar15;
      if ((((bool *)((longlong)FVar15 + 0x48))[lVar19] != false) &&
         (local_1f4 = local_1f0 + 1, (int)local_1f4 < iVar22)) {
        lVar23 = lVar19 + 0x50;
LAB_1439d9d63:
        uVar16 = 0;
        if ((int)local_1f4 < iVar22) {
          uVar16 = ~local_1f4 >> 0x1f;
        }
        local_1e0 = lVar23;
        if (uVar16 == 0) {
          local_208 = (longlong)(int)local_1f4;
          local_200 = (longlong)iVar22;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar22 = local_1b0.ContactGroups.ArrayNum;
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar14 = (ForElementType<Chaos::FContactGroup>)&local_1b0;
        if (local_1b0.ContactGroups.AllocatorInstance.SecondaryData !=
            (ForElementType<Chaos::FContactGroup>)0x0) {
          FVar14 = local_1b0.ContactGroups.AllocatorInstance.SecondaryData;
        }
        local_1e8 = FVar14;
        if (((bool *)((longlong)FVar14 + 0x48))[lVar23] != false) {
          lVar20 = *(longlong *)((longlong)FVar14 + lVar23);
          iVar2 = *(int *)((longlong)((longlong)FVar14 + 8) + lVar23);
          lVar18 = (longlong)iVar2 * 0x40 + lVar20;
          pdVar17 = (double *)(lVar20 + 0x30);
          while( true ) {
            if (*(int *)((longlong)((longlong)FVar14 + 8) + lVar23) != iVar2) {
              local_1f8 = 0;
              `TCheckedPointerIterator<Chaos::FContactGroupManifoldPoint,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_1f8);
              FVar14 = local_1e8;
            }
            if (lVar20 == lVar18) {
              local_1ec = *(uint *)((longlong)((longlong)FVar14 + 8) + lVar23);
              uVar13 = (ulonglong)(int)local_1ec;
              plVar21 = *(longlong **)((longlong)FVar14 + lVar23);
              local_1d0 = plVar21 + uVar13 * 8;
              goto LAB_1439d9e83;
            }
            iVar22 = local_1b0.ContactGroups.ArrayNum;
            if (dVar4 < (*pdVar17 - *(double *)((uchar *)((longlong)FVar15 + 0x18) + lVar19)) *
                        *(double *)((uchar *)((longlong)FVar15 + 0x30) + lVar19) +
                        (pdVar17[-1] -
                        *(double *)
                         (&((TVector<double,3> *)((longlong)FVar15 + 0x10))->field_0x0 + lVar19)) *
                        *(double *)
                         (&((TVector<double,3> *)((longlong)FVar15 + 0x28))->field_0x0 + lVar19) +
                        (pdVar17[1] - *(double *)((uchar *)((longlong)FVar15 + 0x20) + lVar19)) *
                        *(double *)((uchar *)((longlong)FVar15 + 0x38) + lVar19)) break;
            lVar20 = lVar20 + 0x40;
            pdVar17 = pdVar17 + 8;
          }
        }
        goto LAB_1439d9ffa;
      }
LAB_1439da019:
      local_1f0 = local_1f0 + 1;
      local_1d8 = lVar19 + 0x50;
    } while ((int)local_1f0 < iVar22);
  }
  FVar15 = (ForElementType<Chaos::FContactGroup>)&local_1b0;
  if (local_1b0.ContactGroups.AllocatorInstance.SecondaryData !=
      (ForElementType<Chaos::FContactGroup>)0x0) {
    FVar15 = local_1b0.ContactGroups.AllocatorInstance.SecondaryData;
  }
  DestructItems<Chaos::FContactGroup,int>((FContactGroup *)FVar15,iVar22);
  if (local_1b0.ContactGroups.AllocatorInstance.SecondaryData !=
      (ForElementType<Chaos::FContactGroup>)0x0) {
    FMemory::Free((void *)local_1b0.ContactGroups.AllocatorInstance.SecondaryData);
  }
  return;
LAB_1439d9e83:
  plVar6 = local_1d0;
  if (*(int *)((longlong)((longlong)FVar14 + 8) + lVar23) != (int)uVar13) {
    local_1f7 = 0;
    `TCheckedPointerIterator<Chaos::FContactGroupManifoldPoint,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(&local_1f7);
    FVar14 = local_1e8;
  }
  if (plVar21 == plVar6) goto LAB_1439d9fdf;
  uVar16 = *(uint *)(plVar21 + 1);
  lVar19 = *plVar21;
  uVar8 = 0;
  if ((int)uVar16 < *(int *)(lVar19 + 0x5b0)) {
    uVar8 = ~uVar16 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_208 = (longlong)(int)uVar16, local_200 = (longlong)*(int *)(lVar19 + 0x5b0),
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar23 = *(longlong *)(lVar19 + 0x5a8);
  lVar20 = lVar19 + 0x3f8;
  if (lVar23 != 0) {
    lVar20 = lVar23;
  }
  iVar22 = 0;
  pbVar1 = (byte *)((longlong)(int)uVar16 * 0x6c + 0x30 + lVar20);
  *pbVar1 = *pbVar1 | 1;
  if (((*(byte *)(lVar19 + 0x374) >> 1 & 1) == 0) && (uVar16 = 0, 0 < *(int *)(lVar19 + 0x5b0))) {
    lVar23 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar16 < *(int *)(lVar19 + 0x5b0)) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_208 = (longlong)(int)uVar16;
        local_200 = (longlong)*(int *)(lVar19 + 0x5b0);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar20 = *(longlong *)(lVar19 + 0x5a8);
      lVar18 = lVar19 + 0x3f8;
      if (lVar20 != 0) {
        lVar18 = lVar20;
      }
      if ((*(byte *)(lVar23 + 0x30 + lVar18) & 1) == 0) {
        iVar22 = iVar22 + 1;
      }
      uVar16 = uVar16 + 1;
      lVar23 = lVar23 + 0x6c;
    } while ((int)uVar16 < *(int *)(lVar19 + 0x5b0));
    if (iVar22 == 0) goto LAB_1439d9fbb;
  }
  else {
LAB_1439d9fbb:
    *(ushort *)(lVar19 + 0x374) = *(ushort *)(lVar19 + 0x374) | 2;
  }
  plVar21 = plVar21 + 8;
  uVar13 = (ulonglong)local_1ec;
  FVar14 = local_1e8;
  lVar23 = local_1e0;
  goto LAB_1439d9e83;
LAB_1439d9fdf:
  ((bool *)((longlong)FVar14 + 0x48))[lVar23] = false;
  FVar15 = local_1c8;
  lVar19 = local_1d8;
  iVar22 = local_1b0.ContactGroups.ArrayNum;
LAB_1439d9ffa:
  local_1f4 = local_1f4 + 1;
  lVar23 = lVar23 + 0x50;
  local_1e0 = lVar23;
  if (iVar22 <= (int)local_1f4) goto LAB_1439da019;
  goto LAB_1439d9d63;
}

