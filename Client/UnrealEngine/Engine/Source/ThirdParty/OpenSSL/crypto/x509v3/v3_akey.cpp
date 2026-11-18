// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f7823a0 @ 14f7823a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7823a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong local_res18 [2];
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f7823ba;
  puVar1 = (undefined4 *)*param_2;
  local_res18[0] = param_3;
  if (puVar1 == (undefined4 *)0x0) {
LAB_14f78245c:
    lVar3 = local_res18[0];
    if ((param_2[1] == 0) || (lVar3 = i2v_GENERAL_NAMES(0), lVar3 != 0)) {
      local_res18[0] = lVar3;
      puVar1 = (undefined4 *)param_2[2];
      if (puVar1 == (undefined4 *)0x0) {
        return local_res18[0];
      }
      lVar3 = OPENSSL_buf2hexstr(*(undefined8 *)(puVar1 + 2),*puVar1);
      if (lVar3 == 0) {
        uVar5 = 0x45;
        uVar4 = 0x41;
        goto LAB_14f7824ea;
      }
      iVar2 = X509V3_add_value("serial",lVar3,local_res18);
      if (iVar2 != 0) {
        CRYPTO_free(lVar3,"crypto\\x509v3\\v3_akey.c",0x4d);
        return local_res18[0];
      }
      CRYPTO_free(lVar3,"crypto\\x509v3\\v3_akey.c",0x49);
      uVar5 = 0x4a;
    }
    else {
      uVar5 = 0x3d;
    }
  }
  else {
    lVar3 = OPENSSL_buf2hexstr(*(undefined8 *)(puVar1 + 2),*puVar1);
    if (lVar3 == 0) {
      ERR_put_error(0x22,0xad,0x41,"crypto\\x509v3\\v3_akey.c",0x30,uVar6);
      return 0;
    }
    iVar2 = X509V3_add_value(&s_keyid,lVar3,local_res18);
    if (iVar2 != 0) {
      CRYPTO_free(lVar3,"crypto\\x509v3\\v3_akey.c",0x38);
      goto LAB_14f78245c;
    }
    CRYPTO_free(lVar3,"crypto\\x509v3\\v3_akey.c",0x34);
    uVar5 = 0x35;
  }
  uVar4 = 0xb;
LAB_14f7824ea:
  ERR_put_error(0x22,0xad,uVar4,"crypto\\x509v3\\v3_akey.c",uVar5,uVar6);
  if (param_3 == 0) {
    OPENSSL_sk_pop_free(local_res18[0],X509V3_conf_free);
  }
  return 0;
}

// FUN_14f782560 @ 14f782560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f782560(undefined8 param_1,int *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  char cVar14;
  undefined4 uVar15;
  char cVar16;
  char cVar17;
  undefined4 uVar18;
  
  puVar10 = (undefined4 *)0x0;
  cVar16 = '\0';
  cVar14 = '\0';
  iVar2 = OPENSSL_sk_num(param_3);
  puVar6 = puVar10;
  cVar17 = '\0';
  if (0 < iVar2) {
LAB_14f7825a5:
    lVar3 = OPENSSL_sk_value(param_3,puVar6);
    puVar4 = puVar10;
    do {
      puVar12 = (undefined4 *)((longlong)puVar4 + 1);
      puVar11 = puVar10;
      if (*(char *)(*(longlong *)(lVar3 + 8) + (longlong)puVar4) != *(char *)(puVar4 + 0x54d2d93e))
      goto LAB_14f782613;
      puVar4 = puVar12;
    } while (puVar12 != (undefined4 *)&DAT_00000006);
    puVar4 = puVar10;
    cVar16 = '\x01';
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      do {
        puVar11 = (undefined4 *)((longlong)puVar4 + 1);
        if (*(char *)(*(longlong *)(lVar3 + 0x10) + (longlong)puVar4) !=
            *(char *)(puVar4 + 0x54d36b44)) goto LAB_14f782679;
        puVar4 = puVar11;
      } while (puVar11 != (undefined4 *)&DAT_00000007);
      cVar16 = '\x02';
    }
    goto LAB_14f782679;
  }
LAB_14f78268b:
  if (param_2 != (int *)0x0) {
    lVar3 = *(longlong *)(param_2 + 2);
    if (lVar3 != 0) {
      puVar6 = puVar10;
      if (cVar16 != '\0') {
        iVar2 = X509_get_ext_by_NID(lVar3,0x52);
        if ((-1 < iVar2) && (lVar5 = X509_get_ext(lVar3,iVar2), lVar5 != 0)) {
          puVar6 = (undefined4 *)X509V3_EXT_d2i(lVar5);
        }
        if ((cVar16 == '\x02') && (puVar6 == (undefined4 *)0x0)) {
          uVar18 = 0x90;
          uVar15 = 0x7b;
          goto LAB_14f782859;
        }
      }
      puVar11 = puVar10;
      puVar4 = puVar10;
      if (((cVar14 == '\0') || (puVar6 != (undefined4 *)0x0)) &&
         (puVar12 = puVar10, puVar8 = puVar10, cVar14 != '\x02')) {
LAB_14f7827c9:
        puVar9 = (undefined8 *)AUTHORITY_KEYID_new();
        if (puVar9 == (undefined8 *)0x0) goto LAB_14f782796;
        if (puVar8 == (undefined4 *)0x0) {
LAB_14f78280f:
          puVar9[1] = puVar11;
          puVar9[2] = puVar12;
          *puVar9 = puVar6;
          return puVar9;
        }
        puVar11 = (undefined4 *)OPENSSL_sk_new_null();
        if (((puVar11 != (undefined4 *)0x0) &&
            (puVar10 = (undefined4 *)GENERAL_NAME_new(), puVar10 != (undefined4 *)0x0)) &&
           (iVar2 = OPENSSL_sk_push(puVar11,puVar10), iVar2 != 0)) {
          *puVar10 = 4;
          *(undefined4 **)(puVar10 + 2) = puVar8;
          goto LAB_14f78280f;
        }
        uVar18 = 0xa6;
        uVar15 = 0x41;
        puVar4 = puVar10;
      }
      else {
        uVar7 = X509_get_issuer_name(lVar3);
        puVar8 = (undefined4 *)X509_NAME_dup(uVar7);
        uVar7 = X509_get_serialNumber(lVar3);
        puVar12 = (undefined4 *)ASN1_INTEGER_dup(uVar7);
        if ((puVar8 != (undefined4 *)0x0) && (puVar12 != (undefined4 *)0x0)) goto LAB_14f7827c9;
        uVar18 = 0x9a;
        uVar15 = 0x7a;
      }
      ERR_put_error(0x22,0x77,uVar15,"crypto\\x509v3\\v3_akey.c",uVar18);
      puVar10 = puVar11;
LAB_14f782796:
      OPENSSL_sk_free(puVar10);
      GENERAL_NAME_free(puVar4);
      X509_NAME_free(puVar8);
      ASN1_INTEGER_free(puVar12);
      ASN1_OCTET_STRING_free(puVar6);
      return (undefined8 *)0x0;
    }
    if (*param_2 == 1) {
      puVar9 = (undefined8 *)AUTHORITY_KEYID_new();
      return puVar9;
    }
  }
  uVar18 = 0x84;
  uVar15 = 0x79;
LAB_14f782859:
  ERR_put_error(0x22,0x77,uVar15,"crypto\\x509v3\\v3_akey.c",uVar18);
  return (undefined8 *)0x0;
LAB_14f782613:
  do {
    puVar4 = (undefined4 *)((longlong)puVar11 + 1);
    if (*(char *)(*(longlong *)(lVar3 + 8) + (longlong)puVar11) != *(char *)(puVar11 + 0x54d2285f))
    {
      ERR_put_error(0x22,0x77,0x78,"crypto\\x509v3\\v3_akey.c",0x7a);
      ERR_add_error_data(2,"name=",*(undefined8 *)(lVar3 + 8));
      return (undefined8 *)0x0;
    }
    puVar11 = puVar4;
  } while (puVar4 != (undefined4 *)&DAT_00000007);
  puVar4 = puVar10;
  cVar14 = '\x01';
  cVar16 = cVar17;
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    do {
      cVar17 = *(char *)(*(longlong *)(lVar3 + 0x10) + (longlong)puVar4);
      puVar11 = (undefined4 *)((longlong)puVar4 + 1);
      pcVar1 = (char *)(puVar4 + 0x54d36b44);
      if (cVar17 != *pcVar1) break;
      puVar4 = puVar11;
    } while (puVar11 != (undefined4 *)&DAT_00000007);
    cVar14 = '\x01';
    if (cVar17 == *pcVar1) {
      cVar14 = '\x02';
    }
  }
LAB_14f782679:
  uVar13 = (int)puVar6 + 1;
  puVar6 = (undefined4 *)(ulonglong)uVar13;
  iVar2 = OPENSSL_sk_num(param_3);
  cVar17 = cVar16;
  if (iVar2 <= (int)uVar13) goto LAB_14f78268b;
  goto LAB_14f7825a5;
}

// FUN_14f782890 @ 14f782890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f782890(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7828b0 @ 14f7828b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7828b0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7828d0 @ 14f7828d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7828d0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7828f0 @ 14f7828f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7828f0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f782910 @ 14f782910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f782910(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f782930 @ 14f782930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f782930(void)

{
  OPENSSL_sk_push();
  return;
}

