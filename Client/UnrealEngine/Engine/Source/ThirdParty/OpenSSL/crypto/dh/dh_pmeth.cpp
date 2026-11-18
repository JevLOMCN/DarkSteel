// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f756c20 @ 14f756c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f756c20(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f756c2c;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x60,"crypto\\dh\\dh_pmeth.c",0x35);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(5,0x7d,0x41,"crypto\\dh\\dh_pmeth.c",0x36,uVar2);
    return 0;
  }
  *puVar1 = 0x800;
  puVar1[3] = 0xffffffff;
  puVar1[1] = 2;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 **)(param_1 + 0x40) = puVar1 + 10;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}

// FUN_14f756cb0 @ 14f756cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f756cb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x48),"crypto\\dh\\dh_pmeth.c",0x49);
    ASN1_OBJECT_free(*(undefined8 *)(lVar1 + 0x38));
    CRYPTO_free(lVar1,"crypto\\dh\\dh_pmeth.c",0x4b);
    return;
  }
  return;
}

// FUN_14f756d10 @ 14f756d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f756d10(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_14f756c20();
  if (iVar3 != 0) {
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    *puVar2 = *puVar1;
    puVar2[3] = puVar1[3];
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[4] = puVar1[4];
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
    puVar2[8] = puVar1[8];
    puVar2[9] = puVar1[9];
    *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    lVar4 = OBJ_dup(*(undefined8 *)(puVar1 + 0xe));
    *(longlong *)(puVar2 + 0xe) = lVar4;
    if (lVar4 != 0) {
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      if (*(longlong *)(puVar1 + 0x12) != 0) {
        lVar4 = CRYPTO_memdup(*(longlong *)(puVar1 + 0x12),*(undefined8 *)(puVar1 + 0x14),
                              "crypto\\dh\\dh_pmeth.c",0x66);
        *(longlong *)(puVar2 + 0x12) = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
        *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(puVar1 + 0x14);
      }
      *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(puVar1 + 0x16);
      return 1;
    }
  }
  return 0;
}

// FUN_14f756df0 @ 14f756df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f756df0(longlong param_1,int param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x28);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < (int)param_3) {
        *puVar1 = param_3;
        return 1;
      }
    }
    else if (param_2 == 2) {
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x1002:
      if (puVar1[2] == 0) {
        puVar1[1] = param_3;
        return 1;
      }
      break;
    case 0x1003:
      if ((param_3 - 1 < 3) && (puVar1[9] == 0)) {
        puVar1[8] = param_3;
        return 1;
      }
      break;
    case 0x1004:
      if (puVar1[2] != 0) {
        puVar1[3] = param_3;
        return 1;
      }
      break;
    case 0x1005:
      if (param_3 < 3) {
        puVar1[2] = param_3;
        return 1;
      }
      break;
    case 0x1006:
      if (param_3 == 0xfffffffe) {
        return (int)(char)puVar1[0xc];
      }
      if (param_3 - 1 < 2) {
        *(char *)(puVar1 + 0xc) = (char)param_3;
        return 1;
      }
      break;
    case 0x1007:
      *(uint **)(puVar1 + 0x10) = param_4;
      return 1;
    case 0x1008:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0x10);
      return 1;
    case 0x1009:
      if (0 < (int)param_3) {
        *(longlong *)(puVar1 + 0x16) = (longlong)(int)param_3;
        return 1;
      }
      break;
    case 0x100a:
      *param_4 = puVar1[0x16];
      return 1;
    case 0x100b:
      CRYPTO_free(*(undefined8 *)(puVar1 + 0x12),"crypto\\dh\\dh_pmeth.c",0xc3);
      *(uint **)(puVar1 + 0x12) = param_4;
      if (param_4 == (uint *)0x0) {
        puVar1[0x14] = 0;
        puVar1[0x15] = 0;
        return 1;
      }
      *(longlong *)(puVar1 + 0x14) = (longlong)(int)param_3;
      return 1;
    case 0x100c:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0x12);
      return puVar1[0x14];
    case 0x100d:
      ASN1_OBJECT_free(*(undefined8 *)(puVar1 + 0xe));
      *(uint **)(puVar1 + 0xe) = param_4;
      return 1;
    case 0x100e:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0xe);
      return 1;
    case 0x100f:
      if ((0 < (int)param_3) && (puVar1[8] == 0)) {
        puVar1[9] = param_3;
        return 1;
      }
      break;
    case 0x1010:
      puVar1[4] = param_3;
      return 1;
    }
  }
  return 0xfffffffe;
}

// FUN_14f757110 @ 14f757110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f757110(longlong param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f757125;
  iVar1 = strcmp(param_2,"dh_paramgen_prime_len");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1001,iVar1,0);
    return uVar5;
  }
  iVar1 = strcmp(param_2,"dh_rfc5114");
  if (iVar1 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar2 = atoi(param_3);
    if (uVar2 < 4) {
      *(uint *)(lVar3 + 0x20) = uVar2;
      return 1;
    }
  }
  else {
    iVar1 = strcmp(param_2,"dh_param");
    if (iVar1 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      iVar1 = OBJ_sn2nid(param_3);
      if (iVar1 != 0) {
        *(int *)(lVar3 + 0x24) = iVar1;
        return 1;
      }
      ERR_put_error(5,0x78,0x6e,"crypto\\dh\\dh_pmeth.c",0xf4,uVar5);
    }
    else {
      iVar1 = strcmp(param_2,"dh_paramgen_generator");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1002,iVar1,0);
        return uVar5;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_subprime_len");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1004,iVar1,0);
        return uVar5;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_type");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1005,iVar1,0);
        return uVar5;
      }
      lVar3 = 0;
      while (lVar4 = lVar3 + 1, param_2[lVar3] == (&s_dh_pad)[lVar3]) {
        lVar3 = lVar4;
        if (lVar4 == 7) {
          iVar1 = atoi(param_3);
          uVar5 = EVP_PKEY_CTX_ctrl(param_1,0x1c,0x400,0x1010,iVar1,0);
          return uVar5;
        }
      }
    }
  }
  return 0xfffffffe;
}

// FUN_14f757390 @ 14f757390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f757390(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  iVar2 = puVar1[8];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar3 = DH_get_1024_160();
    }
    else if (iVar2 == 2) {
      uVar3 = DH_get_2048_224();
    }
    else {
      if (iVar2 != 3) {
        return -2;
      }
      uVar3 = DH_get_2048_256();
    }
    EVP_PKEY_assign(param_2,0x398,uVar3);
    return 1;
  }
  if (puVar1[9] == 0) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = BN_GENCB_new();
      if (lVar4 == 0) {
        return 0;
      }
      evp_pkey_set_cb_translate(lVar4,param_1);
    }
    if (puVar1[2] == 0) {
      lVar5 = DH_new();
      if (lVar5 != 0) {
        iVar2 = DH_generate_parameters_ex(lVar5,*puVar1,puVar1[1],lVar4);
        BN_GENCB_free(lVar4);
        if (iVar2 == 0) {
          DH_free(lVar5);
          return 0;
        }
        EVP_PKEY_assign(param_2,0x1c,lVar5);
        return iVar2;
      }
      BN_GENCB_free(lVar4);
    }
    else {
      lVar5 = FUN_14f7577d0(puVar1,lVar4);
      BN_GENCB_free(lVar4);
      if (lVar5 != 0) {
        lVar4 = DSA_dup_DH(lVar5);
        DSA_free(lVar5);
        if (lVar4 != 0) {
          EVP_PKEY_assign(param_2,0x398,lVar4);
          return 1;
        }
      }
    }
    return 0;
  }
  lVar4 = DH_new_by_nid();
  if (lVar4 != 0) {
    EVP_PKEY_assign(param_2,0x1c,lVar4);
    return 1;
  }
  return 0;
}

// FUN_14f757550 @ 14f757550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f757550(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1[2] == 0) && (*(int *)(param_1[5] + 0x24) == 0)) {
    ERR_put_error(5,0x71,0x6b,"crypto\\dh\\dh_pmeth.c",0x194,0x14f757560);
  }
  else {
    if (*(int *)(param_1[5] + 0x24) == 0) {
      lVar2 = DH_new();
    }
    else {
      lVar2 = DH_new_by_nid();
    }
    if (lVar2 != 0) {
      EVP_PKEY_assign(param_2,*(undefined4 *)*param_1,lVar2);
      if ((param_1[2] != 0) && (iVar1 = EVP_PKEY_copy_parameters(param_2), iVar1 == 0)) {
        return 0;
      }
      uVar3 = DH_generate_key(*(undefined8 *)(param_2 + 0x28));
      return uVar3;
    }
  }
  return 0;
}

// FUN_14f757600 @ 14f757600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f757600(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    ERR_put_error(5,0x70,0x6c,"crypto\\dh\\dh_pmeth.c",0x1ac);
    return 0;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) + 0x20);
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    if (param_2 == 0) {
      iVar3 = DH_size(uVar4);
      *param_3 = (longlong)iVar3;
    }
    else {
      if (*(int *)(lVar1 + 0x10) == 0) {
        uVar4 = DH_compute_key(param_2,uVar2,uVar4);
      }
      else {
        uVar4 = DH_compute_key_padded();
      }
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *param_3 = (longlong)(int)uVar4;
    }
LAB_14f757668:
    uVar4 = 1;
  }
  else {
    if (((*(char *)(lVar1 + 0x30) == '\x02') && (lVar5 = *(longlong *)(lVar1 + 0x58), lVar5 != 0))
       && (*(longlong *)(lVar1 + 0x38) != 0)) {
      if (param_2 == 0) {
        *param_3 = lVar5;
        goto LAB_14f757668;
      }
      if (*param_3 == lVar5) {
        uVar6 = 0;
        iVar3 = DH_size(uVar4);
        lVar7 = (longlong)iVar3;
        lVar5 = CRYPTO_malloc(lVar7,"crypto\\dh\\dh_pmeth.c",0x1ce);
        if (((lVar5 != 0) && (iVar3 = DH_compute_key_padded(lVar5,uVar2,uVar4), 0 < iVar3)) &&
           (iVar3 = DH_KDF_X9_42(param_2,*param_3,lVar5,lVar7,*(undefined8 *)(lVar1 + 0x38),
                                 *(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),
                                 *(undefined8 *)(lVar1 + 0x40)), iVar3 != 0)) {
          uVar6 = 1;
          *param_3 = *(longlong *)(lVar1 + 0x58);
        }
        CRYPTO_clear_free(lVar5,lVar7,"crypto\\dh\\dh_pmeth.c",0x1da);
        return uVar6;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

// FUN_14f7577d0 @ 14f7577d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7577d0(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar6 = 0x14f7577e9;
  iVar1 = *param_1;
  iVar4 = param_1[3];
  lVar3 = *(longlong *)(param_1 + 6);
  if (2 < param_1[2]) {
    return 0;
  }
  lVar2 = DSA_new();
  if (lVar2 == 0) {
    return 0;
  }
  if ((iVar4 == -1) && (iVar4 = 0xa0, 0x7ff < iVar1)) {
    iVar4 = 0x100;
  }
  if (lVar3 == 0) {
    if (iVar1 < 0x800) {
      lVar3 = EVP_sha1();
    }
    else {
      lVar3 = EVP_sha256();
    }
  }
  if (param_1[2] == 1) {
    iVar1 = dsa_builtin_paramgen(lVar2,(longlong)iVar1,(longlong)iVar4,lVar3,0,0,0,0,0,param_2);
  }
  else {
    if (param_1[2] != 2) goto LAB_14f7578da;
    iVar1 = dsa_builtin_paramgen2
                      (lVar2,(longlong)iVar1,(longlong)iVar4,lVar3,0,0,CONCAT44(uVar5,0xffffffff),0,
                       0,0,param_2,uVar6);
  }
  if (0 < iVar1) {
    return lVar2;
  }
LAB_14f7578da:
  DSA_free(lVar2);
  return 0;
}

