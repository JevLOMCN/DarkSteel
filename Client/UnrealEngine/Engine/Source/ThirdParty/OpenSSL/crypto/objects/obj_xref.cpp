// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// OBJ_add_sigid @ 14f703270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OBJ_add_sigid(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f703285;
  if ((DAT_1553e2eb8 == 0) && (DAT_1553e2eb8 = OPENSSL_sk_new(&LAB_14f703640), DAT_1553e2eb8 == 0))
  {
    return 0;
  }
  if ((DAT_1553e2ec0 == 0) && (DAT_1553e2ec0 = OPENSSL_sk_new(&LAB_14f703660), DAT_1553e2ec0 == 0))
  {
    return 0;
  }
  puVar3 = (undefined4 *)CRYPTO_malloc(0xc,"crypto\\objects\\obj_xref.c");
  lVar1 = DAT_1553e2eb8;
  if (puVar3 == (undefined4 *)0x0) {
    ERR_put_error(8,0x6b,0x41,"crypto\\objects\\obj_xref.c",0x6b,uVar4);
  }
  else {
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    iVar2 = OPENSSL_sk_push(lVar1,puVar3);
    if (iVar2 == 0) {
      CRYPTO_free(puVar3,"crypto\\objects\\obj_xref.c",0x73);
    }
    else {
      iVar2 = OPENSSL_sk_push(DAT_1553e2ec0,puVar3);
      if (iVar2 != 0) {
        OPENSSL_sk_sort(DAT_1553e2eb8);
        OPENSSL_sk_sort(DAT_1553e2ec0);
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f7033b0 @ 14f7033b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7033b0(void)

{
  OBJ_bsearch_();
  return;
}

// FUN_14f7033e0 @ 14f7033e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7033e0(void)

{
  OBJ_bsearch_();
  return;
}

// OBJ_find_sigid_algs @ 14f703410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 OBJ_find_sigid_algs(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_28 [4];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f703420;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28[0] = param_1;
  if (DAT_1553e2eb8 != 0) {
    uVar1 = OPENSSL_sk_find(DAT_1553e2eb8,local_28);
    lVar2 = OPENSSL_sk_value(DAT_1553e2eb8,uVar1);
    if (lVar2 != 0) goto LAB_14f703497;
  }
  local_38 = &LAB_14f703630;
  lVar2 = OBJ_bsearch_(local_28,&DAT_1534b2950,0x30);
  if (lVar2 == 0) {
    return 0;
  }
LAB_14f703497:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  return 1;
}

// OBJ_find_sigid_by_algs @ 14f7034d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 OBJ_find_sigid_by_algs(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 *local_28;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28 = local_20;
  local_1c = param_2;
  local_18 = param_3;
  if (DAT_1553e2ec0 != 0) {
    iVar1 = OPENSSL_sk_find(DAT_1553e2ec0,local_20);
    if (-1 < iVar1) {
      local_28 = (undefined1 *)OPENSSL_sk_value(DAT_1553e2ec0,iVar1);
      ppuVar2 = &local_28;
      goto LAB_14f703536;
    }
  }
  local_38 = &LAB_14f703680;
  ppuVar2 = (undefined1 **)OBJ_bsearch_(&local_28,&PTR_DAT_1534b2b90,0x2b);
  if (ppuVar2 == (undefined1 **)0x0) {
    return 0;
  }
LAB_14f703536:
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar2;
  }
  return 1;
}

// OBJ_sigid_free @ 14f7035a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_sigid_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_sk_pop_free(DAT_1553e2eb8,FUN_14f7035f0,param_3,param_4,0x14f7035aa);
  DAT_1553e2eb8 = 0;
  OPENSSL_sk_free(DAT_1553e2ec0);
  DAT_1553e2ec0 = 0;
  return;
}

// FUN_14f7035f0 @ 14f7035f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7035f0(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\objects\\obj_xref.c",0x82);
  return;
}

// FUN_14f7036a0 @ 14f7036a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7036a0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f7036c0 @ 14f7036c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7036c0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f7036e0 @ 14f7036e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7036e0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f703700 @ 14f703700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703700(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f703720 @ 14f703720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703720(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f703740 @ 14f703740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703740(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f703760 @ 14f703760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703760(void)

{
  OPENSSL_sk_value();
  return;
}

