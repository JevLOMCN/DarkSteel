// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// BUF_MEM_free @ 14f6c76c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BUF_MEM_free(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        CRYPTO_clear_free(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                          "crypto\\buffer\\buffer.c",0x33);
      }
      else {
        CRYPTO_secure_clear_free();
      }
    }
    CRYPTO_free(param_1,"crypto\\buffer\\buffer.c",0x35);
  }
  return;
}

// BUF_MEM_grow @ 14f6c7730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BUF_MEM_grow(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6c7740;
  uVar2 = *param_1;
  if (param_2 <= uVar2) {
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 <= param_1[2]) {
    if (param_1[1] != 0) {
      memset((void *)(param_1[1] + uVar2),0,param_2 - uVar2);
    }
    *param_1 = param_2;
    return param_2;
  }
  if (0x5ffffffc < param_2) {
    ERR_put_error(7,100,0x41,"crypto\\buffer\\buffer.c",0x5a,0x14f6c7740);
    return 0;
  }
  uVar2 = (param_2 + 3) / 3 << 2;
  if ((param_1[3] & 1) == 0) {
    uVar1 = CRYPTO_realloc(param_1[1],uVar2,"crypto\\buffer\\buffer.c",0x61);
  }
  else {
    uVar1 = FUN_14f6c7b10(param_1);
  }
  if (uVar1 == 0) {
    ERR_put_error(7,100,0x41,"crypto\\buffer\\buffer.c",99,uVar3);
    return 0;
  }
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  memset((void *)(uVar1 + *param_1),0,param_2 - *param_1);
  *param_1 = param_2;
  return param_2;
}

// BUF_MEM_grow_clean @ 14f6c7880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BUF_MEM_grow_clean(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if (param_2 <= uVar2) {
    if (param_1[1] != 0) {
      memset((void *)(param_1[1] + param_2),0,uVar2 - param_2);
    }
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 <= param_1[2]) {
    memset((void *)(param_1[1] + uVar2),0,param_2 - uVar2);
    *param_1 = param_2;
    return param_2;
  }
  if (0x5ffffffc < param_2) {
    ERR_put_error(7,0x69,0x41,"crypto\\buffer\\buffer.c",0x80);
    return 0;
  }
  uVar2 = (param_2 + 3) / 3 << 2;
  if ((param_1[3] & 1) == 0) {
    uVar1 = CRYPTO_clear_realloc
                      (param_1[1],param_1[2],uVar2,"crypto\\buffer\\buffer.c",0x87,0x14f6c7890);
  }
  else {
    uVar1 = FUN_14f6c7b10(param_1);
  }
  if (uVar1 == 0) {
    ERR_put_error(7,0x69,0x41,"crypto\\buffer\\buffer.c",0x89);
    return 0;
  }
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  memset((void *)(uVar1 + *param_1),0,param_2 - *param_1);
  *param_1 = param_2;
  return param_2;
}

// BUF_MEM_new @ 14f6c79f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BUF_MEM_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\buffer\\buffer.c",0x23);
  if (lVar1 == 0) {
    ERR_put_error(7,0x65,0x41,"crypto\\buffer\\buffer.c",0x25);
    lVar1 = 0;
  }
  return lVar1;
}

// BUF_MEM_new_ex @ 14f6c7a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BUF_MEM_new_ex(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6c7a4c;
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\buffer\\buffer.c",0x23);
  if (lVar1 == 0) {
    ERR_put_error(7,0x65,0x41,"crypto\\buffer\\buffer.c",0x25,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x18) = param_1;
  return lVar1;
}

// BUF_reverse @ 14f6c7aa0

void BUF_reverse(undefined1 *param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_2 == (undefined1 *)0x0) {
    puVar2 = param_1 + (param_3 - 1);
    for (param_3 = param_3 >> 1; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = *puVar2;
      *puVar2 = *param_1;
      puVar2 = puVar2 + -1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  else {
    param_1 = param_1 + (param_3 - 1);
    if (param_3 != 0) {
      do {
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + -1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  return;
}

// FUN_14f6c7b10 @ 14f6c7b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_14f6c7b10(size_t *param_1,undefined8 param_2)

{
  void *_Dst;
  
  _Dst = (void *)CRYPTO_secure_malloc(param_2,"crypto\\buffer\\buffer.c",0x3e);
  if (((void *)param_1[1] != (void *)0x0) && (_Dst != (void *)0x0)) {
    memcpy(_Dst,(void *)param_1[1],*param_1);
    CRYPTO_secure_clear_free(param_1[1],*param_1,"crypto\\buffer\\buffer.c",0x42);
    param_1[1] = 0;
  }
  return _Dst;
}

