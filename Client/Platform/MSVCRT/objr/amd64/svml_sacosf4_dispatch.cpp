// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_acosf4 @ 15015c170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_acosf4(void)

{
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar1 [16];
  undefined1 unaff_XMM6 [16];
  
  auVar1._0_4_ = (float)s_fHalf * ((float)s_fOne - (float)(s_dwAbsMask & in_XMM0_Da));
  auVar1._4_4_ = _UNK_1561c9b14 * (_UNK_1561c9b24 - (float)(_UNK_1561c9b04 & in_XMM0_Db));
  auVar1._8_4_ = _UNK_1561c9b18 * (_UNK_1561c9b28 - (float)(_UNK_1561c9b08 & in_XMM0_Dc));
  auVar1._12_4_ = _UNK_1561c9b1c * (_UNK_1561c9b2c - (float)(_UNK_1561c9b0c & in_XMM0_Dd));
  sqrtps(unaff_XMM6,auVar1);
  return;
}

