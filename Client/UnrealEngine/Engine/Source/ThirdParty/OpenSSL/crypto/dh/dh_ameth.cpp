// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 30

// FUN_14f7487a0 @ 14f7487a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7487a0(longlong param_1)

{
  DH_free(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f7487c0 @ 14f7487c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7487c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 *local_18;
  undefined8 local_10;
  
  local_10 = 0x14f7487d5;
  lVar3 = 0;
  iVar1 = X509_PUBKEY_get0_param(0,&local_10,local_res20,&local_20,param_2);
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    X509_ALGOR_get0(0,local_res18,&local_18,local_20);
    if (local_res18[0] == 0x10) {
      local_28 = *(undefined8 *)(local_18 + 2);
      if (*(undefined **)(param_1 + 0x10) == &dhx_asn1_meth) {
        lVar2 = d2i_DHxparams();
      }
      else {
        lVar2 = d2i_DHparams(0,&local_28,*local_18);
      }
      if (lVar2 == 0) {
        uVar6 = CONCAT44(uVar5,0x47);
        uVar5 = 0x68;
      }
      else {
        lVar3 = d2i_ASN1_INTEGER(0,&local_10,local_res20[0]);
        if (lVar3 == 0) {
          uVar6 = CONCAT44(uVar5,0x4c);
          uVar5 = 0x68;
        }
        else {
          lVar4 = ASN1_INTEGER_to_BN(lVar3,0);
          *(longlong *)(lVar2 + 0x20) = lVar4;
          if (lVar4 != 0) {
            ASN1_INTEGER_free(lVar3);
            EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar2);
            return 1;
          }
          uVar6 = CONCAT44(uVar5,0x52);
          uVar5 = 0x6d;
        }
      }
    }
    else {
      uVar6 = CONCAT44(uVar5,0x3e);
      uVar5 = 0x69;
      lVar2 = lVar3;
    }
    ERR_put_error(5,0x6c,uVar5,"crypto\\dh\\dh_ameth.c",uVar6);
    ASN1_INTEGER_free(lVar3);
    DH_free(lVar2);
  }
  return 0;
}

// FUN_14f748930 @ 14f748930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f748930(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14f748948;
  lVar3 = *(longlong *)(param_2 + 0x28);
  local_res10 = 0;
  piVar2 = (int *)ASN1_STRING_new();
  if (piVar2 == (int *)0x0) {
    uVar4 = CONCAT44(uVar5,0x6e);
  }
  else {
    if (*(undefined **)(param_2 + 0x10) == &dhx_asn1_meth) {
      iVar1 = i2d_DHxparams();
    }
    else {
      iVar1 = i2d_DHparams(lVar3,piVar2 + 2);
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      uVar4 = CONCAT44(uVar5,0x73);
    }
    else {
      lVar3 = BN_to_ASN1_INTEGER(*(undefined8 *)(lVar3 + 0x20),0);
      if (lVar3 == 0) goto LAB_14f74898b;
      iVar1 = i2d_ASN1_INTEGER(lVar3,&local_res10);
      ASN1_INTEGER_free(lVar3);
      if (0 < iVar1) {
        uVar6 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
        iVar1 = X509_PUBKEY_set0_param(param_1,uVar6,0x10,piVar2,local_res10,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
        goto LAB_14f74898b;
      }
      uVar4 = CONCAT44(uVar5,0x81);
    }
  }
  ERR_put_error(5,0x6d,0x41,"crypto\\dh\\dh_ameth.c",uVar4,uVar6);
LAB_14f74898b:
  CRYPTO_free(local_res10,"crypto\\dh\\dh_ameth.c",0x8a);
  ASN1_STRING_free(piVar2);
  return 0;
}

// FUN_14f748a70 @ 14f748a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f748a70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined4 *local_10;
  undefined4 uVar7;
  
  local_10 = (undefined4 *)0x14f748a85;
  lVar2 = 0;
  iVar1 = PKCS8_pkey_get0(0,local_18,local_res20,&local_20,param_2);
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  X509_ALGOR_get0(0,local_res18,&local_10,local_20);
  lVar3 = lVar2;
  if ((local_res18[0] == 0x10) &&
     (lVar2 = d2i_ASN1_INTEGER(0,local_18,local_res20[0]), lVar3 = 0, lVar2 != 0)) {
    local_28 = *(undefined8 *)(local_10 + 2);
    if (*(undefined **)(param_1 + 0x10) == &dhx_asn1_meth) {
      lVar3 = d2i_DHxparams();
    }
    else {
      lVar3 = d2i_DHparams(0,&local_28,*local_10);
    }
    if (lVar3 == 0) goto LAB_14f748b91;
    lVar4 = BN_secure_new();
    *(longlong *)(lVar3 + 0x28) = lVar4;
    if ((lVar4 != 0) && (lVar4 = ASN1_INTEGER_to_BN(lVar2,lVar4), lVar4 != 0)) {
      iVar1 = DH_generate_key(lVar3);
      if (iVar1 != 0) {
        EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
        ASN1_STRING_clear_free(lVar2);
        return 1;
      }
      goto LAB_14f748bb3;
    }
    uVar6 = CONCAT44(uVar7,0xb5);
    uVar5 = 0x6a;
  }
  else {
LAB_14f748b91:
    uVar6 = CONCAT44(uVar7,0xc3);
    uVar5 = 0x72;
  }
  ERR_put_error(5,0x6e,uVar5,"crypto\\dh\\dh_ameth.c",uVar6);
LAB_14f748bb3:
  DH_free(lVar3);
  ASN1_STRING_clear_free(lVar2);
  return 0;
}

// FUN_14f748be0 @ 14f748be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f748be0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_res18[0] = 0;
  piVar2 = (int *)ASN1_STRING_new();
  if (piVar2 == (int *)0x0) {
    uVar4 = CONCAT44(uVar5,0xd4);
LAB_14f748c1a:
    uVar5 = 0x41;
  }
  else {
    if (*(undefined **)(param_2 + 0x10) == &dhx_asn1_meth) {
      iVar1 = i2d_DHxparams();
    }
    else {
      iVar1 = i2d_DHparams(*(undefined8 *)(param_2 + 0x28),piVar2 + 2);
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      uVar4 = CONCAT44(uVar5,0xda);
      goto LAB_14f748c1a;
    }
    piVar2[1] = 0x10;
    lVar3 = BN_to_ASN1_INTEGER(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28),0);
    if (lVar3 != 0) {
      uVar5 = i2d_ASN1_INTEGER(lVar3,local_res18);
      ASN1_STRING_clear_free(lVar3);
      uVar4 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
      iVar1 = PKCS8_pkey_set0(param_1,uVar4,0,0x10,piVar2,local_res18[0],uVar5);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_14f748ced;
    }
    uVar4 = CONCAT44(uVar5,0xe3);
    uVar5 = 0x6a;
  }
  ERR_put_error(5,0x6f,uVar5,"crypto\\dh\\dh_ameth.c",uVar4);
LAB_14f748ced:
  CRYPTO_free(local_res18[0],"crypto\\dh\\dh_ameth.c",0xf3);
  ASN1_STRING_free(piVar2);
  ASN1_STRING_clear_free(0);
  return 0;
}

// FUN_14f748d40 @ 14f748d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f748d40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f748d4c;
  if (*(undefined **)(param_1 + 0x10) == &dhx_asn1_meth) {
    lVar1 = d2i_DHxparams(0);
  }
  else {
    lVar1 = d2i_DHparams(0);
  }
  if (lVar1 == 0) {
    ERR_put_error(5,0x6b,5,"crypto\\dh\\dh_ameth.c",0xff,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar1);
  return 1;
}

// FUN_14f748dc0 @ 14f748dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f748dc0(longlong param_1)

{
  if (*(undefined **)(param_1 + 0x10) == &dhx_asn1_meth) {
    i2d_DHxparams();
    return;
  }
  i2d_DHparams(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f748e00 @ 14f748e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f748e00(longlong param_1)

{
  DH_size(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f748e20 @ 14f748e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f748e20(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
  return;
}

// FUN_14f748e50 @ 14f748e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f748e50(longlong param_1)

{
  DH_security_bits(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f748e70 @ 14f748e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f748e70(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if ((iVar1 != 0) ||
     (iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                     *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10)), iVar1 != 0)) {
    return 0;
  }
  if ((*(undefined **)(param_1 + 0x10) == &dhx_asn1_meth) &&
     (iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),
                     *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x40)), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

// FUN_14f748f10 @ 14f748f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f748f10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = DH_new();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_14f749fd0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                *(undefined **)(param_2 + 0x10) == &dhx_asn1_meth);
  return;
}

// FUN_14f748fb0 @ 14f748fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f748fb0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_14f748e70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20));
  return (ulonglong)(iVar1 == 0);
}

// FUN_14f749010 @ 14f749010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f749010(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f749be0(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}

// FUN_14f749040 @ 14f749040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f749040(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f749be0(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}

// FUN_14f749070 @ 14f749070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f749070(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f749be0(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}

// FUN_14f7490a0 @ 14f7490a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7490a0(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 7) {
    if (param_3 == 1) {
      uVar1 = FUN_14f749240(param_4);
      return uVar1;
    }
    if (param_3 == 0) {
      uVar1 = FUN_14f749330(param_4);
      return uVar1;
    }
  }
  else if (param_2 == 8) {
    *param_4 = 1;
    return 1;
  }
  return 0xfffffffe;
}

// FUN_14f749100 @ 14f749100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f749100(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) == 0) {
    ERR_put_error(5,0x7c,0x7d,"crypto\\dh\\dh_ameth.c",0x205);
    return 0;
  }
  uVar1 = DH_check_pub_key_ex();
  return uVar1;
}

// FUN_14f749150 @ 14f749150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f749150(longlong param_1)

{
  DH_check_ex(*(undefined8 *)(param_1 + 0x28));
  return;
}

// DHparams_dup @ 14f749170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DHparams_dup(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DH_new();
  if (lVar2 != 0) {
    iVar1 = FUN_14f749fd0(lVar2,param_1,0xffffffff);
    if (iVar1 != 0) {
      return lVar2;
    }
    DH_free(lVar2);
  }
  return 0;
}

// DHparams_print @ 14f7491d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DHparams_print(undefined8 param_1,undefined8 param_2)

{
  FUN_14f749be0(param_1,param_2,4,0);
  return;
}

// FUN_14f749200 @ 14f749200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f749200(longlong param_1)

{
  if (*(undefined **)(param_1 + 0x10) == &dhx_asn1_meth) {
    d2i_DHxparams(0);
    return;
  }
  d2i_DHparams(0);
  return;
}

// FUN_14f749240 @ 14f749240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f749240(undefined8 param_1)

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
  lVar5 = 0x14f749250;
  lVar2 = CMS_RecipientInfo_get0_pkey_ctx();
  if (lVar2 != 0) {
    lVar3 = EVP_PKEY_CTX_get0_peerkey(lVar2);
    if (lVar3 != 0) {
LAB_14f7492de:
      iVar1 = FUN_14f749920(lVar2,param_1);
      if (iVar1 == 0) {
        ERR_put_error(5,0x72,0x71,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar4,0x303),lVar5);
        return 0;
      }
      return 1;
    }
    lVar5 = lVar3;
    iVar1 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_res10,local_res18,0,0,0);
    uVar4 = (undefined4)((ulonglong)lVar3 >> 0x20);
    if (((iVar1 != 0) && (local_res10 != 0)) && (local_res18[0] != 0)) {
      iVar1 = FUN_14f749750(lVar2);
      if (iVar1 != 0) goto LAB_14f7492de;
      ERR_put_error(5,0x72,0x6f,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar4,0x2fd));
    }
  }
  return 0;
}

// FUN_14f749330 @ 14f749330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f749330(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  ulonglong uVar18;
  undefined4 uVar19;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  
  puVar12 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)0x0;
  iVar5 = 0;
  puVar15 = (undefined8 *)0x0;
  local_res10 = 0;
  puVar16 = (undefined8 *)0x0;
  lVar6 = CMS_RecipientInfo_get0_pkey_ctx();
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  lVar7 = EVP_PKEY_CTX_get0_pkey(lVar6);
  uVar3 = 0;
  iVar1 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_res18,&local_res20,0,0,0);
  puVar14 = puVar12;
  puVar11 = puVar12;
  puVar17 = puVar12;
  if (iVar1 == 0) goto LAB_14f7496f4;
  X509_ALGOR_get0(local_48,0,0,local_res18);
  lVar8 = OBJ_nid2obj(0);
  if (local_48[0] == lVar8) {
    lVar7 = BN_to_ASN1_INTEGER(*(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x20),0);
    if (lVar7 == 0) goto LAB_14f7496f4;
    iVar1 = i2d_ASN1_INTEGER(lVar7,&local_res10);
    ASN1_INTEGER_free(lVar7);
    puVar11 = puVar15;
    puVar17 = puVar16;
    if (iVar1 < 1) goto LAB_14f7496f4;
    ASN1_STRING_set0(local_res20,local_res10,iVar1);
    *(uint *)(local_res20 + 0x10) = *(uint *)(local_res20 + 0x10) & 0xfffffff0;
    *(uint *)(local_res20 + 0x10) = *(uint *)(local_res20 + 0x10) | 8;
    local_res10 = 0;
    uVar9 = OBJ_nid2obj(0x398);
    X509_ALGOR_set0(local_res18,uVar9,0xffffffff,0);
  }
  uVar18 = CONCAT44(uVar3,0xfffffffe);
  iVar1 = EVP_PKEY_CTX_ctrl(lVar6,0x398,0x400,0x1006,uVar18,0);
  puVar11 = puVar15;
  puVar17 = puVar16;
  if (0 < iVar1) {
    uVar18 = uVar18 & 0xffffffff00000000;
    iVar2 = EVP_PKEY_CTX_ctrl(lVar6,0x398,0x400,0x1008,uVar18,&local_58);
    puVar14 = puVar13;
    if (iVar2 != 0) {
      if (iVar1 == 1) {
        uVar18 = CONCAT44((int)(uVar18 >> 0x20),2);
        iVar1 = EVP_PKEY_CTX_ctrl(lVar6,0x398,0x400,0x1006,uVar18,0);
        if (iVar1 < 1) goto LAB_14f7496f4;
      }
      else if (iVar1 != 2) goto LAB_14f7496f4;
      if (local_58 == 0) {
        local_58 = EVP_sha1();
        uVar18 = uVar18 & 0xffffffff00000000;
        iVar1 = EVP_PKEY_CTX_ctrl(lVar6,0x398,0x400,0x1007,uVar18,local_58);
        if (iVar1 < 1) goto LAB_14f7496f4;
      }
      else {
        iVar1 = EVP_MD_type();
        if (iVar1 != 0x40) goto LAB_14f7496f4;
      }
      iVar1 = CMS_RecipientInfo_kari_get0_alg(param_1,&local_res18,&local_50);
      if (iVar1 != 0) {
        uVar9 = CMS_RecipientInfo_kari_get0_ctx(param_1);
        uVar10 = EVP_CIPHER_CTX_cipher(uVar9);
        uVar3 = EVP_CIPHER_type(uVar10);
        uVar10 = OBJ_nid2obj(uVar3);
        uVar18 = uVar18 & 0xffffffff00000000;
        iVar1 = EVP_PKEY_CTX_ctrl(lVar6,0x398,0x400,0x100d,uVar18,uVar10);
        uVar19 = (undefined4)(uVar18 >> 0x20);
        if (0 < iVar1) {
          uVar4 = EVP_CIPHER_CTX_key_length(uVar9);
          puVar11 = (undefined8 *)X509_ALGOR_new();
          if (puVar11 != (undefined8 *)0x0) {
            uVar10 = OBJ_nid2obj(uVar3);
            *puVar11 = uVar10;
            lVar7 = ASN1_TYPE_new();
            puVar11[1] = lVar7;
            if ((lVar7 != 0) && (iVar1 = EVP_CIPHER_param_to_asn1(uVar9,lVar7), 0 < iVar1)) {
              iVar1 = ASN1_TYPE_get(puVar11[1]);
              if (iVar1 == 0) {
                ASN1_TYPE_free(puVar11[1]);
                puVar11[1] = 0;
              }
              uVar9 = CONCAT44(uVar19,uVar4);
              iVar1 = EVP_PKEY_CTX_ctrl(lVar6,0x398,0x400,0x1009,uVar9,0);
              uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
              if (0 < iVar1) {
                if (local_50 != 0) {
                  iVar5 = ASN1_STRING_length();
                  uVar9 = ASN1_STRING_get0_data(local_50);
                  puVar12 = (undefined8 *)
                            CRYPTO_memdup(uVar9,(longlong)iVar5,"crypto\\dh\\dh_ameth.c",0x36d);
                  puVar17 = puVar12;
                  if (puVar12 == (undefined8 *)0x0) goto LAB_14f7496f4;
                }
                iVar5 = EVP_PKEY_CTX_ctrl(lVar6,0x398,0x400,0x100b,CONCAT44(uVar3,iVar5),puVar12);
                puVar17 = puVar12;
                if (0 < iVar5) {
                  local_res10 = 0;
                  puVar17 = (undefined8 *)0x0;
                  iVar5 = i2d_X509_ALGOR(puVar11,&local_res10);
                  if (((local_res10 != 0) && (iVar5 != 0)) &&
                     (lVar6 = ASN1_STRING_new(), lVar6 != 0)) {
                    ASN1_STRING_set0(lVar6,local_res10,iVar5);
                    local_res10 = 0;
                    uVar9 = OBJ_nid2obj(0xf5);
                    X509_ALGOR_set0(local_res18,uVar9,0x10,lVar6);
                    puVar14 = (undefined8 *)&DAT_00000001;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14f7496f4:
  CRYPTO_free(local_res10,"crypto\\dh\\dh_ameth.c",0x389);
  X509_ALGOR_free(puVar11);
  CRYPTO_free(puVar17,"crypto\\dh\\dh_ameth.c",0x38b);
  return puVar14;
}

// FUN_14f749750 @ 14f749750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f749750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res20 [2];
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  uStack_30 = 0x14f749767;
  lVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  X509_ALGOR_get0(&local_48,local_res20,local_38,param_2);
  iVar1 = OBJ_obj2nid(local_48);
  lVar5 = lVar6;
  lVar3 = lVar6;
  lVar4 = lVar6;
  if ((((iVar1 == 0x398) && (lVar5 = lVar7, lVar3 = 0, lVar4 = lVar8, local_res20[0] != 5)) &&
      (piVar2 = (int *)EVP_PKEY_CTX_get0_pkey(param_1), lVar5 = lVar6, lVar3 = lVar6, lVar4 = lVar6,
      piVar2 != (int *)0x0)) &&
     ((lVar5 = lVar7, lVar3 = 0, lVar4 = lVar8, *piVar2 == 0x398 &&
      (lVar3 = DHparams_dup(*(undefined8 *)(piVar2 + 10)), lVar3 != 0)))) {
    iVar1 = ASN1_STRING_length(param_3);
    local_40 = ASN1_STRING_get0_data(param_3);
    lVar5 = lVar6;
    lVar4 = lVar6;
    if ((local_40 != 0) && (lVar5 = lVar7, lVar4 = lVar8, iVar1 != 0)) {
      lVar4 = d2i_ASN1_INTEGER(0,&local_40,iVar1);
      if (lVar4 == 0) {
        ERR_put_error(5,0x73,0x68,"crypto\\dh\\dh_ameth.c",0x287);
      }
      else {
        lVar5 = ASN1_INTEGER_to_BN(lVar4,0);
        *(longlong *)(lVar3 + 0x20) = lVar5;
        lVar6 = 0;
        if (lVar5 == 0) {
          ERR_put_error(5,0x73,0x6d,"crypto\\dh\\dh_ameth.c",0x28d);
          lVar5 = lVar7;
        }
        else {
          lVar5 = EVP_PKEY_new();
          if (lVar5 != 0) {
            EVP_PKEY_assign(lVar5,**(undefined4 **)(piVar2 + 4),lVar3);
            lVar3 = 0;
            iVar1 = EVP_PKEY_derive_set_peer(param_1,lVar5);
            lVar6 = 0;
            if (0 < iVar1) {
              lVar6 = 1;
            }
          }
        }
      }
    }
  }
  ASN1_INTEGER_free(lVar4);
  EVP_PKEY_free(lVar5);
  DH_free(lVar3);
  return lVar6;
}

// FUN_14f749920 @ 14f749920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f749920(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  ulonglong uVar16;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_30 = 0x14f749937;
  puVar10 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
  puVar15 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)0x0;
  iVar5 = 0;
  iVar1 = CMS_RecipientInfo_kari_get0_alg(param_2,&local_res18,&local_res20);
  puVar12 = puVar10;
  puVar14 = puVar10;
  puVar7 = puVar10;
  if (iVar1 != 0) {
    iVar1 = OBJ_obj2nid(*local_res18);
    puVar14 = puVar13;
    puVar7 = puVar15;
    if (iVar1 == 0xf5) {
      uVar16 = CONCAT44(uVar2,2);
      iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x1006,uVar16,0);
      if (0 < iVar1) {
        uVar6 = EVP_sha1();
        iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x1007,uVar16 & 0xffffffff00000000,uVar6);
        puVar12 = puVar11;
        if ((0 < iVar1) && (*(int *)local_res18[1] == 0x10)) {
          local_38 = *(undefined8 *)(*(longlong *)((int *)local_res18[1] + 2) + 8);
          puVar7 = (undefined8 *)d2i_X509_ALGOR(0,&local_38,**(undefined4 **)(local_res18[1] + 8));
          if ((puVar7 != (undefined8 *)0x0) &&
             (lVar8 = CMS_RecipientInfo_kari_get0_ctx(param_2), lVar8 != 0)) {
            uVar2 = OBJ_obj2nid(*puVar7);
            uVar6 = OBJ_nid2sn(uVar2);
            lVar9 = EVP_get_cipherbyname(uVar6);
            puVar12 = puVar10;
            puVar14 = puVar10;
            if ((lVar9 != 0) &&
               (uVar3 = EVP_CIPHER_flags(lVar9), puVar14 = puVar13, (uVar3 & 0xf0007) == 0x10002)) {
              uVar2 = 0;
              iVar1 = EVP_EncryptInit_ex(lVar8,lVar9,0,0,0);
              if ((iVar1 != 0) &&
                 (iVar1 = EVP_CIPHER_asn1_to_param(lVar8,puVar7[1]), puVar12 = puVar11, 0 < iVar1))
              {
                uVar4 = EVP_CIPHER_CTX_key_length(lVar8);
                uVar16 = CONCAT44(uVar2,uVar4);
                iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x1009,uVar16,0);
                if (0 < iVar1) {
                  uVar2 = EVP_CIPHER_type(lVar9);
                  uVar6 = OBJ_nid2obj(uVar2);
                  uVar16 = uVar16 & 0xffffffff00000000;
                  iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x100d,uVar16,uVar6);
                  uVar2 = (undefined4)(uVar16 >> 0x20);
                  if (0 < iVar1) {
                    if (local_res20 != 0) {
                      iVar5 = ASN1_STRING_length();
                      uVar6 = ASN1_STRING_get0_data(local_res20);
                      puVar10 = (undefined8 *)
                                CRYPTO_memdup(uVar6,(longlong)iVar5,"crypto\\dh\\dh_ameth.c",0x2dd);
                      puVar14 = puVar10;
                      if (puVar10 == (undefined8 *)0x0) goto LAB_14f749b9f;
                    }
                    iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x398,0x400,0x100b,CONCAT44(uVar2,iVar5),
                                              puVar10);
                    puVar14 = puVar10;
                    if (0 < iVar1) {
                      puVar14 = (undefined8 *)0x0;
                      puVar12 = (undefined8 *)&DAT_00000001;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      ERR_put_error(5,0x74,0x70,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar2,0x2b5));
    }
  }
LAB_14f749b9f:
  X509_ALGOR_free(puVar7);
  CRYPTO_free(puVar14,"crypto\\dh\\dh_ameth.c",0x2e9);
  return puVar12;
}

// FUN_14f749be0 @ 14f749be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f749be0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar9;
  
  uVar12 = 0x14f749bfc;
  uVar6 = 0;
  uVar8 = 7;
  uVar9 = 7;
  if (param_4 == 2) {
    lVar7 = *(longlong *)(param_2 + 0x20);
    uVar11 = *(ulonglong *)(param_2 + 0x28);
  }
  else {
    uVar11 = 0;
    if (param_4 < 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x20);
      uVar11 = uVar6;
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    if (param_4 != 2) {
      if (0 < param_4) {
LAB_14f749c8d:
        if (lVar7 == 0) goto LAB_14f749c45;
      }
      if (param_4 == 2) {
        pcVar10 = "DH Private-Key";
      }
      else {
        pcVar10 = "DH Public-Key";
        if (param_4 != 1) {
          pcVar10 = "DH Parameters";
        }
      }
      BIO_indent(param_1,param_3,0x80);
      uVar1 = BN_num_bits(*(undefined8 *)(param_2 + 8));
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar10,uVar1);
      if (0 < iVar2) {
        iVar4 = param_3 + 4;
        iVar2 = ASN1_bn_print(param_1,"private-key:",uVar11,0,iVar4);
        if (((((iVar2 != 0) &&
              (iVar2 = ASN1_bn_print(param_1,"public-key:",lVar7,0,iVar4), iVar2 != 0)) &&
             (iVar2 = ASN1_bn_print(param_1,"prime:",*(undefined8 *)(param_2 + 8),0,iVar4),
             uVar8 = uVar9, iVar2 != 0)) &&
            (iVar2 = ASN1_bn_print(param_1,"generator:",*(undefined8 *)(param_2 + 0x10),0,iVar4),
            iVar2 != 0)) &&
           (((*(longlong *)(param_2 + 0x40) == 0 ||
             (iVar2 = ASN1_bn_print(param_1,"subgroup order:",*(longlong *)(param_2 + 0x40),0,iVar4)
             , iVar2 != 0)) &&
            ((*(longlong *)(param_2 + 0x48) == 0 ||
             (iVar2 = ASN1_bn_print(param_1,"subgroup factor:",*(longlong *)(param_2 + 0x48),0,iVar4
                                   ), iVar2 != 0)))))) {
          if (*(longlong *)(param_2 + 0x50) != 0) {
            BIO_indent(param_1,iVar4,0x80);
            BIO_puts(param_1,"seed:");
            uVar11 = uVar6;
            if (0 < *(int *)(param_2 + 0x58)) {
              do {
                iVar2 = (int)uVar6;
                if ((iVar2 == (iVar2 / 0xf) * 0xf) &&
                   ((iVar3 = BIO_puts(param_1,"\n"), iVar3 < 1 ||
                    (iVar3 = BIO_indent(param_1,param_3 + 8,0x80), iVar3 == 0))))
                goto LAB_14f749c4b;
                pcVar10 = ":";
                uVar5 = iVar2 + 1;
                uVar6 = (ulonglong)uVar5;
                if (uVar5 == *(uint *)(param_2 + 0x58)) {
                  pcVar10 = "";
                }
                iVar2 = BIO_printf(param_1,"%02x%s",
                                   *(undefined1 *)(*(longlong *)(param_2 + 0x50) + uVar11),pcVar10);
                if (iVar2 < 1) goto LAB_14f749c4b;
                uVar11 = uVar11 + 1;
              } while ((int)uVar5 < *(int *)(param_2 + 0x58));
            }
            iVar2 = BIO_write(param_1,"\n",1);
            if (iVar2 < 1) {
              return 0;
            }
          }
          if ((*(longlong *)(param_2 + 0x60) == 0) ||
             (iVar2 = ASN1_bn_print(param_1,"counter:",*(longlong *)(param_2 + 0x60),0,iVar4),
             iVar2 != 0)) {
            if (*(int *)(param_2 + 0x18) == 0) {
              return 1;
            }
            BIO_indent(param_1,iVar4,0x80);
            iVar2 = BIO_printf(param_1,"recommended-private-length: %d bits\n",
                               *(undefined4 *)(param_2 + 0x18));
            if (0 < iVar2) {
              return 1;
            }
          }
        }
      }
      goto LAB_14f749c4b;
    }
    if (uVar11 != 0) goto LAB_14f749c8d;
  }
LAB_14f749c45:
  uVar8 = 0x43;
LAB_14f749c4b:
  ERR_put_error(5,100,uVar8,"crypto\\dh\\dh_ameth.c",0x157,uVar12);
  return 0;
}

// FUN_14f749f10 @ 14f749f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f749f10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(undefined **)(param_1 + 0x10) == &dhx_asn1_meth) {
    i2d_DHxparams();
    return;
  }
  i2d_DHparams(param_2,param_3);
  return;
}

// FUN_14f749f50 @ 14f749f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f749f50(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = BN_get_flags(param_2,2);
    if (iVar1 != 0) {
      iVar1 = BN_get_flags(param_2,1);
      if (iVar1 == 0) goto LAB_14f749f6e;
    }
    param_2 = BN_dup(param_2);
    if (param_2 == 0) {
      return 0;
    }
  }
LAB_14f749f6e:
  BN_clear_free(*param_1);
  *param_1 = param_2;
  return 1;
}

// FUN_14f749fd0 @ 14f749fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f749fd0(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 0xffffffff) {
    param_3 = (uint)(*(longlong *)(param_2 + 0x40) != 0);
  }
  iVar1 = FUN_14f749f50(param_1 + 8,*(undefined8 *)(param_2 + 8));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_14f749f50(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      return 1;
    }
    iVar1 = FUN_14f749f50(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40));
    if ((iVar1 != 0) &&
       (iVar1 = FUN_14f749f50(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48)), iVar1 != 0)) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x50),"crypto\\dh\\dh_ameth.c",0x197);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(longlong *)(param_2 + 0x50) != 0) {
        lVar2 = CRYPTO_memdup(*(longlong *)(param_2 + 0x50),(longlong)*(int *)(param_2 + 0x58),
                              "crypto\\dh\\dh_ameth.c",0x19b);
        *(longlong *)(param_1 + 0x50) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
      }
      return 1;
    }
  }
  return 0;
}

