// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f783d90 @ 14f783d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783d90(void)

{
  CRYPTO_strdup("NULL","crypto\\ct\\ct_x509v3.c",0x12);
  return;
}

// FUN_14f783dc0 @ 14f783dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783dc0(void)

{
  ASN1_NULL_new();
  return;
}

// FUN_14f783de0 @ 14f783de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f783de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  SCT_LIST_print(param_2,param_3,param_4,"\n",0);
  return 1;
}

// FUN_14f783e30 @ 14f783e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f783e30(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = d2i_SCT_LIST();
  iVar1 = FUN_14f783ef0(uVar2,2);
  if (iVar1 != 1) {
    SCT_LIST_free(uVar2);
    *param_1 = 0;
    return 0;
  }
  return uVar2;
}

// FUN_14f783e90 @ 14f783e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f783e90(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = d2i_SCT_LIST();
  iVar1 = FUN_14f783ef0(uVar2,3);
  if (iVar1 != 1) {
    SCT_LIST_free(uVar2);
    *param_1 = 0;
    return 0;
  }
  return uVar2;
}

// FUN_14f783ef0 @ 14f783ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f783ef0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = 0;
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      do {
        uVar2 = OPENSSL_sk_value(param_1,iVar3);
        iVar1 = SCT_set_source(uVar2,param_2);
        if (iVar1 != 1) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(param_1);
      } while (iVar3 < iVar1);
    }
  }
  return 1;
}

// FUN_14f783f80 @ 14f783f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783f80(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f783fa0 @ 14f783fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783fa0(void)

{
  OPENSSL_sk_value();
  return;
}

