// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// CRYPTO_gcm128_aad @ 14f72d960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_gcm128_aad(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pcVar2 = *(code **)(param_1 + 0x160);
  pcVar3 = *(code **)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar4 = *(longlong *)(param_1 + 0x30) + param_3;
  if ((0x2000000000000000 < uVar4) || (uVar4 < param_3)) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(param_1 + 0x174);
  *(ulonglong *)(param_1 + 0x30) = uVar4;
  if (uVar6 != 0) {
    do {
      if (param_3 == 0) {
        param_3 = 0;
        if (uVar6 != 0) goto LAB_14f72da62;
        break;
      }
      bVar1 = *param_2;
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
      pbVar5 = (byte *)((ulonglong)uVar6 + 0x40 + param_1);
      *pbVar5 = *pbVar5 ^ bVar1;
      uVar6 = uVar6 + 1 & 0xf;
    } while (uVar6 != 0);
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60);
  }
  uVar4 = param_3 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,uVar4);
    param_2 = param_2 + uVar4;
    param_3 = param_3 - uVar4;
  }
  if (param_3 != 0) {
    uVar6 = (uint)param_3;
    pbVar5 = (byte *)(param_1 + 0x40);
    do {
      *pbVar5 = *pbVar5 ^ pbVar5[(longlong)(param_2 + (-0x40 - param_1))];
      pbVar5 = pbVar5 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
LAB_14f72da62:
  *(uint *)(param_1 + 0x174) = uVar6;
  return 0;
}

// CRYPTO_gcm128_decrypt @ 14f72daa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_gcm128_decrypt(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res8;
  uint local_68;
  ulonglong local_48;
  
  pcVar3 = *(code **)(param_1 + 0x178);
  pcVar4 = *(code **)(param_1 + 0x168);
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  uVar8 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar8) || (uVar8 < param_4)) {
    return 0xffffffff;
  }
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar8;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  local_68 = local_res8 & 0xf;
  uVar8 = (ulonglong)local_68;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  if (local_68 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar8 != 0) goto LAB_14f72ddc6;
        break;
      }
      uVar7 = *param_2;
      param_4 = param_4 - 1;
      uVar6 = (ulonglong)local_res8;
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      local_res8 = local_res8 + 1;
      *(byte *)(uVar6 + 0x188 + param_1) = (byte)uVar7;
      *(byte *)param_3 = *(byte *)(uVar8 + 0x10 + param_1) ^ (byte)uVar7;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      local_68 = (int)uVar8 + 1U & 0xf;
      uVar8 = (ulonglong)local_68;
    } while (local_68 != 0);
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    local_48 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
      lVar10 = 0xc0;
      do {
        (*pcVar3)(param_1,param_1 + 0x10,uVar5);
        uVar9 = uVar9 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        *param_3 = *param_2 ^ *(ulonglong *)(param_1 + 0x10);
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar1 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = param_3 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      local_48 = local_48 - 1;
    } while (local_48 != 0);
    uVar8 = (ulonglong)local_68;
  }
  if (((param_4 & 0xfffffffffffffff0) != 0) &&
     ((*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_2), 0xf < param_4)) {
    uVar8 = param_4 >> 4;
    param_4 = param_4 + uVar8 * -0x10;
    do {
      (*pcVar3)(param_1,param_1 + 0x10,uVar5);
      uVar9 = uVar9 + 1;
      *(uint *)(param_1 + 0xc) =
           uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
      *param_3 = *param_2 ^ *(ulonglong *)(param_1 + 0x10);
      puVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *puVar1 ^ *(ulonglong *)(param_1 + 0x18);
      param_3 = param_3 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)local_68;
  }
  if (param_4 != 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar5);
    uVar9 = uVar9 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
    do {
      uVar7 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      bVar2 = *(byte *)(uVar8 + (longlong)param_2);
      *(byte *)(uVar7 + 0x188 + param_1) = bVar2;
      *(byte *)(uVar8 + (longlong)param_3) = *(byte *)(uVar8 + 0x10 + param_1) ^ bVar2;
      param_4 = param_4 - 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (param_4 != 0);
  }
LAB_14f72ddc6:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}

// CRYPTO_gcm128_decrypt_ctr32 @ 14f72de10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_gcm128_decrypt_ctr32
          (longlong param_1,byte *param_2,byte *param_3,ulonglong param_4,code *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res8;
  uint local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  pcVar3 = *(code **)(param_1 + 0x168);
  uVar5 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar5) || (uVar5 < param_4)) {
    return 0xffffffff;
  }
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar5;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  local_58 = local_res8 & 0xf;
  uVar5 = (ulonglong)local_58;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (local_58 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar5 != 0) goto LAB_14f72e0c8;
        break;
      }
      bVar1 = *param_2;
      param_4 = param_4 - 1;
      uVar4 = (ulonglong)local_res8;
      param_2 = param_2 + 1;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar4 + 0x188 + param_1) = bVar1;
      *param_3 = *(byte *)(uVar5 + 0x10 + param_1) ^ bVar1;
      param_3 = param_3 + 1;
      local_58 = (int)uVar5 + 1U & 0xf;
      uVar5 = (ulonglong)local_58;
    } while (local_58 != 0);
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    uVar5 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
      (*param_5)(param_2,param_3,0xc0,uVar2,param_1);
      uVar6 = uVar6 + 0xc0;
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      *(uint *)(param_1 + 0xc) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = (ulonglong)local_58;
  }
  uVar4 = param_4 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,uVar4);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar2,param_1);
    uVar6 = uVar6 + (int)(param_4 >> 4);
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    param_3 = param_3 + uVar4;
    param_2 = param_2 + uVar4;
    param_4 = param_4 - uVar4;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar2);
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    do {
      uVar4 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      bVar1 = param_2[uVar5];
      *(byte *)(uVar4 + 0x188 + param_1) = bVar1;
      param_3[uVar5] = *(byte *)(uVar5 + 0x10 + param_1) ^ bVar1;
      param_4 = param_4 - 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (param_4 != 0);
  }
LAB_14f72e0c8:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}

// CRYPTO_gcm128_encrypt @ 14f72e110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_gcm128_encrypt(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res8;
  uint local_68;
  ulonglong local_48;
  
  pcVar2 = *(code **)(param_1 + 0x178);
  pcVar3 = *(code **)(param_1 + 0x168);
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  uVar7 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar7) || (uVar7 < param_4)) {
    return 0xffffffff;
  }
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar7;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  local_68 = local_res8 & 0xf;
  uVar7 = (ulonglong)local_68;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  if (local_68 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar7 != 0) goto LAB_14f72e455;
        break;
      }
      param_4 = param_4 - 1;
      bVar6 = *(byte *)(uVar7 + 0x10 + param_1) ^ (byte)*param_2;
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      *(byte *)param_3 = bVar6;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      uVar5 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      local_68 = (int)uVar7 + 1U & 0xf;
      uVar7 = (ulonglong)local_68;
      *(byte *)(uVar5 + 0x188 + param_1) = bVar6;
    } while (local_68 != 0);
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    local_48 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      lVar10 = 0xc0;
      do {
        puVar8 = param_3;
        (*pcVar2)(param_1,param_1 + 0x10,uVar4);
        uVar9 = uVar9 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        *puVar8 = *param_2 ^ *(ulonglong *)(param_1 + 0x10);
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        puVar8[1] = *puVar1 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = puVar8 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      (*pcVar3)(param_1 + 0x40,param_1 + 0x60,puVar8 + -0x17e,0xc00);
      local_48 = local_48 - 1;
    } while (local_48 != 0);
    uVar7 = (ulonglong)local_68;
  }
  uVar5 = param_4 & 0xfffffffffffffff0;
  if (uVar5 != 0) {
    if (0xf < param_4) {
      uVar7 = param_4 >> 4;
      param_4 = param_4 + uVar7 * -0x10;
      do {
        (*pcVar2)(param_1,param_1 + 0x10,uVar4);
        uVar9 = uVar9 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        *param_3 = *param_2 ^ *(ulonglong *)(param_1 + 0x10);
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar1 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = param_3 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar7 = (ulonglong)local_68;
    }
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,(longlong)param_3 - uVar5,uVar5);
  }
  if (param_4 != 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar4);
    uVar9 = uVar9 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
    do {
      bVar6 = *(byte *)(uVar7 + (longlong)param_2) ^ *(byte *)(uVar7 + 0x10 + param_1);
      uVar5 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar7 + (longlong)param_3) = bVar6;
      *(byte *)(uVar5 + 0x188 + param_1) = bVar6;
      param_4 = param_4 - 1;
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while (param_4 != 0);
  }
LAB_14f72e455:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}

// CRYPTO_gcm128_encrypt_ctr32 @ 14f72e4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_gcm128_encrypt_ctr32
          (longlong param_1,byte *param_2,byte *param_3,ulonglong param_4,code *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res8;
  uint local_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  pcVar2 = *(code **)(param_1 + 0x168);
  uVar5 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar5) || (uVar5 < param_4)) {
    return 0xffffffff;
  }
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar5;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  local_58 = local_res8 & 0xf;
  uVar5 = (ulonglong)local_58;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (local_58 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar5 != 0) goto LAB_14f72e767;
        break;
      }
      param_4 = param_4 - 1;
      bVar4 = *(byte *)(uVar5 + 0x10 + param_1) ^ *param_2;
      param_2 = param_2 + 1;
      *param_3 = bVar4;
      param_3 = param_3 + 1;
      uVar3 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      local_58 = (int)uVar5 + 1U & 0xf;
      uVar5 = (ulonglong)local_58;
      *(byte *)(uVar3 + 0x188 + param_1) = bVar4;
    } while (local_58 != 0);
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    uVar5 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*param_5)(param_2,param_3,0xc0,uVar1,param_1);
      uVar6 = uVar6 + 0xc0;
      *(uint *)(param_1 + 0xc) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
      (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_3,0xc00);
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = (ulonglong)local_58;
  }
  uVar3 = param_4 & 0xfffffffffffffff0;
  if (uVar3 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar1,param_1);
    uVar6 = uVar6 + (int)(param_4 >> 4);
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    param_2 = param_2 + uVar3;
    param_4 = param_4 - uVar3;
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_3,uVar3);
    param_3 = param_3 + uVar3;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar1);
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    do {
      bVar4 = param_2[uVar5] ^ *(byte *)(uVar5 + 0x10 + param_1);
      uVar3 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      param_3[uVar5] = bVar4;
      *(byte *)(uVar3 + 0x188 + param_1) = bVar4;
      param_4 = param_4 - 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (param_4 != 0);
  }
LAB_14f72e767:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}

// CRYPTO_gcm128_finish @ 14f72e7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_gcm128_finish(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x170);
  pcVar5 = *(code **)(param_1 + 0x168);
  uVar9 = lVar3 << 3;
  uVar10 = lVar4 << 3;
  if (uVar2 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x174) != 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
    }
  }
  else {
    uVar7 = uVar2 + 0xf & 0xfffffff0;
    memset((void *)(param_1 + 0x188 + (ulonglong)uVar2),0,(ulonglong)(uVar7 - uVar2));
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0x30) {
      (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,0x30);
      uVar8 = 0;
    }
  }
  uVar7 = (uint)(uVar9 >> 0x18);
  uVar2 = (uint)(uVar9 >> 8);
  local_38 = ((uint)((ulonglong)lVar3 >> 0x20) & 0x1fffffff) >> 0x15 |
             ((uint)(uVar9 >> 0x20) & 0xff0000) >> 8 | uVar7 & 0xff0000 | uVar2 & 0xff000000;
  uStack_34 = uVar7 & 0xff | uVar2 & 0xff00 | (uint)(((uVar9 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar3 << 0x3b) >> 0x20);
  uVar7 = (uint)(uVar10 >> 0x18);
  uVar2 = (uint)(uVar10 >> 8);
  uStack_30 = ((uint)((ulonglong)lVar4 >> 0x20) & 0x1fffffff) >> 0x15 |
              ((uint)(uVar10 >> 0x20) & 0xff0000) >> 8 | uVar7 & 0xff0000 | uVar2 & 0xff000000;
  uStack_2c = uVar7 & 0xff | uVar2 & 0xff00 | (uint)(((uVar10 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar4 << 0x3b) >> 0x20);
  puVar1 = (uint *)(uVar8 + 0x188 + param_1);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,(int)uVar8 + 0x10);
  *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0x40) ^ *(ulonglong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x48) = *(ulonglong *)(param_1 + 0x48) ^ *(ulonglong *)(param_1 + 0x28);
  if ((param_2 == 0) || (0x10 < param_3)) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = CRYPTO_memcmp(param_1 + 0x40,param_2,param_3);
  }
  return uVar6;
}

// CRYPTO_gcm128_init @ 14f72e8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_gcm128_init(void *param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  longlong lVar4;
  
  memset(param_1,0,0x1b8);
  *(code **)((longlong)param_1 + 0x178) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x180) = param_2;
  (*param_3)((longlong)param_1 + 0x50,(longlong)param_1 + 0x50,param_2);
  lVar4 = 2;
  puVar2 = (ulonglong *)((longlong)param_1 + 0x50);
  do {
    uVar1 = *puVar2;
    *puVar2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
              | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18
              | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    lVar4 = lVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (lVar4 != 0);
  if ((DAT_15540a9f4 & 2) == 0) {
    FUN_14f72ec80((longlong)param_1 + 0x60,(longlong)param_1 + 0x50);
    *(code **)((longlong)param_1 + 0x160) = gcm_gmult_4bit;
    pcVar3 = gcm_ghash_4bit;
  }
  else if ((DAT_15540a9f4 & 0x10400000) == 0x10400000) {
    gcm_init_avx();
    *(undefined1 **)((longlong)param_1 + 0x160) = &gcm_gmult_avx;
    pcVar3 = (code *)&gcm_ghash_avx;
  }
  else {
    gcm_init_clmul();
    *(undefined1 **)((longlong)param_1 + 0x160) = &gcm_gmult_clmul;
    pcVar3 = (code *)&gcm_ghash_clmul;
  }
  *(code **)((longlong)param_1 + 0x168) = pcVar3;
  return;
}

// CRYPTO_gcm128_new @ 14f72e9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CRYPTO_gcm128_new(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_malloc(0x1b8,"crypto\\modes\\gcm128.c",0x75d);
  if (lVar1 != 0) {
    CRYPTO_gcm128_init(lVar1,param_1,param_2);
  }
  return lVar1;
}

// CRYPTO_gcm128_release @ 14f72ea60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_gcm128_release(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x1b8,"crypto\\modes\\gcm128.c",0x765);
  return;
}

// CRYPTO_gcm128_setiv @ 14f72ea90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_gcm128_setiv(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  
  pcVar1 = (code *)param_1[0x2c];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x2e] = 0;
  if (param_3 == 0xc) {
    uVar6 = 1;
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x1000000;
  }
  else {
    param_1[8] = 0;
    param_1[9] = 0;
    uVar5 = param_3;
    if (0xf < param_3) {
      uVar4 = param_3 >> 4;
      lVar7 = (longlong)param_2 + (-0x3f - (longlong)param_1);
      uVar5 = param_3 + uVar4 * -0x10;
      param_2 = param_2 + uVar4 * 2;
      do {
        pbVar2 = (byte *)(param_1 + 8);
        lVar3 = 4;
        do {
          *pbVar2 = *pbVar2 ^ pbVar2[lVar7 + -1];
          pbVar2[1] = pbVar2[1] ^ pbVar2[lVar7];
          pbVar2[2] = pbVar2[2] ^ pbVar2[lVar7 + 1];
          pbVar2[3] = pbVar2[3] ^ pbVar2[lVar7 + 2];
          pbVar2 = pbVar2 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        (*pcVar1)(param_1 + 8,param_1 + 0xc);
        lVar7 = lVar7 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (uVar5 != 0) {
      pbVar2 = (byte *)(param_1 + 8);
      do {
        *pbVar2 = *pbVar2 ^ pbVar2[(longlong)param_2 + (-0x40 - (longlong)param_1)];
        pbVar2 = pbVar2 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      (*pcVar1)(param_1 + 8,param_1 + 0xc);
    }
    uVar5 = param_3 << 3;
    param_1[9] = param_1[9] ^
                 ((param_3 & 0x1fffffffffffffff) >> 0x35 | (uVar5 & 0xff000000000000) >> 0x28 |
                  (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                  (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28
                 | param_3 << 0x3b);
    (*pcVar1)(param_1 + 8,param_1 + 0xc);
    uVar6 = *(uint *)((longlong)param_1 + 0x4c);
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  (*(code *)param_1[0x2f])(param_1,param_1 + 4,param_1[0x30]);
  uVar6 = uVar6 + 1;
  *(uint *)((longlong)param_1 + 0xc) =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
  return;
}

// CRYPTO_gcm128_tag @ 14f72ec20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_gcm128_tag(longlong param_1,void *param_2,ulonglong param_3)

{
  size_t _Size;
  
  CRYPTO_gcm128_finish(param_1,0,0);
  _Size = 0x10;
  if (param_3 < 0x11) {
    _Size = param_3;
  }
  memcpy(param_2,(void *)(param_1 + 0x40),_Size);
  return;
}

// FUN_14f72ec80 @ 14f72ec80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f72ec80(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *param_2;
  uVar6 = param_2[1];
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar6;
  uVar4 = uVar3 >> 1 ^ -(ulonglong)((uint)uVar6 & 1) & 0xe100000000000000;
  uVar1 = uVar3 << 0x3f | uVar6 >> 1;
  uVar2 = uVar1 >> 1;
  uVar3 = (uVar3 >> 1) << 0x3f | uVar2;
  uVar5 = uVar4 >> 1;
  uVar6 = uVar5 ^ -(ulonglong)((uint)(uVar6 >> 1) & 1) & 0xe100000000000000;
  uVar5 = uVar5 << 0x3f | uVar3 >> 1;
  uVar7 = uVar6 >> 1 ^ -(ulonglong)((uint)uVar2 & 1) & 0xe100000000000000;
  param_1[8] = uVar4;
  param_1[9] = uVar1;
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  param_1[4] = uVar6;
  param_1[5] = uVar3;
  uVar3 = param_1[5];
  uVar6 = param_1[4];
  uVar8 = uVar3 ^ uVar5;
  param_1[7] = uVar8;
  uVar9 = uVar6 ^ uVar7;
  param_1[2] = uVar7;
  param_1[3] = uVar5;
  param_1[6] = uVar9;
  param_1[0xc] = uVar6 ^ uVar1;
  uVar10 = param_1[2] ^ uVar1;
  uVar7 = param_1[3] ^ uVar2;
  param_1[10] = uVar10;
  param_1[0xb] = uVar7;
  param_1[0xd] = uVar3 ^ uVar2;
  param_1[0xe] = uVar9 ^ uVar1;
  uVar5 = param_1[0x10];
  uVar4 = param_1[0x11];
  param_1[0xf] = uVar8 ^ uVar2;
  param_1[0x12] = param_1[2] ^ uVar5;
  param_1[0x15] = uVar3 ^ uVar4;
  param_1[0x13] = param_1[3] ^ uVar4;
  param_1[0x17] = uVar8 ^ uVar4;
  param_1[0x14] = uVar6 ^ uVar5;
  param_1[0x16] = uVar9 ^ uVar5;
  param_1[0x1b] = uVar7 ^ uVar4;
  param_1[0x18] = param_1[8] ^ uVar5;
  param_1[0x1d] = uVar3 ^ uVar2 ^ uVar4;
  param_1[0x1f] = uVar8 ^ uVar2 ^ uVar4;
  param_1[0x19] = param_1[9] ^ uVar4;
  param_1[0x1a] = uVar10 ^ uVar5;
  param_1[0x1c] = uVar6 ^ uVar1 ^ uVar5;
  param_1[0x1e] = uVar9 ^ uVar1 ^ uVar5;
  return;
}

