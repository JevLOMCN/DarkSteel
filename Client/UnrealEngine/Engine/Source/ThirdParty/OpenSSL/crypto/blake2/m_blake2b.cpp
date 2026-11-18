// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f761d00 @ 14f761d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761d00(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  BLAKE2b_Init(uVar1);
  return;
}

// FUN_14f761d30 @ 14f761d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  BLAKE2b_Update(uVar1,param_2,param_3);
  return;
}

// FUN_14f761d70 @ 14f761d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761d70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  BLAKE2b_Final(param_2,uVar1);
  return;
}

// EVP_blake2b512 @ 14f761da0

undefined * EVP_blake2b512(void)

{
  return &DAT_1534c3030;
}

