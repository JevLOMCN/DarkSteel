// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_atan2f4 @ 15015c1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_atan2f4(void)

{
  float fVar1;
  undefined4 in_EAX;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 in_XMM0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 in_XMM1 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float afStack_68 [4];
  float afStack_58 [4];
  float afStack_48 [18];
  
  auVar17 = _s_dwAbsMask & in_XMM1;
  auVar13 = _s_dwAbsMask & in_XMM0;
  auVar19._0_4_ = -(uint)((int)s_dwMaxNormal < (int)auVar13._0_4_);
  auVar19._4_4_ = -(uint)(_UNK_1561ca124 < (int)auVar13._4_4_);
  auVar19._8_4_ = -(uint)(_UNK_1561ca128 < (int)auVar13._8_4_);
  auVar19._12_4_ = -(uint)(_UNK_1561ca12c < (int)auVar13._12_4_);
  auVar21._0_4_ = -(uint)((int)s_dwMinBound < (int)auVar17._0_4_);
  auVar21._4_4_ = -(uint)(_UNK_1561ca134 < (int)auVar17._4_4_);
  auVar21._8_4_ = -(uint)(_UNK_1561ca138 < (int)auVar17._8_4_);
  auVar21._12_4_ = -(uint)(_UNK_1561ca13c < (int)auVar17._12_4_);
  uVar2 = movmskps(in_EAX,~auVar19 & auVar21);
  iVar7 = -(uint)(auVar17._8_4_ < auVar13._8_4_);
  iVar8 = -(uint)(auVar17._12_4_ < auVar13._12_4_);
  auVar14._0_8_ =
       CONCAT44(-(uint)(auVar17._4_4_ < auVar13._4_4_),-(uint)(auVar17._0_4_ < auVar13._0_4_));
  auVar14._8_4_ = iVar7;
  auVar14._12_4_ = iVar8;
  auVar16._8_4_ = iVar7;
  auVar16._0_8_ = auVar14._0_8_;
  auVar16._12_4_ = iVar8;
  auVar9._8_4_ = iVar7;
  auVar9._0_8_ = auVar14._0_8_;
  auVar9._12_4_ = iVar8;
  auVar10._8_4_ = iVar7;
  auVar10._0_8_ = auVar14._0_8_;
  auVar10._12_4_ = iVar8;
  divps(auVar16 & auVar17 | ~auVar9 & auVar13,auVar13 & auVar14 | ~auVar10 & auVar17);
  if (uVar2 != 0xf) {
    lVar3 = 0;
    do {
      if ((uVar2 & 1) == 0) {
        fVar1 = afStack_48[lVar3];
        fVar4 = afStack_58[lVar3];
        uVar6 = (uint)afStack_58[lVar3] & 0x80000000;
        fVar5 = afStack_48[lVar3];
        if (((uint)ABS(fVar1) < 0x7f800001) && ((uint)ABS(afStack_58[lVar3]) < 0x7f800001)) {
          if (fVar4 == 0.0) {
            fVar20 = fVar4;
            if (uVar6 == 0) {
              if (((fVar5 <= 0.0) && (fVar20 = (float)_2il0floatpacket_4, 0.0 <= fVar5)) &&
                 (((uint)fVar1 & 0x80000000) == 0)) {
                fVar20 = fVar4;
              }
            }
            else if (((fVar5 <= 0.0) && (fVar20 = (float)_2il0floatpacket_3, 0.0 <= fVar5)) &&
                    (fVar20 = (float)_2il0floatpacket_3, ((uint)fVar1 & 0x80000000) == 0)) {
              fVar20 = fVar4;
            }
          }
          else if (fVar5 == 0.0) {
            fVar20 = (float)_2il0floatpacket_5;
            if (fVar4 <= 0.0) {
              fVar20 = (float)_2il0floatpacket_6;
            }
          }
          else if (fVar5 == (float)INFP) {
            fVar20 = (float)_2il0floatpacket_7;
            if (((fVar4 != (float)INFP) &&
                (fVar20 = (float)_2il0floatpacket_8, fVar4 != (float)INFN)) &&
               (fVar20 = (float)NEGZERO, 0.0 <= fVar4)) {
              fVar20 = 0.0;
            }
          }
          else if (fVar5 == (float)INFN) {
            fVar20 = (float)_2il0floatpacket_9;
            if (((fVar4 != (float)INFP) &&
                (fVar20 = (float)_2il0floatpacket_10, fVar4 != (float)INFN)) &&
               (fVar20 = (float)_2il0floatpacket_4, fVar4 <= 0.0)) {
              fVar20 = (float)_2il0floatpacket_3;
            }
          }
          else {
            fVar20 = (float)_2il0floatpacket_5;
            if ((fVar4 != (float)INFP) && (fVar20 = (float)_2il0floatpacket_6, fVar4 != (float)INFN)
               ) {
              fVar4 = ABS(fVar4);
              fVar5 = ABS(fVar5);
              if (fVar4 <= fVar5) {
                fVar4 = fVar4 / fVar5;
                dVar18 = 0.0;
              }
              else {
                fVar4 = (float)((uint)fVar5 ^ _2il0floatpacket_22) / fVar4;
                dVar18 = __2il0floatpacket_11;
              }
              dVar11 = (double)fVar4;
              dVar15 = dVar11 * dVar11;
              dVar12 = dVar15 * dVar15;
              fVar20 = (float)((double)(float)(uVar6 + 0x3f800000) *
                              ((dVar18 + dVar11 * ((((__2il0floatpacket_16 * dVar12 +
                                                     __2il0floatpacket_15) * dVar12 +
                                                    __2il0floatpacket_14) * dVar12 +
                                                   __2il0floatpacket_13) * dVar12 +
                                                   __2il0floatpacket_12 +
                                                  dVar15 * (((__2il0floatpacket_20 * dVar12 +
                                                             __2il0floatpacket_19) * dVar12 +
                                                            __2il0floatpacket_18) * dVar12 +
                                                           __2il0floatpacket_17))) *
                               *(double *)(&DAT_154e47178 + (longlong)((int)fVar1 >> 0x1f) * 8) +
                              *(double *)(&DAT_154e47168 + (longlong)((int)fVar1 >> 0x1f) * 8)));
            }
          }
        }
        else {
          fVar20 = fVar4 + fVar5;
        }
        afStack_68[lVar3] = fVar20;
      }
      lVar3 = lVar3 + 1;
      uVar2 = (int)uVar2 >> 1;
    } while (lVar3 < 4);
  }
  return;
}

