// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 2

// entropysets_order0_codelen_bits_sse4 @ 14f3dd800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl oo2::entropysets_order0_codelen_bits_sse4(Histo256 *param_1,long64 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  uint *puVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar11;
  uint uVar12;
  undefined1 auVar9 [16];
  uint uVar13;
  undefined1 auVar10 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_418 [4];
  uint local_408 [252];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)local_418;
  iVar14 = 0;
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  uVar2 = (undefined4)(0x40000000 / (param_2 & 0xffffffffU));
  lVar3 = (longlong)param_1 - (longlong)local_408;
  auVar10._4_4_ = uVar2;
  auVar10._0_4_ = uVar2;
  auVar10._8_4_ = uVar2;
  auVar10._12_4_ = uVar2;
  lVar5 = 4;
  puVar6 = local_408;
  do {
    auVar9 = *(undefined1 (*) [16])(lVar3 + 0x10 + (longlong)puVar6);
    puVar1 = puVar6 + 0x40;
    auVar7 = pmulld(*(undefined1 (*) [16])(lVar3 + (longlong)puVar6),auVar10);
    puVar6[-4] = auVar7._0_4_ >> 0x11;
    puVar6[-3] = auVar7._4_4_ >> 0x11;
    puVar6[-2] = auVar7._8_4_ >> 0x11;
    puVar6[-1] = auVar7._12_4_ >> 0x11;
    auVar7 = *(undefined1 (*) [16])(lVar3 + -0xe0 + (longlong)puVar1);
    auVar9 = pmulld(auVar9,auVar10);
    *puVar6 = auVar9._0_4_ >> 0x11;
    puVar6[1] = auVar9._4_4_ >> 0x11;
    puVar6[2] = auVar9._8_4_ >> 0x11;
    puVar6[3] = auVar9._12_4_ >> 0x11;
    auVar9 = *(undefined1 (*) [16])(lVar3 + -0xd0 + (longlong)puVar1);
    auVar7 = pmulld(auVar7,auVar10);
    puVar6[4] = auVar7._0_4_ >> 0x11;
    puVar6[5] = auVar7._4_4_ >> 0x11;
    puVar6[6] = auVar7._8_4_ >> 0x11;
    puVar6[7] = auVar7._12_4_ >> 0x11;
    auVar7 = *(undefined1 (*) [16])(lVar3 + -0xc0 + (longlong)puVar1);
    auVar9 = pmulld(auVar9,auVar10);
    puVar6[8] = auVar9._0_4_ >> 0x11;
    puVar6[9] = auVar9._4_4_ >> 0x11;
    puVar6[10] = auVar9._8_4_ >> 0x11;
    puVar6[0xb] = auVar9._12_4_ >> 0x11;
    auVar9 = *(undefined1 (*) [16])(lVar3 + -0xb0 + (longlong)puVar1);
    auVar7 = pmulld(auVar7,auVar10);
    puVar6[0xc] = auVar7._0_4_ >> 0x11;
    puVar6[0xd] = auVar7._4_4_ >> 0x11;
    puVar6[0xe] = auVar7._8_4_ >> 0x11;
    puVar6[0xf] = auVar7._12_4_ >> 0x11;
    auVar7 = *(undefined1 (*) [16])(lVar3 + -0xa0 + (longlong)puVar1);
    auVar9 = pmulld(auVar9,auVar10);
    puVar6[0x10] = auVar9._0_4_ >> 0x11;
    puVar6[0x11] = auVar9._4_4_ >> 0x11;
    puVar6[0x12] = auVar9._8_4_ >> 0x11;
    puVar6[0x13] = auVar9._12_4_ >> 0x11;
    auVar9 = *(undefined1 (*) [16])(lVar3 + -0x90 + (longlong)puVar1);
    auVar7 = pmulld(auVar7,auVar10);
    puVar6[0x14] = auVar7._0_4_ >> 0x11;
    puVar6[0x15] = auVar7._4_4_ >> 0x11;
    puVar6[0x16] = auVar7._8_4_ >> 0x11;
    puVar6[0x17] = auVar7._12_4_ >> 0x11;
    auVar7 = *(undefined1 (*) [16])(lVar3 + -0x80 + (longlong)puVar1);
    auVar9 = pmulld(auVar9,auVar10);
    puVar6[0x18] = auVar9._0_4_ >> 0x11;
    puVar6[0x19] = auVar9._4_4_ >> 0x11;
    puVar6[0x1a] = auVar9._8_4_ >> 0x11;
    puVar6[0x1b] = auVar9._12_4_ >> 0x11;
    auVar9 = *(undefined1 (*) [16])(lVar3 + -0x70 + (longlong)puVar1);
    auVar7 = pmulld(auVar7,auVar10);
    puVar6[0x1c] = auVar7._0_4_ >> 0x11;
    puVar6[0x1d] = auVar7._4_4_ >> 0x11;
    puVar6[0x1e] = auVar7._8_4_ >> 0x11;
    puVar6[0x1f] = auVar7._12_4_ >> 0x11;
    auVar7 = *(undefined1 (*) [16])(lVar3 + -0x60 + (longlong)puVar1);
    auVar9 = pmulld(auVar9,auVar10);
    puVar6[0x20] = auVar9._0_4_ >> 0x11;
    puVar6[0x21] = auVar9._4_4_ >> 0x11;
    puVar6[0x22] = auVar9._8_4_ >> 0x11;
    puVar6[0x23] = auVar9._12_4_ >> 0x11;
    auVar9 = *(undefined1 (*) [16])(lVar3 + -0x50 + (longlong)puVar1);
    auVar7 = pmulld(auVar7,auVar10);
    puVar6[0x24] = auVar7._0_4_ >> 0x11;
    puVar6[0x25] = auVar7._4_4_ >> 0x11;
    puVar6[0x26] = auVar7._8_4_ >> 0x11;
    puVar6[0x27] = auVar7._12_4_ >> 0x11;
    auVar7 = *(undefined1 (*) [16])(lVar3 + -0x40 + (longlong)puVar1);
    auVar9 = pmulld(auVar9,auVar10);
    puVar6[0x28] = auVar9._0_4_ >> 0x11;
    puVar6[0x29] = auVar9._4_4_ >> 0x11;
    puVar6[0x2a] = auVar9._8_4_ >> 0x11;
    puVar6[0x2b] = auVar9._12_4_ >> 0x11;
    auVar9 = *(undefined1 (*) [16])(lVar3 + -0x30 + (longlong)puVar1);
    auVar7 = pmulld(auVar7,auVar10);
    puVar6[0x2c] = auVar7._0_4_ >> 0x11;
    puVar6[0x2d] = auVar7._4_4_ >> 0x11;
    puVar6[0x2e] = auVar7._8_4_ >> 0x11;
    puVar6[0x2f] = auVar7._12_4_ >> 0x11;
    auVar7 = *(undefined1 (*) [16])(lVar3 + -0x20 + (longlong)puVar1);
    auVar9 = pmulld(auVar9,auVar10);
    puVar6[0x30] = auVar9._0_4_ >> 0x11;
    puVar6[0x31] = auVar9._4_4_ >> 0x11;
    puVar6[0x32] = auVar9._8_4_ >> 0x11;
    puVar6[0x33] = auVar9._12_4_ >> 0x11;
    auVar9 = *(undefined1 (*) [16])(lVar3 + -0x10 + (longlong)puVar1);
    auVar7 = pmulld(auVar7,auVar10);
    puVar6[0x34] = auVar7._0_4_ >> 0x11;
    puVar6[0x35] = auVar7._4_4_ >> 0x11;
    puVar6[0x36] = auVar7._8_4_ >> 0x11;
    puVar6[0x37] = auVar7._12_4_ >> 0x11;
    auVar9 = pmulld(auVar9,auVar10);
    puVar6[0x38] = auVar9._0_4_ >> 0x11;
    puVar6[0x39] = auVar9._4_4_ >> 0x11;
    puVar6[0x3a] = auVar9._8_4_ >> 0x11;
    puVar6[0x3b] = auVar9._12_4_ >> 0x11;
    lVar5 = lVar5 + -1;
    puVar6 = puVar1;
  } while (lVar5 != 0);
  lVar3 = 0x40;
  piVar4 = local_418 + 3;
  do {
    uVar8 = (uint)c_rr_log2_table[piVar4[-3]] >> 5;
    uVar11 = (uint)c_rr_log2_table[piVar4[-2]] >> 5;
    uVar12 = (uint)c_rr_log2_table[piVar4[-1]] >> 5;
    uVar13 = (uint)c_rr_log2_table[*piVar4] >> 5;
    auVar9._0_4_ = (uint)(___xmm_00000b0000000b0000000b0000000b00 < (int)uVar8) *
                   ___xmm_00000b0000000b0000000b0000000b00 |
                   (___xmm_00000b0000000b0000000b0000000b00 >= (int)uVar8) * uVar8;
    auVar9._4_4_ = (uint)(_UNK_1531e9124 < (int)uVar11) * _UNK_1531e9124 |
                   (_UNK_1531e9124 >= (int)uVar11) * uVar11;
    auVar9._8_4_ = (uint)(_UNK_1531e9128 < (int)uVar12) * _UNK_1531e9128 |
                   (_UNK_1531e9128 >= (int)uVar12) * uVar12;
    auVar9._12_4_ =
         (uint)(_UNK_1531e912c < (int)uVar13) * _UNK_1531e912c |
         (_UNK_1531e912c >= (int)uVar13) * uVar13;
    auVar10 = pmulld(auVar9,*(undefined1 (*) [16])
                             ((longlong)param_1 + (-0x10 - (longlong)(local_418 + 3)) +
                             (longlong)(piVar4 + 4)));
    iVar14 = iVar14 + auVar10._0_4_;
    iVar15 = iVar15 + auVar10._4_4_;
    iVar16 = iVar16 + auVar10._8_4_;
    iVar17 = iVar17 + auVar10._12_4_;
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 4;
  } while (lVar3 != 0);
  return (uint)(iVar17 + iVar15 + iVar16 + iVar14) >> 8;
}

// hsum_epi32_sse2 @ 14f3dda90

int __cdecl oo2::hsum_epi32_sse2(__m128i *param_1)

{
  return param_1->m128i_i32[3] + param_1->m128i_i32[1] +
         param_1->m128i_i32[2] + param_1->m128i_i32[0];
}

