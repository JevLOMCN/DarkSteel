// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 2

// __sse2_exp22@@16 @ 150162ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_exp22__16(void)

{
  undefined4 in_ECX;
  int iVar1;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar2 [16];
  
  auVar2._0_4_ = -(uint)((int)Trash < (int)(in_XMM0_Da & AbsMask));
  auVar2._4_4_ = -(uint)(_UNK_1561cb544 < (int)(in_XMM0_Db & _UNK_1561cb534));
  auVar2._8_4_ = -(uint)(_UNK_1561cb548 < (int)(in_XMM0_Dc & _UNK_1561cb538));
  auVar2._12_4_ = -(uint)(_UNK_1561cb54c < (int)(in_XMM0_Dd & _UNK_1561cb53c));
  iVar1 = movmskps(in_ECX,auVar2);
  if (iVar1 == 0) {
    return;
  }
  vmldExp2_scalar();
  vmldExp2_scalar();
  return;
}

// vmldExp2_scalar @ 150162fd0

void __cdecl vmldExp2_scalar(void)

{
  undefined1 in_XMM0 [16];
  
  if (((int)in_XMM0._4_4_ < 0x40900000) && (in_XMM0._4_4_ < 0xc090cc00)) {
    return;
  }
  return;
}

