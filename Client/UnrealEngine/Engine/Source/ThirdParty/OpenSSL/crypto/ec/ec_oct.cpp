// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// EC_POINT_oct2point @ 14f755ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_oct2point(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0xa8) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x6a;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f755b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0xa8))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = ec_GFp_simple_oct2point();
        return uVar2;
      }
      uVar2 = ec_GF2m_simple_oct2point();
      return uVar2;
    }
    uVar2 = 0x6e;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x7a,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x14f755aec);
  return 0;
}

// EC_POINT_point2buf @ 14f755bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_POINT_point2buf(undefined8 param_1,undefined8 param_2,undefined4 param_3,
                           longlong *param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  lVar1 = EC_POINT_point2oct();
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = CRYPTO_malloc(lVar1,"crypto\\ec\\ec_oct.c",0x8b);
    if (lVar2 == 0) {
      ERR_put_error(0x10,0x119,0x41,"crypto\\ec\\ec_oct.c",CONCAT44(uVar4,0x8c),uVar5);
      lVar3 = 0;
    }
    else {
      lVar3 = EC_POINT_point2oct(param_1,param_2,param_3,lVar2,lVar1,param_5);
      if (lVar3 == 0) {
        CRYPTO_free(lVar2,"crypto\\ec\\ec_oct.c",0x91);
        lVar3 = 0;
      }
      else {
        *param_4 = lVar2;
      }
    }
  }
  return lVar3;
}

// EC_POINT_point2oct @ 14f755ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_point2oct(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0xa0) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x4c;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f755d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0xa0))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = ec_GFp_simple_point2oct();
        return uVar2;
      }
      uVar2 = ec_GF2m_simple_point2oct();
      return uVar2;
    }
    uVar2 = 0x50;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x7b,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x14f755cac);
  return 0;
}

// EC_POINT_set_compressed_coordinates @ 14f755d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_set_compressed_coordinates
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x98) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x18;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f755dff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x98))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = ec_GFp_simple_set_compressed_coordinates();
        return uVar2;
      }
      uVar2 = ec_GF2m_simple_set_compressed_coordinates();
      return uVar2;
    }
    uVar2 = 0x1d;
    uVar3 = 0x65;
  }
  ERR_put_error(0x10,0x127,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x14f755d7c);
  return 0;
}

// EC_POINT_set_compressed_coordinates_GF2m @ 14f755e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_set_compressed_coordinates_GF2m(void)

{
  EC_POINT_set_compressed_coordinates();
  return;
}

// EC_POINT_set_compressed_coordinates_GFp @ 14f755e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_POINT_set_compressed_coordinates_GFp(void)

{
  EC_POINT_set_compressed_coordinates();
  return;
}

