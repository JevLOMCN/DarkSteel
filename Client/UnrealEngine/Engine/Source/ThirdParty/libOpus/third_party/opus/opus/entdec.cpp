// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 9

// ec_dec_bit_logp @ 14f876a78

bool ec_dec_bit_logp(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x20) >> (param_2 & 0x1f);
  if (uVar1 >= uVar3) {
    *(uint *)(param_1 + 0x24) = uVar1 - uVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x20) - uVar3;
  if (uVar1 < uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  FUN_14f876bec(param_1);
  return uVar1 < uVar3;
}

// ec_dec_bits @ 14f876ac8

uint ec_dec_bits(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar4 < param_2) {
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
    uVar3 = uVar4;
    do {
      if (uVar5 < *(uint *)(param_1 + 1)) {
        uVar5 = uVar5 + 1;
        *(uint *)((longlong)param_1 + 0xc) = uVar5;
        uVar1 = (uint)*(byte *)((ulonglong)((int)param_1[1] - uVar5) + *param_1);
      }
      else {
        uVar1 = 0;
      }
      uVar4 = uVar3 + 8;
      uVar2 = uVar2 | uVar1 << ((byte)uVar3 & 0x1f);
      uVar3 = uVar4;
    } while ((int)uVar4 < 0x19);
  }
  *(uint *)(param_1 + 3) = (int)param_1[3] + param_2;
  *(uint *)(param_1 + 2) = uVar2 >> ((byte)param_2 & 0x1f);
  *(uint *)((longlong)param_1 + 0x14) = uVar4 - param_2;
  return (1 << ((byte)param_2 & 0x1f)) - 1U & uVar2;
}

// ec_dec_icdf @ 14f876b40

int ec_dec_icdf(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = -1;
  pbVar3 = (byte *)(param_2 + -1);
  uVar2 = *(uint *)(param_1 + 0x20);
  do {
    uVar1 = uVar2;
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + 1;
    uVar2 = (uint)*pbVar3 * (*(uint *)(param_1 + 0x20) >> (param_3 & 0x1f));
  } while (*(uint *)(param_1 + 0x24) < uVar2);
  *(uint *)(param_1 + 0x20) = uVar1 - uVar2;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) - uVar2;
  FUN_14f876bec(param_1);
  return iVar4;
}

// ec_dec_init @ 14f876b98

void ec_dec_init(undefined8 *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  uVar1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 9;
  *(undefined4 *)(param_1 + 4) = 0x80;
  if (param_3 != 0) {
    uVar1 = (uint)*param_2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(uint *)((longlong)param_1 + 0x24) = 0x7f - (uVar1 >> 1);
  FUN_14f876bec();
  return;
}

// FUN_14f876bec @ 14f876bec

void FUN_14f876bec(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 < 0x800001) {
    iVar7 = (int)param_1[3];
    uVar5 = *(uint *)((longlong)param_1 + 0x1c);
    uVar3 = *(uint *)((longlong)param_1 + 0x24);
    uVar6 = *(uint *)((longlong)param_1 + 0x2c);
    do {
      iVar7 = iVar7 + 8;
      uVar4 = uVar4 << 8;
      *(int *)(param_1 + 3) = iVar7;
      *(uint *)(param_1 + 4) = uVar4;
      if (uVar5 < *(uint *)(param_1 + 1)) {
        uVar2 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        uVar1 = (uint)*(byte *)(uVar2 + *param_1);
        *(uint *)((longlong)param_1 + 0x1c) = uVar5;
      }
      else {
        uVar1 = 0;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar1;
      uVar3 = uVar3 * 0x100 + (~((int)(uVar6 << 8 | uVar1) >> 1) & 0xffU) & 0x7fffffff;
      *(uint *)((longlong)param_1 + 0x24) = uVar3;
      uVar6 = uVar1;
    } while (uVar4 < 0x800001);
  }
  return;
}

// ec_dec_uint @ 14f876c74

uint ec_dec_uint(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (param_2 < 2) {
    celt_fatal("assertion failed: _ft>1","../../../third_party/opus/src/celt/entdec.c",0xcb);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar7 = param_2 - 1;
  uVar2 = *(uint *)(param_1 + 0x24);
  iVar3 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  if (iVar3 + 1 < 9) {
    iVar3 = (int)((ulonglong)uVar1 / (ulonglong)param_2);
    *(int *)(param_1 + 0x28) = iVar3;
    iVar6 = (int)((ulonglong)uVar2 / ((ulonglong)uVar1 / (ulonglong)param_2));
    iVar6 = (param_2 - (-(uint)(param_2 < iVar6 + 1U) & (param_2 - iVar6) - 1)) - iVar6;
    iVar5 = (param_2 - iVar6) * iVar3;
    uVar8 = iVar6 - 1;
    *(uint *)(param_1 + 0x24) = uVar2 - iVar5;
    if (uVar8 == 0) {
      iVar3 = uVar1 - iVar5;
    }
    *(int *)(param_1 + 0x20) = iVar3;
    FUN_14f876bec(param_1);
  }
  else {
    bVar4 = (byte)(iVar3 + -7);
    uVar8 = (uVar7 >> (bVar4 & 0x1f)) + 1;
    iVar6 = (int)((ulonglong)uVar1 / (ulonglong)uVar8);
    *(int *)(param_1 + 0x28) = iVar6;
    iVar5 = (int)((ulonglong)uVar2 / ((ulonglong)uVar1 / (ulonglong)uVar8));
    iVar5 = (uVar8 - (-(uint)(uVar8 < iVar5 + 1U) & (uVar8 - iVar5) - 1)) - iVar5;
    iVar9 = (uVar8 - iVar5) * iVar6;
    iVar5 = iVar5 + -1;
    *(uint *)(param_1 + 0x24) = uVar2 - iVar9;
    if (iVar5 == 0) {
      iVar6 = uVar1 - iVar9;
    }
    *(int *)(param_1 + 0x20) = iVar6;
    FUN_14f876bec(param_1);
    uVar8 = ec_dec_bits(param_1,iVar3 + -7);
    uVar8 = uVar8 | iVar5 << (bVar4 & 0x1f);
    if (uVar7 < uVar8) {
      *(undefined4 *)(param_1 + 0x30) = 1;
      uVar8 = uVar7;
    }
  }
  return uVar8;
}

// ec_dec_update @ 14f876dc0

void ec_dec_update(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (param_4 - param_3) * *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar1;
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x20) - iVar1;
  }
  else {
    iVar1 = (param_3 - param_2) * *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_14f876bec();
  return;
}

// ec_decode @ 14f876df0

int ec_decode(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x20) / (ulonglong)param_2;
  *(int *)(param_1 + 0x28) = (int)uVar1;
  iVar2 = (int)(*(uint *)(param_1 + 0x24) / uVar1);
  return ((param_2 - (-(uint)(param_2 < iVar2 + 1U) & (param_2 - iVar2) - 1)) - iVar2) + -1;
}

// ec_decode_bin @ 14f876e30

int ec_decode_bin(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20) >> (param_2 & 0x1f);
  *(uint *)(param_1 + 0x28) = uVar1;
  uVar1 = *(uint *)(param_1 + 0x24) / uVar1;
  uVar2 = 1 << (param_2 & 0x1f);
  return ((uVar2 - (-(uint)(uVar2 < uVar1 + 1) & (uVar2 - uVar1) - 1)) - uVar1) + -1;
}

