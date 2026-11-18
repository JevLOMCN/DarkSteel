// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// ENGINE_add @ 14f7624a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ENGINE_add(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7624b0;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 299;
    uVar3 = 0x43;
  }
  else {
    if ((*param_1 != 0) && (param_1[1] != 0)) {
      CRYPTO_THREAD_write_lock(global_engine_lock);
      iVar1 = FUN_14f762da0(param_1);
      if (iVar1 == 0) {
        ERR_put_error(0x26,0x69,0x6e,"crypto\\engine\\eng_list.c",0x134,uVar3);
      }
      CRYPTO_THREAD_unlock(global_engine_lock);
      return iVar1 != 0;
    }
    uVar2 = 0x12f;
    uVar3 = 0x6c;
  }
  ERR_put_error(0x26,0x69,uVar3,"crypto\\engine\\eng_list.c",uVar2,0x14f7624b0);
  return false;
}

// ENGINE_by_id @ 14f762560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ENGINE_by_id(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  
  uVar11 = 0x14f76256c;
  if (param_1 == (char *)0x0) {
    ERR_put_error(0x26,0x6a,0x43,"crypto\\engine\\eng_list.c",0x171,0x14f76256c);
    return (longlong *)0x0;
  }
  iVar3 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  plVar9 = (longlong *)0x0;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = do_engine_lock_init_ossl_ret_;
  }
  if (iVar4 == 0) {
    ERR_put_error(0x26,0x6a,0x41,"crypto\\engine\\eng_list.c",0x175,uVar11);
    return (longlong *)0x0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  for (plVar10 = DAT_1553e2fd0; plVar8 = plVar10, plVar10 != (longlong *)0x0;
      plVar10 = (longlong *)plVar10[0x17]) {
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[*plVar10 - (longlong)param_1];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if ((*(byte *)(plVar10 + 0x13) & 4) == 0) {
        *(int *)((longlong)plVar10 + 0x9c) = *(int *)((longlong)plVar10 + 0x9c) + 1;
      }
      else {
        plVar6 = (longlong *)ENGINE_new();
        plVar8 = plVar9;
        if (plVar6 != (longlong *)0x0) {
          FUN_14f762c80(plVar6,plVar10);
          plVar8 = plVar6;
        }
      }
      break;
    }
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  if (plVar8 != (longlong *)0x0) {
    return plVar8;
  }
  do {
    plVar10 = (longlong *)((longlong)plVar9 + 1);
    if (param_1[(longlong)plVar9] != (char)plVar9[0x2a6962c3]) {
      pcVar7 = (char *)ossl_safe_getenv("OPENSSL_ENGINES");
      pcVar5 = "C:\\Windows\\lib\\engines-1_1";
      if (pcVar7 != (char *)0x0) {
        pcVar5 = pcVar7;
      }
      plVar8 = (longlong *)ENGINE_by_id("dynamic");
      if ((((plVar8 != (longlong *)0x0) &&
           (iVar4 = ENGINE_ctrl_cmd_string(plVar8,"ID",param_1,0), iVar4 != 0)) &&
          (iVar4 = ENGINE_ctrl_cmd_string(plVar8,"DIR_LOAD","2",0), iVar4 != 0)) &&
         (((iVar4 = ENGINE_ctrl_cmd_string(plVar8,"DIR_ADD",pcVar5,0), iVar4 != 0 &&
           (iVar4 = ENGINE_ctrl_cmd_string(plVar8,"LIST_ADD","1",0), iVar4 != 0)) &&
          (iVar4 = ENGINE_ctrl_cmd_string(plVar8,"LOAD",0,0), iVar4 != 0)))) {
        return plVar8;
      }
      break;
    }
    plVar8 = (longlong *)0x0;
    plVar9 = plVar10;
  } while (plVar10 != (longlong *)&DAT_00000008);
  ENGINE_free(plVar8);
  ERR_put_error(0x26,0x6a,0x74,"crypto\\engine\\eng_list.c",0x1a5);
  ERR_add_error_data(2,"id=",param_1);
  return (longlong *)0x0;
}

// ENGINE_get_first @ 14f7627e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_get_first(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = do_engine_lock_init_ossl_ret_;
  }
  if (iVar3 == 0) {
    ERR_put_error(0x26,0xc3,0x41,"crypto\\engine\\eng_list.c",0xdc);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  lVar1 = DAT_1553e2fd0;
  if (DAT_1553e2fd0 != 0) {
    *(int *)(DAT_1553e2fd0 + 0x9c) = *(int *)(DAT_1553e2fd0 + 0x9c) + 1;
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  return lVar1;
}

// ENGINE_get_last @ 14f762890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_get_last(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = do_engine_lock_init_ossl_ret_;
  }
  if (iVar3 == 0) {
    ERR_put_error(0x26,0xc4,0x41,"crypto\\engine\\eng_list.c",0xef);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  lVar1 = DAT_1553e2fd8;
  if (DAT_1553e2fd8 != 0) {
    *(int *)(DAT_1553e2fd8 + 0x9c) = *(int *)(DAT_1553e2fd8 + 0x9c) + 1;
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  return lVar1;
}

// ENGINE_get_next @ 14f762940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_get_next(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    ERR_put_error(0x26,0x73,0x43,"crypto\\engine\\eng_list.c",0x102,0x14f76294c);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x9c) = *(int *)(lVar1 + 0x9c) + 1;
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  ENGINE_free(param_1);
  return lVar1;
}

// ENGINE_get_prev @ 14f7629d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_get_prev(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    ERR_put_error(0x26,0x74,0x43,"crypto\\engine\\eng_list.c",0x116,0x14f7629dc);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x9c) = *(int *)(lVar1 + 0x9c) + 1;
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  ENGINE_free(param_1);
  return lVar1;
}

// ENGINE_remove @ 14f762a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ENGINE_remove(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f762a70;
  if (param_1 == 0) {
    ERR_put_error(0x26,0x7b,0x43,"crypto\\engine\\eng_list.c",0x140,0x14f762a70);
    return false;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  iVar1 = FUN_14f762f80(param_1);
  if (iVar1 == 0) {
    ERR_put_error(0x26,0x7b,0x6e,"crypto\\engine\\eng_list.c",0x145,uVar2);
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  return iVar1 != 0;
}

// ENGINE_up_ref @ 14f762b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_up_ref(longlong param_1)

{
  if (param_1 == 0) {
    ERR_put_error(0x26,0xbe,0x43,"crypto\\engine\\eng_list.c",0x1af);
    return 0;
  }
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  UNLOCK();
  return 1;
}

// engine_add_dynamic_id @ 14f762b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 engine_add_dynamic_id(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (((param_1 == 0) || ((*(longlong *)(param_1 + 0xd0) == 0 && (param_2 == 0)))) ||
     ((param_3 != 0 && (iVar3 = CRYPTO_THREAD_write_lock(global_engine_lock), iVar3 == 0)))) {
    return 0;
  }
  lVar2 = DAT_1553e2fe0;
  lVar1 = DAT_1553e2fe0;
  if (param_2 != 0) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb8)) {
      if (*(longlong *)(lVar1 + 0xd0) == param_2) goto LAB_14f762c49;
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) goto LAB_14f762c49;
    *(longlong *)(param_1 + 0xd0) = param_2;
  }
  if (lVar2 == 0) {
    if (DAT_1553e2fe8 != 0) goto LAB_14f762c49;
    DAT_1553e2fe0 = param_1;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  else {
    uVar4 = 0;
    if ((DAT_1553e2fe8 == 0) || (*(longlong *)(DAT_1553e2fe8 + 200) != 0)) goto LAB_14f762c49;
    *(longlong *)(DAT_1553e2fe8 + 200) = param_1;
    *(longlong *)(param_1 + 0xc0) = DAT_1553e2fe8;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  uVar4 = 1;
  DAT_1553e2fe8 = param_1;
LAB_14f762c49:
  if (param_3 != 0) {
    CRYPTO_THREAD_unlock(global_engine_lock);
  }
  return uVar4;
}

// FUN_14f762c80 @ 14f762c80

void FUN_14f762c80(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  lVar1 = param_2[0x1a];
  param_1[0x1a] = lVar1;
  if (lVar1 != 0) {
    if (DAT_1553e2fe0 == (undefined8 *)0x0) {
      if (DAT_1553e2fe8 == (undefined8 *)0x0) {
        DAT_1553e2fe0 = param_1;
        param_1[0x18] = 0;
        DAT_1553e2fe8 = param_1;
        param_1[0x19] = 0;
        return;
      }
    }
    else if ((DAT_1553e2fe8 != (undefined8 *)0x0) && (DAT_1553e2fe8[0x19] == 0)) {
      DAT_1553e2fe8[0x19] = param_1;
      param_1[0x18] = DAT_1553e2fe8;
      param_1[0x19] = 0;
      DAT_1553e2fe8 = param_1;
    }
  }
  return;
}

// FUN_14f762da0 @ 14f762da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f762da0(longlong *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined4 uVar7;
  
  bVar6 = false;
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0x26,0x78,0x43,"crypto\\engine\\eng_list.c",0x3c,0x14f762dac);
    return 0;
  }
  plVar5 = DAT_1553e2fd0;
  if (DAT_1553e2fd0 == (longlong *)0x0) {
    if (DAT_1553e2fd8 != (longlong *)0x0) {
      uVar7 = 0x4b;
      goto LAB_14f762e92;
    }
    param_1[0x16] = 0;
    DAT_1553e2fd0 = param_1;
    engine_cleanup_add_last(FUN_14f762f00);
  }
  else {
    do {
      if (bVar6) goto LAB_14f762e59;
      pcVar3 = (char *)*plVar5;
      lVar4 = *param_1 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      plVar5 = (longlong *)plVar5[0x17];
      bVar6 = cVar1 == cVar2;
    } while (plVar5 != (longlong *)0x0);
    if (bVar6) {
LAB_14f762e59:
      ERR_put_error(0x26,0x78,0x67,"crypto\\engine\\eng_list.c",0x45,0x14f762dac);
      return 0;
    }
    if ((DAT_1553e2fd8 == (longlong *)0x0) || (*(longlong *)((longlong)DAT_1553e2fd8 + 0xb8) != 0))
    {
      uVar7 = 0x57;
LAB_14f762e92:
      ERR_put_error(0x26,0x78,0x6e,"crypto\\engine\\eng_list.c",uVar7,0x14f762dac);
      return 0;
    }
    *(longlong **)((longlong)DAT_1553e2fd8 + 0xb8) = param_1;
    param_1[0x16] = (longlong)DAT_1553e2fd8;
  }
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
  DAT_1553e2fd8 = param_1;
  param_1[0x17] = 0;
  return 1;
}

// FUN_14f762f00 @ 14f762f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f762f00(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f762f0c;
  lVar1 = DAT_1553e2fd0;
  while (lVar1 != 0) {
    DAT_1553e2fd0 = lVar1;
    CRYPTO_THREAD_write_lock(global_engine_lock);
    iVar2 = FUN_14f762f80(lVar1);
    if (iVar2 == 0) {
      ERR_put_error(0x26,0x7b,0x6e,"crypto\\engine\\eng_list.c",0x145,uVar3);
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
    lVar1 = DAT_1553e2fd0;
  }
  DAT_1553e2fd0 = lVar1;
  return;
}

// FUN_14f762f80 @ 14f762f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f762f80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_1553e2fd0;
  lVar1 = DAT_1553e2fd0;
  if (param_1 == 0) {
    uVar4 = 0x6d;
    uVar3 = 0x43;
  }
  else {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb8)) {
      if (lVar1 == param_1) {
        if (lVar1 != 0) {
          if (*(longlong *)(param_1 + 0xb8) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
          }
          if (*(longlong *)(param_1 + 0xb0) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
          }
          if (lVar2 == param_1) {
            DAT_1553e2fd0 = *(longlong *)(param_1 + 0xb8);
          }
          if (DAT_1553e2fd8 == param_1) {
            DAT_1553e2fd8 = *(longlong *)(param_1 + 0xb0);
          }
          engine_free_util(param_1,0);
          return 1;
        }
        break;
      }
    }
    uVar4 = 0x76;
    uVar3 = 0x69;
  }
  ERR_put_error(0x26,0x79,uVar3,"crypto\\engine\\eng_list.c",uVar4);
  return 0;
}

// engine_remove_dynamic_id @ 14f763070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_remove_dynamic_id(longlong param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0xd0) != 0)) &&
     ((param_2 == 0 || (iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock), iVar1 != 0)))) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (*(longlong *)(param_1 + 200) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 200) + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
    }
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 200) = *(undefined8 *)(param_1 + 200);
    }
    if (DAT_1553e2fe0 == param_1) {
      DAT_1553e2fe0 = *(longlong *)(param_1 + 200);
    }
    if (DAT_1553e2fe8 == param_1) {
      DAT_1553e2fe8 = *(longlong *)(param_1 + 0xc0);
    }
    if (param_2 != 0) {
      CRYPTO_THREAD_unlock(global_engine_lock);
    }
  }
  return;
}

