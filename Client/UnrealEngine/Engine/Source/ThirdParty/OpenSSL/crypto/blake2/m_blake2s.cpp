// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f761db0 @ 14f761db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761db0(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  BLAKE2s_Init(uVar1);
  return;
}

// FUN_14f761de0 @ 14f761de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  BLAKE2s_Update(uVar1,param_2,param_3);
  return;
}

// FUN_14f761e20 @ 14f761e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761e20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  BLAKE2s_Final(param_2,uVar1);
  return;
}

// EVP_blake2s256 @ 14f761e50

undefined * EVP_blake2s256(void)

{
  return &DAT_1534c3080;
}

