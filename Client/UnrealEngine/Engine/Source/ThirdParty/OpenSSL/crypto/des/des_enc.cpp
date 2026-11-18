// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// DES_decrypt3 @ 14f7381f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_decrypt3(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 * 2 ^ uVar3;
  DES_encrypt2(param_1,param_4,0);
  DES_encrypt2(param_1,param_3,1);
  DES_encrypt2(param_1,param_2,0);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 * 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 << 4 ^ uVar3;
  return;
}

// DES_ede3_cbc_encrypt @ 14f738350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_ede3_cbc_encrypt
               (uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,undefined8 param_5
               ,undefined8 param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_res8;
  uint local_resc;
  undefined1 *local_res10;
  
  if (param_8 == 0) {
    iVar6 = param_3 - 8;
    local_res10 = (undefined1 *)((longlong)param_7 + 1);
    uVar4 = *param_7;
    uVar5 = param_7[1];
    if (-1 < iVar6) {
      uVar10 = (ulonglong)(param_3 >> 3);
      iVar6 = iVar6 + (param_3 >> 3) * -8;
      uVar7 = uVar4;
      uVar8 = uVar5;
      do {
        uVar4 = *param_1;
        uVar5 = param_1[1];
        param_1 = param_1 + 2;
        local_res8 = uVar4;
        local_resc = uVar5;
        DES_decrypt3(&local_res8,param_4,param_5,param_6);
        local_res8 = local_res8 ^ uVar7;
        local_resc = local_resc ^ uVar8;
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
        param_2 = param_2 + 8;
        uVar10 = uVar10 - 1;
        uVar7 = uVar4;
        uVar8 = uVar5;
      } while (uVar10 != 0);
    }
    puVar3 = local_res10;
    uVar7 = uVar4;
    uVar8 = uVar5;
    if (iVar6 != -8) {
      uVar7 = *param_1;
      uVar8 = param_1[1];
      local_res8 = uVar7;
      local_resc = uVar8;
      DES_decrypt3(&local_res8,param_4,param_5,param_6);
      local_res8 = local_res8 ^ uVar4;
      local_resc = local_resc ^ uVar5;
      param_2 = param_2 + (iVar6 + 8);
      switch(iVar6) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)local_resc;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 8);
      case -7:
        param_2[-1] = (char)local_res8;
      }
    }
    *(char *)param_7 = (char)uVar7;
    *puVar3 = (char)(uVar7 >> 8);
    puVar3[1] = (char)(uVar7 >> 0x10);
    puVar3[2] = (char)(uVar7 >> 0x18);
    puVar3[3] = (char)uVar8;
    puVar3[4] = (char)(uVar8 >> 8);
    puVar3[5] = (char)(uVar8 >> 0x10);
    puVar3[6] = (char)(uVar8 >> 0x18);
  }
  else {
    iVar6 = param_3 - 8;
    local_res8 = *param_7;
    local_resc = param_7[1];
    if (-1 < iVar6) {
      uVar10 = (ulonglong)(param_3 >> 3);
      iVar6 = iVar6 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_res8 = *param_1 ^ local_res8;
        param_1 = param_1 + 2;
        local_resc = *puVar1 ^ local_resc;
        DES_encrypt3(&local_res8,param_4,param_5,param_6);
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
        param_2 = param_2 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (iVar6 != -8) {
      lVar9 = (longlong)param_1 + (longlong)(iVar6 + 8);
      uVar4 = 0;
      uVar5 = 0;
      switch(iVar6) {
      case 0:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar4 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar4 = uVar4 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar5 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar5 = uVar5 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar5 = uVar5 | (uint)*pbVar2 << 8;
      case -7:
        uVar5 = uVar5 | *(byte *)(lVar9 + -1);
      default:
        local_resc = uVar4 ^ local_resc;
        local_res8 = uVar5 ^ local_res8;
        DES_encrypt3(&local_res8,param_4,param_5,param_6);
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
      }
    }
    *(char *)param_7 = (char)local_res8;
    *(char *)((longlong)param_7 + 1) = (char)(local_res8 >> 8);
    *(char *)((longlong)param_7 + 2) = (char)(local_res8 >> 0x10);
    *(char *)((longlong)param_7 + 3) = (char)(local_res8 >> 0x18);
    *(char *)(param_7 + 1) = (char)local_resc;
    *(char *)((longlong)param_7 + 5) = (char)(local_resc >> 8);
    *(char *)((longlong)param_7 + 6) = (char)(local_resc >> 0x10);
    *(char *)((longlong)param_7 + 7) = (char)(local_resc >> 0x18);
  }
  return;
}

// DES_encrypt1 @ 14f7388e0

void DES_encrypt1(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar3 = *param_1 ^ uVar2;
  uVar5 = param_1[1] ^ uVar2 << 4;
  uVar2 = uVar3 >> 0x10 ^ uVar5;
  uVar5 = uVar5 ^ uVar2 & 0xffff;
  uVar3 = uVar3 ^ uVar2 << 0x10;
  uVar2 = (uVar5 >> 2 ^ uVar3) & 0x33333333;
  uVar3 = uVar3 ^ uVar2;
  uVar5 = uVar5 ^ uVar2 * 4;
  uVar2 = (uVar3 >> 8 ^ uVar5) & 0xff00ff;
  uVar5 = uVar5 ^ uVar2;
  uVar3 = uVar3 ^ uVar2 << 8;
  uVar2 = (uVar5 >> 1 ^ uVar3) & 0x55555555;
  uVar3 = uVar2 ^ uVar3;
  uVar3 = uVar3 >> 0x1d | uVar3 << 3;
  uVar5 = uVar2 * 2 ^ uVar5;
  uVar2 = uVar5 >> 0x1d | uVar5 << 3;
  if (param_3 == 0) {
    uVar1 = param_2[0x1e] ^ uVar3;
    uVar5 = (param_2[0x1f] ^ uVar3) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x1f] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x1d] ^ uVar2) >> 4;
    uVar1 = param_2[0x1c] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x1d] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1a] ^ uVar3;
    uVar5 = (param_2[0x1b] ^ uVar3) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x1b] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x19] ^ uVar2) >> 4;
    uVar1 = param_2[0x18] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x19] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x17] ^ uVar3) >> 4;
    uVar1 = param_2[0x16] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x17] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x15] ^ uVar2) >> 4;
    uVar1 = param_2[0x14] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x15] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x13] ^ uVar3) >> 4;
    uVar1 = param_2[0x12] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x13] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x11] ^ uVar2) >> 4;
    uVar1 = param_2[0x10] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x11] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0xf] ^ uVar3) >> 4;
    uVar1 = param_2[0xe] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0xf] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xc] ^ uVar2;
    uVar5 = (param_2[0xd] ^ uVar2) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0xd] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0xb] ^ uVar3) >> 4;
    uVar1 = param_2[10] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0xb] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[9] ^ uVar2) >> 4;
    uVar1 = param_2[8] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[9] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[7] ^ uVar3) >> 4;
    uVar1 = param_2[6] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[7] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[5] ^ uVar2) >> 4;
    uVar1 = param_2[4] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[5] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[2] ^ uVar3;
    uVar5 = (param_2[3] ^ uVar3) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[3] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[1] ^ uVar2) >> 4;
    uVar4 = uVar5 | (param_2[1] ^ uVar2) << 0x1c;
    uVar1 = *param_2 ^ uVar2;
    uVar5 = *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4);
  }
  else {
    uVar1 = *param_2 ^ uVar3;
    uVar5 = (param_2[1] ^ uVar3) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[1] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[3] ^ uVar2) >> 4;
    uVar1 = param_2[2] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[3] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[4] ^ uVar3;
    uVar5 = (param_2[5] ^ uVar3) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[5] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[7] ^ uVar2) >> 4;
    uVar1 = param_2[6] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[7] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[9] ^ uVar3) >> 4;
    uVar1 = param_2[8] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[9] ^ uVar3) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar5 = (param_2[0xb] ^ uVar2) >> 4;
    uVar1 = param_2[10] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0xb] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0xd] ^ uVar3) >> 4;
    uVar1 = param_2[0xc] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0xd] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0xf] ^ uVar2) >> 4;
    uVar1 = param_2[0xe] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0xf] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x11] ^ uVar3) >> 4;
    uVar1 = param_2[0x10] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x11] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x12] ^ uVar2;
    uVar5 = (param_2[0x13] ^ uVar2) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x13] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x15] ^ uVar3) >> 4;
    uVar1 = param_2[0x14] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x15] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x17] ^ uVar2) >> 4;
    uVar1 = param_2[0x16] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x17] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x19] ^ uVar3) >> 4;
    uVar1 = param_2[0x18] ^ uVar3;
    uVar2 = uVar2 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x19] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x1b] ^ uVar2) >> 4;
    uVar1 = param_2[0x1a] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x1b] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1c] ^ uVar3;
    uVar5 = (param_2[0x1d] ^ uVar3) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar5 | (param_2[0x1d] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x1f] ^ uVar2) >> 4;
    uVar4 = uVar5 | (param_2[0x1f] ^ uVar2) << 0x1c;
    uVar1 = param_2[0x1e] ^ uVar2;
    uVar5 = *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4);
  }
  uVar6 = uVar2 >> 3 | uVar2 << 0x1d;
  uVar3 = uVar3 ^ uVar5 ^ *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                  *(uint *)(&DAT_1534bb6b0 + (ulonglong)(uVar4 >> 0x1a) * 4);
  uVar3 = uVar3 >> 3 | uVar3 << 0x1d;
  uVar2 = (uVar3 >> 1 ^ uVar6) & 0x55555555;
  uVar6 = uVar6 ^ uVar2;
  uVar3 = uVar3 ^ uVar2 * 2;
  uVar2 = (uVar6 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar2;
  uVar6 = uVar6 ^ uVar2 << 8;
  uVar2 = (uVar3 >> 2 ^ uVar6) & 0x33333333;
  uVar6 = uVar6 ^ uVar2;
  uVar3 = uVar3 ^ uVar2 * 4;
  uVar2 = uVar6 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar2 & 0xffff;
  uVar6 = uVar6 ^ uVar2 << 0x10;
  uVar2 = (uVar3 >> 4 ^ uVar6) & 0xf0f0f0f;
  param_1[1] = uVar2 << 4 ^ uVar3;
  *param_1 = uVar2 ^ uVar6;
  return;
}

// DES_encrypt2 @ 14f739ce0

void DES_encrypt2(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1 >> 0x1d | *param_1 << 3;
  uVar5 = param_1[1] >> 0x1d | param_1[1] << 3;
  if (param_3 == 0) {
    uVar1 = param_2[0x1e] ^ uVar4;
    uVar2 = (param_2[0x1f] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x1f] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x1d] ^ uVar5) >> 4;
    uVar1 = param_2[0x1c] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x1d] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1a] ^ uVar4;
    uVar2 = (param_2[0x1b] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x1b] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x19] ^ uVar5) >> 4;
    uVar1 = param_2[0x18] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x19] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x17] ^ uVar4) >> 4;
    uVar1 = param_2[0x16] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x17] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x15] ^ uVar5) >> 4;
    uVar1 = param_2[0x14] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x15] ^ uVar5) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar2 = (param_2[0x13] ^ uVar4) >> 4;
    uVar1 = param_2[0x12] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x13] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x11] ^ uVar5) >> 4;
    uVar1 = param_2[0x10] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x11] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0xf] ^ uVar4) >> 4;
    uVar1 = param_2[0xe] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0xf] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xc] ^ uVar5;
    uVar2 = (param_2[0xd] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0xd] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0xb] ^ uVar4) >> 4;
    uVar1 = param_2[10] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0xb] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[9] ^ uVar5) >> 4;
    uVar1 = param_2[8] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[9] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[7] ^ uVar4) >> 4;
    uVar1 = param_2[6] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[7] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[5] ^ uVar5) >> 4;
    uVar1 = param_2[4] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[5] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[2] ^ uVar4;
    uVar2 = (param_2[3] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[3] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[1] ^ uVar5) >> 4;
    uVar3 = uVar2 | (param_2[1] ^ uVar5) << 0x1c;
    uVar1 = *param_2 ^ uVar5;
    uVar2 = *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4);
  }
  else {
    uVar1 = *param_2 ^ uVar4;
    uVar2 = (param_2[1] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[1] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[3] ^ uVar5) >> 4;
    uVar1 = param_2[2] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[3] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[4] ^ uVar4;
    uVar2 = (param_2[5] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[5] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[7] ^ uVar5) >> 4;
    uVar1 = param_2[6] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[7] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[9] ^ uVar4) >> 4;
    uVar1 = param_2[8] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[9] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0xb] ^ uVar5) >> 4;
    uVar1 = param_2[10] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0xb] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0xd] ^ uVar4) >> 4;
    uVar1 = param_2[0xc] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0xd] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0xf] ^ uVar5) >> 4;
    uVar1 = param_2[0xe] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0xf] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x11] ^ uVar4) >> 4;
    uVar1 = param_2[0x10] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x11] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x12] ^ uVar5;
    uVar2 = (param_2[0x13] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x13] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x15] ^ uVar4) >> 4;
    uVar1 = param_2[0x14] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x15] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x17] ^ uVar5) >> 4;
    uVar1 = param_2[0x16] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x17] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x19] ^ uVar4) >> 4;
    uVar1 = param_2[0x18] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x19] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x1b] ^ uVar5) >> 4;
    uVar1 = param_2[0x1a] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x1b] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1c] ^ uVar4;
    uVar2 = (param_2[0x1d] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_1534bb6b0 +
                             (ulonglong)((uVar2 | (param_2[0x1d] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = (param_2[0x1f] ^ uVar5) >> 4;
    uVar3 = uVar2 | (param_2[0x1f] ^ uVar5) << 0x1c;
    uVar1 = param_2[0x1e] ^ uVar5;
    uVar2 = *(uint *)(&DES_SPtrans + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb0b0 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_1534bb3b0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb1b0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_1534bb4b0 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_1534bb2b0 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4);
  }
  uVar4 = uVar4 ^ uVar2 ^ *(uint *)(&DAT_1534bb5b0 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                  *(uint *)(&DAT_1534bb6b0 + (ulonglong)(uVar3 >> 0x1a) * 4);
  param_1[1] = uVar4 >> 3 | uVar4 << 0x1d;
  *param_1 = uVar5 >> 3 | uVar5 << 0x1d;
  return;
}

// DES_encrypt3 @ 14f73af60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_encrypt3(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 * 2 ^ uVar3;
  DES_encrypt2(param_1,param_2,1);
  DES_encrypt2(param_1,param_3,0);
  DES_encrypt2(param_1,param_4,1);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 * 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 << 4 ^ uVar3;
  return;
}

// DES_ncbc_encrypt @ 14f73b0c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_ncbc_encrypt(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                     uint *param_5,int param_6)

{
  uint *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  
  local_30 = (undefined1 *)0x14f73b0e4;
  if (param_6 == 0) {
    iVar6 = param_3 - 8;
    local_30 = (undefined1 *)((longlong)param_5 + 1);
    uVar4 = *param_5;
    uVar5 = param_5[1];
    if (-1 < iVar6) {
      uVar10 = (ulonglong)(param_3 >> 3);
      iVar6 = iVar6 + (param_3 >> 3) * -8;
      uVar7 = uVar4;
      uVar8 = uVar5;
      do {
        uVar4 = *param_1;
        uVar5 = param_1[1];
        param_1 = param_1 + 2;
        local_38 = uVar4;
        local_34 = uVar5;
        DES_encrypt1(&local_38,param_4,0);
        local_38 = local_38 ^ uVar7;
        local_34 = local_34 ^ uVar8;
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar10 = uVar10 - 1;
        uVar7 = uVar4;
        uVar8 = uVar5;
      } while (uVar10 != 0);
    }
    puVar3 = local_30;
    uVar7 = uVar4;
    uVar8 = uVar5;
    if (iVar6 != -8) {
      uVar7 = *param_1;
      uVar8 = param_1[1];
      local_38 = uVar7;
      local_34 = uVar8;
      DES_encrypt1(&local_38,param_4,0);
      local_38 = local_38 ^ uVar4;
      local_34 = local_34 ^ uVar5;
      param_2 = param_2 + (iVar6 + 8);
      switch(iVar6) {
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
    *(char *)param_5 = (char)uVar7;
    *puVar3 = (char)(uVar7 >> 8);
    puVar3[1] = (char)(uVar7 >> 0x10);
    puVar3[2] = (char)(uVar7 >> 0x18);
    puVar3[3] = (char)uVar8;
    puVar3[4] = (char)(uVar8 >> 8);
    puVar3[5] = (char)(uVar8 >> 0x10);
    puVar3[6] = (char)(uVar8 >> 0x18);
  }
  else {
    iVar6 = param_3 - 8;
    local_38 = *param_5;
    local_34 = param_5[1];
    if (-1 < iVar6) {
      uVar10 = (ulonglong)(param_3 >> 3);
      iVar6 = iVar6 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_38 = *param_1 ^ local_38;
        param_1 = param_1 + 2;
        local_34 = *puVar1 ^ local_34;
        DES_encrypt1(&local_38,param_4,1);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (iVar6 != -8) {
      lVar9 = (longlong)param_1 + (longlong)(iVar6 + 8);
      uVar4 = 0;
      uVar5 = 0;
      switch(iVar6) {
      case 0:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar4 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar4 = uVar4 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar4 = uVar4 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar5 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar5 = uVar5 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar9 + -1);
        lVar9 = lVar9 + -1;
        uVar5 = uVar5 | (uint)*pbVar2 << 8;
      case -7:
        uVar5 = uVar5 | *(byte *)(lVar9 + -1);
      default:
        local_34 = uVar4 ^ local_34;
        local_38 = uVar5 ^ local_38;
        DES_encrypt1(&local_38,param_4,1);
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
    *(char *)param_5 = (char)local_38;
    *(char *)((longlong)param_5 + 1) = (char)(local_38 >> 8);
    *(char *)((longlong)param_5 + 2) = (char)(local_38 >> 0x10);
    *(char *)((longlong)param_5 + 3) = (char)(local_38 >> 0x18);
    *(char *)(param_5 + 1) = (char)local_34;
    *(char *)((longlong)param_5 + 5) = (char)(local_34 >> 8);
    *(char *)((longlong)param_5 + 6) = (char)(local_34 >> 0x10);
    *(char *)((longlong)param_5 + 7) = (char)(local_34 >> 0x18);
  }
  return;
}

