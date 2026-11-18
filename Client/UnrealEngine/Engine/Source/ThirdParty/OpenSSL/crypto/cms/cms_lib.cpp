// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 45

// CMS_ContentInfo_free @ 14f7c2940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_ContentInfo_free(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  ASN1_item_free(param_1,uVar1);
  return;
}

// CMS_ContentInfo_new @ 14f7c2970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_ContentInfo_new(void)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  ASN1_item_new(uVar1);
  return;
}

// CMS_ContentInfo_print_ctx @ 14f7c29a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_ContentInfo_print_ctx
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7c29ba;
  uVar1 = CMS_ContentInfo_it();
  ASN1_item_print(param_1,param_2,param_3,uVar1,param_4,uVar2);
  return;
}

// CMS_add0_CertificateChoices @ 14f7c2a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CMS_add0_CertificateChoices(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_14f7c3710();
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  if (*plVar2 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *plVar2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  uVar4 = CMS_CertificateChoices_it();
  lVar3 = ASN1_item_new(uVar4);
  if (lVar3 != 0) {
    iVar1 = OPENSSL_sk_push(*plVar2,lVar3);
    if (iVar1 != 0) {
      return lVar3;
    }
    uVar4 = CMS_CertificateChoices_it();
    ASN1_item_free(lVar3,uVar4);
  }
  return 0;
}

// CMS_add0_RevocationInfoChoice @ 14f7c2aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CMS_add0_RevocationInfoChoice(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_14f7c3830();
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  if (*plVar2 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *plVar2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  uVar4 = CMS_RevocationInfoChoice_it();
  lVar3 = ASN1_item_new(uVar4);
  if (lVar3 != 0) {
    iVar1 = OPENSSL_sk_push(*plVar2,lVar3);
    if (iVar1 != 0) {
      return lVar3;
    }
    uVar4 = CMS_RevocationInfoChoice_it();
    ASN1_item_free(lVar3,uVar4);
  }
  return 0;
}

// CMS_add0_cert @ 14f7c2b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_add0_cert(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  puVar2 = (undefined8 *)FUN_14f7c3710();
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  iVar6 = 0;
  iVar1 = OPENSSL_sk_num(*puVar2);
  if (0 < iVar1) {
    do {
      piVar3 = (int *)OPENSSL_sk_value(*puVar2,iVar6);
      if (*piVar3 == 0) {
        iVar1 = X509_cmp(*(undefined8 *)(piVar3 + 2),param_2);
        if (iVar1 == 0) {
          ERR_put_error(0x2e,0xa4,0xaf,"crypto\\cms\\cms_lib.c",0x18b);
          goto LAB_14f7c2c0e;
        }
      }
      iVar6 = iVar6 + 1;
      iVar1 = OPENSSL_sk_num(*puVar2);
    } while (iVar6 < iVar1);
  }
  puVar4 = (undefined4 *)CMS_add0_CertificateChoices(param_1);
  if (puVar4 == (undefined4 *)0x0) {
LAB_14f7c2c0e:
    uVar5 = 0;
  }
  else {
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 2) = param_2;
    uVar5 = 1;
  }
  return uVar5;
}

// CMS_add0_crl @ 14f7c2c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_add0_crl(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CMS_add0_RevocationInfoChoice();
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 2) = param_2;
  return 1;
}

// CMS_add1_cert @ 14f7c2c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CMS_add1_cert(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = CMS_add0_cert();
  if (0 < (int)uVar1) {
    X509_up_ref(param_2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

// CMS_add1_crl @ 14f7c2ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_add1_crl(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CMS_add0_RevocationInfoChoice();
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 2) = param_2;
  X509_CRL_up_ref(param_2);
  return 1;
}

// CMS_dataFinal @ 14f7c2cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_dataFinal(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 local_res18 [2];
  undefined8 uVar6;
  
  uVar6 = 0x14f7c2cff;
  plVar3 = (longlong *)CMS_get0_content();
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  if ((*plVar3 != 0) && ((*(byte *)(*plVar3 + 0x10) & 0x20) != 0)) {
    lVar4 = BIO_find_type(param_2,0x401);
    if (lVar4 == 0) {
      ERR_put_error(0x2e,0x6e,0x69,"crypto\\cms\\cms_lib.c",0x78,uVar6);
      return 0;
    }
    uVar1 = BIO_ctrl(lVar4,3,0,local_res18);
    BIO_set_flags(lVar4,0x200);
    BIO_ctrl(lVar4,0x82,0,0);
    ASN1_STRING_set0(*plVar3,local_res18[0],uVar1);
    *(uint *)(*plVar3 + 0x10) = *(uint *)(*plVar3 + 0x10) & 0xffffffdf;
  }
  iVar2 = OBJ_obj2nid(*param_1);
  if (iVar2 < 0x1a) {
    if (iVar2 == 0x19) {
      uVar6 = cms_DigestedData_do_final(param_1,param_2,0);
      return uVar6;
    }
    if (iVar2 == 0x15) {
      return 1;
    }
    if (iVar2 == 0x16) {
      uVar6 = cms_SignedData_final(param_1,param_2);
      return uVar6;
    }
    bVar5 = iVar2 == 0x17;
  }
  else {
    if (iVar2 == 0x1a) {
      return 1;
    }
    bVar5 = iVar2 == 0x312;
  }
  if (bVar5) {
    return 1;
  }
  ERR_put_error(0x2e,0x6e,0x9c,"crypto\\cms\\cms_lib.c",0x93,uVar6);
  return 0;
}

// CMS_dataInit @ 14f7c2e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CMS_dataInit(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f7c2e95;
  lVar6 = param_2;
  if (param_2 == 0) {
    puVar3 = (undefined8 *)CMS_get0_content();
    if (puVar3 == (undefined8 *)0x0) goto LAB_14f7c2fb1;
    puVar1 = (undefined4 *)*puVar3;
    if (puVar1 == (undefined4 *)0x0) {
      uVar4 = BIO_s_null();
    }
    else {
      if (puVar1[4] != 0x20) {
        lVar6 = BIO_new_mem_buf(*(undefined8 *)(puVar1 + 2),*puVar1);
        goto LAB_14f7c2ee8;
      }
      uVar4 = BIO_s_mem();
    }
    lVar6 = BIO_new(uVar4);
  }
LAB_14f7c2ee8:
  if (lVar6 == 0) {
LAB_14f7c2fb1:
    ERR_put_error(0x2e,0x6f,0x7f,"crypto\\cms\\cms_lib.c",0x40,uVar7);
    return 0;
  }
  iVar2 = OBJ_obj2nid(*param_1);
  if (iVar2 == 0x15) {
    return lVar6;
  }
  if (iVar2 == 0x16) {
    lVar5 = cms_SignedData_init_bio(param_1);
  }
  else if (iVar2 == 0x17) {
    lVar5 = cms_EnvelopedData_init_bio(param_1);
  }
  else if (iVar2 == 0x19) {
    lVar5 = cms_DigestedData_init_bio(param_1);
  }
  else {
    if (iVar2 != 0x1a) {
      ERR_put_error(0x2e,0x6f,0x9c,"crypto\\cms\\cms_lib.c",0x5e,uVar7);
      goto LAB_14f7c2f36;
    }
    lVar5 = cms_EncryptedData_init_bio(param_1);
  }
  if (lVar5 != 0) {
    lVar6 = BIO_push(lVar5,lVar6);
    return lVar6;
  }
LAB_14f7c2f36:
  if (param_2 != 0) {
    return 0;
  }
  BIO_free(lVar6);
  return 0;
}

// CMS_get0_content @ 14f7c2ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * CMS_get0_content(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7c2ffc;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 < 0x1a) {
    if (iVar1 != 0x19) {
      if (iVar1 == 0x15) {
        return (int *)(param_1 + 1);
      }
      if (iVar1 != 0x16) {
        if (iVar1 == 0x17) {
          return (int *)(*(longlong *)(param_1[1] + 0x18) + 0x10);
        }
        goto LAB_14f7c3061;
      }
    }
    piVar2 = *(int **)(param_1[1] + 0x10);
  }
  else {
    if (iVar1 == 0x1a) {
      return (int *)(*(longlong *)(param_1[1] + 8) + 0x10);
    }
    if (iVar1 == 0xcd) {
      return (int *)(*(longlong *)(param_1[1] + 0x28) + 8);
    }
    if (iVar1 == 0x312) {
      return (int *)(*(longlong *)(param_1[1] + 0x18) + 8);
    }
LAB_14f7c3061:
    piVar2 = (int *)param_1[1];
    if (*piVar2 != 4) {
      ERR_put_error(0x2e,0x81,0x98,"crypto\\cms\\cms_lib.c",0xb9,uVar3);
      return (int *)0x0;
    }
  }
  return piVar2 + 2;
}

// CMS_get0_eContentType @ 14f7c30d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_get0_eContentType(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14f7c3780();
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}

// CMS_get1_certs @ 14f7c3110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CMS_get1_certs(void)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  puVar2 = (undefined8 *)FUN_14f7c3710();
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*puVar2);
  uVar6 = uVar4;
  if (0 < iVar1) {
    do {
      piVar3 = (int *)OPENSSL_sk_value(*puVar2,uVar6);
      if (*piVar3 == 0) {
        if ((uVar4 == 0) && (uVar4 = OPENSSL_sk_new_null(), uVar4 == 0)) {
          return 0;
        }
        iVar1 = OPENSSL_sk_push(uVar4,*(undefined8 *)(piVar3 + 2));
        if (iVar1 == 0) {
          OPENSSL_sk_pop_free(uVar4,X509_free);
          return 0;
        }
        X509_up_ref(*(undefined8 *)(piVar3 + 2));
      }
      uVar5 = (int)uVar6 + 1;
      iVar1 = OPENSSL_sk_num(*puVar2);
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar1);
  }
  return uVar4;
}

// CMS_get1_crls @ 14f7c31e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CMS_get1_crls(void)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  puVar2 = (undefined8 *)FUN_14f7c3830();
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*puVar2);
  uVar6 = uVar4;
  if (0 < iVar1) {
    do {
      piVar3 = (int *)OPENSSL_sk_value(*puVar2,uVar6);
      if (*piVar3 == 0) {
        if ((uVar4 == 0) && (uVar4 = OPENSSL_sk_new_null(), uVar4 == 0)) {
          return 0;
        }
        iVar1 = OPENSSL_sk_push(uVar4,*(undefined8 *)(piVar3 + 2));
        if (iVar1 == 0) {
          OPENSSL_sk_pop_free(uVar4,X509_CRL_free);
          return 0;
        }
        X509_CRL_up_ref(*(undefined8 *)(piVar3 + 2));
      }
      uVar5 = (int)uVar6 + 1;
      iVar1 = OPENSSL_sk_num(*puVar2);
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar1);
  }
  return uVar4;
}

// CMS_is_detached @ 14f7c32b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CMS_is_detached(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)CMS_get0_content();
  if (plVar1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  return (ulonglong)(*plVar1 == 0);
}

// CMS_set1_eContentType @ 14f7c32f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_set1_eContentType(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14f7c3780();
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar2 = OBJ_dup(param_2);
    if (lVar2 == 0) {
      return 0;
    }
    ASN1_OBJECT_free(*plVar1);
    *plVar1 = lVar2;
  }
  return 1;
}

// CMS_set_detached @ 14f7c3360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_set_detached(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7c3370;
  plVar1 = (longlong *)CMS_get0_content();
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*plVar1 == 0) {
      lVar2 = ASN1_OCTET_STRING_new();
      *plVar1 = lVar2;
      if (lVar2 == 0) {
        ERR_put_error(0x2e,0x93,0x41,"crypto\\cms\\cms_lib.c",0x119,uVar3);
        return 0;
      }
    }
    *(uint *)(*plVar1 + 0x10) = *(uint *)(*plVar1 + 0x10) | 0x20;
    return 1;
  }
  ASN1_OCTET_STRING_free(*plVar1);
  *plVar1 = 0;
  return 1;
}

// cms_Data_create @ 14f7c3410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * cms_Data_create(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = CMS_ContentInfo_it();
  puVar2 = (undefined8 *)ASN1_item_new(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = OBJ_nid2obj(0x15);
    *puVar2 = uVar1;
    plVar3 = (longlong *)CMS_get0_content(puVar2);
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 == 0) {
        lVar4 = ASN1_OCTET_STRING_new();
        *plVar3 = lVar4;
        if (lVar4 == 0) {
          ERR_put_error(0x2e,0x93,0x41,"crypto\\cms\\cms_lib.c",0x119);
          return puVar2;
        }
      }
      *(uint *)(*plVar3 + 0x10) = *(uint *)(*plVar3 + 0x10) | 0x20;
    }
  }
  return puVar2;
}

// cms_DigestAlgorithm_find_ctx @ 14f7c34c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_DigestAlgorithm_find_ctx(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 uVar5;
  
  uVar5 = 0x14f7c34d5;
  X509_ALGOR_get0(&local_res20,0,0,param_3);
  iVar1 = OBJ_obj2nid(local_res20);
  lVar3 = BIO_find_type(param_2,0x208);
  while( true ) {
    if (lVar3 == 0) {
      ERR_put_error(0x2e,0x73,0x83,"crypto\\cms\\cms_lib.c",0x145,uVar5);
      return 0;
    }
    BIO_ctrl(lVar3,0x78,0,&local_res10);
    uVar4 = EVP_MD_CTX_md(local_res10);
    iVar2 = EVP_MD_type(uVar4);
    if (iVar2 == iVar1) break;
    uVar4 = EVP_MD_CTX_md(local_res10);
    iVar2 = EVP_MD_pkey_type(uVar4);
    if (iVar2 == iVar1) break;
    uVar4 = BIO_next(lVar3);
    lVar3 = BIO_find_type(uVar4,0x208);
  }
  uVar5 = EVP_MD_CTX_copy_ex(param_1,local_res10);
  return uVar5;
}

// cms_DigestAlgorithm_init_bio @ 14f7c35d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cms_DigestAlgorithm_init_bio(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  
  lVar5 = 0;
  X509_ALGOR_get0(local_res10,0,0,param_1);
  uVar1 = OBJ_obj2nid(local_res10[0]);
  uVar3 = OBJ_nid2sn(uVar1);
  lVar4 = EVP_get_digestbyname(uVar3);
  if (lVar4 == 0) {
    uVar1 = 0x128;
    uVar3 = 0x95;
  }
  else {
    uVar3 = BIO_f_md();
    lVar5 = BIO_new(uVar3);
    if (lVar5 != 0) {
      iVar2 = BIO_ctrl(lVar5,0x6f,0,lVar4);
      if (iVar2 != 0) {
        return lVar5;
      }
    }
    uVar1 = 0x12d;
    uVar3 = 0x77;
  }
  ERR_put_error(0x2e,0x74,uVar3,"crypto\\cms\\cms_lib.c",uVar1);
  BIO_free(lVar5);
  return 0;
}

// cms_content_bio @ 14f7c36a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cms_content_bio(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)CMS_get0_content();
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (undefined4 *)*puVar2;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = BIO_s_null();
    BIO_new(uVar3);
    return;
  }
  if (puVar1[4] != 0x20) {
    BIO_new_mem_buf(*(undefined8 *)(puVar1 + 2),*puVar1);
    return;
  }
  uVar3 = BIO_s_mem();
  BIO_new(uVar3);
  return;
}

// FUN_14f7c3710 @ 14f7c3710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7c3710(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7c371c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 == 0x16) {
    return param_1[1] + 0x18;
  }
  if (iVar1 != 0x17) {
    ERR_put_error(0x2e,0x80,0x98,"crypto\\cms\\cms_lib.c",0x163,uVar2);
    return 0;
  }
  return *(longlong *)(param_1[1] + 8);
}

// FUN_14f7c3780 @ 14f7c3780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c3780(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7c378c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 < 0x1b) {
    if (iVar1 == 0x1a) {
      return *(undefined8 *)(param_1[1] + 8);
    }
    if (iVar1 != 0x16) {
      if (iVar1 == 0x17) goto LAB_14f7c37be;
      if (iVar1 != 0x19) goto LAB_14f7c37e8;
    }
    return *(undefined8 *)(param_1[1] + 0x10);
  }
  if (iVar1 == 0xcd) {
    return *(undefined8 *)(param_1[1] + 0x28);
  }
  if (iVar1 != 0x312) {
LAB_14f7c37e8:
    ERR_put_error(0x2e,0x82,0x98,"crypto\\cms\\cms_lib.c",0xdb,uVar2);
    return 0;
  }
LAB_14f7c37be:
  return *(undefined8 *)(param_1[1] + 0x18);
}

// FUN_14f7c3830 @ 14f7c3830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7c3830(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7c383c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 == 0x16) {
    return param_1[1] + 0x20;
  }
  if (iVar1 == 0x17) {
    if (*(longlong *)(param_1[1] + 8) != 0) {
      return *(longlong *)(param_1[1] + 8) + 8;
    }
  }
  else {
    ERR_put_error(0x2e,0x84,0x98,"crypto\\cms\\cms_lib.c",0x1b0,uVar2);
  }
  return 0;
}

// cms_ias_cert_cmp @ 14f7c38b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cms_ias_cert_cmp(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = X509_get_issuer_name(param_2);
  iVar1 = X509_NAME_cmp(*param_1,uVar2);
  if (iVar1 == 0) {
    uVar2 = X509_get_serialNumber(param_2);
    ASN1_INTEGER_cmp(param_1[1],uVar2);
  }
  return;
}

// cms_keyid_cert_cmp @ 14f7c3910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_keyid_cert_cmp(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = X509_get0_subject_key_id(param_2);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = ASN1_OCTET_STRING_cmp(param_1,lVar1);
  return uVar2;
}

// cms_set1_ias @ 14f7c3950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_set1_ias(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = CMS_IssuerAndSerialNumber_it();
  lVar3 = ASN1_item_new(uVar2);
  if (lVar3 != 0) {
    uVar2 = X509_get_issuer_name(param_2);
    iVar1 = X509_NAME_set(lVar3,uVar2);
    if (iVar1 != 0) {
      uVar2 = X509_get_serialNumber(param_2);
      iVar1 = ASN1_STRING_copy(*(undefined8 *)(lVar3 + 8),uVar2);
      if (iVar1 != 0) {
        uVar2 = CMS_IssuerAndSerialNumber_it();
        ASN1_item_free(*param_1,uVar2);
        *param_1 = lVar3;
        return 1;
      }
    }
  }
  uVar2 = CMS_IssuerAndSerialNumber_it();
  ASN1_item_free(lVar3,uVar2);
  ERR_put_error(0x2e,0xb0,0x41,"crypto\\cms\\cms_lib.c",0x237);
  return 0;
}

// cms_set1_keyid @ 14f7c3a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_set1_keyid(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7c3a3c;
  lVar1 = X509_get0_subject_key_id(param_2);
  if (lVar1 == 0) {
    ERR_put_error(0x2e,0xb1,0xa0,"crypto\\cms\\cms_lib.c",0x241,uVar2);
    return 0;
  }
  lVar1 = ASN1_STRING_dup(lVar1);
  if (lVar1 == 0) {
    ERR_put_error(0x2e,0xb1,0x41,"crypto\\cms\\cms_lib.c",0x246,uVar2);
    return 0;
  }
  ASN1_OCTET_STRING_free(*param_1);
  *param_1 = lVar1;
  return 1;
}

// d2i_CMS_ContentInfo @ 14f7c3ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_CMS_ContentInfo(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  ASN1_item_d2i(param_1,param_2,param_3,uVar1);
  return;
}

// i2d_CMS_ContentInfo @ 14f7c3b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_CMS_ContentInfo(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  ASN1_item_i2d(param_1,param_2,uVar1);
  return;
}

// FUN_14f7c3b70 @ 14f7c3b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3b70(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7c3b90 @ 14f7c3b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3b90(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7c3bb0 @ 14f7c3bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3bb0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7c3bd0 @ 14f7c3bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3bd0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7c3bf0 @ 14f7c3bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3bf0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7c3c10 @ 14f7c3c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3c10(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7c3c30 @ 14f7c3c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3c30(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7c3c50 @ 14f7c3c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3c50(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7c3c70 @ 14f7c3c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3c70(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7c3c90 @ 14f7c3c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3c90(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7c3cb0 @ 14f7c3cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3cb0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7c3cd0 @ 14f7c3cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3cd0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7c3cf0 @ 14f7c3cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3cf0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7c3d10 @ 14f7c3d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c3d10(void)

{
  OPENSSL_sk_push();
  return;
}

