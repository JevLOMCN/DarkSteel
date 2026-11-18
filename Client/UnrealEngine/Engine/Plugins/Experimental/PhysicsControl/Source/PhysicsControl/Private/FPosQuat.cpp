// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// operator* @ 14d9c3cf0

FPosQuat * __thiscall
UE::PhysicsControl::FPosQuat::operator*
          (FPosQuat *this,FPosQuat *__return_storage_ptr__,FPosQuat *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78 [4];
  
  dVar1 = (param_1->Rotation).Z;
  dVar2 = (param_1->Rotation).W;
  dVar8 = (param_1->Rotation).X;
  dVar9 = (param_1->Rotation).Y;
  dVar10 = (this->Rotation).X;
  dVar11 = (this->Rotation).Y;
  dVar12 = (this->Rotation).Z;
  dVar13 = (this->Rotation).W;
  local_78[0]._16_8_ = (param_1->Translation).field0_0x0._s_0.Z;
  dVar4 = dVar10 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar13 * dVar8 +
          dVar11 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar5 = dVar10 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar13 * dVar9 +
          dVar11 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_78[0]._0_8_ = (param_1->Translation).field0_0x0._s_0.X;
  local_78[0]._8_8_ = (param_1->Translation).field0_0x0._s_0.Y;
  dVar7 = dVar10 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar13 * dVar1 +
          dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar12 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar8 = dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar13 * dVar2 +
          dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar12 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::RotateVector
            (&this->Rotation,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_78[0]._s_0)
  ;
  dVar1 = (this->Translation).field0_0x0._s_0.Y;
  dVar2 = (this->Translation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.X =
       local_98._s_0.X + (this->Translation).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Y = local_98._s_0.Y + dVar1;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Z = local_98._s_0.Z + dVar2;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  (__return_storage_ptr__->Rotation).X = dVar4;
  (__return_storage_ptr__->Rotation).Y = (double)auVar3._8_8_;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  (__return_storage_ptr__->Rotation).Z = dVar7;
  (__return_storage_ptr__->Rotation).W = (double)auVar6._8_8_;
  return __return_storage_ptr__;
}

// Inverse @ 14d9e39b0

FPosQuat * __thiscall
UE::PhysicsControl::FPosQuat::Inverse(FPosQuat *this,FPosQuat *__return_storage_ptr__)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar1 = *(undefined8 *)&(this->Translation).field0_0x0;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)uVar1 ^ uVar15;
  uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar11 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar16;
  uVar1 = *(undefined8 *)((longlong)&(this->Translation).field0_0x0 + 8);
  uVar13 = (uint)uVar1 ^ uVar15;
  uVar14 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar16;
  uVar1 = *(undefined8 *)((longlong)&(this->Translation).field0_0x0 + 0x10);
  uVar15 = (uint)uVar1 ^ uVar15;
  uVar16 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar16;
  dVar5 = (this->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = (this->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * (this->Rotation).X;
  dVar9 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] * (this->Rotation).Y;
  dVar3 = (double)CONCAT44(uVar16,uVar15) * dVar9 - (double)CONCAT44(uVar14,uVar13) * dVar5;
  dVar3 = dVar3 + dVar3;
  dVar2 = (double)CONCAT44(uVar11,uVar10) * dVar5 - (double)CONCAT44(uVar16,uVar15) * dVar8;
  dVar2 = dVar2 + dVar2;
  dVar12 = (double)CONCAT44(uVar14,uVar13) * dVar8 - (double)CONCAT44(uVar11,uVar10) * dVar9;
  dVar12 = dVar12 + dVar12;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.X =
       (dVar12 * dVar9 - dVar2 * dVar5) + dVar3 * dVar6 + (double)CONCAT44(uVar11,uVar10);
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Y =
       (dVar3 * dVar5 - dVar12 * dVar8) + dVar2 * dVar6 + (double)CONCAT44(uVar14,uVar13);
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Z =
       (dVar2 * dVar8 - dVar3 * dVar9) + dVar12 * dVar6 + (double)CONCAT44(uVar16,uVar15);
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  (__return_storage_ptr__->Rotation).X = dVar8;
  (__return_storage_ptr__->Rotation).Y = (double)auVar7._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  (__return_storage_ptr__->Rotation).Z = dVar5;
  (__return_storage_ptr__->Rotation).W = (double)auVar4._8_8_;
  return __return_storage_ptr__;
}

