// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetTangents @ 148322a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDynamicMeshVertex::SetTangents
          (FDynamicMeshVertex *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  schar sVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  FPackedNormal::operator=(&this->TangentX,param_1);
  FPackedNormal::operator=(&this->TangentZ,param_3);
  uVar14 = 0x7f;
  iVar2 = (int)ROUND((param_3->field0_0x0)._s_0.X * __real_437e0000 + __real_3f000000) >> 1;
  iVar1 = 0x7f;
  if (iVar2 < 0x7f) {
    iVar1 = iVar2;
  }
  uVar3 = (int)ROUND((param_3->field0_0x0)._s_0.Y * __real_437e0000 + __real_3f000000) >> 1;
  uVar12 = 0x7f;
  if ((int)uVar3 < 0x7f) {
    uVar12 = uVar3;
  }
  uVar4 = (int)ROUND((param_3->field0_0x0)._s_0.Z * __real_437e0000 + __real_3f000000) >> 1;
  uVar3 = 0x7f;
  if ((int)uVar4 < 0x7f) {
    uVar3 = uVar4;
  }
  uVar5 = (int)ROUND((param_2->field0_0x0)._s_0.X * __real_437e0000 + __real_3f000000) >> 1;
  uVar4 = uVar14;
  if ((int)uVar5 < 0x7f) {
    uVar4 = uVar5;
  }
  uVar6 = (int)ROUND((param_2->field0_0x0)._s_0.Y * __real_437e0000 + __real_3f000000) >> 1;
  uVar5 = 0x7f;
  if ((int)uVar6 < 0x7f) {
    uVar5 = uVar6;
  }
  uVar7 = (int)ROUND((param_2->field0_0x0)._s_0.Z * __real_437e0000 + __real_3f000000) >> 1;
  uVar6 = uVar14;
  if ((int)uVar7 < 0x7f) {
    uVar6 = uVar7;
  }
  uVar8 = (int)ROUND((param_1->field0_0x0)._s_0.X * __real_437e0000 + __real_3f000000) >> 1;
  uVar7 = 0x7f;
  if ((int)uVar8 < 0x7f) {
    uVar7 = uVar8;
  }
  uVar8 = (int)ROUND((param_1->field0_0x0)._s_0.Y * __real_437e0000 + __real_3f000000) >> 1;
  if ((int)uVar8 < 0x7f) {
    uVar14 = uVar8;
  }
  fVar15 = (param_1->field0_0x0)._s_0.Z * __real_437e0000 + __real_3f000000;
  sVar13 = '\x7f';
  uVar9 = (int)ROUND(fVar15) >> 1;
  uVar8 = 0x7f;
  if ((int)uVar9 < 0x7f) {
    uVar8 = uVar9;
  }
  uVar9 = 0x80;
  if (-0x80 < (int)uVar3) {
    uVar9 = uVar3 & 0xff;
  }
  uVar3 = 0x80;
  if (-0x80 < (int)uVar12) {
    uVar3 = uVar12 & 0xff;
  }
  bVar10 = 0x80;
  if (-0x80 < iVar1) {
    bVar10 = (byte)iVar1;
  }
  bVar11 = 0x80;
  if (-0x80 < (int)uVar6) {
    bVar11 = (byte)uVar6;
  }
  auVar17 = pmovsxbd(ZEXT416((uint)fVar15),
                     ZEXT416(((uVar9 | 0x7f00) << 8 | uVar3) << 8 | (uint)bVar10));
  uVar12 = 0x80;
  if (-0x80 < (int)uVar5) {
    uVar12 = uVar5 & 0xff;
  }
  uVar3 = 0x80;
  if (-0x80 < (int)uVar4) {
    uVar3 = uVar4 & 0xff;
  }
  uVar4 = 0x80;
  if (-0x80 < (int)uVar8) {
    uVar4 = uVar8 & 0xff;
  }
  fVar15 = (float)auVar17._4_4_ * _UNK_151040074;
  fVar22 = (float)auVar17._8_4_ * _UNK_151040078;
  bVar10 = 0x80;
  if (-0x80 < (int)uVar14) {
    bVar10 = (byte)uVar14;
  }
  auVar18 = pmovsxbd(auVar17,ZEXT416(((bVar11 | 0x7f00) << 8 | uVar12) << 8 | uVar3));
  fVar20 = (float)auVar18._4_4_ * _UNK_151040074;
  fVar23 = (float)auVar18._8_4_ * _UNK_151040078;
  bVar11 = 0x80;
  if (-0x80 < (int)uVar7) {
    bVar11 = (byte)uVar7;
  }
  auVar19 = pmovsxbd(auVar18,ZEXT416(((uVar4 | 0x7f00) << 8 | (uint)bVar10) << 8 | (uint)bVar11));
  fVar21 = (float)auVar19._4_4_ * _UNK_151040074;
  fVar24 = (float)auVar19._8_4_ * _UNK_151040078;
  fVar16 = __real_3f800000;
  if (((fVar22 * fVar20 - fVar23 * fVar15) *
       (float)auVar19._0_4_ * ___xmm_3c0102043c0102043c0102043c010204 -
      (fVar22 * fVar21 - fVar24 * fVar15) *
      (float)auVar18._0_4_ * ___xmm_3c0102043c0102043c0102043c010204) +
      (fVar23 * fVar21 - fVar24 * fVar20) *
      (float)auVar17._0_4_ * ___xmm_3c0102043c0102043c0102043c010204 < 0.0) {
    fVar16 = __real_bf800000;
  }
  if (fVar16 < 0.0) {
    sVar13 = -0x7f;
  }
  (this->TangentZ).Vector._s_0.W = sVar13;
  return;
}

