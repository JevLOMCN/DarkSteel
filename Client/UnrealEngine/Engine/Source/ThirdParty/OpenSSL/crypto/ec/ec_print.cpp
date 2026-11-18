// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// EC_POINT_bn2point @ 14f7c5480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_POINT_bn2point(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4
                          )

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14f7c549e;
  iVar1 = BN_num_bits(param_2);
  uVar4 = (ulonglong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  lVar2 = CRYPTO_malloc(uVar4,"crypto\\ec\\ec_print.c",0x2b);
  if (lVar2 == 0) {
    ERR_put_error(0x10,0x118,0x41,"crypto\\ec\\ec_print.c",CONCAT44(uVar5,0x2c));
  }
  else {
    iVar1 = BN_bn2binpad(param_2,lVar2,uVar4 & 0xffffffff);
    if (iVar1 == 0) {
      uVar5 = 0x31;
    }
    else {
      lVar3 = param_3;
      if ((param_3 == 0) && (lVar3 = EC_POINT_new(param_1), lVar3 == 0)) {
        uVar5 = 0x37;
      }
      else {
        iVar1 = EC_POINT_oct2point(param_1,lVar3,lVar2,uVar4,param_4,uVar6);
        if (iVar1 != 0) {
          CRYPTO_free(lVar2,"crypto\\ec\\ec_print.c",0x44);
          return lVar3;
        }
        if (lVar3 != param_3) {
          EC_POINT_clear_free(lVar3);
        }
        uVar5 = 0x40;
      }
    }
    CRYPTO_free(lVar2,"crypto\\ec\\ec_print.c",uVar5);
  }
  return 0;
}

// EC_POINT_hex2point @ 14f7c55c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EC_POINT_hex2point(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7c55d5;
  local_18 = 0;
  iVar1 = BN_hex2bn(&local_18);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = EC_POINT_bn2point(param_1,local_18,param_3,param_4);
  BN_clear_free(local_18);
  return uVar2;
}

// EC_POINT_point2bn @ 14f7c5650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_point2bn(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  undefined8 local_18;
  
  uVar1 = EC_POINT_point2buf();
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = BN_bin2bn(local_18,uVar1 & 0xffffffff,in_R9);
  CRYPTO_free(local_18,"crypto\\ec\\ec_print.c",0x1d);
  return uVar2;
}

// EC_POINT_point2hex @ 14f7c56c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * EC_POINT_point2hex(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  lVar4 = EC_POINT_point2buf();
  if (lVar4 == 0) {
    return (undefined1 *)0x0;
  }
  puVar5 = (undefined1 *)CRYPTO_malloc(lVar4 * 2 + 2,"crypto\\ec\\ec_print.c",0x58);
  puVar3 = PTR_s_0123456789ABCDEF_154df9eb8;
  if (puVar5 == (undefined1 *)0x0) {
    CRYPTO_free(0,"crypto\\ec\\ec_print.c",0x5a);
    return (undefined1 *)0x0;
  }
  pbVar2 = (byte *)0x0;
  puVar6 = puVar5;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    *puVar6 = puVar3[bVar1 >> 4];
    puVar6[1] = puVar3[bVar1 & 0xf];
    puVar6 = puVar6 + 2;
  }
  *puVar6 = 0;
  CRYPTO_free(0,"crypto\\ec\\ec_print.c",0x66);
  return puVar5;
}

