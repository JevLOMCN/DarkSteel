// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TReversedZOrthoMatrix<double> @ 1476e6790

TReversedZOrthoMatrix<double> * __thiscall
UE::Math::TReversedZOrthoMatrix<double>::TReversedZOrthoMatrix<double>
          (TReversedZOrthoMatrix<double> *this,double param_1,double param_2,double param_3,
          double param_4)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar3 = (uint)((ulonglong)param_3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar5 = __real_3ff0000000000000 - param_3 * param_4;
  dVar1 = __real_3ff0000000000000;
  if (param_2 != 0.0) {
    dVar1 = __real_3ff0000000000000 / param_2;
  }
  dVar4 = __real_3ff0000000000000;
  if (param_1 != 0.0) {
    dVar4 = __real_3ff0000000000000 / param_1;
  }
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  *(double *)this = dVar4;
  *(double *)&this->field_0x28 = dVar1;
  *(ulonglong *)&this->field_0x50 = CONCAT44(uVar3,uVar2);
  *(double *)&this->field_0x70 = dVar5;
  return this;
}

