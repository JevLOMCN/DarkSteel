// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// FUN_14f74a0e0 @ 14f74a0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74a0e0(undefined8 param_1,undefined8 param_2)

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
  undefined4 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f74a0f5;
  lVar4 = 0;
  iVar1 = X509_PUBKEY_get0_param(0,&local_10,local_res20,&local_28,param_2);
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  X509_ALGOR_get0(0,local_res18,&local_20,local_28);
  if (local_res18[0] == 0x10) {
    local_18 = *(undefined8 *)(local_20 + 2);
    lVar2 = d2i_DSAparams(0,&local_18,*local_20);
    if (lVar2 == 0) {
      uVar6 = CONCAT44(uVar5,0x2a);
      uVar5 = 0x68;
      lVar4 = 0;
      goto LAB_14f74a1ef;
    }
  }
  else {
    if ((local_res18[0] != 5) && (local_res18[0] != -1)) {
      uVar6 = CONCAT44(uVar5,0x34);
      uVar5 = 0x69;
      lVar2 = 0;
      goto LAB_14f74a1ef;
    }
    lVar2 = DSA_new();
    if (lVar2 == 0) {
      uVar6 = CONCAT44(uVar5,0x30);
      uVar5 = 0x41;
      goto LAB_14f74a1ef;
    }
  }
  lVar4 = d2i_ASN1_INTEGER(0,&local_10,local_res20[0]);
  if (lVar4 == 0) {
    uVar6 = CONCAT44(uVar5,0x39);
    uVar5 = 0x68;
  }
  else {
    lVar3 = ASN1_INTEGER_to_BN(lVar4,0);
    *(longlong *)(lVar2 + 0x20) = lVar3;
    if (lVar3 != 0) {
      ASN1_INTEGER_free(lVar4);
      EVP_PKEY_assign(param_1,0x74,lVar2);
      return 1;
    }
    uVar6 = CONCAT44(uVar5,0x3e);
    uVar5 = 0x6c;
  }
LAB_14f74a1ef:
  ERR_put_error(10,0x75,uVar5,"crypto\\dsa\\dsa_ameth.c",uVar6);
  ASN1_INTEGER_free(lVar4);
  DSA_free(lVar2);
  return 0;
}

// FUN_14f74a260 @ 14f74a260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74a260(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar7 = 0x14f74a278;
  lVar3 = *(longlong *)(param_2 + 0x28);
  piVar2 = (int *)0x0;
  local_res10 = 0;
  if ((((*(int *)(param_2 + 0x30) == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
      (*(longlong *)(lVar3 + 0x10) == 0)) || (*(longlong *)(lVar3 + 0x18) == 0)) {
    uVar4 = 0xffffffff;
LAB_14f74a337:
    lVar3 = BN_to_ASN1_INTEGER(*(undefined8 *)(lVar3 + 0x20),0);
    if (lVar3 == 0) {
      uVar5 = CONCAT44(uVar6,0x6a);
    }
    else {
      iVar1 = i2d_ASN1_INTEGER(lVar3,&local_res10);
      ASN1_INTEGER_free(lVar3);
      if (0 < iVar1) {
        lVar3 = OBJ_nid2obj(0x74);
        if ((lVar3 != 0) &&
           (iVar1 = X509_PUBKEY_set0_param(param_1,lVar3,uVar4,piVar2,local_res10,iVar1), iVar1 != 0
           )) {
          return 1;
        }
        goto LAB_14f74a2dd;
      }
      uVar5 = CONCAT44(uVar6,0x72);
    }
  }
  else {
    piVar2 = (int *)ASN1_STRING_new();
    if (piVar2 == (int *)0x0) {
      uVar5 = CONCAT44(uVar6,0x5b);
    }
    else {
      iVar1 = i2d_DSAparams(lVar3,piVar2 + 2);
      *piVar2 = iVar1;
      if (0 < iVar1) {
        uVar4 = 0x10;
        goto LAB_14f74a337;
      }
      uVar5 = CONCAT44(uVar6,0x60);
    }
  }
  ERR_put_error(10,0x76,0x41,"crypto\\dsa\\dsa_ameth.c",uVar5,uVar7);
LAB_14f74a2dd:
  CRYPTO_free(local_res10,"crypto\\dsa\\dsa_ameth.c",0x7e);
  ASN1_STRING_free(piVar2);
  return 0;
}

// FUN_14f74a3d0 @ 14f74a3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f74a3d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined8 uVar8;
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined4 *local_28;
  undefined8 local_20;
  
  local_20 = 0x14f74a3e3;
  lVar5 = 0;
  lVar6 = 0;
  lVar2 = PKCS8_pkey_get0(0,local_30,local_res18,&local_38,param_2);
  if ((int)lVar2 == 0) {
    return lVar2;
  }
  X509_ALGOR_get0(0,local_res20,&local_28,local_38);
  lVar3 = d2i_ASN1_INTEGER(0,local_30,local_res18[0]);
  lVar2 = lVar5;
  if (((lVar3 == 0) || (lVar2 = 0, *(int *)(lVar3 + 4) == 0x102)) || (local_res20[0] != 0x10)) {
LAB_14f74a562:
    uVar8 = 0xc2;
    uVar7 = 0x68;
  }
  else {
    local_20 = *(undefined8 *)(local_28 + 2);
    lVar2 = d2i_DSAparams(0,&local_20,*local_28);
    if (lVar2 == 0) goto LAB_14f74a562;
    lVar4 = BN_secure_new();
    *(longlong *)(lVar2 + 0x28) = lVar4;
    if (lVar4 == 0) {
LAB_14f74a552:
      uVar8 = 0xa9;
      uVar7 = 0x6d;
    }
    else {
      lVar4 = ASN1_INTEGER_to_BN(lVar3,lVar4);
      if (lVar4 == 0) goto LAB_14f74a552;
      lVar6 = BN_new();
      *(longlong *)(lVar2 + 0x20) = lVar6;
      if (lVar6 == 0) {
        uVar8 = 0xae;
        uVar7 = 0x41;
        lVar6 = lVar5;
      }
      else {
        lVar6 = BN_CTX_new();
        if (lVar6 == 0) {
          uVar8 = 0xb2;
          uVar7 = 0x41;
        }
        else {
          BN_set_flags(*(undefined8 *)(lVar2 + 0x28),4);
          iVar1 = BN_mod_exp(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x18),
                             *(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 8),lVar6);
          if (iVar1 != 0) {
            EVP_PKEY_assign(param_1,0x74,lVar2);
            lVar5 = 1;
            goto LAB_14f74a58c;
          }
          uVar8 = 0xb8;
          uVar7 = 0x6d;
        }
      }
    }
  }
  ERR_put_error(10,0x73,uVar7,"crypto\\dsa\\dsa_ameth.c",uVar8);
  DSA_free(lVar2);
LAB_14f74a58c:
  BN_CTX_free(lVar6);
  ASN1_STRING_clear_free(lVar3);
  return lVar5;
}

// FUN_14f74a5c0 @ 14f74a5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74a5c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 local_res10;
  
  piVar4 = (int *)0x0;
  local_res10 = 0;
  if ((*(longlong *)(param_2 + 0x28) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x28) == 0)) {
    uVar3 = 0xd3;
    uVar5 = 0x65;
  }
  else {
    piVar4 = (int *)ASN1_STRING_new();
    if (piVar4 == (int *)0x0) {
      uVar3 = 0xda;
      uVar5 = 0x41;
    }
    else {
      iVar1 = i2d_DSAparams(*(undefined8 *)(param_2 + 0x28),piVar4 + 2);
      *piVar4 = iVar1;
      if (iVar1 < 1) {
        uVar3 = 0xe0;
        uVar5 = 0x41;
      }
      else {
        piVar4[1] = 0x10;
        lVar2 = BN_to_ASN1_INTEGER(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28),0);
        if (lVar2 != 0) {
          uVar5 = i2d_ASN1_INTEGER(lVar2,&local_res10);
          ASN1_STRING_clear_free(lVar2);
          uVar3 = OBJ_nid2obj(0x74);
          iVar1 = PKCS8_pkey_set0(param_1,uVar3,0,0x10,piVar4,local_res10,uVar5);
          if (iVar1 != 0) {
            return 1;
          }
          goto LAB_14f74a6e6;
        }
        uVar3 = 0xe9;
        uVar5 = 0x6d;
      }
    }
  }
  ERR_put_error(10,0x74,uVar5,"crypto\\dsa\\dsa_ameth.c",uVar3);
LAB_14f74a6e6:
  CRYPTO_free(local_res10,"crypto\\dsa\\dsa_ameth.c",0xf9);
  ASN1_STRING_free(piVar4);
  ASN1_STRING_clear_free(0);
  return 0;
}

// FUN_14f74a730 @ 14f74a730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74a730(longlong param_1)

{
  DSA_size(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74a750 @ 14f74a750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74a750(longlong param_1)

{
  DSA_bits(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74a770 @ 14f74a770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74a770(longlong param_1)

{
  DSA_security_bits(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74a7c0 @ 14f74a7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74a7c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = DSA_new();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = BN_dup(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if (lVar1 != 0) {
    BN_free(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 8) = lVar1;
    lVar1 = BN_dup(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (lVar1 != 0) {
      BN_free(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10));
      *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = lVar1;
      lVar1 = BN_dup(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18));
      if (lVar1 != 0) {
        BN_free(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
        *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = lVar1;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f74a8b0 @ 14f74a8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74a8b0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if (iVar1 == 0) {
    iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                   *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (iVar1 == 0) {
      iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18),
                     *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18));
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f74a940 @ 14f74a940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f74a940(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20),param_3,param_4,0x14f74a94a);
  return iVar1 == 0;
}

// FUN_14f74a980 @ 14f74a980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74a980(longlong param_1)

{
  DSA_free(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74a9a0 @ 14f74a9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74a9a0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f74a9ac;
  lVar1 = d2i_DSAparams(0);
  if (lVar1 == 0) {
    ERR_put_error(10,0x77,10,"crypto\\dsa\\dsa_ameth.c",0x17d,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,0x74,lVar1);
  return 1;
}

// FUN_14f74aa10 @ 14f74aa10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74aa10(longlong param_1)

{
  i2d_DSAparams(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74aa30 @ 14f74aa30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74aa30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f74ae00(param_1,*(undefined8 *)(param_2 + 0x28),param_3,0);
  return;
}

// FUN_14f74aa60 @ 14f74aa60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74aa60(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f74ae00(param_1,*(undefined8 *)(param_2 + 0x28),param_3,1);
  return;
}

// FUN_14f74aa90 @ 14f74aa90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74aa90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_14f74ae00(param_1,*(undefined8 *)(param_2 + 0x28),param_3,2);
  return;
}

// FUN_14f74aac0 @ 14f74aac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74aac0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f74aacc;
  lVar1 = d2i_DSAPrivateKey(0);
  if (lVar1 == 0) {
    ERR_put_error(10,0x7a,10,"crypto\\dsa\\dsa_ameth.c",0x1a1,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,0x74,lVar1);
  return 1;
}

// FUN_14f74ab30 @ 14f74ab30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74ab30(longlong param_1)

{
  i2d_DSAPrivateKey(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74ab50 @ 14f74ab50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f74ab50(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4
                       )

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0x14f74ab5e;
  if (param_3 == (undefined4 *)0x0) {
    iVar1 = BIO_puts(param_1,"\n");
    return (ulonglong)(0 < iVar1);
  }
  local_res18[0] = *(undefined8 *)(param_3 + 2);
  lVar2 = d2i_DSA_SIG(0,local_res18,*param_3);
  if (lVar2 != 0) {
    uVar3 = 0;
    DSA_SIG_get0(lVar2,&local_28,&local_20);
    iVar1 = BIO_write(param_1,"\n",1);
    if (iVar1 == 1) {
      iVar1 = ASN1_bn_print(param_1,"r:   ",local_28,0,param_4);
      if (iVar1 != 0) {
        iVar1 = ASN1_bn_print(param_1,"s:   ",local_20,0,param_4);
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = 1;
        }
      }
    }
    DSA_SIG_free(lVar2);
    return uVar3;
  }
  uVar3 = X509_signature_dump(param_1,param_3,param_4);
  return uVar3;
}

// FUN_14f74ac70 @ 14f74ac70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74ac70(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [6];
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x14f74ac80;
  if (param_2 == 1) {
    if (param_3 != 0) {
      return 1;
    }
    PKCS7_SIGNER_INFO_get0_algs(param_4,0,&local_10,&local_18);
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
  }
  else {
    if (param_2 == 3) {
      *param_4 = 0x2a0;
      return 1;
    }
    if (param_2 != 5) {
      if (param_2 == 8) {
        *param_4 = 0xffffffff;
        return 1;
      }
      return 0xfffffffe;
    }
    if (param_3 != 0) {
      return 1;
    }
    CMS_SignerInfo_get0_algs(param_4,0,0,&local_18,&local_10);
    if ((local_18 == (longlong *)0x0) || (*local_18 == 0)) {
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
    local_18 = local_10;
  }
  X509_ALGOR_set0(local_18,uVar3,0xffffffff,0);
  return 1;
}

// FUN_14f74ae00 @ 14f74ae00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f74ae00(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f74ae1e;
  lVar3 = 0;
  if (param_4 == 2) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    lVar4 = *(longlong *)(param_2 + 0x28);
  }
  else {
    lVar4 = 0;
    if (param_4 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar4 = 0;
    }
  }
  if (param_4 == 2) {
    pcVar6 = "Private-Key";
  }
  else {
    pcVar6 = "Public-Key";
    if (param_4 != 1) {
      pcVar6 = "DSA-Parameters";
    }
  }
  if (lVar4 != 0) {
    iVar1 = BIO_indent(param_1,param_3,0x80);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = BN_num_bits(*(undefined8 *)(param_2 + 8));
    iVar1 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar6,uVar2);
    if (iVar1 < 1) {
      return 0;
    }
  }
  iVar1 = ASN1_bn_print(param_1,"priv:",lVar4,0,param_3,uVar7);
  lVar4 = 0;
  if ((((iVar1 != 0) &&
       (iVar1 = ASN1_bn_print(param_1,"pub: ",uVar5,0,param_3,uVar7), lVar4 = lVar3, iVar1 != 0)) &&
      (iVar1 = ASN1_bn_print(param_1,"P:   ",*(undefined8 *)(param_2 + 8),0,param_3,uVar7),
      iVar1 != 0)) &&
     (iVar1 = ASN1_bn_print(param_1,"Q:   ",*(undefined8 *)(param_2 + 0x10),0,param_3,uVar7),
     iVar1 != 0)) {
    iVar1 = ASN1_bn_print(param_1,"G:   ",*(undefined8 *)(param_2 + 0x18),0,param_3);
    lVar4 = 0;
    if (iVar1 != 0) {
      lVar4 = 1;
    }
  }
  return lVar4;
}

