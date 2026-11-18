// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// CalculateAngularVelocity @ 14d9cc670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::PhysicsControl::FBoneData::CalculateAngularVelocity
          (FBoneData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TQuat<double> local_a8;
  TQuat<double> local_88 [4];
  
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar4 = __real_3ff0000000000000;
  if (0.0 < param_1) {
    dVar15 = (this->PreviousTM).Rotation.Z *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar16 = (this->PreviousTM).Rotation.W *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar3 = (this->PreviousTM).Rotation.X *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar14 = (this->PreviousTM).Rotation.Y *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar9 = (this->CurrentTM).Rotation.X;
    dVar10 = (this->CurrentTM).Rotation.Y;
    dVar11 = (this->CurrentTM).Rotation.Z;
    dVar12 = (this->CurrentTM).Rotation.W;
    local_a8.X = dVar9 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar12 * dVar3 +
                 dVar10 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar11 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar8 = dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar12 * dVar14 +
            dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar11 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = local_a8.X;
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_a8.Y = auVar7._8_8_;
    dVar6 = dVar9 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar12 * dVar15 +
            dVar10 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar3 = dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar12 * dVar16 +
            dVar10 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar5._8_4_ = SUB84(dVar3,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_a8.W = auVar5._8_8_;
    dVar14 = __real_bff0000000000000;
    if (0.0 <= dVar3 * UE::Math::TQuat<double>::Identity.W +
               dVar6 * UE::Math::TQuat<double>::Identity.Z +
               dVar8 * UE::Math::TQuat<double>::Identity.Y +
               local_a8.X * UE::Math::TQuat<double>::Identity.X) {
      dVar14 = __real_3ff0000000000000;
    }
    local_a8.Y = local_a8.Y * dVar14;
    local_a8.X = local_a8.X * dVar14;
    auVar1._8_4_ = SUB84(dVar6 * dVar14,0);
    auVar1._0_8_ = local_a8.Y;
    auVar1._12_4_ = (int)((ulonglong)(dVar6 * dVar14) >> 0x20);
    local_a8.Z = auVar1._8_8_;
    local_a8.W = local_a8.W * dVar14;
    UE::Math::TQuat<double>::Log(&local_a8,local_88);
    dVar14 = ___xmm_40000000000000004000000000000000;
    dVar4 = dVar4 / (double)param_1;
    dVar3 = local_88[0].Y * _UNK_150689698 * dVar4;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = local_88[0].X * ___xmm_40000000000000004000000000000000 * dVar4;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88[0].Z * dVar14 * dVar4;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// CalculateLinearVelocity @ 14d9cd370

TVector<double> * __thiscall
UE::PhysicsControl::FBoneData::CalculateLinearVelocity
          (FBoneData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_1 <= 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar1 = (this->CurrentTM).Translation.field0_0x0._s_0.X;
  dVar2 = (this->CurrentTM).Translation.field0_0x0._s_0.Y;
  dVar3 = (this->PreviousTM).Translation.field0_0x0._s_0.X;
  dVar4 = (this->PreviousTM).Translation.field0_0x0._s_0.Y;
  dVar6 = __real_3ff0000000000000 / (double)param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       ((this->CurrentTM).Translation.field0_0x0._s_0.Z -
       (this->PreviousTM).Translation.field0_0x0._s_0.Z) * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar1 - dVar3) * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar4) * dVar6;
  return __return_storage_ptr__;
}

