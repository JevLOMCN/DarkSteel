// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// EDIPARTYNAME_free @ 14f70a9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EDIPARTYNAME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3780);
  return;
}

// EDIPARTYNAME_new @ 14f70a9d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EDIPARTYNAME_new(void)

{
  ASN1_item_new(&DAT_1534b3780);
  return;
}

// GENERAL_NAMES_free @ 14f70aa00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAMES_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3920);
  return;
}

// GENERAL_NAMES_new @ 14f70aa40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAMES_new(void)

{
  ASN1_item_new(&DAT_1534b3920);
  return;
}

// GENERAL_NAME_cmp @ 14f70aa70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong GENERAL_NAME_cmp(int *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffff;
  uVar2 = 0xffffffff;
  if (((param_1 != (int *)0x0) && (uVar2 = uVar3, param_2 != (int *)0x0)) && (*param_1 == *param_2))
  {
    switch(*param_1) {
    case 0:
      uVar2 = OTHERNAME_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 1:
    case 2:
    case 3:
    case 6:
      uVar2 = ASN1_STRING_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 4:
      uVar2 = X509_NAME_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 5:
      uVar2 = FUN_14f70aef0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 7:
      uVar2 = ASN1_OCTET_STRING_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 8:
      uVar1 = OBJ_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),0xffffffff,param_1,
                      0x14f70aa7a);
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2;
}

// GENERAL_NAME_dup @ 14f70ab70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAME_dup(undefined8 param_1)

{
  ASN1_dup(i2d_GENERAL_NAME,d2i_GENERAL_NAME,param_1);
  return;
}

// GENERAL_NAME_free @ 14f70aba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b38d0);
  return;
}

// GENERAL_NAME_new @ 14f70ac70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_NAME_new(void)

{
  ASN1_item_new(&DAT_1534b38d0);
  return;
}

// GENERAL_NAME_set0_othername @ 14f70aca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool GENERAL_NAME_set0_othername(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ASN1_item_new(&DAT_1534b3710);
  if (puVar1 != (undefined8 *)0x0) {
    ASN1_TYPE_free(puVar1[1]);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined8 **)(param_1 + 2) = puVar1;
    *param_1 = 0;
  }
  return puVar1 != (undefined8 *)0x0;
}

// OTHERNAME_cmp @ 14f70ad70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OTHERNAME_cmp(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = OBJ_cmp(*param_1,*param_2);
    if ((int)uVar1 == 0) {
      uVar1 = ASN1_TYPE_cmp(param_1[1],param_2[1]);
      return uVar1;
    }
  }
  return uVar1;
}

// OTHERNAME_free @ 14f70add0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OTHERNAME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3710);
  return;
}

// OTHERNAME_new @ 14f70ae00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OTHERNAME_new(void)

{
  ASN1_item_new(&DAT_1534b3710);
  return;
}

// d2i_EDIPARTYNAME @ 14f70ae30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_EDIPARTYNAME(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_GENERAL_NAME @ 14f70ae60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_GENERAL_NAME(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_GENERAL_NAMES @ 14f70ae90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_GENERAL_NAMES(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_OTHERNAME @ 14f70aec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_OTHERNAME(void)

{
  ASN1_item_d2i();
  return;
}

// FUN_14f70aef0 @ 14f70aef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70aef0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    if (*param_1 == 0) {
      if (*param_2 != 0) {
        return 0xffffffff;
      }
    }
    else {
      if (*param_2 == 0) {
        return 1;
      }
      if ((*param_1 != 0) && (uVar1 = ASN1_STRING_cmp(), (int)uVar1 != 0)) {
        return uVar1;
      }
    }
    if ((param_1[1] != 0) && (param_2[1] != 0)) {
      uVar1 = ASN1_STRING_cmp();
      return uVar1;
    }
  }
  return 0xffffffff;
}

// i2d_EDIPARTYNAME @ 14f70af80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_EDIPARTYNAME(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3780);
  return;
}

// i2d_GENERAL_NAME @ 14f70afb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_GENERAL_NAME(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b38d0);
  return;
}

// i2d_GENERAL_NAMES @ 14f70afe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_GENERAL_NAMES(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3920);
  return;
}

// i2d_OTHERNAME @ 14f70b010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_OTHERNAME(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3710);
  return;
}

