// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_expf4 @ 15015c260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_expf4(void)

{
  undefined4 in_ECX;
  int iVar1;
  undefined4 in_EDX;
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (__isa_available < 2) {
    __sse2_expf4__16();
    return;
  }
  auVar2._0_4_ = (float)s_dwInvLn * in_XMM0._0_4_;
  auVar2._4_4_ = _UNK_1561cbf04 * in_XMM0._4_4_;
  auVar2._8_4_ = _UNK_1561cbf08 * in_XMM0._8_4_;
  auVar2._12_4_ = _UNK_1561cbf0c * in_XMM0._12_4_;
  auVar3 = _flAbsMask & in_XMM0;
  auVar4._0_4_ = -(uint)((int)flBound1 < auVar3._0_4_);
  auVar4._4_4_ = -(uint)(_UNK_1561cbf44 < auVar3._4_4_);
  auVar4._8_4_ = -(uint)(_UNK_1561cbf48 < auVar3._8_4_);
  auVar4._12_4_ = -(uint)(_UNK_1561cbf4c < auVar3._12_4_);
  iVar1 = movmskps(in_ECX,auVar4);
  if (iVar1 == 0) {
    roundps(auVar2,auVar2,0);
    return;
  }
  roundps(auVar2,auVar2,0);
  movmskps(in_EDX,in_XMM0);
  return;
}

