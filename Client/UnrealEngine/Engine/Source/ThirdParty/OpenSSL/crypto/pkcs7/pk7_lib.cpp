// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 29

// PKCS7_RECIP_INFO_get0_alg @ 14f770ee0

void PKCS7_RECIP_INFO_get0_alg(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}

// PKCS7_RECIP_INFO_set @ 14f770f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_RECIP_INFO_set(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  iVar2 = ASN1_INTEGER_set(*param_1,0);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = X509_get_issuer_name(param_2);
  iVar2 = X509_NAME_set(param_1[1],uVar3);
  if (iVar2 == 0) {
    return 0;
  }
  ASN1_INTEGER_free(*(undefined8 *)(param_1[1] + 8));
  uVar3 = X509_get_serialNumber(param_2);
  lVar4 = ASN1_INTEGER_dup(uVar3);
  *(longlong *)(param_1[1] + 8) = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = X509_get0_pubkey(param_2);
  if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x10) == 0)) ||
     (pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xb0), pcVar1 == (code *)0x0)) {
    uVar5 = 0x1e1;
  }
  else {
    iVar2 = (*pcVar1)(lVar4,2,0,param_1);
    if (iVar2 != -2) {
      if (0 < iVar2) {
        X509_up_ref(param_2);
        param_1[4] = param_2;
        return 1;
      }
      uVar5 = 0x1ed;
      uVar3 = 0x95;
      goto LAB_14f770ff4;
    }
    uVar5 = 0x1e8;
  }
  uVar3 = 0x96;
LAB_14f770ff4:
  ERR_put_error(0x21,0x82,uVar3,"crypto\\pkcs7\\pk7_lib.c",uVar5);
  return 0;
}

// PKCS7_SIGNER_INFO_get0_algs @ 14f771020

void PKCS7_SIGNER_INFO_get0_algs
               (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x38);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}

// PKCS7_SIGNER_INFO_set @ 14f771050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS7_SIGNER_INFO_set(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = ASN1_INTEGER_set(*param_1,1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = X509_get_issuer_name(param_2);
  iVar2 = X509_NAME_set(param_1[1],uVar4);
  if (iVar2 == 0) {
    return 0;
  }
  ASN1_INTEGER_free(*(undefined8 *)(param_1[1] + 8));
  uVar4 = X509_get_serialNumber(param_2);
  lVar5 = ASN1_INTEGER_dup(uVar4);
  *(longlong *)(param_1[1] + 8) = lVar5;
  if (lVar5 == 0) {
    return 0;
  }
  EVP_PKEY_up_ref(param_3);
  param_1[7] = param_3;
  uVar3 = EVP_MD_type(param_4);
  uVar4 = OBJ_nid2obj(uVar3);
  X509_ALGOR_set0(param_1[2],uVar4,5);
  if ((*(longlong *)(param_3 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_3 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_3,1,0,param_1);
    if (0 < iVar2) {
      return 1;
    }
    if (iVar2 != -2) {
      uVar3 = 0x153;
      uVar4 = 0x93;
      goto LAB_14f771157;
    }
  }
  uVar3 = 0x158;
  uVar4 = 0x94;
LAB_14f771157:
  ERR_put_error(0x21,0x81,uVar4,"crypto\\pkcs7\\pk7_lib.c",uVar3);
  return 0;
}

// PKCS7_add_certificate @ 14f771190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_add_certificate(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7711a0;
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if ((iVar2 - 0x16U & 0xfffffffd) != 0) {
    ERR_put_error(0x21,100,0x71,"crypto\\pkcs7\\pk7_lib.c",0xfc,uVar4);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *(longlong *)(lVar1 + 0x10) = lVar3;
    if (lVar3 == 0) {
      ERR_put_error(0x21,100,0x41,"crypto\\pkcs7\\pk7_lib.c",0x103,uVar4);
      return 0;
    }
  }
  X509_up_ref(param_2);
  iVar2 = OPENSSL_sk_push(*(undefined8 *)(lVar1 + 0x10),param_2);
  if (iVar2 == 0) {
    X509_free(param_2);
    return 0;
  }
  return 1;
}

// PKCS7_add_crl @ 14f771270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_add_crl(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f771280;
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if ((iVar2 - 0x16U & 0xfffffffd) != 0) {
    ERR_put_error(0x21,0x65,0x71,"crypto\\pkcs7\\pk7_lib.c",0x11c,uVar4);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *(longlong *)(lVar1 + 0x18) = lVar3;
    if (lVar3 == 0) {
      ERR_put_error(0x21,0x65,0x41,"crypto\\pkcs7\\pk7_lib.c",0x123,uVar4);
      return 0;
    }
  }
  X509_CRL_up_ref(param_2);
  iVar2 = OPENSSL_sk_push(*(undefined8 *)(lVar1 + 0x18),param_2);
  if (iVar2 == 0) {
    X509_CRL_free(param_2);
    return 0;
  }
  return 1;
}

// PKCS7_add_recipient @ 14f771350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS7_add_recipient(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = PKCS7_RECIP_INFO_new();
  if (lVar2 != 0) {
    iVar1 = PKCS7_RECIP_INFO_set(lVar2,param_2);
    if (iVar1 != 0) {
      iVar1 = PKCS7_add_recipient_info(param_1,lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
  PKCS7_RECIP_INFO_free(lVar2);
  return 0;
}

// PKCS7_add_recipient_info @ 14f7713d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS7_add_recipient_info(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7713e0;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x17) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
  }
  else {
    if (iVar1 != 0x18) {
      ERR_put_error(0x21,0x66,0x71,"crypto\\pkcs7\\pk7_lib.c",0x1c5,uVar2);
      return false;
    }
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x30);
  }
  iVar1 = OPENSSL_sk_push(uVar2,param_2);
  return iVar1 != 0;
}

// PKCS7_add_signature @ 14f771460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS7_add_signature(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                            longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x14f771478;
  lVar3 = 0;
  if (param_4 == 0) {
    iVar1 = EVP_PKEY_get_default_digest_nid(param_3,local_res20);
    if (iVar1 < 1) goto LAB_14f7714d8;
    uVar2 = OBJ_nid2sn(local_res20[0]);
    param_4 = EVP_get_digestbyname(uVar2);
    if (param_4 == 0) {
      ERR_put_error(0x21,0x83,0x97,"crypto\\pkcs7\\pk7_lib.c",0x168,uVar4);
      goto LAB_14f7714d8;
    }
  }
  lVar3 = PKCS7_SIGNER_INFO_new();
  if (((lVar3 != 0) && (iVar1 = PKCS7_SIGNER_INFO_set(lVar3,param_2,param_3,param_4), iVar1 != 0))
     && (iVar1 = PKCS7_add_signer(param_1,lVar3), iVar1 != 0)) {
    return lVar3;
  }
LAB_14f7714d8:
  PKCS7_SIGNER_INFO_free(lVar3);
  return 0;
}

// PKCS7_add_signer @ 14f771540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS7_add_signer(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f771553;
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if ((iVar2 != 0x16) && (iVar2 != 0x18)) {
    ERR_put_error(0x21,0x67,0x71,"crypto\\pkcs7\\pk7_lib.c",0xcb,uVar8);
    return false;
  }
  uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20);
  iVar2 = OBJ_obj2nid(**(undefined8 **)(param_2 + 0x10));
  iVar7 = 0;
  iVar3 = OPENSSL_sk_num(uVar8);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(uVar8,iVar7);
      iVar3 = OBJ_obj2nid(*puVar4);
      if (iVar3 == iVar2) goto LAB_14f771641;
      iVar7 = iVar7 + 1;
      iVar3 = OPENSSL_sk_num(uVar8);
    } while (iVar7 < iVar3);
  }
  puVar4 = (undefined8 *)X509_ALGOR_new();
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = ASN1_TYPE_new();
    puVar4[1] = lVar5;
    if (lVar5 != 0) {
      uVar6 = OBJ_nid2obj(iVar2);
      *puVar4 = uVar6;
      *(undefined4 *)puVar4[1] = 5;
      iVar2 = OPENSSL_sk_push(uVar8,puVar4);
      if (iVar2 == 0) {
        X509_ALGOR_free(puVar4);
        return false;
      }
LAB_14f771641:
      iVar2 = OPENSSL_sk_push(uVar1,param_2);
      return iVar2 != 0;
    }
  }
  X509_ALGOR_free(puVar4);
  ERR_put_error(0x21,0x67,0x41,"crypto\\pkcs7\\pk7_lib.c",0xde);
  return false;
}

// PKCS7_cert_from_signer_info @ 14f7716a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_cert_from_signer_info(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x16) {
    uVar2 = X509_find_by_issuer_and_serial
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),
                       **(undefined8 **)(param_2 + 8),(*(undefined8 **)(param_2 + 8))[1]);
    return uVar2;
  }
  return 0;
}

// PKCS7_content_new @ 14f771700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_content_new(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = PKCS7_new();
  if (lVar2 != 0) {
    iVar1 = PKCS7_set_type(lVar2,param_2);
    if (iVar1 != 0) {
      iVar1 = PKCS7_set_content(param_1,lVar2);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  PKCS7_free(lVar2);
  return 0;
}

// PKCS7_ctrl @ 14f771780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int PKCS7_ctrl(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f771795;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (param_2 == 1) {
    if (iVar1 == 0x16) {
      *(int *)(param_1 + 0x10) = param_3;
      if (param_3 != 0) {
        iVar1 = OBJ_obj2nid(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x18));
        if (iVar1 == 0x15) {
          ASN1_OCTET_STRING_free
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20));
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
        }
      }
      return param_3;
    }
    uVar3 = 0x25;
  }
  else {
    if (param_2 != 2) {
      uVar3 = 0x39;
      uVar2 = 0x6e;
      goto LAB_14f77187c;
    }
    if (iVar1 == 0x16) {
      if ((*(longlong *)(param_1 + 0x20) != 0) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    uVar3 = 0x33;
  }
  uVar2 = 0x68;
LAB_14f77187c:
  ERR_put_error(0x21,0x68,uVar2,"crypto\\pkcs7\\pk7_lib.c",uVar3,uVar4);
  return 0;
}

// PKCS7_get_signer_info @ 14f7718b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_get_signer_info(longlong param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    return 0;
  }
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if ((iVar1 != 0x16) && (iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0x18)) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20);
}

// PKCS7_set0_type_other @ 14f771910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_set0_type_other(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = OBJ_nid2obj(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return 1;
}

// PKCS7_set_cipher @ 14f771950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_set_cipher(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f771960;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x17) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  }
  else {
    if (iVar1 != 0x18) {
      ERR_put_error(0x21,0x6c,0x71,"crypto\\pkcs7\\pk7_lib.c",0x213,uVar3);
      return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28);
  }
  iVar1 = EVP_CIPHER_type(param_2);
  if (iVar1 == 0) {
    ERR_put_error(0x21,0x6c,0x90,"crypto\\pkcs7\\pk7_lib.c",0x21b,uVar3);
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  return 1;
}

// PKCS7_set_content @ 14f771a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_set_content(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f771a20;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x16) {
    PKCS7_free(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28) = param_2;
    return 1;
  }
  if (iVar1 != 0x19) {
    ERR_put_error(0x21,0x6d,0x70,"crypto\\pkcs7\\pk7_lib.c",99,uVar2);
    return 0;
  }
  PKCS7_free(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10) = param_2;
  return 1;
}

// PKCS7_set_digest @ 14f771ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_set_digest(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f771ad0;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0x19) {
    ERR_put_error(0x21,0x7e,0x71,"crypto\\pkcs7\\pk7_lib.c",0x185,uVar4);
    return 1;
  }
  lVar3 = ASN1_TYPE_new();
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 8) = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x21,0x7e,0x41,"crypto\\pkcs7\\pk7_lib.c",0x17d,uVar4);
    return 0;
  }
  **(undefined4 **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 8) = 5;
  uVar2 = EVP_MD_type(param_2);
  uVar4 = OBJ_nid2obj(uVar2);
  **(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8) = uVar4;
  return 1;
}

// PKCS7_set_type @ 14f771ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_set_type(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f771bb0;
  uVar2 = OBJ_nid2obj(param_2);
  switch(param_2) {
  case 0x15:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    lVar3 = ASN1_OCTET_STRING_new();
    *(longlong *)(param_1 + 0x20) = lVar3;
    bVar5 = lVar3 == 0;
    goto LAB_14f771d45;
  case 0x16:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)PKCS7_SIGNED_new();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = ASN1_INTEGER_set(*puVar4,1);
    if (iVar1 != 0) {
      return 1;
    }
    PKCS7_SIGNED_free(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    return 0;
  case 0x17:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)PKCS7_ENVELOPE_new();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = ASN1_INTEGER_set(*puVar4,0), iVar1 != 0)) {
      uVar2 = OBJ_nid2obj(0x15);
      **(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10) = uVar2;
      return 1;
    }
    break;
  case 0x18:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)PKCS7_SIGN_ENVELOPE_new();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = ASN1_INTEGER_set(*puVar4,1), iVar1 != 0)) {
      uVar2 = OBJ_nid2obj(0x15);
      **(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x28) = uVar2;
      return 1;
    }
    break;
  case 0x19:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)PKCS7_DIGEST_new();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = ASN1_INTEGER_set(*puVar4,0);
    bVar5 = iVar1 == 0;
LAB_14f771d45:
    if (!bVar5) {
      return 1;
    }
    break;
  case 0x1a:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)PKCS7_ENCRYPT_new();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = ASN1_INTEGER_set(*puVar4,0), iVar1 != 0)) {
      uVar2 = OBJ_nid2obj(0x15);
      **(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8) = uVar2;
      return 1;
    }
    break;
  default:
    ERR_put_error(0x21,0x6e,0x70,"crypto\\pkcs7\\pk7_lib.c",0xaa,uVar6);
  }
  return 0;
}

// PKCS7_stream @ 14f771db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_stream(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_2 + 0x18));
  if (iVar1 == 0x15) {
    lVar2 = *(longlong *)(param_2 + 0x20);
  }
  else if (iVar1 == 0x16) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x20);
  }
  else if (iVar1 == 0x17) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + 0x10);
    if (lVar2 != 0) goto LAB_14f771e58;
    lVar2 = ASN1_OCTET_STRING_new();
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + 0x10) = lVar2;
  }
  else {
    if (iVar1 != 0x18) {
      return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x10);
    if (lVar2 != 0) goto LAB_14f771e58;
    lVar2 = ASN1_OCTET_STRING_new();
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x28) + 0x10) = lVar2;
  }
  if (lVar2 == 0) {
    return 0;
  }
LAB_14f771e58:
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x10;
  *param_1 = lVar2 + 8;
  return 1;
}

// FUN_14f771e80 @ 14f771e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771e80(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f771ea0 @ 14f771ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771ea0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f771ec0 @ 14f771ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771ec0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f771ee0 @ 14f771ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771ee0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f771f00 @ 14f771f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771f00(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f771f20 @ 14f771f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771f20(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f771f40 @ 14f771f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771f40(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f771f60 @ 14f771f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771f60(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f771f80 @ 14f771f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f771f80(void)

{
  OPENSSL_sk_push();
  return;
}

