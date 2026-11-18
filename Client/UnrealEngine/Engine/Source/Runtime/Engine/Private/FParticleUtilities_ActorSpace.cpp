// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetCoMWorldPosition<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> @ 148240c80

TVector<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetCoMWorldPosition<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
          (TVector<double,3> *__return_storage_ptr__,TPBDRigidParticleHandleImp<double,3,1> *param_1
          )

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double,3> *pTVar10;
  TVector<double,3> *pTVar11;
  TVector<double> *pTVar12;
  uint uVar13;
  longlong lVar14;
  TVector<double>_u_0 local_78;
  TVector<double> local_58 [2];
  undefined1 local_28 [32];
  
  pTVar10 = TPBDRigidParticleHandleImp<double,3,1>::GetP(param_1);
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar14 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_1;
  uVar13 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x568)) {
    uVar13 = ~uVar3 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x560);
  local_28._0_8_ = (undefined8)*(float *)(lVar4 + lVar14 * 0x10);
  local_28._8_8_ = (undefined8)*(float *)(lVar4 + 4 + lVar14 * 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 8 + lVar14 * 0x10);
  dVar6 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_28._24_4_ = SUB84(dVar6,0);
  local_28._16_8_ = (double)(float)uVar1;
  local_28._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
  pTVar11 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(param_1);
  local_78._s_0.X = (double)*(undefined8 *)pTVar11;
  local_78._s_0.Y = (double)*(undefined8 *)&pTVar11->field_0x8;
  local_78._s_0.Z = (double)*(undefined8 *)&pTVar11->field_0x10;
  pTVar12 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_28,local_58,(TVector<double> *)&local_78._s_0);
  dVar7 = (pTVar12->field0_0x0)._s_0.X;
  dVar8 = (pTVar12->field0_0x0)._s_0.Y;
  dVar6 = *(double *)&pTVar10->field_0x8;
  dVar2 = *(double *)pTVar10;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar12->field0_0x0)._s_0.Z + *(double *)&pTVar10->field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar8 + dVar6;
  *(double *)__return_storage_ptr__ = dVar7 + dVar2;
  return __return_storage_ptr__;
}

// GetCoMWorldRotation<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> @ 148240dd0

TRotation<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetCoMWorldRotation<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
          (TRotation<double,3> *__return_storage_ptr__,
          TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  TRotation<double,3> *pTVar22;
  longlong lVar23;
  
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar23 = (longlong)(int)uVar2;
  lVar3 = *(longlong *)param_1;
  uVar21 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x568)) {
    uVar21 = ~uVar2 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      pTVar22 = (TRotation<double,3> *)(*pcVar4)();
      return pTVar22;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x560);
  uVar1 = *(undefined8 *)(lVar3 + 8 + lVar23 * 0x10);
  dVar14 = (double)(float)uVar1;
  dVar15 = (double)(float)((ulonglong)uVar1 >> 0x20);
  dVar11 = (double)*(float *)(lVar3 + lVar23 * 0x10);
  dVar13 = (double)*(float *)(lVar3 + 4 + lVar23 * 0x10);
  pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass(param_1);
  dVar16 = *(double *)&pTVar22->field_0x10;
  dVar17 = *(double *)&pTVar22->field_0x18;
  dVar18 = *(double *)pTVar22;
  dVar19 = *(double *)&pTVar22->field_0x8;
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar12 = dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar17 * dVar15 +
           dVar19 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar19 * dVar15 +
          dVar17 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar14 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar11 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar18 * dVar15 +
                 dVar16 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar14 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar8;
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ =
       dVar11 * dVar19 * dVar5 + dVar16 * dVar15 + dVar18 * dVar13 * dVar7 + dVar14 * dVar17 * dVar6
  ;
  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar10;
  return __return_storage_ptr__;
}

// GetWorldInvInertia<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> @ 148241260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

PMatrix<double,3,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetWorldInvInertia<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
          (PMatrix<double,3,3> *__return_storage_ptr__,
          TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  TVector<float,3> *pTVar19;
  PMatrix<double,3,3> *pPVar20;
  TRotation<double,3> *pTVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  double local_138 [6];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  
  pTVar19 = TPBDRigidParticleHandleImp<double,3,1>::InvI(param_1);
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar22 = (longlong)(int)uVar5;
  lVar6 = *(longlong *)param_1;
  fVar1 = *(float *)pTVar19;
  fVar2 = *(float *)&pTVar19->field_0x4;
  fVar3 = *(float *)&pTVar19->field_0x8;
  uVar18 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x568)) {
    uVar18 = ~uVar5 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      pPVar20 = (PMatrix<double,3,3> *)(*pcVar7)();
      return pPVar20;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x560);
  uVar4 = *(undefined8 *)(lVar6 + 8 + lVar22 * 0x10);
  dVar11 = (double)(float)uVar4;
  dVar12 = (double)(float)((ulonglong)uVar4 >> 0x20);
  dVar9 = (double)*(float *)(lVar6 + lVar22 * 0x10);
  dVar10 = (double)*(float *)(lVar6 + 4 + lVar22 * 0x10);
  pTVar21 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass(param_1);
  dVar13 = *(double *)&pTVar21->field_0x10;
  dVar14 = *(double *)&pTVar21->field_0x18;
  dVar15 = *(double *)pTVar21;
  dVar16 = *(double *)&pTVar21->field_0x8;
  auVar23._8_4_ = SUB84(dVar10,0);
  auVar23._0_8_ = dVar10;
  auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar8 = dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar12 * dVar16 +
          auVar23._8_8_ * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_b8._8_4_ = SUB84(dVar8,0);
  local_b8._0_8_ =
       dVar9 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar12 * dVar15 +
       dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_b8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar8 = dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar12 * dVar14 +
          dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar11 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_138[4] = 0.0;
  local_f8 = 0;
  local_138[1] = 0.0;
  local_f0 = 0;
  local_138[2] = 0.0;
  local_108 = 0;
  local_138[3] = 0.0;
  local_100 = 0;
  local_e0 = 0;
  local_a8._8_4_ = SUB84(dVar8,0);
  local_a8._0_8_ =
       dVar9 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar12 * dVar13 +
       dVar10 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar11 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_a8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = ___xmm_3ff00000000000000000000000000000;
  uStack_c0 = _UNK_15061cbc8;
  local_138[0] = (double)fVar1;
  local_138[5] = (double)fVar2;
  local_e8 = (double)fVar3;
  Utilities::ComputeWorldSpaceInertia
            (__return_storage_ptr__,(TRotation<double,3> *)local_b8,(PMatrix<double,3,3> *)local_138
            );
  return __return_storage_ptr__;
}

