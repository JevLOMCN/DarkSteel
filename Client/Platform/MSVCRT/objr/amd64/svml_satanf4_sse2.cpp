// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_atanf4@@16 @ 150160990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_atanf4__16(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar4 = _s_dwAbsMask & in_XMM0;
  iVar2 = -(uint)(_UNK_1561ca318 < auVar4._8_4_);
  iVar3 = -(uint)(_UNK_1561ca31c < auVar4._12_4_);
  auVar6._0_8_ = CONCAT44(-(uint)(_UNK_1561ca314 < auVar4._4_4_),
                          -(uint)((float)s_fOne < auVar4._0_4_));
  auVar6._8_4_ = iVar2;
  auVar6._12_4_ = iVar3;
  auVar5._8_4_ = iVar2;
  auVar5._0_8_ = auVar6._0_8_;
  auVar5._12_4_ = iVar3;
  auVar1._4_4_ = _UNK_1561ca314;
  auVar1._0_4_ = s_fOne;
  auVar1._8_4_ = _UNK_1561ca318;
  auVar1._12_4_ = _UNK_1561ca31c;
  divps(_s_fNegOne & auVar6 | ~auVar6 & auVar4,auVar4 & auVar5 | ~auVar5 & auVar1);
  return;
}

