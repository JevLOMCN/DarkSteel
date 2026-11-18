// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 19

// PKCS12_AUTHSAFES_it @ 14f7bd020

undefined * PKCS12_AUTHSAFES_it(void)

{
  return &DAT_1534ea320;
}

// PKCS12_BAGS_free @ 14f7bd030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_BAGS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534ea580);
  return;
}

// PKCS12_BAGS_new @ 14f7bd060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_BAGS_new(void)

{
  ASN1_item_new(&DAT_1534ea580);
  return;
}

// PKCS12_MAC_DATA_free @ 14f7bd090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_MAC_DATA_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534ea440);
  return;
}

// PKCS12_MAC_DATA_new @ 14f7bd0c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_MAC_DATA_new(void)

{
  ASN1_item_new(&DAT_1534ea440);
  return;
}

// PKCS12_SAFEBAGS_it @ 14f7bd0f0

undefined * PKCS12_SAFEBAGS_it(void)

{
  return &DAT_1534ea2d0;
}

// PKCS12_SAFEBAG_free @ 14f7bd100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_SAFEBAG_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534ea280);
  return;
}

// PKCS12_SAFEBAG_new @ 14f7bd130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_SAFEBAG_new(void)

{
  ASN1_item_new(&DAT_1534ea280);
  return;
}

// PKCS12_free @ 14f7bd160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534ea3b0);
  return;
}

// PKCS12_it @ 14f7bd190

undefined * PKCS12_it(void)

{
  return &DAT_1534ea3b0;
}

// PKCS12_new @ 14f7bd1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_new(void)

{
  ASN1_item_new(&DAT_1534ea3b0);
  return;
}

// d2i_PKCS12 @ 14f7bd1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS12(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS12_BAGS @ 14f7bd200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS12_BAGS(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS12_MAC_DATA @ 14f7bd230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS12_MAC_DATA(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS12_SAFEBAG @ 14f7bd260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS12_SAFEBAG(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_PKCS12 @ 14f7bd290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS12(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534ea3b0);
  return;
}

// i2d_PKCS12_BAGS @ 14f7bd2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS12_BAGS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534ea580);
  return;
}

// i2d_PKCS12_MAC_DATA @ 14f7bd2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS12_MAC_DATA(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534ea440);
  return;
}

// i2d_PKCS12_SAFEBAG @ 14f7bd320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS12_SAFEBAG(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534ea280);
  return;
}

