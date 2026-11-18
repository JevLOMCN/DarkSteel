// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// X509_CINF_it @ 14f6b1e10

undefined * X509_CINF_it(void)

{
  return &DAT_15348a0a0;
}

// FUN_14f6b1e20 @ 14f6b1e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6b1e20(int param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (param_1 != 1) {
    if (param_1 == 3) {
      CRYPTO_free_ex_data(3,lVar1,lVar1 + 0xc0);
      X509_CERT_AUX_free(*(undefined8 *)(lVar1 + 0x138));
      ASN1_OCTET_STRING_free(*(undefined8 *)(lVar1 + 0xe0));
      AUTHORITY_KEYID_free(*(undefined8 *)(lVar1 + 0xe8));
      CRL_DIST_POINTS_free(*(undefined8 *)(lVar1 + 0xf8));
      policy_cache_free(*(undefined8 *)(lVar1 + 0xf0));
      GENERAL_NAMES_free(*(undefined8 *)(lVar1 + 0x100));
      NAME_CONSTRAINTS_free(*(undefined8 *)(lVar1 + 0x108));
      OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0x110),IPAddressFamily_free);
      ASIdentifiers_free(*(undefined8 *)(lVar1 + 0x118));
      return 1;
    }
    if (param_1 != 4) {
      return 1;
    }
    CRYPTO_free_ex_data(3,lVar1,lVar1 + 0xc0);
    X509_CERT_AUX_free(*(undefined8 *)(lVar1 + 0x138));
    ASN1_OCTET_STRING_free(*(undefined8 *)(lVar1 + 0xe0));
    AUTHORITY_KEYID_free(*(undefined8 *)(lVar1 + 0xe8));
    CRL_DIST_POINTS_free(*(undefined8 *)(lVar1 + 0xf8));
    policy_cache_free(*(undefined8 *)(lVar1 + 0xf0));
    GENERAL_NAMES_free(*(undefined8 *)(lVar1 + 0x100));
    NAME_CONSTRAINTS_free(*(undefined8 *)(lVar1 + 0x108));
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0x110),IPAddressFamily_free);
    ASIdentifiers_free(*(undefined8 *)(lVar1 + 0x118));
  }
  *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x148) = 0;
  *(undefined8 *)(lVar1 + 0xd4) = 0;
  *(undefined4 *)(lVar1 + 0xdc) = 0;
  *(undefined4 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x138) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  uVar2 = CRYPTO_new_ex_data(3,lVar1,lVar1 + 0xc0);
  if ((int)uVar2 != 0) {
    return 1;
  }
  return uVar2;
}

// X509_CINF_free @ 14f6b1ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CINF_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_15348a0a0);
  return;
}

// X509_CINF_new @ 14f6b2020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CINF_new(void)

{
  ASN1_item_new(&DAT_15348a0a0);
  return;
}

// X509_dup @ 14f6b2050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_15348a130,param_1);
  return;
}

// X509_free @ 14f6b2080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_15348a130);
  return;
}

// X509_get0_signature @ 14f6b20b0

void X509_get0_signature(longlong *param_1,longlong *param_2,longlong param_3)

{
  if (param_1 != (longlong *)0x0) {
    *param_1 = param_3 + 0x90;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_3 + 0x80;
  }
  return;
}

// X509_get_ex_data @ 14f6b20e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0xc0);
  return;
}

// X509_get_signature_nid @ 14f6b2110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_signature_nid(longlong param_1)

{
  OBJ_obj2nid(*(undefined8 *)(param_1 + 0x80));
  return;
}

// X509_it @ 14f6b2140

undefined * X509_it(void)

{
  return &DAT_15348a130;
}

// X509_new @ 14f6b2150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_new(void)

{
  ASN1_item_new(&DAT_15348a130);
  return;
}

// X509_set_ex_data @ 14f6b2180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0xc0);
  return;
}

// d2i_X509 @ 14f6b21b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_X509_AUX @ 14f6b21e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_X509_AUX(longlong *param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_2;
  bVar1 = false;
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    bVar1 = true;
  }
  lVar2 = ASN1_item_d2i(param_1,&local_res8,param_3,&DAT_15348a130);
  if (lVar2 != 0) {
    iVar4 = (int)param_3 + (*param_2 - (int)local_res8);
    if ((iVar4 < 1) || (lVar3 = d2i_X509_CERT_AUX(lVar2 + 0x138,&local_res8,iVar4), lVar3 != 0)) {
      *(undefined8 *)param_2 = local_res8;
      return lVar2;
    }
    if ((bVar1) && (ASN1_item_free(lVar2,&DAT_15348a130), param_1 != (longlong *)0x0)) {
      *param_1 = 0;
    }
  }
  return 0;
}

// d2i_X509_CINF @ 14f6b22b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_CINF(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509 @ 14f6b22e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_15348a130);
  return;
}

// i2d_X509_AUX @ 14f6b2310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2d_X509_AUX(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x14f6b2320;
  if ((param_2 == (longlong *)0x0) || (*param_2 != 0)) {
    uVar3 = FUN_14f6b2480();
  }
  else {
    uVar3 = ASN1_item_i2d(param_1,0,&DAT_15348a130);
    iVar1 = (int)uVar3;
    if ((0 < iVar1) && (param_1 != 0)) {
      uVar3 = i2d_X509_CERT_AUX(*(undefined8 *)(param_1 + 0x138),0);
      if (-1 < (int)uVar3) {
        uVar3 = (ulonglong)(uint)((int)uVar3 + iVar1);
      }
    }
    if (0 < (int)uVar3) {
      local_res10 = CRYPTO_malloc((longlong)(int)uVar3,"crypto\\x509\\x_x509.c",0xd6);
      *param_2 = local_res10;
      if (local_res10 == 0) {
        ERR_put_error(0xb,0x97,0x41,"crypto\\x509\\x_x509.c",0xd8,uVar4);
        return 0xffffffff;
      }
      uVar2 = FUN_14f6b2480(param_1,&local_res10);
      if ((int)uVar2 < 1) {
        CRYPTO_free(*param_2,"crypto\\x509\\x_x509.c",0xdf);
        *param_2 = 0;
      }
      return (ulonglong)uVar2;
    }
  }
  return uVar3;
}

// i2d_X509_CINF @ 14f6b2420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_CINF(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_15348a0a0);
  return;
}

// i2d_re_X509_tbs @ 14f6b2450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_re_X509_tbs(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = 1;
  ASN1_item_i2d(param_1,param_2,&DAT_15348a0a0);
  return;
}

// FUN_14f6b2480 @ 14f6b2480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6b2480(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *param_2;
  }
  uVar2 = ASN1_item_i2d(param_1,param_2,&DAT_15348a130);
  iVar1 = (int)uVar2;
  if ((0 < iVar1) && (param_1 != 0)) {
    uVar2 = i2d_X509_CERT_AUX(*(undefined8 *)(param_1 + 0x138),param_2);
    if ((int)uVar2 < 0) {
      if (lVar3 != 0) {
        *param_2 = lVar3;
      }
    }
    else {
      uVar2 = (ulonglong)(uint)((int)uVar2 + iVar1);
    }
  }
  return uVar2;
}

// FUN_14f6b2500 @ 14f6b2500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b2500(void)

{
  OPENSSL_sk_pop_free();
  return;
}

