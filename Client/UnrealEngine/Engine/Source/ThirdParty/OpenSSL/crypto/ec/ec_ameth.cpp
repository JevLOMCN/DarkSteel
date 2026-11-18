// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 33

// FUN_14f74af80 @ 14f74af80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74af80(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f74af8c;
  lVar1 = d2i_ECParameters(0);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0xd4,0x10,"crypto\\ec\\ec_ameth.c",0x1ac,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,0x198,lVar1);
  return 1;
}

// FUN_14f74aff0 @ 14f74aff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74aff0(longlong param_1)

{
  i2d_ECParameters(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74b010 @ 14f74b010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74b010(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f74be00(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}

// FUN_14f74b040 @ 14f74b040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74b040(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f74be00(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}

// FUN_14f74b070 @ 14f74b070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74b070(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f74be00(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}

// FUN_14f74b0a0 @ 14f74b0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74b0a0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f74b0ac;
  lVar1 = d2i_ECPrivateKey(0);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0xde,0x8e,"crypto\\ec\\ec_ameth.c",0x1d0,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,0x198,lVar1);
  return 1;
}

// FUN_14f74b110 @ 14f74b110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74b110(longlong param_1)

{
  i2d_ECPrivateKey(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74b130 @ 14f74b130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74b130(undefined8 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [2];
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x14f74b145;
  switch(param_2) {
  case 1:
    if (param_3 == 0) {
      PKCS7_SIGNER_INFO_get0_algs(param_4,0,&local_18,&local_10);
      if (((local_18 != (longlong *)0x0) && (*local_18 != 0)) && (iVar1 = OBJ_obj2nid(), iVar1 != 0)
         ) {
        uVar2 = EVP_PKEY_id(param_1);
        iVar1 = OBJ_find_sigid_by_algs(local_res10,iVar1,uVar2);
        if (iVar1 != 0) {
          uVar3 = OBJ_nid2obj(local_res10[0]);
          X509_ALGOR_set0(local_10,uVar3,0xffffffff,0);
          return 1;
        }
      }
      return 0xffffffff;
    }
    break;
  default:
    return 0xfffffffe;
  case 3:
    iVar1 = EVP_PKEY_id(param_1);
    uVar2 = 0x2a0;
    if (iVar1 == 0x494) {
      uVar2 = 0x477;
    }
    *param_4 = uVar2;
    return 1;
  case 5:
    if (param_3 == 0) {
      CMS_SignerInfo_get0_algs(param_4,0,0,&local_10,&local_18);
      if (local_10 == (longlong *)0x0) {
        return 0xffffffff;
      }
      if (*local_10 == 0) {
        return 0xffffffff;
      }
      iVar1 = OBJ_obj2nid();
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      uVar2 = EVP_PKEY_id(param_1);
      iVar1 = OBJ_find_sigid_by_algs(local_res10,iVar1,uVar2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      uVar3 = OBJ_nid2obj(local_res10[0]);
      X509_ALGOR_set0(local_18,uVar3,0xffffffff,0);
      return 1;
    }
    break;
  case 7:
    if (param_3 == 1) {
      uVar3 = FUN_14f74c050(param_4);
      return uVar3;
    }
    if (param_3 != 0) {
      return 0xfffffffe;
    }
    uVar3 = FUN_14f74c150(param_4);
    return uVar3;
  case 8:
    *param_4 = 1;
    break;
  case 9:
    uVar3 = EVP_PKEY_get0_EC_KEY(param_1);
    uVar3 = EC_KEY_oct2key(uVar3,param_4,(longlong)param_3,0);
    return uVar3;
  case 10:
    uVar3 = EVP_PKEY_get0_EC_KEY(param_1);
    uVar3 = EC_KEY_key2buf(uVar3,4,param_4);
    return uVar3;
  }
  return 1;
}

// FUN_14f74b3c0 @ 14f74b3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74b3c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) == 0) {
    ERR_put_error(0x10,0x111,0x7d,"crypto\\ec\\ec_ameth.c",0x228);
    return 0;
  }
  uVar1 = EC_KEY_check_key();
  return uVar1;
}

// FUN_14f74b410 @ 14f74b410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74b410(longlong param_1)

{
  EC_KEY_check_key(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74b430 @ 14f74b430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74b430(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0x112,0x7c,"crypto\\ec\\ec_ameth.c",0x245);
    return 0;
  }
  uVar2 = EC_GROUP_check(lVar1,0);
  return uVar2;
}

// FUN_14f74b490 @ 14f74b490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74b490(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x14f74b49f;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar2 = 0;
  local_res18 = 0;
  iVar1 = FUN_14f74c9c0(local_res10,&local_res18,uVar3);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xd8,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar4,0x54),uVar5);
    return 0;
  }
  iVar1 = i2o_ECPublicKey(uVar3,0);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (0 < iVar1) {
    lVar2 = CRYPTO_malloc((longlong)iVar1,"crypto\\ec\\ec_ameth.c",0x5a);
    if (lVar2 != 0) {
      local_res20 = lVar2;
      iVar1 = i2o_ECPublicKey(uVar3,&local_res20);
      if (0 < iVar1) {
        uVar3 = OBJ_nid2obj(0x198);
        iVar1 = X509_PUBKEY_set0_param
                          (param_1,uVar3,local_res10[0],local_res18,lVar2,CONCAT44(uVar4,iVar1));
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  if (local_res10[0] == 6) {
    ASN1_OBJECT_free();
  }
  else {
    ASN1_STRING_free(local_res18);
  }
  CRYPTO_free(lVar2,"crypto\\ec\\ec_ameth.c",0x69);
  return 0;
}

// FUN_14f74b5b0 @ 14f74b5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14f74b5b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uVar3;
  longlong local_28 [3];
  undefined8 local_10;
  
  local_10 = 0x14f74b5bc;
  local_28[1] = 0;
  local_28[0] = 0;
  iVar1 = X509_PUBKEY_get0_param(0,local_28 + 1,local_res20,local_28 + 2,param_2);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    X509_ALGOR_get0(0,local_res18,&local_10,local_28[2]);
    local_28[0] = FUN_14f74caf0(local_res18[0],local_10);
    if (local_28[0] != 0) {
      lVar2 = o2i_ECPublicKey(local_28,local_28 + 1,local_res20[0]);
      if (lVar2 == 0) {
        ERR_put_error(0x10,0xd7,0x8e,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar3,0xae));
        EC_KEY_free(local_28[0]);
        return 0;
      }
      EVP_PKEY_assign(param_1,0x198,local_28[0]);
      return 1;
    }
    ERR_put_error(0x10,0xd7,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar3,0xa8));
  }
  return 0;
}

// FUN_14f74b6c0 @ 14f74b6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f74b6c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = EC_KEY_get0_group(*(undefined8 *)(param_2 + 0x28));
  lVar4 = EC_KEY_get0_public_key(*(undefined8 *)(param_1 + 0x28));
  lVar5 = EC_KEY_get0_public_key(*(undefined8 *)(param_2 + 0x28));
  if (((lVar3 != 0) && (lVar4 != 0)) && (lVar5 != 0)) {
    iVar1 = EC_POINT_cmp(lVar3,lVar4,lVar5,0);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = 0xfffffffe;
    if (iVar1 == 1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffffe;
}

// FUN_14f74b770 @ 14f74b770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14f74b770(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 uVar4;
  undefined4 uVar5;
  longlong local_28 [3];
  undefined8 local_10;
  
  local_10 = 0x14f74b77c;
  local_28[1] = 0;
  local_28[0] = 0;
  iVar1 = PKCS8_pkey_get0(0,local_28 + 1,local_res20,local_28 + 2,param_2);
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    X509_ALGOR_get0(0,local_res18,&local_10,local_28[2]);
    local_28[0] = FUN_14f74caf0(local_res18[0],local_10);
    if (local_28[0] == 0) {
      uVar3 = 0x10;
      uVar4 = CONCAT44(uVar5,0xe5);
    }
    else {
      lVar2 = d2i_ECPrivateKey(local_28,local_28 + 1,local_res20[0]);
      if (lVar2 != 0) {
        EVP_PKEY_assign(param_1,0x198,local_28[0]);
        return 1;
      }
      uVar4 = CONCAT44(uVar5,0xdd);
      uVar3 = 0x8e;
    }
    ERR_put_error(0x10,0xd5,uVar3,"crypto\\ec\\ec_ameth.c",uVar4);
    EC_KEY_free(local_28[0]);
  }
  return 0;
}

// FUN_14f74b870 @ 14f74b870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74b870(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  local_58 = puVar1[2];
  uStack_50 = puVar1[3];
  local_48 = puVar1[4];
  uStack_40 = puVar1[5];
  local_38 = *(undefined4 *)(puVar1 + 6);
  uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uStack_30 = *(undefined4 *)(puVar1 + 7);
  uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x3c);
  local_28 = *(undefined4 *)(puVar1 + 8);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x44);
  uStack_20 = puVar1[9];
  lVar5 = EC_KEY_get0_group(&local_68);
  if (lVar5 == 0) {
    uVar10 = CONCAT44(uVar9,0x1f);
    uVar7 = 0x7c;
  }
  else {
    iVar2 = EC_GROUP_get_asn1_flag(lVar5);
    if ((iVar2 == 0) || (iVar2 = EC_GROUP_get_curve_name(lVar5), iVar2 == 0)) {
      piVar6 = (int *)ASN1_STRING_new();
      if (piVar6 == (int *)0x0) goto LAB_14f74baed;
      iVar2 = i2d_ECParameters(&local_68,piVar6 + 2);
      *piVar6 = iVar2;
      if (0 < iVar2) {
        uVar8 = 0x10;
        goto LAB_14f74b96b;
      }
      ASN1_STRING_free(piVar6);
      uVar10 = CONCAT44(uVar9,0x42);
      uVar7 = 0x10;
    }
    else {
      piVar6 = (int *)OBJ_nid2obj(iVar2);
      if ((piVar6 != (int *)0x0) && (lVar5 = OBJ_length(piVar6), lVar5 != 0)) {
        uVar8 = 6;
LAB_14f74b96b:
        uVar3 = EC_KEY_get_enc_flags(&local_68);
        EC_KEY_set_enc_flags(&local_68,uVar3 | 1);
        iVar2 = i2d_ECPrivateKey(&local_68,0);
        if (iVar2 == 0) {
          ERR_put_error(0x10,0xd6,0x10,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar9,0x103));
          return 0;
        }
        lVar5 = CRYPTO_malloc((longlong)iVar2,"crypto\\ec\\ec_ameth.c",0x106);
        if (lVar5 == 0) {
          uVar7 = CONCAT44(uVar9,0x108);
          uVar9 = 0x41;
        }
        else {
          local_res10 = lVar5;
          iVar4 = i2d_ECPrivateKey(&local_68,&local_res10);
          if (iVar4 != 0) {
            uVar7 = OBJ_nid2obj(0x198);
            iVar2 = PKCS8_pkey_set0(param_1,uVar7,0,uVar8,piVar6,lVar5,iVar2);
            if (iVar2 == 0) {
              CRYPTO_free(lVar5,"crypto\\ec\\ec_ameth.c",0x114);
              return 0;
            }
            return 1;
          }
          CRYPTO_free(lVar5,"crypto\\ec\\ec_ameth.c",0x10d);
          uVar7 = CONCAT44(uVar9,0x10e);
          uVar9 = 0x10;
        }
        ERR_put_error(0x10,0xd6,uVar9,"crypto\\ec\\ec_ameth.c",uVar7);
        return 0;
      }
      ASN1_OBJECT_free(piVar6);
      uVar7 = 0xa7;
      uVar10 = CONCAT44(uVar9,0x2a);
    }
  }
  ERR_put_error(0x10,0xdf,uVar7,"crypto\\ec\\ec_ameth.c",uVar10);
  uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
LAB_14f74baed:
  ERR_put_error(0x10,0xd6,0x8e,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar9,0xf4));
  return 0;
}

// FUN_14f74bb30 @ 14f74bb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74bb30(longlong param_1)

{
  ECDSA_size(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74bb50 @ 14f74bb50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74bb50(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = EC_KEY_get0_group(*(undefined8 *)(param_1 + 0x28));
  EC_GROUP_order_bits(uVar1);
  return;
}

// FUN_14f74bb80 @ 14f74bb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f74bb80(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EC_KEY_get0_group(*(undefined8 *)(param_1 + 0x28));
  iVar1 = EC_GROUP_order_bits(uVar2);
  if (0x1ff < iVar1) {
    return 0x100;
  }
  if (0x17f < iVar1) {
    return 0xc0;
  }
  if (0xff < iVar1) {
    return 0x80;
  }
  if (0xdf < iVar1) {
    return 0x70;
  }
  if (0x9f < iVar1) {
    return 0x50;
  }
  return iVar1 / 2;
}

// FUN_14f74bc10 @ 14f74bc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74bc10(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = EC_KEY_get0_group();
    if (lVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f74bc50 @ 14f74bc50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74bc50(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = EC_KEY_get0_group(*(undefined8 *)(param_2 + 0x28));
  lVar3 = EC_GROUP_dup(uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar4 = EC_KEY_new();
    *(longlong *)(param_1 + 0x28) = lVar4;
    if (lVar4 == 0) goto LAB_14f74bca4;
  }
  iVar1 = EC_KEY_set_group(*(undefined8 *)(param_1 + 0x28),lVar3);
  if (iVar1 != 0) {
    EC_GROUP_free(lVar3);
    return 1;
  }
LAB_14f74bca4:
  EC_GROUP_free(lVar3);
  return 0;
}

// FUN_14f74bce0 @ 14f74bce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f74bce0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = EC_KEY_get0_group(*(undefined8 *)(param_1 + 0x28));
  lVar3 = EC_KEY_get0_group(*(undefined8 *)(param_2 + 0x28));
  if ((lVar2 != 0) && (lVar3 != 0)) {
    iVar1 = EC_GROUP_cmp(lVar2,lVar3,0);
    return (ulonglong)(iVar1 == 0);
  }
  return 0xfffffffe;
}

// FUN_14f74bd50 @ 14f74bd50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74bd50(longlong param_1)

{
  EC_KEY_free(*(undefined8 *)(param_1 + 0x28));
  return;
}

// ECParameters_print @ 14f74bd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ECParameters_print(undefined8 param_1,undefined8 param_2)

{
  FUN_14f74be00(param_1,param_2,4,2);
  return;
}

// EC_KEY_print @ 14f74bda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_KEY_print(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = EC_KEY_get0_private_key(param_2);
  FUN_14f74be00(param_1,param_2,param_3,lVar1 == 0);
  return;
}

// FUN_14f74be00 @ 14f74be00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f74be00(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f74be22;
  lVar8 = 0;
  local_res10 = 0;
  local_38 = 0;
  if ((param_2 == 0) || (lVar3 = EC_KEY_get0_group(param_2), lVar3 == 0)) {
    ERR_put_error(0x10,0xdd,0x43,"crypto\\ec\\ec_ameth.c",0x170);
    return 0;
  }
  lVar5 = lVar8;
  lVar6 = lVar8;
  if ((param_4 == 2) || (lVar4 = EC_KEY_get0_public_key(param_2), lVar5 = 0, lVar4 == 0)) {
LAB_14f74be98:
    if (param_4 == 0) {
      lVar4 = EC_KEY_get0_private_key(param_2);
      if ((lVar4 != 0) && (lVar6 = EC_KEY_priv2buf(param_2,&local_res10), lVar6 == 0))
      goto LAB_14f74bfac;
      pcVar7 = "Private-Key";
    }
    else {
      pcVar7 = "Public-Key";
      if (param_4 != 1) {
        pcVar7 = "ECDSA-Parameters";
      }
    }
    iVar2 = BIO_indent(param_1,param_3,0x80);
    if (iVar2 != 0) {
      uVar1 = EC_GROUP_order_bits(lVar3);
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar7,uVar1);
      if ((((0 < iVar2) &&
           ((lVar6 == 0 ||
            ((iVar2 = BIO_printf(param_1,"%*spriv:\n",param_3,""), 0 < iVar2 &&
             (iVar2 = ASN1_buf_print(param_1,local_res10,lVar6,param_3 + 4), iVar2 != 0)))))) &&
          ((lVar5 == 0 ||
           ((iVar2 = BIO_printf(param_1,"%*spub:\n",param_3,""), 0 < iVar2 &&
            (iVar2 = ASN1_buf_print(param_1,local_38,lVar5,param_3 + 4), iVar2 != 0)))))) &&
         (iVar2 = ECPKParameters_print(param_1,lVar3,param_3), iVar2 != 0)) {
        lVar8 = 1;
        goto LAB_14f74bfcd;
      }
    }
  }
  else {
    uVar1 = EC_KEY_get_conv_form(param_2);
    lVar5 = EC_KEY_key2buf(param_2,uVar1,&local_38,0);
    if (lVar5 != 0) goto LAB_14f74be98;
  }
LAB_14f74bfac:
  ERR_put_error(0x10,0xdd,0x10,"crypto\\ec\\ec_ameth.c",0x1a0);
LAB_14f74bfcd:
  CRYPTO_clear_free(local_res10,lVar6,"crypto\\ec\\ec_ameth.c",0x1a1);
  CRYPTO_free(local_38,"crypto\\ec\\ec_ameth.c",0x1a2);
  return lVar8;
}

// FUN_14f74c050 @ 14f74c050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74c050(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  lVar5 = 0x14f74c060;
  lVar2 = CMS_RecipientInfo_get0_pkey_ctx();
  if (lVar2 != 0) {
    lVar3 = EVP_PKEY_CTX_get0_peerkey(lVar2);
    if (lVar3 != 0) {
LAB_14f74c0f0:
      iVar1 = FUN_14f74c7c0(lVar2,param_1);
      if (iVar1 == 0) {
        ERR_put_error(0x10,0xee,0x96,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar4,0x331),lVar5);
        return 0;
      }
      return 1;
    }
    lVar5 = lVar3;
    iVar1 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_res10,local_res18,0,0,0);
    uVar4 = (undefined4)((ulonglong)lVar3 >> 0x20);
    if (((iVar1 != 0) && (local_res10 != 0)) && (local_res18[0] != 0)) {
      iVar1 = FUN_14f74c670(lVar2);
      if (iVar1 != 0) goto LAB_14f74c0f0;
      ERR_put_error(0x10,0xee,0x95,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar4,0x32b));
    }
  }
  return 0;
}

// FUN_14f74c150 @ 14f74c150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f74c150(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined8 local_res20;
  undefined4 uVar16;
  ulonglong uVar15;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48 [2];
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)0x0;
  local_res18 = 0;
  lVar5 = CMS_RecipientInfo_get0_pkey_ctx();
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  lVar6 = EVP_PKEY_CTX_get0_pkey(lVar5);
  uVar16 = 0;
  iVar1 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_res20,&local_68,0,0,0);
  puVar13 = puVar12;
  puVar10 = puVar12;
  if (iVar1 != 0) {
    X509_ALGOR_get0(&local_58,0,0,local_res20);
    lVar7 = OBJ_nid2obj(0);
    if (local_58 == lVar7) {
      uVar8 = *(undefined8 *)(lVar6 + 0x28);
      iVar1 = i2o_ECPublicKey(uVar8,0);
      puVar10 = puVar14;
      if (((iVar1 < 1) ||
          (local_res18 = CRYPTO_malloc((longlong)iVar1,"crypto\\ec\\ec_ameth.c",0x35a),
          puVar10 = puVar12, local_res18 == 0)) ||
         (local_50 = local_res18, iVar1 = i2o_ECPublicKey(uVar8,&local_50), puVar10 = puVar14,
         iVar1 < 1)) goto LAB_14f74c524;
      ASN1_STRING_set0(local_68,local_res18,iVar1);
      *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) & 0xfffffff0;
      *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) | 8;
      local_res18 = 0;
      uVar8 = OBJ_nid2obj(0x198);
      X509_ALGOR_set0(local_res20,uVar8,0xffffffff,0);
    }
    uVar15 = CONCAT44(uVar16,0xfffffffe);
    iVar1 = EVP_PKEY_CTX_ctrl(lVar5,0x198,0x400,0x1004,uVar15,0);
    puVar13 = puVar11;
    puVar10 = puVar14;
    if (0 < iVar1) {
      uVar15 = uVar15 & 0xffffffff00000000;
      iVar2 = EVP_PKEY_CTX_ctrl(lVar5,0x198,0x400,0x1006,uVar15,&local_60);
      if (iVar2 != 0) {
        uVar8 = CONCAT44((int)(uVar15 >> 0x20),0xfffffffe);
        iVar2 = EVP_PKEY_CTX_ctrl(lVar5,0x198,0x400,0x1003,uVar8,0);
        if (-1 < iVar2) {
          if (iVar2 == 0) {
            iVar2 = 0x3b2;
          }
          else if (iVar2 == 1) {
            iVar2 = 0x3b3;
          }
          if (iVar1 == 1) {
            uVar15 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),2);
            iVar1 = EVP_PKEY_CTX_ctrl(lVar5,0x198,0x400,0x1004,uVar15,0);
            uVar16 = (undefined4)(uVar15 >> 0x20);
            if (0 < iVar1) {
              if (local_60 == 0) {
                local_60 = EVP_sha1();
                uVar15 = uVar15 & 0xffffffff00000000;
                iVar1 = EVP_PKEY_CTX_ctrl(lVar5,0x198,0x400,0x1005,uVar15,local_60);
                uVar16 = (undefined4)(uVar15 >> 0x20);
                if (iVar1 < 1) goto LAB_14f74c524;
              }
              iVar1 = CMS_RecipientInfo_kari_get0_alg(param_1,&local_res20,local_48);
              if (iVar1 != 0) {
                uVar3 = EVP_MD_type(local_60);
                iVar1 = OBJ_find_sigid_by_algs(local_res10,uVar3,iVar2);
                if (iVar1 != 0) {
                  uVar8 = CMS_RecipientInfo_kari_get0_ctx(param_1);
                  uVar9 = EVP_CIPHER_CTX_cipher(uVar8);
                  uVar3 = EVP_CIPHER_type(uVar9);
                  uVar4 = EVP_CIPHER_CTX_key_length(uVar8);
                  puVar10 = (undefined8 *)X509_ALGOR_new();
                  if (puVar10 != (undefined8 *)0x0) {
                    uVar9 = OBJ_nid2obj(uVar3);
                    *puVar10 = uVar9;
                    lVar6 = ASN1_TYPE_new();
                    puVar10[1] = lVar6;
                    if ((lVar6 != 0) && (iVar1 = EVP_CIPHER_param_to_asn1(uVar8,lVar6), 0 < iVar1))
                    {
                      iVar1 = ASN1_TYPE_get(puVar10[1]);
                      if (iVar1 == 0) {
                        ASN1_TYPE_free(puVar10[1]);
                        puVar10[1] = 0;
                      }
                      uVar8 = CONCAT44(uVar16,uVar4);
                      iVar1 = EVP_PKEY_CTX_ctrl(lVar5,0x198,0x400,0x1007,uVar8,0);
                      uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
                      if (((0 < iVar1) &&
                          (iVar1 = CMS_SharedInfo_encode(&local_res18,puVar10,local_48[0],uVar4),
                          iVar1 != 0)) &&
                         (iVar1 = EVP_PKEY_CTX_ctrl(lVar5,0x198,0x400,0x1009,CONCAT44(uVar16,iVar1),
                                                    local_res18), 0 < iVar1)) {
                        local_res18 = 0;
                        iVar1 = i2d_X509_ALGOR(puVar10,&local_res18);
                        puVar13 = puVar12;
                        if (((local_res18 != 0) && (iVar1 != 0)) &&
                           (lVar5 = ASN1_STRING_new(), puVar13 = puVar11, lVar5 != 0)) {
                          ASN1_STRING_set0(lVar5,local_res18,iVar1);
                          local_res18 = 0;
                          uVar8 = OBJ_nid2obj(local_res10[0]);
                          X509_ALGOR_set0(local_res20,uVar8,0x10,lVar5);
                          puVar13 = (undefined8 *)&DAT_00000001;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14f74c524:
  CRYPTO_free(local_res18,"crypto\\ec\\ec_ameth.c",0x3bf);
  X509_ALGOR_free(puVar10);
  return puVar13;
}

// FUN_14f74c560 @ 14f74c560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f74c560(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int local_res10 [2];
  undefined4 local_res18 [4];
  
  if ((param_2 != 0) && (iVar1 = OBJ_find_sigid_algs(param_2,local_res18,local_res10), iVar1 != 0))
  {
    uVar4 = 0;
    if (local_res10[0] != 0x3b2) {
      if (local_res10[0] != 0x3b3) {
        return false;
      }
      uVar4 = 1;
    }
    iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1003,uVar4,0);
    if ((0 < iVar1) && (iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1004,2,0), 0 < iVar1)) {
      uVar2 = OBJ_nid2sn(local_res18[0]);
      lVar3 = EVP_get_digestbyname(uVar2);
      if (lVar3 != 0) {
        iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1005,0,lVar3);
        return 0 < iVar1;
      }
    }
    return false;
  }
  return false;
}

// FUN_14f74c670 @ 14f74c670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f74c670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res20 [2];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_20 = 0x14f74c688;
  lVar4 = 0;
  lVar7 = 0;
  local_38 = 0;
  lVar6 = 0;
  X509_ALGOR_get0(&local_30,local_res20,&local_28,param_2);
  iVar1 = OBJ_obj2nid(local_30);
  lVar5 = lVar4;
  lVar8 = lVar4;
  if (iVar1 != 0x198) goto LAB_14f74c793;
  lVar5 = lVar6;
  if ((local_res20[0] == -1) || (local_res20[0] == 5)) {
    lVar2 = EVP_PKEY_CTX_get0_pkey(param_1);
    lVar8 = lVar7;
    if (lVar2 == 0) goto LAB_14f74c793;
    uVar3 = EC_KEY_get0_group(*(undefined8 *)(lVar2 + 0x28));
    local_38 = EC_KEY_new();
    lVar8 = lVar4;
    if ((local_38 == 0) || (iVar1 = EC_KEY_set_group(local_38,uVar3), lVar8 = lVar7, iVar1 == 0))
    goto LAB_14f74c793;
  }
  else {
    local_38 = FUN_14f74caf0(local_res20[0],local_28);
    lVar5 = lVar4;
    if (local_38 == 0) goto LAB_14f74c793;
  }
  iVar1 = ASN1_STRING_length(param_3);
  local_20 = ASN1_STRING_get0_data(param_3);
  lVar5 = lVar6;
  lVar8 = lVar4;
  if ((((local_20 != 0) && (iVar1 != 0)) &&
      (lVar4 = o2i_ECPublicKey(&local_38,&local_20,iVar1), lVar8 = lVar7, lVar4 != 0)) &&
     (lVar5 = EVP_PKEY_new(), lVar5 != 0)) {
    EVP_PKEY_set1_EC_KEY(lVar5,local_38);
    iVar1 = EVP_PKEY_derive_set_peer(param_1,lVar5);
    lVar8 = 0;
    if (0 < iVar1) {
      lVar8 = 1;
    }
  }
LAB_14f74c793:
  EC_KEY_free(local_38);
  EVP_PKEY_free(lVar5);
  return lVar8;
}

// FUN_14f74c7c0 @ 14f74c7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74c7c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_20 = 0x14f74c7cf;
  uVar10 = 0;
  uVar9 = 0;
  local_res18 = 0;
  iVar1 = CMS_RecipientInfo_kari_get0_alg(param_2,&local_res20,&local_20);
  if (iVar1 != 0) {
    uVar2 = OBJ_obj2nid(*local_res20);
    iVar1 = FUN_14f74c560(param_1,uVar2);
    if (iVar1 == 0) {
      ERR_put_error(0x10,0xef,0x94,"crypto\\ec\\ec_ameth.c",CONCAT44(uVar3,0x2f0));
    }
    else if (*(int *)local_res20[1] == 0x10) {
      local_28 = *(undefined8 *)(*(longlong *)((int *)local_res20[1] + 2) + 8);
      puVar5 = (undefined8 *)d2i_X509_ALGOR(0,&local_28,**(undefined4 **)(local_res20[1] + 8));
      if ((puVar5 != (undefined8 *)0x0) &&
         (lVar6 = CMS_RecipientInfo_kari_get0_ctx(param_2), lVar6 != 0)) {
        uVar3 = OBJ_obj2nid(*puVar5);
        uVar7 = OBJ_nid2sn(uVar3);
        lVar8 = EVP_get_cipherbyname(uVar7);
        if ((lVar8 != 0) && (uVar4 = EVP_CIPHER_flags(lVar8), (uVar4 & 0xf0007) == 0x10002)) {
          uVar3 = 0;
          iVar1 = EVP_EncryptInit_ex(lVar6,lVar8,0,0,0);
          if ((iVar1 != 0) &&
             (iVar1 = EVP_CIPHER_asn1_to_param(lVar6,puVar5[1]), uVar10 = uVar9, 0 < iVar1)) {
            uVar2 = EVP_CIPHER_CTX_key_length(lVar6);
            uVar9 = CONCAT44(uVar3,uVar2);
            iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1007,uVar9,0);
            uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
            if ((0 < iVar1) &&
               ((iVar1 = CMS_SharedInfo_encode(&local_res18,puVar5,local_20,uVar2), iVar1 != 0 &&
                (iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1009,CONCAT44(uVar3,iVar1),
                                           local_res18), 0 < iVar1)))) {
              local_res18 = 0;
              uVar10 = 1;
            }
          }
        }
      }
      X509_ALGOR_free(puVar5);
      CRYPTO_free(local_res18,"crypto\\ec\\ec_ameth.c",0x317);
      return uVar10;
    }
  }
  return 0;
}

// FUN_14f74c9c0 @ 14f74c9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74c9c0(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f74c9db;
  if ((param_3 == 0) || (lVar2 = EC_KEY_get0_group(param_3), lVar2 == 0)) {
    uVar6 = 0x1f;
    uVar5 = 0x7c;
  }
  else {
    iVar1 = EC_GROUP_get_asn1_flag(lVar2);
    if ((iVar1 == 0) || (iVar1 = EC_GROUP_get_curve_name(lVar2), iVar1 == 0)) {
      piVar4 = (int *)ASN1_STRING_new();
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      iVar1 = i2d_ECParameters(param_3,piVar4 + 2);
      *piVar4 = iVar1;
      if (0 < iVar1) {
        *param_2 = (longlong)piVar4;
        *param_1 = 0x10;
        return 1;
      }
      ASN1_STRING_free(piVar4);
      uVar6 = 0x42;
      uVar5 = 0x10;
    }
    else {
      lVar2 = OBJ_nid2obj(iVar1);
      if ((lVar2 != 0) && (lVar3 = OBJ_length(lVar2), lVar3 != 0)) {
        *param_2 = lVar2;
        *param_1 = 6;
        return 1;
      }
      ASN1_OBJECT_free(lVar2);
      uVar5 = 0xa7;
      uVar6 = 0x2a;
    }
  }
  ERR_put_error(0x10,0xdf,uVar5,"crypto\\ec\\ec_ameth.c",uVar6,uVar7);
  return 0;
}

// FUN_14f74caf0 @ 14f74caf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f74caf0(int param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res18 [2];
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f74cb05;
  lVar3 = 0;
  if (param_1 == 0x10) {
    local_res18[0] = *(undefined8 *)(param_2 + 2);
    lVar2 = d2i_ECParameters(0,local_res18,*param_2);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar5 = 0x78;
LAB_14f74cbb4:
    lVar2 = 0;
    uVar4 = 0x8e;
  }
  else {
    if (param_1 != 6) {
      uVar5 = 0x8d;
      goto LAB_14f74cbb4;
    }
    lVar2 = EC_KEY_new();
    if (lVar2 != 0) {
      uVar5 = OBJ_obj2nid(param_2);
      lVar3 = EC_GROUP_new_by_curve_name(uVar5);
      if (lVar3 != 0) {
        EC_GROUP_set_asn1_flag(lVar3,1);
        iVar1 = EC_KEY_set_group(lVar2,lVar3);
        if (iVar1 != 0) {
          EC_GROUP_free(lVar3);
          return lVar2;
        }
      }
      goto LAB_14f74cbd0;
    }
    uVar5 = 0x82;
    uVar4 = 0x41;
  }
  ERR_put_error(0x10,0xdc,uVar4,"crypto\\ec\\ec_ameth.c",uVar5,uVar6);
LAB_14f74cbd0:
  EC_KEY_free(lVar2);
  EC_GROUP_free(lVar3);
  return 0;
}

