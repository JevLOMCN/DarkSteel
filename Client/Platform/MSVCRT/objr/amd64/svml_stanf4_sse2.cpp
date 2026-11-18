// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_tanf4@@16 @ 1501668f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_tanf4__16(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  int extraout_EAX;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint in_XMM0_Da;
  float fVar14;
  float fVar15;
  uint in_XMM0_Db;
  float fVar16;
  float fVar17;
  uint in_XMM0_Dc;
  float fVar18;
  float fVar19;
  uint in_XMM0_Dd;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double local_d8;
  int local_98 [4];
  float local_88 [34];
  
  fVar24 = (float)(in_XMM0_Da & MMIABSMASK);
  fVar25 = (float)(in_XMM0_Db & _UNK_1561ce104);
  fVar28 = (float)(in_XMM0_Dc & _UNK_1561ce108);
  fVar29 = (float)(in_XMM0_Dd & _UNK_1561ce10c);
  auVar32._0_4_ = -(uint)((int)MMIHUGE < (int)fVar24);
  auVar32._4_4_ = -(uint)(_UNK_1561ce134 < (int)fVar25);
  auVar32._8_4_ = -(uint)(_UNK_1561ce138 < (int)fVar28);
  auVar32._12_4_ = -(uint)(_UNK_1561ce13c < (int)fVar29);
  iVar9 = movmskps(in_EAX,auVar32);
  if (iVar9 == 0) {
    fVar14 = fVar24 * (float)MMSINVPI + (float)MMSRSHIFT;
    fVar16 = fVar25 * _UNK_1561ce124 + _UNK_1561ce164;
    fVar18 = fVar28 * _UNK_1561ce128 + _UNK_1561ce168;
    fVar20 = fVar29 * _UNK_1561ce12c + _UNK_1561ce16c;
    fVar15 = fVar14 - (float)MMSRSHIFT;
    fVar17 = fVar16 - _UNK_1561ce164;
    fVar19 = fVar18 - _UNK_1561ce168;
    fVar21 = fVar20 - _UNK_1561ce16c;
    fVar24 = (((fVar24 - (float)MMSPI1 * fVar15) - (float)MMSPI2 * fVar15) - (float)MMSPI3 * fVar15)
             - (float)MMSPI4 * fVar15;
    fVar15 = (((fVar25 - _UNK_1561ce144 * fVar17) - _UNK_1561ce154 * fVar17) -
             _UNK_1561ce174 * fVar17) - _UNK_1561ce184 * fVar17;
    fVar17 = (((fVar28 - _UNK_1561ce148 * fVar19) - _UNK_1561ce158 * fVar19) -
             _UNK_1561ce178 * fVar19) - _UNK_1561ce188 * fVar19;
    fVar19 = (((fVar29 - _UNK_1561ce14c * fVar21) - _UNK_1561ce15c * fVar21) -
             _UNK_1561ce17c * fVar21) - _UNK_1561ce18c * fVar21;
    iVar9 = -(uint)((float)(((int)fVar14 << 0x1f) >> 1) != 0.0);
    iVar11 = -(uint)((float)(((int)fVar16 << 0x1f) >> 1) != 0.0);
    iVar12 = -(uint)((float)(((int)fVar18 << 0x1f) >> 1) != 0.0);
    iVar13 = -(uint)((float)(((int)fVar20 << 0x1f) >> 1) != 0.0);
    fVar25 = fVar24 * fVar24;
    fVar28 = fVar15 * fVar15;
    fVar29 = fVar17 * fVar17;
    fVar14 = fVar19 * fVar19;
    fVar24 = ((float)MMSP1 * fVar25 + (float)MMSP0) * fVar24;
    fVar15 = (_UNK_1561ce194 * fVar28 + _UNK_1561ce1b4) * fVar15;
    fVar17 = (_UNK_1561ce198 * fVar29 + _UNK_1561ce1b8) * fVar17;
    fVar19 = (_UNK_1561ce19c * fVar14 + _UNK_1561ce1bc) * fVar19;
    fVar25 = ((float)MMSQ2 * fVar25 + (float)MMSQ1) * fVar25 + (float)MMSQ0;
    fVar28 = (_UNK_1561ce1a4 * fVar28 + _UNK_1561ce1c4) * fVar28 + _UNK_1561ce1d4;
    fVar29 = (_UNK_1561ce1a8 * fVar29 + _UNK_1561ce1c8) * fVar29 + _UNK_1561ce1d8;
    fVar14 = (_UNK_1561ce1ac * fVar14 + _UNK_1561ce1cc) * fVar14 + _UNK_1561ce1dc;
    auVar22._4_4_ = iVar11;
    auVar22._0_4_ = iVar9;
    auVar22._8_4_ = iVar12;
    auVar22._12_4_ = iVar13;
    auVar26._4_4_ = iVar11;
    auVar26._0_4_ = iVar9;
    auVar26._8_4_ = iVar12;
    auVar26._12_4_ = iVar13;
    auVar1._4_4_ = fVar15;
    auVar1._0_4_ = fVar24;
    auVar1._8_4_ = fVar17;
    auVar1._12_4_ = fVar19;
    auVar5._4_4_ = fVar28;
    auVar5._0_4_ = fVar25;
    auVar5._8_4_ = fVar29;
    auVar5._12_4_ = fVar14;
    auVar30._4_4_ = iVar11;
    auVar30._0_4_ = iVar9;
    auVar30._8_4_ = iVar12;
    auVar30._12_4_ = iVar13;
    auVar33._4_4_ = iVar11;
    auVar33._0_4_ = iVar9;
    auVar33._8_4_ = iVar12;
    auVar33._12_4_ = iVar13;
    auVar2._4_4_ = fVar15;
    auVar2._0_4_ = fVar24;
    auVar2._8_4_ = fVar17;
    auVar2._12_4_ = fVar19;
    auVar6._4_4_ = fVar28;
    auVar6._0_4_ = fVar25;
    auVar6._8_4_ = fVar29;
    auVar6._12_4_ = fVar14;
    divps(~auVar30 & auVar2 | auVar33 & auVar6,auVar22 & auVar1 | ~auVar26 & auVar5);
    return;
  }
  lVar10 = 0;
  do {
    __common_trig_reduction();
    local_88[lVar10] = (float)local_d8;
    local_98[lVar10] = extraout_EAX;
    lVar10 = lVar10 + 1;
  } while (lVar10 < 4);
  iVar9 = -(uint)((float)(local_98[0] << 0x1e) != 0.0);
  iVar11 = -(uint)((float)(local_98[1] << 0x1e) != 0.0);
  iVar12 = -(uint)((float)(local_98[2] << 0x1e) != 0.0);
  iVar13 = -(uint)((float)(local_98[3] << 0x1e) != 0.0);
  fVar24 = local_88[0] * local_88[0];
  fVar25 = local_88[1] * local_88[1];
  fVar28 = local_88[2] * local_88[2];
  fVar29 = local_88[3] * local_88[3];
  local_88[0] = ((float)MMSP1 * fVar24 + (float)MMSP0) * local_88[0];
  local_88[1] = (_UNK_1561ce194 * fVar25 + _UNK_1561ce1b4) * local_88[1];
  local_88[2] = (_UNK_1561ce198 * fVar28 + _UNK_1561ce1b8) * local_88[2];
  local_88[3] = (_UNK_1561ce19c * fVar29 + _UNK_1561ce1bc) * local_88[3];
  fVar24 = ((float)MMSQ2 * fVar24 + (float)MMSQ1) * fVar24 + (float)MMSQ0;
  fVar25 = (_UNK_1561ce1a4 * fVar25 + _UNK_1561ce1c4) * fVar25 + _UNK_1561ce1d4;
  fVar28 = (_UNK_1561ce1a8 * fVar28 + _UNK_1561ce1c8) * fVar28 + _UNK_1561ce1d8;
  fVar29 = (_UNK_1561ce1ac * fVar29 + _UNK_1561ce1cc) * fVar29 + _UNK_1561ce1dc;
  auVar23._4_4_ = iVar11;
  auVar23._0_4_ = iVar9;
  auVar23._8_4_ = iVar12;
  auVar23._12_4_ = iVar13;
  auVar27._4_4_ = iVar11;
  auVar27._0_4_ = iVar9;
  auVar27._8_4_ = iVar12;
  auVar27._12_4_ = iVar13;
  auVar3._4_4_ = local_88[1];
  auVar3._0_4_ = local_88[0];
  auVar3._8_4_ = local_88[2];
  auVar3._12_4_ = local_88[3];
  auVar7._4_4_ = fVar25;
  auVar7._0_4_ = fVar24;
  auVar7._8_4_ = fVar28;
  auVar7._12_4_ = fVar29;
  auVar31._4_4_ = iVar11;
  auVar31._0_4_ = iVar9;
  auVar31._8_4_ = iVar12;
  auVar31._12_4_ = iVar13;
  auVar34._4_4_ = iVar11;
  auVar34._0_4_ = iVar9;
  auVar34._8_4_ = iVar12;
  auVar34._12_4_ = iVar13;
  auVar4._4_4_ = local_88[1];
  auVar4._0_4_ = local_88[0];
  auVar4._8_4_ = local_88[2];
  auVar4._12_4_ = local_88[3];
  auVar8._4_4_ = fVar25;
  auVar8._0_4_ = fVar24;
  auVar8._8_4_ = fVar28;
  auVar8._12_4_ = fVar29;
  divps(~auVar31 & auVar4 | auVar34 & auVar8,auVar23 & auVar3 | ~auVar27 & auVar7);
  return;
}

