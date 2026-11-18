// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// MDC2_Final @ 14f7b63e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MDC2_Final(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    if (param_2[7] != 2) goto LAB_14f7b6440;
LAB_14f7b640e:
    *(undefined1 *)(uVar2 + 4 + (longlong)param_2) = 0x80;
    uVar2 = (ulonglong)(uVar1 + 1);
  }
  else if (param_2[7] == 2) goto LAB_14f7b640e;
  memset((void *)((longlong)param_2 + uVar2 + 4),0,(ulonglong)(8 - (int)uVar2));
  FUN_14f7b6570(param_2,param_2 + 1,8);
LAB_14f7b6440:
  *param_1 = *(undefined8 *)(param_2 + 3);
  param_1[1] = *(undefined8 *)(param_2 + 5);
  return 1;
}

// MDC2_Init @ 14f7b6470

undefined8 MDC2_Init(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[7] = 1;
  *(undefined8 *)(param_1 + 3) = 0x5252525252525252;
  *(undefined8 *)(param_1 + 5) = 0x2525252525252525;
  return 1;
}

// MDC2_Update @ 14f7b64b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MDC2_Update(uint *param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  size_t sVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_1;
  if (uVar2 != 0) {
    sVar1 = 8 - uVar2;
    _Dst = (void *)((longlong)param_1 + uVar2 + 4);
    if (param_3 < sVar1) {
      memcpy(_Dst,param_2,param_3);
      *param_1 = *param_1 + (int)param_3;
      return 1;
    }
    memcpy(_Dst,param_2,sVar1);
    *param_1 = 0;
    param_3 = param_3 - sVar1;
    param_2 = (void *)((longlong)param_2 + sVar1);
    FUN_14f7b6570(param_1,param_1 + 1,8);
  }
  uVar2 = param_3 & 0xfffffffffffffff8;
  if (uVar2 != 0) {
    FUN_14f7b6570(param_1,param_2,uVar2);
  }
  sVar1 = param_3 - uVar2;
  if (sVar1 != 0) {
    memcpy(param_1 + 1,(void *)(uVar2 + (longlong)param_2),sVar1);
    *param_1 = (uint)sVar1;
  }
  return 1;
}

// FUN_14f7b6570 @ 14f7b6570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7b6570(longlong param_1,uint *param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  if (param_3 != 0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
    pbVar1 = (byte *)(param_1 + 0xc);
    lVar3 = (param_3 - 1U >> 3) + 1;
    pbVar2 = (byte *)(param_1 + 0x14);
    do {
      uVar5 = *param_2;
      uVar4 = param_2[1];
      *pbVar1 = *pbVar1 & 0xdf;
      *pbVar2 = *pbVar2 & 0xbf;
      *pbVar1 = *pbVar1 | 0x40;
      *pbVar2 = *pbVar2 | 0x20;
      local_b8 = uVar5;
      local_b4 = uVar4;
      local_b0 = uVar5;
      local_ac = uVar4;
      DES_set_odd_parity(pbVar1);
      DES_set_key_unchecked(pbVar1,local_a8);
      DES_encrypt1(&local_b0,local_a8,1);
      DES_set_odd_parity(pbVar2);
      DES_set_key_unchecked(pbVar2,local_a8);
      DES_encrypt1(&local_b8,local_a8,1);
      local_b8 = local_b8 ^ uVar5;
      uVar5 = uVar5 ^ local_b0;
      local_b4 = local_b4 ^ uVar4;
      uVar4 = uVar4 ^ local_ac;
      *pbVar1 = (byte)uVar5;
      *(char *)(param_1 + 0xd) = (char)(uVar5 >> 8);
      *(char *)(param_1 + 0xe) = (char)(uVar5 >> 0x10);
      *(char *)(param_1 + 0xf) = (char)(uVar5 >> 0x18);
      *(char *)(param_1 + 0x10) = (char)local_b4;
      *(char *)(param_1 + 0x11) = (char)(local_b4 >> 8);
      *(char *)(param_1 + 0x12) = (char)(local_b4 >> 0x10);
      *(char *)(param_1 + 0x13) = (char)(local_b4 >> 0x18);
      *pbVar2 = (byte)local_b8;
      *(char *)(param_1 + 0x15) = (char)(local_b8 >> 8);
      *(char *)(param_1 + 0x16) = (char)(local_b8 >> 0x10);
      *(char *)(param_1 + 0x17) = (char)(local_b8 >> 0x18);
      *(char *)(param_1 + 0x18) = (char)uVar4;
      *(char *)(param_1 + 0x19) = (char)(uVar4 >> 8);
      *(char *)(param_1 + 0x1a) = (char)(uVar4 >> 0x10);
      *(char *)(param_1 + 0x1b) = (char)(uVar4 >> 0x18);
      lVar3 = lVar3 + -1;
      param_2 = param_2 + 2;
    } while (lVar3 != 0);
  }
  return;
}

