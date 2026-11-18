// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// FUN_14f6be620 @ 14f6be620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_14f6be620(int param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    lVar2 = RSA_new();
    *param_2 = lVar2;
    return -(lVar2 != 0) & 2;
  }
  if (param_1 == 2) {
    RSA_free();
    *param_2 = 0;
    return 2;
  }
  if ((param_1 == 5) && (*(int *)(*param_2 + 4) == 1)) {
    iVar1 = rsa_multip_calc_product();
    bVar3 = 0;
    if (iVar1 == 1) {
      bVar3 = 2;
    }
    return bVar3;
  }
  return 1;
}

// FUN_14f6be6a0 @ 14f6be6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6be6a0(int param_1,longlong *param_2)

{
  if (param_1 == 2) {
    X509_ALGOR_free(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}

// FUN_14f6be6d0 @ 14f6be6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6be6d0(int param_1,longlong *param_2)

{
  if (param_1 == 2) {
    X509_ALGOR_free(*(undefined8 *)(*param_2 + 0x18));
  }
  return 1;
}

// RSAPrivateKey_dup @ 14f6be700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSAPrivateKey_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_15348af30,param_1);
  return;
}

// RSAPrivateKey_it @ 14f6be730

undefined * RSAPrivateKey_it(void)

{
  return &DAT_15348af30;
}

// RSAPublicKey_dup @ 14f6be740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSAPublicKey_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_15348afa0,param_1);
  return;
}

// RSAPublicKey_it @ 14f6be770

undefined * RSAPublicKey_it(void)

{
  return &DAT_15348afa0;
}

// RSA_OAEP_PARAMS_free @ 14f6be780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_OAEP_PARAMS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_15348b130);
  return;
}

// RSA_OAEP_PARAMS_it @ 14f6be7b0

undefined * RSA_OAEP_PARAMS_it(void)

{
  return &DAT_15348b130;
}

// RSA_OAEP_PARAMS_new @ 14f6be7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_OAEP_PARAMS_new(void)

{
  ASN1_item_new(&DAT_15348b130);
  return;
}

// RSA_PSS_PARAMS_free @ 14f6be7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_PSS_PARAMS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_15348b0a0);
  return;
}

// RSA_PSS_PARAMS_it @ 14f6be820

undefined * RSA_PSS_PARAMS_it(void)

{
  return &DAT_15348b0a0;
}

// RSA_PSS_PARAMS_new @ 14f6be830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_PSS_PARAMS_new(void)

{
  ASN1_item_new(&DAT_15348b0a0);
  return;
}

// d2i_RSAPrivateKey @ 14f6be860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSAPrivateKey(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_RSAPublicKey @ 14f6be890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSAPublicKey(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_RSA_OAEP_PARAMS @ 14f6be8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSA_OAEP_PARAMS(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_RSA_PSS_PARAMS @ 14f6be8f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSA_PSS_PARAMS(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_RSAPrivateKey @ 14f6be920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSAPrivateKey(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_15348af30);
  return;
}

// i2d_RSAPublicKey @ 14f6be950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSAPublicKey(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_15348afa0);
  return;
}

// i2d_RSA_OAEP_PARAMS @ 14f6be980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSA_OAEP_PARAMS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_15348b130);
  return;
}

// i2d_RSA_PSS_PARAMS @ 14f6be9b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSA_PSS_PARAMS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_15348b0a0);
  return;
}

