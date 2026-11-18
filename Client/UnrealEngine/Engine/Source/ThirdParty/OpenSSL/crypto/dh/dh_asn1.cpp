// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// FUN_14f72a830 @ 14f72a830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_14f72a830(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = DH_new();
    *param_2 = lVar1;
    return -(lVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    DH_free(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}

// d2i_DHparams @ 14f72a8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DHparams(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_DHxparams @ 14f72a8f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_DHxparams(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = DH_new();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)ASN1_item_d2i(0,param_2,param_3,&DAT_1534b8470);
    if (puVar2 != (undefined8 *)0x0) {
      if (param_1 != (longlong *)0x0) {
        DH_free(*param_1);
        *param_1 = lVar1;
      }
      *(undefined8 *)(lVar1 + 8) = *puVar2;
      *(undefined8 *)(lVar1 + 0x40) = puVar2[1];
      *(undefined8 *)(lVar1 + 0x10) = puVar2[2];
      *(undefined8 *)(lVar1 + 0x48) = puVar2[3];
      if ((longlong *)puVar2[4] != (longlong *)0x0) {
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(*(longlong *)puVar2[4] + 8);
        *(undefined4 *)(lVar1 + 0x58) = **(undefined4 **)puVar2[4];
        *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(puVar2[4] + 8);
        *(undefined8 *)(*(longlong *)puVar2[4] + 8) = 0;
        ASN1_BIT_STRING_free(*(undefined8 *)puVar2[4]);
        CRYPTO_free(puVar2[4],"crypto\\dh\\dh_asn1.c",0x6e);
        puVar2[4] = 0;
      }
      CRYPTO_free(puVar2,"crypto\\dh\\dh_asn1.c",0x72);
      return lVar1;
    }
    DH_free(lVar1);
  }
  return 0;
}

// d2i_int_dhx @ 14f72aa10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_int_dhx(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_DHparams @ 14f72aa40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DHparams(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b8330);
  return;
}

// i2d_DHxparams @ 14f72aa70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DHxparams(longlong param_1,undefined8 param_2)

{
  int *local_58;
  longlong local_50;
  int local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 **local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f72aa7a;
  local_30 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  if (((*(longlong *)(param_1 + 0x60) == 0) || (*(longlong *)(param_1 + 0x50) == 0)) ||
     (*(int *)(param_1 + 0x58) < 1)) {
    local_10 = (int **)0x0;
  }
  else {
    local_58 = local_48;
    local_10 = &local_58;
    local_38 = 8;
    local_50 = *(longlong *)(param_1 + 0x60);
    local_48[0] = *(int *)(param_1 + 0x58);
    local_40 = *(longlong *)(param_1 + 0x50);
  }
  ASN1_item_i2d(&local_30,param_2,&DAT_1534b8470);
  return;
}

// i2d_int_dhx @ 14f72ab20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_int_dhx(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b8470);
  return;
}

