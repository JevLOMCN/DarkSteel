// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// AUTHORITY_KEYID_free @ 14f71bb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AUTHORITY_KEYID_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b6570);
  return;
}

// AUTHORITY_KEYID_new @ 14f71bb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AUTHORITY_KEYID_new(void)

{
  ASN1_item_new(&DAT_1534b6570);
  return;
}

// d2i_AUTHORITY_KEYID @ 14f71bbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_AUTHORITY_KEYID(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_AUTHORITY_KEYID @ 14f71bbe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_AUTHORITY_KEYID(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b6570);
  return;
}

