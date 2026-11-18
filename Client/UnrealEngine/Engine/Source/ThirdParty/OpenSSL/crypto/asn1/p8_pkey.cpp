// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// FUN_14f719fd0 @ 14f719fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f719fd0(int param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  
  if ((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x10), piVar1 != (int *)0x0)) {
    OPENSSL_cleanse(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,param_3,param_4,0x14f719fda);
  }
  return 1;
}

// PKCS8_PRIV_KEY_INFO_free @ 14f71a010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_PRIV_KEY_INFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b6240);
  return;
}

// PKCS8_PRIV_KEY_INFO_it @ 14f71a040

undefined * PKCS8_PRIV_KEY_INFO_it(void)

{
  return &DAT_1534b6240;
}

// PKCS8_PRIV_KEY_INFO_new @ 14f71a050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_PRIV_KEY_INFO_new(void)

{
  ASN1_item_new(&DAT_1534b6240);
  return;
}

// PKCS8_pkey_add1_attr_by_NID @ 14f71a080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS8_pkey_add1_attr_by_NID(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x18);
  return lVar1 != 0;
}

// PKCS8_pkey_get0 @ 14f71a0c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS8_pkey_get0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
               longlong param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = **(undefined8 **)(param_5 + 8);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = ASN1_STRING_get0_data(*(undefined8 *)(param_5 + 0x10));
    *param_2 = uVar2;
    uVar1 = ASN1_STRING_length(*(undefined8 *)(param_5 + 0x10));
    *param_3 = uVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_5 + 8);
  }
  return 1;
}

// PKCS8_pkey_get0_attrs @ 14f71a150

undefined8 PKCS8_pkey_get0_attrs(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// PKCS8_pkey_set0 @ 14f71a160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS8_pkey_set0(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
               undefined8 param_5,longlong param_6,undefined4 param_7)

{
  int iVar1;
  
  if ((-1 < param_3) && (iVar1 = ASN1_INTEGER_set(*param_1,param_3), iVar1 == 0)) {
    return 0;
  }
  iVar1 = X509_ALGOR_set0(param_1[1],param_2,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_6 != 0) {
    ASN1_STRING_set0(param_1[2],param_6,param_7);
  }
  return 1;
}

// d2i_PKCS8_PRIV_KEY_INFO @ 14f71a200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS8_PRIV_KEY_INFO(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_PKCS8_PRIV_KEY_INFO @ 14f71a230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS8_PRIV_KEY_INFO(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b6240);
  return;
}

