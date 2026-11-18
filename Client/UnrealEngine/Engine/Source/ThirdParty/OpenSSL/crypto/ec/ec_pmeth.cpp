// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// FUN_14f7580d0 @ 14f7580d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7580d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    ERR_put_error(0x10,0xdb,0x8b,"crypto\\ec\\ec_pmeth.c",0x191,0x14f7580e0);
    return 0;
  }
  lVar3 = EC_KEY_new();
  if (lVar3 != 0) {
    iVar2 = EC_KEY_set_group(lVar3,*plVar1);
    if ((iVar2 != 0) && (iVar2 = EVP_PKEY_assign(param_2,0x198,lVar3), iVar2 != 0)) {
      return iVar2;
    }
    EC_KEY_free(lVar3);
    return 0;
  }
  return 0;
}

// FUN_14f758190 @ 14f758190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f758190(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*plVar1 == 0)) {
    ERR_put_error(0x10,199,0x8b,"crypto\\ec\\ec_pmeth.c",0x1a4,0x14f7581a5);
    return 0;
  }
  lVar3 = EC_KEY_new();
  if (lVar3 != 0) {
    iVar2 = EVP_PKEY_assign(param_2,0x198,lVar3);
    if (iVar2 == 0) {
      EC_KEY_free(lVar3);
    }
    else {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        iVar2 = EC_KEY_set_group(lVar3,*plVar1);
      }
      else {
        iVar2 = EVP_PKEY_copy_parameters(param_2);
      }
      if (iVar2 != 0) {
        uVar4 = EC_KEY_generate_key(lVar3);
        return uVar4;
      }
    }
  }
  return 0;
}

// FUN_14f758270 @ 14f758270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f758270(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f75827c;
  lVar1 = CRYPTO_zalloc(0x40,"crypto\\ec\\ec_pmeth.c",0x2d);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0x11a,0x41,"crypto\\ec\\ec_pmeth.c",0x2e,uVar2);
    return 0;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x1ff;
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}

// FUN_14f7582e0 @ 14f7582e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7582e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_14f758270();
  if (iVar3 == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 != 0) {
    lVar4 = EC_GROUP_dup();
    *plVar2 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  plVar2[1] = plVar1[1];
  if (plVar1[2] != 0) {
    lVar4 = EC_KEY_dup();
    plVar2[2] = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  *(undefined1 *)((longlong)plVar2 + 0x19) = *(undefined1 *)((longlong)plVar1 + 0x19);
  plVar2[4] = plVar1[4];
  plVar2[7] = plVar1[7];
  if (plVar1[5] == 0) {
    plVar2[5] = 0;
  }
  else {
    lVar4 = CRYPTO_memdup(plVar1[5],plVar1[6],"crypto\\ec\\ec_pmeth.c",0x4f);
    plVar2[5] = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  plVar2[6] = plVar1[6];
  return 1;
}

// FUN_14f7583b0 @ 14f7583b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7583b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    EC_GROUP_free(*puVar1);
    EC_KEY_free(puVar1[2]);
    CRYPTO_free(puVar1[5],"crypto\\ec\\ec_pmeth.c",0x5e);
    CRYPTO_free(puVar1,"crypto\\ec\\ec_pmeth.c",0x5f);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

// FUN_14f758430 @ 14f758430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f758430(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar6;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14f758448;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  iVar2 = ECDSA_size(uVar5);
  if (iVar2 < 1) {
LAB_14f758499:
    uVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)iVar2;
    if (param_2 != 0) {
      if (*param_3 < uVar4) {
        ERR_put_error(0x10,0xda,100,"crypto\\ec\\ec_pmeth.c",CONCAT44(uVar3,0x77),uVar6);
        goto LAB_14f758499;
      }
      if (*(longlong *)(lVar1 + 8) == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = EVP_MD_type();
      }
      uVar5 = ECDSA_sign(uVar3,param_4,param_5,param_2,local_res8,uVar5);
      if ((int)uVar5 < 1) {
        return uVar5;
      }
      uVar4 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar4;
    uVar5 = 1;
  }
  return uVar5;
}

// FUN_14f758500 @ 14f758500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f758500(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = EVP_MD_type();
  }
  ECDSA_verify(uVar2,param_4,param_5,param_2,param_3,uVar1);
  return;
}

// FUN_14f758580 @ 14f758580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f758580(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar4 = 0;
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    uVar4 = FUN_14f758e20();
  }
  else if (param_2 == 0) {
    *param_3 = *(longlong *)(lVar1 + 0x38);
    uVar4 = 1;
  }
  else {
    if (*param_3 == *(longlong *)(lVar1 + 0x38)) {
      if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
        lVar6 = *(longlong *)(lVar1 + 0x10);
        if (lVar6 == 0) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        }
        uVar5 = EC_KEY_get0_group(lVar6);
        iVar3 = EC_GROUP_get_degree(uVar5);
        local_res8 = (longlong)((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3);
        lVar6 = CRYPTO_malloc(local_res8,"crypto\\ec\\ec_pmeth.c",0xcd);
        if (lVar6 == 0) {
          ERR_put_error(0x10,0x11b,0x41,"crypto\\ec\\ec_pmeth.c",CONCAT44(uVar7,0xce));
          return 0;
        }
        iVar3 = FUN_14f758e20(param_1,lVar6,&local_res8);
        lVar2 = local_res8;
        if ((iVar3 != 0) &&
           (iVar3 = ecdh_KDF_X9_63(param_2,*param_3,lVar6,local_res8,*(undefined8 *)(lVar1 + 0x28),
                                   *(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20)),
           iVar3 != 0)) {
          uVar4 = 1;
        }
        CRYPTO_clear_free(lVar6,lVar2,"crypto\\ec\\ec_pmeth.c",0xda);
        return uVar4;
      }
      ERR_put_error(0x10,0xd9,0x8c,"crypto\\ec\\ec_pmeth.c",0xa0);
    }
    uVar4 = 0;
  }
  return uVar4;
}

// FUN_14f758720 @ 14f758720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f758720(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (0x1001 < param_2) {
    switch(param_2) {
    case 0x1002:
      if (*plVar1 != 0) {
        EC_GROUP_set_asn1_flag(*plVar1,param_3);
        return 1;
      }
      ERR_put_error(0x10,0xc5,0x8b,"crypto\\ec\\ec_pmeth.c",0xf0,0x14f758735);
      return 0;
    case 0x1003:
      if (param_3 == -2) {
        if ((char)plVar1[3] == -1) {
          uVar4 = EC_KEY_get_flags(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
          return uVar4 >> 0xc & 1;
        }
        return (int)(char)plVar1[3];
      }
      if (param_3 + 1U < 3) {
        *(char *)(plVar1 + 3) = (char)param_3;
        if (param_3 == -1) {
          EC_KEY_free(plVar1[2]);
          plVar1[2] = 0;
          return 1;
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        lVar2 = *(longlong *)(lVar5 + 0x18);
        if (lVar2 != 0) {
          iVar3 = BN_is_one(*(undefined8 *)(lVar2 + 0x18));
          if (iVar3 != 0) {
            return 1;
          }
          if (plVar1[2] == 0) {
            lVar5 = EC_KEY_dup(lVar5);
            plVar1[2] = lVar5;
            if (lVar5 == 0) {
              return 0;
            }
          }
          if (param_3 == 0) {
            EC_KEY_clear_flags(plVar1[2],0x1000);
            return 1;
          }
          EC_KEY_set_flags();
          return 1;
        }
      }
      break;
    case 0x1004:
      if (param_3 == -2) {
        return (int)*(char *)((longlong)plVar1 + 0x19);
      }
      if (param_3 - 1U < 2) {
        *(char *)((longlong)plVar1 + 0x19) = (char)param_3;
        return 1;
      }
      break;
    case 0x1005:
      plVar1[4] = (longlong)param_4;
      return 1;
    case 0x1006:
      *param_4 = plVar1[4];
      return 1;
    case 0x1007:
      if (0 < param_3) {
        plVar1[7] = (longlong)param_3;
        return 1;
      }
      break;
    case 0x1008:
      *(int *)param_4 = (int)plVar1[7];
      return 1;
    case 0x1009:
      CRYPTO_free(plVar1[5],"crypto\\ec\\ec_pmeth.c",0x134);
      plVar1[5] = (longlong)param_4;
      if (param_4 == (longlong *)0x0) {
        plVar1[6] = 0;
        return 1;
      }
      plVar1[6] = (longlong)param_3;
      return 1;
    case 0x100a:
      *param_4 = plVar1[5];
      return *(uint *)(plVar1 + 6);
    }
switchD_14f758776_caseD_3:
    return 0xfffffffe;
  }
  if (param_2 == 0x1001) {
    lVar5 = EC_GROUP_new_by_curve_name(param_3);
    if (lVar5 == 0) {
      ERR_put_error(0x10,0xc5,0x8d,"crypto\\ec\\ec_pmeth.c",0xe7);
      return 0;
    }
    EC_GROUP_free(*plVar1);
    *plVar1 = lVar5;
switchD_14f758776_caseD_2:
    return 1;
  }
  switch(param_2) {
  case 1:
    iVar3 = EVP_MD_type(param_4);
    if ((((((iVar3 != 0x40) && (iVar3 = EVP_MD_type(param_4), iVar3 != 0x1a0)) &&
          (iVar3 = EVP_MD_type(param_4), iVar3 != 0x2a3)) &&
         ((iVar3 = EVP_MD_type(param_4), iVar3 != 0x2a0 &&
          (iVar3 = EVP_MD_type(param_4), iVar3 != 0x2a1)))) &&
        ((iVar3 = EVP_MD_type(param_4), iVar3 != 0x2a2 &&
         ((iVar3 = EVP_MD_type(param_4), iVar3 != 0x448 &&
          (iVar3 = EVP_MD_type(param_4), iVar3 != 0x449)))))) &&
       ((iVar3 = EVP_MD_type(param_4), iVar3 != 0x44a &&
        (iVar3 = EVP_MD_type(param_4), iVar3 != 1099)))) {
      ERR_put_error(0x10,0xc5,0x8a,"crypto\\ec\\ec_pmeth.c",0x14b);
      return 0;
    }
    plVar1[1] = (longlong)param_4;
    return 1;
  case 2:
  case 5:
  case 7:
  case 0xb:
    goto switchD_14f758776_caseD_2;
  default:
    goto switchD_14f758776_caseD_3;
  case 0xd:
    *param_4 = plVar1[1];
    return 1;
  }
}

// FUN_14f758c00 @ 14f758c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f758c00(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f758c15;
  iVar1 = strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    iVar1 = EC_curve_nist2nid(param_3);
    if (((iVar1 == 0) && (iVar1 = OBJ_sn2nid(param_3), iVar1 == 0)) &&
       (iVar1 = OBJ_ln2nid(param_3), iVar1 == 0)) {
      ERR_put_error(0x10,0xc6,0x8d,"crypto\\ec\\ec_pmeth.c",0x16d,uVar4);
      return 0;
    }
    uVar4 = EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1001,iVar1,0);
    return uVar4;
  }
  iVar1 = strcmp(param_2,"ec_param_enc");
  if (iVar1 == 0) {
    iVar1 = strcmp(param_3,"explicit");
    if (iVar1 == 0) {
      uVar4 = 0x1002;
      uVar3 = 6;
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      iVar1 = 1;
      uVar4 = 0x1002;
      uVar3 = 6;
    }
  }
  else {
    iVar1 = strcmp(param_2,"ecdh_kdf_md");
    if (iVar1 == 0) {
      lVar2 = EVP_get_digestbyname(param_3);
      if (lVar2 != 0) {
        uVar4 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1005,0,lVar2);
        return uVar4;
      }
      ERR_put_error(0x10,0xc6,0x97,"crypto\\ec\\ec_pmeth.c",0x17d,uVar4);
      return 0;
    }
    iVar1 = strcmp(param_2,"ecdh_cofactor_mode");
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = atoi(param_3);
    uVar4 = 0x1003;
    uVar3 = 0x400;
  }
  uVar4 = EVP_PKEY_CTX_ctrl(param_1,0x198,uVar3,uVar4,iVar1,0);
  return uVar4;
}

// FUN_14f758e20 @ 14f758e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f758e20(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    ERR_put_error(0x10,0xd9,0x8c,"crypto\\ec\\ec_pmeth.c",0xa0,0x14f758e35);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    }
    if (param_2 == 0) {
      uVar2 = EC_KEY_get0_group(lVar3);
      iVar1 = EC_GROUP_get_degree(uVar2);
      *param_3 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
      return 1;
    }
    uVar2 = EC_KEY_get0_public_key(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28));
    iVar1 = ECDH_compute_key(param_2,*param_3,uVar2,lVar3,0);
    if (0 < iVar1) {
      *param_3 = (longlong)iVar1;
      return 1;
    }
  }
  return 0;
}

