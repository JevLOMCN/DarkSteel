// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// CorrectedQ @ 143960310

TRotation<double,3> * __thiscall
Chaos::FSolverBody::CorrectedQ(FSolverBody *this,TRotation<double,3> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TRotation<double,3> *pTVar5;
  undefined1 local_48 [16];
  double local_38;
  undefined8 uStack_30;
  TRotation<double,3> local_28;
  
  if (((this->State).InvM <= __real_00800000) ||
     (((fVar1 = *(float *)&(this->State).DQ, fVar1 == 0.0 &&
       (*(float *)&(this->State).DQ.field_0x4 == 0.0)) &&
      (*(float *)&(this->State).DQ.field_0x8 == 0.0)))) {
    pTVar5 = (TRotation<double,3> *)local_48;
    local_48._0_8_ = *(undefined8 *)&(this->State).Q;
    local_48._8_8_ = *(undefined8 *)&(this->State).Q.field_0x8;
    local_38 = (double)*(undefined8 *)&(this->State).Q.field_0x10;
    uStack_30 = *(undefined8 *)&(this->State).Q.field_0x18;
  }
  else {
    local_48._0_8_ = (undefined8)fVar1;
    local_38 = (double)*(float *)&(this->State).DQ.field_0x8;
    local_48._8_8_ = (undefined8)*(float *)&(this->State).DQ.field_0x4;
    pTVar5 = TRotation<double,3>::IntegrateRotationWithAngularVelocity
                       (&local_28,&(this->State).Q,(TVector<double,3> *)local_48,
                        __real_3ff0000000000000);
  }
  uVar2 = *(undefined8 *)&pTVar5->field_0x8;
  uVar3 = *(undefined8 *)&pTVar5->field_0x10;
  uVar4 = *(undefined8 *)&pTVar5->field_0x18;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar4;
  return __return_storage_ptr__;
}

// FSolverBody @ 143a04610

FSolverBody * __thiscall Chaos::FSolverBody::FSolverBody(FSolverBody *this)

{
  *(undefined8 *)&(this->State).InvI = 0;
  *(undefined8 *)&(this->State).InvI.field_0x8 = 0;
  *(undefined8 *)&(this->State).InvI.field_0x10 = 0;
  *(undefined8 *)&(this->State).InvI.field_0x18 = 0;
  *(undefined8 *)&(this->State).InvI.field_0x20 = 0;
  *(undefined8 *)&(this->State).InvI.field_0x28 = 0;
  *(undefined8 *)&(this->State).InvI.field_0x30 = 0;
  *(undefined8 *)&(this->State).InvI.field_0x38 = 0;
  *(undefined8 *)&(this->State).RoM = 0;
  *(undefined8 *)&(this->State).RoM.field_0x8 = 0;
  *(undefined8 *)&(this->State).RoM.field_0x10 = 0;
  *(undefined8 *)&(this->State).RoM.field_0x18 = 0;
  *(undefined8 *)&(this->State).R = 0;
  *(undefined8 *)&(this->State).R.field_0x8 = 0;
  *(undefined8 *)&(this->State).R.field_0x10 = 0;
  *(undefined8 *)&(this->State).R.field_0x18 = 0;
  *(undefined8 *)&(this->State).Q = 0;
  *(undefined8 *)&(this->State).Q.field_0x8 = 0;
  *(undefined8 *)&(this->State).Q.field_0x10 = 0;
  *(undefined8 *)&(this->State).Q.field_0x18 = 0;
  return this;
}

// CorrectedActorP @ 143a0c640

TVector<double,3> * __thiscall
Chaos::FSolverBody::CorrectedActorP(FSolverBody *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TRotation<double,3> *pTVar14;
  TVector<double> *pTVar15;
  double dVar16;
  double dVar17;
  TVector<double>_u_0 local_e8;
  TVector<double> local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  fVar1 = *(float *)&(this->State).DP;
  fVar2 = *(float *)&(this->State).DP.field_0x4;
  fVar3 = *(float *)&(this->State).DP.field_0x8;
  dVar4 = *(double *)&(this->State).P.field_0x10;
  dVar5 = *(double *)&(this->State).P.field_0x8;
  dVar6 = *(double *)&(this->State).P;
  pTVar14 = CorrectedQ(this,(TRotation<double,3> *)local_a8);
  dVar16 = *(double *)&(this->State).RoM.field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar17 = *(double *)&(this->State).RoM.field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar10 = *(double *)pTVar14;
  dVar11 = *(double *)&pTVar14->field_0x8;
  dVar12 = *(double *)&pTVar14->field_0x10;
  dVar13 = *(double *)&pTVar14->field_0x18;
  dVar8 = *(double *)&(this->State).RoM *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar9 = *(double *)&(this->State).RoM.field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_e8._s_0.Z = (double)*(undefined8 *)&(this->State).CoM.field_0x10;
  dVar7 = dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar13 * dVar9 +
          dVar11 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_e8._s_0.X = (double)*(undefined8 *)&(this->State).CoM;
  local_e8._s_0.Y = (double)*(undefined8 *)&(this->State).CoM.field_0x8;
  local_a8._8_4_ = SUB84(dVar7,0);
  local_a8._0_8_ =
       dVar10 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar13 * dVar8 +
       dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_a8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar7 = dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar13 * dVar17 +
          dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar12 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_98._8_4_ = SUB84(dVar7,0);
  local_98._0_8_ =
       dVar10 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar13 * dVar16 +
       dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_98._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  pTVar15 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_a8,&local_c8,(TVector<double> *)&local_e8._s_0);
  dVar7 = (pTVar15->field0_0x0)._s_0.X;
  dVar8 = (pTVar15->field0_0x0)._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 =
       ((double)fVar3 + dVar4) - (pTVar15->field0_0x0)._s_0.Z;
  *(double *)__return_storage_ptr__ = ((double)fVar1 + dVar6) - dVar7;
  *(double *)&__return_storage_ptr__->field_0x8 = ((double)fVar2 + dVar5) - dVar8;
  return __return_storage_ptr__;
}

// CorrectedActorQ @ 143a0c840

TRotation<double,3> * __thiscall
Chaos::FSolverBody::CorrectedActorQ(FSolverBody *this,TRotation<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TRotation<double,3> *pTVar14;
  double dVar15;
  double dVar16;
  TRotation<double,3> local_78 [3];
  
  pTVar14 = CorrectedQ(this,local_78);
  dVar15 = *(double *)&(this->State).RoM.field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar16 = *(double *)&(this->State).RoM.field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar10 = *(double *)pTVar14;
  dVar11 = *(double *)&pTVar14->field_0x8;
  dVar12 = *(double *)&pTVar14->field_0x10;
  dVar13 = *(double *)&pTVar14->field_0x18;
  dVar6 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
          *(double *)&(this->State).RoM;
  dVar7 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
          *(double *)&(this->State).RoM.field_0x8;
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar9 = dVar10 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar13 * dVar16 +
          dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar15 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar5 = dVar10 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar13 * dVar7 +
          dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar13 * dVar6 +
                 dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar7 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar4;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar10 * dVar7 * dVar1 + dVar13 * dVar15 + dVar11 * dVar6 * dVar2 +
                 dVar16 * dVar12 * dVar3;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar8;
  return __return_storage_ptr__;
}

// UpdateRotationDependentState @ 143b49220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Chaos::FSolverBody::UpdateRotationDependentState(FSolverBody *this)

{
  double local_108 [6];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  if (__real_00800000 < (this->State).InvM) {
    local_108[0] = (double)*(float *)&(this->State).InvILocal;
    local_108[4] = 0.0;
    local_108[5] = (double)*(float *)&(this->State).InvILocal.field_0x4;
    local_c8 = 0;
    local_b8 = (double)*(float *)&(this->State).InvILocal.field_0x8;
    local_108[1] = 0.0;
    local_98 = ___xmm_3ff00000000000000000000000000000;
    uStack_90 = _UNK_15061cbc8;
    local_c0 = 0;
    local_108[2] = 0.0;
    local_d8 = 0;
    local_108[3] = 0.0;
    local_d0 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    Utilities::ComputeWorldSpaceInertia
              ((PMatrix<double,3,3> *)&local_88,&(this->State).Q,(PMatrix<double,3,3> *)local_108);
    *(float *)&(this->State).InvI = (float)local_88;
    *(float *)&(this->State).InvI.field_0x4 = (float)dStack_80;
    *(float *)&(this->State).InvI.field_0x8 = (float)local_78;
    *(float *)&(this->State).InvI.field_0xc = (float)dStack_70;
    *(float *)&(this->State).InvI.field_0x10 = (float)local_68;
    *(float *)&(this->State).InvI.field_0x14 = (float)dStack_60;
    *(float *)&(this->State).InvI.field_0x18 = (float)local_58;
    *(float *)&(this->State).InvI.field_0x1c = (float)dStack_50;
    *(float *)&(this->State).InvI.field_0x20 = (float)local_48;
    *(float *)&(this->State).InvI.field_0x24 = (float)dStack_40;
    *(float *)&(this->State).InvI.field_0x28 = (float)local_38;
    *(float *)&(this->State).InvI.field_0x2c = (float)dStack_30;
    *(float *)&(this->State).InvI.field_0x30 = (float)local_28;
    *(float *)&(this->State).InvI.field_0x34 = (float)dStack_20;
    *(float *)&(this->State).InvI.field_0x38 = (float)local_18;
    *(float *)&(this->State).InvI.field_0x3c = (float)dStack_10;
  }
  return;
}

// ActorP @ 143c54f80

TVector<double,3> * __thiscall
Chaos::FSolverBody::ActorP(FSolverBody *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector<double> *pTVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_b8;
  TVector<double> local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  dVar9 = *(double *)&(this->State).RoM.field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar10 = *(double *)&(this->State).RoM.field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar4 = *(double *)&(this->State).Q;
  dVar5 = *(double *)&(this->State).Q.field_0x8;
  dVar2 = *(double *)&(this->State).RoM *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar3 = *(double *)&(this->State).RoM.field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar6 = *(double *)&(this->State).Q.field_0x10;
  dVar7 = *(double *)&(this->State).Q.field_0x18;
  local_b8._s_0.Z = (double)*(undefined8 *)&(this->State).CoM.field_0x10;
  dVar1 = dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar7 * dVar3 +
          dVar5 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar6 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_b8._s_0.X = (double)*(undefined8 *)&(this->State).CoM;
  local_b8._s_0.Y = (double)*(undefined8 *)&(this->State).CoM.field_0x8;
  local_78._8_4_ = SUB84(dVar1,0);
  local_78._0_8_ =
       dVar4 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar7 * dVar2 +
       dVar5 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar6 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_78._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = dVar4 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar7 * dVar10 +
          dVar5 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_68._8_4_ = SUB84(dVar1,0);
  local_68._0_8_ =
       dVar4 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar7 * dVar9 +
       dVar5 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_68._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  pTVar8 = UE::Math::TQuat<double>::RotateVector
                     ((TQuat<double> *)local_78,&local_98,(TVector<double> *)&local_b8._s_0);
  dVar1 = *(double *)&(this->State).P.field_0x8;
  dVar4 = (pTVar8->field0_0x0)._s_0.Y;
  *(double *)__return_storage_ptr__ = *(double *)&(this->State).P - (pTVar8->field0_0x0)._s_0.X;
  dVar2 = *(double *)&(this->State).P.field_0x10;
  dVar3 = (pTVar8->field0_0x0)._s_0.Z;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar1 - dVar4;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar2 - dVar3;
  return __return_storage_ptr__;
}

