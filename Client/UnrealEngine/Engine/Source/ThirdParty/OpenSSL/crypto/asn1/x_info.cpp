// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// X509_INFO_free @ 14f732d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_INFO_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    X509_free(*param_1);
    X509_CRL_free(param_1[1]);
    X509_PKEY_free(param_1[2]);
    CRYPTO_free(param_1[7],"crypto\\asn1\\x_info.c",0x25);
    CRYPTO_free(param_1,"crypto\\asn1\\x_info.c",0x26);
  }
  return;
}

// X509_INFO_new @ 14f732dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_INFO_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x40,"crypto\\asn1\\x_info.c",0x14);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0xaa,0x41,"crypto\\asn1\\x_info.c",0x16);
    lVar1 = 0;
  }
  return lVar1;
}

