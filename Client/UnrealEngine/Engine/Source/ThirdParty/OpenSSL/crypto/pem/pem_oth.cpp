// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// PEM_ASN1_read_bio @ 14f6e5b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PEM_ASN1_read_bio(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6e5b50;
  local_18 = 0;
  local_20 = 0;
  iVar1 = PEM_bytes_read_bio(&local_20,local_28,0,param_2,param_3,param_5,param_6);
  uVar3 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  local_18 = local_20;
  lVar2 = (*param_1)(param_4,&local_18,local_28[0]);
  if (lVar2 == 0) {
    ERR_put_error(9,0x67,0xd,"crypto\\pem\\pem_oth.c",CONCAT44(uVar3,0x21));
  }
  CRYPTO_free(local_20,"crypto\\pem\\pem_oth.c",0x22);
  return lVar2;
}

