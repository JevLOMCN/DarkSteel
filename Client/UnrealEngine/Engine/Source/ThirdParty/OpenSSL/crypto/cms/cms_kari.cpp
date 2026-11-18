// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// CMS_RecipientEncryptedKey_cert_cmp @ 14f789d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientEncryptedKey_cert_cmp(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0) {
    uVar2 = cms_ias_cert_cmp(*(undefined8 *)(piVar1 + 2));
    return uVar2;
  }
  if (*piVar1 == 1) {
    uVar2 = cms_keyid_cert_cmp(**(undefined8 **)(piVar1 + 2));
    return uVar2;
  }
  return 0xffffffff;
}

// CMS_RecipientInfo_kari_decrypt @ 14f789ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_kari_decrypt(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_res18;
  undefined8 local_res20;
  ulonglong uVar7;
  
  uVar7 = 0x14f789eb6;
  uVar6 = 0;
  local_res18 = 0;
  iVar4 = **(int **)(param_3 + 8);
  uVar1 = *(undefined8 *)(*(int **)(param_3 + 8) + 2);
  iVar3 = cms_env_asn1_ctrl(param_2,1);
  uVar5 = uVar6;
  if ((iVar3 != 0) &&
     (iVar4 = FUN_14f78a5b0(&local_res18,&local_res20,uVar1,(longlong)iVar4,
                            *(undefined8 *)(param_2 + 8),uVar7 & 0xffffffff00000000),
     uVar5 = local_res18, iVar4 != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                      "crypto\\cms\\cms_kari.c",0xf6);
    *(undefined8 *)(lVar2 + 0x20) = local_res18;
    *(undefined8 *)(lVar2 + 0x28) = local_res20;
    uVar6 = 1;
    uVar5 = 0;
  }
  CRYPTO_free(uVar5,"crypto\\cms\\cms_kari.c",0xfc);
  return uVar6;
}

// CMS_RecipientInfo_kari_get0_alg @ 14f789f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_kari_get0_alg(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*param_1 != 1) {
    ERR_put_error(0x2e,0xaf,0xb5,"crypto\\cms\\cms_kari.c",0x1c);
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x10);
  }
  return 1;
}

// CMS_RecipientInfo_kari_get0_ctx @ 14f789ff0

undefined8 CMS_RecipientInfo_kari_get0_ctx(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x30);
  }
  return 0;
}

// CMS_RecipientInfo_kari_get0_orig_id @ 14f78a010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CMS_RecipientInfo_kari_get0_orig_id
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 1) {
    ERR_put_error(0x2e,0xad,0xb5,"crypto\\cms\\cms_kari.c",0x3d,0x14f78a01c);
    return 0;
  }
  piVar2 = *(int **)(*(longlong *)(param_1 + 2) + 8);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
      return 1;
    }
  }
  else if (iVar1 == 1) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(piVar2 + 2);
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
    }
  }
  return 1;
}

// CMS_RecipientInfo_kari_get0_reks @ 14f78a120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_kari_get0_reks(int *param_1)

{
  if (*param_1 != 1) {
    ERR_put_error(0x2e,0xac,0xb5,"crypto\\cms\\cms_kari.c",0x2d);
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x20);
}

// CMS_RecipientInfo_kari_orig_id_cmp @ 14f78a170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_kari_orig_id_cmp(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (*param_1 != 1) {
    ERR_put_error(0x2e,0xae,0xb5,"crypto\\cms\\cms_kari.c",0x62);
    return 0xfffffffe;
  }
  piVar1 = *(int **)(*(longlong *)(param_1 + 2) + 8);
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

// CMS_RecipientInfo_kari_set0_pkey @ 14f78a1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_kari_set0_pkey(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  EVP_PKEY_CTX_free(*(undefined8 *)(lVar1 + 0x28));
  *(undefined8 *)(lVar1 + 0x28) = 0;
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = EVP_PKEY_CTX_new(param_2,0);
  if ((lVar3 != 0) && (iVar2 = EVP_PKEY_derive_init(lVar3), 0 < iVar2)) {
    *(longlong *)(lVar1 + 0x28) = lVar3;
    return 1;
  }
  EVP_PKEY_CTX_free(lVar3);
  return 0;
}

// cms_RecipientInfo_kari_encrypt @ 14f78a270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_RecipientInfo_kari_encrypt(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  if (*param_2 != 1) {
    ERR_put_error(0x2e,0xb2,0xb5,"crypto\\cms\\cms_kari.c",0x178);
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 2);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar6 = FUN_14f78a730(lVar1,*(undefined8 *)(lVar2 + 0x18));
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  piVar4 = *(int **)(lVar1 + 8);
  if (*piVar4 == -1) {
    *piVar4 = 2;
    uVar6 = CMS_OriginatorPublicKey_it();
    lVar7 = ASN1_item_new(uVar6);
    *(longlong *)(piVar4 + 2) = lVar7;
    if (lVar7 == 0) {
      return 0;
    }
  }
  iVar5 = cms_env_asn1_ctrl(param_2,0);
  if (iVar5 == 0) {
    return 0;
  }
  iVar8 = 0;
  iVar5 = OPENSSL_sk_num(uVar3);
  if (0 < iVar5) {
    do {
      lVar7 = OPENSSL_sk_value(uVar3,iVar8);
      iVar5 = EVP_PKEY_derive_set_peer(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar7 + 0x10));
      if (iVar5 < 1) {
        return 0;
      }
      iVar5 = FUN_14f78a5b0(&local_res18,local_res10,*(undefined8 *)(lVar2 + 0x20),
                            *(undefined8 *)(lVar2 + 0x28),lVar1,1);
      if (iVar5 == 0) {
        return 0;
      }
      ASN1_STRING_set0(*(undefined8 *)(lVar7 + 8),local_res18,local_res10[0]);
      iVar8 = iVar8 + 1;
      iVar5 = OPENSSL_sk_num(uVar3);
    } while (iVar8 < iVar5);
  }
  return 1;
}

// cms_RecipientInfo_kari_init @ 14f78a3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
cms_RecipientInfo_kari_init(undefined4 *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  
  uVar2 = CMS_KeyAgreeRecipientInfo_it();
  puVar3 = (undefined4 *)ASN1_item_new(uVar2);
  *(undefined4 **)(param_1 + 2) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *param_1 = 1;
    *puVar3 = 3;
    uVar2 = CMS_RecipientEncryptedKey_it();
    plVar4 = (longlong *)ASN1_item_new(uVar2);
    if (plVar4 != (longlong *)0x0) {
      iVar1 = OPENSSL_sk_push(*(undefined8 *)(puVar3 + 8),plVar4);
      if (iVar1 == 0) {
        uVar2 = CMS_RecipientEncryptedKey_it();
        ASN1_item_free(plVar4,uVar2);
      }
      else {
        if ((param_4 >> 0x10 & 1) == 0) {
          *(undefined4 *)*plVar4 = 0;
          iVar1 = cms_set1_ias(*plVar4 + 8,param_2);
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          *(undefined4 *)*plVar4 = 1;
          uVar2 = CMS_RecipientKeyIdentifier_it();
          uVar2 = ASN1_item_new(uVar2);
          *(undefined8 *)(*plVar4 + 8) = uVar2;
          if (*(longlong *)(*plVar4 + 8) == 0) {
            return 0;
          }
          uVar2 = cms_set1_keyid(*(longlong *)(*plVar4 + 8),param_2);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
        }
        iVar1 = FUN_14f78a4f0(puVar3,param_3);
        if (iVar1 != 0) {
          EVP_PKEY_up_ref(param_3);
          plVar4[2] = param_3;
          return 1;
        }
      }
    }
  }
  return 0;
}

// FUN_14f78a4f0 @ 14f78a4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78a4f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  
  uVar3 = 0;
  local_res18[0] = 0;
  lVar2 = EVP_PKEY_CTX_new(param_2,0);
  if (lVar2 != 0) {
    iVar1 = EVP_PKEY_keygen_init(lVar2);
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_keygen(lVar2,local_res18);
      if (0 < iVar1) {
        EVP_PKEY_CTX_free(lVar2);
        lVar2 = EVP_PKEY_CTX_new(local_res18[0],0);
        if (lVar2 != 0) {
          iVar1 = EVP_PKEY_derive_init(lVar2);
          if (0 < iVar1) {
            *(longlong *)(param_1 + 0x28) = lVar2;
            uVar3 = 1;
            goto LAB_14f78a57f;
          }
        }
      }
    }
  }
  EVP_PKEY_CTX_free(lVar2);
LAB_14f78a57f:
  EVP_PKEY_free(local_res18[0]);
  return uVar3;
}

// FUN_14f78a5b0 @ 14f78a5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f78a5b0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                 longlong param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98 [2];
  ulonglong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f78a5c5;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar3 = 0;
  lVar2 = 0;
  iVar1 = EVP_CIPHER_CTX_key_length(*(undefined8 *)(param_5 + 0x30));
  local_90 = (ulonglong)iVar1;
  if (local_90 < 0x41) {
    iVar1 = EVP_PKEY_derive(*(undefined8 *)(param_5 + 0x28),local_88,&local_90);
    if (0 < iVar1) {
      local_a0 = param_6;
      local_a8 = 0;
      iVar1 = EVP_CipherInit_ex(*(undefined8 *)(param_5 + 0x30),0,0,local_88);
      if (iVar1 != 0) {
        local_a8 = CONCAT44(local_a8._4_4_,param_4);
        iVar1 = EVP_CipherUpdate(*(undefined8 *)(param_5 + 0x30),0,local_98,param_3);
        if (iVar1 != 0) {
          lVar2 = CRYPTO_malloc((longlong)local_98[0],"crypto\\cms\\cms_kari.c",0xd0);
          iVar3 = 0;
          if (lVar2 != 0) {
            local_a8 = CONCAT44(local_a8._4_4_,param_4);
            iVar1 = EVP_CipherUpdate(*(undefined8 *)(param_5 + 0x30),lVar2,local_98,param_3);
            if (iVar1 != 0) {
              iVar3 = 1;
              *param_1 = lVar2;
              *param_2 = (longlong)local_98[0];
            }
          }
        }
      }
    }
    OPENSSL_cleanse(local_88,local_90);
    if (iVar3 == 0) {
      CRYPTO_free(lVar2,"crypto\\cms\\cms_kari.c",0xdc);
    }
    EVP_CIPHER_CTX_reset(*(undefined8 *)(param_5 + 0x30));
    EVP_PKEY_CTX_free(*(undefined8 *)(param_5 + 0x28));
    *(undefined8 *)(param_5 + 0x28) = 0;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

// FUN_14f78a730 @ 14f78a730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f78a730(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = EVP_CIPHER_key_length(param_2);
  lVar4 = EVP_CIPHER_CTX_cipher(uVar5);
  if (lVar4 != 0) {
    uVar5 = EVP_CIPHER_CTX_cipher(uVar5);
    uVar2 = EVP_CIPHER_flags(uVar5);
    return (ulonglong)((uVar2 & 0xf0007) == 0x10002);
  }
  iVar3 = EVP_CIPHER_type();
  if (iVar3 == 0x2c) {
    uVar6 = EVP_des_ede3_wrap();
  }
  else if (iVar1 < 0x11) {
    uVar6 = EVP_aes_128_wrap();
  }
  else if (iVar1 < 0x19) {
    uVar6 = EVP_aes_192_wrap();
  }
  else {
    uVar6 = EVP_aes_256_wrap();
  }
  uVar7 = EVP_EncryptInit_ex(uVar5,uVar6,0,0,0);
  return uVar7;
}

// FUN_14f78a800 @ 14f78a800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78a800(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f78a820 @ 14f78a820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78a820(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f78a840 @ 14f78a840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78a840(void)

{
  OPENSSL_sk_value();
  return;
}

