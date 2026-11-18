// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// MD4_Final @ 14f7b1190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MD4_Final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x16];
  puVar1 = param_2 + 6;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    md4_block_data_order(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  md4_block_data_order(param_2,puVar1,1);
  param_2[0x16] = 0;
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
  return 1;
}

// MD4_Init @ 14f7b1300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MD4_Init(undefined4 *param_1)

{
  memset(param_1,0,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}

// MD4_Transform @ 14f7b1350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void MD4_Transform(undefined8 param_1,undefined8 param_2)

{
  md4_block_data_order(param_1,param_2,1);
  return;
}

// MD4_Update @ 14f7b1370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MD4_Update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    *(uint *)(param_1 + 0x10) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x58);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x18);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      md4_block_data_order(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x58) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      md4_block_data_order(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      memcpy((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}

// md4_block_data_order @ 14f7b14a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void md4_block_data_order(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
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
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  if (param_3 != 0) {
    uVar25 = param_1[1];
    uVar19 = param_1[2];
    uVar20 = param_1[3];
    iVar21 = *param_1;
    do {
      param_3 = param_3 + -1;
      iVar5 = *param_2;
      uVar18 = ((uVar20 ^ uVar19) & uVar25 ^ uVar20) + iVar5 + iVar21;
      iVar6 = param_2[1];
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar22 = ((uVar19 ^ uVar25) & uVar18 ^ uVar19) + iVar6 + uVar20;
      iVar7 = param_2[2];
      uVar22 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar23 = ((uVar25 ^ uVar18) & uVar22 ^ uVar25) + iVar7 + uVar19;
      iVar8 = param_2[3];
      uVar24 = uVar23 * 0x800 | uVar23 >> 0x15;
      iVar9 = param_2[4];
      uVar23 = ((uVar22 ^ uVar18) & uVar24 ^ uVar18) + iVar8 + uVar25;
      uVar23 = uVar23 >> 0xd | uVar23 * 0x80000;
      iVar21 = param_2[5];
      uVar18 = ((uVar22 ^ uVar24) & uVar23 ^ uVar22) + iVar9 + uVar18;
      uVar26 = uVar18 * 8 | uVar18 >> 0x1d;
      iVar10 = param_2[6];
      uVar22 = ((uVar24 ^ uVar23) & uVar26 ^ uVar24) + iVar21 + uVar22;
      uVar18 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar24 = ((uVar23 ^ uVar26) & uVar18 ^ uVar23) + iVar10 + uVar24;
      iVar11 = param_2[7];
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      uVar23 = ((uVar18 ^ uVar26) & uVar24 ^ uVar26) + iVar11 + uVar23;
      uVar22 = uVar23 >> 0xd | uVar23 * 0x80000;
      iVar12 = param_2[8];
      iVar13 = param_2[9];
      uVar26 = ((uVar18 ^ uVar24) & uVar22 ^ uVar18) + iVar12 + uVar26;
      uVar23 = uVar26 * 8 | uVar26 >> 0x1d;
      iVar14 = param_2[10];
      uVar18 = ((uVar24 ^ uVar22) & uVar23 ^ uVar24) + iVar13 + uVar18;
      uVar26 = uVar18 * 0x80 | uVar18 >> 0x19;
      iVar15 = param_2[0xb];
      uVar24 = ((uVar22 ^ uVar23) & uVar26 ^ uVar22) + iVar14 + uVar24;
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      iVar16 = param_2[0xc];
      uVar22 = ((uVar26 ^ uVar23) & uVar24 ^ uVar23) + iVar15 + uVar22;
      uVar18 = uVar22 >> 0xd | uVar22 * 0x80000;
      uVar23 = ((uVar26 ^ uVar24) & uVar18 ^ uVar26) + iVar16 + uVar23;
      iVar17 = param_2[0xd];
      uVar22 = uVar23 * 8 | uVar23 >> 0x1d;
      piVar1 = param_2 + 0xe;
      piVar2 = param_2 + 0xf;
      param_2 = param_2 + 0x10;
      uVar26 = ((uVar24 ^ uVar18) & uVar22 ^ uVar24) + iVar17 + uVar26;
      uVar23 = uVar26 * 0x80 | uVar26 >> 0x19;
      iVar3 = *piVar1;
      uVar24 = ((uVar18 ^ uVar22) & uVar23 ^ uVar18) + iVar3 + uVar24;
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      iVar4 = *piVar2;
      uVar18 = ((uVar23 ^ uVar22) & uVar24 ^ uVar22) + iVar4 + uVar18;
      uVar18 = uVar18 >> 0xd | uVar18 * 0x80000;
      uVar22 = uVar22 + 0x5a827999 + ((uVar24 | uVar18) & uVar23 | uVar24 & uVar18) + iVar5;
      uVar22 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar23 = uVar23 + ((uVar18 | uVar22) & uVar24 | uVar18 & uVar22) + 0x5a827999 + iVar9;
      uVar23 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar24 = uVar24 + ((uVar18 | uVar22) & uVar23 | uVar18 & uVar22) + 0x5a827999 + iVar12;
      uVar26 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar18 = uVar18 + ((uVar26 | uVar22) & uVar23 | uVar26 & uVar22) + 0x5a827999 + iVar16;
      uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar22 = uVar22 + ((uVar26 | uVar18) & uVar23 | uVar26 & uVar18) + 0x5a827999 + iVar6;
      uVar22 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar23 = uVar23 + ((uVar18 | uVar22) & uVar26 | uVar18 & uVar22) + 0x5a827999 + iVar21;
      uVar24 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar26 = uVar26 + ((uVar18 | uVar22) & uVar24 | uVar18 & uVar22) + 0x5a827999 + iVar13;
      uVar26 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar18 + ((uVar26 | uVar22) & uVar24 | uVar26 & uVar22) + 0x5a827999 + iVar17;
      uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar22 = uVar22 + ((uVar26 | uVar18) & uVar24 | uVar26 & uVar18) + 0x5a827999 + iVar7;
      uVar23 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar24 = uVar24 + ((uVar18 | uVar23) & uVar26 | uVar18 & uVar23) + 0x5a827999 + iVar10;
      uVar24 = uVar24 * 0x20 | uVar24 >> 0x1b;
      uVar26 = uVar26 + ((uVar18 | uVar23) & uVar24 | uVar18 & uVar23) + 0x5a827999 + iVar14;
      uVar26 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar18 + 0x5a827999 + ((uVar26 | uVar23) & uVar24 | uVar26 & uVar23) + iVar3;
      uVar22 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar18 = uVar23 + 0x5a827999 + ((uVar26 | uVar22) & uVar24 | uVar26 & uVar22) + iVar8;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar23 = uVar24 + 0x5a827999 + ((uVar22 | uVar18) & uVar26 | uVar22 & uVar18) + iVar11;
      uVar23 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar24 = uVar26 + 0x5a827999 + ((uVar22 | uVar18) & uVar23 | uVar22 & uVar18) + iVar15;
      uVar24 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar22 = ((uVar24 | uVar18) & uVar23 | uVar24 & uVar18) + 0x5a827999 + iVar4 + uVar22;
      uVar26 = uVar22 * 0x2000 | uVar22 >> 0x13;
      uVar18 = (uVar23 ^ uVar24 ^ uVar26) + 0x6ed9eba1 + iVar5 + uVar18;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar23 = uVar23 + (uVar24 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar12;
      uVar22 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar24 = uVar24 + (uVar22 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar9;
      uVar23 = uVar24 * 0x800 | uVar24 >> 0x15;
      uVar26 = uVar26 + (uVar22 ^ uVar23 ^ uVar18) + 0x6ed9eba1 + iVar16;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar18 = uVar18 + (uVar22 ^ uVar23 ^ uVar26) + 0x6ed9eba1 + iVar7;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar22 = uVar22 + (uVar23 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar14;
      uVar22 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar23 = uVar23 + (uVar22 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar10;
      uVar24 = uVar23 * 0x800 | uVar23 >> 0x15;
      uVar26 = uVar26 + (uVar22 ^ uVar24 ^ uVar18) + 0x6ed9eba1 + iVar3;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar18 = uVar18 + (uVar22 ^ uVar24 ^ uVar26) + 0x6ed9eba1 + iVar6;
      uVar23 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar18 = uVar22 + 0x6ed9eba1 + (uVar24 ^ uVar26 ^ uVar23) + iVar13;
      uVar18 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar22 = uVar24 + 0x6ed9eba1 + (uVar18 ^ uVar26 ^ uVar23) + iVar21;
      uVar22 = uVar22 * 0x800 | uVar22 >> 0x15;
      uVar26 = uVar26 + (uVar18 ^ uVar22 ^ uVar23) + 0x6ed9eba1 + iVar17;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar23 = uVar23 + 0x6ed9eba1 + (uVar18 ^ uVar22 ^ uVar26) + iVar8;
      uVar23 = uVar23 * 8 | uVar23 >> 0x1d;
      uVar18 = uVar18 + 0x6ed9eba1 + (uVar22 ^ uVar26 ^ uVar23) + iVar15;
      uVar24 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar18 = uVar22 + 0x6ed9eba1 + (uVar24 ^ uVar26 ^ uVar23) + iVar11;
      uVar22 = uVar18 * 0x800 | uVar18 >> 0x15;
      uVar18 = uVar26 + 0x6ed9eba1 + (uVar24 ^ uVar22 ^ uVar23) + iVar4;
      *param_1 = *param_1 + uVar23;
      iVar21 = *param_1;
      uVar25 = uVar25 + (uVar18 * 0x8000 | uVar18 >> 0x11);
      uVar19 = uVar19 + uVar22;
      param_1[1] = uVar25;
      param_1[2] = uVar19;
      uVar20 = uVar20 + uVar24;
      param_1[3] = uVar20;
    } while (param_3 != 0);
  }
  return;
}

