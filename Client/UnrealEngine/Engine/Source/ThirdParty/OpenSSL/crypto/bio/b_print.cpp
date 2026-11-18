// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// BIO_printf @ 14f6e1ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_printf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  BIO_vprintf(param_1,param_2,&local_res18,param_4,0x14f6e1eb9);
  return;
}

// BIO_snprintf @ 14f6e1ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BIO_snprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_res20;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10 [2];
  
  local_10[1] = 0x14f6e1ef4;
  local_res20 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  iVar1 = FUN_14f6e20e0(&local_18,0,&local_20,local_10,local_28,param_3,&local_res20);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = 0xffffffff;
  if (local_28[0] == 0) {
    uVar2 = 0xffffffff;
    if (local_10[0] < 0x80000000) {
      uVar2 = local_10[0] & 0xffffffff;
    }
  }
  return uVar2;
}

// BIO_vprintf @ 14f6e1f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 BIO_vprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_888 [32];
  undefined1 *local_868;
  undefined8 local_860;
  undefined8 local_858;
  longlong local_848;
  undefined4 local_840 [2];
  undefined1 local_838 [8];
  undefined8 local_830;
  undefined1 *local_828 [2];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6e1f7c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_828[0] = local_818;
  local_868 = local_838;
  local_830 = 0x800;
  local_848 = 0;
  local_860 = param_2;
  local_858 = param_3;
  iVar1 = FUN_14f6e20e0(local_828,&local_848,&local_830,local_840);
  if (iVar1 == 0) {
    CRYPTO_free(local_848,"crypto\\bio\\b_print.c",0x389);
    uVar2 = 0xffffffff;
  }
  else if (local_848 == 0) {
    uVar2 = BIO_write(param_1,local_818,local_840[0]);
  }
  else {
    uVar2 = BIO_write(param_1,local_848,local_840[0]);
    CRYPTO_free(local_848,"crypto\\bio\\b_print.c",0x38e);
  }
  return uVar2;
}

// BIO_vsnprintf @ 14f6e2060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BIO_vsnprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  int local_18 [2];
  ulonglong local_10 [2];
  
  local_10[1] = 0x14f6e2074;
  local_res8 = param_1;
  local_res10[0] = param_2;
  iVar1 = FUN_14f6e20e0(&local_res8,0,local_res10,local_10,local_18,param_3,param_4);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = 0xffffffff;
  if (local_18[0] == 0) {
    uVar2 = 0xffffffff;
    if (local_10[0] < 0x80000000) {
      uVar2 = local_10[0] & 0xffffffff;
    }
  }
  return uVar2;
}

// FUN_14f6e20e0 @ 14f6e20e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014f6e21d0) */
/* WARNING: Removing unreachable block (ram,0x00014f6e21fe) */

ulonglong FUN_14f6e20e0(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       undefined4 *param_5,char *param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_40;
  
  local_40 = 0;
  if ((*param_6 != '\0') && ((param_2 != 0 || (*param_3 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00014f6e217d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + switchD_14f6e217d::switchdataD_14f6e2720
                      ))(switchD_1501dbc7b::caseD_1.e_magic +
                         switchD_14f6e217d::switchdataD_14f6e2720);
    return uVar2;
  }
  if (param_2 == 0) {
    *param_5 = 0;
  }
  iVar1 = FUN_14f6e2840(param_1,param_2,&local_40,param_3,0);
  if (iVar1 != 0) {
    *param_4 = local_40 + -1;
  }
  return (ulonglong)(iVar1 != 0);
}

// FUN_14f6e2840 @ 14f6e2840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6e2840(longlong *param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4,
             undefined1 param_5)

{
  ulonglong uVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6e285b;
  if ((*param_1 != 0) || (param_2 != (longlong *)0x0)) {
    uVar1 = *param_4;
    if (*param_3 <= uVar1) {
      if ((param_2 == (longlong *)0x0) || (*param_3 != uVar1)) goto LAB_14f6e292a;
      if (uVar1 < 0x7ffffc00) {
        uVar1 = uVar1 + 0x400;
        *param_4 = uVar1;
        if (*param_2 == 0) {
          _Dst = (void *)CRYPTO_malloc(uVar1,"crypto\\bio\\b_print.c",0x34e);
          *param_2 = (longlong)_Dst;
          if (_Dst != (void *)0x0) {
            if (*param_3 != 0) {
              if ((void *)*param_1 == (void *)0x0) {
                return 0;
              }
              memcpy(_Dst,(void *)*param_1,*param_3);
            }
            *param_1 = 0;
LAB_14f6e292a:
            if (*param_3 < *param_4) {
              lVar2 = *param_1;
              if (lVar2 == 0) {
                lVar2 = *param_2;
              }
              *(undefined1 *)(*param_3 + lVar2) = param_5;
              *param_3 = *param_3 + 1;
            }
            return 1;
          }
          ERR_put_error(0x20,0x96,0x41,"crypto\\bio\\b_print.c",0x34f,uVar3);
        }
        else {
          lVar2 = CRYPTO_realloc(*param_2,uVar1,"crypto\\bio\\b_print.c",0x35a);
          if (lVar2 != 0) {
            *param_2 = lVar2;
            goto LAB_14f6e292a;
          }
        }
      }
    }
  }
  return 0;
}

// FUN_14f6e2970 @ 14f6e2970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f6e2970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,int param_6,int param_7,uint param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_e8 [32];
  uint local_c8;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  undefined8 local_a0;
  char acStack_98 [23];
  char acStack_81 [24];
  char acStack_69 [25];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  iVar5 = 0;
  iVar2 = 0;
  local_ac = 0;
  iVar7 = 6;
  if (-1 < param_7) {
    iVar7 = param_7;
  }
  if (0.0 <= param_5) {
    if ((param_8 & 2) == 0) {
      local_b4 = 0;
      if ((param_8 & 4) != 0) {
        local_b4 = 0x20;
      }
    }
    else {
      local_b4 = 0x2b;
    }
  }
  else {
    local_b4 = 0x2d;
  }
  if (param_9 == 2) {
    if (param_5 == 0.0) {
LAB_14f6e2a39:
      local_b8 = 0;
    }
    else if (__real_3f1a36e2eb1c432d <= param_5) {
      if (iVar7 != 0) {
        iVar6 = iVar7;
        dVar12 = __real_3ff0000000000000;
        if (0 < iVar7) {
          do {
            dVar12 = dVar12 * __real_4024000000000000;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          if (dVar12 <= param_5) goto LAB_14f6e2a7e;
        }
        goto LAB_14f6e2a39;
      }
      if (__real_4024000000000000 <= param_5) {
LAB_14f6e2a7e:
        local_b8 = 1;
      }
      else {
        local_b8 = 0;
      }
    }
    else {
      local_b8 = 1;
    }
  }
  else {
    local_b8 = param_9;
    if (param_9 == 0) goto LAB_14f6e2b2f;
  }
  dVar12 = param_5;
  if (param_5 != 0.0) {
    for (; local_ac = iVar5, dVar12 < __real_3ff0000000000000;
        dVar12 = dVar12 * __real_4024000000000000) {
      iVar5 = iVar5 + -1;
    }
    for (; __real_4024000000000000 < dVar12; dVar12 = dVar12 / __real_4024000000000000) {
      local_ac = local_ac + 1;
    }
  }
  if (param_9 == 2) {
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    if (local_b8 == 0) {
      iVar7 = iVar7 + (-1 - local_ac);
      if (iVar7 < 0) {
        return 0;
      }
      goto LAB_14f6e2b2f;
    }
    iVar7 = iVar7 + -1;
  }
  if (local_b8 == 1) {
    param_5 = dVar12;
  }
LAB_14f6e2b2f:
  if (param_5 < 0.0) {
    param_5 = (double)CONCAT44((uint)((ulonglong)param_5 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(param_5,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  if (param_5 < __real_41f0000000000000) {
    uVar10 = (ulonglong)param_5;
    dVar12 = __real_3ff0000000000000;
    iVar5 = iVar7;
    if (9 < iVar7) {
      iVar7 = 9;
      iVar5 = 9;
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      dVar12 = dVar12 * __real_4024000000000000;
    }
    uVar1 = (uint)dVar12;
    iVar7 = iVar5;
    dVar13 = __real_3ff0000000000000;
    if (__real_3fe0000000000000 <= dVar12 - (double)(int)uVar1) {
      uVar1 = uVar1 + 1;
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      dVar13 = dVar13 * __real_4024000000000000;
    }
    dVar13 = (param_5 - (double)(uVar10 & 0xffffffff)) * dVar13;
    uVar8 = (uint)dVar13;
    if (__real_3fe0000000000000 <= dVar13 - (double)(int)uVar8) {
      uVar8 = uVar8 + 1;
    }
    if (uVar1 <= uVar8) {
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar8 = uVar8 - uVar1;
    }
    lVar3 = 0;
    iVar7 = 0;
    do {
      iVar11 = iVar7;
      uVar9 = (uVar10 & 0xffffffff) / 10;
      iVar6 = (int)uVar9;
      iVar7 = iVar11 + 1;
      acStack_98[lVar3] = "0123456789"[(uint)((int)uVar10 + iVar6 * -10)];
      lVar3 = lVar3 + 1;
      if (iVar6 == 0) break;
      uVar10 = uVar9;
    } while (lVar3 < 0x14);
    if (iVar7 != 0x14) {
      iVar11 = iVar7;
    }
    local_a0 = (ulonglong)iVar11;
    if (0x13 < local_a0) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    acStack_98[local_a0] = '\0';
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        while (((param_9 != 2 || (lVar3 != 0)) || (uVar8 != (uVar8 / 10) * 10))) {
          iVar2 = iVar2 + 1;
          acStack_81[lVar3 + 1] = "0123456789"[uVar8 % 10];
          lVar3 = lVar3 + 1;
          uVar8 = uVar8 / 10;
          if (iVar5 <= iVar2) goto LAB_14f6e2c9e;
        }
        iVar5 = iVar5 + -1;
        uVar8 = uVar8 / 10;
      } while (iVar2 < iVar5);
    }
LAB_14f6e2c9e:
    iVar7 = 0x13;
    if (iVar2 != 0x14) {
      iVar7 = iVar2;
    }
    uVar10 = (ulonglong)iVar7;
    if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    acStack_81[uVar10 + 1] = '\0';
    if (local_b8 == 1) {
      iVar2 = local_ac;
      if (local_ac < 0) {
        iVar2 = -local_ac;
      }
      uVar4 = 0;
      uVar9 = uVar4;
      do {
        local_b0 = (int)uVar4 + 1;
        uVar4 = (ulonglong)local_b0;
        acStack_69[uVar9 + 1] = "0123456789"[iVar2 % 10];
        uVar9 = uVar9 + 1;
        if (iVar2 / 10 < 1) {
          if (local_b0 == 1) {
            acStack_69[2] = 0x30;
            local_b0 = 2;
          }
          goto LAB_14f6e2d44;
        }
        iVar2 = iVar2 / 10;
      } while ((longlong)uVar9 < 0x14);
    }
    else {
LAB_14f6e2d44:
      iVar2 = (((param_6 - (uint)(local_b4 != 0)) - (uint)(0 < iVar5)) - iVar11) - iVar5;
      if (local_b8 == 1) {
        iVar2 = iVar2 + (-2 - local_b0);
      }
      iVar6 = 0;
      if (-1 < iVar5 - iVar7) {
        iVar6 = iVar5 - iVar7;
      }
      iVar7 = 0;
      if (-1 < iVar2) {
        iVar7 = iVar2;
      }
      iVar2 = -iVar7;
      if ((param_8 & 1) == 0) {
        iVar2 = iVar7;
      }
      if (((param_8 & 0x10) == 0) || (iVar2 < 1)) {
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          local_c8 = 0x20;
          iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
          if (iVar7 == 0) {
            return 0;
          }
        }
      }
      else {
        if (local_b4 != 0) {
          local_c8 = local_b4;
          iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
          if (iVar7 == 0) {
            return 0;
          }
          iVar2 = iVar2 + -1;
          local_b4 = 0;
        }
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          local_c8 = 0x30;
          iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
          if (iVar7 == 0) {
            return 0;
          }
        }
      }
      uVar9 = local_a0;
      if (local_b4 != 0) {
        local_c8 = local_b4;
        iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
        uVar9 = local_a0;
        if (iVar7 == 0) {
          return 0;
        }
      }
      do {
        if ((longlong)uVar9 < 1) {
          local_a0 = uVar9;
          if ((0 < iVar5) || ((param_8 & 8) != 0)) {
            local_c8 = 0x2e;
            iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
            if (iVar7 == 0) {
              return 0;
            }
            while (0 < (longlong)uVar10) {
              local_c8 = (uint)acStack_81[uVar10];
              uVar10 = uVar10 - 1;
              iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
              if (iVar7 == 0) {
                return 0;
              }
            }
          }
          for (; 0 < iVar6; iVar6 = iVar6 + -1) {
            local_c8 = 0x30;
            iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
            if (iVar7 == 0) {
              return 0;
            }
          }
          if (local_b8 == 1) {
            local_c8 = ~param_8 & 0x20 | 0x45;
            iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
            if (iVar7 == 0) {
              return 0;
            }
            if (local_ac < 0) {
              local_c8 = 0x2d;
              iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
            }
            else {
              local_c8 = 0x2b;
              iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
            }
            if (iVar7 == 0) {
              return 0;
            }
            lVar3 = (longlong)(int)local_b0;
            if (0 < (int)local_b0) {
              do {
                local_c8 = (uint)acStack_69[lVar3];
                lVar3 = lVar3 + -1;
                iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
                if (iVar7 == 0) {
                  return 0;
                }
              } while (0 < lVar3);
            }
          }
          while( true ) {
            if (-1 < iVar2) {
              return 1;
            }
            local_c8 = 0x20;
            iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
            if (iVar7 == 0) break;
            iVar2 = iVar2 + 1;
          }
          return 0;
        }
        local_a0 = uVar9 - 1;
        local_c8 = (uint)acStack_98[uVar9 - 1];
        iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
        uVar9 = local_a0;
      } while (iVar7 != 0);
    }
  }
  return 0;
}

// FUN_14f6e3030 @ 14f6e3030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f6e3030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,uint param_6,int param_7,int param_8,uint param_9)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_78;
  undefined4 local_74;
  char acStack_70 [32];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f6e3047;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_74 = 0;
  if (-1 < param_8) {
    local_74 = param_8;
  }
  if ((param_9 & 0x40) == 0) {
    if ((longlong)param_5 < 0) {
      param_5 = -param_5;
      local_78 = 0x2d;
    }
    else if ((param_9 & 2) == 0) {
      local_78 = 0;
      if ((param_9 & 4) != 0) {
        local_78 = 0x20;
      }
    }
    else {
      local_78 = 0x2b;
    }
  }
  pcVar6 = "";
  if ((param_9 & 8) != 0) {
    pcVar2 = "0";
    if (param_6 != 8) {
      pcVar2 = "";
    }
    pcVar6 = "0x";
    if (param_6 != 0x10) {
      pcVar6 = pcVar2;
    }
  }
  lVar4 = 0;
  pcVar2 = "0123456789abcdef";
  iVar7 = 0;
  if ((param_9 & 0x20) != 0) {
    pcVar2 = "0123456789ABCDEF";
    iVar7 = 0;
  }
  do {
    iVar3 = iVar7;
    iVar7 = iVar3 + 1;
    acStack_70[lVar4] = pcVar2[param_5 % (ulonglong)param_6];
    lVar4 = lVar4 + 1;
    if (param_5 / param_6 == 0) break;
    param_5 = param_5 / param_6;
  } while (lVar4 < 0x1a);
  if (iVar7 != 0x1a) {
    iVar3 = iVar7;
  }
  uVar5 = (ulonglong)iVar3;
  if (uVar5 < 0x1a) {
    acStack_70[uVar5] = '\0';
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar6[lVar4] != '\0');
    iVar7 = iVar3;
    if (iVar3 <= local_74) {
      iVar7 = local_74;
    }
    iVar8 = 0;
    if (-1 < local_74 - iVar3) {
      iVar8 = local_74 - iVar3;
    }
    iVar3 = ((param_7 - iVar7) - (uint)(local_78 != 0)) - (int)lVar4;
    iVar7 = 0;
    if (-1 < iVar3) {
      iVar7 = iVar3;
    }
    if ((param_9 & 0x10) != 0) {
      if (iVar7 <= iVar8) {
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      iVar7 = 0;
    }
    iVar3 = -iVar7;
    if ((param_9 & 1) == 0) {
      iVar3 = iVar7;
    }
    for (; 0 < iVar3; iVar3 = iVar3 + -1) {
      local_88 = 0x20;
      iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
      if (iVar7 == 0) {
        return 0;
      }
    }
    if ((local_78 == 0) ||
       (local_88 = local_78, iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4), iVar7 != 0)) {
      cVar1 = *pcVar6;
      while (cVar1 != '\0') {
        local_88 = (int)cVar1;
        iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
        if (iVar7 == 0) {
          return 0;
        }
        pcVar2 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar2;
      }
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        local_88 = 0x30;
        iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
        if (iVar7 == 0) {
          return 0;
        }
      }
      do {
        if ((longlong)uVar5 < 1) {
          while( true ) {
            if (-1 < iVar3) {
              return 1;
            }
            local_88 = 0x20;
            iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
            if (iVar7 == 0) break;
            iVar3 = iVar3 + 1;
          }
          return 0;
        }
        local_88 = (int)acStack_70[uVar5 - 1];
        uVar5 = uVar5 - 1;
        iVar7 = FUN_14f6e2840(param_1,param_2,param_3,param_4);
      } while (iVar7 != 0);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}

// FUN_14f6e3310 @ 14f6e3310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6e3310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char *param_5,uint param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6e3334;
  lVar3 = (longlong)param_8;
  iVar1 = 0;
  pcVar6 = "<NULL>";
  if (param_5 != (char *)0x0) {
    pcVar6 = param_5;
  }
  if (param_8 < 0) {
    lVar3 = -1;
  }
  lVar3 = OPENSSL_strnlen(pcVar6,lVar3);
  iVar5 = param_7 - (int)lVar3;
  if ((param_7 < 0) || (iVar5 < 0)) {
    iVar5 = 0;
  }
  iVar2 = param_8;
  if (-1 < param_8) {
    iVar2 = 0x7fffffff;
    if (param_8 < 0x7fffffff - iVar5) {
      iVar2 = iVar5 + param_8;
    }
  }
  iVar4 = -iVar5;
  if ((param_6 & 1) == 0) {
    iVar4 = iVar5;
  }
  for (; (0 < iVar4 && ((iVar2 < 0 || (iVar1 < iVar2)))); iVar1 = iVar1 + 1) {
    iVar5 = FUN_14f6e2840(param_1,param_2,param_3,param_4,0x20,uVar7);
    if (iVar5 == 0) {
      return 0;
    }
    iVar4 = iVar4 + -1;
  }
  for (; (lVar3 != 0 && ((iVar2 < 0 || (iVar1 < iVar2)))); iVar1 = iVar1 + 1) {
    iVar5 = FUN_14f6e2840(param_1,param_2,param_3,param_4,(int)*pcVar6,uVar7);
    pcVar6 = pcVar6 + 1;
    if (iVar5 == 0) {
      return 0;
    }
    lVar3 = lVar3 + -1;
  }
  for (; (iVar4 < 0 && ((iVar2 < 0 || (iVar1 < iVar2)))); iVar1 = iVar1 + 1) {
    iVar5 = FUN_14f6e2840(param_1,param_2,param_3,param_4,0x20,uVar7);
    if (iVar5 == 0) {
      return 0;
    }
    iVar4 = iVar4 + 1;
  }
  return 1;
}

