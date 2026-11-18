// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// engine_table_cleanup @ 14f77bd90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_table_cleanup(longlong *param_1)

{
  CRYPTO_THREAD_write_lock(global_engine_lock);
  if (*param_1 != 0) {
    OPENSSL_LH_doall(*param_1,FUN_14f77c1d0);
    OPENSSL_LH_free(*param_1);
    *param_1 = 0;
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  return;
}

// engine_table_doall @ 14f77bdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_table_doall(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_1 != 0) {
    uStack_8 = 0x14f77bdff;
    local_18 = param_2;
    local_10 = param_3;
    OPENSSL_LH_doall_arg(param_1,FUN_14f77c220,&local_18);
  }
  return;
}

// engine_table_register @ 14f77be30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
engine_table_register
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,int param_5,
          int param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_38 [6];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f77be4e;
  uVar5 = 0;
  CRYPTO_THREAD_write_lock(global_engine_lock);
  if (*param_1 == 0) {
    lVar2 = OPENSSL_LH_new(&LAB_14f77bd80,&LAB_14f77bd70);
    if (lVar2 == 0) goto LAB_14f77bfa5;
    *param_1 = lVar2;
    engine_cleanup_add_first(param_2);
  }
  while (param_5 != 0) {
    local_38[0] = *param_4;
    param_5 = param_5 + -1;
    puVar3 = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_38);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)CRYPTO_malloc(0x20,"crypto\\engine\\eng_table.c",100);
      if (puVar3 == (undefined4 *)0x0) goto LAB_14f77bfa5;
      puVar3[6] = 1;
      *puVar3 = *param_4;
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(puVar3 + 2) = lVar2;
      if (lVar2 == 0) {
        CRYPTO_free(puVar3,"crypto\\engine\\eng_table.c",0x6b);
        uVar5 = 0;
        goto LAB_14f77bfa5;
      }
      *(undefined8 *)(puVar3 + 4) = 0;
      OPENSSL_LH_insert(*param_1,puVar3);
      puVar4 = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_38);
      if (puVar4 != puVar3) {
        OPENSSL_sk_free(*(undefined8 *)(puVar3 + 2));
        CRYPTO_free(puVar3,"crypto\\engine\\eng_table.c",0x72);
        uVar5 = 0;
        goto LAB_14f77bfa5;
      }
    }
    OPENSSL_sk_delete_ptr(*(undefined8 *)(puVar3 + 2),param_3);
    iVar1 = OPENSSL_sk_push(*(undefined8 *)(puVar3 + 2),param_3);
    if (iVar1 == 0) goto LAB_14f77bfa5;
    puVar3[6] = 0;
    if (param_6 != 0) {
      iVar1 = engine_unlocked_init(param_3);
      if (iVar1 == 0) {
        ERR_put_error(0x26,0xb8,0x6d,"crypto\\engine\\eng_table.c",0x82);
        goto LAB_14f77bfa5;
      }
      if (*(longlong *)(puVar3 + 4) != 0) {
        engine_unlocked_finish(*(longlong *)(puVar3 + 4),0);
      }
      *(undefined8 *)(puVar3 + 4) = param_3;
      puVar3[6] = 1;
    }
    param_4 = param_4 + 1;
  }
  uVar5 = 1;
LAB_14f77bfa5:
  CRYPTO_THREAD_unlock(global_engine_lock);
  return uVar5;
}

// engine_table_select @ 14f77c040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong engine_table_select(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28 [6];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f77c055;
  lVar3 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  ERR_set_mark();
  CRYPTO_THREAD_write_lock(global_engine_lock);
  if ((*param_1 != 0) &&
     (local_28[0] = param_2, lVar2 = OPENSSL_LH_retrieve(*param_1,local_28), lVar2 != 0)) {
    if (((*(longlong *)(lVar2 + 0x10) == 0) || (iVar1 = engine_unlocked_init(), iVar1 == 0)) &&
       (*(int *)(lVar2 + 0x18) == 0)) {
      lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 8),0);
      while (lVar3 != 0) {
        if (((0 < *(int *)(lVar3 + 0xa0)) || (((byte)DAT_1553e3028 & 1) == 0)) &&
           (iVar1 = engine_unlocked_init(lVar3), iVar1 != 0)) {
          if ((*(longlong *)(lVar2 + 0x10) != lVar3) &&
             (iVar1 = engine_unlocked_init(lVar3), iVar1 != 0)) {
            if (*(longlong *)(lVar2 + 0x10) != 0) {
              engine_unlocked_finish(*(longlong *)(lVar2 + 0x10),0);
            }
            *(longlong *)(lVar2 + 0x10) = lVar3;
          }
          break;
        }
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 8));
      }
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x10);
    }
    *(undefined4 *)(lVar2 + 0x18) = 1;
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  ERR_pop_to_mark();
  return lVar3;
}

// engine_table_unregister @ 14f77c170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_table_unregister(longlong *param_1,undefined8 param_2)

{
  CRYPTO_THREAD_write_lock(global_engine_lock);
  if (*param_1 != 0) {
    OPENSSL_LH_doall_arg(*param_1,FUN_14f77c2a0,param_2);
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  return;
}

// FUN_14f77c1d0 @ 14f77c1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c1d0(longlong param_1)

{
  if (param_1 != 0) {
    OPENSSL_sk_free(*(undefined8 *)(param_1 + 8));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      engine_unlocked_finish(*(longlong *)(param_1 + 0x10),0);
    }
    CRYPTO_free(param_1,"crypto\\engine\\eng_table.c",0xb1);
  }
  return;
}

// FUN_14f77c220 @ 14f77c220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c220(undefined4 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f77c242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(*param_1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),param_2[1])
  ;
  return;
}

// FUN_14f77c250 @ 14f77c250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f77c250(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    return 1;
  }
  if ((param_2 != 0) && (lVar1 = OPENSSL_LH_new(&LAB_14f77bd80,&LAB_14f77bd70), lVar1 != 0)) {
    *param_1 = lVar1;
    return 1;
  }
  return 0;
}

// FUN_14f77c2a0 @ 14f77c2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c2a0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 8));
  while (-1 < iVar1) {
    OPENSSL_sk_delete(*(undefined8 *)(param_1 + 8),iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 8),param_2);
  }
  if (*(longlong *)(param_1 + 0x10) == param_2) {
    engine_unlocked_finish(param_2,0);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

// FUN_14f77c320 @ 14f77c320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c320(void)

{
  OPENSSL_LH_doall();
  return;
}

// FUN_14f77c340 @ 14f77c340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c340(void)

{
  OPENSSL_LH_doall_arg();
  return;
}

// FUN_14f77c360 @ 14f77c360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c360(void)

{
  OPENSSL_LH_doall_arg();
  return;
}

// FUN_14f77c380 @ 14f77c380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c380(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f77c3a0 @ 14f77c3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c3a0(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f77c3c0 @ 14f77c3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c3c0(void)

{
  OPENSSL_LH_new();
  return;
}

// FUN_14f77c3e0 @ 14f77c3e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c3e0(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// FUN_14f77c400 @ 14f77c400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c400(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f77c420 @ 14f77c420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c420(void)

{
  OPENSSL_sk_delete_ptr();
  return;
}

// FUN_14f77c440 @ 14f77c440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c440(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f77c460 @ 14f77c460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c460(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f77c480 @ 14f77c480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c480(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f77c4a0 @ 14f77c4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c4a0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f77c4c0 @ 14f77c4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f77c4c0(void)

{
  OPENSSL_sk_value();
  return;
}

