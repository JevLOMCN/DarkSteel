// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// rsa_multip_calc_product @ 14f725e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong rsa_multip_calc_product(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
  uVar3 = uVar10;
  if ((0 < iVar1) && (uVar3 = BN_CTX_new(), uVar3 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = uVar10;
    if (0 < iVar1) {
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),uVar9);
        if (puVar4[3] == 0) {
          lVar5 = BN_secure_new();
          puVar4[3] = lVar5;
          if (lVar5 == 0) goto LAB_14f725f20;
        }
        iVar2 = BN_mul(puVar4[3],uVar7,uVar6,uVar3);
        if (iVar2 == 0) goto LAB_14f725f20;
        uVar7 = puVar4[3];
        uVar8 = (int)uVar9 + 1;
        uVar6 = *puVar4;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar1);
    }
    uVar10 = 1;
  }
LAB_14f725f20:
  BN_CTX_free(uVar3);
  return uVar10;
}

// rsa_multip_cap @ 14f725f40

undefined8 rsa_multip_cap(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x400) {
    return 2;
  }
  if (param_1 < 0x1000) {
    return 3;
  }
  uVar1 = 5;
  if (param_1 < 0x2000) {
    uVar1 = 4;
  }
  return uVar1;
}

// rsa_multip_info_free @ 14f725f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_multip_info_free(undefined8 *param_1)

{
  BN_clear_free(*param_1);
  BN_clear_free(param_1[1]);
  BN_clear_free(param_1[2]);
  BN_clear_free(param_1[3]);
  CRYPTO_free(param_1,"crypto\\rsa\\rsa_mp.c",0x13);
  return;
}

// rsa_multip_info_free_ex @ 14f725fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_multip_info_free_ex(longlong param_1)

{
  BN_clear_free(*(undefined8 *)(param_1 + 0x18));
  CRYPTO_free(param_1,"crypto\\rsa\\rsa_mp.c",0x13);
  return;
}

// rsa_multip_info_new @ 14f726020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * rsa_multip_info_new(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f72602c;
  plVar1 = (longlong *)CRYPTO_zalloc(0x28,"crypto\\rsa\\rsa_mp.c",0x24);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(4,0xa6,0x41,"crypto\\rsa\\rsa_mp.c",0x25,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = BN_secure_new();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = BN_secure_new();
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = BN_secure_new();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = BN_secure_new();
        plVar1[3] = lVar2;
        if (lVar2 != 0) {
          return plVar1;
        }
      }
    }
  }
  BN_free(*plVar1);
  BN_free(plVar1[1]);
  BN_free(plVar1[2]);
  BN_free(plVar1[3]);
  CRYPTO_free(plVar1,"crypto\\rsa\\rsa_mp.c",0x38);
  return (longlong *)0x0;
}

// FUN_14f726100 @ 14f726100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f726100(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f726120 @ 14f726120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f726120(void)

{
  OPENSSL_sk_value();
  return;
}

