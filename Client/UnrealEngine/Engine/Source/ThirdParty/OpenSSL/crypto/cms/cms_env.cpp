// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 33

// CMS_EnvelopedData_create @ 14f788580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CMS_EnvelopedData_create(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f788590;
  lVar2 = CMS_ContentInfo_new();
  if (lVar2 != 0) {
    lVar3 = FUN_14f789b30(lVar2);
    if (lVar3 != 0) {
      iVar1 = cms_EncryptedContent_init(*(undefined8 *)(lVar3 + 0x18),param_1,0,0);
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
  CMS_ContentInfo_free(lVar2);
  ERR_put_error(0x2e,0x7c,0x41,"crypto\\cms\\cms_env.c",0x78,uVar4);
  return 0;
}

// CMS_RecipientInfo_decrypt @ 14f788610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_decrypt(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    uVar2 = FUN_14f789380();
    return uVar2;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      ERR_put_error(0x2e,0x86,0x9b,"crypto\\cms\\cms_env.c",0x302);
      return 0;
    }
    uVar2 = cms_RecipientInfo_pwri_crypt(param_1,param_2,0);
    return uVar2;
  }
  uVar2 = FUN_14f789000();
  return uVar2;
}

// CMS_RecipientInfo_encrypt @ 14f788680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_encrypt(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    uVar2 = FUN_14f7895e0();
    return uVar2;
  }
  if (iVar1 == 1) {
    uVar2 = cms_RecipientInfo_kari_encrypt();
    return uVar2;
  }
  if (iVar1 == 2) {
    uVar2 = FUN_14f789210();
    return uVar2;
  }
  if (iVar1 != 3) {
    ERR_put_error(0x2e,0xa9,0x9a,"crypto\\cms\\cms_env.c",0x318);
    return 0;
  }
  uVar2 = cms_RecipientInfo_pwri_crypt(param_1,param_2,1);
  return uVar2;
}

// CMS_RecipientInfo_get0_pkey_ctx @ 14f788700

undefined8 CMS_RecipientInfo_get0_pkey_ctx(int *param_1)

{
  if (*param_1 == 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x30);
  }
  if (*param_1 == 1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x28);
  }
  return 0;
}

// CMS_RecipientInfo_kekri_get0_id @ 14f788730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CMS_RecipientInfo_kekri_get0_id
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  
  if (*param_1 != 2) {
    ERR_put_error(0x2e,0x89,0x7b,"crypto\\cms\\cms_env.c",0x24b);
    return 0;
  }
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 2) + 8);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x10);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *puVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar1[1];
  }
  if (param_5 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar1[2] == (undefined8 *)0x0) {
      *param_5 = 0;
    }
    else {
      *param_5 = *(undefined8 *)puVar1[2];
    }
  }
  if (param_6 != (undefined8 *)0x0) {
    if (puVar1[2] != 0) {
      *param_6 = *(undefined8 *)(puVar1[2] + 8);
      return 1;
    }
    *param_6 = 0;
  }
  return 1;
}

// CMS_RecipientInfo_kekri_id_cmp @ 14f7887f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_kekri_id_cmp(int *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7887fa;
  if (*param_1 != 2) {
    ERR_put_error(0x2e,0x8a,0x7b,"crypto\\cms\\cms_env.c",0x1c0);
    return 0xfffffffe;
  }
  local_24 = 4;
  local_18 = 0;
  local_28 = param_3;
  local_20 = param_2;
  uVar1 = ASN1_OCTET_STRING_cmp(&local_28,**(undefined8 **)(*(longlong *)(param_1 + 2) + 8));
  return uVar1;
}

// CMS_RecipientInfo_ktri_cert_cmp @ 14f788870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_ktri_cert_cmp(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    ERR_put_error(0x2e,0x8b,0x7c,"crypto\\cms\\cms_env.c",0x111);
    return 0xfffffffe;
  }
  uVar1 = cms_SignerIdentifier_cert_cmp(*(undefined8 *)(*(longlong *)(param_1 + 2) + 8));
  return uVar1;
}

// CMS_RecipientInfo_ktri_get0_algs @ 14f7888d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CMS_RecipientInfo_ktri_get0_algs
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    ERR_put_error(0x2e,0x8e,0x7c,"crypto\\cms\\cms_env.c",0xee);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 2);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(lVar1 + 0x10);
  }
  return 1;
}

// CMS_RecipientInfo_ktri_get0_signer_id @ 14f788940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_ktri_get0_signer_id(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    ERR_put_error(0x2e,0x8f,0x7c,"crypto\\cms\\cms_env.c",0x105);
    return 0;
  }
  uVar1 = cms_SignerIdentifier_get0_signer_id(*(undefined8 *)(*(longlong *)(param_1 + 2) + 8));
  return uVar1;
}

// CMS_RecipientInfo_set0_key @ 14f788990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_set0_key(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*param_1 != 2) {
    ERR_put_error(0x2e,0x90,0x7b,"crypto\\cms\\cms_env.c",0x269);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 2);
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  return 1;
}

// CMS_RecipientInfo_set0_pkey @ 14f7889f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_set0_pkey(int *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    ERR_put_error(0x2e,0x91,0x7c,"crypto\\cms\\cms_env.c",0x11a,0x14f788a00);
    return 0;
  }
  EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 2) + 0x28));
  *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x28) = param_2;
  return 1;
}

// CMS_add0_recipient_key @ 14f788a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
CMS_add0_recipient_key
          (undefined8 *param_1,int param_2,undefined8 param_3,longlong param_4,undefined8 param_5,
          undefined4 param_6,undefined8 param_7,longlong param_8,undefined8 param_9)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f788aa4;
  puVar3 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)0x0;
  iVar2 = OBJ_obj2nid(*param_1);
  if (iVar2 == 0x17) {
    lVar1 = param_1[1];
    if (lVar1 == 0) goto LAB_14f788c9f;
    if (param_2 == 0) {
      if (param_4 == 0x10) {
        param_2 = 0x314;
      }
      else if (param_4 == 0x18) {
        param_2 = 0x315;
      }
      else {
        if (param_4 != 0x20) {
          uVar8 = 0x1fb;
          uVar7 = 0x76;
          puVar6 = puVar3;
          goto LAB_14f788c89;
        }
        param_2 = 0x316;
      }
LAB_14f788b1c:
      uVar5 = CMS_RecipientInfo_it();
      puVar6 = (undefined4 *)ASN1_item_new(uVar5);
      if (puVar6 != (undefined4 *)0x0) {
        uVar5 = CMS_KEKRecipientInfo_it();
        puVar3 = (undefined4 *)ASN1_item_new(uVar5);
        *(undefined4 **)(puVar6 + 2) = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar6 = 2;
          if (param_8 != 0) {
            uVar5 = CMS_OtherKeyAttribute_it();
            uVar5 = ASN1_item_new(uVar5);
            *(undefined8 *)(*(longlong *)(puVar3 + 2) + 0x10) = uVar5;
            if (*(longlong *)(*(longlong *)(puVar3 + 2) + 0x10) == 0) goto LAB_14f788c7b;
          }
          iVar2 = OPENSSL_sk_push(*(undefined8 *)(lVar1 + 0x10),puVar6);
          if (iVar2 != 0) {
            *puVar3 = 4;
            *(undefined8 *)(puVar3 + 8) = param_3;
            *(longlong *)(puVar3 + 10) = param_4;
            ASN1_STRING_set0(**(undefined8 **)(puVar3 + 2),param_5,param_6);
            *(undefined8 *)(*(longlong *)(puVar3 + 2) + 8) = param_7;
            if (*(longlong **)(*(longlong *)(puVar3 + 2) + 0x10) != (longlong *)0x0) {
              **(longlong **)(*(longlong *)(puVar3 + 2) + 0x10) = param_8;
              *(undefined8 *)(*(longlong *)(*(longlong *)(puVar3 + 2) + 0x10) + 8) = param_9;
            }
            uVar9 = OBJ_nid2obj(param_2);
            X509_ALGOR_set0(*(undefined8 *)(puVar3 + 4),uVar9,0xffffffff,0);
            return puVar6;
          }
        }
      }
LAB_14f788c7b:
      uVar8 = 0x23b;
      uVar7 = 0x41;
    }
    else {
      if (param_2 == 0x314) {
        lVar4 = 0x10;
      }
      else if (param_2 == 0x315) {
        lVar4 = 0x18;
      }
      else {
        if (param_2 != 0x316) {
          uVar8 = 0x205;
          uVar7 = 0x99;
          puVar6 = puVar3;
          goto LAB_14f788c89;
        }
        lVar4 = 0x20;
      }
      if (param_4 == lVar4) goto LAB_14f788b1c;
      uVar8 = 0x20a;
      uVar7 = 0x76;
    }
LAB_14f788c89:
    uVar5 = 100;
  }
  else {
    uVar8 = 0x1b;
    uVar7 = 0x6b;
    uVar5 = 0x83;
    puVar6 = puVar3;
  }
  ERR_put_error(0x2e,uVar5,uVar7,"crypto\\cms\\cms_env.c",uVar8,uVar9);
  puVar3 = puVar6;
LAB_14f788c9f:
  uVar9 = CMS_RecipientInfo_it();
  ASN1_item_free(puVar3,uVar9);
  return (undefined4 *)0x0;
}

// CMS_add1_recipient_cert @ 14f788ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CMS_add1_recipient_cert(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f788d00;
  lVar3 = 0;
  iVar2 = OBJ_obj2nid(*param_1);
  if (iVar2 == 0x17) {
    lVar1 = param_1[1];
    if (lVar1 == 0) goto LAB_14f788df3;
    uVar5 = CMS_RecipientInfo_it();
    lVar3 = ASN1_item_new(uVar5);
    if (lVar3 == 0) {
LAB_14f788dcf:
      uVar7 = 0xe0;
      uVar6 = 0x41;
    }
    else {
      lVar4 = X509_get0_pubkey(param_2);
      if (lVar4 != 0) {
        iVar2 = cms_pkey_get_ri_type(lVar4);
        if (iVar2 == 0) {
          iVar2 = FUN_14f7897b0(lVar3,param_2,lVar4,param_3);
        }
        else {
          if (iVar2 != 1) {
            uVar7 = 0xd5;
            uVar6 = 0x7d;
            goto LAB_14f788ddd;
          }
          iVar2 = cms_RecipientInfo_kari_init(lVar3,param_2,lVar4,param_3);
        }
        if (iVar2 == 0) goto LAB_14f788df3;
        iVar2 = OPENSSL_sk_push(*(undefined8 *)(lVar1 + 0x10),lVar3);
        if (iVar2 != 0) {
          return lVar3;
        }
        goto LAB_14f788dcf;
      }
      uVar7 = 0xc3;
      uVar6 = 0x71;
    }
LAB_14f788ddd:
    uVar5 = 0x65;
  }
  else {
    uVar7 = 0x1b;
    uVar6 = 0x6b;
    uVar5 = 0x83;
  }
  ERR_put_error(0x2e,uVar5,uVar6,"crypto\\cms\\cms_env.c",uVar7,uVar8);
LAB_14f788df3:
  uVar8 = CMS_RecipientInfo_it();
  ASN1_item_free(lVar3,uVar8);
  return 0;
}

// CMS_get0_RecipientInfos @ 14f788e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_get0_RecipientInfos(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f788e3c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x17) {
    ERR_put_error(0x2e,0x83,0x6b,"crypto\\cms\\cms_env.c",0x1b,uVar2);
    return 0;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1[1] + 0x10);
}

// cms_EnvelopedData_init_bio @ 14f788ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cms_EnvelopedData_init_bio(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  bVar3 = false;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar5 = cms_EncryptedContent_init_bio(lVar1);
  if ((lVar5 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
    iVar7 = 0;
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
    iVar4 = OPENSSL_sk_num(uVar2);
    if (0 < iVar4) {
      do {
        uVar6 = OPENSSL_sk_value(uVar2,iVar7);
        iVar4 = CMS_RecipientInfo_encrypt(param_1,uVar6);
        if (iVar4 < 1) {
          ERR_put_error(0x2e,0x7d,0x74,"crypto\\cms\\cms_env.c",0x376);
          goto LAB_14f788f69;
        }
        iVar7 = iVar7 + 1;
        iVar4 = OPENSSL_sk_num(uVar2);
      } while (iVar7 < iVar4);
    }
    FUN_14f789a60(*(undefined8 *)(param_1 + 8));
    bVar3 = true;
LAB_14f788f69:
    *(undefined8 *)(lVar1 + 0x18) = 0;
    CRYPTO_clear_free(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
                      "crypto\\cms\\cms_env.c",0x380);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    if (bVar3) {
      return lVar5;
    }
    BIO_free(lVar5);
    lVar5 = 0;
  }
  return lVar5;
}

// FUN_14f789000 @ 14f789000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f789000(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_128 [256];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f789012;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar5 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    local_138 = 699;
    ERR_put_error(0x2e,0x87,0x82,"crypto\\cms\\cms_env.c");
    return 0;
  }
  iVar3 = OBJ_obj2nid(**(undefined8 **)(lVar1 + 0x10));
  if (iVar3 == 0x314) {
    lVar4 = 0x10;
  }
  else if (iVar3 == 0x315) {
    lVar4 = 0x18;
  }
  else {
    lVar4 = lVar5;
    if (iVar3 == 0x316) {
      lVar4 = 0x20;
    }
  }
  if (lVar4 != *(longlong *)(lVar1 + 0x28)) {
    local_138 = 0x2c2;
    ERR_put_error(0x2e,0x87,0x76,"crypto\\cms\\cms_env.c");
    return 0;
  }
  lVar4 = lVar5;
  if (**(int **)(lVar1 + 0x18) < 0x10) {
    local_138 = 0x2ca;
    uVar6 = 0x75;
  }
  else {
    iVar3 = AES_set_decrypt_key(*(undefined8 *)(lVar1 + 0x20),*(longlong *)(lVar1 + 0x28) * 8,
                                local_128);
    if (iVar3 == 0) {
      lVar4 = CRYPTO_malloc((longlong)(**(int **)(lVar1 + 0x18) + -8),"crypto\\cms\\cms_env.c",0x2d4
                           );
      if (lVar4 == 0) {
        local_138 = 0x2d7;
        uVar6 = 0x41;
      }
      else {
        local_138 = **(undefined4 **)(lVar1 + 0x18);
        iVar3 = AES_unwrap_key(local_128,0,lVar4,*(undefined8 *)(*(undefined4 **)(lVar1 + 0x18) + 2)
                              );
        if (0 < iVar3) {
          CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                            "crypto\\cms\\cms_env.c",0x2e4);
          *(longlong *)(lVar2 + 0x20) = lVar4;
          lVar5 = 1;
          *(longlong *)(lVar2 + 0x28) = (longlong)iVar3;
          goto LAB_14f7891cb;
        }
        local_138 = 0x2e0;
        uVar6 = 0x9d;
      }
    }
    else {
      local_138 = 0x2d0;
      uVar6 = 0x73;
    }
  }
  ERR_put_error(0x2e,0x87,uVar6,"crypto\\cms\\cms_env.c");
  CRYPTO_free(lVar4,"crypto\\cms\\cms_env.c",0x2ed);
LAB_14f7891cb:
  OPENSSL_cleanse(local_128,0xf4);
  return lVar5;
}

// FUN_14f789210 @ 14f789210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f789210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_128 [256];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f789222;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar5 = 0;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    local_138 = 0x284;
    ERR_put_error(0x2e,0x88,0x82,"crypto\\cms\\cms_env.c");
    return 0;
  }
  iVar3 = AES_set_encrypt_key(*(longlong *)(lVar1 + 0x20),*(longlong *)(lVar1 + 0x28) << 3,local_128
                             );
  if (iVar3 == 0) {
    lVar4 = CRYPTO_malloc(*(longlong *)(lVar2 + 0x28) + 8,"crypto\\cms\\cms_env.c",0x28e);
    if (lVar4 == 0) {
      local_138 = 0x291;
      uVar6 = 0x41;
    }
    else {
      local_138 = *(undefined4 *)(lVar2 + 0x28);
      iVar3 = AES_wrap_key(local_128,0,lVar4,*(undefined8 *)(lVar2 + 0x20));
      if (0 < iVar3) {
        ASN1_STRING_set0(*(undefined8 *)(lVar1 + 0x18),lVar4,iVar3);
        lVar5 = 1;
        goto LAB_14f789338;
      }
      local_138 = 0x298;
      uVar6 = 0x9f;
    }
  }
  else {
    local_138 = 0x28a;
    uVar6 = 0x73;
    lVar4 = lVar5;
  }
  ERR_put_error(0x2e,0x88,uVar6,"crypto\\cms\\cms_env.c");
  CRYPTO_free(lVar4,"crypto\\cms\\cms_env.c",0x2a3);
LAB_14f789338:
  OPENSSL_cleanse(local_128,0xf4);
  return lVar5;
}

// FUN_14f789380 @ 14f789380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f789380(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffffc8;
  undefined8 uVar10;
  
  uVar10 = 0x14f78939c;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar9 = 0;
  lVar7 = 0;
  lVar8 = *(longlong *)(lVar1 + 0x28);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (lVar8 == 0) {
    ERR_put_error(0x2e,0x8c,0x85,"crypto\\cms\\cms_env.c",0x173,0x14f78939c);
  }
  else {
    if ((*(int *)(lVar2 + 0x34) != 0) && (*(int *)(lVar2 + 0x30) == 0)) {
      uVar3 = OBJ_obj2nid(**(undefined8 **)(lVar2 + 8));
      uVar6 = OBJ_nid2sn(uVar3);
      lVar7 = EVP_get_cipherbyname(uVar6);
      if (lVar7 == 0) {
        ERR_put_error(0x2e,0x8c,0x94,"crypto\\cms\\cms_env.c",0x17d,uVar10);
        return 0;
      }
      iVar4 = EVP_CIPHER_key_length(lVar7);
      lVar7 = (longlong)iVar4;
    }
    lVar8 = EVP_PKEY_CTX_new(lVar8,0);
    *(longlong *)(lVar1 + 0x30) = lVar8;
    if (lVar8 != 0) {
      iVar5 = EVP_PKEY_decrypt_init(lVar8);
      iVar4 = 0;
      if ((0 < iVar5) && (iVar5 = cms_env_asn1_ctrl(param_2,1), iVar4 = 0, iVar5 != 0)) {
        iVar5 = EVP_PKEY_CTX_ctrl(*(undefined8 *)(lVar1 + 0x30),0xffffffff,0x200,10,
                                  in_stack_ffffffffffffffc8 & 0xffffffff00000000,param_2);
        iVar4 = 0;
        if (iVar5 < 1) {
          uVar10 = 400;
          uVar3 = 0x6e;
        }
        else {
          iVar5 = EVP_PKEY_decrypt(*(undefined8 *)(lVar1 + 0x30),0,&local_res8,
                                   *(undefined8 *)(*(int **)(lVar1 + 0x18) + 2),
                                   (longlong)**(int **)(lVar1 + 0x18));
          if (iVar5 < 1) goto LAB_14f789590;
          lVar9 = CRYPTO_malloc(local_res8,"crypto\\cms\\cms_env.c",0x199);
          if (lVar9 == 0) {
            uVar10 = 0x19c;
            uVar3 = 0x41;
          }
          else {
            iVar5 = EVP_PKEY_decrypt(*(undefined8 *)(lVar1 + 0x30),lVar9,&local_res8,
                                     *(undefined8 *)(*(int **)(lVar1 + 0x18) + 2),
                                     (longlong)**(int **)(lVar1 + 0x18));
            if (((0 < iVar5) && (local_res8 != 0)) && ((lVar7 == 0 || (local_res8 == lVar7)))) {
              iVar4 = 1;
              CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                                "crypto\\cms\\cms_env.c",0x1ab);
              *(longlong *)(lVar2 + 0x20) = lVar9;
              *(longlong *)(lVar2 + 0x28) = local_res8;
              goto LAB_14f789590;
            }
            uVar10 = 0x1a5;
            uVar3 = 0x68;
          }
        }
        ERR_put_error(0x2e,0x8c,uVar3,"crypto\\cms\\cms_env.c",uVar10);
      }
LAB_14f789590:
      EVP_PKEY_CTX_free(*(undefined8 *)(lVar1 + 0x30));
      *(undefined8 *)(lVar1 + 0x30) = 0;
      if (iVar4 != 0) {
        return iVar4;
      }
      CRYPTO_free(lVar9,"crypto\\cms\\cms_env.c",0x1b3);
      return 0;
    }
  }
  return 0;
}

// FUN_14f7895e0 @ 14f7895e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f7895e0(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  ulonglong in_stack_ffffffffffffffd8;
  undefined8 uVar9;
  longlong lVar6;
  undefined4 uVar10;
  
  lVar6 = 0;
  lVar5 = 0;
  uVar7 = 0;
  if (*param_2 != 0) {
    ERR_put_error(0x2e,0x8d,0x7c,"crypto\\cms\\cms_env.c",0x130,0x14f7895ef);
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 2);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar4 = *(longlong *)(lVar1 + 0x30);
  if (lVar4 == 0) {
    lVar4 = EVP_PKEY_CTX_new(*(undefined8 *)(lVar1 + 0x28),0);
    if (lVar4 == 0) {
      return 0;
    }
    iVar3 = EVP_PKEY_encrypt_init(lVar4);
    uVar8 = uVar7;
    if (iVar3 < 1) goto LAB_14f789768;
  }
  else {
    iVar3 = cms_env_asn1_ctrl(param_2,0);
    lVar5 = lVar6;
    uVar8 = 0;
    if (iVar3 == 0) goto LAB_14f789768;
  }
  iVar3 = EVP_PKEY_CTX_ctrl(lVar4,0xffffffff,0x100,9,in_stack_ffffffffffffffd8 & 0xffffffff00000000,
                            param_2);
  if (iVar3 < 1) {
    ERR_put_error(0x2e,0x8d,0x6e,"crypto\\cms\\cms_env.c",0x146);
    lVar5 = lVar6;
    uVar8 = uVar7;
  }
  else {
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    iVar3 = EVP_PKEY_encrypt(lVar4,0,&local_res10,*(undefined8 *)(lVar2 + 0x20),uVar9);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    lVar5 = lVar6;
    uVar8 = uVar7;
    if (0 < iVar3) {
      lVar5 = CRYPTO_malloc(CONCAT44(uStackX_14,local_res10),"crypto\\cms\\cms_env.c",0x14d);
      if (lVar5 == 0) {
        ERR_put_error(0x2e,0x8d,0x41,"crypto\\cms\\cms_env.c",CONCAT44(uVar10,0x150));
      }
      else {
        iVar3 = EVP_PKEY_encrypt(lVar4,lVar5,&local_res10,*(undefined8 *)(lVar2 + 0x20),
                                 *(undefined8 *)(lVar2 + 0x28));
        if (0 < iVar3) {
          ASN1_STRING_set0(*(undefined8 *)(lVar1 + 0x18),lVar5,local_res10);
          lVar5 = 0;
          uVar8 = 1;
        }
      }
    }
  }
LAB_14f789768:
  EVP_PKEY_CTX_free(lVar4);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  CRYPTO_free(lVar5,"crypto\\cms\\cms_env.c",0x15f);
  return uVar8;
}

// FUN_14f7897b0 @ 14f7897b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7897b0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  
  CMS_KeyTransRecipientInfo_it();
  puVar2 = (uint *)ASN1_item_new();
  *(uint **)(param_1 + 2) = puVar2;
  if (puVar2 != (uint *)0x0) {
    *param_1 = 0;
    *puVar2 = -(uint)((param_4 & 0x10000) != 0) & 2;
    iVar1 = cms_set1_SignerIdentifier(*(undefined8 *)(puVar2 + 2),param_2,(param_4 & 0x10000) != 0);
    if (iVar1 != 0) {
      X509_up_ref(param_2);
      EVP_PKEY_up_ref(param_3);
      *(undefined8 *)(puVar2 + 10) = param_3;
      *(undefined8 *)(puVar2 + 8) = param_2;
      if ((param_4 >> 0x12 & 1) == 0) {
        iVar1 = cms_env_asn1_ctrl(param_1,0);
        if (iVar1 != 0) {
          return 1;
        }
      }
      else {
        lVar3 = EVP_PKEY_CTX_new(param_3,0);
        *(longlong *)(puVar2 + 0xc) = lVar3;
        if ((lVar3 != 0) && (iVar1 = EVP_PKEY_encrypt_init(lVar3), 0 < iVar1)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// cms_env_asn1_ctrl @ 14f7898a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_env_asn1_ctrl(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7898b0;
  if (*param_1 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + 0x28);
  }
  else {
    if (*param_1 != 1) {
      return 0;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 2) + 0x28) == 0) {
      return 0;
    }
    lVar3 = EVP_PKEY_CTX_get0_pkey();
    if (lVar3 == 0) {
      return 0;
    }
  }
  if ((*(longlong *)(lVar3 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(lVar3,7,param_2,param_1);
    if (iVar2 == -2) {
      ERR_put_error(0x2e,0xab,0x7d,"crypto\\cms\\cms_env.c",0x47,uVar4);
      return 0;
    }
    if (iVar2 < 1) {
      ERR_put_error(0x2e,0xab,0x6f,"crypto\\cms\\cms_env.c",0x4b,uVar4);
      return 0;
    }
  }
  return 1;
}

// FUN_14f789990 @ 14f789990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789990(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    iVar5 = 0;
    iVar4 = 0;
    iVar2 = OPENSSL_sk_num(*puVar1);
    if (0 < iVar2) {
      do {
        piVar3 = (int *)OPENSSL_sk_value(*puVar1,iVar4);
        if (*piVar3 == 4) goto LAB_14f789a31;
        if ((*piVar3 == 3) && (*param_1 < 3)) {
          *param_1 = 3;
        }
        iVar4 = iVar4 + 1;
        iVar2 = OPENSSL_sk_num(*puVar1);
      } while (iVar4 < iVar2);
    }
    iVar2 = OPENSSL_sk_num(puVar1[1]);
    if (0 < iVar2) {
      do {
        piVar3 = (int *)OPENSSL_sk_value(puVar1[1],iVar5);
        if (*piVar3 == 1) {
LAB_14f789a31:
          *param_1 = 4;
          return;
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(puVar1[1]);
      } while (iVar5 < iVar2);
    }
  }
  return;
}

// FUN_14f789a60 @ 14f789a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789a60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*param_1 < 4) && (FUN_14f789990(), *param_1 < 3)) {
    iVar3 = 0;
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 4));
    if (0 < iVar1) {
      do {
        piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 4),iVar3);
        if (*piVar2 - 3U < 2) {
          *param_1 = 3;
          return;
        }
        if ((*piVar2 != 0) || (**(int **)(piVar2 + 2) != 0)) {
          *param_1 = 2;
        }
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 4));
      } while (iVar3 < iVar1);
    }
    if ((*(longlong *)(param_1 + 2) == 0) && (*(longlong *)(param_1 + 8) == 0)) {
      if (*param_1 != 2) {
        *param_1 = 0;
        return;
      }
    }
    else {
      *param_1 = 2;
    }
  }
  return;
}

// FUN_14f789b30 @ 14f789b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f789b30(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f789b3c;
  if (param_1[1] == 0) {
    uVar2 = CMS_EnvelopedData_it();
    puVar3 = (undefined4 *)ASN1_item_new(uVar2);
    param_1[1] = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      ERR_put_error(0x2e,0x7e,0x41,"crypto\\cms\\cms_env.c",0x26,uVar4);
      return 0;
    }
    *puVar3 = 0;
    uVar4 = OBJ_nid2obj(0x15);
    **(undefined8 **)(param_1[1] + 0x18) = uVar4;
    ASN1_OBJECT_free(*param_1);
    uVar4 = OBJ_nid2obj(0x17);
    *param_1 = uVar4;
  }
  else {
    iVar1 = OBJ_obj2nid(*param_1);
    if (iVar1 != 0x17) {
      ERR_put_error(0x2e,0x83,0x6b,"crypto\\cms\\cms_env.c",0x1b);
      return 0;
    }
  }
  return param_1[1];
}

// cms_get0_enveloped @ 14f789c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_get0_enveloped(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f789c0c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x17) {
    ERR_put_error(0x2e,0x83,0x6b,"crypto\\cms\\cms_env.c",0x1b,uVar2);
    return 0;
  }
  return param_1[1];
}

// cms_pkey_get_ri_type @ 14f789c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 cms_pkey_get_ri_type(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_res8 [8];
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,8,0,local_res8,0x14f789c6a);
    if (0 < iVar2) {
      return local_res8[0];
    }
  }
  return 0;
}

// FUN_14f789cb0 @ 14f789cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789cb0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f789cd0 @ 14f789cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789cd0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f789cf0 @ 14f789cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789cf0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f789d10 @ 14f789d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789d10(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f789d30 @ 14f789d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789d30(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f789d50 @ 14f789d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789d50(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f789d70 @ 14f789d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f789d70(void)

{
  OPENSSL_sk_value();
  return;
}

