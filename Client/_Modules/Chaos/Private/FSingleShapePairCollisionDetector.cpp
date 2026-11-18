// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// FSingleShapePairCollisionDetector @ 1439c0ad0

FSingleShapePairCollisionDetector * __thiscall
Chaos::FSingleShapePairCollisionDetector::FSingleShapePairCollisionDetector
          (FSingleShapePairCollisionDetector *this,FSingleShapePairCollisionDetector *param_1)

{
  FCollisionShapePairKey_u_0 FVar1;
  
  this->MidPhase = param_1->MidPhase;
  (this->Constraint)._padding_ = (param_1->Constraint)._padding_;
  (this->Constraint).Ptr = (param_1->Constraint).Ptr;
  (param_1->Constraint).Ptr = (FPBDCollisionConstraint *)0x0;
  this->Particle0 = param_1->Particle0;
  this->Particle1 = param_1->Particle1;
  this->Shape0 = param_1->Shape0;
  this->Shape1 = param_1->Shape1;
  FVar1 = (param_1->CollisionSortKey).ShapePairKey.field0_0x0;
  (this->CollisionSortKey).ParticlePairKey.Key = (param_1->CollisionSortKey).ParticlePairKey.Key;
  (this->CollisionSortKey).ShapePairKey.field0_0x0 = FVar1;
  this->SphereBoundsCheckSize = param_1->SphereBoundsCheckSize;
  this->ShapePairType = param_1->ShapePairType;
  this->BoundsTestFlags = param_1->BoundsTestFlags;
  return this;
}

// FSingleShapePairCollisionDetector @ 1439c0b40

FSingleShapePairCollisionDetector * __thiscall
Chaos::FSingleShapePairCollisionDetector::FSingleShapePairCollisionDetector
          (FSingleShapePairCollisionDetector *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FPerShapeData *param_2,TGeometryParticleHandleImp<double,3,1> *param_3,
          FPerShapeData *param_4,FCollisionSortKeyNonHashed *param_5,EContactShapesType param_6,
          FParticlePairMidPhase *param_7)

{
  FIDKey FVar1;
  FCollisionShapePairKey_u_0 FVar2;
  FImplicitBoundsTestFlags FVar3;
  FPerShapeData *pFVar4;
  FPerShapeData *pFVar5;
  undefined7 extraout_var;
  
  this->MidPhase = param_7;
  (this->Constraint)._padding_ = 0;
  (this->Constraint).Ptr = (FPBDCollisionConstraint *)0x0;
  this->Particle0 = param_1;
  this->Particle1 = param_3;
  this->Shape0 = param_2;
  this->Shape1 = param_4;
  FVar1 = (param_5->ParticlePairKey).Key;
  FVar2 = (param_5->ShapePairKey).field0_0x0;
  this->SphereBoundsCheckSize = 0.0;
  (this->CollisionSortKey).ParticlePairKey.Key = FVar1;
  (this->CollisionSortKey).ShapePairKey.field0_0x0 = FVar2;
  (this->BoundsTestFlags).Bits = '\0';
  this->LastUsedEpoch = -1;
  this->ShapePairType = param_6;
  if (param_2->Type == 0) {
    pFVar4 = (FPerShapeData *)FShapeInstanceProxy::GetLeafGeometry((FShapeInstanceProxy *)param_2);
  }
  else {
    pFVar4 = (FPerShapeData *)FShapeInstance::GetLeafGeometry((FShapeInstance *)param_2);
  }
  if (param_4->Type == 0) {
    pFVar5 = (FPerShapeData *)FShapeInstanceProxy::GetLeafGeometry((FShapeInstanceProxy *)param_4);
  }
  else {
    pFVar5 = (FPerShapeData *)FShapeInstance::GetLeafGeometry((FShapeInstance *)param_4);
  }
  FVar3 = Chaos::Private::CalculateImplicitBoundsTestFlags
                    ((TGeometryParticleHandleImp<double,3,1> *)&param_6,(FImplicitObject *)param_1,
                     pFVar4,(TGeometryParticleHandleImp<double,3,1> *)param_2,
                     (FImplicitObject *)param_3,pFVar5,(float *)param_4);
  this->BoundsTestFlags = *(FImplicitBoundsTestFlags *)CONCAT71(extraout_var,FVar3.Bits);
  return this;
}

// ~FSingleShapePairCollisionDetector @ 1439c0ea0

void __thiscall
Chaos::FSingleShapePairCollisionDetector::~FSingleShapePairCollisionDetector
          (FSingleShapePairCollisionDetector *this)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->Constraint).Ptr;
  if (pFVar1 != (FPBDCollisionConstraint *)0x0) {
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

// CreateConstraint @ 1439c91a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FSingleShapePairCollisionDetector::CreateConstraint
          (FSingleShapePairCollisionDetector *this,double param_1,FCollisionContext *param_2)

{
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  *pTVar1;
  undefined1 *puVar2;
  EContactShapesType EVar3;
  int iVar4;
  FShapeInstanceProxy *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FShapeInstanceProxy *this_01;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  FBVHParticles *pFVar7;
  FPBDCollisionConstraint *pFVar8;
  code *pcVar9;
  FCollisionShapePairKey_u_0 FVar10;
  bool bVar11;
  FImplicitObject *pFVar12;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar13;
  FImplicitObject *pFVar14;
  undefined1 auStackY_1d8 [32];
  TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>
  local_150;
  FGenericParticleHandleImp local_140;
  FGenericParticleHandleImp local_138;
  TGeometryParticleHandleImp<double,3,1> *local_130;
  FBVHParticles *local_128;
  TRigidTransform<double,3> local_118;
  TRigidTransform<double,3> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((this->Constraint).Ptr != (FPBDCollisionConstraint *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!Constraint.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                        ,0x1c9,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this_00 = (FShapeInstanceProxy *)this->Shape0;
  pTVar5 = this->Particle1;
  this_01 = (FShapeInstanceProxy *)this->Shape1;
  bVar11 = param_2->Settings->bAllowManifolds;
  pTVar6 = this->Particle0;
  EVar3 = this->ShapePairType;
  local_130 = pTVar5;
  if ((this_00->_padding_ & 3) == 0) {
    pFVar12 = FShapeInstanceProxy::GetLeafGeometry(this_00);
  }
  else {
    pFVar12 = FShapeInstance::GetLeafGeometry((FShapeInstance *)this_00);
  }
  local_140.MHandle = pTVar6;
  pTVar13 = FGenericParticleHandleImp::CollisionParticles(&local_140);
  local_128 = pTVar13->Ptr;
  if ((this_00->_padding_ & 3) == 0) {
    FShapeInstanceProxy::GetLeafRelativeTransform(this_00,&local_b8);
  }
  else {
    FShapeInstance::GetLeafRelativeTransform((FShapeInstance *)this_00,&local_b8);
  }
  if ((this_01->_padding_ & 3) == 0) {
    pFVar14 = FShapeInstanceProxy::GetLeafGeometry(this_01);
  }
  else {
    pFVar14 = FShapeInstance::GetLeafGeometry((FShapeInstance *)this_01);
  }
  local_138.MHandle = pTVar5;
  pTVar13 = FGenericParticleHandleImp::CollisionParticles(&local_138);
  pFVar7 = pTVar13->Ptr;
  if ((this_01->_padding_ & 3) == 0) {
    FShapeInstanceProxy::GetLeafRelativeTransform(this_01,&local_118);
  }
  else {
    FShapeInstance::GetLeafRelativeTransform((FShapeInstance *)this_01,&local_118);
  }
  Chaos::Private::FCollisionContextAllocator::CreateConstraint
            (param_2->Allocator,&local_150,pTVar6,pFVar12,(FPerShapeData *)this_00,local_128,
             &local_b8,local_130,pFVar14,(FPerShapeData *)this_01,pFVar7,&local_118,param_1,bVar11,
             EVar3);
  pTVar1 = &this->Constraint;
  if (pTVar1 != &local_150) {
    pFVar8 = (this->Constraint).Ptr;
    (this->Constraint).Ptr = local_150.Ptr;
    local_150.Ptr = (FPBDCollisionConstraint *)0x0;
    if (pFVar8 != (FPBDCollisionConstraint *)0x0) {
      if (pTVar1->_padding_ == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pool != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                            ,0x249,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      TObjectPool<Chaos::FPBDCollisionConstraint>::Free
                ((TObjectPool<Chaos::FPBDCollisionConstraint> *)pTVar1->_padding_,pFVar8);
    }
  }
  pFVar8 = local_150.Ptr;
  pTVar1->_padding_ = local_150._padding_;
  if (local_150.Ptr != (FPBDCollisionConstraint *)0x0) {
    if ((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_150._padding_ ==
        (TObjectPool<Chaos::FPBDCollisionConstraint> *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pool != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                          ,0x249,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    TObjectPool<Chaos::FPBDCollisionConstraint>::Free
              ((TObjectPool<Chaos::FPBDCollisionConstraint> *)local_150._padding_,pFVar8);
  }
  iVar4 = param_2->Allocator->CurrentEpoch;
  (((this->Constraint).Ptr)->ContainerCookie).MidPhase = this->MidPhase;
  (((this->Constraint).Ptr)->ContainerCookie).bIsMultiShapePair = 0;
  (((this->Constraint).Ptr)->ContainerCookie).CreationEpoch = iVar4;
  pFVar8 = (this->Constraint).Ptr;
  FVar10 = (this->CollisionSortKey).ShapePairKey.field0_0x0;
  (pFVar8->CollisionSortKey).ParticlePairKey.Key = (this->CollisionSortKey).ParticlePairKey.Key;
  (pFVar8->CollisionSortKey).ShapePairKey.field0_0x0 = FVar10;
  this->LastUsedEpoch = -1;
  return;
}

// DoBoundsOverlap @ 1439cb3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FSingleShapePairCollisionDetector::DoBoundsOverlap
          (FSingleShapePairCollisionDetector *this,float param_1,TVector<float,3> *param_2,
          int param_3)

{
  byte bVar1;
  FShapeInstanceProxy *pFVar2;
  FPerShapeData *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  uint uVar9;
  bool bVar10;
  TVector<double,3> *pTVar11;
  FImplicitObject *pFVar12;
  FImplicitObject *pFVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStackY_1c8 [32];
  TVector<float,3> local_198;
  double local_188 [3];
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [24];
  double local_140;
  double dStack_138;
  double local_130;
  TRigidTransform<double,3> local_f8;
  ulonglong local_98;
  
  uVar9 = __xmm_80000000800000008000000080000000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar1 = (this->BoundsTestFlags).Bits;
  pFVar2 = (FShapeInstanceProxy *)this->Shape0;
  pFVar3 = this->Shape1;
  if ((bVar1 & 1) != 0) {
    pTVar11 = &(pFVar3->WorldSpaceShapeBounds).MMax;
    lVar14 = 0;
    lVar15 = (longlong)local_188 - (longlong)pTVar11;
    local_158._16_8_ = pFVar2->_padding_;
    dVar19 = (double)(float)(*(uint *)&param_2->field_0x4 ^ __xmm_80000000800000008000000080000000);
    lVar7 = -(longlong)pTVar11;
    dVar18 = (double)(float)(*(uint *)param_2 ^ __xmm_80000000800000008000000080000000);
    dVar4 = (double)param_1;
    dVar5 = (double)(float)(*(uint *)&param_2->field_0x8 ^ __xmm_80000000800000008000000080000000);
    dVar16 = 0.0;
    local_140 = (double)pFVar2->_padding_;
    dStack_138 = (double)pFVar2->_padding_;
    dVar6 = dVar18;
    if (dVar18 <= 0.0) {
      dVar6 = 0.0;
    }
    if (0.0 <= dVar18) {
      dVar18 = dVar16;
    }
    dVar17 = dVar5;
    if (dVar5 <= 0.0) {
      dVar17 = dVar16;
    }
    if (0.0 <= dVar5) {
      dVar5 = 0.0;
    }
    dVar8 = dVar19;
    if (dVar19 <= 0.0) {
      dVar8 = 0.0;
    }
    if (0.0 <= dVar19) {
      dVar19 = dVar16;
    }
    local_130 = dVar17 + (double)pFVar2->_padding_ + dVar4;
    dVar16 = dVar8 + (double)pFVar2->_padding_ + dVar4;
    local_160 = local_130;
    local_188[0] = (dVar18 + (double)pFVar2->_padding_) - dVar4;
    local_170._8_4_ = SUB84(dVar16,0);
    local_170._0_8_ = dVar6 + (double)pFVar2->_padding_ + dVar4;
    local_170._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    local_188[1] = (dVar19 + (double)pFVar2->_padding_) - dVar4;
    local_188[2] = (dVar5 + (double)pFVar2->_padding_) - dVar4;
    do {
      dVar4 = *(double *)((longlong)pTVar11 + lVar15);
      if ((*(double *)pTVar11 <= dVar4 && dVar4 != *(double *)pTVar11) ||
         (*(double *)(local_170 + lVar7 + (longlong)pTVar11) <
          *(double *)&((TAABB<double,3> *)(pTVar11 + -1))->MMin)) goto LAB_1439cb72f;
      lVar14 = lVar14 + 1;
      pTVar11 = (TVector<double,3> *)&pTVar11->field_0x8;
    } while (lVar14 < 3);
  }
  if ((((bVar1 & 8) == 0) || (this->SphereBoundsCheckSize <= 0.0)) ||
     (dVar6 = (((double)pFVar2->_padding_ - (double)pFVar2->_padding_) * __real_3fe0000000000000 +
              (double)pFVar2->_padding_) -
              ((*(double *)&(pFVar3->WorldSpaceShapeBounds).MMax.field_0x10 -
               *(double *)&(pFVar3->WorldSpaceShapeBounds).MMin.field_0x10) *
               __real_3fe0000000000000 + *(double *)&(pFVar3->WorldSpaceShapeBounds).MMin.field_0x10
              ),
     dVar5 = (((double)pFVar2->_padding_ - (double)pFVar2->_padding_) * __real_3fe0000000000000 +
             (double)pFVar2->_padding_) -
             ((*(double *)&(pFVar3->WorldSpaceShapeBounds).MMax.field_0x8 -
              *(double *)&(pFVar3->WorldSpaceShapeBounds).MMin.field_0x8) * __real_3fe0000000000000
             + *(double *)&(pFVar3->WorldSpaceShapeBounds).MMin.field_0x8),
     dVar4 = (((double)pFVar2->_padding_ - (double)pFVar2->_padding_) * __real_3fe0000000000000 +
             (double)pFVar2->_padding_) -
             ((*(double *)&(pFVar3->WorldSpaceShapeBounds).MMax -
              *(double *)&(pFVar3->WorldSpaceShapeBounds).MMin) * __real_3fe0000000000000 +
             *(double *)&(pFVar3->WorldSpaceShapeBounds).MMin),
     dVar18 = (double)this->SphereBoundsCheckSize + (double)param_1,
     dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6 <= dVar18 * dVar18)) {
    if (((this->Constraint).Ptr == (FPBDCollisionConstraint *)0x0) ||
       (this->LastUsedEpoch < param_3 + -1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (((bVar1 & 6) != 0) && (!bVar10)) {
      if ((pFVar2->_padding_ & 3) == 0) {
        FShapeInstanceProxy::GetLeafWorldTransform
                  (pFVar2,(TRigidTransform<double,3> *)local_158,this->Particle0);
      }
      else {
        FShapeInstance::GetLeafWorldTransform
                  ((FShapeInstance *)pFVar2,(TRigidTransform<double,3> *)local_158,this->Particle0);
      }
      pFVar2 = (FShapeInstanceProxy *)this->Shape1;
      if ((pFVar2->_padding_ & 3) == 0) {
        FShapeInstanceProxy::GetLeafWorldTransform(pFVar2,&local_f8,this->Particle1);
      }
      else {
        FShapeInstance::GetLeafWorldTransform((FShapeInstance *)pFVar2,&local_f8,this->Particle1);
      }
      pFVar2 = (FShapeInstanceProxy *)this->Shape0;
      if ((pFVar2->_padding_ & 3) == 0) {
        pFVar12 = FShapeInstanceProxy::GetLeafGeometry(pFVar2);
      }
      else {
        pFVar12 = FShapeInstance::GetLeafGeometry((FShapeInstance *)pFVar2);
      }
      pFVar2 = (FShapeInstanceProxy *)this->Shape1;
      if ((pFVar2->_padding_ & 3) == 0) {
        pFVar13 = FShapeInstanceProxy::GetLeafGeometry(pFVar2);
      }
      else {
        pFVar13 = FShapeInstance::GetLeafGeometry((FShapeInstance *)pFVar2);
      }
      if ((((this->BoundsTestFlags).Bits & 2) != 0) &&
         (bVar10 = ImplicitOverlapOBBToAABB
                             (pFVar12,pFVar13,(TRigidTransform<double,3> *)local_158,&local_f8,
                              param_2,(double)param_1), !bVar10)) goto LAB_1439cb72f;
      if (((this->BoundsTestFlags).Bits & 4) != 0) {
        local_198._0_4_ = *(uint *)param_2 ^ uVar9;
        local_198._4_4_ = *(uint *)&param_2->field_0x4 ^ uVar9;
        local_198._8_4_ = *(uint *)&param_2->field_0x8 ^ uVar9;
        bVar10 = ImplicitOverlapOBBToAABB
                           (pFVar13,pFVar12,&local_f8,(TRigidTransform<double,3> *)local_158,
                            &local_198,(double)param_1);
        return bVar10;
      }
    }
    bVar10 = true;
  }
  else {
LAB_1439cb72f:
    bVar10 = false;
  }
  return bVar10;
}

// GenerateCollision @ 1439cfcd0

int __thiscall
Chaos::FSingleShapePairCollisionDetector::GenerateCollision
          (FSingleShapePairCollisionDetector *this,float param_1,float param_2,
          TVector<float,3> *param_3,FCollisionContext *param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = DoBoundsOverlap(this,param_2,param_3,param_4->Allocator->CurrentEpoch);
  if (bVar1) {
    iVar2 = GenerateCollisionImpl(this,param_1,param_2,param_3,param_4);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// GenerateCollisionCCD @ 1439cfd50

int __thiscall
Chaos::FSingleShapePairCollisionDetector::GenerateCollisionCCD
          (FSingleShapePairCollisionDetector *this,float param_1,float param_2,
          TVector<float,3> *param_3,bool param_4,FCollisionContext *param_5)

{
  int iVar1;
  
  iVar1 = GenerateCollisionCCDImpl(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}

// GenerateCollisionCCDImpl @ 1439cfd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
Chaos::FSingleShapePairCollisionDetector::GenerateCollisionCCDImpl
          (FSingleShapePairCollisionDetector *this,float param_1,float param_2,
          TVector<float,3> *param_3,bool param_4,FCollisionContext *param_5)

{
  float *pfVar1;
  FFlags *pFVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  FPBDCollisionConstraint *pFVar6;
  FShapeInstanceProxy *pFVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  EObjectStateType EVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  TGeometryParticleHandleImp<double,3,1> *pTVar22;
  TVector<double,3> *pTVar23;
  longlong lVar24;
  TGeometryParticleHandleImp<double,3,1> *pTVar25;
  uint uVar26;
  TGeometryParticleHandleImp<double,3,1> *pTVar27;
  TGeometryParticleHandleImp<double,3,1> *pTVar28;
  longlong lVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined1 auStackY_478 [32];
  FGenericParticleHandleImp local_448;
  FGenericParticleHandleImp local_440;
  FGenericParticleHandleImp local_438;
  FGenericParticleHandleImp local_430;
  undefined1 local_428 [24];
  TVector<double,3> local_410;
  double local_3e8;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  TRigidTransform<double,3> local_318;
  TRigidTransform<double,3> local_2b8;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_478;
  if (((this->BoundsTestFlags).Bits & 0x20) != 0) {
    iVar20 = GenerateCollisionProbeImpl(this,param_1,param_2,param_3,param_5);
    return iVar20;
  }
  if ((this->Constraint).Ptr == (FPBDCollisionConstraint *)0x0) {
    CreateConstraint(this,(double)param_2,param_5);
  }
  pFVar6 = (this->Constraint).Ptr;
  if (pFVar6 != (FPBDCollisionConstraint *)0x0) {
    if (((*(byte *)&pFVar6->Flags >> 1 & 1) == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Constraint->IsEnabled()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                            ,0x252,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      iVar20 = (*pcVar9)();
      return iVar20;
    }
    pFVar6 = (this->Constraint).Ptr;
    (pFVar6->Flags).Bits = (pFVar6->Flags).Bits | 0x600;
    if (pFVar6->CCDEnablePenetration == 0.0) {
      FPBDCollisionConstraint::InitCCDThreshold(pFVar6);
    }
    pFVar6 = (this->Constraint).Ptr;
    (pFVar6->Flags).Bits = (ushort)param_4 << 10 | (pFVar6->Flags).Bits & 0xfbff;
    if (bChaosCCDResetTOIFix != false) {
      ((this->Constraint).Ptr)->CCDTimeOfImpact = 3.4028235e+38;
    }
  }
  if (!param_4) {
    iVar20 = GenerateCollision(this,param_1,param_2,param_3,param_5);
    return iVar20;
  }
  if ((this->Constraint).Ptr == (FPBDCollisionConstraint *)0x0) {
    return 0;
  }
  pFVar7 = (FShapeInstanceProxy *)this->Shape0;
  if ((pFVar7->_padding_ & 3) == 0) {
    FShapeInstanceProxy::GetLeafWorldTransform(pFVar7,&local_318,this->Particle0);
  }
  else {
    FShapeInstance::GetLeafWorldTransform((FShapeInstance *)pFVar7,&local_318,this->Particle0);
  }
  pFVar7 = (FShapeInstanceProxy *)this->Shape1;
  if ((pFVar7->_padding_ & 3) == 0) {
    FShapeInstanceProxy::GetLeafWorldTransform(pFVar7,&local_2b8,this->Particle1);
  }
  else {
    FShapeInstance::GetLeafWorldTransform((FShapeInstance *)pFVar7,&local_2b8,this->Particle1);
  }
  pFVar6 = (this->Constraint).Ptr;
  *(undefined8 *)pFVar6->ShapeWorldTransforms = local_318._0_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x8 = local_318._8_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x10 = local_318._16_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x18 = local_318._24_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x20 = local_318._32_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x28 = local_318._40_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x30 = local_318._48_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x38 = local_318._56_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x40 = local_318._64_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x48 = local_318._72_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x50 = local_318._80_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[0].field_0x58 = local_318._88_8_;
  *(undefined8 *)(pFVar6->ShapeWorldTransforms + 1) = local_2b8._0_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x8 = local_2b8._8_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x10 = local_2b8._16_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x18 = local_2b8._24_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x20 = local_2b8._32_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x28 = local_2b8._40_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x30 = local_2b8._48_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x38 = local_2b8._56_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x40 = local_2b8._64_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x48 = local_2b8._72_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x50 = local_2b8._80_8_;
  *(undefined8 *)&pFVar6->ShapeWorldTransforms[1].field_0x58 = local_2b8._88_8_;
  ((this->Constraint).Ptr)->CullDistance = param_2;
  FPBDCollisionConstraint::ResetManifold((this->Constraint).Ptr);
  FPBDCollisionConstraint::ResetActiveManifoldContacts((this->Constraint).Ptr);
  pTVar25 = this->Particle0;
  pTVar8 = this->Particle1;
  local_448.MHandle = pTVar8;
  local_440.MHandle = pTVar25;
  bVar17 = FGenericParticleHandleImp::IsDynamic(&local_440);
  pTVar28 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  uVar21 = 0;
  if (bVar17) {
    pTVar22 = pTVar28;
    if (1 < *(byte *)((longlong)&pTVar25->_padding_ + 4)) {
      pTVar22 = pTVar25;
    }
    uVar5 = (uint)pTVar22->_padding_;
    lVar24 = pTVar22->_padding_;
    uVar26 = uVar21;
    if ((int)uVar5 < *(int *)(lVar24 + 0x568)) {
      uVar26 = ~uVar5 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      iVar20 = (*pcVar9)();
      return iVar20;
    }
    lVar24 = *(longlong *)(lVar24 + 0x560);
  }
  else {
    uVar5 = (uint)pTVar25->_padding_;
    lVar24 = pTVar25->_padding_;
    uVar26 = uVar21;
    if ((int)uVar5 < *(int *)(lVar24 + 0x50)) {
      uVar26 = ~uVar5 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      iVar20 = (*pcVar9)();
      return iVar20;
    }
    lVar24 = *(longlong *)(lVar24 + 0x48);
  }
  lVar29 = (longlong)(int)uVar5;
  fVar3 = *(float *)(lVar24 + lVar29 * 0x10);
  uVar4 = *(undefined8 *)(lVar24 + 8 + lVar29 * 0x10);
  dVar11 = (double)(float)((ulonglong)uVar4 >> 0x20);
  pTVar22 = pTVar28;
  if (*(char *)((longlong)&pTVar25->_padding_ + 4) != '\0') {
    pTVar22 = pTVar25;
  }
  dVar10 = (double)*(float *)(lVar24 + 4 + lVar29 * 0x10);
  if (pTVar22 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1439d0157:
    pTVar22 = pTVar28;
    if (*(char *)((longlong)&pTVar25->_padding_ + 4) != '\0') {
      pTVar22 = pTVar25;
    }
    if (pTVar22 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar27 = pTVar28;
      if (1 < *(byte *)((longlong)&pTVar22->_padding_ + 4)) {
        pTVar27 = pTVar22;
      }
      if (pTVar27 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar18 = Kinematic;
      }
      else {
        EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar27);
      }
      if (EVar18 == Sleeping) goto LAB_1439d0184;
    }
    pTVar23 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)pTVar25->_padding_,(int)pTVar25->_padding_);
  }
  else {
    pTVar27 = pTVar28;
    if (1 < *(byte *)((longlong)&pTVar22->_padding_ + 4)) {
      pTVar27 = pTVar22;
    }
    if (pTVar27 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar18 = Kinematic;
    }
    else {
      EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar27);
    }
    if (EVar18 != Dynamic) goto LAB_1439d0157;
LAB_1439d0184:
    pTVar22 = pTVar28;
    if (1 < *(byte *)((longlong)&pTVar25->_padding_ + 4)) {
      pTVar22 = pTVar25;
    }
    pTVar23 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar22);
  }
  pTVar22 = pTVar28;
  if (*(char *)((longlong)&pTVar25->_padding_ + 4) != '\0') {
    pTVar22 = pTVar25;
  }
  if (pTVar22 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    dVar32 = FGenericParticleHandleImp::ZeroVector._0_8_;
    uVar33 = FGenericParticleHandleImp::ZeroVector._8_4_;
    uVar34 = FGenericParticleHandleImp::ZeroVector._12_4_;
    uVar30 = FGenericParticleHandleImp::ZeroVector._16_4_;
    uVar31 = FGenericParticleHandleImp::ZeroVector._20_4_;
  }
  else {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar22->_padding_,&local_410,
               (int)pTVar22->_padding_);
    dVar32 = local_410._0_8_;
    uVar33 = local_410._8_4_;
    uVar34 = local_410._12_4_;
    uVar30 = local_410._16_4_;
    uVar31 = local_410._20_4_;
  }
  dVar16 = _UNK_150689688;
  dVar15 = ___xmm_3ff00000000000003ff0000000000000;
  dVar14 = _UNK_150689518;
  dVar13 = ___xmm_00000000000000003ff0000000000000;
  local_3e8 = (double)CONCAT44(uVar31,uVar30);
  dVar12 = (double)param_1;
  local_198.Translation.ZW.m128d_f64[0] = *(double *)&pTVar23->field_0x10 - dVar12 * local_3e8;
  dVar35 = *(double *)&pTVar23->field_0x8 - dVar12 * (double)CONCAT44(uVar34,uVar33);
  local_198.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
  local_198.Rotation.ZW.m128d_f64[0] = (double)(float)uVar4;
  local_198.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_198.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_198.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_198.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_198.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_198.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
  local_198.Rotation.XY.m128d_f64[0] = (double)fVar3;
  local_198.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_198.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar35,0);
  local_198.Translation.XY.m128d_f64[0] = *(double *)pTVar23 - dVar12 * dVar32;
  local_198.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
  local_198.Translation.ZW.m128d_f64[1] = 0.0;
  bVar17 = FGenericParticleHandleImp::IsDynamic(&local_448);
  if (bVar17) {
    pTVar25 = pTVar28;
    if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
      pTVar25 = pTVar8;
    }
    uVar5 = (uint)pTVar25->_padding_;
    lVar24 = pTVar25->_padding_;
    if ((int)uVar5 < *(int *)(lVar24 + 0x568)) {
      uVar21 = ~uVar5 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      iVar20 = (*pcVar9)();
      return iVar20;
    }
    lVar24 = *(longlong *)(lVar24 + 0x560);
  }
  else {
    uVar5 = (uint)pTVar8->_padding_;
    lVar24 = pTVar8->_padding_;
    if ((int)uVar5 < *(int *)(lVar24 + 0x50)) {
      uVar21 = ~uVar5 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      iVar20 = (*pcVar9)();
      return iVar20;
    }
    lVar24 = *(longlong *)(lVar24 + 0x48);
  }
  lVar29 = (longlong)(int)uVar5;
  fVar3 = *(float *)(lVar24 + lVar29 * 0x10);
  uVar4 = *(undefined8 *)(lVar24 + 8 + lVar29 * 0x10);
  dVar11 = (double)(float)((ulonglong)uVar4 >> 0x20);
  pTVar25 = pTVar28;
  if (*(char *)((longlong)&pTVar8->_padding_ + 4) != '\0') {
    pTVar25 = pTVar8;
  }
  dVar10 = (double)*(float *)(lVar24 + 4 + lVar29 * 0x10);
  if (pTVar25 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1439d03b1:
    pTVar25 = pTVar28;
    if (*(char *)((longlong)&pTVar8->_padding_ + 4) != '\0') {
      pTVar25 = pTVar8;
    }
    if (pTVar25 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar22 = pTVar28;
      if (1 < *(byte *)((longlong)&pTVar25->_padding_ + 4)) {
        pTVar22 = pTVar25;
      }
      if (pTVar22 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar18 = Kinematic;
      }
      else {
        EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar22);
      }
      if (EVar18 == Sleeping) goto LAB_1439d03de;
    }
    pTVar23 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)pTVar8->_padding_,(int)pTVar8->_padding_);
  }
  else {
    pTVar22 = pTVar28;
    if (1 < *(byte *)((longlong)&pTVar25->_padding_ + 4)) {
      pTVar22 = pTVar25;
    }
    if (pTVar22 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar18 = Kinematic;
    }
    else {
      EVar18 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar22);
    }
    if (EVar18 != Dynamic) goto LAB_1439d03b1;
LAB_1439d03de:
    pTVar25 = pTVar28;
    if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
      pTVar25 = pTVar8;
    }
    pTVar23 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar25);
  }
  pTVar25 = pTVar28;
  if (*(char *)((longlong)&pTVar8->_padding_ + 4) != '\0') {
    pTVar25 = pTVar8;
  }
  if (pTVar25 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    dVar32 = FGenericParticleHandleImp::ZeroVector._0_8_;
    uVar33 = FGenericParticleHandleImp::ZeroVector._8_4_;
    uVar34 = FGenericParticleHandleImp::ZeroVector._12_4_;
    uVar30 = FGenericParticleHandleImp::ZeroVector._16_4_;
    uVar31 = FGenericParticleHandleImp::ZeroVector._20_4_;
  }
  else {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar25->_padding_,
               (TVector<double,3> *)local_428,(int)pTVar25->_padding_);
    dVar32 = local_428._0_8_;
    uVar33 = local_428._8_4_;
    uVar34 = local_428._12_4_;
    uVar30 = (undefined4)local_428._16_8_;
    uVar31 = SUB84(local_428._16_8_,4);
  }
  local_428._16_8_ = CONCAT44(uVar31,uVar30);
  local_138.Translation.ZW.m128d_f64[0] =
       *(double *)&pTVar23->field_0x10 - dVar12 * (double)local_428._16_8_;
  dVar35 = *(double *)&pTVar23->field_0x8 - dVar12 * (double)CONCAT44(uVar34,uVar33);
  local_138.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
  local_138.Rotation.ZW.m128d_f64[0] = (double)(float)uVar4;
  local_138.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_138.Scale3D.XY.m128d_f64[0] = dVar15;
  local_138.Scale3D.XY.m128d_f64[1] = dVar16;
  local_138.Scale3D.ZW.m128d_f64[0] = dVar13;
  local_138.Scale3D.ZW.m128d_f64[1] = dVar14;
  local_138.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
  local_138.Rotation.XY.m128d_f64[0] = (double)fVar3;
  local_138.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_138.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar35,0);
  local_138.Translation.XY.m128d_f64[0] = *(double *)pTVar23 - dVar12 * dVar32;
  local_138.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
  local_138.Translation.ZW.m128d_f64[1] = 0.0;
  local_3d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_3d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_3d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_3d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_3d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_3d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_3d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_3d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_3d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_3d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_3d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_3d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_3d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_3d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_3d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_3d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_3d8,(TTransform<double> *)((this->Constraint).Ptr)->ImplicitTransform,&local_198
            );
  local_258 = local_3d8.Rotation.XY.m128d_f64[0];
  dStack_250 = local_3d8.Rotation.XY.m128d_f64[1];
  local_238 = local_3d8.Translation.XY.m128d_f64[0];
  dStack_230 = local_3d8.Translation.XY.m128d_f64[1];
  local_218 = local_3d8.Scale3D.XY.m128d_f64[0];
  dStack_210 = local_3d8.Scale3D.XY.m128d_f64[1];
  local_248 = local_3d8.Rotation.ZW.m128d_f64[0];
  dStack_240 = local_3d8.Rotation.ZW.m128d_f64[1];
  local_228 = local_3d8.Translation.ZW.m128d_f64[0];
  dStack_220 = local_3d8.Translation.ZW.m128d_f64[1];
  local_378.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_378.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_378.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_208 = local_3d8.Scale3D.ZW.m128d_f64[0];
  dStack_200 = local_3d8.Scale3D.ZW.m128d_f64[1];
  local_378.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_378.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_378.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_378.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_378.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_378.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_378.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_378.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_378.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_378.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_378.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_378.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_378.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_378.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_378.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_378,(TTransform<double> *)(((this->Constraint).Ptr)->ImplicitTransform + 1),
             &local_138);
  local_1f8 = local_378.Rotation.XY.m128d_f64[0];
  dStack_1f0 = local_378.Rotation.XY.m128d_f64[1];
  local_1e8 = local_378.Rotation.ZW.m128d_f64[0];
  dStack_1e0 = local_378.Rotation.ZW.m128d_f64[1];
  local_1d8 = local_378.Translation.XY.m128d_f64[0];
  dStack_1d0 = local_378.Translation.XY.m128d_f64[1];
  local_1c8 = local_378.Translation.ZW.m128d_f64[0];
  dStack_1c0 = local_378.Translation.ZW.m128d_f64[1];
  local_1b8 = local_378.Scale3D.XY.m128d_f64[0];
  dStack_1b0 = local_378.Scale3D.XY.m128d_f64[1];
  local_1a8 = local_378.Scale3D.ZW.m128d_f64[0];
  dStack_1a0 = local_378.Scale3D.ZW.m128d_f64[1];
  bVar17 = Collisions::UpdateConstraintSwept
                     ((this->Constraint).Ptr,(TRigidTransform<double,3> *)&local_258,
                      (TRigidTransform<double,3> *)&local_1f8,dVar12);
  if (CVars::ChaosSolverDrawCCDInteractions != 0) {
    local_438.MHandle = ((this->Constraint).Ptr)->Particle[0];
    bVar19 = FGenericParticleHandleImp::CCDEnabled(&local_438);
    if (bVar19) {
      Chaos::DebugDraw::DrawShape
                ((TRigidTransform<double,3> *)&local_258,((this->Constraint).Ptr)->Implicit[0],
                 this->Shape0,&FColor::Black,Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
      Chaos::DebugDraw::DrawShape
                (&local_318,((this->Constraint).Ptr)->Implicit[0],this->Shape0,&FColor::White,
                 Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
    local_430.MHandle = ((this->Constraint).Ptr)->Particle[1];
    bVar19 = FGenericParticleHandleImp::CCDEnabled(&local_430);
    if (bVar19) {
      Chaos::DebugDraw::DrawShape
                ((TRigidTransform<double,3> *)&local_1f8,((this->Constraint).Ptr)->Implicit[1],
                 this->Shape1,&FColor::Black,Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
      Chaos::DebugDraw::DrawShape
                (&local_2b8,((this->Constraint).Ptr)->Implicit[1],this->Shape1,&FColor::White,
                 Chaos::DebugDraw::ChaosDebugDrawCCDDuration,
                 &CVars::ChaosSolverDebugDebugDrawSettings);
    }
  }
  if (bVar17) {
    pFVar6 = (this->Constraint).Ptr;
    pfVar1 = &pFVar6->CCDTimeOfImpact;
    if (*pfVar1 <= __real_3f800000 && __real_3f800000 != *pfVar1) goto LAB_1439d07f8;
    pfVar1 = &pFVar6->CCDTimeOfImpact;
    if (*pfVar1 <= __real_3f800000 && __real_3f800000 != *pfVar1) {
      return 1;
    }
  }
  pFVar6 = (this->Constraint).Ptr;
  Collisions::UpdateConstraint
            (pFVar6,pFVar6->ShapeWorldTransforms,pFVar6->ShapeWorldTransforms + 1,(double)param_1);
  pFVar2 = &((this->Constraint).Ptr)->Flags;
  pFVar2->Bits = pFVar2->Bits & 0xfbff;
  dVar11 = FPBDCollisionConstraint::GetPhi((this->Constraint).Ptr);
  if ((double)param_2 < dVar11) {
    return 1;
  }
LAB_1439d07f8:
  pFVar6 = (this->Constraint).Ptr;
  iVar20 = param_5->Allocator->CurrentEpoch;
  if ((pFVar6 == (FPBDCollisionConstraint *)0x0) || (this->LastUsedEpoch < iVar20 + -1)) {
    pTVar28 = (TGeometryParticleHandleImp<double,3,1> *)0x2000;
  }
  (pFVar6->Flags).Bits = (pFVar6->Flags).Bits & 0xdfff;
  (pFVar6->Flags).Bits = (pFVar6->Flags).Bits | (ushort)pTVar28;
  bVar17 = Chaos::Private::FCollisionContextAllocator::ActivateConstraint
                     (param_5->Allocator,(this->Constraint).Ptr);
  if (bVar17) {
    this->LastUsedEpoch = iVar20;
  }
  return 1;
}

// GenerateCollisionImpl @ 1439d0890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
Chaos::FSingleShapePairCollisionDetector::GenerateCollisionImpl
          (FSingleShapePairCollisionDetector *this,float param_1,float param_2,
          TVector<float,3> *param_3,FCollisionContext *param_4)

{
  FFlags *pFVar1;
  int iVar2;
  FShapeInstanceProxy *pFVar3;
  FPBDCollisionConstraint *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  undefined1 auStackY_138 [32];
  TRigidTransform<double,3> local_108;
  TRigidTransform<double,3> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (((this->BoundsTestFlags).Bits & 0x20) != 0) {
    iVar8 = GenerateCollisionProbeImpl(this,param_1,param_2,param_3,param_4);
    return iVar8;
  }
  if ((this->Constraint).Ptr == (FPBDCollisionConstraint *)0x0) {
    CreateConstraint(this,(double)param_2,param_4);
  }
  if ((this->Constraint).Ptr == (FPBDCollisionConstraint *)0x0) {
    return 0;
  }
  pFVar3 = (FShapeInstanceProxy *)this->Shape0;
  if ((pFVar3->_padding_ & 3) == 0) {
    FShapeInstanceProxy::GetLeafWorldTransform(pFVar3,&local_a8,this->Particle0);
  }
  else {
    FShapeInstance::GetLeafWorldTransform((FShapeInstance *)pFVar3,&local_a8,this->Particle0);
  }
  pFVar3 = (FShapeInstanceProxy *)this->Shape1;
  if ((pFVar3->_padding_ & 3) == 0) {
    FShapeInstanceProxy::GetLeafWorldTransform(pFVar3,&local_108,this->Particle1);
  }
  else {
    FShapeInstance::GetLeafWorldTransform((FShapeInstance *)pFVar3,&local_108,this->Particle1);
  }
  pFVar4 = (this->Constraint).Ptr;
  iVar8 = param_4->Allocator->CurrentEpoch;
  if ((pFVar4 == (FPBDCollisionConstraint *)0x0) || (this->LastUsedEpoch < iVar8 + -1)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  *(undefined8 *)pFVar4->ShapeWorldTransforms = local_a8._0_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x8 = local_a8._8_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x10 = local_a8._16_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x18 = local_a8._24_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x20 = local_a8._32_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x28 = local_a8._40_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x30 = local_a8._48_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x38 = local_a8._56_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x40 = local_a8._64_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x48 = local_a8._72_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x50 = local_a8._80_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[0].field_0x58 = local_a8._88_8_;
  *(undefined8 *)(pFVar4->ShapeWorldTransforms + 1) = local_108._0_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x8 = local_108._8_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x10 = local_108._16_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x18 = local_108._24_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x20 = local_108._32_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x28 = local_108._40_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x30 = local_108._48_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x38 = local_108._56_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x40 = local_108._64_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x48 = local_108._72_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x50 = local_108._80_8_;
  *(undefined8 *)&pFVar4->ShapeWorldTransforms[1].field_0x58 = local_108._88_8_;
  ((this->Constraint).Ptr)->CullDistance = param_2;
  pFVar4 = (this->Constraint).Ptr;
  *(undefined8 *)&pFVar4->RelativeMovement = *(undefined8 *)param_3;
  *(undefined4 *)&(pFVar4->RelativeMovement).field_0x8 = *(undefined4 *)&param_3->field_0x8;
  pFVar1 = &((this->Constraint).Ptr)->Flags;
  pFVar1->Bits = pFVar1->Bits & 63999;
  if (bChaosCCDResetTOIFix != false) {
    ((this->Constraint).Ptr)->CCDTimeOfImpact = 3.4028235e+38;
  }
  if (bVar9 != 0) {
    iVar2 = (((this->Constraint).Ptr)->ManifoldPoints).ArrayNum;
    if (iVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      goto LAB_1439d0aac;
    }
    if (iVar2 != 0) goto LAB_1439d0aac;
  }
  FPBDCollisionConstraint::ResetManifold((this->Constraint).Ptr);
LAB_1439d0aac:
  if ((((param_4->Settings->bAllowManifoldReuse == false) ||
       (((this->BoundsTestFlags).Bits & 0x10) == 0)) || (bVar9 == 0)) ||
     ((pFVar4 = (this->Constraint).Ptr, (*(byte *)&pFVar4->Flags >> 4 & 1) == 0 ||
      (bVar7 = FPBDCollisionConstraint::TryRestoreManifold(pFVar4), !bVar7)))) {
    FPBDCollisionConstraint::ResetActiveManifoldContacts((this->Constraint).Ptr);
    if (param_4->Settings->bDeferNarrowPhase == false) {
      Collisions::UpdateConstraint((this->Constraint).Ptr,&local_a8,&local_108,(double)param_1);
    }
    FPBDCollisionConstraint::SetLastShapeWorldTransforms
              ((this->Constraint).Ptr,&local_a8,&local_108);
  }
  dVar6 = FPBDCollisionConstraint::GetPhi((this->Constraint).Ptr);
  if ((dVar6 <= (double)param_2) || (param_4->Settings->bDeferNarrowPhase != false)) {
    pFVar4 = (this->Constraint).Ptr;
    pFVar1 = &pFVar4->Flags;
    pFVar1->Bits = pFVar1->Bits & 0xdfff;
    pFVar1 = &pFVar4->Flags;
    pFVar1->Bits = pFVar1->Bits | (ushort)(bVar9 ^ 1) << 0xd;
    bVar7 = Chaos::Private::FCollisionContextAllocator::ActivateConstraint
                      (param_4->Allocator,(this->Constraint).Ptr);
    if (bVar7) {
      this->LastUsedEpoch = iVar8;
      return 1;
    }
  }
  return 0;
}

// GenerateCollisionProbeImpl @ 1439d0bd0

int __thiscall
Chaos::FSingleShapePairCollisionDetector::GenerateCollisionProbeImpl
          (FSingleShapePairCollisionDetector *this,float param_1,float param_2,
          TVector<float,3> *param_3,FCollisionContext *param_4)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->Constraint).Ptr == (FPBDCollisionConstraint *)0x0) {
    CreateConstraint(this,(double)param_2,param_4);
  }
  if ((*(byte *)&((this->Constraint).Ptr)->Flags >> 1 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Constraint->IsEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticlePairMidPhase.cpp"
                       ,0x2c0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (this->Constraint).Ptr;
  if (pFVar1 != (FPBDCollisionConstraint *)0x0) {
    Chaos::Private::FCollisionContextAllocator::ActivateConstraint(param_4->Allocator,pFVar1);
    this->LastUsedEpoch = param_4->Allocator->CurrentEpoch;
    return 1;
  }
  return 0;
}

// SetCollision @ 1439de160

void __thiscall
Chaos::FSingleShapePairCollisionDetector::SetCollision
          (FSingleShapePairCollisionDetector *this,FPBDCollisionConstraint *param_1,
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
    (((this->Constraint).Ptr)->ContainerCookie).MidPhase = this->MidPhase;
    (((this->Constraint).Ptr)->ContainerCookie).bIsMultiShapePair = 0;
    (((this->Constraint).Ptr)->ContainerCookie).CreationEpoch = iVar3;
  }
  FPBDCollisionConstraint::RestoreFrom((this->Constraint).Ptr,param_1);
  Chaos::Private::FCollisionContextAllocator::ActivateConstraint
            (param_2->Allocator,(this->Constraint).Ptr);
  this->LastUsedEpoch = iVar3;
  return;
}

// WakeCollision @ 1439e37e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FSingleShapePairCollisionDetector::WakeCollision
          (FSingleShapePairCollisionDetector *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  FPBDCollisionConstraint *pFVar2;
  FShapeInstanceProxy *pFVar3;
  undefined1 auStack_f8 [32];
  TRigidTransform<double,3> local_d8;
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar2 = (this->Constraint).Ptr;
  if ((pFVar2 != (FPBDCollisionConstraint *)0x0) && (param_1 <= this->LastUsedEpoch)) {
    if (CVars::bChaosMidPhaseActivateWakingConstraints) {
      if ((pFVar2->ContainerCookie).LastUsedEpoch != *(int *)(pFVar2->_padding_ + 0x78)) {
        Chaos::Private::FCollisionConstraintAllocator::AddActiveConstraintImpl
                  ((FCollisionConstraintAllocator *)(pFVar2->_padding_ + 0x28),pFVar2);
      }
      (pFVar2->Flags).Bits = (pFVar2->Flags).Bits & 0xfffd;
      param_2 = (((this->Constraint).Ptr)->ContainerCookie).LastUsedEpoch;
    }
    else {
      (pFVar2->ContainerCookie).LastUsedEpoch = param_2;
      (((this->Constraint).Ptr)->ContainerCookie).ConstraintIndex = -1;
      (((this->Constraint).Ptr)->ContainerCookie).CCDConstraintIndex = -1;
    }
    this->LastUsedEpoch = param_2;
    pFVar3 = (FShapeInstanceProxy *)this->Shape1;
    pFVar2 = (this->Constraint).Ptr;
    if ((pFVar3->_padding_ & 3) == 0) {
      FShapeInstanceProxy::GetLeafWorldTransform(pFVar3,&local_78,this->Particle1);
    }
    else {
      FShapeInstance::GetLeafWorldTransform((FShapeInstance *)pFVar3,&local_78,this->Particle1);
    }
    pFVar3 = (FShapeInstanceProxy *)this->Shape0;
    if ((pFVar3->_padding_ & 3) == 0) {
      FShapeInstanceProxy::GetLeafWorldTransform(pFVar3,&local_d8,this->Particle0);
    }
    else {
      FShapeInstance::GetLeafWorldTransform((FShapeInstance *)pFVar3,&local_d8,this->Particle0);
    }
    *(undefined8 *)pFVar2->ShapeWorldTransforms = local_d8._0_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x8 = local_d8._8_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x10 = local_d8._16_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x18 = local_d8._24_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x20 = local_d8._32_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x28 = local_d8._40_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x30 = local_d8._48_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x38 = local_d8._56_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x40 = local_d8._64_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x48 = local_d8._72_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x50 = local_d8._80_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[0].field_0x58 = local_d8._88_8_;
    *(undefined8 *)(pFVar2->ShapeWorldTransforms + 1) = local_78._0_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x8 = local_78._8_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x10 = local_78._16_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x18 = local_78._24_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x20 = local_78._32_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x28 = local_78._40_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x30 = local_78._48_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x38 = local_78._56_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x40 = local_78._64_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x48 = local_78._72_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x50 = local_78._80_8_;
    *(undefined8 *)&pFVar2->ShapeWorldTransforms[1].field_0x58 = local_78._88_8_;
  }
  return;
}

