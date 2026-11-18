// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_fmodf4@@32 @ 150163a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_fmodf4__32(void)

{
  undefined1 auVar1 [16];
  undefined4 in_EDX;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  auVar7._4_4_ = in_XMM0_Db;
  auVar7._0_4_ = in_XMM0_Da;
  auVar7._8_4_ = in_XMM0_Dc;
  auVar7._12_4_ = in_XMM0_Dd;
  divps(auVar7,in_XMM1);
  uVar3 = _DAT_156207c40 & in_XMM1._0_4_;
  uVar4 = _UNK_156207c44 & in_XMM1._4_4_;
  uVar5 = _UNK_156207c48 & in_XMM1._8_4_;
  uVar6 = _UNK_156207c4c & in_XMM1._12_4_;
  auVar2._0_4_ = -(uint)(_DAT_156207cc0 <
                        (int)(((in_XMM0_Da & _DAT_156207c40) >> 0x17) - (uVar3 >> 0x17)));
  auVar2._4_4_ = -(uint)(_UNK_156207cc4 <
                        (int)(((in_XMM0_Db & _UNK_156207c44) >> 0x17) - (uVar4 >> 0x17)));
  auVar2._8_4_ = -(uint)(_UNK_156207cc8 <
                        (int)(((in_XMM0_Dc & _UNK_156207c48) >> 0x17) - (uVar5 >> 0x17)));
  auVar2._12_4_ =
       -(uint)(_UNK_156207ccc < (int)(((in_XMM0_Dd & _UNK_156207c4c) >> 0x17) - (uVar6 >> 0x17)));
  auVar1._4_4_ = -(uint)(_UNK_156207d44 < (int)(uVar4 - _UNK_156207d04));
  auVar1._0_4_ = -(uint)(_DAT_156207d40 < (int)(uVar3 - _DAT_156207d00));
  auVar1._8_4_ = -(uint)(_UNK_156207d48 < (int)(uVar5 - _UNK_156207d08));
  auVar1._12_4_ = -(uint)(_UNK_156207d4c < (int)(uVar6 - _UNK_156207d0c));
  uVar3 = movmskps(in_EDX,auVar2 | auVar1);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if ((uVar3 >> (uVar4 & 0x1f) & 1) != 0) {
        __common_sfmod_cout_rare();
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
  }
  return;
}

