// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f762190 @ 14f762190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f762190(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MDC2_Init(uVar1);
  return;
}

// FUN_14f7621c0 @ 14f7621c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7621c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MDC2_Update(uVar1,param_2,param_3);
  return;
}

// FUN_14f762200 @ 14f762200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f762200(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MDC2_Final(param_2,uVar1);
  return;
}

// EVP_mdc2 @ 14f762230

undefined * EVP_mdc2(void)

{
  return &DAT_1534c32b0;
}

