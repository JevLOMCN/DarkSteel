// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 50

// OCSP_BASICRESP_add1_ext_i2d @ 14f6d42b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_BASICRESP_add1_ext_i2d(longlong param_1)

{
  X509V3_add1_i2d(param_1 + 0x28);
  return;
}

// OCSP_BASICRESP_add_ext @ 14f6d42d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool OCSP_BASICRESP_add_ext(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509v3_add_ext(param_1 + 0x28);
  return lVar1 != 0;
}

// OCSP_BASICRESP_delete_ext @ 14f6d4300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_BASICRESP_delete_ext(longlong param_1)

{
  X509v3_delete_ext(*(undefined8 *)(param_1 + 0x28));
  return;
}

// OCSP_BASICRESP_get1_ext_d2i @ 14f6d4320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_BASICRESP_get1_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x28));
  return;
}

// OCSP_BASICRESP_get_ext @ 14f6d4340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_BASICRESP_get_ext(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x28));
  return;
}

// OCSP_BASICRESP_get_ext_by_NID @ 14f6d4360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_BASICRESP_get_ext_by_NID(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x28));
  return;
}

// OCSP_BASICRESP_get_ext_by_OBJ @ 14f6d4380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_BASICRESP_get_ext_by_OBJ(longlong param_1)

{
  X509v3_get_ext_by_OBJ(*(undefined8 *)(param_1 + 0x28));
  return;
}

// OCSP_BASICRESP_get_ext_by_critical @ 14f6d43a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_BASICRESP_get_ext_by_critical(longlong param_1)

{
  X509v3_get_ext_by_critical(*(undefined8 *)(param_1 + 0x28));
  return;
}

// OCSP_BASICRESP_get_ext_count @ 14f6d43c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_BASICRESP_get_ext_count(longlong param_1)

{
  X509v3_get_ext_count(*(undefined8 *)(param_1 + 0x28));
  return;
}

// OCSP_ONEREQ_add1_ext_i2d @ 14f6d43e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_ONEREQ_add1_ext_i2d(longlong param_1)

{
  X509V3_add1_i2d(param_1 + 8);
  return;
}

// OCSP_ONEREQ_add_ext @ 14f6d4400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool OCSP_ONEREQ_add_ext(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509v3_add_ext(param_1 + 8);
  return lVar1 != 0;
}

// OCSP_ONEREQ_delete_ext @ 14f6d4430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_ONEREQ_delete_ext(longlong param_1)

{
  X509v3_delete_ext(*(undefined8 *)(param_1 + 8));
  return;
}

// OCSP_ONEREQ_get1_ext_d2i @ 14f6d4450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_ONEREQ_get1_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 8));
  return;
}

// OCSP_ONEREQ_get_ext @ 14f6d4470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_ONEREQ_get_ext(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 8));
  return;
}

// OCSP_ONEREQ_get_ext_by_NID @ 14f6d4490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_ONEREQ_get_ext_by_NID(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 8));
  return;
}

// OCSP_ONEREQ_get_ext_by_OBJ @ 14f6d44b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_ONEREQ_get_ext_by_OBJ(longlong param_1)

{
  X509v3_get_ext_by_OBJ(*(undefined8 *)(param_1 + 8));
  return;
}

// OCSP_ONEREQ_get_ext_by_critical @ 14f6d44d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_ONEREQ_get_ext_by_critical(longlong param_1)

{
  X509v3_get_ext_by_critical(*(undefined8 *)(param_1 + 8));
  return;
}

// OCSP_ONEREQ_get_ext_count @ 14f6d44f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_ONEREQ_get_ext_count(longlong param_1)

{
  X509v3_get_ext_count(*(undefined8 *)(param_1 + 8));
  return;
}

// OCSP_REQUEST_add1_ext_i2d @ 14f6d4510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQUEST_add1_ext_i2d(longlong param_1)

{
  X509V3_add1_i2d(param_1 + 0x18);
  return;
}

// OCSP_REQUEST_add_ext @ 14f6d4530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool OCSP_REQUEST_add_ext(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509v3_add_ext(param_1 + 0x18);
  return lVar1 != 0;
}

// OCSP_REQUEST_delete_ext @ 14f6d4560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQUEST_delete_ext(longlong param_1)

{
  X509v3_delete_ext(*(undefined8 *)(param_1 + 0x18));
  return;
}

// OCSP_REQUEST_get1_ext_d2i @ 14f6d4580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQUEST_get1_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x18));
  return;
}

// OCSP_REQUEST_get_ext @ 14f6d45a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQUEST_get_ext(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x18));
  return;
}

// OCSP_REQUEST_get_ext_by_NID @ 14f6d45c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQUEST_get_ext_by_NID(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x18));
  return;
}

// OCSP_REQUEST_get_ext_by_OBJ @ 14f6d45e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQUEST_get_ext_by_OBJ(longlong param_1)

{
  X509v3_get_ext_by_OBJ(*(undefined8 *)(param_1 + 0x18));
  return;
}

// OCSP_REQUEST_get_ext_by_critical @ 14f6d4600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQUEST_get_ext_by_critical(longlong param_1)

{
  X509v3_get_ext_by_critical(*(undefined8 *)(param_1 + 0x18));
  return;
}

// OCSP_REQUEST_get_ext_count @ 14f6d4620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQUEST_get_ext_count(longlong param_1)

{
  X509v3_get_ext_count(*(undefined8 *)(param_1 + 0x18));
  return;
}

// OCSP_SINGLERESP_add1_ext_i2d @ 14f6d4640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_SINGLERESP_add1_ext_i2d(longlong param_1)

{
  X509V3_add1_i2d(param_1 + 0x20);
  return;
}

// OCSP_SINGLERESP_add_ext @ 14f6d4660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool OCSP_SINGLERESP_add_ext(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509v3_add_ext(param_1 + 0x20);
  return lVar1 != 0;
}

// OCSP_SINGLERESP_delete_ext @ 14f6d4690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_SINGLERESP_delete_ext(longlong param_1)

{
  X509v3_delete_ext(*(undefined8 *)(param_1 + 0x20));
  return;
}

// OCSP_SINGLERESP_get1_ext_d2i @ 14f6d46b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_SINGLERESP_get1_ext_d2i(longlong param_1)

{
  X509V3_get_d2i(*(undefined8 *)(param_1 + 0x20));
  return;
}

// OCSP_SINGLERESP_get_ext @ 14f6d46d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_SINGLERESP_get_ext(longlong param_1)

{
  X509v3_get_ext(*(undefined8 *)(param_1 + 0x20));
  return;
}

// OCSP_SINGLERESP_get_ext_by_NID @ 14f6d46f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_SINGLERESP_get_ext_by_NID(longlong param_1)

{
  X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x20));
  return;
}

// OCSP_SINGLERESP_get_ext_by_OBJ @ 14f6d4710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_SINGLERESP_get_ext_by_OBJ(longlong param_1)

{
  X509v3_get_ext_by_OBJ(*(undefined8 *)(param_1 + 0x20));
  return;
}

// OCSP_SINGLERESP_get_ext_by_critical @ 14f6d4730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_SINGLERESP_get_ext_by_critical(longlong param_1)

{
  X509v3_get_ext_by_critical(*(undefined8 *)(param_1 + 0x20));
  return;
}

// OCSP_SINGLERESP_get_ext_count @ 14f6d4750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_SINGLERESP_get_ext_count(longlong param_1)

{
  X509v3_get_ext_count(*(undefined8 *)(param_1 + 0x20));
  return;
}

// OCSP_accept_responses_new @ 14f6d4770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_accept_responses_new(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 != 0) {
    for (; (param_1 != (longlong *)0x0 && (*param_1 != 0)); param_1 = param_1 + 1) {
      iVar1 = OBJ_txt2nid();
      if ((iVar1 != 0) && (lVar3 = OBJ_nid2obj(iVar1), lVar3 != 0)) {
        OPENSSL_sk_push(lVar2,lVar3);
      }
    }
    uVar4 = X509V3_EXT_i2d(0x170,0,lVar2);
  }
  OPENSSL_sk_pop_free(lVar2,ASN1_OBJECT_free);
  return uVar4;
}

// OCSP_archive_cutoff_new @ 14f6d4810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_archive_cutoff_new(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar2 = ASN1_GENERALIZEDTIME_new();
  if (lVar2 != 0) {
    iVar1 = ASN1_GENERALIZEDTIME_set_string(lVar2,param_1);
    if (iVar1 != 0) {
      uVar3 = X509V3_EXT_i2d(0x172,0,lVar2);
    }
  }
  ASN1_GENERALIZEDTIME_free(lVar2);
  return uVar3;
}

// OCSP_basic_add1_nonce @ 14f6d4880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_basic_add1_nonce(longlong param_1)

{
  FUN_14f6d4c50(param_1 + 0x28);
  return;
}

// OCSP_check_nonce @ 14f6d48a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong OCSP_check_nonce(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = X509v3_get_ext_by_NID(*(undefined8 *)(param_1 + 0x18),0x16e,0xffffffff);
  iVar2 = X509v3_get_ext_by_NID(*(undefined8 *)(param_2 + 0x28),0x16e,0xffffffff);
  if (iVar1 < 0) {
    if (iVar2 < 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
    }
  }
  else if (iVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar4 = X509v3_get_ext(*(undefined8 *)(param_1 + 0x18),iVar1);
    uVar5 = X509v3_get_ext(*(undefined8 *)(param_2 + 0x28),iVar2);
    uVar5 = X509_EXTENSION_get_data(uVar5);
    uVar4 = X509_EXTENSION_get_data(uVar4);
    iVar1 = ASN1_OCTET_STRING_cmp(uVar4,uVar5);
    uVar3 = (ulonglong)(iVar1 == 0);
  }
  return uVar3;
}

// OCSP_copy_nonce @ 14f6d4970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 OCSP_copy_nonce(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = X509v3_get_ext_by_NID(*(undefined8 *)(param_2 + 0x18),0x16e,0xffffffff);
  if (iVar1 < 0) {
    return 2;
  }
  uVar2 = X509v3_get_ext(*(undefined8 *)(param_2 + 0x18),iVar1);
  lVar3 = X509v3_add_ext(param_1 + 0x28,uVar2,0xffffffff);
  return lVar3 != 0;
}

// OCSP_crlID_new @ 14f6d49f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_crlID_new(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  plVar2 = (longlong *)OCSP_CRLID_new();
  if (plVar2 == (longlong *)0x0) goto LAB_14f6d4aa5;
  if (param_1 != 0) {
    lVar3 = ASN1_IA5STRING_new();
    *plVar2 = lVar3;
    if (lVar3 == 0) goto LAB_14f6d4aa5;
    iVar1 = ASN1_STRING_set(lVar3,param_1,0xffffffff);
    if (iVar1 == 0) goto LAB_14f6d4aa5;
  }
  uVar4 = uVar5;
  if (param_2 != (undefined4 *)0x0) {
    lVar3 = ASN1_INTEGER_new();
    plVar2[1] = lVar3;
    if (lVar3 == 0) goto LAB_14f6d4aa5;
    iVar1 = ASN1_INTEGER_set(lVar3,*param_2);
    if (iVar1 == 0) goto LAB_14f6d4aa5;
  }
  if (param_3 != 0) {
    lVar3 = ASN1_GENERALIZEDTIME_new();
    plVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_14f6d4aa5;
    iVar1 = ASN1_GENERALIZEDTIME_set_string(lVar3,param_3);
    if (iVar1 == 0) goto LAB_14f6d4aa5;
  }
  uVar4 = X509V3_EXT_i2d(0x16f,0,plVar2);
LAB_14f6d4aa5:
  OCSP_CRLID_free(plVar2);
  return uVar4;
}

// OCSP_request_add1_nonce @ 14f6d4ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_request_add1_nonce(longlong param_1)

{
  FUN_14f6d4c50(param_1 + 0x18);
  return;
}

// OCSP_url_svcloc_new @ 14f6d4b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_url_svcloc_new(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  uVar7 = 0;
  lVar5 = 0;
  plVar4 = (longlong *)0x0;
  plVar2 = (longlong *)OCSP_SERVICELOC_new();
  if (plVar2 != (longlong *)0x0) {
    X509_NAME_free(*plVar2);
    lVar3 = X509_NAME_dup(param_1);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      if (param_2 != (longlong *)0x0) {
        if (*param_2 != 0) {
          lVar3 = OPENSSL_sk_new_null();
          plVar2[1] = lVar3;
          if (lVar3 == 0) goto LAB_14f6d4c0c;
        }
        do {
          if (*param_2 == 0) break;
          plVar4 = (longlong *)ACCESS_DESCRIPTION_new();
          uVar6 = uVar7;
          if (plVar4 == (longlong *)0x0) {
LAB_14f6d4c40:
            lVar5 = 0;
            goto LAB_14f6d4c0c;
          }
          lVar5 = OBJ_nid2obj(0xb2);
          *plVar4 = lVar5;
          if (lVar5 == 0) goto LAB_14f6d4c40;
          lVar5 = ASN1_IA5STRING_new();
          if ((lVar5 == 0) || (iVar1 = ASN1_STRING_set(lVar5,*param_2,0xffffffff), iVar1 == 0))
          goto LAB_14f6d4c0c;
          *(undefined4 *)plVar4[1] = 6;
          *(longlong *)(plVar4[1] + 8) = lVar5;
          lVar5 = 0;
          iVar1 = OPENSSL_sk_push(plVar2[1],plVar4);
          if (iVar1 == 0) goto LAB_14f6d4c0c;
          param_2 = param_2 + 1;
        } while (param_2 != (longlong *)0x0);
      }
      uVar6 = X509V3_EXT_i2d(0x173,0,plVar2);
      lVar5 = 0;
      plVar4 = (longlong *)0x0;
    }
  }
LAB_14f6d4c0c:
  ASN1_IA5STRING_free(lVar5);
  ACCESS_DESCRIPTION_free(plVar4);
  OCSP_SERVICELOC_free(plVar2);
  return uVar6;
}

// FUN_14f6d4c50 @ 14f6d4c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6d4c50(undefined8 param_1,void *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_res20;
  int local_28 [2];
  void *local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6d4c6a;
  iVar1 = 0x10;
  if (0 < param_3) {
    iVar1 = param_3;
  }
  local_28[0] = ASN1_object_size(0,iVar1,4);
  if (local_28[0] < 0) {
    return 0;
  }
  local_20 = (void *)CRYPTO_malloc((longlong)local_28[0],"crypto\\ocsp\\ocsp_ext.c",0x106);
  uVar2 = 0;
  if (local_20 != (void *)0x0) {
    local_res20 = local_20;
    ASN1_put_object(&local_res20,0,iVar1,4,0);
    if (param_2 == (void *)0x0) {
      iVar1 = RAND_bytes(local_res20,iVar1);
      uVar2 = 0;
      if (iVar1 < 1) goto LAB_14f6d4d28;
    }
    else {
      memcpy(local_res20,param_2,(longlong)iVar1);
    }
    iVar1 = X509V3_add1_i2d(param_1,0x16e,local_28,0,2);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
LAB_14f6d4d28:
  CRYPTO_free(local_20,"crypto\\ocsp\\ocsp_ext.c",0x114);
  return uVar2;
}

// FUN_14f6d4d60 @ 14f6d4d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4d60(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6d4d80 @ 14f6d4d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4d80(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6d4da0 @ 14f6d4da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4da0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6d4dc0 @ 14f6d4dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4dc0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6d4de0 @ 14f6d4de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4de0(void)

{
  OPENSSL_sk_push();
  return;
}

