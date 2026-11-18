// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_pow2@@32 @ 150164a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_pow2__32(void)

{
  double dVar1;
  double dVar2;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar3 [16];
  uint in_XMM1_Da;
  uint in_XMM1_Db;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar9;
  undefined1 auVar8 [16];
  int iVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar14;
  undefined1 auVar13 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  uint uVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  uint uVar26;
  int iVar27;
  undefined1 auVar24 [16];
  double dVar28;
  undefined1 auVar25 [16];
  double dVar29;
  
  uVar20 = ((uint)DAT_156212f00 & in_XMM0_Db) + (int)DAT_156212f40 >> 10;
  uVar26 = (DAT_156212f00._4_4_ & in_XMM0_Dd) + DAT_156212f40._4_4_ >> 10;
  iVar21 = uVar20 * 0x10;
  iVar27 = uVar26 << 4;
  iVar10 = uVar20 * 8;
  auVar12._0_4_ = _DAT_156212a80 & in_XMM0_Da;
  auVar12._4_4_ = _UNK_156212a84 & in_XMM0_Db;
  auVar12._8_4_ = _UNK_156212a88 & in_XMM0_Dc;
  auVar12._12_4_ = _UNK_156212a8c & in_XMM0_Dd;
  uVar20 = ((int)(in_XMM0_Db - (int)DAT_156212f80) >> 0x14) + (int)DAT_156212fc0;
  uVar9 = ((int)(in_XMM0_Dd - DAT_156212f80._4_4_) >> 0x14) + DAT_156212fc0._4_4_;
  auVar12 = auVar12 | _DAT_156212b00;
  dVar29 = *(double *)(&DAT_15620bf00 + iVar10);
  auVar24._0_8_ = (double)CONCAT44(_UNK_156212bc4 & auVar12._4_4_,_DAT_156212bc0 & auVar12._0_4_);
  auVar24._8_4_ = _UNK_156212bc8 & auVar12._8_4_;
  auVar24._12_4_ = _UNK_156212bcc & auVar12._12_4_;
  dVar1 = *(double *)(&DAT_15620bf00 + (int)(uVar26 << 3));
  dVar11 = auVar12._0_8_ * dVar29;
  dVar14 = auVar12._8_8_ * dVar1;
  auVar3._0_8_ = (double)CONCAT44(uVar20 & _UNK_156212b44,uVar20 & _DAT_156212b40);
  auVar3._8_4_ = uVar9 & _UNK_156212b48;
  auVar3._12_4_ = uVar9 & _UNK_156212b4c;
  dVar22 = (auVar24._0_8_ * dVar29 - dVar11) + dVar29 * (auVar12._0_8_ - auVar24._0_8_);
  dVar28 = (auVar24._8_8_ * dVar1 - dVar14) + dVar1 * (auVar12._8_8_ - auVar24._8_8_);
  dVar15 = *(double *)(&DAT_15620df40 + iVar21) + (auVar3._0_8_ - _DAT_156212b80);
  dVar16 = *(double *)(&DAT_15620df40 + iVar27) + (auVar3._8_8_ - _UNK_156212b88);
  dVar11 = _DAT_156212c00 + dVar11;
  dVar14 = _UNK_156212c08 + dVar14;
  dVar29 = dVar11 + dVar15;
  dVar1 = dVar14 + dVar16;
  dVar23 = dVar22 + dVar29;
  dVar2 = dVar28 + dVar1;
  dVar17 = dVar11 + dVar22;
  dVar19 = dVar14 + dVar28;
  auVar25._8_4_ = SUB84(dVar2,0);
  auVar25._0_8_ = dVar23;
  auVar25._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar23 = dVar23 + *(double *)(&UNK_15620df48 + iVar21) +
                    (dVar15 - dVar29) + dVar11 + (dVar29 - dVar23) + dVar22 +
                    dVar17 * (((((_DAT_1562127c0 * dVar17 + _DAT_156212800) * dVar17 +
                                _DAT_156212840) * dVar17 + _DAT_156212880) * dVar17 + _DAT_1562128c0
                              ) * dVar17 + _DAT_156212900);
  dVar29 = auVar25._8_8_ +
           *(double *)(&UNK_15620df48 + iVar27) +
           (dVar16 - dVar1) + dVar14 + (dVar1 - dVar2) + dVar28 +
           dVar19 * (((((_UNK_1562127c8 * dVar19 + _UNK_156212808) * dVar19 + _UNK_156212848) *
                       dVar19 + _UNK_156212888) * dVar19 + _UNK_1562128c8) * dVar19 + _UNK_156212908
                    );
  auVar8._0_8_ = (double)CONCAT44(_UNK_156212bc4 & in_XMM1_Db,_DAT_156212bc0 & in_XMM1_Da);
  auVar8._8_4_ = _UNK_156212bc8 & in_XMM1_Dc;
  auVar8._12_4_ = _UNK_156212bcc & in_XMM1_Dd;
  auVar18._0_8_ =
       (double)CONCAT44(_UNK_156212bc4 & (uint)((ulonglong)dVar23 >> 0x20),
                        _DAT_156212bc0 & SUB84(dVar23,0));
  auVar18._8_4_ = _UNK_156212bc8 & SUB84(dVar29,0);
  auVar18._12_4_ = _UNK_156212bcc & (uint)((ulonglong)dVar29 >> 0x20);
  auVar7._0_4_ = -(uint)((int)(in_XMM0_Db + (int)DAT_156212dc0) < (int)DAT_156212e00);
  auVar7._4_4_ = -(uint)((int)(in_XMM0_Dd + DAT_156212dc0._4_4_) < DAT_156212e00._4_4_);
  auVar7._8_4_ = -(uint)((int)in_XMM0_Db < 0);
  auVar7._12_4_ = -(uint)((int)in_XMM0_Dd < 0);
  uVar20 = (uint)((ulonglong)(auVar18._0_8_ * auVar8._0_8_) >> 0x20) & (uint)DAT_156212e40;
  uVar9 = (uint)((ulonglong)(auVar18._8_8_ * auVar8._8_8_) >> 0x20) & DAT_156212e40._4_4_;
  auVar4._0_4_ = -(uint)((int)(uint)DAT_156212e80 < (int)(in_XMM1_Db & (uint)DAT_156212e40));
  auVar4._4_4_ = -(uint)((int)DAT_156212e80._4_4_ < (int)(in_XMM1_Dd & DAT_156212e40._4_4_));
  auVar4._8_8_ = 0;
  auVar5._0_4_ = -(uint)((in_XMM1_Db & (uint)DAT_156212e40) == (uint)DAT_156212e80);
  auVar5._4_4_ = -(uint)((in_XMM1_Dd & DAT_156212e40._4_4_) == DAT_156212e80._4_4_);
  auVar5._8_4_ = 0xffffffff;
  auVar5._12_4_ = 0xffffffff;
  auVar13._0_4_ = -(uint)(uVar20 == (uint)DAT_156212ec0);
  auVar13._4_4_ = -(uint)(uVar9 == DAT_156212ec0._4_4_);
  auVar13._8_4_ = 0xffffffff;
  auVar13._12_4_ = 0xffffffff;
  auVar6._0_4_ = -(uint)((int)(uint)DAT_156212ec0 < (int)uVar20);
  auVar6._4_4_ = -(uint)((int)DAT_156212ec0._4_4_ < (int)uVar9);
  auVar6._8_8_ = 0;
  uVar20 = movmskps(iVar10,auVar7 | auVar4 | auVar5 | auVar6 | auVar13);
  if ((uVar20 & 3) != 0) {
    uVar9 = 0;
    do {
      if (((uVar20 & 3) >> (uVar9 & 0x1f) & 1) != 0) {
        __common_dpow_cout_rare();
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 2);
  }
  return;
}

