// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// X509_VAL_free @ 14f71b2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VAL_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b6390);
  return;
}

// X509_VAL_new @ 14f71b2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VAL_new(void)

{
  ASN1_item_new(&DAT_1534b6390);
  return;
}

// d2i_X509_VAL @ 14f71b310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_VAL(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_VAL @ 14f71b340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_VAL(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b6390);
  return;
}

