// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f762240 @ 14f762240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f762240(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  RIPEMD160_Init(uVar1);
  return;
}

// FUN_14f762270 @ 14f762270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f762270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  RIPEMD160_Update(uVar1,param_2,param_3);
  return;
}

// FUN_14f7622b0 @ 14f7622b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7622b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  RIPEMD160_Final(param_2,uVar1);
  return;
}

// EVP_ripemd160 @ 14f7622e0

undefined * EVP_ripemd160(void)

{
  return &DAT_1534c3300;
}

