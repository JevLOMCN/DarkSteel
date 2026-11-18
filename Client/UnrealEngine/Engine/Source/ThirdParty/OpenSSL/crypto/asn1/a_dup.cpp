// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// ASN1_dup @ 14f71b370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_dup(code *param_1,code *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res18;
  longlong local_res20;
  undefined8 uVar4;
  
  uVar4 = 0x14f71b37e;
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = (*param_1)(param_3,0);
  lVar3 = CRYPTO_malloc((longlong)(iVar1 + 10),"crypto\\asn1\\a_dup.c",0x1b);
  if (lVar3 == 0) {
    ERR_put_error(0xd,0x6f,0x41,"crypto\\asn1\\a_dup.c",0x1d,uVar4);
    return 0;
  }
  local_res18 = lVar3;
  uVar2 = (*param_1)(param_3,&local_res18);
  local_res20 = lVar3;
  uVar4 = (*param_2)(0,&local_res20,uVar2);
  CRYPTO_free(lVar3,"crypto\\asn1\\a_dup.c",0x24);
  return uVar4;
}

// ASN1_item_dup @ 14f71b440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_item_dup(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 uVar2;
  
  uVar2 = 0x14f71b44c;
  local_res10 = 0;
  if (param_2 != 0) {
    uVar1 = ASN1_item_i2d(param_2,&local_res10,param_1);
    if (local_res10 != 0) {
      local_res18[0] = local_res10;
      uVar2 = ASN1_item_d2i(0,local_res18,uVar1,param_1);
      CRYPTO_free(local_res10,"crypto\\asn1\\a_dup.c",0x42);
      return uVar2;
    }
    ERR_put_error(0xd,0xbf,0x41,"crypto\\asn1\\a_dup.c",0x3d,uVar2);
  }
  return 0;
}

