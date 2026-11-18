// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// FUN_14f6a71b0 @ 14f6a71b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6a71b0(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  iVar6 = -1;
  if (param_2 == (void *)0x0) {
    ERR_put_error(0x20,0x75,0x73,"crypto\\bio\\bss_mem.c",0xe0,0x14f6a71c8);
  }
  else if ((*(uint *)(param_1 + 0x28) & 0x200) == 0) {
    BIO_clear_flags(param_1,0xf);
    if (param_3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar1 = *(int *)plVar2[1];
      FUN_14f6a7970(param_1);
      lVar7 = BUF_MEM_grow_clean(*plVar2,(longlong)(iVar1 + param_3));
      if (lVar7 != 0) {
        memcpy((void *)((longlong)iVar1 + *(longlong *)(*plVar2 + 8)),param_2,(longlong)param_3);
        puVar3 = (undefined8 *)*plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        uVar5 = puVar3[1];
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        uVar5 = puVar3[3];
        puVar4[2] = puVar3[2];
        puVar4[3] = uVar5;
        iVar6 = param_3;
      }
    }
  }
  else {
    ERR_put_error(0x20,0x75,0x7e,"crypto\\bio\\bss_mem.c",0xe4,0x14f6a71c8);
    iVar6 = -1;
  }
  return iVar6;
}

// FUN_14f6a72c0 @ 14f6a72c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6a72c0(longlong param_1,void *param_2,int param_3)

{
  size_t _Size;
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(*(undefined8 **)(param_1 + 0x38))[1];
  if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
    puVar1 = (ulonglong *)**(undefined8 **)(param_1 + 0x38);
  }
  BIO_clear_flags(param_1,0xf);
  if ((-1 < param_3) && (*puVar1 < (ulonglong)(longlong)param_3)) {
    param_3 = (int)*puVar1;
  }
  if ((param_2 == (void *)0x0) || (param_3 < 1)) {
    if ((*puVar1 == 0) && (param_3 = *(int *)(param_1 + 0x30), param_3 != 0)) {
      BIO_set_flags(param_1,9);
    }
  }
  else {
    _Size = (size_t)param_3;
    memcpy(param_2,(void *)puVar1[1],_Size);
    *puVar1 = *puVar1 - _Size;
    puVar1[2] = puVar1[2] - _Size;
    puVar1[1] = puVar1[1] + _Size;
  }
  return param_3;
}

// FUN_14f6a7380 @ 14f6a7380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a7380(undefined8 param_1,char *param_2)

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
  FUN_14f6a71b0(param_1,param_2,uVar3 & 0x7fffffff);
  return;
}

// FUN_14f6a73d0 @ 14f6a73d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6a73d0(longlong param_1,undefined1 *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  size_t _Size;
  ulonglong *puVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(undefined8 **)(param_1 + 0x38))[1];
  if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
    piVar5 = (int *)**(undefined8 **)(param_1 + 0x38);
  }
  BIO_clear_flags(param_1,0xf);
  iVar3 = *piVar5;
  if (param_3 + -1 < *piVar5) {
    iVar3 = param_3 + -1;
  }
  if (iVar3 < 1) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = uVar2;
    if (0 < (longlong)iVar3) {
      do {
        uVar1 = (ulonglong)((int)uVar1 + 1);
        if (*(char *)(uVar2 + *(longlong *)(piVar5 + 2)) == '\n') break;
        uVar2 = uVar2 + 1;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
    puVar4 = (ulonglong *)(*(undefined8 **)(param_1 + 0x38))[1];
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      puVar4 = (ulonglong *)**(undefined8 **)(param_1 + 0x38);
    }
    BIO_clear_flags(param_1,0xf);
    if ((-1 < (int)uVar1) && (*puVar4 < (ulonglong)(longlong)(int)uVar1)) {
      uVar1 = (ulonglong)(uint)*puVar4;
    }
    if ((param_2 == (undefined1 *)0x0) || ((int)uVar1 < 1)) {
      if (*puVar4 == 0) {
        uVar1 = (ulonglong)*(uint *)(param_1 + 0x30);
        if (*(uint *)(param_1 + 0x30) == 0) {
          return 0;
        }
        BIO_set_flags(param_1,9);
      }
    }
    else {
      _Size = (size_t)(int)uVar1;
      memcpy(param_2,(void *)puVar4[1],_Size);
      *puVar4 = *puVar4 - _Size;
      puVar4[2] = puVar4[2] - _Size;
      puVar4[1] = puVar4[1] + _Size;
    }
    if (0 < (int)uVar1) {
      param_2[(int)uVar1] = 0;
    }
  }
  return uVar1;
}

// FUN_14f6a74f0 @ 14f6a74f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6a74f0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  
  uVar8 = 1;
  uVar7 = 1;
  plVar1 = *(longlong **)(param_1 + 0x38);
  uVar9 = *(uint *)(param_1 + 0x28) & 0x200;
  if (uVar9 == 0) {
    puVar10 = (uint *)plVar1[1];
  }
  else {
    puVar10 = (uint *)*plVar1;
  }
  switch(param_2) {
  case 1:
    puVar2 = (undefined8 *)*plVar1;
    uVar8 = uVar7;
    if ((void *)puVar2[1] != (void *)0x0) {
      if (uVar9 == 0) {
        if ((*(uint *)(param_1 + 0x28) >> 10 & 1) == 0) {
          memset((void *)puVar2[1],0,puVar2[2]);
          *puVar2 = 0;
        }
        puVar2 = (undefined8 *)*plVar1;
        puVar3 = (undefined8 *)plVar1[1];
        uVar5 = puVar2[1];
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        uVar5 = puVar2[3];
        puVar3[2] = puVar2[2];
        puVar3[3] = uVar5;
      }
      else {
        puVar3 = (undefined8 *)plVar1[1];
        uVar5 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = uVar5;
        uVar5 = puVar3[3];
        puVar2[2] = puVar3[2];
        puVar2[3] = uVar5;
      }
    }
    break;
  case 2:
    uVar8 = (uint)(*(longlong *)puVar10 == 0);
    break;
  case 3:
    uVar8 = *puVar10;
    if (param_4 != (longlong *)0x0) {
      *param_4 = *(longlong *)(puVar10 + 2);
    }
    break;
  default:
    uVar8 = 0;
    break;
  case 8:
    uVar8 = *(uint *)(param_1 + 0x24);
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    uVar8 = uVar7;
    break;
  case 10:
    uVar8 = *puVar10;
    break;
  case 0xb:
  case 0xc:
    break;
  case 0x72:
    FUN_14f6a7910(param_1);
    *(undefined4 *)(param_1 + 0x24) = param_3;
    plVar4 = (longlong *)plVar1[1];
    *plVar1 = (longlong)param_4;
    lVar6 = param_4[1];
    *plVar4 = *param_4;
    plVar4[1] = lVar6;
    lVar6 = param_4[3];
    plVar4[2] = param_4[2];
    plVar4[3] = lVar6;
    uVar8 = uVar7;
    break;
  case 0x73:
    if (param_4 != (longlong *)0x0) {
      if (uVar9 == 0) {
        FUN_14f6a7970(param_1);
      }
      *param_4 = *plVar1;
    }
    break;
  case 0x82:
    *(undefined4 *)(param_1 + 0x30) = param_3;
  }
  return uVar8;
}

// FUN_14f6a7710 @ 14f6a7710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a7710(undefined8 param_1)

{
  FUN_14f6a79f0(param_1,0);
  return;
}

// FUN_14f6a7730 @ 14f6a7730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a7730(undefined8 param_1)

{
  FUN_14f6a79f0(param_1,1);
  return;
}

// FUN_14f6a7750 @ 14f6a7750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a7750(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar1 != (longlong *)0x0)) {
    lVar2 = *plVar1;
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    BUF_MEM_free(lVar2);
  }
  CRYPTO_free(plVar1[1],"crypto\\bio\\bss_mem.c",0x9c);
  CRYPTO_free(plVar1,"crypto\\bio\\bss_mem.c",0x9d);
  return 1;
}

// BIO_new_mem_buf @ 14f6a77e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_new_mem_buf(char *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  
  if (param_1 == (char *)0x0) {
    ERR_put_error(0x20,0x7e,0x73,"crypto\\bio\\bss_mem.c",0x5e,0x14f6a77ec);
    return 0;
  }
  if (param_2 < 0) {
    cVar1 = *param_1;
    pcVar9 = param_1;
    for (uVar7 = 0; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    uVar10 = (ulonglong)(uVar7 & 0x7fffffff);
  }
  else {
    uVar10 = (ulonglong)param_2;
  }
  lVar8 = BIO_new(&DAT_153489cd0);
  if (lVar8 != 0) {
    plVar2 = *(longlong **)(lVar8 + 0x38);
    puVar3 = (ulonglong *)*plVar2;
    *puVar3 = uVar10;
    puVar3[2] = uVar10;
    puVar3[1] = (ulonglong)param_1;
    puVar4 = (undefined8 *)*plVar2;
    puVar5 = (undefined8 *)plVar2[1];
    uVar6 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar6;
    uVar6 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar6;
    *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) | 0x200;
    *(undefined4 *)(lVar8 + 0x30) = 0;
    return lVar8;
  }
  return 0;
}

// BIO_s_mem @ 14f6a78c0

undefined * BIO_s_mem(void)

{
  return &DAT_153489cd0;
}

// BIO_s_secmem @ 14f6a78d0

undefined * BIO_s_secmem(void)

{
  return &DAT_153489d30;
}

// FUN_14f6a7910 @ 14f6a7910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a7910(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) {
    lVar1 = **(longlong **)(param_1 + 0x38);
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    BUF_MEM_free(lVar1);
  }
  return 1;
}

// FUN_14f6a7970 @ 14f6a7970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a7970(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      _Src = (void *)((size_t *)plVar1[1])[1];
      if (_Src != *(void **)(*plVar1 + 8)) {
        memmove(*(void **)(*plVar1 + 8),_Src,*(size_t *)plVar1[1]);
        *(undefined8 *)*plVar1 = *(undefined8 *)plVar1[1];
        *(undefined8 *)(plVar1[1] + 8) = *(undefined8 *)(*plVar1 + 8);
      }
    }
    return 0;
  }
  return 0;
}

// FUN_14f6a79f0 @ 14f6a79f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a79f0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar3 = (longlong *)CRYPTO_zalloc(0x10,"crypto\\bio\\bss_mem.c",0x73);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = BUF_MEM_new_ex(param_2);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x20,"crypto\\bio\\bss_mem.c");
      plVar3[1] = (longlong)puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        BUF_MEM_free(*plVar3);
        CRYPTO_free(plVar3,"crypto\\bio\\bss_mem.c",0x7d);
        return 0;
      }
      puVar1 = (undefined8 *)*plVar3;
      uVar2 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      uVar2 = puVar1[3];
      puVar5[2] = puVar1[2];
      puVar5[3] = uVar2;
      *(longlong **)(param_1 + 0x38) = plVar3;
      *(undefined4 *)(param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return 1;
    }
    CRYPTO_free(plVar3,"crypto\\bio\\bss_mem.c",0x78);
  }
  return 0;
}

