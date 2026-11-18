// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// CT_POLICY_EVAL_CTX_free @ 14f6cf870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CT_POLICY_EVAL_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    X509_free(*param_1);
    X509_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\ct\\ct_policy.c",0x32);
  }
  return;
}

// CT_POLICY_EVAL_CTX_new @ 14f6cf900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CT_POLICY_EVAL_CTX_new(void)

{
  longlong lVar1;
  __time64_t _Var2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6cf90c;
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\ct\\ct_policy.c",0x1e);
  if (lVar1 == 0) {
    ERR_put_error(0x32,0x85,0x41,"crypto\\ct\\ct_policy.c",0x21,uVar3);
    return 0;
  }
  _Var2 = _time64((__time64_t *)0x0);
  *(__time64_t *)(lVar1 + 0x18) = (_Var2 + 300) * 1000;
  return lVar1;
}

// CT_POLICY_EVAL_CTX_set1_cert @ 14f6cf980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CT_POLICY_EVAL_CTX_set1_cert(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_up_ref(param_2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_1 = param_2;
  return 1;
}

// CT_POLICY_EVAL_CTX_set1_issuer @ 14f6cf9d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CT_POLICY_EVAL_CTX_set1_issuer(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_up_ref(param_2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}

// CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE @ 14f6cfa20

void CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

// CT_POLICY_EVAL_CTX_set_time @ 14f6cfa30

void CT_POLICY_EVAL_CTX_set_time(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}

// FUN_14f6cfa40 @ 14f6cfa40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cfa40(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6cfa51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

