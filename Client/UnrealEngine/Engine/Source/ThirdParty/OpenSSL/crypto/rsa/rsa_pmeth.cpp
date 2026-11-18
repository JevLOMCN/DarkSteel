// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 17

// FUN_14f759d10 @ 14f759d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f759d10(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(lVar1 + 0x1c);
  if (iVar3 == 4) {
    uVar2 = RSA_size(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
    iVar3 = FUN_14f75b660(lVar1,param_1);
    if (iVar3 != 0) {
      iVar3 = RSA_padding_add_PKCS1_OAEP_mgf1
                        (*(undefined8 *)(lVar1 + 0x38),uVar2,param_4,param_5,
                         *(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48),
                         *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
      if (iVar3 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x10);
        param_4 = *(undefined8 *)(lVar1 + 0x38);
        iVar3 = 3;
        param_5 = uVar2;
        goto LAB_14f759dd1;
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x10);
LAB_14f759dd1:
    uVar4 = RSA_public_encrypt(param_5,param_4,param_2,*(undefined8 *)(lVar5 + 0x28),iVar3);
    if (-1 < (int)uVar4) {
      *param_3 = (longlong)(int)uVar4;
      uVar4 = 1;
    }
  }
  return uVar4;
}

// FUN_14f759e10 @ 14f759e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f759e10(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar1 + 0x1c) == 4) {
    iVar2 = FUN_14f75b660(lVar1,param_1);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    uVar4 = RSA_private_decrypt(param_5,param_4,*(undefined8 *)(lVar1 + 0x38),
                                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),3);
    if ((int)uVar4 < 1) {
      return uVar4;
    }
    uVar3 = RSA_padding_check_PKCS1_OAEP_mgf1
                      (param_2,uVar4 & 0xffffffff,*(undefined8 *)(lVar1 + 0x38),uVar4 & 0xffffffff,
                       (int)uVar4,*(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48),
                       *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  }
  else {
    uVar3 = RSA_private_decrypt(param_5,param_4,param_2,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),
                                *(int *)(lVar1 + 0x1c));
  }
  uVar4 = (longlong)(int)uVar3 >> 0x3f;
  *param_3 = uVar4 & *param_3 | ~uVar4 & (longlong)(int)uVar3;
  return (ulonglong)(~((int)uVar3 >> 0x1f) & 1U | (int)uVar3 >> 0x1f & uVar3);
}

// FUN_14f759f60 @ 14f759f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f759f60(undefined8 *param_1,int param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f759f7b;
  piVar1 = (int *)param_1[5];
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (param_3 - 1U < 6) {
        iVar3 = FUN_14f75b450(*(undefined8 *)(piVar1 + 8),param_3);
        if (iVar3 == 0) {
          return 0;
        }
        if (param_3 == 6) {
          bVar6 = (*(byte *)(param_1 + 4) & 0x18) == 0;
        }
        else {
          if (*(int *)*param_1 == 0x390) goto LAB_14f75a0d1;
          if (param_3 != 4) goto LAB_14f75a0c7;
          bVar6 = (*(uint *)(param_1 + 4) & 0x300) == 0;
        }
        if (!bVar6) {
          if (*(longlong *)(piVar1 + 8) == 0) {
            uVar8 = EVP_sha1();
            *(undefined8 *)(piVar1 + 8) = uVar8;
          }
LAB_14f75a0c7:
          piVar1[7] = param_3;
          return 1;
        }
      }
LAB_14f75a0d1:
      uVar7 = 0x1ac;
      uVar5 = 0x90;
    }
    else {
      switch(param_2) {
      case 1:
        iVar3 = FUN_14f75b450(param_4,piVar1[7]);
        if (iVar3 == 0) {
          return 0;
        }
        if (piVar1[0xd] != -1) {
          iVar3 = EVP_MD_type(*(undefined8 *)(piVar1 + 8));
          iVar2 = EVP_MD_type(param_4);
          if (iVar3 == iVar2) {
            return 1;
          }
          ERR_put_error(4,0x8f,0x91,"crypto\\rsa\\rsa_pmeth.c",0x1fa,uVar8);
          return 0;
        }
        goto LAB_14f75a2e4;
      case 3:
      case 4:
      case 9:
      case 10:
        if (*(int *)*param_1 != 0x390) {
          return 1;
        }
      case 2:
        uVar7 = 0x244;
        uVar5 = 0x94;
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      default:
        goto LAB_14f75a060;
      case 0xd:
        *param_4 = *(longlong *)(piVar1 + 8);
        return 1;
      }
    }
    goto LAB_14f75a056;
  }
  switch(param_2) {
  case 0x1002:
  case 0x1007:
    if (piVar1[7] == 6) {
      if (param_2 == 0x1007) {
        *(int *)param_4 = piVar1[0xc];
        return 1;
      }
      if (param_3 < -3) {
        return -2;
      }
      if (piVar1[0xd] == -1) {
LAB_14f75a1a1:
        piVar1[0xc] = param_3;
        return 1;
      }
      if (param_3 != -2) {
        if (param_3 == -1) {
          iVar3 = EVP_MD_size(*(undefined8 *)(piVar1 + 8));
          if (iVar3 < piVar1[0xd]) {
LAB_14f75a1b7:
            ERR_put_error(4,0x8f,0xa4,"crypto\\rsa\\rsa_pmeth.c",0x1c7,uVar8);
            return 0;
          }
        }
        else if ((-1 < param_3) && (param_3 < piVar1[0xd])) goto LAB_14f75a1b7;
        goto LAB_14f75a1a1;
      }
      if (*(int *)(param_1 + 4) != 0x10) goto LAB_14f75a1a1;
      uVar7 = 0x1c1;
    }
    else {
      uVar7 = 0x1b6;
    }
    uVar5 = 0x92;
    break;
  case 0x1003:
    if (0x1ff < param_3) {
      *piVar1 = param_3;
      return 1;
    }
    uVar7 = 0x1d1;
    uVar5 = 0x78;
    break;
  case 0x1004:
    if (((param_4 != (longlong *)0x0) && (iVar3 = BN_is_odd(param_4), iVar3 != 0)) &&
       (iVar3 = BN_is_one(param_4), iVar3 == 0)) {
      BN_free(*(undefined8 *)(piVar1 + 2));
      *(longlong **)(piVar1 + 2) = param_4;
      return 1;
    }
    uVar7 = 0x1d9;
    uVar5 = 0x65;
    break;
  case 0x1005:
  case 0x1008:
    if ((piVar1[7] - 4U & 0xfffffffd) == 0) {
      if (param_2 == 0x1008) {
        lVar4 = *(longlong *)(piVar1 + 10);
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(piVar1 + 8);
        }
        *param_4 = lVar4;
        return 1;
      }
      if (piVar1[0xd] != -1) {
        iVar3 = EVP_MD_type(*(undefined8 *)(piVar1 + 10));
        iVar2 = EVP_MD_type(param_4);
        if (iVar3 == iVar2) {
          return 1;
        }
        ERR_put_error(4,0x8f,0x98,"crypto\\rsa\\rsa_pmeth.c",0x214);
        return 0;
      }
      *(longlong **)(piVar1 + 10) = param_4;
      return 1;
    }
    uVar7 = 0x208;
    uVar5 = 0x9c;
    break;
  case 0x1006:
    *(int *)param_4 = piVar1[7];
    return 1;
  case 0x1009:
  case 0x100b:
    if (piVar1[7] == 4) {
      if (param_2 == 0x100b) {
        *param_4 = *(longlong *)(piVar1 + 8);
        return 1;
      }
LAB_14f75a2e4:
      *(longlong **)(piVar1 + 8) = param_4;
      return 1;
    }
    uVar7 = 0x1eb;
    goto LAB_14f75a2b1;
  case 0x100a:
    if (piVar1[7] == 4) {
      CRYPTO_free(*(undefined8 *)(piVar1 + 0x10),"crypto\\rsa\\rsa_pmeth.c",0x220);
      if ((param_4 != (longlong *)0x0) && (0 < param_3)) {
        *(longlong **)(piVar1 + 0x10) = param_4;
        *(longlong *)(piVar1 + 0x12) = (longlong)param_3;
        return 1;
      }
      piVar1[0x10] = 0;
      piVar1[0x11] = 0;
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      return 1;
    }
    uVar7 = 0x21d;
    goto LAB_14f75a2b1;
  case 0x100c:
    if (piVar1[7] == 4) {
      *param_4 = *(longlong *)(piVar1 + 0x10);
      return piVar1[0x12];
    }
    uVar7 = 0x22c;
LAB_14f75a2b1:
    uVar5 = 0x8d;
    break;
  case 0x100d:
    if (param_3 - 2U < 4) {
      piVar1[4] = param_3;
      return 1;
    }
    uVar7 = 0x1e2;
    uVar5 = 0xa5;
    break;
  default:
    goto LAB_14f75a060;
  }
LAB_14f75a056:
  ERR_put_error(4,0x8f,uVar5,"crypto\\rsa\\rsa_pmeth.c",uVar7,uVar8);
LAB_14f75a060:
  return -2;
}

// FUN_14f75a490 @ 14f75a490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f75a490(undefined8 *param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x14f75a4a5;
  if (param_3 == (char *)0x0) {
    ERR_put_error(4,0x90,0x93,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x251),0x14f75a4a5);
  }
  else {
    iVar1 = strcmp(param_2,"rsa_padding_mode");
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != (&s_pkcs1)[lVar4]) {
          lVar4 = 0;
          goto LAB_14f75a540;
        }
        lVar4 = lVar5;
      } while (lVar5 != 6);
      uVar7 = 1;
      goto LAB_14f75a629;
    }
    iVar1 = strcmp(param_2,"rsa_pss_saltlen");
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != "digest"[lVar4]) {
          lVar4 = 0;
          goto LAB_14f75a6e0;
        }
        lVar4 = lVar5;
      } while (lVar5 != 7);
      iVar1 = -1;
      goto LAB_14f75a724;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_bits");
    if (iVar1 == 0) {
      iVar1 = atoi(param_3);
      uVar3 = RSA_pkey_ctx_ctrl(param_1,4,0x1003,iVar1,0);
      return uVar3;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_pubexp");
    if (iVar1 == 0) {
      local_res18[0] = 0;
      iVar1 = BN_asc2bn(local_res18,param_3);
      if (iVar1 != 0) {
        uVar2 = RSA_pkey_ctx_ctrl(param_1,4,0x1004,0,local_res18[0]);
        if ((int)uVar2 < 1) {
          BN_free(local_res18[0]);
        }
        return (ulonglong)uVar2;
      }
    }
    else {
      iVar1 = strcmp(param_2,"rsa_keygen_primes");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar3 = RSA_pkey_ctx_ctrl(param_1,4,0x100d,iVar1,0);
        return uVar3;
      }
      iVar1 = strcmp(param_2,"rsa_mgf1_md");
      if (iVar1 == 0) {
        uVar3 = EVP_PKEY_CTX_md(param_1,0x3f8,0x1005,param_3);
        return uVar3;
      }
      if (*(int *)*param_1 == 0x390) {
        iVar1 = strcmp(param_2,"rsa_pss_keygen_mgf1_md");
        if (iVar1 == 0) {
          uVar3 = EVP_PKEY_CTX_md(param_1,4,0x1005,param_3);
          return uVar3;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_md");
        if (iVar1 == 0) {
          uVar3 = EVP_PKEY_CTX_md(param_1,4,1,param_3);
          return uVar3;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_saltlen");
        if (iVar1 == 0) {
          iVar1 = atoi(param_3);
          uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x390,4,0x1002,CONCAT44(uVar6,iVar1),0);
          return uVar3;
        }
      }
      iVar1 = strcmp(param_2,"rsa_oaep_md");
      if (iVar1 == 0) {
        uVar3 = EVP_PKEY_CTX_md(param_1,0x300,0x1009,param_3);
        return uVar3;
      }
      iVar1 = strcmp(param_2,"rsa_oaep_label");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      lVar4 = OPENSSL_hexstr2buf(param_3,local_res18);
      if (lVar4 != 0) {
        uVar2 = EVP_PKEY_CTX_ctrl(param_1,6,0x300,0x100a,CONCAT44(uVar6,(undefined4)local_res18[0]),
                                  lVar4);
        if ((int)uVar2 < 1) {
          CRYPTO_free(lVar4,"crypto\\rsa\\rsa_pmeth.c",0x2b6);
        }
        return (ulonglong)uVar2;
      }
    }
  }
  return 0;
  while (lVar4 = lVar5, lVar5 != 7) {
LAB_14f75a540:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&s_sslv23)[lVar4]) {
      lVar4 = 0;
      goto LAB_14f75a570;
    }
  }
  uVar7 = 2;
  goto LAB_14f75a629;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_14f75a570:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&s_none)[lVar4]) {
      lVar4 = 0;
      goto LAB_14f75a5a0;
    }
  }
  uVar7 = 3;
  goto LAB_14f75a629;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_14f75a5a0:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&s_oeap)[lVar4]) {
      lVar4 = 0;
      goto LAB_14f75a5c3;
    }
  }
  uVar7 = 4;
  goto LAB_14f75a629;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_14f75a5c3:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&s_oaep)[lVar4]) {
      lVar4 = 0;
      goto LAB_14f75a5f0;
    }
  }
  uVar7 = 4;
  goto LAB_14f75a629;
  while (lVar4 = lVar5, lVar5 != 4) {
LAB_14f75a6e0:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&s_max)[lVar4]) {
      lVar4 = 0;
      goto LAB_14f75a703;
    }
  }
  iVar1 = -3;
  goto LAB_14f75a724;
  while (lVar4 = lVar5 + 1, lVar5 + 1 != 5) {
LAB_14f75a703:
    lVar5 = lVar4;
    if (param_3[lVar5] != (&s_auto)[lVar5]) {
      iVar1 = atoi(param_3);
      goto LAB_14f75a724;
    }
  }
  iVar1 = (int)lVar5 + -6;
LAB_14f75a724:
  uVar3 = RSA_pkey_ctx_ctrl(param_1,0x18,0x1002,iVar1,0);
  return uVar3;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_14f75a5f0:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&s_x931)[lVar4]) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != (&s_pss)[lVar4]) {
          ERR_put_error(4,0x90,0x76,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x266),uVar7);
          return 0xfffffffe;
        }
        lVar4 = lVar5;
      } while (lVar5 != 4);
      uVar7 = 6;
      goto LAB_14f75a629;
    }
  }
  uVar7 = 5;
LAB_14f75a629:
  uVar3 = RSA_pkey_ctx_ctrl(param_1,0xffffffff,0x1001,uVar7,0);
  return uVar3;
}

// FUN_14f75aa20 @ 14f75aa20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f75aa20(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f75aa30;
  puVar1 = (undefined4 *)param_1[5];
  if (*(longlong *)(puVar1 + 2) == 0) {
    lVar3 = BN_new();
    *(longlong *)(puVar1 + 2) = lVar3;
    if ((lVar3 == 0) || (iVar2 = BN_set_word(lVar3,0x10001), iVar2 == 0)) {
      return 0;
    }
  }
  lVar3 = RSA_new();
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = 0;
  if (param_1[7] != 0) {
    uVar4 = BN_GENCB_new();
    if (uVar4 == 0) {
      RSA_free(lVar3);
      return 0;
    }
    evp_pkey_set_cb_translate(uVar4,param_1);
  }
  iVar2 = RSA_generate_multi_prime_key
                    (lVar3,*puVar1,puVar1[4],*(undefined8 *)(puVar1 + 2),uVar4,uVar6);
  BN_GENCB_free(uVar4);
  if (iVar2 < 1) {
    RSA_free(lVar3);
  }
  else {
    lVar5 = param_1[5];
    if ((*(int *)*param_1 == 0x390) &&
       (((*(longlong *)(lVar5 + 0x20) != 0 || (*(longlong *)(lVar5 + 0x28) != 0)) ||
        (*(int *)(lVar5 + 0x30) != -2)))) {
      uVar4 = (ulonglong)*(uint *)(lVar5 + 0x30);
      if (*(uint *)(lVar5 + 0x30) == 0xfffffffe) {
        uVar4 = 0;
      }
      lVar5 = rsa_pss_params_create(*(longlong *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),uVar4)
      ;
      *(longlong *)(lVar3 + 0x60) = lVar5;
      if (lVar5 == 0) {
        RSA_free(lVar3);
        return 0;
      }
    }
    EVP_PKEY_assign(param_2,*(undefined4 *)*param_1,lVar3);
  }
  return iVar2;
}

// FUN_14f75ab90 @ 14f75ab90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75ab90(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar1 = param_1[5];
  if (*(int *)*param_1 != 0x390) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1[2] + 0x28);
  if (*(longlong *)(lVar2 + 0x60) == 0) {
    return 1;
  }
  iVar4 = rsa_pss_get_param(*(longlong *)(lVar2 + 0x60),&local_res10,&local_res18,local_res8);
  if (iVar4 != 0) {
    iVar5 = EVP_MD_size(local_res10);
    iVar6 = RSA_size(lVar2);
    bVar3 = RSA_bits(lVar2);
    iVar4 = (iVar6 - iVar5) + -1;
    if ((bVar3 & 7) != 1) {
      iVar4 = iVar6 - iVar5;
    }
    if (local_res8[0] <= iVar4) {
      *(int *)(lVar1 + 0x34) = local_res8[0];
      *(undefined8 *)(lVar1 + 0x20) = local_res10;
      *(undefined8 *)(lVar1 + 0x28) = local_res18;
      *(int *)(lVar1 + 0x30) = local_res8[0];
      return 1;
    }
    ERR_put_error(4,0xa5,0x96,"crypto\\rsa\\rsa_pmeth.c",0x335);
  }
  return 0;
}

// FUN_14f75ac90 @ 14f75ac90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75ac90(undefined8 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x50,"crypto\\rsa\\rsa_pmeth.c",0x37);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 0x800;
  puVar2[4] = 2;
  iVar1 = *(int *)*param_1;
  *(undefined8 *)(puVar2 + 0xc) = 0xfffffffffffffffe;
  uVar3 = 1;
  if (iVar1 == 0x390) {
    uVar3 = 6;
  }
  puVar2[7] = uVar3;
  param_1[5] = puVar2;
  param_1[8] = puVar2 + 5;
  *(undefined4 *)(param_1 + 9) = 2;
  return 1;
}

// FUN_14f75ad20 @ 14f75ad20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75ad20(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_14f75ac90();
  if (iVar3 == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(param_2 + 0x28);
  puVar2 = *(undefined4 **)(param_1 + 0x28);
  *puVar2 = *puVar1;
  if (*(longlong *)(puVar1 + 2) != 0) {
    lVar4 = BN_dup();
    *(longlong *)(puVar2 + 2) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  puVar2[7] = puVar1[7];
  *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
  if (*(longlong *)(puVar1 + 0x10) != 0) {
    CRYPTO_free(*(undefined8 *)(puVar2 + 0x10),"crypto\\rsa\\rsa_pmeth.c",0x5d);
    lVar4 = CRYPTO_memdup(*(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x12),
                          "crypto\\rsa\\rsa_pmeth.c",0x5e);
    *(longlong *)(puVar2 + 0x10) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(puVar1 + 0x12);
  }
  return 1;
}

// FUN_14f75adf0 @ 14f75adf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f75adf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    BN_free(*(undefined8 *)(lVar1 + 8));
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x38),"crypto\\rsa\\rsa_pmeth.c",0x76);
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x40),"crypto\\rsa\\rsa_pmeth.c",0x77);
    CRYPTO_free(lVar1,"crypto\\rsa\\rsa_pmeth.c",0x78);
    return;
  }
  return;
}

// FUN_14f75ae70 @ 14f75ae70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f75ae70(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4,
                       size_t param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar7 = 0x14f75ae8c;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    uVar6 = CONCAT44(uVar5,*(undefined4 *)(lVar1 + 0x1c));
LAB_14f75b0a0:
    uVar7 = RSA_private_encrypt((int)param_5,param_4,param_2,uVar2,uVar6,uVar7);
LAB_14f75b0ab:
    if (-1 < (int)uVar7) {
      *param_3 = (longlong)(int)uVar7;
      uVar7 = 1;
    }
  }
  else {
    iVar4 = EVP_MD_size();
    if (param_5 == (longlong)iVar4) {
      iVar4 = EVP_MD_type(*(undefined8 *)(lVar1 + 0x20));
      if (iVar4 == 0x5f) {
        if (*(int *)(lVar1 + 0x1c) == 1) {
          uVar7 = RSA_sign_ASN1_OCTET_STRING(0,param_4,(int)param_5,param_2,local_res8,uVar2);
          if ((int)uVar7 < 1) {
            return uVar7;
          }
          uVar7 = (ulonglong)local_res8[0];
          goto LAB_14f75b0ab;
        }
      }
      else {
        iVar4 = *(int *)(lVar1 + 0x1c);
        if (iVar4 == 5) {
          iVar4 = EVP_PKEY_size(*(undefined8 *)(param_1 + 0x10));
          if ((ulonglong)(longlong)iVar4 < param_5 + 1) {
            ERR_put_error(4,0x8e,0x78,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar5,0x96));
            return 0xffffffff;
          }
          iVar4 = FUN_14f75b660(lVar1,param_1);
          if (iVar4 == 0) {
            ERR_put_error(4,0x8e,0x41,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar5,0x9a));
            return 0xffffffff;
          }
          memcpy(*(void **)(lVar1 + 0x38),param_4,param_5);
          uVar5 = EVP_MD_type(*(undefined8 *)(lVar1 + 0x20));
          uVar3 = RSA_X931_hash_id(uVar5);
          uVar6 = 5;
          *(undefined1 *)(param_5 + *(longlong *)(lVar1 + 0x38)) = uVar3;
          param_5._0_4_ = (int)param_5 + 1;
          param_4 = *(void **)(lVar1 + 0x38);
          goto LAB_14f75b0a0;
        }
        if (iVar4 == 1) {
          uVar5 = EVP_MD_type(*(undefined8 *)(lVar1 + 0x20));
          uVar7 = RSA_sign(uVar5,param_4,(int)param_5,param_2,local_res8,uVar2);
          if ((int)uVar7 < 1) {
            return uVar7;
          }
          uVar7 = (ulonglong)local_res8[0];
          goto LAB_14f75b0ab;
        }
        if ((iVar4 == 6) && (iVar4 = FUN_14f75b660(lVar1,param_1), iVar4 != 0)) {
          uVar7 = (ulonglong)*(uint *)(lVar1 + 0x30);
          iVar4 = RSA_padding_add_PKCS1_PSS_mgf1
                            (uVar2,*(undefined8 *)(lVar1 + 0x38),param_4,
                             *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),uVar7);
          if (iVar4 != 0) {
            param_5._0_4_ = RSA_size(uVar2);
            param_4 = *(void **)(lVar1 + 0x38);
            uVar6 = 3;
            goto LAB_14f75b0a0;
          }
        }
      }
    }
    else {
      ERR_put_error(4,0x8e,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar5,0x86));
    }
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

// FUN_14f75b0e0 @ 14f75b0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f75b0e0(longlong param_1,void *param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(lVar1 + 0x1c);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    local_res8[0] =
         RSA_public_decrypt((undefined4)param_5,param_4,param_2,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),
                            CONCAT44(uVar6,iVar2));
LAB_14f75b273:
    if (-1 < local_res8[0]) {
      *param_3 = (longlong)local_res8[0];
      return 1;
    }
    return local_res8[0];
  }
  if (iVar2 == 5) {
    iVar2 = FUN_14f75b660(lVar1,param_1);
    if (iVar2 != 0) {
      uVar7 = CONCAT44(uVar6,5);
      iVar2 = RSA_public_decrypt((undefined4)param_5,param_4,*(undefined8 *)(lVar1 + 0x38),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),uVar7);
      uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (0 < iVar2) {
        iVar2 = iVar2 + -1;
        uVar3 = EVP_MD_type(*(undefined8 *)(lVar1 + 0x20));
        uVar4 = RSA_X931_hash_id(uVar3);
        if (*(byte *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar2) == uVar4) {
          iVar5 = EVP_MD_size(*(undefined8 *)(lVar1 + 0x20));
          if (iVar2 != iVar5) {
            ERR_put_error(4,0x8d,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xd7));
            return 0;
          }
          local_res8[0] = iVar2;
          if (param_2 != (void *)0x0) {
            memcpy(param_2,*(void **)(lVar1 + 0x38),(longlong)iVar2);
          }
          goto LAB_14f75b273;
        }
        ERR_put_error(4,0x8d,100,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xd2));
      }
      return 0;
    }
  }
  else if (iVar2 == 1) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar6 = EVP_MD_type();
    iVar2 = int_rsa_verify(uVar6,0,0,param_2,local_res8,param_4,param_5,
                           *(undefined8 *)(lVar1 + 0x28));
    if (iVar2 < 1) {
      return 0;
    }
    goto LAB_14f75b273;
  }
  return -1;
}

// FUN_14f75b2a0 @ 14f75b2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f75b2a0(longlong param_1,undefined8 param_2,ulonglong param_3,void *param_4,
                       size_t param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  size_t local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar3 = 1;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    iVar4 = FUN_14f75b660(lVar1,param_1);
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    iVar4 = RSA_public_decrypt(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2,
                               CONCAT44(uVar6,*(undefined4 *)(lVar1 + 0x1c)));
    local_res8 = (size_t)iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(lVar1 + 0x1c) == 1) {
      uVar3 = EVP_MD_type();
      uVar5 = RSA_verify(uVar3,param_4,(undefined4)param_5,param_2,CONCAT44(uVar6,(int)param_3),
                         uVar2);
      return uVar5;
    }
    iVar4 = EVP_MD_size();
    if (param_5 != (longlong)iVar4) {
      ERR_put_error(4,0x95,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xfe));
      return 0xffffffff;
    }
    if (*(int *)(lVar1 + 0x1c) != 5) {
      if (*(int *)(lVar1 + 0x1c) != 6) {
        return 0xffffffff;
      }
      iVar4 = FUN_14f75b660(lVar1,param_1);
      if (iVar4 != 0) {
        iVar4 = RSA_public_decrypt(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2,
                                   CONCAT44(uVar6,3));
        if (iVar4 < 1) {
          return 0;
        }
        iVar4 = RSA_verify_PKCS1_PSS_mgf1
                          (uVar2,param_4,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28)
                           ,*(undefined8 *)(lVar1 + 0x38),
                           CONCAT44(uVar3,*(undefined4 *)(lVar1 + 0x30)));
        return (ulonglong)(0 < iVar4);
      }
      return 0xffffffff;
    }
    iVar4 = FUN_14f75b0e0(param_1,0,&local_res8,param_2,param_3);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if ((local_res8 == param_5) &&
     (iVar4 = memcmp(param_4,*(void **)(lVar1 + 0x38),local_res8), iVar4 == 0)) {
    return 1;
  }
  return 0;
}

// FUN_14f75b450 @ 14f75b450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75b450(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f75b45c;
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = EVP_MD_type();
  if (param_2 == 3) {
    ERR_put_error(4,0x8c,0x8d,"crypto\\rsa\\rsa_pmeth.c",0x168,uVar4);
    return 0;
  }
  if (param_2 == 5) {
    iVar1 = RSA_X931_hash_id();
    if (iVar1 != -1) {
      return 1;
    }
    uVar3 = 0x16e;
    uVar2 = 0x8e;
  }
  else {
    if ((iVar1 - 0x40U < 0x36) &&
       ((0x24000080000001U >> ((ulonglong)(iVar1 - 0x40U) & 0x3f) & 1) != 0)) {
      return 1;
    }
    if (iVar1 - 3U < 2) {
      return 1;
    }
    if (iVar1 == 0x101) {
      return 1;
    }
    if (iVar1 - 0x2a0U < 4) {
      return 1;
    }
    if (iVar1 - 0x448U < 4) {
      return 1;
    }
    uVar3 = 0x186;
    uVar2 = 0x9d;
  }
  ERR_put_error(4,0x8c,uVar2,"crypto\\rsa\\rsa_pmeth.c",uVar3,uVar4);
  return 0;
}

// FUN_14f75b5b0 @ 14f75b5b0

ulonglong FUN_14f75b5b0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  return ~param_1 & param_3 | param_1 & param_2;
}

// FUN_14f75b5e0 @ 14f75b5e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f75b5e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_2[5];
  if ((*(int *)*param_2 == 0x390) &&
     (((*(longlong *)(lVar1 + 0x20) != 0 || (*(longlong *)(lVar1 + 0x28) != 0)) ||
      (*(int *)(lVar1 + 0x30) != -2)))) {
    iVar2 = *(int *)(lVar1 + 0x30);
    if (*(int *)(lVar1 + 0x30) == -2) {
      iVar2 = 0;
    }
    lVar1 = rsa_pss_params_create(*(longlong *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),iVar2);
    *(longlong *)(param_1 + 0x60) = lVar1;
    return lVar1 != 0;
  }
  return true;
}

// FUN_14f75b660 @ 14f75b660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75b660(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f75b66c;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    iVar1 = EVP_PKEY_size(*(undefined8 *)(param_2 + 0x10));
    lVar2 = CRYPTO_malloc((longlong)iVar1,"crypto\\rsa\\rsa_pmeth.c",0x6a);
    *(longlong *)(param_1 + 0x38) = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(4,0xa7,0x41,"crypto\\rsa\\rsa_pmeth.c",0x6b,uVar3);
      return 0;
    }
  }
  return 1;
}

// FUN_14f75b6f0 @ 14f75b6f0

undefined8 FUN_14f75b6f0(undefined8 param_1)

{
  return param_1;
}

