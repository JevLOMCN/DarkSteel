// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// PROXY_CERT_INFO_EXTENSION_free @ 14f735df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROXY_CERT_INFO_EXTENSION_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534bab40);
  return;
}

// PROXY_CERT_INFO_EXTENSION_new @ 14f735e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROXY_CERT_INFO_EXTENSION_new(void)

{
  ASN1_item_new(&DAT_1534bab40);
  return;
}

// PROXY_POLICY_free @ 14f735e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROXY_POLICY_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534baad0);
  return;
}

// PROXY_POLICY_new @ 14f735e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROXY_POLICY_new(void)

{
  ASN1_item_new(&DAT_1534baad0);
  return;
}

// d2i_PROXY_CERT_INFO_EXTENSION @ 14f735ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PROXY_CERT_INFO_EXTENSION(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PROXY_POLICY @ 14f735ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PROXY_POLICY(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_PROXY_CERT_INFO_EXTENSION @ 14f735f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PROXY_CERT_INFO_EXTENSION(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534bab40);
  return;
}

// i2d_PROXY_POLICY @ 14f735f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PROXY_POLICY(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534baad0);
  return;
}

