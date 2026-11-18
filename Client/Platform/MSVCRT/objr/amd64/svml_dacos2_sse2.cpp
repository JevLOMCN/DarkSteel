// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_acos2@@16 @ 15015f630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_acos2__16(void)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong in_XMM0_Qa;
  double dVar3;
  ulonglong in_XMM0_Qb;
  double dVar4;
  undefined1 unaff_XMM6 [16];
  
  dVar3 = (double)(~(_T & in_XMM0_Qa) & in_XMM0_Qa);
  dVar4 = (double)(~(_UNK_1561c9908 & in_XMM0_Qb) & in_XMM0_Qb);
  uVar2 = (ulonglong)((_UNK_1561c9938 - dVar4) * _UNK_1561c9928) &
          -(ulonglong)(_UNK_1561c9928 <= dVar4);
  auVar1._8_4_ = (int)uVar2;
  auVar1._0_8_ = (ulonglong)((_DAT_1561c9930 - dVar3) * _DAT_1561c9920) &
                 -(ulonglong)(_DAT_1561c9920 <= dVar3);
  auVar1._12_4_ = (int)(uVar2 >> 0x20);
  sqrtpd(unaff_XMM6,auVar1);
  return;
}

