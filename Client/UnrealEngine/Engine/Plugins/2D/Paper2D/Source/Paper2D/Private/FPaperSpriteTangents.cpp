// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// SetTangentsFromPaperAxes @ 14ad0acb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FPaperSpriteTangents::SetTangentsFromPaperAxes(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  PackedNormalX.Vector._s_0.W = '\x7f';
  uVar1 = (int)ROUND(PaperAxisX.field0_0x0._s_0.X * __real_405fc00000000000 +
                     PaperAxisX.field0_0x0._s_0.X * __real_405fc00000000000 +
                     __real_3fe0000000000000) >> 1;
  uVar13 = 0x7f;
  if ((int)uVar1 < 0x7f) {
    uVar13 = uVar1;
  }
  uVar1 = 0xffffff80;
  if (-0x80 < (int)uVar13) {
    uVar1 = uVar13 & 0xff;
  }
  PackedNormalX.Vector._s_0.X = (schar)uVar1;
  uVar2 = (int)ROUND(PaperAxisX.field0_0x0._s_0.Y * __real_405fc00000000000 +
                     PaperAxisX.field0_0x0._s_0.Y * __real_405fc00000000000 +
                     __real_3fe0000000000000) >> 1;
  uVar13 = 0x7f;
  if ((int)uVar2 < 0x7f) {
    uVar13 = uVar2;
  }
  uVar15 = 0x7f;
  uVar2 = 0xffffff80;
  if (-0x80 < (int)uVar13) {
    uVar2 = uVar13 & 0xff;
  }
  PackedNormalX.Vector._s_0.Y = (schar)uVar2;
  uVar3 = (int)ROUND(PaperAxisX.field0_0x0._s_0.Z * __real_405fc00000000000 +
                     PaperAxisX.field0_0x0._s_0.Z * __real_405fc00000000000 +
                     __real_3fe0000000000000) >> 1;
  uVar13 = 0x7f;
  if ((int)uVar3 < 0x7f) {
    uVar13 = uVar3;
  }
  uVar3 = 0xffffff80;
  if (-0x80 < (int)uVar13) {
    uVar3 = uVar13 & 0xff;
  }
  PackedNormalX.Vector._s_0.Z = (schar)uVar3;
  iVar4 = (int)ROUND(__real_3fe0000000000000 -
                     PaperAxisZ.field0_0x0._s_0.X * __real_406fc00000000000) >> 1;
  iVar14 = 0x7f;
  if (iVar4 < 0x7f) {
    iVar14 = iVar4;
  }
  PackedNormalZ.Vector._s_0.X = -0x80;
  if (-0x80 < iVar14) {
    PackedNormalZ.Vector._s_0.X = (schar)iVar14;
  }
  uVar5 = (int)ROUND(__real_3fe0000000000000 -
                     PaperAxisZ.field0_0x0._s_0.Y * __real_406fc00000000000) >> 1;
  uVar13 = uVar15;
  if ((int)uVar5 < 0x7f) {
    uVar13 = uVar5;
  }
  PackedNormalZ.Vector._s_0.Y = -0x80;
  if (-0x80 < (int)uVar13) {
    PackedNormalZ.Vector._s_0.Y = (schar)uVar13;
  }
  iVar16 = 0x7f;
  iVar4 = (int)ROUND(__real_3fe0000000000000 -
                     PaperAxisZ.field0_0x0._s_0.Z * __real_406fc00000000000) >> 1;
  iVar14 = 0x7f;
  if (iVar4 < 0x7f) {
    iVar14 = iVar4;
  }
  PackedNormalZ.Vector._s_0.Z = -0x80;
  if (-0x80 < iVar14) {
    PackedNormalZ.Vector._s_0.Z = (schar)iVar14;
  }
  uVar5 = (int)ROUND(PaperAxisZ.field0_0x0._s_0.X * __real_405fc00000000000 +
                     PaperAxisZ.field0_0x0._s_0.X * __real_405fc00000000000 +
                     __real_3fe0000000000000) >> 1;
  uVar13 = uVar15;
  if ((int)uVar5 < 0x7f) {
    uVar13 = uVar5;
  }
  uVar6 = (int)ROUND(PaperAxisZ.field0_0x0._s_0.Y * __real_405fc00000000000 +
                     PaperAxisZ.field0_0x0._s_0.Y * __real_405fc00000000000 +
                     __real_3fe0000000000000) >> 1;
  uVar5 = uVar15;
  if ((int)uVar6 < 0x7f) {
    uVar5 = uVar6;
  }
  uVar7 = (int)ROUND(PaperAxisZ.field0_0x0._s_0.Z * __real_405fc00000000000 +
                     PaperAxisZ.field0_0x0._s_0.Z * __real_405fc00000000000 +
                     __real_3fe0000000000000) >> 1;
  uVar6 = uVar15;
  if ((int)uVar7 < 0x7f) {
    uVar6 = uVar7;
  }
  uVar7 = (int)ROUND(PaperAxisY.field0_0x0._s_0.X * __real_405fc00000000000 +
                     PaperAxisY.field0_0x0._s_0.X * __real_405fc00000000000 +
                     __real_3fe0000000000000) >> 1;
  if ((int)uVar7 < 0x7f) {
    uVar15 = uVar7;
  }
  uVar8 = (int)ROUND(PaperAxisY.field0_0x0._s_0.Y * __real_405fc00000000000 +
                     PaperAxisY.field0_0x0._s_0.Y * __real_405fc00000000000 +
                     __real_3fe0000000000000) >> 1;
  uVar7 = 0x7f;
  if ((int)uVar8 < 0x7f) {
    uVar7 = uVar8;
  }
  auVar18._0_8_ =
       PaperAxisY.field0_0x0._s_0.Z * __real_405fc00000000000 +
       PaperAxisY.field0_0x0._s_0.Z * __real_405fc00000000000 + __real_3fe0000000000000;
  auVar18._8_8_ = 0;
  iVar14 = iVar16;
  if ((int)ROUND(auVar18._0_8_) >> 1 < 0x7f) {
    iVar14 = (int)ROUND(auVar18._0_8_) >> 1;
  }
  bVar9 = 0x80;
  if (-0x80 < (int)uVar6) {
    bVar9 = (byte)uVar6;
  }
  bVar10 = 0x80;
  if (-0x80 < (int)uVar5) {
    bVar10 = (byte)uVar5;
  }
  bVar11 = 0x80;
  if (-0x80 < (int)uVar13) {
    bVar11 = (byte)uVar13;
  }
  bVar12 = 0x80;
  if (-0x80 < iVar14) {
    bVar12 = (byte)iVar14;
  }
  auVar18 = pmovsxbd(auVar18,ZEXT416(((bVar9 | 0x7f00) << 8 | (uint)bVar10) << 8 | (uint)bVar11));
  uVar13 = 0x80;
  if (-0x80 < (int)uVar7) {
    uVar13 = uVar7 & 0xff;
  }
  fVar21 = (float)auVar18._4_4_ * _UNK_151040074;
  fVar24 = (float)auVar18._8_4_ * _UNK_151040078;
  uVar5 = 0x80;
  if (-0x80 < (int)uVar15) {
    uVar5 = uVar15 & 0xff;
  }
  auVar19 = pmovsxbd(auVar18,ZEXT416(((bVar12 | 0x7f00) << 8 | uVar13) << 8 | uVar5));
  auVar20 = pmovsxbd(auVar19,ZEXT416(((uVar3 & 0xff | 0x7f00) << 8 | uVar2 & 0xff) << 8 |
                                     uVar1 & 0xff));
  fVar22 = (float)auVar19._4_4_ * _UNK_151040074;
  fVar25 = (float)auVar19._8_4_ * _UNK_151040078;
  fVar23 = (float)auVar20._4_4_ * _UNK_151040074;
  fVar26 = (float)auVar20._8_4_ * _UNK_151040078;
  fVar17 = __real_3f800000;
  if (((fVar24 * fVar22 - fVar25 * fVar21) *
       (float)auVar20._0_4_ * ___xmm_3c0102043c0102043c0102043c010204 -
      (fVar24 * fVar23 - fVar26 * fVar21) *
      (float)auVar19._0_4_ * ___xmm_3c0102043c0102043c0102043c010204) +
      (fVar25 * fVar23 - fVar26 * fVar22) *
      (float)auVar18._0_4_ * ___xmm_3c0102043c0102043c0102043c010204 < 0.0) {
    fVar17 = __real_bf800000;
  }
  if (fVar17 < 0.0) {
    iVar16 = -0x7f;
  }
  PackedNormalZ.Vector._s_0.W = (schar)iVar16;
  return;
}

