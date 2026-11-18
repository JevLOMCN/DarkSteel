// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// EC_GROUP_new_curve_GF2m @ 14f75dd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_curve_GF2m
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f75dd90;
  uVar2 = EC_GF2m_simple_method();
  lVar3 = EC_GROUP_new(uVar2);
  if (lVar3 != 0) {
    iVar1 = EC_GROUP_set_curve(lVar3,param_1,param_2,param_3,param_4,uVar4);
    if (iVar1 != 0) {
      return lVar3;
    }
    EC_GROUP_clear_free(lVar3);
  }
  return 0;
}

// EC_GROUP_new_curve_GFp @ 14f75de00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_curve_GFp
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f75de20;
  uVar2 = EC_GFp_mont_method();
  lVar3 = EC_GROUP_new(uVar2);
  if (lVar3 != 0) {
    iVar1 = EC_GROUP_set_curve(lVar3,param_1,param_2,param_3,param_4,uVar4);
    if (iVar1 != 0) {
      return lVar3;
    }
    EC_GROUP_clear_free(lVar3);
  }
  return 0;
}

