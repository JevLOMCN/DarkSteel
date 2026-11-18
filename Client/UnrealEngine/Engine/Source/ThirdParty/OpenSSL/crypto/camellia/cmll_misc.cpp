// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// Camellia_decrypt @ 14f7411f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Camellia_decrypt(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  Camellia_DecryptBlock_Rounds(*(undefined4 *)(param_3 + 0x110),param_1,param_3,param_2);
  return;
}

// Camellia_encrypt @ 14f741220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Camellia_encrypt(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  Camellia_EncryptBlock_Rounds(*(undefined4 *)(param_3 + 0x110),param_1,param_3,param_2);
  return;
}

// Camellia_set_key @ 14f741250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 Camellia_set_key(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xffffffff;
  }
  if (((param_2 - 0x80U & 0xffffff3f) == 0) && (param_2 != 0x140)) {
    uVar1 = Camellia_Ekeygen(param_2,param_1);
    *(undefined4 *)(param_3 + 0x110) = uVar1;
    return 0;
  }
  return 0xfffffffe;
}

