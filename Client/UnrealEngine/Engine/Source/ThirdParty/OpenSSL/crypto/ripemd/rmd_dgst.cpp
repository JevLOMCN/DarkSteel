// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// RIPEMD160_Final @ 14f7b6780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RIPEMD160_Final(undefined1 *param_1,undefined4 *param_2)

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
    ripemd160_block_data_order(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_2 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_2 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x1b);
  ripemd160_block_data_order(param_2,puVar1,1);
  param_2[0x17] = 0;
  OPENSSL_cleanse(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[1];
  param_1[4] = (char)uVar3;
  param_1[5] = (char)((uint)uVar3 >> 8);
  param_1[6] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[2];
  param_1[8] = (char)uVar3;
  param_1[9] = (char)((uint)uVar3 >> 8);
  param_1[10] = (char)((uint)uVar3 >> 0x10);
  param_1[0xb] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[3];
  param_1[0xc] = (char)uVar3;
  param_1[0xd] = (char)((uint)uVar3 >> 8);
  param_1[0xe] = (char)((uint)uVar3 >> 0x10);
  param_1[0xf] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[4];
  param_1[0x10] = (char)uVar3;
  param_1[0x11] = (char)((uint)uVar3 >> 8);
  param_1[0x12] = (char)((uint)uVar3 >> 0x10);
  param_1[0x13] = (char)((uint)uVar3 >> 0x18);
  return 1;
}

// RIPEMD160_Init @ 14f7b6910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RIPEMD160_Init(undefined4 *param_1)

{
  memset(param_1,0,0x60);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}

// RIPEMD160_Transform @ 14f7b6960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RIPEMD160_Transform(undefined8 param_1,undefined8 param_2)

{
  ripemd160_block_data_order(param_1,param_2,1);
  return;
}

// RIPEMD160_Update @ 14f7b6980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RIPEMD160_Update(longlong param_1,void *param_2,size_t param_3)

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
      ripemd160_block_data_order(param_1,puVar1,1);
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
      ripemd160_block_data_order(param_1,param_2,uVar3);
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

// ripemd160_block_data_order @ 14f7b6ab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ripemd160_block_data_order(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  
  if (param_3 != 0) {
    uVar26 = param_1[1];
    iVar19 = param_1[4];
    uVar16 = param_1[3];
    uVar33 = param_1[2];
    do {
      param_3 = param_3 + -1;
      uVar23 = uVar33 << 10 | uVar33 >> 0x16;
      iVar3 = *param_2;
      uVar25 = uVar26 << 10 | uVar26 >> 0x16;
      uVar17 = (uVar33 ^ uVar16 ^ uVar26) + *param_1 + iVar3;
      iVar4 = param_2[1];
      uVar17 = (uVar17 * 0x800 | uVar17 >> 0x15) + iVar19;
      uVar27 = (uVar26 ^ uVar23 ^ uVar17) + iVar19 + iVar4;
      iVar5 = param_2[2];
      uVar27 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar16;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = (uVar27 ^ uVar25 ^ uVar17) + uVar16 + iVar5;
      iVar6 = param_2[3];
      uVar17 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar23;
      iVar7 = param_2[4];
      uVar28 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = (uVar27 ^ uVar17 ^ uVar18) + iVar6 + uVar23;
      iVar8 = param_2[5];
      uVar21 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar25;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = (uVar28 ^ uVar17 ^ uVar21) + iVar7 + uVar25;
      uVar17 = (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar18;
      iVar9 = param_2[6];
      uVar22 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar18 = (uVar27 ^ uVar21 ^ uVar17) + iVar8 + uVar18;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar28;
      uVar24 = uVar17 * 0x400 | uVar17 >> 0x16;
      iVar1 = param_2[7];
      uVar28 = (uVar22 ^ uVar17 ^ uVar18) + iVar9 + uVar28;
      uVar21 = (uVar28 * 0x80 | uVar28 >> 0x19) + uVar27;
      iVar10 = param_2[8];
      uVar27 = (uVar21 ^ uVar24 ^ uVar18) + iVar1 + uVar27;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      iVar20 = param_2[9];
      uVar28 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar17 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar22 = (uVar21 ^ uVar28 ^ uVar18) + iVar10 + uVar22;
      iVar11 = param_2[10];
      uVar27 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar24;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar24 = (uVar17 ^ uVar28 ^ uVar27) + iVar20 + uVar24;
      uVar28 = (uVar24 * 0x2000 | uVar24 >> 0x13) + uVar18;
      iVar12 = param_2[0xb];
      uVar22 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar18 = (uVar21 ^ uVar27 ^ uVar28) + iVar11 + uVar18;
      uVar27 = (uVar18 * 0x4000 | uVar18 >> 0x12) + uVar17;
      iVar13 = param_2[0xc];
      uVar17 = (uVar22 ^ uVar28 ^ uVar27) + iVar12 + uVar17;
      uVar24 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar21;
      uVar21 = (uVar17 ^ uVar24 ^ uVar27) + iVar13 + uVar21;
      iVar14 = param_2[0xd];
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      iVar2 = param_2[0xe];
      uVar28 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar22;
      uVar22 = (uVar17 ^ uVar28 ^ uVar18) + iVar14 + uVar22;
      iVar15 = param_2[0xf];
      uVar17 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar24;
      param_2 = param_2 + 0x10;
      uVar22 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar24 = (uVar27 ^ uVar28 ^ uVar17) + iVar2 + uVar24;
      uVar21 = (uVar24 * 0x200 | uVar24 >> 0x17) + uVar18;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 ^ uVar17 ^ uVar21) + iVar15 + uVar18;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar27;
      uVar27 = uVar27 + ((uVar28 ^ uVar21) & uVar18 ^ uVar28) + 0x5a827999 + iVar1;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar21 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar24 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar18) & uVar17 ^ uVar21) + 0x5a827999 + iVar7;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x40 | uVar22 >> 0x1a) + uVar28;
      uVar28 = uVar28 + ((uVar17 ^ uVar24) & uVar18 ^ uVar24) + 0x5a827999 + iVar14;
      uVar17 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar4;
      uVar18 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x5a827999 + iVar11;
      uVar24 = (uVar24 * 0x800 | uVar24 >> 0x15) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar24 ^ uVar28) + 0x5a827999 + iVar9;
      uVar17 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar24) & uVar17 ^ uVar21) + 0x5a827999 + iVar15;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar28;
      uVar28 = uVar28 + ((uVar17 ^ uVar29) & uVar18 ^ uVar29) + 0x5a827999 + iVar6;
      uVar17 = (uVar28 * 0x8000 | uVar28 >> 0x11) + uVar21;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar13;
      uVar28 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar29;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar18 ^ uVar17) & uVar28 ^ uVar18) + 0x5a827999 + iVar3;
      uVar24 = (uVar29 * 0x1000 | uVar29 >> 0x14) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((uVar22 ^ uVar28) & uVar24 ^ uVar22) + 0x5a827999 + iVar20;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar18;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar18 = uVar18 + ((uVar21 ^ uVar24) & uVar17 ^ uVar21) + 0x5a827999 + iVar8;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar22;
      uVar22 = uVar22 + ((uVar17 ^ uVar29) & uVar18 ^ uVar29) + 0x5a827999 + iVar5;
      uVar17 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar2;
      uVar18 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x5a827999 + iVar12;
      uVar24 = (uVar29 * 0x2000 | uVar29 >> 0x13) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar24 ^ uVar28) + 0x5a827999 + iVar10;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar6;
      uVar18 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar24 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6ed9eba1 + iVar11;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar2;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar7;
      uVar24 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar20;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar17 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar22;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar15;
      uVar18 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar29) + 0x6ed9eba1 + iVar10;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar4;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar29;
      uVar29 = uVar29 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar5;
      uVar24 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar27;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar1;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar3;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x2000 | uVar22 >> 0x13) + uVar28;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar29) + 0x6ed9eba1 + iVar9;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar14;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar29;
      uVar29 = uVar29 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar12;
      uVar24 = (uVar29 * 0x1000 | uVar29 >> 0x14) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar8;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar13;
      uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar4;
      uVar17 = (uVar28 * 0x800 | uVar28 >> 0x15) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar20;
      uVar18 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar12;
      uVar24 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar11;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar3;
      uVar18 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar10;
      uVar17 = (uVar28 * 0x8000 | uVar28 >> 0x11) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar13;
      uVar18 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar7;
      uVar24 = (uVar29 * 0x100 | uVar29 >> 0x18) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar14;
      uVar17 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar6;
      uVar18 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar1;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar15;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar2;
      uVar24 = (uVar29 * 0x100 | uVar29 >> 0x18) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar8;
      uVar17 = (uVar27 * 0x40 | uVar27 >> 0x1a) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar9;
      uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar5;
      uVar17 = (uVar28 * 0x1000 | uVar28 >> 0x14) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0xa953fd4e + iVar7;
      uVar18 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((~uVar22 | uVar17) ^ uVar18) + 0xa953fd4e + iVar3;
      uVar24 = (uVar29 * 0x8000 | uVar29 >> 0x11) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar24) + 0xa953fd4e + iVar8;
      uVar17 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar24) ^ uVar17) + 0xa953fd4e + iVar20;
      uVar18 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar29 | uVar17) ^ uVar18) + 0xa953fd4e + iVar1;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0xa953fd4e + iVar13;
      uVar28 = (uVar21 * 0x100 | uVar21 >> 0x18) + uVar29;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((~uVar22 | uVar17) ^ uVar28) + 0xa953fd4e + iVar5;
      uVar24 = (uVar29 * 0x2000 | uVar29 >> 0x13) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar28) ^ uVar24) + 0xa953fd4e + iVar11;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar24) ^ uVar17) + 0xa953fd4e + iVar2;
      uVar27 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar18;
      uVar18 = uVar18 + ((~uVar29 | uVar17) ^ uVar27) + 0xa953fd4e + iVar4;
      uVar17 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar21;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = uVar21 + ((~uVar17 | uVar27) ^ uVar22) + 0xa953fd4e + iVar6;
      uVar28 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar29;
      uVar27 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar29 = uVar29 + ((~uVar18 | uVar22) ^ uVar28) + iVar10 + -0x56ac02b2;
      uVar21 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar17;
      uVar22 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = ((~uVar27 | uVar28) ^ uVar21) + iVar12 + -0x56ac02b2 + uVar17;
      uVar29 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar28 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar18;
      uVar17 = uVar18 + 0xa953fd4e + ((~uVar22 | uVar21) ^ uVar28) + iVar9;
      uVar30 = (uVar17 * 0x100 | uVar17 >> 0x18) + uVar27;
      uVar31 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = uVar27 + 0xa953fd4e + ((~uVar29 | uVar28) ^ uVar30) + iVar15;
      uVar34 = (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar22;
      uVar32 = uVar22 + 0xa953fd4e + ((~uVar31 | uVar30) ^ uVar34) + iVar14;
      uVar17 = iVar8 + 0x50a28be6 + ((~uVar16 | uVar33) ^ uVar26) + *param_1;
      uVar17 = (uVar17 * 0x100 | uVar17 >> 0x18) + iVar19;
      uVar27 = ((uVar26 | ~uVar23) ^ uVar17) + iVar19 + 0x50a28be6 + iVar2;
      uVar18 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = iVar1 + 0x50a28be6 + ((~uVar25 | uVar17) ^ uVar18) + uVar16;
      uVar17 = (uVar17 * 0x200 | uVar17 >> 0x17) + uVar23;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar18 = uVar23 + 0x50a28be6 + ((~uVar27 | uVar18) ^ uVar17) + iVar3;
      uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar25;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = uVar25 + 0x50a28be6 + ((~uVar22 | uVar17) ^ uVar18) + iVar20;
      uVar23 = (uVar17 * 0x2000 | uVar17 >> 0x13) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar23) + 0x50a28be6 + iVar5;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar23) ^ uVar17) + 0x50a28be6 + iVar12;
      uVar18 = (uVar22 * 0x8000 | uVar22 >> 0x11) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar24 | uVar17) ^ uVar18) + 0x50a28be6 + iVar7;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0x50a28be6 + iVar14;
      uVar28 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar24;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar18 | uVar17) ^ uVar28) + 0x50a28be6 + iVar9;
      uVar23 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((~uVar22 | uVar28) ^ uVar23) + 0x50a28be6 + iVar15;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar18;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar18 = uVar18 + ((~uVar21 | uVar23) ^ uVar17) + 0x50a28be6 + iVar10;
      uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar22;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar18) + 0x50a28be6 + iVar4;
      uVar17 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0x50a28be6 + iVar11;
      uVar18 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar22 | uVar17) ^ uVar18) + 0x50a28be6 + iVar6;
      uVar23 = (uVar24 * 0x1000 | uVar24 >> 0x14) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar23) + 0x50a28be6 + iVar13;
      uVar17 = (uVar27 * 0x40 | uVar27 >> 0x1a) + uVar22;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar9;
      uVar18 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar28;
      uVar23 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar23 ^ uVar17) + 0x5c4dd124 + iVar12;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar6;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar23;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = uVar23 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar1;
      uVar23 = (uVar23 * 0x80 | uVar23 >> 0x19) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar23) & uVar28 ^ uVar18) + 0x5c4dd124 + iVar3;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar14;
      uVar18 = (uVar22 * 0x100 | uVar22 >> 0x18) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar24 ^ uVar17) + 0x5c4dd124 + iVar8;
      uVar17 = (uVar28 * 0x200 | uVar28 >> 0x17) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar11;
      uVar18 = (uVar21 * 0x800 | uVar21 >> 0x15) + uVar24;
      uVar24 = uVar24 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar2;
      uVar23 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar23) & uVar28 ^ uVar18) + 0x5c4dd124 + iVar15;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar10;
      uVar18 = (uVar22 * 0x1000 | uVar22 >> 0x14) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar24 ^ uVar17) + 0x5c4dd124 + iVar13;
      uVar17 = (uVar28 * 0x80 | uVar28 >> 0x19) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar7;
      uVar28 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar24;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar17 ^ uVar28) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar20;
      uVar23 = (uVar24 * 0x8000 | uVar24 >> 0x11) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar23) & uVar18 ^ uVar28) + 0x5c4dd124 + iVar4;
      uVar17 = (uVar27 * 0x2000 | uVar27 >> 0x13) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar5;
      uVar27 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar18;
      uVar18 = uVar18 + ((~uVar17 | uVar27) ^ uVar24) + 0x6d703ef3 + iVar15;
      uVar22 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar21;
      uVar17 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar22) ^ uVar17) + 0x6d703ef3 + iVar8;
      uVar27 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar24;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar24 = uVar24 + ((~uVar22 | uVar27) ^ uVar18) + 0x6d703ef3 + iVar4;
      uVar21 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar22 = (uVar24 * 0x8000 | uVar24 >> 0x11) + uVar17;
      uVar17 = uVar17 + ((~uVar27 | uVar22) ^ uVar28) + 0x6d703ef3 + iVar6;
      uVar17 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar18;
      uVar23 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar18 = uVar18 + ((~uVar22 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar1;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar28;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar23) + 0x6d703ef3 + iVar2;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6d703ef3 + iVar9;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar23;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = uVar23 + ((~uVar17 | uVar18) ^ uVar22) + 0x6d703ef3 + iVar20;
      uVar23 = (uVar23 * 0x4000 | uVar23 >> 0x12) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar23) ^ uVar28) + 0x6d703ef3 + iVar12;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar23 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar10;
      uVar18 = (uVar22 * 0x2000 | uVar22 >> 0x13) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6d703ef3 + iVar13;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6d703ef3 + iVar5;
      uVar18 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar17 | uVar18) ^ uVar22) + 0x6d703ef3 + iVar11;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar23 = (uVar24 * 0x2000 | uVar24 >> 0x13) + uVar27;
      uVar27 = uVar27 + ((~uVar18 | uVar23) ^ uVar28) + 0x6d703ef3 + iVar3;
      uVar17 = (uVar27 * 0x2000 | uVar27 >> 0x13) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar23 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar7;
      uVar18 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6d703ef3 + iVar14;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar27) & uVar17 ^ uVar27) + 0x7a6d76e9 + iVar10;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x7a6d76e9 + iVar9;
      uVar23 = (uVar24 * 0x20 | uVar24 >> 0x1b) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar23 ^ uVar28) + 0x7a6d76e9 + iVar7;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar23) & uVar17 ^ uVar21) + 0x7a6d76e9 + iVar4;
      uVar22 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar24 ^ uVar17) & uVar22 ^ uVar24) + 0x7a6d76e9 + iVar6;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = (uVar28 * 0x4000 | uVar28 >> 0x12) + uVar21;
      uVar21 = uVar21 + ((uVar22 ^ uVar27) & uVar17 ^ uVar27) + 0x7a6d76e9 + iVar12;
      uVar21 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar24 = uVar24 + ((uVar18 ^ uVar17) & uVar21 ^ uVar18) + iVar15 + 0x7a6d76e9;
      uVar23 = (uVar24 * 0x40 | uVar24 >> 0x1a) + uVar27;
      uVar17 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = ((uVar28 ^ uVar21) & uVar23 ^ uVar28) + 0x7a6d76e9 + iVar3 + uVar27;
      uVar27 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar18;
      uVar18 = ((uVar22 ^ uVar23) & uVar27 ^ uVar22) + 0x7a6d76e9 + iVar8 + uVar18;
      uVar23 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar28;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar28 = iVar13 + 0x7a6d76e9 + ((uVar17 ^ uVar27) & uVar23 ^ uVar17) + uVar28;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = (uVar28 * 0x200 | uVar28 >> 0x17) + uVar22;
      uVar21 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar22 = ((uVar23 ^ uVar18) & uVar27 ^ uVar18) + 0x7a6d76e9 + iVar5 + uVar22;
      uVar22 = (uVar22 * 0x1000 | uVar22 >> 0x14) + uVar17;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = ((uVar24 ^ uVar27) & uVar22 ^ uVar24) + 0x7a6d76e9 + iVar14 + uVar17;
      uVar27 = (uVar17 * 0x200 | uVar17 >> 0x17) + uVar18;
      uVar17 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar18 = uVar18 + 0x7a6d76e9 + ((uVar21 ^ uVar22) & uVar27 ^ uVar21) + iVar20;
      uVar22 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar24;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar24 = ((uVar28 ^ uVar27) & uVar22 ^ uVar28) + 0x7a6d76e9 + iVar1 + uVar24;
      uVar27 = (uVar24 * 0x20 | uVar24 >> 0x1b) + uVar21;
      uVar23 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = ((uVar17 ^ uVar22) & uVar27 ^ uVar17) + 0x7a6d76e9 + iVar11 + uVar21;
      uVar22 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar28;
      uVar21 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar28 = ((uVar27 ^ uVar18) & uVar22 ^ uVar18) + 0x7a6d76e9 + iVar2 + uVar28;
      uVar27 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar17;
      uVar17 = (uVar23 ^ uVar22 ^ uVar27) + iVar13 + uVar17;
      uVar17 = (uVar17 * 0x100 | uVar17 >> 0x18) + uVar18;
      uVar18 = (uVar21 ^ uVar27 ^ uVar17) + iVar15 + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar23;
      uVar28 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = (uVar28 ^ uVar17 ^ uVar18) + iVar11 + uVar23;
      uVar22 = (uVar23 * 0x1000 | uVar23 >> 0x14) + uVar21;
      uVar17 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = (uVar22 ^ uVar27 ^ uVar18) + iVar7 + uVar21;
      uVar21 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar28;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar28 = (uVar22 ^ uVar21 ^ uVar17) + iVar4 + uVar28;
      uVar22 = (uVar28 * 0x1000 | uVar28 >> 0x14) + uVar27;
      uVar28 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar27 = (uVar18 ^ uVar21 ^ uVar22) + iVar8 + uVar27;
      uVar27 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar17;
      uVar21 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = (uVar28 ^ uVar22 ^ uVar27) + iVar10 + uVar17;
      uVar23 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar18;
      uVar18 = (uVar21 ^ uVar27 ^ uVar17) + iVar1 + uVar18;
      uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar28;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = (uVar18 ^ uVar23 ^ uVar17) + iVar9 + uVar28;
      uVar17 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar21;
      uVar21 = (uVar18 ^ uVar17 ^ uVar27) + iVar5 + uVar21;
      uVar28 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar23;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = (uVar22 ^ uVar17 ^ uVar28) + iVar14 + uVar23;
      uVar21 = (uVar23 * 0x40 | uVar23 >> 0x1a) + uVar27;
      uVar27 = (uVar18 ^ uVar28 ^ uVar21) + iVar2 + uVar27;
      uVar23 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar22;
      uVar27 = uVar28 * 0x400 | uVar28 >> 0x16;
      iVar1 = *param_1;
      uVar17 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar22 = (uVar27 ^ uVar21 ^ uVar23) + iVar3 + uVar22;
      uVar22 = (uVar22 * 0x8000 | uVar22 >> 0x11) + uVar18;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar18 = (uVar22 ^ uVar17 ^ uVar23) + iVar6 + uVar18;
      uVar21 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x13) + uVar27;
      uVar27 = (uVar22 ^ uVar18 ^ uVar21) + iVar20 + uVar27;
      iVar20 = iVar19 + uVar29;
      uVar22 = uVar16 + uVar31 + uVar21;
      uVar16 = (uVar27 * 0x800 | uVar27 >> 0x15) + uVar17;
      param_1[2] = uVar22;
      *param_1 = (uVar18 * 0x400 | uVar18 >> 0x16) + uVar26 + uVar34;
      iVar19 = iVar1 + (uVar32 * 0x40 | uVar32 >> 0x1a) + uVar29 + uVar16;
      uVar17 = (uVar28 ^ uVar18 ^ uVar16) + iVar12 + uVar17;
      uVar16 = iVar20 + (uVar17 * 0x800 | uVar17 >> 0x15) + uVar21;
      uVar26 = uVar33 + (uVar30 * 0x400 | uVar30 >> 0x16) + uVar28;
      param_1[1] = uVar26;
      param_1[3] = uVar16;
      param_1[4] = iVar19;
      uVar33 = uVar22;
    } while (param_3 != 0);
  }
  return;
}

