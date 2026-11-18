// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f7623a0 @ 14f7623a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7623a0(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  sm3_init(uVar1);
  return;
}

// FUN_14f7623d0 @ 14f7623d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7623d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  sm3_update(uVar1,param_2,param_3);
  return;
}

// FUN_14f762410 @ 14f762410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f762410(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  sm3_final(param_2,uVar1);
  return;
}

// EVP_sm3 @ 14f762440

undefined * EVP_sm3(void)

{
  return &DAT_1534c33a0;
}

