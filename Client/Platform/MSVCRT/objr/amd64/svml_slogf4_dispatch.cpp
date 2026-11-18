// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_logf4 @ 15015c2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_logf4(void)

{
  uint in_XMM0_Da;
  uint uVar1;
  uint in_XMM0_Db;
  uint uVar2;
  uint in_XMM0_Dc;
  uint uVar3;
  uint in_XMM0_Dd;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar15 [16];
  
  fVar7 = (float)(flMantissaMask & in_XMM0_Da |
                 s_fOne ^ s_dwSqrt2Addition + (flMantissaMask & in_XMM0_Da) & s_dwSqrt2Mask);
  fVar10 = (float)(_UNK_1561cda04 & in_XMM0_Db |
                  (uint)_UNK_1561cda34 ^
                  _UNK_1561cda24 + (_UNK_1561cda04 & in_XMM0_Db) & _UNK_1561cda44);
  fVar11 = (float)(_UNK_1561cda08 & in_XMM0_Dc |
                  (uint)_UNK_1561cda38 ^
                  _UNK_1561cda28 + (_UNK_1561cda08 & in_XMM0_Dc) & _UNK_1561cda48);
  fVar12 = (float)(_UNK_1561cda0c & in_XMM0_Dd |
                  (uint)_UNK_1561cda3c ^
                  _UNK_1561cda2c + (_UNK_1561cda0c & in_XMM0_Dd) & _UNK_1561cda4c);
  auVar13._0_4_ = (float)s_fOne + fVar7;
  auVar13._4_4_ = _UNK_1561cda34 + fVar10;
  auVar13._8_4_ = _UNK_1561cda38 + fVar11;
  auVar13._12_4_ = _UNK_1561cda3c + fVar12;
  auVar8._0_4_ = fVar7 - (float)s_fOne;
  auVar8._4_4_ = fVar10 - _UNK_1561cda34;
  auVar8._8_4_ = fVar11 - _UNK_1561cda38;
  auVar8._12_4_ = fVar12 - _UNK_1561cda3c;
  divps(auVar8,auVar13);
  auVar6._0_4_ = -(uint)((int)in_XMM0_Da < (int)s_dwPosInf);
  auVar6._4_4_ = -(uint)((int)in_XMM0_Db < (int)_UNK_1561cda14);
  auVar6._8_4_ = -(uint)((int)in_XMM0_Dc < (int)_UNK_1561cda18);
  auVar6._12_4_ = -(uint)((int)in_XMM0_Dd < (int)_UNK_1561cda1c);
  auVar5._0_4_ = -(uint)((int)flMantissaMask < (int)in_XMM0_Da);
  auVar5._4_4_ = -(uint)((int)_UNK_1561cda04 < (int)in_XMM0_Db);
  auVar5._8_4_ = -(uint)((int)_UNK_1561cda08 < (int)in_XMM0_Dc);
  auVar5._12_4_ = -(uint)((int)_UNK_1561cda0c < (int)in_XMM0_Dd);
  auVar6 = auVar6 & auVar5;
  if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
    return;
  }
  uVar1 = -(uint)((int)s_dwPosInf < (int)(in_XMM0_Da + s_dwPosInf));
  uVar2 = -(uint)((int)_UNK_1561cda14 < (int)(in_XMM0_Db + _UNK_1561cda14));
  uVar3 = -(uint)((int)_UNK_1561cda18 < (int)(in_XMM0_Dc + _UNK_1561cda18));
  uVar4 = -(uint)((int)_UNK_1561cda1c < (int)(in_XMM0_Dd + _UNK_1561cda1c));
  uVar14 = -(uint)((-(uint)(in_XMM0_Da == s_dwPosInf) & s_dwPosInf |
                    -(uint)((in_XMM0_Da & s_dwAbsMask) == s_dwPosZero) & s_dwNegInf |
                    -(uint)((int)s_dwPosInf < (int)(in_XMM0_Da & s_dwAbsMask)) & in_XMM0_Da |
                   -(uint)((int)s_dwSpecial2 < (int)(in_XMM0_Da + s_dwSpecial1))) == s_dwPosZero);
  uVar16 = -(uint)((-(uint)(in_XMM0_Db == _UNK_1561cda14) & _UNK_1561cda14 |
                    -(uint)((in_XMM0_Db & _UNK_1561cdaa4) == _UNK_1561cdab4) & _UNK_1561cdac4 |
                    -(uint)((int)_UNK_1561cda14 < (int)(in_XMM0_Db & _UNK_1561cdaa4)) & in_XMM0_Db |
                   -(uint)(_UNK_1561cdae4 < (int)(in_XMM0_Db + _UNK_1561cdad4))) == _UNK_1561cdab4);
  uVar17 = -(uint)((-(uint)(in_XMM0_Dc == _UNK_1561cda18) & _UNK_1561cda18 |
                    -(uint)((in_XMM0_Dc & _UNK_1561cdaa8) == _UNK_1561cdab8) & _UNK_1561cdac8 |
                    -(uint)((int)_UNK_1561cda18 < (int)(in_XMM0_Dc & _UNK_1561cdaa8)) & in_XMM0_Dc |
                   -(uint)(_UNK_1561cdae8 < (int)(in_XMM0_Dc + _UNK_1561cdad8))) == _UNK_1561cdab8);
  uVar18 = -(uint)((-(uint)(in_XMM0_Dd == _UNK_1561cda1c) & _UNK_1561cda1c |
                    -(uint)((in_XMM0_Dd & _UNK_1561cdaac) == _UNK_1561cdabc) & _UNK_1561cdacc |
                    -(uint)((int)_UNK_1561cda1c < (int)(in_XMM0_Dd & _UNK_1561cdaac)) & in_XMM0_Dd |
                   -(uint)(_UNK_1561cdaec < (int)(in_XMM0_Dd + _UNK_1561cdadc))) == _UNK_1561cdabc);
  uVar1 = flMantissaMask &
          (uVar1 & (uint)((float)(in_XMM0_Da | s_fOne) - (float)s_fOne) |
          ~uVar1 & (~uVar14 & s_fOne | in_XMM0_Da & uVar14));
  uVar2 = _UNK_1561cda04 &
          (uVar2 & (uint)((float)(in_XMM0_Db | (uint)_UNK_1561cda34) - _UNK_1561cda34) |
          ~uVar2 & (~uVar16 & (uint)_UNK_1561cda34 | in_XMM0_Db & uVar16));
  uVar3 = _UNK_1561cda08 &
          (uVar3 & (uint)((float)(in_XMM0_Dc | (uint)_UNK_1561cda38) - _UNK_1561cda38) |
          ~uVar3 & (~uVar17 & (uint)_UNK_1561cda38 | in_XMM0_Dc & uVar17));
  uVar4 = _UNK_1561cda0c &
          (uVar4 & (uint)((float)(in_XMM0_Dd | (uint)_UNK_1561cda3c) - _UNK_1561cda3c) |
          ~uVar4 & (~uVar18 & (uint)_UNK_1561cda3c | in_XMM0_Dd & uVar18));
  fVar7 = (float)(uVar1 | s_fOne ^ s_dwSqrt2Addition + uVar1 & s_dwSqrt2Mask);
  fVar10 = (float)(uVar2 | (uint)_UNK_1561cda34 ^ _UNK_1561cda24 + uVar2 & _UNK_1561cda44);
  fVar11 = (float)(uVar3 | (uint)_UNK_1561cda38 ^ _UNK_1561cda28 + uVar3 & _UNK_1561cda48);
  fVar12 = (float)(uVar4 | (uint)_UNK_1561cda3c ^ _UNK_1561cda2c + uVar4 & _UNK_1561cda4c);
  auVar15._0_4_ = (float)s_fOne + fVar7;
  auVar15._4_4_ = _UNK_1561cda34 + fVar10;
  auVar15._8_4_ = _UNK_1561cda38 + fVar11;
  auVar15._12_4_ = _UNK_1561cda3c + fVar12;
  auVar9._0_4_ = fVar7 - (float)s_fOne;
  auVar9._4_4_ = fVar10 - _UNK_1561cda34;
  auVar9._8_4_ = fVar11 - _UNK_1561cda38;
  auVar9._12_4_ = fVar12 - _UNK_1561cda3c;
  divps(auVar9,auVar15);
  return;
}

