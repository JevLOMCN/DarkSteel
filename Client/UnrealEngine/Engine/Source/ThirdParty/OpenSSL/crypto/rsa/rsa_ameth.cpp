// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 40

// FUN_14f74e790 @ 14f74e790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74e790(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = RSA_flags(*(undefined8 *)(param_1 + 0x28));
  if (((uVar2 & 1) != 0) || (uVar2 = RSA_flags(*(undefined8 *)(param_2 + 0x28)), (uVar2 & 1) != 0))
  {
    return 1;
  }
  iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  if ((iVar1 == 0) &&
     (iVar1 = BN_cmp(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20)), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

// FUN_14f74e820 @ 14f74e820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74e820(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f74e82c;
  lVar1 = d2i_RSAPrivateKey(0);
  if (lVar1 == 0) {
    ERR_put_error(4,0x93,4,"crypto\\rsa\\rsa_ameth.c",0x8e,uVar2);
    return 0;
  }
  EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar1);
  return 1;
}

// FUN_14f74e890 @ 14f74e890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74e890(longlong param_1)

{
  i2d_RSAPrivateKey(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74e8b0 @ 14f74e8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74e8b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar7 = 0x14f74e8be;
  lVar3 = *(longlong *)(param_2 + 0x28);
  local_res18[0] = 0;
  local_res10 = 0;
  if (**(int **)(param_2 + 0x10) == 0x390) {
    if (*(longlong *)(lVar3 + 0x60) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar4 = RSA_PSS_PARAMS_it();
      lVar3 = ASN1_item_pack(*(undefined8 *)(lVar3 + 0x60),uVar4,&local_res10);
      if (lVar3 == 0) {
        return 0;
      }
      uVar5 = 0x10;
    }
  }
  else {
    uVar5 = 5;
  }
  iVar1 = i2d_RSAPrivateKey(*(undefined8 *)(param_2 + 0x28),local_res18);
  if (iVar1 < 1) {
    ERR_put_error(4,0x8a,0x41,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar6,0xa6));
    ASN1_STRING_free(local_res10);
    return 0;
  }
  uVar4 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
  iVar2 = PKCS8_pkey_set0(param_1,uVar4,0,uVar5,local_res10,local_res18[0],iVar1,uVar7);
  if (iVar2 == 0) {
    ERR_put_error(4,0x8a,0x41,"crypto\\rsa\\rsa_ameth.c",0xad);
    ASN1_STRING_free(local_res10);
    CRYPTO_clear_free(local_res18[0],(longlong)iVar1,"crypto\\rsa\\rsa_ameth.c",0xaf);
    return 0;
  }
  return 1;
}

// FUN_14f74ea20 @ 14f74ea20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74ea20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f74ea2c;
  uVar2 = PKCS8_pkey_get0(0,local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = d2i_RSAPrivateKey(0,local_res20,local_res18[0]);
  if (lVar3 == 0) {
    ERR_put_error(4,0x96,4,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar4,0xc1));
    return 0;
  }
  iVar1 = FUN_14f7502b0(lVar3,local_18);
  if (iVar1 == 0) {
    RSA_free(lVar3);
    return 0;
  }
  EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
  return 1;
}

// FUN_14f74eaf0 @ 14f74eaf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74eaf0(longlong param_1)

{
  RSA_size(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74eb10 @ 14f74eb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74eb10(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  return;
}

// FUN_14f74eb40 @ 14f74eb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74eb40(longlong param_1)

{
  RSA_security_bits(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74eb60 @ 14f74eb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74eb60(longlong param_1)

{
  RSA_free(*(undefined8 *)(param_1 + 0x28));
  return;
}

// FUN_14f74eb80 @ 14f74eb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74eb80(void)

{
  FUN_14f74f420();
  return;
}

// FUN_14f74eba0 @ 14f74eba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74eba0(void)

{
  FUN_14f74f420();
  return;
}

// FUN_14f74ebc0 @ 14f74ebc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74ebc0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_2);
  if (iVar1 == 0x390) {
    uVar2 = FUN_14f750410(param_2);
    iVar1 = FUN_14f7505a0(param_1,0,uVar2,param_4);
    RSA_PSS_PARAMS_free(uVar2);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        return 1;
      }
LAB_14f74ec35:
      uVar2 = X509_signature_dump(param_1,param_3,param_4);
      return uVar2;
    }
  }
  else {
    if (param_3 != 0) goto LAB_14f74ec35;
    iVar1 = BIO_puts(param_1,"\n");
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f74ec80 @ 14f74ec80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74ec80(longlong param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong local_18 [2];
  
  local_18[1] = 0x14f74ec8c;
  local_18[0] = 0;
  switch(param_2) {
  case 1:
    if (param_3 != 0) {
      return 1;
    }
    PKCS7_SIGNER_INFO_get0_algs(param_4,0,0,local_18);
    goto LAB_14f74ed02;
  case 2:
    if (**(int **)(param_1 + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    if (param_3 != 0) {
      return 1;
    }
    PKCS7_RECIP_INFO_get0_alg(param_4,local_18);
LAB_14f74ed02:
    if (local_18[0] != 0) {
      uVar3 = OBJ_nid2obj(6);
      X509_ALGOR_set0(local_18[0],uVar3,5);
      return 1;
    }
    break;
  case 3:
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0x60);
    if (puVar1 == (undefined8 *)0x0) {
      *param_4 = 0x2a0;
      return 1;
    }
    lVar4 = FUN_14f74f7a0(*puVar1);
    if ((lVar4 != 0) && (lVar5 = FUN_14f74f7a0(puVar1[4]), lVar5 != 0)) {
      if ((puVar1[2] == 0) || (iVar2 = ASN1_INTEGER_get(), -1 < iVar2)) {
        if ((puVar1[3] == 0) || (iVar2 = ASN1_INTEGER_get(), iVar2 == 1)) {
          uVar6 = EVP_MD_type(lVar4);
          *param_4 = uVar6;
          return 2;
        }
        uVar7 = 0x2e8;
        uVar6 = 0x8b;
      }
      else {
        uVar7 = 0x2dc;
        uVar6 = 0x96;
      }
      ERR_put_error(4,0x97,uVar6,"crypto\\rsa\\rsa_ameth.c",uVar7);
    }
    ERR_put_error(4,0,0x44,"crypto\\rsa\\rsa_ameth.c",0x204);
    return 0;
  default:
    return 0xfffffffe;
  case 5:
    if (param_3 == 0) {
      uVar3 = FUN_14f74fcf0(param_4);
      return uVar3;
    }
    if (param_3 == 1) {
      uVar3 = FUN_14f74fdd0(param_4);
      return uVar3;
    }
    break;
  case 7:
    if (**(int **)(param_1 + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    if (param_3 == 0) {
      uVar3 = FUN_14f74fa80(param_4);
      return uVar3;
    }
    if (param_3 == 1) {
      uVar3 = FUN_14f74f820(param_4);
      return uVar3;
    }
    break;
  case 8:
    if (**(int **)(param_1 + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    *param_4 = 0;
  }
  return 1;
}

// FUN_14f74eee0 @ 14f74eee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f74eee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f74eef0;
  iVar1 = OBJ_obj2nid(*param_4);
  if (iVar1 != 0x390) {
    ERR_put_error(4,0x94,0x9b,"crypto\\rsa\\rsa_ameth.c",0x315,uVar2);
    return 0xffffffff;
  }
  iVar1 = FUN_14f750950(param_1,0,param_4,param_6);
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = 2;
  }
  return uVar2;
}

// FUN_14f74ef70 @ 14f74ef70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74ef70(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_R9;
  longlong in_stack_00000028;
  int local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f74ef80;
  uVar2 = EVP_MD_CTX_pkey_ctx();
  iVar1 = RSA_pkey_ctx_ctrl(uVar2,0xffffffff,0x1006,0,local_18);
  if (0 < iVar1) {
    if ((local_18[0] == 1) || (local_18[0] != 6)) {
      return 2;
    }
    lVar3 = FUN_14f74fff0(uVar2);
    if (lVar3 != 0) {
      if (in_stack_00000028 != 0) {
        lVar4 = ASN1_STRING_dup(lVar3);
        if (lVar4 == 0) {
          ASN1_STRING_free(lVar3);
          return 0;
        }
        uVar2 = OBJ_nid2obj(0x390);
        X509_ALGOR_set0(in_stack_00000028,uVar2,0x10,lVar4);
      }
      uVar2 = OBJ_nid2obj(0x390);
      X509_ALGOR_set0(in_R9,uVar2,0x10,lVar3);
      return 3;
    }
  }
  return 0;
}

// FUN_14f74f080 @ 14f74f080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74f080(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0;
  uVar7 = 0;
  iVar1 = OBJ_obj2nid(*param_2);
  if (iVar1 != 0x390) {
    return 0;
  }
  puVar4 = (undefined8 *)FUN_14f750410(param_2);
  if (((puVar4 != (undefined8 *)0x0) && (lVar5 = FUN_14f74f7a0(*puVar4), lVar5 != 0)) &&
     (lVar6 = FUN_14f74f7a0(puVar4[4]), lVar6 != 0)) {
    if (puVar4[2] == 0) {
      iVar1 = 0x14;
    }
    else {
      iVar1 = ASN1_INTEGER_get();
      if (iVar1 < 0) {
        ERR_put_error(4,0x97,0x96,"crypto\\rsa\\rsa_ameth.c",0x2dc);
        goto LAB_14f74f1ec;
      }
    }
    if ((puVar4[3] == 0) || (iVar2 = ASN1_INTEGER_get(), iVar2 == 1)) {
      iVar2 = EVP_MD_type(lVar5);
      if (((iVar2 - 0x2a0U < 3) && (iVar3 = EVP_MD_type(lVar6), iVar2 == iVar3)) &&
         (iVar3 = EVP_MD_size(lVar5), iVar1 == iVar3)) {
        uVar7 = 2;
      }
      iVar1 = EVP_MD_size(lVar5);
      X509_SIG_INFO_set(param_1,iVar2,0x390,iVar1 << 2,uVar7);
      uVar8 = 1;
    }
    else {
      ERR_put_error(4,0x97,0x8b,"crypto\\rsa\\rsa_ameth.c",0x2e8);
    }
  }
LAB_14f74f1ec:
  RSA_PSS_PARAMS_free(puVar4);
  return uVar8;
}

// FUN_14f74f210 @ 14f74f210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74f210(longlong param_1)

{
  RSA_check_key_ex(*(undefined8 *)(param_1 + 0x28),0);
  return;
}

// FUN_14f74f240 @ 14f74f240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74f240(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined4 uVar5;
  
  uVar5 = 1;
  lVar2 = *(longlong *)(param_2 + 0x28);
  local_res10 = 0;
  local_res18[0] = 0;
  if (**(int **)(param_2 + 0x10) == 0x390) {
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar5 = 1;
      uVar3 = RSA_PSS_PARAMS_it();
      lVar2 = ASN1_item_pack(*(undefined8 *)(lVar2 + 0x60),uVar3,local_res18);
      if (lVar2 == 0) {
        return 0;
      }
      uVar4 = 0x10;
    }
  }
  else {
    uVar4 = 5;
  }
  iVar1 = i2d_RSAPublicKey(*(undefined8 *)(param_2 + 0x28),&local_res10);
  if (0 < iVar1) {
    uVar3 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
    iVar1 = X509_PUBKEY_set0_param
                      (param_1,uVar3,uVar4,local_res18[0],local_res10,CONCAT44(uVar5,iVar1));
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(local_res10,"crypto\\rsa\\rsa_ameth.c",0x5b);
  }
  return 0;
}

// FUN_14f74f340 @ 14f74f340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74f340(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f74f34c;
  uVar2 = X509_PUBKEY_get0_param(0,local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = d2i_RSAPublicKey(0,local_res20,local_res18[0]);
  if (lVar3 == 0) {
    ERR_put_error(4,0x8b,4,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar4,0x69));
    return 0;
  }
  iVar1 = FUN_14f7502b0(lVar3,local_18);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_assign(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  RSA_free(lVar3);
  return 0;
}

// FUN_14f74f420 @ 14f74f420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f74f420(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  uVar13 = 0;
  uVar2 = uVar13;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    uVar2 = BN_num_bits();
  }
  iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x58));
  iVar4 = BIO_indent(param_1,param_3,0x80);
  if (iVar4 != 0) {
    puVar12 = &s_RSA;
    if (**(int **)(param_2 + 0x10) == 0x390) {
      puVar12 = &s_RSA_PSS;
    }
    iVar4 = BIO_printf(param_1,"%s ",puVar12);
    if (0 < iVar4) {
      if ((param_4 == 0) || (*(longlong *)(lVar1 + 0x28) == 0)) {
        iVar3 = BIO_printf(param_1,"Public-Key: (%d bit)\n",uVar2);
        if (iVar3 < 1) {
          return 0;
        }
        pcVar8 = "Modulus:";
        pcVar9 = "Exponent:";
      }
      else {
        iVar4 = 2;
        if (0 < iVar3) {
          iVar4 = iVar3 + 2;
        }
        iVar3 = BIO_printf(param_1,"Private-Key: (%d bit, %d primes)\n",uVar2,iVar4);
        if (iVar3 < 1) {
          return 0;
        }
        pcVar8 = "modulus:";
        pcVar9 = "publicExponent:";
      }
      iVar3 = ASN1_bn_print(param_1,pcVar8,*(undefined8 *)(lVar1 + 0x18),0,param_3);
      uVar13 = 0;
      if ((iVar3 != 0) &&
         (iVar3 = ASN1_bn_print(param_1,pcVar9,*(undefined8 *)(lVar1 + 0x20),0,param_3), iVar3 != 0)
         ) {
        if (param_4 != 0) {
          iVar3 = ASN1_bn_print(param_1,"privateExponent:",*(undefined8 *)(lVar1 + 0x28),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"prime1:",*(undefined8 *)(lVar1 + 0x30),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"prime2:",*(undefined8 *)(lVar1 + 0x38),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"exponent1:",*(undefined8 *)(lVar1 + 0x40),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"exponent2:",*(undefined8 *)(lVar1 + 0x48),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = ASN1_bn_print(param_1,"coefficient:",*(undefined8 *)(lVar1 + 0x50),0,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar4 = 0;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x58));
          if (0 < iVar3) {
            iVar3 = 3;
            do {
              uVar10 = 0;
              puVar7 = (ulonglong *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x58),iVar4);
              uVar11 = uVar10;
              do {
                iVar5 = BIO_indent(param_1,param_3,0x80);
                if (iVar5 == 0) {
                  return 0;
                }
                iVar5 = (int)uVar10;
                if (iVar5 == 0) {
                  iVar6 = BIO_printf(param_1,"prime%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = *puVar7;
                }
                else if (iVar5 == 1) {
                  iVar6 = BIO_printf(param_1,"exponent%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = puVar7[1];
                }
                else if (iVar5 == 2) {
                  iVar6 = BIO_printf(param_1,"coefficient%d:",iVar3);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar11 = puVar7[2];
                }
                iVar6 = ASN1_bn_print(param_1,"",uVar11,0,param_3);
                if (iVar6 == 0) {
                  return 0;
                }
                uVar10 = (ulonglong)(iVar5 + 1U);
              } while ((int)(iVar5 + 1U) < 3);
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 1;
              iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x58));
            } while (iVar4 < iVar5);
          }
        }
        uVar13 = 0;
        if ((**(int **)(param_2 + 0x10) != 0x390) ||
           (iVar3 = FUN_14f7505a0(param_1,1,*(undefined8 *)(lVar1 + 0x60),param_3), iVar3 != 0)) {
          uVar13 = 1;
        }
      }
    }
  }
  return uVar13;
}

// FUN_14f74f7a0 @ 14f74f7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f74f7a0(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar2 = EVP_sha1();
    return lVar2;
  }
  uVar1 = OBJ_obj2nid(*param_1);
  uVar3 = OBJ_nid2sn(uVar1);
  lVar2 = EVP_get_digestbyname(uVar3);
  if (lVar2 == 0) {
    ERR_put_error(4,0x9c,0xa6,"crypto\\rsa\\rsa_ameth.c",0x24a);
  }
  return lVar2;
}

// FUN_14f74f820 @ 14f74f820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74f820(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 *local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar13;
  ulonglong uVar12;
  undefined8 uVar14;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar14 = 0x14f74f832;
  uVar9 = 0xffffffff;
  uVar8 = 0xffffffff;
  uVar10 = 0;
  uVar11 = 0;
  lVar4 = CMS_RecipientInfo_get0_pkey_ctx();
  if (lVar4 == 0) {
    return 0;
  }
  iVar3 = CMS_RecipientInfo_ktri_get0_algs(param_1,0,0,&local_res10);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = OBJ_obj2nid(*local_res10);
  if (iVar3 == 6) {
    return 1;
  }
  if (iVar3 != 0x397) {
    ERR_put_error(4,0x9f,0xa2,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar13,0x3a8),uVar14);
    return 0xffffffff;
  }
  puVar5 = (undefined8 *)FUN_14f750210(local_res10);
  if (puVar5 == (undefined8 *)0x0) {
    ERR_put_error(4,0x9f,0xa1,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar13,0x3af),uVar14);
  }
  else {
    lVar6 = FUN_14f74f7a0(puVar5[3]);
    if ((lVar6 != 0) && (lVar7 = FUN_14f74f7a0(*puVar5), lVar7 != 0)) {
      puVar1 = (undefined8 *)puVar5[2];
      if (puVar1 != (undefined8 *)0x0) {
        iVar3 = OBJ_obj2nid(*puVar1);
        if (iVar3 != 0x3a7) {
          ERR_put_error(4,0x9f,0xa3,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar13,0x3be));
          goto LAB_14f74fa5f;
        }
        if (*(int *)puVar1[1] != 4) {
          ERR_put_error(4,0x9f,0xa0,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar13,0x3c2));
          uVar9 = uVar8;
          goto LAB_14f74fa5f;
        }
        lVar2 = *(longlong *)((int *)puVar1[1] + 2);
        uVar10 = *(undefined8 *)(lVar2 + 8);
        *(undefined8 *)(lVar2 + 8) = 0;
        uVar11 = **(undefined4 **)(puVar1[1] + 8);
      }
      uVar12 = 0;
      iVar3 = RSA_pkey_ctx_ctrl(lVar4,0xffffffff,0x1001,4,0);
      uVar9 = uVar8;
      if (((0 < iVar3) &&
          (iVar3 = EVP_PKEY_CTX_ctrl(lVar4,6,0x300,0x1009,uVar12 & 0xffffffff00000000,lVar7),
          0 < iVar3)) && (iVar3 = RSA_pkey_ctx_ctrl(lVar4,0x3f8,0x1005,0,lVar6), 0 < iVar3)) {
        iVar3 = EVP_PKEY_CTX_ctrl(lVar4,6,0x300,0x100a,uVar11,uVar10);
        uVar9 = 0xffffffff;
        if (0 < iVar3) {
          uVar9 = 1;
        }
      }
    }
  }
LAB_14f74fa5f:
  RSA_OAEP_PARAMS_free(puVar5);
  return uVar9;
}

// FUN_14f74fa80 @ 14f74fa80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f74fa80(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  int *in_stack_ffffffffffffffb8;
  undefined8 *puVar8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f74fa92;
  lVar7 = 0;
  lVar6 = 0;
  local_res18 = 0;
  lVar3 = CMS_RecipientInfo_get0_pkey_ctx();
  local_res10[0] = 1;
  iVar1 = CMS_RecipientInfo_ktri_get0_algs(param_1,0,0,&local_res20);
  if (0 < iVar1) {
    if (lVar3 != 0) {
      in_stack_ffffffffffffffb8 = local_res10;
      iVar1 = RSA_pkey_ctx_ctrl(lVar3,0xffffffff,0x1006,0,in_stack_ffffffffffffffb8);
      if (iVar1 < 1) {
        return 0;
      }
    }
    if (local_res10[0] == 1) {
      uVar4 = OBJ_nid2obj(6);
      X509_ALGOR_set0(local_res20,uVar4,5);
      return 1;
    }
    if (local_res10[0] == 4) {
      iVar1 = EVP_PKEY_CTX_ctrl(lVar3,6,0x300,0x100b,
                                (ulonglong)in_stack_ffffffffffffffb8 & 0xffffffff00000000,&local_38)
      ;
      lVar5 = lVar7;
      if (0 < iVar1) {
        puVar8 = &local_30;
        iVar1 = RSA_pkey_ctx_ctrl(lVar3,0x3f8,0x1008,0,puVar8);
        lVar5 = 0;
        if ((((0 < iVar1) &&
             (iVar1 = EVP_PKEY_CTX_ctrl(lVar3,6,0x300,0x100c,(ulonglong)puVar8 & 0xffffffff00000000,
                                        &local_28), -1 < iVar1)) &&
            (lVar5 = RSA_OAEP_PARAMS_new(), lVar7 = lVar6, lVar5 != 0)) &&
           ((iVar2 = FUN_14f750050(lVar5,local_38), iVar2 != 0 &&
            (iVar2 = FUN_14f7500c0(lVar5 + 8,local_30), iVar2 != 0)))) {
          if (0 < iVar1) {
            lVar3 = X509_ALGOR_new();
            *(longlong *)(lVar5 + 0x10) = lVar3;
            if ((lVar3 == 0) || (lVar3 = ASN1_OCTET_STRING_new(), lVar3 == 0)) goto LAB_14f74fcbc;
            iVar1 = ASN1_OCTET_STRING_set(lVar3,local_28,iVar1);
            if (iVar1 == 0) {
              ASN1_OCTET_STRING_free(lVar3);
              goto LAB_14f74fcbc;
            }
            uVar4 = OBJ_nid2obj(0x3a7);
            X509_ALGOR_set0(*(undefined8 *)(lVar5 + 0x10),uVar4,4,lVar3);
          }
          uVar4 = RSA_OAEP_PARAMS_it();
          lVar3 = ASN1_item_pack(lVar5,uVar4,&local_res18);
          if (lVar3 != 0) {
            uVar4 = OBJ_nid2obj(0x397);
            X509_ALGOR_set0(local_res20,uVar4,0x10,local_res18);
            local_res18 = 0;
            lVar7 = 1;
          }
        }
      }
LAB_14f74fcbc:
      RSA_OAEP_PARAMS_free(lVar5);
      ASN1_STRING_free(local_res18);
      return lVar7;
    }
  }
  return 0;
}

// FUN_14f74fcf0 @ 14f74fcf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74fcf0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 uVar4;
  
  uVar4 = 0x14f74fd00;
  local_res10[0] = 1;
  lVar2 = CMS_SignerInfo_get0_pkey_ctx();
  CMS_SignerInfo_get0_algs(param_1,0,0,0,local_res18,uVar4);
  if ((lVar2 != 0) && (iVar1 = RSA_pkey_ctx_ctrl(lVar2,0xffffffff,0x1006,0,local_res10), iVar1 < 1))
  {
    return 0;
  }
  if (local_res10[0] == 1) {
    uVar4 = OBJ_nid2obj(6);
    lVar2 = 0;
    uVar3 = 5;
  }
  else {
    if ((local_res10[0] != 6) || (lVar2 = FUN_14f74fff0(lVar2), lVar2 == 0)) {
      return 0;
    }
    uVar4 = OBJ_nid2obj(0x390);
    uVar3 = 0x10;
  }
  X509_ALGOR_set0(local_res18[0],uVar4,uVar3,lVar2);
  return 1;
}

// FUN_14f74fdd0 @ 14f74fdd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74fdd0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined8 *local_res18 [2];
  undefined8 **ppuVar3;
  undefined8 uVar5;
  undefined4 uVar4;
  
  uVar5 = 0x14f74fde0;
  puVar2 = (undefined8 *)CMS_SignerInfo_get0_pkey_ctx();
  ppuVar3 = local_res18;
  CMS_SignerInfo_get0_algs(param_1,0,0,0,ppuVar3,uVar5);
  uVar4 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  iVar1 = OBJ_obj2nid(*local_res18[0]);
  if (iVar1 == 0x390) {
    uVar5 = FUN_14f750950(0,puVar2,local_res18[0],0);
    return uVar5;
  }
  if (*(int *)*puVar2 == 0x390) {
    ERR_put_error(4,0x9e,0x90,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar4,0x2fc));
    return 0;
  }
  if (iVar1 != 6) {
    iVar1 = OBJ_find_sigid_algs(iVar1,0,local_res10);
    if ((iVar1 == 0) || (local_res10[0] != 6)) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f74fec0 @ 14f74fec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74fec0(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffe8;
  uint uVar4;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = EVP_PKEY_CTX_get0_pkey();
  iVar2 = EVP_PKEY_CTX_ctrl(param_1,0xffffffff,0xf8,0xd,(ulonglong)uVar4 << 0x20,&local_res18);
  if (((iVar2 < 1) || (iVar2 = RSA_pkey_ctx_ctrl(param_1,0x3f8,0x1008,0,&local_res20), iVar2 < 1))
     || (iVar2 = RSA_pkey_ctx_ctrl(param_1,0x18,0x1007,0,local_res10), iVar2 == 0)) {
    return 0;
  }
  if (local_res10[0] == -1) {
    local_res10[0] = EVP_MD_size(local_res18);
  }
  else if (local_res10[0] + 3U < 2) {
    iVar2 = EVP_MD_size(local_res18);
    local_res10[0] = EVP_PKEY_size(uVar3);
    local_res10[0] = local_res10[0] + (-2 - iVar2);
    bVar1 = EVP_PKEY_bits(uVar3);
    if ((bVar1 & 7) == 1) {
      local_res10[0] = local_res10[0] + -1;
    }
    if (local_res10[0] < 0) {
      return 0;
    }
  }
  uVar3 = rsa_pss_params_create(local_res18,local_res20,local_res10[0]);
  return uVar3;
}

// FUN_14f74fff0 @ 14f74fff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74fff0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14f74fec0();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = RSA_PSS_PARAMS_it();
  uVar2 = ASN1_item_pack(lVar1,uVar2,0);
  RSA_PSS_PARAMS_free(lVar1);
  return uVar2;
}

// FUN_14f750050 @ 14f750050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f750050(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    iVar1 = EVP_MD_type(param_2);
    if (iVar1 != 0x40) {
      lVar2 = X509_ALGOR_new();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      X509_ALGOR_set_md(lVar2,param_2);
    }
  }
  return 1;
}

// FUN_14f7500c0 @ 14f7500c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7500c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar2 = 0;
  local_res8 = 0;
  *param_1 = 0;
  if ((param_2 == 0) || (iVar1 = EVP_MD_type(param_2), iVar1 == 0x40)) {
    return true;
  }
  iVar1 = EVP_MD_type(param_2);
  if (iVar1 != 0x40) {
    lVar2 = X509_ALGOR_new();
    if (lVar2 == 0) goto LAB_14f750185;
    X509_ALGOR_set_md(lVar2,param_2);
  }
  uVar3 = X509_ALGOR_it();
  lVar4 = ASN1_item_pack(lVar2,uVar3,&local_res8);
  if (lVar4 != 0) {
    lVar4 = X509_ALGOR_new();
    *param_1 = lVar4;
    if (lVar4 != 0) {
      uVar3 = OBJ_nid2obj(0x38f);
      X509_ALGOR_set0(*param_1,uVar3,0x10,local_res8);
      local_res8 = 0;
    }
  }
LAB_14f750185:
  ASN1_STRING_free(local_res8);
  X509_ALGOR_free(lVar2);
  return *param_1 != 0;
}

// FUN_14f7501c0 @ 14f7501c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7501c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x38f) {
    return 0;
  }
  uVar2 = X509_ALGOR_it();
  uVar2 = ASN1_TYPE_unpack_sequence(uVar2,param_1[1]);
  return uVar2;
}

// FUN_14f750210 @ 14f750210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f750210(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = RSA_OAEP_PARAMS_it();
  lVar4 = ASN1_TYPE_unpack_sequence(uVar3,*(undefined8 *)(param_1 + 8));
  if (lVar4 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(lVar4 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = OBJ_obj2nid(*puVar1);
    if (iVar2 == 0x38f) {
      uVar3 = X509_ALGOR_it();
      lVar5 = ASN1_TYPE_unpack_sequence(uVar3,puVar1[1]);
    }
    else {
      lVar5 = 0;
    }
    *(longlong *)(lVar4 + 0x18) = lVar5;
    if (lVar5 == 0) {
      RSA_OAEP_PARAMS_free(lVar4);
      return 0;
    }
  }
  return lVar4;
}

// FUN_14f7502b0 @ 14f7502b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7502b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res18 [2];
  undefined8 local_res20;
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7502c0;
  X509_ALGOR_get0(&local_res20,local_res18,local_18,param_2);
  iVar1 = OBJ_obj2nid(local_res20);
  if ((iVar1 == 0x390) && (local_res18[0] != -1)) {
    if (local_res18[0] != 0x10) {
      ERR_put_error(4,0xa4,0x95,"crypto\\rsa\\rsa_ameth.c",0x42);
      return false;
    }
    lVar2 = FUN_14f750410(param_2);
    *(longlong *)(param_1 + 0x60) = lVar2;
    return lVar2 != 0;
  }
  return true;
}

// FUN_14f750370 @ 14f750370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f750370(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  *param_2 = 0;
  if (**(int **)(param_1 + 0x10) == 0x390) {
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      *param_3 = 0xffffffff;
    }
    else {
      uVar1 = RSA_PSS_PARAMS_it();
      lVar2 = ASN1_item_pack(*(undefined8 *)(lVar2 + 0x60),uVar1,param_2);
      if (lVar2 == 0) {
        return 0;
      }
      *param_3 = 0x10;
    }
  }
  else {
    *param_3 = 5;
  }
  return 1;
}

// FUN_14f750410 @ 14f750410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f750410(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = RSA_PSS_PARAMS_it();
  lVar4 = ASN1_TYPE_unpack_sequence(uVar3,*(undefined8 *)(param_1 + 8));
  if (lVar4 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(lVar4 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = OBJ_obj2nid(*puVar1);
    if (iVar2 == 0x38f) {
      uVar3 = X509_ALGOR_it();
      lVar5 = ASN1_TYPE_unpack_sequence(uVar3,puVar1[1]);
    }
    else {
      lVar5 = 0;
    }
    *(longlong *)(lVar4 + 0x20) = lVar5;
    if (lVar5 == 0) {
      RSA_PSS_PARAMS_free(lVar4);
      return 0;
    }
  }
  return lVar4;
}

// rsa_pss_get_param @ 14f7504b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_pss_get_param(undefined8 *param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7504cb;
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = FUN_14f74f7a0(*param_1);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_14f74f7a0(param_1[4]);
      *param_3 = lVar2;
      if (lVar2 != 0) {
        if (param_1[2] == 0) {
          *param_4 = 0x14;
        }
        else {
          iVar1 = ASN1_INTEGER_get();
          *param_4 = iVar1;
          if (iVar1 < 0) {
            ERR_put_error(4,0x97,0x96,"crypto\\rsa\\rsa_ameth.c",0x2dc,uVar3);
            return 0;
          }
        }
        if ((param_1[3] != 0) && (iVar1 = ASN1_INTEGER_get(), iVar1 != 1)) {
          ERR_put_error(4,0x97,0x8b,"crypto\\rsa\\rsa_ameth.c",0x2e8,uVar3);
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f7505a0 @ 14f7505a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f7505a0(undefined8 param_1,int param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar3 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  iVar1 = BIO_indent(param_1,param_4,0x80);
  puVar5 = puVar3;
  puVar8 = puVar3;
  if (iVar1 == 0) goto LAB_14f75085f;
  if (param_2 == 0) {
    if (param_3 == (longlong *)0x0) {
      iVar1 = BIO_puts(param_1,"(INVALID PSS PARAMETERS)\n");
      return (undefined8 *)(ulonglong)(0 < iVar1);
    }
  }
  else {
    if (param_3 == (longlong *)0x0) {
      iVar1 = BIO_puts(param_1,"No PSS parameter restrictions\n");
      return (undefined8 *)(ulonglong)(0 < iVar1);
    }
    iVar1 = BIO_puts(param_1,"PSS parameter restrictions:");
    if (iVar1 < 1) {
      return (undefined8 *)0x0;
    }
  }
  iVar1 = BIO_puts(param_1,"\n");
  puVar8 = puVar7;
  if (iVar1 < 1) goto LAB_14f75085f;
  iVar1 = param_4 + 2;
  if (param_2 == 0) {
    iVar1 = param_4;
  }
  iVar2 = BIO_indent(param_1,iVar1,0x80);
  puVar8 = puVar3;
  if ((iVar2 == 0) || (iVar2 = BIO_puts(param_1,"Hash Algorithm: "), puVar8 = puVar7, iVar2 < 1))
  goto LAB_14f75085f;
  if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    iVar2 = BIO_puts(param_1,"sha1 (default)");
  }
  else {
    iVar2 = i2a_ASN1_OBJECT(param_1,*(undefined8 *)*param_3);
  }
  if ((((iVar2 < 1) || (iVar2 = BIO_puts(param_1,"\n"), puVar5 = puVar4, iVar2 < 1)) ||
      (iVar2 = BIO_indent(param_1,iVar1,0x80), iVar2 == 0)) ||
     (iVar2 = BIO_puts(param_1,"Mask Algorithm: "), iVar2 < 1)) goto LAB_14f75085f;
  if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
    pcVar6 = "mgf1 with sha1 (default)";
LAB_14f750768:
    iVar2 = BIO_puts(param_1,pcVar6);
  }
  else {
    iVar2 = i2a_ASN1_OBJECT(param_1,*(undefined8 *)param_3[1]);
    if ((iVar2 < 1) || (iVar2 = BIO_puts(param_1," with "), iVar2 < 1)) goto LAB_14f75085f;
    puVar3 = (undefined8 *)FUN_14f7501c0(param_3[1]);
    if (puVar3 == (undefined8 *)0x0) {
      pcVar6 = "INVALID";
      goto LAB_14f750768;
    }
    iVar2 = i2a_ASN1_OBJECT(param_1,*puVar3);
  }
  puVar8 = puVar3;
  if (0 < iVar2) {
    BIO_puts(param_1,"\n");
    iVar2 = BIO_indent(param_1,iVar1,0x80);
    if (iVar2 != 0) {
      pcVar6 = "";
      if (param_2 != 0) {
        pcVar6 = "Minimum";
      }
      iVar2 = BIO_printf(param_1,"%s Salt Length: 0x",pcVar6);
      if (0 < iVar2) {
        if (param_3[2] == 0) {
          iVar2 = BIO_puts(param_1,"14 (default)");
        }
        else {
          iVar2 = i2a_ASN1_INTEGER();
        }
        if (0 < iVar2) {
          BIO_puts(param_1,"\n");
          iVar1 = BIO_indent(param_1,iVar1,0x80);
          if ((iVar1 != 0) && (iVar1 = BIO_puts(param_1,"Trailer Field: 0x"), 0 < iVar1)) {
            if (param_3[3] == 0) {
              iVar1 = BIO_puts(param_1,"BC (default)");
            }
            else {
              iVar1 = i2a_ASN1_INTEGER();
            }
            if (0 < iVar1) {
              BIO_puts(param_1,"\n");
              puVar5 = (undefined8 *)&DAT_00000001;
            }
          }
        }
      }
    }
  }
LAB_14f75085f:
  X509_ALGOR_free(puVar8);
  return puVar5;
}

// rsa_pss_params_create @ 14f750890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rsa_pss_params_create(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = RSA_PSS_PARAMS_new();
  if (lVar2 != 0) {
    if (param_3 != 0x14) {
      lVar3 = ASN1_INTEGER_new();
      *(longlong *)(lVar2 + 0x10) = lVar3;
      if ((lVar3 == 0) || (iVar1 = ASN1_INTEGER_set(lVar3,param_3), iVar1 == 0)) goto LAB_14f75091f;
    }
    iVar1 = FUN_14f750050(lVar2,param_1);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        param_1 = param_2;
      }
      iVar1 = FUN_14f7500c0(lVar2 + 8,param_1);
      if ((iVar1 != 0) && (iVar1 = FUN_14f750050(lVar2 + 0x20,param_1), iVar1 != 0)) {
        return lVar2;
      }
    }
  }
LAB_14f75091f:
  RSA_PSS_PARAMS_free(lVar2);
  return 0;
}

// FUN_14f750950 @ 14f750950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f750950(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar9;
  uint uVar11;
  longlong lVar10;
  
  uVar11 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar7 = 0xffffffff;
  local_res10 = param_2;
  iVar1 = OBJ_obj2nid(*param_3);
  if (iVar1 != 0x390) {
    ERR_put_error(4,0x9b,0x9b,"crypto\\rsa\\rsa_ameth.c",CONCAT44(uVar11,0x2a5));
    return 0xffffffff;
  }
  puVar4 = (undefined8 *)FUN_14f750410(param_3);
  if (((puVar4 == (undefined8 *)0x0) || (lVar5 = FUN_14f74f7a0(*puVar4), lVar5 == 0)) ||
     (lVar6 = FUN_14f74f7a0(puVar4[4]), lVar6 == 0)) {
LAB_14f750a2a:
    uVar9 = CONCAT44(uVar11,0x2ac);
    uVar7 = 0x95;
  }
  else {
    if (puVar4[2] != 0) {
      iVar1 = ASN1_INTEGER_get();
      if (-1 < iVar1) goto LAB_14f750a7c;
      uVar7 = CONCAT44(uVar11,0x2dc);
      uVar8 = 0x96;
LAB_14f750a25:
      ERR_put_error(4,0x97,uVar8,"crypto\\rsa\\rsa_ameth.c",uVar7);
      uVar11 = (uint)((ulonglong)uVar7 >> 0x20);
      goto LAB_14f750a2a;
    }
    iVar1 = 0x14;
LAB_14f750a7c:
    if ((puVar4[3] != 0) && (iVar2 = ASN1_INTEGER_get(), iVar2 != 1)) {
      uVar7 = CONCAT44(uVar11,0x2e8);
      uVar8 = 0x8b;
      goto LAB_14f750a25;
    }
    if (param_4 != 0) {
      iVar2 = EVP_DigestVerifyInit(param_1,&local_res10,lVar5,0,param_4);
      if (iVar2 == 0) goto LAB_14f750a4e;
LAB_14f750b3b:
      iVar2 = RSA_pkey_ctx_ctrl(local_res10,0xffffffff,0x1001,6,0);
      if (((0 < iVar2) && (iVar1 = RSA_pkey_ctx_ctrl(local_res10,0x18,0x1002,iVar1,0), 0 < iVar1))
         && (iVar1 = RSA_pkey_ctx_ctrl(local_res10,0x3f8,0x1005,0,lVar6), uVar7 = 0xffffffff,
            0 < iVar1)) {
        uVar7 = 1;
      }
      goto LAB_14f750a4e;
    }
    lVar10 = (ulonglong)uVar11 << 0x20;
    iVar2 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,0xf8,0xd,lVar10,local_res18);
    uVar8 = (undefined4)((ulonglong)lVar10 >> 0x20);
    if (iVar2 < 1) goto LAB_14f750a4e;
    iVar2 = EVP_MD_type(local_res18[0]);
    iVar3 = EVP_MD_type(lVar5);
    if (iVar3 == iVar2) goto LAB_14f750b3b;
    uVar9 = CONCAT44(uVar8,0x2b9);
    uVar7 = 0x9e;
  }
  ERR_put_error(4,0x9b,uVar7,"crypto\\rsa\\rsa_ameth.c",uVar9);
  uVar7 = 0xffffffff;
LAB_14f750a4e:
  RSA_PSS_PARAMS_free(puVar4);
  return uVar7;
}

// FUN_14f750bc0 @ 14f750bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f750bc0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f750be0 @ 14f750be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f750be0(void)

{
  OPENSSL_sk_value();
  return;
}

