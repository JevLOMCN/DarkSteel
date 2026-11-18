// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f761c50 @ 14f761c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761c50(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MD4_Init(uVar1);
  return;
}

// FUN_14f761c80 @ 14f761c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MD4_Update(uVar1,param_2,param_3);
  return;
}

// FUN_14f761cc0 @ 14f761cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761cc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MD4_Final(param_2,uVar1);
  return;
}

// EVP_md4 @ 14f761cf0

undefined * EVP_md4(void)

{
  return &DAT_1534c2fe0;
}

