// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// TScaleRotationTranslationMatrix<double> @ 145f40830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TScaleRotationTranslationMatrix<double> * __thiscall
UE::Math::TScaleRotationTranslationMatrix<double>::TScaleRotationTranslationMatrix<double>
          (TScaleRotationTranslationMatrix<double> *this,TVector<double> *param_1,
          TRotator<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double dVar6;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  double dVar7;
  
  dVar6 = __real_bff0000000000000;
  dVar3 = __real_3ff0000000000000;
  dVar1 = param_2->Pitch;
  if (dVar1 == 0.0) {
    dVar1 = __real_3ff0000000000000;
    dVar4 = 0.0;
  }
  else if (dVar1 == __real_4056800000000000) {
    dVar1 = 0.0;
    dVar4 = __real_3ff0000000000000;
  }
  else if (dVar1 == __real_4066800000000000) {
    dVar4 = 0.0;
    dVar1 = __real_bff0000000000000;
  }
  else if (dVar1 == ___real_4070e00000000000) {
    dVar1 = 0.0;
    dVar4 = __real_bff0000000000000;
  }
  else {
    __libm_sse2_sincos_();
    dVar1 = extraout_XMM0_Qb;
    dVar4 = extraout_XMM0_Qa;
  }
  dVar2 = param_2->Yaw;
  if (dVar2 == 0.0) {
    dVar2 = dVar3;
    dVar5 = 0.0;
  }
  else if (dVar2 == __real_4056800000000000) {
    dVar2 = 0.0;
    dVar5 = dVar3;
  }
  else if (dVar2 == __real_4066800000000000) {
    dVar2 = dVar6;
    dVar5 = 0.0;
  }
  else if (dVar2 == ___real_4070e00000000000) {
    dVar2 = 0.0;
    dVar5 = dVar6;
  }
  else {
    __libm_sse2_sincos_();
    dVar2 = extraout_XMM0_Qb_00;
    dVar5 = extraout_XMM0_Qa_00;
  }
  dVar7 = param_2->Roll;
  if (dVar7 == 0.0) {
    dVar7 = 0.0;
  }
  else if (dVar7 == __real_4056800000000000) {
    dVar7 = dVar3;
    dVar3 = 0.0;
  }
  else if (dVar7 == __real_4066800000000000) {
    dVar7 = 0.0;
    dVar3 = dVar6;
  }
  else if (dVar7 == ___real_4070e00000000000) {
    dVar3 = 0.0;
    dVar7 = dVar6;
  }
  else {
    __libm_sse2_sincos_();
    dVar7 = extraout_XMM0_Qa_01;
    dVar3 = extraout_XMM0_Qb_01;
  }
  *(double *)this = dVar2 * dVar1 * (param_1->field0_0x0)._s_0.X;
  *(double *)&this->field_0x8 = dVar5 * dVar1 * (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.X;
  *(undefined8 *)&this->field_0x18 = 0;
  *(double *)&this->field_0x10 = dVar4 * dVar6;
  *(double *)&this->field_0x20 =
       (dVar7 * dVar4 * dVar2 - dVar3 * dVar5) * (param_1->field0_0x0)._s_0.Y;
  *(double *)&this->field_0x28 =
       (dVar7 * dVar4 * dVar5 + dVar3 * dVar2) * (param_1->field0_0x0)._s_0.Y;
  dVar6 = dVar7 * dVar1 * (param_1->field0_0x0)._s_0.Y;
  *(undefined8 *)&this->field_0x38 = 0;
  *(ulonglong *)&this->field_0x30 =
       CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar6 = (dVar3 * dVar4 * dVar2 + dVar7 * dVar5) * (param_1->field0_0x0)._s_0.Z;
  *(ulonglong *)&this->field_0x40 =
       CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
  *(double *)&this->field_0x48 =
       (dVar7 * dVar2 - dVar3 * dVar4 * dVar5) * (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&this->field_0x58 = 0;
  *(double *)&this->field_0x50 = dVar3 * dVar1 * dVar6;
  *(double *)&this->field_0x60 = (param_3->field0_0x0)._s_0.X;
  *(double *)&this->field_0x68 = (param_3->field0_0x0)._s_0.Y;
  *(double *)&this->field_0x70 = (param_3->field0_0x0)._s_0.Z;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  return this;
}

