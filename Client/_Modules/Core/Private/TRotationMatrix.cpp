// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TRotationMatrix<float> @ 14179d540

TRotationMatrix<float> * __thiscall
UE::Math::TRotationMatrix<float>::TRotationMatrix<float>
          (TRotationMatrix<float> *this,TRotator<float> *param_1)

{
  float fVar1;
  uint uVar2;
  undefined8 extraout_XMM0_Qa;
  float fVar3;
  float extraout_XMM0_Dc;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  
  __vdecl_sincosf4();
  fVar1 = (float)extraout_XMM0_Qa;
  *(float *)&this->field_0x8 = fVar1;
  fVar3 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x1c = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  *(float *)this = in_XMM1_Db * in_XMM1_Da;
  *(float *)&this->field_0x4 = in_XMM1_Da * fVar3;
  uVar2 = (uint)(in_XMM1_Da * extraout_XMM0_Dc) ^ __xmm_80000000800000008000000080000000;
  *(float *)&this->field_0x10 = extraout_XMM0_Dc * fVar1 * in_XMM1_Db - in_XMM1_Dc * fVar3;
  *(uint *)&this->field_0x18 = uVar2;
  *(float *)&this->field_0x28 = in_XMM1_Dc * in_XMM1_Da;
  *(float *)&this->field_0x14 = in_XMM1_Dc * in_XMM1_Db + extraout_XMM0_Dc * fVar1 * fVar3;
  *(uint *)&this->field_0x20 =
       (uint)(in_XMM1_Dc * fVar1 * in_XMM1_Db + extraout_XMM0_Dc * fVar3) ^
       __xmm_80000000800000008000000080000000;
  *(float *)&this->field_0x24 = in_XMM1_Db * extraout_XMM0_Dc - in_XMM1_Dc * fVar1 * fVar3;
  *(float *)&this->field_0x30 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
  *(float *)&this->field_0x34 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  *(float *)&this->field_0x38 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)&this->field_0x3c = 0x3f800000;
  return this;
}

// TRotationMatrix<double> @ 14179d6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRotationMatrix<double> * __thiscall
UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
          (TRotationMatrix<double> *this,TRotator<double> *param_1)

{
  undefined8 uVar1;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar2;
  double dVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  dVar2 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
  dVar3 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
  __vdecl_sincos2();
  local_78._8_4_ = SUB84(dVar3,0);
  local_78._0_8_ = dVar2;
  local_78._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __vdecl_sincos2();
  *(double *)&this->field_0x10 = extraout_XMM0_Qa;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(double *)this = (double)local_78._8_8_ * (double)local_78._0_8_;
  *(double *)&this->field_0x8 = (double)local_78._0_8_ * extraout_XMM0_Qb;
  *(double *)&this->field_0x20 =
       extraout_XMM0_Qa_00 * extraout_XMM0_Qa * (double)local_78._8_8_ - dVar2 * extraout_XMM0_Qb;
  *(double *)&this->field_0x50 = dVar2 * (double)local_78._0_8_;
  *(ulonglong *)&this->field_0x30 =
       CONCAT44((uint)((ulonglong)((double)local_78._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
                __xmm_80000000000000008000000000000000._4_4_,
                SUB84((double)local_78._0_8_ * extraout_XMM0_Qa_00,0) ^
                (uint)__xmm_80000000000000008000000000000000);
  *(double *)&this->field_0x28 =
       extraout_XMM0_Qa_00 * extraout_XMM0_Qa * extraout_XMM0_Qb + dVar2 * (double)local_78._8_8_;
  dVar3 = dVar2 * extraout_XMM0_Qa * (double)local_78._8_8_ + extraout_XMM0_Qa_00 * extraout_XMM0_Qb
  ;
  *(ulonglong *)&this->field_0x40 =
       CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  *(double *)&this->field_0x48 =
       (double)local_78._8_8_ * extraout_XMM0_Qa_00 - dVar2 * extraout_XMM0_Qa * extraout_XMM0_Qb;
  *(double *)&this->field_0x60 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(double *)&this->field_0x68 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  *(undefined8 *)&this->field_0x70 = uVar1;
  return this;
}

