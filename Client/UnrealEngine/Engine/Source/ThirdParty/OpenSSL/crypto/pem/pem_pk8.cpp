// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 20

// PEM_read_PKCS8 @ 14f75f100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_PKCS8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_X509_SIG,"ENCRYPTED PRIVATE KEY",param_1,param_2,param_3,param_4,0x14f75f10a);
  return;
}

// PEM_read_PKCS8_PRIV_KEY_INFO @ 14f75f140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_PKCS8_PRIV_KEY_INFO
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",param_1,param_2,param_3,param_4,0x14f75f14a);
  return;
}

// PEM_read_bio_PKCS8 @ 14f75f180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_PKCS8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_X509_SIG,"ENCRYPTED PRIVATE KEY",param_1,param_2,param_3,param_4,0x14f75f18a
                   );
  return;
}

// PEM_read_bio_PKCS8_PRIV_KEY_INFO @ 14f75f1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_PKCS8_PRIV_KEY_INFO
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",param_1,param_2,param_3,param_4,
                    0x14f75f1ca);
  return;
}

// PEM_write_PKCS8 @ 14f75f200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_PKCS8(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_X509_SIG,"ENCRYPTED PRIVATE KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_PKCS8PrivateKey @ 14f75f250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_PKCS8PrivateKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f75f850(param_1,param_2,0,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}

// PEM_write_PKCS8PrivateKey_nid @ 14f75f2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_PKCS8PrivateKey_nid
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f75f850(param_1,param_2,0,param_3,0,param_4,param_5,param_6,param_7);
  return;
}

// PEM_write_PKCS8_PRIV_KEY_INFO @ 14f75f310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_PKCS8_PRIV_KEY_INFO(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_PKCS8 @ 14f75f360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_PKCS8(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_X509_SIG,"ENCRYPTED PRIVATE KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_PKCS8PrivateKey @ 14f75f3b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_PKCS8PrivateKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f75f670(param_1,param_2,0,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}

// PEM_write_bio_PKCS8PrivateKey_nid @ 14f75f410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_PKCS8PrivateKey_nid
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f75f670(param_1,param_2,0,param_3,0,param_4,param_5,param_6,param_7);
  return;
}

// PEM_write_bio_PKCS8_PRIV_KEY_INFO @ 14f75f470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_PKCS8_PRIV_KEY_INFO(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",param_1,param_2,0,0,0,0,0);
  return;
}

// d2i_PKCS8PrivateKey_bio @ 14f75f4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong d2i_PKCS8PrivateKey_bio
                   (undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_468 [32];
  undefined4 local_448;
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f75f4cf;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_468;
  lVar2 = d2i_PKCS8_bio(param_1,0);
  if (lVar2 != 0) {
    if (param_3 == (code *)0x0) {
      iVar1 = PEM_def_callback(local_438,0x400,0,param_4);
    }
    else {
      iVar1 = (*param_3)();
    }
    if (iVar1 < 0) {
      local_448 = 0x80;
      ERR_put_error(9,0x78,0x68,"crypto\\pem\\pem_pk8.c");
      X509_SIG_free(lVar2);
    }
    else {
      lVar3 = PKCS8_decrypt(lVar2,local_438,iVar1);
      X509_SIG_free(lVar2);
      OPENSSL_cleanse(local_438,(longlong)iVar1);
      if (lVar3 != 0) {
        lVar2 = EVP_PKCS82PKEY(lVar3);
        PKCS8_PRIV_KEY_INFO_free(lVar3);
        if (lVar2 != 0) {
          if (param_2 == (longlong *)0x0) {
            return lVar2;
          }
          EVP_PKEY_free(*param_2);
          *param_2 = lVar2;
          return lVar2;
        }
      }
    }
  }
  return 0;
}

// d2i_PKCS8PrivateKey_fp @ 14f75f5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
d2i_PKCS8PrivateKey_fp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f75f5ea;
  lVar1 = BIO_new_fp(param_1,0);
  if (lVar1 == 0) {
    ERR_put_error(9,0x79,7,"crypto\\pem\\pem_pk8.c",200,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = d2i_PKCS8PrivateKey_bio(lVar1,param_2,param_3,param_4);
    BIO_free(lVar1);
  }
  return uVar2;
}

// FUN_14f75f670 @ 14f75f670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_14f75f670(undefined8 param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
             undefined1 *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_468;
  longlong local_460;
  undefined8 local_458;
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f75f68a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_498;
  local_458 = param_9;
  lVar2 = EVP_PKEY2PKCS8(param_2);
  if (lVar2 == 0) {
    local_478 = CONCAT44(local_478._4_4_,0x49);
    ERR_put_error(9,0x7e,0x73,"crypto\\pem\\pem_pk8.c");
  }
  else {
    if ((param_5 == 0) && (param_4 == -1)) {
      if (param_3 != 0) {
        uVar1 = i2d_PKCS8_PRIV_KEY_INFO_bio();
        PKCS8_PRIV_KEY_INFO_free(lVar2);
        return uVar1;
      }
      uVar1 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(param_1,lVar2);
      PKCS8_PRIV_KEY_INFO_free(lVar2);
      return uVar1;
    }
    if (param_6 == (undefined1 *)0x0) {
      if (param_8 == (code *)0x0) {
        param_7 = PEM_def_callback();
      }
      else {
        param_7 = (*param_8)(local_448,0x400,1,local_458);
      }
      if (param_7 < 1) {
        local_478 = CONCAT44(local_478._4_4_,0x53);
        ERR_put_error(9,0x7e,0x6f,"crypto\\pem\\pem_pk8.c");
        PKCS8_PRIV_KEY_INFO_free(lVar2);
        return 0;
      }
      param_6 = local_448;
    }
    local_468 = 0;
    local_470 = 0;
    local_478 = 0;
    local_460 = lVar2;
    lVar3 = PKCS8_encrypt(param_4,param_5,param_6,param_7);
    if (param_6 == local_448) {
      OPENSSL_cleanse(local_448,(longlong)param_7);
    }
    PKCS8_PRIV_KEY_INFO_free(lVar2);
    if (lVar3 != 0) {
      if (param_3 == 0) {
        uVar1 = PEM_write_bio_PKCS8(param_1,lVar3);
      }
      else {
        uVar1 = i2d_PKCS8_bio();
      }
      X509_SIG_free(lVar3);
      return uVar1;
    }
  }
  return 0;
}

// FUN_14f75f850 @ 14f75f850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f75f850(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar3;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar3 = 0x14f75f86a;
  lVar2 = BIO_new_fp(param_1,0);
  if (lVar2 == 0) {
    ERR_put_error(9,0x7d,7,"crypto\\pem\\pem_pk8.c",CONCAT44(uVar1,0xb9));
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14f75f670(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          uVar3);
    BIO_free(lVar2);
  }
  return uVar1;
}

// i2d_PKCS8PrivateKey_bio @ 14f75f920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8PrivateKey_bio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f75f670(param_1,param_2,1,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}

// i2d_PKCS8PrivateKey_fp @ 14f75f980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8PrivateKey_fp
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f75f850(param_1,param_2,1,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}

// i2d_PKCS8PrivateKey_nid_bio @ 14f75f9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8PrivateKey_nid_bio
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f75f670(param_1,param_2,1,param_3,0,param_4,param_5,param_6,param_7);
  return;
}

// i2d_PKCS8PrivateKey_nid_fp @ 14f75fa40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8PrivateKey_nid_fp
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f75f850(param_1,param_2,1,param_3,0,param_4,param_5,param_6,param_7);
  return;
}

