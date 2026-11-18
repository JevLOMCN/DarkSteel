// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// Concatenate @ 14a9a0340

TTransform2<float> * __thiscall
TTransform2<float>::Concatenate
          (TTransform2<float> *this,TTransform2<float> *__return_storage_ptr__,
          TTransform2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TVector2<float>_u_0 TVar11;
  
  fVar1 = (this->Trans).field0_0x0._s_0.X;
  fVar2 = (this->Trans).field0_0x0._s_0.Y;
  fVar3 = (this->M).M[1][0];
  fVar4 = (this->M).M[1][1];
  fVar5 = (param_1->M).M[0][0];
  fVar6 = (param_1->M).M[1][0];
  fVar7 = (param_1->M).M[0][1];
  fVar8 = (param_1->M).M[1][1];
  fVar9 = (this->M).M[0][1];
  fVar10 = (this->M).M[0][0];
  TVar11._s_0.Y = fVar1 * fVar7 + fVar2 * fVar8 + (param_1->Trans).field0_0x0._s_0.Y;
  TVar11._s_0.X = fVar2 * fVar6 + fVar1 * fVar5 + (param_1->Trans).field0_0x0._s_0.X;
  (__return_storage_ptr__->M).M[0][0] = fVar10 * fVar5 + fVar9 * fVar6;
  (__return_storage_ptr__->M).M[0][1] = fVar10 * fVar7 + fVar9 * fVar8;
  (__return_storage_ptr__->M).M[1][0] = fVar3 * fVar5 + fVar4 * fVar6;
  (__return_storage_ptr__->M).M[1][1] = fVar3 * fVar7 + fVar4 * fVar8;
  (__return_storage_ptr__->Trans).field0_0x0 = TVar11;
  return __return_storage_ptr__;
}

