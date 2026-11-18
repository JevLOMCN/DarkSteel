// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetTangents @ 1478f55c0

void __thiscall
TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
          (TStaticMeshVertexTangentDatum<FPackedNormal> *this,TVector<float> *param_1,
          TVector<float> *param_2,TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  schar sVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [4];
  
  fVar9 = __real_437e0000;
  fVar8 = __real_3f000000;
  fVar13 = (param_1->field0_0x0)._s_0.X;
  fVar1 = (param_3->field0_0x0)._s_0.X;
  fVar2 = (param_3->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar4 = (param_1->field0_0x0)._s_0.Z;
  fVar5 = (param_3->field0_0x0)._s_0.Z;
  fVar14 = fVar13 * __real_437e0000;
  (this->TangentX).Vector._s_0.W = '\x7f';
  local_a8._s_0.X = (double)fVar1;
  local_a8._s_0.Z = (double)fVar5;
  uVar6 = *(undefined8 *)&param_2->field0_0x0;
  dVar7 = (double)(float)((ulonglong)uVar6 >> 0x20);
  iVar10 = (int)ROUND(fVar14 + fVar8) >> 1;
  iVar12 = 0x7f;
  if (iVar10 < 0x7f) {
    iVar12 = iVar10;
  }
  sVar11 = -0x80;
  if (-0x80 < iVar12) {
    sVar11 = (schar)iVar12;
  }
  (this->TangentX).Vector._s_0.X = sVar11;
  local_78[0]._8_4_ = SUB84(dVar7,0);
  local_78[0]._0_8_ = (double)(float)uVar6;
  local_78[0]._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_78[0]._16_8_ = (undefined8)(param_2->field0_0x0)._s_0.Z;
  iVar10 = (int)ROUND(fVar3 * fVar9 + fVar8) >> 1;
  iVar12 = 0x7f;
  if (iVar10 < 0x7f) {
    iVar12 = iVar10;
  }
  sVar11 = -0x80;
  if (-0x80 < iVar12) {
    sVar11 = (schar)iVar12;
  }
  (this->TangentX).Vector._s_0.Y = sVar11;
  local_90._s_0.Y = (double)fVar3;
  local_a8._s_0.Y = (double)fVar2;
  iVar10 = (int)ROUND(fVar4 * fVar9 + fVar8) >> 1;
  iVar12 = 0x7f;
  if (iVar10 < 0x7f) {
    iVar12 = iVar10;
  }
  sVar11 = -0x80;
  if (-0x80 < iVar12) {
    sVar11 = (schar)iVar12;
  }
  local_90._s_0.X = (double)fVar13;
  (this->TangentX).Vector._s_0.Z = sVar11;
  local_90._s_0.Z = (double)fVar4;
  fVar13 = GetBasisDeterminantSign
                     ((TVector<double> *)&local_90._s_0,(TVector<double> *)&local_78[0]._s_0,
                      (TVector<double> *)&local_a8._s_0);
  iVar10 = (int)ROUND(fVar1 * fVar9 + fVar8) >> 1;
  iVar12 = 0x7f;
  if (iVar10 < 0x7f) {
    iVar12 = iVar10;
  }
  sVar11 = -0x80;
  if (-0x80 < iVar12) {
    sVar11 = (schar)iVar12;
  }
  (this->TangentZ).Vector._s_0.X = sVar11;
  iVar10 = (int)ROUND(fVar2 * fVar9 + fVar8) >> 1;
  iVar12 = 0x7f;
  if (iVar10 < 0x7f) {
    iVar12 = iVar10;
  }
  sVar11 = -0x80;
  if (-0x80 < iVar12) {
    sVar11 = (schar)iVar12;
  }
  (this->TangentZ).Vector._s_0.Y = sVar11;
  iVar10 = (int)ROUND(fVar5 * fVar9 + fVar8) >> 1;
  iVar12 = 0x7f;
  if (iVar10 < 0x7f) {
    iVar12 = iVar10;
  }
  sVar11 = -0x80;
  if (-0x80 < iVar12) {
    sVar11 = (schar)iVar12;
  }
  (this->TangentZ).Vector._s_0.Z = sVar11;
  iVar10 = (int)ROUND(fVar13 * fVar9 + fVar8) >> 1;
  iVar12 = 0x7f;
  if (iVar10 < 0x7f) {
    iVar12 = iVar10;
  }
  sVar11 = -0x80;
  if (-0x80 < iVar12) {
    sVar11 = (schar)iVar12;
  }
  (this->TangentZ).Vector._s_0.W = sVar11;
  return;
}

