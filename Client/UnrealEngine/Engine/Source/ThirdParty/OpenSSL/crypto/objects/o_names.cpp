// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 31

// OBJ_NAME_add @ 14f6d5d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_NAME_add(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  iVar2 = CRYPTO_THREAD_run_once(&DAT_1553e2b08,FUN_14f6d67e0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_1553e2b0c;
  }
  if (iVar3 == 0) {
    return 0;
  }
  puVar4 = (uint *)CRYPTO_malloc(0x18,"crypto\\objects\\o_names.c",0xe1);
  uVar1 = DAT_1553e2b00;
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  *(undefined8 *)(puVar4 + 2) = param_1;
  *(undefined8 *)(puVar4 + 4) = param_3;
  puVar4[1] = param_2 & 0x8000;
  *puVar4 = param_2 & 0xffff7fff;
  CRYPTO_THREAD_write_lock(uVar1);
  piVar5 = (int *)OPENSSL_LH_insert(DAT_1553e2af8,puVar4);
  if (piVar5 == (int *)0x0) {
    iVar3 = OPENSSL_LH_error(DAT_1553e2af8);
    if (iVar3 != 0) {
      CRYPTO_free(puVar4,"crypto\\objects\\o_names.c",0xfd);
      goto LAB_14f6d5e21;
    }
  }
  else {
    if ((DAT_1553e2b10 != 0) && (iVar3 = OPENSSL_sk_num(), *piVar5 < iVar3)) {
      lVar6 = OPENSSL_sk_value(DAT_1553e2b10);
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(piVar5 + 2),*piVar5,*(undefined8 *)(piVar5 + 4));
    }
    CRYPTO_free(piVar5,"crypto\\objects\\o_names.c",0xf9);
  }
  uVar7 = 1;
LAB_14f6d5e21:
  CRYPTO_THREAD_unlock(DAT_1553e2b00);
  return uVar7;
}

// OBJ_NAME_cleanup @ 14f6d5e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_NAME_cleanup(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_1553e2af8 != 0) {
    DAT_1553e2b18 = param_1;
    uVar1 = OPENSSL_LH_get_down_load();
    OPENSSL_LH_set_down_load(DAT_1553e2af8,0);
    OPENSSL_LH_doall(DAT_1553e2af8,FUN_14f6d66f0);
    if (param_1 < 0) {
      OPENSSL_LH_free();
      OPENSSL_sk_pop_free(DAT_1553e2b10,FUN_14f6d66c0);
      CRYPTO_THREAD_lock_free(DAT_1553e2b00);
      DAT_1553e2af8 = 0;
      DAT_1553e2b10 = 0;
      DAT_1553e2b00 = 0;
      return;
    }
    OPENSSL_LH_set_down_load(DAT_1553e2af8,uVar1);
  }
  return;
}

// OBJ_NAME_do_all @ 14f6d5f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_NAME_do_all(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6d5f4a;
  local_28[0] = param_1;
  local_20 = param_2;
  local_18 = param_3;
  OPENSSL_LH_doall_arg(DAT_1553e2af8,FUN_14f6d64e0,local_28);
  return;
}

// OBJ_NAME_do_all_sorted @ 14f6d5f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_NAME_do_all_sorted(undefined4 param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_38;
  int local_34;
  void *local_30;
  undefined4 local_28 [2];
  undefined1 *local_20;
  undefined4 *local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6d5f95;
  local_38 = param_1;
  uVar1 = OPENSSL_LH_num_items(DAT_1553e2af8);
  local_30 = (void *)CRYPTO_malloc((ulonglong)uVar1 << 3,"crypto\\objects\\o_names.c",0x166);
  if (local_30 != (void *)0x0) {
    local_20 = &LAB_14f6d6540;
    local_18 = &local_38;
    iVar2 = 0;
    local_34 = 0;
    local_28[0] = param_1;
    OPENSSL_LH_doall_arg(DAT_1553e2af8,FUN_14f6d64e0,local_28);
    qsort(local_30,(longlong)local_34,8,(_PtFuncCompare *)&LAB_14f6d6510);
    if (0 < local_34) {
      lVar3 = 0;
      do {
        (*param_2)(*(undefined8 *)(lVar3 + (longlong)local_30),param_3);
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar2 < local_34);
    }
    CRYPTO_free(local_30,"crypto\\objects\\o_names.c",0x171);
  }
  return;
}

// OBJ_NAME_get @ 14f6d6090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OBJ_NAME_get(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_28 [2];
  longlong local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6d60ab;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2b08,FUN_14f6d67e0);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = DAT_1553e2b0c;
    }
    if (iVar3 != 0) {
      CRYPTO_THREAD_read_lock(DAT_1553e2b00);
      local_28[0] = param_2 & 0xffff7fff;
      local_20 = param_1;
      lVar2 = OPENSSL_LH_retrieve(DAT_1553e2af8,local_28);
      do {
        uVar5 = 0;
        if (lVar2 == 0) {
LAB_14f6d6156:
          CRYPTO_THREAD_unlock(DAT_1553e2b00);
          return uVar5;
        }
        if ((*(int *)(lVar2 + 4) == 0) || ((param_2 & 0x8000) != 0)) {
          uVar5 = *(undefined8 *)(lVar2 + 0x10);
          goto LAB_14f6d6156;
        }
        iVar4 = iVar4 + 1;
        uVar5 = 0;
        if (10 < iVar4) goto LAB_14f6d6156;
        local_20 = *(longlong *)(lVar2 + 0x10);
        lVar2 = OPENSSL_LH_retrieve(DAT_1553e2af8,local_28);
      } while( true );
    }
  }
  return 0;
}

// OBJ_NAME_init @ 14f6d6190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
OBJ_NAME_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2b08,FUN_14f6d67e0,param_3,param_4,0x14f6d619a);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = DAT_1553e2b0c;
  }
  return uVar2;
}

// OBJ_NAME_new_index @ 14f6d61d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OBJ_NAME_new_index(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2b08,FUN_14f6d67e0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e2b0c;
  }
  if (iVar2 == 0) {
    return 0;
  }
  CRYPTO_THREAD_write_lock(DAT_1553e2b00);
  if (DAT_1553e2b10 == 0) {
    CRYPTO_mem_ctrl(3);
    DAT_1553e2b10 = OPENSSL_sk_new_null();
    CRYPTO_mem_ctrl(2);
    if (DAT_1553e2b10 == 0) goto LAB_14f6d6358;
  }
  iVar5 = DAT_154df8910;
  DAT_154df8910 = DAT_154df8910 + 1;
  iVar2 = OPENSSL_sk_num();
  if (iVar2 < DAT_154df8910) {
    do {
      CRYPTO_mem_ctrl(3);
      puVar3 = (undefined8 *)CRYPTO_zalloc(0x18,"crypto\\objects\\o_names.c");
      CRYPTO_mem_ctrl(2);
      if (puVar3 == (undefined8 *)0x0) {
        ERR_put_error(8,0x6a,0x41,"crypto\\objects\\o_names.c",0x73);
        iVar5 = 0;
        goto LAB_14f6d6358;
      }
      puVar3[1] = _stricmp_exref;
      *puVar3 = openssl_lh_strcasehash;
      CRYPTO_mem_ctrl(3);
      iVar1 = OPENSSL_sk_push(DAT_1553e2b10,puVar3);
      CRYPTO_mem_ctrl(2);
      if (iVar1 == 0) {
        ERR_put_error(8,0x6a,0x41,"crypto\\objects\\o_names.c",0x7f);
        CRYPTO_free(puVar3,"crypto\\objects\\o_names.c",0x80);
        iVar5 = 0;
        goto LAB_14f6d6358;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_154df8910);
  }
  plVar4 = (longlong *)OPENSSL_sk_value(DAT_1553e2b10,iVar5);
  if (param_1 != 0) {
    *plVar4 = param_1;
  }
  if (param_2 != 0) {
    plVar4[1] = param_2;
  }
  if (param_3 != 0) {
    plVar4[2] = param_3;
  }
LAB_14f6d6358:
  CRYPTO_THREAD_unlock(DAT_1553e2b00);
  return iVar5;
}

// OBJ_NAME_remove @ 14f6d63e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_NAME_remove(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6d63f5;
  uVar5 = 0;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2b08,FUN_14f6d67e0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e2b0c;
  }
  if (iVar2 == 0) {
    return 0;
  }
  CRYPTO_THREAD_write_lock(DAT_1553e2b00);
  local_28[0] = param_2 & 0xffff7fff;
  local_20 = param_1;
  piVar3 = (int *)OPENSSL_LH_delete(DAT_1553e2af8,local_28);
  if (piVar3 != (int *)0x0) {
    if (DAT_1553e2b10 != 0) {
      iVar2 = OPENSSL_sk_num();
      if (*piVar3 < iVar2) {
        lVar4 = OPENSSL_sk_value(DAT_1553e2b10);
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(piVar3 + 2),*piVar3,*(undefined8 *)(piVar3 + 4))
        ;
      }
    }
    CRYPTO_free(piVar3,"crypto\\objects\\o_names.c",0x123);
    uVar5 = 1;
  }
  CRYPTO_THREAD_unlock(DAT_1553e2b00);
  return uVar5;
}

// FUN_14f6d64e0 @ 14f6d64e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d64e0(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00014f6d64fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 2))(param_1,*(undefined8 *)(param_2 + 4));
    return;
  }
  return;
}

// FUN_14f6d6560 @ 14f6d6560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6560(void)

{
  OPENSSL_LH_delete();
  return;
}

// FUN_14f6d6580 @ 14f6d6580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6580(void)

{
  OPENSSL_LH_doall();
  return;
}

// FUN_14f6d65a0 @ 14f6d65a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d65a0(void)

{
  OPENSSL_LH_doall_arg();
  return;
}

// FUN_14f6d65c0 @ 14f6d65c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d65c0(void)

{
  OPENSSL_LH_error();
  return;
}

// FUN_14f6d65e0 @ 14f6d65e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d65e0(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f6d6600 @ 14f6d6600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6600(void)

{
  OPENSSL_LH_get_down_load();
  return;
}

// FUN_14f6d6620 @ 14f6d6620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6620(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f6d6640 @ 14f6d6640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6640(void)

{
  OPENSSL_LH_new();
  return;
}

// FUN_14f6d6660 @ 14f6d6660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6660(void)

{
  OPENSSL_LH_num_items();
  return;
}

// FUN_14f6d6680 @ 14f6d6680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6680(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// FUN_14f6d66a0 @ 14f6d66a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d66a0(void)

{
  OPENSSL_LH_set_down_load();
  return;
}

// FUN_14f6d66c0 @ 14f6d66c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d66c0(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\objects\\o_names.c",0x182);
  return;
}

// FUN_14f6d66f0 @ 14f6d66f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d66f0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 != (int *)0x0) && ((DAT_1553e2b18 < 0 || (DAT_1553e2b18 == *param_1)))) {
    OBJ_NAME_remove(*(undefined8 *)(param_1 + 2),*param_1,param_3,param_4,0x14f6d66ff);
  }
  return;
}

// FUN_14f6d6730 @ 14f6d6730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6d6730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f6d673a;
  CRYPTO_mem_ctrl(3);
  DAT_1553e2af8 = 0;
  DAT_1553e2b00 = CRYPTO_THREAD_lock_new();
  if (DAT_1553e2b00 != 0) {
    DAT_1553e2af8 = OPENSSL_LH_new(FUN_14f6d6890,FUN_14f6d6810,param_3,param_4,uVar1);
  }
  if (DAT_1553e2af8 == 0) {
    CRYPTO_THREAD_lock_free(DAT_1553e2b00);
    DAT_1553e2b00 = 0;
  }
  CRYPTO_mem_ctrl(2);
  if ((DAT_1553e2af8 != 0) && (DAT_1553e2b00 != 0)) {
    return 1;
  }
  return 0;
}

// FUN_14f6d67e0 @ 14f6d67e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d67e0(void)

{
  DAT_1553e2b0c = FUN_14f6d6730();
  return;
}

// FUN_14f6d6810 @ 14f6d6810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6810(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == *param_2) {
    if (DAT_1553e2b10 != 0) {
      iVar1 = OPENSSL_sk_num();
      if (*param_1 < iVar1) {
        lVar2 = OPENSSL_sk_value(DAT_1553e2b10);
                    /* WARNING: Could not recover jumptable at 0x00014f6d6864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return;
      }
    }
    _stricmp(*(char **)(param_1 + 2),*(char **)(param_2 + 2));
  }
  return;
}

// FUN_14f6d6890 @ 14f6d6890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6d6890(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (DAT_1553e2b10 != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((int)*param_1 < iVar1) {
      puVar3 = (undefined8 *)OPENSSL_sk_value(DAT_1553e2b10);
      uVar2 = (*(code *)*puVar3)(*(undefined8 *)(param_1 + 2));
      return *param_1 ^ uVar2;
    }
  }
  uVar2 = openssl_lh_strcasehash(*(undefined8 *)(param_1 + 2));
  return *param_1 ^ uVar2;
}

// FUN_14f6d6900 @ 14f6d6900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6900(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6d6920 @ 14f6d6920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6920(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d6940 @ 14f6d6940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6940(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6d6960 @ 14f6d6960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6960(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6d6980 @ 14f6d6980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6980(void)

{
  OPENSSL_sk_value();
  return;
}

