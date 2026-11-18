// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// PEM_X509_INFO_read @ 14f732e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PEM_X509_INFO_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f732e50;
  uVar1 = BIO_s_file();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(9,0x73,7,"crypto\\pem\\pem_info.c",0x1c,uVar3);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar2,0x6a,0,param_1);
    uVar1 = PEM_X509_INFO_read_bio(lVar2,param_2,param_3,param_4);
    BIO_free(lVar2);
  }
  return uVar1;
}

// PEM_X509_INFO_read_bio @ 14f732ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong PEM_X509_INFO_read_bio
                    (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  code *pcVar10;
  char *_Str1;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  char *local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  int local_98;
  longlong local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  ulonglong uVar9;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b8 = (char *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uVar3 = param_2;
  local_88 = param_4;
  local_80 = param_3;
  local_78 = param_1;
  if ((param_2 == 0) && (uVar3 = OPENSSL_sk_new_null(), uVar3 == 0)) {
    local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,0x36);
    ERR_put_error(9,0x74,0x41,"crypto\\pem\\pem_info.c");
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)X509_INFO_new();
    if (plVar4 != (longlong *)0x0) {
      local_c8 = local_b0;
      iVar2 = PEM_read_bio(param_1,&local_b8,&local_a8,&local_a0);
      if (iVar2 != 0) {
LAB_14f732fd0:
        do {
          _Str1 = local_b8;
          iVar11 = 0;
          iVar2 = strcmp(local_b8,"CERTIFICATE");
          bVar1 = false;
          if ((iVar2 == 0) || (iVar2 = strcmp(_Str1,"X509 CERTIFICATE"), iVar2 == 0)) {
            pcVar10 = d2i_X509;
LAB_14f73301c:
            plVar8 = plVar4;
            if (*plVar4 == 0) {
LAB_14f7331af:
              if (pcVar10 != (code *)0x0) {
                if (bVar1) {
                  iVar2 = PEM_get_EVP_CIPHER_INFO(local_a8,plVar4 + 3);
                  if (iVar2 == 0) goto LAB_14f733331;
                  plVar4[7] = local_a0;
                  *(undefined4 *)(plVar4 + 6) = local_b0[0];
                  local_a0 = 0;
                  _Str1 = local_b8;
                }
                else {
                  iVar2 = PEM_get_EVP_CIPHER_INFO(local_a8,local_70);
                  if (iVar2 == 0) goto LAB_14f733331;
                  local_c8 = local_88;
                  iVar2 = PEM_do_header(local_70,local_a0,local_b0,local_80);
                  if (iVar2 == 0) goto LAB_14f733331;
                  local_90 = local_a0;
                  if (iVar11 == 0) {
                    lVar5 = (*pcVar10)(plVar8,&local_90,local_b0[0]);
                    _Str1 = local_b8;
                    if (lVar5 == 0) {
                      local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,0xc4);
                      goto LAB_14f733306;
                    }
                  }
                  else {
                    lVar5 = d2i_PrivateKey(iVar11,plVar8,&local_90,local_b0[0]);
                    _Str1 = local_b8;
                    if (lVar5 == 0) {
                      local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,0xc0);
LAB_14f733306:
                      ERR_put_error(9,0x74,0xd,"crypto\\pem\\pem_info.c");
                      goto LAB_14f733331;
                    }
                  }
                }
              }
LAB_14f73322b:
              CRYPTO_free(_Str1,"crypto\\pem\\pem_info.c",0xd1);
              local_b8 = (char *)0x0;
              CRYPTO_free(local_a8,"crypto\\pem\\pem_info.c",0xd3);
              local_a8 = 0;
              CRYPTO_free(local_a0,"crypto\\pem\\pem_info.c",0xd5);
              local_c8 = local_b0;
              local_a0 = 0;
              iVar2 = PEM_read_bio(local_78,&local_b8,&local_a8,&local_a0);
              if (iVar2 == 0) break;
              goto LAB_14f732fd0;
            }
          }
          else {
            iVar2 = strcmp(_Str1,"TRUSTED CERTIFICATE");
            if (iVar2 == 0) {
              pcVar10 = d2i_X509_AUX;
              goto LAB_14f73301c;
            }
            iVar2 = strcmp(_Str1,"X509 CRL");
            if (iVar2 != 0) {
              iVar2 = strcmp(_Str1,"RSA PRIVATE KEY");
              if (iVar2 == 0) {
                pcVar10 = d2i_RSAPrivateKey;
                if (plVar4[2] != 0) goto LAB_14f733026;
                plVar4[7] = 0;
                *(undefined4 *)(plVar4 + 6) = 0;
                lVar5 = X509_PKEY_new();
                plVar4[2] = lVar5;
                if (lVar5 != 0) {
                  plVar8 = (longlong *)(lVar5 + 0x18);
                  iVar11 = 6;
                  lVar5 = -1;
                  do {
                    lVar5 = lVar5 + 1;
                  } while (*(char *)(local_a8 + lVar5) != '\0');
LAB_14f73318d:
                  bVar1 = 10 < (int)lVar5;
                  _Str1 = local_b8;
                  goto LAB_14f7331af;
                }
              }
              else {
                iVar2 = strcmp(_Str1,"DSA PRIVATE KEY");
                if (iVar2 == 0) {
                  pcVar10 = d2i_DSAPrivateKey;
                  if (plVar4[2] != 0) goto LAB_14f733026;
                  plVar4[7] = 0;
                  *(undefined4 *)(plVar4 + 6) = 0;
                  lVar5 = X509_PKEY_new();
                  plVar4[2] = lVar5;
                  if (lVar5 != 0) {
                    plVar8 = (longlong *)(lVar5 + 0x18);
                    iVar11 = 0x74;
                    lVar5 = -1;
                    do {
                      lVar5 = lVar5 + 1;
                    } while (*(char *)(local_a8 + lVar5) != '\0');
                    goto LAB_14f73318d;
                  }
                }
                else {
                  iVar2 = strcmp(_Str1,"EC PRIVATE KEY");
                  if (iVar2 != 0) goto LAB_14f73322b;
                  pcVar10 = d2i_ECPrivateKey;
                  if (plVar4[2] != 0) goto LAB_14f733026;
                  plVar4[7] = 0;
                  *(undefined4 *)(plVar4 + 6) = 0;
                  lVar5 = X509_PKEY_new();
                  plVar4[2] = lVar5;
                  if (lVar5 != 0) {
                    plVar8 = (longlong *)(lVar5 + 0x18);
                    iVar11 = 0x198;
                    lVar5 = -1;
                    do {
                      lVar5 = lVar5 + 1;
                    } while (*(char *)(local_a8 + lVar5) != '\0');
                    goto LAB_14f73318d;
                  }
                }
              }
              goto LAB_14f733331;
            }
            pcVar10 = d2i_X509_CRL;
            if (plVar4[1] == 0) {
              plVar8 = plVar4 + 1;
              goto LAB_14f7331af;
            }
          }
LAB_14f733026:
          iVar2 = OPENSSL_sk_push(uVar3,plVar4);
          if ((iVar2 == 0) || (plVar4 = (longlong *)X509_INFO_new(), plVar4 == (longlong *)0x0))
          goto LAB_14f733331;
        } while( true );
      }
      uVar7 = ERR_peek_last_error();
      if (((uVar7 & 0xfff) == 0x6c) &&
         (((((ERR_clear_error(), *plVar4 == 0 && (plVar4[1] == 0)) && (plVar4[2] == 0)) &&
           (plVar8 = plVar4, plVar4[7] == 0)) ||
          (iVar2 = OPENSSL_sk_push(uVar3,plVar4), plVar8 = (longlong *)0x0, iVar2 != 0)))) {
        local_98 = 1;
        plVar4 = plVar8;
      }
    }
  }
LAB_14f733331:
  uVar12 = 0;
  X509_INFO_free(plVar4);
  uVar9 = uVar3;
  if (local_98 == 0) {
    iVar2 = OPENSSL_sk_num(uVar3);
    uVar9 = uVar12;
    if (0 < iVar2) {
      do {
        uVar6 = OPENSSL_sk_value(uVar3,uVar9);
        X509_INFO_free(uVar6);
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
        iVar2 = OPENSSL_sk_num(uVar3);
      } while ((int)uVar7 < iVar2);
    }
    uVar9 = uVar12;
    if (uVar3 != param_2) {
      OPENSSL_sk_free(uVar3);
    }
  }
  CRYPTO_free(local_b8,"crypto\\pem\\pem_info.c",0xf0);
  CRYPTO_free(local_a8,"crypto\\pem\\pem_info.c",0xf1);
  CRYPTO_free(local_a0,"crypto\\pem\\pem_info.c",0xf2);
  return uVar9;
}

// PEM_X509_INFO_write_bio @ 14f733430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
PEM_X509_INFO_write_bio
          (undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,int param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_4a8 [32];
  int local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 local_460;
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  uVar8 = 0;
  local_468 = param_6;
  local_460 = param_7;
  if (param_3 != 0) {
    uVar2 = EVP_CIPHER_nid(param_3);
    lVar4 = OBJ_nid2sn(uVar2);
    if (lVar4 != 0) {
      iVar3 = EVP_CIPHER_iv_length(param_3);
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (*(char *)(lVar4 + lVar5) != '\0');
      if ((ulonglong)(lVar6 + 0x25 + (longlong)(iVar3 * 2)) < 0x401) goto LAB_14f7334f2;
    }
    local_488 = 0x10a;
    ERR_put_error(9,0x75,0x71,"crypto\\pem\\pem_info.c");
    goto LAB_14f73363c;
  }
LAB_14f7334f2:
  uVar1 = local_468;
  if (param_2[2] != 0) {
    lVar4 = param_2[7];
    if ((lVar4 == 0) || (lVar5 = param_2[6], (int)lVar5 < 1)) {
      uVar7 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_2[2] + 0x18));
      local_478 = local_460;
      local_488 = param_5;
      local_480 = uVar1;
      iVar3 = PEM_write_bio_RSAPrivateKey(param_1,uVar7,param_3,param_4);
    }
    else {
      if (param_3 == 0) {
        local_488 = 0x117;
        ERR_put_error(9,0x75,0x7f,"crypto\\pem\\pem_info.c");
        goto LAB_14f73363c;
      }
      uVar2 = EVP_CIPHER_nid(param_2[3]);
      lVar6 = OBJ_nid2sn(uVar2);
      if (lVar6 == 0) {
        local_488 = 0x128;
        ERR_put_error(9,0x75,0x71,"crypto\\pem\\pem_info.c");
        goto LAB_14f73363c;
      }
      local_458[0] = 0;
      PEM_proc_type(local_458,10);
      uVar2 = EVP_CIPHER_iv_length(param_3);
      PEM_dek_info(local_458,lVar6,uVar2,param_2 + 4);
      local_488 = (int)lVar5;
      iVar3 = PEM_write_bio(param_1,"RSA PRIVATE KEY",local_458,lVar4);
    }
    if (iVar3 < 1) goto LAB_14f73363c;
  }
  if ((*param_2 == 0) || (iVar3 = PEM_write_bio_X509(param_1), uVar8 = 0, 0 < iVar3)) {
    uVar8 = 1;
  }
LAB_14f73363c:
  OPENSSL_cleanse(local_458,0x400);
  return uVar8;
}

// FUN_14f733680 @ 14f733680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f733680(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f7336a0 @ 14f7336a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7336a0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7336c0 @ 14f7336c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7336c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7336e0 @ 14f7336e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7336e0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f733700 @ 14f733700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f733700(void)

{
  OPENSSL_sk_value();
  return;
}

