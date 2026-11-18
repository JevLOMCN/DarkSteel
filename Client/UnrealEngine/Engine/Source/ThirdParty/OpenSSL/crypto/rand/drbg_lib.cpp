// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 31

// FUN_14f6f9ad0 @ 14f6f9ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f9ad0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = RAND_DRBG_get0_public();
  if (lVar1 == 0) {
    return;
  }
  RAND_DRBG_bytes(lVar1,param_1,(longlong)param_2);
  return;
}

// FUN_14f6f9b20 @ 14f6f9b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6f9b20(undefined8 param_1,int param_2,double param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar8 = SUB84(param_3,0);
  iVar2 = CRYPTO_THREAD_run_once(&DAT_1553e2c70,FUN_14f6fad20);
  plVar1 = DAT_1553e2c80;
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = DAT_1553e2c78;
  }
  if ((iVar5 == 0) || (DAT_1553e2c80 == (longlong *)0x0)) {
    return 0;
  }
  if ((param_2 < 0) || (param_3 < 0.0)) {
    return 0;
  }
  if (*DAT_1553e2c80 != 0) {
    CRYPTO_THREAD_write_lock();
  }
  uVar3 = (ulonglong)(int)plVar1[6];
  uVar6 = plVar1[8];
  if ((plVar1[10] != 0) && (plVar1[0x2d] == 0)) {
    uVar3 = uVar3 + (longlong)((int)plVar1[6] / 2);
    uVar6 = uVar6 + plVar1[10];
  }
  if (uVar6 < uVar3 >> 3) {
    uVar6 = uVar3 >> 3;
  }
  if (uVar6 <= (ulonglong)(longlong)param_2) {
    dVar7 = (double)(longlong)uVar6;
    if ((longlong)uVar6 < 0) {
      dVar7 = dVar7 + __real_43f0000000000000;
    }
    if (dVar7 <= param_3) goto LAB_14f6f9c04;
  }
  uVar8 = 0;
  uVar9 = 0;
LAB_14f6f9c04:
  dVar7 = (double)(longlong)uVar6;
  if ((longlong)uVar6 < 0) {
    dVar7 = dVar7 + __real_43f0000000000000;
  }
  if ((double)CONCAT44(uVar9,uVar8) <= dVar7) {
    dVar7 = (double)CONCAT44(uVar9,uVar8);
  }
  lVar4 = 0;
  dVar7 = dVar7 * __real_4020000000000000;
  if ((__real_43e0000000000000 <= dVar7) &&
     (dVar7 = dVar7 - __real_43e0000000000000, dVar7 < __real_43e0000000000000)) {
    lVar4 = -0x8000000000000000;
  }
  uVar8 = rand_drbg_restart(plVar1,param_1,(longlong)param_2,(longlong)dVar7 + lVar4);
  if (*plVar1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar8;
}

// FUN_14f6f9ca0 @ 14f6f9ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f9ca0(undefined8 param_1,int param_2)

{
  FUN_14f6f9b20(param_1,param_2,(double)param_2);
  return;
}

// FUN_14f6f9cd0 @ 14f6f9cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6f9cd0(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = CRYPTO_THREAD_run_once(&DAT_1553e2c70,FUN_14f6fad20);
  plVar2 = DAT_1553e2c80;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = DAT_1553e2c78;
  }
  if ((iVar4 != 0) && (DAT_1553e2c80 != (longlong *)0x0)) {
    if (*DAT_1553e2c80 != 0) {
      CRYPTO_THREAD_write_lock();
    }
    lVar1 = plVar2[0x13];
    if (*plVar2 != 0) {
      CRYPTO_THREAD_unlock();
    }
    return (int)lVar1 == 1;
  }
  return false;
}

// RAND_DRBG_bytes @ 14f6f9d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_DRBG_bytes(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  longlong local_res8;
  
  uVar5 = 0;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    lVar2 = rand_pool_new(0,0,0,*(undefined8 *)(param_1 + 0x68));
    *(longlong *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) goto LAB_14f6f9ff9;
  }
  uVar3 = rand_drbg_get_additional_data(*(undefined8 *)(param_1 + 0x28),&local_res8);
  lVar2 = local_res8;
  for (; local_res8 = lVar2, param_3 != 0; param_3 = param_3 - uVar6) {
    uVar6 = param_3;
    if (*(ulonglong *)(param_1 + 0x38) < param_3) {
      uVar6 = *(ulonglong *)(param_1 + 0x38);
    }
    bVar7 = false;
    bVar8 = false;
    if (*(int *)(param_1 + 0x98) == 1) {
LAB_14f6f9e7c:
      if (*(ulonglong *)(param_1 + 0x38) < uVar6) {
        ERR_put_error(0x24);
        bVar8 = bVar7;
      }
      else if (*(ulonglong *)(param_1 + 0x68) < uVar3) {
        ERR_put_error(0x24);
      }
      else {
        iVar1 = openssl_get_fork_id();
        bVar8 = *(int *)(param_1 + 0x18) != iVar1;
        if (bVar8) {
          *(int *)(param_1 + 0x18) = iVar1;
        }
        if ((*(uint *)(param_1 + 0x74) != 0) &&
           (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x70))) {
          bVar8 = true;
        }
        if (0 < *(longlong *)(param_1 + 0x80)) {
          _Var4 = _time64((__time64_t *)0x0);
          if ((_Var4 < *(longlong *)(param_1 + 0x78)) ||
             (*(longlong *)(param_1 + 0x80) <= _Var4 - *(longlong *)(param_1 + 0x78))) {
            bVar8 = true;
          }
        }
        if (((((*(int *)(param_1 + 0x88) == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
             (*(int *)(param_1 + 0x8c) == *(int *)(*(longlong *)(param_1 + 8) + 0x8c))) && (!bVar8))
           || (iVar1 = RAND_DRBG_reseed(param_1,lVar2,uVar3,0), iVar1 != 0)) {
          iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 0x10))(param_1);
          if (iVar1 != 0) {
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
            bVar8 = true;
            goto LAB_14f6f9fd1;
          }
          *(undefined4 *)(param_1 + 0x98) = 2;
        }
        ERR_put_error();
        bVar8 = false;
      }
    }
    else {
      rand_drbg_restart(param_1,0,0,0);
      if (*(int *)(param_1 + 0x98) == 2) {
        ERR_put_error(0x24);
        bVar8 = bVar7;
      }
      else {
        if (*(int *)(param_1 + 0x98) != 0) goto LAB_14f6f9e7c;
        ERR_put_error(0x24);
        bVar8 = bVar7;
      }
    }
LAB_14f6f9fd1:
    uVar5 = 0;
    if (!bVar8) goto LAB_14f6f9ff9;
    lVar2 = local_res8;
  }
  uVar5 = 1;
LAB_14f6f9ff9:
  if (local_res8 != 0) {
    rand_drbg_cleanup_additional_data(*(undefined8 *)(param_1 + 0x28));
  }
  return uVar5;
}

// RAND_DRBG_free @ 14f6fa020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_DRBG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[0x2a] != 0) {
      (**(code **)(param_1[0x2a] + 0x18))();
    }
    rand_pool_free(param_1[5]);
    CRYPTO_THREAD_lock_free(*param_1);
    CRYPTO_free_ex_data(0xf,param_1,param_1 + 0x14);
    if (*(int *)(param_1 + 2) != 0) {
      CRYPTO_secure_clear_free();
      return;
    }
    CRYPTO_clear_free(param_1,0x178,"crypto\\rand\\drbg_lib.c",0x115);
  }
  return;
}

// RAND_DRBG_generate @ 14f6fa0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RAND_DRBG_generate(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4,
                  ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  __time64_t _Var2;
  bool bVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar5 = 0x14f6fa0c7;
  if (*(int *)(param_1 + 0x98) != 1) {
    rand_drbg_restart(param_1,0,0,0);
    if (*(int *)(param_1 + 0x98) == 2) {
      ERR_put_error(0x24,0x6b,0x72,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x242),uVar5);
      return 0;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      ERR_put_error(0x24,0x6b,0x73,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x246),uVar5);
      return 0;
    }
  }
  if (param_3 <= *(ulonglong *)(param_1 + 0x38)) {
    if (*(ulonglong *)(param_1 + 0x68) < param_6) {
      ERR_put_error(0x24,0x6b,0x66,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x250),uVar5);
      uVar5 = 0;
    }
    else {
      iVar1 = openssl_get_fork_id();
      bVar3 = *(int *)(param_1 + 0x18) != iVar1;
      if (bVar3) {
        *(int *)(param_1 + 0x18) = iVar1;
      }
      if ((*(uint *)(param_1 + 0x74) != 0) &&
         (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x70))) {
        bVar3 = true;
      }
      if (0 < *(longlong *)(param_1 + 0x80)) {
        _Var2 = _time64((__time64_t *)0x0);
        if ((_Var2 < *(longlong *)(param_1 + 0x78)) ||
           (*(longlong *)(param_1 + 0x80) <= _Var2 - *(longlong *)(param_1 + 0x78))) {
          bVar3 = true;
        }
      }
      if (((((*(int *)(param_1 + 0x88) == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
           (*(int *)(param_1 + 0x8c) == *(int *)(*(longlong *)(param_1 + 8) + 0x8c))) &&
          ((!bVar3 && (param_4 == 0)))) ||
         (iVar1 = RAND_DRBG_reseed(param_1,param_5,param_6,param_4), param_5 = 0, param_6 = 0,
         iVar1 != 0)) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 0x10))
                          (param_1,param_2,param_3,param_5,param_6);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x98) = 2;
          ERR_put_error(0x24,0x6b,0x70,"crypto\\rand\\drbg_lib.c",0x275);
          uVar5 = 0;
        }
        else {
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          uVar5 = 1;
        }
      }
      else {
        ERR_put_error(0x24,0x6b,0x76,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x26c),uVar5);
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  ERR_put_error(0x24,0x6b,0x75,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x24c),uVar5);
  return 0;
}

// RAND_DRBG_get0_master @ 14f6fa320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_DRBG_get0_master(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2c70);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_1553e2c78;
  }
  uVar2 = DAT_1553e2c80;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

// RAND_DRBG_get0_private @ 14f6fa370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong RAND_DRBG_get0_private
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2c70,FUN_14f6fad20,param_3,param_4,0x14f6fa37a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e2c78;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = CRYPTO_THREAD_get_local(&DAT_1553e2c88);
  if (lVar3 == 0) {
    iVar2 = ossl_init_thread_start(4);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = FUN_14f6fadc0(DAT_1553e2c80);
    CRYPTO_THREAD_set_local(&DAT_1553e2c88,lVar3);
  }
  return lVar3;
}

// RAND_DRBG_get0_public @ 14f6fa410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong RAND_DRBG_get0_public
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2c70,FUN_14f6fad20,param_3,param_4,0x14f6fa41a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e2c78;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = CRYPTO_THREAD_get_local(&DAT_1553e2c7c);
  if (lVar3 == 0) {
    iVar2 = ossl_init_thread_start(4);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = FUN_14f6fadc0(DAT_1553e2c80);
    CRYPTO_THREAD_set_local(&DAT_1553e2c7c,lVar3);
  }
  return lVar3;
}

// RAND_DRBG_get_ex_data @ 14f6fa4b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_DRBG_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0xa0);
  return;
}

// RAND_DRBG_instantiate @ 14f6fa4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool RAND_DRBG_instantiate(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  __time64_t _Var3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  longlong local_res18 [2];
  undefined8 uVar9;
  ulonglong in_stack_ffffffffffffffb0;
  undefined8 uVar10;
  
  uVar10 = 0x14f6fa4fa;
  uVar2 = 0;
  lVar4 = (longlong)*(int *)(param_1 + 0x30);
  local_res18[0] = 0;
  local_res8 = 0;
  uVar8 = 0;
  uVar5 = 0;
  uVar6 = *(ulonglong *)(param_1 + 0x40);
  uVar7 = *(ulonglong *)(param_1 + 0x48);
  if (*(ulonglong *)(param_1 + 0x60) < param_3) {
    uVar9 = 299;
    uVar10 = 0x74;
    uVar5 = uVar2;
  }
  else if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar9 = 0x131;
    uVar10 = 0x80;
    uVar2 = uVar8;
  }
  else if (*(int *)(param_1 + 0x98) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 2;
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x168) == 0)) {
      uVar6 = uVar6 + *(longlong *)(param_1 + 0x50);
      lVar4 = lVar4 + *(int *)(param_1 + 0x30) / 2;
      uVar7 = uVar7 + *(longlong *)(param_1 + 0x58);
    }
    uVar5 = uVar2;
    if (*(code **)(param_1 + 0x158) != (code *)0x0) {
      uVar5 = (**(code **)(param_1 + 0x158))
                        (param_1,&local_res8,lVar4,uVar6,uVar7,
                         in_stack_ffffffffffffffb0 & 0xffffffff00000000);
    }
    if ((uVar5 < uVar6) || (uVar7 < uVar5)) {
      uVar9 = 0x14f;
      uVar10 = 0x6e;
      uVar2 = uVar8;
    }
    else if (((*(longlong *)(param_1 + 0x50) == 0) ||
             (uVar2 = uVar8, *(code **)(param_1 + 0x168) == (code *)0x0)) ||
            ((uVar2 = (**(code **)(param_1 + 0x168))
                                (param_1,local_res18,*(int *)(param_1 + 0x30) / 2,
                                 *(longlong *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)),
             *(ulonglong *)(param_1 + 0x50) <= uVar2 && (uVar2 <= *(ulonglong *)(param_1 + 0x58)))))
    {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x150))
                        (param_1,local_res8,uVar5,local_res18[0],uVar2,param_2,param_3,uVar10);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        *(undefined4 *)(param_1 + 0x70) = 1;
        _Var3 = _time64((__time64_t *)0x0);
        *(__time64_t *)(param_1 + 0x78) = _Var3;
        if ((*(int *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 8) == 0)) {
          LOCK();
          *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
          UNLOCK();
        }
        goto LAB_14f6fa6e5;
      }
      uVar9 = 0x15e;
      uVar10 = 0x6c;
    }
    else {
      uVar9 = 0x157;
      uVar10 = 0x6f;
    }
  }
  else {
    uVar9 = 0x138;
    uVar10 = 0x67;
    uVar2 = uVar8;
    if (*(int *)(param_1 + 0x98) == 2) {
      uVar10 = 0x72;
    }
  }
  ERR_put_error(0x24,0x6c,uVar10,"crypto\\rand\\drbg_lib.c",uVar9);
LAB_14f6fa6e5:
  if ((local_res8 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
    (**(code **)(param_1 + 0x160))(param_1,local_res8,uVar5);
  }
  if ((local_res18[0] != 0) && (*(code **)(param_1 + 0x170) != (code *)0x0)) {
    (**(code **)(param_1 + 0x170))(param_1,local_res18[0],uVar2);
  }
  return *(int *)(param_1 + 0x98) == 1;
}

// RAND_DRBG_new @ 14f6fa760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_DRBG_new(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_14f6fafb0(0,param_1,param_2,param_3);
  return;
}

// RAND_DRBG_reseed @ 14f6fa790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool RAND_DRBG_reseed(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  bool bVar5;
  longlong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0x14f6fa7a8;
  uVar2 = 0;
  local_res8 = 0;
  if (*(int *)(param_1 + 0x98) == 2) {
    ERR_put_error(0x24,0x6e,0x72,"crypto\\rand\\drbg_lib.c",0x199,0x14f6fa7a8);
    bVar5 = false;
  }
  else if (*(int *)(param_1 + 0x98) == 0) {
    ERR_put_error(0x24,0x6e,0x73,"crypto\\rand\\drbg_lib.c",0x19d,0x14f6fa7a8);
    bVar5 = false;
  }
  else {
    uVar4 = uVar2;
    if ((param_2 == 0) || (uVar4 = param_3, param_3 <= *(ulonglong *)(param_1 + 0x68))) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      if (*(code **)(param_1 + 0x158) != (code *)0x0) {
        uVar6 = CONCAT44(1,param_4);
        uVar2 = (**(code **)(param_1 + 0x158))
                          (param_1,&local_res8,*(undefined4 *)(param_1 + 0x30),
                           *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar6);
      }
      if ((uVar2 < *(ulonglong *)(param_1 + 0x40)) || (*(ulonglong *)(param_1 + 0x48) < uVar2)) {
        ERR_put_error(0x24,0x6e,0x6e,"crypto\\rand\\drbg_lib.c",0x1b0,uVar6);
      }
      else {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 8))
                          (param_1,local_res8,uVar2,param_2,uVar4);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          *(undefined4 *)(param_1 + 0x70) = 1;
          _Var3 = _time64((__time64_t *)0x0);
          *(__time64_t *)(param_1 + 0x78) = _Var3;
          if ((*(int *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 8) == 0)) {
            LOCK();
            *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
            UNLOCK();
          }
        }
      }
      if ((local_res8 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
        (**(code **)(param_1 + 0x160))(param_1,local_res8,uVar2);
      }
      bVar5 = *(int *)(param_1 + 0x98) == 1;
    }
    else {
      ERR_put_error(0x24,0x6e,0x66,"crypto\\rand\\drbg_lib.c",0x1a4,0x14f6fa7a8);
      bVar5 = false;
    }
  }
  return bVar5;
}

// RAND_DRBG_secure_new @ 14f6fa950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_DRBG_secure_new(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_14f6fafb0(1,param_1,param_2,param_3);
  return;
}

// RAND_DRBG_set @ 14f6fa980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int RAND_DRBG_set(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6fa99a;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = DAT_1553e2c74;
    param_2 = DAT_154df8ef0;
  }
  if ((*(int *)(param_1 + 0x14) != 0) &&
     ((param_2 != *(int *)(param_1 + 0x14) || (param_3 != *(ushort *)(param_1 + 0x1c))))) {
    (**(code **)(*(longlong *)(param_1 + 0x150) + 0x18))();
    rand_pool_free(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(short *)(param_1 + 0x1c) = (short)param_3;
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    iVar1 = 1;
  }
  else if (param_2 - 0x388U < 3) {
    iVar1 = drbg_ctr_init(param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      ERR_put_error(0x24,0x68,0x6b,"crypto\\rand\\drbg_lib.c",0x8f,uVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    ERR_put_error(0x24,0x68,0x78,"crypto\\rand\\drbg_lib.c",0x80,uVar2);
    iVar1 = 0;
  }
  return iVar1;
}

// RAND_DRBG_set_defaults @ 14f6faae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_DRBG_set_defaults(int param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_1 - 0x388U < 3) {
    if ((param_2 & 0xfffffffe) == 0) {
      DAT_154df8ef0 = param_1;
      DAT_1553e2c74 = param_2;
      return 1;
    }
    uVar2 = 0xa8;
    uVar1 = 0x84;
  }
  else {
    uVar2 = 0x9f;
    uVar1 = 0x78;
  }
  ERR_put_error(0x24,0x79,uVar1,"crypto\\rand\\drbg_lib.c",uVar2);
  return 0;
}

// RAND_DRBG_set_ex_data @ 14f6fab60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_DRBG_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0xa0);
  return;
}

// RAND_DRBG_uninstantiate @ 14f6fac20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_DRBG_uninstantiate(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 2;
    ERR_put_error(0x24,0x76,0x80,"crypto\\rand\\drbg_lib.c",0x17e,0x14f6fac2c);
    return 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x150) + 0x18))();
  uVar1 = RAND_DRBG_set(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x1c));
  return uVar1;
}

// RAND_OpenSSL @ 14f6fac90

undefined ** RAND_OpenSSL(void)

{
  return &rand_meth;
}

// FUN_14f6faca0 @ 14f6faca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6faca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f6facaa);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_init_local(&DAT_1553e2c88,0);
    if (iVar1 != 0) {
      iVar1 = CRYPTO_THREAD_init_local(&DAT_1553e2c7c,0);
      if (iVar1 != 0) {
        DAT_1553e2c80 = FUN_14f6fadc0(0);
        if (DAT_1553e2c80 != 0) {
          return 1;
        }
        CRYPTO_THREAD_cleanup_local(&DAT_1553e2c7c);
      }
      CRYPTO_THREAD_cleanup_local(&DAT_1553e2c88);
    }
  }
  return 0;
}

// FUN_14f6fad20 @ 14f6fad20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fad20(void)

{
  DAT_1553e2c78 = FUN_14f6faca0();
  return;
}

// drbg_delete_thread_state @ 14f6fad50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void drbg_delete_thread_state(void)

{
  undefined8 uVar1;
  
  uVar1 = CRYPTO_THREAD_get_local(&DAT_1553e2c7c);
  CRYPTO_THREAD_set_local(&DAT_1553e2c7c,0);
  RAND_DRBG_free(uVar1);
  uVar1 = CRYPTO_THREAD_get_local(&DAT_1553e2c88);
  CRYPTO_THREAD_set_local(&DAT_1553e2c88,0);
  RAND_DRBG_free(uVar1);
  return;
}

// FUN_14f6fadc0 @ 14f6fadc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fadc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14f6fafb0(1,DAT_154df8ef0,DAT_1553e2c74,param_1);
  if (lVar2 == 0) {
    return 0;
  }
  if ((param_1 == 0) && (iVar1 = rand_drbg_enable_locking(lVar2), iVar1 == 0)) {
    RAND_DRBG_free(lVar2);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x88) = 1;
  *(undefined4 *)(lVar2 + 0x8c) = 1;
  RAND_DRBG_instantiate(lVar2,"OpenSSL NIST SP 800-90A DRBG",0x1c);
  return lVar2;
}

// rand_drbg_cleanup_int @ 14f6fae60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_drbg_cleanup_int(void)

{
  if (DAT_1553e2c80 != 0) {
    RAND_DRBG_free();
    DAT_1553e2c80 = 0;
    CRYPTO_THREAD_cleanup_local(&DAT_1553e2c88);
    CRYPTO_THREAD_cleanup_local(&DAT_1553e2c7c);
    return;
  }
  return;
}

// rand_drbg_enable_locking @ 14f6faeb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_drbg_enable_locking(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6faebc;
  if ((int)param_1[0x13] != 0) {
    ERR_put_error(0x24,0x77,0x81,"crypto\\rand\\drbg_lib.c",0x32c,0x14f6faebc);
    return 0;
  }
  if (*param_1 == 0) {
    if (((longlong *)param_1[1] != (longlong *)0x0) && (*(longlong *)param_1[1] == 0)) {
      ERR_put_error(0x24,0x77,0x82,"crypto\\rand\\drbg_lib.c",0x333,0x14f6faebc);
      return 0;
    }
    lVar1 = CRYPTO_THREAD_lock_new();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x24,0x77,0x7e,"crypto\\rand\\drbg_lib.c",0x33a,uVar2);
      return 0;
    }
  }
  return 1;
}

// rand_drbg_lock @ 14f6faf80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_drbg_lock(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = CRYPTO_THREAD_write_lock();
    return uVar1;
  }
  return 1;
}

// FUN_14f6fafb0 @ 14f6fafb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fafb0(int param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6fafd0;
  if (param_1 == 0) {
    lVar3 = CRYPTO_zalloc(0x178,"crypto\\rand\\drbg_lib.c",0xc0);
  }
  else {
    lVar3 = CRYPTO_secure_zalloc(0x178,"crypto\\rand\\drbg_lib.c",0xbf);
  }
  if (lVar3 == 0) {
    ERR_put_error(0x24,0x6d,0x41,"crypto\\rand\\drbg_lib.c",0xc3,uVar4);
  }
  else {
    if ((param_1 == 0) || (iVar1 = CRYPTO_secure_allocated(lVar3), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined4 *)(lVar3 + 0x10) = uVar2;
    uVar2 = openssl_get_fork_id();
    *(undefined4 *)(lVar3 + 0x18) = uVar2;
    *(code **)(lVar3 + 0x158) = rand_drbg_get_entropy;
    *(code **)(lVar3 + 0x160) = rand_drbg_cleanup_entropy;
    *(longlong **)(lVar3 + 8) = param_4;
    if (param_4 == (longlong *)0x0) {
      *(code **)(lVar3 + 0x168) = rand_drbg_get_nonce;
      *(code **)(lVar3 + 0x170) = rand_drbg_cleanup_nonce;
      *(undefined4 *)(lVar3 + 0x74) = DAT_154df8ef4;
      uVar4 = DAT_154df8f00;
    }
    else {
      *(undefined4 *)(lVar3 + 0x74) = DAT_154df8ef8;
      uVar4 = DAT_154df8f08;
    }
    *(undefined8 *)(lVar3 + 0x80) = uVar4;
    iVar1 = RAND_DRBG_set(lVar3,param_2,param_3);
    if (iVar1 != 0) {
      if (param_4 == (longlong *)0x0) {
        return lVar3;
      }
      if (*param_4 != 0) {
        CRYPTO_THREAD_write_lock();
      }
      if (*(int *)(lVar3 + 0x30) <= (int)param_4[6]) {
        if (*param_4 == 0) {
          return lVar3;
        }
        CRYPTO_THREAD_unlock();
        return lVar3;
      }
      if (*param_4 != 0) {
        CRYPTO_THREAD_unlock();
      }
      ERR_put_error(0x24,0x6d,0x83,"crypto\\rand\\drbg_lib.c",0xec);
    }
    RAND_DRBG_free(lVar3);
  }
  return 0;
}

// rand_drbg_restart @ 14f6fb160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool rand_drbg_restart(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x14f6fb180;
  bVar5 = false;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    ERR_put_error(0x24,0x66,0x44,"crypto\\rand\\drbg_lib.c",0x1de);
    *(undefined4 *)(param_1 + 0x98) = 2;
    rand_pool_free(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    return false;
  }
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == 0) {
LAB_14f6fb277:
    if (*(int *)(param_1 + 0x98) == 2) {
      RAND_DRBG_uninstantiate(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      RAND_DRBG_instantiate(param_1,"OpenSSL NIST SP 800-90A DRBG",0x1c);
      iVar1 = *(int *)(param_1 + 0x98);
      bVar5 = iVar1 == 1;
    }
    if (iVar1 == 1) {
      if (uVar3 == 0) {
        if ((!bVar5) && (iVar1 = RAND_DRBG_reseed(param_1,0,0,0), iVar1 == 0)) {
          ERR_put_error(0x24,0x66,0x76,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar7,0x221));
        }
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x150) + 8))(param_1,uVar3,uVar4,0,0,uVar8);
      }
    }
    rand_pool_free(*(undefined8 *)(param_1 + 0x20));
    bVar5 = *(int *)(param_1 + 0x98) == 1;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_4 == 0) {
      uVar3 = param_2;
      uVar4 = param_3;
      if (param_3 <= *(ulonglong *)(param_1 + 0x68)) goto LAB_14f6fb277;
      uVar6 = 0x1fb;
      uVar8 = 0x66;
    }
    else if (*(ulonglong *)(param_1 + 0x48) < param_3) {
      uVar6 = 0x1e9;
      uVar8 = 0x6a;
    }
    else {
      if (param_4 <= param_3 * 8) {
        lVar2 = rand_pool_attach(param_2,param_3,param_4);
        *(longlong *)(param_1 + 0x20) = lVar2;
        uVar3 = 0;
        uVar4 = 0;
        if (lVar2 == 0) {
          return false;
        }
        goto LAB_14f6fb277;
      }
      uVar6 = 0x1ef;
      uVar8 = 0x7c;
    }
    ERR_put_error(0x24,0x66,uVar8,"crypto\\rand\\drbg_lib.c",uVar6);
    bVar5 = false;
    *(undefined4 *)(param_1 + 0x98) = 2;
  }
  return bVar5;
}

// rand_drbg_unlock @ 14f6fb3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_drbg_unlock(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = CRYPTO_THREAD_unlock();
    return uVar1;
  }
  return 1;
}

// FUN_14f6fb3d0 @ 14f6fb3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fb3d0(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6fb3e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

