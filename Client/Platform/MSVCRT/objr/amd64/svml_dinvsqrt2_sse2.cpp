// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_invsqrt2@@16 @ 150163c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_invsqrt2__16(void)

{
  undefined4 in_EDX;
  uint uVar1;
  uint uVar2;
  undefined1 in_XMM0 [16];
  uint uVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar2 = in_XMM0._4_4_;
  uVar6 = in_XMM0._12_4_;
  auVar3._0_4_ = -(uint)((int)DAT_156208000 < (int)(uVar2 - (int)DAT_156207fc0));
  auVar3._4_4_ = -(uint)(DAT_156208000._4_4_ < (int)(uVar6 - DAT_156207fc0._4_4_));
  auVar3._8_4_ = -(uint)(0 < (int)uVar2);
  auVar3._12_4_ = -(uint)(0 < (int)uVar6);
  uVar1 = movmskps(in_EDX,auVar3);
  auVar4._0_8_ = CONCAT44(_UNK_156208044 & uVar2,_DAT_156208040 & in_XMM0._0_4_);
  auVar4._8_4_ = _UNK_156208048 & in_XMM0._8_4_;
  auVar4._12_4_ = _UNK_15620804c & uVar6;
  auVar7._0_8_ = (ulonglong)
                 (_DAT_156208140 +
                 CONCAT44(~(_UNK_156208084 & uVar2) & _UNK_1562080c4,
                          ~(_DAT_156208080 & in_XMM0._0_4_) & _DAT_1562080c0)) >> 0x1d;
  auVar7._8_8_ = (ulonglong)
                 (_UNK_156208148 +
                 CONCAT44(~(_UNK_15620808c & uVar6) & _UNK_1562080cc,
                          ~(_UNK_156208088 & in_XMM0._8_4_) & _UNK_1562080c8)) >> 0x1d;
  auVar5._0_8_ = auVar4._0_8_ >> 0x1d;
  auVar5._8_8_ = auVar4._8_8_ >> 0x1d;
  auVar5 = auVar5 | auVar7;
  auVar8._4_4_ = auVar5._8_4_;
  auVar8._0_4_ = auVar5._0_4_;
  auVar8._8_4_ = auVar5._0_4_;
  auVar8._12_4_ = auVar5._8_4_;
  rsqrtps(auVar5,auVar8);
  if ((uVar1 & 3) != 0) {
    uVar2 = 0;
    do {
      if (((uVar1 & 3) >> (uVar2 & 0x1f) & 1) != 0) {
        __common_dinvsqrt_cout_rare();
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 2);
  }
  return;
}

