// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_tanhf4@@16 @ 150167520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_tanhf4__16(void)

{
  undefined1 auVar1 [16];
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar6 = (float)s_fRS + (float)(s_dwAbsMask & in_XMM0_Da);
  fVar8 = _UNK_1561ce604 + (float)(_UNK_1561ce614 & in_XMM0_Db);
  fVar9 = _UNK_1561ce608 + (float)(_UNK_1561ce618 & in_XMM0_Dc);
  fVar10 = _UNK_1561ce60c + (float)(_UNK_1561ce61c & in_XMM0_Dd);
  fVar11 = (float)(s_dwAbsMask & in_XMM0_Da) - (fVar6 - (float)s_fRS);
  fVar12 = (float)(_UNK_1561ce614 & in_XMM0_Db) - (fVar8 - _UNK_1561ce604);
  fVar13 = (float)(_UNK_1561ce618 & in_XMM0_Dc) - (fVar9 - _UNK_1561ce608);
  fVar14 = (float)(_UNK_1561ce61c & in_XMM0_Dd) - (fVar10 - _UNK_1561ce60c);
  fVar2 = (float)s_fA2 * fVar11 * fVar11 + (float)s_fA0;
  fVar3 = _UNK_1561ce664 * fVar12 * fVar12 + _UNK_1561ce674;
  fVar4 = _UNK_1561ce668 * fVar13 * fVar13 + _UNK_1561ce678;
  fVar5 = _UNK_1561ce66c * fVar14 * fVar14 + _UNK_1561ce67c;
  fVar11 = (fVar11 * fVar11 * (float)s_fA3 + (float)s_fA1) * fVar11;
  fVar12 = (fVar12 * fVar12 * _UNK_1561ce684 + _UNK_1561ce694) * fVar12;
  fVar13 = (fVar13 * fVar13 * _UNK_1561ce688 + _UNK_1561ce698) * fVar13;
  fVar14 = (fVar14 * fVar14 * _UNK_1561ce68c + _UNK_1561ce69c) * fVar14;
  auVar7._0_4_ = fVar2 * (float)(&s_fTh)[s_dwIndexMask & (uint)fVar6] + fVar11;
  auVar7._4_4_ = fVar3 * (float)(&s_fTh)[_UNK_1561ce624 & (uint)fVar8] + fVar12;
  auVar7._8_4_ = fVar4 * (float)(&s_fTh)[_UNK_1561ce628 & (uint)fVar9] + fVar13;
  auVar7._12_4_ = fVar5 * (float)(&s_fTh)[_UNK_1561ce62c & (uint)fVar10] + fVar14;
  auVar1._4_4_ = fVar12 * (float)(&s_fTh)[_UNK_1561ce624 & (uint)fVar8] + fVar3;
  auVar1._0_4_ = fVar11 * (float)(&s_fTh)[s_dwIndexMask & (uint)fVar6] + fVar2;
  auVar1._8_4_ = fVar13 * (float)(&s_fTh)[_UNK_1561ce628 & (uint)fVar9] + fVar4;
  auVar1._12_4_ = fVar14 * (float)(&s_fTh)[_UNK_1561ce62c & (uint)fVar10] + fVar5;
  divps(auVar7,auVar1);
  return;
}

