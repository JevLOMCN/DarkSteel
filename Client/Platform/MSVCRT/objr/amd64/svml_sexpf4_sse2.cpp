// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_expf4@@16 @ 150163400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_expf4__16(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  float local_58 [4];
  float local_48 [4];
  float local_38 [14];
  
  fVar8 = (float)s_dwInvLn * in_XMM0_Da + (float)s_dwRS;
  fVar9 = _UNK_1561cbb14 * in_XMM0_Db + _UNK_1561cbb24;
  fVar10 = _UNK_1561cbb18 * in_XMM0_Dc + _UNK_1561cbb28;
  fVar11 = _UNK_1561cbb1c * in_XMM0_Dd + _UNK_1561cbb2c;
  fVar12 = (float)s_dwRS - fVar8;
  fVar15 = _UNK_1561cbb24 - fVar9;
  fVar16 = _UNK_1561cbb28 - fVar10;
  fVar17 = _UNK_1561cbb2c - fVar11;
  uVar5 = (uint)fVar9 & _UNK_1561cbb44;
  uVar3 = (uint)fVar11 & _UNK_1561cbb4c;
  auVar23._0_4_ = -(uint)((int)s_dwSpecBound < (int)(s_dwAbsMask & (uint)in_XMM0_Da));
  auVar23._4_4_ = -(uint)(_UNK_1561cbb54 < (int)(_UNK_1561cbb04 & (uint)in_XMM0_Db));
  auVar23._8_4_ = -(uint)(_UNK_1561cbb58 < (int)(_UNK_1561cbb08 & (uint)in_XMM0_Dc));
  auVar23._12_4_ = -(uint)(_UNK_1561cbb5c < (int)(_UNK_1561cbb0c & (uint)in_XMM0_Dd));
  fVar9 = in_XMM0_Da + (float)s_dwLnHi * fVar12 + fVar12 * (float)s_dwLnLo;
  fVar11 = in_XMM0_Db + _UNK_1561cbb34 * fVar15 + fVar15 * _UNK_1561cbb64;
  fVar12 = in_XMM0_Dc + _UNK_1561cbb38 * fVar16 + fVar16 * _UNK_1561cbb68;
  fVar15 = in_XMM0_Dd + _UNK_1561cbb3c * fVar17 + fVar17 * _UNK_1561cbb6c;
  fVar19 = (float)((ulonglong)
                   *(undefined8 *)(&s_dwExp2 + (ulonglong)((uint)fVar8 & s_dwIndexMask) * 2) >> 0x20
                  );
  fVar21 = (float)((ulonglong)*(undefined8 *)(&s_dwExp2 + (ulonglong)uVar5 * 2) >> 0x20);
  fVar18 = (float)*(undefined8 *)(&s_dwExp2 + (ulonglong)((uint)fVar8 & s_dwIndexMask) * 2);
  fVar20 = (float)*(undefined8 *)(&s_dwExp2 + (ulonglong)uVar5 * 2);
  fVar17 = (float)((ulonglong)
                   *(undefined8 *)(&s_dwExp2 + (ulonglong)((uint)fVar10 & _UNK_1561cbb48) * 2) >>
                  0x20);
  fVar16 = (float)((ulonglong)*(undefined8 *)(&s_dwExp2 + (ulonglong)uVar3 * 2) >> 0x20);
  fVar8 = (float)*(undefined8 *)(&s_dwExp2 + (ulonglong)uVar3 * 2);
  fVar10 = (float)*(undefined8 *)(&s_dwExp2 + (ulonglong)((uint)fVar10 & _UNK_1561cbb48) * 2);
  uVar3 = movmskps(uVar3,auVar23);
  if ((uVar3 & 0xf) != 0) {
    local_48[0] = fVar18 + (((float)s_dwA3 * fVar9 + (float)s_dwA2) * fVar9 * fVar9 + fVar9) *
                           (fVar18 + fVar19) + fVar19;
    local_48[1] = fVar20 + ((_UNK_1561cbb84 * fVar11 + _UNK_1561cbb94) * fVar11 * fVar11 + fVar11) *
                           (fVar20 + fVar21) + fVar21;
    local_48[2] = fVar10 + ((_UNK_1561cbb88 * fVar12 + _UNK_1561cbb98) * fVar12 * fVar12 + fVar12) *
                           (fVar10 + fVar17) + fVar17;
    local_48[3] = fVar8 + ((_UNK_1561cbb8c * fVar15 + _UNK_1561cbb9c) * fVar15 * fVar15 + fVar15) *
                          (fVar8 + fVar16) + fVar16;
    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = in_XMM0_Da;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar13._4_4_ = -(uint)NAN(in_XMM0_Db);
    auVar13._0_4_ = -(uint)NAN(in_XMM0_Da);
    auVar13._8_4_ = -(uint)NAN(in_XMM0_Dc);
    auVar13._12_4_ = -(uint)NAN(in_XMM0_Dd);
    pfVar4 = local_58;
    uVar5 = movmskps(uVar5,auVar13);
    if ((uVar3 ^ uVar5) != 0) {
      auVar14._4_4_ = -(uint)(_UNK_1561cbbb4 <= in_XMM0_Db);
      auVar14._0_4_ = -(uint)((float)s_dwFirstOvf <= in_XMM0_Da);
      auVar14._8_4_ = -(uint)(_UNK_1561cbbb8 <= in_XMM0_Dc);
      auVar14._12_4_ = -(uint)(_UNK_1561cbbbc <= in_XMM0_Dd);
      uVar6 = movmskps(uVar5,auVar14);
      uVar3 = uVar3 ^ uVar5 ^ uVar6;
      if (uVar3 != 0) {
        auVar7._4_4_ = -(uint)(in_XMM0_Db <= _UNK_1561cbbc4);
        auVar7._0_4_ = -(uint)(in_XMM0_Da <= (float)s_dwFirstZero);
        auVar7._8_4_ = -(uint)(in_XMM0_Dc <= _UNK_1561cbbc8);
        auVar7._12_4_ = -(uint)(in_XMM0_Dd <= _UNK_1561cbbcc);
        uVar5 = movmskps(uVar6,auVar7);
        uVar3 = uVar3 ^ uVar5;
        if (uVar3 != 0) {
          uVar5 = movmskps(uVar5,auVar1);
          do {
            if ((uVar3 & 1) != 0) {
              if ((uVar5 & 1) == 0) {
                fVar9 = (float)s_dwCorr4Ovf;
                uVar22 = 0;
                uVar2 = s_dwBias4Ovf;
              }
              else {
                uVar2 = s_dwBias * 2;
                fVar9 = (float)s_dwLeastExpb;
                uVar22 = s_dwLeastExpb;
              }
              *pfVar4 = (float)((((int)(pfVar4[8] * (float)s_dwInvLn + (float)s_dwRS) + uVar2) *
                                 0x20000 & s_dwExpbMask) - uVar22) * pfVar4[4] * fVar9;
            }
            uVar5 = uVar5 >> 1;
            pfVar4 = pfVar4 + 1;
            uVar3 = uVar3 >> 1;
          } while (uVar3 != 0);
        }
      }
    }
    return;
  }
  return;
}

