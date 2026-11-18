// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_sinf4@@16 @ 15015da10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_sinf4__16(void)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar3 = 0;
  auVar4._4_4_ = -(uint)(_UNK_1561e1144 < (float)(in_XMM0_Db & _UNK_1561e1104));
  auVar4._0_4_ = -(uint)(_DAT_1561e1140 < (float)(in_XMM0_Da & _DAT_1561e1100));
  auVar4._8_4_ = -(uint)(_UNK_1561e1148 < (float)(in_XMM0_Dc & _UNK_1561e1108));
  auVar4._12_4_ = -(uint)(_UNK_1561e114c < (float)(in_XMM0_Dd & _UNK_1561e110c));
  iVar1 = movmskps(in_EAX,auVar4);
  if (iVar1 != 0) {
    auVar5._4_4_ = -(uint)((float)(in_XMM0_Db & _UNK_1561e1104 & (uint)_UNK_1561e1184) ==
                          _UNK_1561e1184);
    auVar5._0_4_ = -(uint)((float)(in_XMM0_Da & _DAT_1561e1100 & (uint)_DAT_1561e1180) ==
                          _DAT_1561e1180);
    auVar5._8_4_ = -(uint)((float)(in_XMM0_Dc & _UNK_1561e1108 & (uint)_UNK_1561e1188) ==
                          _UNK_1561e1188);
    auVar5._12_4_ =
         -(uint)((float)(in_XMM0_Dd & _UNK_1561e110c & (uint)_UNK_1561e118c) == _UNK_1561e118c);
    uVar3 = movmskps(0,auVar5);
  }
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      if ((uVar3 >> (uVar2 & 0x1f) & 1) != 0) {
        __common_ssin_cout_rare();
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
  }
  return;
}

