// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f6c8290 @ 14f6c8290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6c8290(longlong param_1,void *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = 0;
  iVar4 = 0;
  if ((param_2 == (void *)0x0) || (param_3 < 1)) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  BIO_clear_flags(param_1,0xf);
  iVar8 = (*(int *)(lVar2 + 4) - *(int *)(lVar2 + 0x24)) - *(int *)(lVar2 + 0x20);
  if (iVar8 < param_3) {
    do {
      if (*(int *)(lVar2 + 0x20) != 0) {
        if (0 < iVar8) {
          memcpy((void *)((longlong)(*(int *)(lVar2 + 0x24) + *(int *)(lVar2 + 0x20)) +
                         *(longlong *)(lVar2 + 0x18)),param_2,(longlong)iVar8);
          param_2 = (void *)((longlong)param_2 + (longlong)iVar8);
          param_3 = param_3 - iVar8;
          uVar7 = (ulonglong)(uint)((int)uVar7 + iVar8);
          *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + iVar8;
        }
        do {
          uVar6 = (uint)uVar7;
          uVar3 = BIO_write(*(undefined8 *)(param_1 + 0x40),
                            (longlong)*(int *)(lVar2 + 0x24) + *(longlong *)(lVar2 + 0x18),
                            *(undefined4 *)(lVar2 + 0x20));
          uVar5 = (ulonglong)uVar3;
          if ((int)uVar3 < 1) {
            BIO_copy_next_retry(param_1);
            if ((int)uVar3 < 0) goto LAB_14f6c8423;
            if (uVar3 == 0) {
              return uVar7;
            }
          }
          *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + uVar3;
          piVar1 = (int *)(lVar2 + 0x20);
          *piVar1 = *piVar1 - uVar3;
        } while (*piVar1 != 0);
      }
      *(undefined4 *)(lVar2 + 0x24) = 0;
      if (*(int *)(lVar2 + 4) <= param_3) {
        do {
          uVar6 = (uint)uVar7;
          iVar4 = BIO_write(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
          uVar5 = (ulonglong)iVar4;
          if (iVar4 < 1) {
            BIO_copy_next_retry(param_1);
            if (iVar4 < 0) {
LAB_14f6c8423:
              if ((int)uVar6 < 1) {
                return uVar5 & 0xffffffff;
              }
              return (ulonglong)uVar6;
            }
            if (iVar4 == 0) {
              return uVar7;
            }
          }
          uVar7 = (ulonglong)(uVar6 + iVar4);
          param_2 = (void *)((longlong)param_2 + uVar5);
          param_3 = param_3 - iVar4;
          if (param_3 == 0) {
            return uVar7;
          }
        } while (*(int *)(lVar2 + 4) <= param_3);
      }
      iVar4 = (int)uVar7;
      iVar8 = (*(int *)(lVar2 + 4) - *(int *)(lVar2 + 0x24)) - *(int *)(lVar2 + 0x20);
    } while (iVar8 < param_3);
  }
  memcpy((void *)((longlong)(*(int *)(lVar2 + 0x24) + *(int *)(lVar2 + 0x20)) +
                 *(longlong *)(lVar2 + 0x18)),param_2,(longlong)param_3);
  *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + param_3;
  return (ulonglong)(uint)(iVar4 + param_3);
}

// FUN_14f6c8460 @ 14f6c8460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6c8460(longlong param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if ((piVar1 == (int *)0x0) || (*(longlong *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  iVar3 = 0;
  BIO_clear_flags(param_1,0xf);
  while( true ) {
    iVar2 = piVar1[4];
    if (iVar2 != 0) {
      if (param_3 < iVar2) {
        iVar2 = param_3;
      }
      memcpy(param_2,(void *)((longlong)piVar1[5] + *(longlong *)(piVar1 + 2)),(longlong)iVar2);
      piVar1[5] = piVar1[5] + iVar2;
      iVar3 = iVar3 + iVar2;
      piVar1[4] = piVar1[4] - iVar2;
      if (param_3 == iVar2) {
        return iVar3;
      }
      param_3 = param_3 - iVar2;
      param_2 = (void *)((longlong)param_2 + (longlong)iVar2);
    }
    if (*piVar1 < param_3) break;
    iVar2 = BIO_read(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(piVar1 + 2));
    if (iVar2 < 1) {
      BIO_copy_next_retry(param_1);
      if (iVar2 < 0) {
        if (iVar3 < 1) {
          return iVar2;
        }
        return iVar3;
      }
      if (iVar2 == 0) {
        return iVar3;
      }
    }
    piVar1[5] = 0;
    piVar1[4] = iVar2;
  }
  do {
    iVar2 = BIO_read(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    if (iVar2 < 1) {
      BIO_copy_next_retry(param_1);
      if (iVar2 < 0) {
        if (0 < iVar3) {
          iVar2 = iVar3;
        }
        return iVar2;
      }
      if (iVar2 == 0) {
        return iVar3;
      }
    }
    iVar3 = iVar3 + iVar2;
    if (param_3 == iVar2) {
      return iVar3;
    }
    param_2 = (void *)((longlong)param_2 + (longlong)iVar2);
    param_3 = param_3 - iVar2;
  } while( true );
}

// FUN_14f6c85d0 @ 14f6c85d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c85d0(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  FUN_14f6c8290(param_1,param_2,uVar3 & 0x7fffffff);
  return;
}

// FUN_14f6c8620 @ 14f6c8620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6c8620(longlong param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  param_3 = param_3 + -1;
  iVar7 = 0;
  BIO_clear_flags(param_1,0xf);
  do {
    while ((int)puVar1[4] < 1) {
      iVar4 = BIO_read(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(puVar1 + 2),*puVar1);
      if (iVar4 < 1) {
        BIO_copy_next_retry(param_1);
        *param_2 = '\0';
        if (iVar4 < 0) {
          if (iVar7 < 1) {
            return iVar4;
          }
          return iVar7;
        }
        if (iVar4 == 0) {
          return iVar7;
        }
      }
      puVar1[4] = iVar4;
      puVar1[5] = 0;
    }
    iVar4 = puVar1[5];
    lVar2 = *(longlong *)(puVar1 + 2);
    iVar6 = 0;
    bVar3 = false;
    if (0 < (int)puVar1[4]) {
      pcVar5 = (char *)(iVar4 + lVar2);
      do {
        bVar3 = false;
        if ((longlong)param_3 <= (longlong)pcVar5 - (iVar4 + lVar2)) break;
        iVar6 = iVar6 + 1;
        *param_2 = *pcVar5;
        param_2 = param_2 + 1;
        if (*pcVar5 == '\n') {
          bVar3 = true;
          break;
        }
        pcVar5 = pcVar5 + 1;
        bVar3 = false;
      } while (iVar6 < (int)puVar1[4]);
    }
    puVar1[4] = puVar1[4] - iVar6;
    iVar7 = iVar7 + iVar6;
    puVar1[5] = puVar1[5] + iVar6;
    param_3 = param_3 - iVar6;
    if ((bVar3) || (param_3 == 0)) {
      *param_2 = '\0';
      return iVar7;
    }
  } while( true );
}

// FUN_14f6c8740 @ 14f6c8740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6c8740(longlong param_1,ulonglong param_2,int param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  size_t _Size;
  undefined1 local_res10 [8];
  
  piVar2 = *(int **)(param_1 + 0x38);
  _Size = (size_t)param_3;
  switch((int)param_2) {
  case 1:
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
  default:
switchD_14f6c87a0_caseD_4:
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (lVar5 == 0) {
LAB_14f6c87b9:
      param_3 = 0;
    }
    else {
LAB_14f6c880a:
      param_3 = BIO_ctrl(lVar5,param_2,param_3,param_4);
    }
    break;
  case 2:
    if (0 < piVar2[4]) goto LAB_14f6c87b9;
LAB_14f6c8a59:
    lVar5 = *(longlong *)(param_1 + 0x40);
    goto LAB_14f6c880a;
  case 3:
    param_3 = piVar2[8];
    break;
  case 10:
    iVar4 = piVar2[4];
    goto LAB_14f6c87fd;
  case 0xb:
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (lVar5 != 0) {
      if (0 < piVar2[8]) {
        BIO_clear_flags(param_1,0xf);
        iVar4 = piVar2[8];
        while (0 < iVar4) {
          iVar4 = BIO_write(*(undefined8 *)(param_1 + 0x40),
                            (longlong)piVar2[9] + *(longlong *)(piVar2 + 6),piVar2[8]);
          BIO_copy_next_retry(param_1);
          if (iVar4 < 1) {
            return iVar4;
          }
          piVar2[9] = piVar2[9] + iVar4;
          piVar2[8] = piVar2[8] - iVar4;
          BIO_clear_flags(param_1,0xf);
          iVar4 = piVar2[8];
        }
        piVar2[8] = 0;
        piVar2[9] = 0;
        param_2 = param_2 & 0xffffffff;
        goto LAB_14f6c8a59;
      }
      goto LAB_14f6c880a;
    }
    goto LAB_14f6c87b9;
  case 0xc:
    iVar4 = BIO_int_ctrl(param_4,0x75,*piVar2);
    if ((iVar4 == 0) || (iVar4 = BIO_int_ctrl(param_4,0x75,piVar2[1],1), param_3 = 1, iVar4 == 0)) {
      param_3 = 0;
    }
    break;
  case 0xd:
    iVar4 = piVar2[8];
LAB_14f6c87fd:
    if (iVar4 != 0) {
      return iVar4;
    }
    goto switchD_14f6c87a0_caseD_4;
  case 0x1d:
    FUN_14f6c8460(param_1,local_res10,0);
    if (piVar2[4] < param_3) {
      param_3 = piVar2[4];
    }
    memcpy(param_4,(void *)((longlong)piVar2[5] + *(longlong *)(piVar2 + 2)),(longlong)param_3);
    break;
  case 0x65:
    if (*(longlong *)(param_1 + 0x40) != 0) {
      BIO_clear_flags(param_1,0xf);
      iVar4 = BIO_ctrl(*(undefined8 *)(param_1 + 0x40),param_2 & 0xffffffff,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return iVar4;
    }
    goto LAB_14f6c87b9;
  case 0x74:
    iVar4 = 0;
    param_3 = 0;
    if (0 < piVar2[4]) {
      uVar8 = (ulonglong)(uint)piVar2[4];
      pcVar7 = (char *)(*(longlong *)(piVar2 + 2) + (longlong)piVar2[5]);
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        iVar3 = iVar4 + 1;
        if (cVar1 != '\n') {
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        uVar8 = uVar8 - 1;
        param_3 = iVar4;
      } while (uVar8 != 0);
    }
    break;
  case 0x75:
    iVar4 = param_3;
    if (param_4 != (int *)0x0) {
      if (*param_4 == 0) {
        iVar4 = piVar2[1];
      }
      else {
        param_3 = *piVar2;
      }
    }
    lVar5 = *(longlong *)(piVar2 + 2);
    lVar6 = *(longlong *)(piVar2 + 6);
    if (((param_3 < 0x1001) || (param_3 == *piVar2)) ||
       (lVar5 = CRYPTO_malloc(_Size,"crypto\\bio\\bf_buff.c",0x141), lVar5 != 0)) {
      if (((iVar4 < 0x1001) || (iVar4 == piVar2[1])) ||
         (lVar6 = CRYPTO_malloc(_Size,"crypto\\bio\\bf_buff.c",0x146), lVar6 != 0)) {
        if (*(longlong *)(piVar2 + 2) != lVar5) {
          CRYPTO_free(*(longlong *)(piVar2 + 2),"crypto\\bio\\bf_buff.c",0x14e);
          *(longlong *)(piVar2 + 2) = lVar5;
          piVar2[4] = 0;
          piVar2[5] = 0;
          *piVar2 = param_3;
        }
        if (*(longlong *)(piVar2 + 6) == lVar6) {
          return 1;
        }
        CRYPTO_free(*(longlong *)(piVar2 + 6),"crypto\\bio\\bf_buff.c",0x155);
        *(longlong *)(piVar2 + 6) = lVar6;
        piVar2[8] = 0;
        piVar2[9] = 0;
        piVar2[1] = iVar4;
        return 1;
      }
      if (lVar5 != *(longlong *)(piVar2 + 2)) {
        CRYPTO_free(lVar5,"crypto\\bio\\bf_buff.c",0x149);
      }
    }
LAB_14f6c892b:
    ERR_put_error(0x20,0x72,0x41,"crypto\\bio\\bf_buff.c",0x197);
    param_3 = 0;
    break;
  case 0x7a:
    if (*piVar2 < param_3) {
      lVar5 = CRYPTO_malloc(_Size,"crypto\\bio\\bf_buff.c",0x124);
      if (lVar5 == 0) goto LAB_14f6c892b;
      CRYPTO_free(*(undefined8 *)(piVar2 + 2),"crypto\\bio\\bf_buff.c",0x127);
      *(longlong *)(piVar2 + 2) = lVar5;
    }
    piVar2[5] = 0;
    piVar2[4] = param_3;
    memcpy(*(void **)(piVar2 + 2),param_4,_Size);
    param_3 = 1;
  }
  return param_3;
}

// FUN_14f6c8b90 @ 14f6c8b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c8b90(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x28,"crypto\\bio\\bf_buff.c",0x31);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    lVar2 = CRYPTO_malloc(0x1000,"crypto\\bio\\bf_buff.c",0x36);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      puVar1[1] = 0x1000;
      lVar2 = CRYPTO_malloc(0x1000,"crypto\\bio\\bf_buff.c",0x3c);
      *(longlong *)(puVar1 + 6) = lVar2;
      if (lVar2 == 0) {
        CRYPTO_free(*(undefined8 *)(puVar1 + 2),"crypto\\bio\\bf_buff.c",0x3e);
        CRYPTO_free(puVar1,"crypto\\bio\\bf_buff.c",0x3f);
        return 0;
      }
      *(undefined4 **)(param_1 + 0x38) = puVar1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return 1;
    }
    CRYPTO_free(puVar1,"crypto\\bio\\bf_buff.c",0x38);
  }
  return 0;
}

// FUN_14f6c8c90 @ 14f6c8c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c8c90(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  CRYPTO_free(*(undefined8 *)(lVar1 + 8),"crypto\\bio\\bf_buff.c",0x50);
  CRYPTO_free(*(undefined8 *)(lVar1 + 0x18),"crypto\\bio\\bf_buff.c",0x51);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x38),"crypto\\bio\\bf_buff.c",0x52);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}

// FUN_14f6c8d20 @ 14f6c8d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c8d20(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return 0;
  }
  uVar1 = BIO_callback_ctrl();
  return uVar1;
}

// BIO_f_buffer @ 14f6c8d50

undefined * BIO_f_buffer(void)

{
  return &DAT_15348d070;
}

