// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 61

// X509_LOOKUP_by_alias @ 14f6a8670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_LOOKUP_by_alias(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x48),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a8693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// X509_LOOKUP_by_fingerprint @ 14f6a86b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_LOOKUP_by_fingerprint(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x40),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a86d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// X509_LOOKUP_by_issuer_serial @ 14f6a86f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_LOOKUP_by_issuer_serial(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x38),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a8713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// X509_LOOKUP_by_subject @ 14f6a8730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_LOOKUP_by_subject(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x30),
      UNRECOVERED_JUMPTABLE != (code *)0x0)) && (*(int *)(param_1 + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a8759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// X509_LOOKUP_ctrl @ 14f6a8770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_LOOKUP_ctrl(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x28);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a879b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}

// X509_LOOKUP_free @ 14f6a87b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_LOOKUP_free(longlong param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    if ((*(longlong *)(param_1 + 8) != 0) &&
       (pcVar1 = *(code **)(*(longlong *)(param_1 + 8) + 0x10), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    CRYPTO_free(param_1,"crypto\\x509\\x509_lu.c",0x29);
  }
  return;
}

// X509_LOOKUP_init @ 14f6a8820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_LOOKUP_init(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a8848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}

// X509_LOOKUP_new @ 14f6a8860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_LOOKUP_new(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6a8870;
  lVar2 = CRYPTO_zalloc(0x20,"crypto\\x509\\x509_lu.c",0x14);
  if (lVar2 == 0) {
    ERR_put_error(0xb,0x9b,0x41,"crypto\\x509\\x509_lu.c",0x17,uVar3);
    return 0;
  }
  *(longlong *)(lVar2 + 8) = param_1;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 8))(lVar2);
    if (iVar1 == 0) {
      CRYPTO_free(lVar2,"crypto\\x509\\x509_lu.c",0x1d);
      return 0;
    }
  }
  return lVar2;
}

// X509_LOOKUP_shutdown @ 14f6a8920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_LOOKUP_shutdown(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a8948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}

// X509_OBJECT_free @ 14f6a8960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_OBJECT_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      X509_free(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 2) {
      X509_CRL_free(*(undefined8 *)(param_1 + 2));
    }
  }
  CRYPTO_free(param_1,"crypto\\x509\\x509_lu.c",0x1d7);
  return;
}

// X509_OBJECT_idx_by_subject @ 14f6a8a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_OBJECT_idx_by_subject(void)

{
  FUN_14f6a9f50();
  return;
}

// X509_OBJECT_new @ 14f6a8a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * X509_OBJECT_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  return puVar1;
}

// X509_OBJECT_retrieve_by_subject @ 14f6a8a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_OBJECT_retrieve_by_subject(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14f6a9f50();
  if (iVar1 == -1) {
    return 0;
  }
  uVar2 = OPENSSL_sk_value(param_1,iVar1);
  return uVar2;
}

// X509_OBJECT_retrieve_match @ 14f6a8ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * X509_OBJECT_retrieve_match(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = OPENSSL_sk_find();
  if (iVar1 < 0) {
    return (int *)0x0;
  }
  if (1 < *param_2 - 1U) {
    piVar4 = (int *)OPENSSL_sk_value(param_1,iVar1);
    return piVar4;
  }
  iVar2 = OPENSSL_sk_num(param_1);
  do {
    if (iVar2 <= iVar1) {
      return (int *)0x0;
    }
    piVar4 = (int *)OPENSSL_sk_value(param_1,iVar1);
    iVar3 = *piVar4;
    if (iVar3 != *param_2) {
      return (int *)0x0;
    }
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        iVar3 = X509_subject_name_cmp(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
      }
      else {
        if (iVar3 != 2) goto LAB_14f6a8b71;
        iVar3 = X509_CRL_cmp(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
      }
      if (iVar3 != 0) {
        return (int *)0x0;
      }
    }
LAB_14f6a8b71:
    if (*param_2 == 1) {
      iVar3 = X509_cmp(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
    }
    else {
      if (*param_2 != 2) {
        return piVar4;
      }
      iVar3 = X509_CRL_match(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
    }
    if (iVar3 == 0) {
      return piVar4;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

// X509_OBJECT_set1_X509 @ 14f6a8bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_OBJECT_set1_X509(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = X509_up_ref(param_2);
    if (iVar1 != 0) {
      if (*param_1 == 1) {
        X509_free(*(undefined8 *)(param_1 + 2));
      }
      else if (*param_1 == 2) {
        X509_CRL_free(*(undefined8 *)(param_1 + 2));
        *param_1 = 1;
        *(undefined8 *)(param_1 + 2) = param_2;
        return 1;
      }
      *param_1 = 1;
      *(undefined8 *)(param_1 + 2) = param_2;
      return 1;
    }
  }
  return 0;
}

// X509_OBJECT_set1_X509_CRL @ 14f6a8c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_OBJECT_set1_X509_CRL(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = X509_CRL_up_ref(param_2);
    if (iVar1 != 0) {
      if (*param_1 == 1) {
        X509_free(*(undefined8 *)(param_1 + 2));
      }
      else if (*param_1 == 2) {
        X509_CRL_free(*(undefined8 *)(param_1 + 2));
        *param_1 = 2;
        *(undefined8 *)(param_1 + 2) = param_2;
        return 1;
      }
      *param_1 = 2;
      *(undefined8 *)(param_1 + 2) = param_2;
      return 1;
    }
  }
  return 0;
}

// X509_OBJECT_up_ref_count @ 14f6a8cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_OBJECT_up_ref_count(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 1) {
    uVar1 = X509_up_ref(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  if (*param_1 != 2) {
    return 1;
  }
  uVar1 = X509_CRL_up_ref(*(undefined8 *)(param_1 + 2));
  return uVar1;
}

// X509_STORE_CTX_get1_certs @ 14f6a8d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_CTX_get1_certs(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int local_res8 [2];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x90));
  iVar3 = FUN_14f6a9f50(*(undefined8 *)(lVar1 + 8),1,param_2,local_res8);
  if (iVar3 < 0) {
    lVar5 = X509_OBJECT_new();
    CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
    if (lVar5 != 0) {
      iVar3 = X509_STORE_CTX_get_by_subject(param_1,1,param_2,lVar5);
      if (iVar3 == 0) {
        X509_OBJECT_free(lVar5);
        return 0;
      }
      X509_OBJECT_free(lVar5);
      CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x90));
      iVar3 = FUN_14f6a9f50(*(undefined8 *)(lVar1 + 8),1,param_2,local_res8);
      if (-1 < iVar3) goto LAB_14f6a8e29;
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
    }
    uVar6 = 0;
  }
  else {
LAB_14f6a8e29:
    uVar6 = OPENSSL_sk_new_null();
    iVar7 = 0;
    if (0 < local_res8[0]) {
      do {
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 8),iVar3);
        uVar2 = *(undefined8 *)(lVar5 + 8);
        iVar4 = X509_up_ref(uVar2);
        if (iVar4 == 0) {
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
LAB_14f6a8ebe:
          OPENSSL_sk_pop_free(uVar6,X509_free);
          return 0;
        }
        iVar4 = OPENSSL_sk_push(uVar6,uVar2);
        if (iVar4 == 0) {
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
          X509_free(uVar2);
          goto LAB_14f6a8ebe;
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar7 < local_res8[0]);
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
  }
  return uVar6;
}

// X509_STORE_CTX_get1_crls @ 14f6a8ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_STORE_CTX_get1_crls(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  undefined8 uVar8;
  
  uVar8 = 0x14f6a8efe;
  lVar4 = OPENSSL_sk_new_null();
  piVar5 = (int *)CRYPTO_zalloc(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (piVar5 == (int *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar8);
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
  }
  iVar7 = 0;
  lVar1 = *param_1;
  if (lVar4 == 0) {
LAB_14f6a9069:
    if (piVar5 != (int *)0x0) {
      if (*piVar5 == 1) {
        X509_free(*(undefined8 *)(piVar5 + 2));
      }
      else if (*piVar5 == 2) {
        X509_CRL_free(*(undefined8 *)(piVar5 + 2));
      }
    }
  }
  else if (piVar5 != (int *)0x0) {
    if ((lVar1 != 0) &&
       (iVar2 = X509_STORE_CTX_get_by_subject(param_1,2,param_2,piVar5), iVar2 != 0)) {
      X509_OBJECT_free(piVar5);
      CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x90));
      iVar2 = FUN_14f6a9f50(*(undefined8 *)(lVar1 + 8),2,param_2,local_res8);
      if (-1 < iVar2) {
        if (0 < local_res8[0]) {
          do {
            lVar6 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 8),iVar2);
            uVar8 = *(undefined8 *)(lVar6 + 8);
            iVar3 = X509_CRL_up_ref(uVar8);
            if (iVar3 == 0) {
              CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
              OPENSSL_sk_pop_free(lVar4,X509_CRL_free);
              return 0;
            }
            iVar3 = OPENSSL_sk_push(lVar4,uVar8);
            if (iVar3 == 0) {
              CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
              X509_CRL_free(uVar8);
              OPENSSL_sk_pop_free(lVar4,X509_CRL_free);
              return 0;
            }
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar7 < local_res8[0]);
        }
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
        return lVar4;
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
      goto LAB_14f6a90a3;
    }
    goto LAB_14f6a9069;
  }
  CRYPTO_free(piVar5,"crypto\\x509\\x509_lu.c",0x1d7);
LAB_14f6a90a3:
  OPENSSL_sk_free(lVar4);
  return 0;
}

// X509_STORE_CTX_get1_issuer @ 14f6a90d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_STORE_CTX_get1_issuer(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f6a90e7;
  puVar6 = (undefined4 *)CRYPTO_zalloc(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (puVar6 == (undefined4 *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar10);
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
  }
  lVar1 = *param_2;
  if (puVar6 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  *param_1 = 0;
  uVar10 = X509_get_issuer_name(param_3);
  iVar4 = X509_STORE_CTX_get_by_subject(param_2,1,uVar10,puVar6);
  if (iVar4 == 1) {
    iVar4 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(puVar6 + 2));
    if ((iVar4 != 0) &&
       (iVar4 = x509_check_cert_time(param_2,*(undefined8 *)(puVar6 + 2),0xffffffff), iVar4 != 0)) {
      *param_1 = *(longlong *)(puVar6 + 2);
      iVar4 = X509_up_ref();
      uVar9 = 1;
      if (iVar4 == 0) {
        *param_1 = 0;
        uVar9 = 0xffffffff;
      }
      X509_OBJECT_free(puVar6);
      return uVar9;
    }
    X509_OBJECT_free(puVar6);
    if (lVar1 != 0) {
      CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x90));
      iVar4 = FUN_14f6a9f50(*(undefined8 *)(lVar1 + 8),1,uVar10);
      uVar9 = 0;
      if ((iVar4 != -1) &&
         (iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), uVar9 = 0, uVar3 = 0, iVar4 < iVar5))
      {
        do {
          uVar9 = uVar3;
          piVar7 = (int *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 8),iVar4);
          if (*piVar7 != 1) break;
          uVar8 = X509_get_subject_name(*(undefined8 *)(piVar7 + 2));
          iVar5 = X509_NAME_cmp(uVar10,uVar8);
          if (iVar5 != 0) break;
          iVar5 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(piVar7 + 2));
          if (iVar5 != 0) {
            lVar2 = *(longlong *)(piVar7 + 2);
            *param_1 = lVar2;
            uVar9 = 1;
            iVar5 = x509_check_cert_time(param_2,lVar2,0xffffffff);
            if (iVar5 != 0) break;
          }
          iVar4 = iVar4 + 1;
          iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
          uVar3 = uVar9;
        } while (iVar4 < iVar5);
      }
      if ((*param_1 != 0) && (iVar4 = X509_up_ref(), iVar4 == 0)) {
        *param_1 = 0;
        uVar9 = 0xffffffff;
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
      return uVar9;
    }
  }
  else {
    X509_OBJECT_free(puVar6);
  }
  return 0;
}

// X509_STORE_CTX_get_by_subject @ 14f6a9300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_STORE_CTX_get_by_subject(longlong *param_1,int param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  int local_28 [2];
  undefined8 local_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  piVar8 = (int *)0x0;
  local_28[0] = 0;
  local_20 = 0;
  CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x90));
  uVar6 = *(undefined8 *)(lVar1 + 8);
  iVar3 = FUN_14f6a9f50(uVar6,param_2,param_3,0);
  piVar4 = piVar8;
  if (iVar3 != -1) {
    piVar4 = (int *)OPENSSL_sk_value(uVar6,iVar3);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
  if ((piVar4 == (int *)0x0) || (param_2 == 2)) {
    iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x10));
    if (0 < iVar3) {
      do {
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x10),piVar8);
        if ((((*(longlong *)(lVar5 + 8) != 0) &&
             (pcVar2 = *(code **)(*(longlong *)(lVar5 + 8) + 0x30), pcVar2 != (code *)0x0)) &&
            (*(int *)(lVar5 + 4) == 0)) &&
           (iVar3 = (*pcVar2)(lVar5,param_2,param_3,local_28), iVar3 != 0)) {
          piVar4 = local_28;
          goto LAB_14f6a93fb;
        }
        uVar7 = (int)piVar8 + 1;
        piVar8 = (int *)(ulonglong)uVar7;
        iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x10));
      } while ((int)uVar7 < iVar3);
    }
    if (piVar4 != (int *)0x0) goto LAB_14f6a93fb;
LAB_14f6a9426:
    uVar6 = 0;
  }
  else {
LAB_14f6a93fb:
    if (*piVar4 == 1) {
      iVar3 = X509_up_ref(*(undefined8 *)(piVar4 + 2));
LAB_14f6a9422:
      if (iVar3 == 0) goto LAB_14f6a9426;
    }
    else if (*piVar4 == 2) {
      iVar3 = X509_CRL_up_ref(*(undefined8 *)(piVar4 + 2));
      goto LAB_14f6a9422;
    }
    *param_4 = *piVar4;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar4 + 2);
    uVar6 = 1;
  }
  return uVar6;
}

// X509_STORE_CTX_get_obj_by_subject @ 14f6a9460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
X509_STORE_CTX_get_obj_by_subject(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6a947a;
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (puVar2 == (undefined4 *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar3);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    iVar1 = X509_STORE_CTX_get_by_subject(param_1,param_2,param_3,puVar2);
    if (iVar1 == 0) {
      X509_OBJECT_free(puVar2);
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}

// X509_STORE_add_cert @ 14f6a9510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_add_cert(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14f6aa080(param_1,param_2,0);
  if (iVar1 == 0) {
    ERR_put_error(0xb,0x7c,0x41,"crypto\\x509\\x509_lu.c",0x173);
    return 0;
  }
  return 1;
}

// X509_STORE_add_crl @ 14f6a9560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_add_crl(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14f6aa080(param_1,param_2,1);
  if (iVar1 == 0) {
    ERR_put_error(0xb,0x7d,0x41,"crypto\\x509\\x509_lu.c",0x17c);
    return 0;
  }
  return 1;
}

// X509_STORE_add_lookup @ 14f6a95b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_STORE_add_lookup(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6a95ca;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar5 = 0;
  iVar3 = OPENSSL_sk_num(uVar1);
  if (0 < iVar3) {
    do {
      lVar4 = OPENSSL_sk_value(uVar1,iVar5);
      if (param_2 == *(longlong *)(lVar4 + 8)) {
        return lVar4;
      }
      iVar5 = iVar5 + 1;
      iVar3 = OPENSSL_sk_num(uVar1);
    } while (iVar5 < iVar3);
  }
  lVar4 = X509_LOOKUP_new(param_2);
  if (lVar4 == 0) {
    ERR_put_error(0xb,0x9d,0x41,"crypto\\x509\\x509_lu.c",0x105,uVar6);
  }
  else {
    *(longlong *)(lVar4 + 0x18) = param_1;
    iVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x10),lVar4);
    if (iVar3 != 0) {
      return lVar4;
    }
    ERR_put_error(0xb,0x9d,0x41,"crypto\\x509\\x509_lu.c",0x10d,uVar6);
    if ((*(longlong *)(lVar4 + 8) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(lVar4 + 8) + 0x10), pcVar2 != (code *)0x0)) {
      (*pcVar2)(lVar4);
    }
    CRYPTO_free(lVar4,"crypto\\x509\\x509_lu.c",0x29);
  }
  return 0;
}

// X509_STORE_free @ 14f6a96c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_free(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x88);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 2) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      iVar6 = 0;
      iVar4 = OPENSSL_sk_num(uVar2);
      if (0 < iVar4) {
        do {
          lVar5 = OPENSSL_sk_value(uVar2,iVar6);
          if ((*(longlong *)(lVar5 + 8) != 0) &&
             (pcVar3 = *(code **)(*(longlong *)(lVar5 + 8) + 0x20), pcVar3 != (code *)0x0)) {
            (*pcVar3)(lVar5);
          }
          if ((*(longlong *)(lVar5 + 8) != 0) &&
             (pcVar3 = *(code **)(*(longlong *)(lVar5 + 8) + 0x10), pcVar3 != (code *)0x0)) {
            (*pcVar3)(lVar5);
          }
          CRYPTO_free(lVar5,"crypto\\x509\\x509_lu.c",0x29);
          iVar6 = iVar6 + 1;
          iVar4 = OPENSSL_sk_num(uVar2);
        } while (iVar6 < iVar4);
      }
      OPENSSL_sk_free(uVar2);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),X509_OBJECT_free);
      CRYPTO_free_ex_data(4,param_1,param_1 + 0x80);
      X509_VERIFY_PARAM_free(*(undefined8 *)(param_1 + 0x18));
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x90));
      CRYPTO_free(param_1,"crypto\\x509\\x509_lu.c",0xe6);
    }
  }
  return;
}

// X509_STORE_get0_objects @ 14f6a97e0

undefined8 X509_STORE_get0_objects(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// X509_STORE_get_ex_data @ 14f6a9860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x80);
  return;
}

// X509_STORE_lock @ 14f6a98e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_lock(longlong param_1)

{
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x90));
  return;
}

// X509_STORE_new @ 14f6a9910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * X509_STORE_new(void)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6a991c;
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x98,"crypto\\x509\\x509_lu.c",0xa2);
  if (puVar2 == (undefined4 *)0x0) {
    ERR_put_error(0xb,0x9e,0x41,"crypto\\x509\\x509_lu.c",0xa5,uVar5);
    return (undefined4 *)0x0;
  }
  lVar3 = OPENSSL_sk_new(FUN_14f6a9ea0);
  *(longlong *)(puVar2 + 2) = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0xa9;
  }
  else {
    *puVar2 = 1;
    lVar3 = OPENSSL_sk_new_null();
    *(longlong *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0xae;
    }
    else {
      lVar3 = X509_VERIFY_PARAM_new();
      *(longlong *)(puVar2 + 6) = lVar3;
      if (lVar3 == 0) {
        uVar4 = 0xb3;
      }
      else {
        iVar1 = CRYPTO_new_ex_data(4,puVar2,puVar2 + 0x20);
        if (iVar1 == 0) {
          uVar4 = 0xb7;
        }
        else {
          lVar3 = CRYPTO_THREAD_lock_new();
          *(longlong *)(puVar2 + 0x24) = lVar3;
          if (lVar3 != 0) {
            puVar2[0x22] = 1;
            return puVar2;
          }
          uVar4 = 0xbd;
        }
      }
    }
  }
  ERR_put_error(0xb,0x9e,0x41,"crypto\\x509\\x509_lu.c",uVar4,uVar5);
  X509_VERIFY_PARAM_free(*(undefined8 *)(puVar2 + 6));
  OPENSSL_sk_free(*(undefined8 *)(puVar2 + 2));
  OPENSSL_sk_free(*(undefined8 *)(puVar2 + 4));
  CRYPTO_free(puVar2,"crypto\\x509\\x509_lu.c",200);
  return (undefined4 *)0x0;
}

// X509_STORE_set1_param @ 14f6a9a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_set1_param(longlong param_1)

{
  X509_VERIFY_PARAM_set1(*(undefined8 *)(param_1 + 0x18));
  return;
}

// X509_STORE_set_depth @ 14f6a9ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_set_depth(longlong param_1)

{
  X509_VERIFY_PARAM_set_depth(*(undefined8 *)(param_1 + 0x18));
  return 1;
}

// X509_STORE_set_ex_data @ 14f6a9b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x80);
  return;
}

// X509_STORE_set_flags @ 14f6a9b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_set_flags(longlong param_1)

{
  X509_VERIFY_PARAM_set_flags(*(undefined8 *)(param_1 + 0x18));
  return;
}

// X509_STORE_set_purpose @ 14f6a9b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_set_purpose(longlong param_1)

{
  X509_VERIFY_PARAM_set_purpose(*(undefined8 *)(param_1 + 0x18));
  return;
}

// X509_STORE_set_trust @ 14f6a9bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_set_trust(longlong param_1)

{
  X509_VERIFY_PARAM_set_trust(*(undefined8 *)(param_1 + 0x18));
  return;
}

// X509_STORE_unlock @ 14f6a9bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_unlock(longlong param_1)

{
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x90));
  return;
}

// X509_STORE_up_ref @ 14f6a9c20

bool X509_STORE_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x88);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// FUN_14f6a9c40 @ 14f6a9c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9c40(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6a9c60 @ 14f6a9c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9c60(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6a9c80 @ 14f6a9c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9c80(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6a9ca0 @ 14f6a9ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9ca0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6a9cc0 @ 14f6a9cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9cc0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6a9ce0 @ 14f6a9ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9ce0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6a9d00 @ 14f6a9d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9d00(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6a9d20 @ 14f6a9d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9d20(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6a9d40 @ 14f6a9d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9d40(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6a9d60 @ 14f6a9d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9d60(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6a9d80 @ 14f6a9d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9d80(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6a9da0 @ 14f6a9da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9da0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f6a9dc0 @ 14f6a9dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9dc0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6a9de0 @ 14f6a9de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9de0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6a9e00 @ 14f6a9e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9e00(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6a9e20 @ 14f6a9e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9e20(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6a9e40 @ 14f6a9e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9e40(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6a9e60 @ 14f6a9e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9e60(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6a9e80 @ 14f6a9e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9e80(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6a9ea0 @ 14f6a9ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6a9ea0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  
  piVar2 = (int *)*param_2;
  piVar3 = (int *)*param_1;
  iVar1 = *piVar3;
  uVar5 = iVar1 - *piVar2;
  if (uVar5 == 0) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) {
      uVar5 = X509_subject_name_cmp
                        (*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2),piVar3,piVar2,
                         0x14f6a9eaa);
    }
    else if (iVar1 == 2) {
      uVar4 = X509_CRL_cmp(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2));
      return uVar4;
    }
  }
  return (ulonglong)uVar5;
}

// FUN_14f6a9f10 @ 14f6a9f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a9f10(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      X509_free(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 2) {
      X509_CRL_free(*(undefined8 *)(param_1 + 2));
      return;
    }
  }
  return;
}

// FUN_14f6a9f50 @ 14f6a9f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f6a9f50(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_298 [32];
  int local_278 [2];
  undefined1 *local_270;
  undefined8 local_240;
  undefined8 local_130;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  if (param_2 == 0) {
    return -1;
  }
  if (param_2 == 1) {
    local_270 = &stack0x00000110;
    local_130 = param_3;
  }
  else {
    if (param_2 != 2) goto LAB_14f6a9fb7;
    local_270 = &stack0x00000030;
    local_240 = param_3;
  }
  local_270 = local_270 + -0x288;
LAB_14f6a9fb7:
  local_278[0] = param_2;
  iVar1 = OPENSSL_sk_find(param_1,local_278);
  if ((-1 < iVar1) && (param_4 != (int *)0x0)) {
    iVar4 = iVar1 + 1;
    *param_4 = 1;
    iVar2 = OPENSSL_sk_num(param_1);
    if (iVar4 < iVar2) {
      do {
        piVar3 = (int *)OPENSSL_sk_value(param_1,iVar4);
        iVar2 = *piVar3;
        if (iVar2 != local_278[0]) {
          return iVar1;
        }
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            iVar2 = X509_subject_name_cmp(*(undefined8 *)(piVar3 + 2),local_270);
          }
          else {
            if (iVar2 != 2) goto LAB_14f6aa032;
            iVar2 = X509_CRL_cmp(*(undefined8 *)(piVar3 + 2),local_270);
          }
          if (iVar2 != 0) {
            return iVar1;
          }
        }
LAB_14f6aa032:
        *param_4 = *param_4 + 1;
        iVar4 = iVar4 + 1;
        iVar2 = OPENSSL_sk_num(param_1);
      } while (iVar4 < iVar2);
    }
  }
  return iVar1;
}

// FUN_14f6aa080 @ 14f6aa080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6aa080(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6aa094;
  iVar2 = 0;
  if (param_2 == 0) {
    return false;
  }
  piVar3 = (int *)CRYPTO_zalloc(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (piVar3 == (int *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar6);
    return false;
  }
  bVar5 = true;
  *piVar3 = 0;
  if (param_3 == 0) {
    *piVar3 = 1;
  }
  else {
    *piVar3 = 2;
  }
  *(longlong *)(piVar3 + 2) = param_2;
  if (*piVar3 == 1) {
    iVar1 = X509_up_ref(param_2);
  }
  else {
    if (*piVar3 != 2) goto LAB_14f6aa153;
    iVar1 = X509_CRL_up_ref(param_2);
  }
  if (iVar1 == 0) {
    *piVar3 = 0;
    X509_OBJECT_free(piVar3);
    return false;
  }
LAB_14f6aa153:
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x90));
  lVar4 = X509_OBJECT_retrieve_match(*(undefined8 *)(param_1 + 8),piVar3);
  if (lVar4 == 0) {
    iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),piVar3);
    bVar5 = iVar2 != 0;
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x90));
  if (iVar2 == 0) {
    X509_OBJECT_free(piVar3);
  }
  return bVar5;
}

