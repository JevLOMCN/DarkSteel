// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 50

// EVP_PKEY_assign @ 14f6b9fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_assign(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = EVP_PKEY_set_type();
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x28) = param_3;
      return param_3 != 0;
    }
  }
  return false;
}

// EVP_PKEY_base_id @ 14f6ba010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_PKEY_base_id(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_res8 [4];
  
  puVar2 = (undefined4 *)EVP_PKEY_asn1_find(local_res8,*param_1);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    ENGINE_finish(local_res8[0]);
    return uVar1;
  }
  ENGINE_finish(local_res8[0]);
  return 0;
}

// EVP_PKEY_bits @ 14f6ba060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_bits(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x60),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6ba088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// EVP_PKEY_cmp @ 14f6ba0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_cmp(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 4) + 0x90);
    if ((pcVar1 != (code *)0x0) && (uVar2 = (*pcVar1)(), (int)uVar2 < 1)) {
      return uVar2;
    }
    if (*(code **)(*(longlong *)(param_1 + 4) + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6ba106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(param_1 + 4) + 0x30))(param_1,param_2);
      return uVar2;
    }
  }
  return 0xfffffffe;
}

// EVP_PKEY_cmp_parameters @ 14f6ba120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_cmp_parameters(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if ((*(longlong *)(param_1 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x90),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6ba154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}

// EVP_PKEY_copy_parameters @ 14f6ba170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_copy_parameters(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6ba180;
  if (*param_1 == 0) {
    iVar1 = EVP_PKEY_set_type(param_1,*param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (*param_1 != *param_2) {
    uVar3 = 0x51;
    uVar2 = 0x65;
    goto LAB_14f6ba275;
  }
  if (((*(longlong *)(param_2 + 4) == 0) ||
      (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x80),
      UNRECOVERED_JUMPTABLE == (code *)0x0)) ||
     (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_2), iVar1 == 0)) {
    if (((*(longlong *)(param_1 + 4) != 0) &&
        (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x80),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) &&
       (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1), iVar1 != 0)) {
      if (*(longlong *)(param_2 + 4) == 0) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x88);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014f6ba22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar4;
    }
    if (((*param_1 == *param_2) && (*(longlong *)(param_1 + 4) != 0)) &&
       ((UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x90),
        UNRECOVERED_JUMPTABLE != (code *)0x0 &&
        (uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2), (int)uVar2 == 1)))) {
      return uVar2;
    }
    uVar3 = 0x5d;
    uVar2 = 0x99;
  }
  else {
    uVar3 = 0x56;
    uVar2 = 0x67;
  }
LAB_14f6ba275:
  ERR_put_error(6,0x67,uVar2,"crypto\\evp\\p_lib.c",uVar3,uVar4);
  return 0;
}

// EVP_PKEY_free @ 14f6ba2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_14f6ba310();
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x40));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x38),X509_ATTRIBUTE_free);
      CRYPTO_free(param_1,"crypto\\evp\\p_lib.c",0x267);
    }
  }
  return;
}

// FUN_14f6ba310 @ 14f6ba310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ba310(longlong param_1)

{
  code *pcVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xa8), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  ENGINE_finish(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  ENGINE_finish(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

// EVP_PKEY_get0 @ 14f6ba370

undefined8 EVP_PKEY_get0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// EVP_PKEY_get0_DH @ 14f6ba380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_DH(int *param_1)

{
  if ((*param_1 != 0x1c) && (*param_1 != 0x398)) {
    ERR_put_error(6,0x77,0x80,"crypto\\evp\\p_lib.c",0x22f);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}

// EVP_PKEY_get0_DSA @ 14f6ba3e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_DSA(int *param_1)

{
  if (*param_1 != 0x74) {
    ERR_put_error(6,0x78,0x81,"crypto\\evp\\p_lib.c",0x1f5);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}

// EVP_PKEY_get0_EC_KEY @ 14f6ba430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_EC_KEY(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x14f6ba440;
  piVar1 = (int *)EVP_PKEY_asn1_find(&local_res8,*param_1);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  ENGINE_finish(local_res8);
  if (iVar2 != 0x198) {
    ERR_put_error(6,0x83,0x8e,"crypto\\evp\\p_lib.c",0x211,uVar3);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}

// EVP_PKEY_get0_RSA @ 14f6ba4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_RSA(int *param_1)

{
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    ERR_put_error(6,0x79,0x7f,"crypto\\evp\\p_lib.c",0x1da);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}

// EVP_PKEY_get0_hmac @ 14f6ba530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_hmac(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 != 0x357) {
    ERR_put_error(6,0xb7,0xae,"crypto\\evp\\p_lib.c",0x1a9);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 10);
  *param_2 = (longlong)*piVar1;
  return *(undefined8 *)(piVar1 + 2);
}

// EVP_PKEY_get0_poly1305 @ 14f6ba590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_poly1305(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 != 0x425) {
    ERR_put_error(6,0xb8,0xa4,"crypto\\evp\\p_lib.c",0x1b6);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 10);
  *param_2 = (longlong)*piVar1;
  return *(undefined8 *)(piVar1 + 2);
}

// EVP_PKEY_get0_siphash @ 14f6ba5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get0_siphash(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 != 0x426) {
    ERR_put_error(6,0xac,0xaf,"crypto\\evp\\p_lib.c",0x1c5);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 10);
  *param_2 = (longlong)*piVar1;
  return *(undefined8 *)(piVar1 + 2);
}

// EVP_PKEY_get1_DH @ 14f6ba650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_get1_DH(int *param_1)

{
  longlong lVar1;
  
  if ((*param_1 != 0x1c) && (*param_1 != 0x398)) {
    ERR_put_error(6,0x77,0x80,"crypto\\evp\\p_lib.c",0x22f);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 10);
  if (lVar1 != 0) {
    DH_up_ref(lVar1);
  }
  return lVar1;
}

// EVP_PKEY_get1_DSA @ 14f6ba6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_get1_DSA(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0x74) {
    ERR_put_error(6,0x78,0x81,"crypto\\evp\\p_lib.c",0x1f5);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 10);
  if (lVar1 != 0) {
    DSA_up_ref(lVar1);
  }
  return lVar1;
}

// EVP_PKEY_get1_EC_KEY @ 14f6ba720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_get1_EC_KEY(void)

{
  longlong lVar1;
  
  lVar1 = EVP_PKEY_get0_EC_KEY();
  if (lVar1 != 0) {
    EC_KEY_up_ref(lVar1);
  }
  return lVar1;
}

// EVP_PKEY_get1_RSA @ 14f6ba760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_get1_RSA(int *param_1)

{
  longlong lVar1;
  
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    ERR_put_error(6,0x79,0x7f,"crypto\\evp\\p_lib.c",0x1da);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 10);
  if (lVar1 != 0) {
    RSA_up_ref(lVar1);
  }
  return lVar1;
}

// EVP_PKEY_get1_tls_encodedpoint @ 14f6ba7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_get1_tls_encodedpoint(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,10,0,param_2,0x14f6ba7da);
    if (0 < iVar2) {
      return (longlong)iVar2;
    }
  }
  return 0;
}

// EVP_PKEY_get_default_digest_nid @ 14f6ba820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get_default_digest_nid(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6ba850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,3,0,param_2);
    return uVar1;
  }
  return 0xfffffffe;
}

// EVP_PKEY_get_raw_private_key @ 14f6ba870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get_raw_private_key(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0x108);
  if (pcVar1 == (code *)0x0) {
    ERR_put_error(6,0xca,0x96,"crypto\\evp\\p_lib.c",0x125);
    return 0;
  }
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    ERR_put_error(6,0xca,0xb6,"crypto\\evp\\p_lib.c",0x12a);
    return 0;
  }
  return 1;
}

// EVP_PKEY_get_raw_public_key @ 14f6ba900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_get_raw_public_key(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0x110);
  if (pcVar1 == (code *)0x0) {
    ERR_put_error(6,0xcb,0x96,"crypto\\evp\\p_lib.c",0x136);
    return 0;
  }
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    ERR_put_error(6,0xcb,0xb6,"crypto\\evp\\p_lib.c",0x13b);
    return 0;
  }
  return 1;
}

// EVP_PKEY_id @ 14f6ba990

undefined4 EVP_PKEY_id(undefined4 *param_1)

{
  return *param_1;
}

// EVP_PKEY_missing_parameters @ 14f6ba9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_missing_parameters(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x80),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6ba9cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// EVP_PKEY_new @ 14f6ba9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * EVP_PKEY_new(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6ba9ec;
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x48,"crypto\\evp\\p_lib.c",0x8e);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(6,0x6a,0x41,"crypto\\evp\\p_lib.c",0x91,uVar3);
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 6) = 1;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar2 = CRYPTO_THREAD_lock_new();
  puVar1[8] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(6,0x6a,0x41,"crypto\\evp\\p_lib.c",0x9a,uVar3);
    CRYPTO_free(puVar1,"crypto\\evp\\p_lib.c",0x9b);
    return (undefined8 *)0x0;
  }
  return puVar1;
}

// EVP_PKEY_new_CMAC_key @ 14f6baaa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_new_CMAC_key
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14f6baac4;
  lVar3 = EVP_PKEY_new();
  lVar4 = CMAC_CTX_new();
  if (lVar3 != 0) {
    if ((lVar4 != 0) &&
       (iVar2 = FUN_14f6bb5f0(lVar3,param_1,0x37e,0,CONCAT44(uVar5,0xffffffff),uVar6), iVar2 != 0))
    {
      iVar2 = CMAC_Init(lVar4,param_2,param_3,param_4,param_1);
      if (iVar2 != 0) {
        *(longlong *)(lVar3 + 0x28) = lVar4;
        return lVar3;
      }
      ERR_put_error(6,0xc1,0xb4,"crypto\\evp\\p_lib.c",0x151);
    }
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_14f6ba310(lVar3);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar3 + 0x40));
      OPENSSL_sk_pop_free(*(undefined8 *)(lVar3 + 0x38),X509_ATTRIBUTE_free);
      CRYPTO_free(lVar3,"crypto\\evp\\p_lib.c",0x267);
    }
  }
  CMAC_CTX_free(lVar4);
  return 0;
}

// EVP_PKEY_new_raw_private_key @ 14f6babd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_new_raw_private_key
                   (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6babee;
  lVar4 = EVP_PKEY_new();
  if (lVar4 != 0) {
    iVar3 = FUN_14f6bb5f0(lVar4,param_2,param_1,0,0xffffffff,uVar7);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xf8);
      if (pcVar2 == (code *)0x0) {
        uVar6 = 0xf2;
        uVar5 = 0x96;
      }
      else {
        iVar3 = (*pcVar2)(lVar4,param_3,param_4);
        if (iVar3 != 0) {
          return lVar4;
        }
        uVar6 = 0xf7;
        uVar5 = 0xb4;
      }
      ERR_put_error(6,0xbf,uVar5,"crypto\\evp\\p_lib.c",uVar6);
    }
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      FUN_14f6ba310(lVar4);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar4 + 0x40));
      OPENSSL_sk_pop_free(*(undefined8 *)(lVar4 + 0x38),X509_ATTRIBUTE_free);
      CRYPTO_free(lVar4,"crypto\\evp\\p_lib.c",0x267);
    }
  }
  return 0;
}

// EVP_PKEY_new_raw_public_key @ 14f6bacf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_new_raw_public_key
                   (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6bad0e;
  lVar4 = EVP_PKEY_new();
  if (lVar4 != 0) {
    iVar3 = FUN_14f6bb5f0(lVar4,param_2,param_1,0,0xffffffff,uVar7);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x100);
      if (pcVar2 == (code *)0x0) {
        uVar6 = 0x110;
        uVar5 = 0x96;
      }
      else {
        iVar3 = (*pcVar2)(lVar4,param_3,param_4);
        if (iVar3 != 0) {
          return lVar4;
        }
        uVar6 = 0x115;
        uVar5 = 0xb4;
      }
      ERR_put_error(6,0xc0,uVar5,"crypto\\evp\\p_lib.c",uVar6);
    }
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      FUN_14f6ba310(lVar4);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar4 + 0x40));
      OPENSSL_sk_pop_free(*(undefined8 *)(lVar4 + 0x38),X509_ATTRIBUTE_free);
      CRYPTO_free(lVar4,"crypto\\evp\\p_lib.c",0x267);
    }
  }
  return 0;
}

// EVP_PKEY_print_params @ 14f6bae10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_print_params(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x98),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bae4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  BIO_indent(param_1,param_3,0x80);
  uVar1 = OBJ_nid2ln(*param_2);
  BIO_printf(param_1,"%s algorithm \"%s\" unsupported\n","Parameters",uVar1);
  return 1;
}

// EVP_PKEY_print_private @ 14f6baea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_print_private(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x50),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6baed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  BIO_indent(param_1,param_3,0x80);
  uVar1 = OBJ_nid2ln(*param_2);
  BIO_printf(param_1,"%s algorithm \"%s\" unsupported\n","Private Key",uVar1);
  return 1;
}

// EVP_PKEY_print_public @ 14f6baf20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_print_public(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x38),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6baf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  BIO_indent(param_1,param_3,0x80);
  uVar1 = OBJ_nid2ln(*param_2);
  BIO_printf(param_1,"%s algorithm \"%s\" unsupported\n","Public Key",uVar1);
  return 1;
}

// EVP_PKEY_security_bits @ 14f6bafd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_security_bits(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x68),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bafff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}

// EVP_PKEY_set1_DH @ 14f6bb020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 EVP_PKEY_set1_DH(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DH_get0_q(param_2);
  uVar3 = 0x398;
  if (lVar2 == 0) {
    uVar3 = 0x1c;
  }
  if (((param_1 != 0) && (iVar1 = EVP_PKEY_set_type(param_1,uVar3), iVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x28) = param_2, param_2 != 0)) {
    DH_up_ref(param_2);
    return 1;
  }
  return 0;
}

// EVP_PKEY_set1_DSA @ 14f6bb0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 EVP_PKEY_set1_DSA(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = EVP_PKEY_set_type(param_1,0x74), iVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x28) = param_2, param_2 != 0)) {
    DSA_up_ref(param_2);
    return 1;
  }
  return 0;
}

// EVP_PKEY_set1_EC_KEY @ 14f6bb110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 EVP_PKEY_set1_EC_KEY(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = EVP_PKEY_set_type(param_1,0x198), iVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x28) = param_2, param_2 != 0)) {
    EC_KEY_up_ref(param_2);
    return 1;
  }
  return 0;
}

// EVP_PKEY_set1_RSA @ 14f6bb180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 EVP_PKEY_set1_RSA(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = EVP_PKEY_set_type(param_1,6), iVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x28) = param_2, param_2 != 0)) {
    RSA_up_ref(param_2);
    return 1;
  }
  return 0;
}

// EVP_PKEY_set1_engine @ 14f6bb1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_set1_engine(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6bb200;
  if (param_2 != 0) {
    iVar1 = ENGINE_init(param_2);
    if (iVar1 == 0) {
      ERR_put_error(6,0xbb,0x26,"crypto\\evp\\p_lib.c",0x185,uVar3);
      return 0;
    }
    lVar2 = ENGINE_get_pkey_meth(param_2,*param_1);
    if (lVar2 == 0) {
      ENGINE_finish(param_2);
      ERR_put_error(6,0xbb,0x9c,"crypto\\evp\\p_lib.c",0x18a,uVar3);
      return 0;
    }
  }
  ENGINE_finish(*(undefined8 *)(param_1 + 8));
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}

// EVP_PKEY_set1_tls_encodedpoint @ 14f6bb2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_set1_tls_encodedpoint(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  
  if (((param_3 < 0x80000000) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,9,param_3,param_2,0x14f6bb2ba);
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}

// EVP_PKEY_set_alias_type @ 14f6bb310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_set_alias_type(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  if (*param_1 != param_2) {
    piVar1 = (int *)EVP_PKEY_asn1_find(&local_res8);
    iVar3 = 0;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    ENGINE_finish(local_res8);
    piVar1 = (int *)EVP_PKEY_asn1_find(local_res18,*param_1);
    if (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
    }
    ENGINE_finish(local_res18[0]);
    if (iVar2 != iVar3) {
      ERR_put_error(6,0xce,0x9c,"crypto\\evp\\p_lib.c",0x178);
      return 0;
    }
    *param_1 = param_2;
  }
  return 1;
}

// EVP_PKEY_set_type @ 14f6bb3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_set_type(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 local_res8;
  undefined8 uVar2;
  
  uVar2 = 0x14f6bb3e0;
  local_res8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_14f6ba310();
    }
    if ((param_2 == param_1[1]) && (*(longlong *)(param_1 + 4) != 0)) {
      return 1;
    }
    ENGINE_finish(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    ENGINE_finish(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar1 = (undefined4 *)EVP_PKEY_asn1_find(&local_res8,param_2);
  if (param_1 == (undefined4 *)0x0) {
    ENGINE_finish(local_res8);
  }
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(6,0x9e,0x9c,"crypto\\evp\\p_lib.c",0xd2,uVar2);
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 4) = puVar1;
    *param_1 = *puVar1;
    *(undefined8 *)(param_1 + 6) = local_res8;
    param_1[1] = param_2;
  }
  return 1;
}

// EVP_PKEY_set_type_str @ 14f6bb4d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_set_type_str(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14f6bb5f0(param_1,0,0,param_2,param_3);
  return;
}

// EVP_PKEY_size @ 14f6bb500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_size(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x58),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bb528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// EVP_PKEY_type @ 14f6bb540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_PKEY_type(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_res10 [3];
  
  puVar2 = (undefined4 *)EVP_PKEY_asn1_find(local_res10,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    ENGINE_finish(local_res10[0]);
    return uVar1;
  }
  ENGINE_finish(local_res10[0]);
  return 0;
}

// EVP_PKEY_up_ref @ 14f6bb590

bool EVP_PKEY_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// FUN_14f6bb5b0 @ 14f6bb5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6bb5b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bb5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}

// FUN_14f6bb5f0 @ 14f6bb5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6bb5f0(undefined4 *param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x14f6bb60d;
  plVar3 = &local_res10;
  if (param_2 != 0) {
    plVar3 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_14f6ba310();
    }
    if ((param_3 == param_1[1]) && (*(longlong *)(param_1 + 4) != 0)) {
      return 1;
    }
    ENGINE_finish(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    ENGINE_finish(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (param_4 == 0) {
    puVar2 = (undefined4 *)EVP_PKEY_asn1_find(plVar3,param_3);
  }
  else {
    puVar2 = (undefined4 *)EVP_PKEY_asn1_find_str(plVar3,param_4,param_5);
  }
  if ((param_1 == (undefined4 *)0x0) && (plVar3 != (longlong *)0x0)) {
    ENGINE_finish(local_res10);
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (param_1 != (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 4) = puVar2;
      *param_1 = *puVar2;
      param_1[1] = param_3;
      if (((plVar3 == (longlong *)0x0) && (local_res10 != 0)) &&
         (iVar1 = ENGINE_init(local_res10), iVar1 == 0)) {
        ERR_put_error(6,0x9e,0x86,"crypto\\evp\\p_lib.c",0xdb);
        return 0;
      }
      *(longlong *)(param_1 + 6) = local_res10;
    }
    return 1;
  }
  ERR_put_error(6,0x9e,0x9c,"crypto\\evp\\p_lib.c",0xd2,uVar4);
  return 0;
}

// FUN_14f6bb740 @ 14f6bb740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6bb740(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6bb760 @ 14f6bb760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6bb760(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  BIO_indent(param_1,param_3,0x80);
  uVar1 = OBJ_nid2ln(*param_2);
  BIO_printf(param_1,"%s algorithm \"%s\" unsupported\n",param_4,uVar1);
  return 1;
}

