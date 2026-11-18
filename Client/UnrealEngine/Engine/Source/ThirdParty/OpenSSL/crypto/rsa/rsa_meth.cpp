// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// RSA_meth_dup @ 14f764310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * RSA_meth_dup(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f764320;
  plVar3 = (longlong *)CRYPTO_malloc(0x78,"crypto\\rsa\\rsa_meth.c",0x2a);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = param_1[1];
    *plVar3 = *param_1;
    plVar3[1] = lVar4;
    lVar4 = param_1[3];
    plVar3[2] = param_1[2];
    plVar3[3] = lVar4;
    lVar4 = param_1[5];
    plVar3[4] = param_1[4];
    plVar3[5] = lVar4;
    lVar4 = param_1[7];
    plVar3[6] = param_1[6];
    plVar3[7] = lVar4;
    lVar4 = param_1[9];
    plVar3[8] = param_1[8];
    plVar3[9] = lVar4;
    lVar4 = param_1[0xb];
    plVar3[10] = param_1[10];
    plVar3[0xb] = lVar4;
    uVar1 = *(undefined4 *)((longlong)param_1 + 100);
    lVar4 = param_1[0xd];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x6c);
    *(int *)(plVar3 + 0xc) = (int)param_1[0xc];
    *(undefined4 *)((longlong)plVar3 + 100) = uVar1;
    *(int *)(plVar3 + 0xd) = (int)lVar4;
    *(undefined4 *)((longlong)plVar3 + 0x6c) = uVar2;
    plVar3[0xe] = param_1[0xe];
    lVar4 = CRYPTO_strdup(*param_1,"crypto\\rsa\\rsa_meth.c",0x2f);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      return plVar3;
    }
    CRYPTO_free(plVar3,"crypto\\rsa\\rsa_meth.c",0x33);
  }
  ERR_put_error(4,0xa1,0x41,"crypto\\rsa\\rsa_meth.c",0x36,uVar5);
  return (longlong *)0x0;
}

// RSA_meth_free @ 14f764400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_meth_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(*param_1,"crypto\\rsa\\rsa_meth.c",0x23);
    CRYPTO_free(param_1,"crypto\\rsa\\rsa_meth.c",0x24);
  }
  return;
}

// RSA_meth_get_bn_mod_exp @ 14f764470

undefined8 RSA_meth_get_bn_mod_exp(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}

// RSA_meth_get_mod_exp @ 14f7644c0

undefined8 RSA_meth_get_mod_exp(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// RSA_meth_get_pub_dec @ 14f764500

undefined8 RSA_meth_get_pub_dec(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// RSA_meth_get_pub_enc @ 14f764510

undefined8 RSA_meth_get_pub_enc(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// RSA_meth_new @ 14f764540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * RSA_meth_new(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f764555;
  plVar1 = (longlong *)CRYPTO_zalloc(0x78,"crypto\\rsa\\rsa_meth.c",0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 9) = param_2;
    lVar2 = CRYPTO_strdup(param_1,"crypto\\rsa\\rsa_meth.c",0x15);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
    CRYPTO_free(plVar1,"crypto\\rsa\\rsa_meth.c",0x19);
  }
  ERR_put_error(4,0xa2,0x41,"crypto\\rsa\\rsa_meth.c",0x1c,uVar3);
  return (longlong *)0x0;
}

// RSA_meth_set1_name @ 14f764610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_meth_set1_name(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f764620;
  lVar1 = CRYPTO_strdup(param_2,"crypto\\rsa\\rsa_meth.c",0x41);
  if (lVar1 == 0) {
    ERR_put_error(4,0xa3,0x41,"crypto\\rsa\\rsa_meth.c",0x44,uVar2);
    return 0;
  }
  CRYPTO_free(*param_1,"crypto\\rsa\\rsa_meth.c",0x48);
  *param_1 = lVar1;
  return 1;
}

// RSA_meth_set_bn_mod_exp @ 14f7646b0

undefined8 RSA_meth_set_bn_mod_exp(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}

// RSA_meth_set_finish @ 14f7646c0

undefined8 RSA_meth_set_finish(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}

// RSA_meth_set_mod_exp @ 14f764700

undefined8 RSA_meth_set_mod_exp(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}

// RSA_meth_set_priv_dec @ 14f764720

undefined8 RSA_meth_set_priv_dec(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}

// RSA_meth_set_priv_enc @ 14f764730

undefined8 RSA_meth_set_priv_enc(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}

// RSA_meth_set_pub_dec @ 14f764740

undefined8 RSA_meth_set_pub_dec(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}

// RSA_meth_set_pub_enc @ 14f764750

undefined8 RSA_meth_set_pub_enc(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}

// RSA_meth_set_sign @ 14f764760

undefined8 RSA_meth_set_sign(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return 1;
}

