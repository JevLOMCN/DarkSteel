// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// PEM_read_DHparams @ 14f6f6e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PEM_read_DHparams(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6f6e40;
  uVar1 = BIO_s_file();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(9,0x8e,7,"crypto\\pem\\pem_pkey.c",0xf1,uVar3);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar2,0x6a,0,param_1);
    uVar1 = PEM_read_bio_DHparams(lVar2,param_2,param_3,param_4);
    BIO_free(lVar2);
  }
  return uVar1;
}

// PEM_read_PrivateKey @ 14f6f6ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PEM_read_PrivateKey(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6f6f00;
  uVar1 = BIO_s_file();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(9,0x7c,7,"crypto\\pem\\pem_pkey.c",0xb3,uVar3);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar2,0x6a,0,param_1);
    uVar1 = PEM_read_bio_PrivateKey(lVar2,param_2,param_3,param_4);
    BIO_free(lVar2);
  }
  return uVar1;
}

// PEM_read_bio_DHparams @ 14f6f6fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PEM_read_bio_DHparams
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  char *local_18;
  undefined8 local_10;
  
  local_18 = (char *)0x0;
  local_20 = 0;
  local_10 = 0;
  iVar1 = PEM_bytes_read_bio(&local_10,local_28,&local_18,"DH PARAMETERS",param_1,param_3,param_4);
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  local_20 = local_10;
  iVar1 = strcmp(local_18,"X9.42 DH PARAMETERS");
  if (iVar1 == 0) {
    lVar2 = d2i_DHxparams();
  }
  else {
    lVar2 = d2i_DHparams(param_2,&local_20,local_28[0]);
  }
  if (lVar2 == 0) {
    ERR_put_error(9,0x8d,0xd,"crypto\\pem\\pem_pkey.c",CONCAT44(uVar3,0xe4));
  }
  CRYPTO_free(local_18,"crypto\\pem\\pem_pkey.c",0xe5);
  CRYPTO_free(local_10,"crypto\\pem\\pem_pkey.c",0xe6);
  return lVar2;
}

// PEM_read_bio_Parameters @ 14f6f70a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PEM_read_bio_Parameters(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined4 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar3 = 0;
  local_res20 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar2 = PEM_bytes_read_bio(&local_28,local_res18,&local_res20,"PARAMETERS",param_1,0,0);
  uVar4 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (iVar2 == 0) {
    return 0;
  }
  local_20 = local_28;
  iVar2 = pem_check_suffix(local_res20,"PARAMETERS");
  if (0 < iVar2) {
    lVar3 = EVP_PKEY_new();
    if (lVar3 != 0) {
      iVar2 = EVP_PKEY_set_type_str(lVar3,local_res20,iVar2);
      if ((iVar2 != 0) &&
         (pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x10) + 0x70), pcVar1 != (code *)0x0)) {
        iVar2 = (*pcVar1)(lVar3,&local_20,local_res18[0]);
        if (iVar2 != 0) {
          if (param_2 != (longlong *)0x0) {
            EVP_PKEY_free(*param_2);
            *param_2 = lVar3;
          }
          goto LAB_14f6f71b7;
        }
      }
      EVP_PKEY_free(lVar3);
      lVar3 = 0;
    }
  }
  ERR_put_error(9,0x8c,0xd,"crypto\\pem\\pem_pkey.c",CONCAT44(uVar4,0x9a));
LAB_14f6f71b7:
  CRYPTO_free(local_res20,"crypto\\pem\\pem_pkey.c",0x9b);
  CRYPTO_free(local_28,"crypto\\pem\\pem_pkey.c",0x9c);
  return lVar3;
}

// PEM_read_bio_PrivateKey @ 14f6f7200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong PEM_read_bio_PrivateKey
                   (undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  code *local_480;
  undefined8 local_478;
  int local_468 [2];
  undefined8 local_460;
  char *local_458;
  undefined8 local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  longlong lVar6;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  lVar6 = 0;
  lVar5 = 0;
  local_458 = (char *)0x0;
  local_460 = 0;
  local_450 = 0;
  local_488 = param_1;
  local_480 = param_3;
  local_478 = param_4;
  iVar1 = PEM_bytes_read_bio_secmem(&local_450,local_468,&local_458,"ANY PRIVATE KEY");
  _Str1 = local_458;
  if (iVar1 == 0) {
    return 0;
  }
  local_460 = local_450;
  iVar1 = strcmp(local_458,"PRIVATE KEY");
  if (iVar1 == 0) {
    lVar2 = d2i_PKCS8_PRIV_KEY_INFO(0,&local_460,local_468[0]);
    lVar5 = lVar6;
    if (lVar2 != 0) {
      lVar5 = EVP_PKCS82PKEY(lVar2);
      if (param_2 != (longlong *)0x0) {
        EVP_PKEY_free(*param_2);
        *param_2 = lVar5;
      }
      PKCS8_PRIV_KEY_INFO_free(lVar2);
LAB_14f6f740b:
      lVar6 = lVar5;
      if (lVar5 != 0) goto LAB_14f6f7430;
    }
  }
  else {
    iVar1 = strcmp(_Str1,"ENCRYPTED PRIVATE KEY");
    if (iVar1 == 0) {
      lVar2 = d2i_X509_SIG(0,&local_460,local_468[0]);
      lVar5 = lVar6;
      if (lVar2 != 0) {
        if (param_3 == (code *)0x0) {
          iVar1 = PEM_def_callback(local_448,0x400,0,param_4);
        }
        else {
          iVar1 = (*param_3)();
        }
        if (iVar1 < 0) {
          local_488 = CONCAT44(local_488._4_4_,0x40);
          ERR_put_error(9,0x7b,0x68,"crypto\\pem\\pem_pkey.c");
          X509_SIG_free(lVar2);
          goto LAB_14f6f7430;
        }
        lVar3 = PKCS8_decrypt(lVar2,local_448,iVar1);
        X509_SIG_free(lVar2);
        OPENSSL_cleanse(local_448,(longlong)iVar1);
        if (lVar3 != 0) {
          lVar5 = EVP_PKCS82PKEY(lVar3);
          if (param_2 != (longlong *)0x0) {
            EVP_PKEY_free(*param_2);
            *param_2 = lVar5;
          }
          PKCS8_PRIV_KEY_INFO_free(lVar3);
          goto LAB_14f6f740b;
        }
      }
    }
    else {
      iVar1 = pem_check_suffix(_Str1,"PRIVATE KEY");
      if (((0 < iVar1) &&
          (puVar4 = (undefined4 *)EVP_PKEY_asn1_find_str(0,local_458,iVar1),
          puVar4 != (undefined4 *)0x0)) && (*(longlong *)(puVar4 + 0x2e) != 0)) {
        lVar5 = d2i_PrivateKey(*puVar4,param_2,&local_460,local_468[0]);
        goto LAB_14f6f740b;
      }
    }
  }
  local_488 = CONCAT44(local_488._4_4_,0x58);
  ERR_put_error(9,0x7b,0xd,"crypto\\pem\\pem_pkey.c");
  lVar6 = lVar5;
LAB_14f6f7430:
  CRYPTO_secure_free(local_458,"crypto\\pem\\pem_pkey.c",0x5a);
  CRYPTO_secure_clear_free(local_450,(longlong)local_468[0],"crypto\\pem\\pem_pkey.c",0x5b);
  return lVar6;
}

// PEM_write_PrivateKey @ 14f6f74a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
PEM_write_PrivateKey
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6f74ba;
  lVar2 = BIO_new_fp(param_1,0);
  if (lVar2 == 0) {
    ERR_put_error(9,0x8b,7,"crypto\\pem\\pem_pkey.c",0xc4);
    uVar1 = 0;
  }
  else {
    if ((*(longlong *)(param_2 + 0x10) == 0) ||
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48) != 0)) {
      uVar1 = PEM_write_bio_PKCS8PrivateKey
                        (lVar2,param_2,param_3,param_4,param_5,param_6,param_7,uVar3);
    }
    else {
      uVar1 = PEM_write_bio_PrivateKey_traditional
                        (lVar2,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    BIO_free(lVar2);
  }
  return uVar1;
}

// PEM_write_bio_Parameters @ 14f6f75a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 PEM_write_bio_Parameters(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6f75b0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_2 + 0x10);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x78) == 0)) {
    uVar2 = 0;
  }
  else {
    BIO_snprintf(local_68,0x50,"%s PARAMETERS",*(undefined8 *)(lVar1 + 0x10));
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    uVar2 = PEM_ASN1_write_bio(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x78),local_68,
                               param_1,param_2);
  }
  return uVar2;
}

// PEM_write_bio_PrivateKey @ 14f6f7660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_PrivateKey(undefined8 param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48) == 0)) {
    PEM_write_bio_PrivateKey_traditional();
    return;
  }
  PEM_write_bio_PKCS8PrivateKey();
  return;
}

// PEM_write_bio_PrivateKey_traditional @ 14f6f76a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
PEM_write_bio_PrivateKey_traditional
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [80];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f6f76b3;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_2 + 0x10);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0xc0) == 0)) {
    local_c8 = CONCAT44(local_c8._4_4_,0x72);
    ERR_put_error(9,0x93,0x6e,"crypto\\pem\\pem_pkey.c");
    uVar2 = 0;
  }
  else {
    BIO_snprintf(local_98,0x50,"%s PRIVATE KEY",*(undefined8 *)(lVar1 + 0x10));
    local_a8 = param_7;
    local_b0 = param_6;
    local_b8 = param_5;
    local_c8 = param_3;
    local_c0 = param_4;
    uVar2 = PEM_ASN1_write_bio(i2d_PrivateKey,local_98,param_1,param_2);
  }
  return uVar2;
}

