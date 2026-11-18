// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FSphereApproximationParticlePairMidPhase @ 1439c0c50

FSphereApproximationParticlePairMidPhase * __thiscall
Chaos::FSphereApproximationParticlePairMidPhase::FSphereApproximationParticlePairMidPhase
          (FSphereApproximationParticlePairMidPhase *this)

{
  TVector<double,3> local_38 [2];
  
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FSphereApproximationParticlePairMidPhase_Chaos__6B_;
  *(undefined1 *)&this->_padding_ = 2;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = -1;
  local_38[0]._16_8_ = 0;
  local_38[0]._0_8_ = 0;
  local_38[0]._8_8_ = 0;
  TSphere<double,3>::TSphere<double,3>(&this->Sphere0,local_38,0.0);
  local_38[0]._16_8_ = 0;
  local_38[0]._0_8_ = 0;
  local_38[0]._8_8_ = 0;
  TSphere<double,3>::TSphere<double,3>(&this->Sphere1,local_38,0.0);
  this->SphereShape0 = (FShapeInstance *)0x0;
  this->SphereShape1 = (FShapeInstance *)0x0;
  (this->Constraint)._padding_ = 0;
  (this->Constraint).Ptr = (FPBDCollisionConstraint *)0x0;
  this->LastUsedEpoch = -1;
  this->bHasSpheres = false;
  return this;
}

// BuildDetectorsImpl @ 1439c6cd0

void __thiscall
Chaos::FSphereApproximationParticlePairMidPhase::BuildDetectorsImpl
          (FSphereApproximationParticlePairMidPhase *this)

{
  undefined8 *puVar1;
  FShapeInstance *this_00;
  FShapeInstance *this_01;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  bool *pbVar10;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar11;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar12;
  FImplicitObject *pFVar13;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint local_res10;
  longlong local_68;
  FGenericParticleHandleImp local_60;
  FGenericParticleHandleImp local_58;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> local_50
  ;
  
  puVar1 = (undefined8 *)this->_padding_;
  if ((((puVar1 != (undefined8 *)0x0) && (this->_padding_ != 0)) &&
      (pbVar10 = TGeometryParticlesImp<double,3,0>::HasBounds
                           ((TGeometryParticlesImp<double,3,0> *)*puVar1,*(int *)(puVar1 + 1)),
      *pbVar10 != false)) &&
     (pbVar10 = TGeometryParticlesImp<double,3,0>::HasBounds
                          (*(TGeometryParticlesImp<double,3,0> **)this->_padding_,
                           *(int *)((undefined8 *)this->_padding_ + 1)), *pbVar10 != false)) {
    FVar11 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
              )TGeometryParticleHandleImp<double,3,1>::ShapeInstances
                         ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_);
    local_50 = FVar11;
    FVar12 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
              )TGeometryParticleHandleImp<double,3,1>::ShapeInstances
                         ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_);
    iVar15 = *(int *)((longlong)FVar11 + 0x10);
    if ((iVar15 != 0) && (*(int *)((longlong)FVar12 + 0x10) != 0)) {
      bVar6 = false;
      bVar4 = false;
      local_res10 = 0;
      if (0 < iVar15) {
        local_68 = 0;
        do {
          uVar17 = 0;
          if ((int)local_res10 < iVar15) {
            uVar17 = ~local_res10 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6 = bVar4, bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar15 = *(int *)((longlong)FVar12 + 0x10);
          if (*(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                *)((longlong)FVar11 + 8) !=
              (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
               )0x0) {
            FVar11 = *(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                       *)((longlong)FVar11 + 8);
          }
          this_00 = *(FShapeInstance **)(local_68 + (longlong)FVar11);
          uVar17 = 0;
          if (0 < iVar15) {
            lVar16 = 0;
            do {
              uVar9 = 0;
              if ((int)uVar17 < iVar15) {
                uVar9 = ~uVar17 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar11 = FVar12;
              if (*(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                    *)((longlong)FVar12 + 8) !=
                  (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                   )0x0) {
                FVar11 = *(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                           *)((longlong)FVar12 + 8);
              }
              this_01 = *(FShapeInstance **)((longlong)FVar11 + lVar16);
              pFVar13 = FShapeInstance::GetLeafGeometry(this_00);
              pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)this->_padding_;
              if (pFVar13 == (FImplicitObject *)0x0) {
                bVar7 = 7;
LAB_1439c6ecc:
                local_60.MHandle = pTVar2;
                pTVar14 = FGenericParticleHandleImp::CollisionParticles(&local_60);
                if ((pTVar14->Ptr == (FBVHParticles *)0x0) || ((int)pTVar14->Ptr->_padding_ == 0)) {
                  if (pFVar13 == (FImplicitObject *)0x0) {
                    bVar7 = 7;
                  }
                  else {
                    bVar7 = FImplicitObject::GetType(pFVar13);
                    bVar7 = bVar7 & 0x1f;
                  }
                }
              }
              else {
                bVar7 = FImplicitObject::GetCollisionType(pFVar13);
                bVar7 = bVar7 & 0x1f;
                if ((byte)(bVar7 - 6) < 2) goto LAB_1439c6ecc;
              }
              pFVar13 = FShapeInstance::GetLeafGeometry(this_01);
              pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)this->_padding_;
              if (pFVar13 == (FImplicitObject *)0x0) {
                bVar8 = 7;
LAB_1439c6f30:
                local_58.MHandle = pTVar2;
                pTVar14 = FGenericParticleHandleImp::CollisionParticles(&local_58);
                if ((pTVar14->Ptr == (FBVHParticles *)0x0) || ((int)pTVar14->Ptr->_padding_ == 0)) {
                  if (pFVar13 == (FImplicitObject *)0x0) {
                    bVar8 = 7;
                  }
                  else {
                    bVar8 = FImplicitObject::GetType(pFVar13);
                    bVar8 = bVar8 & 0x1f;
                  }
                }
              }
              else {
                bVar8 = FImplicitObject::GetCollisionType(pFVar13);
                bVar8 = bVar8 & 0x1f;
                if ((byte)(bVar8 - 6) < 2) goto LAB_1439c6f30;
              }
              if (this->SphereShape0 == (FShapeInstance *)0x0) {
                this->SphereShape0 = this_00;
                this->SphereShape1 = this_01;
              }
              bVar6 = DoCollide(bVar7,(FPerShapeData *)this_00,bVar8,(FPerShapeData *)this_01);
              if (bVar6) {
                bVar4 = true;
                bVar6 = bVar4;
                break;
              }
              iVar15 = *(int *)((longlong)FVar12 + 0x10);
              uVar17 = uVar17 + 1;
              lVar16 = lVar16 + 8;
              bVar6 = bVar4;
            } while ((int)uVar17 < iVar15);
          }
          local_res10 = local_res10 + 1;
          local_68 = local_68 + 8;
          iVar15 = *(int *)((longlong)local_50 + 0x10);
          FVar11 = local_50;
        } while ((int)local_res10 < iVar15);
        if (bVar6) {
          InitSphere((TGeometryParticleHandleImp<double,3,1> *)this->_padding_,&this->Sphere0);
          InitSphere((TGeometryParticleHandleImp<double,3,1> *)this->_padding_,&this->Sphere1);
          this->bHasSpheres = true;
        }
      }
    }
  }
  return;
}

// GenerateCollisionsImpl @ 1439d1c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
Chaos::FSphereApproximationParticlePairMidPhase::GenerateCollisionsImpl
          (FSphereApproximationParticlePairMidPhase *this,float param_1,float param_2,
          TVector<float,3> *param_3,FCollisionContext *param_4)

{
  TVector<double,3> *pTVar1;
  undefined1 *puVar2;
  FFlags *pFVar3;
  int iVar4;
  FPBDCollisionConstraint *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  FCollisionShapePairKey_u_0 FVar10;
  bool bVar11;
  int iVar12;
  TAABB<double,3> *pTVar13;
  TAABB<double,3> *pTVar14;
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  *pTVar15;
  FCollisionSortKeyNonHashed *pFVar16;
  TArrayView<Chaos::FManifoldPoint,int> *pTVar17;
  TVector<double,3> *pTVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar38;
  undefined4 uVar39;
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStackY_458 [32];
  FGenericParticleHandleImp local_3d8;
  FGenericParticleHandleImp local_3d0;
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  local_3c8;
  TArrayView<Chaos::TContactPoint<double>_const_,int> local_3b8;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined1 local_2d0 [16];
  double local_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  TContactPoint<double> local_288;
  TArrayView<Chaos::FManifoldPoint,int> local_228;
  TContactPoint<double> local_218;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  FCollisionSortKeyNonHashed local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  if (this->bHasSpheres != false) {
    pTVar13 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds
                        ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_);
    pTVar14 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds
                        ((TGeometryParticleHandleImp<double,3,1> *)this->_padding_);
    lVar20 = 0;
    pTVar1 = &pTVar14->MMax;
    pTVar18 = pTVar1;
    lVar19 = lVar20;
    do {
      dVar21 = *(double *)(((longlong)pTVar13 - (longlong)pTVar1) + (longlong)pTVar18);
      if (*(double *)pTVar18 <= dVar21 && dVar21 != *(double *)pTVar18) {
        return 0;
      }
      if (*(double *)((longlong)pTVar13 + (0x18 - (longlong)pTVar1) + (longlong)pTVar18) <
          *(double *)&((TAABB<double,3> *)(pTVar18 + -1))->MMin) {
        return 0;
      }
      lVar19 = lVar19 + 1;
      pTVar18 = (TVector<double,3> *)&pTVar18->field_0x8;
    } while (lVar19 < 3);
    iVar12 = (int)this->_padding_;
    iVar4 = param_4->Allocator->CurrentEpoch;
    local_3d8.MHandle = (TGeometryParticleHandleImp<double,3,1> *)this->_padding_;
    FGenericParticleHandleImp::GetTransformPQ(&local_3d8,(TRigidTransform<double,3> *)local_348);
    local_3d0.MHandle = (TGeometryParticleHandleImp<double,3,1> *)this->_padding_;
    FGenericParticleHandleImp::GetTransformPQ(&local_3d0,(TRigidTransform<double,3> *)&local_3a8);
    local_2d8 = (double)*(float *)&(this->Sphere0).Center.field_0x8;
    local_2e8 = (double)*(float *)&(this->Sphere0).Center;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = local_2d8;
    dStack_2e0 = (double)*(float *)&(this->Sphere0).Center.field_0x4;
    dVar7 = local_338._0_8_;
    dVar31 = local_348._8_8_;
    auVar42 = blendpd(local_348,local_338,2);
    dVar33 = local_338._8_8_;
    auVar51._8_4_ = SUB84(dStack_2e0,0);
    auVar51._0_8_ = local_2e8;
    uVar39 = (undefined4)((ulonglong)dStack_2e0 >> 0x20);
    auVar51._12_4_ = uVar39;
    auVar22._8_4_ = SUB84(dStack_2e0,0);
    auVar22._0_8_ = local_2e8;
    auVar22._12_4_ = uVar39;
    auVar23 = blendpd(auVar22,auVar45,2);
    auVar52._0_8_ = auVar51._8_8_ * local_348._0_8_ - dVar31 * local_2e8;
    auVar52._8_8_ = local_2d8 * dVar31 - dVar7 * dStack_2e0;
    auVar24._0_8_ = auVar23._0_8_ * dVar7 - auVar42._0_8_ * local_2d8;
    auVar24._8_8_ = auVar23._8_8_ * dVar33 - auVar42._8_8_ * 0.0;
    auVar23 = blendpd(auVar52,auVar24,2);
    dVar21 = auVar52._8_8_ + auVar52._8_8_;
    dVar8 = auVar24._0_8_ + auVar24._0_8_;
    uVar39 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar53._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar53._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar34._8_4_ = SUB84(dVar8,0);
    auVar34._0_8_ = dVar21;
    auVar34._12_4_ = uVar39;
    auVar25._8_4_ = SUB84(dVar8,0);
    auVar25._0_8_ = dVar21;
    auVar25._12_4_ = uVar39;
    auVar23 = blendpd(auVar25,auVar53,2);
    auVar35._0_8_ = auVar34._8_8_ * local_348._0_8_ - dVar21 * dVar31;
    auVar35._8_8_ = auVar53._0_8_ * dVar31 - dVar8 * dVar7;
    auVar26._0_8_ = auVar23._0_8_ * dVar7 - auVar53._0_8_ * auVar42._0_8_;
    auVar26._8_8_ = auVar23._8_8_ * dVar33 - auVar53._8_8_ * auVar42._8_8_;
    auVar23 = blendpd(auVar35,auVar26,2);
    dVar7 = dVar21 * dVar33 + local_2e8 + auVar35._8_8_ + local_328;
    dVar21 = dVar8 * dVar33 + dStack_2e0 + auVar26._0_8_ + dStack_320;
    uVar49 = SUB84(dVar21,0);
    uVar50 = (undefined4)((ulonglong)dVar21 >> 0x20);
    local_2a8 = auVar53._0_8_ * dVar33 + local_2d8 + auVar23._0_8_ + local_318;
    local_2b8._8_4_ = uVar49;
    local_2b8._0_8_ = dVar7;
    local_2b8._12_4_ = uVar50;
    dVar21 = (double)*(float *)&(this->Sphere1).Center;
    local_2c0 = (double)*(float *)&(this->Sphere1).Center.field_0x8;
    dVar31 = (double)*(float *)&(this->Sphere1).Center.field_0x4;
    auVar42._8_8_ = dStack_3a0;
    auVar42._0_8_ = local_3a8;
    uVar39 = SUB84(dVar31,0);
    uVar44 = (undefined4)((ulonglong)dVar31 >> 0x20);
    dVar33 = local_398._0_8_;
    dVar8 = local_398._8_8_;
    auVar46._8_4_ = uVar39;
    auVar46._0_8_ = dVar21;
    auVar46._12_4_ = uVar44;
    auVar27._8_4_ = uVar39;
    auVar27._0_8_ = dVar21;
    auVar27._12_4_ = uVar44;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = local_2c0;
    auVar23 = blendpd(auVar27,auVar23,2);
    auVar42 = blendpd(auVar42,local_398,2);
    local_2d0._8_4_ = uVar39;
    local_2d0._0_8_ = dVar21;
    local_2d0._12_4_ = uVar44;
    auVar47._0_8_ = auVar46._8_8_ * local_3a8 - dVar21 * dStack_3a0;
    auVar47._8_8_ = local_2c0 * dStack_3a0 - dVar31 * dVar33;
    auVar36._8_4_ = SUB84(auVar47._8_8_,0);
    auVar36._0_8_ = auVar47._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
    auVar28._0_8_ = auVar23._0_8_ * dVar33 - local_2c0 * auVar42._0_8_;
    auVar28._8_8_ = auVar23._8_8_ * dVar8 - auVar42._8_8_ * 0.0;
    dVar32 = auVar36._8_8_ + auVar36._8_8_;
    dVar38 = auVar28._0_8_ + auVar28._0_8_;
    auVar23 = blendpd(auVar47,auVar28,2);
    auVar48._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar48._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar40._8_4_ = SUB84(dVar38,0);
    auVar40._0_8_ = dVar32;
    uVar39 = (undefined4)((ulonglong)dVar38 >> 0x20);
    auVar40._12_4_ = uVar39;
    auVar43._8_4_ = local_398._8_4_;
    auVar43._0_8_ = dVar8;
    auVar43._12_4_ = local_398._12_4_;
    auVar41._0_8_ = auVar40._8_8_ * local_3a8 - dVar32 * dStack_3a0;
    auVar41._8_8_ = auVar48._0_8_ * dStack_3a0 - dVar38 * dVar33;
    auVar29._8_4_ = SUB84(dVar38,0);
    auVar29._0_8_ = dVar32;
    auVar29._12_4_ = uVar39;
    auVar23 = blendpd(auVar29,auVar48,2);
    auVar9._4_8_ = dVar38;
    auVar9._0_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar37._0_8_ = auVar9._0_8_ << 0x20;
    auVar37._8_4_ = uVar49;
    auVar37._12_4_ = uVar50;
    auVar30._0_8_ = auVar23._0_8_ * dVar33 - auVar48._0_8_ * auVar42._0_8_;
    auVar30._8_8_ = auVar23._8_8_ * dVar8 - auVar48._8_8_ * auVar42._8_8_;
    auVar23 = blendpd(auVar41,auVar30,2);
    local_2a0 = dVar8 * dVar32 + dVar21 + auVar41._8_8_ + local_388;
    dStack_298 = auVar43._8_8_ * dVar38 + dVar31 + auVar30._0_8_ + dStack_380;
    dVar33 = auVar37._8_8_ - dStack_298;
    local_290 = dVar8 * auVar48._0_8_ + local_2c0 + auVar23._0_8_ + local_378;
    dVar21 = (double)(*(float *)&(this->Sphere1)._padding_ + *(float *)&(this->Sphere0)._padding_ +
                     param_2);
    if ((dVar7 - local_2a0) * (dVar7 - local_2a0) + dVar33 * dVar33 +
        (local_2a8 - local_290) * (local_2a8 - local_290) <= dVar21 * dVar21) {
      if ((this->Constraint).Ptr == (FPBDCollisionConstraint *)0x0) {
        uVar39 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        uVar44 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1a8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dStack_1a0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_198 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        dStack_190 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_188 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_180 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_178 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        dStack_170 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_168 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_160 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1b8._8_4_ = uVar39;
        local_1b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1b8._12_4_ = uVar44;
        local_158._8_4_ = uVar39;
        local_158._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_158._12_4_ = uVar44;
        local_148 = local_1a8;
        dStack_140 = dStack_1a0;
        local_138 = local_198;
        dStack_130 = dStack_190;
        local_128 = local_188;
        dStack_120 = dStack_180;
        local_118 = local_178;
        dStack_110 = dStack_170;
        local_108 = local_168;
        dStack_100 = dStack_160;
        pTVar15 = Chaos::Private::FCollisionContextAllocator::CreateConstraint
                            (param_4->Allocator,&local_3c8,
                             (TGeometryParticleHandleImp<double,3,1> *)this->_padding_,
                             (FImplicitObject *)&this->Sphere0,(FPerShapeData *)this->SphereShape0,
                             (FBVHParticles *)0x0,(TRigidTransform<double,3> *)local_158,
                             (TGeometryParticleHandleImp<double,3,1> *)this->_padding_,
                             (FImplicitObject *)&this->Sphere1,(FPerShapeData *)this->SphereShape1,
                             (FBVHParticles *)0x0,(TRigidTransform<double,3> *)local_1b8,
                             (double)param_2,true,SphereSphere);
        TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
        ::operator=(&this->Constraint,pTVar15);
        if (local_3c8.Ptr != (FPBDCollisionConstraint *)0x0) {
          if (((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_3c8._padding_ ==
               (TObjectPool<Chaos::FPBDCollisionConstraint> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pool != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                                  ,0x249,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            iVar12 = (*pcVar6)();
            return iVar12;
          }
          TObjectPool<Chaos::FPBDCollisionConstraint>::Free
                    ((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_3c8._padding_,
                     local_3c8.Ptr);
        }
        (((this->Constraint).Ptr)->ContainerCookie).MidPhase = (FParticlePairMidPhase *)this;
        (((this->Constraint).Ptr)->ContainerCookie).bIsMultiShapePair = 0;
        (((this->Constraint).Ptr)->ContainerCookie).CreationEpoch = iVar4;
        pFVar5 = (this->Constraint).Ptr;
        pFVar16 = Chaos::Private::FCollisionSortKeyNonHashed::FCollisionSortKeyNonHashed
                            (&local_f8,(TGeometryParticleHandleImp<double,3,1> *)this->_padding_,0,
                             (TGeometryParticleHandleImp<double,3,1> *)this->_padding_,0);
        FVar10 = (pFVar16->ShapePairKey).field0_0x0;
        (pFVar5->CollisionSortKey).ParticlePairKey.Key = (pFVar16->ParticlePairKey).Key;
        (pFVar5->CollisionSortKey).ShapePairKey.field0_0x0 = FVar10;
      }
      pFVar5 = (this->Constraint).Ptr;
      *(undefined1 (*) [16])pFVar5->ShapeWorldTransforms = local_348;
      *(undefined1 (*) [16])&pFVar5->ShapeWorldTransforms[0].field_0x10 = local_338;
      *(double *)&pFVar5->ShapeWorldTransforms[0].field_0x20 = local_328;
      *(double *)&pFVar5->ShapeWorldTransforms[0].field_0x28 = dStack_320;
      *(double *)&pFVar5->ShapeWorldTransforms[0].field_0x30 = local_318;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[0].field_0x38 = uStack_310;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[0].field_0x40 = local_308;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[0].field_0x48 = uStack_300;
      *(double *)(pFVar5->ShapeWorldTransforms + 1) = local_3a8;
      *(double *)&pFVar5->ShapeWorldTransforms[1].field_0x8 = dStack_3a0;
      *(undefined1 (*) [16])&pFVar5->ShapeWorldTransforms[1].field_0x10 = local_398;
      *(double *)&pFVar5->ShapeWorldTransforms[1].field_0x20 = local_388;
      *(double *)&pFVar5->ShapeWorldTransforms[1].field_0x28 = dStack_380;
      *(double *)&pFVar5->ShapeWorldTransforms[1].field_0x30 = local_378;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[1].field_0x38 = uStack_370;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[0].field_0x50 = local_2f8;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[0].field_0x58 = uStack_2f0;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[1].field_0x40 = local_368;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[1].field_0x48 = uStack_360;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[1].field_0x50 = local_358;
      *(undefined8 *)&pFVar5->ShapeWorldTransforms[1].field_0x58 = uStack_350;
      ((this->Constraint).Ptr)->CullDistance = param_2;
      if ((iVar12 < iVar4 + -1) ||
         (pTVar17 = FPBDCollisionConstraint::GetManifoldPoints((this->Constraint).Ptr,&local_228),
         pTVar17->ArrayNum == 0)) {
        FPBDCollisionConstraint::ResetManifold((this->Constraint).Ptr);
      }
      FPBDCollisionConstraint::ResetActiveManifoldContacts((this->Constraint).Ptr);
      SphereSphereContactPoint
                (&local_288,&this->Sphere0,(TRigidTransform<double,3> *)local_348,&this->Sphere1,
                 (TRigidTransform<double,3> *)&local_3a8,param_2);
      local_3b8.DataPtr = &local_218;
      local_218.ShapeContactPoints[0]._0_8_ = local_288.ShapeContactPoints[0]._0_8_;
      local_218.ShapeContactPoints[0]._8_8_ = local_288.ShapeContactPoints[0]._8_8_;
      local_218.ShapeContactPoints[0]._16_8_ = local_288.ShapeContactPoints[0]._16_8_;
      local_218.ShapeContactPoints[1]._0_8_ = local_288.ShapeContactPoints[1]._0_8_;
      local_218.ShapeContactPoints[1]._8_8_ = local_288.ShapeContactPoints[1]._8_8_;
      local_218.ShapeContactPoints[1]._16_8_ = local_288.ShapeContactPoints[1]._16_8_;
      local_218.ShapeContactNormal._0_8_ = local_288.ShapeContactNormal._0_8_;
      local_218.ShapeContactNormal._8_8_ = local_288.ShapeContactNormal._8_8_;
      local_218.ShapeContactNormal._16_8_ = local_288.ShapeContactNormal._16_8_;
      local_218.Phi = local_288.Phi;
      local_218.FaceIndex = local_288.FaceIndex;
      local_218.ContactType = local_288.ContactType;
      local_218._85_3_ = local_288._85_3_;
      local_3b8.ArrayNum = 1;
      FPBDCollisionConstraint::SetOneShotManifoldContacts((this->Constraint).Ptr,&local_3b8);
      dVar21 = FPBDCollisionConstraint::GetPhi((this->Constraint).Ptr);
      if (dVar21 <= (double)param_2) {
        pFVar5 = (this->Constraint).Ptr;
        pFVar3 = &pFVar5->Flags;
        pFVar3->Bits = pFVar3->Bits & 0xdfff;
        if (iVar12 < iVar4 + -1) {
          lVar20 = 0x2000;
        }
        pFVar3 = &pFVar5->Flags;
        pFVar3->Bits = pFVar3->Bits | (ushort)lVar20;
        bVar11 = Chaos::Private::FCollisionContextAllocator::ActivateConstraint
                           (param_4->Allocator,(this->Constraint).Ptr);
        if (bVar11) {
          this->LastUsedEpoch = iVar4;
          return 1;
        }
      }
    }
  }
  return 0;
}

// InitSphere @ 1439d4ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FSphereApproximationParticlePairMidPhase::InitSphere
          (TGeometryParticleHandleImp<double,3,1> *param_1,TSphere<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TAABB<double,3> *pTVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  FImplicitObject local_d8;
  undefined8 local_b8;
  float local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar12 = TGeometryParticleHandleImp<double,3,1>::LocalBounds(param_1);
  dVar11 = __real_3fe0000000000000;
  dVar9 = (*(double *)&pTVar12->MMax - *(double *)&pTVar12->MMin) * __real_3fe0000000000000;
  dVar8 = (*(double *)&(pTVar12->MMax).field_0x8 - *(double *)&(pTVar12->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar7 = (*(double *)&(pTVar12->MMax).field_0x10 - *(double *)&(pTVar12->MMin).field_0x10) *
          __real_3fe0000000000000;
  dVar1 = *(double *)&pTVar12->MMin;
  dVar2 = *(double *)&(pTVar12->MMin).field_0x8;
  dVar3 = *(double *)&(pTVar12->MMin).field_0x10;
  pTVar12 = TGeometryParticleHandleImp<double,3,1>::LocalBounds(param_1);
  fVar14 = CVars::ChaosOneWayPairSphereRadiusAlpha;
  if (__real_3f800000 <= CVars::ChaosOneWayPairSphereRadiusAlpha) {
    fVar14 = __real_3f800000;
  }
  dVar6 = *(double *)&pTVar12->MMax - *(double *)&pTVar12->MMin;
  dVar4 = *(double *)&(pTVar12->MMax).field_0x8 - *(double *)&(pTVar12->MMin).field_0x8;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  dVar5 = *(double *)&(pTVar12->MMax).field_0x10 - *(double *)&(pTVar12->MMin).field_0x10;
  dVar10 = dVar6;
  if (dVar4 <= dVar6) {
    dVar10 = dVar4;
  }
  if (dVar5 <= dVar10) {
    dVar10 = dVar5;
  }
  FImplicitObject::FImplicitObject(&local_d8,3,'\0');
  if (dVar6 <= dVar4) {
    dVar6 = dVar4;
  }
  *(uchar *)&param_2->_padding_ = local_d8.Type;
  *(bool *)((longlong)&param_2->_padding_ + 4) = local_d8.bIsConvex;
  if (dVar6 <= dVar5) {
    dVar6 = dVar5;
  }
  *(bool *)((longlong)&param_2->_padding_ + 5) = local_d8.bDoCollide;
  local_b0 = (float)(dVar7 + dVar3);
  *(bool *)((longlong)&param_2->_padding_ + 6) = local_d8.bHasBoundingBox;
  local_d8._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
  fVar13 = (float)(dVar9 + dVar1);
  fVar15 = (float)(dVar8 + dVar2);
  *(ulonglong *)&param_2->Center = CONCAT44(fVar15,fVar13);
  *(float *)&(param_2->Center).field_0x8 = local_b0;
  local_b8 = CONCAT44(fVar15,fVar13);
  local_d8.Margin = (float)(((dVar6 - dVar10) * (double)fVar14 + dVar10) * dVar11);
  *(float *)&param_2->_padding_ = local_d8.Margin;
  FImplicitObject::~FImplicitObject(&local_d8);
  return;
}

// InjectCollisionImpl @ 1439d5450

void __thiscall
Chaos::FSphereApproximationParticlePairMidPhase::InjectCollisionImpl
          (FSphereApproximationParticlePairMidPhase *this,FPBDCollisionConstraint *param_1,
          FCollisionContext *param_2)

{
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  FPBDCollisionConstraint *pFVar4;
  code *pcVar5;
  bool bVar6;
  FPBDCollisionConstraint *pFVar7;
  TObjectPool<Chaos::FPBDCollisionConstraint> *this_00;
  longlong local_38 [2];
  
  iVar3 = param_2->Allocator->CurrentEpoch;
  if ((this->Constraint).Ptr == (FPBDCollisionConstraint *)0x0) {
    this_00 = &param_2->Allocator->ConstraintPool;
    pFVar7 = TObjectPool<Chaos::FPBDCollisionConstraint>::Alloc<>(this_00);
    pTVar1 = &this->Constraint;
    if (pTVar1 != (TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
                   *)local_38) {
      pFVar4 = (this->Constraint).Ptr;
      (this->Constraint).Ptr = pFVar7;
      pFVar7 = (FPBDCollisionConstraint *)0x0;
      if (pFVar4 != (FPBDCollisionConstraint *)0x0) {
        if ((pTVar1->_padding_ == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pool != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                               ,0x249,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TObjectPool<Chaos::FPBDCollisionConstraint>::Free
                  ((TObjectPool<Chaos::FPBDCollisionConstraint> *)pTVar1->_padding_,pFVar4);
      }
    }
    pTVar1->_padding_ = (longlong)this_00;
    if (pFVar7 != (FPBDCollisionConstraint *)0x0) {
      if ((this_00 == (TObjectPool<Chaos::FPBDCollisionConstraint> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                             ,0x249,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TObjectPool<Chaos::FPBDCollisionConstraint>::Free(this_00,pFVar7);
    }
    (((this->Constraint).Ptr)->ContainerCookie).MidPhase = (FParticlePairMidPhase *)this;
    (((this->Constraint).Ptr)->ContainerCookie).bIsMultiShapePair = 0;
    (((this->Constraint).Ptr)->ContainerCookie).CreationEpoch = iVar3;
  }
  FPBDCollisionConstraint::RestoreFrom((this->Constraint).Ptr,param_1);
  Chaos::Private::FCollisionContextAllocator::ActivateConstraint
            (param_2->Allocator,(this->Constraint).Ptr);
  this->LastUsedEpoch = iVar3;
  return;
}

// ResetImpl @ 1439ddb40

void __thiscall
Chaos::FSphereApproximationParticlePairMidPhase::ResetImpl
          (FSphereApproximationParticlePairMidPhase *this)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->Constraint).Ptr;
  if (pFVar1 != (FPBDCollisionConstraint *)0x0) {
    (this->Constraint).Ptr = (FPBDCollisionConstraint *)0x0;
    if ((this->Constraint)._padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pool != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x249,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TObjectPool<Chaos::FPBDCollisionConstraint>::Free
              ((TObjectPool<Chaos::FPBDCollisionConstraint> *)(this->Constraint)._padding_,pFVar1);
  }
  return;
}

// WakeCollisionsImpl @ 1439e3e30

void __thiscall
Chaos::FSphereApproximationParticlePairMidPhase::WakeCollisionsImpl
          (FSphereApproximationParticlePairMidPhase *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FPBDCollisionConstraint *pFVar3;
  
  pFVar3 = (this->Constraint).Ptr;
  if ((pFVar3 != (FPBDCollisionConstraint *)0x0) &&
     (iVar2 = (pFVar3->ContainerCookie).LastUsedEpoch, this->LastUsedEpoch <= iVar2)) {
    if (CVars::bChaosMidPhaseActivateWakingConstraints) {
      if (iVar2 != *(int *)(pFVar3->_padding_ + 0x78)) {
        Chaos::Private::FCollisionConstraintAllocator::AddActiveConstraintImpl
                  ((FCollisionConstraintAllocator *)(pFVar3->_padding_ + 0x28),pFVar3);
      }
      (pFVar3->Flags).Bits = (pFVar3->Flags).Bits & 0xfffd;
      return;
    }
    (pFVar3->ContainerCookie).LastUsedEpoch = param_1;
    (((this->Constraint).Ptr)->ContainerCookie).ConstraintIndex = -1;
    (((this->Constraint).Ptr)->ContainerCookie).CCDConstraintIndex = -1;
  }
  return;
}

