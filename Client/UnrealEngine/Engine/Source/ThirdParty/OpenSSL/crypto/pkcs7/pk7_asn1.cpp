// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 50

// FUN_14f717eb0 @ 14f717eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f717eb0(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 10) {
    iVar1 = PKCS7_stream(param_4 + 2,*param_2);
    if (iVar1 < 1) {
      return 0;
    }
LAB_14f717f0a:
    lVar2 = PKCS7_dataInit(*param_2,*param_4);
    param_4[1] = lVar2;
    if (lVar2 != 0) {
      return 1;
    }
  }
  else {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) goto LAB_14f717f0a;
      if (param_1 != 0xd) {
        return 1;
      }
    }
    iVar1 = PKCS7_dataFinal(*param_2,param_4[1]);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f717f40 @ 14f717f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f717f40(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    EVP_PKEY_free(*(undefined8 *)(*param_2 + 0x38));
  }
  return 1;
}

// PKCS7_ISSUER_AND_SERIAL_it @ 14f717f70

undefined * PKCS7_ISSUER_AND_SERIAL_it(void)

{
  return &DAT_1534b5560;
}

// FUN_14f717fa0 @ 14f717fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f717fa0(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    X509_free(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}

// PKCS7_it @ 14f718030

undefined * PKCS7_it(void)

{
  return &DAT_1534b52f0;
}

// PKCS7_ATTR_SIGN_it @ 14f718040

undefined * PKCS7_ATTR_SIGN_it(void)

{
  return &DAT_1534b59e0;
}

// PKCS7_ATTR_VERIFY_it @ 14f718050

undefined * PKCS7_ATTR_VERIFY_it(void)

{
  return &DAT_1534b5a30;
}

// PKCS7_DIGEST_free @ 14f718060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_DIGEST_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b5990);
  return;
}

// PKCS7_DIGEST_new @ 14f718090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_DIGEST_new(void)

{
  ASN1_item_new(&DAT_1534b5990);
  return;
}

// PKCS7_ENCRYPT_free @ 14f7180c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ENCRYPT_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b58e0);
  return;
}

// PKCS7_ENCRYPT_new @ 14f7180f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ENCRYPT_new(void)

{
  ASN1_item_new(&DAT_1534b58e0);
  return;
}

// PKCS7_ENC_CONTENT_free @ 14f718120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ENC_CONTENT_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b5760);
  return;
}

// PKCS7_ENC_CONTENT_new @ 14f718150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ENC_CONTENT_new(void)

{
  ASN1_item_new(&DAT_1534b5760);
  return;
}

// PKCS7_ENVELOPE_free @ 14f718180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ENVELOPE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b55f0);
  return;
}

// PKCS7_ENVELOPE_new @ 14f7181b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ENVELOPE_new(void)

{
  ASN1_item_new(&DAT_1534b55f0);
  return;
}

// PKCS7_ISSUER_AND_SERIAL_free @ 14f7181e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ISSUER_AND_SERIAL_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b5560);
  return;
}

// PKCS7_ISSUER_AND_SERIAL_new @ 14f718210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_ISSUER_AND_SERIAL_new(void)

{
  ASN1_item_new(&DAT_1534b5560);
  return;
}

// PKCS7_RECIP_INFO_free @ 14f718240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_RECIP_INFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b56d0);
  return;
}

// PKCS7_RECIP_INFO_new @ 14f718270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_RECIP_INFO_new(void)

{
  ASN1_item_new(&DAT_1534b56d0);
  return;
}

// PKCS7_SIGNED_free @ 14f7182a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_SIGNED_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b53e0);
  return;
}

// PKCS7_SIGNED_new @ 14f7182d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_SIGNED_new(void)

{
  ASN1_item_new(&DAT_1534b53e0);
  return;
}

// PKCS7_SIGNER_INFO_free @ 14f718300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_SIGNER_INFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b54f0);
  return;
}

// PKCS7_SIGNER_INFO_new @ 14f718330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_SIGNER_INFO_new(void)

{
  ASN1_item_new(&DAT_1534b54f0);
  return;
}

// PKCS7_SIGN_ENVELOPE_free @ 14f718360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_SIGN_ENVELOPE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b5870);
  return;
}

// PKCS7_SIGN_ENVELOPE_new @ 14f718390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_SIGN_ENVELOPE_new(void)

{
  ASN1_item_new(&DAT_1534b5870);
  return;
}

// PKCS7_dup @ 14f7183c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534b52f0,param_1);
  return;
}

// PKCS7_free @ 14f7183f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b52f0);
  return;
}

// PKCS7_new @ 14f718420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_new(void)

{
  ASN1_item_new(&DAT_1534b52f0);
  return;
}

// PKCS7_print_ctx @ 14f718450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_print_ctx(void)

{
  ASN1_item_print();
  return;
}

// d2i_PKCS7 @ 14f718480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_DIGEST @ 14f7184b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_DIGEST(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_ENCRYPT @ 14f7184e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_ENCRYPT(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_ENC_CONTENT @ 14f718510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_ENC_CONTENT(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_ENVELOPE @ 14f718540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_ENVELOPE(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_ISSUER_AND_SERIAL @ 14f718570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_ISSUER_AND_SERIAL(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_RECIP_INFO @ 14f7185a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_RECIP_INFO(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_SIGNED @ 14f7185d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_SIGNED(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_SIGNER_INFO @ 14f718600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_SIGNER_INFO(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PKCS7_SIGN_ENVELOPE @ 14f718630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS7_SIGN_ENVELOPE(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_PKCS7 @ 14f718660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b52f0);
  return;
}

// i2d_PKCS7_DIGEST @ 14f718690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_DIGEST(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5990);
  return;
}

// i2d_PKCS7_ENCRYPT @ 14f7186c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_ENCRYPT(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b58e0);
  return;
}

// i2d_PKCS7_ENC_CONTENT @ 14f7186f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_ENC_CONTENT(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5760);
  return;
}

// i2d_PKCS7_ENVELOPE @ 14f718720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_ENVELOPE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b55f0);
  return;
}

// i2d_PKCS7_ISSUER_AND_SERIAL @ 14f718750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_ISSUER_AND_SERIAL(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5560);
  return;
}

// i2d_PKCS7_NDEF @ 14f718780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_NDEF(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_ndef_i2d(param_1,param_2,&DAT_1534b52f0);
  return;
}

// i2d_PKCS7_RECIP_INFO @ 14f7187b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_RECIP_INFO(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b56d0);
  return;
}

// i2d_PKCS7_SIGNED @ 14f7187e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_SIGNED(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b53e0);
  return;
}

// i2d_PKCS7_SIGNER_INFO @ 14f718810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_SIGNER_INFO(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b54f0);
  return;
}

// i2d_PKCS7_SIGN_ENVELOPE @ 14f718840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS7_SIGN_ENVELOPE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b5870);
  return;
}

