// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// TMirrorMatrix<double> @ 1450aebb0

TMirrorMatrix<double> * __thiscall
UE::Math::TMirrorMatrix<double>::TMirrorMatrix<double>
          (TMirrorMatrix<double> *this,TPlane<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = __real_3ff0000000000000;
  dVar1 = (double)param_1->_padding_;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (double)param_1->_padding_;
  dVar5 = dVar1 * __real_c000000000000000;
  dVar8 = dVar2 * __real_c000000000000000;
  dVar7 = dVar3 * __real_c000000000000000;
  dVar4 = param_1->W;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  *(double *)&this->field_0x60 = (dVar1 + dVar1) * dVar4;
  *(double *)this = dVar6 - (dVar1 + dVar1) * dVar1;
  *(double *)&this->field_0x8 = dVar8 * dVar1;
  *(double *)&this->field_0x10 = dVar7 * dVar1;
  *(double *)&this->field_0x20 = dVar5 * dVar2;
  *(double *)&this->field_0x40 = dVar5 * dVar3;
  *(double *)&this->field_0x68 = (dVar2 + dVar2) * dVar4;
  *(double *)&this->field_0x28 = dVar6 - (dVar2 + dVar2) * dVar2;
  *(double *)&this->field_0x70 = (dVar3 + dVar3) * dVar4;
  *(double *)&this->field_0x30 = dVar7 * dVar2;
  *(double *)&this->field_0x48 = dVar8 * dVar3;
  *(double *)&this->field_0x50 = dVar6 - (dVar3 + dVar3) * dVar3;
  return this;
}

