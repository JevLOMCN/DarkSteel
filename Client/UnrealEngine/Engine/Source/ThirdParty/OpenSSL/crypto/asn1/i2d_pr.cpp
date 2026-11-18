// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// i2d_PrivateKey @ 14f714c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2d_PrivateKey(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(code **)(lVar3 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f714c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar3 + 0xc0))();
      return uVar2;
    }
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x48) != 0)) {
      lVar3 = EVP_PKEY2PKCS8();
      uVar2 = 0;
      if (lVar3 != 0) {
        uVar1 = i2d_PKCS8_PRIV_KEY_INFO(lVar3,param_2);
        uVar2 = (ulonglong)uVar1;
        PKCS8_PRIV_KEY_INFO_free(lVar3);
      }
      return uVar2;
    }
  }
  ERR_put_error(0xd,0xa3,0xa7,"crypto\\asn1\\i2d_pr.c",0x1f,0x14f714c3c);
  return 0xffffffff;
}

