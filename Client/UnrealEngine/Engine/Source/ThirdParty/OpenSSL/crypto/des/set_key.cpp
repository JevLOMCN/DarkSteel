// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// DES_key_sched @ 14f73bf20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DES_key_sched(void)

{
  undefined8 uVar1;
  
  if (DAT_1553e2f4c != 0) {
    uVar1 = DES_set_key_checked();
    return uVar1;
  }
  DES_set_key_unchecked();
  return 0;
}

// DES_set_key @ 14f73bf60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DES_set_key(void)

{
  undefined8 uVar1;
  
  if (DAT_1553e2f4c != 0) {
    uVar1 = DES_set_key_checked();
    return uVar1;
  }
  DES_set_key_unchecked();
  return 0;
}

// DES_set_key_checked @ 14f73bfa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DES_set_key_checked(byte *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  iVar1 = 0;
  uVar2 = 0;
  pbVar3 = param_1;
  do {
    if (*pbVar3 != (&DAT_1534bb7c0)[*pbVar3]) {
      return 0xffffffff;
    }
    uVar2 = uVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (uVar2 < 8);
  do {
    if ((&DAT_1534bb8c0)[iVar1] == *(longlong *)param_1) {
      return 0xfffffffe;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  DES_set_key_unchecked(param_1);
  return 0;
}

// DES_set_key_unchecked @ 14f73c030

void DES_set_key_unchecked(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  piVar5 = &DAT_1534bc140;
  uVar2 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar1 = *param_1 ^ uVar2;
  uVar6 = param_1[1] ^ uVar2 << 4;
  uVar2 = (uVar1 << 0x12 ^ uVar1) & 0xcccc0000;
  uVar1 = uVar1 ^ uVar2 >> 0x12 ^ uVar2;
  uVar2 = (uVar6 << 0x12 ^ uVar6) & 0xcccc0000;
  uVar6 = uVar6 ^ uVar2 >> 0x12 ^ uVar2;
  uVar2 = (uVar6 >> 1 ^ uVar1) & 0x55555555;
  uVar1 = uVar1 ^ uVar2;
  uVar6 = uVar6 ^ uVar2 * 2;
  uVar2 = (uVar1 >> 8 ^ uVar6) & 0xff00ff;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = (uVar6 >> 1 ^ uVar1) & 0x55555555;
  uVar1 = uVar1 ^ uVar2;
  uVar6 = uVar6 ^ uVar2 * 2;
  uVar2 = (uVar6 >> 0xc & 0xff0 | uVar1 & 0xf000000f) >> 4 | (uVar6 & 0xff) << 0x10 | uVar6 & 0xff00
  ;
  uVar1 = uVar1 & 0xfffffff;
  do {
    if (*piVar5 == 0) {
      uVar6 = uVar1 << 0x1b | uVar1 >> 1;
      uVar4 = uVar2 << 0x1b;
      uVar3 = uVar2 >> 1;
    }
    else {
      uVar6 = uVar1 << 0x1a | uVar1 >> 2;
      uVar4 = uVar2 << 0x1a;
      uVar3 = uVar2 >> 2;
    }
    uVar1 = uVar6 & 0xfffffff;
    uVar2 = uVar4 & 0xfffffff | uVar3;
    uVar7 = uVar1 >> 1;
    piVar5 = piVar5 + 1;
    uVar7 = *(uint *)(&DAT_1534bbc40 +
                     (ulonglong)
                     (((uVar7 & 0x7000000 | uVar6 & 0xc00000) >> 1 | uVar6 & 0x100000) >> 0x14) * 4)
            | *(uint *)(&DAT_1534bba40 + (ulonglong)((uVar7 & 0xf00 | uVar6 & 0xc0) >> 6) * 4) |
            *(uint *)(&DAT_1534bbb40 + (ulonglong)((uVar7 & 0x60000 | uVar6 & 0x1e000) >> 0xd) * 4)
            | *(uint *)(&DAT_1534bb940 + (ulonglong)(uVar6 & 0x3f) * 4);
    uVar6 = *(uint *)(&DAT_1534bc040 +
                     (ulonglong)
                     (((uVar4 & 0xfffffff | uVar3 & 0xc000000) >> 1 | uVar3 & 0x1e00000) >> 0x15) *
                     4) |
            *(uint *)(&DAT_1534bbe40 + (ulonglong)(((uVar3 & 0x3c00) >> 1 | uVar3 & 0x180) >> 7) * 4
                     ) | *(uint *)(&DAT_1534bbf40 + (ulonglong)((uVar3 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_1534bbd40 + (ulonglong)(uVar3 & 0x3f) * 4);
    *param_2 = (uVar6 & 0xffff) >> 0xe | (uVar7 & 0xffff | uVar6 << 0x10) << 2;
    param_2[1] = uVar6 >> 0x1a | (uVar7 >> 0x10 | uVar6 & 0xffff0000) << 6;
    param_2 = param_2 + 2;
  } while ((longlong)piVar5 < 0x1534bc180);
  return;
}

// DES_set_odd_parity @ 14f73c2e0

void DES_set_odd_parity(byte *param_1)

{
  *param_1 = (&DAT_1534bb7c0)[*param_1];
  param_1[1] = (&DAT_1534bb7c0)[param_1[1]];
  param_1[2] = (&DAT_1534bb7c0)[param_1[2]];
  param_1[3] = (&DAT_1534bb7c0)[param_1[3]];
  param_1[4] = (&DAT_1534bb7c0)[param_1[4]];
  param_1[5] = (&DAT_1534bb7c0)[param_1[5]];
  param_1[6] = (&DAT_1534bb7c0)[param_1[6]];
  param_1[7] = (&DAT_1534bb7c0)[param_1[7]];
  return;
}

