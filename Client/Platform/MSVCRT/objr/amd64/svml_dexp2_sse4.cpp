// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse4_exp2@@16 @ 150162bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse4_exp2__16(void)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = _s_dwInvLn * in_XMM0._0_8_;
  auVar1._8_8_ = _UNK_1561caf48 * in_XMM0._8_8_;
  roundpd(auVar1,auVar1,0);
  if (((in_XMM0._6_2_ & 0x7fff) < 0x4086) && ((in_XMM0._14_2_ & 0x7fff) < 0x4086)) {
    return;
  }
  return;
}

