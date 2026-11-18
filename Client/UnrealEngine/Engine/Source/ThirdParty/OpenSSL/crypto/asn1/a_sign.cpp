// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// ASN1_item_sign @ 14f719840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ASN1_item_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar4;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f719860;
  lVar3 = EVP_MD_CTX_new();
  if (lVar3 == 0) {
    ERR_put_error(0xd,0xc3,0x41,"crypto\\asn1\\a_sign.c",CONCAT44(uVar2,0x7d));
    uVar2 = 0;
  }
  else {
    iVar1 = EVP_DigestSignInit(lVar3,0,param_7,0,param_6,uVar4);
    if (iVar1 == 0) {
      EVP_MD_CTX_free(lVar3);
      uVar2 = 0;
    }
    else {
      uVar2 = ASN1_item_sign_ctx(param_1,param_2,param_3,param_4,param_5,lVar3);
      EVP_MD_CTX_free(lVar3);
    }
  }
  return uVar2;
}

// ASN1_item_sign_ctx @ 14f719920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_item_sign_ctx(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,
                            undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 in_stack_ffffffffffffff98;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uStack_30 = 0x14f719947;
  lVar5 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  lVar6 = EVP_MD_CTX_md(param_6);
  uVar7 = EVP_MD_CTX_pkey_ctx(param_6);
  lVar8 = EVP_PKEY_CTX_get0_pkey(uVar7);
  lVar9 = lVar5;
  if (lVar8 == 0) {
    uVar7 = CONCAT44(uVar12,0x9a);
LAB_14f71999c:
    uVar10 = 0xd9;
  }
  else if (*(longlong *)(lVar8 + 0x10) == 0) {
    uVar7 = CONCAT44(uVar12,0x9f);
LAB_14f719ad4:
    uVar10 = 0xc6;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar8 + 0x10) + 0xd0);
    if (pcVar1 == (code *)0x0) {
LAB_14f719a9b:
      if (lVar6 == 0) {
        uVar7 = CONCAT44(uVar12,0xb8);
        goto LAB_14f71999c;
      }
      puVar2 = *(undefined4 **)(lVar8 + 0x10);
      uVar4 = EVP_MD_type(lVar6);
      iVar3 = OBJ_find_sigid_by_algs(local_58,uVar4,*puVar2);
      if (iVar3 == 0) {
        uVar7 = CONCAT44(uVar12,0xbf);
        goto LAB_14f719ad4;
      }
      uVar4 = 5;
      if ((*(byte *)(*(longlong *)(lVar8 + 0x10) + 8) & 4) == 0) {
        uVar4 = 0xffffffff;
      }
      if (param_2 != 0) {
        uVar7 = OBJ_nid2obj(local_58[0]);
        X509_ALGOR_set0(param_2,uVar7,uVar4,0);
      }
      if (param_3 != 0) {
        uVar7 = OBJ_nid2obj(local_58[0]);
        X509_ALGOR_set0(param_3,uVar7,uVar4,0);
      }
    }
    else {
      lVar11 = param_3;
      iVar3 = (*pcVar1)(param_6,param_1,param_5,param_2,param_3,param_4);
      uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
      if (iVar3 == 1) {
        local_48 = (ulonglong)*param_4;
        goto LAB_14f7199b9;
      }
      if (iVar3 < 1) {
        uVar7 = CONCAT44(uVar12,0xaf);
        ERR_put_error(0xd,0xdc,6,"crypto\\asn1\\a_sign.c",uVar7);
        uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
      }
      if (iVar3 < 2) goto LAB_14f7199b9;
      if (iVar3 == 2) goto LAB_14f719a9b;
    }
    iVar3 = ASN1_item_i2d(param_5,&local_40,param_1);
    if (0 < iVar3) {
      local_50 = (longlong)iVar3;
      iVar3 = EVP_PKEY_size(lVar8);
      local_48 = (ulonglong)iVar3;
      local_38 = local_48;
      lVar9 = CRYPTO_malloc(local_48,"crypto\\asn1\\a_sign.c",0xd7);
      lVar5 = local_50;
      if ((local_40 == 0) || (lVar9 == 0)) {
        local_48 = 0;
        ERR_put_error(0xd,0xdc,0x41,"crypto\\asn1\\a_sign.c",CONCAT44(uVar12,0xda));
        lVar5 = local_50;
      }
      else {
        iVar3 = EVP_DigestSign(param_6,lVar9,&local_48,local_40,local_50);
        if (iVar3 == 0) {
          local_48 = 0;
          ERR_put_error(0xd,0xdc,6,"crypto\\asn1\\a_sign.c",0xe0);
        }
        else {
          CRYPTO_free(*(undefined8 *)(param_4 + 2),"crypto\\asn1\\a_sign.c",0xe3);
          param_4[4] = param_4[4] & 0xfffffff8;
          *(longlong *)(param_4 + 2) = lVar9;
          param_4[4] = param_4[4] | 8;
          *param_4 = (int)local_48;
          lVar9 = 0;
        }
      }
      goto LAB_14f7199b9;
    }
    local_48 = 0;
    uVar7 = CONCAT44(uVar12,0xd2);
    uVar10 = 0x44;
  }
  ERR_put_error(0xd,0xdc,uVar10,"crypto\\asn1\\a_sign.c",uVar7);
LAB_14f7199b9:
  CRYPTO_clear_free(local_40,lVar5,"crypto\\asn1\\a_sign.c",0xee);
  CRYPTO_clear_free(lVar9,local_38,"crypto\\asn1\\a_sign.c",0xef);
  return local_48 & 0xffffffff;
}

// ASN1_sign @ 14f719c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_sign(code *param_1,longlong *param_2,longlong *param_3,int *param_4,undefined8 param_5,
             undefined8 param_6,longlong param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int local_58 [2];
  ulonglong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38 [2];
  
  local_38[1] = 0x14f719cb2;
  lVar2 = EVP_MD_CTX_new();
  uVar3 = 0;
  local_58[0] = 0;
  local_40 = 0;
  uVar10 = uVar3;
  uVar8 = uVar3;
  uVar6 = uVar3;
  if (lVar2 == 0) {
    ERR_put_error(0xd,0x80,0x41,"crypto\\asn1\\a_sign.c",0x25);
  }
  else {
    do {
      plVar7 = param_2;
      if ((int)uVar10 != 0) {
        plVar7 = param_3;
      }
      if (plVar7 != (longlong *)0x0) {
        if (*(int *)(param_7 + 4) == 0x71) {
          ASN1_TYPE_free();
          plVar7[1] = 0;
        }
        else if (((int *)plVar7[1] == (int *)0x0) || (*(int *)plVar7[1] != 5)) {
          ASN1_TYPE_free();
          puVar4 = (undefined4 *)ASN1_TYPE_new();
          plVar7[1] = (longlong)puVar4;
          if (puVar4 == (undefined4 *)0x0) goto LAB_14f719de2;
          *puVar4 = 5;
        }
        ASN1_OBJECT_free(*plVar7);
        lVar5 = OBJ_nid2obj(*(undefined4 *)(param_7 + 4));
        *plVar7 = lVar5;
        if (lVar5 == 0) {
          uVar12 = 0x40;
          uVar11 = 0xa2;
          goto LAB_14f719dca;
        }
        if (*(int *)(lVar5 + 0x14) == 0) {
          uVar12 = 0x45;
          uVar11 = 0x9a;
          goto LAB_14f719dca;
        }
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < 2);
    iVar1 = (*param_1)(param_5,0);
    if (iVar1 < 1) {
      uVar12 = 0x4b;
      uVar11 = 0x44;
LAB_14f719dca:
      ERR_put_error(0xd,0x80,uVar11,"crypto\\asn1\\a_sign.c",uVar12);
    }
    else {
      local_48 = (ulonglong)iVar1;
      local_50 = CRYPTO_malloc(local_48,"crypto\\asn1\\a_sign.c",0x4f);
      local_58[0] = EVP_PKEY_size(param_6);
      local_40 = (longlong)local_58[0];
      uVar6 = CRYPTO_malloc(local_40,"crypto\\asn1\\a_sign.c",0x51);
      if ((local_50 == 0) || (uVar6 == 0)) {
        local_58[0] = 0;
        ERR_put_error(0xd,0x80,0x41,"crypto\\asn1\\a_sign.c",0x54);
        uVar3 = local_50;
        uVar8 = local_48;
      }
      else {
        local_38[0] = local_50;
        (*param_1)(param_5,local_38);
        iVar1 = EVP_DigestInit_ex(lVar2,param_7,0);
        uVar8 = local_48;
        uVar3 = local_50;
        if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(lVar2,local_50,local_48), iVar1 == 0)) ||
           (iVar1 = EVP_SignFinal(lVar2,uVar6,local_58,param_6), iVar1 == 0)) {
          local_58[0] = 0;
          ERR_put_error(0xd,0x80,6,"crypto\\asn1\\a_sign.c",0x5f);
        }
        else {
          CRYPTO_free(*(undefined8 *)(param_4 + 2),"crypto\\asn1\\a_sign.c",0x62);
          param_4[4] = param_4[4] & 0xfffffff8;
          *(ulonglong *)(param_4 + 2) = uVar6;
          param_4[4] = param_4[4] | 8;
          *param_4 = local_58[0];
          uVar6 = 0;
        }
      }
    }
  }
LAB_14f719de2:
  EVP_MD_CTX_free(lVar2);
  CRYPTO_clear_free(uVar3,uVar8,"crypto\\asn1\\a_sign.c",0x6e);
  CRYPTO_clear_free(uVar6,local_40,"crypto\\asn1\\a_sign.c",0x6f);
  return local_58[0];
}

