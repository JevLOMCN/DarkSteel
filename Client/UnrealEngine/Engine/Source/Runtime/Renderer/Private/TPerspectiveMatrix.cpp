// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// TPerspectiveMatrix<double> @ 144a591f0

TPerspectiveMatrix<double> * __thiscall
UE::Math::TPerspectiveMatrix<double>::TPerspectiveMatrix<double>
          (TPerspectiveMatrix<double> *this,double param_1,double param_2,double param_3,
          double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = __real_3ff0000000000000;
  if (param_4 == param_5) {
    dVar1 = (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(param_4,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar2 = __real_3ff0000000000000;
  }
  else {
    dVar2 = param_5 / (param_5 - param_4);
    dVar1 = param_4 * (__real_bff0000000000000 / (param_5 - param_4)) * param_5;
  }
  dVar4 = tan(param_1);
  *(double *)&this->field_0x50 = dVar2;
  *(undefined8 *)&this->field_0x58 = 0x3ff0000000000000;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(double *)this = dVar3 / dVar4;
  *(double *)&this->field_0x70 = dVar1;
  *(double *)&this->field_0x28 = param_2 / (dVar4 * param_3);
  return this;
}

