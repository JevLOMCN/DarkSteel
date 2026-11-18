// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_atan2 @ 15015c1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_atan2(void)

{
  undefined1 auVar1 [16];
  ulonglong in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar2._0_8_ = (double)(in_XMM0_Qa ^ _iSignMask & in_XMM0_Qa);
  auVar2._8_8_ = (double)(in_XMM0_Qb ^ _UNK_1561c9d38 & in_XMM0_Qb);
  auVar3._8_8_ = -(ulonglong)(_UNK_1561c9d08 < auVar2._8_8_);
  auVar3._0_8_ = -(ulonglong)(_dbOne < auVar2._0_8_);
  auVar4._8_8_ = -(ulonglong)(_UNK_1561c9d08 < auVar2._8_8_);
  auVar4._0_8_ = -(ulonglong)(_dbOne < auVar2._0_8_);
  auVar1._8_8_ = _UNK_1561c9d08;
  auVar1._0_8_ = _dbOne;
  divpd(~auVar3 & auVar2 | _dbMinusOne & auVar4,auVar2 & auVar4 | ~auVar4 & auVar1);
  return;
}

