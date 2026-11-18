// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 48

// FUN_14f6b4dc0 @ 14f6b4dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4dc0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x100);
    lVar2 = 0x10;
    puVar3 = (undefined8 *)(param_1 + 0x80);
    do {
      if ((*pbVar1 & 1) != 0) {
        CRYPTO_free(*puVar3,"crypto\\err\\err.c",0x128);
        *puVar3 = 0;
      }
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      puVar3 = puVar3 + 1;
      pbVar1 = pbVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    CRYPTO_free(param_1,"crypto\\err\\err.c",0x12a);
  }
  return;
}

// ERR_add_error_data @ 14f6b4e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_add_error_data(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  ERR_add_error_vdata(param_1,&local_res10,param_3,param_4,0x14f6b4e8d);
  return;
}

// ERR_add_error_vdata @ 14f6b4eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_add_error_vdata(int param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  
  iVar7 = 0x50;
  puVar4 = (undefined1 *)CRYPTO_malloc(0x51,"crypto\\err\\err.c",0x374);
  if (puVar4 != (undefined1 *)0x0) {
    iVar8 = 0;
    iVar11 = 0;
    *puVar4 = 0;
    if (0 < param_1) {
      param_2 = param_2 + -8;
      puVar6 = puVar4;
      do {
        puVar1 = (undefined8 *)(param_2 + 8);
        param_2 = param_2 + 8;
        pcVar9 = "<NULL>";
        if ((char *)*puVar1 != (char *)0x0) {
          pcVar9 = (char *)*puVar1;
        }
        cVar2 = *pcVar9;
        pcVar5 = pcVar9;
        for (uVar3 = 0; (cVar2 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
          pcVar5 = pcVar5 + 1;
          cVar2 = *pcVar5;
        }
        iVar8 = iVar8 + (uVar3 & 0x7fffffff);
        puVar4 = puVar6;
        if (iVar7 < iVar8) {
          iVar7 = iVar8 + 0x14;
          puVar4 = (undefined1 *)
                   CRYPTO_realloc(puVar6,(longlong)(iVar8 + 0x15),"crypto\\err\\err.c",0x382);
          if (puVar4 == (undefined1 *)0x0) {
            uVar10 = 900;
            goto LAB_14f6b4fa4;
          }
        }
        OPENSSL_strlcat(puVar4,pcVar9,(longlong)iVar7 + 1);
        iVar11 = iVar11 + 1;
        puVar6 = puVar4;
      } while (iVar11 < param_1);
    }
    iVar7 = FUN_14f6b6440(puVar4,3);
    if (iVar7 == 0) {
      uVar10 = 0x38c;
      puVar6 = puVar4;
LAB_14f6b4fa4:
      CRYPTO_free(puVar6,"crypto\\err\\err.c",uVar10);
    }
  }
  return;
}

// ERR_clear_error @ 14f6b4fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_clear_error(void)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = ERR_get_state();
  if (lVar1 != 0) {
    pbVar2 = (byte *)(lVar1 + 0x100);
    lVar3 = 0x10;
    puVar4 = (undefined8 *)(lVar1 + 0x80);
    do {
      if ((*pbVar2 & 1) != 0) {
        CRYPTO_free(*puVar4,"crypto\\err\\err.c",0x1d6);
        *puVar4 = 0;
      }
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[-0x100] = 0;
      pbVar2[-0xff] = 0;
      pbVar2[-0xfe] = 0;
      pbVar2[-0xfd] = 0;
      pbVar2[-0xc0] = 0;
      pbVar2[-0xbf] = 0;
      pbVar2[-0xbe] = 0;
      pbVar2[-0xbd] = 0;
      puVar4[0x18] = 0;
      puVar4 = puVar4 + 1;
      pbVar2[0xc0] = 0xff;
      pbVar2[0xc1] = 0xff;
      pbVar2[0xc2] = 0xff;
      pbVar2[0xc3] = 0xff;
      pbVar2 = pbVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined8 *)(lVar1 + 0x200) = 0;
  }
  return;
}

// ERR_clear_last_mark @ 14f6b50b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_clear_last_mark(void)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = ERR_get_state();
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x200);
    uVar4 = (ulonglong)iVar3;
    uVar5 = uVar4;
    while (((longlong)*(int *)(lVar2 + 0x204) != uVar4 &&
           (iVar3 = (int)uVar5, (*(byte *)(lVar2 + uVar4 * 4) & 1) == 0))) {
      if ((longlong)uVar4 < 1) {
        uVar5 = 0xf;
        uVar4 = 0xf;
      }
      else {
        uVar5 = (ulonglong)(iVar3 - 1);
        uVar4 = uVar4 - 1;
      }
      iVar3 = (int)uVar5;
    }
    if (*(int *)(lVar2 + 0x204) != iVar3) {
      puVar1 = (uint *)(lVar2 + (longlong)iVar3 * 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}

// ERR_error_string @ 14f6b5130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * ERR_error_string(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1553e28d0;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  ERR_error_string_n(param_1,puVar1,0x100);
  return puVar1;
}

// ERR_error_string_n @ 14f6b5170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ERR_error_string_n(ulonglong param_1,char *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  if (param_3 != 0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
    uVar7 = param_1 >> 0x18 & 0xff;
    puVar4 = (undefined1 *)ERR_lib_error_string();
    if (puVar4 == (undefined1 *)0x0) {
      BIO_snprintf(local_108,0x40,"lib(%lu)",uVar7);
      puVar4 = local_108;
    }
    puVar5 = (undefined1 *)ERR_func_error_string(param_1 & 0xffffffff);
    uVar2 = (uint)(param_1 >> 0xc);
    if (puVar5 == (undefined1 *)0x0) {
      BIO_snprintf(local_c8,0x40,"func(%lu)",uVar2 & 0xfff);
      puVar5 = local_c8;
    }
    local_118 = (undefined1 *)ERR_reason_error_string(param_1 & 0xffffffff);
    if (local_118 == (undefined1 *)0x0) {
      BIO_snprintf(local_88,0x40,"reason(%lu)",(uint)param_1 & 0xfff);
      local_118 = local_88;
    }
    local_128 = puVar4;
    local_120 = puVar5;
    BIO_snprintf(param_2,param_3,"error:%08lX:%s:%s:%s",param_1 & 0xffffffff);
    cVar1 = *param_2;
    pcVar6 = param_2;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    if ((ulonglong)(uVar3 & 0x7fffffff) == param_3 - 1U) {
      local_118 = (undefined1 *)(CONCAT44(local_118._4_4_,(uint)param_1) & 0xffffffff00000fff);
      local_120 = (undefined1 *)(CONCAT44(local_120._4_4_,uVar2) & 0xffffffff00000fff);
      local_128 = (undefined1 *)CONCAT44(local_128._4_4_,(int)uVar7);
      BIO_snprintf(param_2,param_3,"err:%lx:%lx:%lx:%lx",param_1 & 0xffffffff);
    }
  }
  return;
}

// ERR_func_error_string @ 14f6b5330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ERR_func_error_string(uint param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6b5340;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e00a4,FUN_14f6b61e0);
  uVar4 = 0;
  uVar3 = uVar4;
  if (iVar1 != 0) {
    uVar3 = (ulonglong)DAT_1553e00b8;
  }
  if ((int)uVar3 == 0) {
    return 0;
  }
  local_18[0] = param_1 & 0xfffff000;
  CRYPTO_THREAD_read_lock(DAT_1553e00a8);
  lVar2 = OPENSSL_LH_retrieve(DAT_1553e00b0,local_18);
  CRYPTO_THREAD_unlock(DAT_1553e00a8);
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 8);
  }
  return uVar4;
}

// ERR_get_error @ 14f6b53d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_get_error(void)

{
  FUN_14f6b6640(1,0,0,0,0,0,0x14f6b53da);
  return;
}

// ERR_get_error_line @ 14f6b5410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_get_error_line(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6b6640(1,0,param_1,param_2,0,0,0x14f6b541a);
  return;
}

// ERR_get_error_line_data @ 14f6b5450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_get_error_line_data
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14f6b6640(1,0,param_1,param_2,param_3,param_4,0x14f6b545a);
  return;
}

// ERR_get_next_error_library @ 14f6b5490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ERR_get_next_error_library
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e00a4,FUN_14f6b61e0,param_3,param_4,0x14f6b549a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e00b8;
  }
  if (iVar2 == 0) {
    return 0;
  }
  CRYPTO_THREAD_write_lock(DAT_1553e00a8);
  iVar2 = DAT_154df8670;
  DAT_154df8670 = DAT_154df8670 + 1;
  CRYPTO_THREAD_unlock(DAT_1553e00a8);
  return iVar2;
}

// ERR_get_state @ 14f6b5510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ERR_get_state(void)

{
  DWORD dwErrCode;
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  dwErrCode = GetLastError();
  iVar1 = OPENSSL_init_crypto(0x40000,0);
  if (iVar1 != 0) {
    iVar2 = CRYPTO_THREAD_run_once(&DAT_1553e00a0,FUN_14f6b6350);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = DAT_1553e00bc;
    }
    if (iVar1 != 0) {
      lVar3 = CRYPTO_THREAD_get_local(&DAT_1553e00c4);
      if (lVar3 != -1) {
        if (lVar3 != 0) {
LAB_14f6b55e2:
          SetLastError(dwErrCode);
          return lVar3;
        }
        iVar1 = CRYPTO_THREAD_set_local(&DAT_1553e00c4,0xffffffffffffffff);
        if (iVar1 != 0) {
          lVar3 = CRYPTO_zalloc(0x208,"crypto\\err\\err.c",0x2fe);
          if (lVar3 != 0) {
            iVar1 = ossl_init_thread_start(2);
            if (iVar1 != 0) {
              iVar1 = CRYPTO_THREAD_set_local(&DAT_1553e00c4,lVar3);
              if (iVar1 != 0) {
                OPENSSL_init_crypto(2);
                goto LAB_14f6b55e2;
              }
            }
            FUN_14f6b4dc0(lVar3);
          }
          CRYPTO_THREAD_set_local(&DAT_1553e00c4,0);
        }
      }
      return 0;
    }
  }
  return 0;
}

// ERR_lib_error_string @ 14f6b5630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ERR_lib_error_string(uint param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6b5640;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e00a4,FUN_14f6b61e0);
  uVar4 = 0;
  uVar3 = uVar4;
  if (iVar1 != 0) {
    uVar3 = (ulonglong)DAT_1553e00b8;
  }
  if ((int)uVar3 == 0) {
    return 0;
  }
  local_18[0] = param_1 & 0xff000000;
  CRYPTO_THREAD_read_lock(DAT_1553e00a8);
  lVar2 = OPENSSL_LH_retrieve(DAT_1553e00b0,local_18);
  CRYPTO_THREAD_unlock(DAT_1553e00a8);
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 8);
  }
  return uVar4;
}

// ERR_load_ERR_strings @ 14f6b56d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ERR_load_ERR_strings(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  
  iVar2 = CRYPTO_THREAD_run_once(&DAT_1553e00a4,FUN_14f6b61e0,param_3,param_4,0x14f6b56da);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = DAT_1553e00b8;
  }
  if (iVar4 != 0) {
    piVar5 = &DAT_154df80a0;
    CRYPTO_THREAD_write_lock(DAT_1553e00a8);
    iVar4 = DAT_154df80a0;
    while (iVar4 != 0) {
      OPENSSL_LH_insert(DAT_1553e00b0,piVar5);
      piVar5 = piVar5 + 4;
      iVar4 = *piVar5;
    }
    CRYPTO_THREAD_unlock(DAT_1553e00a8);
    piVar5 = &DAT_154df8480;
    CRYPTO_THREAD_write_lock(DAT_1553e00a8);
    iVar4 = DAT_154df8480;
    while (iVar4 != 0) {
      OPENSSL_LH_insert(DAT_1553e00b0,piVar5);
      piVar5 = piVar5 + 4;
      iVar4 = *piVar5;
    }
    CRYPTO_THREAD_unlock(DAT_1553e00a8);
    puVar6 = &DAT_154df82f0;
    puVar3 = &DAT_154df82f0;
    uVar1 = DAT_154df82f0;
    while (uVar1 != 0) {
      *puVar3 = *puVar3 | 0x2000000;
      puVar3 = puVar3 + 4;
      uVar1 = *puVar3;
    }
    CRYPTO_THREAD_write_lock(DAT_1553e00a8);
    uVar1 = DAT_154df82f0;
    while (uVar1 != 0) {
      OPENSSL_LH_insert(DAT_1553e00b0,puVar6);
      puVar6 = puVar6 + 4;
      uVar1 = *puVar6;
    }
    CRYPTO_THREAD_unlock(DAT_1553e00a8);
    FUN_14f6b5ef0();
    return 1;
  }
  return 0;
}

// ERR_load_strings @ 14f6b5820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_strings(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = ERR_load_ERR_strings();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar2 = *param_2;
  puVar1 = param_2;
  while (uVar2 != 0) {
    *puVar1 = *puVar1 | param_1 << 0x18;
    puVar1 = puVar1 + 4;
    uVar2 = *puVar1;
  }
  FUN_14f6b63a0(param_2);
  return 1;
}

// ERR_load_strings_const @ 14f6b5890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_strings_const(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ERR_load_ERR_strings();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  FUN_14f6b63a0(param_1);
  return 1;
}

// ERR_peek_error @ 14f6b58d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_peek_error(void)

{
  FUN_14f6b6640(0,0,0,0,0,0,0x14f6b58da);
  return;
}

// ERR_peek_error_line @ 14f6b5910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_peek_error_line(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6b6640(0,0,param_1,param_2,0,0,0x14f6b591a);
  return;
}

// ERR_peek_error_line_data @ 14f6b5950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_peek_error_line_data
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14f6b6640(0,0,param_1,param_2,param_3,param_4,0x14f6b595a);
  return;
}

// ERR_peek_last_error @ 14f6b5990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_peek_last_error(void)

{
  FUN_14f6b6640(0,1,0,0,0,0,0x14f6b599a);
  return;
}

// ERR_peek_last_error_line @ 14f6b59d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_peek_last_error_line(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6b6640(0,1,param_1,param_2,0,0,0x14f6b59da);
  return;
}

// ERR_peek_last_error_line_data @ 14f6b5a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_peek_last_error_line_data
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14f6b6640(0,1,param_1,param_2,param_3,param_4,0x14f6b5a1a);
  return;
}

// ERR_pop_to_mark @ 14f6b5a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_pop_to_mark(void)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = ERR_get_state();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x204) != *(int *)(lVar3 + 0x200)) {
      do {
        lVar4 = (longlong)*(int *)(lVar3 + 0x200);
        if ((*(byte *)(lVar3 + lVar4 * 4) & 1) != 0) break;
        if ((*(byte *)(lVar3 + 0x100 + lVar4 * 4) & 1) != 0) {
          CRYPTO_free(*(undefined8 *)(lVar3 + 0x80 + lVar4 * 8),"crypto\\err\\err.c",0x3a7);
          *(undefined8 *)(lVar3 + 0x80 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
        }
        *(undefined4 *)(lVar3 + 0x100 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined4 *)(lVar3 + 0x40 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined8 *)(lVar3 + 0x140 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
        *(undefined4 *)(lVar3 + 0x1c0 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0xffffffff;
        if (*(int *)(lVar3 + 0x200) < 1) {
          iVar2 = 0xf;
        }
        else {
          iVar2 = *(int *)(lVar3 + 0x200) + -1;
        }
        *(int *)(lVar3 + 0x200) = iVar2;
      } while (*(int *)(lVar3 + 0x204) != iVar2);
    }
    if (*(int *)(lVar3 + 0x204) != *(int *)(lVar3 + 0x200)) {
      puVar1 = (uint *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}

// ERR_put_error @ 14f6b5b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_put_error(int param_1,uint param_2,uint param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = ERR_get_state();
  if (lVar2 != 0) {
    uVar1 = *(int *)(lVar2 + 0x200) + 1U & 0x8000000f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(lVar2 + 0x200) = uVar1;
    if (uVar1 == *(uint *)(lVar2 + 0x204)) {
      uVar3 = *(uint *)(lVar2 + 0x204) + 1 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      *(uint *)(lVar2 + 0x204) = uVar3;
    }
    *(undefined4 *)(lVar2 + (longlong)(int)uVar1 * 4) = 0;
    *(uint *)(lVar2 + 0x40 + (longlong)*(int *)(lVar2 + 0x200) * 4) =
         (param_2 & 0xfff | param_1 << 0xc) << 0xc | param_3 & 0xfff;
    *(undefined8 *)(lVar2 + 0x140 + (longlong)*(int *)(lVar2 + 0x200) * 8) = param_4;
    *(undefined4 *)(lVar2 + 0x1c0 + (longlong)*(int *)(lVar2 + 0x200) * 4) = param_5;
    if ((*(byte *)(lVar2 + 0x100 + (longlong)*(int *)(lVar2 + 0x200) * 4) & 1) != 0) {
      CRYPTO_free(*(undefined8 *)(lVar2 + 0x80 + (longlong)*(int *)(lVar2 + 0x200) * 8),
                  "crypto\\err\\err.c",0x1c9);
      *(undefined8 *)(lVar2 + 0x80 + (longlong)*(int *)(lVar2 + 0x200) * 8) = 0;
    }
    *(undefined4 *)(lVar2 + 0x100 + (longlong)*(int *)(lVar2 + 0x200) * 4) = 0;
  }
  return;
}

// ERR_reason_error_string @ 14f6b5cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_reason_error_string(uint param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6b5cc0;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e00a4,FUN_14f6b61e0);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_1553e00b8;
  }
  if (iVar3 != 0) {
    local_18[0] = param_1 & 0xff000fff;
    CRYPTO_THREAD_read_lock(DAT_1553e00a8);
    lVar2 = OPENSSL_LH_retrieve(DAT_1553e00b0,local_18);
    CRYPTO_THREAD_unlock(DAT_1553e00a8);
    if (lVar2 == 0) {
      local_18[0] = param_1 & 0xfff;
      CRYPTO_THREAD_read_lock(DAT_1553e00a8);
      lVar2 = OPENSSL_LH_retrieve(DAT_1553e00b0,local_18);
      CRYPTO_THREAD_unlock(DAT_1553e00a8);
      if (lVar2 == 0) {
        return 0;
      }
    }
    return *(undefined8 *)(lVar2 + 8);
  }
  return 0;
}

// ERR_set_error_data @ 14f6b5dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_set_error_data(void)

{
  FUN_14f6b6440();
  return;
}

// ERR_set_mark @ 14f6b5de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_set_mark(void)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = ERR_get_state();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x204) != *(int *)(lVar2 + 0x200))) {
    puVar1 = (uint *)(lVar2 + (longlong)*(int *)(lVar2 + 0x200) * 4);
    *puVar1 = *puVar1 | 1;
    return 1;
  }
  return 0;
}

// ERR_unload_strings @ 14f6b5e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_unload_strings(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e00a4,FUN_14f6b61e0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e00b8;
  }
  if (iVar2 != 0) {
    CRYPTO_THREAD_write_lock(DAT_1553e00a8);
    iVar2 = *param_2;
    while (iVar2 != 0) {
      OPENSSL_LH_delete(DAT_1553e00b0,param_2);
      param_2 = param_2 + 4;
      iVar2 = *param_2;
    }
    CRYPTO_THREAD_unlock(DAT_1553e00a8);
    return 1;
  }
  return 0;
}

// FUN_14f6b5ef0 @ 14f6b5ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b5ef0(void)

{
  char cVar1;
  DWORD dwErrCode;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar8 = 0;
  pcVar5 = &DAT_1553e08d0;
  dwErrCode = GetLastError();
  CRYPTO_THREAD_write_lock(DAT_1553e00a8);
  if (DAT_154df8674 == 0) {
    CRYPTO_THREAD_unlock(DAT_1553e00a8);
    return;
  }
  piVar6 = &DAT_1553e00d0;
  puVar9 = (uint *)&DAT_1553e00d0;
  uVar10 = 1;
  do {
    *puVar9 = uVar10 & 0xfff | 0x2000000;
    if (*(longlong *)(puVar9 + 2) == 0) {
      if ((uVar8 < 0x2000) && (iVar2 = openssl_strerror_r(uVar10,pcVar5,0x2000 - uVar8), iVar2 != 0)
         ) {
        cVar1 = *pcVar5;
        pcVar4 = pcVar5;
        for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        *(char **)(puVar9 + 2) = pcVar5;
        lVar7 = uVar8 + (uVar3 & 0x7fffffff);
        pcVar5 = pcVar5 + (uVar3 & 0x7fffffff);
        while (&DAT_1553e08d0 < pcVar5) {
          iVar2 = ossl_ctype_check((int)pcVar5[-1],8);
          if (iVar2 == 0) break;
          lVar7 = lVar7 + -1;
          pcVar5 = pcVar5 + -1;
        }
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + 1;
        uVar8 = lVar7 + 1;
      }
      if (*(longlong *)(puVar9 + 2) == 0) {
        *(char **)(puVar9 + 2) = "unknown";
      }
    }
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 4;
    if (0x7f < (int)uVar10) {
      DAT_154df8674 = 0;
      CRYPTO_THREAD_unlock(DAT_1553e00a8);
      SetLastError(dwErrCode);
      CRYPTO_THREAD_write_lock(DAT_1553e00a8);
      iVar2 = DAT_1553e00d0;
      while (iVar2 != 0) {
        OPENSSL_LH_insert(DAT_1553e00b0,piVar6);
        piVar6 = piVar6 + 4;
        iVar2 = *piVar6;
      }
      CRYPTO_THREAD_unlock(DAT_1553e00a8);
      return;
    }
  } while( true );
}

// FUN_14f6b6160 @ 14f6b6160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6b6160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f6b616a);
  if (iVar1 != 0) {
    DAT_1553e00a8 = CRYPTO_THREAD_lock_new();
    if (DAT_1553e00a8 != 0) {
      DAT_1553e00b0 = OPENSSL_LH_new(&LAB_14f6b65c0,&LAB_14f6b6590);
      if (DAT_1553e00b0 != 0) {
        return 1;
      }
      CRYPTO_THREAD_lock_free(DAT_1553e00a8);
      DAT_1553e00a8 = 0;
    }
  }
  return 0;
}

// FUN_14f6b61e0 @ 14f6b61e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b61e0(void)

{
  DAT_1553e00b8 = FUN_14f6b6160();
  return;
}

// err_cleanup @ 14f6b6210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void err_cleanup(void)

{
  if (DAT_1553e00c0 != 0) {
    CRYPTO_THREAD_cleanup_local(&DAT_1553e00c4);
  }
  CRYPTO_THREAD_lock_free(DAT_1553e00a8);
  DAT_1553e00a8 = 0;
  OPENSSL_LH_free(DAT_1553e00b0);
  DAT_1553e00b0 = 0;
  return;
}

// err_clear_last_constant_time @ 14f6b6270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint err_clear_last_constant_time(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = ERR_get_state();
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = (int)(param_1 - 1 & ~param_1) >> 0x1f;
    puVar1 = (uint *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4);
    *puVar1 = *puVar1 | ~uVar2 & 2;
  }
  return uVar2;
}

// err_delete_thread_state @ 14f6b62d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void err_delete_thread_state(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_THREAD_get_local(&DAT_1553e00c4);
  if (lVar1 != 0) {
    CRYPTO_THREAD_set_local(&DAT_1553e00c4,0);
    FUN_14f6b4dc0(lVar1);
    return;
  }
  return;
}

// FUN_14f6b6320 @ 14f6b6320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b6320(void)

{
  DAT_1553e00c0 = 1;
  CRYPTO_THREAD_init_local(&DAT_1553e00c4,0);
  return;
}

// FUN_14f6b6350 @ 14f6b6350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b6350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DAT_1553e00c0 = 1;
  DAT_1553e00bc = CRYPTO_THREAD_init_local(&DAT_1553e00c4,0,param_3,param_4,0x14f6b635a);
  return;
}

// FUN_14f6b63a0 @ 14f6b63a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6b63a0(int *param_1)

{
  int iVar1;
  
  CRYPTO_THREAD_write_lock(DAT_1553e00a8);
  iVar1 = *param_1;
  while (iVar1 != 0) {
    OPENSSL_LH_insert(DAT_1553e00b0,param_1);
    param_1 = param_1 + 4;
    iVar1 = *param_1;
  }
  CRYPTO_THREAD_unlock(DAT_1553e00a8);
  return 1;
}

// FUN_14f6b6440 @ 14f6b6440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6b6440(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = ERR_get_state();
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = (longlong)*(int *)(lVar1 + 0x200);
  if ((*(byte *)(lVar1 + 0x100 + lVar2 * 4) & 1) != 0) {
    CRYPTO_free(*(undefined8 *)(lVar1 + 0x80 + lVar2 * 8),"crypto\\err\\err.c",0x356);
    *(undefined8 *)(lVar1 + 0x80 + lVar2 * 8) = 0;
  }
  *(undefined8 *)(lVar1 + 0x80 + lVar2 * 8) = param_1;
  *(undefined4 *)(lVar1 + 0x100 + lVar2 * 4) = param_2;
  return 1;
}

// err_shelve_state @ 14f6b64f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 err_shelve_state(undefined8 *param_1)

{
  DWORD dwErrCode;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  dwErrCode = GetLastError();
  iVar1 = OPENSSL_init_crypto(0x40000,0);
  if (iVar1 != 0) {
    iVar2 = CRYPTO_THREAD_run_once(&DAT_1553e00a0,FUN_14f6b6350);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = DAT_1553e00bc;
    }
    if (iVar1 != 0) {
      uVar3 = CRYPTO_THREAD_get_local(&DAT_1553e00c4);
      *param_1 = uVar3;
      iVar1 = CRYPTO_THREAD_set_local(&DAT_1553e00c4,0xffffffffffffffff);
      if (iVar1 != 0) {
        SetLastError(dwErrCode);
        return 1;
      }
    }
  }
  return 0;
}

// err_unshelve_state @ 14f6b6610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void err_unshelve_state(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != -1) {
    CRYPTO_THREAD_set_local(&DAT_1553e00c4,param_1,param_3,param_4,0x14f6b6620);
  }
  return;
}

// FUN_14f6b6640 @ 14f6b6640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f6b6640(int param_1,int param_2,longlong *param_3,undefined4 *param_4,longlong *param_5,
             undefined4 *param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = ERR_get_state();
  uVar3 = 0;
  if (lVar4 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      if (*(int *)(lVar4 + 0x204) != *(int *)(lVar4 + 0x200)) {
        do {
          lVar5 = (longlong)*(int *)(lVar4 + 0x200);
          if ((*(byte *)(lVar4 + lVar5 * 4) & 2) == 0) {
            uVar2 = *(int *)(lVar4 + 0x204) + 1U & 0x8000000f;
            if ((int)uVar2 < 0) {
              uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
            }
            lVar5 = (longlong)(int)uVar2;
            if ((*(byte *)(lVar4 + lVar5 * 4) & 2) == 0) break;
            *(uint *)(lVar4 + 0x204) = uVar2;
            if ((*(byte *)(lVar4 + 0x100 + lVar5 * 4) & 1) != 0) {
              CRYPTO_free(*(undefined8 *)(lVar4 + 0x80 + lVar5 * 8),"crypto\\err\\err.c",0x22d);
              *(undefined8 *)(lVar4 + 0x80 + (longlong)*(int *)(lVar4 + 0x204) * 8) = 0;
            }
            *(undefined4 *)(lVar4 + 0x100 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0;
            *(undefined4 *)(lVar4 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0;
            *(undefined4 *)(lVar4 + 0x40 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0;
            *(undefined8 *)(lVar4 + 0x140 + (longlong)*(int *)(lVar4 + 0x204) * 8) = 0;
            *(undefined4 *)(lVar4 + 0x1c0 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0xffffffff;
          }
          else {
            if ((*(byte *)(lVar4 + 0x100 + lVar5 * 4) & 1) != 0) {
              CRYPTO_free(*(undefined8 *)(lVar4 + 0x80 + lVar5 * 8),"crypto\\err\\err.c",0x226);
              *(undefined8 *)(lVar4 + 0x80 + (longlong)*(int *)(lVar4 + 0x200) * 8) = 0;
            }
            *(undefined4 *)(lVar4 + 0x100 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0;
            *(undefined4 *)(lVar4 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0;
            *(undefined4 *)(lVar4 + 0x40 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0;
            *(undefined8 *)(lVar4 + 0x140 + (longlong)*(int *)(lVar4 + 0x200) * 8) = 0;
            *(undefined4 *)(lVar4 + 0x1c0 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0xffffffff;
            if (*(int *)(lVar4 + 0x200) < 1) {
              *(undefined4 *)(lVar4 + 0x200) = 0xf;
            }
            else {
              *(int *)(lVar4 + 0x200) = *(int *)(lVar4 + 0x200) + -1;
            }
          }
        } while (*(int *)(lVar4 + 0x204) != *(int *)(lVar4 + 0x200));
      }
      uVar2 = *(uint *)(lVar4 + 0x200);
      if (*(uint *)(lVar4 + 0x204) == uVar2) {
        uVar3 = 0;
      }
      else {
        if ((param_2 == 0) && (uVar2 = *(uint *)(lVar4 + 0x204) + 1 & 0x8000000f, (int)uVar2 < 0)) {
          uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
        }
        lVar6 = (longlong)(int)uVar2;
        uVar3 = *(undefined4 *)(lVar4 + 0x40 + lVar6 * 4);
        lVar5 = lVar6 + 0x10;
        if (param_1 != 0) {
          *(uint *)(lVar4 + 0x204) = uVar2;
          *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
        }
        if ((param_3 != (longlong *)0x0) && (param_4 != (undefined4 *)0x0)) {
          lVar1 = *(longlong *)(lVar4 + 0x140 + lVar6 * 8);
          if (lVar1 == 0) {
            *param_3 = (longlong)"NA";
            *param_4 = 0;
          }
          else {
            *param_3 = lVar1;
            *param_4 = *(undefined4 *)(lVar4 + 0x1c0 + lVar6 * 4);
          }
        }
        if (param_5 == (longlong *)0x0) {
          if (param_1 != 0) {
            lVar6 = lVar4 + lVar6 * 4;
            if ((*(byte *)(lVar6 + 0x100) & 1) != 0) {
              CRYPTO_free(*(undefined8 *)(lVar4 + lVar5 * 8),"crypto\\err\\err.c",0x24d);
              *(undefined8 *)(lVar4 + lVar5 * 8) = 0;
            }
            *(undefined4 *)(lVar6 + 0x100) = 0;
          }
        }
        else {
          lVar5 = *(longlong *)(lVar4 + lVar5 * 8);
          if (lVar5 == 0) {
            *param_5 = (longlong)"";
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = 0;
            }
          }
          else {
            *param_5 = lVar5;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = *(undefined4 *)(lVar4 + 0x100 + lVar6 * 4);
            }
          }
        }
      }
    }
    else {
      if (param_3 != (longlong *)0x0) {
        *param_3 = (longlong)"";
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      if (param_5 != (longlong *)0x0) {
        *param_5 = (longlong)"";
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
      }
      uVar3 = 0x44;
    }
  }
  return uVar3;
}

// FUN_14f6b6950 @ 14f6b6950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6b6950(undefined8 param_1)

{
  undefined8 uVar1;
  
  CRYPTO_THREAD_read_lock(DAT_1553e00a8);
  uVar1 = OPENSSL_LH_retrieve(DAT_1553e00b0,param_1);
  CRYPTO_THREAD_unlock(DAT_1553e00a8);
  return uVar1;
}

// FUN_14f6b69a0 @ 14f6b69a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b69a0(void)

{
  OPENSSL_LH_delete();
  return;
}

// FUN_14f6b69c0 @ 14f6b69c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b69c0(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f6b69e0 @ 14f6b69e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b69e0(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f6b6a00 @ 14f6b6a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b6a00(void)

{
  OPENSSL_LH_new();
  return;
}

// FUN_14f6b6a20 @ 14f6b6a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b6a20(void)

{
  OPENSSL_LH_retrieve();
  return;
}

