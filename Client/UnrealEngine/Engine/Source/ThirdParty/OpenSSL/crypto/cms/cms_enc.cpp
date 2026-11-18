// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// CMS_EncryptedData_set1_key @ 14f7c3db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CMS_EncryptedData_set1_key(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f7c3dca;
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar5 = 0xc1;
    uVar4 = 0x82;
  }
  else if (param_2 == 0) {
    iVar1 = OBJ_obj2nid(*param_1);
    if (iVar1 == 0x1a) goto LAB_14f7c3e23;
    uVar5 = 0xcd;
    uVar4 = 0x7a;
  }
  else {
    uVar2 = CMS_EncryptedData_it();
    lVar3 = ASN1_item_new(uVar2);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      uVar6 = OBJ_nid2obj(0x1a);
      *param_1 = uVar6;
      *(undefined4 *)param_1[1] = 0;
LAB_14f7c3e23:
      uVar6 = cms_EncryptedContent_init(*(undefined8 *)(param_1[1] + 8),param_2,param_3,param_4);
      return uVar6;
    }
    uVar5 = 199;
    uVar4 = 0x41;
  }
  ERR_put_error(0x2e,0x7b,uVar4,"crypto\\cms\\cms_enc.c",uVar5,uVar6);
  return 0;
}

// cms_EncryptedContent_init @ 14f7c3ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
cms_EncryptedContent_init(undefined8 *param_1,longlong param_2,void *param_3,size_t param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x14f7c3eba;
  param_1[3] = param_2;
  if (param_3 != (void *)0x0) {
    _Dst = (void *)CRYPTO_malloc(param_4,"crypto\\cms\\cms_enc.c",0xb0);
    param_1[4] = _Dst;
    if (_Dst == (void *)0x0) {
      ERR_put_error(0x2e,0xb3,0x41,"crypto\\cms\\cms_enc.c",0xb1,uVar1);
      return 0;
    }
    memcpy(_Dst,param_3,param_4);
  }
  param_1[5] = param_4;
  if (param_2 != 0) {
    uVar1 = OBJ_nid2obj(0x15);
    *param_1 = uVar1;
  }
  return 1;
}

// cms_EncryptedContent_init_bio @ 14f7c3f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong cms_EncryptedContent_init_bio(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar11;
  bool bVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  uint local_60;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 local_30;
  longlong lVar10;
  longlong lVar15;
  
  local_30 = 0x14f7c3f82;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 8);
  lVar10 = 0;
  lVar9 = 0;
  puVar13 = (undefined1 *)0x0;
  local_4c = 0;
  lVar15 = 0;
  lVar14 = 0;
  bVar2 = false;
  bVar12 = false;
  local_50 = (uint)(lVar8 != 0);
  uVar5 = BIO_f_cipher();
  lVar6 = BIO_new(uVar5);
  if (lVar6 == 0) {
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x29);
    ERR_put_error(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
    return 0;
  }
  BIO_ctrl(lVar6,0x81,0,&local_58);
  bVar11 = bVar12;
  if (lVar8 == 0) {
    uVar4 = OBJ_obj2nid(*plVar1);
    uVar5 = OBJ_nid2sn(uVar4);
    lVar7 = EVP_get_cipherbyname(uVar5);
    if (lVar7 != 0) goto LAB_14f7c401a;
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x3a);
    ERR_put_error(0x2e,0x78,0x94,"crypto\\cms\\cms_enc.c");
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
LAB_14f7c401a:
    local_60 = local_50;
    local_68 = (undefined1 *)0x0;
    iVar3 = EVP_CipherInit_ex(local_58,lVar7,0,0);
    if (iVar3 < 1) {
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x41);
      ERR_put_error(0x2e,0x78,0x65,"crypto\\cms\\cms_enc.c");
      lVar9 = lVar10;
      lVar14 = lVar15;
      bVar11 = bVar2;
    }
    else if (lVar8 == 0) {
      iVar3 = EVP_CIPHER_asn1_to_param(local_58,plVar1[1]);
      if (0 < iVar3) goto LAB_14f7c4119;
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x56);
      ERR_put_error(0x2e,0x78,0x66,"crypto\\cms\\cms_enc.c");
    }
    else {
      uVar5 = EVP_CIPHER_CTX_cipher();
      uVar4 = EVP_CIPHER_type(uVar5);
      lVar9 = OBJ_nid2obj(uVar4);
      *plVar1 = lVar9;
      if (lVar9 == 0) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x4a);
        ERR_put_error(0x2e,0x2e,0xc2,"crypto\\cms\\cms_enc.c");
        lVar9 = lVar10;
        lVar14 = lVar15;
        bVar11 = bVar2;
      }
      else {
        iVar3 = EVP_CIPHER_CTX_iv_length(local_58);
        if (0 < iVar3) {
          iVar3 = RAND_bytes(local_48,iVar3);
          lVar9 = lVar10;
          lVar14 = lVar15;
          bVar11 = bVar2;
          if (iVar3 < 1) goto LAB_14f7c431e;
          puVar13 = local_48;
        }
LAB_14f7c4119:
        iVar3 = EVP_CIPHER_CTX_key_length(local_58);
        lVar14 = (longlong)iVar3;
        if ((lVar8 == 0) || (lVar9 = lVar10, *(longlong *)(param_1 + 0x20) == 0)) {
          lVar9 = CRYPTO_malloc(lVar14,"crypto\\cms\\cms_enc.c",0x5c);
          if (lVar9 == 0) {
            local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x5e);
            ERR_put_error(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
            bVar11 = bVar12;
          }
          else {
            iVar3 = EVP_CIPHER_CTX_rand_key(local_58,lVar9);
            bVar11 = bVar12;
            if (0 < iVar3) goto LAB_14f7c41bc;
          }
        }
        else {
LAB_14f7c41bc:
          if (*(longlong *)(param_1 + 0x20) == 0) {
            *(longlong *)(param_1 + 0x20) = lVar9;
            lVar9 = 0;
            *(longlong *)(param_1 + 0x28) = lVar14;
            if (lVar8 == 0) {
              ERR_clear_error();
            }
            else {
              local_4c = 1;
            }
          }
          if ((*(longlong *)(param_1 + 0x28) == lVar14) ||
             (iVar3 = EVP_CIPHER_CTX_set_key_length(local_58,*(undefined4 *)(param_1 + 0x28)),
             0 < iVar3)) {
LAB_14f7c4229:
            local_60 = local_50;
            local_68 = puVar13;
            iVar3 = EVP_CipherInit_ex(local_58,0,0,*(undefined8 *)(param_1 + 0x20));
            bVar12 = bVar2;
            if (iVar3 < 1) {
              local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x88);
              ERR_put_error(0x2e,0x78,0x65,"crypto\\cms\\cms_enc.c");
            }
            else if (lVar8 == 0) {
LAB_14f7c430c:
              bVar12 = true;
            }
            else {
              lVar8 = ASN1_TYPE_new();
              plVar1[1] = lVar8;
              if (lVar8 == 0) {
                local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x8e);
                ERR_put_error(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
              }
              else {
                iVar3 = EVP_CIPHER_param_to_asn1(local_58,lVar8);
                if (0 < iVar3) {
                  if (*(int *)plVar1[1] == -1) {
                    ASN1_TYPE_free();
                    plVar1[1] = 0;
                  }
                  goto LAB_14f7c430c;
                }
                local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x93);
                ERR_put_error(0x2e,0x78,0x66,"crypto\\cms\\cms_enc.c");
              }
            }
          }
          else {
            if ((lVar8 == 0) && (*(int *)(param_1 + 0x30) == 0)) {
              CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                                "crypto\\cms\\cms_enc.c",0x7d);
              *(longlong *)(param_1 + 0x20) = lVar9;
              lVar9 = 0;
              *(longlong *)(param_1 + 0x28) = lVar14;
              ERR_clear_error();
              goto LAB_14f7c4229;
            }
            local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x79);
            ERR_put_error(0x2e,0x78,0x76,"crypto\\cms\\cms_enc.c");
          }
          bVar11 = bVar12;
          if ((local_4c != 0) && (bVar12)) goto LAB_14f7c4340;
        }
      }
    }
  }
LAB_14f7c431e:
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                    "crypto\\cms\\cms_enc.c",0xa0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  bVar12 = bVar11;
LAB_14f7c4340:
  CRYPTO_clear_free(lVar9,lVar14,"crypto\\cms\\cms_enc.c",0xa3);
  if (!bVar12) {
    BIO_free(lVar6);
    return 0;
  }
  return lVar6;
}

// cms_EncryptedData_init_bio @ 14f7c43a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cms_EncryptedData_init_bio(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((*(longlong *)(*(longlong *)(puVar1 + 2) + 0x18) != 0) && (*(longlong *)(puVar1 + 4) != 0)) {
    *puVar1 = 2;
  }
  cms_EncryptedContent_init_bio();
  return;
}

