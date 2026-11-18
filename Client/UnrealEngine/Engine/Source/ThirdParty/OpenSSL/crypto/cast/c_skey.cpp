// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// CAST_set_key @ 14f7ac7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CAST_set_key(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_178 [128];
  uint local_f8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8 [4];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78 [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14f7ac807;
  local_38 = __security_cookie.value ^ (ulonglong)local_178;
  lVar14 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  iVar17 = 0x10;
  if (param_2 < 0x11) {
    iVar17 = param_2;
  }
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  if (0 < iVar17) {
    do {
      local_f8[lVar14] = (uint)*(byte *)(lVar14 + param_3);
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar17);
  }
  *(uint *)(param_1 + 0x80) = (uint)(iVar17 < 0xb);
  uVar20 = *(uint *)(&CAST_S_table5 + (ulonglong)local_c0._4_4_ * 4) ^
           *(uint *)(&CAST_S_table7 + (local_c0 & 0xffffffff) * 4) ^
           *(uint *)(&CAST_S_table4 + (ulonglong)local_c8._4_4_ * 4) ^
           *(uint *)(&CAST_S_table6 + (local_c8 & 0xffffffff) * 4) ^
           *(uint *)(&CAST_S_table6 + (local_d8 & 0xffffffff) * 4) ^
           (((local_f8[0] << 8 | local_f8[1]) << 8 | local_f8[2]) << 8 | local_f8[3]);
  lVar14 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar1 = (ulonglong)(uVar20 >> 0x18) * 4;
  lVar2 = (ulonglong)(uVar20 >> 8 & 0xff) * 4;
  lVar3 = (ulonglong)(uVar20 & 0xff) * 4;
  uVar18 = *(uint *)(&CAST_S_table7 + (local_d0 & 0xffffffff) * 4) ^
           *(uint *)(&CAST_S_table7 + lVar3) ^ *(uint *)(&CAST_S_table5 + lVar2) ^
           *(uint *)(&CAST_S_table4 + lVar1) ^
           ((((int)local_d8 << 8 | local_d8._4_4_) << 8 | (uint)local_d0) << 8 | local_d0._4_4_) ^
           *(uint *)(&CAST_S_table6 + lVar14);
  lVar4 = (ulonglong)(uVar18 >> 0x18) * 4;
  lVar5 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar18 & 0xff) * 4;
  uVar16 = *(uint *)(&CAST_S_table4 + (ulonglong)local_d8._4_4_ * 4) ^
           *(uint *)(&CAST_S_table4 + lVar7) ^
           ((((int)local_c8 << 8 | local_c8._4_4_) << 8 | (uint)local_c0) << 8 | local_c0._4_4_) ^
           *(uint *)(&CAST_S_table5 + lVar6) ^ *(uint *)(&CAST_S_table6 + lVar5) ^
           *(uint *)(&CAST_S_table7 + lVar4);
  lVar12 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar16 >> 0x18) * 4;
  uVar13 = *(uint *)(&CAST_S_table5 + (ulonglong)local_d0._4_4_ * 4) ^
           *(uint *)(&CAST_S_table6 + lVar12) ^ *(uint *)(&CAST_S_table7 + lVar9) ^
           *(uint *)(&CAST_S_table4 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table5 + lVar8) ^
           (((local_f8[4] << 8 | local_f8[5]) << 8 | local_f8[6]) << 8 | local_f8[7]);
  local_b8[0] = *(uint *)(&CAST_S_table4 + lVar9) ^ *(uint *)(&CAST_S_table6 + lVar7) ^
                *(uint *)(&CAST_S_table4 + lVar2) ^ *(uint *)(&CAST_S_table7 + lVar6) ^
                *(uint *)(&CAST_S_table5 + lVar8);
  lVar9 = (ulonglong)(uVar13 >> 0x18) * 4;
  local_b8[1] = *(uint *)(&CAST_S_table5 + lVar12) ^
                *(uint *)(&CAST_S_table4 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
                *(uint *)(&CAST_S_table5 + lVar6) ^ *(uint *)(&CAST_S_table6 + lVar5) ^
                *(uint *)(&CAST_S_table7 + lVar4);
  local_b8[2] = *(uint *)(&CAST_S_table5 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&CAST_S_table4 + lVar9) ^ *(uint *)(&CAST_S_table6 + lVar8) ^
                *(uint *)(&CAST_S_table6 + lVar3) ^ *(uint *)(&CAST_S_table7 + lVar2);
  uVar16 = *(uint *)(&CAST_S_table5 + lVar7) ^ *(uint *)(&CAST_S_table4 + lVar5) ^
           *(uint *)(&CAST_S_table6 + lVar4) ^ *(uint *)(&CAST_S_table6 + lVar1) ^ uVar16 ^
           *(uint *)(&CAST_S_table7 + lVar6);
  local_b8[3] = *(uint *)(&CAST_S_table4 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
                *(uint *)(&CAST_S_table5 + (ulonglong)(uVar13 & 0xff) * 4) ^
                *(uint *)(&CAST_S_table7 + lVar9) ^ *(uint *)(&CAST_S_table7 + lVar1) ^
                *(uint *)(&CAST_S_table6 + lVar14);
  lVar1 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar4 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar16 >> 0x18) * 4;
  uVar20 = *(uint *)(&CAST_S_table4 + lVar5) ^ *(uint *)(&CAST_S_table6 + lVar1) ^
           *(uint *)(&CAST_S_table7 + lVar4) ^
           *(uint *)(&CAST_S_table5 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^ uVar20 ^
           *(uint *)(&CAST_S_table7 + lVar2);
  lVar2 = (ulonglong)(uVar20 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar20 >> 0x18) * 4;
  uVar18 = *(uint *)(&CAST_S_table7 + lVar7) ^ *(uint *)(&CAST_S_table6 + lVar6) ^
           *(uint *)(&CAST_S_table4 + lVar14) ^
           *(uint *)(&CAST_S_table5 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table4 + lVar2) ^ uVar18;
  lVar14 = (ulonglong)(uVar18 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar18 >> 0x18) * 4;
  uVar13 = *(uint *)(&CAST_S_table6 + lVar14) ^ *(uint *)(&CAST_S_table5 + lVar8) ^
           *(uint *)(&CAST_S_table4 + lVar12) ^ *(uint *)(&CAST_S_table5 + lVar3) ^
           *(uint *)(&CAST_S_table7 + lVar9) ^ uVar13;
  lVar3 = (ulonglong)(uVar13 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar13 >> 8 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar13 >> 0x10 & 0xff) * 4;
  local_a8 = *(uint *)(&CAST_S_table4 + lVar4) ^ *(uint *)(&CAST_S_table4 + lVar9) ^
             *(uint *)(&CAST_S_table7 + lVar11) ^
             *(uint *)(&CAST_S_table5 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table6 + (ulonglong)(uVar13 >> 0x18) * 4);
  local_a4 = *(uint *)(&CAST_S_table5 + lVar5) ^ *(uint *)(&CAST_S_table4 + lVar1) ^
             *(uint *)(&CAST_S_table5 + lVar11) ^ *(uint *)(&CAST_S_table6 + lVar10) ^
             *(uint *)(&CAST_S_table7 + lVar3);
  uVar16 = *(uint *)(&CAST_S_table4 + lVar11) ^ *(uint *)(&CAST_S_table7 + lVar10) ^
           *(uint *)(&CAST_S_table5 + lVar3) ^ *(uint *)(&CAST_S_table6 + lVar9) ^
           *(uint *)(&CAST_S_table6 + (ulonglong)(uVar13 >> 0x18) * 4) ^ uVar16;
  local_a0 = *(uint *)(&CAST_S_table6 + lVar4) ^ *(uint *)(&CAST_S_table7 + lVar8) ^
             *(uint *)(&CAST_S_table5 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table4 + lVar2) ^ *(uint *)(&CAST_S_table6 + lVar9);
  local_9c = *(uint *)(&CAST_S_table5 + lVar7) ^ *(uint *)(&CAST_S_table4 + lVar6) ^
             *(uint *)(&CAST_S_table7 + lVar2) ^ *(uint *)(&CAST_S_table7 + lVar14) ^
             *(uint *)(&CAST_S_table6 + lVar12);
  lVar1 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar16 >> 0x18) * 4;
  lVar3 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  lVar4 = (ulonglong)(uVar16 & 0xff) * 4;
  uVar18 = *(uint *)(&CAST_S_table7 + lVar12) ^ *(uint *)(&CAST_S_table7 + lVar4) ^
           *(uint *)(&CAST_S_table6 + lVar1) ^ *(uint *)(&CAST_S_table4 + lVar2) ^ uVar18 ^
           *(uint *)(&CAST_S_table5 + lVar3);
  lVar5 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar18 >> 0x18) * 4;
  lVar7 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar18 & 0xff) * 4;
  uVar13 = *(uint *)(&CAST_S_table4 + lVar8) ^ *(uint *)(&CAST_S_table6 + lVar5) ^
           *(uint *)(&CAST_S_table7 + lVar6) ^ uVar13 ^ *(uint *)(&CAST_S_table4 + lVar12) ^
           *(uint *)(&CAST_S_table5 + lVar7);
  lVar8 = (ulonglong)(uVar13 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar13 >> 8 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar13 >> 0x10 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar13 >> 0x18) * 4;
  uVar20 = *(uint *)(&CAST_S_table5 + lVar14) ^ *(uint *)(&CAST_S_table6 + lVar8) ^
           *(uint *)(&CAST_S_table4 + lVar9) ^ *(uint *)(&CAST_S_table5 + lVar10) ^
           *(uint *)(&CAST_S_table7 + lVar11) ^ uVar20;
  lVar14 = (ulonglong)(uVar20 >> 0x18) * 4;
  local_98 = *(uint *)(&CAST_S_table7 + (ulonglong)(uVar20 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table6 + lVar14) ^ *(uint *)(&CAST_S_table4 + lVar10) ^
             *(uint *)(&CAST_S_table4 + lVar4) ^ *(uint *)(&CAST_S_table5 + lVar3);
  local_94 = *(uint *)(&CAST_S_table6 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table7 + (ulonglong)(uVar20 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table5 + lVar14) ^ *(uint *)(&CAST_S_table5 + lVar2) ^
             *(uint *)(&CAST_S_table4 + lVar1);
  local_90 = *(uint *)(&CAST_S_table7 + lVar10) ^ *(uint *)(&CAST_S_table6 + lVar11) ^
             *(uint *)(&CAST_S_table6 + lVar3) ^ *(uint *)(&CAST_S_table4 + lVar12) ^
             *(uint *)(&CAST_S_table5 + lVar7);
  local_8c = *(uint *)(&CAST_S_table7 + lVar8) ^ *(uint *)(&CAST_S_table6 + lVar9) ^
             *(uint *)(&CAST_S_table5 + lVar6) ^ *(uint *)(&CAST_S_table4 + lVar5) ^
             *(uint *)(&CAST_S_table7 + lVar7);
  uVar19 = *(uint *)(&CAST_S_table5 + lVar12) ^ *(uint *)(&CAST_S_table6 + lVar6) ^
           *(uint *)(&CAST_S_table6 + lVar2) ^ *(uint *)(&CAST_S_table4 + lVar5) ^ uVar13 ^
           *(uint *)(&CAST_S_table7 + lVar7);
  lVar14 = (ulonglong)(uVar19 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar19 >> 0x18) * 4;
  lVar5 = (ulonglong)(uVar19 >> 8 & 0xff) * 4;
  uVar16 = *(uint *)(&CAST_S_table4 + lVar2) ^ *(uint *)(&CAST_S_table5 + lVar5) ^
           *(uint *)(&CAST_S_table7 + lVar14) ^ *(uint *)(&CAST_S_table7 + lVar3) ^
           *(uint *)(&CAST_S_table6 + (ulonglong)(uVar19 >> 0x10 & 0xff) * 4) ^ uVar16;
  lVar3 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  uVar18 = *(uint *)(&CAST_S_table5 + lVar6) ^ *(uint *)(&CAST_S_table4 + lVar3) ^
           *(uint *)(&CAST_S_table7 + (ulonglong)(uVar16 >> 0x18) * 4) ^
           *(uint *)(&CAST_S_table6 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table4 + lVar1) ^ uVar18;
  lVar1 = (ulonglong)(uVar18 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar18 >> 0x18) * 4;
  lVar12 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  uVar20 = *(uint *)(&CAST_S_table6 + lVar1) ^ *(uint *)(&CAST_S_table5 + lVar4) ^
           *(uint *)(&CAST_S_table7 + lVar7) ^ *(uint *)(&CAST_S_table5 + lVar8) ^
           *(uint *)(&CAST_S_table4 + lVar12) ^ uVar20;
  local_88 = *(uint *)(&CAST_S_table7 + lVar6) ^ *(uint *)(&CAST_S_table6 + lVar3) ^
             *(uint *)(&CAST_S_table4 + lVar14) ^ *(uint *)(&CAST_S_table4 + lVar7) ^
             *(uint *)(&CAST_S_table5 + lVar8);
  lVar4 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar20 >> 8 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar20 >> 0x18) * 4;
  local_84 = *(uint *)(&CAST_S_table5 + lVar3) ^ *(uint *)(&CAST_S_table4 + lVar12) ^
             *(uint *)(&CAST_S_table7 + (ulonglong)(uVar16 >> 0x18) * 4) ^
             *(uint *)(&CAST_S_table6 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table5 + lVar1);
  uVar13 = *(uint *)(&CAST_S_table6 + lVar9) ^ *(uint *)(&CAST_S_table4 + lVar4) ^
           *(uint *)(&CAST_S_table7 + lVar6) ^ *(uint *)(&CAST_S_table6 + lVar7) ^
           *(uint *)(&CAST_S_table5 + (ulonglong)(uVar20 & 0xff) * 4) ^ uVar19;
  local_80 = *(uint *)(&CAST_S_table7 + lVar5) ^ *(uint *)(&CAST_S_table6 + lVar14) ^
             *(uint *)(&CAST_S_table4 + lVar9) ^ *(uint *)(&CAST_S_table5 + lVar4) ^
             *(uint *)(&CAST_S_table6 + lVar7);
  local_7c = *(uint *)(&CAST_S_table7 + lVar2) ^ *(uint *)(&CAST_S_table7 + lVar4) ^
             *(uint *)(&CAST_S_table4 + lVar6) ^
             *(uint *)(&CAST_S_table6 + (ulonglong)(uVar19 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table5 + (ulonglong)(uVar20 & 0xff) * 4);
  lVar14 = (ulonglong)(uVar13 >> 0x18) * 4;
  lVar2 = (ulonglong)(uVar13 >> 0x10 & 0xff) * 4;
  lVar3 = (ulonglong)(uVar13 >> 8 & 0xff) * 4;
  lVar4 = (ulonglong)(uVar13 & 0xff) * 4;
  uVar18 = *(uint *)(&CAST_S_table7 + lVar12) ^ *(uint *)(&CAST_S_table7 + lVar4) ^
           *(uint *)(&CAST_S_table5 + lVar3) ^ *(uint *)(&CAST_S_table4 + lVar14) ^ uVar18 ^
           *(uint *)(&CAST_S_table6 + lVar2);
  lVar5 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar18 >> 0x18) * 4;
  lVar7 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar18 & 0xff) * 4;
  uVar20 = *(uint *)(&CAST_S_table4 + lVar8) ^ *(uint *)(&CAST_S_table4 + lVar12) ^ uVar20 ^
           *(uint *)(&CAST_S_table5 + lVar5) ^ *(uint *)(&CAST_S_table6 + lVar7) ^
           *(uint *)(&CAST_S_table7 + lVar6);
  lVar8 = (ulonglong)(uVar20 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar20 >> 0x18) * 4;
  uVar16 = *(uint *)(&CAST_S_table6 + lVar8) ^ *(uint *)(&CAST_S_table7 + lVar10) ^
           *(uint *)(&CAST_S_table5 + lVar1) ^
           *(uint *)(&CAST_S_table4 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table5 + lVar9) ^ uVar16;
  local_78[0] = *(uint *)(&CAST_S_table4 + lVar10) ^ *(uint *)(&CAST_S_table6 + lVar12) ^
                *(uint *)(&CAST_S_table4 + lVar3) ^ *(uint *)(&CAST_S_table7 + lVar5) ^
                *(uint *)(&CAST_S_table5 + lVar9);
  lVar1 = (ulonglong)(uVar16 >> 0x18) * 4;
  local_78[1] = *(uint *)(&CAST_S_table5 + lVar8) ^
                *(uint *)(&CAST_S_table4 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
                *(uint *)(&CAST_S_table5 + lVar5) ^ *(uint *)(&CAST_S_table6 + lVar7) ^
                *(uint *)(&CAST_S_table7 + lVar6);
  local_78[2] = *(uint *)(&CAST_S_table5 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&CAST_S_table4 + lVar1) ^ *(uint *)(&CAST_S_table6 + lVar9) ^
                *(uint *)(&CAST_S_table6 + lVar4) ^ *(uint *)(&CAST_S_table7 + lVar3);
  uVar20 = *(uint *)(&CAST_S_table5 + lVar12) ^ *(uint *)(&CAST_S_table4 + lVar7) ^
           *(uint *)(&CAST_S_table6 + lVar6) ^ *(uint *)(&CAST_S_table6 + lVar14) ^ uVar20 ^
           *(uint *)(&CAST_S_table7 + lVar5);
  local_78[3] = *(uint *)(&CAST_S_table4 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
                *(uint *)(&CAST_S_table5 + (ulonglong)(uVar16 & 0xff) * 4) ^
                *(uint *)(&CAST_S_table7 + lVar1) ^ *(uint *)(&CAST_S_table7 + lVar14) ^
                *(uint *)(&CAST_S_table6 + lVar2);
  lVar14 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar1 = (ulonglong)(uVar20 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar20 >> 0x18) * 4;
  uVar13 = *(uint *)(&CAST_S_table4 + lVar5) ^ *(uint *)(&CAST_S_table6 + lVar14) ^
           *(uint *)(&CAST_S_table7 + lVar1) ^
           *(uint *)(&CAST_S_table5 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^ uVar13 ^
           *(uint *)(&CAST_S_table7 + lVar3);
  lVar3 = (ulonglong)(uVar13 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar13 >> 0x10 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar13 >> 0x18) * 4;
  uVar18 = *(uint *)(&CAST_S_table7 + lVar7) ^ *(uint *)(&CAST_S_table6 + lVar6) ^
           *(uint *)(&CAST_S_table4 + lVar2) ^
           *(uint *)(&CAST_S_table5 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table4 + lVar3) ^ uVar18;
  lVar2 = (ulonglong)(uVar18 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar18 >> 0x18) * 4;
  uVar16 = *(uint *)(&CAST_S_table6 + lVar2) ^ *(uint *)(&CAST_S_table5 + lVar8) ^
           *(uint *)(&CAST_S_table4 + lVar12) ^ *(uint *)(&CAST_S_table5 + lVar4) ^
           *(uint *)(&CAST_S_table7 + lVar9) ^ uVar16;
  lVar4 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  local_68 = *(uint *)(&CAST_S_table4 + lVar1) ^ *(uint *)(&CAST_S_table4 + lVar9) ^
             *(uint *)(&CAST_S_table7 + lVar10) ^
             *(uint *)(&CAST_S_table5 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table6 + (ulonglong)(uVar16 >> 0x18) * 4);
  uVar20 = *(uint *)(&CAST_S_table4 + lVar10) ^ *(uint *)(&CAST_S_table7 + lVar11) ^
           *(uint *)(&CAST_S_table5 + lVar4) ^ *(uint *)(&CAST_S_table6 + lVar9) ^
           *(uint *)(&CAST_S_table6 + (ulonglong)(uVar16 >> 0x18) * 4) ^ uVar20;
  local_64 = *(uint *)(&CAST_S_table5 + lVar5) ^ *(uint *)(&CAST_S_table4 + lVar14) ^
             *(uint *)(&CAST_S_table5 + lVar10) ^ *(uint *)(&CAST_S_table6 + lVar11) ^
             *(uint *)(&CAST_S_table7 + lVar4);
  local_60 = *(uint *)(&CAST_S_table6 + lVar1) ^ *(uint *)(&CAST_S_table7 + lVar8) ^
             *(uint *)(&CAST_S_table5 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table4 + lVar3) ^ *(uint *)(&CAST_S_table6 + lVar9);
  local_5c = *(uint *)(&CAST_S_table5 + lVar7) ^ *(uint *)(&CAST_S_table4 + lVar6) ^
             *(uint *)(&CAST_S_table7 + lVar3) ^ *(uint *)(&CAST_S_table7 + lVar2) ^
             *(uint *)(&CAST_S_table6 + lVar12);
  lVar14 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar1 = (ulonglong)(uVar20 >> 0x18) * 4;
  lVar3 = (ulonglong)(uVar20 >> 8 & 0xff) * 4;
  lVar4 = (ulonglong)(uVar20 & 0xff) * 4;
  uVar18 = *(uint *)(&CAST_S_table7 + lVar12) ^ *(uint *)(&CAST_S_table7 + lVar4) ^
           *(uint *)(&CAST_S_table6 + lVar14) ^ *(uint *)(&CAST_S_table4 + lVar1) ^ uVar18 ^
           *(uint *)(&CAST_S_table5 + lVar3);
  lVar5 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar18 >> 0x18) * 4;
  lVar7 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar18 & 0xff) * 4;
  uVar16 = *(uint *)(&CAST_S_table4 + lVar8) ^ *(uint *)(&CAST_S_table6 + lVar5) ^
           *(uint *)(&CAST_S_table7 + lVar6) ^ uVar16 ^ *(uint *)(&CAST_S_table4 + lVar12) ^
           *(uint *)(&CAST_S_table5 + lVar7);
  lVar8 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar16 >> 0x18) * 4;
  uVar13 = *(uint *)(&CAST_S_table5 + lVar2) ^ *(uint *)(&CAST_S_table6 + lVar8) ^
           *(uint *)(&CAST_S_table4 + lVar9) ^ *(uint *)(&CAST_S_table5 + lVar10) ^
           *(uint *)(&CAST_S_table7 + lVar11) ^ uVar13;
  lVar2 = (ulonglong)(uVar13 >> 0x18) * 4;
  local_58 = *(uint *)(&CAST_S_table7 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table6 + lVar2) ^ *(uint *)(&CAST_S_table4 + lVar10) ^
             *(uint *)(&CAST_S_table4 + lVar4) ^ *(uint *)(&CAST_S_table5 + lVar3);
  local_54 = *(uint *)(&CAST_S_table6 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table7 + (ulonglong)(uVar13 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table5 + lVar2) ^ *(uint *)(&CAST_S_table5 + lVar1) ^
             *(uint *)(&CAST_S_table4 + lVar14);
  local_50 = *(uint *)(&CAST_S_table7 + lVar10) ^ *(uint *)(&CAST_S_table6 + lVar11) ^
             *(uint *)(&CAST_S_table6 + lVar3) ^ *(uint *)(&CAST_S_table4 + lVar12) ^
             *(uint *)(&CAST_S_table5 + lVar7);
  local_4c = *(uint *)(&CAST_S_table7 + lVar8) ^ *(uint *)(&CAST_S_table6 + lVar9) ^
             *(uint *)(&CAST_S_table5 + lVar6) ^ *(uint *)(&CAST_S_table4 + lVar5) ^
             *(uint *)(&CAST_S_table7 + lVar7);
  uVar16 = *(uint *)(&CAST_S_table5 + lVar12) ^ *(uint *)(&CAST_S_table6 + lVar6) ^
           *(uint *)(&CAST_S_table6 + lVar1) ^ *(uint *)(&CAST_S_table4 + lVar5) ^ uVar16 ^
           *(uint *)(&CAST_S_table7 + lVar7);
  lVar1 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar16 >> 0x18) * 4;
  uVar20 = *(uint *)(&CAST_S_table4 + lVar5) ^ *(uint *)(&CAST_S_table5 + lVar2) ^
           *(uint *)(&CAST_S_table7 + lVar1) ^ *(uint *)(&CAST_S_table7 + lVar3) ^
           *(uint *)(&CAST_S_table6 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^ uVar20;
  lVar3 = (ulonglong)(uVar20 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar20 >> 8 & 0xff) * 4;
  lVar12 = 0;
  uVar18 = *(uint *)(&CAST_S_table5 + lVar6) ^ *(uint *)(&CAST_S_table4 + lVar3) ^
           *(uint *)(&CAST_S_table7 + (ulonglong)(uVar20 >> 0x18) * 4) ^
           *(uint *)(&CAST_S_table6 + (ulonglong)(uVar20 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table4 + lVar14) ^ uVar18;
  lVar14 = (ulonglong)(uVar18 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar18 >> 0x18) * 4;
  uVar13 = *(uint *)(&CAST_S_table6 + lVar14) ^ *(uint *)(&CAST_S_table5 + lVar4) ^
           *(uint *)(&CAST_S_table7 + lVar7) ^
           *(uint *)(&CAST_S_table5 + (ulonglong)(uVar18 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&CAST_S_table4 + (ulonglong)(uVar18 >> 8 & 0xff) * 4) ^ uVar13;
  local_48 = *(uint *)(&CAST_S_table7 + lVar6) ^ *(uint *)(&CAST_S_table6 + lVar3) ^
             *(uint *)(&CAST_S_table4 + lVar1) ^ *(uint *)(&CAST_S_table4 + lVar7) ^
             *(uint *)(&CAST_S_table5 + (ulonglong)(uVar18 >> 0x10 & 0xff) * 4);
  lVar4 = (ulonglong)(uVar13 >> 0x10 & 0xff) * 4;
  local_44 = *(uint *)(&CAST_S_table5 + lVar3) ^ *(uint *)(&CAST_S_table5 + lVar14) ^
             *(uint *)(&CAST_S_table4 + (ulonglong)(uVar18 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table7 + (ulonglong)(uVar20 >> 0x18) * 4) ^
             *(uint *)(&CAST_S_table6 + (ulonglong)(uVar20 >> 0x10 & 0xff) * 4);
  local_40 = *(uint *)(&CAST_S_table4 + (ulonglong)(uVar13 >> 0x18) * 4) ^
             *(uint *)(&CAST_S_table7 + lVar2) ^ *(uint *)(&CAST_S_table6 + lVar1) ^
             *(uint *)(&CAST_S_table6 + lVar7) ^ *(uint *)(&CAST_S_table5 + lVar4);
  local_3c = *(uint *)(&CAST_S_table5 + (ulonglong)(uVar13 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table4 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
             *(uint *)(&CAST_S_table7 + lVar5) ^ *(uint *)(&CAST_S_table7 + lVar4) ^
             *(uint *)(&CAST_S_table6 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4);
  puVar15 = local_b8;
  do {
    *(uint *)(lVar12 + param_1) = *puVar15;
    *(uint *)(lVar12 + 4 + param_1) = puVar15[0x10] - 0x10 & 0x1f;
    lVar12 = lVar12 + 8;
    puVar15 = puVar15 + 1;
  } while (lVar12 < 0x80);
  return;
}

