// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// TQuatRotationTranslationMatrix<double> @ 146f90300

TQuatRotationTranslationMatrix<double> * __thiscall
UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
          (TQuatRotationTranslationMatrix<double> *this,TQuat<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = __real_3ff0000000000000;
  dVar1 = param_1->X;
  dVar2 = param_1->Y;
  dVar3 = param_1->Z;
  dVar5 = dVar3 + dVar3;
  dVar7 = dVar2 + dVar2;
  dVar6 = (dVar1 + dVar1) * dVar1;
  dVar4 = param_1->W;
  dVar8 = (dVar1 + dVar1) * dVar4;
  *(double *)this = __real_3ff0000000000000 - (dVar5 * dVar3 + dVar7 * dVar2);
  *(double *)&this->field_0x20 = dVar7 * dVar1 - dVar5 * dVar4;
  *(double *)&this->field_0x40 = dVar7 * dVar4 + dVar5 * dVar1;
  *(double *)&this->field_0x60 = (param_2->field0_0x0)._s_0.X;
  *(double *)&this->field_0x8 = dVar5 * dVar4 + dVar7 * dVar1;
  *(double *)&this->field_0x48 = dVar5 * dVar2 - dVar8;
  *(double *)&this->field_0x28 = dVar9 - (dVar5 * dVar3 + dVar6);
  *(double *)&this->field_0x68 = (param_2->field0_0x0)._s_0.Y;
  *(double *)&this->field_0x10 = dVar5 * dVar1 - dVar7 * dVar4;
  *(double *)&this->field_0x30 = dVar8 + dVar5 * dVar2;
  *(double *)&this->field_0x50 = dVar9 - (dVar7 * dVar2 + dVar6);
  *(double *)&this->field_0x70 = (param_2->field0_0x0)._s_0.Z;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  return this;
}

