// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// Inverse @ 142510e90

TTransform2<float> * __thiscall
TTransform2<float>::Inverse(TTransform2<float> *this,TTransform2<float> *__return_storage_ptr__)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar7 = (this->M).M[0][1];
  fVar1 = (this->M).M[0][0];
  fVar4 = (float)((uint)(this->Trans).field0_0x0._s_0.Y ^ __xmm_80000000800000008000000080000000);
  fVar9 = __real_3f800000 / (fVar1 * (this->M).M[1][1] - fVar7 * (this->M).M[1][0]);
  fVar8 = fVar9 * (this->M).M[1][1];
  fVar6 = (float)((uint)(fVar9 * (this->M).M[1][0]) ^ __xmm_80000000800000008000000080000000);
  fVar5 = (this->Trans).field0_0x0._s_0.X;
  (__return_storage_ptr__->M).M[0][0] = fVar8;
  fVar5 = (float)((uint)fVar5 ^ uVar3);
  fVar7 = (float)((uint)(fVar9 * fVar7) ^ uVar3);
  fVar9 = fVar9 * fVar1;
  (__return_storage_ptr__->M).M[0][1] = fVar7;
  (__return_storage_ptr__->M).M[1][0] = fVar6;
  (__return_storage_ptr__->M).M[1][1] = fVar9;
  TVar2._s_0.Y = fVar4 * fVar9 + fVar5 * fVar7;
  TVar2._s_0.X = fVar4 * fVar6 + fVar5 * fVar8;
  (__return_storage_ptr__->Trans).field0_0x0 = TVar2;
  return __return_storage_ptr__;
}

