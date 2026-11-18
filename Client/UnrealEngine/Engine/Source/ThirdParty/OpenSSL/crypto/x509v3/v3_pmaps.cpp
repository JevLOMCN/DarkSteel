// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// FUN_14f783930 @ 14f783930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f783930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x22,0x91,0x41,"crypto\\x509v3\\v3_pmaps.c",0x4c);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar7);
      if ((puVar3[2] == 0) || (puVar3[1] == 0)) {
        ERR_put_error(0x22,0x91,0x6e,"crypto\\x509v3\\v3_pmaps.c",0x54);
        ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        lVar4 = 0;
        lVar5 = 0;
LAB_14f783b20:
        ASN1_OBJECT_free(lVar4);
        ASN1_OBJECT_free(lVar5);
        OPENSSL_sk_pop_free(lVar2,POLICY_MAPPING_free);
        return 0;
      }
      lVar4 = OBJ_txt2obj(puVar3[1],0);
      lVar5 = OBJ_txt2obj(puVar3[2],0);
      if ((lVar4 == 0) || (lVar5 == 0)) {
        ERR_put_error(0x22,0x91,0x6e,"crypto\\x509v3\\v3_pmaps.c",0x5c);
        ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        goto LAB_14f783b20;
      }
      plVar6 = (longlong *)ASN1_item_new(&DAT_1534db450);
      if (plVar6 == (longlong *)0x0) {
        ERR_put_error(0x22,0x91,0x41,"crypto\\x509v3\\v3_pmaps.c",0x62);
        goto LAB_14f783b20;
      }
      *plVar6 = lVar4;
      plVar6[1] = lVar5;
      OPENSSL_sk_push(lVar2,plVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar2;
}

// FUN_14f783b50 @ 14f783b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f783b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [2];
  undefined1 local_b8 [80];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f783b60;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar3 = 0;
  local_c8[0] = param_3;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
      i2t_ASN1_OBJECT(local_68,0x50,*puVar2);
      i2t_ASN1_OBJECT(local_b8,0x50,puVar2[1]);
      X509V3_add_value(local_68,local_b8,local_c8);
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return local_c8[0];
}

// POLICY_MAPPING_free @ 14f783c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICY_MAPPING_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534db450);
  return;
}

// POLICY_MAPPING_new @ 14f783c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICY_MAPPING_new(void)

{
  ASN1_item_new(&DAT_1534db450);
  return;
}

// FUN_14f783cb0 @ 14f783cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783cb0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f783cd0 @ 14f783cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783cd0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f783cf0 @ 14f783cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783cf0(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f783d10 @ 14f783d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783d10(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f783d30 @ 14f783d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783d30(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f783d50 @ 14f783d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783d50(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f783d70 @ 14f783d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783d70(void)

{
  OPENSSL_sk_value();
  return;
}

