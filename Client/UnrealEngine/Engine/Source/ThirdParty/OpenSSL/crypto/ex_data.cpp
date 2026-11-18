// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 24

// CRYPTO_dup_ex_data @ 14f6c5d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * CRYPTO_dup_ex_data(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  puVar10 = (undefined1 *)0x0;
  if (*param_3 == 0) {
    return &DAT_00000001;
  }
  local_a0 = param_2;
  puVar4 = (undefined8 *)FUN_14f6c6800();
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined1 *)0x0;
  }
  iVar2 = OPENSSL_sk_num(*puVar4);
  iVar3 = OPENSSL_sk_num(*param_3);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  lVar12 = (longlong)iVar2;
  puVar5 = puVar10;
  if (0 < iVar2) {
    if (iVar2 < 10) {
      puVar5 = local_98;
    }
    else {
      puVar5 = (undefined1 *)CRYPTO_malloc(lVar12 * 8,"crypto\\ex_data.c",0x115);
      if (puVar5 == (undefined1 *)0x0) goto LAB_14f6c5e19;
    }
    puVar9 = puVar10;
    puVar11 = puVar10;
    if (0 < iVar2) {
      do {
        uVar6 = OPENSSL_sk_value(*puVar4,puVar11);
        *(undefined8 *)(puVar5 + (longlong)puVar9 * 8) = uVar6;
        puVar11 = (undefined1 *)(ulonglong)((int)puVar11 + 1);
        puVar9 = puVar9 + 1;
      } while ((longlong)puVar9 < lVar12);
    }
  }
LAB_14f6c5e19:
  CRYPTO_THREAD_unlock(DAT_1553e2a40);
  uVar6 = local_a0;
  if (iVar2 == 0) {
    puVar10 = &DAT_00000001;
  }
  else if (puVar5 == (undefined1 *)0x0) {
    local_b8 = 0x11f;
    ERR_put_error(0xf,0x6e,0x41,"crypto\\ex_data.c");
    puVar10 = (undefined1 *)0x0;
  }
  else {
    uVar7 = CRYPTO_get_ex_data(local_a0,iVar2 + -1);
    iVar3 = CRYPTO_set_ex_data(uVar6,iVar2 + -1,uVar7);
    if (iVar3 != 0) {
      puVar9 = puVar10;
      puVar11 = puVar10;
      if (0 < iVar2) {
        do {
          puVar8 = puVar10;
          if ((*param_3 != 0) && (iVar2 = OPENSSL_sk_num(), (int)puVar9 < iVar2)) {
            puVar8 = (undefined1 *)OPENSSL_sk_value(*param_3,puVar9);
          }
          puVar1 = *(undefined4 **)(puVar5 + (longlong)puVar11 * 8);
          local_a8 = puVar8;
          if ((puVar1 != (undefined4 *)0x0) && (*(code **)(puVar1 + 8) != (code *)0x0)) {
            local_b0 = *(undefined8 *)(puVar1 + 2);
            local_b8 = *puVar1;
            iVar2 = (**(code **)(puVar1 + 8))(uVar6,param_3,&local_a8,puVar9);
            if (iVar2 == 0) goto LAB_14f6c5f0c;
          }
          CRYPTO_set_ex_data(uVar6,puVar9,local_a8);
          puVar9 = (undefined1 *)(ulonglong)((int)puVar9 + 1);
          puVar11 = puVar11 + 1;
        } while ((longlong)puVar11 < lVar12);
      }
      puVar10 = &DAT_00000001;
    }
LAB_14f6c5f0c:
    if (puVar5 != local_98) {
      CRYPTO_free(puVar5,"crypto\\ex_data.c",0x137);
    }
  }
  return puVar10;
}

// CRYPTO_free_ex_data @ 14f6c5f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CRYPTO_free_ex_data(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14f6c6800();
  if (puVar3 == (undefined8 *)0x0) goto LAB_14f6c6129;
  iVar1 = OPENSSL_sk_num(*puVar3);
  lVar8 = (longlong)iVar1;
  if (0 < iVar1) {
    if (iVar1 < 10) {
      puVar4 = local_98;
    }
    else {
      puVar4 = (undefined1 *)CRYPTO_malloc(lVar8 * 8,"crypto\\ex_data.c",0x151);
      if (puVar4 == (undefined1 *)0x0) goto LAB_14f6c6049;
    }
    iVar1 = 0;
    lVar7 = 0;
    if (0 < lVar8) {
      do {
        uVar5 = OPENSSL_sk_value(*puVar3,iVar1);
        *(undefined8 *)(puVar4 + lVar7 * 8) = uVar5;
        iVar1 = iVar1 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar8);
    }
  }
LAB_14f6c6049:
  CRYPTO_THREAD_unlock(DAT_1553e2a40);
  iVar1 = 0;
  lVar7 = 0;
  if (0 < lVar8) {
    do {
      if (puVar4 == (undefined1 *)0x0) {
        CRYPTO_THREAD_write_lock(DAT_1553e2a40);
        puVar6 = (undefined4 *)OPENSSL_sk_value(*puVar3,iVar1);
        CRYPTO_THREAD_unlock(DAT_1553e2a40);
      }
      else {
        puVar6 = *(undefined4 **)(puVar4 + lVar7 * 8);
      }
      if ((puVar6 != (undefined4 *)0x0) && (*(longlong *)(puVar6 + 6) != 0)) {
        if ((*param_3 == 0) || (iVar2 = OPENSSL_sk_num(), iVar2 <= iVar1)) {
          uVar5 = 0;
        }
        else {
          uVar5 = OPENSSL_sk_value(*param_3,iVar1);
        }
        local_a0 = *(undefined8 *)(puVar6 + 2);
        local_a8 = *puVar6;
        (**(code **)(puVar6 + 6))(param_2,uVar5,param_3,iVar1);
      }
      iVar1 = iVar1 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  if (puVar4 != local_98) {
    CRYPTO_free(puVar4,"crypto\\ex_data.c",0x167);
  }
LAB_14f6c6129:
  OPENSSL_sk_free(*param_3);
  *param_3 = 0;
  return;
}

// CRYPTO_free_ex_index @ 14f6c6160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_free_ex_index(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_14f6c6800();
  uVar4 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  if (-1 < param_2) {
    iVar1 = OPENSSL_sk_num(*puVar2);
    if (param_2 < iVar1) {
      lVar3 = OPENSSL_sk_value(*puVar2,param_2);
      if (lVar3 != 0) {
        uVar4 = 1;
        *(undefined **)(lVar3 + 0x10) = &DAT_14f6c67f0;
        *(undefined1 **)(lVar3 + 0x20) = &LAB_14f6c67d0;
        *(undefined **)(lVar3 + 0x18) = &DAT_14f6c67e0;
      }
    }
  }
  CRYPTO_THREAD_unlock(DAT_1553e2a40);
  return uVar4;
}

// CRYPTO_get_ex_data @ 14f6c6210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_get_ex_data(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (param_2 < iVar1) {
      uVar2 = OPENSSL_sk_value(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

// CRYPTO_get_ex_new_index @ 14f6c6260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int CRYPTO_get_ex_new_index
              (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6c6279;
  iVar2 = -1;
  plVar3 = (longlong *)FUN_14f6c6800();
  if (plVar3 == (longlong *)0x0) {
    return -1;
  }
  if (*plVar3 == 0) {
    lVar4 = OPENSSL_sk_new_null();
    *plVar3 = lVar4;
    if ((lVar4 == 0) || (iVar1 = OPENSSL_sk_push(lVar4,0), iVar1 == 0)) {
      ERR_put_error(0xf,100,0x41,"crypto\\ex_data.c",0xac,uVar6);
      iVar2 = -1;
      goto LAB_14f6c63a0;
    }
  }
  puVar5 = (undefined4 *)CRYPTO_malloc(0x28,"crypto\\ex_data.c",0xb1);
  if (puVar5 == (undefined4 *)0x0) {
    ERR_put_error(0xf,100,0x41,"crypto\\ex_data.c",0xb3,uVar6);
    iVar2 = -1;
  }
  else {
    *puVar5 = param_2;
    *(undefined8 *)(puVar5 + 2) = param_3;
    *(undefined8 *)(puVar5 + 4) = param_4;
    *(undefined8 *)(puVar5 + 8) = param_5;
    *(undefined8 *)(puVar5 + 6) = param_6;
    iVar1 = OPENSSL_sk_push(*plVar3,0);
    if (iVar1 == 0) {
      ERR_put_error(0xf,100,0x41,"crypto\\ex_data.c",0xbd,uVar6);
      CRYPTO_free(puVar5,"crypto\\ex_data.c",0xbe);
    }
    else {
      iVar2 = OPENSSL_sk_num(*plVar3);
      iVar2 = iVar2 + -1;
      OPENSSL_sk_set(*plVar3,iVar2,puVar5);
    }
  }
LAB_14f6c63a0:
  CRYPTO_THREAD_unlock(DAT_1553e2a40);
  return iVar2;
}

// CRYPTO_new_ex_data @ 14f6c63d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CRYPTO_new_ex_data(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14f6c6800();
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  iVar2 = OPENSSL_sk_num(*puVar3);
  lVar8 = (longlong)iVar2;
  if (0 < iVar2) {
    if (iVar2 < 10) {
      puVar4 = local_98;
    }
    else {
      puVar4 = (undefined1 *)CRYPTO_malloc(lVar8 * 8,"crypto\\ex_data.c",0xe2);
      if (puVar4 == (undefined1 *)0x0) goto LAB_14f6c6499;
    }
    iVar7 = 0;
    lVar6 = 0;
    if (0 < iVar2) {
      do {
        uVar5 = OPENSSL_sk_value(*puVar3,iVar7);
        *(undefined8 *)(puVar4 + lVar6 * 8) = uVar5;
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
  }
LAB_14f6c6499:
  CRYPTO_THREAD_unlock(DAT_1553e2a40);
  if ((iVar2 < 1) || (puVar4 != (undefined1 *)0x0)) {
    iVar2 = 0;
    lVar6 = 0;
    if (0 < lVar8) {
      do {
        if ((*(longlong *)(puVar4 + lVar6 * 8) != 0) &&
           (*(longlong *)(*(longlong *)(puVar4 + lVar6 * 8) + 0x10) != 0)) {
          if ((*param_3 == 0) || (iVar7 = OPENSSL_sk_num(), iVar7 <= iVar2)) {
            uVar5 = 0;
          }
          else {
            uVar5 = OPENSSL_sk_value(*param_3,iVar2);
          }
          puVar1 = *(undefined4 **)(puVar4 + lVar6 * 8);
          local_a0 = *(undefined8 *)(puVar1 + 2);
          local_a8 = *puVar1;
          (**(code **)(puVar1 + 4))(param_2,uVar5,param_3,iVar2);
        }
        iVar2 = iVar2 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
    if (puVar4 != local_98) {
      CRYPTO_free(puVar4,"crypto\\ex_data.c",0xf5);
    }
    uVar5 = 1;
  }
  else {
    local_a8 = 0xea;
    ERR_put_error(0xf,0x70,0x41,"crypto\\ex_data.c");
    uVar5 = 0;
  }
  return uVar5;
}

// CRYPTO_set_ex_data @ 14f6c65b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_set_ex_data(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6c65c5;
  if (*param_1 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *param_1 = lVar3;
    if (lVar3 == 0) {
      ERR_put_error(0xf,0x66,0x41,"crypto\\ex_data.c",0x177,uVar4);
      return 0;
    }
  }
  iVar1 = OPENSSL_sk_num(*param_1);
  while( true ) {
    if (param_2 < iVar1) {
      OPENSSL_sk_set(*param_1,param_2,param_3);
      return 1;
    }
    iVar2 = OPENSSL_sk_push(*param_1,0);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
  }
  ERR_put_error(0xf,0x66,0x41,"crypto\\ex_data.c",0x17e,uVar4);
  return 0;
}

// FUN_14f6c6690 @ 14f6c6690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c6690(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\ex_data.c",0x54);
  return;
}

// crypto_cleanup_all_ex_data_int @ 14f6c66c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void crypto_cleanup_all_ex_data_int(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1553e2a50;
  do {
    OPENSSL_sk_pop_free(*puVar1,FUN_14f6c6690);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((longlong)puVar1 < 0x1553e2ad0);
  CRYPTO_THREAD_lock_free(DAT_1553e2a40);
  DAT_1553e2a40 = 0;
  return;
}

// FUN_14f6c6740 @ 14f6c6740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6c6740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f6c674a);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  DAT_1553e2a40 = CRYPTO_THREAD_lock_new();
  return (ulonglong)(DAT_1553e2a40 != 0);
}

// FUN_14f6c6780 @ 14f6c6780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c6780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f6c678a);
  if (iVar1 == 0) {
    DAT_1553e2a4c = 0;
    return;
  }
  DAT_1553e2a40 = CRYPTO_THREAD_lock_new();
  DAT_1553e2a4c = (uint)(DAT_1553e2a40 != 0);
  return;
}

// FUN_14f6c6800 @ 14f6c6800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f6c6800(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6c680c;
  if (param_1 < 0x10) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2a48);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_1553e2a4c;
    }
    if (iVar2 != 0) {
      if (DAT_1553e2a40 == 0) {
        return (undefined8 *)0x0;
      }
      CRYPTO_THREAD_write_lock();
      return &DAT_1553e2a50 + (int)param_1;
    }
    uVar4 = 0x3c;
    uVar3 = 0x41;
  }
  else {
    uVar4 = 0x37;
    uVar3 = 7;
  }
  ERR_put_error(0xf,0x71,uVar3,"crypto\\ex_data.c",uVar4,uVar5);
  return (undefined8 *)0x0;
}

// FUN_14f6c68a0 @ 14f6c68a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c68a0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6c68c0 @ 14f6c68c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c68c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6c68e0 @ 14f6c68e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c68e0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6c6900 @ 14f6c6900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c6900(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6c6920 @ 14f6c6920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c6920(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f6c6940 @ 14f6c6940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c6940(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6c6960 @ 14f6c6960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c6960(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6c6980 @ 14f6c6980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c6980(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6c69a0 @ 14f6c69a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c69a0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6c69c0 @ 14f6c69c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c69c0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6c69e0 @ 14f6c69e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c69e0(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f6c6a00 @ 14f6c6a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c6a00(void)

{
  OPENSSL_sk_value();
  return;
}

