// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f6d8530 @ 14f6d8530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d8530(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = EVP_CIPHER_CTX_key_length();
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  RC4_set_key(uVar2,uVar1,param_2);
  return 1;
}

// FUN_14f6d8590 @ 14f6d8590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6d8590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  RC4(uVar1,param_4,param_3,param_2);
  return 1;
}

// EVP_rc4 @ 14f6d85f0

undefined * EVP_rc4(void)

{
  return &DAT_1534a7d20;
}

// EVP_rc4_40 @ 14f6d8600

undefined * EVP_rc4_40(void)

{
  return &DAT_1534a7d80;
}

