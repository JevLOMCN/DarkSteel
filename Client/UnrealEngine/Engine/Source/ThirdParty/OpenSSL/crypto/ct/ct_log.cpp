// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 19

// CTLOG_STORE_free @ 14f6d12b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CTLOG_STORE_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    OPENSSL_sk_pop_free(*param_1,CTLOG_free);
    CRYPTO_free(param_1,"crypto\\ct\\ct_log.c",0x73);
  }
  return;
}

// CTLOG_STORE_get0_log_by_id @ 14f6d1300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CTLOG_STORE_get0_log_by_id(undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*param_1);
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(*param_1,iVar3);
      iVar1 = memcmp((void *)(lVar2 + 8),param_2,param_3);
      if (iVar1 == 0) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*param_1);
    } while (iVar3 < iVar1);
  }
  return 0;
}

// CTLOG_STORE_load_default_file @ 14f6d13a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CTLOG_STORE_load_default_file(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)ossl_safe_getenv("CTLOG_FILE");
  pcVar2 = "C:\\Windows/ct_log_list.cnf";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  CTLOG_STORE_load_file(param_1,pcVar2);
  return;
}

// CTLOG_STORE_load_file @ 14f6d13e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CTLOG_STORE_load_file(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar6 = 0x14f6d13fa;
  uVar4 = 0;
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x18,"crypto\\ct\\ct_log.c",0x3b);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0x32,0x7a,0x41,"crypto\\ct\\ct_log.c",CONCAT44(uVar5,0x3e));
    return 0;
  }
  *puVar2 = param_1;
  lVar3 = NCONF_new(0);
  puVar2[1] = lVar3;
  if (lVar3 != 0) {
    iVar1 = NCONF_load(lVar3,param_2,0);
    if (iVar1 < 1) {
      uVar6 = 0xd1;
    }
    else {
      lVar3 = NCONF_get_string(puVar2[1],0,"enabled_logs");
      if (lVar3 == 0) {
        uVar6 = 0xd7;
      }
      else {
        iVar1 = CONF_parse_list(lVar3,0x2c,1,FUN_14f6d1970,puVar2,uVar6);
        if ((iVar1 != 0) && (puVar2[2] == 0)) {
          uVar4 = 1;
          goto LAB_14f6d14e8;
        }
        uVar6 = 0xdd;
      }
    }
    ERR_put_error(0x32,0x7b,0x6d,"crypto\\ct\\ct_log.c",uVar6);
  }
LAB_14f6d14e8:
  NCONF_free(puVar2[1]);
  CRYPTO_free(puVar2,"crypto\\ct\\ct_log.c",0x45);
  return uVar4;
}

// CTLOG_STORE_new @ 14f6d1530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * CTLOG_STORE_new(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6d153c;
  plVar1 = (longlong *)CRYPTO_zalloc(8,"crypto\\ct\\ct_log.c",0x5e);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0x32,0x83,0x41,"crypto\\ct\\ct_log.c",0x61,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = OPENSSL_sk_new_null();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(plVar1,"crypto\\ct\\ct_log.c",0x6b);
    return (longlong *)0x0;
  }
  return plVar1;
}

// CTLOG_free @ 14f6d15c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CTLOG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(*param_1,"crypto\\ct\\ct_log.c",0x10a);
    EVP_PKEY_free(param_1[5]);
    CRYPTO_free(param_1,"crypto\\ct\\ct_log.c",0x10c);
  }
  return;
}

// CTLOG_get0_name @ 14f6d1640

undefined8 CTLOG_get0_name(undefined8 *param_1)

{
  return *param_1;
}

// CTLOG_get0_public_key @ 14f6d1650

undefined8 CTLOG_get0_public_key(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// CTLOG_new @ 14f6d1660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * CTLOG_new(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6d1675;
  plVar2 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\ct\\ct_log.c",0xef);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x32,0x75,0x41,"crypto\\ct\\ct_log.c",0xf2,uVar4);
    return (longlong *)0x0;
  }
  lVar3 = CRYPTO_strdup(param_2,"crypto\\ct\\ct_log.c",0xf6);
  *plVar2 = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x32,0x75,0x41,"crypto\\ct\\ct_log.c",0xf8,uVar4);
  }
  else {
    iVar1 = FUN_14f6d1780(param_1,plVar2 + 1);
    if (iVar1 == 1) {
      plVar2[5] = param_1;
      return plVar2;
    }
  }
  CRYPTO_free(*plVar2,"crypto\\ct\\ct_log.c",0x10a);
  EVP_PKEY_free(plVar2[5]);
  CRYPTO_free(plVar2,"crypto\\ct\\ct_log.c",0x10c);
  return (longlong *)0x0;
}

// FUN_14f6d1780 @ 14f6d1780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6d1780(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 uVar2;
  
  uVar2 = 0x14f6d1790;
  local_res18[0] = 0;
  iVar1 = i2d_PUBKEY(param_1,local_res18);
  if (0 < iVar1) {
    SHA256(local_res18[0],(longlong)iVar1,param_2);
  }
  else {
    ERR_put_error(0x32,0x7d,0x71,"crypto\\ct\\ct_log.c",0x51,uVar2);
  }
  CRYPTO_free(local_res18[0],"crypto\\ct\\ct_log.c",0x58);
  return 0 < iVar1;
}

// FUN_14f6d1810 @ 14f6d1810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d1810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6d182a;
  lVar1 = NCONF_get_string(param_2,param_3,"description");
  if (lVar1 == 0) {
    ERR_put_error(0x32,0x77,0x6f,"crypto\\ct\\ct_log.c",0x7d,uVar3);
    uVar3 = 0;
  }
  else {
    lVar2 = NCONF_get_string(param_2,param_3,&s_key);
    if (lVar2 == 0) {
      ERR_put_error(0x32,0x77,0x70,"crypto\\ct\\ct_log.c",0x83,uVar3);
      uVar3 = 0;
    }
    else {
      uVar3 = CTLOG_new_from_base64(param_1,lVar2,lVar1);
    }
  }
  return uVar3;
}

// FUN_14f6d18e0 @ 14f6d18e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d18e0(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\ct\\ct_log.c",0x45);
  return;
}

// FUN_14f6d1910 @ 14f6d1910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6d1910(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6d191c;
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\ct\\ct_log.c",0x3b);
  if (lVar1 == 0) {
    ERR_put_error(0x32,0x7a,0x41,"crypto\\ct\\ct_log.c",0x3e,uVar2);
  }
  return lVar1;
}

// FUN_14f6d1970 @ 14f6d1970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6d1970(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *local_res8;
  undefined8 uVar4;
  
  uVar4 = 0x14f6d197c;
  local_res8 = (undefined8 *)0x0;
  if (param_1 == 0) {
    return 1;
  }
  lVar3 = CRYPTO_strndup(param_1,(longlong)param_2,"crypto\\ct\\ct_log.c",0xa7);
  if (lVar3 != 0) {
    iVar2 = FUN_14f6d1810(&local_res8,param_3[1],lVar3);
    CRYPTO_free(lVar3,"crypto\\ct\\ct_log.c",0xac);
    if (iVar2 < 0) {
      return iVar2;
    }
    if (iVar2 == 0) {
      param_3[2] = param_3[2] + 1;
    }
    else {
      iVar2 = OPENSSL_sk_push(*(undefined8 *)*param_3,local_res8);
      if (iVar2 == 0) goto LAB_14f6d1a2d;
    }
    return 1;
  }
LAB_14f6d1a2d:
  puVar1 = local_res8;
  if (local_res8 != (undefined8 *)0x0) {
    CRYPTO_free(*local_res8,"crypto\\ct\\ct_log.c",0x10a);
    EVP_PKEY_free(puVar1[5]);
    CRYPTO_free(puVar1,"crypto\\ct\\ct_log.c",0x10c);
  }
  ERR_put_error(0x32,0x82,0x41,"crypto\\ct\\ct_log.c",0xbf,uVar4);
  return -1;
}

// FUN_14f6d1ab0 @ 14f6d1ab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1ab0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6d1ad0 @ 14f6d1ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1ad0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d1af0 @ 14f6d1af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1af0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6d1b10 @ 14f6d1b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1b10(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6d1b30 @ 14f6d1b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1b30(void)

{
  OPENSSL_sk_value();
  return;
}

