// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// TTranslationMatrix<double> @ 145295200

TTranslationMatrix<double> * __thiscall
UE::Math::TTranslationMatrix<double>::TTranslationMatrix<double>
          (TTranslationMatrix<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(double *)&this->field_0x60 = dVar2;
  *(double *)&this->field_0x68 = dVar3;
  *(undefined8 *)this = 0x3ff0000000000000;
  *(double *)&this->field_0x70 = dVar1;
  *(undefined8 *)&this->field_0x28 = 0x3ff0000000000000;
  *(undefined8 *)&this->field_0x50 = 0x3ff0000000000000;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  return this;
}

