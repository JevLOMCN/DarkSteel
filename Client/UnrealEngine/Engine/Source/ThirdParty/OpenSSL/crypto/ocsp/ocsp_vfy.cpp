// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 18

// OCSP_basic_verify @ 1501b7260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OCSP_basic_verify(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 local_res8;
  longlong in_stack_ffffffffffffffb8;
  undefined8 uVar9;
  
  lVar6 = 0;
  local_res8 = 0;
  lVar4 = 0;
  lVar3 = FUN_1501b7b60(param_2,param_1 + 8);
  if (lVar3 == 0) {
    if ((param_4 & 2) == 0) {
      lVar3 = FUN_1501b7b60(*(undefined8 *)(param_1 + 0x48),param_1 + 8);
      if (lVar3 != 0) {
        iVar1 = 1;
        goto LAB_1501b72e9;
      }
    }
    iVar1 = 0;
    uVar9 = 0x29;
    uVar5 = 0x76;
LAB_1501b7529:
    ERR_put_error(0x27,0x69,uVar5,"crypto\\ocsp\\ocsp_vfy.c",uVar9);
    goto LAB_1501b753d;
  }
  iVar1 = 2;
LAB_1501b72e9:
  lVar4 = X509_STORE_CTX_new();
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (lVar4 == 0) {
    uVar5 = CONCAT44(uVar8,0x2e);
    uVar8 = 0x41;
  }
  else {
    if ((iVar1 == 2) && ((param_4 >> 9 & 1) != 0)) {
      param_4 = param_4 | 0x10;
    }
    if ((param_4 & 4) == 0) {
      in_stack_ffffffffffffffb8 = X509_get0_pubkey(lVar3);
      if (in_stack_ffffffffffffffb8 != 0) {
        uVar5 = OCSP_RESPDATA_it();
        iVar1 = ASN1_item_verify(uVar5,param_1 + 0x30,*(undefined8 *)(param_1 + 0x40),param_1,
                                 in_stack_ffffffffffffffb8);
        if (iVar1 < 1) {
          uVar9 = 0x3c;
          uVar5 = 0x75;
          goto LAB_1501b7529;
        }
        goto LAB_1501b7374;
      }
      uVar5 = CONCAT44(uVar8,0x37);
      uVar8 = 0x82;
LAB_1501b7503:
      ERR_put_error(0x27,0x69,uVar8,"crypto\\ocsp\\ocsp_vfy.c",uVar5);
      iVar1 = 0;
      goto LAB_1501b753d;
    }
LAB_1501b7374:
    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    if ((param_4 & 0x10) != 0) goto LAB_1501b753d;
    if ((param_4 & 8) == 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
      if (lVar6 == 0) {
        if (param_2 != 0) {
          lVar6 = param_2;
        }
      }
      else if (param_2 != 0) {
        lVar6 = OPENSSL_sk_dup(lVar6);
        iVar7 = 0;
        iVar1 = OPENSSL_sk_num(param_2);
        uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        if (0 < iVar1) {
          do {
            uVar5 = OPENSSL_sk_value(param_2,iVar7);
            iVar1 = OPENSSL_sk_push(lVar6,uVar5);
            if (iVar1 == 0) {
              uVar5 = 0x48;
              uVar8 = 0x41;
              goto LAB_1501b7417;
            }
            iVar7 = iVar7 + 1;
            iVar1 = OPENSSL_sk_num(param_2);
            uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
          } while (iVar7 < iVar1);
        }
      }
    }
    iVar1 = X509_STORE_CTX_init(lVar4,param_3,lVar3,lVar6);
    if (iVar1 != 0) {
      X509_STORE_CTX_set_purpose(lVar4,8);
      iVar1 = X509_verify_cert(lVar4);
      local_res8 = X509_STORE_CTX_get1_chain(lVar4);
      if (iVar1 < 1) {
        uVar2 = X509_STORE_CTX_get_error(lVar4);
        ERR_put_error(0x27,0x69,0x65,"crypto\\ocsp\\ocsp_vfy.c",CONCAT44(uVar8,0x5d));
        uVar5 = X509_verify_cert_error_string(uVar2);
        ERR_add_error_data(2,"Verify error:",uVar5);
        goto LAB_1501b753d;
      }
      if ((param_4 >> 8 & 1) == 0) {
        iVar1 = FUN_1501b7990(param_1,local_res8);
        if ((iVar1 != 0) || ((param_4 & 0x20) != 0)) goto LAB_1501b753d;
        iVar1 = OPENSSL_sk_num(local_res8);
        uVar5 = OPENSSL_sk_value(local_res8,iVar1 + -1);
        iVar1 = X509_check_trust(uVar5,0xb4,0);
        if (iVar1 != 1) {
          uVar5 = CONCAT44(uVar8,0x79);
          uVar8 = 0x70;
          goto LAB_1501b7503;
        }
      }
      iVar1 = 1;
      goto LAB_1501b753d;
    }
    uVar5 = CONCAT44(uVar8,0x53);
    uVar8 = 0xb;
  }
LAB_1501b7417:
  ERR_put_error(0x27,0x69,uVar8,"crypto\\ocsp\\ocsp_vfy.c",uVar5);
  iVar1 = -1;
LAB_1501b753d:
  X509_STORE_CTX_free(lVar4);
  OPENSSL_sk_pop_free(local_res8,X509_free);
  if ((*(longlong *)(param_1 + 0x48) != 0) && (param_2 != 0)) {
    OPENSSL_sk_free(lVar6);
  }
  return iVar1;
}

// OCSP_request_verify @ 1501b75a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_request_verify(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar10 = 0x1501b75c4;
  lVar5 = X509_STORE_CTX_new();
  if (lVar5 == 0) {
    uVar7 = CONCAT44(uVar9,0x15d);
    uVar9 = 0x41;
LAB_1501b7778:
    ERR_put_error(0x27,0x74,uVar9,"crypto\\ocsp\\ocsp_vfy.c",uVar7,uVar10);
  }
  else {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar7 = CONCAT44(uVar9,0x162);
      uVar9 = 0x80;
      goto LAB_1501b7778;
    }
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 == (int *)0x0) || (*piVar1 != 4)) {
      uVar7 = CONCAT44(uVar9,0x168);
      uVar9 = 0x81;
      goto LAB_1501b7778;
    }
    uVar7 = *(undefined8 *)(piVar1 + 2);
    if ((param_4 & 2) == 0) {
      lVar6 = X509_find_by_subject(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),uVar7);
      if (lVar6 == 0) goto LAB_1501b7641;
    }
    else {
LAB_1501b7641:
      lVar6 = X509_find_by_subject(param_2,uVar7);
      if (lVar6 == 0) {
        uVar7 = CONCAT44(uVar9,0x16f);
        uVar9 = 0x76;
        goto LAB_1501b7778;
      }
      if ((param_4 >> 9 & 1) != 0) {
        param_4 = param_4 | 0x10;
      }
    }
    if ((param_4 & 4) == 0) {
      uVar7 = X509_get0_pubkey(lVar6);
      lVar2 = *(longlong *)(param_1 + 0x20);
      uVar8 = OCSP_REQINFO_it();
      iVar3 = ASN1_item_verify(uVar8,lVar2,*(undefined8 *)(lVar2 + 0x10),param_1,uVar7);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (iVar3 < 1) {
        uVar7 = CONCAT44(uVar9,0x179);
        uVar9 = 0x75;
        goto LAB_1501b7778;
      }
    }
    if ((param_4 & 0x10) != 0) {
LAB_1501b7763:
      uVar10 = 1;
      goto LAB_1501b778e;
    }
    if ((param_4 & 8) == 0) {
      uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18);
    }
    else {
      uVar7 = 0;
    }
    iVar3 = X509_STORE_CTX_init(lVar5,param_3,lVar6,uVar7);
    if (iVar3 == 0) {
      uVar7 = CONCAT44(uVar9,0x185);
      uVar9 = 0xb;
      goto LAB_1501b7778;
    }
    X509_STORE_CTX_set_purpose(lVar5,8);
    X509_STORE_CTX_set_trust(lVar5,7);
    iVar3 = X509_verify_cert(lVar5);
    if (0 < iVar3) goto LAB_1501b7763;
    uVar4 = X509_STORE_CTX_get_error(lVar5);
    ERR_put_error(0x27,0x74,0x65,"crypto\\ocsp\\ocsp_vfy.c",CONCAT44(uVar9,399));
    uVar10 = X509_verify_cert_error_string(uVar4);
    ERR_add_error_data(2,"Verify error:",uVar10);
  }
  uVar10 = 0;
LAB_1501b778e:
  X509_STORE_CTX_free(lVar5);
  return uVar10;
}

// OCSP_resp_get0_signer @ 1501b77c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool OCSP_resp_get0_signer(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1501b7b60(param_3,param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = FUN_1501b7b60(*(undefined8 *)(param_1 + 0x48),param_1 + 8);
    if (lVar2 == 0) {
      *param_2 = 0;
      iVar1 = 0;
    }
    else {
      *param_2 = lVar2;
      iVar1 = 1;
    }
  }
  else {
    *param_2 = lVar2;
    iVar1 = 2;
  }
  return iVar1 != 0;
}

// FUN_1501b7850 @ 1501b7850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1501b7850(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1501b785c;
  uVar1 = X509_get_extension_flags();
  if ((uVar1 & 4) != 0) {
    uVar1 = X509_get_extended_key_usage(param_1);
    if ((uVar1 & 0x20) != 0) {
      return 1;
    }
  }
  ERR_put_error(0x27,0x6a,0x67,"crypto\\ocsp\\ocsp_vfy.c",0x149,uVar2);
  return 0;
}

// FUN_1501b78b0 @ 1501b78b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1501b78b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1501b78bf;
  iVar1 = OPENSSL_sk_num();
  if (iVar1 < 1) {
    ERR_put_error(0x27,0x6b,0x6f,"crypto\\ocsp\\ocsp_vfy.c",0xfa,uVar6);
    return 0xffffffff;
  }
  puVar3 = (undefined8 *)OPENSSL_sk_value(param_1,0);
  iVar5 = 1;
  puVar3 = (undefined8 *)*puVar3;
  *param_2 = 0;
  if (1 < iVar1) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_1,iVar5);
      puVar4 = (undefined8 *)*puVar4;
      iVar2 = OCSP_id_issuer_cmp(puVar3,puVar4);
      if (iVar2 != 0) {
        iVar1 = OBJ_cmp(*puVar4,*puVar3);
        return -(uint)(iVar1 != 0) & 2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  *param_2 = puVar3;
  return 1;
}

// FUN_1501b7990 @ 1501b7990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1501b7990(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x1501b79a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_res8 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 < 1) {
    ERR_put_error(0x27,0x6c,0x69,"crypto\\ocsp\\ocsp_vfy.c",0xcd,uVar5);
    return 0xffffffff;
  }
  uVar5 = FUN_1501b78b0(uVar1,&local_res8);
  if (0 < (int)uVar5) {
    uVar5 = OPENSSL_sk_value(param_2,0);
    iVar2 = OPENSSL_sk_num(param_2);
    if (1 < iVar2) {
      uVar3 = OPENSSL_sk_value(param_2,1);
      uVar3 = FUN_1501b7c50(uVar3,local_res8,uVar1);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((int)uVar3 != 0) {
        uVar4 = X509_get_extension_flags(uVar5);
        if (((uVar4 & 4) != 0) && (uVar4 = X509_get_extended_key_usage(uVar5), (uVar4 & 0x20) != 0))
        {
          return 1;
        }
        ERR_put_error(0x27,0x6a,0x67,"crypto\\ocsp\\ocsp_vfy.c",0x149);
        return 0;
      }
    }
    uVar5 = FUN_1501b7c50(uVar5,local_res8,uVar1);
  }
  return uVar5;
}

// FUN_1501b7ad0 @ 1501b7ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1501b7ad0(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1501b7b60(param_3,param_2 + 8);
  if (lVar1 == 0) {
    if (((param_4 & 2) == 0) &&
       (lVar1 = FUN_1501b7b60(*(undefined8 *)(param_2 + 0x48),param_2 + 8), lVar1 != 0)) {
      *param_1 = lVar1;
      return 1;
    }
    *param_1 = 0;
    uVar2 = 0;
  }
  else {
    *param_1 = lVar1;
    uVar2 = 2;
  }
  return uVar2;
}

// FUN_1501b7b60 @ 1501b7b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1501b7b60(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    uVar3 = X509_find_by_subject(param_1,*(undefined8 *)(param_2 + 2));
    return uVar3;
  }
  if (**(int **)(param_2 + 2) == 0x14) {
    plVar1 = *(longlong **)(*(int **)(param_2 + 2) + 2);
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num();
    if (0 < iVar2) {
      do {
        uVar3 = OPENSSL_sk_value(param_1,iVar5);
        uVar4 = EVP_sha1();
        X509_pubkey_digest(uVar3,uVar4,&local_38,0);
        if (((*plVar1 == local_38) && (plVar1[1] == local_30)) && ((int)plVar1[2] == local_28)) {
          return uVar3;
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(param_1);
      } while (iVar5 < iVar2);
    }
  }
  return 0;
}

// FUN_1501b7c50 @ 1501b7c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1501b7c50(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1501b7c5e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_2 == (undefined8 *)0x0) {
    iVar3 = 0;
    iVar2 = OPENSSL_sk_num(param_3);
    if (0 < iVar2) {
      do {
        puVar6 = (undefined8 *)OPENSSL_sk_value(param_3,iVar3);
        uVar7 = FUN_1501b7c50(param_1,*puVar6,0);
        if ((int)uVar7 < 1) {
          return uVar7;
        }
        iVar3 = iVar3 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar3 < iVar2);
    }
    return 1;
  }
  uVar1 = OBJ_obj2nid(*param_2);
  uVar4 = OBJ_nid2sn(uVar1);
  lVar5 = EVP_get_digestbyname(uVar4);
  if (lVar5 == 0) {
    local_78 = 0x120;
    ERR_put_error(0x27,0x6d,0x77,"crypto\\ocsp\\ocsp_vfy.c");
  }
  else {
    iVar2 = EVP_MD_size(lVar5);
    if (-1 < iVar2) {
      if ((*(int *)(param_2 + 2) == iVar2) && (*(int *)(param_2 + 5) == iVar2)) {
        uVar4 = X509_get_subject_name(param_1);
        iVar3 = X509_NAME_digest(uVar4,lVar5,local_68,0);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        iVar3 = memcmp(local_68,(void *)param_2[3],(longlong)iVar2);
        if (iVar3 == 0) {
          X509_pubkey_digest(param_1,lVar5,local_68,0);
          iVar2 = memcmp(local_68,(void *)param_2[6],(longlong)iVar2);
          return (ulonglong)(iVar2 == 0);
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}

// FUN_1501b7dc0 @ 1501b7dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1501b7dc0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  longlong lVar1;
  
  if ((param_5 & 2) == 0) {
    lVar1 = X509_find_by_subject(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18),param_3);
    if (lVar1 != 0) {
      *param_1 = lVar1;
      return 1;
    }
  }
  lVar1 = X509_find_by_subject(param_4,param_3);
  if (lVar1 != 0) {
    *param_1 = lVar1;
    return 2;
  }
  return 0;
}

// FUN_1501b7e60 @ 1501b7e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7e60(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_1501b7e80 @ 1501b7e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7e80(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_1501b7ea0 @ 1501b7ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7ea0(void)

{
  OPENSSL_sk_dup();
  return;
}

// FUN_1501b7ec0 @ 1501b7ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7ec0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_1501b7ee0 @ 1501b7ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7ee0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_1501b7f00 @ 1501b7f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7f00(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_1501b7f20 @ 1501b7f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7f20(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_1501b7f40 @ 1501b7f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7f40(void)

{
  OPENSSL_sk_value();
  return;
}

