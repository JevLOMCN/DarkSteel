// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TRotationTranslationMatrix<double> @ 147928190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRotationTranslationMatrix<double> * __thiscall
UE::Math::TRotationTranslationMatrix<double>::TRotationTranslationMatrix<double>
          (TRotationTranslationMatrix<double> *this,TRotator<double> *param_1,
          TVector<double> *param_2)

{
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  dVar1 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
  dVar2 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
  __vdecl_sincos2();
  local_78._8_4_ = SUB84(dVar2,0);
  local_78._0_8_ = dVar1;
  local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __vdecl_sincos2();
  *(double *)&this->field_0x10 = extraout_XMM0_Qa;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(double *)this = (double)local_78._8_8_ * (double)local_78._0_8_;
  *(double *)&this->field_0x8 = (double)local_78._0_8_ * extraout_XMM0_Qb;
  *(double *)&this->field_0x20 =
       extraout_XMM0_Qa_00 * extraout_XMM0_Qa * (double)local_78._8_8_ - dVar1 * extraout_XMM0_Qb;
  *(double *)&this->field_0x50 = dVar1 * (double)local_78._0_8_;
  *(ulonglong *)&this->field_0x30 =
       CONCAT44((uint)((ulonglong)((double)local_78._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
                __xmm_80000000000000008000000000000000._4_4_,
                SUB84((double)local_78._0_8_ * extraout_XMM0_Qa_00,0) ^
                (uint)__xmm_80000000000000008000000000000000);
  *(double *)&this->field_0x28 =
       extraout_XMM0_Qa_00 * extraout_XMM0_Qa * extraout_XMM0_Qb + dVar1 * (double)local_78._8_8_;
  dVar2 = dVar1 * extraout_XMM0_Qa * (double)local_78._8_8_ + extraout_XMM0_Qa_00 * extraout_XMM0_Qb
  ;
  *(ulonglong *)&this->field_0x40 =
       CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000);
  *(double *)&this->field_0x48 =
       (double)local_78._8_8_ * extraout_XMM0_Qa_00 - dVar1 * extraout_XMM0_Qa * extraout_XMM0_Qb;
  *(double *)&this->field_0x60 = (param_2->field0_0x0)._s_0.X;
  *(double *)&this->field_0x68 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  *(double *)&this->field_0x70 = dVar1;
  return this;
}

