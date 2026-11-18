// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// X509_PKEY_free @ 14f77f5e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_PKEY_free(longlong param_1)

{
  if (param_1 != 0) {
    X509_ALGOR_free(*(undefined8 *)(param_1 + 8));
    ASN1_OCTET_STRING_free(*(undefined8 *)(param_1 + 0x10));
    EVP_PKEY_free(*(undefined8 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x30) != 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"crypto\\asn1\\x_pkey.c",0x2d);
    }
    CRYPTO_free(param_1,"crypto\\asn1\\x_pkey.c",0x2e);
  }
  return;
}

// X509_PKEY_new @ 14f77f650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_PKEY_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f77f65c;
  lVar1 = CRYPTO_zalloc(0x50,"crypto\\asn1\\x_pkey.c",0x14);
  if (lVar1 != 0) {
    uVar2 = X509_ALGOR_new();
    *(undefined8 *)(lVar1 + 8) = uVar2;
    lVar3 = ASN1_OCTET_STRING_new();
    *(longlong *)(lVar1 + 0x10) = lVar3;
    if ((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) {
      return lVar1;
    }
  }
  X509_PKEY_free(lVar1);
  ERR_put_error(0xd,0xad,0x41,"crypto\\asn1\\x_pkey.c",0x20,uVar4);
  return 0;
}

