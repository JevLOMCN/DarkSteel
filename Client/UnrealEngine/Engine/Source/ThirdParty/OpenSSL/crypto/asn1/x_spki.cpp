// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// NETSCAPE_SPKAC_it @ 14f718f70

undefined * NETSCAPE_SPKAC_it(void)

{
  return &DAT_1534b6040;
}

// NETSCAPE_SPKAC_free @ 14f718f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NETSCAPE_SPKAC_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b6040);
  return;
}

// NETSCAPE_SPKAC_new @ 14f718fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NETSCAPE_SPKAC_new(void)

{
  ASN1_item_new(&DAT_1534b6040);
  return;
}

// NETSCAPE_SPKI_free @ 14f718fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NETSCAPE_SPKI_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b60d0);
  return;
}

// NETSCAPE_SPKI_new @ 14f719020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NETSCAPE_SPKI_new(void)

{
  ASN1_item_new(&DAT_1534b60d0);
  return;
}

// d2i_NETSCAPE_SPKAC @ 14f719050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_NETSCAPE_SPKAC(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_NETSCAPE_SPKI @ 14f719080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_NETSCAPE_SPKI(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_NETSCAPE_SPKAC @ 14f7190b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_NETSCAPE_SPKAC(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b6040);
  return;
}

// i2d_NETSCAPE_SPKI @ 14f7190e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_NETSCAPE_SPKI(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b60d0);
  return;
}

