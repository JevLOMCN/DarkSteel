// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// SHA384 @ 14f6f7fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * SHA384(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_118 [32];
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
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6f7fec;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_24 = 0x30;
  local_f8 = 0xcbbb9d5dc1059ed8;
  puVar1 = &DAT_1553e2b90;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_f0 = 0x629a292a367cd507;
  local_e8 = 0x9159015a3070dd17;
  local_e0 = 0x152fecd8f70e5939;
  local_d8 = 0x67332667ffc00b31;
  local_d0 = 0x8eb44a8768581511;
  local_c8 = 0xdb0c2e0d64f98fa7;
  local_c0 = 0x47b5481dbefa4fa4;
  local_b8 = 0;
  local_b0 = 0;
  local_28 = 0;
  SHA512_Update(&local_f8,param_1,param_2);
  SHA512_Final(puVar1,&local_f8);
  OPENSSL_cleanse(&local_f8,0xd8);
  return puVar1;
}

// SHA384_Final @ 14f6f8100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA384_Final(void)

{
  SHA512_Final();
  return;
}

// SHA384_Init @ 14f6f8120

undefined8 SHA384_Init(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x30;
  *param_1 = 0xcbbb9d5dc1059ed8;
  param_1[1] = 0x629a292a367cd507;
  param_1[2] = 0x9159015a3070dd17;
  param_1[3] = 0x152fecd8f70e5939;
  param_1[4] = 0x67332667ffc00b31;
  param_1[5] = 0x8eb44a8768581511;
  param_1[6] = 0xdb0c2e0d64f98fa7;
  param_1[7] = 0x47b5481dbefa4fa4;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}

// SHA384_Update @ 14f6f81c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA384_Update(void)

{
  SHA512_Update();
  return;
}

// SHA512 @ 14f6f81e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * SHA512(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_118 [32];
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
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6f81ec;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_24 = 0x40;
  local_f8 = 0x6a09e667f3bcc908;
  puVar1 = &DAT_1553e2bc0;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_f0 = 0xbb67ae8584caa73b;
  local_e8 = 0x3c6ef372fe94f82b;
  local_e0 = 0xa54ff53a5f1d36f1;
  local_d8 = 0x510e527fade682d1;
  local_d0 = 0x9b05688c2b3e6c1f;
  local_c8 = 0x1f83d9abfb41bd6b;
  local_c0 = 0x5be0cd19137e2179;
  local_b8 = 0;
  local_b0 = 0;
  local_28 = 0;
  SHA512_Update(&local_f8,param_1,param_2);
  SHA512_Final(puVar1,&local_f8);
  OPENSSL_cleanse(&local_f8,0xd8);
  return puVar1;
}

// SHA512_Final @ 14f6f8300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA512_Final(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar2 = *(uint *)(param_2 + 0x1a);
  puVar1 = param_2 + 10;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar5 = (ulonglong)uVar2 + 1;
  if (0x70 < uVar5) {
    memset((void *)(uVar5 + (longlong)puVar1),0,0x80 - uVar5);
    uVar5 = 0;
    sha512_block_data_order(param_2,puVar1,1);
  }
  memset((void *)(uVar5 + (longlong)puVar1),0,0x70 - uVar5);
  *(undefined1 *)((longlong)param_2 + 0xcf) = *(undefined1 *)(param_2 + 8);
  *(char *)((longlong)param_2 + 0xce) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 8);
  *(char *)((longlong)param_2 + 0xcd) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
  *(char *)((longlong)param_2 + 0xcc) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 0x18);
  *(char *)((longlong)param_2 + 0xcb) = (char)((ulonglong)param_2[8] >> 0x20);
  *(char *)((longlong)param_2 + 0xca) = (char)((ulonglong)param_2[8] >> 0x28);
  *(undefined1 *)((longlong)param_2 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_2 + 199) = *(undefined1 *)(param_2 + 9);
  *(char *)((longlong)param_2 + 0xc6) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 8);
  *(char *)((longlong)param_2 + 0xc5) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 0x10);
  *(char *)((longlong)param_2 + 0xc4) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 0x18);
  *(char *)((longlong)param_2 + 0xc3) = (char)((ulonglong)param_2[9] >> 0x20);
  *(char *)((longlong)param_2 + 0xc2) = (char)((ulonglong)param_2[9] >> 0x28);
  *(undefined1 *)((longlong)param_2 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x4f);
  sha512_block_data_order(param_2,puVar1,1);
  if (param_1 == (undefined1 *)0x0) {
LAB_14f6f841f:
    uVar4 = 0;
  }
  else {
    iVar3 = *(int *)((longlong)param_2 + 0xd4);
    if (iVar3 == 0x1c) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
    }
    else if (iVar3 == 0x20) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
    }
    else if (iVar3 == 0x30) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      uVar4 = param_2[4];
      param_1[0x20] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x21] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x22] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x23] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x24] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x25] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x26] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x27] = (char)uVar4;
      uVar4 = param_2[5];
      param_1[0x28] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x29] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x2a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x2b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x2c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x2d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x2e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x2f] = (char)uVar4;
    }
    else {
      if (iVar3 != 0x40) goto LAB_14f6f841f;
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      uVar4 = param_2[4];
      param_1[0x20] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x21] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x22] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x23] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x24] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x25] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x26] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x27] = (char)uVar4;
      uVar4 = param_2[5];
      param_1[0x28] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x29] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x2a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x2b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x2c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x2d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x2e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x2f] = (char)uVar4;
      uVar4 = param_2[6];
      param_1[0x30] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x31] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x32] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x33] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x34] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x35] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x36] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x37] = (char)uVar4;
      uVar4 = param_2[7];
      param_1[0x38] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x39] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x3a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x3b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x3c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x3d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x3e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x3f] = (char)uVar4;
    }
    uVar4 = 1;
  }
  return uVar4;
}

// SHA512_Init @ 14f6f8af0

undefined8 SHA512_Init(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40;
  *param_1 = 0x6a09e667f3bcc908;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}

// SHA512_Transform @ 14f6f8b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA512_Transform(undefined8 param_1,undefined8 param_2)

{
  sha512_block_data_order(param_1,param_2,1);
  return;
}

// SHA512_Update @ 14f6f8bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA512_Update(longlong param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  void *_Dst_00;
  uint uVar1;
  ulonglong uVar2;
  
  _Dst = (void *)(param_1 + 0x50);
  if (param_3 != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x40) + param_3 * 8;
    if (uVar2 < *(ulonglong *)(param_1 + 0x40)) {
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
    }
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + (param_3 >> 0x3d);
    uVar1 = *(uint *)(param_1 + 0xd0);
    *(ulonglong *)(param_1 + 0x40) = uVar2;
    if (uVar1 != 0) {
      _Dst_00 = (void *)((ulonglong)uVar1 + (longlong)_Dst);
      uVar2 = 0x80 - (ulonglong)uVar1;
      if (param_3 < uVar2) {
        memcpy(_Dst_00,param_2,param_3);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)param_3;
        return 1;
      }
      memcpy(_Dst_00,param_2,uVar2);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      param_3 = param_3 - uVar2;
      param_2 = (void *)((longlong)param_2 + uVar2);
      sha512_block_data_order(param_1,_Dst,1);
    }
    uVar2 = param_3;
    if (0x7f < param_3) {
      sha512_block_data_order(param_1,param_2,param_3 >> 7);
      uVar2 = (ulonglong)((uint)param_3 & 0x7f);
      param_2 = (void *)((longlong)param_2 + (param_3 - uVar2));
    }
    if (uVar2 != 0) {
      memcpy(_Dst,param_2,uVar2);
      *(int *)(param_1 + 0xd0) = (int)uVar2;
    }
  }
  return 1;
}

// sha512_224_init @ 14f6f8cc0

undefined8 sha512_224_init(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x1c;
  *param_1 = 0x8c3d37c819544da2;
  param_1[1] = 0x73e1996689dcd4d6;
  param_1[2] = 0x1dfab7ae32ff9c82;
  param_1[3] = 0x679dd514582f9fcf;
  param_1[4] = 0xf6d2b697bd44da8;
  param_1[5] = 0x77e36f7304c48942;
  param_1[6] = 0x3f9d85a86a1d36c8;
  param_1[7] = 0x1112e6ad91d692a1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}

// sha512_256_init @ 14f6f8d60

undefined8 sha512_256_init(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x20;
  *param_1 = 0x22312194fc2bf72c;
  param_1[1] = 0x9f555fa3c84c64c2;
  param_1[2] = 0x2393b86b6f53b151;
  param_1[3] = 0x963877195940eabd;
  param_1[4] = 0x96283ee2a88effe3;
  param_1[5] = 0xbe5e1e2553863992;
  param_1[6] = 0x2b0199fc2c85b8aa;
  param_1[7] = 0xeb72ddc81c52ca2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}

