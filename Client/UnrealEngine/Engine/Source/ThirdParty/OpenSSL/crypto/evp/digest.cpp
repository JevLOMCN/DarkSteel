// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// EVP_Digest @ 14f6b8990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
EVP_Digest(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = CRYPTO_zalloc(0x30,"crypto\\evp\\digest.c",0x3e);
  if (lVar2 != 0) {
    uVar3 = 1;
    EVP_MD_CTX_set_flags(lVar2,1);
    iVar1 = EVP_DigestInit_ex(lVar2,param_5,param_6);
    if ((iVar1 == 0) ||
       (((param_2 != 0 && (iVar1 = (**(code **)(lVar2 + 0x28))(lVar2,param_1,param_2), iVar1 == 0))
        || (iVar1 = EVP_DigestFinal_ex(lVar2,param_3,param_4), iVar1 == 0)))) {
      uVar3 = 0;
    }
    EVP_MD_CTX_reset(lVar2);
    CRYPTO_free(lVar2,"crypto\\evp\\digest.c",0x44);
    return uVar3;
  }
  return 0;
}

// EVP_DigestFinal @ 14f6b8a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_DigestFinal(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = EVP_DigestFinal_ex();
  EVP_MD_CTX_reset(param_1);
  return uVar1;
}

// EVP_DigestFinalXOF @ 14f6b8ab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_DigestFinalXOF(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b8ac0;
  if (((*(byte *)(*param_1 + 0xc) & 2) != 0) && (param_3 < 0x80000000)) {
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,3);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
        (**(code **)(*param_1 + 0x30))(param_1);
        EVP_MD_CTX_set_flags(param_1,2);
      }
      OPENSSL_cleanse(param_1[3],(longlong)*(int *)(*param_1 + 0x3c));
      return uVar2;
    }
  }
  ERR_put_error(6,0xae,0xb2,"crypto\\evp\\digest.c",0xd2,uVar3);
  return 0;
}

// EVP_DigestFinal_ex @ 14f6b8b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_DigestFinal_ex(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (0x40 < *(int *)(*param_1 + 8)) {
    OPENSSL_die("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE","crypto\\evp\\digest.c",
                0xb7);
  }
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*param_1 + 8);
  }
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    EVP_MD_CTX_set_flags(param_1,2);
  }
  OPENSSL_cleanse(param_1[3],(longlong)*(int *)(*param_1 + 0x3c));
  return uVar1;
}

// EVP_DigestInit @ 14f6b8c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DigestInit(undefined8 param_1,undefined8 param_2)

{
  EVP_MD_CTX_reset();
  EVP_DigestInit_ex(param_1,param_2,0);
  return;
}

// EVP_DigestInit_ex @ 14f6b8c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_DigestInit_ex(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b8c75;
  EVP_MD_CTX_clear_flags(param_1,2);
  if (((param_1[1] == 0) || ((int *)*param_1 == (int *)0x0)) ||
     ((param_2 != (int *)0x0 && (*param_2 != *(int *)*param_1)))) {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)*param_1;
      if (param_2 == (int *)0x0) {
        ERR_put_error(6,0x80,0x8b,"crypto\\evp\\digest.c",0x7f,uVar3);
        return 0;
      }
    }
    else {
      ENGINE_finish();
      if (param_3 == 0) {
        param_3 = ENGINE_get_digest_engine(*param_2);
      }
      else {
        iVar1 = ENGINE_init(param_3);
        if (iVar1 == 0) {
          ERR_put_error(6,0x80,0x86,"crypto\\evp\\digest.c",100,uVar3);
          return 0;
        }
      }
      if (param_3 == 0) {
        param_1[1] = 0;
      }
      else {
        param_2 = (int *)ENGINE_get_digest(param_3,*param_2);
        if (param_2 == (int *)0x0) {
          ERR_put_error(6,0x80,0x86,"crypto\\evp\\digest.c",0x70);
          ENGINE_finish(param_3);
          return 0;
        }
        param_1[1] = param_3;
      }
    }
    if ((int *)*param_1 != param_2) {
      FUN_14f6b9290(param_1,1);
      *param_1 = (longlong)param_2;
      if (((*(uint *)(param_1 + 2) & 0x100) == 0) && (param_2[0xf] != 0)) {
        param_1[5] = *(longlong *)(param_2 + 6);
        lVar2 = CRYPTO_zalloc((longlong)param_2[0xf],"crypto\\evp\\digest.c",0x8b);
        param_1[3] = lVar2;
        if (lVar2 == 0) {
          ERR_put_error(6,0x80,0x41,"crypto\\evp\\digest.c",0x8d,uVar3);
          return 0;
        }
      }
    }
  }
  if (((param_1[4] != 0) &&
      (iVar1 = EVP_PKEY_CTX_ctrl(param_1[4],0xffffffff,0xf8,7,0,param_1), iVar1 < 1)) &&
     (iVar1 != -2)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 2) & 0x100) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6b8e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    return uVar3;
  }
  return 1;
}

// EVP_DigestUpdate @ 14f6b8eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_DigestUpdate(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6b8ecf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x28))();
  return uVar1;
}

// EVP_MD_CTX_copy @ 14f6b8ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_CTX_copy(undefined8 param_1,undefined8 param_2)

{
  EVP_MD_CTX_reset();
  EVP_MD_CTX_copy_ex(param_1,param_2);
  return;
}

// EVP_MD_CTX_copy_ex @ 14f6b8f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_MD_CTX_copy_ex(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6b8f30;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    ERR_put_error(6,0x6e,0x6f,"crypto\\evp\\digest.c",0xe2,0x14f6b8f30);
    return 0;
  }
  if (param_2[1] != 0) {
    iVar4 = ENGINE_init();
    if (iVar4 == 0) {
      ERR_put_error(6,0x6e,0x26,"crypto\\evp\\digest.c",0xe8,uVar6);
      return 0;
    }
  }
  if (*param_1 == *param_2) {
    lVar5 = param_1[3];
    EVP_MD_CTX_set_flags(param_1,4);
  }
  else {
    lVar5 = 0;
  }
  EVP_MD_CTX_reset(param_1);
  lVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar3 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar3 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 5) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  EVP_MD_CTX_clear_flags(param_1,0x400);
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2[3] != 0) && (*(int *)(*param_1 + 0x3c) != 0)) {
    if (lVar5 == 0) {
      lVar5 = CRYPTO_malloc((longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",0x103);
      param_1[3] = lVar5;
      if (lVar5 == 0) {
        ERR_put_error(6,0x6e,0x41,"crypto\\evp\\digest.c",0x105);
        return 0;
      }
    }
    else {
      param_1[3] = lVar5;
    }
    memcpy((void *)param_1[3],(void *)param_2[3],(longlong)*(int *)(*param_1 + 0x3c));
  }
  param_1[5] = param_2[5];
  if (param_2[4] != 0) {
    lVar5 = EVP_PKEY_CTX_dup();
    param_1[4] = lVar5;
    if (lVar5 == 0) {
      EVP_MD_CTX_reset(param_1);
      return 0;
    }
  }
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6b90ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    return uVar6;
  }
  return 1;
}

// EVP_MD_CTX_ctrl @ 14f6b9110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_MD_CTX_ctrl(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x40), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return 0 < iVar2;
  }
  return false;
}

// EVP_MD_CTX_free @ 14f6b9150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_CTX_free(undefined8 param_1)

{
  EVP_MD_CTX_reset();
  CRYPTO_free(param_1,"crypto\\evp\\digest.c",0x44);
  return;
}

// EVP_MD_CTX_new @ 14f6b9190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_CTX_new(void)

{
  CRYPTO_zalloc(0x30,"crypto\\evp\\digest.c",0x3e);
  return;
}

// EVP_MD_CTX_reset @ 14f6b91c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_MD_CTX_reset(longlong *param_1)

{
  int iVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      if (*(longlong *)(*param_1 + 0x30) != 0) {
        iVar1 = EVP_MD_CTX_test_flags(param_1,2);
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x30))(param_1);
        }
      }
      if ((param_1[3] != 0) && (0 < *(int *)(*param_1 + 0x3c))) {
        iVar1 = EVP_MD_CTX_test_flags(param_1,4);
        if (iVar1 == 0) {
          CRYPTO_clear_free(param_1[3],(longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",
                            0x1c);
          param_1[3] = 0;
        }
      }
    }
    iVar1 = EVP_MD_CTX_test_flags(param_1,0x400);
    if (iVar1 == 0) {
      EVP_PKEY_CTX_free(param_1[4]);
    }
    ENGINE_finish(param_1[1]);
    OPENSSL_cleanse(param_1,0x30);
  }
  return 1;
}

// FUN_14f6b9290 @ 14f6b9290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b9290(longlong *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*(longlong *)(*param_1 + 0x30) != 0) {
      iVar1 = EVP_MD_CTX_test_flags(param_1,2);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1);
      }
    }
    if ((param_1[3] != 0) && (0 < *(int *)(*param_1 + 0x3c))) {
      iVar1 = EVP_MD_CTX_test_flags(param_1,4);
      if ((iVar1 == 0) || (param_2 != 0)) {
        CRYPTO_clear_free(param_1[3],(longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",
                          0x1c);
        param_1[3] = 0;
      }
    }
  }
  return;
}

