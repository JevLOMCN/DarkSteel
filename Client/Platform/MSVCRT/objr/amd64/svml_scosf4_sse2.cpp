// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_cosf4@@16 @ 1501617e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_cosf4__16(void)

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
  auVar4._4_4_ = -(uint)(_UNK_156207044 < (float)(_UNK_156207004 & in_XMM0_Db));
  auVar4._0_4_ = -(uint)(_DAT_156207040 < (float)(_DAT_156207000 & in_XMM0_Da));
  auVar4._8_4_ = -(uint)(_UNK_156207048 < (float)(_UNK_156207008 & in_XMM0_Dc));
  auVar4._12_4_ = -(uint)(_UNK_15620704c < (float)(_UNK_15620700c & in_XMM0_Dd));
  iVar1 = movmskps(in_EAX,auVar4);
  if (iVar1 != 0) {
    auVar5._4_4_ = -(uint)((float)(_UNK_156207004 & in_XMM0_Db & (uint)_UNK_156207084) ==
                          _UNK_156207084);
    auVar5._0_4_ = -(uint)((float)(_DAT_156207000 & in_XMM0_Da & (uint)_DAT_156207080) ==
                          _DAT_156207080);
    auVar5._8_4_ = -(uint)((float)(_UNK_156207008 & in_XMM0_Dc & (uint)_UNK_156207088) ==
                          _UNK_156207088);
    auVar5._12_4_ =
         -(uint)((float)(_UNK_15620700c & in_XMM0_Dd & (uint)_UNK_15620708c) == _UNK_15620708c);
    uVar3 = movmskps(0,auVar5);
  }
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      if ((uVar3 >> (uVar2 & 0x1f) & 1) != 0) {
        __common_scos_cout_rare();
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
  }
  return;
}

