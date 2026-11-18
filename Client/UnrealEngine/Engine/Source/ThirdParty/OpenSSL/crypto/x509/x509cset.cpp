// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 18

// X509_CRL_get0_lastUpdate @ 14f704e60

undefined8 X509_CRL_get0_lastUpdate(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

// X509_CRL_get0_nextUpdate @ 14f704e70

undefined8 X509_CRL_get0_nextUpdate(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// X509_CRL_get_REVOKED @ 14f704ea0

undefined8 X509_CRL_get_REVOKED(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}

// X509_CRL_get_issuer @ 14f704eb0

undefined8 X509_CRL_get_issuer(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// X509_CRL_get_signature_nid @ 14f704ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_signature_nid(longlong param_1)

{
  OBJ_obj2nid(*(undefined8 *)(param_1 + 0x50));
  return;
}

// X509_CRL_get_version @ 14f704f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_version(undefined8 *param_1)

{
  ASN1_INTEGER_get(*param_1);
  return;
}

// X509_CRL_set1_lastUpdate @ 14f704f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_set1_lastUpdate(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = x509_set1_time(param_1 + 0x20);
  return uVar1;
}

// X509_CRL_set1_nextUpdate @ 14f704f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_set1_nextUpdate(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = x509_set1_time(param_1 + 0x28);
  return uVar1;
}

// X509_CRL_set_issuer_name @ 14f704f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_set_issuer_name(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_NAME_set(param_1 + 0x18);
  return uVar1;
}

// X509_CRL_set_version @ 14f704fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_set_version(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    lVar1 = ASN1_INTEGER_new();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  uVar2 = ASN1_INTEGER_set(*param_1,param_2);
  return uVar2;
}

// X509_CRL_sort @ 14f705010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_sort(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  OPENSSL_sk_sort(*(undefined8 *)(param_1 + 0x30));
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x30));
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x30),iVar3);
      *(int *)(lVar2 + 0x34) = iVar3;
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x30));
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x4c) = 1;
  return;
}

// X509_CRL_up_ref @ 14f705080

bool X509_CRL_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x78);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// X509_REVOKED_set_revocationDate @ 14f7050d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_REVOKED_set_revocationDate(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return false;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != param_2) {
    lVar1 = ASN1_STRING_dup(param_2);
    if (lVar1 != 0) {
      ASN1_TIME_free(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = lVar1;
    }
  }
  return lVar1 != 0;
}

// X509_REVOKED_set_serialNumber @ 14f705140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REVOKED_set_serialNumber(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 != param_2) {
    uVar1 = ASN1_STRING_copy();
    return uVar1;
  }
  return 1;
}

// i2d_re_X509_CRL_tbs @ 14f705180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_re_X509_CRL_tbs(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 1;
  i2d_X509_CRL_INFO();
  return;
}

// FUN_14f7051b0 @ 14f7051b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7051b0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7051d0 @ 14f7051d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7051d0(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f7051f0 @ 14f7051f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7051f0(void)

{
  OPENSSL_sk_value();
  return;
}

