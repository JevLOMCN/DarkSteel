// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 45

// FUN_14f703e20 @ 14f703e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703e20(longlong param_1,undefined8 param_2)

{
  ASN1_item_verify(&DAT_1534b31b0,param_1 + 0x50,param_1 + 0x60,param_1,param_2);
  return;
}

// FUN_14f703e60 @ 14f703e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char FUN_14f703e60(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f703e75;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return '\0';
  }
  iVar1 = OPENSSL_sk_is_sorted();
  if (iVar1 == 0) {
    CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0xd8));
    OPENSSL_sk_sort(*(undefined8 *)(param_1 + 0x30));
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xd8));
  }
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = *(undefined8 *)(param_3 + 4);
  iVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 0x30),&local_58);
  if (-1 < iVar1) {
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x30));
    for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x30),iVar1);
      iVar3 = ASN1_INTEGER_cmp(lVar4,param_3);
      if (iVar3 != 0) {
        return '\0';
      }
      iVar3 = FUN_14f7047e0(param_1,param_4,lVar4);
      if (iVar3 != 0) {
        if (param_2 != (longlong *)0x0) {
          *param_2 = lVar4;
        }
        return (*(int *)(lVar4 + 0x30) == 8) + '\x01';
      }
    }
  }
  return '\0';
}

// FUN_14f703fa0 @ 14f703fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f703fa0(int param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0x30), lVar1 != 0)) && (param_1 == 5)) {
    OPENSSL_sk_set_cmp_func(lVar1,FUN_14f704720,param_3,param_4,0x14f703faa);
  }
  return 1;
}

// FUN_14f703ff0 @ 14f703ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f703ff0(int param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int local_res8 [2];
  
  lVar1 = *param_2;
  if (param_1 == 1) {
LAB_14f704255:
    puVar3 = PTR_DAT_154df9338;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined4 *)(lVar1 + 0x7c) = 0;
    *(undefined4 *)(lVar1 + 0x90) = 0;
    *(undefined **)(lVar1 + 200) = puVar3;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined4 *)(lVar1 + 0x94) = 0x807f;
    return 1;
  }
  if (param_1 == 3) {
    if (((*(longlong *)(lVar1 + 200) != 0) &&
        (pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 0x10), pcVar2 != (code *)0x0)) &&
       (iVar4 = (*pcVar2)(lVar1), iVar4 == 0)) {
      return 0;
    }
    AUTHORITY_KEYID_free(*(undefined8 *)(lVar1 + 0x80));
    ISSUING_DIST_POINT_free(*(undefined8 *)(lVar1 + 0x88));
    ASN1_INTEGER_free(*(undefined8 *)(lVar1 + 0x98));
    ASN1_INTEGER_free(*(undefined8 *)(lVar1 + 0xa0));
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0xa8),GENERAL_NAMES_free);
    return 1;
  }
  if (param_1 == 4) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 0x10);
    if ((pcVar2 != (code *)0x0) && (iVar4 = (*pcVar2)(lVar1), iVar4 == 0)) {
      return 0;
    }
    AUTHORITY_KEYID_free(*(undefined8 *)(lVar1 + 0x80));
    ISSUING_DIST_POINT_free(*(undefined8 *)(lVar1 + 0x88));
    ASN1_INTEGER_free(*(undefined8 *)(lVar1 + 0x98));
    ASN1_INTEGER_free(*(undefined8 *)(lVar1 + 0xa0));
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0xa8),GENERAL_NAMES_free);
    goto LAB_14f704255;
  }
  if (param_1 != 5) {
    return 1;
  }
  uVar6 = EVP_sha1();
  iVar4 = X509_CRL_digest(lVar1,uVar6,lVar1 + 0xb0,0);
  if (iVar4 == 0) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  lVar7 = X509_CRL_get_ext_d2i(lVar1,0x302,local_res8,0);
  *(longlong *)(lVar1 + 0x88) = lVar7;
  if (lVar7 == 0) {
    if (local_res8[0] != -1) goto LAB_14f70408a;
  }
  else {
    iVar4 = FUN_14f704b80(lVar1,lVar7);
    if (iVar4 == 0) {
LAB_14f70408a:
      *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
    }
  }
  lVar7 = X509_CRL_get_ext_d2i(lVar1,0x5a,local_res8);
  *(longlong *)(lVar1 + 0x80) = lVar7;
  if ((lVar7 == 0) && (local_res8[0] != -1)) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  lVar7 = X509_CRL_get_ext_d2i(lVar1,0x58,local_res8);
  *(longlong *)(lVar1 + 0x98) = lVar7;
  if ((lVar7 == 0) && (local_res8[0] != -1)) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  lVar7 = X509_CRL_get_ext_d2i(lVar1,0x8c,local_res8,0);
  *(longlong *)(lVar1 + 0xa0) = lVar7;
  if (lVar7 == 0) {
    if (local_res8[0] == -1) goto LAB_14f704128;
  }
  else if (*(longlong *)(lVar1 + 0x98) != 0) goto LAB_14f704128;
  *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
LAB_14f704128:
  uVar6 = *(undefined8 *)(lVar1 + 0x38);
  iVar10 = 0;
  iVar4 = OPENSSL_sk_num(uVar6);
  if (0 < iVar4) {
    do {
      uVar8 = OPENSSL_sk_value(uVar6,iVar10);
      uVar9 = X509_EXTENSION_get_object(uVar8);
      iVar4 = OBJ_obj2nid(uVar9);
      if (iVar4 == 0x359) {
        *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x1000;
      }
      iVar5 = X509_EXTENSION_get_critical(uVar8);
      if ((((iVar5 != 0) && (iVar4 != 0x302)) && (iVar4 != 0x5a)) && (iVar4 != 0x8c)) {
        *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x200;
        break;
      }
      iVar10 = iVar10 + 1;
      iVar4 = OPENSSL_sk_num(uVar6);
    } while (iVar10 < iVar4);
  }
  iVar4 = FUN_14f7048b0(lVar1);
  if ((iVar4 != 0) &&
     ((pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 8), pcVar2 == (code *)0x0 ||
      (iVar4 = (*pcVar2)(lVar1), iVar4 != 0)))) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x100;
    return 1;
  }
  return 0;
}

// X509_CRL_INFO_it @ 14f704340

undefined * X509_CRL_INFO_it(void)

{
  return &DAT_1534b31b0;
}

// X509_CRL_INFO_free @ 14f704350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_INFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b31b0);
  return;
}

// X509_CRL_INFO_new @ 14f704380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_INFO_new(void)

{
  ASN1_item_new(&DAT_1534b31b0);
  return;
}

// X509_CRL_METHOD_free @ 14f7043b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_METHOD_free(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 != (byte *)0x0) && ((*param_1 & 1) != 0)) {
    CRYPTO_free(param_1,"crypto\\x509\\x_crl.c",0x1e4,param_4,0x14f7043bf);
  }
  return;
}

// X509_CRL_METHOD_new @ 14f7043f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
X509_CRL_METHOD_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f70440a;
  puVar1 = (undefined4 *)CRYPTO_malloc(0x28,"crypto\\x509\\x_crl.c",0x1d2);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0xb,0x9a,0x41,"crypto\\x509\\x_crl.c",0x1d5,uVar2);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(puVar1 + 2) = param_1;
    *(undefined8 *)(puVar1 + 4) = param_2;
    *(undefined8 *)(puVar1 + 6) = param_3;
    *(undefined8 *)(puVar1 + 8) = param_4;
    *puVar1 = 1;
  }
  return puVar1;
}

// X509_CRL_add0_revoked @ 14f704490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_add0_revoked(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7044a0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar2 = OPENSSL_sk_new(FUN_14f704720);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar1 = OPENSSL_sk_push(*(longlong *)(param_1 + 0x30),param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      return 1;
    }
  }
  ERR_put_error(0xd,0xa9,0x41,"crypto\\x509\\x_crl.c",0x15a,uVar3);
  return 0;
}

// X509_CRL_dup @ 14f704530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534b3240,param_1);
  return;
}

// X509_CRL_free @ 14f704560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3240);
  return;
}

// X509_CRL_get0_by_cert @ 14f704590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_get0_by_cert(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = X509_get_issuer_name(param_3);
    uVar3 = X509_get_serialNumber(param_3);
    uVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2,uVar3,uVar2);
  }
  return uVar2;
}

// X509_CRL_get0_by_serial @ 14f704620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_get0_by_serial(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 200) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f704644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// X509_CRL_it @ 14f704670

undefined * X509_CRL_it(void)

{
  return &DAT_1534b3240;
}

// X509_CRL_new @ 14f704680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_new(void)

{
  ASN1_item_new(&DAT_1534b3240);
  return;
}

// X509_CRL_verify @ 14f7046e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_verify(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 200) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f704701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

// FUN_14f704720 @ 14f704720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704720(undefined8 *param_1,undefined8 *param_2)

{
  ASN1_STRING_cmp(*param_1,*param_2);
  return;
}

// X509_REVOKED_dup @ 14f704750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534b3050,param_1);
  return;
}

// X509_REVOKED_free @ 14f704780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3050);
  return;
}

// X509_REVOKED_new @ 14f7047b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_new(void)

{
  ASN1_item_new(&DAT_1534b3050);
  return;
}

// FUN_14f7047e0 @ 14f7047e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7047e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(longlong *)(param_3 + 0x28) == 0) {
    if (param_2 == 0) {
      return true;
    }
    uVar2 = X509_CRL_get_issuer();
    iVar1 = X509_NAME_cmp(param_2,uVar2);
    return iVar1 == 0;
  }
  if (param_2 == 0) {
    param_2 = X509_CRL_get_issuer();
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_3 + 0x28));
  if (0 < iVar1) {
    do {
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x28),iVar4);
      if ((*piVar3 == 4) && (iVar1 = X509_NAME_cmp(param_2,*(undefined8 *)(piVar3 + 2)), iVar1 == 0)
         ) {
        return true;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_3 + 0x28));
    } while (iVar4 < iVar1);
  }
  return false;
}

// FUN_14f7048b0 @ 14f7048b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7048b0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar11;
  int local_res10 [2];
  ulonglong uVar10;
  
  uVar4 = X509_CRL_get_REVOKED();
  uVar10 = 0;
  iVar2 = OPENSSL_sk_num(uVar4);
  uVar11 = uVar10;
  if (0 < iVar2) {
    do {
      lVar5 = OPENSSL_sk_value(uVar4,uVar10);
      uVar6 = X509_REVOKED_get_ext_d2i(lVar5,0x303,local_res10,0);
      if (uVar6 == 0) {
        uVar6 = uVar11;
        if (local_res10[0] != -1) goto LAB_14f704921;
      }
      else {
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          lVar7 = OPENSSL_sk_new_null();
          *(longlong *)(param_1 + 0xa8) = lVar7;
          if (lVar7 == 0) goto LAB_14f704a44;
        }
        iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0xa8),uVar6);
        if (iVar2 == 0) {
LAB_14f704a44:
          GENERAL_NAMES_free(uVar6);
          return 0;
        }
      }
      *(ulonglong *)(lVar5 + 0x28) = uVar6;
      lVar7 = X509_REVOKED_get_ext_d2i(lVar5,0x8d,local_res10,0);
      if (lVar7 == 0) {
        if (local_res10[0] != -1) {
LAB_14f704921:
          *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x80;
          return 1;
        }
        *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
      }
      else {
        uVar3 = ASN1_ENUMERATED_get(lVar7);
        *(undefined4 *)(lVar5 + 0x30) = uVar3;
        ASN1_ENUMERATED_free(lVar7);
      }
      uVar1 = *(undefined8 *)(lVar5 + 0x20);
      local_res10[0] = 0;
      iVar2 = OPENSSL_sk_num(uVar1);
      if (local_res10[0] < iVar2) {
        do {
          uVar8 = OPENSSL_sk_value(uVar1,local_res10[0]);
          iVar2 = X509_EXTENSION_get_critical(uVar8);
          if (iVar2 != 0) {
            uVar8 = X509_EXTENSION_get_object(uVar8);
            iVar2 = OBJ_obj2nid(uVar8);
            if (iVar2 != 0x303) {
              *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x200;
              break;
            }
          }
          local_res10[0] = local_res10[0] + 1;
          iVar2 = OPENSSL_sk_num(uVar1);
        } while (local_res10[0] < iVar2);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      iVar2 = OPENSSL_sk_num(uVar4);
      uVar11 = uVar6;
    } while ((int)uVar9 < iVar2);
  }
  return 1;
}

// d2i_X509_CRL @ 14f704a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_CRL(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_X509_CRL_INFO @ 14f704a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_CRL_INFO(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_X509_REVOKED @ 14f704ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_REVOKED(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_CRL @ 14f704af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_CRL(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3240);
  return;
}

// i2d_X509_CRL_INFO @ 14f704b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_CRL_INFO(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b31b0);
  return;
}

// i2d_X509_REVOKED @ 14f704b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_REVOKED(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3050);
  return;
}

// FUN_14f704b80 @ 14f704b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704b80(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
  iVar1 = *(int *)(param_2 + 1);
  if (0 < iVar1) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 4;
  }
  bVar2 = 0 < iVar1;
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    bVar2 = bVar2 + 1;
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 8;
  }
  if (0 < *(int *)((longlong)param_2 + 0x1c)) {
    bVar2 = bVar2 + 1;
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x10;
  }
  if (1 < bVar2) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 2;
  }
  if (0 < *(int *)(param_2 + 3)) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x20;
  }
  if (param_2[2] != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x40;
    if (0 < *(int *)param_2[2]) {
      *(uint *)(param_1 + 0x94) = (uint)**(byte **)((int *)param_2[2] + 2);
    }
    if (1 < *(int *)param_2[2]) {
      *(uint *)(param_1 + 0x94) =
           *(uint *)(param_1 + 0x94) |
           (uint)*(byte *)(*(longlong *)((int *)param_2[2] + 2) + 1) << 8;
    }
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0x807f;
  }
  uVar3 = X509_CRL_get_issuer(param_1);
  DIST_POINT_set_dpname(*param_2,uVar3);
  return;
}

// FUN_14f704c50 @ 14f704c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704c50(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f704c70 @ 14f704c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704c70(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f704c90 @ 14f704c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704c90(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f704cb0 @ 14f704cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704cb0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f704cd0 @ 14f704cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704cd0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f704cf0 @ 14f704cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704cf0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f704d10 @ 14f704d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704d10(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f704d30 @ 14f704d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704d30(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f704d50 @ 14f704d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704d50(void)

{
  OPENSSL_sk_is_sorted();
  return;
}

// FUN_14f704d70 @ 14f704d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704d70(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f704d90 @ 14f704d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704d90(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f704db0 @ 14f704db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704db0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f704dd0 @ 14f704dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704dd0(void)

{
  OPENSSL_sk_set_cmp_func();
  return;
}

// FUN_14f704df0 @ 14f704df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704df0(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f704e10 @ 14f704e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f704e10(void)

{
  OPENSSL_sk_value();
  return;
}

