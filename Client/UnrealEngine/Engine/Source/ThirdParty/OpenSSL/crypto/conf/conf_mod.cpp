// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 29

// CONF_get1_default_config_file @ 14f6b3e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CONF_get1_default_config_file(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = ossl_safe_getenv();
  if (lVar1 != 0) {
    lVar1 = CRYPTO_strdup(lVar1,"crypto\\conf\\conf_mod.c",0x1e7);
    return lVar1;
  }
  lVar1 = X509_get_default_cert_area();
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar1 + lVar3) != '\0');
  lVar3 = (longlong)((int)lVar3 + 0xd);
  lVar1 = CRYPTO_malloc(lVar3,"crypto\\conf\\conf_mod.c",0x1f0);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = X509_get_default_cert_area();
  BIO_snprintf(lVar1,lVar3,"%s%s%s",uVar2,"/","openssl.cnf");
  return lVar1;
}

// CONF_imodule_get_value @ 14f6b3f50

undefined8 CONF_imodule_get_value(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// CONF_module_add @ 14f6b3f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CONF_module_add(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14f6b4520(0,param_1,param_2,param_3,0x14f6b3f8a);
  return lVar1 != 0;
}

// CONF_modules_finish @ 14f6b3fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CONF_modules_finish(void)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = OPENSSL_sk_num(DAT_1553e0098);
  while (0 < iVar1) {
    plVar2 = (longlong *)OPENSSL_sk_pop(DAT_1553e0098);
    if (plVar2 != (longlong *)0x0) {
      if (*(code **)(*plVar2 + 0x18) != (code *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      *(int *)(*plVar2 + 0x20) = *(int *)(*plVar2 + 0x20) + -1;
      CRYPTO_free(plVar2[1],"crypto\\conf\\conf_mod.c",0x19a);
      CRYPTO_free(plVar2[2],"crypto\\conf\\conf_mod.c",0x19b);
      CRYPTO_free(plVar2,"crypto\\conf\\conf_mod.c",0x19c);
    }
    iVar1 = OPENSSL_sk_num(DAT_1553e0098);
  }
  OPENSSL_sk_free(DAT_1553e0098);
  DAT_1553e0098 = 0;
  return;
}

// CONF_modules_load @ 14f6b40c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CONF_modules_load(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 != 0) {
    lVar2 = NCONF_get_string(param_1,0,param_2);
    if (lVar2 != 0) goto LAB_14f6b4123;
    if ((param_3 & 0x20) == 0) goto LAB_14f6b410e;
  }
  lVar2 = NCONF_get_string(param_1,0,"openssl_conf");
  if (lVar2 == 0) {
LAB_14f6b410e:
    ERR_clear_error();
    return 1;
  }
LAB_14f6b4123:
  lVar2 = NCONF_get_section(param_1,lVar2);
  if (lVar2 == 0) {
    return 0;
  }
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(lVar2);
  if (0 < iVar1) {
    do {
      lVar3 = OPENSSL_sk_value(lVar2,iVar5);
      uVar4 = FUN_14f6b4aa0(param_1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),param_3
                           );
      if (((int)uVar4 < 1) && ((param_3 & 1) == 0)) {
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(lVar2);
    } while (iVar5 < iVar1);
  }
  return 1;
}

// CONF_modules_load_file @ 14f6b41c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CONF_modules_load_file(ulonglong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  lVar3 = NCONF_new(0);
  uVar4 = uVar5;
  if (lVar3 == 0) {
LAB_14f6b425f:
    if (param_1 != 0) goto LAB_14f6b4279;
  }
  else {
    uVar4 = param_1;
    if ((param_1 != 0) || (uVar4 = CONF_get1_default_config_file(), uVar4 != 0)) {
      iVar1 = NCONF_load(lVar3,uVar4,0);
      if (iVar1 < 1) {
        uVar5 = 0;
        if (((param_3 & 0x10) != 0) && (uVar2 = ERR_peek_last_error(), (uVar2 & 0xfff) == 0x72)) {
          ERR_clear_error();
          uVar5 = 1;
        }
      }
      else {
        uVar2 = CONF_modules_load(lVar3,param_2,param_3);
        uVar5 = (ulonglong)uVar2;
      }
      goto LAB_14f6b425f;
    }
  }
  CRYPTO_free(uVar4,"crypto\\conf\\conf_mod.c",0x8e);
LAB_14f6b4279:
  NCONF_free(lVar3);
  if ((param_3 & 2) != 0) {
    uVar5 = 1;
  }
  return uVar5;
}

// CONF_modules_unload @ 14f6b42b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CONF_modules_unload(int param_1)

{
  int iVar1;
  longlong *plVar2;
  
  CONF_modules_finish();
  iVar1 = OPENSSL_sk_num(DAT_1553e0090);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    plVar2 = (longlong *)OPENSSL_sk_value(DAT_1553e0090,iVar1);
    if ((((int)plVar2[4] < 1) && (*plVar2 != 0)) || (param_1 != 0)) {
      OPENSSL_sk_delete(DAT_1553e0090,iVar1);
      DSO_free(*plVar2);
      CRYPTO_free(plVar2[1],"crypto\\conf\\conf_mod.c",0x180);
      CRYPTO_free(plVar2,"crypto\\conf\\conf_mod.c",0x181);
    }
  }
  iVar1 = OPENSSL_sk_num(DAT_1553e0090);
  if (iVar1 == 0) {
    OPENSSL_sk_free(DAT_1553e0090);
    DAT_1553e0090 = 0;
  }
  return;
}

// CONF_parse_list @ 14f6b43a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CONF_parse_list(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar6;
  
  if (param_1 == (byte *)0x0) {
    ERR_put_error(0xe,0x77,0x73,"crypto\\conf\\conf_mod.c",0x209,0x14f6b43b4);
    return 0;
  }
  while( true ) {
    if (param_3 != 0) {
      bVar2 = *param_1;
      while ((bVar2 != 0 && (iVar3 = isspace((uint)bVar2), iVar3 != 0))) {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      }
    }
    pbVar4 = (byte *)strchr((char *)param_1,param_2);
    if ((pbVar4 == param_1) || (*param_1 == 0)) {
      iVar3 = 0;
      param_1 = (byte *)0x0;
    }
    else {
      if (pbVar4 == (byte *)0x0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (param_1[lVar5] != 0);
        pbVar8 = param_1 + lVar6;
      }
      else {
        pbVar8 = pbVar4 + -1;
      }
      if (param_3 != 0) {
        iVar3 = isspace((uint)*pbVar8);
        while (iVar3 != 0) {
          pbVar1 = pbVar8 + -1;
          pbVar8 = pbVar8 + -1;
          iVar3 = isspace((uint)*pbVar1);
        }
      }
      iVar3 = ((int)pbVar8 - (int)param_1) + 1;
    }
    uVar7 = (*param_4)(param_1,iVar3,param_5);
    if ((int)uVar7 < 1) break;
    if (pbVar4 == (byte *)0x0) {
      return 1;
    }
    param_1 = pbVar4 + 1;
  }
  return uVar7;
}

// conf_modules_free_int @ 14f6b44f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void conf_modules_free_int(void)

{
  CONF_modules_finish();
  CONF_modules_unload(1);
  return;
}

// FUN_14f6b4520 @ 14f6b4520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_14f6b4520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6b453b;
  if ((DAT_1553e0090 == 0) && (DAT_1553e0090 = OPENSSL_sk_new_null(), DAT_1553e0090 == 0)) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto\\conf\\conf_mod.c",0xee);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0xe,0x7a,0x41,"crypto\\conf\\conf_mod.c",0xef,uVar4);
  }
  else {
    *puVar2 = param_1;
    lVar3 = CRYPTO_strdup(param_2,"crypto\\conf\\conf_mod.c",0xf4);
    puVar2[1] = lVar3;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    if (lVar3 == 0) {
      uVar4 = 0xf8;
    }
    else {
      iVar1 = OPENSSL_sk_push(DAT_1553e0090,puVar2);
      if (iVar1 != 0) {
        return puVar2;
      }
      CRYPTO_free(puVar2[1],"crypto\\conf\\conf_mod.c",0xfd);
      uVar4 = 0xfe;
    }
    CRYPTO_free(puVar2,"crypto\\conf\\conf_mod.c",uVar4);
  }
  return (undefined8 *)0x0;
}

// FUN_14f6b4650 @ 14f6b4650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6b4650(char *param_1)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = strrchr(param_1,0x2e);
  if (pcVar2 == (char *)0x0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_1[lVar3] != '\0');
    iVar5 = (int)lVar3;
  }
  else {
    iVar5 = (int)pcVar2 - (int)param_1;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(DAT_1553e0090);
  if (0 < iVar1) {
    do {
      lVar3 = OPENSSL_sk_value(DAT_1553e0090,iVar4);
      iVar1 = strncmp(*(char **)(lVar3 + 8),param_1,(longlong)iVar5);
      if (iVar1 == 0) {
        return lVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(DAT_1553e0090);
    } while (iVar4 < iVar1);
  }
  return 0;
}

// FUN_14f6b4710 @ 14f6b4710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4710(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
      (**(code **)(*param_1 + 0x18))();
    }
    *(int *)(*param_1 + 0x20) = *(int *)(*param_1 + 0x20) + -1;
    CRYPTO_free(param_1[1],"crypto\\conf\\conf_mod.c",0x19a);
    CRYPTO_free(param_1[2],"crypto\\conf\\conf_mod.c",0x19b);
    CRYPTO_free(param_1,"crypto\\conf\\conf_mod.c",0x19c);
  }
  return;
}

// FUN_14f6b4790 @ 14f6b4790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4790(undefined8 *param_1)

{
  DSO_free(*param_1);
  CRYPTO_free(param_1[1],"crypto\\conf\\conf_mod.c",0x180);
  CRYPTO_free(param_1,"crypto\\conf\\conf_mod.c",0x181);
  return;
}

// FUN_14f6b47e0 @ 14f6b47e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6b47e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = 1;
  bVar1 = false;
  plVar4 = (longlong *)CRYPTO_malloc(0x28,"crypto\\conf\\conf_mod.c",0x12a);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = param_1;
    lVar5 = CRYPTO_strdup(param_2,"crypto\\conf\\conf_mod.c",0x12f);
    plVar4[1] = lVar5;
    lVar5 = CRYPTO_strdup(param_3,"crypto\\conf\\conf_mod.c",0x130);
    plVar4[2] = lVar5;
    plVar4[4] = 0;
    if ((plVar4[1] == 0) || (lVar5 == 0)) goto LAB_14f6b48f0;
    bVar2 = false;
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      iVar6 = (**(code **)(param_1 + 0x10))(plVar4,param_4);
      bVar1 = true;
      bVar2 = true;
      if (iVar6 < 1) goto LAB_14f6b48de;
    }
    bVar1 = bVar2;
    if ((DAT_1553e0098 == 0) && (DAT_1553e0098 = OPENSSL_sk_new_null(), DAT_1553e0098 == 0)) {
      uVar7 = 0x142;
    }
    else {
      iVar3 = OPENSSL_sk_push(DAT_1553e0098,plVar4);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        return iVar6;
      }
      uVar7 = 0x148;
    }
    ERR_put_error(0xe,0x73,0x41,"crypto\\conf\\conf_mod.c",uVar7);
  }
LAB_14f6b48de:
  if ((*(code **)(param_1 + 0x18) != (code *)0x0) && (bVar1)) {
    (**(code **)(param_1 + 0x18))(plVar4);
  }
LAB_14f6b48f0:
  if (plVar4 != (longlong *)0x0) {
    CRYPTO_free(plVar4[1],"crypto\\conf\\conf_mod.c",0x158);
    CRYPTO_free(plVar4[2],"crypto\\conf\\conf_mod.c",0x159);
    CRYPTO_free(plVar4,"crypto\\conf\\conf_mod.c",0x15a);
  }
  return -1;
}

// FUN_14f6b4990 @ 14f6b4990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6b4990(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0;
  lVar1 = NCONF_get_string(param_1,param_3,"path");
  if (lVar1 == 0) {
    ERR_clear_error();
    lVar1 = param_2;
  }
  lVar2 = DSO_load(0,lVar1,0,0);
  if (lVar2 == 0) {
    uVar5 = 0x6e;
  }
  else {
    lVar3 = DSO_bind_func(lVar2,"OPENSSL_init");
    if (lVar3 == 0) {
      uVar5 = 0x70;
    }
    else {
      uVar4 = DSO_bind_func(lVar2,"OPENSSL_finish");
      lVar3 = FUN_14f6b4520(lVar2,param_2,lVar3,uVar4);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  DSO_free(lVar2);
  ERR_put_error(0xe,0x75,uVar5,"crypto\\conf\\conf_mod.c",CONCAT44(uVar6,0xe0));
  ERR_add_error_data(4,"module=",param_2,", path=",lVar1);
  return 0;
}

// FUN_14f6b4aa0 @ 14f6b4aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f6b4aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char *local_50;
  undefined1 *local_48;
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6b4ab2;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar2 = FUN_14f6b4650(param_2);
  if ((lVar2 == 0) &&
     (((param_4 & 8) != 0 || (lVar2 = FUN_14f6b4990(param_1,param_2,param_3), lVar2 == 0)))) {
    if ((param_4 & 4) == 0) {
      local_58 = CONCAT44(local_58._4_4_,0xa5);
      ERR_put_error(0xe,0x76,0x71,"crypto\\conf\\conf_mod.c");
      ERR_add_error_data(2,"module=",param_2);
    }
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_14f6b47e0(lVar2,param_2,param_3,param_1);
    if ((iVar1 < 1) && ((param_4 & 4) == 0)) {
      local_58 = CONCAT44(local_58._4_4_,0xb1);
      ERR_put_error(0xe,0x76,0x6d,"crypto\\conf\\conf_mod.c");
      BIO_snprintf(local_38,0xd,"%-8d",iVar1);
      local_48 = local_38;
      local_50 = ", retcode=";
      local_58 = param_3;
      ERR_add_error_data(6,"module=",param_2,", value=");
    }
  }
  return iVar1;
}

// FUN_14f6b4bf0 @ 14f6b4bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4bf0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6b4c10 @ 14f6b4c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4c10(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6b4c30 @ 14f6b4c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4c30(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6b4c50 @ 14f6b4c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4c50(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f6b4c70 @ 14f6b4c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4c70(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6b4c90 @ 14f6b4c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4c90(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f6b4cb0 @ 14f6b4cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4cb0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6b4cd0 @ 14f6b4cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4cd0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6b4cf0 @ 14f6b4cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4cf0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6b4d10 @ 14f6b4d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4d10(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6b4d30 @ 14f6b4d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4d30(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6b4d50 @ 14f6b4d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4d50(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6b4d70 @ 14f6b4d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b4d70(void)

{
  OPENSSL_sk_value();
  return;
}

