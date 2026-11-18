// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// FUN_14f72ab50 @ 14f72ab50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f72ab50(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 1) {
    param_2 = (undefined8 *)*param_2;
    uVar1 = OBJ_nid2obj(0x4f);
    *param_2 = uVar1;
  }
  return 1;
}

// NETSCAPE_CERT_SEQUENCE_free @ 14f72ab90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NETSCAPE_CERT_SEQUENCE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b8570);
  return;
}

// NETSCAPE_CERT_SEQUENCE_new @ 14f72abd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NETSCAPE_CERT_SEQUENCE_new(void)

{
  ASN1_item_new(&DAT_1534b8570);
  return;
}

// d2i_NETSCAPE_CERT_SEQUENCE @ 14f72ac00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_NETSCAPE_CERT_SEQUENCE(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_NETSCAPE_CERT_SEQUENCE @ 14f72ac30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_NETSCAPE_CERT_SEQUENCE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b8570);
  return;
}

