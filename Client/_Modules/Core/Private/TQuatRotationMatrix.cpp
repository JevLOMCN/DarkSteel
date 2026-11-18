// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TQuatRotationMatrix<float> @ 141c89f10

TQuatRotationMatrix<float> * __thiscall
UE::Math::TQuatRotationMatrix<float>::TQuatRotationMatrix<float>
          (TQuatRotationMatrix<float> *this,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = __real_3f800000;
  fVar1 = param_1->X;
  fVar2 = param_1->Y;
  fVar3 = param_1->Z;
  fVar7 = fVar3 + fVar3;
  fVar9 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  fVar4 = param_1->W;
  fVar10 = (fVar1 + fVar1) * fVar4;
  *(float *)this = __real_3f800000 - (fVar7 * fVar3 + fVar9 * fVar2);
  *(float *)&this->field_0x10 = fVar9 * fVar1 - fVar7 * fVar4;
  *(float *)&this->field_0x20 = fVar9 * fVar4 + fVar7 * fVar1;
  *(float *)&this->field_0x30 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
  *(float *)&this->field_0x4 = fVar7 * fVar4 + fVar9 * fVar1;
  *(float *)&this->field_0x24 = fVar7 * fVar2 - fVar10;
  *(float *)&this->field_0x14 = fVar5 - (fVar7 * fVar3 + fVar8);
  uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  *(float *)&this->field_0x8 = fVar7 * fVar1 - fVar9 * fVar4;
  *(float *)&this->field_0x18 = fVar10 + fVar7 * fVar2;
  *(undefined4 *)&this->field_0x34 = uVar6;
  *(float *)&this->field_0x28 = fVar5 - (fVar9 * fVar2 + fVar8);
  uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x1c = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  *(undefined4 *)&this->field_0x38 = uVar6;
  *(undefined4 *)&this->field_0x3c = 0x3f800000;
  return this;
}

// TQuatRotationMatrix<double> @ 141c8a090

TQuatRotationMatrix<double> * __thiscall
UE::Math::TQuatRotationMatrix<double>::TQuatRotationMatrix<double>
          (TQuatRotationMatrix<double> *this,TQuat<double> *param_1)

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
  undefined8 uVar10;
  
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
  *(double *)&this->field_0x60 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(double *)&this->field_0x8 = dVar5 * dVar4 + dVar7 * dVar1;
  *(double *)&this->field_0x48 = dVar5 * dVar2 - dVar8;
  *(double *)&this->field_0x28 = dVar9 - (dVar5 * dVar3 + dVar6);
  uVar10 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x10 = dVar5 * dVar1 - dVar7 * dVar4;
  *(double *)&this->field_0x30 = dVar8 + dVar5 * dVar2;
  *(undefined8 *)&this->field_0x68 = uVar10;
  *(double *)&this->field_0x50 = dVar9 - (dVar7 * dVar2 + dVar6);
  uVar10 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  *(undefined8 *)&this->field_0x70 = uVar10;
  return this;
}

