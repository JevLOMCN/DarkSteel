// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// DES_ecb_encrypt @ 14f73bd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_ecb_encrypt(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *param_1;
  local_resc = param_1[1];
  DES_encrypt1(&local_res8,param_3,param_4);
  *param_2 = (undefined1)local_res8;
  param_2[1] = (char)((uint)local_res8 >> 8);
  param_2[2] = (char)((uint)local_res8 >> 0x10);
  param_2[3] = (char)((uint)local_res8 >> 0x18);
  param_2[4] = (undefined1)local_resc;
  param_2[5] = (char)((uint)local_resc >> 8);
  param_2[6] = (char)((uint)local_resc >> 0x10);
  param_2[7] = (char)((uint)local_resc >> 0x18);
  return;
}

// DES_options @ 14f73be40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * DES_options(void)

{
  if (DAT_154df9748 != 0) {
    OPENSSL_strlcpy(&DAT_1553e2f40,"des(long)",0xc);
    DAT_154df9748 = 0;
    return &DAT_1553e2f40;
  }
  return &DAT_1553e2f40;
}

