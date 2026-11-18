// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_asinf4 @ 15015c190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_asinf4(void)

{
  undefined4 in_EAX;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._4_4_ = -(uint)((float)(_UNK_1561c9c04 & in_XMM0_Db) <= _UNK_1561c9c14);
  auVar1._0_4_ = -(uint)((float)(s_dwAbsMask & in_XMM0_Da) <= (float)s_fHalf);
  auVar1._8_4_ = -(uint)((float)(_UNK_1561c9c08 & in_XMM0_Dc) <= _UNK_1561c9c18);
  auVar1._12_4_ = -(uint)((float)(_UNK_1561c9c0c & in_XMM0_Dd) <= _UNK_1561c9c1c);
  movmskps(in_EAX,auVar1);
  auVar2._0_4_ = (float)s_fHalf * ((float)s_fOne - (float)(s_dwAbsMask & in_XMM0_Da));
  auVar2._4_4_ = _UNK_1561c9c14 * (_UNK_1561c9c24 - (float)(_UNK_1561c9c04 & in_XMM0_Db));
  auVar2._8_4_ = _UNK_1561c9c18 * (_UNK_1561c9c28 - (float)(_UNK_1561c9c08 & in_XMM0_Dc));
  auVar2._12_4_ = _UNK_1561c9c1c * (_UNK_1561c9c2c - (float)(_UNK_1561c9c0c & in_XMM0_Dd));
  sqrtps(auVar2,auVar2);
  return;
}

