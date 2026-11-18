// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// BIO_new_CMS @ 14f7c57b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_new_CMS(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  BIO_new_NDEF(param_1,param_2,uVar1);
  return;
}

// CMS_stream @ 14f7c57f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_stream(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7c5800;
  plVar1 = (longlong *)CMS_get0_content(param_2);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if (*plVar1 == 0) {
    lVar2 = ASN1_OCTET_STRING_new();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(0x2e,0x9b,0x41,"crypto\\cms\\cms_io.c",0x1f,uVar3);
      return 0;
    }
  }
  *(uint *)(*plVar1 + 0x10) = *(uint *)(*plVar1 + 0x10) | 0x10;
  *(uint *)(*plVar1 + 0x10) = *(uint *)(*plVar1 + 0x10) & 0xffffffdf;
  *param_1 = *plVar1 + 8;
  return 1;
}

// PEM_read_CMS @ 14f7c5890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_CMS(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_CMS_ContentInfo,&s_CMS,param_1,param_2,param_3,param_4,0x14f7c589a);
  return;
}

// PEM_read_bio_CMS @ 14f7c58d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_CMS(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_CMS_ContentInfo,&s_CMS,param_1,param_2,param_3,param_4,0x14f7c58da);
  return;
}

// PEM_write_CMS @ 14f7c5910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_CMS(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_CMS_ContentInfo,&s_CMS,param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_CMS @ 14f7c5960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_CMS(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_CMS_ContentInfo,&s_CMS,param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_CMS_stream @ 14f7c59b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_CMS_stream
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  PEM_write_bio_ASN1_stream(param_1,param_2,param_3,param_4,&s_CMS,uVar1);
  return;
}

// SMIME_read_CMS @ 14f7c5a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SMIME_read_CMS(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  SMIME_read_ASN1(param_1,param_2,uVar1);
  return;
}

// SMIME_write_CMS @ 14f7c5a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SMIME_write_CMS(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = OBJ_obj2nid(*param_2);
  uVar3 = CMS_get0_eContentType(param_2);
  uVar2 = OBJ_obj2nid(uVar3);
  if (iVar1 == 0x16) {
    uVar3 = *(undefined8 *)(param_2[1] + 8);
  }
  else {
    uVar3 = 0;
  }
  uVar4 = CMS_ContentInfo_it();
  SMIME_write_ASN1(param_1,param_2,param_3,param_4,iVar1,uVar2,uVar3,uVar4);
  return;
}

// d2i_CMS_bio @ 14f7c5b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_CMS_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}

// i2d_CMS_bio @ 14f7c5b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_CMS_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = CMS_ContentInfo_it();
  ASN1_item_i2d_bio(uVar1,param_1,param_2);
  return;
}

// i2d_CMS_bio_stream @ 14f7c5b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_CMS_bio_stream(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7c5baa;
  uVar1 = CMS_ContentInfo_it();
  i2d_ASN1_bio_stream(param_1,param_2,param_3,param_4,uVar1,uVar2);
  return;
}

