// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// OPENSSL_gmtime @ 14f76a4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

tm * OPENSSL_gmtime(__time64_t *param_1,tm *param_2)

{
  errno_t eVar1;
  
  eVar1 = _gmtime64_s(param_2,param_1);
  if (eVar1 != 0) {
    param_2 = (tm *)0x0;
  }
  return param_2;
}

// OPENSSL_gmtime_adj @ 14f76a4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_gmtime_adj(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_res20;
  int local_18;
  
  iVar2 = FUN_14f76a820();
  if (iVar2 != 0) {
    iVar2 = ((local_res20 + 0x10bd9) * 4) / 0x23ab1;
    iVar3 = iVar2 * 0x23ab1 + 3;
    iVar4 = (local_res20 + 0x10bd9) - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
    iVar3 = ((iVar4 + 1) * 4000) / 0x164b09;
    iVar4 = iVar4 + (0x1f - ((int)(iVar3 * 0x5b5 + (iVar3 * 0x5b5 >> 0x1f & 3U)) >> 2));
    iVar1 = (iVar4 * 0x50) / 0x98f;
    iVar2 = (iVar2 + -0x31) * 100 + iVar1 / 0xb;
    if ((uint)(iVar3 + -0x76c + iVar2) < 0x1fa4) {
      param_1[3] = iVar4 - (iVar1 * 0x98f) / 0x50;
      param_1[5] = iVar3 + -0x76c + iVar2;
      param_1[4] = iVar1 + (iVar1 / 0xb) * -0xc + 1;
      param_1[2] = local_18 / 0xe10;
      param_1[1] = (local_18 / 0x3c) % 0x3c;
      *param_1 = local_18 % 0x3c;
      return 1;
    }
  }
  return 0;
}

// OPENSSL_gmtime_diff @ 14f76a690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_gmtime_diff(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0x14f76a6a5;
  iVar1 = FUN_14f76a820(param_3,0,0,&local_14,(longlong)&local_10 + 4);
  if ((iVar1 != 0) && (iVar1 = FUN_14f76a820(param_4,0,0,&local_18,&local_10), iVar1 != 0)) {
    local_18 = local_18 - local_14;
    local_10._0_4_ = (int)local_10 - local_10._4_4_;
    if ((0 < local_18) && ((int)local_10 < 0)) {
      local_18 = local_18 + -1;
      local_10._0_4_ = (int)local_10 + 0x15180;
    }
    if ((local_18 < 0) && (0 < (int)local_10)) {
      local_18 = local_18 + 1;
      local_10._0_4_ = (int)local_10 + -0x15180;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = local_18;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = (int)local_10;
    }
    return 1;
  }
  return 0;
}

// FUN_14f76a800 @ 14f76a800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76a800(tm *param_1,__time64_t *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f76a811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _gmtime64_s(param_1,param_2);
  return;
}

// FUN_14f76a820 @ 14f76a820

undefined8 FUN_14f76a820(int *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_2 = param_3 / 0x15180 + param_2;
  iVar3 = param_3 % 0x15180 + (param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1;
  if (iVar3 < 0x15180) {
    if (iVar3 < 0) {
      param_2 = param_2 + -1;
      iVar3 = iVar3 + 0x15180;
    }
  }
  else {
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -0x15180;
  }
  iVar2 = (param_1[4] + -0xd) / 0xc;
  iVar4 = param_1[5] + iVar2;
  iVar1 = ((iVar4 + 0x1a90) / 100) * 3;
  iVar4 = (iVar4 + 0x1a2c) * 0x5b5;
  param_2 = ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + -0x7d4b +
            (((param_1[4] + iVar2 * -0xc + -1) * 0x16f) / 0xc -
            ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + param_1[3] + param_2;
  if (param_2 < 0) {
    return 0;
  }
  *param_4 = param_2;
  *param_5 = iVar3;
  return 1;
}

// FUN_14f76a960 @ 14f76a960

void FUN_14f76a960(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = ((param_1 + 0x10bd9) * 4) / 0x23ab1;
  iVar2 = iVar1 * 0x23ab1 + 3;
  iVar4 = (param_1 + 0x10bd9) - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  iVar2 = ((iVar4 + 1) * 4000) / 0x164b09;
  iVar3 = iVar2 * 0x5b5;
  iVar4 = iVar4 + (0x1f - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2));
  iVar3 = (iVar4 * 0x50) / 0x98f;
  *param_4 = iVar4 - (iVar3 * 0x98f) / 0x50;
  *param_3 = iVar3 + (iVar3 / 0xb) * -0xc + 2;
  *param_2 = (iVar1 + -0x31) * 100 + iVar3 / 0xb + iVar2;
  return;
}

