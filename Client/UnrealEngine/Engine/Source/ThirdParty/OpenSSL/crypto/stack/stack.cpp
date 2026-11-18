// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 27

// OPENSSL_sk_deep_copy @ 14f6a3f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * OPENSSL_sk_deep_copy(int *param_1,code *param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6a3f14;
  piVar3 = (int *)CRYPTO_malloc(0x20,"crypto\\stack\\stack.c",0x50);
  if (piVar3 == (int *)0x0) {
    ERR_put_error(0xf,0x7f,0x41,"crypto\\stack\\stack.c",0x51,uVar7);
    return (int *)0x0;
  }
  iVar6 = param_1[1];
  iVar2 = param_1[2];
  iVar1 = param_1[3];
  *piVar3 = *param_1;
  piVar3[1] = iVar6;
  piVar3[2] = iVar2;
  piVar3[3] = iVar1;
  iVar6 = param_1[5];
  iVar2 = param_1[6];
  iVar1 = param_1[7];
  piVar3[4] = param_1[4];
  piVar3[5] = iVar6;
  piVar3[6] = iVar2;
  piVar3[7] = iVar1;
  iVar6 = *param_1;
  if (iVar6 == 0) {
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[5] = 0;
  }
  else {
    iVar2 = 4;
    if (4 < iVar6) {
      iVar2 = iVar6;
    }
    piVar3[5] = iVar2;
    lVar4 = CRYPTO_zalloc((longlong)iVar2 << 3,"crypto\\stack\\stack.c",0x60);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      CRYPTO_free(piVar3,"crypto\\stack\\stack.c",0x62);
      piVar3 = (int *)0x0;
    }
    else {
      iVar6 = 0;
      if (0 < *piVar3) {
        lVar4 = 0;
        do {
          if (*(longlong *)(lVar4 + *(longlong *)(param_1 + 2)) != 0) {
            lVar5 = (*param_2)();
            *(longlong *)(lVar4 + *(longlong *)(piVar3 + 2)) = lVar5;
            if (lVar5 == 0) {
              lVar4 = (longlong)(iVar6 + -1);
              if (-1 < iVar6 + -1) {
                do {
                  if (*(longlong *)(*(longlong *)(piVar3 + 2) + lVar4 * 8) != 0) {
                    (*param_3)();
                  }
                  lVar4 = lVar4 + -1;
                } while (-1 < lVar4);
              }
              OPENSSL_sk_free(piVar3);
              return (int *)0x0;
            }
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar6 < *piVar3);
      }
    }
  }
  return piVar3;
}

// OPENSSL_sk_delete @ 14f6a4070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_delete(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    uVar1 = FUN_14f6a4840();
    return uVar1;
  }
  return 0;
}

// OPENSSL_sk_delete_ptr @ 14f6a40a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OPENSSL_sk_delete_ptr(int *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  iVar1 = *param_1;
  iVar4 = 0;
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 2);
    plVar5 = plVar2;
    do {
      if (*plVar5 == param_2) {
        lVar3 = plVar2[iVar4];
        if (iVar4 != iVar1 + -1) {
          memmove(plVar2 + iVar4,plVar2 + (iVar4 + 1),(longlong)((iVar1 - iVar4) + -1) << 3);
        }
        *param_1 = *param_1 + -1;
        return lVar3;
      }
      iVar4 = iVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}

// OPENSSL_sk_dup @ 14f6a4130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * OPENSSL_sk_dup(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x14f6a4140;
  piVar4 = (int *)CRYPTO_malloc(0x20,"crypto\\stack\\stack.c",0x31);
  if (piVar4 == (int *)0x0) {
    ERR_put_error(0xf,0x80,0x41,"crypto\\stack\\stack.c",0x32,uVar5);
    return (int *)0x0;
  }
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  *piVar4 = *param_1;
  piVar4[1] = iVar1;
  piVar4[2] = iVar2;
  piVar4[3] = iVar3;
  iVar1 = param_1[5];
  iVar2 = param_1[6];
  iVar3 = param_1[7];
  piVar4[4] = param_1[4];
  piVar4[5] = iVar1;
  piVar4[6] = iVar2;
  piVar4[7] = iVar3;
  if (*param_1 == 0) {
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[5] = 0;
    return piVar4;
  }
  _Dst = (void *)CRYPTO_malloc((longlong)param_1[5] << 3,"crypto\\stack\\stack.c",0x40);
  *(void **)(piVar4 + 2) = _Dst;
  if (_Dst == (void *)0x0) {
    OPENSSL_sk_free(piVar4);
    return (int *)0x0;
  }
  memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 << 3);
  return piVar4;
}

// OPENSSL_sk_find @ 14f6a4220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_find(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6a48b0(param_1,param_2,2);
  return;
}

// OPENSSL_sk_find_ex @ 14f6a4240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_find_ex(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6a48b0(param_1,param_2,1);
  return;
}

// OPENSSL_sk_free @ 14f6a4260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_free(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\stack\\stack.c",0x178);
    CRYPTO_free(param_1,"crypto\\stack\\stack.c",0x179);
  }
  return;
}

// OPENSSL_sk_insert @ 14f6a42b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OPENSSL_sk_insert(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0x7fffffff)) {
    iVar1 = FUN_14f6a4990(param_1,1,0);
    if (iVar1 != 0) {
      iVar1 = *param_1;
      if ((param_3 < iVar1) && (-1 < param_3)) {
        memmove((void *)(*(longlong *)(param_1 + 2) + (longlong)(param_3 + 1) * 8),
                (void *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)),
                (longlong)(iVar1 - param_3) << 3);
        *(undefined8 *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)) = param_2;
        *param_1 = *param_1 + 1;
        param_1[4] = 0;
        return *param_1;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = param_2;
      *param_1 = *param_1 + 1;
      param_1[4] = 0;
      return *param_1;
    }
  }
  return 0;
}

// OPENSSL_sk_is_sorted @ 14f6a43a0

undefined4 OPENSSL_sk_is_sorted(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}

// OPENSSL_sk_new @ 14f6a43c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_new(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\stack\\stack.c",0xd1);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  return;
}

// OPENSSL_sk_new_null @ 14f6a4410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_new_null(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\stack\\stack.c",0xd1,in_R9,0x14f6a441a);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return;
}

// OPENSSL_sk_new_reserve @ 14f6a4450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OPENSSL_sk_new_reserve(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_zalloc(0x20,"crypto\\stack\\stack.c",0xd1);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = param_1;
    if ((param_2 < 1) || (iVar1 = FUN_14f6a4990(lVar2,param_2,1), iVar1 != 0)) {
      return lVar2;
    }
    OPENSSL_sk_free(lVar2);
  }
  return 0;
}

// OPENSSL_sk_num @ 14f6a44e0

undefined4 OPENSSL_sk_num(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return *param_1;
}

// OPENSSL_sk_pop @ 14f6a4500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_pop(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_14f6a4840(param_1,*param_1 + -1);
    return uVar1;
  }
  return 0;
}

// OPENSSL_sk_pop_free @ 14f6a4530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_pop_free(int *param_1,code *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *param_1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 2)) != 0) {
          (*param_2)();
        }
        iVar1 = iVar1 + 1;
        lVar2 = lVar2 + 8;
      } while (iVar1 < *param_1);
    }
    CRYPTO_free(*(undefined8 *)(param_1 + 2),"crypto\\stack\\stack.c",0x178);
    CRYPTO_free(param_1,"crypto\\stack\\stack.c",0x179);
  }
  return;
}

// OPENSSL_sk_push @ 14f6a45d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_push(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = OPENSSL_sk_insert(param_1,param_2,*param_1);
  return uVar1;
}

// OPENSSL_sk_reserve @ 14f6a4600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_reserve(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 < 0) {
    return 1;
  }
  uVar1 = FUN_14f6a4990(param_1,param_2,1);
  return uVar1;
}

// OPENSSL_sk_set @ 14f6a4640

undefined8 OPENSSL_sk_set(int *param_1,int param_2,undefined8 param_3)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 2)) = param_3;
    param_1[4] = 0;
    return *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 2));
  }
  return 0;
}

// OPENSSL_sk_set_cmp_func @ 14f6a4680

void OPENSSL_sk_set_cmp_func(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = param_2;
  if (lVar1 != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// OPENSSL_sk_shift @ 14f6a46a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_shift(int *param_1)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    _Dst = *(undefined8 **)(param_1 + 2);
    uVar1 = *_Dst;
    iVar2 = *param_1 + -1;
    if (iVar2 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar2 << 3);
    }
    *param_1 = *param_1 + -1;
    return uVar1;
  }
  return 0;
}

// OPENSSL_sk_sort @ 14f6a4700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_sort(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1[4] == 0)) &&
     (*(_PtFuncCompare **)(param_1 + 6) != (_PtFuncCompare *)0x0)) {
    if (1 < *param_1) {
      qsort(*(void **)(param_1 + 2),(longlong)*param_1,8,*(_PtFuncCompare **)(param_1 + 6));
    }
    param_1[4] = 1;
  }
  return;
}

// OPENSSL_sk_unshift @ 14f6a4760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_unshift(undefined8 param_1,undefined8 param_2)

{
  OPENSSL_sk_insert(param_1,param_2,0);
  return;
}

// OPENSSL_sk_value @ 14f6a4780

undefined8 OPENSSL_sk_value(int *param_1,int param_2)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)param_2 * 8);
  }
  return 0;
}

// OPENSSL_sk_zero @ 14f6a47b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_zero(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    memset(*(void **)(param_1 + 2),0,(longlong)*param_1 << 3);
    *param_1 = 0;
  }
  return;
}

// FUN_14f6a4840 @ 14f6a4840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a4840(int *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 2);
  uVar2 = *(undefined8 *)(lVar1 + (longlong)param_2 * 8);
  if (param_2 != *param_1 + -1) {
    memmove((void *)(lVar1 + (longlong)param_2 * 8),(void *)(lVar1 + (longlong)(param_2 + 1) * 8),
            (longlong)((*param_1 - param_2) + -1) << 3);
  }
  *param_1 = *param_1 + -1;
  return uVar2;
}

// FUN_14f6a48b0 @ 14f6a48b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6a48b0(int *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res10 [3];
  ulonglong uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (*(_PtFuncCompare **)(param_1 + 6) == (_PtFuncCompare *)0x0) {
        if (0 < iVar1) {
          plVar5 = *(longlong **)(param_1 + 2);
          uVar3 = 0;
          do {
            if (*plVar5 == param_2) {
              return uVar3;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            plVar5 = plVar5 + 1;
          } while ((int)uVar2 < iVar1);
        }
      }
      else {
        local_res10[0] = param_2;
        if (param_1[4] == 0) {
          if (1 < iVar1) {
            qsort(*(void **)(param_1 + 2),(longlong)iVar1,8,*(_PtFuncCompare **)(param_1 + 6));
          }
          param_1[4] = 1;
        }
        if ((local_res10[0] != 0) &&
           (lVar4 = OBJ_bsearch_ex_(local_res10,*(undefined8 *)(param_1 + 2),*param_1,8,
                                    *(undefined8 *)(param_1 + 6),param_3), lVar4 != 0)) {
          return lVar4 - *(longlong *)(param_1 + 2) >> 3;
        }
      }
    }
  }
  return 0xffffffff;
}

// FUN_14f6a4990 @ 14f6a4990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a4990(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6a499c;
  if (0x7fffffff - *param_1 < param_2) {
    return 0;
  }
  param_2 = *param_1 + param_2;
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (*(longlong *)(param_1 + 2) == 0) {
    lVar1 = CRYPTO_zalloc((longlong)param_2 << 3,"crypto\\stack\\stack.c",0xb4);
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0xf,0x81,0x41,"crypto\\stack\\stack.c",0xb5,uVar3);
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      iVar2 = param_1[5];
      if (param_2 <= iVar2) {
        return 1;
      }
      do {
        if (0x7ffffffe < iVar2) {
          return 0;
        }
        if (iVar2 < 0x55555555) {
          iVar2 = iVar2 + iVar2 / 2;
        }
        else {
          iVar2 = 0x7fffffff;
        }
      } while (iVar2 < param_2);
      param_2 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
    }
    else if (param_2 == param_1[5]) {
      return 1;
    }
    lVar1 = CRYPTO_realloc(*(longlong *)(param_1 + 2),(longlong)param_2 << 3,
                           "crypto\\stack\\stack.c",0xc6);
    if (lVar1 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 2) = lVar1;
  }
  param_1[5] = param_2;
  return 1;
}

