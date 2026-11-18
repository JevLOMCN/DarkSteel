// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 5

// GetCoMWorldPosition<Chaos::FRigidBodyHandle_External_*> @ 14413afc0

TVector<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
GetCoMWorldPosition<Chaos::FRigidBodyHandle_External_*>
          (TVector<double,3> *__return_storage_ptr__,FRigidBodyHandle_External *param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  TVector<double> *pTVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  TVector<double>_u_0 local_68;
  TVector<double> local_48;
  undefined1 local_28 [32];
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar2 = *(longlong *)&param_1->field_0x40;
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar6 = *(longlong *)&param_1->field_0x40;
  local_28._0_8_ = (undefined8)*(float *)(lVar6 + 0x40);
  local_28._8_8_ = (undefined8)*(float *)(lVar6 + 0x44);
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)(lVar6 + 0x48) >> 0x20);
  local_28._24_4_ = SUB84(dVar3,0);
  local_28._16_8_ = (double)(float)*(undefined8 *)(lVar6 + 0x48);
  local_28._28_4_ = (int)((ulonglong)dVar3 >> 0x20);
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar6 = *(longlong *)&param_1->field_0x40;
  if (*(byte *)(*(longlong *)&param_1->field_0x40 + 0x98) < 2) {
    lVar6 = 0;
  }
  if (lVar6 == 0) {
    uVar8 = 0;
    uVar9 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    local_68._8_4_ = 0;
    local_68._12_4_ = 0;
  }
  else {
    local_68._0_4_ = *(undefined4 *)(lVar6 + 0xf0);
    local_68._4_4_ = *(undefined4 *)(lVar6 + 0xf4);
    local_68._8_4_ = *(undefined4 *)(lVar6 + 0xf8);
    local_68._12_4_ = *(undefined4 *)(lVar6 + 0xfc);
    uVar8 = (undefined4)*(undefined8 *)(lVar6 + 0x100);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x100) >> 0x20);
  }
  local_68._s_0.Z = (double)CONCAT44(uVar9,uVar8);
  pTVar7 = UE::Math::TQuat<double>::RotateVector
                     ((TQuat<double> *)local_28,&local_48,(TVector<double> *)&local_68._s_0);
  dVar4 = (pTVar7->field0_0x0)._s_0.X;
  dVar5 = (pTVar7->field0_0x0)._s_0.Y;
  dVar3 = *(double *)(lVar2 + 0x28);
  dVar1 = *(double *)(lVar2 + 0x20);
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar7->field0_0x0)._s_0.Z + *(double *)(lVar2 + 0x30);
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5 + dVar3;
  *(double *)__return_storage_ptr__ = dVar4 + dVar1;
  return __return_storage_ptr__;
}

// GetCoMWorldPosition<Chaos::FRigidBodyHandle_Internal_*> @ 14413b0c0

TVector<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
GetCoMWorldPosition<Chaos::FRigidBodyHandle_Internal_*>
          (TVector<double,3> *__return_storage_ptr__,FRigidBodyHandle_Internal *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double,3> *pTVar5;
  TVector<double,3> *pTVar6;
  TVector<double> *pTVar7;
  TPBDRigidParticleHandleImp<double,3,1> *this;
  TVector<double>_u_0 local_68;
  TVector<double> local_48;
  TQuat<double> local_28;
  
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pTVar5 = TParticles<double,3>::GetX
                     ((TParticles<double,3> *)**(undefined8 **)&param_1->field_0x48,
                      *(int *)(*(undefined8 **)&param_1->field_0x48 + 1));
  TThreadedSingleParticlePhysicsProxyBase<0>::GetR
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1,(TRotation<double,3> *)&local_28)
  ;
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  this = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    this = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (this == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    local_68._s_0.Z = 0.0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    local_68._8_4_ = 0;
    local_68._12_4_ = 0;
  }
  else {
    pTVar6 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(this);
    local_68._0_4_ = *(undefined4 *)pTVar6;
    local_68._4_4_ = *(undefined4 *)&pTVar6->field_0x4;
    local_68._8_4_ = *(undefined4 *)&pTVar6->field_0x8;
    local_68._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
    local_68._s_0.Z = (double)*(undefined8 *)&pTVar6->field_0x10;
  }
  pTVar7 = UE::Math::TQuat<double>::RotateVector
                     (&local_28,&local_48,(TVector<double> *)&local_68._s_0);
  dVar3 = (pTVar7->field0_0x0)._s_0.X;
  dVar4 = (pTVar7->field0_0x0)._s_0.Y;
  dVar1 = *(double *)&pTVar5->field_0x8;
  dVar2 = *(double *)pTVar5;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar7->field0_0x0)._s_0.Z + *(double *)&pTVar5->field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar4 + dVar1;
  *(double *)__return_storage_ptr__ = dVar3 + dVar2;
  return __return_storage_ptr__;
}

// GetCoMWorldRotation<Chaos::FRigidBodyHandle_External_*> @ 14413b1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRotation<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
GetCoMWorldRotation<Chaos::FRigidBodyHandle_External_*>
          (TRotation<double,3> *__return_storage_ptr__,FRigidBodyHandle_External *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar12 = *(longlong *)&param_1->field_0x40;
  dVar9 = (double)(float)*(undefined8 *)(lVar12 + 0x48);
  dVar10 = (double)(float)((ulonglong)*(undefined8 *)(lVar12 + 0x48) >> 0x20);
  dVar7 = (double)*(float *)(lVar12 + 0x40);
  dVar11 = (double)*(float *)(lVar12 + 0x44);
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar12 = *(longlong *)&param_1->field_0x40;
  if (*(byte *)(*(longlong *)&param_1->field_0x40 + 0x98) < 2) {
    lVar12 = 0;
  }
  if (lVar12 == 0) {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    dVar17 = ___xmm_3ff00000000000000000000000000000;
    dVar18 = _UNK_15061cbc8;
  }
  else {
    uVar13 = *(undefined4 *)(lVar12 + 0x110);
    uVar14 = *(undefined4 *)(lVar12 + 0x114);
    uVar15 = *(undefined4 *)(lVar12 + 0x118);
    uVar16 = *(undefined4 *)(lVar12 + 0x11c);
    dVar17 = *(double *)(lVar12 + 0x120);
    dVar18 = *(double *)(lVar12 + 0x128);
  }
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar8 = dVar7 * (double)CONCAT44(uVar14,uVar13) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar18 * dVar10 +
          (double)CONCAT44(uVar16,uVar15) * dVar11 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar9 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar5 = dVar7 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          (double)CONCAT44(uVar16,uVar15) * dVar10 +
          dVar18 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar9 * (double)CONCAT44(uVar14,uVar13) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar7 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 (double)CONCAT44(uVar14,uVar13) * dVar10 +
                 dVar17 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar9 * (double)CONCAT44(uVar16,uVar15) *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar4;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7 * (double)CONCAT44(uVar16,uVar15) * dVar1 + dVar17 * dVar10 +
                 (double)CONCAT44(uVar14,uVar13) * dVar11 * dVar3 + dVar9 * dVar18 * dVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar6;
  return __return_storage_ptr__;
}

// GetWorldInertia<Chaos::FRigidBodyHandle_External_*> @ 14413c0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

PMatrix<double,3,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
GetWorldInertia<Chaos::FRigidBodyHandle_External_*>
          (PMatrix<double,3,3> *__return_storage_ptr__,FRigidBodyHandle_External *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_158;
  double local_148 [6];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar6 = *(longlong *)&param_1->field_0x40;
  if (*(byte *)(*(longlong *)&param_1->field_0x40 + 0x98) < 2) {
    lVar6 = 0;
  }
  if (lVar6 == 0) {
    fVar8 = 0.0;
    local_158 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x130) >> 0x20);
    fVar8 = *(float *)(lVar6 + 0x138);
    local_158 = (float)*(undefined8 *)(lVar6 + 0x130);
  }
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar6 = *(longlong *)&param_1->field_0x40;
  dVar3 = (double)(float)*(undefined8 *)(lVar6 + 0x48);
  dVar4 = (double)(float)((ulonglong)*(undefined8 *)(lVar6 + 0x48) >> 0x20);
  dVar2 = (double)*(float *)(lVar6 + 0x40);
  dVar5 = (double)*(float *)(lVar6 + 0x44);
  TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)param_1);
  lVar6 = *(longlong *)&param_1->field_0x40;
  if (*(byte *)(*(longlong *)&param_1->field_0x40 + 0x98) < 2) {
    lVar6 = 0;
  }
  if (lVar6 == 0) {
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = ___xmm_3ff00000000000000000000000000000;
    uVar14 = _UNK_15061cbc4;
    uVar15 = _UNK_15061cbc8;
    uVar16 = _UNK_15061cbcc;
  }
  else {
    uVar9 = *(undefined4 *)(lVar6 + 0x110);
    uVar10 = *(undefined4 *)(lVar6 + 0x114);
    uVar11 = *(undefined4 *)(lVar6 + 0x118);
    uVar12 = *(undefined4 *)(lVar6 + 0x11c);
    uVar13 = *(undefined4 *)(lVar6 + 0x120);
    uVar14 = *(undefined4 *)(lVar6 + 0x124);
    uVar15 = *(undefined4 *)(lVar6 + 0x128);
    uVar16 = *(undefined4 *)(lVar6 + 300);
  }
  local_d8 = ___xmm_3ff00000000000000000000000000000;
  uStack_d4 = _UNK_15061cbc4;
  uStack_d0 = _UNK_15061cbc8;
  uStack_cc = _UNK_15061cbcc;
  dVar1 = dVar2 * (double)CONCAT44(uVar14,uVar13) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar4 * (double)CONCAT44(uVar12,uVar11) +
          dVar5 * (double)CONCAT44(uVar16,uVar15) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar3 * (double)CONCAT44(uVar10,uVar9) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_c8._8_4_ = SUB84(dVar1,0);
  local_c8._0_8_ =
       dVar2 * (double)CONCAT44(uVar16,uVar15) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar4 * (double)CONCAT44(uVar10,uVar9) +
       dVar5 * (double)CONCAT44(uVar14,uVar13) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar3 * (double)CONCAT44(uVar12,uVar11) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = dVar2 * (double)CONCAT44(uVar10,uVar9) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar4 * (double)CONCAT44(uVar16,uVar15) +
          dVar5 * (double)CONCAT44(uVar12,uVar11) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar3 * (double)CONCAT44(uVar14,uVar13) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_148[4] = 0.0;
  local_108 = 0;
  local_148[1] = 0.0;
  local_100 = 0;
  local_148[2] = 0.0;
  local_118 = 0;
  local_148[3] = 0.0;
  local_110 = 0;
  local_f0 = 0;
  local_b8._8_4_ = SUB84(dVar1,0);
  local_b8._0_8_ =
       dVar2 * (double)CONCAT44(uVar12,uVar11) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar4 * (double)CONCAT44(uVar14,uVar13) +
       dVar5 * (double)CONCAT44(uVar10,uVar9) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar3 * (double)CONCAT44(uVar16,uVar15) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_b8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_e8 = 0;
  uStack_e0 = 0;
  local_148[0] = (double)local_158;
  local_148[5] = (double)fVar7;
  local_f8 = (double)fVar8;
  Utilities::ComputeWorldSpaceInertia
            (__return_storage_ptr__,(TRotation<double,3> *)local_c8,(PMatrix<double,3,3> *)local_148
            );
  return __return_storage_ptr__;
}

// GetWorldInertia<Chaos::FRigidBodyHandle_Internal_*> @ 14413c3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

PMatrix<double,3,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
GetWorldInertia<Chaos::FRigidBodyHandle_Internal_*>
          (PMatrix<double,3,3> *__return_storage_ptr__,FRigidBodyHandle_Internal *param_1)

{
  double dVar1;
  TVector<float,3> *pTVar2;
  TRotation<double,3> *pTVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_168;
  double local_158 [6];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar4 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    fVar6 = 0.0;
    local_168 = 0.0;
    fVar5 = 0.0;
  }
  else {
    pTVar2 = TPBDRigidParticleHandleImp<double,3,1>::I(pTVar4);
    fVar5 = (float)((ulonglong)*(undefined8 *)pTVar2 >> 0x20);
    fVar6 = *(float *)&pTVar2->field_0x8;
    local_168 = (float)*(undefined8 *)pTVar2;
  }
  TThreadedSingleParticlePhysicsProxyBase<0>::GetR
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1,(TRotation<double,3> *)&local_d8)
  ;
  TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<0> *)param_1);
  uStack_dc = _UNK_15061cbcc;
  uStack_e0 = _UNK_15061cbc8;
  uStack_e4 = _UNK_15061cbc4;
  local_e8 = ___xmm_3ff00000000000000000000000000000;
  pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48)->field_0xc) {
    pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)&param_1->field_0x48;
  }
  if (pTVar4 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = ___xmm_3ff00000000000000000000000000000;
    uVar12 = _UNK_15061cbc4;
    uVar13 = _UNK_15061cbc8;
    uVar14 = _UNK_15061cbcc;
  }
  else {
    pTVar3 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass(pTVar4);
    uVar7 = *(undefined4 *)pTVar3;
    uVar8 = *(undefined4 *)&pTVar3->field_0x4;
    uVar9 = *(undefined4 *)&pTVar3->field_0x8;
    uVar10 = *(undefined4 *)&pTVar3->field_0xc;
    uVar11 = *(undefined4 *)&pTVar3->field_0x10;
    uVar12 = *(undefined4 *)&pTVar3->field_0x14;
    uVar13 = *(undefined4 *)&pTVar3->field_0x18;
    uVar14 = *(undefined4 *)&pTVar3->field_0x1c;
  }
  dVar1 = local_d8 * (double)CONCAT44(uVar12,uVar11) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          (double)CONCAT44(uVar10,uVar9) * dStack_c0 +
          (double)CONCAT44(uVar14,uVar13) * dStack_d0 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_c8 * (double)CONCAT44(uVar8,uVar7) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_b8._8_4_ = SUB84(dVar1,0);
  local_b8._0_8_ =
       local_d8 * (double)CONCAT44(uVar14,uVar13) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       (double)CONCAT44(uVar8,uVar7) * dStack_c0 +
       (double)CONCAT44(uVar12,uVar11) * dStack_d0 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       local_c8 * (double)CONCAT44(uVar10,uVar9) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_b8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = local_d8 * (double)CONCAT44(uVar8,uVar7) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          (double)CONCAT44(uVar14,uVar13) * dStack_c0 +
          (double)CONCAT44(uVar10,uVar9) * dStack_d0 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          local_c8 * (double)CONCAT44(uVar12,uVar11) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_158[4] = 0.0;
  local_118 = 0;
  local_158[1] = 0.0;
  local_110 = 0;
  local_158[2] = 0.0;
  local_128 = 0;
  local_158[3] = 0.0;
  local_120 = 0;
  local_100 = 0;
  local_a8._8_4_ = SUB84(dVar1,0);
  local_a8._0_8_ =
       local_d8 * (double)CONCAT44(uVar10,uVar9) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       (double)CONCAT44(uVar12,uVar11) * dStack_c0 +
       (double)CONCAT44(uVar8,uVar7) * dStack_d0 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       local_c8 * (double)CONCAT44(uVar14,uVar13) *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_a8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_f8 = 0;
  uStack_f0 = 0;
  local_158[0] = (double)local_168;
  local_158[5] = (double)fVar5;
  local_108 = (double)fVar6;
  Utilities::ComputeWorldSpaceInertia
            (__return_storage_ptr__,(TRotation<double,3> *)local_b8,(PMatrix<double,3,3> *)local_158
            );
  return __return_storage_ptr__;
}

