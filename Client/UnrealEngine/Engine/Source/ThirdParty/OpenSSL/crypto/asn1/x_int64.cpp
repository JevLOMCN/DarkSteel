// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// FUN_14f6f67e0 @ 14f6f67e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f67e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6f67ec;
  lVar1 = CRYPTO_zalloc(8,"crypto\\asn1\\x_int64.c",0x1f);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x8d,0x41,"crypto\\asn1\\x_int64.c",0x20,uVar2);
    return 0;
  }
  return 1;
}

// FUN_14f6f6850 @ 14f6f6850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f6850(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"crypto\\asn1\\x_int64.c",0x28);
  *param_1 = 0;
  return;
}

// FUN_14f6f68b0 @ 14f6f68b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f68b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)*param_1;
  if (((*(uint *)(param_4 + 0x20) & 1) != 0) && (lVar1 == 0)) {
    return 0xffffffff;
  }
  if (((*(uint *)(param_4 + 0x20) & 2) != 0) && (lVar1 < 0)) {
    lVar1 = -lVar1;
    uVar2 = 1;
  }
  uVar2 = i2c_uint64_int(param_2,lVar1,uVar2);
  return uVar2;
}

// FUN_14f6f6910 @ 14f6f6910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6f6910(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
             ,longlong param_6)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int local_res8 [2];
  undefined8 local_res10;
  ulonglong local_18 [2];
  
  local_18[1] = 0x14f6f6925;
  local_18[0] = 0;
  local_res8[0] = 0;
  local_res10 = param_2;
  if (*param_1 == 0) {
    lVar3 = CRYPTO_zalloc(8,"crypto\\asn1\\x_int64.c",0x1f);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      ERR_put_error(0xd,0x8d,0x41,"crypto\\asn1\\x_int64.c",0x20);
      return 0;
    }
  }
  puVar1 = (ulonglong *)*param_1;
  if (param_3 != 0) {
    iVar2 = c2i_uint64_int(local_18,local_res8,&local_res10,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_6 + 0x20) & 2;
    if ((uVar4 == 0) && (local_res8[0] != 0)) {
      ERR_put_error(0xd,0x70,0xe2,"crypto\\asn1\\x_int64.c",0x61);
      return 0;
    }
    if (uVar4 == 0) {
      if (local_res8[0] != 0) goto LAB_14f6f6a3e;
    }
    else {
      if (local_res8[0] != 0) {
LAB_14f6f6a3e:
        *puVar1 = -local_18[0];
        return 1;
      }
      if (0x7fffffffffffffff < local_18[0]) {
        ERR_put_error(0xd,0x70,0xdf,"crypto\\asn1\\x_int64.c",0x66);
        return 0;
      }
    }
  }
  *puVar1 = local_18[0];
  return 1;
}

// FUN_14f6f6a80 @ 14f6f6a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f6a80(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  char *pcVar1;
  
  pcVar1 = "%jd\n";
  if ((*(byte *)(param_3 + 0x20) & 2) == 0) {
    pcVar1 = "%ju\n";
  }
  BIO_printf(param_1,pcVar1,*(undefined8 *)*param_2);
  return;
}

// FUN_14f6f6ac0 @ 14f6f6ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f6ac0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6f6acc;
  lVar1 = CRYPTO_zalloc(4,"crypto\\asn1\\x_int64.c",0x7e);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x8b,0x41,"crypto\\asn1\\x_int64.c",0x7f,uVar2);
    return 0;
  }
  return 1;
}

// FUN_14f6f6b30 @ 14f6f6b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f6b30(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"crypto\\asn1\\x_int64.c",0x87);
  *param_1 = 0;
  return;
}

// FUN_14f6f6b80 @ 14f6f6b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f6b80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)*param_1;
  if (((*(uint *)(param_4 + 0x20) & 1) != 0) && (iVar1 == 0)) {
    return 0xffffffff;
  }
  if (((*(uint *)(param_4 + 0x20) & 2) != 0) && (iVar1 < 0)) {
    iVar1 = -iVar1;
    uVar2 = 1;
  }
  uVar2 = i2c_uint64_int(param_2,iVar1,uVar2);
  return uVar2;
}

// FUN_14f6f6bd0 @ 14f6f6bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6f6bd0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
             ,longlong param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int local_res8 [2];
  undefined8 local_res10;
  ulonglong local_18 [2];
  
  local_18[1] = 0x14f6f6be5;
  local_18[0] = 0;
  local_res8[0] = 0;
  local_res10 = param_2;
  if (*param_1 == 0) {
    lVar3 = CRYPTO_zalloc(8,"crypto\\asn1\\x_int64.c",0x1f);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      ERR_put_error(0xd,0x8d,0x41,"crypto\\asn1\\x_int64.c",0x20);
      return 0;
    }
  }
  puVar1 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    iVar2 = c2i_uint64_int(local_18,local_res8,&local_res10,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_6 + 0x20) & 2;
    if (uVar4 == 0) {
      if (local_res8[0] != 0) {
        ERR_put_error(0xd,0x69,0xe2,"crypto\\asn1\\x_int64.c",200);
        return 0;
      }
    }
    else if (local_res8[0] != 0) {
      if (0x80000000 < local_18[0]) {
        ERR_put_error(0xd,0x69,0xe0,"crypto\\asn1\\x_int64.c",0xcd);
        return 0;
      }
      local_18[0] = -local_18[0];
      goto LAB_14f6f6cf9;
    }
    if (uVar4 != 0) {
      if (0x7fffffff < local_18[0]) goto LAB_14f6f6d2a;
      if (uVar4 != 0) goto LAB_14f6f6cf9;
    }
    if (0xffffffff < local_18[0]) {
LAB_14f6f6d2a:
      ERR_put_error(0xd,0x69,0xdf,"crypto\\asn1\\x_int64.c",0xd4);
      return 0;
    }
  }
LAB_14f6f6cf9:
  *puVar1 = (int)local_18[0];
  return 1;
}

// FUN_14f6f6d60 @ 14f6f6d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f6d60(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  char *pcVar1;
  
  pcVar1 = "%d\n";
  if ((*(byte *)(param_3 + 0x20) & 2) == 0) {
    pcVar1 = "%u\n";
  }
  BIO_printf(param_1,pcVar1,*(undefined4 *)*param_2);
  return;
}

