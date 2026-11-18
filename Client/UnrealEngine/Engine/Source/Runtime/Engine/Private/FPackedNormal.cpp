// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 148626880

void __thiscall FPackedNormal::operator=(FPackedNormal *this,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  schar sVar4;
  int iVar5;
  
  fVar2 = __real_437e0000;
  fVar1 = __real_3f000000;
  iVar3 = (int)ROUND((param_1->field0_0x0)._s_0.X * __real_437e0000 + __real_3f000000) >> 1;
  iVar5 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar5 = iVar3;
  }
  sVar4 = -0x80;
  if (-0x80 < iVar5) {
    sVar4 = (schar)iVar5;
  }
  (this->Vector)._s_0.X = sVar4;
  iVar3 = (int)ROUND((param_1->field0_0x0)._s_0.Y * fVar2 + fVar1) >> 1;
  iVar5 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar5 = iVar3;
  }
  sVar4 = -0x80;
  if (-0x80 < iVar5) {
    sVar4 = (schar)iVar5;
  }
  (this->Vector)._s_0.Y = sVar4;
  iVar3 = (int)ROUND((param_1->field0_0x0)._s_0.Z * fVar2 + fVar1) >> 1;
  iVar5 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar5 = iVar3;
  }
  sVar4 = -0x80;
  if (-0x80 < iVar5) {
    sVar4 = (schar)iVar5;
  }
  (this->Vector)._s_0.Z = sVar4;
  iVar3 = (int)ROUND((param_1->field0_0x0)._s_0.W * fVar2 + fVar1) >> 1;
  iVar5 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar5 = iVar3;
  }
  sVar4 = -0x80;
  if (-0x80 < iVar5) {
    sVar4 = (schar)iVar5;
  }
  (this->Vector)._s_0.W = sVar4;
  return;
}

