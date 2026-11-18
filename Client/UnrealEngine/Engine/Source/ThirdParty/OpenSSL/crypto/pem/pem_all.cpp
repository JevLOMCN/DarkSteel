// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 65

// PEM_read_DSAPrivateKey @ 14f6bf030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_DSAPrivateKey(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PEM_read_PrivateKey(param_1,0);
  FUN_14f6c01d0(uVar1,param_2);
  return;
}

// PEM_read_DSA_PUBKEY @ 14f6bf060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_DSA_PUBKEY(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  PEM_ASN1_read(d2i_DSA_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf06a);
  return;
}

// PEM_read_DSAparams @ 14f6bf0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_DSAparams(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_DSAparams,"DSA PARAMETERS",param_1,param_2,param_3,param_4,0x14f6bf0aa);
  return;
}

// PEM_read_ECPKParameters @ 14f6bf0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_ECPKParameters
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_ECPKParameters,"EC PARAMETERS",param_1,param_2,param_3,param_4,0x14f6bf0ea);
  return;
}

// PEM_read_ECPrivateKey @ 14f6bf120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_ECPrivateKey(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PEM_read_PrivateKey(param_1,0);
  FUN_14f6c0250(uVar1,param_2);
  return;
}

// PEM_read_EC_PUBKEY @ 14f6bf150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_EC_PUBKEY(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_EC_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf15a);
  return;
}

// PEM_read_NETSCAPE_CERT_SEQUENCE @ 14f6bf190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_NETSCAPE_CERT_SEQUENCE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_NETSCAPE_CERT_SEQUENCE,"CERTIFICATE",param_1,param_2,param_3,param_4,0x14f6bf19a
               );
  return;
}

// PEM_read_PKCS7 @ 14f6bf1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_PKCS7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_PKCS7,&s_PKCS7,param_1,param_2,param_3,param_4,0x14f6bf1da);
  return;
}

// PEM_read_PUBKEY @ 14f6bf210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_PUBKEY(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf21a);
  return;
}

// PEM_read_RSAPrivateKey @ 14f6bf250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_RSAPrivateKey(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PEM_read_PrivateKey(param_1,0);
  FUN_14f6c02d0(uVar1,param_2);
  return;
}

// PEM_read_RSAPublicKey @ 14f6bf280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_RSAPublicKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_RSAPublicKey,"RSA PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf28a);
  return;
}

// PEM_read_RSA_PUBKEY @ 14f6bf2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_RSA_PUBKEY(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  PEM_ASN1_read(d2i_RSA_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf2ca);
  return;
}

// PEM_read_X509_CRL @ 14f6bf300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_X509_CRL(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_X509_CRL,"X509 CRL",param_1,param_2,param_3,param_4,0x14f6bf30a);
  return;
}

// PEM_read_X509_REQ @ 14f6bf340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_X509_REQ(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_X509_REQ,"CERTIFICATE REQUEST",param_1,param_2,param_3,param_4,0x14f6bf34a);
  return;
}

// PEM_read_bio_DSAPrivateKey @ 14f6bf380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_DSAPrivateKey(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PEM_read_bio_PrivateKey(param_1,0);
  FUN_14f6c01d0(uVar1,param_2);
  return;
}

// PEM_read_bio_DSA_PUBKEY @ 14f6bf3b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_DSA_PUBKEY
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_DSA_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf3ba);
  return;
}

// PEM_read_bio_DSAparams @ 14f6bf3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_DSAparams
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_DSAparams,"DSA PARAMETERS",param_1,param_2,param_3,param_4,0x14f6bf3fa);
  return;
}

// PEM_read_bio_ECPKParameters @ 14f6bf430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_ECPKParameters
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_ECPKParameters,"EC PARAMETERS",param_1,param_2,param_3,param_4,0x14f6bf43a);
  return;
}

// PEM_read_bio_ECPrivateKey @ 14f6bf470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_ECPrivateKey(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PEM_read_bio_PrivateKey(param_1,0);
  FUN_14f6c0250(uVar1,param_2);
  return;
}

// PEM_read_bio_EC_PUBKEY @ 14f6bf4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_EC_PUBKEY
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_EC_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf4aa);
  return;
}

// PEM_read_bio_NETSCAPE_CERT_SEQUENCE @ 14f6bf4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_NETSCAPE_CERT_SEQUENCE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_NETSCAPE_CERT_SEQUENCE,"CERTIFICATE",param_1,param_2,param_3,param_4,
                    0x14f6bf4ea);
  return;
}

// PEM_read_bio_PKCS7 @ 14f6bf520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_PKCS7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_PKCS7,&s_PKCS7,param_1,param_2,param_3,param_4,0x14f6bf52a);
  return;
}

// PEM_read_bio_PUBKEY @ 14f6bf560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_PUBKEY(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  PEM_ASN1_read_bio(d2i_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf56a);
  return;
}

// PEM_read_bio_RSAPrivateKey @ 14f6bf5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_RSAPrivateKey(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PEM_read_bio_PrivateKey(param_1,0);
  FUN_14f6c02d0(uVar1,param_2);
  return;
}

// PEM_read_bio_RSAPublicKey @ 14f6bf5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_RSAPublicKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_RSAPublicKey,"RSA PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf5da);
  return;
}

// PEM_read_bio_RSA_PUBKEY @ 14f6bf610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_RSA_PUBKEY
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_RSA_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4,0x14f6bf61a);
  return;
}

// PEM_read_bio_X509_CRL @ 14f6bf650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_X509_CRL
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_X509_CRL,"X509 CRL",param_1,param_2,param_3,param_4,0x14f6bf65a);
  return;
}

// PEM_read_bio_X509_REQ @ 14f6bf690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_X509_REQ
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_X509_REQ,"CERTIFICATE REQUEST",param_1,param_2,param_3,param_4,0x14f6bf69a);
  return;
}

// PEM_write_DHparams @ 14f6bf6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_DHparams(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_DHparams,"DH PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_DHxparams @ 14f6bf720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_DHxparams(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_DHxparams,"X9.42 DH PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_DSAPrivateKey @ 14f6bf770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_DSAPrivateKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  PEM_ASN1_write(i2d_DSAPrivateKey,"DSA PRIVATE KEY",param_1,param_2,param_3,param_4,param_5,param_6
                 ,param_7);
  return;
}

// PEM_write_DSA_PUBKEY @ 14f6bf7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_DSA_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_DSA_PUBKEY,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_DSAparams @ 14f6bf820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_DSAparams(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_DSAparams,"DSA PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_ECPKParameters @ 14f6bf870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_ECPKParameters(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_ECPKParameters,"EC PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_ECPrivateKey @ 14f6bf8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_ECPrivateKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  PEM_ASN1_write(i2d_ECPrivateKey,"EC PRIVATE KEY",param_1,param_2,param_3,param_4,param_5,param_6,
                 param_7);
  return;
}

// PEM_write_EC_PUBKEY @ 14f6bf920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_EC_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_EC_PUBKEY,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_NETSCAPE_CERT_SEQUENCE @ 14f6bf970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_NETSCAPE_CERT_SEQUENCE(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_NETSCAPE_CERT_SEQUENCE,"CERTIFICATE",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_PKCS7 @ 14f6bf9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_PKCS7(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_PKCS7,&s_PKCS7,param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_PUBKEY @ 14f6bfa10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_PUBKEY,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_RSAPrivateKey @ 14f6bfa60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_RSAPrivateKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  PEM_ASN1_write(i2d_RSAPrivateKey,"RSA PRIVATE KEY",param_1,param_2,param_3,param_4,param_5,param_6
                 ,param_7);
  return;
}

// PEM_write_RSAPublicKey @ 14f6bfac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_RSAPublicKey(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_RSAPublicKey,"RSA PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_RSA_PUBKEY @ 14f6bfb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_RSA_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_RSA_PUBKEY,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_X509_CRL @ 14f6bfb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_X509_CRL(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_X509_CRL,"X509 CRL",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_X509_REQ @ 14f6bfbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_X509_REQ(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_X509_REQ,"CERTIFICATE REQUEST",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_X509_REQ_NEW @ 14f6bfc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_X509_REQ_NEW(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_X509_REQ,"NEW CERTIFICATE REQUEST",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_DHparams @ 14f6bfc50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_DHparams(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_DHparams,"DH PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_DHxparams @ 14f6bfca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_DHxparams(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_DHxparams,"X9.42 DH PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_DSAPrivateKey @ 14f6bfcf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_DSAPrivateKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  PEM_ASN1_write_bio(i2d_DSAPrivateKey,"DSA PRIVATE KEY",param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7);
  return;
}

// PEM_write_bio_DSA_PUBKEY @ 14f6bfd50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_DSA_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_DSA_PUBKEY,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_DSAparams @ 14f6bfda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_DSAparams(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_DSAparams,"DSA PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_ECPKParameters @ 14f6bfdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_ECPKParameters(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_ECPKParameters,"EC PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_ECPrivateKey @ 14f6bfe40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_ECPrivateKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  PEM_ASN1_write_bio(i2d_ECPrivateKey,"EC PRIVATE KEY",param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7);
  return;
}

// PEM_write_bio_EC_PUBKEY @ 14f6bfea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_EC_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_EC_PUBKEY,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_NETSCAPE_CERT_SEQUENCE @ 14f6bfef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_NETSCAPE_CERT_SEQUENCE(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_NETSCAPE_CERT_SEQUENCE,"CERTIFICATE",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_PKCS7 @ 14f6bff40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_PKCS7(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_PKCS7,&s_PKCS7,param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_PUBKEY @ 14f6bff90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_PUBKEY,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_RSAPrivateKey @ 14f6bffe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_RSAPrivateKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  PEM_ASN1_write_bio(i2d_RSAPrivateKey,"RSA PRIVATE KEY",param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7);
  return;
}

// PEM_write_bio_RSAPublicKey @ 14f6c0040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_RSAPublicKey(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_RSAPublicKey,"RSA PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_RSA_PUBKEY @ 14f6c0090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_RSA_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_RSA_PUBKEY,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_X509_CRL @ 14f6c00e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_X509_CRL(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_X509_CRL,"X509 CRL",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_X509_REQ @ 14f6c0130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_X509_REQ(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_X509_REQ,"CERTIFICATE REQUEST",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_X509_REQ_NEW @ 14f6c0180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_X509_REQ_NEW(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_X509_REQ,"NEW CERTIFICATE REQUEST",param_1,param_2,0,0,0,0,0);
  return;
}

// FUN_14f6c01d0 @ 14f6c01d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6c01d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = EVP_PKEY_get1_DSA();
  EVP_PKEY_free(param_1);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    DSA_free(*param_2);
    *param_2 = lVar1;
  }
  return lVar1;
}

// FUN_14f6c0250 @ 14f6c0250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6c0250(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = EVP_PKEY_get1_EC_KEY();
  EVP_PKEY_free(param_1);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    EC_KEY_free(*param_2);
    *param_2 = lVar1;
  }
  return lVar1;
}

// FUN_14f6c02d0 @ 14f6c02d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6c02d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = EVP_PKEY_get1_RSA();
  EVP_PKEY_free(param_1);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    RSA_free(*param_2);
    *param_2 = lVar1;
  }
  return lVar1;
}

