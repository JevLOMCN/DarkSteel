// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f6d69a0 @ 14f6d69a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d69a0(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MD5_Init(uVar1);
  return;
}

// FUN_14f6d69d0 @ 14f6d69d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d69d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MD5_Update(uVar1,param_2,param_3);
  return;
}

// FUN_14f6d6a10 @ 14f6d6a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d6a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  MD5_Final(param_2,uVar1);
  return;
}

// EVP_md5 @ 14f6d6a40

undefined * EVP_md5(void)

{
  return &DAT_1534a7610;
}

