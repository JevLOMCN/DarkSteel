// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// SHA1_Final @ 14f6f7ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA1_Final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x17];
  puVar1 = param_2 + 7;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    sha1_block_data_order(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x1b);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x17);
  *(undefined1 *)((longlong)param_2 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x5b) = *(undefined1 *)(param_2 + 5);
  sha1_block_data_order(param_2,puVar1,1);
  param_2[0x17] = 0;
  OPENSSL_cleanse(puVar1,0x40);
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
  return 1;
}

// SHA1_Init @ 14f6f7e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA1_Init(undefined4 *param_1)

{
  memset(param_1,0,0x60);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}

// SHA1_Transform @ 14f6f7e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA1_Transform(undefined8 param_1,undefined8 param_2)

{
  sha1_block_data_order(param_1,param_2,1);
  return;
}

// SHA1_Update @ 14f6f7eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA1_Update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x14) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x14)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    *(uint *)(param_1 + 0x14) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x1c);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      sha1_block_data_order(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      sha1_block_data_order(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      memcpy((void *)(param_1 + 0x1c),param_2,param_3);
    }
  }
  return 1;
}

