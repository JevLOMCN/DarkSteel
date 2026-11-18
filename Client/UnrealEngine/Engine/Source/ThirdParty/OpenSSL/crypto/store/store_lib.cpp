// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 37

// OSSL_STORE_INFO_free @ 14f7bdc80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OSSL_STORE_INFO_free(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  switch(*param_1) {
  case 1:
    CRYPTO_free(*(undefined8 *)(param_1 + 2),"crypto\\store\\store_lib.c",0x1c7);
    uVar1 = 0x1c8;
LAB_14f7bdcc7:
    CRYPTO_free(*(undefined8 *)(param_1 + 4),"crypto\\store\\store_lib.c",uVar1);
    break;
  case 2:
  case 3:
    EVP_PKEY_free(*(undefined8 *)(param_1 + 2));
    break;
  case 4:
    X509_free(*(undefined8 *)(param_1 + 2));
    break;
  case 5:
    X509_CRL_free(*(undefined8 *)(param_1 + 2));
    break;
  case 0xffffffff:
    BUF_MEM_free(*(undefined8 *)(param_1 + 2));
    uVar1 = 0x1c4;
    goto LAB_14f7bdcc7;
  }
  CRYPTO_free(param_1,"crypto\\store\\store_lib.c",0x1d7);
  return;
}

// OSSL_STORE_INFO_get1_CERT @ 14f7bde20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_INFO_get1_CERT(int *param_1)

{
  if (*param_1 == 4) {
    X509_up_ref(*(undefined8 *)(param_1 + 2));
    return *(undefined8 *)(param_1 + 2);
  }
  ERR_put_error(0x2c,0x65,100,"crypto\\store\\store_lib.c",0x1a5,0x14f7bde2c);
  return 0;
}

// OSSL_STORE_INFO_get1_CRL @ 14f7bde80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_INFO_get1_CRL(int *param_1)

{
  if (*param_1 == 5) {
    X509_CRL_up_ref(*(undefined8 *)(param_1 + 2));
    return *(undefined8 *)(param_1 + 2);
  }
  ERR_put_error(0x2c,0x66,0x65,"crypto\\store\\store_lib.c",0x1b7,0x14f7bde8c);
  return 0;
}

// OSSL_STORE_INFO_get1_NAME @ 14f7bdee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OSSL_STORE_INFO_get1_NAME(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 1) {
    lVar1 = CRYPTO_strdup(*(undefined8 *)(param_1 + 2),"crypto\\store\\store_lib.c",0x150);
    if (lVar1 == 0) {
      ERR_put_error(0x2c,0x67,0x41,"crypto\\store\\store_lib.c",0x154);
    }
    return lVar1;
  }
  ERR_put_error(0x2c,0x67,0x67,"crypto\\store\\store_lib.c",0x158);
  return 0;
}

// OSSL_STORE_INFO_get1_NAME_description @ 14f7bdf70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OSSL_STORE_INFO_get1_NAME_description(int *param_1)

{
  longlong lVar1;
  char *pcVar2;
  
  if (*param_1 == 1) {
    pcVar2 = "";
    if (*(char **)(param_1 + 4) != (char *)0x0) {
      pcVar2 = *(char **)(param_1 + 4);
    }
    lVar1 = CRYPTO_strdup(pcVar2,"crypto\\store\\store_lib.c",0x167);
    if (lVar1 == 0) {
      ERR_put_error(0x2c,0x87,0x41,"crypto\\store\\store_lib.c",0x16b);
    }
    return lVar1;
  }
  ERR_put_error(0x2c,0x87,0x67,"crypto\\store\\store_lib.c",0x16f);
  return 0;
}

// OSSL_STORE_INFO_get1_PARAMS @ 14f7be010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_INFO_get1_PARAMS(int *param_1)

{
  if (*param_1 == 2) {
    EVP_PKEY_up_ref(*(undefined8 *)(param_1 + 2));
    return *(undefined8 *)(param_1 + 2);
  }
  ERR_put_error(0x2c,0x68,0x68,"crypto\\store\\store_lib.c",0x181,0x14f7be01c);
  return 0;
}

// OSSL_STORE_INFO_get1_PKEY @ 14f7be070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_INFO_get1_PKEY(int *param_1)

{
  if (*param_1 == 3) {
    EVP_PKEY_up_ref(*(undefined8 *)(param_1 + 2));
    return *(undefined8 *)(param_1 + 2);
  }
  ERR_put_error(0x2c,0x69,0x66,"crypto\\store\\store_lib.c",0x193,0x14f7be07c);
  return 0;
}

// OSSL_STORE_INFO_get_type @ 14f7be0d0

undefined4 OSSL_STORE_INFO_get_type(undefined4 *param_1)

{
  return *param_1;
}

// OSSL_STORE_INFO_new_CERT @ 14f7be0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_CERT(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7be0ec;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x6a,0x41,"crypto\\store\\store_lib.c",0x130,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 4;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}

// OSSL_STORE_INFO_new_CRL @ 14f7be150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_CRL(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7be15c;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x6b,0x41,"crypto\\store\\store_lib.c",0x13a,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 5;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}

// OSSL_STORE_INFO_new_NAME @ 14f7be1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_NAME(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7be1cc;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 2) = param_1;
    *(undefined8 *)(puVar1 + 4) = 0;
    return puVar1;
  }
  ERR_put_error(0x2c,0x6d,0x41,"crypto\\store\\store_lib.c",0x100,uVar2);
  return (undefined4 *)0x0;
}

// OSSL_STORE_INFO_new_PARAMS @ 14f7be230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_PARAMS(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7be23c;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x6e,0x41,"crypto\\store\\store_lib.c",0x11c,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}

// OSSL_STORE_INFO_new_PKEY @ 14f7be2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_PKEY(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7be2ac;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x6f,0x41,"crypto\\store\\store_lib.c",0x126,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 3;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}

// OSSL_STORE_INFO_set0_NAME_description @ 14f7be310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_INFO_set0_NAME_description(int *param_1,undefined8 param_2)

{
  if (*param_1 != 1) {
    ERR_put_error(0x2c,0x86,7,"crypto\\store\\store_lib.c",0x10e);
    return 0;
  }
  *(undefined8 *)(param_1 + 4) = param_2;
  return 1;
}

// OSSL_STORE_SEARCH_by_alias @ 14f7be360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_SEARCH_by_alias(char *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7be36c;
  puVar3 = (undefined4 *)CRYPTO_zalloc(0x30,"crypto\\store\\store_lib.c",0x226);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 4;
    *(char **)(puVar3 + 8) = param_1;
    cVar1 = *param_1;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    *(ulonglong *)(puVar3 + 10) = (ulonglong)(uVar2 & 0x7fffffff);
    return puVar3;
  }
  ERR_put_error(0x2c,0x84,0x41,"crypto\\store\\store_lib.c",0x22a,uVar4);
  return (undefined4 *)0x0;
}

// OSSL_STORE_SEARCH_by_issuer_serial @ 14f7be3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_SEARCH_by_issuer_serial(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7be400;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x30,"crypto\\store\\store_lib.c",0x1f8);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x85,0x41,"crypto\\store\\store_lib.c",0x1fc,uVar2);
    return (undefined4 *)0x0;
  }
  *(undefined8 *)(puVar1 + 4) = param_2;
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}

// OSSL_STORE_SEARCH_by_key_fingerprint @ 14f7be470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
OSSL_STORE_SEARCH_by_key_fingerprint(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined1 *local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7be482;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar3 = (undefined4 *)CRYPTO_zalloc(0x30,"crypto\\store\\store_lib.c",0x20a);
  if (puVar3 == (undefined4 *)0x0) {
    local_68 = (char *)CONCAT44(local_68._4_4_,0x20e);
    ERR_put_error(0x2c,0x88,0x41,"crypto\\store\\store_lib.c");
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (param_1 != 0) {
      iVar1 = EVP_MD_size(param_1);
      if (param_3 != iVar1) {
        uVar2 = EVP_MD_size(param_1);
        BIO_snprintf(local_40,0x14,"%d",uVar2);
        BIO_snprintf(local_58,0x14,"%zu",param_3);
        local_68 = (char *)CONCAT44(local_68._4_4_,0x218);
        ERR_put_error(0x2c,0x88,0x79,"crypto\\store\\store_lib.c");
        uVar2 = EVP_MD_type(param_1);
        uVar4 = OBJ_nid2sn(uVar2);
        local_60 = local_58;
        local_68 = ", fingerprint size is ";
        ERR_add_error_data(5,uVar4," size is ",local_40);
      }
    }
    *puVar3 = 3;
    *(longlong *)(puVar3 + 6) = param_1;
    *(undefined8 *)(puVar3 + 8) = param_2;
    *(longlong *)(puVar3 + 10) = param_3;
  }
  return puVar3;
}

// OSSL_STORE_SEARCH_by_name @ 14f7be5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_SEARCH_by_name(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7be5dc;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x30,"crypto\\store\\store_lib.c",0x1e8);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x89,0x41,"crypto\\store\\store_lib.c",0x1ec,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}

// OSSL_STORE_SEARCH_free @ 14f7be640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OSSL_STORE_SEARCH_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\store\\store_lib.c",0x237);
  return;
}

// OSSL_STORE_SEARCH_get0_name @ 14f7be6a0

undefined8 OSSL_STORE_SEARCH_get0_name(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// OSSL_STORE_SEARCH_get_type @ 14f7be6d0

undefined4 OSSL_STORE_SEARCH_get_type(undefined4 *param_1)

{
  return *param_1;
}

// OSSL_STORE_close @ 14f7be6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OSSL_STORE_close(longlong *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1[1]);
  CRYPTO_free(param_1,"crypto\\store\\store_lib.c",0xe3);
  return uVar1;
}

// OSSL_STORE_ctrl @ 14f7be740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
OSSL_STORE_ctrl(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  pcVar1 = *(code **)(*param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    local_res18 = param_3;
    local_res20 = param_4;
    uVar2 = (*pcVar1)(param_1[1],param_2,&local_res18,pcVar1,0x14f7be758);
    return uVar2;
  }
  return 0;
}

// OSSL_STORE_eof @ 14f7be790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OSSL_STORE_eof(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f7be7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1[1]);
  return;
}

// OSSL_STORE_error @ 14f7be7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OSSL_STORE_error(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f7be7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1[1]);
  return;
}

// OSSL_STORE_expect @ 14f7be7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_expect(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    ERR_put_error(0x2c,0x82,0x75,"crypto\\store\\store_lib.c",0x8c);
    return 0;
  }
  *(undefined4 *)(param_1 + 6) = param_2;
  if (*(code **)(*param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7be83f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1[1]);
    return uVar1;
  }
  return 1;
}

// OSSL_STORE_find @ 14f7be860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_find(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    ERR_put_error(0x2c,0x83,0x75,"crypto\\store\\store_lib.c",0x9a);
    return 0;
  }
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    ERR_put_error(0x2c,0x83,0x76,"crypto\\store\\store_lib.c",0x9f);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f7be8d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1[1]);
  return uVar1;
}

// OSSL_STORE_load @ 14f7be8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * OSSL_STORE_load(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1[1]);
  do {
    if (iVar2 != 0) {
      return (uint *)0x0;
    }
    puVar3 = (uint *)(**(code **)(*param_1 + 0x30))(param_1[1],param_1[2],param_1[3]);
    if ((code *)param_1[4] != (code *)0x0) {
      if (puVar3 == (uint *)0x0) {
        return (uint *)0x0;
      }
      puVar3 = (uint *)(*(code *)param_1[4])(puVar3,param_1[5]);
      if (puVar3 != (uint *)0x0) goto LAB_14f7be967;
      goto LAB_14f7bea0d;
    }
    if (puVar3 == (uint *)0x0) {
      return (uint *)0x0;
    }
LAB_14f7be967:
    if (((*(uint *)(param_1 + 6) == 0) || (uVar1 = *puVar3, uVar1 < 2)) ||
       (*(uint *)(param_1 + 6) == uVar1)) {
      return puVar3;
    }
    switch(uVar1) {
    case 1:
      CRYPTO_free(*(undefined8 *)(puVar3 + 2),"crypto\\store\\store_lib.c",0x1c7);
      uVar4 = 0x1c8;
LAB_14f7be9a9:
      CRYPTO_free(*(undefined8 *)(puVar3 + 4),"crypto\\store\\store_lib.c",uVar4);
      break;
    case 2:
    case 3:
      EVP_PKEY_free(*(undefined8 *)(puVar3 + 2));
      break;
    case 4:
      X509_free(*(undefined8 *)(puVar3 + 2));
      break;
    case 5:
      X509_CRL_free(*(undefined8 *)(puVar3 + 2));
      break;
    case 0xffffffff:
      BUF_MEM_free(*(undefined8 *)(puVar3 + 2));
      uVar4 = 0x1c4;
      goto LAB_14f7be9a9;
    }
    CRYPTO_free(puVar3,"crypto\\store\\store_lib.c",0x1d7);
LAB_14f7bea0d:
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1[1]);
  } while( true );
}

// OSSL_STORE_open @ 14f7bea70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong *
OSSL_STORE_open(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
               ulonglong param_5)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  char *local_158 [2];
  char local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f7bea8a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar3 = 0;
  local_158[0] = "file";
  uVar6 = 1;
  OPENSSL_strlcpy(local_148,param_1,0x100);
  pcVar2 = strchr(local_148,0x3a);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
    iVar1 = _stricmp(local_148,"file");
    if (iVar1 != 0) {
      iVar1 = strncmp(pcVar2 + 1,"//",2);
      local_158[iVar1 != 0] = local_148;
      uVar6 = (ulonglong)(iVar1 != 0) + 1;
    }
  }
  ERR_set_mark();
  uVar4 = uVar3;
  uVar7 = uVar3;
  do {
    if (uVar6 <= uVar7) {
      if (uVar4 == 0) goto LAB_14f7beba4;
      break;
    }
    uVar3 = ossl_store_get0_loader_int(local_158[uVar7]);
    if (uVar3 != 0) {
      uVar4 = (**(code **)(uVar3 + 0x10))(uVar3,param_1,param_2,param_3);
    }
    uVar7 = uVar7 + 1;
  } while (uVar4 == 0);
  puVar5 = (ulonglong *)CRYPTO_zalloc(0x38,"crypto\\store\\store_lib.c");
  if (puVar5 == (ulonglong *)0x0) {
    local_168 = 0x54;
    ERR_put_error(0x2c,0x72,0x41,"crypto\\store\\store_lib.c");
LAB_14f7beba4:
    ERR_clear_last_mark();
    if (uVar4 != 0) {
      (**(code **)(uVar3 + 0x48))(uVar4);
    }
    puVar5 = (ulonglong *)0x0;
  }
  else {
    *puVar5 = uVar3;
    puVar5[1] = uVar4;
    puVar5[2] = param_2;
    puVar5[3] = param_3;
    puVar5[4] = param_4;
    puVar5[5] = param_5;
    ERR_pop_to_mark();
  }
  return puVar5;
}

// OSSL_STORE_supports_search @ 14f7bec10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_supports_search(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_38 [12];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7bec1a;
  if (*(longlong *)(*param_1 + 0x28) == 0) {
    return 0;
  }
  local_38[0] = param_2;
  uVar1 = (**(code **)(*param_1 + 0x28))(0,local_38);
  return uVar1;
}

// OSSL_STORE_vctrl @ 14f7bec50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_vctrl(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7bec71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1[1]);
    return uVar1;
  }
  return 0;
}

// ossl_store_attach_pem_bio @ 14f7becc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ossl_store_attach_pem_bio(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7becdb;
  lVar1 = ossl_store_get0_loader_int("file");
  if (lVar1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar2 = ossl_store_file_attach_pem_bio_int(param_1);
    if (lVar2 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)CRYPTO_zalloc(0x38,"crypto\\store\\store_lib.c",0x28e);
      if (plVar3 == (longlong *)0x0) {
        ERR_put_error(0x2c,0x7f,0x41,"crypto\\store\\store_lib.c",0x290,uVar4);
        (**(code **)(lVar1 + 0x48))(lVar2);
      }
      else {
        *plVar3 = lVar1;
        plVar3[1] = lVar2;
        plVar3[2] = param_2;
        plVar3[3] = param_3;
        plVar3[4] = 0;
        plVar3[5] = 0;
      }
    }
  }
  return plVar3;
}

// ossl_store_detach_pem_bio @ 14f7bedb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ossl_store_detach_pem_bio(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = ossl_store_file_detach_pem_bio_int(*(undefined8 *)(param_1 + 8));
  CRYPTO_free(param_1,"crypto\\store\\store_lib.c",0x2ab);
  return uVar1;
}

// ossl_store_info_get0_EMBEDDED_buffer @ 14f7bee00

undefined8 ossl_store_info_get0_EMBEDDED_buffer(int *param_1)

{
  if (*param_1 == -1) {
    return *(undefined8 *)(param_1 + 2);
  }
  return 0;
}

// ossl_store_info_get0_EMBEDDED_pem_name @ 14f7bee20

undefined8 ossl_store_info_get0_EMBEDDED_pem_name(int *param_1)

{
  if (*param_1 == -1) {
    return *(undefined8 *)(param_1 + 4);
  }
  return 0;
}

// ossl_store_info_new_EMBEDDED @ 14f7bee40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ossl_store_info_new_EMBEDDED(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7bee55;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 2) = param_2;
    *puVar1 = 0xffffffff;
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = CRYPTO_strdup(param_1,"crypto\\store\\store_lib.c",0x26a);
    }
    *(longlong *)(puVar1 + 4) = lVar2;
    if ((param_1 != 0) && (lVar2 == 0)) {
      ERR_put_error(0x2c,0x7b,0x41,"crypto\\store\\store_lib.c",0x26e,uVar3);
      OSSL_STORE_INFO_free(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    return puVar1;
  }
  ERR_put_error(0x2c,0x7b,0x41,"crypto\\store\\store_lib.c",0x264,uVar3);
  return (undefined4 *)0x0;
}

// FUN_14f7bef30 @ 14f7bef30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bef30(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *(undefined8 *)(puVar1 + 2) = param_2;
  *puVar1 = param_1;
  return;
}

