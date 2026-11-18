// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 27

// X509_CRL_add1_ext_i2d @ 14f6ce580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_add1_ext_i2d(longlong param_1)

{
  X509V3_add1_i2d(param_1 + 0x38);
  return;
}

// X509_CRL_add_ext @ 14f6ce5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_CRL_add_ext(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509v3_add_ext(param_1 + 0x38);
  return lVar1 != 0;
}

// X509_CRL_delete_ext @ 14f6ce5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_delete_ext(longlong param_1)

{
  X509v3_delete_ext(*(undefined8 *)(param_1 + 0x38));
  return;
}

// X509_CRL_get_ext @ 14f6ce5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x38));
  return;
}

// X509_CRL_get_ext_by_NID @ 14f6ce610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext_by_NID(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x38));
  return;
}

// X509_CRL_get_ext_by_OBJ @ 14f6ce630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext_by_OBJ(longlong param_1)

{
  X509v3_get_ext_by_OBJ(*(undefined8 *)(param_1 + 0x38));
  return;
}

// X509_CRL_get_ext_by_critical @ 14f6ce650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext_by_critical(longlong param_1)

{
  X509v3_get_ext_by_critical(*(undefined8 *)(param_1 + 0x38));
  return;
}

// X509_CRL_get_ext_count @ 14f6ce670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext_count(longlong param_1)

{
  X509v3_get_ext_count(*(undefined8 *)(param_1 + 0x38));
  return;
}

// X509_CRL_get_ext_d2i @ 14f6ce690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_get_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x38));
  return;
}

// X509_REVOKED_add1_ext_i2d @ 14f6ce6b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_add1_ext_i2d(longlong param_1)

{
  X509V3_add1_i2d(param_1 + 0x20);
  return;
}

// X509_REVOKED_add_ext @ 14f6ce6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_REVOKED_add_ext(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509v3_add_ext(param_1 + 0x20);
  return lVar1 != 0;
}

// X509_REVOKED_delete_ext @ 14f6ce700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_delete_ext(longlong param_1)

{
  X509v3_delete_ext(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_REVOKED_get_ext @ 14f6ce720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_get_ext(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_REVOKED_get_ext_by_NID @ 14f6ce740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_get_ext_by_NID(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_REVOKED_get_ext_by_OBJ @ 14f6ce760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_get_ext_by_OBJ(longlong param_1)

{
  X509v3_get_ext_by_OBJ(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_REVOKED_get_ext_by_critical @ 14f6ce780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_get_ext_by_critical(longlong param_1)

{
  X509v3_get_ext_by_critical(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_REVOKED_get_ext_count @ 14f6ce7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_get_ext_count(longlong param_1)

{
  X509v3_get_ext_count(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_REVOKED_get_ext_d2i @ 14f6ce7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_get_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_add1_ext_i2d @ 14f6ce7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_add1_ext_i2d(longlong param_1)

{
  X509V3_add1_i2d(param_1 + 0x68);
  return;
}

// X509_add_ext @ 14f6ce800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_add_ext(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509v3_add_ext(param_1 + 0x68);
  return lVar1 != 0;
}

// X509_delete_ext @ 14f6ce830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_delete_ext(longlong param_1)

{
  X509v3_delete_ext(*(undefined8 *)(param_1 + 0x68));
  return;
}

// X509_get_ext @ 14f6ce850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x68));
  return;
}

// X509_get_ext_by_NID @ 14f6ce870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_by_NID(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x68));
  return;
}

// X509_get_ext_by_OBJ @ 14f6ce890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_by_OBJ(longlong param_1)

{
  X509v3_get_ext_by_OBJ(*(undefined8 *)(param_1 + 0x68));
  return;
}

// X509_get_ext_by_critical @ 14f6ce8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_by_critical(longlong param_1)

{
  X509v3_get_ext_by_critical(*(undefined8 *)(param_1 + 0x68));
  return;
}

// X509_get_ext_count @ 14f6ce8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_count(longlong param_1)

{
  X509v3_get_ext_count(*(undefined8 *)(param_1 + 0x68));
  return;
}

// X509_get_ext_d2i @ 14f6ce8f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x68));
  return;
}

