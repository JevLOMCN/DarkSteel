// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f6cbb90 @ 14f6cbb90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6cbb90(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6cbba0;
  bVar4 = false;
  if (param_2 == 1) {
    if (param_4 == 3) {
      uVar2 = X509_get_default_cert_file_env();
      lVar3 = ossl_safe_getenv(uVar2);
      if (lVar3 == 0) {
        lVar3 = X509_get_default_cert_file();
      }
      iVar1 = X509_load_cert_crl_file(param_1,lVar3,1);
      bVar4 = iVar1 != 0;
      if (!bVar4) {
        ERR_put_error(0xb,0x65,0x68,"crypto\\x509\\by_file.c",0x3c,uVar5);
        return false;
      }
    }
    else {
      if (param_4 == 1) {
        iVar1 = X509_load_cert_crl_file(param_1,param_3,1);
        return iVar1 != 0;
      }
      iVar1 = X509_load_cert_file(param_1,param_3,param_4);
      bVar4 = iVar1 != 0;
    }
  }
  return bVar4;
}

// X509_LOOKUP_file @ 14f6cbc60

undefined ** X509_LOOKUP_file(void)

{
  return &PTR_s_Load_file_into_cache_154df8710;
}

// X509_load_cert_crl_file @ 14f6cbc70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_load_cert_crl_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6cbc81;
  uVar6 = 0;
  if (param_3 != 1) {
    uVar2 = X509_load_cert_file();
    return uVar2;
  }
  lVar3 = BIO_new_file(param_2,&s_r);
  if (lVar3 == 0) {
    ERR_put_error(0xb,0x84,2,"crypto\\x509\\by_file.c",199,uVar8);
    return 0;
  }
  lVar4 = PEM_X509_INFO_read_bio(lVar3,0,0,"");
  BIO_free(lVar3);
  if (lVar4 == 0) {
    ERR_put_error(0xb,0x84,9,"crypto\\x509\\by_file.c",0xcd,uVar8);
    return 0;
  }
  iVar7 = 0;
  iVar1 = OPENSSL_sk_num(lVar4);
  if (0 < iVar1) {
    do {
      plVar5 = (longlong *)OPENSSL_sk_value(lVar4,iVar7);
      if (*plVar5 != 0) {
        iVar1 = X509_STORE_add_cert(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_14f6cbdc2;
        uVar6 = uVar6 + 1;
      }
      if (plVar5[1] != 0) {
        iVar1 = X509_STORE_add_crl(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_14f6cbdc2;
        uVar6 = uVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar1 = OPENSSL_sk_num(lVar4);
    } while (iVar7 < iVar1);
    if (uVar6 != 0) goto LAB_14f6cbdc2;
  }
  ERR_put_error(0xb,0x84,0x88,"crypto\\x509\\by_file.c",0xdf);
LAB_14f6cbdc2:
  OPENSSL_sk_pop_free(lVar4,X509_INFO_free);
  return (ulonglong)uVar6;
}

// X509_load_cert_file @ 14f6cbe00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_load_cert_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f6cbe24;
  iVar6 = 0;
  iVar7 = 0;
  lVar5 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if ((lVar4 == 0) || (iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2), iVar1 < 1)) {
    uVar9 = 0x54;
    uVar8 = 2;
  }
  else if (param_3 == 1) {
    lVar5 = PEM_read_bio_X509_AUX(lVar4,0,0,"");
    while (iVar6 = 0, lVar5 != 0) {
      iVar1 = X509_STORE_add_cert(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar1 == 0) goto LAB_14f6cbf74;
      iVar7 = iVar7 + 1;
      X509_free(lVar5);
      lVar5 = PEM_read_bio_X509_AUX(lVar4,0,0,"");
    }
    uVar2 = ERR_peek_last_error();
    if (((uVar2 & 0xfff) == 0x6c) && (0 < iVar7)) {
      ERR_clear_error();
LAB_14f6cbf2e:
      iVar6 = iVar7;
      if (iVar6 != 0) goto LAB_14f6cbf74;
      uVar9 = 0x7c;
      uVar8 = 0x87;
    }
    else {
      uVar9 = 0x61;
      uVar8 = 9;
    }
  }
  else if (param_3 == 2) {
    lVar5 = d2i_X509_bio(lVar4,0);
    if (lVar5 != 0) {
      iVar7 = X509_STORE_add_cert(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar7 == 0) goto LAB_14f6cbf74;
      goto LAB_14f6cbf2e;
    }
    uVar9 = 0x70;
    uVar8 = 0xd;
  }
  else {
    uVar9 = 0x78;
    uVar8 = 100;
  }
  ERR_put_error(0xb,0x6f,uVar8,"crypto\\x509\\by_file.c",uVar9,uVar10);
LAB_14f6cbf74:
  X509_free(lVar5);
  BIO_free(lVar4);
  return iVar6;
}

// X509_load_crl_file @ 14f6cbfb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_load_crl_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f6cbfd4;
  iVar6 = 0;
  iVar7 = 0;
  lVar5 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if ((lVar4 == 0) || (iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2), iVar1 < 1)) {
    uVar9 = 0x8d;
    uVar8 = 2;
  }
  else if (param_3 == 1) {
    lVar5 = PEM_read_bio_X509_CRL(lVar4,0,0,"");
    while (iVar6 = 0, lVar5 != 0) {
      iVar1 = X509_STORE_add_crl(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar1 == 0) goto LAB_14f6cc124;
      iVar7 = iVar7 + 1;
      X509_CRL_free(lVar5);
      lVar5 = PEM_read_bio_X509_CRL(lVar4,0,0,"");
    }
    uVar2 = ERR_peek_last_error();
    if (((uVar2 & 0xfff) == 0x6c) && (0 < iVar7)) {
      ERR_clear_error();
LAB_14f6cc0de:
      iVar6 = iVar7;
      if (iVar6 != 0) goto LAB_14f6cc124;
      uVar9 = 0xb5;
      uVar8 = 0x89;
    }
    else {
      uVar9 = 0x9a;
      uVar8 = 9;
    }
  }
  else if (param_3 == 2) {
    lVar5 = d2i_X509_CRL_bio(lVar4,0);
    if (lVar5 != 0) {
      iVar7 = X509_STORE_add_crl(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar7 == 0) goto LAB_14f6cc124;
      goto LAB_14f6cc0de;
    }
    uVar9 = 0xa9;
    uVar8 = 0xd;
  }
  else {
    uVar9 = 0xb1;
    uVar8 = 100;
  }
  ERR_put_error(0xb,0x70,uVar8,"crypto\\x509\\by_file.c",uVar9,uVar10);
LAB_14f6cc124:
  X509_CRL_free(lVar5);
  BIO_free(lVar4);
  return iVar6;
}

// FUN_14f6cc160 @ 14f6cc160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cc160(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6cc180 @ 14f6cc180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cc180(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6cc1a0 @ 14f6cc1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cc1a0(void)

{
  OPENSSL_sk_value();
  return;
}

