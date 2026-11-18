// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f74e580 @ 14f74e580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74e580(void)

{
  int *piVar1;
  
  piVar1 = (int *)EVP_PKEY_get0();
  if (piVar1 != (int *)0x0) {
    if (*(longlong *)(piVar1 + 2) != 0) {
      OPENSSL_cleanse(*(longlong *)(piVar1 + 2),(longlong)*piVar1);
    }
    ASN1_OCTET_STRING_free(piVar1);
    return;
  }
  return;
}

// FUN_14f74e5f0 @ 14f74e5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f74e5f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = EVP_PKEY_get0(param_2);
  uVar3 = EVP_PKEY_get0(param_1);
  iVar1 = ASN1_OCTET_STRING_cmp(uVar3,uVar2);
  return iVar1 == 0;
}

// FUN_14f74e640 @ 14f74e640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74e640(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return 0;
  }
  lVar2 = ASN1_OCTET_STRING_new();
  if (lVar2 != 0) {
    iVar1 = ASN1_OCTET_STRING_set(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x28) = lVar2;
      return 1;
    }
    ASN1_OCTET_STRING_free(lVar2);
  }
  return 0;
}

// FUN_14f74e6d0 @ 14f74e6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f74e6d0(longlong param_1,void *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar2 = ASN1_STRING_length(lVar1);
    *param_3 = (longlong)iVar2;
    return 1;
  }
  if (lVar1 != 0) {
    iVar2 = ASN1_STRING_length(lVar1);
    if ((ulonglong)(longlong)iVar2 <= *param_3) {
      iVar2 = ASN1_STRING_length(lVar1);
      *param_3 = (longlong)iVar2;
      _Src = (void *)ASN1_STRING_get0_data(lVar1);
      memcpy(param_2,_Src,(longlong)iVar2);
      return 1;
    }
  }
  return 0;
}

