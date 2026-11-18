// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 20

// FUN_14f7369d0 @ 14f7369d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f7369d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f7369ea;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar8 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  lVar7 = param_3;
  lVar3 = param_3;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
      lVar3 = i2v_GENERAL_NAME(param_1,puVar2[1],lVar7);
      if (lVar3 == 0) {
LAB_14f736b0d:
        local_a8 = CONCAT44(local_a8._4_4_,0x5e);
        ERR_put_error(0x22,0x8a,0x41,"crypto\\x509v3\\v3_info.c");
        if ((param_3 == 0) && (lVar7 != 0)) {
          OPENSSL_sk_pop_free(lVar7,X509V3_conf_free);
        }
        return 0;
      }
      lVar4 = OPENSSL_sk_value(lVar3,iVar8);
      i2t_ASN1_OBJECT(local_98,0x50,*puVar2);
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar7) != '\0');
      lVar6 = -1;
      do {
        lVar5 = lVar6 + 1;
        lVar9 = lVar6 + 1;
        lVar6 = lVar5;
      } while (local_98[lVar9] != '\0');
      lVar9 = (longlong)((int)lVar7 + (int)lVar5 + 4);
      lVar6 = CRYPTO_malloc(lVar9,"crypto\\x509v3\\v3_info.c",0x52);
      lVar7 = lVar3;
      if (lVar6 == 0) goto LAB_14f736b0d;
      local_a8 = *(undefined8 *)(lVar4 + 8);
      BIO_snprintf(lVar6,lVar9,"%s - %s",local_98);
      CRYPTO_free(*(undefined8 *)(lVar4 + 8),"crypto\\x509v3\\v3_info.c",0x56);
      *(longlong *)(lVar4 + 8) = lVar6;
      iVar8 = iVar8 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar8 < iVar1);
  }
  if ((param_3 == 0) && (lVar3 == 0)) {
    lVar3 = OPENSSL_sk_new_null();
  }
  return lVar3;
}

// FUN_14f736b80 @ 14f736b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f736b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 local_48 [8];
  char *local_40;
  undefined8 local_38;
  
  iVar2 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar2);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x8b,0x41,"crypto\\x509v3\\v3_info.c",0x72);
    return 0;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    do {
      lVar4 = OPENSSL_sk_value(param_3,iVar8);
      plVar5 = (longlong *)ASN1_item_new(&DAT_1534bae70);
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0x79;
LAB_14f736d8c:
        uVar9 = 0x41;
LAB_14f736d92:
        ERR_put_error(0x22,0x8b,uVar9,"crypto\\x509v3\\v3_info.c",uVar10);
LAB_14f736da6:
        OPENSSL_sk_pop_free(lVar3,ACCESS_DESCRIPTION_free);
        return 0;
      }
      OPENSSL_sk_push(lVar3,plVar5);
      pcVar6 = strchr(*(char **)(lVar4 + 8),0x3b);
      if (pcVar6 == (char *)0x0) {
        uVar10 = 0x80;
        uVar9 = 0x8f;
        goto LAB_14f736d92;
      }
      iVar1 = *(int *)(lVar4 + 8);
      local_40 = pcVar6 + 1;
      local_38 = *(undefined8 *)(lVar4 + 0x10);
      lVar7 = v2i_GENERAL_NAME_ex(plVar5[1],param_1,param_2,local_48,0);
      if (lVar7 == 0) goto LAB_14f736da6;
      lVar4 = CRYPTO_strndup(*(undefined8 *)(lVar4 + 8),(longlong)((int)pcVar6 - iVar1),
                             "crypto\\x509v3\\v3_info.c",0x88);
      if (lVar4 == 0) {
        uVar10 = 0x8a;
        goto LAB_14f736d8c;
      }
      lVar7 = OBJ_txt2obj(lVar4,0);
      *plVar5 = lVar7;
      if (lVar7 == 0) {
        ERR_put_error(0x22,0x8b,0x77,"crypto\\x509v3\\v3_info.c",0x90);
        ERR_add_error_data(2,"value=",lVar4);
        CRYPTO_free(lVar4,"crypto\\x509v3\\v3_info.c",0x92);
        goto LAB_14f736da6;
      }
      CRYPTO_free(lVar4,"crypto\\x509v3\\v3_info.c",0x95);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  return lVar3;
}

// ACCESS_DESCRIPTION_free @ 14f736df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ACCESS_DESCRIPTION_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534bae70);
  return;
}

// ACCESS_DESCRIPTION_new @ 14f736e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ACCESS_DESCRIPTION_new(void)

{
  ASN1_item_new(&DAT_1534bae70);
  return;
}

// AUTHORITY_INFO_ACCESS_free @ 14f736e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AUTHORITY_INFO_ACCESS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534baec0);
  return;
}

// AUTHORITY_INFO_ACCESS_new @ 14f736e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AUTHORITY_INFO_ACCESS_new(void)

{
  ASN1_item_new(&DAT_1534baec0);
  return;
}

// d2i_ACCESS_DESCRIPTION @ 14f736eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ACCESS_DESCRIPTION(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_AUTHORITY_INFO_ACCESS @ 14f736ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_AUTHORITY_INFO_ACCESS(void)

{
  ASN1_item_d2i();
  return;
}

// i2a_ACCESS_DESCRIPTION @ 14f736f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2a_ACCESS_DESCRIPTION(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  i2a_ASN1_OBJECT(param_1,*param_2,param_3,param_4,0x14f736f1a);
  return 2;
}

// i2d_ACCESS_DESCRIPTION @ 14f736f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ACCESS_DESCRIPTION(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534bae70);
  return;
}

// i2d_AUTHORITY_INFO_ACCESS @ 14f736f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_AUTHORITY_INFO_ACCESS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534baec0);
  return;
}

// FUN_14f736fa0 @ 14f736fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f736fa0(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f736fc0 @ 14f736fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f736fc0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f736fe0 @ 14f736fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f736fe0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f737000 @ 14f737000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737000(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f737020 @ 14f737020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737020(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f737040 @ 14f737040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737040(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f737060 @ 14f737060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737060(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f737080 @ 14f737080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f737080(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7370a0 @ 14f7370a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7370a0(void)

{
  OPENSSL_sk_value();
  return;
}

