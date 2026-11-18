// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_atan22 @ 15015c1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_atan22(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined4 in_EAX;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong in_XMM0_Qa;
  double dVar8;
  ulonglong in_XMM0_Qb;
  double dVar9;
  ulonglong in_XMM1_Qa;
  ulonglong uVar10;
  ulonglong in_XMM1_Qb;
  undefined1 auVar11 [16];
  ulonglong uVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined4 uStack_8;
  
  dVar8 = (double)(in_XMM0_Qa ^ _iSignMask & in_XMM0_Qa);
  dVar9 = (double)(in_XMM0_Qb ^ _UNK_1561c9f08 & in_XMM0_Qb);
  auVar11._0_8_ = (double)(in_XMM1_Qa ^ _iSignMask & in_XMM1_Qa);
  auVar11._8_8_ = (double)(in_XMM1_Qb ^ _UNK_1561c9f08 & in_XMM1_Qb);
  uVar6 = -(ulonglong)(auVar11._0_8_ <= dVar8);
  uVar7 = -(ulonglong)(auVar11._8_8_ <= dVar9);
  auVar2._8_4_ = (int)(uVar7 & _UNK_1561c9f08);
  auVar2._0_8_ = uVar6 & _iSignMask;
  auVar2._12_4_ = (int)((uVar7 & _UNK_1561c9f08) >> 0x20);
  uVar10 = SUB168(auVar11 | auVar2,0);
  uVar13 = SUB168(auVar11 | auVar2,8);
  auVar12._0_8_ = uVar10 & uVar6;
  auVar12._8_8_ = uVar13 & uVar7;
  auVar14._0_8_ = ~uVar6 & uVar10;
  auVar14._8_8_ = ~uVar7 & uVar13;
  auVar3._8_4_ = (int)(~uVar7 & (ulonglong)dVar9);
  auVar3._0_8_ = ~uVar6 & (ulonglong)dVar8;
  auVar3._12_4_ = (int)((~uVar7 & (ulonglong)dVar9) >> 0x20);
  auVar1._8_8_ = (ulonglong)dVar9 & uVar7;
  auVar1._0_8_ = (ulonglong)dVar8 & uVar6;
  divpd(auVar12 | auVar3,auVar14 | auVar1);
  lVar5 = -(ulonglong)
           ((_UNK_1561c9f38 < (double)(in_XMM0_Qb & _UNK_1561c9f28) &&
            (double)(in_XMM0_Qb & _UNK_1561c9f28) < _UNK_1561c9f48) &&
           (_UNK_1561c9f38 < (double)(in_XMM1_Qb & _UNK_1561c9f28) &&
           (double)(in_XMM1_Qb & _UNK_1561c9f28) < _UNK_1561c9f48));
  auVar4._8_4_ = (int)lVar5;
  auVar4._0_8_ = -(ulonglong)
                  ((_iMinWorkNum < (double)(in_XMM0_Qa & _iAbsMask) &&
                   (double)(in_XMM0_Qa & _iAbsMask) < _iMaxWorkNum) &&
                  (_iMinWorkNum < (double)(in_XMM1_Qa & _iAbsMask) &&
                  (double)(in_XMM1_Qa & _iAbsMask) < _iMaxWorkNum));
  auVar4._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uStack_8 = movmskpd(in_EAX,auVar4);
  if (2 < uStack_8) {
    uStack_8 = 3;
  }
  if (uStack_8 < 3) {
    __common_atan2_sd();
    __common_atan2_sd();
  }
  return;
}

