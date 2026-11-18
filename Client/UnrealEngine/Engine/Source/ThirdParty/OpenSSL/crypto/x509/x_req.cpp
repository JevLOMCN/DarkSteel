// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// X509_REQ_INFO_it @ 14f718d40

undefined * X509_REQ_INFO_it(void)

{
  return &DAT_1534b5ef0;
}

// FUN_14f718d50 @ 14f718d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f718d50(int param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (param_1 == 1) {
    lVar2 = OPENSSL_sk_new_null();
    *(longlong *)(lVar1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

// X509_REQ_INFO_free @ 14f718d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_INFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b5ef0);
  return;
}

// X509_REQ_INFO_new @ 14f718dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_INFO_new(void)

{
  ASN1_item_new(&DAT_1534b5ef0);
  return;
}

// X509_REQ_dup @ 14f718df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534b5f80,param_1);
  return;
}

// X509_REQ_free @ 14f718e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b5f80);
  return;
}

// X509_REQ_it @ 14f718e50

undefined * X509_REQ_it(void)

{
  return &DAT_1534b5f80;
}

// X509_REQ_new @ 14f718e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_new(void)

{
  ASN1_item_new(&DAT_1534b5f80);
  return;
}

// d2i_X509_REQ @ 14f718e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_REQ(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_X509_REQ_INFO @ 14f718ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_REQ_INFO(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_REQ @ 14f718ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_REQ(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5f80);
  return;
}

// i2d_X509_REQ_INFO @ 14f718f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_REQ_INFO(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5ef0);
  return;
}

// FUN_14f718f50 @ 14f718f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f718f50(void)

{
  OPENSSL_sk_new_null();
  return;
}

