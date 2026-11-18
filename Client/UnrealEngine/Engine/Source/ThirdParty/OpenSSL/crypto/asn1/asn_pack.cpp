// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// ASN1_item_pack @ 14f736280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * ASN1_item_pack(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f73629b;
  if (((param_3 == (longlong *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) &&
     (piVar2 = (int *)ASN1_STRING_new(), piVar2 == (int *)0x0)) {
    ERR_put_error(0xd,0xc6,0x41,"crypto\\asn1\\asn_pack.c",0x16,uVar5);
  }
  else {
    CRYPTO_free(*(undefined8 *)(piVar2 + 2),"crypto\\asn1\\asn_pack.c",0x1d);
    piVar2[2] = 0;
    piVar2[3] = 0;
    iVar1 = ASN1_item_i2d(param_1,piVar2 + 2,param_2);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      uVar4 = 0x21;
      uVar3 = 0x70;
    }
    else {
      if (*(longlong *)(piVar2 + 2) != 0) {
        if (param_3 == (longlong *)0x0) {
          return piVar2;
        }
        if (*param_3 == 0) {
          *param_3 = (longlong)piVar2;
          return piVar2;
        }
        return piVar2;
      }
      uVar4 = 0x25;
      uVar3 = 0x41;
    }
    ERR_put_error(0xd,0xc6,uVar3,"crypto\\asn1\\asn_pack.c",uVar4,uVar5);
    if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
      ASN1_STRING_free(piVar2);
    }
  }
  return (int *)0x0;
}

// ASN1_item_unpack @ 14f7363b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_item_unpack(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined8 uVar2;
  
  uVar2 = 0x14f7363bc;
  local_res8[0] = *(undefined8 *)(param_1 + 2);
  lVar1 = ASN1_item_d2i(0,local_res8,*param_1,param_2);
  if (lVar1 == 0) {
    ERR_put_error(0xd,199,0x6e,"crypto\\asn1\\asn_pack.c",0x3c,uVar2);
  }
  return lVar1;
}

