// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// X509_STORE_load_locations @ 14f6cc1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_load_locations(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6cc1d5;
  if (param_2 != 0) {
    uVar2 = X509_LOOKUP_file();
    lVar3 = X509_STORE_add_lookup(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = X509_LOOKUP_ctrl(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      return 1;
    }
  }
  else {
    uVar2 = X509_LOOKUP_hash_dir();
    lVar3 = X509_STORE_add_lookup(param_1,uVar2);
    if ((lVar3 != 0) && (iVar1 = X509_LOOKUP_ctrl(lVar3,2,param_3,1,0,uVar4), iVar1 == 1)) {
      return 1;
    }
  }
  return 0;
}

// X509_STORE_set_default_paths @ 14f6cc290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_set_default_paths(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6cc29c;
  uVar1 = X509_LOOKUP_file();
  lVar2 = X509_STORE_add_lookup(param_1,uVar1);
  if (lVar2 != 0) {
    X509_LOOKUP_ctrl(lVar2,1,0,3,0,uVar3);
    uVar1 = X509_LOOKUP_hash_dir();
    lVar2 = X509_STORE_add_lookup(param_1,uVar1);
    if (lVar2 != 0) {
      X509_LOOKUP_ctrl(lVar2,2,0,3,0);
      ERR_clear_error();
      return 1;
    }
  }
  return 0;
}

