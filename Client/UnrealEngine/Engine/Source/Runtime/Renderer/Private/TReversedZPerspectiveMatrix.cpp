// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// TReversedZPerspectiveMatrix<double> @ 144993530

TReversedZPerspectiveMatrix<double> * __thiscall
UE::Math::TReversedZPerspectiveMatrix<double>::TReversedZPerspectiveMatrix<double>
          (TReversedZPerspectiveMatrix<double> *this,double param_1,double param_2,double param_3,
          double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_4 == param_5) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = param_4 / (param_4 - param_5);
    param_4 = param_4 * param_5 * (__real_bff0000000000000 / (param_4 - param_5));
  }
  dVar2 = tan(param_1);
  dVar3 = __real_3ff0000000000000 / dVar2;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x58 = 0x3ff0000000000000;
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
  *(double *)&this->field_0x50 = dVar1;
  *(double *)&this->field_0x70 = param_4;
  *(double *)&this->field_0x28 = param_2 / (dVar2 * param_3);
  *(double *)this = dVar3;
  return this;
}

// TReversedZPerspectiveMatrix<double> @ 145476ae0

TReversedZPerspectiveMatrix<double> * __thiscall
UE::Math::TReversedZPerspectiveMatrix<double>::TReversedZPerspectiveMatrix<double>
          (TReversedZPerspectiveMatrix<double> *this,double param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6)

{
  double dVar1;
  double dVar2;
  
  if (param_5 == param_6) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = param_5 / (param_5 - param_6);
    param_5 = param_5 * param_6 * (__real_bff0000000000000 / (param_5 - param_6));
  }
  dVar2 = tan(param_1);
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(double *)this = param_3 / dVar2;
  dVar2 = tan(param_2);
  *(undefined8 *)&this->field_0x58 = 0x3ff0000000000000;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(double *)&this->field_0x50 = dVar1;
  *(double *)&this->field_0x70 = param_5;
  *(double *)&this->field_0x28 = param_4 / dVar2;
  return this;
}

