// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// OCSP_CERTID_dup @ 14f736420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_CERTID_dup(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = OCSP_CERTID_it();
  ASN1_item_dup(uVar1,param_1);
  return;
}

// OCSP_cert_id_new @ 14f736450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * OCSP_cert_id_new(undefined8 param_1,undefined8 param_2,int *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f736461;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)OCSP_CERTID_new();
  if (plVar2 == (longlong *)0x0) goto LAB_14f7364c1;
  ASN1_OBJECT_free(*plVar2);
  iVar1 = EVP_MD_type(param_1);
  if (iVar1 == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x3a);
    uVar5 = 0x78;
  }
  else {
    lVar3 = OBJ_nid2obj(iVar1);
    *plVar2 = lVar3;
    if (lVar3 == 0) goto LAB_14f7364c1;
    puVar4 = (undefined4 *)ASN1_TYPE_new();
    plVar2[1] = (longlong)puVar4;
    if (puVar4 == (undefined4 *)0x0) goto LAB_14f7364c1;
    *puVar4 = 5;
    iVar1 = X509_NAME_digest(param_2,param_1,local_78,local_88);
    if (iVar1 != 0) {
      iVar1 = ASN1_OCTET_STRING_set(plVar2 + 2,local_78,local_88[0]);
      if (iVar1 != 0) {
        local_90 = 0;
        local_98 = param_1;
        iVar1 = EVP_Digest(*(undefined8 *)(param_3 + 2),(longlong)*param_3,local_78,local_88);
        if ((iVar1 != 0) &&
           (iVar1 = ASN1_OCTET_STRING_set(plVar2 + 5,local_78,local_88[0]), iVar1 != 0)) {
          if (param_4 == 0) {
            return plVar2;
          }
          iVar1 = ASN1_STRING_copy(plVar2 + 8,param_4);
          if (iVar1 != 0) {
            return plVar2;
          }
        }
      }
      goto LAB_14f7364c1;
    }
    local_98 = CONCAT44(local_98._4_4_,0x55);
    uVar5 = 0x66;
  }
  ERR_put_error(0x27,0x65,uVar5,"crypto\\ocsp\\ocsp_lib.c");
LAB_14f7364c1:
  OCSP_CERTID_free(plVar2);
  return (longlong *)0x0;
}

// OCSP_cert_to_id @ 14f7365d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_cert_to_id(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    param_1 = EVP_sha1();
  }
  if (param_2 == 0) {
    uVar1 = X509_get_subject_name(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = X509_get_issuer_name(param_2);
    uVar2 = X509_get0_serialNumber(param_2);
  }
  uVar3 = X509_get0_pubkey_bitstr(param_3);
  OCSP_cert_id_new(param_1,uVar1,uVar3,uVar2);
  return;
}

// OCSP_id_cmp @ 14f736660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_id_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = OBJ_cmp(*param_1,*param_2);
  if (iVar1 == 0) {
    iVar1 = ASN1_OCTET_STRING_cmp(param_1 + 2,param_2 + 2);
    if (iVar1 == 0) {
      iVar1 = ASN1_OCTET_STRING_cmp(param_1 + 5,param_2 + 5);
      if (iVar1 == 0) {
        ASN1_INTEGER_cmp(param_1 + 8,param_2 + 8);
      }
    }
  }
  return;
}

// OCSP_id_issuer_cmp @ 14f7366d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_id_issuer_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = OBJ_cmp(*param_1,*param_2);
  if (iVar1 == 0) {
    iVar1 = ASN1_OCTET_STRING_cmp(param_1 + 2,param_2 + 2);
    if (iVar1 == 0) {
      ASN1_OCTET_STRING_cmp(param_1 + 5,param_2 + 5);
    }
  }
  return;
}

// OCSP_parse_url @ 14f736730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
OCSP_parse_url(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
              undefined4 *param_5)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f73674c;
  lVar3 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  _Str = (char *)CRYPTO_strdup(param_1,"crypto\\ocsp\\ocsp_lib.c",0x81);
  if (_Str != (char *)0x0) {
    pcVar1 = strchr(_Str,0x3a);
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
      lVar5 = lVar3;
      do {
        lVar4 = lVar5 + 1;
        if (_Str[lVar5] != (&s_http)[lVar5]) goto LAB_14f7367e1;
        lVar5 = lVar4;
      } while (lVar4 != 5);
      pcVar7 = "80";
      *param_5 = 0;
      goto LAB_14f73680d;
    }
    goto LAB_14f736919;
  }
  goto LAB_14f736929;
  while (lVar3 = lVar5, lVar5 != 6) {
LAB_14f7367e1:
    lVar5 = lVar3 + 1;
    if (_Str[lVar3] != (&s_https)[lVar3]) goto LAB_14f736919;
  }
  pcVar7 = "443";
  *param_5 = 1;
LAB_14f73680d:
  if ((pcVar1[1] != '/') || (pcVar1[2] != '/')) {
LAB_14f736919:
    uVar9 = 0xd0;
    uVar8 = 0x79;
    goto LAB_14f736937;
  }
  pcVar6 = pcVar1 + 3;
  pcVar2 = strchr(pcVar6,0x2f);
  if (pcVar2 == (char *)0x0) {
    lVar3 = CRYPTO_strdup("/","crypto\\ocsp\\ocsp_lib.c",0xa3);
    *param_4 = lVar3;
  }
  else {
    lVar3 = CRYPTO_strdup(pcVar2,"crypto\\ocsp\\ocsp_lib.c",0xa5);
    *param_4 = lVar3;
    *pcVar2 = '\0';
  }
  if (*param_4 != 0) {
    pcVar2 = pcVar6;
    if (*pcVar6 == '[') {
      pcVar2 = pcVar1 + 4;
      pcVar6 = strchr(pcVar2,0x5d);
      if (pcVar6 == (char *)0x0) goto LAB_14f736919;
      *pcVar6 = '\0';
      pcVar6 = pcVar6 + 1;
    }
    pcVar1 = strchr(pcVar6,0x3a);
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
      pcVar7 = pcVar1 + 1;
    }
    lVar3 = CRYPTO_strdup(pcVar7,"crypto\\ocsp\\ocsp_lib.c",0xbe);
    *param_3 = lVar3;
    if (lVar3 != 0) {
      lVar3 = CRYPTO_strdup(pcVar2,"crypto\\ocsp\\ocsp_lib.c",0xc2);
      *param_2 = lVar3;
      if (lVar3 != 0) {
        CRYPTO_free(_Str,"crypto\\ocsp\\ocsp_lib.c",199);
        return 1;
      }
    }
  }
LAB_14f736929:
  uVar9 = 0xcc;
  uVar8 = 0x41;
LAB_14f736937:
  ERR_put_error(0x27,0x72,uVar8,"crypto\\ocsp\\ocsp_lib.c",uVar9,uVar10);
  CRYPTO_free(_Str,"crypto\\ocsp\\ocsp_lib.c",0xd3);
  CRYPTO_free(*param_4,"crypto\\ocsp\\ocsp_lib.c",0xd4);
  *param_4 = 0;
  CRYPTO_free(*param_3,"crypto\\ocsp\\ocsp_lib.c",0xd6);
  *param_3 = 0;
  CRYPTO_free(*param_2,"crypto\\ocsp\\ocsp_lib.c",0xd8);
  *param_2 = 0;
  return 0;
}

