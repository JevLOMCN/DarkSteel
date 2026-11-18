// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// SHA224 @ 14f6a7ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * SHA224(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6a7ece;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  puVar1 = &DAT_1553e0050;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  memset(&local_98,0,0x70);
  local_98 = 0xc1059ed8;
  local_94 = 0x367cd507;
  local_90 = 0x3070dd17;
  local_8c = 0xf70e5939;
  local_88 = 0xffc00b31;
  local_84 = 0x68581511;
  local_80 = 0x64f98fa7;
  local_7c = 0xbefa4fa4;
  local_2c = 0x1c;
  SHA256_Update(&local_98,param_1,param_2);
  SHA256_Final(puVar1,&local_98);
  OPENSSL_cleanse(&local_98,0x70);
  return puVar1;
}

// SHA224_Final @ 14f6a7fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA224_Final(void)

{
  SHA256_Final();
  return;
}

// SHA224_Init @ 14f6a7fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA224_Init(undefined4 *param_1)

{
  memset(param_1,0,0x70);
  *param_1 = 0xc1059ed8;
  param_1[1] = 0x367cd507;
  param_1[2] = 0x3070dd17;
  param_1[3] = 0xf70e5939;
  param_1[4] = 0xffc00b31;
  param_1[5] = 0x68581511;
  param_1[6] = 0x64f98fa7;
  param_1[7] = 0xbefa4fa4;
  param_1[0x1b] = 0x1c;
  return 1;
}

// SHA224_Update @ 14f6a8040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA224_Update(void)

{
  SHA256_Update();
  return;
}

// SHA256 @ 14f6a8060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * SHA256(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6a806e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  puVar1 = &DAT_1553e0070;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  memset(&local_98,0,0x70);
  local_98 = 0x6a09e667;
  local_94 = 0xbb67ae85;
  local_90 = 0x3c6ef372;
  local_8c = 0xa54ff53a;
  local_88 = 0x510e527f;
  local_84 = 0x9b05688c;
  local_80 = 0x1f83d9ab;
  local_7c = 0x5be0cd19;
  local_2c = 0x20;
  SHA256_Update(&local_98,param_1,param_2);
  SHA256_Final(puVar1,&local_98);
  OPENSSL_cleanse(&local_98,0x70);
  return puVar1;
}

// SHA256_Final @ 14f6a8150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA256_Final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = param_2[0x1a];
  puVar1 = param_2 + 10;
  uVar4 = 0;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar5 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar5) {
    memset((void *)(uVar5 + (longlong)puVar1),0,0x40 - uVar5);
    uVar5 = 0;
    sha256_block_data_order(param_2,puVar1,1);
  }
  memset((void *)(uVar5 + (longlong)puVar1),0,0x38 - uVar5);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_2 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_2 + 99) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_2 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_2 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x67) = *(undefined1 *)(param_2 + 8);
  sha256_block_data_order(param_2,puVar1,1);
  param_2[0x1a] = 0;
  OPENSSL_cleanse(puVar1,0x40);
  uVar2 = param_2[0x1b];
  if (uVar2 == 0x1c) {
    uVar3 = *param_2;
    *param_1 = (char)((uint)uVar3 >> 0x18);
    param_1[1] = (char)((uint)uVar3 >> 0x10);
    param_1[2] = (char)((uint)uVar3 >> 8);
    param_1[3] = (char)uVar3;
    uVar3 = param_2[1];
    param_1[4] = (char)((uint)uVar3 >> 0x18);
    param_1[5] = (char)((uint)uVar3 >> 0x10);
    param_1[6] = (char)((uint)uVar3 >> 8);
    param_1[7] = (char)uVar3;
    uVar3 = param_2[2];
    param_1[8] = (char)((uint)uVar3 >> 0x18);
    param_1[9] = (char)((uint)uVar3 >> 0x10);
    param_1[10] = (char)((uint)uVar3 >> 8);
    param_1[0xb] = (char)uVar3;
    uVar3 = param_2[3];
    param_1[0xc] = (char)((uint)uVar3 >> 0x18);
    param_1[0xd] = (char)((uint)uVar3 >> 0x10);
    param_1[0xe] = (char)((uint)uVar3 >> 8);
    param_1[0xf] = (char)uVar3;
    uVar3 = param_2[4];
    param_1[0x10] = (char)((uint)uVar3 >> 0x18);
    param_1[0x11] = (char)((uint)uVar3 >> 0x10);
    param_1[0x12] = (char)((uint)uVar3 >> 8);
    param_1[0x13] = (char)uVar3;
    uVar3 = param_2[5];
    param_1[0x14] = (char)((uint)uVar3 >> 0x18);
    param_1[0x15] = (char)((uint)uVar3 >> 0x10);
    param_1[0x16] = (char)((uint)uVar3 >> 8);
    param_1[0x17] = (char)uVar3;
    uVar3 = param_2[6];
    param_1[0x18] = (char)((uint)uVar3 >> 0x18);
    param_1[0x19] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1a] = (char)((uint)uVar3 >> 8);
    param_1[0x1b] = (char)uVar3;
  }
  else if (uVar2 == 0x20) {
    uVar3 = *param_2;
    *param_1 = (char)((uint)uVar3 >> 0x18);
    param_1[1] = (char)((uint)uVar3 >> 0x10);
    param_1[2] = (char)((uint)uVar3 >> 8);
    param_1[3] = (char)uVar3;
    uVar3 = param_2[1];
    param_1[4] = (char)((uint)uVar3 >> 0x18);
    param_1[5] = (char)((uint)uVar3 >> 0x10);
    param_1[6] = (char)((uint)uVar3 >> 8);
    param_1[7] = (char)uVar3;
    uVar3 = param_2[2];
    param_1[8] = (char)((uint)uVar3 >> 0x18);
    param_1[9] = (char)((uint)uVar3 >> 0x10);
    param_1[10] = (char)((uint)uVar3 >> 8);
    param_1[0xb] = (char)uVar3;
    uVar3 = param_2[3];
    param_1[0xc] = (char)((uint)uVar3 >> 0x18);
    param_1[0xd] = (char)((uint)uVar3 >> 0x10);
    param_1[0xe] = (char)((uint)uVar3 >> 8);
    param_1[0xf] = (char)uVar3;
    uVar3 = param_2[4];
    param_1[0x10] = (char)((uint)uVar3 >> 0x18);
    param_1[0x11] = (char)((uint)uVar3 >> 0x10);
    param_1[0x12] = (char)((uint)uVar3 >> 8);
    param_1[0x13] = (char)uVar3;
    uVar3 = param_2[5];
    param_1[0x14] = (char)((uint)uVar3 >> 0x18);
    param_1[0x15] = (char)((uint)uVar3 >> 0x10);
    param_1[0x16] = (char)((uint)uVar3 >> 8);
    param_1[0x17] = (char)uVar3;
    uVar3 = param_2[6];
    param_1[0x18] = (char)((uint)uVar3 >> 0x18);
    param_1[0x19] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1a] = (char)((uint)uVar3 >> 8);
    param_1[0x1b] = (char)uVar3;
    uVar3 = param_2[7];
    param_1[0x1c] = (char)((uint)uVar3 >> 0x18);
    param_1[0x1d] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1e] = (char)((uint)uVar3 >> 8);
    param_1[0x1f] = (char)uVar3;
  }
  else {
    if (0x20 < uVar2) {
      return 0;
    }
    if ((uVar2 & 0xfffffffc) != 0) {
      do {
        uVar5 = (ulonglong)uVar4;
        uVar4 = uVar4 + 1;
        uVar3 = param_2[uVar5];
        *param_1 = (char)((uint)uVar3 >> 0x18);
        param_1[1] = (char)((uint)uVar3 >> 0x10);
        param_1[2] = (char)((uint)uVar3 >> 8);
        param_1[3] = (char)uVar3;
        param_1 = param_1 + 4;
      } while (uVar4 < (uint)param_2[0x1b] >> 2);
    }
  }
  return 1;
}

// SHA256_Init @ 14f6a8470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA256_Init(undefined4 *param_1)

{
  memset(param_1,0,0x70);
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  param_1[0x1b] = 0x20;
  return 1;
}

// SHA256_Transform @ 14f6a84e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA256_Transform(undefined8 param_1,undefined8 param_2)

{
  sha256_block_data_order(param_1,param_2,1);
  return;
}

// SHA256_Update @ 14f6a8500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA256_Update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x20) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      sha256_block_data_order(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      sha256_block_data_order(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      memcpy((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}

