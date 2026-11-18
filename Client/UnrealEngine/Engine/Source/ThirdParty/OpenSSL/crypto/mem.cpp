// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// CRYPTO_malloc @ 14f6c6a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * CRYPTO_malloc(size_t param_1)

{
  void *pvVar1;
  
  if ((PTR_CRYPTO_malloc_154df8698 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_malloc_154df8698 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6c6a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_154df8698)();
    return pvVar1;
  }
  if (param_1 == 0) {
    return (void *)0x0;
  }
  DAT_154df8690 = 0;
                    /* WARNING: Could not recover jumptable at 0x00014f6c6a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(param_1);
  return pvVar1;
}

// CRYPTO_free @ 14f6c6a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_free(void *param_1)

{
  if ((PTR_CRYPTO_free_154df86a8 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_free_154df86a8 != CRYPTO_free)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6c6aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_CRYPTO_free_154df86a8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6c6ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}

// CRYPTO_realloc @ 14f6c6ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * CRYPTO_realloc(void *param_1,size_t param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  if ((PTR_CRYPTO_realloc_154df86a0 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_realloc_154df86a0 != CRYPTO_realloc)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6c6af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_CRYPTO_realloc_154df86a0)(param_1,param_2);
    return pvVar1;
  }
  if (param_1 == (void *)0x0) {
    if ((PTR_CRYPTO_malloc_154df8698 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_malloc_154df8698 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6c6b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_154df8698)(param_2,param_3,param_4);
      return pvVar1;
    }
    if (param_2 != 0) {
      DAT_154df8690 = 0;
                    /* WARNING: Could not recover jumptable at 0x00014f6c6b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = malloc(param_2);
      return pvVar1;
    }
    return (void *)0x0;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6c6b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = realloc(param_1,param_2);
    return pvVar1;
  }
  if ((PTR_CRYPTO_free_154df86a8 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_free_154df86a8 != CRYPTO_free)) {
    (*(code *)PTR_CRYPTO_free_154df86a8)(param_1,param_3,param_4,param_4,0x14f6c6aca);
    return (void *)0x0;
  }
  free(param_1);
  return (void *)0x0;
}

// CRYPTO_clear_free @ 14f6c6b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_clear_free(void *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      OPENSSL_cleanse();
    }
    if ((PTR_CRYPTO_free_154df86a8 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_free_154df86a8 != CRYPTO_free)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6c6bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_CRYPTO_free_154df86a8)(param_1,param_3,param_4);
      return;
    }
    free(param_1);
  }
  return;
}

// CRYPTO_clear_realloc @ 14f6c6c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * CRYPTO_clear_realloc
                 (void *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                 undefined4 param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    if ((PTR_CRYPTO_malloc_154df8698 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_malloc_154df8698 != CRYPTO_malloc)) {
      pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_154df8698)(param_3,param_4,param_5);
      return pvVar1;
    }
    pvVar1 = (void *)0x0;
    if (param_3 != 0) {
      DAT_154df8690 = 0;
      pvVar1 = malloc(param_3);
    }
    return pvVar1;
  }
  if (param_3 == 0) {
    CRYPTO_clear_free(param_1,param_2,param_4,param_5);
    return (void *)0x0;
  }
  if (param_3 < param_2) {
    OPENSSL_cleanse((longlong)param_1 + param_3,param_2 - param_3);
    return param_1;
  }
  pvVar1 = (void *)CRYPTO_malloc(param_3,param_4,param_5);
  if (pvVar1 != (void *)0x0) {
    memcpy(pvVar1,param_1,param_2);
    CRYPTO_clear_free(param_1,param_2,param_4,param_5);
  }
  return pvVar1;
}

// CRYPTO_get_mem_functions @ 14f6c6d60

void CRYPTO_get_mem_functions(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = PTR_CRYPTO_malloc_154df8698;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = PTR_CRYPTO_realloc_154df86a0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = PTR_CRYPTO_free_154df86a8;
  }
  return;
}

// CRYPTO_zalloc @ 14f6c6e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * CRYPTO_zalloc(size_t param_1)

{
  void *_Dst;
  
  if ((PTR_CRYPTO_malloc_154df8698 == (undefined *)0x0) ||
     ((code *)PTR_CRYPTO_malloc_154df8698 == CRYPTO_malloc)) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    DAT_154df8690 = 0;
    _Dst = malloc(param_1);
  }
  else {
    _Dst = (void *)(*(code *)PTR_CRYPTO_malloc_154df8698)(param_1);
  }
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}

