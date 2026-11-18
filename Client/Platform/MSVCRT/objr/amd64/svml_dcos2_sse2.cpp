// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_cos2@@16 @ 150160a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_cos2__16(void)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  uint uVar5;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar11;
  undefined1 auVar12 [16];
  
  uVar3 = 0;
  auVar12._0_8_ =
       (double)CONCAT44(_UNK_156204b84 & in_XMM0._4_4_,__common_dcos_data & in_XMM0._0_4_);
  auVar12._8_4_ = _UNK_156204b88 & in_XMM0._8_4_;
  auVar12._12_4_ = _UNK_156204b8c & in_XMM0._12_4_;
  dVar11 = _UNK_156204c08 - auVar12._8_8_;
  uVar5 = __common_dcos_data & SUB84(_DAT_156204c00 - auVar12._0_8_,0);
  uVar8 = _UNK_156204b84 & (uint)((ulonglong)(_DAT_156204c00 - auVar12._0_8_) >> 0x20);
  uVar9 = _UNK_156204b88 & SUB84(dVar11,0);
  uVar10 = _UNK_156204b8c & (uint)((ulonglong)dVar11 >> 0x20);
  lVar4 = -(ulonglong)(_UNK_156204bc8 < (double)CONCAT44(uVar10,uVar9));
  auVar1._8_4_ = (int)lVar4;
  auVar1._0_8_ = -(ulonglong)(_DAT_156204bc0 < (double)CONCAT44(uVar8,uVar5));
  auVar1._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
  iVar2 = movmskpd(in_EAX,auVar1);
  if (iVar2 != 0) {
    auVar6._0_8_ = (double)CONCAT44(uVar8 & DAT_156204880._4_4_,uVar5 & (uint)DAT_156204880);
    auVar6._8_4_ = uVar9 & DAT_156204880._8_4_;
    auVar6._12_4_ = uVar10 & DAT_156204880._12_4_;
    auVar7._8_8_ = -(ulonglong)(auVar6._8_8_ == DAT_156204880._8_8_);
    auVar7._0_8_ = -(ulonglong)(auVar6._0_8_ == (double)DAT_156204880);
    uVar3 = movmskpd(0,auVar7);
  }
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 >> (uVar5 & 0x1f) & 1) != 0) {
        __common_dcos_cout_rare();
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 2);
  }
  return;
}

