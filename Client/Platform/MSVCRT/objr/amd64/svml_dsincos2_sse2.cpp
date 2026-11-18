// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_sincos2@@16 @ 15015ead0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_sincos2__16(void)

{
  undefined4 in_ECX;
  int iVar1;
  uint uVar2;
  undefined1 in_XMM0 [16];
  uint uVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar4;
  
  uVar2 = 0;
  uVar3 = ~__common_dsincos_data & in_XMM0._0_4_;
  uVar5 = ~__common_dsincos_data._4_4_ & in_XMM0._4_4_;
  dVar4 = (double)CONCAT44(uVar5,uVar3);
  uVar6 = ~__common_dsincos_data._8_4_ & in_XMM0._8_4_;
  uVar7 = ~__common_dsincos_data._12_4_ & in_XMM0._12_4_;
  auVar8._8_4_ = uVar6;
  auVar8._0_8_ = dVar4;
  auVar8._12_4_ = uVar7;
  auVar9._8_8_ = -(ulonglong)(_UNK_1561f1d48 < auVar8._8_8_);
  auVar9._0_8_ = -(ulonglong)(_DAT_1561f1d40 < dVar4);
  iVar1 = movmskpd(in_ECX,auVar9);
  if (iVar1 != 0) {
    auVar10._0_8_ = (double)CONCAT44(DAT_1561f1980._4_4_ & uVar5,(uint)DAT_1561f1980 & uVar3);
    auVar10._8_4_ = DAT_1561f1980._8_4_ & uVar6;
    auVar10._12_4_ = DAT_1561f1980._12_4_ & uVar7;
    auVar11._8_8_ = -(ulonglong)(auVar10._8_8_ == DAT_1561f1980._8_8_);
    auVar11._0_8_ = -(ulonglong)(auVar10._0_8_ == (double)DAT_1561f1980);
    uVar2 = movmskpd(0,auVar11);
  }
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if ((uVar2 >> (uVar3 & 0x1f) & 1) != 0) {
        __common_dsincos_cout_rare();
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 2);
  }
  return;
}

