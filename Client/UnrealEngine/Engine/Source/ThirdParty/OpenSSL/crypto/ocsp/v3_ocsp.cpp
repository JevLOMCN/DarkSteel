// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// FUN_14f7829f0 @ 14f7829f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7829f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*param_2 != 0) {
    iVar1 = BIO_printf(param_3,"%*scrlUrl: ",param_4,"");
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = ASN1_STRING_print(param_3,*param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = BIO_write(param_3,"\n",1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_2[1] != 0) {
    iVar1 = BIO_printf(param_3,"%*scrlNum: ",param_4,"");
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = i2a_ASN1_INTEGER(param_3,param_2[1]);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = BIO_write(param_3,"\n",1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_2[2] == 0) {
    return 1;
  }
  iVar1 = BIO_printf(param_3,"%*scrlTime: ",param_4,"");
  if (((0 < iVar1) && (iVar1 = ASN1_GENERALIZEDTIME_print(param_3,param_2[2]), iVar1 != 0)) &&
     (iVar1 = BIO_write(param_3,"\n",1), 0 < iVar1)) {
    return 1;
  }
  return 0;
}

// FUN_14f782b30 @ 14f782b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f782b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,"%*s",param_4,"");
  if (iVar1 < 1) {
    return false;
  }
  iVar1 = ASN1_GENERALIZEDTIME_print(param_3,param_2);
  return iVar1 != 0;
}

// FUN_14f782ba0 @ 14f782ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f782ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,"%*s",param_4,"");
  if (iVar1 < 1) {
    return false;
  }
  iVar1 = i2a_ASN1_OBJECT(param_3,param_2);
  return 0 < iVar1;
}

// FUN_14f782c10 @ 14f782c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f782c10(void)

{
  ASN1_OCTET_STRING_new();
  return;
}

// FUN_14f782c30 @ 14f782c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f782c30(int *param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    memcpy((void *)*param_2,*(void **)(param_1 + 2),(longlong)*param_1);
    *param_2 = *param_2 + (longlong)*param_1;
    return *param_1;
  }
  return *param_1;
}

// FUN_14f782c90 @ 14f782c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f782c90(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f782caa;
  if ((((param_1 == (longlong *)0x0) || (lVar2 = *param_1, lVar2 == 0)) &&
      (lVar2 = ASN1_OCTET_STRING_new(), lVar2 == 0)) ||
     (iVar1 = ASN1_OCTET_STRING_set(lVar2,*param_2,param_3), iVar1 == 0)) {
    if ((param_1 == (longlong *)0x0) || (*param_1 != lVar2)) {
      ASN1_OCTET_STRING_free(lVar2);
    }
    ERR_put_error(0x27,0x66,0x41,"crypto\\ocsp\\v3_ocsp.c",0xce,uVar3);
    lVar2 = 0;
  }
  else {
    *param_2 = *param_2 + (longlong)param_3;
    if (param_1 != (longlong *)0x0) {
      *param_1 = lVar2;
    }
  }
  return lVar2;
}

// FUN_14f782d50 @ 14f782d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f782d50(void)

{
  ASN1_OCTET_STRING_free();
  return;
}

// FUN_14f782d70 @ 14f782d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f782d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,"%*s",param_4,"");
  if (iVar1 < 1) {
    return false;
  }
  iVar1 = i2a_ASN1_STRING(param_3,param_2,4);
  return 0 < iVar1;
}

// FUN_14f782e00 @ 14f782e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f782e00(void)

{
  ASN1_NULL_new();
  return;
}

// FUN_14f782e20 @ 14f782e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f782e20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar1 = BIO_printf(param_3,"%*sIssuer: ",param_4,"");
  if ((iVar1 < 1) || (iVar1 = X509_NAME_print_ex(param_3,*param_2,0,0x82031f), iVar1 < 1)) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar3);
      iVar1 = BIO_printf(param_3,"\n%*s",param_4 * 2,"");
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = i2a_ASN1_OBJECT(param_3,*puVar2);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = BIO_puts(param_3," - ");
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = GENERAL_NAME_print(param_3,puVar2[1]);
      if (iVar1 < 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2[1]);
    } while (iVar3 < iVar1);
  }
  return 1;
}

// FUN_14f782f40 @ 14f782f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f782f40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f782f60 @ 14f782f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f782f60(void)

{
  OPENSSL_sk_value();
  return;
}

