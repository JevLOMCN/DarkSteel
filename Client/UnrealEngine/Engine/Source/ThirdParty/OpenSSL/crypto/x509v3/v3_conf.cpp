// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 32

// FUN_14f7370c0 @ 14f7370c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7370c0(void)

{
  NCONF_get_string();
  return;
}

// FUN_14f7370e0 @ 14f7370e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7370e0(void)

{
  NCONF_get_section();
  return;
}

// FUN_14f737100 @ 14f737100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737100(void)

{
  CONF_get_string();
  return;
}

// FUN_14f737120 @ 14f737120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737120(void)

{
  CONF_get_section();
  return;
}

// X509V3_EXT_CRL_add_conf @ 14f737140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_CRL_add_conf
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 local_28 [24];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f737155;
  CONF_set_nconf(local_28,param_1);
  lVar1 = param_4 + 0x38;
  if (param_4 == 0) {
    lVar1 = 0;
  }
  X509V3_EXT_add_nconf_sk(local_28,param_2,param_3,lVar1);
  return;
}

// X509V3_EXT_CRL_add_nconf @ 14f7371b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_CRL_add_nconf(void)

{
  X509V3_EXT_add_nconf_sk();
  return;
}

// X509V3_EXT_REQ_add_conf @ 14f7371e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509V3_EXT_REQ_add_conf
                    (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 local_res20;
  undefined1 local_28 [24];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7371fa;
  CONF_set_nconf(local_28,param_1);
  local_res20 = 0;
  puVar3 = &local_res20;
  if (param_4 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  uVar2 = X509V3_EXT_add_nconf_sk(local_28,param_2,param_3,puVar3);
  if (((int)uVar2 != 0) && (puVar3 != (undefined8 *)0x0)) {
    uVar1 = X509_REQ_add_extensions(param_4,local_res20);
    uVar2 = (ulonglong)uVar1;
    OPENSSL_sk_pop_free(local_res20,X509_EXTENSION_free);
  }
  return uVar2;
}

// X509V3_EXT_REQ_add_nconf @ 14f737280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509V3_EXT_REQ_add_nconf(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong in_R9;
  undefined8 local_res20;
  
  local_res20 = 0;
  puVar3 = &local_res20;
  if (in_R9 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  uVar2 = X509V3_EXT_add_nconf_sk();
  if (((int)uVar2 != 0) && (puVar3 != (undefined8 *)0x0)) {
    uVar1 = X509_REQ_add_extensions(in_R9,local_res20);
    uVar2 = (ulonglong)uVar1;
    OPENSSL_sk_pop_free(local_res20,X509_EXTENSION_free);
  }
  return uVar2;
}

// X509V3_EXT_add_conf @ 14f7372f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_add_conf(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 local_28 [24];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f737305;
  CONF_set_nconf(local_28,param_1);
  lVar1 = param_4 + 0x68;
  if (param_4 == 0) {
    lVar1 = 0;
  }
  X509V3_EXT_add_nconf_sk(local_28,param_2,param_3,lVar1);
  return;
}

// X509V3_EXT_add_nconf @ 14f737360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_add_nconf(void)

{
  X509V3_EXT_add_nconf_sk();
  return;
}

// X509V3_EXT_add_nconf_sk @ 14f737390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509V3_EXT_add_nconf_sk(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = NCONF_get_section(param_1,param_3);
  if (lVar2 == 0) {
    return 0;
  }
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(lVar2);
  if (0 < iVar1) {
    do {
      lVar3 = OPENSSL_sk_value(lVar2,iVar5);
      lVar3 = X509V3_EXT_nconf(param_1,param_2,*(undefined8 *)(lVar3 + 8),
                               *(undefined8 *)(lVar3 + 0x10));
      if (lVar3 == 0) {
        return 0;
      }
      if (*param_2 == 2) {
        FUN_14f737960(*param_4,lVar3);
      }
      if ((param_4 != (undefined8 *)0x0) &&
         (lVar4 = X509v3_add_ext(param_4,lVar3,0xffffffff), lVar4 == 0)) {
        X509_EXTENSION_free(lVar3);
        return 0;
      }
      X509_EXTENSION_free(lVar3);
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(lVar2);
    } while (iVar5 < iVar1);
  }
  return 1;
}

// X509V3_EXT_conf @ 14f737490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_conf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_28 [24];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7374a5;
  CONF_set_nconf(local_28,param_1);
  X509V3_EXT_nconf(local_28,param_2,param_3,param_4);
  return;
}

// X509V3_EXT_conf_nid @ 14f7374f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_conf_nid(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4
                        )

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res20;
  undefined1 local_28 [24];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f73750a;
  CONF_set_nconf(local_28,param_1);
  local_res20 = param_4;
  uVar1 = FUN_14f737ec0(&local_res20);
  iVar2 = FUN_14f737f60(&local_res20);
  if (iVar2 == 0) {
    FUN_14f737b50(local_28,param_2,param_3,uVar1,local_res20);
  }
  else {
    uVar3 = OBJ_nid2sn(param_3);
    FUN_14f738040(uVar3,local_res20,uVar1,iVar2,param_2);
  }
  return;
}

// X509V3_EXT_i2d @ 14f7375a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_i2d(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7375b5;
  lVar1 = X509V3_EXT_get_nid();
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x88,0x81,"crypto\\x509v3\\v3_conf.c",0xb6,uVar2);
    return 0;
  }
  uVar2 = FUN_14f7379f0(lVar1,param_1,param_2,param_3);
  return uVar2;
}

// X509V3_EXT_nconf @ 14f737620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509V3_EXT_nconf(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_res20;
  undefined8 uVar6;
  
  uVar6 = 0x14f737638;
  local_res20 = param_4;
  uVar2 = FUN_14f737ec0(&local_res20);
  iVar3 = FUN_14f737f60(&local_res20);
  if (iVar3 != 0) {
    lVar5 = FUN_14f738040(param_3,local_res20,uVar2,iVar3,param_2);
    return lVar5;
  }
  uVar4 = OBJ_sn2nid(param_3);
  uVar1 = local_res20;
  lVar5 = FUN_14f737b50(param_1,param_2,uVar4,uVar2,local_res20,uVar6);
  if (lVar5 == 0) {
    ERR_put_error(0x22,0x98,0x80,"crypto\\x509v3\\v3_conf.c",0x2f);
    ERR_add_error_data(4,"name=",param_3,", value=",uVar1);
  }
  return lVar5;
}

// X509V3_EXT_nconf_nid @ 14f737710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_nconf_nid
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res20;
  undefined8 uVar3;
  
  uVar3 = 0x14f73772d;
  local_res20 = param_4;
  uVar1 = FUN_14f737ec0(&local_res20);
  iVar2 = FUN_14f737f60(&local_res20);
  if (iVar2 == 0) {
    FUN_14f737b50(param_1,param_2,param_3,uVar1,local_res20,uVar3);
  }
  else {
    uVar3 = OBJ_nid2sn(param_3);
    FUN_14f738040(uVar3,local_res20,uVar1,iVar2,param_2);
  }
  return;
}

// X509V3_get_section @ 14f7377b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_get_section(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f7377df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(longlong *)(param_1 + 0x30));
    return uVar1;
  }
  ERR_put_error(0x22,0x8e,0x94,"crypto\\x509v3\\v3_conf.c",0x181);
  return 0;
}

// X509V3_get_string @ 14f737810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_get_string(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(param_1 + 0x28),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f73783e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(longlong *)(param_1 + 0x30));
    return uVar1;
  }
  ERR_put_error(0x22,0x8f,0x94,"crypto\\x509v3\\v3_conf.c",0x175);
  return 0;
}

// X509V3_section_free @ 14f737870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_section_free(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((param_2 != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x28) + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

// X509V3_set_nconf @ 14f737900

void X509V3_set_nconf(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_154df9708;
  return;
}

// X509V3_string_free @ 14f737920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_string_free(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((param_2 != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x28) + 0x10), pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

// FUN_14f737960 @ 14f737960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737960(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = X509_EXTENSION_get_object(param_2);
  iVar1 = X509v3_get_ext_by_OBJ(param_1,uVar2,0xffffffff);
  while (-1 < iVar1) {
    uVar3 = X509v3_get_ext(param_1,iVar1);
    X509v3_delete_ext(param_1,iVar1);
    X509_EXTENSION_free(uVar3);
    iVar1 = X509v3_get_ext_by_OBJ(param_1,uVar2,0xffffffff);
  }
  return;
}

// FUN_14f7379f0 @ 14f7379f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7379f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong local_res8;
  longlong local_28 [2];
  
  local_28[1] = 0x14f737a0e;
  piVar4 = (int *)0x0;
  local_res8 = 0;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x28))(param_4,0);
    local_res8 = CRYPTO_malloc((longlong)iVar1,"crypto\\x509v3\\v3_conf.c",0x95);
    if (local_res8 == 0) goto LAB_14f737a52;
    local_28[0] = local_res8;
    (**(code **)(param_1 + 0x28))(param_4,local_28);
  }
  else {
    local_res8 = 0;
    uVar2 = (**(code **)(param_1 + 8))();
    iVar1 = ASN1_item_i2d(param_4,&local_res8,uVar2);
    piVar4 = (int *)0x0;
    if (iVar1 < 0) goto LAB_14f737a52;
  }
  piVar4 = (int *)ASN1_OCTET_STRING_new();
  if (piVar4 != (int *)0x0) {
    *(longlong *)(piVar4 + 2) = local_res8;
    local_res8 = 0;
    *piVar4 = iVar1;
    lVar3 = X509_EXTENSION_create_by_NID(0,param_2,param_3,piVar4);
    if (lVar3 != 0) {
      ASN1_OCTET_STRING_free(piVar4);
      return lVar3;
    }
  }
LAB_14f737a52:
  ERR_put_error(0x22,0x87,0x41,"crypto\\x509v3\\v3_conf.c",0xa8);
  CRYPTO_free(local_res8,"crypto\\x509v3\\v3_conf.c",0xa9);
  ASN1_OCTET_STRING_free(piVar4);
  return 0;
}

// FUN_14f737b50 @ 14f737b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f737b50(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar7 = 0x14f737b64;
  if (param_3 == 0) {
    ERR_put_error(0x22,0x97,0x82,"crypto\\x509v3\\v3_conf.c",CONCAT44(uVar6,0x4e),0x14f737b64);
    return 0;
  }
  lVar2 = X509V3_EXT_get_nid(param_3);
  if (lVar2 == 0) {
    ERR_put_error(0x22,0x97,0x81,"crypto\\x509v3\\v3_conf.c",CONCAT44(uVar6,0x52),uVar7);
    return 0;
  }
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    if (*(code **)(lVar2 + 0x38) == (code *)0x0) {
      if (*(code **)(lVar2 + 0x58) == (code *)0x0) {
        ERR_put_error(0x22,0x97,0x67,"crypto\\x509v3\\v3_conf.c",CONCAT44(uVar6,0x75),uVar7);
        uVar7 = OBJ_nid2sn(param_3);
        ERR_add_error_data(2,"name=",uVar7);
        return 0;
      }
      if ((*(longlong *)(param_2 + 0x30) == 0) || (*(longlong *)(param_2 + 0x28) == 0)) {
        ERR_put_error(0x22,0x97,0x88,"crypto\\x509v3\\v3_conf.c",CONCAT44(uVar6,0x6e),uVar7);
        return 0;
      }
      lVar4 = (**(code **)(lVar2 + 0x58))(lVar2,param_2,param_5);
    }
    else {
      lVar4 = (**(code **)(lVar2 + 0x38))(lVar2,param_2,param_5);
    }
  }
  else {
    if (*param_5 == '@') {
      lVar3 = NCONF_get_section(param_1,param_5 + 1);
    }
    else {
      lVar3 = X509V3_parse_list(param_5);
    }
    if ((lVar3 == 0) || (iVar1 = OPENSSL_sk_num(lVar3), iVar1 < 1)) {
      ERR_put_error(0x22,0x97,0x69,"crypto\\x509v3\\v3_conf.c",CONCAT44(uVar6,0x5d),uVar7);
      uVar7 = OBJ_nid2sn(param_3);
      ERR_add_error_data(4,"name=",uVar7,",section=",param_5);
      if (*param_5 == '@') {
        return 0;
      }
      OPENSSL_sk_pop_free(lVar3,X509V3_conf_free);
      return 0;
    }
    lVar4 = (**(code **)(lVar2 + 0x48))(lVar2,param_2,lVar3);
    if (*param_5 != '@') {
      OPENSSL_sk_pop_free(lVar3,X509V3_conf_free);
    }
  }
  if (lVar4 == 0) {
    return 0;
  }
  uVar7 = FUN_14f7379f0(lVar2,param_3,param_4,lVar4);
  if (*(code **)(lVar2 + 8) == (code *)0x0) {
    (**(code **)(lVar2 + 0x18))(lVar4);
    return uVar7;
  }
  uVar5 = (**(code **)(lVar2 + 8))();
  ASN1_item_free(lVar4,uVar5);
  return uVar7;
}

// FUN_14f737dd0 @ 14f737dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f737dd0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  local_res20 = 0;
  lVar2 = ASN1_generate_v3();
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = i2d_ASN1_TYPE(lVar2,&local_res20);
  *param_3 = uVar1;
  ASN1_TYPE_free(lVar2);
  return local_res20;
}

// FUN_14f737e40 @ 14f737e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737e40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f737e60 @ 14f737e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737e60(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f737e80 @ 14f737e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737e80(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f737ea0 @ 14f737ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737ea0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f737ec0 @ 14f737ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f737ec0(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  pcVar1 = (char *)*param_1;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (pcVar1[uVar3] != '\0');
  if ((8 < uVar3) && (iVar2 = strncmp(pcVar1,"critical,",9), iVar2 == 0)) {
    pcVar4 = pcVar1 + 9;
    iVar2 = ossl_ctype_check((int)pcVar1[9],8);
    while (iVar2 != 0) {
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      iVar2 = ossl_ctype_check((int)*pcVar1,8);
    }
    *param_1 = pcVar4;
    return 1;
  }
  return 0;
}

// FUN_14f737f60 @ 14f737f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f737f60(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  pcVar4 = (char *)*param_1;
  uVar7 = 0xffffffffffffffff;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (pcVar4[uVar3] != '\0');
  if (uVar3 < 4) {
LAB_14f737fc0:
    do {
      uVar7 = uVar7 + 1;
    } while (pcVar4[uVar7] != '\0');
    if (4 < uVar7) {
      lVar5 = 5;
      iVar2 = strncmp(pcVar4,"ASN1:",5);
      if (iVar2 == 0) {
        uVar6 = 2;
        goto LAB_14f737fee;
      }
    }
    uVar6 = 0;
  }
  else {
    lVar5 = 4;
    iVar2 = strncmp(pcVar4,"DER:",4);
    if (iVar2 != 0) goto LAB_14f737fc0;
    uVar6 = 1;
LAB_14f737fee:
    pcVar4 = pcVar4 + lVar5;
    iVar2 = ossl_ctype_check((int)*pcVar4,8);
    while (iVar2 != 0) {
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      iVar2 = ossl_ctype_check((int)*pcVar1,8);
    }
    *param_1 = pcVar4;
  }
  return uVar6;
}

// FUN_14f738040 @ 14f738040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
FUN_14f738040(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 local_38 [2];
  undefined4 *local_30;
  
  local_30 = (undefined4 *)0x14f738062;
  puVar7 = (undefined4 *)0x0;
  local_38[0] = 0;
  lVar1 = OBJ_txt2obj(param_1,0);
  puVar2 = puVar7;
  puVar5 = puVar7;
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x74,0x73,"crypto\\x509v3\\v3_conf.c",0xea);
    pcVar6 = "name=";
    param_2 = param_1;
  }
  else {
    if (param_4 == 1) {
      puVar2 = (undefined4 *)OPENSSL_hexstr2buf(param_2,local_38);
LAB_14f73818c:
      if (puVar2 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)ASN1_OCTET_STRING_new();
        if (puVar4 == (undefined4 *)0x0) {
          ERR_put_error(0x22,0x74,0x41,"crypto\\x509v3\\v3_conf.c",0xfc);
        }
        else {
          *(undefined4 **)(puVar4 + 2) = puVar2;
          *puVar4 = local_38[0];
          puVar5 = (undefined4 *)X509_EXTENSION_create_by_OBJ(0,lVar1,param_3,puVar4);
          puVar2 = puVar7;
        }
        goto LAB_14f738126;
      }
    }
    else if (param_4 == 2) {
      local_30 = (undefined4 *)0x0;
      lVar3 = ASN1_generate_v3(param_2,param_5);
      if (lVar3 != 0) {
        local_38[0] = i2d_ASN1_TYPE(lVar3,&local_30);
        ASN1_TYPE_free(lVar3);
        puVar2 = local_30;
        goto LAB_14f73818c;
      }
      puVar2 = (undefined4 *)0x0;
    }
    ERR_put_error(0x22,0x74,0x74,"crypto\\x509v3\\v3_conf.c",0xf6);
    pcVar6 = "value=";
  }
  ERR_add_error_data(2,pcVar6,param_2);
  puVar4 = puVar7;
LAB_14f738126:
  ASN1_OBJECT_free(lVar1);
  ASN1_OCTET_STRING_free(puVar4);
  CRYPTO_free(puVar2,"crypto\\x509v3\\v3_conf.c",0x109);
  return puVar5;
}

