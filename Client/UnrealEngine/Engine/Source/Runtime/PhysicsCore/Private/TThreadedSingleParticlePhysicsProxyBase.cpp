// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 13

// operator()<Chaos::TGeometryParticle<double,3>_const_> @ 144135390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double,3> * __thiscall
`Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::AngularImpulse'::__l2::<lambda_1>::
operator()<Chaos::TGeometryParticle<double,3>_const_>
          (void *this,TVector<double,3> *__return_storage_ptr__,TGeometryParticle<double,3> *param_1
          )

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar5;
  TReferenceControllerBase<1> *pTVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double local_178 [6];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  
  if (param_1->Type < Rigid) {
    param_1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (param_1 == (TGeometryParticle<double,3> *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    dVar4 = *(double *)param_1[1].MShapesArray.AllocatorInstance.InlineData;
    FVar5 = param_1[1].MShapesArray.AllocatorInstance.SecondaryData;
    dVar2 = (double)*(float *)&(param_1->MXR).Property.MR.field_0x4;
    dVar10 = (double)*(float *)&(param_1->MXR).Property.MR;
    pTVar6 = param_1[1].MNonFrequentData.Property.MDebugName.SharedReferenceCount.
             ReferenceController;
    pvVar7 = param_1[1].MUserData;
    uVar1 = *(undefined8 *)&(param_1->MXR).Property.MR.field_0x8;
    dVar12 = (double)(float)uVar1;
    dVar3 = (double)(float)((ulonglong)uVar1 >> 0x20);
    auVar8._8_4_ = SUB84(dVar3,0);
    auVar8._0_8_ = dVar3;
    auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar9._8_4_ = SUB84(dVar12,0);
    auVar9._0_8_ = dVar12;
    auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar11 = dVar10 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar8._8_8_ * (double)pvVar7 +
             dVar2 * (double)FVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + auVar9._8_8_ * (double)pTVar6 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_178[0] = (double)(float)param_1[1].MShapesArray.ArrayNum;
    local_178[5] = (double)(float)param_1[1].MShapesArray.ArrayMax;
    local_f8._8_4_ = SUB84(dVar11,0);
    local_f8._0_8_ =
         dVar10 * (double)FVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar3 * (double)pTVar6 +
         dVar2 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar12 * (double)pvVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_f8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_128 = (double)*(float *)&param_1[1].Type;
    dVar11 = dVar10 * (double)pTVar6 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar3 * (double)FVar5
             + dVar2 * (double)pvVar7 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar12 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_108 = ___xmm_3ff00000000000000000000000000000;
    uStack_100 = _UNK_15061cbc8;
    local_178[4] = 0.0;
    local_138 = 0;
    local_178[1] = 0.0;
    local_130 = 0;
    local_178[2] = 0.0;
    local_148 = 0;
    local_178[3] = 0.0;
    local_140 = 0;
    local_120 = 0;
    local_e8._8_4_ = SUB84(dVar11,0);
    local_e8._0_8_ =
         dVar10 * (double)pvVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar3 * dVar4 +
         dVar2 * (double)pTVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar12 * (double)FVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_e8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_118 = 0;
    uStack_110 = 0;
    Chaos::Utilities::ComputeWorldSpaceInertia
              ((PMatrix<double,3,3> *)&local_d8,(TRotation<double,3> *)local_f8,
               (PMatrix<double,3,3> *)local_178);
    dVar11 = (double)*(float *)&param_1[2].MXR.Property.MX.field_0x14;
    dVar2 = (double)*(float *)&param_1[2].MXR.Property._padding_;
    dVar12 = (double)*(float *)((longlong)&param_1[2].MXR.Property._padding_ + 4);
    *(double *)__return_storage_ptr__ = dVar2 * local_d0 + dVar11 * local_d8 + dVar12 * local_c8;
    *(double *)&__return_storage_ptr__->field_0x10 =
         dVar2 * local_90 + dVar11 * local_98 + dVar12 * local_88;
    *(double *)&__return_storage_ptr__->field_0x8 =
         dVar2 * local_b0 + dVar11 * local_b8 + dVar12 * local_a8;
  }
  return __return_storage_ptr__;
}

// operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_const_> @ 144135630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double,3> * __thiscall
`Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::AngularImpulse'::__l2::<lambda_1>::
operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_const_>
          (void *this,TVector<double,3> *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1)

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
  TVector<float,3> *pTVar18;
  TVector<double,3> *pTVar19;
  TRotation<double,3> *pTVar20;
  uint uVar21;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar22;
  undefined1 auVar23 [16];
  double local_1c8 [6];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    this_00 = param_1;
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    pTVar18 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::I
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    uVar5 = (uint)this_00->_padding_;
    lVar22 = (longlong)(int)uVar5;
    lVar6 = this_00->_padding_;
    fVar1 = *(float *)pTVar18;
    fVar2 = *(float *)&pTVar18->field_0x4;
    fVar3 = *(float *)&pTVar18->field_0x8;
    uVar21 = 0;
    if ((int)uVar5 < *(int *)(lVar6 + 0x50)) {
      uVar21 = ~uVar5 >> 0x1f;
    }
    if (uVar21 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        pTVar19 = (TVector<double,3> *)(*pcVar7)();
        return pTVar19;
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x48);
    uVar4 = *(undefined8 *)(lVar6 + 8 + lVar22 * 0x10);
    dVar11 = (double)(float)uVar4;
    dVar12 = (double)(float)((ulonglong)uVar4 >> 0x20);
    dVar9 = (double)*(float *)(lVar6 + lVar22 * 0x10);
    dVar10 = (double)*(float *)(lVar6 + 4 + lVar22 * 0x10);
    pTVar20 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    dVar13 = *(double *)&pTVar20->field_0x10;
    dVar14 = *(double *)&pTVar20->field_0x18;
    dVar15 = *(double *)pTVar20;
    dVar16 = *(double *)&pTVar20->field_0x8;
    auVar23._8_4_ = SUB84(dVar10,0);
    auVar23._0_8_ = dVar10;
    auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    dVar8 = dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar12 * dVar16 +
            auVar23._8_8_ * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
            + dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_148._8_4_ = SUB84(dVar8,0);
    local_148._0_8_ =
         dVar9 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar12 * dVar15 +
         dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_148._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dVar8 = dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar12 * dVar14 +
            dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar11 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_1c8[4] = 0.0;
    local_188 = 0;
    local_1c8[1] = 0.0;
    local_180 = 0;
    local_1c8[2] = 0.0;
    local_198 = 0;
    local_1c8[3] = 0.0;
    local_190 = 0;
    local_170 = 0;
    local_138._8_4_ = SUB84(dVar8,0);
    local_138._0_8_ =
         dVar9 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar12 * dVar13 +
         dVar10 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar11 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_138._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_168 = 0;
    uStack_160 = 0;
    local_158 = ___xmm_3ff00000000000000000000000000000;
    uStack_150 = _UNK_15061cbc8;
    local_1c8[0] = (double)fVar1;
    local_1c8[5] = (double)fVar2;
    local_178 = (double)fVar3;
    Chaos::Utilities::ComputeWorldSpaceInertia
              ((PMatrix<double,3,3> *)&local_128,(TRotation<double,3> *)local_148,
               (PMatrix<double,3,3> *)local_1c8);
    pTVar19 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularImpulseVelocity
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    dVar8 = *(double *)pTVar19;
    dVar9 = *(double *)&pTVar19->field_0x8;
    dVar10 = *(double *)&pTVar19->field_0x10;
    *(double *)__return_storage_ptr__ = local_120 * dVar9 + local_128 * dVar8 + local_118 * dVar10;
    *(double *)&__return_storage_ptr__->field_0x8 =
         local_100 * dVar9 + local_108 * dVar8 + local_f8 * dVar10;
    *(double *)&__return_storage_ptr__->field_0x10 =
         local_e0 * dVar9 + local_e8 * dVar8 + local_d8 * dVar10;
  }
  return __return_storage_ptr__;
}

// operator()<Chaos::TGeometryParticle<double,3>_> @ 144135af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetAngularImpulse'::__l2::<lambda_1>::
operator()<Chaos::TGeometryParticle<double,3>_>(void *this,TGeometryParticle<double,3> *param_1)

{
  EObjectStateType EVar1;
  IPhysicsProxyBase *pIVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double local_158 [6];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  
  if (param_1->Type < Rigid) {
    param_1 = (TGeometryParticle<double,3> *)(TPBDRigidParticle<double,3> *)0x0;
  }
  if (((TPBDRigidParticle<double,3> *)param_1 != (TPBDRigidParticle<double,3> *)0x0) &&
     ((EVar1 = (((TPBDRigidParticle<double,3> *)param_1)->MMiscData).Property.MObjectState,
      EVar1 == Sleeping || (EVar1 == Dynamic)))) {
    if (*(char *)((longlong)this + 9) != '\0') {
      if (EVar1 == Sleeping) {
        ((TPBDRigidParticle<double,3> *)param_1)->MWakeEvent = Awake;
      }
      pIVar2 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      (((TPBDRigidParticle<double,3> *)param_1)->MMiscData).Property.MObjectState = Dynamic;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 8;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
    if (*(char *)((longlong)this + 8) == '\0') {
      dVar8 = *(double *)
               &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MRotationOfMass.
                field_0x10;
      dVar9 = *(double *)
               &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MRotationOfMass.
                field_0x18;
      dVar4 = (double)*(float *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x44;
      dVar14 = (double)*(float *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x40;
      dVar10 = *(double *)
                &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MRotationOfMass;
      dVar11 = *(double *)
                &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MRotationOfMass.
                 field_0x8;
      dVar6 = (double)(float)*(undefined8 *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x48;
      dVar7 = (double)(float)((ulonglong)
                              *(undefined8 *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x48
                             >> 0x20);
      auVar12._8_4_ = SUB84(dVar7,0);
      auVar12._0_8_ = dVar7;
      auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar13._8_4_ = SUB84(dVar6,0);
      auVar13._0_8_ = dVar6;
      auVar13._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar5 = dVar14 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              auVar12._8_8_ * dVar11 +
              dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar13._8_8_ * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_158[0] = (double)*(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).
                                        Property.MInvI;
      local_158[5] = (double)*(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).
                                        Property.MInvI.field_0x4;
      local_178._8_4_ = SUB84(dVar5,0);
      local_178._0_8_ =
           dVar14 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar7 * dVar10 +
           dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_178._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_108 = (double)*(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property
                                     .MInvI.field_0x8;
      dVar5 = dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar7 * dVar9 +
              dVar4 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_e8 = ___xmm_3ff00000000000000000000000000000;
      uStack_e0 = _UNK_15061cbc8;
      local_158[4] = 0.0;
      local_118 = 0;
      local_158[1] = 0.0;
      local_110 = 0;
      local_158[2] = 0.0;
      local_128 = 0;
      local_158[3] = 0.0;
      local_120 = 0;
      local_100 = 0;
      local_168._8_4_ = SUB84(dVar5,0);
      local_168._0_8_ =
           dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar7 * dVar8 +
           dVar4 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_168._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_f8 = 0;
      uStack_f0 = 0;
      Chaos::Utilities::ComputeWorldSpaceInertia
                ((PMatrix<double,3,3> *)&local_d8,(TRotation<double,3> *)local_178,
                 (PMatrix<double,3,3> *)local_158);
      pdVar3 = *(double **)this;
      dVar4 = pdVar3[1];
      dVar5 = *pdVar3;
      dVar6 = pdVar3[2];
      local_178._8_8_ = dVar4 * local_b0 + dVar5 * local_b8 + dVar6 * local_a8;
      local_178._0_8_ = dVar4 * local_d0 + dVar5 * local_d8 + dVar6 * local_c8;
      local_168._0_8_ = dVar4 * local_90 + dVar5 * local_98 + dVar6 * local_88;
      Chaos::TPBDRigidParticle<double,3>::SetAngularImpulseVelocity
                ((TPBDRigidParticle<double,3> *)param_1,(TVector<double,3> *)local_178,
                 *(bool *)((longlong)this + 9));
    }
    else {
      Chaos::TPBDRigidParticle<double,3>::SetAngularImpulseVelocity
                ((TPBDRigidParticle<double,3> *)param_1,*(TVector<double,3> **)this,
                 *(bool *)((longlong)this + 9));
    }
  }
  return;
}

// operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 144135e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::SetAngularImpulse'::__l2::<lambda_1>::
operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (void *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  EObjectStateType EVar15;
  TVector<float,3> *pTVar16;
  TRotation<double,3> *pTVar17;
  TRotation<double,3> *pTVar18;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  undefined1 auVar19 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  double local_1a8 [6];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  TRotation<double,3> local_a8 [5];
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    this_00 = param_1;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar15 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    if ((EVar15 != Sleeping) &&
       (EVar15 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), EVar15 != Dynamic))
    {
      return;
    }
    if (*(char *)((longlong)this + 9) != '\0') {
      Chaos::SetObjectStateHelper
                (*(IPhysicsProxyBase **)((longlong)this + 0x10),
                 (TPBDRigidParticleHandleImp<double,3,1> *)this_00,Dynamic,true,true);
    }
    if (*(char *)((longlong)this + 8) == '\0') {
      pTVar16 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvI
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      fVar1 = *(float *)pTVar16;
      fVar2 = *(float *)&pTVar16->field_0x4;
      fVar3 = *(float *)&pTVar16->field_0x8;
      pTVar17 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetR(this_00,local_a8);
      pTVar18 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      auVar6 = *(undefined1 (*) [16])pTVar17;
      dVar9 = *(double *)&pTVar18->field_0x10;
      dVar10 = *(double *)&pTVar18->field_0x18;
      dVar11 = *(double *)pTVar18;
      dVar12 = *(double *)&pTVar18->field_0x8;
      dVar13 = *(double *)&pTVar17->field_0x10;
      dVar14 = *(double *)&pTVar17->field_0x18;
      dVar4 = auVar6._0_8_;
      dVar5 = auVar6._8_8_;
      auVar19._8_4_ = auVar6._8_4_;
      auVar19._0_8_ = dVar5;
      auVar19._12_4_ = auVar6._12_4_;
      dVar8 = dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar14 * dVar12 +
              auVar19._8_8_ * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar13 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_1c8._8_4_ = SUB84(dVar8,0);
      local_1c8._0_8_ =
           dVar4 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar14 * dVar11 +
           dVar5 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar13 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_1c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar8 = dVar4 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar14 * dVar10 +
              dVar5 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar13 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_1a8[4] = 0.0;
      local_168 = 0;
      local_1a8[1] = 0.0;
      local_160 = 0;
      local_1a8[2] = 0.0;
      local_178 = 0;
      local_1a8[3] = 0.0;
      local_170 = 0;
      local_150 = 0;
      local_1b8._8_4_ = SUB84(dVar8,0);
      local_1b8._0_8_ =
           dVar4 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar14 * dVar9 +
           dVar5 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar13 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_1b8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_148 = 0;
      uStack_140 = 0;
      local_138 = ___xmm_3ff00000000000000000000000000000;
      uStack_130 = _UNK_15061cbc8;
      local_1a8[0] = (double)fVar1;
      local_1a8[5] = (double)fVar2;
      local_158 = (double)fVar3;
      Chaos::Utilities::ComputeWorldSpaceInertia
                ((PMatrix<double,3,3> *)&local_128,(TRotation<double,3> *)local_1c8,
                 (PMatrix<double,3,3> *)local_1a8);
      pdVar7 = *(double **)this;
      dVar8 = *pdVar7;
      dVar4 = pdVar7[1];
      dVar5 = pdVar7[2];
      local_1c8._8_8_ = local_100 * dVar4 + local_108 * dVar8 + local_f8 * dVar5;
      local_1c8._0_8_ = local_120 * dVar4 + local_128 * dVar8 + local_118 * dVar5;
      local_1b8._0_8_ = local_e0 * dVar4 + local_e8 * dVar8 + local_d8 * dVar5;
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetAngularImpulseVelocity
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,(TVector<double,3> *)local_1c8,
                 *(bool *)((longlong)this + 9));
    }
    else {
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetAngularImpulseVelocity
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,*(TVector<double,3> **)this,
                 *(bool *)((longlong)this + 9));
    }
  }
  return;
}

// AddForce @ 1441a42f0

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::AddForce
          (TThreadedSingleParticlePhysicsProxyBase<1> *this,TVector<double,3> *param_1,bool param_2)

{
  EObjectStateType EVar1;
  IPhysicsProxyBase *pIVar2;
  TPBDRigidParticle<double,3> *this_00;
  
  VerifyContext(this);
  this_00 = *(TPBDRigidParticle<double,3> **)&this->field_0x40;
  if ((byte)(*(TPBDRigidParticle<double,3> **)&this->field_0x40)->field_0x98 < 2) {
    this_00 = (TPBDRigidParticle<double,3> *)0x0;
  }
  if ((this_00 != (TPBDRigidParticle<double,3> *)0x0) &&
     ((EVar1 = (this_00->MMiscData).Property.MObjectState, EVar1 == Sleeping || (EVar1 == Dynamic)))
     ) {
    if (param_2) {
      if (EVar1 == Sleeping) {
        this_00->MWakeEvent = Awake;
      }
      pIVar2 = *(IPhysicsProxyBase **)&this_00->field_0x10;
      (this_00->MMiscData).Property.MObjectState = Dynamic;
      *(uint *)&this_00->field_0x9c = *(uint *)&this_00->field_0x9c | 8;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
    TPBDRigidParticle<double,3>::AddForce(this_00,param_1,param_2);
  }
  return;
}

// AddForce @ 1441a4390

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::AddForce
          (TThreadedSingleParticlePhysicsProxyBase<0> *this,TVector<double,3> *param_1,bool param_2)

{
  FRewindData *this_00;
  EObjectStateType EVar1;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  
  VerifyContext(this);
  this_00 = *(FRewindData **)(*(longlong *)&this->field_0x8 + 0x238);
  if (this_00 != (FRewindData *)0x0) {
    FRewindData::MarkDirtyFromPT
              (this_00,*(TGeometryParticleHandleImp<double,3,1> **)&this->field_0x48);
  }
  this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48)->field_0xc) {
    this_01 = *(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48;
  }
  if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01);
    if ((EVar1 != Sleeping) &&
       (EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01), EVar1 != Dynamic)) {
      return;
    }
    if (param_2) {
      SetObjectStateHelper((IPhysicsProxyBase *)this,this_01,Dynamic,true,true);
    }
    TPBDRigidParticleHandleImp<double,3,1>::AddForce(this_01,param_1,param_2);
  }
  return;
}

// AddTorque @ 1441a6640

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::AddTorque
          (TThreadedSingleParticlePhysicsProxyBase<1> *this,TVector<double,3> *param_1,bool param_2)

{
  EObjectStateType EVar1;
  IPhysicsProxyBase *pIVar2;
  TPBDRigidParticle<double,3> *this_00;
  
  VerifyContext(this);
  this_00 = *(TPBDRigidParticle<double,3> **)&this->field_0x40;
  if ((byte)(*(TPBDRigidParticle<double,3> **)&this->field_0x40)->field_0x98 < 2) {
    this_00 = (TPBDRigidParticle<double,3> *)0x0;
  }
  if ((this_00 != (TPBDRigidParticle<double,3> *)0x0) &&
     ((EVar1 = (this_00->MMiscData).Property.MObjectState, EVar1 == Sleeping || (EVar1 == Dynamic)))
     ) {
    if (param_2) {
      if (EVar1 == Sleeping) {
        this_00->MWakeEvent = Awake;
      }
      pIVar2 = *(IPhysicsProxyBase **)&this_00->field_0x10;
      (this_00->MMiscData).Property.MObjectState = Dynamic;
      *(uint *)&this_00->field_0x9c = *(uint *)&this_00->field_0x9c | 8;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
    }
    TPBDRigidParticle<double,3>::AddTorque(this_00,param_1,param_2);
  }
  return;
}

// AddTorque @ 1441a66e0

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::AddTorque
          (TThreadedSingleParticlePhysicsProxyBase<0> *this,TVector<double,3> *param_1,bool param_2)

{
  FRewindData *this_00;
  EObjectStateType EVar1;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  
  VerifyContext(this);
  this_00 = *(FRewindData **)(*(longlong *)&this->field_0x8 + 0x238);
  if (this_00 != (FRewindData *)0x0) {
    FRewindData::MarkDirtyFromPT
              (this_00,*(TGeometryParticleHandleImp<double,3,1> **)&this->field_0x48);
  }
  this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48)->field_0xc) {
    this_01 = *(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48;
  }
  if (this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01);
    if ((EVar1 != Sleeping) &&
       (EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01), EVar1 != Dynamic)) {
      return;
    }
    if (param_2) {
      SetObjectStateHelper((IPhysicsProxyBase *)this,this_01,Dynamic,true,true);
    }
    TPBDRigidParticleHandleImp<double,3,1>::AddTorque(this_01,param_1,param_2);
  }
  return;
}

// GetR @ 1441afca0

TRotation<double,3> * __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::GetR
          (TThreadedSingleParticlePhysicsProxyBase<0> *this,
          TRotation<double,3> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TRotation<double,3> *pTVar8;
  longlong lVar9;
  
  VerifyContext(this);
  uVar3 = *(uint *)(*(longlong **)&this->field_0x48 + 1);
  lVar9 = (longlong)(int)uVar3;
  lVar4 = **(longlong **)&this->field_0x48;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x50)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TRotation<double,3> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x48);
  fVar1 = *(float *)(lVar4 + 4 + lVar9 * 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 8 + lVar9 * 0x10);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar4 + lVar9 * 0x10);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(float)uVar2;
  *(double *)&__return_storage_ptr__->field_0x18 = (double)(float)((ulonglong)uVar2 >> 0x20);
  return __return_storage_ptr__;
}

// SetDebugName @ 1441b69a0

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetDebugName
          (TThreadedSingleParticlePhysicsProxyBase<1> *this,TSharedPtr<FString,1> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FString *pFVar3;
  IPhysicsProxyBase *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  VerifyContext(this);
  lVar1 = *(longlong *)&this->field_0x40;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  pIVar4 = *(IPhysicsProxyBase **)(lVar1 + 0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 0x70);
  *(FString **)(lVar1 + 0x68) = pFVar3;
  *(TReferenceControllerBase<1> **)(lVar1 + 0x70) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(uint *)(lVar1 + 0x9c) = *(uint *)(lVar1 + 0x9c) | 0x10;
  if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
  }
  return;
}

// SetI @ 1441b75b0

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetI
          (TThreadedSingleParticlePhysicsProxyBase<1> *this,TVector<float,3> *param_1)

{
  IPhysicsProxyBase *pIVar1;
  longlong lVar2;
  
  VerifyContext(this);
  lVar2 = *(longlong *)&this->field_0x40;
  if (*(byte *)(*(longlong *)&this->field_0x40 + 0x98) < 2) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    pIVar1 = *(IPhysicsProxyBase **)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)param_1;
    *(undefined4 *)(lVar2 + 0x138) = *(undefined4 *)&param_1->field_0x8;
    *(uint *)(lVar2 + 0x9c) = *(uint *)(lVar2 + 0x9c) | 0x20;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// SetKinematicTarget @ 1441b7a60

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetKinematicTarget
          (TThreadedSingleParticlePhysicsProxyBase<1> *this,FKinematicTarget *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  VerifyContext(this);
  lVar3 = *(longlong *)&this->field_0x40;
  if (*(char *)(*(longlong *)&this->field_0x40 + 0x98) == '\0') {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)&(param_1->Rotation).field_0x8;
    pIVar1 = *(IPhysicsProxyBase **)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0xc0) = *(undefined8 *)&param_1->Rotation;
    *(undefined8 *)(lVar3 + 200) = uVar2;
    uVar2 = *(undefined8 *)&(param_1->Position).field_0x8;
    *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)&param_1->Position;
    *(undefined8 *)(lVar3 + 0xd8) = uVar2;
    uVar2 = *(undefined8 *)&param_1->Mode;
    *(undefined8 *)(lVar3 + 0xe0) = *(undefined8 *)&(param_1->Position).field_0x10;
    *(undefined8 *)(lVar3 + 0xe8) = uVar2;
    if (((param_2) &&
        (*(uint *)(lVar3 + 0x9c) = *(uint *)(lVar3 + 0x9c) | 0x40,
        pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// VerifyContext @ 1441bcd00

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
          (TThreadedSingleParticlePhysicsProxyBase<0> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar3 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
  if (*(int *)(pFVar4 + 2) < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310308>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x124,"IsInPhysicsThreadContext()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

