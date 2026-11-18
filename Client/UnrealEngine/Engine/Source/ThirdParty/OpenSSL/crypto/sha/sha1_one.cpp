// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// SHA1 @ 14f73d5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * SHA1(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f73d5ce;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar2 = &DAT_1553e2f50;
  if (param_3 != (undefined *)0x0) {
    puVar2 = param_3;
  }
  iVar1 = SHA1_Init(local_88);
  if (iVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    SHA1_Update(local_88,param_1,param_2);
    SHA1_Final(puVar2,local_88);
    OPENSSL_cleanse(local_88,0x60);
  }
  return puVar2;
}

