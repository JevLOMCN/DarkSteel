// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_fmod2 @ 15015c280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_fmod2(void)

{
  undefined4 in_EDX;
  undefined4 in_XMM0_Da;
  uint in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4._4_4_ = in_XMM0_Db;
  auVar4._0_4_ = in_XMM0_Da;
  auVar4._8_4_ = in_XMM0_Dc;
  auVar4._12_4_ = in_XMM0_Dd;
  divpd(auVar4,in_XMM1);
  uVar2 = _UNK_156207844 & in_XMM1._4_4_;
  uVar3 = _UNK_15620784c & in_XMM1._12_4_;
  auVar5._0_4_ = -(uint)((int)DAT_156207940 < (int)(uVar2 - (int)DAT_156207900));
  auVar5._4_4_ = -(uint)(DAT_156207940._4_4_ < (int)(uVar3 - DAT_156207900._4_4_));
  auVar5._8_4_ = -(uint)(0 < (int)uVar2);
  auVar5._12_4_ = -(uint)(0 < (int)uVar3);
  auVar1._0_4_ = -(uint)((int)DAT_1562078c0 <
                        (int)(((_UNK_156207844 & in_XMM0_Db) >> 0x14) - (uVar2 >> 0x14)));
  auVar1._4_4_ = -(uint)(DAT_1562078c0._4_4_ <
                        (int)(((_UNK_15620784c & in_XMM0_Dd) >> 0x14) - (uVar3 >> 0x14)));
  auVar1._8_4_ = -(uint)(0 < (int)(((_UNK_156207844 & in_XMM0_Db) >> 0x14) - (uVar2 >> 0x14)));
  auVar1._12_4_ = -(uint)(0 < (int)(((_UNK_15620784c & in_XMM0_Dd) >> 0x14) - (uVar3 >> 0x14)));
  uVar2 = movmskps(in_EDX,auVar1 | auVar5);
  if ((uVar2 & 3) != 0) {
    uVar3 = 0;
    do {
      if (((uVar2 & 3) >> (uVar3 & 0x1f) & 1) != 0) {
        __common_dfmod_cout_rare();
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 2);
  }
  return;
}

