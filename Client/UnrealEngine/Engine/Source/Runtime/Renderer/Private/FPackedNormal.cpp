// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 145859df0

void __thiscall FPackedNormal::operator=(FPackedNormal *this,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  schar sVar5;
  int iVar6;
  
  fVar3 = __real_437e0000;
  fVar2 = __real_3f000000;
  iVar4 = (int)ROUND((param_1->field0_0x0)._s_0.X * __real_437e0000 + __real_3f000000) >> 1;
  iVar6 = 0x7f;
  if (iVar4 < 0x7f) {
    iVar6 = iVar4;
  }
  sVar5 = -0x80;
  if (-0x80 < iVar6) {
    sVar5 = (schar)iVar6;
  }
  (this->Vector)._s_0.X = sVar5;
  iVar4 = (int)ROUND((param_1->field0_0x0)._s_0.Y * fVar3 + fVar2) >> 1;
  iVar6 = 0x7f;
  if (iVar4 < 0x7f) {
    iVar6 = iVar4;
  }
  sVar5 = -0x80;
  if (-0x80 < iVar6) {
    sVar5 = (schar)iVar6;
  }
  (this->Vector)._s_0.Y = sVar5;
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Vector)._s_0.W = '\x7f';
  iVar4 = (int)ROUND(fVar1 * fVar3 + fVar2) >> 1;
  iVar6 = 0x7f;
  if (iVar4 < 0x7f) {
    iVar6 = iVar4;
  }
  sVar5 = -0x80;
  if (-0x80 < iVar6) {
    sVar5 = (schar)iVar6;
  }
  (this->Vector)._s_0.Z = sVar5;
  return;
}

