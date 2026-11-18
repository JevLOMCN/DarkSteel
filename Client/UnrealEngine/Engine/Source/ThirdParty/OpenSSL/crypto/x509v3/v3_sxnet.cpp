// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// FUN_14f781690 @ 14f781690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f781690(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 1;
  iVar1 = ASN1_INTEGER_get_int64(&local_res10,*param_2);
  if ((iVar1 == 0) || (0xfffffffe < local_res10 + 0x80000000U)) {
    BIO_printf(param_3,"%*sVersion: <unsupported>",param_4,"");
  }
  else {
    BIO_printf(param_3,"%*sVersion: %ld (0x%lX)",param_4,"",CONCAT44(uVar5,(int)local_res10 + 1),
               CONCAT44(uVar6,(int)local_res10));
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar4);
      lVar3 = i2s_ASN1_INTEGER(0,*puVar2);
      if (lVar3 == 0) {
        return 0;
      }
      BIO_printf(param_3,"\n%*sZone: %s, User: ",param_4,"",lVar3);
      CRYPTO_free(lVar3,"crypto\\x509v3\\v3_sxnet.c",0x54);
      ASN1_STRING_print(param_3,puVar2[1]);
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_2[1]);
    } while (iVar4 < iVar1);
  }
  return 1;
}

// FUN_14f7817d0 @ 14f7817d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7817d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res20;
  undefined8 uVar7;
  
  uVar7 = 0x14f7817e5;
  uVar5 = 0;
  local_res20 = 0;
  iVar2 = OPENSSL_sk_num(param_3);
  uVar6 = uVar5;
  if (0 < iVar2) {
    do {
      lVar3 = OPENSSL_sk_value(param_3,uVar5);
      uVar1 = *(undefined8 *)(lVar3 + 0x10);
      lVar3 = s2i_ASN1_INTEGER(0,*(undefined8 *)(lVar3 + 8));
      if (lVar3 == 0) {
        ERR_put_error(0x22,0x7d,0x83,"crypto\\x509v3\\v3_sxnet.c",0x7b,uVar7);
        return 0;
      }
      iVar2 = SXNET_add_id_INTEGER(&local_res20,lVar3,uVar1,0xffffffff);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      iVar2 = OPENSSL_sk_num(param_3);
      uVar6 = local_res20;
    } while ((int)uVar4 < iVar2);
  }
  return uVar6;
}

// SXNETID_free @ 14f7818c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SXNETID_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534da770);
  return;
}

// SXNETID_new @ 14f7818f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SXNETID_new(void)

{
  ASN1_item_new(&DAT_1534da770);
  return;
}

// SXNET_add_id_INTEGER @ 14f781920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SXNET_add_id_INTEGER(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f781939;
  plVar5 = (longlong *)0x0;
  uVar6 = param_4 & 0xffffffff;
  if (((param_1 == (longlong *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    ERR_put_error(0x22,0x7e,0x6b,"crypto\\x509v3\\v3_sxnet.c",0x9e,0x14f781939);
    return 0;
  }
  lVar7 = -1;
  if ((int)param_4 == -1) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
  }
  iVar2 = (int)uVar6;
  if (0x40 < iVar2) {
    ERR_put_error(0x22,0x7e,0x84,"crypto\\x509v3\\v3_sxnet.c",0xa4,0x14f781939);
    return 0;
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)ASN1_item_new(&DAT_1534da7e0);
    if ((puVar3 == (undefined8 *)0x0) || (iVar1 = ASN1_INTEGER_set(*puVar3,0), iVar1 == 0))
    goto LAB_14f781a88;
    *param_1 = (longlong)puVar3;
  }
  lVar4 = SXNET_get_id_INTEGER(puVar3,param_2);
  if (lVar4 != 0) {
    ERR_put_error(0x22,0x7e,0x85,"crypto\\x509v3\\v3_sxnet.c",0xb0,uVar8);
    return 0;
  }
  plVar5 = (longlong *)ASN1_item_new(&DAT_1534da770);
  if (plVar5 != (longlong *)0x0) {
    if (iVar2 == -1) {
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(param_3 + lVar7) != '\0');
      iVar2 = (int)lVar7;
    }
    iVar2 = ASN1_OCTET_STRING_set(plVar5[1],param_3,iVar2);
    if ((iVar2 != 0) && (iVar2 = OPENSSL_sk_push(puVar3[1],plVar5), iVar2 != 0)) {
      *plVar5 = param_2;
      return 1;
    }
  }
LAB_14f781a88:
  ERR_put_error(0x22,0x7e,0x41,"crypto\\x509v3\\v3_sxnet.c",0xc1,uVar8);
  ASN1_item_free(plVar5,&DAT_1534da770);
  ASN1_item_free(puVar3,&DAT_1534da7e0);
  *param_1 = 0;
  return 0;
}

// SXNET_add_id_asc @ 14f781b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SXNET_add_id_asc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f781b15;
  lVar1 = s2i_ASN1_INTEGER(0);
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x7d,0x83,"crypto\\x509v3\\v3_sxnet.c",0x7b,uVar2);
    return 0;
  }
  uVar2 = SXNET_add_id_INTEGER(param_1,lVar1,param_3,param_4);
  return uVar2;
}

// SXNET_add_id_ulong @ 14f781b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SXNET_add_id_ulong(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f781bb0;
  lVar2 = ASN1_INTEGER_new();
  if ((lVar2 != 0) && (iVar1 = ASN1_INTEGER_set(lVar2,param_2), iVar1 != 0)) {
    uVar3 = SXNET_add_id_INTEGER(param_1,lVar2,param_3,param_4);
    return uVar3;
  }
  ERR_put_error(0x22,0x7f,0x41,"crypto\\x509v3\\v3_sxnet.c",0x8a,uVar3);
  ASN1_INTEGER_free(lVar2);
  return 0;
}

// SXNET_free @ 14f781c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SXNET_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534da7e0);
  return;
}

// SXNET_get_id_INTEGER @ 14f781c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SXNET_get_id_INTEGER(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar3);
      iVar1 = ASN1_INTEGER_cmp(*puVar2,param_2);
      if (iVar1 == 0) {
        return puVar2[1];
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    } while (iVar3 < iVar1);
  }
  return 0;
}

// SXNET_get_id_asc @ 14f781d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SXNET_get_id_asc(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f781d10;
  lVar1 = s2i_ASN1_INTEGER(0);
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x80,0x83,"crypto\\x509v3\\v3_sxnet.c",0xce,uVar2);
    return 0;
  }
  uVar2 = SXNET_get_id_INTEGER(param_1,lVar1);
  ASN1_INTEGER_free(lVar1);
  return uVar2;
}

// SXNET_get_id_ulong @ 14f781d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SXNET_get_id_ulong(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f781d95;
  lVar2 = ASN1_INTEGER_new();
  if (lVar2 != 0) {
    iVar1 = ASN1_INTEGER_set(lVar2,param_2);
    if (iVar1 != 0) {
      uVar3 = SXNET_get_id_INTEGER(param_1,lVar2);
      ASN1_INTEGER_free(lVar2);
      return uVar3;
    }
  }
  ERR_put_error(0x22,0x81,0x41,"crypto\\x509v3\\v3_sxnet.c",0xdd,uVar3);
  ASN1_INTEGER_free(lVar2);
  return 0;
}

// SXNET_new @ 14f781e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SXNET_new(void)

{
  ASN1_item_new(&DAT_1534da7e0);
  return;
}

// d2i_SXNET @ 14f781e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_SXNET(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_SXNETID @ 14f781e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_SXNETID(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_SXNET @ 14f781ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_SXNET(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534da7e0);
  return;
}

// i2d_SXNETID @ 14f781ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_SXNETID(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534da770);
  return;
}

// FUN_14f781f20 @ 14f781f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781f20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f781f40 @ 14f781f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781f40(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f781f60 @ 14f781f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781f60(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f781f80 @ 14f781f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781f80(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f781fa0 @ 14f781fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781fa0(void)

{
  OPENSSL_sk_value();
  return;
}

