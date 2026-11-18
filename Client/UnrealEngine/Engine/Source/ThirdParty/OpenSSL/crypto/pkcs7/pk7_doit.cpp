// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 37

// PKCS7_SIGNER_INFO_sign @ 14f76e9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_SIGNER_INFO_sign(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f76e9ee;
  local_res10 = 0;
  local_res8 = 0;
  uVar1 = OBJ_obj2nid(**(undefined8 **)(param_1 + 0x10));
  uVar3 = OBJ_nid2sn(uVar1);
  lVar4 = EVP_get_digestbyname(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = EVP_MD_CTX_new();
  if (lVar5 == 0) {
    uVar3 = 0x342;
    uVar1 = 0x41;
  }
  else {
    uVar6 = *(ulonglong *)(param_1 + 0x38);
    iVar2 = EVP_DigestSignInit(lVar5,&local_res10,lVar4,0,uVar6,uVar7);
    if (iVar2 < 1) goto LAB_14f76ea62;
    uVar6 = uVar6 & 0xffffffff00000000;
    iVar2 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,8,5,uVar6,param_1);
    uVar1 = (undefined4)(uVar6 >> 0x20);
    if (iVar2 < 1) {
      uVar3 = CONCAT44(uVar1,0x34b);
    }
    else {
      uVar3 = PKCS7_ATTR_SIGN_it();
      iVar2 = ASN1_item_i2d(*(undefined8 *)(param_1 + 0x18),&local_res8,uVar3);
      if ((local_res8 == 0) ||
         (iVar2 = EVP_DigestUpdate(lVar5,local_res8,(longlong)iVar2), iVar2 < 1))
      goto LAB_14f76ea62;
      CRYPTO_free(local_res8,"crypto\\pkcs7\\pk7_doit.c",0x355);
      local_res8 = 0;
      iVar2 = EVP_DigestSignFinal(lVar5,0,&local_res18);
      if ((iVar2 < 1) ||
         ((local_res8 = CRYPTO_malloc(CONCAT44(uStackX_1c,local_res18),"crypto\\pkcs7\\pk7_doit.c",
                                      0x359), local_res8 == 0 ||
          (iVar2 = EVP_DigestSignFinal(lVar5,local_res8,&local_res18), iVar2 < 1))))
      goto LAB_14f76ea62;
      iVar2 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,8,5,CONCAT44(uVar1,1),param_1);
      if (0 < iVar2) {
        EVP_MD_CTX_free(lVar5);
        ASN1_STRING_set0(*(undefined8 *)(param_1 + 0x28),local_res8,local_res18);
        return 1;
      }
      uVar3 = 0x361;
    }
    uVar1 = 0x98;
  }
  ERR_put_error(0x21,0x8b,uVar1,"crypto\\pkcs7\\pk7_doit.c",uVar3);
LAB_14f76ea62:
  CRYPTO_free(local_res8,"crypto\\pkcs7\\pk7_doit.c",0x36c);
  EVP_MD_CTX_free(lVar5);
  return 0;
}

// PKCS7_add_attribute @ 14f76ec10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_add_attribute(longlong param_1)

{
  FUN_14f770720(param_1 + 0x30);
  return;
}

// PKCS7_add_signed_attribute @ 14f76ec30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_add_signed_attribute(longlong param_1)

{
  FUN_14f770720(param_1 + 0x18);
  return;
}

// FUN_14f76ec50 @ 14f76ec50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f76ec50(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f76ec65;
  uVar2 = BIO_f_md();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    uVar5 = 0x3c;
  }
  else {
    uVar1 = OBJ_obj2nid(*param_2);
    uVar2 = OBJ_nid2sn(uVar1);
    lVar4 = EVP_get_digestbyname(uVar2);
    if (lVar4 == 0) {
      uVar5 = 0x42;
      uVar1 = 0x6d;
      goto LAB_14f76ed04;
    }
    BIO_ctrl(lVar3,0x6f,0,lVar4);
    if (*param_1 == 0) {
      *param_1 = lVar3;
      return 1;
    }
    lVar4 = BIO_push(*param_1,lVar3);
    if (lVar4 != 0) {
      return 1;
    }
    uVar5 = 0x4a;
  }
  uVar1 = 0x20;
LAB_14f76ed04:
  ERR_put_error(0x21,0x7d,uVar1,"crypto\\pkcs7\\pk7_doit.c",uVar5,uVar6);
  BIO_free(lVar3);
  return 0;
}

// PKCS7_dataDecode @ 14f76ed40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS7_dataDecode(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  int local_res8;
  undefined8 in_stack_ffffffffffffff58;
  int local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  int *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f76ed6a;
  lVar10 = 0;
  local_58 = 0;
  local_68 = 0;
  local_78 = 0;
  local_50 = (undefined8 *)0x0;
  uVar15 = 0;
  local_70 = 0;
  local_88 = 0;
  local_res8 = 0;
  local_98[0] = 0;
  local_80 = 0;
  if (param_1 == 0) {
    ERR_put_error(0x21,0x70,0x8f,"crypto\\pkcs7\\pk7_doit.c",0x178);
    return 0;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    ERR_put_error(0x21,0x70,0x7a,"crypto\\pkcs7\\pk7_doit.c",0x17d);
    return 0;
  }
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar13 = lVar10;
  if (iVar2 == 0x16) {
    piVar5 = (int *)FUN_14f7701a0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
    local_60 = piVar5;
    iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
    if (((iVar2 == 0x16) && (iVar2 = PKCS7_ctrl(param_1,2,0,0), iVar2 != 0)) ||
       (piVar5 != (int *)0x0)) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
      piVar5 = local_60;
LAB_14f76efbd:
      if ((piVar5 != (int *)0x0) || (param_3 != 0)) {
        lVar8 = lVar10;
        if (lVar9 != 0) {
          iVar11 = 0;
          iVar2 = OPENSSL_sk_num(lVar9);
          lVar8 = 0;
          if (0 < iVar2) {
            do {
              puVar6 = (undefined8 *)OPENSSL_sk_value(lVar9,iVar11);
              uVar4 = BIO_f_md();
              lVar7 = BIO_new(uVar4);
              if (lVar7 == 0) {
                ERR_put_error(0x21,0x70,0x20,"crypto\\pkcs7\\pk7_doit.c",0x1bd);
                lVar9 = 0;
                goto LAB_14f76ee44;
              }
              uVar3 = OBJ_obj2nid(*puVar6);
              uVar4 = OBJ_nid2sn(uVar3);
              lVar8 = EVP_get_digestbyname(uVar4);
              if (lVar8 == 0) {
                ERR_put_error(0x21,0x70,0x6d,"crypto\\pkcs7\\pk7_doit.c",0x1c5);
                lVar9 = 0;
                goto LAB_14f76ee44;
              }
              BIO_ctrl(lVar7,0x6f,0,lVar8);
              if (lVar13 != 0) {
                BIO_push(lVar13,lVar7);
                lVar7 = lVar13;
              }
              iVar11 = iVar11 + 1;
              iVar2 = OPENSSL_sk_num(lVar9);
              lVar13 = lVar7;
              lVar8 = lVar7;
            } while (iVar11 < iVar2);
          }
        }
        lVar9 = local_68;
        if (local_68 == 0) {
          local_res8 = 0;
          lVar14 = lVar8;
        }
        else {
          uVar4 = BIO_f_cipher();
          local_90 = BIO_new(uVar4);
          lVar13 = lVar8;
          if (local_90 == 0) {
            ERR_put_error(0x21,0x70,0x20,"crypto\\pkcs7\\pk7_doit.c",0x1d4);
            lVar7 = 0;
            lVar9 = local_90;
            goto LAB_14f76ee44;
          }
          iVar11 = 0;
          iVar2 = OPENSSL_sk_num(uVar15);
          uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
          if (param_4 != 0) {
            if (0 < iVar2) {
              do {
                lVar9 = OPENSSL_sk_value(uVar15,iVar11);
                uVar4 = X509_get_issuer_name(param_4);
                iVar2 = X509_NAME_cmp(**(undefined8 **)(lVar9 + 8),uVar4);
                if (iVar2 == 0) {
                  lVar7 = *(longlong *)(lVar9 + 8);
                  uVar4 = X509_get_serialNumber(param_4);
                  iVar2 = ASN1_INTEGER_cmp(uVar4,*(undefined8 *)(lVar7 + 8));
                  if (iVar2 == 0) {
                    iVar2 = FUN_14f770a10(&local_70,local_98,lVar9,param_2,0);
                    if (iVar2 < 0) goto LAB_14f76f245;
                    ERR_clear_error();
                    local_res8 = local_98[0];
                    lVar10 = local_70;
                    goto LAB_14f76f25b;
                  }
                }
                iVar11 = iVar11 + 1;
                iVar2 = OPENSSL_sk_num(uVar15);
                uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
              } while (iVar11 < iVar2);
            }
            ERR_put_error(0x21,0x70,0x73,"crypto\\pkcs7\\pk7_doit.c",CONCAT44(uVar3,0x1eb));
            lVar7 = 0;
            lVar9 = local_90;
            goto LAB_14f76ee44;
          }
          if (0 < iVar2) {
            do {
              uVar4 = OPENSSL_sk_value(uVar15,iVar11);
              iVar2 = EVP_CIPHER_key_length(lVar9);
              iVar2 = FUN_14f770a10(&local_70,local_98,uVar4,param_2,(longlong)iVar2);
              if (iVar2 < 0) goto LAB_14f76f245;
              ERR_clear_error();
              iVar11 = iVar11 + 1;
              iVar2 = OPENSSL_sk_num(uVar15);
            } while (iVar11 < iVar2);
            local_res8 = local_98[0];
            lVar10 = local_70;
          }
LAB_14f76f25b:
          lVar14 = local_90;
          lVar7 = 0;
          local_78 = 0;
          BIO_ctrl(local_90,0x81,0,&local_78);
          iVar2 = EVP_CipherInit_ex(local_78,local_68,0,0,0,0);
          lVar9 = lVar14;
          if ((iVar2 < 1) || (iVar2 = EVP_CIPHER_asn1_to_param(local_78,local_50[1]), iVar2 < 0))
          goto LAB_14f76ee44;
          local_80 = EVP_CIPHER_CTX_key_length(local_78);
          lVar12 = (longlong)local_80;
          local_88 = CRYPTO_malloc(lVar12,"crypto\\pkcs7\\pk7_doit.c",0x20d);
          if ((local_88 == 0) ||
             (iVar11 = EVP_CIPHER_CTX_rand_key(local_78,local_88), iVar2 = local_80,
             lVar1 = local_88, lVar7 = 0, iVar11 < 1)) goto LAB_14f76ee44;
          if (lVar10 == 0) {
            local_res8 = local_80;
            local_88 = 0;
            lVar10 = lVar1;
          }
          lVar7 = local_88;
          iVar11 = EVP_CIPHER_CTX_key_length(local_78);
          if ((local_res8 != iVar11) &&
             (iVar11 = EVP_CIPHER_CTX_set_key_length(local_78,local_res8), iVar11 == 0)) {
            CRYPTO_clear_free(lVar10,(longlong)local_res8,"crypto\\pkcs7\\pk7_doit.c",0x220);
            local_88 = 0;
            lVar10 = lVar7;
            local_res8 = iVar2;
          }
          lVar1 = local_88;
          ERR_clear_error();
          iVar2 = EVP_CipherInit_ex(local_78,0,0,lVar10,0,0);
          lVar7 = 0;
          if (iVar2 < 1) goto LAB_14f76ee44;
          CRYPTO_clear_free(lVar10,(longlong)local_res8,"crypto\\pkcs7\\pk7_doit.c",0x22b);
          CRYPTO_clear_free(lVar1,lVar12,"crypto\\pkcs7\\pk7_doit.c",0x22d);
          if (lVar8 != 0) {
            BIO_push(lVar8,lVar14);
            lVar14 = lVar8;
          }
        }
        if (param_3 != 0) {
LAB_14f76f44f:
          BIO_push(lVar14,param_3);
          return lVar14;
        }
        lVar13 = lVar14;
        lVar10 = 0;
        if (*local_60 < 1) {
          uVar15 = BIO_s_mem();
          local_58 = BIO_new(uVar15);
          local_88 = 0;
          lVar7 = 0;
          lVar9 = 0;
          if (local_58 == 0) goto LAB_14f76ee44;
          BIO_ctrl(local_58,0x82,0,0);
        }
        else {
          local_58 = BIO_new_mem_buf(*(undefined8 *)(local_60 + 2));
        }
        local_88 = 0;
        param_3 = local_58;
        lVar7 = 0;
        lVar9 = 0;
        if (local_58 != 0) goto LAB_14f76f44f;
        goto LAB_14f76ee44;
      }
      uVar15 = 0x1b4;
      uVar3 = 0x7a;
    }
    else {
      uVar15 = 399;
      uVar3 = 0x9b;
    }
  }
  else {
    if (iVar2 == 0x17) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      uVar15 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
      local_50 = *(undefined8 **)(lVar9 + 8);
      piVar5 = *(int **)(lVar9 + 0x10);
      local_60 = piVar5;
      uVar3 = OBJ_obj2nid(*local_50);
      uVar4 = OBJ_nid2sn(uVar3);
      local_68 = EVP_get_cipherbyname(uVar4);
      lVar9 = lVar10;
      if (local_68 != 0) goto LAB_14f76efbd;
      uVar15 = 0x1a9;
    }
    else {
      if (iVar2 != 0x18) {
        uVar15 = 0x1ae;
        uVar3 = 0x70;
        goto LAB_14f76ee39;
      }
      lVar8 = *(longlong *)(param_1 + 0x20);
      uVar15 = *(undefined8 *)(lVar8 + 0x30);
      lVar9 = *(longlong *)(lVar8 + 8);
      piVar5 = *(int **)(*(longlong *)(lVar8 + 0x28) + 0x10);
      local_50 = *(undefined8 **)(*(longlong *)(lVar8 + 0x28) + 8);
      local_60 = piVar5;
      uVar3 = OBJ_obj2nid(*local_50);
      uVar4 = OBJ_nid2sn(uVar3);
      local_68 = EVP_get_cipherbyname(uVar4);
      if (local_68 != 0) goto LAB_14f76efbd;
      uVar15 = 0x19d;
    }
    uVar3 = 0x6f;
  }
LAB_14f76ee39:
  ERR_put_error(0x21,0x70,uVar3,"crypto\\pkcs7\\pk7_doit.c",uVar15);
  lVar7 = lVar10;
  lVar9 = lVar10;
LAB_14f76ee44:
  CRYPTO_clear_free(lVar10,(longlong)local_res8,"crypto\\pkcs7\\pk7_doit.c",0x249);
  CRYPTO_clear_free(local_88,(longlong)local_80,"crypto\\pkcs7\\pk7_doit.c",0x24a);
  BIO_free_all(lVar13);
  BIO_free_all(lVar7);
  BIO_free_all(lVar9);
  BIO_free_all(local_58);
  return 0;
LAB_14f76f245:
  lVar7 = 0;
  lVar10 = local_70;
  lVar9 = local_90;
  local_res8 = local_98[0];
  goto LAB_14f76ee44;
}

// PKCS7_dataFinal @ 14f76f470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int PKCS7_dataFinal(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined1 local_88 [64];
  ulonglong local_48;
  int iVar11;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar10 = 0;
  iVar11 = 0;
  local_98[0] = param_2;
  if (param_1 == 0) {
    local_b8 = 0x291;
    ERR_put_error(0x21,0x80,0x8f,"crypto\\pkcs7\\pk7_doit.c");
    return 0;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_b8 = 0x296;
    ERR_put_error(0x21,0x80,0x7a,"crypto\\pkcs7\\pk7_doit.c");
    return 0;
  }
  lVar5 = EVP_MD_CTX_new();
  if (lVar5 == 0) {
    local_b8 = 0x29c;
    ERR_put_error(0x21,0x80,0x41,"crypto\\pkcs7\\pk7_doit.c");
    return 0;
  }
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = iVar10;
  if (iVar1 == 0x15) {
    lVar6 = *(longlong *)(param_1 + 0x20);
LAB_14f76f86c:
    iVar4 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
    if ((iVar4 != 0x16) || (iVar4 = PKCS7_ctrl(param_1,2,0,0), iVar4 == 0)) {
      iVar4 = iVar11;
      if (lVar6 == 0) goto LAB_14f76f90c;
      if ((*(byte *)(lVar6 + 0x10) & 0x10) == 0) {
        lVar9 = BIO_find_type(param_2,0x401);
        if (lVar9 == 0) {
          local_b8 = 800;
          uVar3 = 0x6b;
          goto LAB_14f76f625;
        }
        uVar3 = BIO_ctrl(lVar9,3,0,local_98);
        BIO_set_flags(lVar9,0x200);
        BIO_ctrl(lVar9,0x82,0,0);
        ASN1_STRING_set0(lVar6,local_98[0],uVar3);
      }
    }
    iVar4 = 1;
  }
  else {
    if (iVar1 == 0x16) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      lVar6 = FUN_14f7701a0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      iVar2 = OBJ_obj2nid(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x18));
      if ((iVar2 == 0x15) && (*(int *)(param_1 + 0x10) != 0)) {
        ASN1_OCTET_STRING_free(lVar6);
        lVar6 = 0;
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
      }
LAB_14f76f6d3:
      if (lVar9 == 0) {
        if (iVar1 == 0x19) {
LAB_14f76f802:
          uVar3 = OBJ_obj2nid(**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8));
          lVar9 = FUN_14f770000(&local_a0,param_2,uVar3);
          if (((lVar9 == 0) || (iVar1 = EVP_DigestFinal_ex(local_a0,local_88,local_a8), iVar1 == 0))
             || (iVar1 = ASN1_OCTET_STRING_set
                                   (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),local_88,
                                    local_a8[0]), iVar4 = iVar11, iVar1 == 0)) goto LAB_14f76f90c;
        }
      }
      else {
        iVar4 = OPENSSL_sk_num(lVar9);
        iVar1 = iVar10;
        if (0 < iVar4) {
          do {
            lVar7 = OPENSSL_sk_value(lVar9,iVar1);
            if (*(longlong *)(lVar7 + 0x38) != 0) {
              uVar3 = OBJ_obj2nid(**(undefined8 **)(lVar7 + 0x10));
              lVar8 = FUN_14f770000(&local_a0,param_2,uVar3);
              iVar4 = iVar11;
              if ((lVar8 == 0) || (iVar2 = EVP_MD_CTX_copy_ex(lVar5,local_a0), iVar2 == 0))
              goto LAB_14f76f90c;
              iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar7 + 0x18));
              if (iVar4 < 1) {
                local_a8[0] = EVP_PKEY_size(*(undefined8 *)(lVar7 + 0x38));
                lVar8 = CRYPTO_malloc(local_a8[0],"crypto\\pkcs7\\pk7_doit.c",0x2fc);
                iVar4 = iVar11;
                if (lVar8 == 0) goto LAB_14f76f90c;
                iVar4 = EVP_SignFinal(lVar5,lVar8,local_a8,*(undefined8 *)(lVar7 + 0x38));
                if (iVar4 == 0) {
                  CRYPTO_free(lVar8,"crypto\\pkcs7\\pk7_doit.c",0x301);
                  uVar3 = 6;
                  local_b8 = 0x302;
                  goto LAB_14f76f625;
                }
                ASN1_STRING_set0(*(undefined8 *)(lVar7 + 0x28),lVar8,local_a8[0]);
                param_2 = local_98[0];
              }
              else {
                iVar2 = FUN_14f770840(lVar7,lVar5);
                iVar4 = iVar11;
                if (iVar2 == 0) goto LAB_14f76f90c;
              }
            }
            iVar1 = iVar1 + 1;
            iVar4 = OPENSSL_sk_num(lVar9);
          } while (iVar1 < iVar4);
        }
      }
      goto LAB_14f76f86c;
    }
    if (iVar1 == 0x17) {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x10);
      if (lVar6 == 0) {
        lVar6 = ASN1_OCTET_STRING_new();
        if (lVar6 == 0) {
          local_b8 = 0x2ba;
LAB_14f76f61f:
          uVar3 = 0x41;
          goto LAB_14f76f625;
        }
        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x10) = lVar6;
      }
      goto LAB_14f76f86c;
    }
    if (iVar1 == 0x18) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x10);
      if (lVar6 == 0) {
        lVar6 = ASN1_OCTET_STRING_new();
        if (lVar6 == 0) {
          local_b8 = 0x2ae;
          goto LAB_14f76f61f;
        }
        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x10) = lVar6;
      }
      goto LAB_14f76f6d3;
    }
    if (iVar1 == 0x19) {
      lVar6 = FUN_14f7701a0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
      iVar1 = OBJ_obj2nid(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18));
      if ((iVar1 == 0x15) && (*(int *)(param_1 + 0x10) != 0)) {
        ASN1_OCTET_STRING_free(lVar6);
        lVar6 = 0;
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x20) = 0;
      }
      goto LAB_14f76f802;
    }
    local_b8 = 0x2d6;
    uVar3 = 0x70;
LAB_14f76f625:
    ERR_put_error(0x21,0x80,uVar3,"crypto\\pkcs7\\pk7_doit.c");
    iVar4 = iVar10;
  }
LAB_14f76f90c:
  EVP_MD_CTX_free(lVar5);
  return iVar4;
}

// PKCS7_dataInit @ 14f76f970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong PKCS7_dataInit(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  int *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f76f986;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar11 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uVar6 = 0;
  uVar13 = 0;
  local_a8 = (undefined8 *)0x0;
  lVar7 = 0;
  local_a0 = (int *)0x0;
  uVar5 = 0;
  uVar8 = 0;
  if (param_1 == 0) {
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xd1);
    ERR_put_error(0x21,0x69,0x8f,"crypto\\pkcs7\\pk7_doit.c");
    return 0;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xdf);
    ERR_put_error(0x21,0x69,0x7a,"crypto\\pkcs7\\pk7_doit.c");
    return 0;
  }
  iVar3 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 != 0x15) {
    if (iVar3 == 0x16) {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28);
LAB_14f76faf5:
      local_a0 = (int *)FUN_14f7701a0(uVar4);
      goto LAB_14f76faff;
    }
    if (iVar3 == 0x17) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
      lVar7 = *(longlong *)(lVar1 + 0x18);
      local_a8 = *(undefined8 **)(lVar1 + 8);
      if (lVar7 != 0) goto LAB_14f76faff;
      local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xfa);
LAB_14f76faa2:
      uVar12 = 0x74;
    }
    else {
      if (iVar3 == 0x18) {
        lVar1 = *(longlong *)(param_1 + 0x20);
        uVar8 = *(undefined8 *)(lVar1 + 0x30);
        uVar5 = *(undefined8 *)(lVar1 + 8);
        lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x18);
        local_a8 = *(undefined8 **)(*(longlong *)(lVar1 + 0x28) + 8);
        if (lVar7 == 0) {
          local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0xf1);
          goto LAB_14f76faa2;
        }
        goto LAB_14f76faff;
      }
      if (iVar3 == 0x19) {
        local_b0 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        goto LAB_14f76faf5;
      }
      local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x105);
      uVar12 = 0x70;
    }
LAB_14f76faa8:
    ERR_put_error(0x21,0x69,uVar12,"crypto\\pkcs7\\pk7_doit.c");
    uVar13 = uVar6;
LAB_14f76fd91:
    BIO_free_all(uVar11);
    BIO_free_all(uVar13);
    return 0;
  }
LAB_14f76faff:
  iVar9 = 0;
  iVar3 = OPENSSL_sk_num(uVar5);
  if (0 < iVar3) {
    do {
      uVar4 = OPENSSL_sk_value(uVar5,iVar9);
      iVar3 = FUN_14f76ec50(&local_b8,uVar4);
      uVar11 = local_b8;
      if (iVar3 == 0) goto LAB_14f76fd91;
      iVar9 = iVar9 + 1;
      iVar3 = OPENSSL_sk_num(uVar5);
      uVar11 = local_b8;
    } while (iVar9 < iVar3);
  }
  if ((local_b0 != 0) && (iVar3 = FUN_14f76ec50(&local_b8,local_b0), uVar11 = local_b8, iVar3 == 0))
  goto LAB_14f76fd91;
  uVar6 = uVar11;
  if (lVar7 != 0) {
    uVar5 = BIO_f_cipher();
    uVar6 = BIO_new(uVar5);
    if (uVar6 == 0) {
      local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x117);
      uVar12 = 0x20;
      goto LAB_14f76faa8;
    }
    BIO_ctrl(uVar6,0x81,0,&local_b0);
    iVar3 = EVP_CIPHER_key_length(lVar7);
    uVar12 = EVP_CIPHER_iv_length(lVar7);
    local_b8 = CONCAT44(local_b8._4_4_,uVar12);
    uVar12 = EVP_CIPHER_type(lVar7);
    uVar5 = OBJ_nid2obj(uVar12);
    puVar2 = local_a8;
    *local_a8 = uVar5;
    uVar13 = uVar6;
    if ((0 < (int)local_b8) && (iVar9 = RAND_bytes(local_98,local_b8 & 0xffffffff), iVar9 < 1))
    goto LAB_14f76fd91;
    local_c0 = 1;
    local_c8 = (undefined1 *)0x0;
    iVar9 = EVP_CipherInit_ex(local_b0,lVar7,0,0);
    if ((iVar9 < 1) || (iVar9 = EVP_CIPHER_CTX_rand_key(local_b0,local_88), iVar9 < 1))
    goto LAB_14f76fd91;
    local_c8 = local_98;
    local_c0 = 1;
    iVar9 = EVP_CipherInit_ex(local_b0,0,0,local_88);
    if (iVar9 < 1) goto LAB_14f76fd91;
    if (0 < (int)local_b8) {
      if (puVar2[1] == 0) {
        lVar7 = ASN1_TYPE_new();
        puVar2[1] = lVar7;
        if (lVar7 == 0) goto LAB_14f76fd91;
      }
      iVar9 = EVP_CIPHER_param_to_asn1(local_b0,puVar2[1]);
      if (iVar9 < 0) goto LAB_14f76fd91;
    }
    iVar10 = 0;
    iVar9 = OPENSSL_sk_num(uVar8);
    if (0 < iVar9) {
      do {
        uVar5 = OPENSSL_sk_value(uVar8,iVar10);
        iVar9 = FUN_14f770bc0(uVar5,local_88,iVar3);
        if (iVar9 < 1) goto LAB_14f76fd91;
        iVar10 = iVar10 + 1;
        iVar9 = OPENSSL_sk_num(uVar8);
      } while (iVar10 < iVar9);
    }
    OPENSSL_cleanse(local_88,(longlong)iVar3);
    if (uVar11 != 0) {
      BIO_push(uVar11,uVar6);
      uVar6 = uVar11;
    }
  }
  if (param_2 == 0) {
    iVar3 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
    uVar11 = uVar6;
    if ((iVar3 == 0x16) && (iVar3 = PKCS7_ctrl(param_1,2,0,0), iVar3 != 0)) {
      uVar8 = BIO_s_null();
      param_2 = BIO_new(uVar8);
    }
    else if ((local_a0 == (int *)0x0) || (*local_a0 < 1)) {
      uVar8 = BIO_s_mem();
      param_2 = BIO_new(uVar8);
      uVar13 = 0;
      if (param_2 == 0) goto LAB_14f76fd91;
      BIO_ctrl(param_2,0x82,0,0);
    }
    else {
      param_2 = BIO_new_mem_buf(*(undefined8 *)(local_a0 + 2));
    }
    uVar13 = 0;
    if (param_2 == 0) goto LAB_14f76fd91;
  }
  if (uVar6 == 0) {
    return param_2;
  }
  BIO_push(uVar6,param_2);
  return uVar6;
}

// PKCS7_dataVerify @ 14f76fdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS7_dataVerify(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                longlong param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f76fe04;
  if (param_4 == 0) {
    ERR_put_error(0x21,0x6b,0x8f,"crypto\\pkcs7\\pk7_doit.c",0x37b,0x14f76fe04);
    return 0;
  }
  if (*(longlong *)(param_4 + 0x20) != 0) {
    iVar2 = OBJ_obj2nid(*(undefined8 *)(param_4 + 0x18));
    if ((iVar2 == 0x16) || (iVar2 = OBJ_obj2nid(*(undefined8 *)(param_4 + 0x18)), iVar2 == 0x18)) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_4 + 0x20) + 0x10);
      lVar3 = X509_find_by_issuer_and_serial
                        (uVar1,**(undefined8 **)(param_5 + 8),(*(undefined8 **)(param_5 + 8))[1]);
      if (lVar3 == 0) {
        uVar5 = 0x394;
        uVar4 = 0x6a;
      }
      else {
        iVar2 = X509_STORE_CTX_init(param_2,param_1,lVar3,uVar1);
        if (iVar2 != 0) {
          X509_STORE_CTX_set_purpose(param_2,4);
          iVar2 = X509_verify_cert(param_2);
          if (iVar2 < 1) {
            ERR_put_error(0x21,0x6b,0xb,"crypto\\pkcs7\\pk7_doit.c",0x3a0);
            X509_STORE_CTX_cleanup(param_2);
            return 0;
          }
          X509_STORE_CTX_cleanup(param_2);
          uVar6 = PKCS7_signatureVerify(param_3,param_4,param_5,lVar3);
          return uVar6;
        }
        uVar5 = 0x39a;
        uVar4 = 0xb;
      }
    }
    else {
      uVar5 = 0x389;
      uVar4 = 0x72;
    }
    ERR_put_error(0x21,0x6b,uVar4,"crypto\\pkcs7\\pk7_doit.c",uVar5,uVar6);
    return 0;
  }
  ERR_put_error(0x21,0x6b,0x7a,"crypto\\pkcs7\\pk7_doit.c",0x380,0x14f76fe04);
  return 0;
}

// PKCS7_digest_from_attributes @ 14f76ffb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_digest_from_attributes(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = X509at_get_attr_by_NID(param_1,0x33,0xffffffff);
  uVar2 = X509at_get_attr(param_1,uVar1);
  lVar3 = X509_ATTRIBUTE_get0_type(uVar2,0);
  if (lVar3 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar3 + 8);
}

// FUN_14f770000 @ 14f770000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f770000(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f770015;
  lVar2 = BIO_find_type(param_2,0x208);
  do {
    if (lVar2 == 0) {
      uVar4 = 600;
      uVar3 = 0x6c;
LAB_14f770096:
      ERR_put_error(0x21,0x7f,uVar3,"crypto\\pkcs7\\pk7_doit.c",uVar4,uVar5);
      return 0;
    }
    BIO_ctrl(lVar2,0x78,0,param_1);
    if (*param_1 == 0) {
      uVar4 = 0x25d;
      uVar3 = 0x44;
      goto LAB_14f770096;
    }
    uVar3 = EVP_MD_CTX_md();
    iVar1 = EVP_MD_type(uVar3);
    if (iVar1 == param_3) {
      return lVar2;
    }
    uVar3 = BIO_next(lVar2);
    lVar2 = BIO_find_type(uVar3,0x208);
  } while( true );
}

// PKCS7_get_attribute @ 14f7700f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_get_attribute(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = X509at_get_attr_by_NID(uVar2,param_2,0xffffffff);
  uVar2 = X509at_get_attr(uVar2,uVar1);
  X509_ATTRIBUTE_get0_type(uVar2,0);
  return;
}

// PKCS7_get_issuer_and_serial @ 14f770130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_get_issuer_and_serial(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (((iVar1 == 0x18) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30), lVar2 != 0)) {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (param_2 < iVar1) {
      lVar2 = OPENSSL_sk_value(lVar2,param_2);
      return *(undefined8 *)(lVar2 + 8);
    }
  }
  return 0;
}

// FUN_14f7701a0 @ 14f7701a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7701a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 == 0x15) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (((5 < iVar2 - 0x15U) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
     (*piVar1 == 4)) {
    return *(undefined8 *)(piVar1 + 2);
  }
  return 0;
}

// PKCS7_get_signed_attribute @ 14f770210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_get_signed_attribute(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = X509at_get_attr_by_NID(uVar2,param_2,0xffffffff);
  uVar2 = X509at_get_attr(uVar2,uVar1);
  X509_ATTRIBUTE_get0_type(uVar2,0);
  return;
}

// PKCS7_set_attributes @ 14f770250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_set_attributes(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x30),X509_ATTRIBUTE_free);
  lVar2 = OPENSSL_sk_dup(param_2);
  *(longlong *)(param_1 + 0x30) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_2,iVar4);
      uVar3 = X509_ATTRIBUTE_dup(uVar3);
      lVar2 = OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x30),iVar4,uVar3);
      if (lVar2 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar4 < iVar1);
  }
  return 1;
}

// PKCS7_set_signed_attributes @ 14f770310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_set_signed_attributes(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x18),X509_ATTRIBUTE_free);
  lVar2 = OPENSSL_sk_dup(param_2);
  *(longlong *)(param_1 + 0x18) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_2,iVar4);
      uVar3 = X509_ATTRIBUTE_dup(uVar3);
      lVar2 = OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x18),iVar4,uVar3);
      if (lVar2 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar4 < iVar1);
  }
  return 1;
}

// PKCS7_signatureVerify @ 14f7703d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
PKCS7_signatureVerify(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  uint local_a8 [2];
  longlong local_a0;
  undefined8 local_98 [2];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f7703e3;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar7 = 0;
  lVar4 = EVP_MD_CTX_new();
  if (lVar4 == 0) {
    local_b8 = 0x3b8;
    uVar8 = 0x41;
  }
  else {
    iVar2 = OBJ_obj2nid(*(undefined8 *)(param_2 + 0x18));
    if ((iVar2 == 0x16) || (iVar2 = OBJ_obj2nid(*(undefined8 *)(param_2 + 0x18)), iVar2 == 0x18)) {
      iVar2 = OBJ_obj2nid(**(undefined8 **)(param_3 + 0x10));
      while ((param_1 != 0 && (lVar5 = BIO_find_type(param_1,0x208), lVar5 != 0))) {
        BIO_ctrl(lVar5,0x78,0,&local_a0);
        if (local_a0 == 0) {
          local_b8 = 0x3cd;
          uVar8 = 0x44;
          goto LAB_14f7704ec;
        }
        uVar8 = EVP_MD_CTX_md();
        iVar3 = EVP_MD_type(uVar8);
        if (iVar3 == iVar2) {
LAB_14f77052a:
          iVar3 = EVP_MD_CTX_copy_ex(lVar4,local_a0);
          if (iVar3 == 0) goto LAB_14f770500;
          lVar5 = *(longlong *)(param_3 + 0x18);
          if ((lVar5 == 0) || (iVar3 = OPENSSL_sk_num(lVar5), iVar3 == 0)) {
LAB_14f770647:
            puVar1 = *(undefined4 **)(param_3 + 0x28);
            lVar5 = X509_get0_pubkey(param_4);
            if (lVar5 != 0) {
              iVar2 = EVP_VerifyFinal(lVar4,*(undefined8 *)(puVar1 + 2),*puVar1,lVar5);
              if (iVar2 < 1) {
                local_b8 = 0x411;
                ERR_put_error(0x21,0x71,0x69,"crypto\\pkcs7\\pk7_doit.c");
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = 1;
              }
              goto LAB_14f770500;
            }
          }
          else {
            local_98[0] = 0;
            iVar3 = EVP_DigestFinal_ex(lVar4,local_88,local_a8);
            if (iVar3 == 0) goto LAB_14f770500;
            puVar6 = (uint *)PKCS7_digest_from_attributes(lVar5);
            if (puVar6 == (uint *)0x0) {
              local_b8 = 0x3ee;
              goto LAB_14f7704e6;
            }
            if ((*puVar6 == local_a8[0]) &&
               (iVar3 = memcmp(*(void **)(puVar6 + 2),local_88,(ulonglong)local_a8[0]), iVar3 == 0))
            {
              uVar7 = OBJ_nid2sn(iVar2);
              uVar7 = EVP_get_digestbyname(uVar7);
              iVar2 = EVP_DigestInit_ex(lVar4,uVar7,0);
              uVar7 = 0;
              if (iVar2 != 0) {
                uVar8 = PKCS7_ATTR_VERIFY_it();
                iVar2 = ASN1_item_i2d(lVar5,local_98,uVar8);
                if (iVar2 < 1) {
                  local_b8 = 0x3fe;
                  ERR_put_error(0x21,0x71,0xd,"crypto\\pkcs7\\pk7_doit.c");
                  uVar7 = 0xffffffff;
                }
                else {
                  iVar2 = EVP_DigestUpdate(lVar4,local_98[0],(longlong)iVar2);
                  if (iVar2 != 0) {
                    CRYPTO_free(local_98[0],"crypto\\pkcs7\\pk7_doit.c",0x405);
                    goto LAB_14f770647;
                  }
                }
              }
              goto LAB_14f770500;
            }
            local_b8 = 0x3f3;
            ERR_put_error(0x21,0x71,0x65,"crypto\\pkcs7\\pk7_doit.c");
          }
          uVar7 = 0xffffffff;
          goto LAB_14f770500;
        }
        uVar8 = EVP_MD_CTX_md(local_a0);
        iVar3 = EVP_MD_pkey_type(uVar8);
        if (iVar3 == iVar2) goto LAB_14f77052a;
        param_1 = BIO_next(lVar5);
      }
      local_b8 = 0x3c8;
LAB_14f7704e6:
      uVar8 = 0x6c;
    }
    else {
      local_b8 = 0x3bd;
      uVar8 = 0x72;
    }
  }
LAB_14f7704ec:
  ERR_put_error(0x21,0x71,uVar8,"crypto\\pkcs7\\pk7_doit.c");
LAB_14f770500:
  EVP_MD_CTX_free(lVar4);
  return uVar7;
}

// FUN_14f7706f0 @ 14f7706f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7706f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  return 5 < iVar1 - 0x15U;
}

// FUN_14f770720 @ 14f770720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f770720(longlong *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar6 = 0;
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      do {
        uVar3 = OPENSSL_sk_value(*param_1,iVar6);
        uVar4 = X509_ATTRIBUTE_get0_object(uVar3);
        iVar1 = OBJ_obj2nid(uVar4);
        if (iVar1 == param_2) {
          X509_ATTRIBUTE_free(uVar3);
          lVar2 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
          if (lVar2 == 0) {
            return 0;
          }
          lVar5 = OPENSSL_sk_set(*param_1,iVar6,lVar2);
          if (lVar5 != 0) {
            return 1;
          }
          X509_ATTRIBUTE_free(lVar2);
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(*param_1);
      } while (iVar6 < iVar1);
    }
  }
  lVar2 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = OPENSSL_sk_push(*param_1,lVar2);
  if (iVar1 != 0) {
    return 1;
  }
  X509_ATTRIBUTE_free(lVar2);
  return 0;
}

// FUN_14f770840 @ 14f770840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14f770840(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68 [4];
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14f770855;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = X509at_get_attr_by_NID(uVar3,0x34);
  uVar3 = X509at_get_attr(uVar3,uVar1);
  lVar4 = X509_ATTRIBUTE_get0_type(uVar3,0);
  if ((lVar4 == 0) && (iVar2 = PKCS7_add0_attrib_signing_time(param_1,0), iVar2 == 0)) {
    local_78 = 0x26f;
  }
  else {
    iVar2 = EVP_DigestFinal_ex(param_2,local_58,local_68);
    if (iVar2 == 0) {
      local_78 = 0x276;
      ERR_put_error(0x21,0x88,6,"crypto\\pkcs7\\pk7_doit.c");
      return false;
    }
    iVar2 = PKCS7_add1_attrib_digest(param_1,local_58,local_68[0]);
    if (iVar2 != 0) {
      iVar2 = PKCS7_SIGNER_INFO_sign(param_1);
      return iVar2 != 0;
    }
    local_78 = 0x27a;
  }
  ERR_put_error(0x21,0x88,0x41,"crypto\\pkcs7\\pk7_doit.c");
  return false;
}

// FUN_14f770970 @ 14f770970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770970(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = X509at_get_attr_by_NID(param_1,param_2,0xffffffff);
  uVar2 = X509at_get_attr(param_1,uVar1);
  X509_ATTRIBUTE_get0_type(uVar2,0);
  return;
}

// FUN_14f7709b0 @ 14f7709b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7709b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = X509_get_issuer_name(param_2);
  iVar2 = X509_NAME_cmp(**(undefined8 **)(param_1 + 8),uVar3);
  if (iVar2 == 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar3 = X509_get_serialNumber(param_2);
    ASN1_INTEGER_cmp(uVar3,*(undefined8 *)(lVar1 + 8));
  }
  return;
}

// FUN_14f770a10 @ 14f770a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f770a10(longlong *param_1,int *param_2,longlong param_3,undefined8 param_4,
                 longlong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffffc8;
  undefined8 uVar7;
  int local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f770a2e;
  lVar5 = 0;
  iVar3 = -1;
  lVar4 = EVP_PKEY_CTX_new(param_4,0);
  if (lVar4 == 0) {
    return -1;
  }
  iVar1 = EVP_PKEY_decrypt_init(lVar4);
  iVar2 = -1;
  if (0 < iVar1) {
    iVar2 = EVP_PKEY_CTX_ctrl(lVar4,0xffffffff,0x200,4,
                              in_stack_ffffffffffffffc8 & 0xffffffff00000000,param_3);
    if (iVar2 < 1) {
      uVar7 = 0x9e;
      uVar6 = 0x98;
      iVar3 = -1;
    }
    else {
      iVar1 = EVP_PKEY_decrypt(lVar4,0,&local_28,*(undefined8 *)(*(int **)(param_3 + 0x18) + 2),
                               (longlong)**(int **)(param_3 + 0x18));
      iVar2 = iVar3;
      if (iVar1 < 1) goto LAB_14f770b78;
      lVar5 = CRYPTO_malloc(CONCAT44(uStack_24,local_28),"crypto\\pkcs7\\pk7_doit.c",0xa6);
      if (lVar5 == 0) {
        uVar7 = 0xa9;
        uVar6 = 0x41;
      }
      else {
        iVar3 = EVP_PKEY_decrypt(lVar4,lVar5,&local_28,
                                 *(undefined8 *)(*(int **)(param_3 + 0x18) + 2),
                                 (longlong)**(int **)(param_3 + 0x18));
        if (((0 < iVar3) && (CONCAT44(uStack_24,local_28) != 0)) &&
           ((param_5 == 0 || (CONCAT44(uStack_24,local_28) == param_5)))) {
          iVar2 = 1;
          CRYPTO_clear_free(*param_1,(longlong)*param_2,"crypto\\pkcs7\\pk7_doit.c",0xb8);
          *param_1 = lVar5;
          *param_2 = local_28;
          goto LAB_14f770b78;
        }
        iVar3 = 0;
        uVar7 = 0xb2;
        uVar6 = 6;
      }
    }
    ERR_put_error(0x21,0x85,uVar6,"crypto\\pkcs7\\pk7_doit.c",uVar7);
    iVar2 = iVar3;
  }
LAB_14f770b78:
  EVP_PKEY_CTX_free(lVar4);
  if (iVar2 == 0) {
    CRYPTO_free(lVar5,"crypto\\pkcs7\\pk7_doit.c",0xbf);
  }
  return iVar2;
}

// FUN_14f770bc0 @ 14f770bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f770bc0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  ulonglong in_stack_ffffffffffffffd8;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar5 = (longlong)param_3;
  lVar3 = 0;
  lVar2 = X509_get0_pubkey(*(undefined8 *)(param_1 + 0x20));
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar2 = EVP_PKEY_CTX_new(lVar2,0);
    lVar4 = 0;
    if (lVar2 != 0) {
      iVar1 = EVP_PKEY_encrypt_init(lVar2);
      lVar4 = lVar3;
      if (0 < iVar1) {
        iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x100,3,
                                  in_stack_ffffffffffffffd8 & 0xffffffff00000000,param_1);
        lVar3 = 0;
        if (iVar1 < 1) {
          ERR_put_error(0x21,0x84,0x98,"crypto\\pkcs7\\pk7_doit.c",0x6e);
        }
        else {
          lVar6 = lVar5;
          iVar1 = EVP_PKEY_encrypt(lVar2,0,&local_res8,param_2,lVar5);
          uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
          if (0 < iVar1) {
            lVar3 = CRYPTO_malloc(CONCAT44(uStackX_c,local_res8),"crypto\\pkcs7\\pk7_doit.c",0x75);
            lVar4 = 0;
            if (lVar3 == 0) {
              ERR_put_error(0x21,0x84,0x41,"crypto\\pkcs7\\pk7_doit.c",CONCAT44(uVar7,0x78));
            }
            else {
              iVar1 = EVP_PKEY_encrypt(lVar2,lVar3,&local_res8,param_2,lVar5);
              if (0 < iVar1) {
                ASN1_STRING_set0(*(undefined8 *)(param_1 + 0x18),lVar3,local_res8);
                lVar3 = 0;
                lVar4 = 1;
              }
            }
          }
        }
      }
      EVP_PKEY_CTX_free(lVar2);
      CRYPTO_free(lVar3,"crypto\\pkcs7\\pk7_doit.c",0x86);
    }
  }
  return lVar4;
}

// FUN_14f770d40 @ 14f770d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770d40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f770d60 @ 14f770d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770d60(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f770d80 @ 14f770d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770d80(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f770da0 @ 14f770da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770da0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f770dc0 @ 14f770dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770dc0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f770de0 @ 14f770de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770de0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f770e00 @ 14f770e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770e00(void)

{
  OPENSSL_sk_dup();
  return;
}

// FUN_14f770e20 @ 14f770e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770e20(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f770e40 @ 14f770e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770e40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f770e60 @ 14f770e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770e60(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f770e80 @ 14f770e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770e80(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f770ea0 @ 14f770ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770ea0(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f770ec0 @ 14f770ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f770ec0(void)

{
  OPENSSL_sk_value();
  return;
}

