// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// ENGINE_finish @ 14f6d5a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ENGINE_finish(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6d5a40;
  if (param_1 == 0) {
    return 1;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    CRYPTO_THREAD_unlock(global_engine_lock);
    iVar2 = (**(code **)(param_1 + 0x68))(param_1);
    CRYPTO_THREAD_write_lock(global_engine_lock);
    if (iVar2 != 0) goto LAB_14f6d5a9d;
  }
  else {
LAB_14f6d5a9d:
    iVar3 = engine_free_util(param_1,0);
    if (iVar3 != 0) goto LAB_14f6d5acd;
    ERR_put_error(0x26,0xbf,0x6a,"crypto\\engine\\eng_init.c",0x46,uVar4);
  }
  iVar2 = 0;
LAB_14f6d5acd:
  CRYPTO_THREAD_unlock(global_engine_lock);
  if (iVar2 == 0) {
    ERR_put_error(0x26,0x6b,0x6a,"crypto\\engine\\eng_init.c",0x69);
    return 0;
  }
  return iVar2;
}

// ENGINE_init @ 14f6d5b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ENGINE_init(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6d5b2c;
  if (param_1 == 0) {
    ERR_put_error(0x26,0x77,0x43,"crypto\\engine\\eng_init.c",0x51,0x14f6d5b2c);
    return 0;
  }
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = do_engine_lock_init_ossl_ret_;
  }
  if (iVar2 == 0) {
    ERR_put_error(0x26,0x77,0x41,"crypto\\engine\\eng_init.c",0x55,uVar3);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  iVar2 = 1;
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) {
    iVar2 = (**(code **)(param_1 + 0x60))(param_1);
    if (iVar2 == 0) goto LAB_14f6d5be4;
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
LAB_14f6d5be4:
  CRYPTO_THREAD_unlock(global_engine_lock);
  return iVar2;
}

// engine_unlocked_finish @ 14f6d5c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int engine_unlocked_finish(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6d5c25;
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    if (param_2 != 0) {
      CRYPTO_THREAD_unlock(global_engine_lock);
    }
    iVar2 = (**(code **)(param_1 + 0x68))(param_1);
    if (param_2 != 0) {
      CRYPTO_THREAD_write_lock(global_engine_lock);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar3 = engine_free_util(param_1,0);
  if (iVar3 == 0) {
    ERR_put_error(0x26,0xbf,0x6a,"crypto\\engine\\eng_init.c",0x46,uVar4);
    return 0;
  }
  return iVar2;
}

// engine_unlocked_init @ 14f6d5cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 engine_unlocked_init(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) &&
     (uVar1 = (**(code **)(param_1 + 0x60))(), (int)uVar1 == 0)) {
    return uVar1;
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return uVar1;
}

