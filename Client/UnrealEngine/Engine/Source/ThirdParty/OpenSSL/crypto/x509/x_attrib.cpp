// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// X509_ATTRIBUTE_create @ 14f7229a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * X509_ATTRIBUTE_create(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = OBJ_nid2obj();
  if (lVar2 == 0) {
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)ASN1_item_new(&DAT_1534b7090);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = lVar2;
    lVar2 = ASN1_TYPE_new();
    if ((lVar2 != 0) && (iVar1 = OPENSSL_sk_push(plVar3[1],lVar2), iVar1 != 0)) {
      ASN1_TYPE_set(lVar2,param_2,param_3);
      return plVar3;
    }
    ASN1_item_free(plVar3,&DAT_1534b7090);
    ASN1_TYPE_free(lVar2);
  }
  return (longlong *)0x0;
}

// X509_ATTRIBUTE_dup @ 14f722a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ATTRIBUTE_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534b7090,param_1);
  return;
}

// X509_ATTRIBUTE_free @ 14f722a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ATTRIBUTE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b7090);
  return;
}

// X509_ATTRIBUTE_new @ 14f722ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_ATTRIBUTE_new(void)

{
  ASN1_item_new(&DAT_1534b7090);
  return;
}

// d2i_X509_ATTRIBUTE @ 14f722b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_ATTRIBUTE(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_ATTRIBUTE @ 14f722b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_ATTRIBUTE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b7090);
  return;
}

// FUN_14f722b60 @ 14f722b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f722b60(void)

{
  OPENSSL_sk_push();
  return;
}

