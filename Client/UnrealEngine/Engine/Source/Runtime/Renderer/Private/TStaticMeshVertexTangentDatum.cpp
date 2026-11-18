// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetTangents @ 145887e30

void __thiscall
TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
          (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *this,TVector<float> *param_1,
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
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [4];
  
  fVar9 = __real_477ffe00;
  fVar8 = __real_3f000000;
  fVar14 = (param_1->field0_0x0)._s_0.X;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar3 = (param_3->field0_0x0)._s_0.X;
  fVar4 = (param_3->field0_0x0)._s_0.Y;
  fVar5 = (param_3->field0_0x0)._s_0.Z;
  fVar15 = fVar14 * __real_477ffe00;
  (this->TangentX).W = 0x7fff;
  local_a8._s_0.X = (double)fVar3;
  local_a8._s_0.Z = (double)fVar5;
  uVar6 = *(undefined8 *)&param_2->field0_0x0;
  dVar7 = (double)(float)((ulonglong)uVar6 >> 0x20);
  iVar11 = (int)ROUND(fVar15 + fVar8) >> 1;
  iVar13 = 0x7fff;
  if (iVar11 < 0x7fff) {
    iVar13 = iVar11;
  }
  sVar10 = -0x8000;
  if (-0x8000 < iVar13) {
    sVar10 = (short)iVar13;
  }
  (this->TangentX).X = sVar10;
  iVar13 = 0x7fff;
  local_78[0]._8_4_ = SUB84(dVar7,0);
  local_78[0]._0_8_ = (double)(float)uVar6;
  local_78[0]._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_78[0]._16_8_ = (undefined8)(param_2->field0_0x0)._s_0.Z;
  iVar12 = (int)ROUND(fVar1 * fVar9 + fVar8) >> 1;
  iVar11 = 0x7fff;
  if (iVar12 < 0x7fff) {
    iVar11 = iVar12;
  }
  sVar10 = -0x8000;
  if (-0x8000 < iVar11) {
    sVar10 = (short)iVar11;
  }
  (this->TangentX).Y = sVar10;
  local_90._s_0.Y = (double)fVar1;
  local_a8._s_0.Y = (double)fVar4;
  iVar12 = (int)ROUND(fVar2 * fVar9 + fVar8) >> 1;
  iVar11 = iVar13;
  if (iVar12 < 0x7fff) {
    iVar11 = iVar12;
  }
  sVar10 = -0x8000;
  if (-0x8000 < iVar11) {
    sVar10 = (short)iVar11;
  }
  local_90._s_0.X = (double)fVar14;
  (this->TangentX).Z = sVar10;
  local_90._s_0.Z = (double)fVar2;
  fVar14 = GetBasisDeterminantSign
                     ((TVector<double> *)&local_90._s_0,(TVector<double> *)&local_78[0]._s_0,
                      (TVector<double> *)&local_a8._s_0);
  iVar12 = (int)ROUND(fVar3 * fVar9 + fVar8) >> 1;
  iVar11 = iVar13;
  if (iVar12 < 0x7fff) {
    iVar11 = iVar12;
  }
  sVar10 = -0x8000;
  if (-0x8000 < iVar11) {
    sVar10 = (short)iVar11;
  }
  (this->TangentZ).X = sVar10;
  iVar11 = (int)ROUND(fVar4 * fVar9 + fVar8) >> 1;
  if (iVar11 < 0x7fff) {
    iVar13 = iVar11;
  }
  sVar10 = -0x8000;
  if (-0x8000 < iVar13) {
    sVar10 = (short)iVar13;
  }
  (this->TangentZ).Y = sVar10;
  iVar11 = (int)ROUND(fVar5 * fVar9 + fVar8) >> 1;
  iVar13 = 0x7fff;
  if (iVar11 < 0x7fff) {
    iVar13 = iVar11;
  }
  sVar10 = -0x8000;
  if (-0x8000 < iVar13) {
    sVar10 = (short)iVar13;
  }
  (this->TangentZ).Z = sVar10;
  iVar11 = (int)ROUND(fVar14 * fVar9 + fVar8) >> 1;
  iVar13 = 0x7fff;
  if (iVar11 < 0x7fff) {
    iVar13 = iVar11;
  }
  sVar10 = -0x8000;
  if (-0x8000 < iVar13) {
    sVar10 = (short)iVar13;
  }
  (this->TangentZ).W = sVar10;
  return;
}

