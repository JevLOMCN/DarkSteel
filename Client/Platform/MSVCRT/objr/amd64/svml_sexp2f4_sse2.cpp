// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 2

// __sse2_exp2f4@@16 @ 150163110

/* WARNING: Removing unreachable block (ram,0x000150163293) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_exp2f4__16(void)

{
  undefined4 in_ECX;
  int iVar1;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar2 [16];
  
  auVar2._0_4_ = -(uint)((int)s_dwMaxBound <
                        (int)(s_dwAbsMask & ~-(uint)((s_dwPosInf & in_XMM0_Da) == 0) & in_XMM0_Da));
  auVar2._4_4_ = -(uint)(_UNK_1561cb864 <
                        (int)(_UNK_1561cb804 &
                             ~-(uint)((_UNK_1561cb844 & in_XMM0_Db) == 0) & in_XMM0_Db));
  auVar2._8_4_ = -(uint)(_UNK_1561cb868 <
                        (int)(_UNK_1561cb808 &
                             ~-(uint)((_UNK_1561cb848 & in_XMM0_Dc) == 0) & in_XMM0_Dc));
  auVar2._12_4_ =
       -(uint)(_UNK_1561cb86c <
              (int)(_UNK_1561cb80c & ~-(uint)((_UNK_1561cb84c & in_XMM0_Dd) == 0) & in_XMM0_Dd));
  iVar1 = movmskps(in_ECX,auVar2);
  if (iVar1 != 0) {
    iVar1 = 4;
    do {
      __common_internal_exp2_ss();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  return;
}

// __common_internal_exp2_ss @ 150163300

void __cdecl __common_internal_exp2_ss(void)

{
  uint in_XMM0_Da;
  
  if (((int)in_XMM0_Da < 0x43000000) && (in_XMM0_Da < 0xc3160000)) {
    return;
  }
  return;
}

