// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 43

// BIO_callback_ctrl @ 14f6a5a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_callback_ctrl(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  local_res18[0] = param_3;
  if (((*param_1 != 0) && (*(longlong *)(*param_1 + 0x58) != 0)) && (param_2 == 0xe)) {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,6,local_res18,0xe,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,0xe,local_res18[0]);
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,0x86,local_res18,0xe,0,(int)uVar1);
        return uVar1;
      }
      uVar1 = (*(code *)param_1[2])();
    }
    return uVar1;
  }
  ERR_put_error(0x20,0x83,0x79,"crypto\\bio\\bio_lib.c",0x222);
  return 0xfffffffe;
}

// BIO_clear_flags @ 14f6a5bc0

void BIO_clear_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & ~param_2;
  return;
}

// BIO_copy_next_retry @ 14f6a5bd0

void BIO_copy_next_retry(longlong param_1)

{
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) | *(uint *)(*(longlong *)(param_1 + 0x40) + 0x28) & 0xf;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c);
  return;
}

// BIO_ctrl @ 14f6a5bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_ctrl(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x40) == 0)) {
    ERR_put_error(0x20,0x67,0x79,"crypto\\bio\\bio_lib.c",0x206);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,6,param_4,param_2,param_3,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,0x86,param_4,param_2,param_3,(int)uVar1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
    }
  }
  return uVar1;
}

// BIO_ctrl_pending @ 14f6a5d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_ctrl_pending(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = BIO_ctrl(param_1,10,0,0,0x14f6a5d4a);
  return (longlong)iVar1;
}

// BIO_ctrl_wpending @ 14f6a5d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_ctrl_wpending(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = BIO_ctrl(param_1,0xd,0,0,0x14f6a5d7a);
  return (longlong)iVar1;
}

// BIO_dup_chain @ 14f6a5da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_dup_chain(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = 0;
  lVar2 = 0;
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return lVar2;
    }
    lVar4 = BIO_new(*param_1);
    if (lVar4 == 0) break;
    *(undefined8 *)(lVar4 + 8) = param_1[1];
    *(undefined8 *)(lVar4 + 0x10) = param_1[2];
    *(undefined8 *)(lVar4 + 0x18) = param_1[3];
    *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x24);
    *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(param_1 + 6);
    iVar3 = BIO_ctrl(param_1,0xc,0,lVar4);
    if ((iVar3 == 0) || (iVar3 = CRYPTO_dup_ex_data(0xc,lVar4 + 0x68), iVar3 == 0)) {
      BIO_free(lVar4);
      break;
    }
    lVar5 = lVar4;
    if (lVar2 != 0) {
      BIO_push(lVar1,lVar4);
      lVar5 = lVar2;
    }
    param_1 = (undefined8 *)param_1[8];
    lVar1 = lVar4;
    lVar2 = lVar5;
  }
  BIO_free_all(lVar2);
  return 0;
}

// BIO_find_type @ 14f6a5ea0

undefined8 * BIO_find_type(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if ((uint *)*param_1 != (uint *)0x0) {
      uVar1 = *(uint *)*param_1;
      if ((char)param_2 == '\0') {
        if ((param_2 & uVar1) != 0) {
          return param_1;
        }
      }
      else if (uVar1 == param_2) {
        return param_1;
      }
    }
    param_1 = (undefined8 *)param_1[8];
  } while( true );
}

// BIO_free @ 14f6a5ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_free(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  LOCK();
  plVar1 = param_1 + 10;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 < 2) {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar4 = (*(code *)param_1[1])(param_1,1,0,0,0,1);
      }
      else {
        uVar4 = (*(code *)param_1[2])(param_1,1,0,0,0,0,1,0);
      }
      if ((int)uVar4 < 1) {
        return uVar4;
      }
    }
    if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x50), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    CRYPTO_free_ex_data(0xc,param_1,param_1 + 0xd);
    CRYPTO_THREAD_lock_free(param_1[0xe]);
    CRYPTO_free(param_1,"crypto\\bio\\bio_lib.c",0x8a);
  }
  return 1;
}

// BIO_free_all @ 14f6a5fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_free_all(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  do {
    if (param_1 == (longlong *)0x0) {
      return;
    }
    lVar4 = param_1[10];
    plVar1 = param_1 + 10;
    plVar2 = (longlong *)param_1[8];
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 < 2) {
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          iVar6 = (*(code *)param_1[1])();
        }
        else {
          iVar6 = (*(code *)param_1[2])();
        }
        if (iVar6 < 1) goto LAB_14f6a60a3;
      }
      if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x50), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      CRYPTO_free_ex_data(0xc,param_1,param_1 + 0xd);
      CRYPTO_THREAD_lock_free(param_1[0xe]);
      CRYPTO_free(param_1,"crypto\\bio\\bio_lib.c");
    }
LAB_14f6a60a3:
    param_1 = plVar2;
    if (1 < (int)lVar4) {
      return;
    }
  } while( true );
}

// BIO_get_callback @ 14f6a60d0

undefined8 BIO_get_callback(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// BIO_get_data @ 14f6a6100

undefined8 BIO_get_data(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}

// BIO_get_ex_data @ 14f6a6110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x68);
  return;
}

// BIO_get_init @ 14f6a6130

undefined4 BIO_get_init(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}

// BIO_get_retry_reason @ 14f6a6180

undefined4 BIO_get_retry_reason(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}

// BIO_get_shutdown @ 14f6a6190

undefined4 BIO_get_shutdown(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}

// BIO_gets @ 14f6a61a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BIO_gets(longlong *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined4 uVar6;
  
  uVar4 = (ulonglong)param_3;
  local_res8 = 0;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    uVar6 = 0x1b6;
    uVar5 = 0x79;
  }
  else {
    if (param_3 < 0) {
      ERR_put_error(0x20,0x68,0x7d,"crypto\\bio\\bio_lib.c",0x1bb);
      return 0;
    }
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        if (0x7fffffff < uVar4) {
          return 0xffffffff;
        }
        uVar1 = (*(code *)param_1[1])(param_1,5,param_2,param_3,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])(param_1,5,param_2,uVar4,0,0,1,0);
      }
      uVar3 = (ulonglong)uVar1;
      if ((int)uVar1 < 1) goto LAB_14f6a6320;
    }
    if ((int)param_1[4] != 0) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
      uVar3 = (longlong)iVar2;
      if (0 < iVar2) {
        uVar3 = 1;
        local_res8 = (longlong)iVar2;
      }
      iVar2 = (int)uVar3;
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          if (0x7fffffff < uVar4) {
            return 0xffffffff;
          }
          if (0 < iVar2) {
            if (0x7fffffff < local_res8) {
              return 0xffffffff;
            }
            iVar2 = (int)local_res8;
          }
          iVar2 = (*(code *)param_1[1])(param_1,0x85,param_2,param_3,0,iVar2);
          uVar3 = (longlong)iVar2;
          if (0 < iVar2) {
            uVar3 = 1;
            local_res8 = (longlong)iVar2;
          }
        }
        else {
          uVar1 = (*(code *)param_1[2])(param_1,0x85,param_2,uVar4,0,0,iVar2,&local_res8);
          uVar3 = (ulonglong)uVar1;
        }
      }
      if ((0 < (int)uVar3) && (uVar3 = local_res8 & 0xffffffff, uVar4 < local_res8)) {
        uVar3 = 0xffffffff;
      }
LAB_14f6a6320:
      return uVar3 & 0xffffffff;
    }
    uVar6 = 0x1c6;
    uVar5 = 0x78;
  }
  ERR_put_error(0x20,0x68,uVar5,"crypto\\bio\\bio_lib.c",uVar6);
  return 0xfffffffe;
}

// BIO_indent @ 14f6a63b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_indent(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res20;
  undefined4 uVar4;
  
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  do {
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = iVar2 + -1;
    local_res20 = 0;
    if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x30) == 0))
    {
      uVar4 = 0x189;
      uVar3 = 0x79;
      goto LAB_14f6a6592;
    }
    if (((code *)param_1[1] == (code *)0x0) && (param_1[2] == 0)) {
LAB_14f6a6473:
      if ((int)param_1[4] == 0) {
        uVar4 = 0x194;
        uVar3 = 0x78;
LAB_14f6a6592:
        ERR_put_error(0x20,0x6e,uVar3,"crypto\\bio\\bio_lib.c",uVar4);
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1," ");
      if (0 < iVar1) {
        local_res20 = (ulonglong)iVar1;
        iVar1 = 1;
        param_1[0xc] = param_1[0xc] + local_res20;
      }
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          if (0 < iVar1) {
            if (0x7fffffff < local_res20) {
              return 0;
            }
            iVar1 = (int)local_res20;
          }
          iVar1 = (*(code *)param_1[1])(param_1,0x84," ",0,0,iVar1);
          if (0 < iVar1) {
            local_res20 = (ulonglong)iVar1;
            iVar1 = 1;
          }
        }
        else {
          iVar1 = (*(code *)param_1[2])(param_1,0x84," ",0,0,0,iVar1,&local_res20);
        }
      }
      if (0 < iVar1) {
        if (0x7fffffff < local_res20) {
          uVar4 = 0x1a6;
          uVar3 = 0x66;
          goto LAB_14f6a6592;
        }
        iVar1 = (int)local_res20;
      }
    }
    else {
      if ((code *)param_1[2] == (code *)0x0) {
        iVar1 = (*(code *)param_1[1])(param_1,4," ",0,0,1);
      }
      else {
        iVar1 = (*(code *)param_1[2])();
      }
      if (0 < iVar1) goto LAB_14f6a6473;
    }
    if (iVar1 != 1) {
      return 0;
    }
  } while( true );
}

// BIO_int_ctrl @ 14f6a65c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_int_ctrl(void)

{
  BIO_ctrl();
  return;
}

// BIO_method_type @ 14f6a6600

undefined4 BIO_method_type(undefined8 *param_1)

{
  return *(undefined4 *)*param_1;
}

// BIO_new @ 14f6a6610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * BIO_new(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6a6620;
  plVar2 = (longlong *)CRYPTO_zalloc(0x78,"crypto\\bio\\bio_lib.c",0x49);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x20,0x6c,0x41,"crypto\\bio\\bio_lib.c",0x4c,uVar4);
    return (longlong *)0x0;
  }
  *plVar2 = param_1;
  *(undefined4 *)((longlong)plVar2 + 0x24) = 1;
  *(undefined4 *)(plVar2 + 10) = 1;
  iVar1 = CRYPTO_new_ex_data(0xc,plVar2,plVar2 + 0xd);
  if (iVar1 != 0) {
    lVar3 = CRYPTO_THREAD_lock_new();
    plVar2[0xe] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x48))(plVar2);
        if (iVar1 == 0) {
          ERR_put_error(0x20,0x6c,0x46,"crypto\\bio\\bio_lib.c",0x5f,uVar4);
          CRYPTO_free_ex_data(0xc,plVar2,plVar2 + 0xd);
          CRYPTO_THREAD_lock_free(plVar2[0xe]);
          goto LAB_14f6a66d4;
        }
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        *(undefined4 *)(plVar2 + 4) = 1;
      }
      return plVar2;
    }
    ERR_put_error(0x20,0x6c,0x41,"crypto\\bio\\bio_lib.c",0x59,uVar4);
    CRYPTO_free_ex_data(0xc,plVar2,plVar2 + 0xd);
  }
LAB_14f6a66d4:
  CRYPTO_free(plVar2,"crypto\\bio\\bio_lib.c",0x6a);
  return (longlong *)0x0;
}

// BIO_next @ 14f6a6770

undefined8 BIO_next(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x40);
}

// BIO_pop @ 14f6a67d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_pop(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  BIO_ctrl(param_1,7,0,param_1);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x40) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return uVar1;
}

// BIO_ptr_ctrl @ 14f6a6850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_ptr_ctrl(void)

{
  BIO_ctrl();
  return 0;
}

// BIO_push @ 14f6a6890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_push(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    lVar2 = param_1;
    while (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x40);
      lVar1 = *(longlong *)(lVar2 + 0x40);
    }
    *(longlong *)(lVar2 + 0x40) = param_2;
    if (param_2 != 0) {
      *(longlong *)(param_2 + 0x48) = lVar2;
    }
    BIO_ctrl(param_1,6);
    return param_1;
  }
  return param_2;
}

// BIO_puts @ 14f6a6900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BIO_puts(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  undefined4 uVar3;
  
  local_res8 = 0;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x30) == 0)) {
    uVar3 = 0x189;
    uVar2 = 0x79;
  }
  else {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,4,param_2,0,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    if ((int)param_1[4] != 0) {
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
      if (0 < (int)uVar1) {
        local_res8 = (ulonglong)(int)uVar1;
        uVar1 = 1;
        param_1[0xc] = param_1[0xc] + local_res8;
      }
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          if (0 < (int)uVar1) {
            if (0x7fffffff < local_res8) {
              return 0xffffffff;
            }
            uVar1 = local_res8 & 0xffffffff;
          }
          uVar1 = (*(code *)param_1[1])(param_1,0x84,param_2,0,0,(int)uVar1);
          if (0 < (int)uVar1) {
            local_res8 = (ulonglong)(int)uVar1;
            uVar1 = 1;
          }
        }
        else {
          uVar1 = (*(code *)param_1[2])(param_1,0x84,param_2,0,0,0,(int)uVar1,&local_res8);
        }
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      if (0x7fffffff < local_res8) {
        ERR_put_error(0x20,0x6e,0x66,"crypto\\bio\\bio_lib.c",0x1a6);
        return 0xffffffff;
      }
      return local_res8 & 0xffffffff;
    }
    uVar3 = 0x194;
    uVar2 = 0x78;
  }
  ERR_put_error(0x20,0x6e,uVar2,"crypto\\bio\\bio_lib.c",uVar3);
  return 0xfffffffe;
}

// BIO_read @ 14f6a6af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BIO_read(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    return 0;
  }
  iVar1 = FUN_14f6a6e70(param_1,param_2,(longlong)param_3,local_res20,0x14f6a6afa);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}

// BIO_read_ex @ 14f6a6b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool BIO_read_ex(void)

{
  int iVar1;
  
  iVar1 = FUN_14f6a6e70();
  return 0 < iVar1;
}

// BIO_set_data @ 14f6a6b90

void BIO_set_data(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}

// BIO_set_ex_data @ 14f6a6ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x68);
  return;
}

// BIO_set_flags @ 14f6a6bc0

void BIO_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | param_2;
  return;
}

// BIO_set_init @ 14f6a6bd0

void BIO_set_init(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

// BIO_set_shutdown @ 14f6a6c00

void BIO_set_shutdown(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

// BIO_test_flags @ 14f6a6c10

uint BIO_test_flags(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x28) & param_2;
}

// BIO_up_ref @ 14f6a6c20

bool BIO_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// BIO_vfree @ 14f6a6c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_vfree(void)

{
  BIO_free();
  return;
}

// BIO_write @ 14f6a6c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BIO_write(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    return 0;
  }
  iVar1 = FUN_14f6a7020(param_1,param_2,(longlong)param_3,local_res20,0x14f6a6c6a);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}

// BIO_write_ex @ 14f6a6ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool BIO_write_ex(void)

{
  int iVar1;
  
  iVar1 = FUN_14f6a7020();
  return 0 < iVar1;
}

// FUN_14f6a6d10 @ 14f6a6d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6a6d10(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6,int param_7,ulonglong *param_8)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a6d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x10))();
    return uVar1;
  }
  uVar2 = param_2 & 0xffffff7f;
  if ((((uVar2 - 2 & 0xfffffffc) == 0) && (uVar2 != 4)) && (0x7fffffff < param_4)) {
    return 0xffffffff;
  }
  if (((0 < param_7) && ((char)param_2 < '\0')) && ((uVar2 != 6 && (0x7fffffff < *param_8)))) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(param_1 + 8))();
  if (((0 < (int)uVar1) && ((char)param_2 < '\0')) && (uVar2 != 6)) {
    *param_8 = (longlong)(int)uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

// bio_cleanup @ 14f6a6df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bio_cleanup(void)

{
  bio_sock_cleanup_int();
  CRYPTO_THREAD_lock_free(bio_lookup_lock);
  bio_lookup_lock = 0;
  CRYPTO_THREAD_lock_free(bio_type_lock);
  bio_type_lock = 0;
  return;
}

// bio_free_ex_data @ 14f6a6e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bio_free_ex_data(longlong param_1)

{
  CRYPTO_free_ex_data(0xc,param_1,param_1 + 0x68);
  return;
}

// FUN_14f6a6e70 @ 14f6a6e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a6e70(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x20) == 0)) {
    ERR_put_error(0x20,0x78,0x79,"crypto\\bio\\bio_lib.c",0x100);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < param_3) {
        return 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,2,param_2,param_3 & 0xffffffff,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,2,param_2,param_3,0,0,1,0);
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if ((int)param_1[4] == 0) {
    ERR_put_error(0x20,0x78,0x78,"crypto\\bio\\bio_lib.c",0x10a);
    return 0xfffffffe;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar1) {
    param_1[0xb] = param_1[0xb] + *param_4;
  }
  if ((param_1[1] != 0) || (param_1[2] != 0)) {
    uVar1 = FUN_14f6a6d10(param_1,0x82,param_2,param_3,0,0,(int)uVar1,param_4);
  }
  if (0 < (int)uVar1) {
    if (param_3 < *param_4) {
      ERR_put_error(0x20,0x78,0x44,"crypto\\bio\\bio_lib.c",0x119);
      return 0xffffffff;
    }
    return uVar1;
  }
  return uVar1;
}

// FUN_14f6a7020 @ 14f6a7020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a7020(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    ERR_put_error(0x20,0x80,0x79,"crypto\\bio\\bio_lib.c",0x149);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        if (0x7fffffff < param_3) {
          return 0xffffffff;
        }
        uVar1 = (*(code *)param_1[1])(param_1,3,param_2,param_3 & 0xffffffff,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])(param_1,3,param_2,param_3,0,0,1,0);
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    if ((int)param_1[4] == 0) {
      ERR_put_error(0x20,0x80,0x78,"crypto\\bio\\bio_lib.c",0x153);
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
      if (0 < (int)uVar1) {
        param_1[0xc] = param_1[0xc] + *param_4;
      }
      if ((param_1[1] != 0) || (param_1[2] != 0)) {
        uVar1 = FUN_14f6a6d10(param_1,0x83,param_2,param_3,0,0,(int)uVar1,param_4);
      }
    }
  }
  return uVar1;
}

