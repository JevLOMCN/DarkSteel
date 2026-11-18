// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// OCSP_check_validity @ 14f6d38c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool OCSP_check_validity(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong local_res10;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_28 [2];
  
  local_28[1] = 0x14f6d38d8;
  _time64(local_28);
  iVar1 = ASN1_GENERALIZEDTIME_check(param_1);
  if (iVar1 == 0) {
    uVar4 = 0x15a;
    uVar3 = 0x7b;
LAB_14f6d397f:
    ERR_put_error(0x27,0x73,uVar3,"crypto\\ocsp\\ocsp_cl.c",uVar4);
    bVar2 = false;
  }
  else {
    local_res10 = param_3 + local_28[0];
    iVar1 = X509_cmp_time(param_1,&local_res10);
    bVar2 = iVar1 < 1;
    if (!bVar2) {
      ERR_put_error(0x27,0x73,0x7e,"crypto\\ocsp\\ocsp_cl.c",0x15f);
    }
    if (-1 < param_4) {
      local_res10 = local_28[0] - param_4;
      iVar1 = X509_cmp_time(param_1,&local_res10);
      if (iVar1 < 0) {
        uVar4 = 0x16a;
        uVar3 = 0x7f;
        goto LAB_14f6d397f;
      }
    }
  }
  if (param_2 == 0) {
    return bVar2;
  }
  iVar1 = ASN1_GENERALIZEDTIME_check(param_2);
  if (iVar1 == 0) {
    uVar5 = 0x175;
    uVar4 = 0x7a;
  }
  else {
    local_res10 = local_28[0] - param_3;
    iVar1 = X509_cmp_time(param_2,&local_res10);
    if (-1 < iVar1) goto LAB_14f6d39fa;
    uVar5 = 0x17a;
    uVar4 = 0x7d;
  }
  ERR_put_error(0x27,0x73,uVar4,"crypto\\ocsp\\ocsp_cl.c",uVar5);
  bVar2 = false;
LAB_14f6d39fa:
  iVar1 = ASN1_STRING_cmp(param_2,param_1);
  if (iVar1 < 0) {
    ERR_put_error(0x27,0x73,0x7c,"crypto\\ocsp\\ocsp_cl.c",0x182);
    bVar2 = false;
  }
  return bVar2;
}

// OCSP_request_add0_id @ 14f6d3a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * OCSP_request_add0_id(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)OCSP_ONEREQ_new();
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  OCSP_CERTID_free(*puVar2);
  *puVar2 = param_2;
  if ((param_1 != 0) &&
     (iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x10),puVar2), iVar1 == 0)) {
    *puVar2 = 0;
    OCSP_ONEREQ_free(puVar2);
    return (undefined8 *)0x0;
  }
  return puVar2;
}

// OCSP_request_add1_cert @ 14f6d3ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_request_add1_cert(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar3 = OCSP_SIGNATURE_new();
    *(undefined8 *)(param_1 + 0x20) = uVar3;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      lVar4 = OPENSSL_sk_new_null();
      *(longlong *)(lVar1 + 0x18) = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
    }
    iVar2 = OPENSSL_sk_push(*(undefined8 *)(lVar1 + 0x18),param_2);
    if (iVar2 == 0) {
      return 0;
    }
    X509_up_ref(param_2);
  }
  return 1;
}

// OCSP_request_set1_name @ 14f6d3b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_request_set1_name(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)GENERAL_NAME_new();
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = X509_NAME_set(puVar2 + 2,param_2);
    if (iVar1 != 0) {
      *puVar2 = 4;
      GENERAL_NAME_free(*(undefined8 *)(param_1 + 8));
      *(undefined4 **)(param_1 + 8) = puVar2;
      return 1;
    }
    GENERAL_NAME_free(puVar2);
  }
  return 0;
}

// OCSP_request_sign @ 14f6d3c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
OCSP_request_sign(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar2 = X509_get_subject_name(param_2);
  iVar1 = OCSP_request_set1_name(param_1,uVar2);
  if (iVar1 != 0) {
    lVar3 = OCSP_SIGNATURE_new();
    *(longlong *)(param_1 + 0x20) = lVar3;
    if (lVar3 != 0) {
      if (param_3 != 0) {
        iVar1 = X509_check_private_key(param_2,param_3);
        if (iVar1 == 0) {
          ERR_put_error(0x27,0x6e,0x6e,"crypto\\ocsp\\ocsp_cl.c",CONCAT44(uVar5,0x71));
          goto LAB_14f6d3c8b;
        }
        lVar3 = *(longlong *)(param_1 + 0x20);
        uVar2 = OCSP_REQINFO_it();
        iVar1 = ASN1_item_sign(uVar2,lVar3,0,*(undefined8 *)(lVar3 + 0x10),param_1,param_3,param_4);
        if (iVar1 == 0) goto LAB_14f6d3c8b;
      }
      if ((param_6 & 1) == 0) {
        iVar1 = OCSP_request_add1_cert(param_1,param_2);
        if (iVar1 == 0) goto LAB_14f6d3c8b;
        iVar4 = 0;
        iVar1 = OPENSSL_sk_num(param_5);
        if (0 < iVar1) {
          do {
            uVar2 = OPENSSL_sk_value(param_5,iVar4);
            iVar1 = OCSP_request_add1_cert(param_1,uVar2);
            if (iVar1 == 0) goto LAB_14f6d3c8b;
            iVar4 = iVar4 + 1;
            iVar1 = OPENSSL_sk_num(param_5);
          } while (iVar4 < iVar1);
        }
      }
      return 1;
    }
  }
LAB_14f6d3c8b:
  OCSP_SIGNATURE_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return 0;
}

// OCSP_resp_count @ 14f6d3d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_resp_count(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}

// OCSP_resp_find @ 14f6d3d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OCSP_resp_find(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  iVar4 = 0;
  if (-1 < param_3) {
    iVar4 = param_3 + 1;
  }
  iVar2 = OPENSSL_sk_num(uVar1);
  if (iVar4 < iVar2) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar2 = OCSP_id_cmp(param_2,*puVar3);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar2 = OPENSSL_sk_num(uVar1);
    } while (iVar4 < iVar2);
  }
  return -1;
}

// OCSP_resp_find_status @ 14f6d3e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
OCSP_resp_find_status
          (longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(uVar4);
    if (0 < iVar1) {
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(uVar4,iVar5);
        iVar1 = OCSP_id_cmp(param_2,*puVar3);
        if (iVar1 == 0) {
          if (iVar5 < 0) {
            return 0;
          }
          uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x20),iVar5);
          uVar2 = OCSP_single_get0_status(uVar4,param_4,param_5,param_6,param_7);
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = uVar2;
          }
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(uVar4);
      } while (iVar5 < iVar1);
    }
  }
  return 0;
}

// OCSP_resp_get0 @ 14f6d3ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_resp_get0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}

// OCSP_resp_get1_id @ 14f6d3fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_resp_get1_id(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = X509_NAME_dup(*(undefined8 *)(param_1 + 0x10));
    *param_3 = lVar1;
    *param_2 = 0;
    lVar1 = *param_3;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return 0;
    }
    lVar1 = ASN1_OCTET_STRING_dup(*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar1;
    *param_3 = 0;
    lVar1 = *param_2;
  }
  if (lVar1 == 0) {
    return 0;
  }
  return 1;
}

// OCSP_response_get1_basic @ 14f6d4030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_response_get1_basic(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6d403c;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x27,0x6f,0x6c,"crypto\\ocsp\\ocsp_cl.c",0x9a,0x14f6d403c);
    return 0;
  }
  iVar2 = OBJ_obj2nid(*puVar1);
  if (iVar2 != 0x16d) {
    ERR_put_error(0x27,0x6f,0x68,"crypto\\ocsp\\ocsp_cl.c",0x9e,uVar3);
    return 0;
  }
  uVar3 = OCSP_BASICRESP_it();
  uVar3 = ASN1_item_unpack(puVar1[1],uVar3);
  return uVar3;
}

// OCSP_response_status @ 14f6d40d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_response_status(undefined8 *param_1)

{
  ASN1_ENUMERATED_get(*param_1);
  return;
}

// OCSP_single_get0_status @ 14f6d40f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OCSP_single_get0_status
              (longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
              undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = **(int **)(param_1 + 8);
  if (iVar1 == 1) {
    puVar2 = *(undefined8 **)(*(int **)(param_1 + 8) + 2);
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *puVar2;
    }
    if (param_2 != (undefined4 *)0x0) {
      if (puVar2[1] == 0) {
        *param_2 = 0xffffffff;
      }
      else {
        uVar3 = ASN1_ENUMERATED_get();
        *param_2 = uVar3;
      }
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_1 + 0x18);
  }
  return iVar1;
}

// FUN_14f6d41b0 @ 14f6d41b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d41b0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6d41d0 @ 14f6d41d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d41d0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d41f0 @ 14f6d41f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d41f0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6d4210 @ 14f6d4210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4210(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6d4230 @ 14f6d4230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4230(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d4250 @ 14f6d4250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4250(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6d4270 @ 14f6d4270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4270(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6d4290 @ 14f6d4290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d4290(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6d42a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

