// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// whirlpool_block @ 140e5e900

void whirlpool_block(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_70;
  longlong lStack_68;
  
  uStack_100 = *param_1;
  uStack_f8 = param_1[1];
  uStack_f0 = param_1[2];
  uStack_e8 = param_1[3];
  uStack_e0 = param_1[4];
  uStack_d8 = param_1[5];
  uStack_d0 = param_1[6];
  uStack_c8 = param_1[7];
  lStack_70 = param_3;
  do {
    uStack_c0 = uStack_100 ^ *param_2;
    uStack_b8 = uStack_f8 ^ param_2[1];
    uStack_b0 = uStack_f0 ^ param_2[2];
    uStack_a8 = uStack_e8 ^ param_2[3];
    uStack_a0 = uStack_e0 ^ param_2[4];
    uStack_98 = uStack_d8 ^ param_2[5];
    uStack_90 = uStack_d0 ^ param_2[6];
    lStack_68 = 0;
    uStack_88 = uStack_c8 ^ param_2[7];
    do {
      uVar1 = (uint)uStack_100 >> 8;
      uVar13 = (uint)uStack_100 >> 0x10;
      uVar2 = (uint)uStack_100 >> 0x18;
      uVar18 = uStack_100._4_4_ & 0xff;
      uVar3 = uStack_100._4_4_ >> 8;
      uVar21 = uStack_100._4_4_ >> 0x10;
      uVar4 = (uint)uStack_f8 >> 8;
      uVar14 = (uint)uStack_f8 >> 0x10;
      uVar5 = (uint)uStack_f8 >> 0x18;
      uVar19 = uStack_f8._4_4_ & 0xff;
      uVar6 = uStack_f8._4_4_ >> 8;
      uVar7 = (uint)uStack_f0 >> 8;
      uVar15 = (uint)uStack_f0 >> 0x10;
      uVar8 = (uint)uStack_f0 >> 0x18;
      uVar20 = uStack_f0._4_4_ & 0xff;
      uVar9 = (uint)uStack_e8 >> 8;
      uVar16 = (uint)uStack_e8 >> 0x10;
      uVar10 = (uint)uStack_e8 >> 0x18;
      uVar11 = (uint)uStack_e0 >> 8;
      uVar17 = (uint)uStack_e0 >> 0x10;
      uVar12 = (uint)uStack_d8 >> 8;
      uVar22 = *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_100._4_4_ >> 0x18) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(uStack_f8._4_4_ >> 0x10 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_f0._4_4_ >> 8 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_e8._4_4_ & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)uStack_e0 >> 0x18) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f206 + (ulonglong)((uint)uStack_d8 >> 0x10 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f207 + (ulonglong)((uint)uStack_d0 >> 8 & 0xff) * 0x10) ^
               *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_c8 & 0xff) * 0x10);
      uStack_100 = (&DAT_140e60200)[lStack_68] ^
                   *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_100 & 0xff) * 0x10) ^
                   *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_f8._4_4_ >> 0x18) * 0x10) ^
                   *(ulonglong *)
                    (&DAT_140e5f202 + (ulonglong)(uStack_f0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                   *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_e8._4_4_ >> 8 & 0xff) * 0x10)
                   ^ *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_e0._4_4_ & 0xff) * 0x10) ^
                   *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)uStack_d8 >> 0x18) * 0x10) ^
                   *(ulonglong *)
                    (&DAT_140e5f206 + (ulonglong)((uint)uStack_d0 >> 0x10 & 0xff) * 0x10) ^
                   *(ulonglong *)(&DAT_140e5f207 + (ulonglong)((uint)uStack_c8 >> 8 & 0xff) * 0x10);
      uStack_f8 = *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar1 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_f8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_f0._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_e8._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_e0._4_4_ >> 8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_d8._4_4_ & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)uStack_d0 >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f206 + (ulonglong)((uint)uStack_c8 >> 0x10 & 0xff) * 0x10);
      uStack_f0 = *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar13 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar4 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_f0 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_e8._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_e0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_d8._4_4_ >> 8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_d0._4_4_ & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)uStack_c8 >> 0x18) * 0x10);
      uStack_e8 = *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar2 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar14 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar7 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_e8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_e0._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_d8._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_d0._4_4_ >> 8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_c8._4_4_ & 0xff) * 0x10);
      uStack_e0 = *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar18 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar5 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar15 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar9 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_e0 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_d8._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_d0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_c8._4_4_ >> 8 & 0xff) * 0x10);
      uVar1 = (uint)uStack_c0 >> 8;
      uStack_d8 = *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uVar3 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar19 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar8 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar16 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar11 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_d8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_d0._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_c8._4_4_ >> 0x10 & 0xff) * 0x10);
      uStack_d0 = *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(uVar21 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uVar6 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar20 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar10 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar17 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar12 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_d0 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_c8._4_4_ >> 0x18) * 0x10);
      uVar13 = (uint)uStack_c0 >> 0x10;
      uVar2 = (uint)uStack_c0 >> 0x18;
      uVar18 = uStack_c0._4_4_ & 0xff;
      uVar3 = uStack_c0._4_4_ >> 8;
      uVar21 = uStack_c0._4_4_ >> 0x10;
      uVar4 = (uint)uStack_b8 >> 8;
      uVar14 = (uint)uStack_b8 >> 0x10;
      uVar5 = (uint)uStack_b8 >> 0x18;
      uVar19 = uStack_b8._4_4_ & 0xff;
      uVar6 = uStack_b8._4_4_ >> 8;
      uVar7 = (uint)uStack_b0 >> 8;
      uVar15 = (uint)uStack_b0 >> 0x10;
      uVar8 = (uint)uStack_b0 >> 0x18;
      uVar20 = uStack_b0._4_4_ & 0xff;
      uVar9 = (uint)uStack_a8 >> 8;
      uVar16 = (uint)uStack_a8 >> 0x10;
      uVar10 = (uint)uStack_a8 >> 0x18;
      uVar11 = (uint)uStack_a0 >> 8;
      uVar17 = (uint)uStack_a0 >> 0x10;
      uVar12 = (uint)uStack_98 >> 8;
      uVar23 = uVar22 ^ *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_c0._4_4_ >> 0x18) * 0x10)
               ^ *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(uStack_b8._4_4_ >> 0x10 & 0xff) * 0x10)
               ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_b0._4_4_ >> 8 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_a8._4_4_ & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)uStack_a0 >> 0x18) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f206 + (ulonglong)((uint)uStack_98 >> 0x10 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f207 + (ulonglong)((uint)uStack_90 >> 8 & 0xff) * 0x10) ^
               *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_88 & 0xff) * 0x10);
      uStack_c0 = uStack_100 ^ *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_c0 & 0xff) * 0x10)
                  ^ *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_b8._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_b0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_a8._4_4_ >> 8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_a0._4_4_ & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)uStack_98 >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f206 + (ulonglong)((uint)uStack_90 >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)((uint)uStack_88 >> 8 & 0xff) * 0x10);
      uStack_b8 = uStack_f8 ^ *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar1 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_b8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_b0._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_a8._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_a0._4_4_ >> 8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_98._4_4_ & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)uStack_90 >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f206 + (ulonglong)((uint)uStack_88 >> 0x10 & 0xff) * 0x10);
      uStack_b0 = uStack_f0 ^ *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar13 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar4 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_b0 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_a8._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_a0._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_98._4_4_ >> 8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_90._4_4_ & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)uStack_88 >> 0x18) * 0x10);
      uStack_a8 = uStack_e8 ^ *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar2 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar14 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar7 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_a8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_a0._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_98._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_90._4_4_ >> 8 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(uStack_88._4_4_ & 0xff) * 0x10);
      uStack_a0 = uStack_e0 ^ *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar18 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar5 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar15 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar9 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_a0 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_98._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_90._4_4_ >> 0x10 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uStack_88._4_4_ >> 8 & 0xff) * 0x10);
      uStack_98 = uStack_d8 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uVar3 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar19 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar8 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar16 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar11 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_98 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_90._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)
                   (&DAT_140e5f202 + (ulonglong)(uStack_88._4_4_ >> 0x10 & 0xff) * 0x10);
      uStack_90 = uStack_d0 ^ *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(uVar21 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uVar6 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar20 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar10 * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar17 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar12 & 0xff) * 0x10) ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)uStack_90 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(uStack_88._4_4_ >> 0x18) * 0x10);
      lStack_68 = lStack_68 + 1;
      uStack_c8 = uVar22;
      uStack_88 = uVar23;
    } while (lStack_68 != 10);
    uStack_100 = uStack_c0 ^ *param_2 ^ *param_1;
    uStack_f8 = uStack_b8 ^ param_2[1] ^ param_1[1];
    uStack_f0 = uStack_b0 ^ param_2[2] ^ param_1[2];
    uStack_e8 = uStack_a8 ^ param_2[3] ^ param_1[3];
    uStack_e0 = uStack_a0 ^ param_2[4] ^ param_1[4];
    uStack_d8 = uStack_98 ^ param_2[5] ^ param_1[5];
    uStack_d0 = uStack_90 ^ param_2[6] ^ param_1[6];
    uStack_c8 = uVar23 ^ param_2[7] ^ param_1[7];
    *param_1 = uStack_100;
    param_1[1] = uStack_f8;
    param_1[2] = uStack_f0;
    param_1[3] = uStack_e8;
    param_1[4] = uStack_e0;
    param_1[5] = uStack_d8;
    param_1[6] = uStack_d0;
    param_1[7] = uStack_c8;
    param_2 = param_2 + 8;
    lStack_70 = lStack_70 + -1;
  } while (lStack_70 != 0);
  return;
}

// L$SEH_begin_whirlpool_block @ 140e5e90d

void L_SEH_begin_whirlpool_block(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_70;
  longlong local_68;
  
  local_100 = *param_1;
  local_f8 = param_1[1];
  local_f0 = param_1[2];
  local_e8 = param_1[3];
  local_e0 = param_1[4];
  local_d8 = param_1[5];
  local_d0 = param_1[6];
  local_c8 = param_1[7];
  local_70 = param_3;
  do {
    local_c0 = local_100 ^ *param_2;
    local_b8 = local_f8 ^ param_2[1];
    local_b0 = local_f0 ^ param_2[2];
    local_a8 = local_e8 ^ param_2[3];
    local_a0 = local_e0 ^ param_2[4];
    local_98 = local_d8 ^ param_2[5];
    local_90 = local_d0 ^ param_2[6];
    local_68 = 0;
    local_88 = local_c8 ^ param_2[7];
    do {
      uVar1 = (uint)local_100 >> 8;
      uVar13 = (uint)local_100 >> 0x10;
      uVar2 = (uint)local_100 >> 0x18;
      uVar18 = local_100._4_4_ & 0xff;
      uVar3 = local_100._4_4_ >> 8;
      uVar21 = local_100._4_4_ >> 0x10;
      uVar4 = (uint)local_f8 >> 8;
      uVar14 = (uint)local_f8 >> 0x10;
      uVar5 = (uint)local_f8 >> 0x18;
      uVar19 = local_f8._4_4_ & 0xff;
      uVar6 = local_f8._4_4_ >> 8;
      uVar7 = (uint)local_f0 >> 8;
      uVar15 = (uint)local_f0 >> 0x10;
      uVar8 = (uint)local_f0 >> 0x18;
      uVar20 = local_f0._4_4_ & 0xff;
      uVar9 = (uint)local_e8 >> 8;
      uVar16 = (uint)local_e8 >> 0x10;
      uVar10 = (uint)local_e8 >> 0x18;
      uVar11 = (uint)local_e0 >> 8;
      uVar17 = (uint)local_e0 >> 0x10;
      uVar12 = (uint)local_d8 >> 8;
      uVar22 = *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_100._4_4_ >> 0x18) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_f8._4_4_ >> 0x10 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_f0._4_4_ >> 8 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_e8._4_4_ & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)local_e0 >> 0x18) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f206 + (ulonglong)((uint)local_d8 >> 0x10 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f207 + (ulonglong)((uint)local_d0 >> 8 & 0xff) * 0x10) ^
               *(ulonglong *)(&L_table + (ulonglong)((uint)local_c8 & 0xff) * 0x10);
      local_100 = (&DAT_140e60200)[local_68] ^
                  *(ulonglong *)(&L_table + (ulonglong)((uint)local_100 & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_f8._4_4_ >> 0x18) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_f0._4_4_ >> 0x10 & 0xff) * 0x10)
                  ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_e8._4_4_ >> 8 & 0xff) * 0x10)
                  ^ *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_e0._4_4_ & 0xff) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)local_d8 >> 0x18) * 0x10) ^
                  *(ulonglong *)(&DAT_140e5f206 + (ulonglong)((uint)local_d0 >> 0x10 & 0xff) * 0x10)
                  ^ *(ulonglong *)(&DAT_140e5f207 + (ulonglong)((uint)local_c8 >> 8 & 0xff) * 0x10);
      local_f8 = *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar1 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_f8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_f0._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_e8._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_e0._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_d8._4_4_ & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)local_d0 >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)((uint)local_c8 >> 0x10 & 0xff) * 0x10);
      local_f0 = *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar13 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar4 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_f0 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_e8._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_e0._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_d8._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_d0._4_4_ & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)local_c8 >> 0x18) * 0x10);
      local_e8 = *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar2 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar14 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar7 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_e8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_e0._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_d8._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_d0._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_c8._4_4_ & 0xff) * 0x10);
      local_e0 = *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar18 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar5 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar15 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar9 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_e0 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_d8._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_d0._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_c8._4_4_ >> 8 & 0xff) * 0x10);
      uVar1 = (uint)local_c0 >> 8;
      local_d8 = *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uVar3 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar19 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar8 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar16 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar11 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_d8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_d0._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_c8._4_4_ >> 0x10 & 0xff) * 0x10);
      local_d0 = *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(uVar21 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uVar6 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar20 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar10 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar17 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar12 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_d0 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_c8._4_4_ >> 0x18) * 0x10);
      uVar13 = (uint)local_c0 >> 0x10;
      uVar2 = (uint)local_c0 >> 0x18;
      uVar18 = local_c0._4_4_ & 0xff;
      uVar3 = local_c0._4_4_ >> 8;
      uVar21 = local_c0._4_4_ >> 0x10;
      uVar4 = (uint)local_b8 >> 8;
      uVar14 = (uint)local_b8 >> 0x10;
      uVar5 = (uint)local_b8 >> 0x18;
      uVar19 = local_b8._4_4_ & 0xff;
      uVar6 = local_b8._4_4_ >> 8;
      uVar7 = (uint)local_b0 >> 8;
      uVar15 = (uint)local_b0 >> 0x10;
      uVar8 = (uint)local_b0 >> 0x18;
      uVar20 = local_b0._4_4_ & 0xff;
      uVar9 = (uint)local_a8 >> 8;
      uVar16 = (uint)local_a8 >> 0x10;
      uVar10 = (uint)local_a8 >> 0x18;
      uVar11 = (uint)local_a0 >> 8;
      uVar17 = (uint)local_a0 >> 0x10;
      uVar12 = (uint)local_98 >> 8;
      uVar23 = uVar22 ^ *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_c0._4_4_ >> 0x18) * 0x10)
               ^ *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_b8._4_4_ >> 0x10 & 0xff) * 0x10)
               ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_b0._4_4_ >> 8 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_a8._4_4_ & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)local_a0 >> 0x18) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f206 + (ulonglong)((uint)local_98 >> 0x10 & 0xff) * 0x10) ^
               *(ulonglong *)(&DAT_140e5f207 + (ulonglong)((uint)local_90 >> 8 & 0xff) * 0x10) ^
               *(ulonglong *)(&L_table + (ulonglong)((uint)local_88 & 0xff) * 0x10);
      local_c0 = local_100 ^ *(ulonglong *)(&L_table + (ulonglong)((uint)local_c0 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_b8._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_b0._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_a8._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_a0._4_4_ & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)local_98 >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)((uint)local_90 >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f207 + (ulonglong)((uint)local_88 >> 8 & 0xff) * 0x10);
      local_b8 = local_f8 ^ *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar1 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_b8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_b0._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_a8._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_a0._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_98._4_4_ & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)local_90 >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)((uint)local_88 >> 0x10 & 0xff) * 0x10);
      local_b0 = local_f0 ^ *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar13 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar4 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_b0 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_a8._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_a0._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_98._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_90._4_4_ & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)((uint)local_88 >> 0x18) * 0x10);
      local_a8 = local_e8 ^ *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar2 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar14 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar7 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_a8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_a0._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_98._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_90._4_4_ >> 8 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)(local_88._4_4_ & 0xff) * 0x10);
      local_a0 = local_e0 ^ *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar18 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar5 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar15 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar9 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_a0 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_98._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_90._4_4_ >> 0x10 & 0xff) * 0x10)
                 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(local_88._4_4_ >> 8 & 0xff) * 0x10);
      local_98 = local_d8 ^ *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uVar3 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar19 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar8 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar16 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar11 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_98 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_90._4_4_ >> 0x18) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(local_88._4_4_ >> 0x10 & 0xff) * 0x10);
      local_90 = local_d0 ^ *(ulonglong *)(&DAT_140e5f202 + (ulonglong)(uVar21 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f203 + (ulonglong)(uVar6 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f204 + (ulonglong)uVar20 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f205 + (ulonglong)uVar10 * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f206 + (ulonglong)(uVar17 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f207 + (ulonglong)(uVar12 & 0xff) * 0x10) ^
                 *(ulonglong *)(&L_table + (ulonglong)((uint)local_90 & 0xff) * 0x10) ^
                 *(ulonglong *)(&DAT_140e5f201 + (ulonglong)(local_88._4_4_ >> 0x18) * 0x10);
      local_68 = local_68 + 1;
      local_c8 = uVar22;
      local_88 = uVar23;
    } while (local_68 != 10);
    local_100 = local_c0 ^ *param_2 ^ *param_1;
    local_f8 = local_b8 ^ param_2[1] ^ param_1[1];
    local_f0 = local_b0 ^ param_2[2] ^ param_1[2];
    local_e8 = local_a8 ^ param_2[3] ^ param_1[3];
    local_e0 = local_a0 ^ param_2[4] ^ param_1[4];
    local_d8 = local_98 ^ param_2[5] ^ param_1[5];
    local_d0 = local_90 ^ param_2[6] ^ param_1[6];
    local_c8 = uVar23 ^ param_2[7] ^ param_1[7];
    *param_1 = local_100;
    param_1[1] = local_f8;
    param_1[2] = local_f0;
    param_1[3] = local_e8;
    param_1[4] = local_e0;
    param_1[5] = local_d8;
    param_1[6] = local_d0;
    param_1[7] = local_c8;
    param_2 = param_2 + 8;
    local_70 = local_70 + -1;
  } while (local_70 != 0);
  return;
}

