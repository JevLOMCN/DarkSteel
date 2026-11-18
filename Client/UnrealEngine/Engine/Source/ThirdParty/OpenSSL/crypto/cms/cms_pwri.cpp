// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// CMS_RecipientInfo_set0_password @ 14f7c43e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_RecipientInfo_set0_password(int *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (*param_1 != 3) {
    ERR_put_error(0x2e,0xa8,0xb1,"crypto\\cms\\cms_pwri.c",0x1a);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 2);
  *(longlong *)(lVar1 + 0x20) = param_2;
  if ((param_2 != 0) && (param_3 < 0)) {
    param_3 = -1;
    do {
      param_3 = param_3 + 1;
    } while (*(char *)(param_2 + param_3) != '\0');
  }
  *(longlong *)(lVar1 + 0x28) = param_3;
  return 1;
}

// CMS_add0_recipient_password @ 14f7c4450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
CMS_add0_recipient_password
          (undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,longlong param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar7 = (undefined4 *)0x0;
  lVar2 = cms_get0_enveloped();
  if (lVar2 == 0) {
    return (undefined4 *)0x0;
  }
  iVar1 = 0x37d;
  if (0 < param_3) {
    iVar1 = param_3;
  }
  if ((param_7 == 0) && (param_7 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18), param_7 == 0))
  {
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x44);
    ERR_put_error(0x2e,0xa5,0x7e,"crypto\\cms\\cms_pwri.c");
    return (undefined4 *)0x0;
  }
  if (iVar1 != 0x37d) {
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x49);
    ERR_put_error(0x2e,0xa5,0xb3,"crypto\\cms\\cms_pwri.c");
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined8 *)X509_ALGOR_new();
  if (puVar3 == (undefined8 *)0x0) {
LAB_14f7c471a:
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0xa1);
    ERR_put_error(0x2e,0xa5,0x41,"crypto\\cms\\cms_pwri.c");
    uVar4 = 0;
  }
  else {
    uVar4 = EVP_CIPHER_CTX_new();
    local_68 = (undefined1 *)0x0;
    iVar1 = EVP_EncryptInit_ex(uVar4,param_7,0,0);
    if (iVar1 < 1) {
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x55);
LAB_14f7c4548:
      uVar9 = 6;
    }
    else {
      iVar1 = EVP_CIPHER_CTX_iv_length(uVar4);
      if (iVar1 < 1) {
LAB_14f7c45ed:
        uVar6 = EVP_CIPHER_CTX_cipher(uVar4);
        uVar9 = EVP_CIPHER_type(uVar6);
        uVar6 = OBJ_nid2obj(uVar9);
        *puVar3 = uVar6;
        EVP_CIPHER_CTX_free(uVar4);
        uVar4 = 0;
        uVar6 = CMS_RecipientInfo_it();
        puVar7 = (undefined4 *)ASN1_item_new(uVar6);
        if (puVar7 != (undefined4 *)0x0) {
          uVar6 = CMS_PasswordRecipientInfo_it();
          puVar8 = (undefined4 *)ASN1_item_new(uVar6);
          *(undefined4 **)(puVar7 + 2) = puVar8;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar7 = 3;
            X509_ALGOR_free(*(undefined8 *)(puVar8 + 4));
            lVar5 = X509_ALGOR_new();
            *(longlong *)(puVar8 + 4) = lVar5;
            if (lVar5 != 0) {
              uVar6 = OBJ_nid2obj(0x37d);
              **(undefined8 **)(puVar8 + 4) = uVar6;
              uVar6 = ASN1_TYPE_new();
              *(undefined8 *)(*(longlong *)(puVar8 + 4) + 8) = uVar6;
              lVar5 = *(longlong *)(*(longlong *)(puVar8 + 4) + 8);
              if (lVar5 != 0) {
                uVar6 = X509_ALGOR_it();
                lVar5 = ASN1_item_pack(puVar3,uVar6,lVar5 + 8);
                if (lVar5 != 0) {
                  **(undefined4 **)(*(longlong *)(puVar8 + 4) + 8) = 0x10;
                  X509_ALGOR_free(puVar3);
                  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0xffffffff);
                  puVar3 = (undefined8 *)0x0;
                  lVar5 = PKCS5_pbkdf2_set(param_2,0,0,0xffffffff);
                  *(longlong *)(puVar8 + 2) = lVar5;
                  if (lVar5 == 0) goto LAB_14f7c473c;
                  CMS_RecipientInfo_set0_password(puVar7,param_5,param_6);
                  *puVar8 = 0;
                  iVar1 = OPENSSL_sk_push(*(undefined8 *)(lVar2 + 0x10),puVar7);
                  puVar3 = (undefined8 *)0x0;
                  if (iVar1 != 0) {
                    return puVar7;
                  }
                }
              }
            }
          }
        }
        goto LAB_14f7c471a;
      }
      iVar1 = RAND_bytes(local_58,iVar1);
      if (iVar1 < 1) goto LAB_14f7c473c;
      local_68 = local_58;
      iVar1 = EVP_EncryptInit_ex(uVar4,0,0,0);
      if (iVar1 < 1) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x5f);
        goto LAB_14f7c4548;
      }
      lVar5 = ASN1_TYPE_new();
      puVar3[1] = lVar5;
      if (lVar5 == 0) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,100);
        uVar9 = 0x41;
      }
      else {
        iVar1 = EVP_CIPHER_param_to_asn1(uVar4,lVar5);
        if (0 < iVar1) goto LAB_14f7c45ed;
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x69);
        uVar9 = 0x66;
      }
    }
    ERR_put_error(0x2e,0xa5,uVar9,"crypto\\cms\\cms_pwri.c");
  }
LAB_14f7c473c:
  EVP_CIPHER_CTX_free(uVar4);
  if (puVar7 != (undefined4 *)0x0) {
    uVar4 = CMS_RecipientInfo_it();
    ASN1_item_free(puVar7,uVar4);
  }
  X509_ALGOR_free(puVar3);
  return (undefined4 *)0x0;
}

// cms_RecipientInfo_pwri_crypt @ 14f7c4790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cms_RecipientInfo_pwri_crypt(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar16;
  undefined4 uVar17;
  longlong lVar15;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar16 = 0x14f7c47a2;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar15 = 0;
  lVar14 = 0;
  lVar11 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    ERR_put_error(0x2e,0xa7,0xb2,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x125),0x14f7c47a2);
    return 0;
  }
  puVar7 = *(undefined8 **)(lVar1 + 0x10);
  if ((puVar7 == (undefined8 *)0x0) || (iVar4 = OBJ_obj2nid(*puVar7), iVar4 != 0x37d)) {
    ERR_put_error(0x2e,0xa7,0xb3,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,300),uVar16);
    return 0;
  }
  uVar6 = X509_ALGOR_it();
  puVar7 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar6,puVar7[1]);
  if (puVar7 == (undefined8 *)0x0) {
    ERR_put_error(0x2e,0xa7,0xb0,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x135),uVar16);
    return 0;
  }
  uVar5 = OBJ_obj2nid(*puVar7);
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar16 = OBJ_nid2sn(uVar5);
  lVar8 = EVP_get_cipherbyname(uVar16);
  if (lVar8 == 0) {
    uVar16 = CONCAT44(uVar12,0x13c);
    uVar12 = 0x94;
  }
  else {
    lVar9 = EVP_CIPHER_CTX_new();
    if (lVar9 != 0) {
      uVar16 = CONCAT44(uVar17,param_3);
      uVar12 = 0;
      iVar4 = EVP_CipherInit_ex(lVar9,lVar8,0,0,0,uVar16);
      uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
      lVar8 = lVar15;
      if (iVar4 != 0) {
        EVP_CIPHER_CTX_set_padding(lVar9,0);
        iVar4 = EVP_CIPHER_asn1_to_param(lVar9,puVar7[1]);
        lVar8 = lVar11;
        if (iVar4 < 1) {
          ERR_put_error(0x2e,0xa7,0x66,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x14b));
        }
        else {
          lVar11 = lVar9;
          iVar4 = EVP_PBE_CipherInit(**(undefined8 **)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x20),
                                     *(undefined4 *)(lVar1 + 0x28),(*(undefined8 **)(lVar1 + 8))[1],
                                     lVar9,CONCAT44(uVar5,param_3));
          uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
          if (iVar4 < 0) {
            ERR_put_error(0x2e,0xa7,6,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x156));
          }
          else {
            lVar15 = lVar14;
            if (param_3 == 0) {
              lVar8 = CRYPTO_malloc((longlong)**(int **)(lVar1 + 0x18),"crypto\\cms\\cms_pwri.c",
                                    0x16b);
              if (lVar8 == 0) {
                ERR_put_error(0x2e,0xa7,0x41,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x16e));
                goto LAB_14f7c4ae1;
              }
              iVar4 = FUN_14f7c4b50(lVar8,&local_res8,*(undefined8 *)(*(int **)(lVar1 + 0x18) + 2),
                                    (longlong)**(int **)(lVar1 + 0x18),lVar9);
              if (iVar4 == 0) {
                ERR_put_error(0x2e,0xa7,0xb4,"crypto\\cms\\cms_pwri.c",0x174);
                goto LAB_14f7c4ae1;
              }
              CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                                "crypto\\cms\\cms_pwri.c",0x178);
              *(ulonglong *)(lVar2 + 0x28) = local_res8;
              *(longlong *)(lVar2 + 0x20) = lVar8;
            }
            else {
              uVar3 = *(ulonglong *)(lVar2 + 0x28);
              iVar4 = EVP_CIPHER_CTX_block_size(lVar9);
              uVar13 = (ulonglong)iVar4;
              uVar10 = uVar3 + 3 + uVar13;
              uVar10 = uVar10 - uVar10 % uVar13;
              if ((((uVar10 < uVar13 * 2) || (0xff < uVar3)) ||
                  (local_res8 = uVar10,
                  lVar8 = CRYPTO_malloc(uVar10,"crypto\\cms\\cms_pwri.c",0x161), lVar8 == 0)) ||
                 (iVar4 = FUN_14f7c4d30(lVar8,&local_res8,*(undefined8 *)(lVar2 + 0x20),
                                        *(undefined8 *)(lVar2 + 0x28),lVar9), iVar4 == 0))
              goto LAB_14f7c4ae1;
              *(longlong *)(*(longlong *)(lVar1 + 0x18) + 8) = lVar8;
              **(undefined4 **)(lVar1 + 0x18) = (undefined4)local_res8;
            }
            lVar15 = 1;
          }
        }
      }
LAB_14f7c4ae1:
      EVP_CIPHER_CTX_free(lVar9);
      if ((int)lVar15 == 0) {
        CRYPTO_free(lVar8,"crypto\\cms\\cms_pwri.c",0x185);
      }
      X509_ALGOR_free(puVar7);
      return lVar15;
    }
    uVar16 = CONCAT44(uVar12,0x142);
    uVar12 = 0x41;
  }
  ERR_put_error(0x2e,0xa7,uVar12,"crypto\\cms\\cms_pwri.c",uVar16);
  return 0;
}

// FUN_14f7c4b50 @ 14f7c4b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7c4b50(void *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,undefined8 param_5
             )

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar9 = 0x14f7c4b6a;
  iVar2 = EVP_CIPHER_CTX_block_size(param_5);
  uVar7 = (ulonglong)iVar2;
  uVar6 = 0;
  uVar5 = 0;
  if ((uVar7 * 2 <= param_4) && (param_4 % uVar7 == 0)) {
    pbVar4 = (byte *)CRYPTO_malloc(param_4,"crypto\\cms\\cms_pwri.c",0xbf);
    if (pbVar4 == (byte *)0x0) {
      ERR_put_error(0x2e,0xb4,0x41,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar8,0xc0));
      uVar6 = 0;
    }
    else {
      iVar3 = EVP_DecryptUpdate(param_5,pbVar4 + param_4 + uVar7 * -2,local_res20,
                                param_3 + uVar7 * -2 + param_4,CONCAT44(uVar8,iVar2 * 2),uVar9);
      if (iVar3 != 0) {
        iVar3 = EVP_DecryptUpdate(param_5,pbVar4,local_res20,pbVar4 + (param_4 - uVar7),iVar2,uVar9)
        ;
        if (iVar3 != 0) {
          iVar2 = EVP_DecryptUpdate(param_5,pbVar4,local_res20,param_3,(int)param_4 - iVar2,uVar9);
          if (iVar2 != 0) {
            uVar8 = 0;
            iVar2 = EVP_DecryptInit_ex(param_5,0,0,0,0);
            uVar6 = uVar5;
            if (iVar2 != 0) {
              iVar2 = EVP_DecryptUpdate(param_5,pbVar4,local_res20,pbVar4,
                                        CONCAT44(uVar8,(int)param_4));
              if ((iVar2 != 0) &&
                 ((byte)((pbVar4[6] ^ pbVar4[3]) & (pbVar4[5] ^ pbVar4[2]) & (pbVar4[1] ^ pbVar4[4])
                        ) == 0xff)) {
                bVar1 = *pbVar4;
                if ((ulonglong)(longlong)(int)(bVar1 - 4) <= param_4) {
                  *param_2 = (ulonglong)bVar1;
                  memcpy(param_1,pbVar4 + 4,(ulonglong)bVar1);
                  uVar6 = 1;
                }
              }
            }
          }
        }
      }
      CRYPTO_clear_free(pbVar4,param_4,"crypto\\cms\\cms_pwri.c",0xe2);
    }
    return uVar6;
  }
  return 0;
}

// FUN_14f7c4d30 @ 14f7c4d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7c4d30(undefined1 *param_1,ulonglong *param_2,byte *param_3,ulonglong param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res20 [8];
  undefined8 uVar5;
  
  uVar5 = 0x14f7c4d49;
  iVar1 = EVP_CIPHER_CTX_block_size(param_5);
  uVar4 = (ulonglong)iVar1;
  uVar3 = param_4 + 3 + uVar4;
  uVar3 = uVar3 - uVar3 % uVar4;
  if ((uVar3 < uVar4 * 2) || (0xff < param_4)) {
    return 0;
  }
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_4;
    param_1[1] = ~*param_3;
    param_1[2] = ~param_3[1];
    param_1[3] = ~param_3[2];
    memcpy(param_1 + 4,param_3,param_4);
    iVar1 = (int)uVar3;
    if ((param_4 + 4 < uVar3) &&
       (iVar2 = RAND_bytes(param_1 + param_4 + 4,(iVar1 - (int)param_4) + -4), iVar2 < 1)) {
      return 0;
    }
    iVar2 = EVP_EncryptUpdate(param_5,param_1,local_res20,param_1,iVar1,uVar5);
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = EVP_EncryptUpdate(param_5,param_1,local_res20,param_1,iVar1,uVar5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *param_2 = uVar3;
  return 1;
}

// FUN_14f7c4e50 @ 14f7c4e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c4e50(void)

{
  OPENSSL_sk_push();
  return;
}

