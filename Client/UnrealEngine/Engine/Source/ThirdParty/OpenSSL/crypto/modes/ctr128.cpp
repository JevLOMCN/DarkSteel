// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// CRYPTO_ctr128_encrypt @ 14f72cae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ctr128_encrypt
               (byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
               ulonglong *param_6,uint *param_7,code *param_8)

{
  byte bVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint local_58;
  
  local_58 = *param_7;
  for (; (local_58 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)local_58 + (longlong)param_6) ^ bVar1;
    param_2 = param_2 + 1;
    local_58 = local_58 + 1 & 0xf;
  }
  iVar11 = 0x10;
  uVar7 = 1;
  if (0xf < param_3) {
    uVar4 = param_3 >> 4;
    local_58 = 0;
    param_3 = param_3 + uVar4 * -0x10;
    lVar12 = (longlong)param_2 - (longlong)param_6;
    lVar10 = (longlong)param_1 - (longlong)param_6;
    param_2 = param_2 + uVar4 * 0x10;
    param_1 = param_1 + uVar4 * 0x10;
    do {
      (*param_8)(param_5,param_6,param_4);
      puVar5 = (undefined1 *)(param_5 + 0x10);
      uVar3 = 1;
      iVar9 = 0x10;
      do {
        iVar8 = iVar9;
        bVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = (char)(uVar3 + bVar1);
        uVar3 = uVar3 + bVar1 >> 8;
        iVar9 = iVar8 + -1;
      } while (iVar9 != 0);
      uVar6 = (ulonglong)(iVar8 + 1);
      puVar2 = param_6;
      do {
        *(ulonglong *)(lVar12 + (longlong)puVar2) =
             *(ulonglong *)(lVar10 + (longlong)puVar2) ^ *puVar2;
        puVar2 = puVar2 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar12 = lVar12 + 0x10;
      lVar10 = lVar10 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_3 == 0) {
    *param_7 = local_58;
  }
  else {
    (*param_8)(param_5,param_6,param_4);
    puVar5 = (undefined1 *)(param_5 + 0x10);
    do {
      bVar1 = puVar5[-1];
      puVar5 = puVar5 + -1;
      *puVar5 = (char)(uVar7 + bVar1);
      uVar7 = uVar7 + bVar1 >> 8;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    do {
      uVar4 = (ulonglong)local_58;
      local_58 = local_58 + 1;
      param_2[uVar4] = param_1[uVar4] ^ *(byte *)(uVar4 + (longlong)param_6);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    *param_7 = local_58;
  }
  return;
}

// CRYPTO_ctr128_encrypt_ctr32 @ 14f72cce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ctr128_encrypt_ctr32
               (byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
               undefined8 *param_6,uint *param_7,code *param_8)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint local_res18;
  
  uVar5 = *param_7;
  for (; (uVar5 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)uVar5 + (longlong)param_6) ^ bVar2;
    param_2 = param_2 + 1;
    uVar5 = uVar5 + 1 & 0xf;
  }
  uVar6 = 1;
  uVar3 = *(uint *)(param_5 + 0xc);
  puVar10 = (uint *)(param_5 + 0xc);
  iVar9 = 0xc;
  local_res18 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  for (; 0xf < param_3; param_3 = param_3 + uVar7 * -0x10) {
    uVar7 = param_3 >> 4;
    if (0x10000000 < uVar7) {
      uVar7 = 0x10000000;
    }
    local_res18 = local_res18 + (int)uVar7;
    if (local_res18 < uVar7) {
      uVar7 = uVar7 - local_res18;
      local_res18 = 0;
    }
    (*param_8)(param_1,param_2,uVar7,param_4,param_5);
    *puVar10 = local_res18 >> 0x18 | (local_res18 & 0xff0000) >> 8 | (local_res18 & 0xff00) << 8 |
               local_res18 << 0x18;
    if (local_res18 == 0) {
      uVar3 = 1;
      puVar4 = puVar10;
      iVar8 = iVar9;
      do {
        pbVar1 = (byte *)((longlong)puVar4 + -1);
        puVar4 = (uint *)((longlong)puVar4 + -1);
        uVar3 = uVar3 + *pbVar1;
        *(char *)puVar4 = (char)uVar3;
        uVar3 = uVar3 >> 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    param_2 = param_2 + uVar7 * 0x10;
    param_1 = param_1 + uVar7 * 0x10;
  }
  if (param_3 == 0) {
    *param_7 = uVar5;
  }
  else {
    *param_6 = 0;
    param_6[1] = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    local_res18 = local_res18 + 1;
    *puVar10 = local_res18 >> 0x18 | (local_res18 & 0xff0000) >> 8 | (local_res18 & 0xff00) << 8 |
               local_res18 * 0x1000000;
    if (local_res18 == 0) {
      do {
        pbVar1 = (byte *)((longlong)puVar10 + -1);
        puVar10 = (uint *)((longlong)puVar10 + -1);
        uVar6 = uVar6 + *pbVar1;
        *(char *)puVar10 = (char)uVar6;
        uVar6 = uVar6 >> 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    do {
      uVar7 = (ulonglong)uVar5;
      uVar5 = uVar5 + 1;
      param_2[uVar7] = param_1[uVar7] ^ *(byte *)(uVar7 + (longlong)param_6);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    *param_7 = uVar5;
  }
  return;
}

