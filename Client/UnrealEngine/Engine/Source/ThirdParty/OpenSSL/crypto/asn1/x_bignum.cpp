// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// FUN_14f72a530 @ 14f72a530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f72a530(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = BN_new();
  *param_1 = lVar1;
  return lVar1 != 0;
}

// FUN_14f72a560 @ 14f72a560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f72a560(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = BN_secure_new();
  *param_1 = lVar1;
  return lVar1 != 0;
}

// FUN_14f72a590 @ 14f72a590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f72a590(longlong *param_1,longlong param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
      BN_clear_free();
      *param_1 = 0;
      return;
    }
    BN_free();
    *param_1 = 0;
  }
  return;
}

// FUN_14f72a5e0 @ 14f72a5e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f72a5e0(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return -1;
  }
  uVar2 = BN_num_bits(lVar1);
  if (param_2 != (undefined1 *)0x0) {
    if ((uVar2 & 7) == 0) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    BN_bn2bin(lVar1,param_2);
  }
  iVar3 = BN_num_bits(lVar1);
  return ((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3) + (uint)((uVar2 & 7) == 0);
}

// FUN_14f72a670 @ 14f72a670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f72a670(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = BN_new();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = BN_bin2bn(param_2,param_3,*param_1);
  if (lVar1 == 0) {
    if (*param_1 != 0) {
      if ((*(byte *)(param_6 + 0x20) & 1) != 0) {
        BN_clear_free();
        *param_1 = 0;
        return 0;
      }
      BN_free();
      *param_1 = 0;
    }
    return 0;
  }
  return 1;
}

// FUN_14f72a720 @ 14f72a720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f72a720(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = BN_secure_new();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_14f72a670(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 == 0) {
    return 0;
  }
  BN_set_flags(*param_1,4);
  return iVar1;
}

// FUN_14f72a7c0 @ 14f72a7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f72a7c0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = BN_print(param_1,*param_2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = BIO_puts(param_1,"\n");
  return (ulonglong)(0 < iVar1);
}

