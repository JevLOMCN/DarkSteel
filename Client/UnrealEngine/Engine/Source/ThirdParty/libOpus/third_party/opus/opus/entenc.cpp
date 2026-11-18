// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 11

// ec_enc_bit_logp @ 14f870078

void ec_enc_bit_logp(longlong param_1,int param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x20) >> (param_3 & 0x1f);
  uVar1 = *(uint *)(param_1 + 0x20) - uVar2;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar1;
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  while (uVar1 < 0x800001) {
    FUN_14f87019c(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
  }
  return;
}

// ec_enc_bits @ 14f8700e0

void ec_enc_bits(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 2);
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (param_3 == 0) {
    celt_fatal("assertion failed: _bits>0","../../../third_party/opus/src/celt/entenc.c",0xc6);
  }
  if (0x20 < (uint)(iVar3 + param_3)) {
    do {
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) + *(int *)((longlong)param_1 + 0xc)) <
          *(uint *)(param_1 + 1)) {
        iVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(int *)((longlong)param_1 + 0xc) = iVar1;
        *(char *)((ulonglong)(*(uint *)(param_1 + 1) - iVar1) + *param_1) = (char)uVar4;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
      iVar3 = iVar3 + -8;
      uVar4 = uVar4 >> 8;
    } while (7 < iVar3);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar3 + param_3;
  *(int *)(param_1 + 3) = (int)param_1[3] + param_3;
  *(uint *)(param_1 + 2) = param_2 << ((byte)iVar3 & 0x1f) | uVar4;
  return;
}

// FUN_14f87019c @ 14f87019c

void FUN_14f87019c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  
  if (param_2 != 0xff) {
    cVar3 = (char)(param_2 >> 8);
    if (-1 < *(int *)((longlong)param_1 + 0x2c)) {
      if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
          *(uint *)(param_1 + 1)) {
        *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) =
             *(char *)((longlong)param_1 + 0x2c) + cVar3;
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
    }
    if ((int)param_1[5] != 0) {
      do {
        if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
            *(uint *)(param_1 + 1)) {
          *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) = cVar3 + -1;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff;
        }
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
        plVar1 = param_1 + 5;
        *(int *)plVar1 = (int)*plVar1 + -1;
      } while ((int)*plVar1 != 0);
    }
    *(uint *)((longlong)param_1 + 0x2c) = param_2 & 0xff;
    return;
  }
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  return;
}

// ec_enc_done @ 14f870234

void ec_enc_done(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 4);
  iVar2 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar7 = -iVar2 + 0x1f;
  uVar8 = 0x7fffffff >> ((byte)iVar7 & 0x1f);
  if (*(int *)((longlong)param_1 + 0x24) + uVar3 <=
      (*(int *)((longlong)param_1 + 0x24) + uVar8 & ~uVar8 | uVar8)) {
    iVar7 = -iVar2 + 0x20;
  }
  if (0 < iVar7) {
    uVar3 = (iVar7 - 1U >> 3) + 1;
    uVar6 = (ulonglong)uVar3;
    iVar7 = iVar7 + uVar3 * -8;
    do {
      FUN_14f87019c(param_1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((-1 < *(int *)((longlong)param_1 + 0x2c)) || ((int)param_1[5] != 0)) {
    FUN_14f87019c(param_1);
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  uVar8 = *(uint *)(param_1 + 2);
  if ((int)uVar3 < 8) {
    uVar4 = *(uint *)(param_1 + 6);
  }
  else {
    uVar6 = (ulonglong)(uVar3 >> 3);
    uVar3 = uVar3 + (uVar3 >> 3) * -8;
    do {
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) + *(int *)((longlong)param_1 + 0xc)) <
          *(uint *)(param_1 + 1)) {
        iVar2 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(int *)((longlong)param_1 + 0xc) = iVar2;
        uVar4 = 0;
        *(char *)((ulonglong)(*(uint *)(param_1 + 1) - iVar2) + *param_1) = (char)uVar8;
      }
      else {
        uVar4 = 0xffffffff;
      }
      uVar4 = *(uint *)(param_1 + 6) | uVar4;
      uVar8 = uVar8 >> 8;
      *(uint *)(param_1 + 6) = uVar4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  bVar5 = (byte)uVar8;
  if ((uVar4 == 0) &&
     (memset((void *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1),0,
             (ulonglong)
             (((int)param_1[1] - *(int *)((longlong)param_1 + 0xc)) -
             *(uint *)((longlong)param_1 + 0x1c))), 0 < (int)uVar3)) {
    uVar8 = *(uint *)((longlong)param_1 + 0xc);
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar8 < uVar4) {
      if ((uVar4 <= *(int *)((longlong)param_1 + 0x1c) + uVar8) && (-iVar7 < (int)uVar3)) {
        bVar5 = bVar5 & (char)(1 << ((byte)-iVar7 & 0x1f)) - 1U;
        *(undefined4 *)(param_1 + 6) = 0xffffffff;
      }
      pbVar1 = (byte *)((ulonglong)((uVar4 - uVar8) - 1) + *param_1);
      *pbVar1 = *pbVar1 | bVar5;
    }
    else {
      *(undefined4 *)(param_1 + 6) = 0xffffffff;
    }
  }
  return;
}

// ec_enc_icdf @ 14f8703ac

void ec_enc_icdf(longlong param_1,int param_2,longlong param_3,byte param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = uVar1 >> (param_4 & 0x1f);
  pbVar2 = (byte *)(param_2 + param_3);
  if (param_2 < 1) {
    uVar3 = uVar1 - *pbVar2 * uVar3;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uVar1 - pbVar2[-1] * uVar3);
    uVar3 = ((uint)pbVar2[-1] - (uint)*pbVar2) * uVar3;
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  while (uVar3 < 0x800001) {
    FUN_14f87019c(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
  }
  return;
}

// ec_enc_init @ 14f87043c

void ec_enc_init(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = param_2;
  param_1[3] = 0x21;
  *(undefined4 *)(param_1 + 4) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}

// ec_enc_patch_initial_bits @ 14f870470

void ec_enc_patch_initial_bits(undefined8 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (8 < param_3) {
    celt_fatal("assertion failed: _nbits<=EC_SYM_BITS","../../../third_party/opus/src/celt/entenc.c"
               ,0xd9);
  }
  bVar1 = (byte)param_3;
  bVar2 = -bVar1 + 8;
  uVar3 = (1 << (bVar1 & 0x1f)) + -1 << (bVar2 & 0x1f);
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      if (0x80000000U >> (bVar1 & 0x1f) < *(uint *)(param_1 + 4)) {
        *(undefined4 *)(param_1 + 6) = 0xffffffff;
      }
      else {
        *(uint *)((longlong)param_1 + 0x24) =
             param_2 << (-bVar1 + 0x1f & 0x1f) |
             ~(uVar3 << 0x17) & *(uint *)((longlong)param_1 + 0x24);
      }
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) =
           ~uVar3 & *(uint *)((longlong)param_1 + 0x2c) | param_2 << (bVar2 & 0x1f);
    }
  }
  else {
    *(byte *)*param_1 = ~(byte)uVar3 & *(byte *)*param_1 | (char)param_2 << (bVar2 & 0x1f);
  }
  return;
}

// ec_enc_shrink @ 14f87052c

void ec_enc_shrink(longlong *param_1,uint param_2)

{
  uint uVar1;
  ulonglong _Size;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (param_2 < *(int *)((longlong)param_1 + 0x1c) + uVar1) {
    celt_fatal("assertion failed: _this->offs+_this->end_offs<=_size",
               "../../../third_party/opus/src/celt/entenc.c",0xee);
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
  }
  _Size = (ulonglong)uVar1;
  memmove((void *)((param_2 - _Size) + *param_1),
          (void *)((*(uint *)(param_1 + 1) - _Size) + *param_1),_Size);
  *(uint *)(param_1 + 1) = param_2;
  return;
}

// ec_enc_uint @ 14f870594

void ec_enc_uint(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 < 2) {
    celt_fatal("assertion failed: _ft>1","../../../third_party/opus/src/celt/entenc.c",0xb4);
  }
  uVar4 = param_3 - 1;
  iVar1 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (iVar1 + 1 < 9) {
    ec_encode(param_1,param_2,param_2 + 1,param_3);
  }
  else {
    bVar2 = (byte)(iVar1 + -7);
    uVar3 = param_2 >> (bVar2 & 0x1f);
    ec_encode(param_1,uVar3,uVar3 + 1,(uVar4 >> (bVar2 & 0x1f)) + 1);
    ec_enc_bits(param_1,(1 << (bVar2 & 0x1f)) - 1U & param_2,iVar1 + -7);
  }
  return;
}

// ec_encode @ 14f870648

void ec_encode(longlong param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = uVar1 / param_4;
  if (param_2 == 0) {
    uVar2 = uVar1 - (param_4 - param_3) * uVar2;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uVar1 - (param_4 - param_2) * uVar2);
    uVar2 = (param_3 - param_2) * uVar2;
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  while (uVar2 < 0x800001) {
    FUN_14f87019c(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    uVar2 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
  }
  return;
}

// ec_encode_bin @ 14f8706cc

void ec_encode_bin(longlong param_1,int param_2,int param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = uVar1 >> (param_4 & 0x1f);
  iVar2 = 1 << (param_4 & 0x1f);
  if (param_2 == 0) {
    uVar3 = uVar1 - (iVar2 - param_3) * uVar3;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uVar1 - (iVar2 - param_2) * uVar3);
    uVar3 = (param_3 - param_2) * uVar3;
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  while (uVar3 < 0x800001) {
    FUN_14f87019c(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
  }
  return;
}

