// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_sincosf4 @ 15015c0c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_sincosf4(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 extraout_EAX;
  longlong lVar2;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar3 [16];
  double dStack_80;
  float afStack_48 [4];
  undefined4 auStack_38 [12];
  
  auVar3._0_4_ = -(uint)((int)MMIHUGE < (int)(in_XMM0_Da & MMIABSMASK));
  auVar3._4_4_ = -(uint)(_UNK_1561c9784 < (int)(in_XMM0_Db & _UNK_1561c9774));
  auVar3._8_4_ = -(uint)(_UNK_1561c9788 < (int)(in_XMM0_Dc & _UNK_1561c9778));
  auVar3._12_4_ = -(uint)(_UNK_1561c978c < (int)(in_XMM0_Dd & _UNK_1561c977c));
  iVar1 = movmskps(in_EAX,auVar3);
  if (iVar1 == 0) {
    return;
  }
  lVar2 = 0;
  do {
    __common_trig_reduction();
    afStack_48[lVar2] = (float)dStack_80;
    auStack_38[lVar2] = extraout_EAX;
    lVar2 = lVar2 + 1;
  } while (lVar2 < 4);
  return;
}

