// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// X509_ALGOR_it @ 14f718870

undefined * X509_ALGOR_it(void)

{
  return &DAT_1534b5ce0;
}

// X509_ALGORS_it @ 14f718880

undefined * X509_ALGORS_it(void)

{
  return &DAT_1534b5d30;
}

// X509_ALGOR_cmp @ 14f718890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = OBJ_cmp(*param_1,*param_2);
  if (iVar1 == 0) {
    if ((param_1[1] == 0) && (param_2[1] == 0)) {
      return;
    }
    ASN1_TYPE_cmp(param_1[1],param_2[1]);
  }
  return;
}

// X509_ALGOR_copy @ 14f7188f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_ALGOR_copy(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_2 != (longlong *)0x0) && (param_1 != (longlong *)0x0)) {
    if (*param_1 != 0) {
      ASN1_OBJECT_free();
    }
    *param_1 = 0;
    if (param_1[1] != 0) {
      ASN1_TYPE_free();
    }
    param_1[1] = 0;
    if (*param_2 != 0) {
      lVar2 = OBJ_dup();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    if (param_2[1] == 0) {
      return 1;
    }
    lVar2 = ASN1_TYPE_new();
    param_1[1] = lVar2;
    if ((lVar2 != 0) &&
       (iVar1 = ASN1_TYPE_set1(lVar2,*(undefined4 *)param_2[1],
                               *(undefined8 *)((undefined4 *)param_2[1] + 2)), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

// X509_ALGOR_dup @ 14f7189a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534b5ce0,param_1);
  return;
}

// X509_ALGOR_free @ 14f7189d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b5ce0);
  return;
}

// X509_ALGOR_get0 @ 14f718a00

void X509_ALGOR_get0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4
                    )

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_4;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((undefined4 *)param_4[1] == (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
      return;
    }
    *param_2 = *(undefined4 *)param_4[1];
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_4[1] + 8);
    }
  }
  return;
}

// X509_ALGOR_new @ 14f718a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_new(void)

{
  ASN1_item_new(&DAT_1534b5ce0);
  return;
}

// X509_ALGOR_set0 @ 14f718a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_ALGOR_set0(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_14f718a9e:
    uVar1 = 0;
  }
  else {
    if (param_3 != -1) {
      if (param_1[1] == 0) {
        uVar1 = ASN1_TYPE_new();
        param_1[1] = uVar1;
      }
      if (param_1[1] == 0) goto LAB_14f718a9e;
    }
    ASN1_OBJECT_free(*param_1);
    *param_1 = param_2;
    if (param_3 != 0) {
      if (param_3 == -1) {
        ASN1_TYPE_free();
        param_1[1] = 0;
      }
      else {
        ASN1_TYPE_set(param_1[1],param_3,param_4);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

// X509_ALGOR_set_md @ 14f718b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ALGOR_set_md(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if ((*(byte *)(param_2 + 0xc) & 8) == 0) {
    uVar3 = 5;
  }
  uVar1 = EVP_MD_type(param_2);
  uVar2 = OBJ_nid2obj(uVar1);
  X509_ALGOR_set0(param_1,uVar2,uVar3,0);
  return;
}

// d2i_X509_ALGOR @ 14f718b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_ALGOR(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_X509_ALGORS @ 14f718ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_ALGORS(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_ALGOR @ 14f718bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_ALGOR(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5ce0);
  return;
}

// i2d_X509_ALGORS @ 14f718c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_ALGORS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5d30);
  return;
}

