// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// DSO_bind_func @ 14f71f940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSO_bind_func(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    uVar3 = 0xb2;
    uVar2 = 0x43;
  }
  else if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
    uVar3 = 0xb6;
    uVar2 = 0x6c;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x18))();
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar3 = 0xba;
    uVar2 = 0x6a;
  }
  ERR_put_error(0x25,0x6c,uVar2,"crypto\\dso\\dso_lib.c",uVar3);
  return 0;
}

// DSO_convert_filename @ 14f71f9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSO_convert_filename(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f71f9cc;
  if (param_1 == (longlong *)0x0) {
    uVar3 = 0x11d;
    uVar2 = 0x43;
    goto LAB_14f71fa54;
  }
  if ((param_2 == 0) && (param_2 = param_1[6], param_2 == 0)) {
    uVar3 = 0x123;
    uVar2 = 0x6f;
    goto LAB_14f71fa54;
  }
  if ((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) {
    if ((code *)param_1[4] == (code *)0x0) {
      if (*(code **)(*param_1 + 0x28) == (code *)0x0) goto LAB_14f71fa2e;
      lVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    }
    else {
      lVar1 = (*(code *)param_1[4])(param_1,param_2);
    }
    if (lVar1 != 0) {
      return lVar1;
    }
  }
LAB_14f71fa2e:
  lVar1 = CRYPTO_strdup(param_2,"crypto\\dso\\dso_lib.c",0x12d);
  if (lVar1 != 0) {
    return lVar1;
  }
  uVar3 = 0x12f;
  uVar2 = 0x41;
LAB_14f71fa54:
  ERR_put_error(0x25,0x7e,uVar2,"crypto\\dso\\dso_lib.c",uVar3,uVar4);
  return 0;
}

// DSO_ctrl @ 14f71fa80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong DSO_ctrl(longlong *param_1,int param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar1;
  
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0x25,0x6e,0x43,"crypto\\dso\\dso_lib.c",0xcd);
    return 0xffffffff;
  }
  if (param_2 == 1) {
    return (ulonglong)*(uint *)((longlong)param_1 + 0x14);
  }
  if (param_2 == 2) {
    *(uint *)((longlong)param_1 + 0x14) = param_3;
    return 0;
  }
  if (param_2 != 3) {
    if ((*param_1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x00014f71fae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar1;
    }
    ERR_put_error(0x25,0x6e,0x6c,"crypto\\dso\\dso_lib.c",0xe1);
    return 0xffffffff;
  }
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | param_3;
  return 0;
}

// DSO_dsobyaddr @ 14f71fb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_dsobyaddr(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  iVar1 = DSO_pathbyaddr(param_1,0,0);
  if (iVar1 < 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = CRYPTO_malloc((longlong)iVar1,"crypto\\dso\\dso_lib.c",0x14b);
    if (lVar3 != 0) {
      iVar2 = DSO_pathbyaddr(param_1,lVar3,iVar1);
      if (iVar2 == iVar1) {
        uVar4 = DSO_load(0,lVar3,0,param_2);
      }
    }
    CRYPTO_free(lVar3,"crypto\\dso\\dso_lib.c",0x150);
  }
  return uVar4;
}

// DSO_free @ 14f71fc20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_free(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f71fc2c;
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 2;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 < 2) {
      if (((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) &&
         (*(code **)(*param_1 + 0x10) != (code *)0x0)) {
        iVar3 = (**(code **)(*param_1 + 0x10))();
        if (iVar3 == 0) {
          ERR_put_error(0x25,0x6f,0x6b,"crypto\\dso\\dso_lib.c",0x4f,uVar4);
          return 0;
        }
      }
      if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
        iVar3 = (**(code **)(*param_1 + 0x40))(param_1);
        if (iVar3 == 0) {
          ERR_put_error(0x25,0x6f,0x66,"crypto\\dso\\dso_lib.c",0x55,uVar4);
          return 0;
        }
      }
      OPENSSL_sk_free(param_1[1]);
      CRYPTO_free(param_1[6],"crypto\\dso\\dso_lib.c",0x5a);
      CRYPTO_free(param_1[7],"crypto\\dso\\dso_lib.c",0x5b);
      CRYPTO_THREAD_lock_free(param_1[8]);
      CRYPTO_free(param_1,"crypto\\dso\\dso_lib.c",0x5d);
    }
  }
  return 1;
}

// DSO_get_filename @ 14f71fd30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_get_filename(longlong param_1)

{
  if (param_1 == 0) {
    ERR_put_error(0x25,0x7f,0x43,"crypto\\dso\\dso_lib.c",0xea);
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x30);
}

// DSO_global_lookup @ 14f71fd80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_global_lookup(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f71fd8c;
  lVar1 = DAT_1553e2ee0;
  if (DAT_1553e2ee0 == 0) {
    lVar1 = DSO_METHOD_openssl();
  }
  if (*(code **)(lVar1 + 0x50) == (code *)0x0) {
    ERR_put_error(0x25,0x8b,0x6c,"crypto\\dso\\dso_lib.c",0x15a,uVar2);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f71fddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar1 + 0x50))(param_1);
  return uVar2;
}

// DSO_load @ 14f71fdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * DSO_load(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f71fe0a;
  bVar1 = false;
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)FUN_14f71ffd0(param_3);
    if (param_1 == (longlong *)0x0) {
      ERR_put_error(0x25,0x70,0x41,"crypto\\dso\\dso_lib.c",0x7f,uVar5);
      return (longlong *)0x0;
    }
    bVar1 = true;
    *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  }
  if (param_1[6] == 0) {
    if ((param_2 == 0) || (iVar2 = DSO_set_filename(param_1,param_2), iVar2 != 0)) {
      if (param_1[6] == 0) {
        uVar4 = 0x9a;
        uVar3 = 0x6f;
      }
      else if (*(code **)(*param_1 + 8) == (code *)0x0) {
        uVar4 = 0x9e;
        uVar3 = 0x6c;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 8))(param_1);
        if (iVar2 != 0) {
          return param_1;
        }
        uVar4 = 0xa2;
        uVar3 = 0x67;
      }
    }
    else {
      uVar4 = 0x95;
      uVar3 = 0x70;
    }
  }
  else {
    uVar4 = 0x8c;
    uVar3 = 0x6e;
  }
  ERR_put_error(0x25,0x70,uVar3,"crypto\\dso\\dso_lib.c",uVar4,uVar5);
  if (bVar1) {
    DSO_free(param_1);
  }
  return (longlong *)0x0;
}

// DSO_merge @ 14f71ff30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_merge(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) {
      if ((code *)param_1[5] != (code *)0x0) {
        uVar1 = (*(code *)param_1[5])();
        return uVar1;
      }
      if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
        uVar1 = (**(code **)(*param_1 + 0x30))();
      }
    }
    return uVar1;
  }
  ERR_put_error(0x25,0x84,0x43,"crypto\\dso\\dso_lib.c",0x10c);
  return 0;
}

// DSO_new @ 14f71ffb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSO_new(void)

{
  FUN_14f71ffd0(0);
  return;
}

// FUN_14f71ffd0 @ 14f71ffd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f71ffd0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f71ffdc;
  if (DAT_1553e2ee0 == 0) {
    DAT_1553e2ee0 = DSO_METHOD_openssl();
  }
  plVar2 = (longlong *)CRYPTO_zalloc(0x48,"crypto\\dso\\dso_lib.c");
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x1d,uVar4);
    return (longlong *)0x0;
  }
  lVar3 = OPENSSL_sk_new_null();
  plVar2[1] = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x23,uVar4);
    uVar4 = 0x24;
  }
  else {
    *plVar2 = DAT_1553e2ee0;
    *(undefined4 *)(plVar2 + 2) = 1;
    lVar3 = CRYPTO_THREAD_lock_new();
    plVar2[8] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(*plVar2 + 0x38) != (code *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
        if (iVar1 == 0) {
          DSO_free(plVar2);
          plVar2 = (longlong *)0x0;
        }
      }
      return plVar2;
    }
    ERR_put_error(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x2b,uVar4);
    OPENSSL_sk_free(plVar2[1]);
    uVar4 = 0x2d;
  }
  CRYPTO_free(plVar2,"crypto\\dso\\dso_lib.c",uVar4);
  return (longlong *)0x0;
}

// DSO_pathbyaddr @ 14f720100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_pathbyaddr(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f720115;
  lVar1 = DAT_1553e2ee0;
  if (DAT_1553e2ee0 == 0) {
    lVar1 = DSO_METHOD_openssl();
  }
  if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
    ERR_put_error(0x25,0x69,0x6c,"crypto\\dso\\dso_lib.c",0x13c,uVar2);
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f720186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar1 + 0x48))(param_1,param_2,param_3);
  return uVar2;
}

// DSO_set_filename @ 14f720190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSO_set_filename(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f72019c;
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_put_error(0x25,0x81,0x43,"crypto\\dso\\dso_lib.c",0xf5,0x14f72019c);
    return 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    ERR_put_error(0x25,0x81,0x6e,"crypto\\dso\\dso_lib.c",0xf9,0x14f72019c);
    return 0;
  }
  lVar1 = CRYPTO_strdup(param_2,"crypto\\dso\\dso_lib.c",0xfd);
  if (lVar1 == 0) {
    ERR_put_error(0x25,0x81,0x41,"crypto\\dso\\dso_lib.c",0xff,uVar2);
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 0x30),"crypto\\dso\\dso_lib.c",0x102);
  *(longlong *)(param_1 + 0x30) = lVar1;
  return 1;
}

// DSO_up_ref @ 14f720290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool DSO_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    ERR_put_error(0x25,0x72,0x43,"crypto\\dso\\dso_lib.c",0x6b);
    return false;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// FUN_14f7202f0 @ 14f7202f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7202f0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f720310 @ 14f720310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f720310(void)

{
  OPENSSL_sk_new_null();
  return;
}

