// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 26

// RSA_free @ 14f6bcb70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x70);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 8) + 0x40), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      ENGINE_finish(*(undefined8 *)(param_1 + 0x10));
      CRYPTO_free_ex_data(9,param_1,param_1 + 0x68);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0xa8));
      BN_free(*(undefined8 *)(param_1 + 0x18));
      BN_free(*(undefined8 *)(param_1 + 0x20));
      BN_clear_free(*(undefined8 *)(param_1 + 0x28));
      BN_clear_free(*(undefined8 *)(param_1 + 0x30));
      BN_clear_free(*(undefined8 *)(param_1 + 0x38));
      BN_clear_free(*(undefined8 *)(param_1 + 0x40));
      BN_clear_free(*(undefined8 *)(param_1 + 0x48));
      BN_clear_free(*(undefined8 *)(param_1 + 0x50));
      RSA_PSS_PARAMS_free(*(undefined8 *)(param_1 + 0x60));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x58),rsa_multip_info_free);
      BN_BLINDING_free(*(undefined8 *)(param_1 + 0x98));
      BN_BLINDING_free(*(undefined8 *)(param_1 + 0xa0));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x90),"crypto\\rsa\\rsa_lib.c",0x8c);
      CRYPTO_free(param_1,"crypto\\rsa\\rsa_lib.c",0x8d);
    }
  }
  return;
}

// RSA_get0_d @ 14f6bccc0

undefined8 RSA_get0_d(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// RSA_get0_e @ 14f6bccf0

undefined8 RSA_get0_e(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

// RSA_get0_engine @ 14f6bcd00

undefined8 RSA_get0_engine(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// RSA_get0_key @ 14f6bcd40

void RSA_get0_key(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}

// RSA_get0_multi_prime_crt_params @ 14f6bcd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_get0_multi_prime_crt_params(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
  if (0 < iVar1) {
    if ((param_2 != 0) || (param_3 != (undefined8 *)0x0)) {
      iVar5 = 0;
      lVar4 = (longlong)iVar1;
      if (0 < iVar1) {
        puVar3 = param_3;
        do {
          lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar5);
          if (param_2 != 0) {
            *(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar3) =
                 *(undefined8 *)(lVar2 + 8);
          }
          if (param_3 != (undefined8 *)0x0) {
            *puVar3 = *(undefined8 *)(lVar2 + 0x10);
          }
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    return 1;
  }
  return 0;
}

// RSA_get0_multi_prime_factors @ 14f6bce30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_get0_multi_prime_factors(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
  if (iVar1 < 1) {
    return 0;
  }
  uVar3 = 0;
  uVar4 = uVar3;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),uVar4);
      uVar4 = (ulonglong)((int)uVar4 + 1);
      *(undefined8 *)(param_2 + uVar3 * 8) = *puVar2;
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  return 1;
}

// RSA_get0_n @ 14f6bced0

undefined8 RSA_get0_n(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// RSA_get_ex_data @ 14f6bcf10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x68);
  return;
}

// RSA_get_multi_prime_extra_count @ 14f6bcf40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int RSA_get_multi_prime_extra_count(longlong param_1)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  return iVar1;
}

// RSA_new @ 14f6bcf80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_new(void)

{
  RSA_new_method(0);
  return;
}

// RSA_new_method @ 14f6bcfa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong RSA_new_method(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6bcfb0;
  lVar3 = CRYPTO_zalloc(0xb0,"crypto\\rsa\\rsa_lib.c");
  if (lVar3 == 0) {
    ERR_put_error(4,0x6a,0x41,"crypto\\rsa\\rsa_lib.c",0x37,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar3 + 0x70) = 1;
  lVar4 = CRYPTO_THREAD_lock_new();
  *(longlong *)(lVar3 + 0xa8) = lVar4;
  if (lVar4 == 0) {
    ERR_put_error(4,0x6a,0x41,"crypto\\rsa\\rsa_lib.c",0x3e,uVar7);
    CRYPTO_free(lVar3,"crypto\\rsa\\rsa_lib.c",0x3f);
    return 0;
  }
  lVar4 = RSA_get_default_method();
  *(longlong *)(lVar3 + 8) = lVar4;
  *(uint *)(lVar3 + 0x74) = *(uint *)(lVar4 + 0x48) & 0xfffffbff;
  if (param_1 == 0) {
    uVar7 = ENGINE_get_default_RSA();
    *(undefined8 *)(lVar3 + 0x10) = uVar7;
LAB_14f6bd0bf:
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      lVar4 = ENGINE_get_RSA();
      *(longlong *)(lVar3 + 8) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x52;
        goto LAB_14f6bd081;
      }
    }
    *(uint *)(lVar3 + 0x74) = *(uint *)(*(longlong *)(lVar3 + 8) + 0x48) & 0xfffffbff;
    iVar2 = CRYPTO_new_ex_data(9,lVar3,lVar3 + 0x68);
    if (iVar2 == 0) goto LAB_14f6bd09b;
    pcVar1 = *(code **)(*(longlong *)(lVar3 + 8) + 0x38);
    if (pcVar1 == (code *)0x0) {
      return lVar3;
    }
    iVar2 = (*pcVar1)(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    uVar6 = 0x5e;
    uVar5 = 0x46;
  }
  else {
    iVar2 = ENGINE_init(param_1);
    if (iVar2 != 0) {
      *(longlong *)(lVar3 + 0x10) = param_1;
      goto LAB_14f6bd0bf;
    }
    uVar6 = 0x48;
LAB_14f6bd081:
    uVar5 = 0x26;
  }
  ERR_put_error(4,0x6a,uVar5,"crypto\\rsa\\rsa_lib.c",uVar6);
LAB_14f6bd09b:
  RSA_free(lVar3);
  return 0;
}

// RSA_pkey_ctx_ctrl @ 14f6bd140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RSA_pkey_ctx_ctrl(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_1 != (undefined8 *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
      (iVar1 = *(int *)*param_1, iVar1 != 6)) && (iVar1 != 0x390)) {
    return 0xffffffff;
  }
  uVar2 = EVP_PKEY_CTX_ctrl(param_1,0xffffffff,param_2,param_3,param_4,param_5,0x14f6bd14a);
  return uVar2;
}

// RSA_security_bits @ 14f6bd1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_security_bits(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 4) == 1) {
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
    if (0 < iVar2) {
      iVar3 = rsa_multip_cap(uVar1);
      if (iVar2 + 2 <= iVar3) goto LAB_14f6bd1f1;
    }
    return 0;
  }
LAB_14f6bd1f1:
  uVar4 = BN_security_bits(uVar1,0xffffffff);
  return uVar4;
}

// RSA_set0_crt_params @ 14f6bd210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_set0_crt_params(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_1 + 0x40) == 0) && (param_2 == 0)) ||
      ((*(longlong *)(param_1 + 0x48) == 0 && (param_3 == 0)))) ||
     ((*(longlong *)(param_1 + 0x50) == 0 && (param_4 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_clear_free();
      *(longlong *)(param_1 + 0x40) = param_2;
      BN_set_flags(param_2,4);
    }
    if (param_3 != 0) {
      BN_clear_free(*(undefined8 *)(param_1 + 0x48));
      *(longlong *)(param_1 + 0x48) = param_3;
      BN_set_flags(param_3,4);
    }
    if (param_4 != 0) {
      BN_clear_free(*(undefined8 *)(param_1 + 0x50));
      *(longlong *)(param_1 + 0x50) = param_4;
      BN_set_flags(param_4,4);
    }
    uVar1 = 1;
  }
  return uVar1;
}

// RSA_set0_factors @ 14f6bd2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_set0_factors(longlong param_1,longlong param_2,longlong param_3)

{
  if (((*(longlong *)(param_1 + 0x30) != 0) || (param_2 != 0)) &&
     ((*(longlong *)(param_1 + 0x38) != 0 || (param_3 != 0)))) {
    if (param_2 != 0) {
      BN_clear_free();
      *(longlong *)(param_1 + 0x30) = param_2;
      BN_set_flags(param_2,4);
    }
    if (param_3 != 0) {
      BN_clear_free(*(undefined8 *)(param_1 + 0x38));
      *(longlong *)(param_1 + 0x38) = param_3;
      BN_set_flags(param_3,4);
    }
    return 1;
  }
  return 0;
}

// RSA_set0_key @ 14f6bd390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_set0_key(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) && (param_2 == 0)) ||
     ((*(longlong *)(param_1 + 0x20) == 0 && (param_3 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free();
      *(longlong *)(param_1 + 0x18) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(undefined8 *)(param_1 + 0x20));
      *(longlong *)(param_1 + 0x20) = param_3;
    }
    if (param_4 != 0) {
      BN_clear_free(*(undefined8 *)(param_1 + 0x28));
      *(longlong *)(param_1 + 0x28) = param_4;
      BN_set_flags(param_4,4);
    }
    uVar1 = 1;
  }
  return uVar1;
}

// RSA_set0_multi_prime_params @ 14f6bd440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RSA_set0_multi_prime_params
          (longlong param_1,longlong param_2,longlong *param_3,longlong param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  if ((((param_2 == 0) || (param_3 == (longlong *)0x0)) || (param_4 == 0)) || (param_5 == 0)) {
    return 0;
  }
  lVar2 = OPENSSL_sk_new_reserve(0,param_5);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar6 = lVar5;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x58);
    }
    if (0 < param_5) {
      param_2 = param_2 - (longlong)param_3;
      param_4 = param_4 - (longlong)param_3;
      do {
        puVar3 = (undefined8 *)rsa_multip_info_new();
        if (puVar3 == (undefined8 *)0x0) goto LAB_14f6bd588;
        if (((*(longlong *)(param_2 + (longlong)param_3) == 0) || (*param_3 == 0)) ||
           (*(longlong *)(param_4 + (longlong)param_3) == 0)) {
          rsa_multip_info_free(puVar3);
          goto LAB_14f6bd588;
        }
        BN_clear_free(*puVar3);
        BN_clear_free(puVar3[1]);
        BN_clear_free(puVar3[2]);
        uVar4 = *(undefined8 *)(param_2 + (longlong)param_3);
        *puVar3 = uVar4;
        puVar3[1] = *param_3;
        puVar3[2] = *(undefined8 *)(param_4 + (longlong)param_3);
        BN_set_flags(uVar4,4);
        BN_set_flags(puVar3[1],4);
        BN_set_flags(puVar3[2],4);
        OPENSSL_sk_push(lVar2,puVar3);
        lVar5 = lVar5 + 1;
        param_3 = param_3 + 1;
      } while (lVar5 < param_5);
    }
    *(longlong *)(param_1 + 0x58) = lVar2;
    iVar1 = rsa_multip_calc_product(param_1);
    if (iVar1 == 0) {
      *(longlong *)(param_1 + 0x58) = lVar6;
LAB_14f6bd588:
      OPENSSL_sk_pop_free(lVar2,rsa_multip_info_free_ex);
      uVar4 = 0;
    }
    else {
      if (lVar6 != 0) {
        OPENSSL_sk_pop_free(lVar6,rsa_multip_info_free);
      }
      *(undefined4 *)(param_1 + 4) = 1;
      uVar4 = 1;
    }
  }
  return uVar4;
}

// RSA_set_ex_data @ 14f6bd600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x68);
  return;
}

// RSA_set_method @ 14f6bd630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_set_method(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 8) + 0x40);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  ENGINE_finish(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(longlong *)(param_1 + 8) = param_2;
  if (*(code **)(param_2 + 0x38) != (code *)0x0) {
    (**(code **)(param_2 + 0x38))(param_1);
  }
  return 1;
}

// RSA_up_ref @ 14f6bd6b0

bool RSA_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// FUN_14f6bd6d0 @ 14f6bd6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6bd6d0(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f6bd6f0 @ 14f6bd6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6bd6f0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6bd710 @ 14f6bd710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6bd710(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6bd730 @ 14f6bd730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6bd730(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6bd750 @ 14f6bd750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6bd750(void)

{
  OPENSSL_sk_value();
  return;
}

