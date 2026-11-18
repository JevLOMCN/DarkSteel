// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// X509_REQ_add1_attr @ 14f76d300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_add1_attr(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr(param_1 + 0x28);
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return 1;
}

// X509_REQ_add1_attr_by_NID @ 14f76d340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_add1_attr_by_NID(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x28);
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return 1;
}

// X509_REQ_add1_attr_by_OBJ @ 14f76d390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_add1_attr_by_OBJ(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_OBJ(param_1 + 0x28);
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return 1;
}

// X509_REQ_add1_attr_by_txt @ 14f76d3e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_add1_attr_by_txt(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_txt(param_1 + 0x28);
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return 1;
}

// X509_REQ_add_extensions @ 14f76d430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_add_extensions(undefined8 param_1,undefined8 param_2)

{
  X509_REQ_add_extensions_nid(param_1,param_2,0xac);
  return;
}

// X509_REQ_add_extensions_nid @ 14f76d460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_REQ_add_extensions_nid(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 local_res20;
  undefined8 uVar5;
  
  uVar5 = 0x14f76d47a;
  local_res20 = 0;
  uVar2 = X509_EXTENSIONS_it();
  iVar1 = ASN1_item_i2d(param_2,&local_res20,uVar2);
  if (iVar1 < 1) {
    bVar4 = false;
  }
  else {
    lVar3 = X509at_add1_attr_by_NID(param_1 + 0x28,param_3,0x10,local_res20,iVar1,uVar5);
    bVar4 = lVar3 != 0;
    if (bVar4) {
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    CRYPTO_free(local_res20,"crypto\\x509\\x509_req.c",0xc5);
  }
  return bVar4;
}

// X509_REQ_check_private_key @ 14f76d510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_REQ_check_private_key(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f76d525;
  uVar3 = 0;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = X509_PUBKEY_get(*(undefined8 *)(param_1 + 0x20));
  }
  iVar1 = EVP_PKEY_cmp(uVar2,param_2);
  if (iVar1 == -2) {
    iVar1 = EVP_PKEY_id(param_2);
    if (iVar1 == 0x198) {
      uVar5 = 0x66;
      uVar4 = 0x10;
    }
    else {
      iVar1 = EVP_PKEY_id(param_2);
      if (iVar1 == 0x1c) {
        uVar5 = 0x6e;
        uVar4 = 0x72;
      }
      else {
        uVar5 = 0x72;
        uVar4 = 0x75;
      }
    }
  }
  else if (iVar1 == -1) {
    uVar5 = 0x61;
    uVar4 = 0x73;
  }
  else {
    if (iVar1 != 0) {
      uVar3 = 0;
      if (iVar1 == 1) {
        uVar3 = 1;
      }
      goto LAB_14f76d5e6;
    }
    uVar5 = 0x5e;
    uVar4 = 0x74;
  }
  ERR_put_error(0xb,0x90,uVar4,"crypto\\x509\\x509_req.c",uVar5,uVar6);
LAB_14f76d5e6:
  EVP_PKEY_free(uVar2);
  return uVar3;
}

// X509_REQ_delete_attr @ 14f76d610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_delete_attr(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_delete_attr(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}

// X509_REQ_get0_pubkey @ 14f76d680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_get0_pubkey(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}

// X509_REQ_get_attr @ 14f76d6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_get_attr(longlong param_1)

{
  X509at_get_attr(*(undefined8 *)(param_1 + 0x28));
  return;
}

// X509_REQ_get_attr_by_NID @ 14f76d700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_get_attr_by_NID(longlong param_1)

{
  X509at_get_attr_by_NID(*(undefined8 *)(param_1 + 0x28));
  return;
}

// X509_REQ_get_attr_by_OBJ @ 14f76d720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_get_attr_by_OBJ(longlong param_1)

{
  X509at_get_attr_by_OBJ(*(undefined8 *)(param_1 + 0x28));
  return;
}

// X509_REQ_get_attr_count @ 14f76d740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_get_attr_count(longlong param_1)

{
  X509at_get_attr_count(*(undefined8 *)(param_1 + 0x28));
  return;
}

// X509_REQ_get_extensions @ 14f76d770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_get_extensions(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_res8;
  
  if ((param_1 == 0) || (PTR_DAT_154df9a08 == (undefined *)0x0)) {
    return 0;
  }
  iVar1 = *(int *)PTR_DAT_154df9a08;
  piVar3 = (int *)PTR_DAT_154df9a08;
  do {
    if (iVar1 == 0) {
LAB_14f76d7cd:
      uVar2 = OPENSSL_sk_new_null();
      return uVar2;
    }
    iVar1 = X509at_get_attr_by_NID(*(undefined8 *)(param_1 + 0x28),*piVar3,0xffffffff);
    if (iVar1 != -1) {
      uVar2 = X509at_get_attr(*(undefined8 *)(param_1 + 0x28),iVar1);
      piVar3 = (int *)X509_ATTRIBUTE_get0_type(uVar2,0);
      if (piVar3 != (int *)0x0) {
        if (*piVar3 != 0x10) {
          return 0;
        }
        local_res8 = *(undefined8 *)(*(longlong *)(piVar3 + 2) + 8);
        uVar2 = X509_EXTENSIONS_it();
        uVar2 = ASN1_item_d2i(0,&local_res8,**(undefined4 **)(piVar3 + 2),uVar2);
        return uVar2;
      }
      goto LAB_14f76d7cd;
    }
    piVar3 = piVar3 + 1;
    iVar1 = *piVar3;
  } while( true );
}

// X509_REQ_get_pubkey @ 14f76d850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_get_pubkey(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_PUBKEY_get(*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}

// X509_REQ_get_signature_nid @ 14f76d880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_get_signature_nid(longlong param_1)

{
  OBJ_obj2nid(*(undefined8 *)(param_1 + 0x30));
  return;
}

// X509_REQ_get_subject_name @ 14f76d8a0

undefined8 X509_REQ_get_subject_name(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// X509_REQ_get_version @ 14f76d8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_get_version(longlong param_1)

{
  ASN1_INTEGER_get(*(undefined8 *)(param_1 + 0x10));
  return;
}

// X509_REQ_set0_signature @ 14f76d8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_set0_signature(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    ASN1_BIT_STRING_free();
  }
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}

// X509_REQ_set1_signature_algo @ 14f76d910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REQ_set1_signature_algo(longlong param_1)

{
  X509_ALGOR_copy(param_1 + 0x30);
  return;
}

// X509_to_X509_REQ @ 14f76d940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_to_X509_REQ(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f76d95a;
  lVar3 = X509_REQ_new();
  if (lVar3 == 0) {
    ERR_put_error(0xb,0x7e,0x41,"crypto\\x509\\x509_req.c",0x1f,uVar5);
  }
  else {
    **(undefined4 **)(lVar3 + 0x10) = 1;
    uVar5 = CRYPTO_malloc(1,"crypto\\x509\\x509_req.c");
    *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8) = uVar5;
    puVar1 = *(undefined1 **)(*(longlong *)(lVar3 + 0x10) + 8);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      uVar5 = X509_get_subject_name(param_1);
      iVar2 = X509_REQ_set_subject_name(lVar3,uVar5);
      if (((iVar2 != 0) && (lVar4 = X509_get0_pubkey(param_1), lVar4 != 0)) &&
         (iVar2 = X509_REQ_set_pubkey(lVar3,lVar4), iVar2 != 0)) {
        if (param_2 == 0) {
          return lVar3;
        }
        iVar2 = X509_REQ_sign(lVar3,param_2,param_3);
        if (iVar2 != 0) {
          return lVar3;
        }
      }
    }
  }
  X509_REQ_free(lVar3);
  return 0;
}

// i2d_re_X509_REQ_tbs @ 14f76da50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_re_X509_REQ_tbs(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 1;
  i2d_X509_REQ_INFO();
  return;
}

// FUN_14f76da80 @ 14f76da80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76da80(void)

{
  OPENSSL_sk_new_null();
  return;
}

