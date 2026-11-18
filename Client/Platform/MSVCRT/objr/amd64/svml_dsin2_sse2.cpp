// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_sin2@@16 @ 15015ccf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_sin2__16(void)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar3 = 0;
  dVar6 = (double)CONCAT44(_UNK_1561dee84 & in_XMM0_Db,__common_dsin_data & in_XMM0_Da);
  auVar7._8_4_ = _UNK_1561dee88 & in_XMM0_Dc;
  auVar7._0_8_ = dVar6;
  auVar7._12_4_ = _UNK_1561dee8c & in_XMM0_Dd;
  auVar8._8_8_ = -(ulonglong)(_UNK_1561deec8 < auVar7._8_8_);
  auVar8._0_8_ = -(ulonglong)(_DAT_1561deec0 < dVar6);
  iVar1 = movmskpd(in_EAX,auVar8);
  if (iVar1 != 0) {
    auVar4._0_8_ = (double)CONCAT44(DAT_1561deb80._4_4_ & _UNK_1561dee84 & in_XMM0_Db,
                                    (uint)DAT_1561deb80 & __common_dsin_data & in_XMM0_Da);
    auVar4._8_4_ = DAT_1561deb80._8_4_ & _UNK_1561dee88 & in_XMM0_Dc;
    auVar4._12_4_ = DAT_1561deb80._12_4_ & _UNK_1561dee8c & in_XMM0_Dd;
    auVar5._8_8_ = -(ulonglong)(auVar4._8_8_ == DAT_1561deb80._8_8_);
    auVar5._0_8_ = -(ulonglong)(auVar4._0_8_ == (double)DAT_1561deb80);
    uVar3 = movmskpd(0,auVar5);
  }
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      if ((uVar3 >> (uVar2 & 0x1f) & 1) != 0) {
        __common_dsin_cout_rare();
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 2);
  }
  return;
}

