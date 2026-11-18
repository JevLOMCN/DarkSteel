// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// ASYNC_WAIT_CTX_clear_fd @ 14f6ce910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASYNC_WAIT_CTX_clear_fd(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  plVar2 = (longlong *)0x0;
  while( true ) {
    plVar1 = plVar3;
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    if ((*(int *)((longlong)plVar1 + 0x24) != 1) && (*plVar1 == param_2)) break;
    plVar3 = (longlong *)plVar1[5];
    plVar2 = plVar1;
  }
  if ((int)plVar1[4] != 1) {
    *(undefined4 *)((longlong)plVar1 + 0x24) = 1;
    param_1[2] = param_1[2] + 1;
    return 1;
  }
  if ((longlong *)*param_1 == plVar1) {
    *param_1 = plVar1[5];
  }
  else {
    plVar2[5] = plVar1[5];
  }
  CRYPTO_free(plVar1,"crypto\\async\\async_wait.c",0xa5);
  param_1[1] = param_1[1] + -1;
  return 1;
}

// ASYNC_WAIT_CTX_free @ 14f6ce9b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASYNC_WAIT_CTX_free(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      if ((*(int *)((longlong)puVar2 + 0x24) == 0) && ((code *)puVar2[3] != (code *)0x0)) {
        (*(code *)puVar2[3])(param_1,*puVar2,puVar2[1],puVar2[2]);
      }
      puVar1 = (undefined8 *)puVar2[5];
      CRYPTO_free(puVar2,"crypto\\async\\async_wait.c",0x25);
      puVar2 = puVar1;
    }
    CRYPTO_free(param_1,"crypto\\async\\async_wait.c",0x29);
  }
  return;
}

// ASYNC_WAIT_CTX_get_all_fds @ 14f6cea50

undefined8 ASYNC_WAIT_CTX_get_all_fds(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *param_3 = 0;
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
    if (*(int *)(lVar1 + 0x24) == 0) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = *(undefined8 *)(lVar1 + 8);
        param_2 = param_2 + 1;
      }
      *param_3 = *param_3 + 1;
    }
  }
  return 1;
}

// ASYNC_WAIT_CTX_get_changed_fds @ 14f6ceaa0

undefined8
ASYNC_WAIT_CTX_get_changed_fds
          (longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
          longlong *param_5)

{
  longlong lVar1;
  
  *param_3 = param_1[1];
  *param_5 = param_1[2];
  if ((param_2 != (undefined8 *)0x0) || (param_4 != (undefined8 *)0x0)) {
    for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
      if (*(int *)(lVar1 + 0x24) == 0) {
LAB_14f6ceae1:
        if (*(int *)(lVar1 + 0x20) != 0) goto LAB_14f6ceae7;
      }
      else {
        if (*(int *)(lVar1 + 0x20) == 0) {
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = *(undefined8 *)(lVar1 + 8);
            param_4 = param_4 + 1;
          }
          goto LAB_14f6ceae1;
        }
LAB_14f6ceae7:
        if ((*(int *)(lVar1 + 0x24) == 0) && (param_2 != (undefined8 *)0x0)) {
          *param_2 = *(undefined8 *)(lVar1 + 8);
          param_2 = param_2 + 1;
        }
      }
    }
  }
  return 1;
}

// ASYNC_WAIT_CTX_new @ 14f6ceb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASYNC_WAIT_CTX_new(void)

{
  CRYPTO_zalloc(0x18,"crypto\\async\\async_wait.c",0x11);
  return;
}

// ASYNC_WAIT_CTX_set_wait_fd @ 14f6ceb90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ASYNC_WAIT_CTX_set_wait_fd
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6cebaa;
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto\\async\\async_wait.c",0x32);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    *(undefined4 *)(puVar1 + 4) = 1;
    puVar1[5] = *param_1;
    param_1[1] = param_1[1] + 1;
    *param_1 = (longlong)puVar1;
  }
  else {
    ERR_put_error(0x33,0x6a,0x41,"crypto\\async\\async_wait.c",0x33,uVar2);
  }
  return puVar1 != (undefined8 *)0x0;
}

// async_wait_ctx_reset_counts @ 14f6cec40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_wait_ctx_reset_counts(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = *param_1;
  lVar2 = 0;
  while (lVar1 = lVar3, lVar1 != 0) {
    if (*(int *)(lVar1 + 0x24) == 0) {
      if (*(int *)(lVar1 + 0x20) != 0) {
        *(undefined4 *)(lVar1 + 0x20) = 0;
      }
      lVar3 = *(longlong *)(lVar1 + 0x28);
      lVar2 = lVar1;
    }
    else {
      if (lVar2 == 0) {
        *param_1 = *(longlong *)(lVar1 + 0x28);
      }
      else {
        *(longlong *)(lVar2 + 0x28) = *(longlong *)(lVar1 + 0x28);
      }
      CRYPTO_free(lVar1,"crypto\\async\\async_wait.c",200);
      if (lVar2 == 0) {
        lVar3 = *param_1;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x28);
      }
    }
  }
  return;
}

