// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// X509_SIG_free @ 14f718c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_SIG_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b5de0);
  return;
}

// X509_SIG_get0 @ 14f718c60

void X509_SIG_get0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}

// X509_SIG_getm @ 14f718c80

void X509_SIG_getm(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}

// X509_SIG_new @ 14f718cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_SIG_new(void)

{
  ASN1_item_new(&DAT_1534b5de0);
  return;
}

// d2i_X509_SIG @ 14f718ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_SIG(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_SIG @ 14f718d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_SIG(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5de0);
  return;
}

