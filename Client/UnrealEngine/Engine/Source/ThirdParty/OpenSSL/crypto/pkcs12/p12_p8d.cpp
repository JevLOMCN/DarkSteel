// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// PKCS8_decrypt @ 14f75f090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_decrypt(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f75f0a0;
  X509_SIG_get0(param_1,&local_18,&local_res20);
  uVar1 = PKCS8_PRIV_KEY_INFO_it();
  PKCS12_item_decrypt_d2i(local_18,uVar1,param_2,param_3,local_res20,1);
  return;
}

