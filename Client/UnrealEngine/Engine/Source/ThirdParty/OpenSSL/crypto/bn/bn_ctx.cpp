// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// BN_CTX_end @ 14f726140

void BN_CTX_end(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 4);
    if (uVar1 < *(uint *)(param_1 + 0x30)) {
      iVar3 = *(uint *)(param_1 + 0x30) - uVar1;
      uVar2 = *(int *)(param_1 + 0x18) - 1U & 0xf;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar3;
      while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        if (uVar2 == 0) {
          uVar2 = 0xf;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x180);
        }
        else {
          uVar2 = uVar2 - 1;
        }
      }
    }
    *(uint *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

// BN_CTX_free @ 14f7261c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_CTX_free(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x20),"crypto\\bn\\bn_ctx.c",0xfb);
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_14f7263d0(param_1);
    CRYPTO_free(param_1,"crypto\\bn\\bn_ctx.c",0xb2);
  }
  return;
}

// BN_CTX_get @ 14f726220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_CTX_get(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f72622c;
  if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
    lVar1 = FUN_14f726460(param_1,*(undefined4 *)(param_1 + 0x3c));
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      ERR_put_error(3,0x74,0x6d,"crypto\\bn\\bn_ctx.c",0xe3,uVar2);
      return 0;
    }
    BN_set_word(lVar1,0);
    *(uint *)(lVar1 + 0x14) = *(uint *)(lVar1 + 0x14) & 0xfffffffb;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    return lVar1;
  }
  return 0;
}

// BN_CTX_new @ 14f7262c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * BN_CTX_new(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x40,"crypto\\bn\\bn_ctx.c",0x8a);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(3,0x6a,0x41,"crypto\\bn\\bn_ctx.c",0x8b);
    return (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}

// BN_CTX_secure_new @ 14f726330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_CTX_secure_new(void)

{
  longlong lVar1;
  
  lVar1 = BN_CTX_new();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x3c) = 8;
  }
  return;
}

// BN_CTX_start @ 14f726360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_CTX_start(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f72636c;
  if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
    iVar1 = FUN_14f7266a0(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
    if (iVar1 == 0) {
      ERR_put_error(3,0x81,0x6d,"crypto\\bn\\bn_ctx.c",0xbd,uVar2);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return;
}

// FUN_14f7263d0 @ 14f7263d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7263d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while (lVar2 != 0) {
    plVar1 = (longlong *)*param_1;
    lVar2 = 0x10;
    do {
      if (*plVar1 != 0) {
        BN_clear_free(plVar1);
      }
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_1[1] = *(longlong *)(*param_1 + 0x188);
    CRYPTO_free(*param_1,"crypto\\bn\\bn_ctx.c",0x12f);
    lVar2 = param_1[1];
    *param_1 = lVar2;
  }
  return;
}

// FUN_14f726460 @ 14f726460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f726460(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f726471;
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 != *(uint *)((longlong)param_1 + 0x1c)) {
    if (uVar1 == 0) {
      param_1[1] = *param_1;
    }
    else if ((uVar1 & 0xf) == 0) {
      param_1[1] = *(longlong *)(param_1[1] + 0x188);
    }
    *(uint *)(param_1 + 3) = uVar1 + 1;
    return param_1[1] + (ulonglong)(uVar1 & 0xf) * 0x18;
  }
  lVar2 = CRYPTO_malloc(400,"crypto\\bn\\bn_ctx.c");
  if (lVar2 == 0) {
    ERR_put_error(3,0x93,0x41,"crypto\\bn\\bn_ctx.c",0x13f,uVar5);
    return 0;
  }
  lVar3 = 0x10;
  lVar4 = lVar2;
  do {
    bn_init(lVar4);
    if ((param_2 & 8) != 0) {
      BN_set_flags(lVar4,8);
    }
    lVar4 = lVar4 + 0x18;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar4 = param_1[2];
  *(undefined8 *)(lVar2 + 0x188) = 0;
  *(longlong *)(lVar2 + 0x180) = lVar4;
  if (*param_1 == 0) {
    *param_1 = lVar2;
  }
  else {
    *(longlong *)(param_1[2] + 0x188) = lVar2;
  }
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 0x10;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  return lVar2;
}

// FUN_14f726630 @ 14f726630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f726630(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"crypto\\bn\\bn_ctx.c",0xfb);
  *param_1 = 0;
  return;
}

// FUN_14f7266a0 @ 14f7266a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7266a0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  void *_Dst;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7266ba;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    if (iVar1 == 0) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = (uint)(iVar1 * 3) >> 1;
    }
    _Dst = (void *)CRYPTO_malloc((ulonglong)uVar2 << 2,"crypto\\bn\\bn_ctx.c",0x108);
    if (_Dst == (void *)0x0) {
      ERR_put_error(3,0x94,0x41,"crypto\\bn\\bn_ctx.c",0x109,uVar3);
      return 0;
    }
    if (*(uint *)(param_1 + 1) != 0) {
      memcpy(_Dst,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 1) << 2);
    }
    CRYPTO_free(*param_1,"crypto\\bn\\bn_ctx.c",0x10e);
    *param_1 = (longlong)_Dst;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 4) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

