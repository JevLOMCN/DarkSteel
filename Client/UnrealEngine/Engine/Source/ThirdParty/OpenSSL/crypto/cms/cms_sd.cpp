// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 49

// CMS_SignedData_init @ 14f78a860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_SignedData_init(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14f78c740();
  return lVar1 != 0;
}

// CMS_SignerInfo_cert_cmp @ 14f78a890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_SignerInfo_cert_cmp(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (*piVar1 == 0) {
    uVar2 = cms_ias_cert_cmp(*(undefined8 *)(piVar1 + 2));
    return uVar2;
  }
  if (*piVar1 == 1) {
    uVar2 = cms_keyid_cert_cmp(*(undefined8 *)(piVar1 + 2));
    return uVar2;
  }
  return 0xffffffff;
}

// CMS_SignerInfo_get0_algs @ 14f78a8e0

void CMS_SignerInfo_get0_algs
               (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}

// CMS_SignerInfo_get0_pkey_ctx @ 14f78a930

undefined8 CMS_SignerInfo_get0_pkey_ctx(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}

// CMS_SignerInfo_set1_signer_cert @ 14f78a9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_SignerInfo_set1_signer_cert(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    X509_up_ref(param_2);
    EVP_PKEY_free(*(undefined8 *)(param_1 + 0x40));
    uVar1 = X509_get_pubkey(param_2);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  X509_free(*(undefined8 *)(param_1 + 0x38));
  *(longlong *)(param_1 + 0x38) = param_2;
  return;
}

// CMS_SignerInfo_sign @ 14f78aa00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_SignerInfo_sign(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  ulonglong in_stack_ffffffffffffffc8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  local_res10 = 0;
  local_res8 = 0;
  uVar3 = OBJ_obj2nid(**(undefined8 **)(param_1 + 0x10));
  uVar5 = OBJ_nid2sn(uVar3);
  lVar6 = EVP_get_digestbyname(uVar5);
  if (lVar6 == 0) {
    return 0;
  }
  iVar4 = CMS_signed_get_attr_by_NID(param_1,0x34);
  if (iVar4 < 0) {
    lVar7 = X509_gmtime_adj(0,0);
    bVar2 = false;
    if (lVar7 != 0) {
      in_stack_ffffffffffffffc8 = CONCAT44((int)(in_stack_ffffffffffffffc8 >> 0x20),0xffffffff);
      iVar4 = CMS_signed_add1_attr_by_NID
                        (param_1,0x34,*(undefined4 *)(lVar7 + 4),lVar7,in_stack_ffffffffffffffc8);
      bVar2 = false;
      if (0 < iVar4) {
        bVar2 = true;
      }
    }
    ASN1_TIME_free(lVar7);
    if (bVar2) goto LAB_14f78ab1f;
    uVar8 = 0x67;
    uVar5 = 0x1a3;
    uVar3 = 0x41;
  }
  else {
LAB_14f78ab1f:
    iVar4 = CMS_si_check_attributes(param_1);
    if (iVar4 == 0) goto LAB_14f78aaf2;
    lVar7 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      EVP_MD_CTX_reset(uVar1);
      in_stack_ffffffffffffffc8 = *(ulonglong *)(param_1 + 0x40);
      iVar4 = EVP_DigestSignInit(uVar1,&local_res10,lVar6,0,in_stack_ffffffffffffffc8);
      if (iVar4 < 1) goto LAB_14f78aaf2;
      *(longlong *)(param_1 + 0x50) = local_res10;
      lVar7 = local_res10;
    }
    local_res10 = lVar7;
    in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
    iVar4 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,8,0xb,in_stack_ffffffffffffffc8,param_1);
    uVar3 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
    if (iVar4 < 1) {
      uVar5 = CONCAT44(uVar3,0x2b0);
    }
    else {
      uVar5 = CMS_Attributes_Sign_it();
      iVar4 = ASN1_item_i2d(*(undefined8 *)(param_1 + 0x18),&local_res8,uVar5);
      if (((local_res8 == 0) ||
          (iVar4 = EVP_DigestUpdate(uVar1,local_res8,(longlong)iVar4), iVar4 < 1)) ||
         (iVar4 = EVP_DigestSignFinal(uVar1,0,&local_res18), iVar4 < 1)) goto LAB_14f78aaf2;
      CRYPTO_free(local_res8,"crypto\\cms\\cms_sd.c",700);
      local_res8 = CRYPTO_malloc(CONCAT44(uStackX_1c,local_res18),"crypto\\cms\\cms_sd.c",0x2bd);
      if ((local_res8 == 0) ||
         (iVar4 = EVP_DigestSignFinal(uVar1,local_res8,&local_res18), iVar4 < 1))
      goto LAB_14f78aaf2;
      iVar4 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,8,0xb,CONCAT44(uVar3,1),param_1);
      if (0 < iVar4) {
        EVP_MD_CTX_reset(uVar1);
        ASN1_STRING_set0(*(undefined8 *)(param_1 + 0x28),local_res8,local_res18);
        return 1;
      }
      uVar5 = 0x2c5;
    }
    uVar8 = 0x97;
    uVar3 = 0x6e;
  }
  ERR_put_error(0x2e,uVar8,uVar3,"crypto\\cms\\cms_sd.c",uVar5);
LAB_14f78aaf2:
  CRYPTO_free(local_res8,"crypto\\cms\\cms_sd.c",0x2d0);
  EVP_MD_CTX_reset(uVar1);
  return 0;
}

// CMS_SignerInfo_verify @ 14f78acc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int CMS_SignerInfo_verify(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  iVar5 = -1;
  iVar4 = -1;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    ERR_put_error(0x2e,0x98,0x86,"crypto\\cms\\cms_sd.c",CONCAT44(uVar9,0x2dd),0x14f78acd0);
    return -1;
  }
  iVar2 = CMS_si_check_attributes();
  if (iVar2 != 0) {
    uVar3 = OBJ_obj2nid(**(undefined8 **)(param_1 + 0x10));
    uVar6 = OBJ_nid2sn(uVar3);
    lVar7 = EVP_get_digestbyname(uVar6);
    if (lVar7 != 0) {
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar8 = EVP_MD_CTX_new();
        *(longlong *)(param_1 + 0x48) = lVar8;
        if (lVar8 == 0) {
          ERR_put_error(0x2e,0x98,0x41,"crypto\\cms\\cms_sd.c",CONCAT44(uVar9,0x2e8));
          return -1;
        }
      }
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      iVar2 = EVP_DigestVerifyInit(uVar1,param_1 + 0x50,lVar7,0,uVar6);
      uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((0 < iVar2) && (iVar2 = FUN_14f78c470(param_1,1), iVar5 = iVar4, iVar2 != 0)) {
        uVar6 = CMS_Attributes_Verify_it();
        iVar4 = ASN1_item_i2d(*(undefined8 *)(param_1 + 0x18),&local_res8,uVar6);
        if (local_res8 != 0) {
          iVar4 = EVP_DigestUpdate(uVar1,local_res8,(longlong)iVar4);
          CRYPTO_free(local_res8,"crypto\\cms\\cms_sd.c",0x2f7);
          if ((0 < iVar4) &&
             (iVar5 = EVP_DigestVerifyFinal
                                (uVar1,*(undefined8 *)(*(int **)(param_1 + 0x28) + 2),
                                 (longlong)**(int **)(param_1 + 0x28)), iVar5 < 1)) {
            ERR_put_error(0x2e,0x98,0x9e,"crypto\\cms\\cms_sd.c",CONCAT44(uVar9,0x2ff));
          }
        }
      }
      EVP_MD_CTX_reset(uVar1);
    }
  }
  return iVar5;
}

// CMS_SignerInfo_verify_content @ 14f78ae80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int CMS_SignerInfo_verify_content(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90;
  uint local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f78ae96;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  puVar5 = (uint *)0x0;
  lVar3 = EVP_MD_CTX_new();
  lVar6 = 0;
  lVar7 = 0;
  iVar2 = -1;
  if (lVar3 == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x32d);
    ERR_put_error(0x2e,0x9a,0x41,"crypto\\cms\\cms_sd.c");
    iVar2 = -1;
  }
  else {
    iVar1 = CMS_signed_get_attr_count(param_1);
    if (-1 < iVar1) {
      uVar4 = OBJ_nid2obj(0x33);
      puVar5 = (uint *)CMS_signed_get0_data_by_OBJ(param_1,uVar4,0xfffffffd);
      if (puVar5 == (uint *)0x0) {
        local_98 = CONCAT44(local_98._4_4_,0x337);
        ERR_put_error(0x2e,0x9a,0x72,"crypto\\cms\\cms_sd.c");
        goto LAB_14f78b0ab;
      }
    }
    iVar1 = cms_DigestAlgorithm_find_ctx(lVar3,param_2,*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = EVP_DigestFinal_ex(lVar3,local_78,local_88);
      if (iVar1 < 1) {
        local_98 = CONCAT44(local_98._4_4_,0x341);
        ERR_put_error(0x2e,0x9a,0x93,"crypto\\cms\\cms_sd.c");
        lVar6 = lVar7;
      }
      else {
        if (puVar5 == (uint *)0x0) {
          uVar4 = EVP_MD_CTX_md(lVar3);
          lVar6 = EVP_PKEY_CTX_new(*(undefined8 *)(param_1 + 0x40),0);
          if (lVar6 == 0) goto LAB_14f78b0ab;
          iVar1 = EVP_PKEY_verify_init(lVar6);
          if (iVar1 < 1) goto LAB_14f78b0ab;
          local_98 = local_98 & 0xffffffff00000000;
          local_90 = uVar4;
          iVar1 = EVP_PKEY_CTX_ctrl(lVar6,0xffffffff,0xf8,1);
          if (iVar1 < 1) goto LAB_14f78b0ab;
          *(longlong *)(param_1 + 0x50) = lVar6;
          iVar1 = FUN_14f78c470(param_1,1);
          if (iVar1 == 0) goto LAB_14f78b0ab;
          local_98 = (ulonglong)local_88[0];
          iVar2 = EVP_PKEY_verify(lVar6,*(undefined8 *)(*(int **)(param_1 + 0x28) + 2),
                                  (longlong)**(int **)(param_1 + 0x28),local_78);
          if (0 < iVar2) goto LAB_14f78b0ab;
          local_98 = CONCAT44(local_98._4_4_,0x364);
        }
        else {
          if (local_88[0] != *puVar5) {
            local_98 = CONCAT44(local_98._4_4_,0x34a);
            ERR_put_error(0x2e,0x9a,0x78,"crypto\\cms\\cms_sd.c");
            lVar6 = lVar7;
            goto LAB_14f78b0ab;
          }
          iVar2 = memcmp(local_78,*(void **)(puVar5 + 2),(ulonglong)local_88[0]);
          if (iVar2 == 0) {
            iVar2 = 1;
            lVar6 = lVar7;
            goto LAB_14f78b0ab;
          }
          local_98 = CONCAT44(local_98._4_4_,0x350);
        }
        ERR_put_error(0x2e,0x9a,0x9e,"crypto\\cms\\cms_sd.c");
        iVar2 = 0;
      }
    }
  }
LAB_14f78b0ab:
  EVP_PKEY_CTX_free(lVar6);
  EVP_MD_CTX_free(lVar3);
  return iVar2;
}

// CMS_add1_signer @ 14f78b0f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
CMS_add1_signer(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               uint param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong in_stack_ffffffffffffffa8;
  undefined4 local_48 [2];
  undefined8 local_40;
  
  puVar5 = (undefined4 *)0x0;
  iVar1 = X509_check_private_key(param_2,param_3);
  if (iVar1 == 0) {
    ERR_put_error(0x2e,0x66,0x88,"crypto\\cms\\cms_sd.c",0xfb);
    return (undefined4 *)0x0;
  }
  piVar3 = (int *)FUN_14f78c740(param_1);
  if (piVar3 == (int *)0x0) goto LAB_14f78b337;
  uVar4 = CMS_SignerInfo_it();
  puVar5 = (undefined4 *)ASN1_item_new(uVar4);
  if (puVar5 == (undefined4 *)0x0) goto LAB_14f78b315;
  X509_check_purpose(param_2,0xffffffff);
  X509_up_ref(param_2);
  EVP_PKEY_up_ref(param_3);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0xe) = param_2;
  lVar6 = EVP_MD_CTX_new();
  *(longlong *)(puVar5 + 0x12) = lVar6;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  if (lVar6 == 0) {
    uVar4 = 0x110;
LAB_14f78b31d:
    uVar8 = 0x41;
  }
  else {
    if ((param_5 >> 0x10 & 1) == 0) {
      uVar4 = 0;
      *puVar5 = 1;
    }
    else {
      *puVar5 = 3;
      if (*piVar3 < 3) {
        *piVar3 = 3;
      }
      uVar4 = 1;
    }
    iVar1 = cms_set1_SignerIdentifier(*(undefined8 *)(puVar5 + 2),param_2,uVar4);
    if (iVar1 == 0) goto LAB_14f78b337;
    if (param_4 != 0) {
LAB_14f78b270:
      X509_ALGOR_set_md(*(undefined8 *)(puVar5 + 4),param_4);
      iVar7 = 0;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(piVar3 + 2));
      iVar1 = 0;
      if (0 < iVar2) {
        do {
          iVar7 = iVar1;
          uVar4 = OPENSSL_sk_value(*(undefined8 *)(piVar3 + 2),iVar7);
          X509_ALGOR_get0(&local_40,0,0,uVar4);
          iVar1 = OBJ_obj2nid(local_40);
          iVar2 = EVP_MD_type(param_4);
          if (iVar1 == iVar2) break;
          iVar7 = iVar7 + 1;
          iVar2 = OPENSSL_sk_num(*(undefined8 *)(piVar3 + 2));
          iVar1 = iVar7;
        } while (iVar7 < iVar2);
      }
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(piVar3 + 2));
      if (iVar7 == iVar1) {
        lVar6 = X509_ALGOR_new();
        if (lVar6 != 0) {
          X509_ALGOR_set_md(lVar6,param_4);
          iVar1 = OPENSSL_sk_push(*(undefined8 *)(piVar3 + 2),lVar6);
          if (iVar1 != 0) goto LAB_14f78b367;
          X509_ALGOR_free(lVar6);
        }
      }
      else {
LAB_14f78b367:
        if (((param_5 & 0x40000) == 0) && (iVar1 = FUN_14f78c470(puVar5,0), iVar1 == 0))
        goto LAB_14f78b337;
        if ((param_5 & 0x100) == 0) {
          if (*(longlong *)(puVar5 + 6) == 0) {
            lVar6 = OPENSSL_sk_new_null();
            *(longlong *)(puVar5 + 6) = lVar6;
            if (lVar6 == 0) goto LAB_14f78b315;
          }
          if ((param_5 >> 9 & 1) == 0) {
            local_40 = 0;
            iVar2 = CMS_add_standard_smimecap(&local_40);
            uVar4 = local_40;
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = CMS_add_smimecap(puVar5,local_40);
            }
            OPENSSL_sk_pop_free(uVar4,X509_ALGOR_free);
            if (iVar1 == 0) goto LAB_14f78b315;
          }
          if (((param_5 >> 0xf & 1) != 0) &&
             (((iVar1 = FUN_14f78c2a0(param_1,puVar5), iVar1 == 0 ||
               (iVar1 = FUN_14f78c6f0(param_1,puVar5), iVar1 == 0)) ||
              (((param_5 & 0x44000) == 0 && (iVar1 = CMS_SignerInfo_sign(puVar5), iVar1 == 0))))))
          goto LAB_14f78b337;
        }
        if (((param_5 & 2) != 0) || (iVar1 = CMS_add1_cert(param_1,param_2), iVar1 != 0)) {
          if ((param_5 & 0x40000) != 0) {
            if ((param_5 & 0x100) == 0) {
              iVar1 = EVP_DigestSignInit(*(undefined8 *)(puVar5 + 0x12),puVar5 + 0x14,param_4,0,
                                         param_3);
            }
            else {
              lVar6 = EVP_PKEY_CTX_new(*(undefined8 *)(puVar5 + 0x10),0);
              *(longlong *)(puVar5 + 0x14) = lVar6;
              if ((lVar6 == 0) || (iVar1 = EVP_PKEY_sign_init(lVar6), iVar1 < 1))
              goto LAB_14f78b337;
              iVar1 = EVP_PKEY_CTX_ctrl(*(undefined8 *)(puVar5 + 0x14),0xffffffff,0xf8,1,
                                        in_stack_ffffffffffffffa8 & 0xffffffff00000000,param_4);
            }
            if (iVar1 < 1) goto LAB_14f78b337;
          }
          if (*(longlong *)(piVar3 + 10) == 0) {
            uVar4 = OPENSSL_sk_new_null();
            *(undefined8 *)(piVar3 + 10) = uVar4;
          }
          if ((*(longlong *)(piVar3 + 10) != 0) &&
             (iVar1 = OPENSSL_sk_push(*(longlong *)(piVar3 + 10),puVar5), iVar1 != 0)) {
            return puVar5;
          }
        }
      }
LAB_14f78b315:
      uVar4 = 0x184;
      goto LAB_14f78b31d;
    }
    iVar1 = EVP_PKEY_get_default_digest_nid(param_3,local_48);
    if (iVar1 < 1) goto LAB_14f78b337;
    uVar4 = OBJ_nid2sn(local_48[0]);
    param_4 = EVP_get_digestbyname(uVar4);
    if (param_4 != 0) goto LAB_14f78b270;
    uVar4 = 0x127;
    uVar8 = 0x80;
  }
  ERR_put_error(0x2e,0x66,uVar8,"crypto\\cms\\cms_sd.c",uVar4);
LAB_14f78b337:
  uVar4 = CMS_SignerInfo_it();
  ASN1_item_free(puVar5,uVar4);
  return (undefined4 *)0x0;
}

// CMS_add_simple_smimecap @ 14f78b530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_add_simple_smimecap(longlong *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar2 = 0;
  if ((0 < param_3) &&
     ((lVar2 = ASN1_INTEGER_new(), lVar2 == 0 ||
      (iVar1 = ASN1_INTEGER_set(lVar2,param_3), iVar1 == 0)))) {
    ASN1_INTEGER_free(lVar2);
    return 0;
  }
  lVar3 = X509_ALGOR_new();
  if (lVar3 == 0) {
    ASN1_INTEGER_free(lVar2);
    return 0;
  }
  uVar5 = 0xffffffff;
  if (lVar2 != 0) {
    uVar5 = 2;
  }
  uVar4 = OBJ_nid2obj(param_2);
  X509_ALGOR_set0(lVar3,uVar4,uVar5,lVar2);
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) goto LAB_14f78b5ef;
  }
  iVar1 = OPENSSL_sk_push(*param_1,lVar3);
  if (iVar1 != 0) {
    return 1;
  }
LAB_14f78b5ef:
  X509_ALGOR_free(lVar3);
  return 0;
}

// CMS_add_smimecap @ 14f78b620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 CMS_add_smimecap(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x14f78b62c;
  local_res18[0] = 0;
  iVar1 = i2d_X509_ALGORS(param_2,local_res18);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = CMS_signed_add1_attr_by_NID(param_1,0xa7,0x10,local_res18[0],iVar1,uVar3);
  CRYPTO_free(local_res18[0],"crypto\\cms\\cms_sd.c",0x379);
  return uVar2;
}

// CMS_add_standard_smimecap @ 14f78b6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_add_standard_smimecap(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = OBJ_nid2sn(0x1ab);
  lVar3 = EVP_get_cipherbyname(uVar2);
  if ((lVar3 != 0) && (iVar1 = CMS_add_simple_smimecap(param_1,0x1ab,0xffffffff), iVar1 == 0)) {
    return 0;
  }
  uVar2 = OBJ_nid2sn(0x3d6);
  lVar3 = EVP_get_digestbyname(uVar2);
  if ((lVar3 != 0) && (iVar1 = CMS_add_simple_smimecap(param_1,0x3d6,0xffffffff), iVar1 == 0)) {
    return 0;
  }
  uVar2 = OBJ_nid2sn(0x3d7);
  lVar3 = EVP_get_digestbyname(uVar2);
  if ((lVar3 != 0) && (iVar1 = CMS_add_simple_smimecap(param_1,0x3d7,0xffffffff), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_14f78c230(param_1,0x329,0xffffffff);
  if ((((((iVar1 != 0) && (iVar1 = FUN_14f78c1c0(param_1,0x32d,0xffffffff), iVar1 != 0)) &&
        (iVar1 = FUN_14f78c1c0(param_1,0x1a7,0xffffffff), iVar1 != 0)) &&
       ((iVar1 = FUN_14f78c1c0(param_1,0x1a3,0xffffffff), iVar1 != 0 &&
        (iVar1 = FUN_14f78c1c0(param_1,0x2c), iVar1 != 0)))) &&
      ((iVar1 = FUN_14f78c1c0(param_1,0x25,0x80), iVar1 != 0 &&
       ((iVar1 = FUN_14f78c1c0(param_1,0x25,0x40), iVar1 != 0 &&
        (iVar1 = FUN_14f78c1c0(param_1,0x1f), iVar1 != 0)))))) &&
     (iVar1 = FUN_14f78c1c0(param_1,0x25,0x28), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// CMS_get0_SignerInfos @ 14f78b830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_get0_SignerInfos(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f78b83c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x16) {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar2);
    return 0;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1[1] + 0x28);
}

// CMS_get0_signers @ 14f78b8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CMS_get0_signers(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar7;
  ulonglong uVar6;
  
  uVar7 = 0x14f78b8b5;
  uVar3 = 0;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 == 0x16) {
    if (param_1[1] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(ulonglong *)(param_1[1] + 0x28);
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar7);
    uVar4 = uVar3;
  }
  iVar1 = OPENSSL_sk_num(uVar4);
  uVar6 = uVar3;
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(uVar4,uVar6);
      if (*(longlong *)(lVar2 + 0x38) != 0) {
        if ((uVar3 == 0) && (uVar3 = OPENSSL_sk_new_null(), uVar3 == 0)) {
          return 0;
        }
        iVar1 = OPENSSL_sk_push(uVar3,*(undefined8 *)(lVar2 + 0x38));
        if (iVar1 == 0) {
          OPENSSL_sk_free(uVar3);
          return 0;
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      iVar1 = OPENSSL_sk_num(uVar4);
    } while ((int)uVar5 < iVar1);
  }
  return uVar3;
}

// CMS_set1_signers_certs @ 14f78b990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int CMS_set1_signers_certs(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = 0x14f78b9a7;
  iVar10 = 0;
  iVar3 = OBJ_obj2nid(*param_1);
  if (iVar3 != 0x16) {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar11);
    return -1;
  }
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    return -1;
  }
  uVar11 = *(undefined8 *)(lVar1 + 0x18);
  iVar9 = 0;
  iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x28));
  if (0 < iVar3) {
    do {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x28),iVar9);
      if (*(longlong *)(lVar4 + 0x38) == 0) {
        iVar8 = 0;
        iVar3 = OPENSSL_sk_num(param_2);
        if (0 < iVar3) {
          do {
            lVar5 = OPENSSL_sk_value(param_2,iVar8);
            piVar6 = *(int **)(lVar4 + 8);
            if (*piVar6 == 0) {
              iVar3 = cms_ias_cert_cmp(*(undefined8 *)(piVar6 + 2),lVar5);
LAB_14f78ba96:
              if (iVar3 == 0) {
                if (lVar5 != 0) {
                  X509_up_ref(lVar5);
                  EVP_PKEY_free(*(undefined8 *)(lVar4 + 0x40));
                  uVar7 = X509_get_pubkey(lVar5);
                  *(undefined8 *)(lVar4 + 0x40) = uVar7;
                }
                X509_free(*(undefined8 *)(lVar4 + 0x38));
                iVar10 = iVar10 + 1;
                *(longlong *)(lVar4 + 0x38) = lVar5;
                break;
              }
            }
            else if (*piVar6 == 1) {
              iVar3 = cms_keyid_cert_cmp(*(undefined8 *)(piVar6 + 2),lVar5);
              goto LAB_14f78ba96;
            }
            iVar8 = iVar8 + 1;
            iVar3 = OPENSSL_sk_num(param_2);
          } while (iVar8 < iVar3);
        }
        if ((*(longlong *)(lVar4 + 0x38) == 0) && ((param_3 & 0x10) == 0)) {
          iVar8 = 0;
          iVar3 = OPENSSL_sk_num(uVar11);
          if (0 < iVar3) {
            do {
              piVar6 = (int *)OPENSSL_sk_value(uVar11,iVar8);
              if (*piVar6 == 0) {
                piVar2 = *(int **)(lVar4 + 8);
                lVar5 = *(longlong *)(piVar6 + 2);
                if (*piVar2 == 0) {
                  iVar3 = cms_ias_cert_cmp(*(undefined8 *)(piVar2 + 2),lVar5);
                }
                else {
                  if (*piVar2 != 1) goto LAB_14f78bb50;
                  iVar3 = cms_keyid_cert_cmp(*(undefined8 *)(piVar2 + 2),lVar5);
                }
                if (iVar3 == 0) {
                  if (lVar5 != 0) {
                    X509_up_ref(lVar5);
                    EVP_PKEY_free(*(undefined8 *)(lVar4 + 0x40));
                    uVar7 = X509_get_pubkey(lVar5);
                    *(undefined8 *)(lVar4 + 0x40) = uVar7;
                  }
                  X509_free(*(undefined8 *)(lVar4 + 0x38));
                  iVar10 = iVar10 + 1;
                  *(longlong *)(lVar4 + 0x38) = lVar5;
                  break;
                }
              }
LAB_14f78bb50:
              iVar8 = iVar8 + 1;
              iVar3 = OPENSSL_sk_num(uVar11);
            } while (iVar8 < iVar3);
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x28));
    } while (iVar9 < iVar3);
  }
  return iVar10;
}

// cms_SignedData_final @ 14f78bbd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_SignedData_final(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f78bbea;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 == 0x16) {
    uVar4 = 0;
    if (param_1[1] != 0) {
      uVar4 = *(undefined8 *)(param_1[1] + 0x28);
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar4);
    uVar4 = 0;
  }
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(uVar4);
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(uVar4,iVar3);
      iVar1 = FUN_14f78be30(param_1,uVar2,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(uVar4);
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1[1] + 0x10) + 0x10) = 0;
  return 1;
}

// cms_SignedData_init_bio @ 14f78bca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong cms_SignedData_init_bio(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar7;
  ulonglong uVar6;
  
  uVar7 = 0x14f78bcb0;
  uVar3 = 0;
  iVar2 = OBJ_obj2nid(*param_1);
  if (iVar2 != 0x16) {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar7);
    return 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10) != 0) {
      FUN_14f78c510(lVar1);
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
    uVar4 = uVar3;
    uVar6 = uVar3;
    if (0 < iVar2) {
      do {
        uVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 8),uVar6);
        uVar3 = cms_DigestAlgorithm_init_bio(uVar7);
        if (uVar3 == 0) {
          BIO_free_all(uVar4);
          return 0;
        }
        if (uVar4 != 0) {
          BIO_push(uVar4,uVar3);
          uVar3 = uVar4;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
        uVar4 = uVar3;
      } while ((int)uVar5 < iVar2);
    }
    return uVar3;
  }
  return 0;
}

// cms_SignerIdentifier_cert_cmp @ 14f78bda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_SignerIdentifier_cert_cmp(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = cms_ias_cert_cmp(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  if (*param_1 == 1) {
    uVar1 = cms_keyid_cert_cmp(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  return 0xffffffff;
}

// cms_SignerIdentifier_get0_signer_id @ 14f78bde0

undefined8
cms_SignerIdentifier_get0_signer_id
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (*param_1 == 0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = **(undefined8 **)(param_1 + 2);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 8);
      return 1;
    }
  }
  else {
    if (*param_1 != 1) {
      return 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 2);
    }
  }
  return 1;
}

// FUN_14f78be30 @ 14f78be30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f78be30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [2];
  longlong local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  longlong lVar5;
  
  uStack_30 = 0x14f78be46;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  lVar2 = EVP_MD_CTX_new();
  lVar5 = 0;
  lVar4 = 0;
  lVar7 = 0;
  if (lVar2 == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x234);
    ERR_put_error(0x2e,0x96,0x41,"crypto\\cms\\cms_sd.c");
    return 0;
  }
  lVar6 = lVar5;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x239);
    ERR_put_error(0x2e,0x96,0x85,"crypto\\cms\\cms_sd.c");
    lVar7 = lVar5;
    goto LAB_14f78c0c3;
  }
  iVar1 = cms_DigestAlgorithm_find_ctx(lVar2,param_3,*(undefined8 *)(param_2 + 0x10));
  if ((iVar1 == 0) ||
     ((*(longlong *)(param_2 + 0x50) != 0 && (iVar1 = FUN_14f78c470(param_2,0), iVar1 == 0))))
  goto LAB_14f78c0c3;
  iVar1 = CMS_signed_get_attr_count(param_2);
  lVar6 = lVar4;
  if (iVar1 < 0) {
    lVar4 = *(longlong *)(param_2 + 0x50);
    if (lVar4 == 0) {
      iVar1 = EVP_PKEY_size(*(undefined8 *)(param_2 + 0x40));
      lVar3 = CRYPTO_malloc((longlong)iVar1,"crypto\\cms\\cms_sd.c",0x26b);
      if (lVar3 == 0) {
        local_98 = CONCAT44(local_98._4_4_,0x26d);
LAB_14f78bfc8:
        ERR_put_error(0x2e,0x96,0x41,"crypto\\cms\\cms_sd.c");
        lVar7 = lVar5;
        goto LAB_14f78c0c3;
      }
      iVar1 = EVP_SignFinal(lVar2,lVar3,local_88,*(undefined8 *)(param_2 + 0x40));
      if (iVar1 == 0) {
        local_98 = CONCAT44(local_98._4_4_,0x271);
        ERR_put_error(0x2e,0x96,0x8b,"crypto\\cms\\cms_sd.c");
        CRYPTO_free(lVar3,"crypto\\cms\\cms_sd.c",0x272);
        goto LAB_14f78c0c3;
      }
    }
    else {
      iVar1 = EVP_DigestFinal_ex(lVar2,local_78,local_88);
      lVar7 = lVar4;
      if (iVar1 == 0) goto LAB_14f78c0c3;
      iVar1 = EVP_PKEY_size(*(undefined8 *)(param_2 + 0x40));
      local_80 = (longlong)iVar1;
      lVar3 = CRYPTO_malloc(local_80,"crypto\\cms\\cms_sd.c",0x25e);
      lVar5 = lVar4;
      if (lVar3 == 0) {
        local_98 = CONCAT44(local_98._4_4_,0x260);
        goto LAB_14f78bfc8;
      }
      local_98 = (ulonglong)local_88[0];
      iVar1 = EVP_PKEY_sign(lVar4,lVar3,&local_80,local_78);
      if (iVar1 < 1) {
        CRYPTO_free(lVar3,"crypto\\cms\\cms_sd.c",0x264);
        goto LAB_14f78c0c3;
      }
      local_88[0] = (uint)local_80;
    }
    ASN1_STRING_set0(*(undefined8 *)(param_2 + 0x28),lVar3,local_88[0]);
  }
  else {
    iVar1 = EVP_DigestFinal_ex(lVar2,local_78,local_88);
    if (iVar1 == 0) goto LAB_14f78c0c3;
    local_98 = CONCAT44(local_98._4_4_,local_88[0]);
    iVar1 = CMS_signed_add1_attr_by_NID(param_2,0x33,4,local_78);
    if (((iVar1 == 0) || (iVar1 = FUN_14f78c6f0(param_1,param_2), iVar1 == 0)) ||
       (iVar1 = CMS_SignerInfo_sign(param_2), iVar1 == 0)) goto LAB_14f78c0c3;
  }
  lVar6 = 1;
  lVar7 = lVar5;
LAB_14f78c0c3:
  EVP_MD_CTX_free(lVar2);
  EVP_PKEY_CTX_free(lVar7);
  return lVar6;
}

// FUN_14f78c110 @ 14f78c110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f78c110(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f78c12a;
  iVar3 = 0;
  lVar2 = param_2;
  if (param_2 == 0) {
    lVar2 = X509_gmtime_adj(0);
  }
  if (lVar2 != 0) {
    iVar1 = CMS_signed_add1_attr_by_NID
                      (param_1,0x34,*(undefined4 *)(lVar2 + 4),lVar2,0xffffffff,uVar4);
    iVar3 = 0;
    if (0 < iVar1) {
      iVar3 = 1;
    }
  }
  if (param_2 == 0) {
    ASN1_TIME_free(lVar2);
  }
  if (iVar3 == 0) {
    ERR_put_error(0x2e,0x67,0x41,"crypto\\cms\\cms_sd.c",0x1a3);
  }
  return iVar3;
}

// FUN_14f78c1c0 @ 14f78c1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78c1c0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = OBJ_nid2sn(param_2);
  lVar2 = EVP_get_cipherbyname(uVar1);
  if (lVar2 != 0) {
    uVar1 = CMS_add_simple_smimecap(param_1,param_2,param_3);
    return uVar1;
  }
  return 1;
}

// FUN_14f78c230 @ 14f78c230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78c230(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = OBJ_nid2sn(param_2);
  lVar2 = EVP_get_digestbyname(uVar1);
  if (lVar2 != 0) {
    uVar1 = CMS_add_simple_smimecap(param_1,param_2,param_3);
    return uVar1;
  }
  return 1;
}

// FUN_14f78c2a0 @ 14f78c2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f78c2a0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar4;
  
  uVar8 = 0x14f78c2bb;
  iVar1 = OBJ_obj2nid(*param_1);
  uVar4 = 0;
  if (iVar1 == 0x16) {
    if (param_1[1] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(ulonglong *)(param_1[1] + 0x28);
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar8);
    uVar5 = uVar4;
  }
  iVar1 = OPENSSL_sk_num(uVar5);
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(uVar5,uVar4);
      if (((lVar2 != param_2) && (iVar1 = CMS_signed_get_attr_count(lVar2), -1 < iVar1)) &&
         (iVar1 = OBJ_cmp(**(undefined8 **)(param_2 + 0x10),**(undefined8 **)(lVar2 + 0x10)),
         iVar1 == 0)) {
        uVar8 = OBJ_nid2obj(0x33);
        lVar2 = CMS_signed_get0_data_by_OBJ(lVar2,uVar8,0xfffffffd);
        if (lVar2 != 0) {
          iVar1 = CMS_signed_add1_attr_by_NID(param_2,0x33,4,lVar2,0xffffffff);
          return iVar1 != 0;
        }
        uVar7 = 0x9d;
        uVar6 = 0x72;
        goto LAB_14f78c371;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      iVar1 = OPENSSL_sk_num(uVar5);
    } while ((int)uVar3 < iVar1);
  }
  uVar7 = 0xa8;
  uVar6 = 0x83;
LAB_14f78c371:
  ERR_put_error(0x2e,0x6c,uVar6,"crypto\\cms\\cms_sd.c",uVar7);
  return false;
}

// FUN_14f78c410 @ 14f78c410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78c410(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f78c41c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x16) {
    ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar2);
    return 0;
  }
  return param_1[1];
}

// FUN_14f78c470 @ 14f78c470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78c470(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if ((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0xb0), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(longlong *)(param_1 + 0x40),5,param_2,param_1);
    if (iVar3 == -2) {
      ERR_put_error(0x2e,0xaa,0x7d,"crypto\\cms\\cms_sd.c",0xe7);
      return 0;
    }
    if (iVar3 < 1) {
      ERR_put_error(0x2e,0xaa,0x6f,"crypto\\cms\\cms_sd.c",0xeb);
      return 0;
    }
  }
  return 1;
}

// FUN_14f78c510 @ 14f78c510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c510(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 6));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 6),iVar4);
      iVar1 = *piVar2;
      if (iVar1 == 4) {
        if (*param_1 < 5) {
          *param_1 = 5;
        }
      }
      else if (iVar1 == 3) {
        if (*param_1 < 4) {
          *param_1 = 4;
        }
      }
      else if ((iVar1 == 2) && (*param_1 < 3)) {
        *param_1 = 3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 6));
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar4);
      if ((*piVar2 == 1) && (*param_1 < 5)) {
        *param_1 = 5;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    } while (iVar4 < iVar1);
  }
  iVar1 = OBJ_obj2nid(**(undefined8 **)(param_1 + 4));
  if ((iVar1 != 0x15) && (*param_1 < 3)) {
    *param_1 = 3;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 10));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 10),iVar3);
      if (**(int **)(piVar2 + 2) == 1) {
        if (*piVar2 < 3) {
          *piVar2 = 3;
        }
        if (*param_1 < 3) {
          *param_1 = 3;
        }
      }
      else if (*piVar2 < 1) {
        *piVar2 = 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 10));
    } while (iVar3 < iVar1);
  }
  if (*param_1 < 1) {
    *param_1 = 1;
  }
  return;
}

// cms_set1_SignerIdentifier @ 14f78c660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_set1_SignerIdentifier(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    iVar1 = cms_set1_ias(param_1 + 2);
    if (iVar1 != 0) goto LAB_14f78c6d4;
  }
  else {
    if (param_3 == 1) {
      uVar2 = cms_set1_keyid(param_1 + 2);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
LAB_14f78c6d4:
      *param_1 = param_3;
      return 1;
    }
    ERR_put_error(0x2e,0x92,0x96,"crypto\\cms\\cms_sd.c",0xba,0x14f78c670);
  }
  return 0;
}

// FUN_14f78c6f0 @ 14f78c6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f78c6f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = CMS_signed_add1_attr_by_NID
                    (param_2,0x32,6,**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10),0xffffffff)
  ;
  return 0 < iVar1;
}

// FUN_14f78c740 @ 14f78c740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78c740(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f78c74c;
  if (param_1[1] == 0) {
    uVar2 = CMS_SignedData_it();
    puVar3 = (undefined4 *)ASN1_item_new(uVar2);
    param_1[1] = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      ERR_put_error(0x2e,0x95,0x41,"crypto\\cms\\cms_sd.c",0x25,uVar4);
      return 0;
    }
    *puVar3 = 1;
    uVar4 = OBJ_nid2obj(0x15);
    **(undefined8 **)(param_1[1] + 0x10) = uVar4;
    *(undefined4 *)(*(longlong *)(param_1[1] + 0x10) + 0x10) = 1;
    ASN1_OBJECT_free(*param_1);
    uVar4 = OBJ_nid2obj(0x16);
    *param_1 = uVar4;
  }
  else {
    iVar1 = OBJ_obj2nid(*param_1);
    if (iVar1 != 0x16) {
      ERR_put_error(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a);
      return 0;
    }
  }
  return param_1[1];
}

// FUN_14f78c820 @ 14f78c820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c820(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f78c840 @ 14f78c840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c840(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f78c860 @ 14f78c860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c860(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f78c880 @ 14f78c880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c880(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f78c8a0 @ 14f78c8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c8a0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f78c8c0 @ 14f78c8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c8c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f78c8e0 @ 14f78c8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c8e0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f78c900 @ 14f78c900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c900(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f78c920 @ 14f78c920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c920(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f78c940 @ 14f78c940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c940(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f78c960 @ 14f78c960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c960(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f78c980 @ 14f78c980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c980(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f78c9a0 @ 14f78c9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c9a0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f78c9c0 @ 14f78c9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c9c0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f78c9e0 @ 14f78c9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78c9e0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f78ca00 @ 14f78ca00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78ca00(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f78ca20 @ 14f78ca20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78ca20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f78ca40 @ 14f78ca40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78ca40(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f78ca60 @ 14f78ca60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78ca60(void)

{
  OPENSSL_sk_value();
  return;
}

