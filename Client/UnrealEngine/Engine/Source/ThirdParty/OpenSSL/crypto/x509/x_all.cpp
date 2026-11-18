// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 80

// NETSCAPE_SPKI_sign @ 14f6afcc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NETSCAPE_SPKI_sign(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6afcda;
  uVar1 = NETSCAPE_SPKAC_it();
  ASN1_item_sign(uVar1,param_1 + 1,0,param_1[3],*param_1,param_2,param_3,uVar2);
  return;
}

// NETSCAPE_SPKI_verify @ 14f6afd30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NETSCAPE_SPKI_verify(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6afd45;
  uVar1 = NETSCAPE_SPKAC_it();
  ASN1_item_verify(uVar1,param_1 + 1,param_1[3],*param_1,param_2,uVar2);
  return;
}

// PKCS7_ISSUER_AND_SERIAL_digest @ 14f6afd90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ISSUER_AND_SERIAL_digest
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6afdaa;
  uVar1 = PKCS7_ISSUER_AND_SERIAL_it();
  ASN1_item_digest(uVar1,param_2,param_1,param_3,param_4,uVar2);
  return;
}

// X509_CRL_digest @ 14f6afdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_CRL_digest(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6afe0a;
  lVar1 = EVP_sha1();
  if ((param_2 == lVar1) && ((*(uint *)(param_1 + 0x7c) & 0x180) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    *param_3 = *(undefined8 *)(param_1 + 0xb0);
    param_3[1] = uVar3;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0xc0);
    uVar3 = 1;
  }
  else {
    uVar2 = X509_CRL_it();
    uVar3 = ASN1_item_digest(uVar2,param_2,param_1,param_3,param_4,uVar3);
  }
  return uVar3;
}

// X509_CRL_http_nbio @ 14f6afe90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_http_nbio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  OCSP_REQ_CTX_nbio_d2i(param_1,param_2,uVar1);
  return;
}

// X509_CRL_sign @ 14f6afed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_sign(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6afeee;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  uVar1 = X509_CRL_INFO_it();
  ASN1_item_sign(uVar1,param_1 + 8,param_1 + 0x50,param_1 + 0x60,param_1,param_2,param_3,uVar2);
  return;
}

// X509_CRL_sign_ctx @ 14f6aff50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_sign_ctx(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x4c) = 1;
  uVar1 = X509_CRL_INFO_it();
  ASN1_item_sign_ctx(uVar1,param_1 + 8,param_1 + 0x50,param_1 + 0x60,param_1,param_2);
  return;
}

// X509_NAME_digest @ 14f6affd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_digest(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6affea;
  uVar1 = X509_NAME_it();
  ASN1_item_digest(uVar1,param_2,param_1,param_3,param_4,uVar2);
  return;
}

// X509_REQ_digest @ 14f6b0030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_digest(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6b004a;
  uVar1 = X509_REQ_it();
  ASN1_item_digest(uVar1,param_2,param_1,param_3,param_4,uVar2);
  return;
}

// X509_REQ_sign @ 14f6b0090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_sign(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6b00aa;
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar1 = X509_REQ_INFO_it();
  ASN1_item_sign(uVar1,param_1 + 0x30,0,*(undefined8 *)(param_1 + 0x40),param_1,param_2,param_3,
                 uVar2);
  return;
}

// X509_REQ_sign_ctx @ 14f6b0100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_sign_ctx(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar1 = X509_REQ_INFO_it();
  ASN1_item_sign_ctx(uVar1,param_1 + 0x30,0,*(undefined8 *)(param_1 + 0x40),param_1,param_2);
  return;
}

// X509_REQ_verify @ 14f6b0160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_verify(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6b0175;
  uVar1 = X509_REQ_INFO_it();
  ASN1_item_verify(uVar1,param_1 + 0x30,*(undefined8 *)(param_1 + 0x40),param_1,param_2,uVar2);
  return;
}

// X509_digest @ 14f6b01c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_digest(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b01da;
  lVar1 = EVP_sha1();
  if ((param_2 == lVar1) && ((*(uint *)(param_1 + 0xd0) & 0x100100) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    *param_3 = *(undefined8 *)(param_1 + 0x120);
    param_3[1] = uVar3;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x130);
    uVar3 = 1;
  }
  else {
    uVar2 = X509_it();
    uVar3 = ASN1_item_digest(uVar2,param_2,param_1,param_3,param_4,uVar3);
  }
  return uVar3;
}

// X509_http_nbio @ 14f6b0260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_http_nbio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_it();
  OCSP_REQ_CTX_nbio_d2i(param_1,param_2,uVar1);
  return;
}

// X509_pubkey_digest @ 14f6b02a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_pubkey_digest(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)X509_get0_pubkey_bitstr();
  if (piVar1 == (int *)0x0) {
    return;
  }
  EVP_Digest(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,param_3,param_4,param_2,0);
  return;
}

// X509_sign @ 14f6b0320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_sign(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6b033e;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  uVar1 = X509_CINF_it();
  ASN1_item_sign(uVar1,param_1 + 0x20,param_1 + 0x80,param_1 + 0x90,param_1,param_2,param_3,uVar2);
  return;
}

// X509_sign_ctx @ 14f6b03a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_sign_ctx(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x7c) = 1;
  uVar1 = X509_CINF_it();
  ASN1_item_sign_ctx(uVar1,param_1 + 0x20,param_1 + 0x80,param_1 + 0x90,param_1,param_2);
  return;
}

// X509_verify @ 14f6b0420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_verify(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b0435;
  iVar1 = X509_ALGOR_cmp(param_1 + 0x80,param_1 + 0x20);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = X509_CINF_it();
  uVar3 = ASN1_item_verify(uVar2,param_1 + 0x80,param_1 + 0x90,param_1,param_2,uVar3);
  return uVar3;
}

// d2i_DSAPrivateKey_bio @ 14f6b04b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSAPrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(DSA_new,d2i_DSAPrivateKey,param_1,param_2);
  return;
}

// d2i_DSAPrivateKey_fp @ 14f6b04e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSAPrivateKey_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(DSA_new,d2i_DSAPrivateKey,param_1,param_2);
  return;
}

// d2i_DSA_PUBKEY_bio @ 14f6b0510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSA_PUBKEY_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(DSA_new,d2i_DSA_PUBKEY,param_1,param_2);
  return;
}

// d2i_DSA_PUBKEY_fp @ 14f6b0540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSA_PUBKEY_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(DSA_new,d2i_DSA_PUBKEY,param_1,param_2);
  return;
}

// d2i_ECPrivateKey_bio @ 14f6b0570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ECPrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(EC_KEY_new,d2i_ECPrivateKey,param_1,param_2);
  return;
}

// d2i_ECPrivateKey_fp @ 14f6b05a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ECPrivateKey_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(EC_KEY_new,d2i_ECPrivateKey,param_1,param_2);
  return;
}

// d2i_EC_PUBKEY_bio @ 14f6b05d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_EC_PUBKEY_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(EC_KEY_new,d2i_EC_PUBKEY,param_1,param_2);
  return;
}

// d2i_EC_PUBKEY_fp @ 14f6b0600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_EC_PUBKEY_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(EC_KEY_new,d2i_EC_PUBKEY,param_1,param_2);
  return;
}

// d2i_PKCS7_bio @ 14f6b0630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS7_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}

// d2i_PKCS7_fp @ 14f6b0670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS7_it();
  ASN1_item_d2i_fp(uVar1,param_1,param_2);
  return;
}

// d2i_PKCS8_PRIV_KEY_INFO_bio @ 14f6b06b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS8_PRIV_KEY_INFO_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(PKCS8_PRIV_KEY_INFO_new,d2i_PKCS8_PRIV_KEY_INFO,param_1,param_2);
  return;
}

// d2i_PKCS8_PRIV_KEY_INFO_fp @ 14f6b06e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS8_PRIV_KEY_INFO_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(PKCS8_PRIV_KEY_INFO_new,d2i_PKCS8_PRIV_KEY_INFO,param_1,param_2);
  return;
}

// d2i_PKCS8_bio @ 14f6b0710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS8_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(X509_SIG_new,d2i_X509_SIG,param_1,param_2);
  return;
}

// d2i_PKCS8_fp @ 14f6b0740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS8_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(X509_SIG_new,d2i_X509_SIG,param_1,param_2);
  return;
}

// d2i_PUBKEY_bio @ 14f6b0770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PUBKEY_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(EVP_PKEY_new,d2i_PUBKEY,param_1,param_2);
  return;
}

// d2i_PUBKEY_fp @ 14f6b07a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PUBKEY_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(EVP_PKEY_new,d2i_PUBKEY,param_1,param_2);
  return;
}

// d2i_PrivateKey_bio @ 14f6b07d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(EVP_PKEY_new,d2i_AutoPrivateKey,param_1,param_2);
  return;
}

// d2i_PrivateKey_fp @ 14f6b0800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PrivateKey_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(EVP_PKEY_new,d2i_AutoPrivateKey,param_1,param_2);
  return;
}

// d2i_RSAPrivateKey_bio @ 14f6b0830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSAPrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RSAPrivateKey_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}

// d2i_RSAPrivateKey_fp @ 14f6b0870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSAPrivateKey_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RSAPrivateKey_it();
  ASN1_item_d2i_fp(uVar1,param_1,param_2);
  return;
}

// d2i_RSAPublicKey_bio @ 14f6b08b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSAPublicKey_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RSAPublicKey_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}

// d2i_RSAPublicKey_fp @ 14f6b08f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSAPublicKey_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RSAPublicKey_it();
  ASN1_item_d2i_fp(uVar1,param_1,param_2);
  return;
}

// d2i_RSA_PUBKEY_bio @ 14f6b0930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSA_PUBKEY_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_bio(RSA_new,d2i_RSA_PUBKEY,param_1,param_2);
  return;
}

// d2i_RSA_PUBKEY_fp @ 14f6b0960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_RSA_PUBKEY_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_d2i_fp(RSA_new,d2i_RSA_PUBKEY,param_1,param_2);
  return;
}

// d2i_X509_CRL_bio @ 14f6b0990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_CRL_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}

// d2i_X509_CRL_fp @ 14f6b09d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_CRL_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  ASN1_item_d2i_fp(uVar1,param_1,param_2);
  return;
}

// d2i_X509_REQ_bio @ 14f6b0a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_REQ_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_REQ_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}

// d2i_X509_REQ_fp @ 14f6b0a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_REQ_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_REQ_it();
  ASN1_item_d2i_fp(uVar1,param_1,param_2);
  return;
}

// d2i_X509_bio @ 14f6b0a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}

// d2i_X509_fp @ 14f6b0ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_it();
  ASN1_item_d2i_fp(uVar1,param_1,param_2);
  return;
}

// i2d_DSAPrivateKey_bio @ 14f6b0b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DSAPrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_DSAPrivateKey,param_1,param_2);
  return;
}

// i2d_DSAPrivateKey_fp @ 14f6b0b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DSAPrivateKey_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_DSAPrivateKey,param_1,param_2);
  return;
}

// i2d_DSA_PUBKEY_bio @ 14f6b0b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DSA_PUBKEY_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_DSA_PUBKEY,param_1,param_2);
  return;
}

// i2d_DSA_PUBKEY_fp @ 14f6b0ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DSA_PUBKEY_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_DSA_PUBKEY,param_1,param_2);
  return;
}

// i2d_ECPrivateKey_bio @ 14f6b0bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ECPrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_ECPrivateKey,param_1,param_2);
  return;
}

// i2d_ECPrivateKey_fp @ 14f6b0c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ECPrivateKey_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_ECPrivateKey,param_1,param_2);
  return;
}

// i2d_EC_PUBKEY_bio @ 14f6b0c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_EC_PUBKEY_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_EC_PUBKEY,param_1,param_2);
  return;
}

// i2d_EC_PUBKEY_fp @ 14f6b0c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_EC_PUBKEY_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_EC_PUBKEY,param_1,param_2);
  return;
}

// i2d_PKCS7_bio @ 14f6b0c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS7_it();
  ASN1_item_i2d_bio(uVar1,param_1,param_2);
  return;
}

// i2d_PKCS7_fp @ 14f6b0cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS7_it();
  ASN1_item_i2d_fp(uVar1,param_1,param_2);
  return;
}

// i2d_PKCS8PrivateKeyInfo_bio @ 14f6b0d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 i2d_PKCS8PrivateKeyInfo_bio(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = EVP_PKEY2PKCS8(param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = ASN1_i2d_bio(i2d_PKCS8_PRIV_KEY_INFO,param_1,lVar2);
  PKCS8_PRIV_KEY_INFO_free(lVar2);
  return uVar1;
}

// i2d_PKCS8PrivateKeyInfo_fp @ 14f6b0d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 i2d_PKCS8PrivateKeyInfo_fp(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = EVP_PKEY2PKCS8(param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = ASN1_i2d_fp(i2d_PKCS8_PRIV_KEY_INFO,param_1,lVar2);
  PKCS8_PRIV_KEY_INFO_free(lVar2);
  return uVar1;
}

// i2d_PKCS8_PRIV_KEY_INFO_bio @ 14f6b0dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8_PRIV_KEY_INFO_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_PKCS8_PRIV_KEY_INFO,param_1,param_2);
  return;
}

// i2d_PKCS8_PRIV_KEY_INFO_fp @ 14f6b0e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8_PRIV_KEY_INFO_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_PKCS8_PRIV_KEY_INFO,param_1,param_2);
  return;
}

// i2d_PKCS8_bio @ 14f6b0e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_X509_SIG,param_1,param_2);
  return;
}

// i2d_PKCS8_fp @ 14f6b0e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_X509_SIG,param_1,param_2);
  return;
}

// i2d_PUBKEY_bio @ 14f6b0e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PUBKEY_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_PUBKEY,param_1,param_2);
  return;
}

// i2d_PUBKEY_fp @ 14f6b0ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PUBKEY_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_PUBKEY,param_1,param_2);
  return;
}

// i2d_PrivateKey_bio @ 14f6b0ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_PrivateKey,param_1,param_2);
  return;
}

// i2d_PrivateKey_fp @ 14f6b0f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PrivateKey_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_PrivateKey,param_1,param_2);
  return;
}

// i2d_RSAPrivateKey_bio @ 14f6b0f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSAPrivateKey_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RSAPrivateKey_it();
  ASN1_item_i2d_bio(uVar1,param_1,param_2);
  return;
}

// i2d_RSAPrivateKey_fp @ 14f6b0f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSAPrivateKey_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RSAPrivateKey_it();
  ASN1_item_i2d_fp(uVar1,param_1,param_2);
  return;
}

// i2d_RSAPublicKey_bio @ 14f6b0fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSAPublicKey_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RSAPublicKey_it();
  ASN1_item_i2d_bio(uVar1,param_1,param_2);
  return;
}

// i2d_RSAPublicKey_fp @ 14f6b1010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSAPublicKey_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RSAPublicKey_it();
  ASN1_item_i2d_fp(uVar1,param_1,param_2);
  return;
}

// i2d_RSA_PUBKEY_bio @ 14f6b1050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSA_PUBKEY_bio(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_bio(i2d_RSA_PUBKEY,param_1,param_2);
  return;
}

// i2d_RSA_PUBKEY_fp @ 14f6b1080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_RSA_PUBKEY_fp(undefined8 param_1,undefined8 param_2)

{
  ASN1_i2d_fp(i2d_RSA_PUBKEY,param_1,param_2);
  return;
}

// i2d_X509_CRL_bio @ 14f6b10b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_CRL_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  ASN1_item_i2d_bio(uVar1,param_1,param_2);
  return;
}

// i2d_X509_CRL_fp @ 14f6b10f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_CRL_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  ASN1_item_i2d_fp(uVar1,param_1,param_2);
  return;
}

// i2d_X509_REQ_bio @ 14f6b1130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_REQ_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_REQ_it();
  ASN1_item_i2d_bio(uVar1,param_1,param_2);
  return;
}

// i2d_X509_REQ_fp @ 14f6b1170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_REQ_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_REQ_it();
  ASN1_item_i2d_fp(uVar1,param_1,param_2);
  return;
}

// i2d_X509_bio @ 14f6b11b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_it();
  ASN1_item_i2d_bio(uVar1,param_1,param_2);
  return;
}

// i2d_X509_fp @ 14f6b11f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_it();
  ASN1_item_i2d_fp(uVar1,param_1,param_2);
  return;
}

