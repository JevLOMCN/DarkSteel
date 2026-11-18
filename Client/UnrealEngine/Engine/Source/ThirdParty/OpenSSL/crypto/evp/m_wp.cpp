// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f7622f0 @ 14f7622f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7622f0(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  WHIRLPOOL_Init(uVar1);
  return;
}

// FUN_14f762320 @ 14f762320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f762320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  WHIRLPOOL_Update(uVar1,param_2,param_3);
  return;
}

// FUN_14f762360 @ 14f762360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f762360(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  WHIRLPOOL_Final(param_2,uVar1);
  return;
}

// EVP_whirlpool @ 14f762390

undefined * EVP_whirlpool(void)

{
  return &DAT_1534c3350;
}

