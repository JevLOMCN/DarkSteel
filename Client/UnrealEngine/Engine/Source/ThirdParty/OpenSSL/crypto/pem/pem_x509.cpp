// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// PEM_read_X509 @ 14f6b3d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_X509(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_X509,"CERTIFICATE",param_1,param_2,param_3,param_4,0x14f6b3d1a);
  return;
}

// PEM_read_bio_X509 @ 14f6b3d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_X509(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_X509,"CERTIFICATE",param_1,param_2,param_3,param_4,0x14f6b3d5a);
  return;
}

// PEM_write_X509 @ 14f6b3d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_X509(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_X509,"CERTIFICATE",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_X509 @ 14f6b3de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_X509(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_X509,"CERTIFICATE",param_1,param_2,0,0,0,0,0);
  return;
}

