// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// X509_REQ_set_pubkey @ 14f7bff50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_set_pubkey(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar1 = X509_PUBKEY_set(param_1 + 0x20);
  return uVar1;
}

// X509_REQ_set_subject_name @ 14f7bff90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_set_subject_name(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar1 = X509_NAME_set(param_1 + 0x18);
  return uVar1;
}

// X509_REQ_set_version @ 14f7bffd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_set_version(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar1 = ASN1_INTEGER_set(*(undefined8 *)(param_1 + 0x10));
  return uVar1;
}

