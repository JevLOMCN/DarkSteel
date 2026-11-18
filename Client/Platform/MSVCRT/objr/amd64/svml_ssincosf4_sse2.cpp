// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_sincosf4@@16 @ 15015f360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_sincosf4__16(void)

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
  double local_80;
  float local_48 [4];
  undefined4 local_38 [12];
  
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
    local_48[lVar2] = (float)local_80;
    local_38[lVar2] = extraout_EAX;
    lVar2 = lVar2 + 1;
  } while (lVar2 < 4);
  return;
}

