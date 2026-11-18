// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// i2s_ASN1_ENUMERATED_TABLE @ 14f782970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2s_ASN1_ENUMERATED_TABLE(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = ASN1_ENUMERATED_get(param_2);
  lVar1 = *(longlong *)(*(int **)(param_1 + 0x60) + 2);
  piVar2 = *(int **)(param_1 + 0x60);
  while( true ) {
    if (lVar1 == 0) {
      i2s_ASN1_ENUMERATED(param_1,param_2);
      return;
    }
    if (iVar3 == *piVar2) break;
    lVar1 = *(longlong *)(piVar2 + 8);
    piVar2 = piVar2 + 6;
  }
  CRYPTO_strdup(*(undefined8 *)(piVar2 + 2),"crypto\\x509v3\\v3_enum.c",0x32);
  return;
}

