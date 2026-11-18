// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 65

// SSL_CTX_add1_to_CA_list @ 14f65d110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_add1_to_CA_list(longlong param_1)

{
  FUN_14f65da20(param_1 + 0x110);
  return;
}

// SSL_CTX_add_client_CA @ 14f65d140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_add_client_CA(longlong param_1)

{
  FUN_14f65da20(param_1 + 0x118);
  return;
}

// SSL_CTX_set0_CA_list @ 14f65d190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set0_CA_list(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x110),X509_NAME_free);
  *(undefined8 *)(param_1 + 0x110) = param_2;
  return;
}

// SSL_CTX_set_client_CA_list @ 14f65d1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_client_CA_list(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x118),X509_NAME_free);
  *(undefined8 *)(param_1 + 0x118) = param_2;
  return;
}

// SSL_add1_to_CA_list @ 14f65d230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_add1_to_CA_list(longlong param_1)

{
  FUN_14f65da20(param_1 + 0x5b8);
  return;
}

// SSL_add_client_CA @ 14f65d260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_add_client_CA(longlong param_1)

{
  FUN_14f65da20(param_1 + 0x5c0);
  return;
}

// SSL_add_dir_cert_subjects_to_stack @ 14f65d290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint SSL_add_dir_cert_subjects_to_stack(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_458 [32];
  char *local_438;
  longlong local_428 [2];
  undefined1 local_418 [1024];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14f65d2a5;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_458;
  uVar8 = 0;
  local_428[0] = 0;
  pcVar4 = (char *)OPENSSL_DIR_read(local_428);
  do {
    if (pcVar4 == (char *)0x0) {
      piVar6 = _errno();
      if (*piVar6 == 0) {
        uVar8 = 1;
      }
      else {
        DVar3 = GetLastError();
        local_438._0_4_ = 0x2e5;
        ERR_put_error(2,10,DVar3,"ssl\\ssl_cert.c");
        ERR_add_error_data(3,"OPENSSL_DIR_read(&ctx, \'",param_2,"\')");
        local_438 = (char *)CONCAT44(local_438._4_4_,0x2e7);
        ERR_put_error(0x14,0xd7,2,"ssl\\ssl_cert.c");
        uVar8 = 0;
      }
LAB_14f65d418:
      if (local_428[0] != 0) {
        OPENSSL_DIR_end(local_428);
      }
      return uVar8;
    }
    cVar1 = *pcVar4;
    pcVar5 = pcVar4;
    for (uVar7 = uVar8; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar2 = FUN_14f65d9f0(param_2);
    if (0x400 < iVar2 + 2 + (uVar7 & 0x7fffffff)) {
      local_438 = (char *)CONCAT44(local_438._4_4_,0x2d6);
      ERR_put_error(0x14,0xd7,0x10e,"ssl\\ssl_cert.c");
      uVar8 = 0;
      goto LAB_14f65d418;
    }
    local_438 = pcVar4;
    iVar2 = BIO_snprintf(local_418,0x400,"%s/%s",param_2);
    if (((iVar2 < 1) || (0x3ff < iVar2)) ||
       (iVar2 = SSL_add_file_cert_subjects_to_stack(param_1,local_418), iVar2 == 0))
    goto LAB_14f65d418;
    pcVar4 = (char *)OPENSSL_DIR_read(local_428,param_2);
  } while( true );
}

// SSL_add_file_cert_subjects_to_stack @ 14f65d460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_add_file_cert_subjects_to_stack(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_res18 [2];
  undefined8 uVar7;
  
  uVar7 = 0x14f65d478;
  local_res18[0] = 0;
  uVar6 = 1;
  uVar2 = OPENSSL_sk_set_cmp_func(param_1,FUN_14f65f3b0);
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    ERR_put_error(0x14,0xd8,0x41,"ssl\\ssl_cert.c",0x2a3,uVar7);
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 != 0) {
      lVar5 = PEM_read_bio_X509(lVar4,local_res18,0,0);
      while (lVar5 != 0) {
        lVar5 = X509_get_subject_name(local_res18[0]);
        if ((lVar5 == 0) || (lVar5 = X509_NAME_dup(lVar5), lVar5 == 0)) goto LAB_14f65d4d1;
        iVar1 = OPENSSL_sk_find(param_1,lVar5);
        if (iVar1 < 0) {
          iVar1 = OPENSSL_sk_push(param_1,lVar5);
          if (iVar1 == 0) {
            X509_NAME_free(lVar5);
            goto LAB_14f65d4d1;
          }
        }
        else {
          X509_NAME_free(lVar5);
        }
        lVar5 = PEM_read_bio_X509(lVar4,local_res18,0,0);
      }
      ERR_clear_error();
      goto LAB_14f65d4d3;
    }
  }
LAB_14f65d4d1:
  uVar6 = 0;
LAB_14f65d4d3:
  BIO_free(lVar4);
  X509_free(local_res18[0]);
  OPENSSL_sk_set_cmp_func(param_1,uVar2);
  return uVar6;
}

// SSL_dup_CA_list @ 14f65d5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_dup_CA_list(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f65d5d5;
  iVar1 = OPENSSL_sk_num();
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0x198,0x41,"ssl\\ssl_cert.c",0x1d0,uVar5);
    return 0;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar5 = OPENSSL_sk_value(param_1,iVar4);
      lVar3 = X509_NAME_dup(uVar5);
      if (lVar3 == 0) {
        ERR_put_error(0x14,0x198,0x41,"ssl\\ssl_cert.c",0x1d6);
        OPENSSL_sk_pop_free(lVar2,X509_NAME_free);
        return 0;
      }
      OPENSSL_sk_push(lVar2,lVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return lVar2;
}

// SSL_get0_CA_list @ 14f65d6b0

longlong SSL_get0_CA_list(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x5b8);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x110);
  }
  return lVar1;
}

// SSL_get_client_CA_list @ 14f65d700

longlong SSL_get_client_CA_list(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x5c0);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x118);
    }
    return lVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    return *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x260);
  }
  return 0;
}

// SSL_get_ex_data_X509_STORE_CTX_idx @ 14f65d740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
SSL_get_ex_data_X509_STORE_CTX_idx
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dfe0c,FUN_14f65f280,param_3,param_4,0x14f65d74a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553dfe10;
  }
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  return DAT_154df49c0;
}

// SSL_load_client_CA_file @ 14f65d790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_load_client_CA_file(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f65d7a8;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  local_res10 = 0;
  lVar7 = 0;
  lVar6 = 0;
  lVar4 = OPENSSL_LH_new(FUN_14f65f390,FUN_14f65f2e0);
  if ((lVar4 == 0) || (lVar3 == 0)) {
    uVar8 = 0x265;
LAB_14f65d8d2:
    ERR_put_error(0x14,0xb9,0x41,"ssl\\ssl_cert.c",uVar8,uVar9);
  }
  else {
    iVar1 = BIO_ctrl(lVar3,0x6c,3,param_1);
    if (iVar1 != 0) {
      lVar5 = PEM_read_bio_X509(lVar3,&local_res10,0,0);
      while (lVar5 != 0) {
        if ((lVar6 == 0) && (lVar6 = OPENSSL_sk_new_null(), lVar6 == 0)) {
          uVar8 = 0x272;
          goto LAB_14f65d8d2;
        }
        lVar5 = X509_get_subject_name(local_res10);
        lVar7 = 0;
        if ((lVar5 == 0) || (lVar7 = X509_NAME_dup(lVar5), lVar7 == 0)) goto LAB_14f65d8ec;
        lVar5 = OPENSSL_LH_retrieve(lVar4,lVar7);
        if (lVar5 == 0) {
          OPENSSL_LH_insert(lVar4,lVar7);
          iVar1 = OPENSSL_sk_push(lVar6,lVar7);
          if (iVar1 == 0) goto LAB_14f65d8ec;
        }
        else {
          X509_NAME_free(lVar7);
          lVar7 = 0;
        }
        lVar5 = PEM_read_bio_X509(lVar3,&local_res10,0,0);
      }
      goto LAB_14f65d905;
    }
  }
LAB_14f65d8ec:
  X509_NAME_free(lVar7);
  OPENSSL_sk_pop_free(lVar6,X509_NAME_free);
  lVar6 = 0;
LAB_14f65d905:
  BIO_free(lVar3);
  X509_free(local_res10);
  OPENSSL_LH_free(lVar4);
  if (lVar6 != 0) {
    ERR_clear_error();
  }
  return lVar6;
}

// SSL_set0_CA_list @ 14f65d950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set0_CA_list(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5b8),X509_NAME_free);
  *(undefined8 *)(param_1 + 0x5b8) = param_2;
  return;
}

// SSL_set_client_CA_list @ 14f65d9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_client_CA_list(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5c0),X509_NAME_free);
  *(undefined8 *)(param_1 + 0x5c0) = param_2;
  return;
}

// FUN_14f65d9f0 @ 14f65d9f0

uint FUN_14f65d9f0(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *param_1;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return uVar2 & 0x7fffffff;
}

// FUN_14f65da20 @ 14f65da20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65da20(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    if (*param_1 == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar3 = X509_get_subject_name(param_2);
    lVar2 = X509_NAME_dup(uVar3);
    if (lVar2 != 0) {
      iVar1 = OPENSSL_sk_push(*param_1,lVar2);
      if (iVar1 != 0) {
        return 1;
      }
      X509_NAME_free(lVar2);
    }
  }
  return 0;
}

// FUN_14f65dab0 @ 14f65dab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dab0(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f65dad0 @ 14f65dad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dad0(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f65daf0 @ 14f65daf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65daf0(void)

{
  OPENSSL_LH_new();
  return;
}

// FUN_14f65db10 @ 14f65db10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65db10(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// FUN_14f65db30 @ 14f65db30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65db30(undefined8 *param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*param_1,X509_NAME_free);
  *param_1 = param_2;
  return;
}

// FUN_14f65db70 @ 14f65db70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65db70(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f65db90 @ 14f65db90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65db90(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f65dbb0 @ 14f65dbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dbb0(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f65dbd0 @ 14f65dbd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dbd0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f65dbf0 @ 14f65dbf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dbf0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f65dc10 @ 14f65dc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dc10(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f65dc30 @ 14f65dc30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dc30(void)

{
  OPENSSL_sk_set_cmp_func();
  return;
}

// FUN_14f65dc50 @ 14f65dc50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dc50(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f65dc70 @ 14f65dc70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dc70(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f65dc90 @ 14f65dc90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dc90(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f65dcb0 @ 14f65dcb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dcb0(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f65dcd0 @ 14f65dcd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dcd0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f65dcf0 @ 14f65dcf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dcf0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f65dd10 @ 14f65dd10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dd10(void)

{
  OPENSSL_sk_shift();
  return;
}

// FUN_14f65dd30 @ 14f65dd30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dd30(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f65dd50 @ 14f65dd50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65dd50(void)

{
  OPENSSL_sk_num();
  return;
}

// ssl_build_cert_chain @ 14f65dd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_build_cert_chain(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  
  uVar15 = 0x14f65dd8f;
  if (param_1 == 0) {
    plVar14 = *(longlong **)(param_2 + 0x138);
  }
  else {
    plVar14 = *(longlong **)(param_1 + 0x488);
  }
  plVar1 = (longlong *)*plVar14;
  lVar6 = 0;
  uVar13 = 0;
  uVar12 = 0;
  iVar5 = 0;
  iVar11 = 0;
  uVar8 = uVar13;
  iVar3 = iVar5;
  if (*plVar1 == 0) {
    ERR_put_error(0x14,0x14c,0xb3,"ssl\\ssl_cert.c",0x300,0x14f65dd8f);
    goto LAB_14f65e03f;
  }
  if ((param_3 & 4) == 0) {
    lVar6 = plVar14[0x39];
    if (lVar6 == 0) {
      if (param_1 == 0) {
        lVar6 = *(longlong *)(param_2 + 0x20);
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20);
      }
    }
    uVar13 = uVar12;
    if ((param_3 & 1) != 0) {
      uVar13 = plVar1[2];
    }
  }
  else {
    lVar6 = X509_STORE_new();
    if (lVar6 == 0) goto LAB_14f65e03f;
    iVar2 = OPENSSL_sk_num(plVar1[2]);
    if (0 < iVar2) {
      do {
        uVar7 = OPENSSL_sk_value(plVar1[2],uVar12);
        iVar2 = X509_STORE_add_cert(lVar6,uVar7);
        if (iVar2 == 0) goto LAB_14f65e03f;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        iVar2 = OPENSSL_sk_num(plVar1[2]);
      } while ((int)uVar10 < iVar2);
    }
    iVar2 = X509_STORE_add_cert(lVar6,*plVar1);
    uVar8 = 0;
    iVar3 = iVar11;
    if (iVar2 == 0) goto LAB_14f65e03f;
  }
  uVar8 = X509_STORE_CTX_new();
  if (uVar8 == 0) {
    ERR_put_error(0x14,0x14c,0x41,"ssl\\ssl_cert.c",0x31e,uVar15);
    iVar3 = iVar11;
    goto LAB_14f65e03f;
  }
  iVar3 = X509_STORE_CTX_init(uVar8,lVar6,*plVar1,uVar13);
  if (iVar3 == 0) {
    ERR_put_error(0x14,0x14c,0xb,"ssl\\ssl_cert.c",0x322,uVar15);
    iVar3 = iVar11;
    goto LAB_14f65e03f;
  }
  X509_STORE_CTX_set_flags(uVar8,*(uint *)((longlong)plVar14 + 0x1c) & 0x30000);
  iVar3 = X509_verify_cert(uVar8);
  if (iVar3 < 1) {
    if ((param_3 & 8) != 0) {
      if ((param_3 & 0x10) != 0) {
        ERR_clear_error();
      }
      iVar3 = 1;
      iVar5 = 2;
      goto LAB_14f65df2a;
    }
  }
  else {
LAB_14f65df2a:
    lVar9 = X509_STORE_CTX_get1_chain(uVar8);
    if (0 < iVar3) {
      uVar15 = OPENSSL_sk_shift(lVar9);
      X509_free(uVar15);
      if (((param_3 & 2) != 0) && (iVar3 = OPENSSL_sk_num(lVar9), 0 < iVar3)) {
        iVar3 = OPENSSL_sk_num(lVar9);
        uVar15 = OPENSSL_sk_value(lVar9,iVar3 + -1);
        uVar10 = X509_get_extension_flags(uVar15);
        if ((uVar10 >> 0xd & 1) != 0) {
          uVar15 = OPENSSL_sk_pop(lVar9);
          X509_free(uVar15);
        }
      }
      iVar11 = 0;
      iVar3 = OPENSSL_sk_num(lVar9);
      if (0 < iVar3) {
        do {
          uVar15 = OPENSSL_sk_value(lVar9,iVar11);
          iVar5 = ssl_security_cert(param_1,param_2,uVar15,0,0);
          if (iVar5 != 1) {
            ERR_put_error(0x14,0x14c,iVar5,"ssl\\ssl_cert.c",0x34f);
            OPENSSL_sk_pop_free(lVar9,X509_free);
            iVar3 = 0;
            goto LAB_14f65e03f;
          }
          iVar11 = iVar11 + 1;
          iVar3 = OPENSSL_sk_num(lVar9);
          iVar5 = 1;
        } while (iVar11 < iVar3);
      }
      OPENSSL_sk_pop_free(plVar1[2],X509_free);
      plVar1[2] = lVar9;
      iVar3 = iVar5;
      if (iVar5 == 0) {
        iVar3 = 1;
      }
      goto LAB_14f65e03f;
    }
  }
  ERR_put_error(0x14,0x14c,0x86,"ssl\\ssl_cert.c",0x333);
  uVar4 = X509_STORE_CTX_get_error(uVar8);
  uVar15 = X509_verify_cert_error_string(uVar4);
  ERR_add_error_data(2,"Verify error:",uVar15);
  iVar3 = iVar5;
LAB_14f65e03f:
  if ((param_3 & 4) != 0) {
    X509_STORE_free(lVar6);
  }
  X509_STORE_CTX_free(uVar8);
  return iVar3;
}

// ssl_cert_add0_chain_cert @ 14f65e0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_add0_chain_cert(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f65e0c0;
  if (param_1 == 0) {
    plVar3 = *(longlong **)(param_2 + 0x138);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x488);
  }
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    iVar2 = ssl_security_cert();
    if (iVar2 == 1) {
      if (*(longlong *)(lVar1 + 0x10) == 0) {
        uVar4 = OPENSSL_sk_new_null();
        *(undefined8 *)(lVar1 + 0x10) = uVar4;
      }
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        iVar2 = OPENSSL_sk_push(*(longlong *)(lVar1 + 0x10),param_3);
        if (iVar2 != 0) {
          return 1;
        }
      }
    }
    else {
      ERR_put_error(0x14,0x15a,iVar2,"ssl\\ssl_cert.c",0x125,uVar4);
    }
  }
  return 0;
}

// ssl_cert_add1_chain_cert @ 14f65e170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_add1_chain_cert(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = ssl_cert_add0_chain_cert();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  X509_up_ref(param_3);
  return 1;
}

// ssl_cert_clear_certs @ 14f65e1b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_cert_clear_certs(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    lVar2 = 9;
    do {
      X509_free(puVar1[-2]);
      puVar1[-2] = 0;
      EVP_PKEY_free(puVar1[-1]);
      puVar1[-1] = 0;
      OPENSSL_sk_pop_free(*puVar1,X509_free);
      *puVar1 = 0;
      CRYPTO_free(puVar1[1],"ssl\\ssl_cert.c",0xd8);
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// ssl_cert_dup @ 14f65e250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ssl_cert_dup(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f65e260;
  plVar3 = (longlong *)CRYPTO_zalloc(0x218,"ssl\\ssl_cert.c",0x4c);
  if (plVar3 == (longlong *)0x0) {
    ERR_put_error(0x14,0xdd,0x41,"ssl\\ssl_cert.c",0x50,uVar10);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar3 + 0x41) = 1;
  *plVar3 = (longlong)(plVar3 + (((*param_1 - (longlong)param_1) + -0x20) / 0x28) * 5 + 4);
  lVar4 = CRYPTO_THREAD_lock_new();
  plVar3[0x42] = lVar4;
  if (lVar4 == 0) {
    ERR_put_error(0x14,0xdd,0x41,"ssl\\ssl_cert.c",0x58,uVar10);
    CRYPTO_free(plVar3,"ssl\\ssl_cert.c",0x59);
    return (longlong *)0x0;
  }
  if (param_1[1] != 0) {
    plVar3[1] = param_1[1];
    EVP_PKEY_up_ref();
  }
  plVar3[2] = param_1[2];
  lVar4 = 0;
  *(int *)(plVar3 + 3) = (int)param_1[3];
  lVar8 = (longlong)plVar3 - (longlong)param_1;
  plVar1 = param_1;
  do {
    plVar7 = plVar1 + 5;
    if (plVar1[4] != 0) {
      *(longlong *)(lVar8 + -8 + (longlong)plVar7) = plVar1[4];
      X509_up_ref();
    }
    if (*plVar7 != 0) {
      *(longlong *)(lVar8 + (longlong)plVar7) = *plVar7;
      EVP_PKEY_up_ref(*plVar7);
    }
    if (plVar1[6] != 0) {
      lVar5 = X509_chain_up_ref();
      *(longlong *)(lVar8 + 8 + (longlong)plVar7) = lVar5;
      if (lVar5 != 0) goto LAB_14f65e3c3;
      uVar9 = 0x75;
LAB_14f65e47f:
      ERR_put_error(0x14,0xdd,0x41,"ssl\\ssl_cert.c",uVar9);
      goto LAB_14f65e499;
    }
LAB_14f65e3c3:
    if (plVar1[7] != 0) {
      pvVar6 = (void *)CRYPTO_malloc(plVar1[8],"ssl\\ssl_cert.c",0x7c);
      *(void **)(lVar8 + 0x10 + (longlong)plVar7) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        uVar9 = 0x7e;
        goto LAB_14f65e47f;
      }
      *(longlong *)(lVar8 + 0x18 + (longlong)plVar7) = plVar1[8];
      memcpy(pvVar6,(void *)plVar1[7],plVar1[8]);
    }
    lVar4 = lVar4 + 1;
    plVar1 = plVar7;
  } while (lVar4 < 9);
  if (param_1[0x33] == 0) {
    plVar3[0x33] = 0;
  }
  else {
    pvVar6 = (void *)CRYPTO_malloc(param_1[0x34] * 2,"ssl\\ssl_cert.c",0x8a);
    plVar3[0x33] = (longlong)pvVar6;
    if (pvVar6 == (void *)0x0) goto LAB_14f65e499;
    memcpy(pvVar6,(void *)param_1[0x33],param_1[0x34] * 2);
    plVar3[0x34] = param_1[0x34];
  }
  if (param_1[0x35] == 0) {
    plVar3[0x35] = 0;
  }
  else {
    pvVar6 = (void *)CRYPTO_malloc(param_1[0x36] * 2,"ssl\\ssl_cert.c",0x95);
    plVar3[0x35] = (longlong)pvVar6;
    if (pvVar6 == (void *)0x0) goto LAB_14f65e499;
    memcpy(pvVar6,(void *)param_1[0x35],param_1[0x36] * 2);
    plVar3[0x36] = param_1[0x36];
  }
  if (param_1[0x31] != 0) {
    lVar4 = CRYPTO_memdup(param_1[0x31],param_1[0x32],"ssl\\ssl_cert.c",0x9f);
    plVar3[0x31] = lVar4;
    if (lVar4 == 0) goto LAB_14f65e499;
    plVar3[0x32] = param_1[0x32];
  }
  *(undefined4 *)((longlong)plVar3 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x1c);
  plVar3[0x37] = param_1[0x37];
  plVar3[0x38] = param_1[0x38];
  if (param_1[0x3a] != 0) {
    X509_STORE_up_ref();
    plVar3[0x3a] = param_1[0x3a];
  }
  if (param_1[0x39] != 0) {
    X509_STORE_up_ref();
    plVar3[0x39] = param_1[0x39];
  }
  plVar3[0x3d] = param_1[0x3d];
  *(int *)(plVar3 + 0x3e) = (int)param_1[0x3e];
  plVar3[0x3f] = param_1[0x3f];
  iVar2 = custom_exts_copy(plVar3 + 0x3b,param_1 + 0x3b);
  if (iVar2 != 0) {
    if (param_1[0x40] == 0) {
      return plVar3;
    }
    lVar4 = CRYPTO_strdup(param_1[0x40],"ssl\\ssl_cert.c",0xbc);
    plVar3[0x40] = lVar4;
    if (lVar4 != 0) {
      return plVar3;
    }
  }
LAB_14f65e499:
  ssl_cert_free(plVar3);
  return (longlong *)0x0;
}

// ssl_cert_free @ 14f65e660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_cert_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x208);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      EVP_PKEY_free(*(undefined8 *)(param_1 + 8));
      ssl_cert_clear_certs(param_1);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x198),"ssl\\ssl_cert.c",0xef);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1a8),"ssl\\ssl_cert.c",0xf0);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x188),"ssl\\ssl_cert.c",0xf1);
      X509_STORE_free(*(undefined8 *)(param_1 + 0x1d0));
      X509_STORE_free(*(undefined8 *)(param_1 + 0x1c8));
      custom_exts_free(param_1 + 0x1d8);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x200),"ssl\\ssl_cert.c",0xf6);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x210));
      CRYPTO_free(param_1,"ssl\\ssl_cert.c",0xf9);
    }
  }
  return;
}

// ssl_cert_get_cert_store @ 14f65e760

undefined8 ssl_cert_get_cert_store(longlong param_1,undefined8 *param_2,int param_3)

{
  if (param_3 != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x1c8);
    return 1;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x1d0);
  return 1;
}

// ssl_cert_lookup_by_idx @ 14f65e790

undefined4 * ssl_cert_lookup_by_idx(ulonglong param_1)

{
  if (8 < param_1) {
    return (undefined4 *)0x0;
  }
  return &DAT_15347a980 + param_1 * 2;
}

// ssl_cert_lookup_by_nid @ 14f65e7b0

undefined8 ssl_cert_lookup_by_nid(int param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_15347a980)[uVar1 * 2] == param_1) {
      *param_2 = uVar1;
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 9);
  return 0;
}

// ssl_cert_lookup_by_pkey @ 14f65e7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ssl_cert_lookup_by_pkey(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = EVP_PKEY_id();
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      if ((&DAT_15347a980)[uVar2 * 2] == iVar1) {
        if (param_2 != (ulonglong *)0x0) {
          *param_2 = uVar2;
        }
        return &DAT_15347a980 + uVar2 * 2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 9);
  }
  return (undefined4 *)0x0;
}

// ssl_cert_new @ 14f65e850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ssl_cert_new(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f65e85c;
  plVar1 = (longlong *)CRYPTO_zalloc(0x218,"ssl\\ssl_cert.c",0x34);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0x14,0xa2,0x41,"ssl\\ssl_cert.c",0x37,uVar3);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x3e) = 1;
  *plVar1 = (longlong)(plVar1 + 4);
  plVar1[0x3d] = (longlong)FUN_14f65edc0;
  *(undefined4 *)(plVar1 + 0x41) = 1;
  plVar1[0x3f] = 0;
  lVar2 = CRYPTO_THREAD_lock_new();
  plVar1[0x42] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xa2,0x41,"ssl\\ssl_cert.c",0x42,uVar3);
    CRYPTO_free(plVar1,"ssl\\ssl_cert.c",0x43);
    return (longlong *)0x0;
  }
  return plVar1;
}

// ssl_cert_select_current @ 14f65e940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_select_current(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar4 = param_1 + 4;
  lVar5 = 0;
  plVar2 = plVar4;
  lVar3 = lVar5;
  while ((*plVar2 != param_2 || (plVar2[1] == 0))) {
    lVar3 = lVar3 + 1;
    plVar2 = plVar2 + 5;
    if (8 < lVar3) {
      while (((plVar4[1] == 0 || (*plVar4 == 0)) || (iVar1 = X509_cmp(*plVar4,param_2), iVar1 != 0))
            ) {
        lVar5 = lVar5 + 1;
        plVar4 = plVar4 + 5;
        if (8 < lVar5) {
          return 0;
        }
      }
      *param_1 = plVar4;
      return 1;
    }
  }
  *param_1 = plVar2;
  return 1;
}

// ssl_cert_set0_chain @ 14f65ea00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_set0_chain(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f65ea13;
  if (param_1 == 0) {
    plVar3 = *(longlong **)(param_2 + 0x138);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x488);
  }
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num(param_3);
    if (0 < iVar2) {
      do {
        uVar4 = OPENSSL_sk_value(param_3,iVar5);
        iVar2 = ssl_security_cert(param_1,param_2,uVar4,0,0,uVar6);
        if (iVar2 != 1) {
          ERR_put_error(0x14,0x154,iVar2,"ssl\\ssl_cert.c",0x105);
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar5 < iVar2);
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0x10),X509_free);
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    return 1;
  }
  return 0;
}

// ssl_cert_set1_chain @ 14f65eb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_set1_chain(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    uVar2 = ssl_cert_set0_chain();
    return uVar2;
  }
  lVar3 = X509_chain_up_ref(param_3);
  if (lVar3 != 0) {
    iVar1 = ssl_cert_set0_chain(param_1,param_2,lVar3);
    if (iVar1 != 0) {
      return 1;
    }
    OPENSSL_sk_pop_free(lVar3,X509_free);
  }
  return 0;
}

// ssl_cert_set_cert_cb @ 14f65eb90

void ssl_cert_set_cert_cb(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b8) = param_2;
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
  return;
}

// ssl_cert_set_cert_store @ 14f65ebb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_set_cert_store(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = 0x1d0;
  if (param_3 != 0) {
    lVar1 = 0x1c8;
  }
  X509_STORE_free(*(undefined8 *)(lVar1 + param_1));
  *(longlong *)(lVar1 + param_1) = param_2;
  if ((param_4 != 0) && (param_2 != 0)) {
    X509_STORE_up_ref(param_2);
  }
  return 1;
}

// ssl_cert_set_current @ 14f65ec30

undefined8 ssl_cert_set_current(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == 1) {
    iVar3 = 0;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar3 = (int)(((*param_1 - (longlong)param_1) + -0x20) / 0x28) + 1;
    if (8 < iVar3) {
      return 0;
    }
  }
  lVar2 = (longlong)iVar3;
  if (lVar2 < 9) {
    plVar1 = param_1 + lVar2 * 5 + 4;
    do {
      if ((*plVar1 != 0) && (plVar1[1] != 0)) {
        *param_1 = (longlong)plVar1;
        return 1;
      }
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 5;
    } while (lVar2 < 9);
  }
  return 0;
}

// ssl_ctx_security @ 14f65ecc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_ctx_security(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  (**(code **)(*(longlong *)(param_1 + 0x138) + 0x1e8))
            (0,param_1,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x1f8));
  return;
}

// ssl_get_security_level_bits @ 14f65ed10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl_get_security_level_bits(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = SSL_get_security_level();
  }
  else {
    iVar1 = SSL_CTX_get_security_level();
  }
  if (iVar1 < 6) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 5;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return (&DAT_15347a960)[iVar1];
}

// ssl_security @ 14f65ed70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_security(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  (**(code **)(*(longlong *)(param_1 + 0x488) + 0x1e8))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1f8));
  return;
}

// FUN_14f65edc0 @ 14f65edc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f65edc0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,longlong param_6
             )

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = SSL_get_security_level();
  }
  else {
    iVar2 = SSL_CTX_get_security_level(param_2);
  }
  if (iVar2 < 6) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 5;
  }
  iVar1 = (&DAT_15347a960)[iVar2];
  if (iVar2 == 0) {
    if ((param_3 == 0x40007) && (param_4 < 0x50)) {
      return 0;
    }
  }
  else if (param_3 == 9) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      if (((param_5 < 0x301) && (1 < iVar2)) || ((param_5 < 0x302 && (2 < iVar2)))) {
        return 0;
      }
      if ((param_5 < 0x303) && (3 < iVar2)) {
        return 0;
      }
    }
    else {
      if (param_5 == 0x100) {
        param_5 = 0xff00;
      }
      if ((0xfefd < param_5) && (3 < iVar2)) {
        return 0;
      }
    }
  }
  else if (param_3 == 10) {
    if (2 < iVar2) {
      return 0;
    }
  }
  else if (param_3 == 0xf) {
    if (1 < iVar2) {
      return 0;
    }
  }
  else if (param_3 - 0x10001U < 3) {
    if (param_4 < iVar1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 0x20) & 4) != 0) {
      return 0;
    }
    if ((*(uint *)(param_6 + 0x28) & 1) != 0) {
      return 0;
    }
    if ((0xa0 < iVar1) && ((*(uint *)(param_6 + 0x28) & 2) != 0)) {
      return 0;
    }
    if ((1 < iVar2) && (*(int *)(param_6 + 0x24) == 4)) {
      return 0;
    }
    if (((2 < iVar2) && (*(int *)(param_6 + 0x2c) != 0x304)) &&
       ((*(uint *)(param_6 + 0x1c) & 0x186) == 0)) {
      return 0;
    }
  }
  else if (param_4 < iVar1) {
    return 0;
  }
  return 1;
}

// ssl_verify_cert_chain @ 14f65efb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl_verify_cert_chain(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f65efc5;
  uVar4 = 0;
  if (param_2 != 0) {
    iVar2 = OPENSSL_sk_num(param_2);
    if (iVar2 != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1d0);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20);
      }
      lVar5 = X509_STORE_CTX_new();
      if (lVar5 == 0) {
        ERR_put_error(0x14,0xcf,0x41,"ssl\\ssl_cert.c",0x17d,uVar9);
        uVar4 = 0;
      }
      else {
        uVar6 = OPENSSL_sk_value(param_2,0);
        iVar2 = X509_STORE_CTX_init(lVar5,lVar7,uVar6,param_2);
        if (iVar2 == 0) {
          ERR_put_error(0x14,0xcf,0xb,"ssl\\ssl_cert.c",0x183,uVar9);
          X509_STORE_CTX_free(lVar5);
        }
        else {
          uVar9 = X509_STORE_CTX_get0_param(lVar5);
          uVar3 = SSL_get_security_level(param_1);
          X509_VERIFY_PARAM_set_auth_level(uVar9,uVar3);
          X509_STORE_CTX_set_flags(lVar5,*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000)
          ;
          uVar3 = SSL_get_ex_data_X509_STORE_CTX_idx();
          iVar2 = X509_STORE_CTX_set_ex_data(lVar5,uVar3,param_1);
          if (iVar2 != 0) {
            if (param_1 + 0xd8 != 0) {
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xe0));
              if (0 < iVar2) {
                X509_STORE_CTX_set0_dane(lVar5,param_1 + 0xd8);
              }
            }
            pcVar8 = "ssl_server";
            if (*(int *)(param_1 + 0x38) != 0) {
              pcVar8 = "ssl_client";
            }
            X509_STORE_CTX_set_default(lVar5,pcVar8);
            X509_VERIFY_PARAM_set1(uVar9,*(undefined8 *)(param_1 + 0xd0));
            if (*(longlong *)(param_1 + 0x560) != 0) {
              X509_STORE_CTX_set_verify_cb(lVar5);
            }
            pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x98);
            if (pcVar1 == (code *)0x0) {
              uVar4 = X509_verify_cert(lVar5);
            }
            else {
              uVar4 = (*pcVar1)(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xa0));
            }
            uVar3 = X509_STORE_CTX_get_error(lVar5);
            *(undefined4 *)(param_1 + 0x5a8) = uVar3;
            OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5a0),X509_free);
            *(undefined8 *)(param_1 + 0x5a0) = 0;
            lVar7 = X509_STORE_CTX_get0_chain(lVar5);
            if (lVar7 != 0) {
              lVar7 = X509_STORE_CTX_get1_chain(lVar5);
              *(longlong *)(param_1 + 0x5a0) = lVar7;
              if (lVar7 == 0) {
                ERR_put_error(0x14,0xcf,0x41,"ssl\\ssl_cert.c",0x1b3);
                uVar4 = 0;
              }
            }
            X509_VERIFY_PARAM_move_peername(*(undefined8 *)(param_1 + 0xd0),uVar9);
          }
          X509_STORE_CTX_free(lVar5);
        }
      }
      return uVar4;
    }
  }
  return 0;
}

// FUN_14f65f230 @ 14f65f230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f65f230(void)

{
  DAT_154df49c0 = CRYPTO_get_ex_new_index(5,0,"SSL for verify callback",0,0,0);
  return -1 < DAT_154df49c0;
}

// FUN_14f65f280 @ 14f65f280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65f280(void)

{
  DAT_154df49c0 = CRYPTO_get_ex_new_index(5,0,"SSL for verify callback",0,0,0);
  DAT_1553dfe10 = (uint)(-1 < DAT_154df49c0);
  return;
}

// FUN_14f65f2e0 @ 14f65f2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f65f2e0(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *local_res18;
  void *local_res20;
  
  local_res20 = (void *)0x0;
  local_res18 = (void *)0x0;
  iVar2 = i2d_X509_NAME(param_1,&local_res20);
  iVar3 = i2d_X509_NAME(param_2,&local_res18);
  pvVar1 = local_res20;
  if ((iVar2 < 0) || (iVar3 < 0)) {
    iVar2 = -2;
  }
  else if (iVar2 == iVar3) {
    iVar2 = memcmp(local_res20,local_res18,(longlong)iVar2);
  }
  else {
    iVar2 = iVar2 - iVar3;
  }
  CRYPTO_free(pvVar1,"ssl\\ssl_cert.c",0x24c);
  CRYPTO_free(local_res18,"ssl\\ssl_cert.c",0x24d);
  return iVar2;
}

// FUN_14f65f390 @ 14f65f390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65f390(void)

{
  X509_NAME_hash();
  return;
}

// FUN_14f65f3b0 @ 14f65f3b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65f3b0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_14f65f2e0(*param_1,*param_2);
  return;
}

