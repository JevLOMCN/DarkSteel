// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_asin2 @ 15015c180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_asin2(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined4 in_EDX;
  longlong lVar4;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar9 = __common_dasin_data & in_XMM0_Da;
  uVar10 = _UNK_1561f2a04 & in_XMM0_Db;
  uVar11 = _UNK_1561f2a08 & in_XMM0_Dc;
  uVar12 = _UNK_1561f2a0c & in_XMM0_Dd;
  auVar6._0_8_ = _DAT_1561f2a40 * (double)CONCAT44(uVar10,uVar9);
  auVar6._8_8_ = _UNK_1561f2a48 * (double)CONCAT44(uVar12,uVar11);
  auVar7._0_8_ = (double)CONCAT44(uVar10,uVar9);
  auVar7._8_4_ = uVar11;
  auVar7._12_4_ = uVar12;
  dVar3 = _UNK_1561f2a48 - auVar6._8_8_;
  auVar8._0_8_ = auVar7._0_8_ * (double)CONCAT44(uVar10,uVar9);
  auVar8._8_8_ = auVar7._8_8_ * (double)CONCAT44(uVar12,uVar11);
  auVar5._0_8_ = CONCAT44((float)dVar3,(float)(_DAT_1561f2a40 - auVar6._0_8_));
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = _DAT_1561f2a40 - auVar6._0_8_;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  minpd(auVar8,auVar2);
  auVar5._8_8_ = auVar5._0_8_;
  rsqrtps(auVar6,auVar5);
  lVar4 = -(ulonglong)(_UNK_1561f2b08 < (double)CONCAT44(uVar12,uVar11));
  auVar1._8_4_ = (int)lVar4;
  auVar1._0_8_ = -(ulonglong)(_DAT_1561f2b00 < (double)CONCAT44(uVar10,uVar9));
  auVar1._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
  uVar9 = movmskpd(in_EDX,auVar1);
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uVar9 >> (uVar10 & 0x1f) & 1) != 0) {
        __common_dasin_cout_rare();
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 2);
  }
  return;
}

