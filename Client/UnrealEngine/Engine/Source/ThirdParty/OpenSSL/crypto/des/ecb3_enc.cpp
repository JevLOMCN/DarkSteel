// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// DES_ecb3_encrypt @ 14f73c790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_ecb3_encrypt(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,int param_6)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *param_1;
  local_resc = param_1[1];
  if (param_6 == 0) {
    DES_decrypt3(&local_res8,param_3,param_4,param_5);
  }
  else {
    DES_encrypt3();
  }
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

