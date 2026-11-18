// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// X509_EXTENSIONS_it @ 14f6ce420

undefined * X509_EXTENSIONS_it(void)

{
  return &DAT_1534a6730;
}

// X509_EXTENSION_dup @ 14f6ce430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_EXTENSION_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534a66e0,param_1);
  return;
}

// X509_EXTENSION_free @ 14f6ce460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_EXTENSION_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534a66e0);
  return;
}

// X509_EXTENSION_new @ 14f6ce490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_EXTENSION_new(void)

{
  ASN1_item_new(&DAT_1534a66e0);
  return;
}

// d2i_X509_EXTENSION @ 14f6ce4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_EXTENSION(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_X509_EXTENSIONS @ 14f6ce4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_EXTENSIONS(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_EXTENSION @ 14f6ce520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_EXTENSION(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534a66e0);
  return;
}

// i2d_X509_EXTENSIONS @ 14f6ce550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_EXTENSIONS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534a6730);
  return;
}

