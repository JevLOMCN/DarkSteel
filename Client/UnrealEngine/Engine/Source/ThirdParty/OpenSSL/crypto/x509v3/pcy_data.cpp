// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// policy_data_free @ 14f76ac30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_data_free(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    ASN1_OBJECT_free(*(undefined8 *)(param_1 + 8));
    if ((*param_1 & 4) == 0) {
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),POLICYQUALINFO_free);
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x18),ASN1_OBJECT_free);
    CRYPTO_free(param_1,"crypto\\x509v3\\pcy_data.c",0x1b);
  }
  return;
}

// policy_data_new @ 14f76aca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * policy_data_new(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f76acb5;
  if (param_1 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  else if (param_2 == 0) {
    lVar1 = 0;
    goto LAB_14f76ad01;
  }
  lVar1 = OBJ_dup(param_2);
  if (lVar1 == 0) {
    return (undefined4 *)0x0;
  }
LAB_14f76ad01:
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x20,"crypto\\x509v3\\pcy_data.c");
  if (puVar2 == (undefined4 *)0x0) {
    ERR_put_error(0x22,0xab,0x41,"crypto\\x509v3\\pcy_data.c",0x36,uVar4);
    ASN1_OBJECT_free(lVar1);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    lVar3 = OPENSSL_sk_new_null();
    *(longlong *)(puVar2 + 6) = lVar3;
    if (lVar3 == 0) {
      CRYPTO_free(puVar2,"crypto\\x509v3\\pcy_data.c",0x3c);
      ASN1_OBJECT_free(lVar1);
      ERR_put_error(0x22,0xab,0x41,"crypto\\x509v3\\pcy_data.c",0x3e);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      if (param_3 != 0) {
        *puVar2 = 0x10;
      }
      if (lVar1 == 0) {
        *(undefined8 *)(puVar2 + 2) = *param_1;
        *param_1 = 0;
      }
      else {
        *(longlong *)(puVar2 + 2) = lVar1;
      }
      if (param_1 != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + 4) = param_1[1];
        param_1[1] = 0;
      }
    }
  }
  return puVar2;
}

// FUN_14f76ae00 @ 14f76ae00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76ae00(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f76ae20 @ 14f76ae20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76ae20(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f76ae40 @ 14f76ae40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76ae40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

