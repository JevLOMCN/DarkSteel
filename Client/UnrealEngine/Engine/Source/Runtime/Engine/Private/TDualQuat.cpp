// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator* @ 147d7de10

TDualQuat<double> * __thiscall
UE::Math::TDualQuat<double>::operator*
          (TDualQuat<double> *this,TDualQuat<double> *__return_storage_ptr__,
          TDualQuat<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dStack_f0;
  double dStack_e0;
  double dStack_d0;
  double dStack_c0;
  double dStack_b0;
  
  dVar15 = (this->R).X;
  dVar29 = (this->R).Y;
  uVar1 = (param_1->R).Z;
  uVar4 = (param_1->R).W;
  uVar2 = (param_1->R).X;
  uVar5 = (param_1->R).Y;
  dVar30 = (this->R).Z;
  dVar31 = (this->R).W;
  dVar32 = (param_1->D).Z;
  dVar33 = (param_1->D).W;
  dVar27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar28 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar10._8_4_ = (int)uVar1;
  auVar10._0_8_ = uVar4;
  auVar10._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  dVar34 = (this->R).X;
  dVar35 = (this->R).Y;
  dVar36 = (this->D).Z;
  dVar37 = (this->D).W;
  dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar9._8_4_ = (int)uVar2;
  auVar9._0_8_ = uVar5;
  auVar9._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  uVar3 = (this->D).X;
  uVar6 = (this->D).Y;
  dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar18 = dVar15 * (double)uVar5 * dVar14 + dVar31 * (double)uVar1 +
           dVar29 * (double)uVar2 * dVar23 + dVar30 * (double)uVar4 * dVar16;
  dVar19 = dVar15 * (double)uVar2 * dVar24 + dVar31 * (double)uVar4 + dVar29 * (double)uVar5 * dVar8
           + dVar30 * (double)uVar1 * dVar7;
  auVar17._8_4_ = SUB84(dVar19,0);
  auVar17._0_8_ = dVar18;
  auVar17._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  dVar38 = (param_1->D).X;
  dVar39 = (param_1->D).Y;
  dVar19 = dVar15 * (double)uVar4 * dVar27 + dVar31 * (double)uVar2 +
           dVar29 * (double)uVar1 * dVar25 + dVar30 * (double)uVar5 * dVar20;
  dVar15 = dVar15 * (double)uVar1 * dVar28 + dVar31 * (double)uVar5 +
           dVar29 * (double)uVar4 * dVar26 + dVar30 * (double)uVar2 * dVar22;
  auVar11._8_4_ = SUB84(dVar15,0);
  auVar11._0_8_ = dVar19;
  auVar11._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar12._8_4_ = (int)uVar3;
  auVar12._0_8_ = uVar3;
  auVar12._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  dStack_e0 = auVar10._8_8_;
  dStack_f0 = auVar9._8_8_;
  dStack_d0 = auVar12._8_8_;
  dStack_b0 = auVar17._8_8_;
  dStack_c0 = auVar11._8_8_;
  dVar23 = (double)uVar3 * (double)uVar5 * dVar14 + dVar37 * (param_1->R).Z +
           (double)uVar6 * (param_1->R).X * dVar23 + dVar36 * (double)uVar4 * dVar16 +
           dVar38 * dVar35 * dVar14 + dVar33 * (this->R).Z + dVar39 * (this->R).X * dVar23 +
           dVar32 * dVar31 * dVar16;
  dVar24 = dStack_d0 * dStack_f0 * dVar24 + dVar37 * (param_1->R).W +
           (double)uVar6 * (param_1->R).Y * dVar8 + dVar36 * dStack_e0 * dVar7 +
           dVar38 * dVar34 * dVar24 + dVar33 * (this->R).W + dVar39 * (this->R).Y * dVar8 +
           dVar32 * dVar30 * dVar7;
  dVar14 = (double)uVar3 * (double)uVar4 * dVar27 + dVar37 * (param_1->R).X +
           (double)uVar6 * (param_1->R).Z * dVar25 + dVar36 * (double)uVar5 * dVar20 +
           dVar38 * dVar31 * dVar27 + dVar33 * (this->R).X + dVar39 * (this->R).Z * dVar25 +
           dVar32 * dVar35 * dVar20;
  dVar16 = (double)uVar3 * dStack_e0 * dVar28 + dVar37 * (param_1->R).Y +
           (double)uVar6 * (param_1->R).W * dVar26 + dVar36 * dStack_f0 * dVar22 +
           dVar38 * dVar30 * dVar28 + dVar33 * (this->R).Y + dVar39 * (this->R).W * dVar26 +
           dVar32 * dVar34 * dVar22;
  (__return_storage_ptr__->R).X = dVar19;
  (__return_storage_ptr__->R).Y = dStack_c0;
  auVar13._8_4_ = SUB84(dVar16,0);
  auVar13._0_8_ = dVar14;
  auVar13._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  (__return_storage_ptr__->D).X = dVar14;
  (__return_storage_ptr__->D).Y = (double)auVar13._8_8_;
  auVar21._8_4_ = SUB84(dVar24,0);
  auVar21._0_8_ = dVar23;
  auVar21._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  (__return_storage_ptr__->D).Z = dVar23;
  (__return_storage_ptr__->D).W = (double)auVar21._8_8_;
  (__return_storage_ptr__->R).Z = dVar18;
  (__return_storage_ptr__->R).W = dStack_b0;
  return __return_storage_ptr__;
}

// AsFTransform @ 147d855b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UE::Math::TDualQuat<double>::AsFTransform
          (TDualQuat<double> *this,TTransform<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  dVar10 = (this->D).X;
  dVar11 = (this->D).Y;
  dVar1 = (this->R).Z;
  dVar2 = (this->R).W;
  uVar21 = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar22 = (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar3 = (this->D).Z;
  uVar4 = (this->D).W;
  uVar12 = *(uint *)&(this->R).X;
  uVar13 = *(uint *)((longlong)&(this->R).X + 4);
  uVar14 = *(uint *)&(this->R).Y;
  uVar15 = *(uint *)((longlong)&(this->R).Y + 4);
  uVar23 = uVar12 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar24 = uVar13 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar25 = uVar14 ^ _UNK_15066df78;
  uVar26 = uVar15 ^ _UNK_15066df7c;
  auVar18._0_8_ = (double)CONCAT44(uVar24,uVar23);
  auVar18._8_4_ = uVar25;
  auVar18._12_4_ = uVar26;
  dVar20 = (double)CONCAT44(uVar26,uVar25);
  auVar19._8_4_ = (int)uVar3;
  auVar19._0_8_ = uVar3;
  auVar19._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar8 = dVar10 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          auVar18._0_8_ * (double)uVar4 +
          (double)CONCAT44(uVar22,uVar21) * dVar11 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          (double)uVar3 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar9 = dVar10 * (double)CONCAT44(uVar22,uVar21) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar18._8_8_ * (double)uVar4 +
          dVar2 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar19._8_8_ * (double)CONCAT44(uVar24,uVar23) *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar16 = (this->R).Z;
  dVar17 = (this->R).W;
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  *(uint *)(__return_storage_ptr__->Rotation).XY.m128d_f64 = uVar12;
  *(uint *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) = uVar13;
  *(uint *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uVar14;
  *(uint *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uVar15;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar16;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar17;
  dVar9 = dVar9 + dVar9;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar8 + dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
  dVar1 = dVar10 * dVar20 * dVar1 + (double)CONCAT44(uVar22,uVar21) * (double)uVar4 +
          (double)CONCAT44(uVar24,uVar23) * dVar11 * dVar6 + (double)uVar3 * dVar2 * dVar5;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1 + dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

