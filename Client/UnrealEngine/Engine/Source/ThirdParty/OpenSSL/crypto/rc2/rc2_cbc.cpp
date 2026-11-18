// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// RC2_cbc_encrypt @ 14f73ee50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RC2_cbc_encrypt(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,uint *param_5
                    ,int param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint local_38;
  uint local_34;
  uint *local_30;
  
  if (param_6 == 0) {
    iVar5 = param_3 - 8;
    local_30 = param_5;
    uVar3 = *param_5;
    uVar4 = param_5[1];
    if (-1 < iVar5) {
      uVar9 = (ulonglong)(param_3 >> 3);
      iVar5 = iVar5 + (param_3 >> 3) * -8;
      uVar6 = uVar3;
      uVar7 = uVar4;
      do {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        param_1 = param_1 + 2;
        local_38 = uVar3;
        local_34 = uVar4;
        RC2_decrypt(&local_38,param_4);
        local_38 = local_38 ^ uVar6;
        local_34 = local_34 ^ uVar7;
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar9 = uVar9 - 1;
        uVar6 = uVar3;
        uVar7 = uVar4;
      } while (uVar9 != 0);
    }
    puVar1 = local_30;
    uVar6 = uVar3;
    uVar7 = uVar4;
    if (iVar5 != -8) {
      uVar6 = *param_1;
      uVar7 = param_1[1];
      local_38 = uVar6;
      local_34 = uVar7;
      RC2_decrypt(&local_38,param_4);
      local_38 = local_38 ^ uVar3;
      local_34 = local_34 ^ uVar4;
      param_2 = param_2 + (iVar5 + 8);
      switch(iVar5) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)local_34;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 8);
      case -7:
        param_2[-1] = (char)local_38;
      }
    }
    *(char *)puVar1 = (char)uVar6;
    *(char *)((longlong)puVar1 + 1) = (char)(uVar6 >> 8);
    *(char *)((longlong)puVar1 + 2) = (char)(uVar6 >> 0x10);
    *(char *)((longlong)puVar1 + 3) = (char)(uVar6 >> 0x18);
    *(char *)(puVar1 + 1) = (char)uVar7;
    *(char *)((longlong)puVar1 + 5) = (char)(uVar7 >> 8);
    *(char *)((longlong)puVar1 + 6) = (char)(uVar7 >> 0x10);
    *(char *)((longlong)puVar1 + 7) = (char)(uVar7 >> 0x18);
    return;
  }
  iVar5 = param_3 - 8;
  local_30 = param_5;
  local_38 = *param_5;
  local_34 = param_5[1];
  if (-1 < iVar5) {
    uVar9 = (ulonglong)(param_3 >> 3);
    iVar5 = iVar5 + (param_3 >> 3) * -8;
    do {
      puVar1 = param_1 + 1;
      local_38 = *param_1 ^ local_38;
      param_1 = param_1 + 2;
      local_34 = *puVar1 ^ local_34;
      RC2_encrypt(&local_38,param_4);
      *param_2 = (char)local_38;
      param_2[1] = (char)(local_38 >> 8);
      param_2[2] = (char)(local_38 >> 0x10);
      param_2[3] = (char)(local_38 >> 0x18);
      param_2[4] = (char)local_34;
      param_2[5] = (char)(local_34 >> 8);
      param_2[6] = (char)(local_34 >> 0x10);
      param_2[7] = (char)(local_34 >> 0x18);
      param_2 = param_2 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  puVar1 = local_30;
  if (iVar5 != -8) {
    lVar8 = (longlong)param_1 + (longlong)(iVar5 + 8);
    uVar3 = 0;
    uVar4 = 0;
    switch(iVar5) {
    case 0:
      pbVar2 = (byte *)(lVar8 + -1);
      lVar8 = lVar8 + -1;
      uVar3 = (uint)*pbVar2 << 0x18;
    case -1:
      pbVar2 = (byte *)(lVar8 + -1);
      lVar8 = lVar8 + -1;
      uVar3 = uVar3 | (uint)*pbVar2 << 0x10;
    case -2:
      pbVar2 = (byte *)(lVar8 + -1);
      lVar8 = lVar8 + -1;
      uVar3 = uVar3 | (uint)*pbVar2 << 8;
    case -3:
      pbVar2 = (byte *)(lVar8 + -1);
      lVar8 = lVar8 + -1;
      uVar3 = uVar3 | *pbVar2;
    case -4:
      pbVar2 = (byte *)(lVar8 + -1);
      lVar8 = lVar8 + -1;
      uVar4 = (uint)*pbVar2 << 0x18;
    case -5:
      pbVar2 = (byte *)(lVar8 + -1);
      lVar8 = lVar8 + -1;
      uVar4 = uVar4 | (uint)*pbVar2 << 0x10;
    case -6:
      pbVar2 = (byte *)(lVar8 + -1);
      lVar8 = lVar8 + -1;
      uVar4 = uVar4 | (uint)*pbVar2 << 8;
    case -7:
      uVar4 = uVar4 | *(byte *)(lVar8 + -1);
    default:
      local_38 = uVar4 ^ local_38;
      local_34 = uVar3 ^ local_34;
      RC2_encrypt(&local_38,param_4);
      *param_2 = (char)local_38;
      param_2[1] = (char)(local_38 >> 8);
      param_2[2] = (char)(local_38 >> 0x10);
      param_2[3] = (char)(local_38 >> 0x18);
      param_2[4] = (char)local_34;
      param_2[5] = (char)(local_34 >> 8);
      param_2[6] = (char)(local_34 >> 0x10);
      param_2[7] = (char)(local_34 >> 0x18);
    }
  }
  *(char *)puVar1 = (char)local_38;
  *(char *)((longlong)puVar1 + 1) = (char)(local_38 >> 8);
  *(char *)((longlong)puVar1 + 2) = (char)(local_38 >> 0x10);
  *(char *)((longlong)puVar1 + 3) = (char)(local_38 >> 0x18);
  *(char *)(puVar1 + 1) = (char)local_34;
  *(char *)((longlong)puVar1 + 5) = (char)(local_34 >> 8);
  *(char *)((longlong)puVar1 + 6) = (char)(local_34 >> 0x10);
  *(char *)((longlong)puVar1 + 7) = (char)(local_34 >> 0x18);
  return;
}

// RC2_decrypt @ 14f73f3b0

void RC2_decrypt(uint *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  iVar8 = 3;
  uVar10 = *param_1 & 0xffff;
  uVar9 = *param_1 >> 0x10;
  uVar11 = param_1[1] & 0xffff;
  iVar12 = 5;
  uVar2 = param_1[1] >> 0x10;
  piVar7 = (int *)(param_2 + 0xfc);
  while( true ) {
    do {
      piVar1 = piVar7 + -4;
      uVar3 = (((uVar2 << 0xb | uVar2 >> 5) - (~uVar11 & uVar10)) - (uVar11 & uVar9)) - *piVar7;
      uVar2 = uVar3 & 0xffff;
      uVar4 = (((uVar11 << 0xd | uVar11 >> 3) - (~uVar9 & uVar2)) - (uVar9 & uVar10)) - piVar7[-1];
      uVar11 = uVar4 & 0xffff;
      uVar5 = (((uVar9 << 0xe | uVar9 >> 2) - (~uVar10 & uVar11)) - (uVar2 & uVar10)) - piVar7[-2];
      uVar9 = uVar5 & 0xffff;
      uVar6 = (((uVar10 << 0xf | uVar10 >> 1) - (~uVar2 & uVar9)) - (uVar2 & uVar11)) - piVar7[-3];
      uVar10 = uVar6 & 0xffff;
      iVar12 = iVar12 + -1;
      piVar7 = piVar1;
    } while (iVar12 != 0);
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) break;
    iVar12 = (iVar8 == 2) + 5;
    uVar3 = uVar2 - *(int *)(param_2 + (ulonglong)(uVar4 & 0x3f) * 4);
    uVar2 = uVar3 & 0xffff;
    uVar11 = uVar11 - *(int *)(param_2 + (ulonglong)(uVar5 & 0x3f) * 4) & 0xffff;
    uVar9 = uVar9 - *(int *)(param_2 + (ulonglong)(uVar6 & 0x3f) * 4) & 0xffff;
    uVar10 = uVar10 - *(int *)(param_2 + (ulonglong)(uVar3 & 0x3f) * 4) & 0xffff;
  }
  *param_1 = uVar5 * 0x10000 | uVar10;
  param_1[1] = uVar3 * 0x10000 | uVar11;
  return;
}

// RC2_encrypt @ 14f73f510

void RC2_encrypt(uint *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  iVar11 = 3;
  uVar14 = *param_1 & 0xffff;
  uVar12 = *param_1 >> 0x10;
  uVar8 = param_1[1] & 0xffff;
  iVar13 = 5;
  uVar3 = param_1[1] >> 0x10;
  piVar10 = param_2;
  while( true ) {
    do {
      piVar1 = piVar10 + 4;
      uVar4 = (~uVar3 & uVar12) + (uVar3 & uVar8) + *piVar10 + uVar14 & 0xffff;
      uVar2 = uVar4 * 2;
      uVar4 = uVar4 >> 0xf;
      uVar14 = uVar4 | uVar2;
      uVar12 = (~uVar14 & uVar8) + (uVar3 & uVar14) + piVar10[1] + uVar12 & 0xffff;
      uVar12 = uVar12 >> 0xe | uVar12 * 4;
      uVar5 = (~uVar12 & uVar3) + (uVar12 & uVar14) + piVar10[2] + uVar8 & 0xffff;
      uVar9 = uVar5 >> 0xd;
      uVar5 = uVar5 * 8;
      uVar8 = uVar9 | uVar5;
      uVar6 = (~uVar8 & uVar14) + (uVar8 & uVar12) + piVar10[3] + uVar3 & 0xffff;
      uVar7 = uVar6 << 5;
      uVar6 = uVar6 >> 0xb;
      uVar3 = uVar6 | uVar7;
      iVar13 = iVar13 + -1;
      piVar10 = piVar1;
    } while (iVar13 != 0);
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) break;
    iVar13 = (iVar11 == 2) + 5;
    uVar14 = uVar14 + param_2[uVar6 | uVar7 & 0x3f];
    uVar12 = uVar12 + param_2[uVar14 & 0x3f];
    uVar8 = uVar8 + param_2[uVar12 & 0x3f];
    uVar3 = uVar3 + param_2[uVar8 & 0x3f];
  }
  param_1[1] = uVar3 << 0x10 | uVar9 | uVar5 & 0xffff;
  *param_1 = uVar12 << 0x10 | uVar4 | uVar2 & 0xffff;
  return;
}

