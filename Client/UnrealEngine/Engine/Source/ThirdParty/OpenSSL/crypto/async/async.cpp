// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// ASYNC_block_pause @ 14f6cece0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASYNC_block_pause(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0,param_3,param_4,0x14f6cecea);
  if (iVar1 != 0) {
    lVar2 = CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    }
  }
  return;
}

// ASYNC_cleanup_thread @ 14f6ced30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASYNC_cleanup_thread
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0x100,0,param_3,param_4,0x14f6ced3a);
  if (iVar1 != 0) {
    async_delete_thread_state();
    return;
  }
  return;
}

// ASYNC_get_current_job @ 14f6ced70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASYNC_get_current_job(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0,param_3,param_4,0x14f6ced7a);
  if (iVar1 != 0) {
    lVar2 = CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x10);
    }
  }
  return 0;
}

// ASYNC_init_thread @ 14f6cedd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASYNC_init_thread(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6cedeb;
  lVar6 = 0;
  if (param_1 < param_2) {
    ERR_put_error(0x33,0x65,0x67,"crypto\\async\\async.c",0x142,0x14f6cedeb);
  }
  else {
    iVar1 = OPENSSL_init_crypto(0x100,0);
    if ((iVar1 != 0) && (iVar1 = ossl_init_thread_start(1), iVar1 != 0)) {
      plVar2 = (longlong *)CRYPTO_zalloc(0x18,"crypto\\async\\async.c",0x14c);
      if (plVar2 == (longlong *)0x0) {
        ERR_put_error(0x33,0x65,0x41,"crypto\\async\\async.c",0x14e,uVar7);
        return 0;
      }
      lVar3 = OPENSSL_sk_new_reserve(0,param_2 & 0xffffffff);
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        ERR_put_error(0x33,0x65,0x41,"crypto\\async\\async.c",0x154,uVar7);
        uVar7 = 0x155;
      }
      else {
        plVar2[2] = param_1;
        while (param_2 != 0) {
          param_2 = param_2 - 1;
          puVar4 = (undefined8 *)FUN_14f6cf6e0();
          if (puVar4 == (undefined8 *)0x0) {
LAB_14f6cef13:
            FUN_14f6cf680(puVar4);
            break;
          }
          pvVar5 = CreateFiber(0,async_start_func_win,(LPVOID)0x0);
          *puVar4 = pvVar5;
          if (pvVar5 == (LPVOID)0x0) goto LAB_14f6cef13;
          puVar4[3] = 0;
          OPENSSL_sk_push(*plVar2,puVar4);
          lVar6 = lVar6 + 1;
        }
        plVar2[1] = lVar6;
        iVar1 = CRYPTO_THREAD_set_local(&DAT_1553e2aec,plVar2);
        if (iVar1 != 0) {
          return 1;
        }
        ERR_put_error(0x33,0x65,0x65,"crypto\\async\\async.c",0x16d);
        FUN_14f6cf4b0(plVar2);
        OPENSSL_sk_free(*plVar2);
        uVar7 = 0x175;
      }
      CRYPTO_free(plVar2,"crypto\\async\\async.c",uVar7);
      return 0;
    }
  }
  return 0;
}

// ASYNC_pause_job @ 14f6cefa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASYNC_pause_job(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
  if (((puVar2 != (undefined8 *)0x0) && (lVar1 = puVar2[2], lVar1 != 0)) &&
     (*(int *)(puVar2 + 3) == 0)) {
    *(undefined4 *)(lVar1 + 0x24) = 1;
    SwitchToFiber((LPVOID)*puVar2);
    async_wait_ctx_reset_counts(*(undefined8 *)(lVar1 + 0x28));
  }
  return 1;
}

// ASYNC_start_job @ 14f6cf000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASYNC_start_job(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               void *param_5,size_t param_6)

{
  int iVar1;
  void *_Dst;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar2 = OPENSSL_init_crypto(0x100,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
  if ((lVar3 == 0) && (lVar3 = FUN_14f6cf310(), lVar3 == 0)) {
    return 0;
  }
  if (*param_1 != 0) {
    *(longlong *)(lVar3 + 0x10) = *param_1;
  }
  while( true ) {
    while (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar4 = FUN_14f6cf560();
      *(longlong *)(lVar3 + 0x10) = lVar4;
      if (lVar4 == 0) {
        return 1;
      }
      if (param_5 == (void *)0x0) {
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      else {
        uVar2 = CRYPTO_malloc(param_6,"crypto\\async\\async.c",0xe3);
        *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x18) = uVar2;
        _Dst = *(void **)(*(longlong *)(lVar3 + 0x10) + 0x18);
        if (_Dst == (void *)0x0) {
          ERR_put_error(0x33,0x69,0x41,"crypto\\async\\async.c",0xe5);
          FUN_14f6cf740(*(undefined8 *)(lVar3 + 0x10));
          *(undefined8 *)(lVar3 + 0x10) = 0;
          return 0;
        }
        memcpy(_Dst,param_5,param_6);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x10) = param_4;
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x28) = param_2;
      SwitchToFiber((LPVOID)**(undefined8 **)(lVar3 + 0x10));
    }
    iVar1 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x24);
    if (iVar1 == 3) {
      *param_3 = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x20);
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x28) = 0;
      lVar4 = *(longlong *)(lVar3 + 0x10);
      puVar5 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_1553e2aec);
      CRYPTO_free(*(undefined8 *)(lVar4 + 0x18),"crypto\\async\\async.c",0x8b);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      OPENSSL_sk_push(*puVar5,lVar4);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *param_1 = 0;
      return 3;
    }
    if (iVar1 == 1) {
      *param_1 = *(longlong *)(lVar3 + 0x10);
      *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x24) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      return 2;
    }
    if (iVar1 != 2) break;
    puVar5 = (undefined8 *)*param_1;
    *(undefined8 **)(lVar3 + 0x10) = puVar5;
    SwitchToFiber((LPVOID)*puVar5);
  }
  ERR_put_error(0x33,0x69,0x44,"crypto\\async\\async.c",0xd7);
  FUN_14f6cf740(*(undefined8 *)(lVar3 + 0x10));
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *param_1 = 0;
  return 0;
}

// ASYNC_unblock_pause @ 14f6cf260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASYNC_unblock_pause(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0,param_3,param_4,0x14f6cf26a);
  if (iVar1 != 0) {
    lVar2 = CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) && (*(int *)(lVar2 + 0x18) != 0)) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
    }
  }
  return;
}

// FUN_14f6cf2b0 @ 14f6cf2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6cf2b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
  uVar2 = CRYPTO_THREAD_set_local(&DAT_1553e2ae8,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  CRYPTO_free(uVar1,"crypto\\async\\async.c",0x49);
  return 1;
}

// FUN_14f6cf310 @ 14f6cf310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6cf310(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = ossl_init_thread_start(1);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = CRYPTO_malloc(0x20,"crypto\\async\\async.c");
  if (lVar2 == 0) {
    ERR_put_error(0x33,100,0x41,"crypto\\async\\async.c",0x2a);
  }
  else {
    async_fibre_init_dispatcher(lVar2);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    iVar1 = CRYPTO_THREAD_set_local(&DAT_1553e2ae8,lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  CRYPTO_free(lVar2,"crypto\\async\\async.c",0x36);
  return 0;
}

// async_deinit @ 14f6cf3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_deinit(void)

{
  CRYPTO_THREAD_cleanup_local(&DAT_1553e2ae8);
  CRYPTO_THREAD_cleanup_local(&DAT_1553e2aec);
  return;
}

// async_delete_thread_state @ 14f6cf400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_delete_thread_state(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_1553e2aec);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14f6cf4b0(puVar2);
    OPENSSL_sk_free(*puVar2);
    CRYPTO_free(puVar2,"crypto\\async\\async.c",0x180);
    CRYPTO_THREAD_set_local(&DAT_1553e2aec,0);
  }
  async_local_cleanup();
  uVar3 = CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
  iVar1 = CRYPTO_THREAD_set_local(&DAT_1553e2ae8,0);
  if (iVar1 != 0) {
    CRYPTO_free(uVar3,"crypto\\async\\async.c",0x49);
    return;
  }
  return;
}

// FUN_14f6cf4b0 @ 14f6cf4b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cf4b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    while (puVar1 = (undefined8 *)OPENSSL_sk_pop(*param_1), puVar1 != (undefined8 *)0x0) {
      CRYPTO_free(puVar1[3],"crypto\\async\\async.c",0x60);
      DeleteFiber((LPVOID)*puVar1);
      CRYPTO_free(puVar1,"crypto\\async\\async.c",0x62);
    }
  }
  return;
}

// async_get_ctx @ 14f6cf530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_get_ctx(void)

{
  CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
  return;
}

// FUN_14f6cf560 @ 14f6cf560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f6cf560(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  LPVOID pvVar4;
  
  puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_1553e2aec);
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = ASYNC_init_thread(0,0);
    if (iVar1 == 0) {
      return (undefined8 *)0x0;
    }
    puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_1553e2aec);
  }
  puVar3 = (undefined8 *)OPENSSL_sk_pop(*puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    if ((puVar2[2] != 0) && ((ulonglong)puVar2[2] <= (ulonglong)puVar2[1])) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)FUN_14f6cf6e0();
    if (puVar3 != (undefined8 *)0x0) {
      pvVar4 = CreateFiber(0,async_start_func_win,(LPVOID)0x0);
      *puVar3 = pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        FUN_14f6cf680(puVar3);
        return (undefined8 *)0x0;
      }
      puVar2[1] = puVar2[1] + 1;
    }
  }
  return puVar3;
}

// async_init @ 14f6cf620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 async_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6cf62a;
  iVar1 = CRYPTO_THREAD_init_local(&DAT_1553e2ae8,0,param_3,param_4,0x14f6cf62a);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_init_local(&DAT_1553e2aec,0,param_3,param_4,uVar2);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_THREAD_cleanup_local(&DAT_1553e2ae8);
  }
  return 0;
}

// FUN_14f6cf680 @ 14f6cf680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cf680(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(param_1[3],"crypto\\async\\async.c",0x60);
    DeleteFiber((LPVOID)*param_1);
    CRYPTO_free(param_1,"crypto\\async\\async.c",0x62);
  }
  return;
}

// FUN_14f6cf6e0 @ 14f6cf6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6cf6e0(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x30,"crypto\\async\\async.c",0x52);
  if (lVar1 == 0) {
    ERR_put_error(0x33,0x66,0x41,"crypto\\async\\async.c",0x54);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x24) = 0;
  return lVar1;
}

// FUN_14f6cf740 @ 14f6cf740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cf740(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_1553e2aec);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\async\\async.c",0x8b);
  *(undefined8 *)(param_1 + 0x18) = 0;
  OPENSSL_sk_push(*puVar1,param_1);
  return;
}

// async_start_func @ 14f6cf7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_start_func(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_1553e2ae8);
  do {
    lVar1 = puVar3[2];
    uVar2 = (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 0x18));
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = 3;
    SwitchToFiber((LPVOID)*puVar3);
  } while( true );
}

// FUN_14f6cf7f0 @ 14f6cf7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cf7f0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6cf810 @ 14f6cf810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cf810(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f6cf830 @ 14f6cf830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cf830(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f6cf850 @ 14f6cf850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cf850(void)

{
  OPENSSL_sk_push();
  return;
}

