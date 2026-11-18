// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// ASN1_STRING_TABLE_add @ 14f76b670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASN1_STRING_TABLE_add(undefined8 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f76b685;
  lVar1 = FUN_14f76bb60();
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x81,0x41,"crypto\\asn1\\a_strnid.c",0xbe,uVar2);
    return 0;
  }
  if (-1 < param_2) {
    *(int *)(lVar1 + 4) = param_2;
  }
  if (-1 < param_3) {
    *(int *)(lVar1 + 8) = param_3;
  }
  if (param_4 != 0) {
    *(int *)(lVar1 + 0xc) = param_4;
  }
  if (param_5 != 0) {
    *(uint *)(lVar1 + 0x10) = param_5 | 1;
  }
  return 1;
}

// ASN1_STRING_TABLE_cleanup @ 14f76b710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_TABLE_cleanup(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1553e3018;
  if (DAT_1553e3018 != 0) {
    DAT_1553e3018 = 0;
    OPENSSL_sk_pop_free(lVar1,FUN_14f76bb20);
    return;
  }
  return;
}

// ASN1_STRING_TABLE_get @ 14f76b750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ASN1_STRING_TABLE_get(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_28 [6];
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f76b75a;
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28[0] = param_1;
  if (DAT_1553e3018 != 0) {
    iVar1 = OPENSSL_sk_find(DAT_1553e3018,local_28);
    if (-1 < iVar1) {
      OPENSSL_sk_value(DAT_1553e3018,iVar1);
      return;
    }
  }
  local_38 = &LAB_14f76bcc0;
  OBJ_bsearch_(local_28,&DAT_1534d86f0,0x1b);
  return;
}

// ASN1_STRING_set_by_NID @ 14f76b800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASN1_STRING_set_by_NID
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x14f76b81a;
  local_res8 = 0;
  puVar4 = &local_res8;
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = param_1;
  }
  lVar2 = ASN1_STRING_TABLE_get(param_5);
  if (lVar2 == 0) {
    iVar1 = ASN1_mbstring_copy(puVar4,param_2,param_3,param_4,DAT_154df99f0 & 0x2806);
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0xc);
    if ((*(byte *)(lVar2 + 0x10) & 2) == 0) {
      uVar3 = uVar3 & DAT_154df99f0;
    }
    iVar1 = ASN1_mbstring_ncopy(puVar4,param_2,param_3,param_4,uVar3,*(undefined4 *)(lVar2 + 4),
                                *(undefined4 *)(lVar2 + 8),uVar5);
  }
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}

// ASN1_STRING_set_default_mask_asc @ 14f76b8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_STRING_set_default_mask_asc(char *param_1)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *local_res10 [3];
  
  iVar1 = strncmp(param_1,"MASK:",5);
  if (iVar1 == 0) {
    if ((param_1[5] == '\0') ||
       (uVar2 = strtoul(param_1 + 5,local_res10,0), *local_res10[0] != '\0')) {
      return 0;
    }
  }
  else {
    lVar4 = 0;
    lVar5 = lVar4;
    while (lVar3 = lVar5, lVar5 = lVar4, param_1[lVar3] == "nombstr"[lVar3]) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        DAT_154df99f0 = 0xffffd7ff;
        return (int)lVar3 + -6;
      }
    }
    while (lVar3 = lVar5, param_1[lVar3] == (&s_pkix)[lVar3]) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        DAT_154df99f0 = 0xfffffffb;
        return (int)lVar3 + -3;
      }
    }
    iVar1 = strcmp(param_1,"utf8only");
    if (iVar1 == 0) {
      DAT_154df99f0 = 0x2000;
      return 1;
    }
    do {
      lVar5 = lVar4 + 1;
      if (param_1[lVar4] != "default"[lVar4]) {
        return 0;
      }
      lVar4 = lVar5;
    } while (lVar5 != 8);
    uVar2 = 0xffffffff;
  }
  DAT_154df99f0 = uVar2;
  return 1;
}

// FUN_14f76ba30 @ 14f76ba30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76ba30(void)

{
  OBJ_bsearch_();
  return;
}

// FUN_14f76ba60 @ 14f76ba60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76ba60(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f76ba80 @ 14f76ba80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76ba80(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f76baa0 @ 14f76baa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76baa0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f76bac0 @ 14f76bac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76bac0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f76bae0 @ 14f76bae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76bae0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f76bb20 @ 14f76bb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76bb20(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    CRYPTO_free(param_1,"crypto\\asn1\\a_strnid.c",0xda);
    return;
  }
  return;
}

// FUN_14f76bb60 @ 14f76bb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_14f76bb60(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f76bb6c;
  if (DAT_1553e3018 == 0) {
    DAT_1553e3018 = OPENSSL_sk_new(&LAB_14f76bb00);
    if (DAT_1553e3018 == 0) {
      return (undefined4 *)0x0;
    }
  }
  puVar2 = (undefined4 *)ASN1_STRING_TABLE_get(param_1);
  if ((puVar2 == (undefined4 *)0x0) || (puVar3 = puVar2, (*(byte *)(puVar2 + 4) & 1) == 0)) {
    puVar3 = (undefined4 *)CRYPTO_zalloc(0x14,"crypto\\asn1\\a_strnid.c",0x9f);
    if (puVar3 == (undefined4 *)0x0) {
      ERR_put_error(0xd,0x8a,0x41,"crypto\\asn1\\a_strnid.c",0xa0,uVar4);
      return (undefined4 *)0x0;
    }
    iVar1 = OPENSSL_sk_push(DAT_1553e3018,puVar3);
    if (iVar1 == 0) {
      CRYPTO_free(puVar3,"crypto\\asn1\\a_strnid.c",0xa4);
      return (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      puVar3[4] = puVar2[4] | 1;
      return puVar3;
    }
    *puVar3 = param_1;
    *(undefined8 *)(puVar3 + 1) = 0xffffffffffffffff;
    puVar3[4] = 1;
  }
  return puVar3;
}

