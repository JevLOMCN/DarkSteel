// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// ConvertToProbe @ 14375b580

void __thiscall Chaos::FCCDModifier::ConvertToProbe(FCCDModifier *this)

{
  FFlags *pFVar1;
  
  if (this->Constraint != (FPBDCollisionConstraint *)0x0) {
    pFVar1 = &this->Constraint->Flags;
    pFVar1->Bits = pFVar1->Bits | 0x800;
    pFVar1 = &this->Constraint->Flags;
    pFVar1->Bits = pFVar1->Bits | 0x100;
  }
  return;
}

// Disable @ 14375e1b0

void __thiscall Chaos::FCCDModifier::Disable(FCCDModifier *this)

{
  FFlags *pFVar1;
  
  if (this->Constraint != (FPBDCollisionConstraint *)0x0) {
    pFVar1 = &this->Constraint->Flags;
    pFVar1->Bits = pFVar1->Bits | 0x800;
    pFVar1 = &this->Constraint->Flags;
    pFVar1->Bits = pFVar1->Bits | 2;
  }
  return;
}

// Enable @ 14376f420

void __thiscall Chaos::FCCDModifier::Enable(FCCDModifier *this)

{
  FFlags *pFVar1;
  
  if (this->Constraint != (FPBDCollisionConstraint *)0x0) {
    pFVar1 = &this->Constraint->Flags;
    pFVar1->Bits = pFVar1->Bits | 0x800;
    pFVar1 = &this->Constraint->Flags;
    pFVar1->Bits = pFVar1->Bits & 0xfffd;
  }
  return;
}

// GetOtherParticle @ 143791dd0

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FCCDModifier::GetOtherParticle
          (FCCDModifier *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDCollisionConstraint *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pFVar1 = this->Constraint;
  if (pFVar1 == (FPBDCollisionConstraint *)0x0) {
    return (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  if (param_1 == pFVar1->Particle[0]) {
    return pFVar1->Particle[1];
  }
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (param_1 == pFVar1->Particle[1]) {
    pTVar2 = pFVar1->Particle[0];
  }
  return pTVar2;
}

// GetParticle @ 143791e10

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FCCDModifier::GetParticle(FCCDModifier *this,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                       ,0x42,L"");
    if (bVar3) {
code_r0x000143791e73:
      pcVar2 = (code *)swi(3);
      pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  else if ((1 < param_1) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleIndex < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                              ,0x43,L""), bVar3)) goto code_r0x000143791e73;
  pFVar1 = this->Constraint;
  if (pFVar1 == (FPBDCollisionConstraint *)0x0) {
    return (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  if (param_1 != 0) {
    return pFVar1->Particle[1];
  }
  return pFVar1->Particle[0];
}

// GetSweepHitTOI @ 143792ce0

double __thiscall Chaos::FCCDModifier::GetSweepHitTOI(FCCDModifier *this)

{
  if (this->Constraint != (FPBDCollisionConstraint *)0x0) {
    return (double)this->Constraint->CCDTimeOfImpact;
  }
  return __real_3ff0000000000000;
}

// GetWorldSweepHitLocation @ 143793a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double,3> * __thiscall
Chaos::FCCDModifier::GetWorldSweepHitLocation
          (FCCDModifier *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FManifoldPoint *pFVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  TVector<double,3> *pTVar11;
  FPBDCollisionConstraint *pFVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_198 [64];
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (param_1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                       ,0x20,L"");
    if (bVar8) {
code_r0x000143793abb:
      pcVar2 = (code *)swi(3);
      pTVar11 = (TVector<double,3> *)(*pcVar2)();
      return pTVar11;
    }
  }
  else if ((1 < param_1) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleIndex < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                              ,0x21,L""), bVar8)) goto code_r0x000143793abb;
  pFVar12 = this->Constraint;
  if ((pFVar12 == (FPBDCollisionConstraint *)0x0) || ((pFVar12->ManifoldPoints).ArrayNum < 1)) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    return __return_storage_ptr__;
  }
  pFVar9 = FPBDCollisionConstraint::GetManifoldPoint(pFVar12,0);
  dVar1 = this->Accessor->Dt;
  dVar3 = __real_3ff0000000000000;
  if (this->Constraint != (FPBDCollisionConstraint *)0x0) {
    dVar3 = (double)this->Constraint->CCDTimeOfImpact;
  }
  if (param_1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                       ,0x42,L"");
    if (bVar8) {
code_r0x000143793b95:
      pcVar2 = (code *)swi(3);
      pTVar11 = (TVector<double,3> *)(*pcVar2)();
      return pTVar11;
    }
  }
  else if ((1 < param_1) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleIndex < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CCDModification.cpp"
                              ,0x43,L""), bVar8)) goto code_r0x000143793b95;
  pFVar12 = this->Constraint;
  pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (pFVar12 != (FPBDCollisionConstraint *)0x0) {
    if (param_1 == 0) {
      FCCDHelpers::GetParticleTransformAtTOI
                ((TRigidTransform<double,3> *)&local_f8,pFVar12->Particle[0],dVar3,dVar1);
      pFVar12 = this->Constraint;
      goto LAB_143793c23;
    }
    pTVar10 = pFVar12->Particle[1];
  }
  FCCDHelpers::GetParticleTransformAtTOI((TRigidTransform<double,3> *)&local_f8,pTVar10,dVar3,dVar1)
  ;
  pFVar12 = this->Constraint;
  if (((param_1 < 0) || (1 < param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                         ,0x2a0,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar11 = (TVector<double,3> *)(*pcVar2)();
    return pTVar11;
  }
LAB_143793c23:
  local_158.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_158.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_158.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_158.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_158,(TTransform<double> *)(pFVar12->ImplicitTransform + param_1),&local_f8);
  dVar22 = local_158.Rotation.XY.m128d_f64[1];
  dVar7 = (double)*(float *)&(pFVar9->ContactPoint).ShapeContactPoints[param_1].field_0x8;
  dVar1 = (double)*(float *)((pFVar9->ContactPoint).ShapeContactPoints + param_1);
  dVar18 = (double)*(float *)&(pFVar9->ContactPoint).ShapeContactPoints[param_1].field_0x4;
  dVar3 = local_158.Rotation.ZW.m128d_f64[0];
  uVar24 = (undefined4)((ulonglong)dVar18 >> 0x20);
  auVar23 = blendpd((undefined1  [16])local_158.Rotation.XY.m128d_f64,
                    (undefined1  [16])local_158.Rotation.ZW.m128d_f64,2);
  auVar25._8_4_ = SUB84(dVar18,0);
  auVar25._0_8_ = dVar1;
  auVar25._12_4_ = uVar24;
  dVar4 = local_158.Rotation.ZW.m128d_f64[1];
  auVar13._8_4_ = SUB84(dVar18,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = uVar24;
  auVar26._0_8_ = auVar25._8_8_ * local_158.Rotation.XY.m128d_f64[0] - dVar1 * dVar22;
  auVar26._8_8_ = dVar7 * dVar22 - dVar18 * dVar3;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar7;
  auVar14 = blendpd(auVar13,auVar21,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar3 - auVar23._0_8_ * dVar7;
  auVar15._8_8_ = auVar14._8_8_ * dVar4 - auVar23._8_8_ * 0.0;
  auVar14 = blendpd(auVar26,auVar15,2);
  dVar5 = auVar26._8_8_ + auVar26._8_8_;
  dVar6 = auVar15._0_8_ + auVar15._0_8_;
  uVar24 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar27._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar27._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar5;
  auVar19._12_4_ = uVar24;
  auVar16._8_4_ = SUB84(dVar6,0);
  auVar16._0_8_ = dVar5;
  auVar16._12_4_ = uVar24;
  auVar14 = blendpd(auVar16,auVar27,2);
  auVar20._0_8_ = auVar19._8_8_ * local_158.Rotation.XY.m128d_f64[0] - dVar5 * dVar22;
  auVar20._8_8_ = auVar27._0_8_ * dVar22 - dVar6 * dVar3;
  auVar17._0_8_ = auVar14._0_8_ * dVar3 - auVar27._0_8_ * auVar23._0_8_;
  auVar17._8_8_ = auVar14._8_8_ * dVar4 - auVar27._8_8_ * auVar23._8_8_;
  auVar21 = blendpd(auVar20,auVar17,2);
  local_158.Translation.XY.m128d_f64[1] =
       dVar6 * dVar4 + dVar18 + auVar17._0_8_ + local_158.Translation.XY.m128d_f64[1];
  auVar14._8_4_ = SUB84(local_158.Translation.XY.m128d_f64[1],0);
  auVar14._0_8_ = dVar5 * dVar4 + dVar1 + auVar20._8_8_ + local_158.Translation.XY.m128d_f64[0];
  auVar14._12_4_ = (int)((ulonglong)local_158.Translation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar14;
  *(double *)&__return_storage_ptr__->field_0x10 =
       auVar27._0_8_ * dVar4 + dVar7 + auVar21._0_8_ + local_158.Translation.ZW.m128d_f64[0];
  return __return_storage_ptr__;
}

// GetWorldSweepHitNormal @ 143793e20

TVector<double,3> * __thiscall
Chaos::FCCDModifier::GetWorldSweepHitNormal
          (FCCDModifier *this,TVector<double,3> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  FPBDCollisionConstraint *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FManifoldPoint *pFVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  pFVar2 = this->Constraint;
  if ((pFVar2 == (FPBDCollisionConstraint *)0x0) || ((pFVar2->ManifoldPoints).ArrayNum < 1)) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0x3ff0000000000000;
  }
  else {
    pFVar6 = FPBDCollisionConstraint::GetManifoldPoint(pFVar2,0);
    pFVar2 = this->Constraint;
    dVar4 = (double)*(float *)&(pFVar6->ContactPoint).ShapeContactNormal.field_0x8;
    auVar1 = *(undefined1 (*) [16])&pFVar2->ShapeWorldTransforms[1].field_0x10;
    auVar7 = *(undefined1 (*) [16])(pFVar2->ShapeWorldTransforms + 1);
    dVar5 = *(double *)&pFVar2->ShapeWorldTransforms[1].field_0x18;
    auVar15 = blendpd(auVar7,auVar1,2);
    dVar3 = (double)*(float *)&(pFVar6->ContactPoint).ShapeContactNormal;
    dVar10 = (double)*(float *)&(pFVar6->ContactPoint).ShapeContactNormal.field_0x4;
    uVar18 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar9 = *(undefined1 (*) [16])(pFVar2->ShapeWorldTransforms + 1);
    auVar21._8_4_ = SUB84(dVar10,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar18;
    dVar11 = auVar1._0_8_;
    auVar22._0_8_ = auVar21._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar3;
    auVar22._8_8_ = dVar4 * auVar7._8_8_ - dVar11 * dVar10;
    auVar12._8_4_ = SUB84(dVar10,0);
    auVar12._0_8_ = dVar3;
    auVar12._12_4_ = uVar18;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar4;
    auVar7 = blendpd(auVar12,auVar7,2);
    auVar8._0_8_ = auVar7._0_8_ * dVar11 - auVar15._0_8_ * dVar4;
    auVar8._8_8_ = auVar7._8_8_ * auVar1._8_8_ - auVar15._8_8_ * 0.0;
    auVar16._8_4_ = SUB84(auVar22._8_8_,0);
    auVar16._0_8_ = auVar22._0_8_;
    auVar16._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
    auVar7 = blendpd(auVar22,auVar8,2);
    auVar23._0_8_ = auVar7._0_8_ + auVar7._0_8_;
    auVar23._8_8_ = auVar7._8_8_ + auVar7._8_8_;
    dVar14 = auVar16._8_8_ + auVar16._8_8_;
    dVar17 = auVar8._0_8_ + auVar8._0_8_;
    auVar19._8_4_ = SUB84(dVar17,0);
    auVar19._0_8_ = dVar14;
    uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
    auVar19._12_4_ = uVar18;
    auVar15._8_4_ = SUB84(dVar17,0);
    auVar15._0_8_ = dVar14;
    auVar15._12_4_ = uVar18;
    auVar7 = blendpd(auVar9,auVar1,2);
    auVar12 = blendpd(auVar15,auVar23,2);
    auVar20._0_8_ = auVar19._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar14;
    auVar20._8_8_ = auVar23._0_8_ * auVar9._8_8_ - dVar11 * dVar17;
    auVar9._8_4_ = SUB84(auVar20._8_8_,0);
    auVar9._0_8_ = auVar20._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
    auVar13._0_8_ = auVar12._0_8_ * dVar11 - auVar7._0_8_ * auVar23._0_8_;
    auVar13._8_8_ = auVar12._8_8_ * auVar1._8_8_ - auVar7._8_8_ * auVar23._8_8_;
    auVar7 = blendpd(auVar20,auVar13,2);
    dVar10 = dVar5 * dVar17 + dVar10 + auVar13._0_8_;
    auVar1._8_4_ = SUB84(dVar10,0);
    auVar1._0_8_ = dVar5 * dVar14 + dVar3 + auVar9._8_8_;
    auVar1._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__ = auVar1;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar5 * auVar23._0_8_ + dVar4 + auVar7._0_8_;
  }
  return __return_storage_ptr__;
}

// IsSweepHit @ 1437983a0

bool __thiscall Chaos::FCCDModifier::IsSweepHit(FCCDModifier *this)

{
  FPBDCollisionConstraint *pFVar1;
  
  pFVar1 = this->Constraint;
  if (((pFVar1 != (FPBDCollisionConstraint *)0x0) && (((pFVar1->Flags).Bits >> 10 & 1) != 0)) &&
     (0 < (pFVar1->ManifoldPoints).ArrayNum)) {
    return true;
  }
  return false;
}

