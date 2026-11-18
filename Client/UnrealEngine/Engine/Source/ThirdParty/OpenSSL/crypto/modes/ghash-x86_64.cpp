// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// gcm_gmult_4bit @ 140df9700

void gcm_gmult_4bit(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(byte)(*(byte *)((longlong)param_1 + 0xf) << 4);
  lVar1 = 0xe;
  uVar4 = *(ulonglong *)(param_2 + 8 + uVar7);
  uVar7 = *(ulonglong *)(param_2 + uVar7);
  uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0xf);
  uVar5 = uVar4;
  while( true ) {
    uVar6 = uVar2 & 0xfffffffffffffff0;
    uVar3 = uVar5 >> 4 ^ *(ulonglong *)(param_2 + 8 + uVar6);
    uVar2 = (ulonglong)*(byte *)((longlong)param_1 + lVar1);
    uVar6 = uVar7 >> 4 ^ *(ulonglong *)(param_2 + uVar6) ^
            *(ulonglong *)(&L_rem_4bit + (uVar4 & 0xf) * 8);
    uVar5 = (ulonglong)(byte)(*(byte *)((longlong)param_1 + lVar1) << 4);
    uVar4 = uVar3 ^ uVar7 << 0x3c;
    lVar1 = lVar1 + -1;
    if (lVar1 < 0) break;
    uVar4 = uVar4 >> 4 ^ *(ulonglong *)(param_2 + 8 + uVar5);
    uVar7 = uVar6 >> 4 ^ *(ulonglong *)(param_2 + uVar5) ^
            *(ulonglong *)(&L_rem_4bit + (uVar3 & 0xf) * 8);
    uVar5 = uVar4 ^ uVar6 << 0x3c;
  }
  uVar4 = uVar4 >> 4 ^ *(ulonglong *)(param_2 + 8 + uVar5);
  uVar3 = uVar6 >> 4 ^ *(ulonglong *)(param_2 + uVar5) ^
          *(ulonglong *)(&L_rem_4bit + (uVar3 & 0xf) * 8);
  uVar7 = (uVar4 ^ uVar6 << 0x3c) >> 4 ^ *(ulonglong *)(param_2 + 8 + (uVar2 & 0xfffffffffffffff0));
  uVar5 = uVar7 ^ uVar3 << 0x3c;
  uVar4 = uVar3 >> 4 ^ *(ulonglong *)(param_2 + (uVar2 & 0xfffffffffffffff0)) ^
          *(ulonglong *)(&L_rem_4bit + (uVar4 & 0xf) * 8);
  param_1[1] = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar7 << 0x38;
  *param_1 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
             (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
             (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  return;
}

// L$SEH_begin_gcm_gmult_4bit @ 140df970d

void L_SEH_begin_gcm_gmult_4bit(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(byte)(*(byte *)((longlong)param_1 + 0xf) << 4);
  lVar1 = 0xe;
  uVar4 = *(ulonglong *)(param_2 + 8 + uVar7);
  uVar7 = *(ulonglong *)(param_2 + uVar7);
  uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0xf);
  uVar5 = uVar4;
  while( true ) {
    uVar6 = uVar2 & 0xfffffffffffffff0;
    uVar3 = uVar5 >> 4 ^ *(ulonglong *)(param_2 + 8 + uVar6);
    uVar2 = (ulonglong)*(byte *)((longlong)param_1 + lVar1);
    uVar6 = uVar7 >> 4 ^ *(ulonglong *)(param_2 + uVar6) ^
            *(ulonglong *)(&L_rem_4bit + (uVar4 & 0xf) * 8);
    uVar5 = (ulonglong)(byte)(*(byte *)((longlong)param_1 + lVar1) << 4);
    uVar4 = uVar3 ^ uVar7 << 0x3c;
    lVar1 = lVar1 + -1;
    if (lVar1 < 0) break;
    uVar4 = uVar4 >> 4 ^ *(ulonglong *)(param_2 + 8 + uVar5);
    uVar7 = uVar6 >> 4 ^ *(ulonglong *)(param_2 + uVar5) ^
            *(ulonglong *)(&L_rem_4bit + (uVar3 & 0xf) * 8);
    uVar5 = uVar4 ^ uVar6 << 0x3c;
  }
  uVar4 = uVar4 >> 4 ^ *(ulonglong *)(param_2 + 8 + uVar5);
  uVar3 = uVar6 >> 4 ^ *(ulonglong *)(param_2 + uVar5) ^
          *(ulonglong *)(&L_rem_4bit + (uVar3 & 0xf) * 8);
  uVar7 = (uVar4 ^ uVar6 << 0x3c) >> 4 ^ *(ulonglong *)(param_2 + 8 + (uVar2 & 0xfffffffffffffff0));
  uVar5 = uVar7 ^ uVar3 << 0x3c;
  uVar4 = uVar3 >> 4 ^ *(ulonglong *)(param_2 + (uVar2 & 0xfffffffffffffff0)) ^
          *(ulonglong *)(&L_rem_4bit + (uVar4 & 0xf) * 8);
  param_1[1] = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar7 << 0x38;
  *param_1 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
             (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
             (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  return;
}

// gcm_ghash_4bit @ 140df9840

void gcm_ghash_4bit(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  byte abStack_148 [4];
  char cStack_144;
  char cStack_143;
  char cStack_142;
  char cStack_141;
  char cStack_140;
  char cStack_13f;
  char cStack_13e;
  char cStack_13d;
  char cStack_13c;
  char cStack_13b;
  char cStack_13a;
  char cStack_139;
  ulonglong auStack_138 [4];
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong auStack_b8 [4];
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  abStack_148[0] = (char)param_2[1] << 4;
  auStack_b8[0] = *param_2 >> 4;
  auStack_138[0] = param_2[1] >> 4 | *param_2 << 0x3c;
  abStack_148[1] = (char)param_2[3] << 4;
  auStack_b8[1] = param_2[2] >> 4;
  auStack_138[1] = param_2[3] >> 4 | param_2[2] << 0x3c;
  abStack_148[2] = (char)param_2[5] << 4;
  auStack_b8[2] = param_2[4] >> 4;
  auStack_138[2] = param_2[5] >> 4 | param_2[4] << 0x3c;
  abStack_148[3] = (char)param_2[7] << 4;
  auStack_b8[3] = param_2[6] >> 4;
  auStack_138[3] = param_2[7] >> 4 | param_2[6] << 0x3c;
  cStack_144 = (char)param_2[9] << 4;
  uStack_98 = param_2[8] >> 4;
  uStack_118 = param_2[9] >> 4 | param_2[8] << 0x3c;
  cStack_143 = (char)param_2[0xb] << 4;
  uStack_90 = param_2[10] >> 4;
  uStack_110 = param_2[0xb] >> 4 | param_2[10] << 0x3c;
  cStack_142 = (char)param_2[0xd] << 4;
  uStack_88 = param_2[0xc] >> 4;
  uStack_108 = param_2[0xd] >> 4 | param_2[0xc] << 0x3c;
  cStack_141 = (char)param_2[0xf] << 4;
  uStack_80 = param_2[0xe] >> 4;
  uStack_100 = param_2[0xf] >> 4 | param_2[0xe] << 0x3c;
  cStack_140 = (char)param_2[0x11] << 4;
  uStack_78 = param_2[0x10] >> 4;
  uStack_f8 = param_2[0x11] >> 4 | param_2[0x10] << 0x3c;
  cStack_13f = (char)param_2[0x13] << 4;
  uStack_70 = param_2[0x12] >> 4;
  uStack_f0 = param_2[0x13] >> 4 | param_2[0x12] << 0x3c;
  cStack_13e = (char)param_2[0x15] << 4;
  uStack_68 = param_2[0x14] >> 4;
  uStack_e8 = param_2[0x15] >> 4 | param_2[0x14] << 0x3c;
  cStack_13d = (char)param_2[0x17] << 4;
  uStack_60 = param_2[0x16] >> 4;
  uStack_e0 = param_2[0x17] >> 4 | param_2[0x16] << 0x3c;
  cStack_13c = (char)param_2[0x19] << 4;
  uStack_58 = param_2[0x18] >> 4;
  uStack_d8 = param_2[0x19] >> 4 | param_2[0x18] << 0x3c;
  cStack_13b = (char)param_2[0x1b] << 4;
  uStack_50 = param_2[0x1a] >> 4;
  uStack_d0 = param_2[0x1b] >> 4 | param_2[0x1a] << 0x3c;
  cStack_13a = (char)param_2[0x1d] << 4;
  uStack_48 = param_2[0x1c] >> 4;
  uStack_c8 = param_2[0x1d] >> 4 | param_2[0x1c] << 0x3c;
  cStack_139 = (char)param_2[0x1f] << 4;
  uStack_40 = param_2[0x1e] >> 4;
  uStack_c0 = param_2[0x1f] >> 4 | param_2[0x1e] << 0x3c;
  uVar4 = param_1[1];
  uVar9 = *param_1;
  puVar13 = (ulonglong *)(param_4 + (longlong)param_3);
  do {
    uVar10 = *param_3;
    puVar1 = param_3 + 1;
    param_3 = param_3 + 2;
    uVar4 = *puVar1 ^ uVar4;
    *param_1 = uVar9 ^ uVar10;
    param_1[1] = uVar4;
    uVar3 = (uint)(uVar4 >> 0x20);
    uVar10 = (ulonglong)(byte)((char)(uVar4 >> 0x38) << 4);
    uVar5 = uVar3 >> 0x1c;
    uVar9 = *(ulonglong *)((longlong)param_2 + uVar10 + 8);
    uVar10 = *(ulonglong *)((longlong)param_2 + uVar10);
    uVar8 = (ulonglong)(byte)((char)((uVar3 & 0xffffff) >> 0x10) << 4);
    uVar2 = (uVar3 & 0xffffff) >> 0x14;
    uVar6 = uVar3 << 8 & 0xffffff;
    uVar11 = uVar10 >> 8 ^ auStack_b8[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar8);
    uVar8 = uVar9 >> 8 ^ auStack_138[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar8 + 8) ^
            uVar10 << 0x38;
    uVar10 = (ulonglong)(byte)((char)(uVar6 >> 0x10) << 4);
    uVar6 = uVar6 >> 0x14;
    uVar12 = (uVar11 ^ (ulonglong)
                       *(ushort *)(&L_rem_8bit + ((abStack_148[uVar5] ^ uVar9) & 0xff) * 2) << 0x30)
             >> 8 ^ auStack_b8[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar10);
    uVar9 = uVar8 >> 8 ^ auStack_138[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar10 + 8) ^
            uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar4 >> 0x20) << 4);
    uVar5 = (uVar3 << 8 & 0xffff) >> 0xc;
    uVar3 = (uint)param_1[1];
    uVar8 = (uVar12 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar2] ^ uVar8) & 0xff) * 2) << 0x30)
            >> 8 ^ auStack_b8[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ auStack_138[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar12 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar6] ^ uVar9) & 0xff) * 2) << 0x30)
             >> 8 ^ auStack_b8[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ auStack_138[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)((uVar3 & 0xffffff) >> 0x10) << 4);
    uVar2 = (uVar3 & 0xffffff) >> 0x14;
    uVar6 = uVar3 << 8 & 0xffffff;
    uVar8 = (uVar11 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar5] ^ uVar10) & 0xff) * 2) << 0x30)
            >> 8 ^ auStack_b8[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ auStack_138[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar6 >> 0x10) << 4);
    uVar6 = uVar6 >> 0x14;
    uVar11 = (uVar8 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar7] ^ uVar9) & 0xff) * 2) << 0x30)
             >> 8 ^ auStack_b8[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ auStack_138[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)uVar3 << 4);
    uVar5 = (uVar3 << 8 & 0xffff) >> 0xc;
    uVar3 = *(uint *)((longlong)param_1 + 4);
    uVar8 = (uVar11 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar2] ^ uVar10) & 0xff) * 2) << 0x30)
            >> 8 ^ auStack_b8[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ auStack_138[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar6] ^ uVar9) & 0xff) * 2) << 0x30)
             >> 8 ^ auStack_b8[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ auStack_138[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)((uVar3 & 0xffffff) >> 0x10) << 4);
    uVar2 = (uVar3 & 0xffffff) >> 0x14;
    uVar6 = uVar3 << 8 & 0xffffff;
    uVar8 = (uVar11 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar5] ^ uVar10) & 0xff) * 2) << 0x30)
            >> 8 ^ auStack_b8[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ auStack_138[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar6 >> 0x10) << 4);
    uVar6 = uVar6 >> 0x14;
    uVar11 = (uVar8 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar7] ^ uVar9) & 0xff) * 2) << 0x30)
             >> 8 ^ auStack_b8[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ auStack_138[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)uVar3 << 4);
    uVar5 = (uVar3 << 8 & 0xffff) >> 0xc;
    uVar3 = (uint)*param_1;
    uVar8 = (uVar11 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar2] ^ uVar10) & 0xff) * 2) << 0x30)
            >> 8 ^ auStack_b8[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ auStack_138[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar6] ^ uVar9) & 0xff) * 2) << 0x30)
             >> 8 ^ auStack_b8[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ auStack_138[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)((uVar3 & 0xffffff) >> 0x10) << 4);
    uVar2 = (uVar3 & 0xffffff) >> 0x14;
    uVar6 = uVar3 << 8 & 0xffffff;
    uVar8 = (uVar11 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar5] ^ uVar10) & 0xff) * 2) << 0x30)
            >> 8 ^ auStack_b8[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ auStack_138[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar6 >> 0x10) << 4);
    uVar6 = uVar6 >> 0x14;
    uVar12 = (uVar8 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar7] ^ uVar9) & 0xff) * 2) << 0x30)
             >> 8 ^ auStack_b8[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar8 = uVar10 >> 8 ^ auStack_138[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)uVar3 << 4);
    uVar9 = (ulonglong)((uVar3 << 8 & 0xf000) >> 8);
    uVar11 = uVar8 >> 8 ^ auStack_138[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8);
    uVar10 = (uVar12 ^ (ulonglong)
                       *(ushort *)(&L_rem_8bit + ((abStack_148[uVar2] ^ uVar10) & 0xff) * 2) << 0x30
             ) >> 8 ^ auStack_b8[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar4 = (uVar11 ^ uVar12 << 0x38) >> 4 ^ *(ulonglong *)((longlong)param_2 + uVar9 + 8);
    uVar8 = (uVar10 ^ (ulonglong)
                      *(ushort *)(&L_rem_8bit + ((abStack_148[uVar6] ^ uVar8) & 0xff) * 2) << 0x30)
            >> 4 ^ *(ulonglong *)((longlong)param_2 + uVar9);
    uVar9 = uVar4 ^ uVar10 << 0x3c;
    uVar4 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar4 << 0x38;
    uVar9 = uVar8 ^ (ulonglong)*(ushort *)(&L_rem_8bit + (ulonglong)(byte)((char)uVar11 << 4) * 2)
                    << 0x30;
    uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar8 << 0x38;
  } while (param_3 < puVar13);
  param_1[1] = uVar4;
  *param_1 = uVar9;
  return;
}

// L$SEH_begin_gcm_ghash_4bit @ 140df984d

void L_SEH_begin_gcm_ghash_4bit
               (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  byte local_148 [4];
  char local_144;
  char local_143;
  char local_142;
  char local_141;
  char local_140;
  char local_13f;
  char local_13e;
  char local_13d;
  char local_13c;
  char local_13b;
  char local_13a;
  char local_139;
  ulonglong local_138 [4];
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8 [4];
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_148[0] = (char)param_2[1] << 4;
  local_b8[0] = *param_2 >> 4;
  local_138[0] = param_2[1] >> 4 | *param_2 << 0x3c;
  local_148[1] = (char)param_2[3] << 4;
  local_b8[1] = param_2[2] >> 4;
  local_138[1] = param_2[3] >> 4 | param_2[2] << 0x3c;
  local_148[2] = (char)param_2[5] << 4;
  local_b8[2] = param_2[4] >> 4;
  local_138[2] = param_2[5] >> 4 | param_2[4] << 0x3c;
  local_148[3] = (char)param_2[7] << 4;
  local_b8[3] = param_2[6] >> 4;
  local_138[3] = param_2[7] >> 4 | param_2[6] << 0x3c;
  local_144 = (char)param_2[9] << 4;
  local_98 = param_2[8] >> 4;
  local_118 = param_2[9] >> 4 | param_2[8] << 0x3c;
  local_143 = (char)param_2[0xb] << 4;
  local_90 = param_2[10] >> 4;
  local_110 = param_2[0xb] >> 4 | param_2[10] << 0x3c;
  local_142 = (char)param_2[0xd] << 4;
  local_88 = param_2[0xc] >> 4;
  local_108 = param_2[0xd] >> 4 | param_2[0xc] << 0x3c;
  local_141 = (char)param_2[0xf] << 4;
  local_80 = param_2[0xe] >> 4;
  local_100 = param_2[0xf] >> 4 | param_2[0xe] << 0x3c;
  local_140 = (char)param_2[0x11] << 4;
  local_78 = param_2[0x10] >> 4;
  local_f8 = param_2[0x11] >> 4 | param_2[0x10] << 0x3c;
  local_13f = (char)param_2[0x13] << 4;
  local_70 = param_2[0x12] >> 4;
  local_f0 = param_2[0x13] >> 4 | param_2[0x12] << 0x3c;
  local_13e = (char)param_2[0x15] << 4;
  local_68 = param_2[0x14] >> 4;
  local_e8 = param_2[0x15] >> 4 | param_2[0x14] << 0x3c;
  local_13d = (char)param_2[0x17] << 4;
  local_60 = param_2[0x16] >> 4;
  local_e0 = param_2[0x17] >> 4 | param_2[0x16] << 0x3c;
  local_13c = (char)param_2[0x19] << 4;
  local_58 = param_2[0x18] >> 4;
  local_d8 = param_2[0x19] >> 4 | param_2[0x18] << 0x3c;
  local_13b = (char)param_2[0x1b] << 4;
  local_50 = param_2[0x1a] >> 4;
  local_d0 = param_2[0x1b] >> 4 | param_2[0x1a] << 0x3c;
  local_13a = (char)param_2[0x1d] << 4;
  local_48 = param_2[0x1c] >> 4;
  local_c8 = param_2[0x1d] >> 4 | param_2[0x1c] << 0x3c;
  local_139 = (char)param_2[0x1f] << 4;
  local_40 = param_2[0x1e] >> 4;
  local_c0 = param_2[0x1f] >> 4 | param_2[0x1e] << 0x3c;
  uVar4 = param_1[1];
  uVar9 = *param_1;
  puVar13 = (ulonglong *)(param_4 + (longlong)param_3);
  do {
    uVar10 = *param_3;
    puVar1 = param_3 + 1;
    param_3 = param_3 + 2;
    uVar4 = *puVar1 ^ uVar4;
    *param_1 = uVar9 ^ uVar10;
    param_1[1] = uVar4;
    uVar3 = (uint)(uVar4 >> 0x20);
    uVar10 = (ulonglong)(byte)((char)(uVar4 >> 0x38) << 4);
    uVar5 = uVar3 >> 0x1c;
    uVar9 = *(ulonglong *)((longlong)param_2 + uVar10 + 8);
    uVar10 = *(ulonglong *)((longlong)param_2 + uVar10);
    uVar8 = (ulonglong)(byte)((char)((uVar3 & 0xffffff) >> 0x10) << 4);
    uVar2 = (uVar3 & 0xffffff) >> 0x14;
    uVar6 = uVar3 << 8 & 0xffffff;
    uVar11 = uVar10 >> 8 ^ local_b8[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar8);
    uVar8 = uVar9 >> 8 ^ local_138[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar8 + 8) ^
            uVar10 << 0x38;
    uVar10 = (ulonglong)(byte)((char)(uVar6 >> 0x10) << 4);
    uVar6 = uVar6 >> 0x14;
    uVar12 = (uVar11 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar5] ^ uVar9) & 0xff) * 2)
                       << 0x30) >> 8 ^ local_b8[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar10);
    uVar9 = uVar8 >> 8 ^ local_138[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar10 + 8) ^
            uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar4 >> 0x20) << 4);
    uVar5 = (uVar3 << 8 & 0xffff) >> 0xc;
    uVar3 = (uint)param_1[1];
    uVar8 = (uVar12 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar2] ^ uVar8) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar12 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar6] ^ uVar9) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)((uVar3 & 0xffffff) >> 0x10) << 4);
    uVar2 = (uVar3 & 0xffffff) >> 0x14;
    uVar6 = uVar3 << 8 & 0xffffff;
    uVar8 = (uVar11 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar5] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar6 >> 0x10) << 4);
    uVar6 = uVar6 >> 0x14;
    uVar11 = (uVar8 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar7] ^ uVar9) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)uVar3 << 4);
    uVar5 = (uVar3 << 8 & 0xffff) >> 0xc;
    uVar3 = *(uint *)((longlong)param_1 + 4);
    uVar8 = (uVar11 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar2] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar6] ^ uVar9) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)((uVar3 & 0xffffff) >> 0x10) << 4);
    uVar2 = (uVar3 & 0xffffff) >> 0x14;
    uVar6 = uVar3 << 8 & 0xffffff;
    uVar8 = (uVar11 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar5] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar6 >> 0x10) << 4);
    uVar6 = uVar6 >> 0x14;
    uVar11 = (uVar8 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar7] ^ uVar9) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)uVar3 << 4);
    uVar5 = (uVar3 << 8 & 0xffff) >> 0xc;
    uVar3 = (uint)*param_1;
    uVar8 = (uVar11 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar2] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar3 >> 0x18) << 4);
    uVar7 = uVar3 >> 0x1c;
    uVar11 = (uVar8 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar6] ^ uVar9) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar9 = uVar10 >> 8 ^ local_138[uVar5] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)((uVar3 & 0xffffff) >> 0x10) << 4);
    uVar2 = (uVar3 & 0xffffff) >> 0x14;
    uVar6 = uVar3 << 8 & 0xffffff;
    uVar8 = (uVar11 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar5] ^ uVar10) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar10 = uVar9 >> 8 ^ local_138[uVar7] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
             uVar11 << 0x38;
    uVar4 = (ulonglong)(byte)((char)(uVar6 >> 0x10) << 4);
    uVar6 = uVar6 >> 0x14;
    uVar12 = (uVar8 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar7] ^ uVar9) & 0xff) * 2)
                      << 0x30) >> 8 ^ local_b8[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar8 = uVar10 >> 8 ^ local_138[uVar2] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8) ^
            uVar8 << 0x38;
    uVar4 = (ulonglong)(byte)((char)uVar3 << 4);
    uVar9 = (ulonglong)((uVar3 << 8 & 0xf000) >> 8);
    uVar11 = uVar8 >> 8 ^ local_138[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4 + 8);
    uVar10 = (uVar12 ^ (ulonglong)
                       *(ushort *)(&L_rem_8bit + ((local_148[uVar2] ^ uVar10) & 0xff) * 2) << 0x30)
             >> 8 ^ local_b8[uVar6] ^ *(ulonglong *)((longlong)param_2 + uVar4);
    uVar4 = (uVar11 ^ uVar12 << 0x38) >> 4 ^ *(ulonglong *)((longlong)param_2 + uVar9 + 8);
    uVar8 = (uVar10 ^ (ulonglong)*(ushort *)(&L_rem_8bit + ((local_148[uVar6] ^ uVar8) & 0xff) * 2)
                      << 0x30) >> 4 ^ *(ulonglong *)((longlong)param_2 + uVar9);
    uVar9 = uVar4 ^ uVar10 << 0x3c;
    uVar4 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar4 << 0x38;
    uVar9 = uVar8 ^ (ulonglong)*(ushort *)(&L_rem_8bit + (ulonglong)(byte)((char)uVar11 << 4) * 2)
                    << 0x30;
    uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
            (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
            (uVar9 & 0xff00) << 0x28 | uVar8 << 0x38;
  } while (param_3 < puVar13);
  param_1[1] = uVar4;
  *param_1 = uVar9;
  return;
}

// gcm_init_clmul @ 140dfa070

/* WARNING: Removing unreachable block (ram,0x000140dfa272) */
/* WARNING: Removing unreachable block (ram,0x000140dfa242) */
/* WARNING: Removing unreachable block (ram,0x000140dfa1d9) */
/* WARNING: Removing unreachable block (ram,0x000140dfa1a9) */
/* WARNING: Removing unreachable block (ram,0x000140dfa11e) */
/* WARNING: Removing unreachable block (ram,0x000140dfa0ee) */
/* WARNING: Removing unreachable block (ram,0x000140dfa09c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gcm_init_clmul(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  ulonglong uVar58;
  ulonglong uVar59;
  
  auVar28 = *param_2;
  iVar46 = auVar28._4_4_;
  auVar45._0_8_ = auVar28._8_8_;
  auVar45._8_4_ = auVar28._0_4_;
  auVar45._12_4_ = iVar46;
  auVar44._0_8_ = auVar45._0_8_ << 1;
  auVar44._8_8_ = auVar45._8_8_ << 1;
  auVar57._0_4_ = -(uint)(iVar46 < 0);
  auVar57._4_4_ = -(uint)(iVar46 < 0);
  auVar57._8_4_ = -(uint)(iVar46 < 0);
  auVar57._12_4_ = -(uint)(iVar46 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar45 = (auVar44 | (auVar28 >> 0x7f) << 0x40) ^ auVar57 & _L_0x1c2_polynomial;
  uVar58 = auVar45._8_8_;
  uVar21 = auVar45._0_8_;
  uVar59 = uVar58 ^ uVar21;
  auVar47._8_4_ = auVar45._0_4_;
  auVar47._0_8_ = uVar58;
  auVar47._12_4_ = auVar45._4_4_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar21;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar21;
  auVar28 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar28 = auVar28 ^ auVar48 << uVar3;
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar58;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar58;
  auVar4 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar15 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar4 = auVar4 ^ auVar18 << uVar3;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = SUB168(auVar47 ^ auVar45,0);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar59;
  auVar48 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar5 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar48 = auVar48 ^ auVar10 << uVar3;
    }
  }
  auVar48 = auVar48 ^ auVar28 ^ auVar4;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = auVar48._0_8_;
  auVar28 = auVar28 ^ auVar22 << 0x40;
  auVar29._0_8_ = auVar28._0_8_ << 5;
  auVar29._8_8_ = auVar28._8_8_ << 5;
  auVar30._0_8_ = auVar28._0_8_ << 6;
  auVar30._8_8_ = auVar28._8_8_ << 6;
  auVar30 = auVar30 ^ auVar28 ^ auVar29;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = auVar30._0_8_ << 0x39;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = auVar30._8_8_ << 0x39;
  auVar28 = auVar23 << 0x40 ^ auVar28;
  auVar31._0_8_ = auVar28._0_8_ >> 1;
  auVar31._8_8_ = auVar28._8_8_ >> 1;
  auVar32._0_8_ = auVar28._0_8_ >> 6;
  auVar32._8_8_ = auVar28._8_8_ >> 6;
  auVar32 = auVar32 ^ auVar28 ^ auVar31;
  auVar33._0_8_ = auVar32._0_8_ >> 1;
  auVar33._8_8_ = auVar32._8_8_ >> 1;
  auVar33 = auVar33 ^ auVar4 ^ auVar48 >> 0x40 ^ auVar49 ^ auVar28;
  auVar28._8_4_ = auVar45._0_4_;
  auVar28._0_8_ = uVar58;
  auVar28._12_4_ = auVar45._4_4_;
  auVar55._0_8_ = auVar33._8_8_;
  auVar55._8_4_ = auVar33._0_4_;
  auVar55._12_4_ = auVar33._4_4_;
  *param_1 = auVar45;
  param_1[1] = auVar33;
  auVar1._16_16_ = auVar55 ^ auVar33;
  auVar1._0_16_ = auVar28 ^ auVar45;
  param_1[2] = auVar1._8_16_;
  auVar50._8_4_ = auVar33._0_4_;
  auVar50._0_8_ = auVar55._0_8_;
  auVar50._12_4_ = auVar33._4_4_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar33._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar21;
  auVar28 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar6 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar28 = auVar28 ^ auVar11 << uVar3;
    }
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = auVar55._0_8_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar58;
  auVar4 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar16 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar4 = auVar4 ^ auVar19 << uVar3;
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar50 ^ auVar33,0);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar59;
  auVar48 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar7 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar48 = auVar48 ^ auVar12 << uVar3;
    }
  }
  auVar48 = auVar48 ^ auVar28 ^ auVar4;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = auVar48._0_8_;
  auVar28 = auVar28 ^ auVar24 << 0x40;
  auVar34._0_8_ = auVar28._0_8_ << 5;
  auVar34._8_8_ = auVar28._8_8_ << 5;
  auVar35._0_8_ = auVar28._0_8_ << 6;
  auVar35._8_8_ = auVar28._8_8_ << 6;
  auVar35 = auVar35 ^ auVar28 ^ auVar34;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = auVar35._0_8_ << 0x39;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = auVar35._8_8_ << 0x39;
  auVar28 = auVar25 << 0x40 ^ auVar28;
  auVar36._0_8_ = auVar28._0_8_ >> 1;
  auVar36._8_8_ = auVar28._8_8_ >> 1;
  auVar37._0_8_ = auVar28._0_8_ >> 6;
  auVar37._8_8_ = auVar28._8_8_ >> 6;
  auVar37 = auVar37 ^ auVar28 ^ auVar36;
  auVar38._0_8_ = auVar37._0_8_ >> 1;
  auVar38._8_8_ = auVar37._8_8_ >> 1;
  auVar38 = auVar38 ^ auVar4 ^ auVar48 >> 0x40 ^ auVar51 ^ auVar28;
  auVar52._0_8_ = auVar38._8_8_;
  auVar52._8_4_ = auVar38._0_4_;
  auVar52._12_4_ = auVar38._4_4_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar38._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar21;
  auVar28 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar8 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar28 = auVar28 ^ auVar13 << uVar3;
    }
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar52._0_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar58;
  auVar4 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar17 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar4 = auVar4 ^ auVar20 << uVar3;
    }
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar52 ^ auVar38,0);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar59;
  auVar48 = (undefined1  [16])0x0;
  for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    if ((auVar9 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
      auVar48 = auVar48 ^ auVar14 << uVar3;
    }
  }
  auVar48 = auVar48 ^ auVar28 ^ auVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = auVar48._0_8_;
  auVar28 = auVar28 ^ auVar26 << 0x40;
  auVar39._0_8_ = auVar28._0_8_ << 5;
  auVar39._8_8_ = auVar28._8_8_ << 5;
  auVar40._0_8_ = auVar28._0_8_ << 6;
  auVar40._8_8_ = auVar28._8_8_ << 6;
  auVar40 = auVar40 ^ auVar28 ^ auVar39;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = auVar40._0_8_ << 0x39;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = auVar40._8_8_ << 0x39;
  auVar28 = auVar27 << 0x40 ^ auVar28;
  auVar41._0_8_ = auVar28._0_8_ >> 1;
  auVar41._8_8_ = auVar28._8_8_ >> 1;
  auVar42._0_8_ = auVar28._0_8_ >> 6;
  auVar42._8_8_ = auVar28._8_8_ >> 6;
  auVar42 = auVar42 ^ auVar28 ^ auVar41;
  auVar43._0_8_ = auVar42._0_8_ >> 1;
  auVar43._8_8_ = auVar42._8_8_ >> 1;
  auVar43 = auVar43 ^ auVar4 ^ auVar48 >> 0x40 ^ auVar53 ^ auVar28;
  auVar54._8_4_ = auVar38._0_4_;
  auVar54._0_8_ = auVar52._0_8_;
  auVar54._12_4_ = auVar38._4_4_;
  auVar56._0_8_ = auVar43._8_8_;
  auVar56._8_4_ = auVar43._0_4_;
  auVar56._12_4_ = auVar43._4_4_;
  param_1[3] = auVar38;
  param_1[4] = auVar43;
  auVar2._16_16_ = auVar56 ^ auVar43;
  auVar2._0_16_ = auVar54 ^ auVar38;
  param_1[5] = auVar2._8_16_;
  return;
}

// L$SEH_begin_gcm_ghash_clmul @ 140dfa3a8

/* WARNING: Removing unreachable block (ram,0x000140dfa9e6) */
/* WARNING: Removing unreachable block (ram,0x000140dfa9b6) */
/* WARNING: Removing unreachable block (ram,0x000140dfa938) */
/* WARNING: Removing unreachable block (ram,0x000140dfa907) */
/* WARNING: Removing unreachable block (ram,0x000140dfa822) */
/* WARNING: Removing unreachable block (ram,0x000140dfa714) */
/* WARNING: Removing unreachable block (ram,0x000140dfa6e1) */
/* WARNING: Removing unreachable block (ram,0x000140dfa5df) */
/* WARNING: Removing unreachable block (ram,0x000140dfa599) */
/* WARNING: Removing unreachable block (ram,0x000140dfa862) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_gcm_ghash_clmul
               (undefined1 (*param_1) [16],ulonglong *param_2,undefined1 (*param_3) [16],
               longlong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  ulonglong uVar85;
  undefined1 auVar86 [16];
  ulonglong uVar87;
  undefined8 *in_RAX;
  ulonglong uVar88;
  ulonglong uVar89;
  ulonglong uVar90;
  bool bVar91;
  ulonglong uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  uint uVar120;
  uint uVar126;
  uint uVar127;
  undefined1 auVar121 [16];
  uint uVar128;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  uint uVar136;
  uint uVar137;
  uint uVar138;
  uint uVar139;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  ulonglong uVar140;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar149 [16];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  
  in_RAX[-4] = unaff_XMM6_Qa;
  in_RAX[-3] = unaff_XMM6_Qb;
  in_RAX[-2] = unaff_XMM7_Qa;
  in_RAX[-1] = unaff_XMM7_Qb;
  *in_RAX = unaff_XMM8_Qa;
  in_RAX[1] = unaff_XMM8_Qb;
  in_RAX[2] = unaff_XMM9_Qa;
  in_RAX[3] = unaff_XMM9_Qb;
  in_RAX[4] = unaff_XMM10_Qa;
  in_RAX[5] = unaff_XMM10_Qb;
  in_RAX[6] = unaff_XMM11_Qa;
  in_RAX[7] = unaff_XMM11_Qb;
  in_RAX[8] = unaff_XMM12_Qa;
  in_RAX[9] = unaff_XMM12_Qb;
  in_RAX[10] = unaff_XMM13_Qa;
  in_RAX[0xb] = unaff_XMM13_Qb;
  in_RAX[0xc] = unaff_XMM14_Qa;
  in_RAX[0xd] = unaff_XMM14_Qb;
  in_RAX[0xe] = unaff_XMM15_Qa;
  in_RAX[0xf] = unaff_XMM15_Qb;
  uVar82 = *param_2;
  uVar83 = param_2[1];
  uVar140 = param_2[4];
  uVar92 = param_2[5];
  auVar93 = pshufb(*param_1,_L_bswap_mask);
  uVar88 = param_4 - 0x10;
  if (uVar88 != 0) {
    uVar84 = param_2[2];
    uVar85 = param_2[3];
    if ((0x2f < uVar88) && ((DAT_15540a9f4 & 0x4400000) != 0x400000)) {
      auVar121 = pshufb(param_3[3],_L_bswap_mask);
      auVar150 = pshufb(param_3[2],_L_bswap_mask);
      auVar149._0_8_ = auVar121._8_8_;
      auVar149._8_4_ = auVar121._0_4_;
      auVar149._12_4_ = auVar121._4_4_;
      auVar152._8_8_ = 0;
      auVar152._0_8_ = auVar121._0_8_;
      auVar141._8_8_ = 0;
      auVar141._0_8_ = uVar82;
      auVar147 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar152 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar147 = auVar147 ^ auVar141 << uVar120;
        }
      }
      auVar151._8_8_ = 0;
      auVar151._0_8_ = auVar149._0_8_;
      auVar145._8_8_ = 0;
      auVar145._0_8_ = uVar83;
      auVar152 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar151 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar152 = auVar152 ^ auVar145 << uVar120;
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(auVar149 ^ auVar121,0);
      auVar121._8_8_ = 0;
      auVar121._0_8_ = uVar140;
      auVar141 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar2 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar141 = auVar141 ^ auVar121 << uVar120;
        }
      }
      auVar153._0_8_ = auVar150._8_8_;
      auVar153._8_4_ = auVar150._0_4_;
      auVar153._12_4_ = auVar150._4_4_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar150._0_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar84;
      auVar121 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar3 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar121 = auVar121 ^ auVar19 << uVar120;
        }
      }
      auVar49._8_8_ = 0;
      auVar49._0_8_ = auVar153._0_8_;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = uVar85;
      auVar149 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar49 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar149 = auVar149 ^ auVar61 << uVar120;
        }
      }
      auVar37._8_8_ = 0;
      auVar37._0_8_ = SUB168(auVar153 ^ auVar150,0);
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar92;
      auVar150 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar37 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar150 = auVar150 ^ auVar43 << uVar120;
        }
      }
      uVar140 = param_2[0xb];
      auVar130._0_4_ = auVar141._0_4_ ^ auVar150._0_4_;
      auVar130._4_4_ = auVar141._4_4_ ^ auVar150._4_4_;
      auVar130._8_4_ = auVar141._8_4_ ^ auVar150._8_4_;
      auVar130._12_4_ = auVar141._12_4_ ^ auVar150._12_4_;
      auVar151 = pshufb(param_3[1],_L_bswap_mask);
      auVar141 = pshufb(*param_3,_L_bswap_mask);
      auVar154._0_8_ = auVar151._8_8_;
      auVar154._8_4_ = auVar151._0_4_;
      auVar154._12_4_ = auVar151._4_4_;
      auVar93 = auVar93 ^ auVar141;
      uVar92 = auVar93._0_8_;
      auVar150._8_8_ = 0;
      auVar150._0_8_ = auVar151._0_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = param_2[6];
      auVar141 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar150 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar141 = auVar141 ^ auVar20 << uVar120;
        }
      }
      auVar142._0_8_ = auVar93._8_8_;
      auVar142._8_4_ = auVar93._0_4_;
      auVar142._12_4_ = auVar93._4_4_;
      auVar142 = auVar142 ^ auVar93;
      uVar90 = auVar142._0_8_;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = auVar154._0_8_;
      auVar62._8_8_ = 0;
      auVar62._0_8_ = param_2[7];
      auVar150 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar50 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar150 = auVar150 ^ auVar62 << uVar120;
        }
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(auVar154 ^ auVar151,0);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = param_2[10];
      auVar151 = (undefined1  [16])0x0;
      for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
        if ((auVar4 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
          auVar151 = auVar151 ^ auVar21 << uVar120;
        }
      }
      uVar120 = auVar147._0_4_ ^ auVar121._0_4_ ^ auVar141._0_4_;
      uVar126 = auVar147._4_4_ ^ auVar121._4_4_ ^ auVar141._4_4_;
      uVar127 = auVar147._8_4_ ^ auVar121._8_4_ ^ auVar141._8_4_;
      uVar128 = auVar147._12_4_ ^ auVar121._12_4_ ^ auVar141._12_4_;
      uVar136 = auVar152._0_4_ ^ auVar149._0_4_ ^ auVar150._0_4_;
      uVar137 = auVar152._4_4_ ^ auVar149._4_4_ ^ auVar150._4_4_;
      uVar138 = auVar152._8_4_ ^ auVar149._8_4_ ^ auVar150._8_4_;
      uVar139 = auVar152._12_4_ ^ auVar149._12_4_ ^ auVar150._12_4_;
      uVar87 = param_4 - 0x80;
      uVar89 = param_4 - 0x40;
      while( true ) {
        uVar88 = uVar87;
        param_3 = param_3 + 4;
        if (uVar89 < 0x40) break;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar93._0_8_;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = param_2[8];
        auVar147 = (undefined1  [16])0x0;
        for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
          if ((auVar5 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
            auVar147 = auVar147 ^ auVar22 << uVar1;
          }
        }
        auVar152 = pshufb(param_3[3],_L_bswap_mask);
        auVar51._8_8_ = 0;
        auVar51._0_8_ = auVar93._8_8_;
        auVar63._8_8_ = 0;
        auVar63._0_8_ = param_2[9];
        auVar93 = (undefined1  [16])0x0;
        for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
          if ((auVar51 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
            auVar93 = auVar93 ^ auVar63 << uVar1;
          }
        }
        auVar94._0_4_ = auVar147._0_4_ ^ uVar120;
        auVar94._4_4_ = auVar147._4_4_ ^ uVar126;
        auVar94._8_4_ = auVar147._8_4_ ^ uVar127;
        auVar94._12_4_ = auVar147._12_4_ ^ uVar128;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = auVar142._0_8_;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar140;
        auVar147 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar38 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar147 = auVar147 ^ auVar44 << uVar120;
          }
        }
        auVar155._0_8_ = auVar152._8_8_;
        auVar155._8_4_ = auVar152._0_4_;
        auVar155._12_4_ = auVar152._4_4_;
        auVar118._0_4_ = auVar93._0_4_ ^ uVar136;
        auVar118._4_4_ = auVar93._4_4_ ^ uVar137;
        auVar118._8_4_ = auVar93._8_4_ ^ uVar138;
        auVar118._12_4_ = auVar93._12_4_ ^ uVar139;
        auVar93 = pshufb(param_3[2],_L_bswap_mask);
        auVar143._0_4_ = auVar147._0_4_ ^ auVar130._0_4_ ^ auVar151._0_4_;
        auVar143._4_4_ = auVar147._4_4_ ^ auVar130._4_4_ ^ auVar151._4_4_;
        auVar143._8_4_ = auVar147._8_4_ ^ auVar130._8_4_ ^ auVar151._8_4_;
        auVar143._12_4_ = auVar147._12_4_ ^ auVar130._12_4_ ^ auVar151._12_4_;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = auVar152._0_8_;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar82;
        auVar147 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar6 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar147 = auVar147 ^ auVar23 << uVar120;
          }
        }
        auVar129._0_8_ = auVar93._8_8_;
        auVar129._8_4_ = auVar93._0_4_;
        auVar129._12_4_ = auVar93._4_4_;
        auVar121 = auVar143 ^ auVar94 ^ auVar118;
        auVar52._8_8_ = 0;
        auVar52._0_8_ = auVar155._0_8_;
        auVar64._8_8_ = 0;
        auVar64._0_8_ = uVar83;
        auVar141 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar52 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar141 = auVar141 ^ auVar64 << uVar120;
          }
        }
        auVar73._8_8_ = 0;
        auVar73._0_8_ = auVar121._0_8_;
        auVar94 = auVar94 ^ auVar73 << 0x40;
        auVar149 = pshufb(ZEXT816(0xa040608020c0e000),_L_7_mask & auVar94);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = SUB168(auVar155 ^ auVar152,0);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = param_2[4];
        auVar152 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar7 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar152 = auVar152 ^ auVar24 << uVar120;
          }
        }
        auVar86._8_8_ = 0;
        auVar86._0_8_ = SUB168(auVar149 ^ auVar94,0) << 0x39;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = auVar93._0_8_;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar84;
        auVar150 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar8 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar150 = auVar150 ^ auVar25 << uVar120;
          }
        }
        auVar144._8_8_ = 0;
        auVar144._0_8_ = SUB168(auVar149 ^ auVar94,8) << 0x39;
        auVar94 = auVar94 ^ auVar86 << 0x40;
        auVar95._0_8_ = auVar94._0_8_ >> 1;
        auVar95._8_8_ = auVar94._8_8_ >> 1;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = auVar129._0_8_;
        auVar65._8_8_ = 0;
        auVar65._0_8_ = uVar85;
        auVar149 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar53 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar149 = auVar149 ^ auVar65 << uVar120;
          }
        }
        auVar151 = pshufb(param_3[1],_L_bswap_mask);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = SUB168(auVar129 ^ auVar93,0);
        auVar45._8_8_ = 0;
        auVar45._0_8_ = param_2[5];
        auVar130 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar39 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar130 = auVar130 ^ auVar45 << uVar120;
          }
        }
        uVar140 = param_2[0xb];
        auVar145 = pshufb(*param_3,_L_bswap_mask);
        auVar96._0_8_ = auVar94._0_8_ >> 6;
        auVar96._8_8_ = auVar94._8_8_ >> 6;
        auVar130 = auVar130 ^ auVar152;
        auVar156._0_8_ = auVar151._8_8_;
        auVar156._8_4_ = auVar151._0_4_;
        auVar156._12_4_ = auVar151._4_4_;
        auVar96 = auVar96 ^ auVar94 ^ auVar95;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = auVar151._0_8_;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = param_2[6];
        auVar152 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar9 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar152 = auVar152 ^ auVar26 << uVar120;
          }
        }
        auVar93._0_8_ = auVar96._0_8_ >> 1;
        auVar93._8_8_ = auVar96._8_8_ >> 1;
        auVar93 = auVar93 ^ auVar118 ^ auVar121 >> 0x40 ^ auVar144 ^ auVar94 ^ auVar145;
        uVar92 = auVar93._0_8_;
        auVar54._8_8_ = 0;
        auVar54._0_8_ = auVar156._0_8_;
        auVar66._8_8_ = 0;
        auVar66._0_8_ = param_2[7];
        auVar121 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar54 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar121 = auVar121 ^ auVar66 << uVar120;
          }
        }
        uVar120 = auVar150._0_4_ ^ auVar147._0_4_ ^ auVar152._0_4_;
        uVar126 = auVar150._4_4_ ^ auVar147._4_4_ ^ auVar152._4_4_;
        uVar127 = auVar150._8_4_ ^ auVar147._8_4_ ^ auVar152._8_4_;
        uVar128 = auVar150._12_4_ ^ auVar147._12_4_ ^ auVar152._12_4_;
        auVar146._0_8_ = auVar93._8_8_;
        auVar146._8_4_ = auVar93._0_4_;
        auVar146._12_4_ = auVar93._4_4_;
        auVar142 = auVar146 ^ auVar93;
        uVar90 = auVar142._0_8_;
        auVar147._8_8_ = 0;
        auVar147._0_8_ = SUB168(auVar156 ^ auVar151,0);
        auVar27._8_8_ = 0;
        auVar27._0_8_ = param_2[10];
        auVar151 = (undefined1  [16])0x0;
        for (uVar136 = 0; uVar136 < 0x40; uVar136 = uVar136 + 1) {
          if ((auVar147 & (undefined1  [16])0x1 << uVar136) != (undefined1  [16])0x0) {
            auVar151 = auVar151 ^ auVar27 << uVar136;
          }
        }
        uVar136 = auVar149._0_4_ ^ auVar141._0_4_ ^ auVar121._0_4_;
        uVar137 = auVar149._4_4_ ^ auVar141._4_4_ ^ auVar121._4_4_;
        uVar138 = auVar149._8_4_ ^ auVar141._8_4_ ^ auVar121._8_4_;
        uVar139 = auVar149._12_4_ ^ auVar141._12_4_ ^ auVar121._12_4_;
        uVar87 = uVar88 - 0x40;
        uVar89 = uVar88;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar92;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = param_2[8];
      auVar147 = (undefined1  [16])0x0;
      for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
        if ((auVar10 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
          auVar147 = auVar147 ^ auVar28 << uVar1;
        }
      }
      auVar55._8_8_ = 0;
      auVar55._0_8_ = auVar93._8_8_;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = param_2[9];
      auVar93 = (undefined1  [16])0x0;
      for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
        if ((auVar55 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
          auVar93 = auVar93 ^ auVar67 << uVar1;
        }
      }
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar90;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar140;
      auVar152 = (undefined1  [16])0x0;
      for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
        if ((auVar40 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
          auVar152 = auVar152 ^ auVar46 << uVar1;
        }
      }
      auVar131._0_4_ = auVar130._0_4_ ^ auVar151._0_4_;
      auVar131._4_4_ = auVar130._4_4_ ^ auVar151._4_4_;
      auVar131._8_4_ = auVar130._8_4_ ^ auVar151._8_4_;
      auVar131._12_4_ = auVar130._12_4_ ^ auVar151._12_4_;
      auVar97._0_4_ = auVar147._0_4_ ^ uVar120;
      auVar97._4_4_ = auVar147._4_4_ ^ uVar126;
      auVar97._8_4_ = auVar147._8_4_ ^ uVar127;
      auVar97._12_4_ = auVar147._12_4_ ^ uVar128;
      auVar119._0_4_ = auVar93._0_4_ ^ uVar136;
      auVar119._4_4_ = auVar93._4_4_ ^ uVar137;
      auVar119._8_4_ = auVar93._8_4_ ^ uVar138;
      auVar119._12_4_ = auVar93._12_4_ ^ uVar139;
      auVar93 = auVar152 ^ auVar131 ^ auVar119 ^ auVar97;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = auVar93._0_8_;
      auVar97 = auVar97 ^ auVar74 << 0x40;
      auVar98._0_8_ = auVar97._0_8_ << 5;
      auVar98._8_8_ = auVar97._8_8_ << 5;
      auVar99._0_8_ = auVar97._0_8_ << 6;
      auVar99._8_8_ = auVar97._8_8_ << 6;
      auVar99 = auVar99 ^ auVar97 ^ auVar98;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = auVar99._0_8_ << 0x39;
      auVar122._8_8_ = 0;
      auVar122._0_8_ = auVar99._8_8_ << 0x39;
      auVar97 = auVar75 << 0x40 ^ auVar97;
      auVar100._0_8_ = auVar97._0_8_ >> 1;
      auVar100._8_8_ = auVar97._8_8_ >> 1;
      auVar101._0_8_ = auVar97._0_8_ >> 6;
      auVar101._8_8_ = auVar97._8_8_ >> 6;
      auVar101 = auVar101 ^ auVar97 ^ auVar100;
      auVar102._0_8_ = auVar101._0_8_ >> 1;
      auVar102._8_8_ = auVar101._8_8_ >> 1;
      auVar93 = auVar102 ^ auVar119 ^ auVar93 >> 0x40 ^ auVar122 ^ auVar97;
      if (uVar88 == 0xffffffffffffffc0) goto L_done;
      uVar140 = param_2[4];
      uVar92 = param_2[5];
      uVar88 = uVar88 + 0x30;
      if (uVar88 == 0) goto L_odd_tail;
    }
    auVar147 = pshufb(*param_3,_L_bswap_mask);
    auVar152 = pshufb(param_3[1],_L_bswap_mask);
    auVar93 = auVar93 ^ auVar147;
    auVar132._0_8_ = auVar152._8_8_;
    auVar132._8_4_ = auVar152._0_4_;
    auVar132._12_4_ = auVar152._4_4_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar152._0_8_;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar82;
    auVar147 = (undefined1  [16])0x0;
    for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
      if ((auVar11 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
        auVar147 = auVar147 ^ auVar29 << uVar120;
      }
    }
    auVar56._8_8_ = 0;
    auVar56._0_8_ = auVar132._0_8_;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar83;
    auVar141 = (undefined1  [16])0x0;
    for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
      if ((auVar56 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
        auVar141 = auVar141 ^ auVar68 << uVar120;
      }
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = SUB168(auVar132 ^ auVar152,0);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar140;
    auVar152 = (undefined1  [16])0x0;
    for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
        auVar152 = auVar152 ^ auVar30 << uVar120;
      }
    }
    param_3 = param_3 + 2;
    uVar90 = uVar88 - 0x20;
    if (0x1f < uVar88 && uVar90 != 0) {
      do {
        auVar133._0_8_ = auVar93._8_8_;
        auVar133._8_4_ = auVar93._0_4_;
        auVar133._12_4_ = auVar93._4_4_;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = auVar93._0_8_;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar84;
        auVar121 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar13 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar121 = auVar121 ^ auVar31 << uVar120;
          }
        }
        auVar57._8_8_ = 0;
        auVar57._0_8_ = auVar133._0_8_;
        auVar69._8_8_ = 0;
        auVar69._0_8_ = uVar85;
        auVar149 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar57 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar149 = auVar149 ^ auVar69 << uVar120;
          }
        }
        auVar41._8_8_ = 0;
        auVar41._0_8_ = SUB168(auVar133 ^ auVar93,0);
        auVar47._8_8_ = 0;
        auVar47._0_8_ = uVar92;
        auVar93 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar41 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar93 = auVar93 ^ auVar47 << uVar120;
          }
        }
        auVar149 = auVar149 ^ auVar141;
        auVar150 = pshufb(*param_3,_L_bswap_mask);
        auVar93 = auVar93 ^ auVar152 ^ auVar121 ^ auVar147 ^ auVar149;
        auVar152 = pshufb(param_3[1],_L_bswap_mask);
        auVar76._8_8_ = 0;
        auVar76._0_8_ = auVar93._0_8_;
        auVar121 = auVar121 ^ auVar147 ^ auVar76 << 0x40;
        auVar103._0_8_ = auVar121._0_8_ << 5;
        auVar103._8_8_ = auVar121._8_8_ << 5;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = auVar152._0_8_;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar82;
        auVar147 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar14 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar147 = auVar147 ^ auVar32 << uVar120;
          }
        }
        auVar104._0_8_ = auVar121._0_8_ << 6;
        auVar104._8_8_ = auVar121._8_8_ << 6;
        auVar104 = auVar104 ^ auVar121 ^ auVar103;
        auVar77._8_8_ = 0;
        auVar77._0_8_ = auVar104._0_8_ << 0x39;
        auVar148._8_8_ = 0;
        auVar148._0_8_ = auVar104._8_8_ << 0x39;
        auVar121 = auVar77 << 0x40 ^ auVar121;
        auVar134._0_8_ = auVar152._8_8_;
        auVar134._8_4_ = auVar152._0_4_;
        auVar134._12_4_ = auVar152._4_4_;
        auVar105._0_8_ = auVar121._0_8_ >> 1;
        auVar105._8_8_ = auVar121._8_8_ >> 1;
        auVar58._8_8_ = 0;
        auVar58._0_8_ = auVar134._0_8_;
        auVar70._8_8_ = 0;
        auVar70._0_8_ = uVar83;
        auVar141 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar58 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar141 = auVar141 ^ auVar70 << uVar120;
          }
        }
        auVar106._0_8_ = auVar121._0_8_ >> 6;
        auVar106._8_8_ = auVar121._8_8_ >> 6;
        auVar106 = auVar106 ^ auVar121 ^ auVar105;
        param_3 = param_3 + 2;
        auVar107._0_8_ = auVar106._0_8_ >> 1;
        auVar107._8_8_ = auVar106._8_8_ >> 1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = SUB168(auVar134 ^ auVar152,0);
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar140;
        auVar152 = (undefined1  [16])0x0;
        for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
          if ((auVar15 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
            auVar152 = auVar152 ^ auVar33 << uVar120;
          }
        }
        auVar93 = auVar107 ^ auVar149 ^ auVar150 ^ auVar93 >> 0x40 ^ auVar148 ^ auVar121;
        bVar91 = 0x1f < uVar90;
        uVar90 = uVar90 - 0x20;
      } while (bVar91 && uVar90 != 0);
    }
    auVar135._0_8_ = auVar93._8_8_;
    auVar135._8_4_ = auVar93._0_4_;
    auVar135._12_4_ = auVar93._4_4_;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar93._0_8_;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar84;
    auVar121 = (undefined1  [16])0x0;
    for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
        auVar121 = auVar121 ^ auVar34 << uVar120;
      }
    }
    auVar59._8_8_ = 0;
    auVar59._0_8_ = auVar135._0_8_;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar85;
    auVar149 = (undefined1  [16])0x0;
    for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
      if ((auVar59 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
        auVar149 = auVar149 ^ auVar71 << uVar120;
      }
    }
    auVar42._8_8_ = 0;
    auVar42._0_8_ = SUB168(auVar135 ^ auVar93,0);
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar92;
    auVar93 = (undefined1  [16])0x0;
    for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
      if ((auVar42 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
        auVar93 = auVar93 ^ auVar48 << uVar120;
      }
    }
    auVar93 = auVar93 ^ auVar152 ^ auVar121 ^ auVar147 ^ auVar149 ^ auVar141;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = auVar93._0_8_;
    auVar147 = auVar121 ^ auVar147 ^ auVar78 << 0x40;
    auVar108._0_8_ = auVar147._0_8_ << 5;
    auVar108._8_8_ = auVar147._8_8_ << 5;
    auVar109._0_8_ = auVar147._0_8_ << 6;
    auVar109._8_8_ = auVar147._8_8_ << 6;
    auVar109 = auVar109 ^ auVar147 ^ auVar108;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = auVar109._0_8_ << 0x39;
    auVar123._8_8_ = 0;
    auVar123._0_8_ = auVar109._8_8_ << 0x39;
    auVar147 = auVar79 << 0x40 ^ auVar147;
    auVar110._0_8_ = auVar147._0_8_ >> 1;
    auVar110._8_8_ = auVar147._8_8_ >> 1;
    auVar111._0_8_ = auVar147._0_8_ >> 6;
    auVar111._8_8_ = auVar147._8_8_ >> 6;
    auVar111 = auVar111 ^ auVar147 ^ auVar110;
    auVar112._0_8_ = auVar111._0_8_ >> 1;
    auVar112._8_8_ = auVar111._8_8_ >> 1;
    auVar93 = auVar112 ^ auVar149 ^ auVar141 ^ auVar93 >> 0x40 ^ auVar123 ^ auVar147;
    if (uVar90 != 0) goto L_done;
  }
L_odd_tail:
  auVar147 = pshufb(*param_3,_L_bswap_mask);
  auVar93 = auVar93 ^ auVar147;
  auVar124._0_8_ = auVar93._8_8_;
  auVar124._8_4_ = auVar93._0_4_;
  auVar124._12_4_ = auVar93._4_4_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar93._0_8_;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar82;
  auVar147 = (undefined1  [16])0x0;
  for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
    if ((auVar17 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
      auVar147 = auVar147 ^ auVar35 << uVar120;
    }
  }
  auVar60._8_8_ = 0;
  auVar60._0_8_ = auVar124._0_8_;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = uVar83;
  auVar152 = (undefined1  [16])0x0;
  for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
    if ((auVar60 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
      auVar152 = auVar152 ^ auVar72 << uVar120;
    }
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = SUB168(auVar124 ^ auVar93,0);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar140;
  auVar93 = (undefined1  [16])0x0;
  for (uVar120 = 0; uVar120 < 0x40; uVar120 = uVar120 + 1) {
    if ((auVar18 & (undefined1  [16])0x1 << uVar120) != (undefined1  [16])0x0) {
      auVar93 = auVar93 ^ auVar36 << uVar120;
    }
  }
  auVar93 = auVar93 ^ auVar147 ^ auVar152;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = auVar93._0_8_;
  auVar147 = auVar147 ^ auVar80 << 0x40;
  auVar113._0_8_ = auVar147._0_8_ << 5;
  auVar113._8_8_ = auVar147._8_8_ << 5;
  auVar114._0_8_ = auVar147._0_8_ << 6;
  auVar114._8_8_ = auVar147._8_8_ << 6;
  auVar114 = auVar114 ^ auVar147 ^ auVar113;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = auVar114._0_8_ << 0x39;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = auVar114._8_8_ << 0x39;
  auVar147 = auVar81 << 0x40 ^ auVar147;
  auVar115._0_8_ = auVar147._0_8_ >> 1;
  auVar115._8_8_ = auVar147._8_8_ >> 1;
  auVar116._0_8_ = auVar147._0_8_ >> 6;
  auVar116._8_8_ = auVar147._8_8_ >> 6;
  auVar116 = auVar116 ^ auVar147 ^ auVar115;
  auVar117._0_8_ = auVar116._0_8_ >> 1;
  auVar117._8_8_ = auVar116._8_8_ >> 1;
  auVar93 = auVar117 ^ auVar152 ^ auVar93 >> 0x40 ^ auVar125 ^ auVar147;
L_done:
  auVar93 = pshufb(auVar93,_L_bswap_mask);
  *param_1 = auVar93;
  return;
}

// gcm_init_avx @ 140dfaa80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gcm_init_avx(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong uVar19;
  
  auVar15 = vpshufd_avx(*param_2,0x4e);
  auVar13 = vpshufd_avx(auVar15,0xff);
  auVar12 = vpsrlq_avx(auVar15,0x3f);
  auVar11 = vpsllq_avx(auVar15,1);
  auVar15 = vpcmpgtd_avx((undefined1  [16])0x0,auVar13);
  auVar13 = vpslldq_avx(auVar12,8);
  auVar13 = vpor_avx(auVar11,auVar13);
  auVar15 = vpand_avx(auVar15,_L_0x1c2_polynomial);
  auVar13 = auVar13 ^ auVar15;
  auVar15 = vpunpckhqdq_avx(auVar13,auVar13);
  uVar9 = auVar13._0_8_;
  uVar19 = auVar15._0_8_ ^ uVar9;
  lVar10 = 4;
  auVar15 = auVar13;
  while( true ) {
    auVar11 = vpunpckhqdq_avx(auVar15,auVar15);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar15._8_8_;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar13._8_8_;
    auVar12 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar12 = auVar12 ^ auVar17 << uVar1;
      }
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar15._0_8_;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar9;
    auVar14 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar14 = auVar14 ^ auVar18 << uVar1;
      }
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = SUB168(auVar11 ^ auVar15,0);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar19;
    auVar11 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar11 = auVar11 ^ auVar7 << uVar1;
      }
    }
    auVar11 = auVar11 ^ auVar12 ^ auVar14;
    auVar17 = vpslldq_avx(auVar11,8);
    auVar16 = vpsrldq_avx(auVar11,8);
    auVar14 = auVar14 ^ auVar17;
    auVar17 = vpsllq_avx(auVar14,0x39);
    auVar18 = vpsllq_avx(auVar14,0x3e);
    auVar11 = vpsllq_avx(auVar14,0x3f);
    auVar11 = auVar18 ^ auVar17 ^ auVar11;
    auVar17 = vpslldq_avx(auVar11,8);
    auVar11 = vpsrldq_avx(auVar11,8);
    auVar14 = auVar14 ^ auVar17;
    auVar17 = vpsrlq_avx(auVar14,1);
    auVar18 = vpsrlq_avx(auVar17,5);
    auVar17 = vpsrlq_avx(auVar14 ^ auVar17 ^ auVar18,1);
    auVar17 = auVar17 ^ auVar12 ^ auVar16 ^ auVar11 ^ auVar14;
    auVar11 = vpshufd_avx(auVar15,0x4e);
    auVar12 = vpshufd_avx(auVar17,0x4e);
    *param_1 = auVar15;
    param_1[1] = auVar17;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) break;
    auVar15 = vpalignr_avx(auVar12 ^ auVar17,auVar11 ^ auVar15,8);
    param_1[2] = auVar15;
    auVar15 = vpunpckhqdq_avx(auVar17,auVar17);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar17._8_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar13._8_8_;
    auVar11 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar11 = auVar11 ^ auVar8 << uVar1;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar17._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar9;
    auVar12 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar12 = auVar12 ^ auVar5 << uVar1;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = SUB168(auVar15 ^ auVar17,0);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar19;
    auVar15 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar15 = auVar15 ^ auVar6 << uVar1;
      }
    }
    auVar15 = auVar15 ^ auVar11 ^ auVar12;
    auVar17 = vpslldq_avx(auVar15,8);
    auVar14 = vpsrldq_avx(auVar15,8);
    auVar12 = auVar12 ^ auVar17;
    auVar17 = vpsllq_avx(auVar12,0x39);
    auVar16 = vpsllq_avx(auVar12,0x3e);
    auVar15 = vpsllq_avx(auVar12,0x3f);
    auVar15 = auVar16 ^ auVar17 ^ auVar15;
    auVar17 = vpslldq_avx(auVar15,8);
    auVar16 = vpsrldq_avx(auVar15,8);
    auVar12 = auVar12 ^ auVar17;
    auVar15 = vpsrlq_avx(auVar12,1);
    auVar17 = vpsrlq_avx(auVar15,5);
    auVar15 = vpsrlq_avx(auVar12 ^ auVar15 ^ auVar17,1);
    auVar15 = auVar15 ^ auVar11 ^ auVar14 ^ auVar16 ^ auVar12;
    param_1 = param_1 + 3;
  }
  auVar15 = vpalignr_avx(auVar11 ^ auVar15,auVar12 ^ auVar17,8);
  param_1[2] = auVar15;
  return;
}

// L$SEH_begin_gcm_ghash_avx @ 140dfac68

/* WARNING: Removing unreachable block (ram,0x000140dfafbf) */
/* WARNING: Removing unreachable block (ram,0x000140dfb05f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_gcm_ghash_avx
               (undefined1 (*param_1) [16],ulonglong *param_2,undefined1 (*param_3) [16],
               ulonglong param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 (*pauVar138) [16];
  ulonglong uVar139;
  undefined8 *in_RAX;
  ulonglong uVar140;
  undefined1 in_ZMM0 [64];
  undefined1 auVar141 [64];
  undefined1 auVar142 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar143 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar144 [64];
  undefined1 auVar145 [64];
  undefined1 auVar146 [64];
  undefined1 auVar147 [16];
  undefined1 auVar148 [64];
  undefined8 unaff_XMM6_Qa;
  ulonglong uVar149;
  undefined8 unaff_XMM6_Qb;
  ulonglong uVar150;
  undefined8 unaff_XMM7_Qa;
  undefined1 auVar151 [16];
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar152 [64];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 in_ZMM9 [64];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar157 [16];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar160 [64];
  
  in_RAX[-4] = unaff_XMM6_Qa;
  in_RAX[-3] = unaff_XMM6_Qb;
  in_RAX[-2] = unaff_XMM7_Qa;
  in_RAX[-1] = unaff_XMM7_Qb;
  *in_RAX = unaff_XMM8_Qa;
  in_RAX[1] = unaff_XMM8_Qb;
  *(undefined1 (*) [16])(in_RAX + 2) = in_ZMM9._0_16_;
  in_RAX[4] = unaff_XMM10_Qa;
  in_RAX[5] = unaff_XMM10_Qb;
  in_RAX[6] = unaff_XMM11_Qa;
  in_RAX[7] = unaff_XMM11_Qb;
  in_RAX[8] = unaff_XMM12_Qa;
  in_RAX[9] = unaff_XMM12_Qb;
  in_RAX[10] = unaff_XMM13_Qa;
  in_RAX[0xb] = unaff_XMM13_Qb;
  in_RAX[0xc] = unaff_XMM14_Qa;
  in_RAX[0xd] = unaff_XMM14_Qb;
  in_RAX[0xe] = unaff_XMM15_Qa;
  in_RAX[0xf] = unaff_XMM15_Qb;
  auVar141 = ZEXT1664(in_ZMM0._0_16_);
  auVar143 = ZEXT1664(in_ZMM1._0_16_);
  auVar144 = ZEXT1664(in_ZMM2._0_16_);
  puVar1 = param_2 + 8;
  auVar156 = vpshufb_avx(*param_1,_L_bswap_mask);
  if (param_4 < 0x80) goto L_short_avx;
  uVar140 = param_4 - 0x80;
  auVar151 = vpshufb_avx(param_3[7],_L_bswap_mask);
  auVar147 = vpunpckhqdq_avx(auVar151,auVar151);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = auVar151._0_8_;
  auVar142._8_8_ = 0;
  auVar142._0_8_ = *param_2;
  auVar154 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar154 = auVar154 ^ auVar142 << uVar2;
    }
  }
  auVar3 = vpshufb_avx(param_3[6],_L_bswap_mask);
  auVar153._8_8_ = 0;
  auVar153._0_8_ = auVar151._8_8_;
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_2[1];
  auVar142 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar153 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar142 = auVar142 ^ auVar112 << uVar2;
    }
  }
  auVar153 = vpunpckhqdq_avx(auVar3,auVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = SUB168(auVar147 ^ auVar151,0);
  auVar147._8_8_ = 0;
  auVar147._0_8_ = param_2[4];
  auVar151 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar151 = auVar151 ^ auVar147 << uVar2;
    }
  }
  auVar147 = vpshufb_avx(param_3[5],_L_bswap_mask);
  auVar158._8_8_ = 0;
  auVar158._0_8_ = auVar3._0_8_;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_2[2];
  auVar112 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar158 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar112 = auVar112 ^ auVar37 << uVar2;
    }
  }
  auVar4 = vpunpckhqdq_avx(auVar147,auVar147);
  auVar91._8_8_ = 0;
  auVar91._0_8_ = auVar3._8_8_;
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_2[3];
  auVar158 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar91 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar158 = auVar158 ^ auVar113 << uVar2;
    }
  }
  auVar71._8_8_ = 0;
  auVar71._0_8_ = SUB168(auVar153 ^ auVar3,0);
  auVar81._8_8_ = 0;
  auVar81._0_8_ = param_2[5];
  auVar3 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar71 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar3 = auVar3 ^ auVar81 << uVar2;
    }
  }
  auVar153 = vpshufb_avx(param_3[4],_L_bswap_mask);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar147._0_8_;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[6];
  auVar37 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar5 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar37 = auVar37 ^ auVar38 << uVar2;
    }
  }
  auVar91 = vpunpckhqdq_avx(auVar153,auVar153);
  auVar92._8_8_ = 0;
  auVar92._0_8_ = auVar147._8_8_;
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_2[7];
  auVar113 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar92 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar113 = auVar113 ^ auVar114 << uVar2;
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = SUB168(auVar4 ^ auVar147,0);
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[10];
  auVar147 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar6 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar147 = auVar147 ^ auVar39 << uVar2;
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar153._0_8_;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = *puVar1;
  auVar4 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar7 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar4 = auVar4 ^ auVar40 << uVar2;
    }
  }
  auVar71 = vpshufb_avx(param_3[3],_L_bswap_mask);
  auVar93._8_8_ = 0;
  auVar93._0_8_ = auVar153._8_8_;
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_2[9];
  auVar81 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar93 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar81 = auVar81 ^ auVar115 << uVar2;
    }
  }
  auVar5 = vpunpckhqdq_avx(auVar71,auVar71);
  auVar72._8_8_ = 0;
  auVar72._0_8_ = SUB168(auVar91 ^ auVar153,0);
  auVar82._8_8_ = 0;
  auVar82._0_8_ = param_2[0xb];
  auVar153 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar72 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar153 = auVar153 ^ auVar82 << uVar2;
    }
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar71._0_8_;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[0xc];
  auVar91 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar8 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar91 = auVar91 ^ auVar41 << uVar2;
    }
  }
  auVar38 = vpshufb_avx(param_3[2],_L_bswap_mask);
  auVar94._8_8_ = 0;
  auVar94._0_8_ = auVar71._8_8_;
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_2[0xd];
  auVar92 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar94 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar92 = auVar92 ^ auVar116 << uVar2;
    }
  }
  auVar114 = vpunpckhqdq_avx(auVar38,auVar38);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar5 ^ auVar71,0);
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[0x10];
  auVar71 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar9 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar71 = auVar71 ^ auVar42 << uVar2;
    }
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = auVar38._0_8_;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[0xe];
  auVar5 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar10 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar5 = auVar5 ^ auVar43 << uVar2;
    }
  }
  auVar6 = vpshufb_avx(param_3[1],_L_bswap_mask);
  auVar95._8_8_ = 0;
  auVar95._0_8_ = auVar38._8_8_;
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_2[0xf];
  auVar39 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar95 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar39 = auVar39 ^ auVar117 << uVar2;
    }
  }
  auVar7 = vpunpckhqdq_avx(auVar6,auVar6);
  auVar73._8_8_ = 0;
  auVar73._0_8_ = SUB168(auVar114 ^ auVar38,0);
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_2[0x11];
  auVar38 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar73 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar38 = auVar38 ^ auVar83 << uVar2;
    }
  }
  auVar152 = ZEXT1664(*(undefined1 (*) [16])(param_2 + 0x16));
  auVar145 = ZEXT1664(auVar5 ^ auVar91 ^ auVar4 ^ auVar37 ^ auVar112 ^ auVar154);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auVar6._0_8_;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[0x12];
  auVar154 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar11 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar154 = auVar154 ^ auVar44 << uVar2;
    }
  }
  auVar141 = ZEXT1664(auVar154);
  auVar146 = ZEXT1664(auVar39 ^ auVar92 ^ auVar81 ^ auVar113 ^ auVar158 ^ auVar142);
  auVar154 = vpshufb_avx(*param_3,_L_bswap_mask);
  auVar96._8_8_ = 0;
  auVar96._0_8_ = auVar6._8_8_;
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_2[0x13];
  auVar142 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar96 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar142 = auVar142 ^ auVar118 << uVar2;
    }
  }
  auVar143 = ZEXT1664(auVar142);
  uVar149 = param_2[0x14];
  uVar150 = param_2[0x15];
  auVar148 = ZEXT1664(auVar38 ^ auVar71 ^ auVar153 ^ auVar147 ^ auVar3 ^ auVar151);
  auVar74._8_8_ = 0;
  auVar74._0_8_ = SUB168(auVar7 ^ auVar6,0);
  auVar84._8_8_ = 0;
  auVar84._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x16),8);
  auVar151 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar74 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar151 = auVar151 ^ auVar84 << uVar2;
    }
  }
  auVar144 = ZEXT1664(auVar151);
  param_3 = param_3 + 8;
  if (uVar140 < 0x80) goto L_tail_avx;
  auVar160 = ZEXT1664(auVar154 ^ auVar156);
  uVar139 = param_4 - 0x100;
  do {
    uVar140 = uVar139;
    auVar147 = auVar160._0_16_;
    auVar156 = vpunpckhqdq_avx(auVar147,auVar147);
    auVar154._8_8_ = 0;
    auVar154._0_8_ = auVar160._0_8_;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar149;
    auVar151 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar154 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar151 = auVar151 ^ auVar45 << uVar2;
      }
    }
    auVar154 = vpshufb_avx(param_3[7],_L_bswap_mask);
    auVar3 = auVar146._0_16_ ^ auVar143._0_16_;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = auVar160._8_8_;
    auVar119._8_8_ = 0;
    auVar119._0_8_ = uVar150;
    auVar142 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar97 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar142 = auVar142 ^ auVar119 << uVar2;
      }
    }
    auVar153 = vpunpckhqdq_avx(auVar154,auVar154);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = SUB168(auVar156 ^ auVar147,0);
    auVar46._8_8_ = 0;
    auVar46._0_8_ = auVar152._0_8_;
    auVar156 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar156 = auVar156 ^ auVar46 << uVar2;
      }
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar154._0_8_;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = *param_2;
    auVar147 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar13 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar147 = auVar147 ^ auVar47 << uVar2;
      }
    }
    auVar151 = auVar151 ^ auVar145._0_16_ ^ auVar141._0_16_;
    auVar112 = vpshufb_avx(param_3[6],_L_bswap_mask);
    auVar98._8_8_ = 0;
    auVar98._0_8_ = auVar154._8_8_;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = param_2[1];
    auVar4 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar98 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar4 = auVar4 ^ auVar120 << uVar2;
      }
    }
    auVar157._0_4_ = auVar142._0_4_ ^ auVar3._0_4_;
    auVar157._4_4_ = auVar142._4_4_ ^ auVar3._4_4_;
    auVar157._8_4_ = auVar142._8_4_ ^ auVar3._8_4_;
    auVar157._12_4_ = auVar142._12_4_ ^ auVar3._12_4_;
    auVar3 = vpunpckhqdq_avx(auVar112,auVar112);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = SUB168(auVar153 ^ auVar154,0);
    auVar48._8_8_ = 0;
    auVar48._0_8_ = param_2[4];
    auVar154 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar154 = auVar154 ^ auVar48 << uVar2;
      }
    }
    auVar75._4_4_ = auVar3._4_4_ ^ auVar112._4_4_;
    auVar75._0_4_ = auVar3._0_4_ ^ auVar112._0_4_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auVar112._0_8_;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = param_2[2];
    auVar3 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar15 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar3 = auVar3 ^ auVar49 << uVar2;
      }
    }
    auVar156 = auVar156 ^ auVar148._0_16_ ^ auVar144._0_16_ ^ auVar151 ^ auVar157;
    auVar153 = vpslldq_avx(auVar156,8);
    auVar99._8_8_ = 0;
    auVar99._0_8_ = auVar112._8_8_;
    auVar121._8_8_ = 0;
    auVar121._0_8_ = param_2[3];
    auVar142 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar99 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar142 = auVar142 ^ auVar121 << uVar2;
      }
    }
    auVar158 = vpsrldq_avx(auVar156,8);
    auVar151 = auVar151 ^ auVar153;
    auVar156 = vpshufb_avx(param_3[5],_L_bswap_mask);
    auVar153 = vpunpckhqdq_avx(auVar156,auVar156);
    auVar75._8_8_ = 0;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = param_2[5];
    auVar112 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar75 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar112 = auVar112 ^ auVar85 << uVar2;
      }
    }
    auVar37 = vpalignr_avx(auVar151,auVar151,8);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar156._0_8_;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = param_2[6];
    auVar91 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar91 = auVar91 ^ auVar50 << uVar2;
      }
    }
    auVar113 = vpshufb_avx(param_3[4],_L_bswap_mask);
    auVar100._8_8_ = 0;
    auVar100._0_8_ = auVar156._8_8_;
    auVar122._8_8_ = 0;
    auVar122._0_8_ = param_2[7];
    auVar71 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar100 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar71 = auVar71 ^ auVar122 << uVar2;
      }
    }
    auVar81 = vpunpckhqdq_avx(auVar113,auVar113);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = SUB168(auVar153 ^ auVar156,0);
    auVar51._8_8_ = 0;
    auVar51._0_8_ = param_2[10];
    auVar156 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar17 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar156 = auVar156 ^ auVar51 << uVar2;
      }
    }
    auVar76._4_4_ = auVar81._4_4_ ^ auVar113._4_4_;
    auVar76._0_4_ = auVar81._0_4_ ^ auVar113._0_4_;
    auVar134._8_8_ = 0;
    auVar134._0_8_ = auVar151._0_8_;
    auVar136._8_8_ = 0;
    auVar136._0_8_ = _UNK_140dfb3d8;
    auVar151 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar134 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar151 = auVar151 ^ auVar136 << uVar2;
      }
    }
    auVar18._8_8_ = 0;
    auVar18._0_8_ = auVar113._0_8_;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = *puVar1;
    auVar153 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar18 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar153 = auVar153 ^ auVar52 << uVar2;
      }
    }
    auVar81 = vpshufb_avx(param_3[3],_L_bswap_mask);
    auVar101._8_8_ = 0;
    auVar101._0_8_ = auVar113._8_8_;
    auVar123._8_8_ = 0;
    auVar123._0_8_ = param_2[9];
    auVar113 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar101 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar113 = auVar113 ^ auVar123 << uVar2;
      }
    }
    auVar5 = vpunpckhqdq_avx(auVar81,auVar81);
    auVar76._8_8_ = 0;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = param_2[0xb];
    auVar38 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar76 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar38 = auVar38 ^ auVar86 << uVar2;
      }
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auVar81._0_8_;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = param_2[0xc];
    auVar92 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar19 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar92 = auVar92 ^ auVar53 << uVar2;
      }
    }
    auVar114 = vpshufb_avx(param_3[2],_L_bswap_mask);
    auVar102._8_8_ = 0;
    auVar102._0_8_ = auVar81._8_8_;
    auVar124._8_8_ = 0;
    auVar124._0_8_ = param_2[0xd];
    auVar6 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar102 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar6 = auVar6 ^ auVar124 << uVar2;
      }
    }
    auVar39 = vpunpckhqdq_avx(auVar114,auVar114);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = SUB168(auVar5 ^ auVar81,0);
    auVar54._8_8_ = 0;
    auVar54._0_8_ = param_2[0x10];
    auVar81 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar20 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar81 = auVar81 ^ auVar54 << uVar2;
      }
    }
    auVar155._0_8_ = CONCAT44(auVar151._4_4_ ^ auVar37._4_4_,auVar151._0_4_ ^ auVar37._0_4_);
    auVar155._8_4_ = auVar151._8_4_ ^ auVar37._8_4_;
    auVar155._12_4_ = auVar151._12_4_ ^ auVar37._12_4_;
    auVar151 = vpalignr_avx(auVar155,auVar155,8);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = auVar114._0_8_;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = param_2[0xe];
    auVar37 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar21 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar37 = auVar37 ^ auVar55 << uVar2;
      }
    }
    auVar5 = vpshufb_avx(param_3[1],_L_bswap_mask);
    auVar145 = ZEXT1664(auVar37 ^ auVar92 ^ auVar153 ^ auVar91 ^ auVar3 ^ auVar147);
    auVar103._8_8_ = 0;
    auVar103._0_8_ = auVar114._8_8_;
    auVar125._8_8_ = 0;
    auVar125._0_8_ = param_2[0xf];
    auVar147 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar103 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar147 = auVar147 ^ auVar125 << uVar2;
      }
    }
    auVar135._8_8_ = 0;
    auVar135._0_8_ = auVar155._0_8_;
    auVar137._8_8_ = 0;
    auVar137._0_8_ = _UNK_140dfb3d8;
    auVar3 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar135 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar3 = auVar3 ^ auVar137 << uVar2;
      }
    }
    auVar159._0_4_ = auVar151._0_4_ ^ auVar157._0_4_ ^ auVar158._0_4_;
    auVar159._4_4_ = auVar151._4_4_ ^ auVar157._4_4_ ^ auVar158._4_4_;
    auVar159._8_4_ = auVar151._8_4_ ^ auVar157._8_4_ ^ auVar158._8_4_;
    auVar159._12_4_ = auVar151._12_4_ ^ auVar157._12_4_ ^ auVar158._12_4_;
    auVar151 = vpunpckhqdq_avx(auVar5,auVar5);
    auVar146 = ZEXT1664(auVar147 ^ auVar6 ^ auVar113 ^ auVar71 ^ auVar142 ^ auVar4);
    auVar77._8_8_ = 0;
    auVar77._0_8_ = SUB168(auVar39 ^ auVar114,0);
    auVar87._8_8_ = 0;
    auVar87._0_8_ = param_2[0x11];
    auVar147 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar77 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar147 = auVar147 ^ auVar87 << uVar2;
      }
    }
    auVar152 = ZEXT1664(*(undefined1 (*) [16])(param_2 + 0x16));
    auVar148 = ZEXT1664(auVar147 ^ auVar81 ^ auVar38 ^ auVar156 ^ auVar112 ^ auVar154);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar5._0_8_;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = param_2[0x12];
    auVar156 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar22 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar156 = auVar156 ^ auVar56 << uVar2;
      }
    }
    auVar141 = ZEXT1664(auVar156);
    auVar156 = vpshufb_avx(*param_3,_L_bswap_mask);
    auVar104._8_8_ = 0;
    auVar104._0_8_ = auVar5._8_8_;
    auVar126._8_8_ = 0;
    auVar126._0_8_ = param_2[0x13];
    auVar147 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar104 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar147 = auVar147 ^ auVar126 << uVar2;
      }
    }
    auVar143 = ZEXT1664(auVar147);
    uVar149 = param_2[0x14];
    uVar150 = param_2[0x15];
    auVar78._8_8_ = 0;
    auVar78._0_8_ = SUB168(auVar151 ^ auVar5,0);
    auVar88._8_8_ = 0;
    auVar88._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x16),8);
    auVar151 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar78 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar151 = auVar151 ^ auVar88 << uVar2;
      }
    }
    auVar144 = ZEXT1664(auVar151);
    auVar160 = ZEXT1664(auVar156 ^ auVar159 ^ auVar3);
    param_3 = param_3 + 8;
    uVar139 = uVar140 - 0x80;
  } while (0x7f < uVar140);
  while( true ) {
    auVar154 = auVar160._0_16_;
    auVar156 = vpunpckhqdq_avx(auVar154,auVar154);
    auVar147 = auVar141._0_16_;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = auVar160._0_8_;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar149;
    auVar151 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar35 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar151 = auVar151 ^ auVar69 << uVar2;
      }
    }
    auVar141._0_32_ = ZEXT1632(auVar151);
    auVar142 = auVar143._0_16_;
    auVar111._8_8_ = 0;
    auVar111._0_8_ = auVar160._8_8_;
    auVar133._8_8_ = 0;
    auVar133._0_8_ = uVar150;
    auVar3 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar111 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar3 = auVar3 ^ auVar133 << uVar2;
      }
    }
    auVar143._0_32_ = ZEXT1632(auVar3);
    auVar153 = auVar144._0_16_;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = SUB168(auVar156 ^ auVar154,0);
    auVar70._8_8_ = 0;
    auVar70._0_8_ = auVar152._0_8_;
    auVar156 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar36 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar156 = auVar156 ^ auVar70 << uVar2;
      }
    }
    auVar144._0_32_ = ZEXT1632(auVar156);
    auVar151 = auVar145._0_16_ ^ auVar147 ^ auVar151;
    auVar3 = auVar146._0_16_ ^ auVar142 ^ auVar3;
    auVar156 = auVar148._0_16_ ^ auVar153 ^ auVar156 ^ auVar151 ^ auVar3;
    auVar154 = vpslldq_avx(auVar156,8);
    auVar147 = vpsrldq_avx(auVar156,8);
    auVar151 = auVar151 ^ auVar154;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = auVar151._0_8_;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = _UNK_140dfb3d8;
    auVar156 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar79 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar156 = auVar156 ^ auVar89 << uVar2;
      }
    }
    auVar151 = vpalignr_avx(auVar151,auVar151,8);
    auVar151 = auVar151 ^ auVar156;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = auVar151._0_8_;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = _UNK_140dfb3d8;
    auVar156 = (undefined1  [16])0x0;
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      if ((auVar80 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
        auVar156 = auVar156 ^ auVar90 << uVar2;
      }
    }
    auVar151 = vpalignr_avx(auVar151,auVar151,8);
    auVar156 = auVar151 ^ auVar3 ^ auVar147 ^ auVar156;
    param_4 = uVar140;
    if (uVar140 == 0) break;
L_short_avx:
    pauVar138 = param_3 + -1;
    param_3 = (undefined1 (*) [16])(*param_3 + param_4);
    uVar149 = *param_2;
    uVar150 = param_2[1];
    auVar151 = *(undefined1 (*) [16])(param_2 + 4);
    auVar152 = ZEXT1664(auVar151);
    auVar154 = vpshufb_avx(*(undefined1 (*) [16])(*pauVar138 + param_4),_L_bswap_mask);
    auVar145 = ZEXT1664(auVar141._0_16_);
    auVar146 = ZEXT1664(auVar143._0_16_);
    auVar148 = ZEXT1664(auVar144._0_16_);
    uVar140 = 0;
    if (param_4 != 0x10) {
      auVar147 = vpunpckhqdq_avx(auVar154,auVar154);
      auVar145 = ZEXT1664((undefined1  [16])0x0);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar154._0_8_;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar149;
      auVar3 = (undefined1  [16])0x0;
      for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
        if ((auVar23 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
          auVar3 = auVar3 ^ auVar57 << uVar2;
        }
      }
      auVar141._0_32_ = ZEXT1632(auVar3);
      auVar147 = auVar147 ^ auVar154;
      auVar146 = ZEXT1664((undefined1  [16])0x0);
      auVar105._8_8_ = 0;
      auVar105._0_8_ = auVar154._8_8_;
      auVar127._8_8_ = 0;
      auVar127._0_8_ = uVar150;
      auVar142 = (undefined1  [16])0x0;
      for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
        if ((auVar105 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
          auVar142 = auVar142 ^ auVar127 << uVar2;
        }
      }
      auVar143._0_32_ = ZEXT1632(auVar142);
      uVar149 = param_2[2];
      uVar150 = param_2[3];
      auVar154 = vpshufb_avx(param_3[-2],_L_bswap_mask);
      auVar148 = ZEXT1664((undefined1  [16])0x0);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = auVar147._0_8_;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = auVar151._0_8_;
      auVar147 = (undefined1  [16])0x0;
      for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
        if ((auVar24 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
          auVar147 = auVar147 ^ auVar58 << uVar2;
        }
      }
      auVar144._0_32_ = ZEXT1632(auVar147);
      auVar151 = vpsrldq_avx(auVar151,8);
      auVar152 = ZEXT1664(auVar151);
      uVar140 = 0;
      if (param_4 != 0x20) {
        auVar153 = vpunpckhqdq_avx(auVar154,auVar154);
        auVar145 = ZEXT1664(auVar3);
        auVar25._8_8_ = 0;
        auVar25._0_8_ = auVar154._0_8_;
        auVar59._8_8_ = 0;
        auVar59._0_8_ = uVar149;
        auVar112 = (undefined1  [16])0x0;
        for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
          if ((auVar25 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
            auVar112 = auVar112 ^ auVar59 << uVar2;
          }
        }
        auVar141._0_32_ = ZEXT1632(auVar112);
        auVar153 = auVar153 ^ auVar154;
        auVar146 = ZEXT1664(auVar142);
        auVar106._8_8_ = 0;
        auVar106._0_8_ = auVar154._8_8_;
        auVar128._8_8_ = 0;
        auVar128._0_8_ = uVar150;
        auVar4 = (undefined1  [16])0x0;
        for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
          if ((auVar106 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
            auVar4 = auVar4 ^ auVar128 << uVar2;
          }
        }
        auVar143._0_32_ = ZEXT1632(auVar4);
        uVar149 = param_2[6];
        uVar150 = param_2[7];
        auVar154 = vpshufb_avx(param_3[-3],_L_bswap_mask);
        auVar148 = ZEXT1664(auVar147);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = auVar153._0_8_;
        auVar60._8_8_ = 0;
        auVar60._0_8_ = auVar151._0_8_;
        auVar151 = (undefined1  [16])0x0;
        for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
          if ((auVar26 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
            auVar151 = auVar151 ^ auVar60 << uVar2;
          }
        }
        auVar144._0_32_ = ZEXT1632(auVar151);
        auVar153 = *(undefined1 (*) [16])(param_2 + 10);
        auVar152 = ZEXT1664(auVar153);
        uVar140 = 0;
        if (param_4 != 0x30) {
          auVar158 = vpunpckhqdq_avx(auVar154,auVar154);
          auVar145 = ZEXT1664(auVar3 ^ auVar112);
          auVar27._8_8_ = 0;
          auVar27._0_8_ = auVar154._0_8_;
          auVar61._8_8_ = 0;
          auVar61._0_8_ = uVar149;
          auVar37 = (undefined1  [16])0x0;
          for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
            if ((auVar27 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
              auVar37 = auVar37 ^ auVar61 << uVar2;
            }
          }
          auVar141._0_32_ = ZEXT1632(auVar37);
          auVar158 = auVar158 ^ auVar154;
          auVar146 = ZEXT1664(auVar142 ^ auVar4);
          auVar107._8_8_ = 0;
          auVar107._0_8_ = auVar154._8_8_;
          auVar129._8_8_ = 0;
          auVar129._0_8_ = uVar150;
          auVar91 = (undefined1  [16])0x0;
          for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
            if ((auVar107 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
              auVar91 = auVar91 ^ auVar129 << uVar2;
            }
          }
          auVar143._0_32_ = ZEXT1632(auVar91);
          uVar149 = *puVar1;
          uVar150 = param_2[9];
          auVar154 = vpshufb_avx(param_3[-4],_L_bswap_mask);
          auVar148 = ZEXT1664(auVar147 ^ auVar151);
          auVar28._8_8_ = 0;
          auVar28._0_8_ = auVar158._0_8_;
          auVar62._8_8_ = 0;
          auVar62._0_8_ = auVar153._0_8_;
          auVar158 = (undefined1  [16])0x0;
          for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
            if ((auVar28 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
              auVar158 = auVar158 ^ auVar62 << uVar2;
            }
          }
          auVar144._0_32_ = ZEXT1632(auVar158);
          auVar153 = vpsrldq_avx(auVar153,8);
          auVar152 = ZEXT1664(auVar153);
          uVar140 = 0;
          if (param_4 != 0x40) {
            auVar113 = vpunpckhqdq_avx(auVar154,auVar154);
            auVar37 = auVar3 ^ auVar112 ^ auVar37;
            auVar145 = ZEXT1664(auVar37);
            auVar29._8_8_ = 0;
            auVar29._0_8_ = auVar154._0_8_;
            auVar63._8_8_ = 0;
            auVar63._0_8_ = uVar149;
            auVar3 = (undefined1  [16])0x0;
            for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
              if ((auVar29 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                auVar3 = auVar3 ^ auVar63 << uVar2;
              }
            }
            auVar141._0_32_ = ZEXT1632(auVar3);
            auVar113 = auVar113 ^ auVar154;
            auVar91 = auVar142 ^ auVar4 ^ auVar91;
            auVar146 = ZEXT1664(auVar91);
            auVar108._8_8_ = 0;
            auVar108._0_8_ = auVar154._8_8_;
            auVar130._8_8_ = 0;
            auVar130._0_8_ = uVar150;
            auVar142 = (undefined1  [16])0x0;
            for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
              if ((auVar108 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                auVar142 = auVar142 ^ auVar130 << uVar2;
              }
            }
            auVar143._0_32_ = ZEXT1632(auVar142);
            uVar149 = param_2[0xc];
            uVar150 = param_2[0xd];
            auVar154 = vpshufb_avx(param_3[-5],_L_bswap_mask);
            auVar158 = auVar147 ^ auVar151 ^ auVar158;
            auVar148 = ZEXT1664(auVar158);
            auVar30._8_8_ = 0;
            auVar30._0_8_ = auVar113._0_8_;
            auVar64._8_8_ = 0;
            auVar64._0_8_ = auVar153._0_8_;
            auVar151 = (undefined1  [16])0x0;
            for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
              if ((auVar30 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                auVar151 = auVar151 ^ auVar64 << uVar2;
              }
            }
            auVar144._0_32_ = ZEXT1632(auVar151);
            auVar147 = *(undefined1 (*) [16])(param_2 + 0x10);
            auVar152 = ZEXT1664(auVar147);
            uVar140 = 0;
            if (param_4 != 0x50) {
              auVar153 = vpunpckhqdq_avx(auVar154,auVar154);
              auVar37 = auVar37 ^ auVar3;
              auVar145 = ZEXT1664(auVar37);
              auVar31._8_8_ = 0;
              auVar31._0_8_ = auVar154._0_8_;
              auVar65._8_8_ = 0;
              auVar65._0_8_ = uVar149;
              auVar3 = (undefined1  [16])0x0;
              for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
                if ((auVar31 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                  auVar3 = auVar3 ^ auVar65 << uVar2;
                }
              }
              auVar141._0_32_ = ZEXT1632(auVar3);
              auVar153 = auVar153 ^ auVar154;
              auVar91 = auVar91 ^ auVar142;
              auVar146 = ZEXT1664(auVar91);
              auVar109._8_8_ = 0;
              auVar109._0_8_ = auVar154._8_8_;
              auVar131._8_8_ = 0;
              auVar131._0_8_ = uVar150;
              auVar142 = (undefined1  [16])0x0;
              for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
                if ((auVar109 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                  auVar142 = auVar142 ^ auVar131 << uVar2;
                }
              }
              auVar143._0_32_ = ZEXT1632(auVar142);
              uVar149 = param_2[0xe];
              uVar150 = param_2[0xf];
              auVar154 = vpshufb_avx(param_3[-6],_L_bswap_mask);
              auVar158 = auVar158 ^ auVar151;
              auVar148 = ZEXT1664(auVar158);
              auVar32._8_8_ = 0;
              auVar32._0_8_ = auVar153._0_8_;
              auVar66._8_8_ = 0;
              auVar66._0_8_ = auVar147._0_8_;
              auVar151 = (undefined1  [16])0x0;
              for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
                if ((auVar32 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                  auVar151 = auVar151 ^ auVar66 << uVar2;
                }
              }
              auVar144._0_32_ = ZEXT1632(auVar151);
              auVar147 = vpsrldq_avx(auVar147,8);
              auVar152 = ZEXT1664(auVar147);
              uVar140 = 0;
              if (param_4 != 0x60) {
                auVar153 = vpunpckhqdq_avx(auVar154,auVar154);
                auVar145 = ZEXT1664(auVar37 ^ auVar3);
                auVar33._8_8_ = 0;
                auVar33._0_8_ = auVar154._0_8_;
                auVar67._8_8_ = 0;
                auVar67._0_8_ = uVar149;
                auVar3 = (undefined1  [16])0x0;
                for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
                  if ((auVar33 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                    auVar3 = auVar3 ^ auVar67 << uVar2;
                  }
                }
                auVar141._0_32_ = ZEXT1632(auVar3);
                auVar153 = auVar153 ^ auVar154;
                auVar146 = ZEXT1664(auVar91 ^ auVar142);
                auVar110._8_8_ = 0;
                auVar110._0_8_ = auVar154._8_8_;
                auVar132._8_8_ = 0;
                auVar132._0_8_ = uVar150;
                auVar154 = (undefined1  [16])0x0;
                for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
                  if ((auVar110 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                    auVar154 = auVar154 ^ auVar132 << uVar2;
                  }
                }
                auVar143._0_32_ = ZEXT1632(auVar154);
                uVar149 = param_2[0x12];
                uVar150 = param_2[0x13];
                auVar154 = vpshufb_avx(param_3[-7],_L_bswap_mask);
                auVar148 = ZEXT1664(auVar158 ^ auVar151);
                auVar34._8_8_ = 0;
                auVar34._0_8_ = auVar153._0_8_;
                auVar68._8_8_ = 0;
                auVar68._0_8_ = auVar147._0_8_;
                auVar151 = (undefined1  [16])0x0;
                for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
                  if ((auVar34 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
                    auVar151 = auVar151 ^ auVar68 << uVar2;
                  }
                }
                auVar144._0_32_ = ZEXT1632(auVar151);
                auVar152 = ZEXT864(param_2[0x17]);
                uVar140 = param_4 - 0x70;
              }
            }
          }
        }
      }
    }
L_tail_avx:
    auVar160 = ZEXT1664(auVar154 ^ auVar156);
  }
  auVar156 = vpshufb_avx(auVar156,_L_bswap_mask);
  *param_1 = auVar156;
  return;
}

