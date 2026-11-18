// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// CAST_ecb_encrypt @ 14f7ade60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAST_ecb_encrypt(byte *param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  uint local_res8;
  uint local_resc;
  
  local_res8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3];
  local_resc = (uint)CONCAT11(param_1[6],param_1[7]) |
               (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10;
  if (param_4 == 0) {
    CAST_decrypt(&local_res8,param_3);
  }
  else {
    CAST_encrypt();
  }
  *param_2 = (char)(local_res8 >> 0x18);
  param_2[1] = (char)(local_res8 >> 0x10);
  param_2[2] = (char)(local_res8 >> 8);
  param_2[3] = (undefined1)local_res8;
  param_2[4] = (char)(local_resc >> 0x18);
  param_2[5] = (char)(local_resc >> 0x10);
  param_2[6] = (char)(local_resc >> 8);
  param_2[7] = (undefined1)local_resc;
  return;
}

