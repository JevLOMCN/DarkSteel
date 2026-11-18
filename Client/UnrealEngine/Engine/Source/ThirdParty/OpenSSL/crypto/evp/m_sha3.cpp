// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// FUN_14f761e60 @ 14f761e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761e60(undefined8 param_1)

{
  FUN_14f7620f0(param_1,6);
  return;
}

// FUN_14f761e80 @ 14f761e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761e80(undefined8 param_1)

{
  FUN_14f7620f0(param_1,0x1f);
  return;
}

// FUN_14f761ea0 @ 14f761ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f761ea0(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  size_t sVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(ulonglong *)(lVar1 + 200);
  if (param_3 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0xd8);
    if (lVar3 != 0) {
      sVar4 = uVar2 - lVar3;
      _Dst = (void *)(lVar1 + 0xe0 + lVar3);
      if (param_3 < sVar4) {
        memcpy(_Dst,param_2,param_3);
        *(longlong *)(lVar1 + 0xd8) = *(longlong *)(lVar1 + 0xd8) + param_3;
        return 1;
      }
      memcpy(_Dst,param_2,sVar4);
      param_2 = (void *)((longlong)param_2 + sVar4);
      param_3 = param_3 - sVar4;
      SHA3_absorb(lVar1,lVar1 + 0xe0,uVar2,uVar2);
      *(undefined8 *)(lVar1 + 0xd8) = 0;
    }
    sVar4 = param_3;
    if (uVar2 <= param_3) {
      sVar4 = SHA3_absorb(lVar1,param_2,param_3,uVar2);
    }
    if (sVar4 != 0) {
      memcpy((void *)(lVar1 + 0xe0),(void *)((longlong)param_2 + (param_3 - sVar4)),sVar4);
      *(size_t *)(lVar1 + 0xd8) = sVar4;
    }
  }
  return 1;
}

// FUN_14f761fa0 @ 14f761fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f761fa0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(lVar3 + 200);
  if (*(longlong *)(lVar3 + 0xd0) != 0) {
    lVar1 = *(longlong *)(lVar3 + 0xd8) + lVar3;
    memset((void *)(lVar1 + 0xe0),0,lVar4 - *(longlong *)(lVar3 + 0xd8));
    *(undefined1 *)(lVar1 + 0xe0) = *(undefined1 *)(lVar3 + 0x188);
    pbVar2 = (byte *)(lVar4 + 0xdf + lVar3);
    *pbVar2 = *pbVar2 | 0x80;
    SHA3_absorb(lVar3,lVar3 + 0xe0,lVar4,lVar4);
    SHA3_squeeze(lVar3,param_2,*(undefined8 *)(lVar3 + 0xd0),lVar4);
  }
  return 1;
}

// EVP_sha3_224 @ 14f762090

undefined * EVP_sha3_224(void)

{
  return &DAT_1534c30d0;
}

// EVP_sha3_256 @ 14f7620a0

undefined * EVP_sha3_256(void)

{
  return &DAT_1534c3120;
}

// EVP_sha3_384 @ 14f7620b0

undefined * EVP_sha3_384(void)

{
  return &DAT_1534c3170;
}

// EVP_sha3_512 @ 14f7620c0

undefined * EVP_sha3_512(void)

{
  return &DAT_1534c31c0;
}

// EVP_shake128 @ 14f7620d0

undefined * EVP_shake128(void)

{
  return &DAT_1534c3210;
}

// EVP_shake256 @ 14f7620e0

undefined * EVP_shake256(void)

{
  return &DAT_1534c3260;
}

// FUN_14f7620f0 @ 14f7620f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7620f0(longlong *param_1,undefined1 param_2)

{
  void *_Dst;
  ulonglong uVar1;
  
  _Dst = (void *)param_1[3];
  uVar1 = (ulonglong)*(int *)(*param_1 + 0x38);
  if (uVar1 < 0xa9) {
    memset(_Dst,0,200);
    *(undefined8 *)((longlong)_Dst + 0xd8) = 0;
    *(ulonglong *)((longlong)_Dst + 200) = uVar1;
    *(longlong *)((longlong)_Dst + 0xd0) = (longlong)*(int *)(*param_1 + 8);
    *(undefined1 *)((longlong)_Dst + 0x188) = param_2;
  }
  return uVar1 < 0xa9;
}

