// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 38

// FUN_14f766b00 @ 14f766b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f766b00(int *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 == 2) {
    return (ulonglong)(uint)param_1[6];
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))(*(undefined8 *)(param_1 + 8));
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = BIO_ctrl(*(undefined8 *)(param_1 + 4),2,0);
  return uVar1;
}

// FUN_14f766b70 @ 14f766b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f766b70(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar11;
  int iVar12;
  undefined1 auStack_1f8 [32];
  int **local_1d8;
  int *local_1d0;
  int *local_1c8;
  int *local_1c0;
  int *local_1b8;
  ulonglong local_1b0;
  int local_1a8 [2];
  longlong local_1a0;
  char *local_198;
  int local_190 [2];
  int *local_188;
  int *local_180;
  int *local_178;
  char *local_170;
  undefined1 local_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong uVar10;
  
  uStack_40 = 0x14f766b92;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  uVar8 = 0;
  param_1[1] = 0;
  ERR_clear_error();
  if (*param_1 == 2) {
LAB_14f766bd0:
    local_1b0 = 0;
    if (*(char **)(param_1 + 0xe) != (char *)0x0) {
      uVar9 = uVar8;
      if (((**(char **)(param_1 + 0xe) != '.') && (iVar3 = FUN_14f7688d0(param_1), iVar3 != 0)) &&
         (iVar3 = FUN_14f7689b0(param_1,*(undefined8 *)(param_1 + 0xe),&local_1b0),
         uVar9 = local_1b0, iVar3 == 0)) goto LAB_14f766d55;
      uVar6 = OPENSSL_DIR_read(param_1 + 4,*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 0xe) = uVar6;
      piVar7 = _errno();
      iVar3 = *piVar7;
      param_1[0x10] = iVar3;
      if ((*(longlong *)(param_1 + 0xe) == 0) && (iVar3 == 0)) {
        param_1[6] = 1;
      }
      if (uVar9 != 0) {
        uVar8 = OSSL_STORE_INFO_new_NAME(uVar9);
        if (uVar8 != 0) {
          return uVar8;
        }
        CRYPTO_free(uVar9,"crypto\\store\\loader_file.c",0x530);
        local_1d8 = (int **)CONCAT44(local_1d8._4_4_,0x531);
        ERR_put_error(0x2c,0x77,0x2c,"crypto\\store\\loader_file.c");
        return 0;
      }
      if (*param_1 == 2) {
        iVar3 = param_1[6];
      }
      else {
        if ((*(longlong *)(param_1 + 6) != 0) &&
           (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))(*(undefined8 *)(param_1 + 8)),
           iVar3 == 0)) goto LAB_14f766bd0;
        iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 4),2,0);
      }
      if (iVar3 != 0) {
        return 0;
      }
      goto LAB_14f766bd0;
    }
    if (param_1[6] == 0) {
      local_1d8 = (int **)CONCAT44(local_1d8._4_4_,0x514);
      ERR_put_error(0x2c,0x77,2,"crypto\\store\\loader_file.c");
      piVar7 = _errno();
      *piVar7 = param_1[0x10];
      param_1[1] = param_1[1] + 1;
      piVar7 = _errno();
      iVar3 = openssl_strerror_r(*piVar7,local_148,0x100);
      if (iVar3 != 0) {
        ERR_add_error_data(1,local_148);
      }
    }
LAB_14f766d55:
    uVar9 = 0;
  }
  else {
    while( true ) {
      local_190[0] = 0;
      uVar9 = uVar8;
      if (*(longlong *)(param_1 + 6) != 0) {
        local_1d0 = local_190;
        ppiVar1 = (int **)(param_1 + 8);
        local_1d8 = ppiVar1;
        local_1c8 = param_2;
        local_1c0 = param_3;
        uVar9 = (**(code **)(*(longlong *)(param_1 + 6) + 8))(0,0,0);
        if (uVar9 == 0) {
          (**(code **)(*(longlong *)(param_1 + 6) + 0x18))(ppiVar1);
          *ppiVar1 = (int *)0x0;
          param_1[6] = 0;
          param_1[7] = 0;
        }
      }
      if (uVar9 != 0) break;
      uVar9 = 0;
      if (*param_1 == 2) {
        iVar3 = param_1[6];
LAB_14f766dfe:
        if (iVar3 != 0) goto LAB_14f766d55;
      }
      else if ((*(longlong *)(param_1 + 6) == 0) ||
              (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))
                                 (*(undefined8 *)(param_1 + 8)), iVar3 != 0)) {
        iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 4),2,0);
        goto LAB_14f766dfe;
      }
      do {
        iVar3 = -1;
        local_1a0 = 0;
        local_198 = (char *)0x0;
        local_1b0 = 0;
        local_1b8._0_4_ = 0;
        local_1a8[0] = -1;
        if (*param_1 == 1) {
          local_1d8 = &local_1b8;
          if ((*(byte *)(param_1 + 2) & 1) == 0) {
            iVar4 = PEM_read_bio(*(undefined8 *)(param_1 + 4),&local_1a0,&local_198);
          }
          else {
            local_1d0 = (int *)CONCAT44(local_1d0._4_4_,3);
            iVar4 = PEM_read_bio_ex();
          }
          iVar12 = -1;
          if (iVar4 < 1) goto LAB_14f766ff8;
          cVar2 = *local_198;
          uVar5 = 0;
          uVar10 = uVar8;
          pcVar11 = local_198;
          while ((cVar2 != '\0' && (uVar5 = (uint)uVar10, uVar5 < 0x80000000))) {
            pcVar11 = pcVar11 + 1;
            uVar5 = uVar5 + 1;
            cVar2 = *pcVar11;
            uVar10 = (ulonglong)uVar5;
          }
          if (10 < (uVar5 & 0x7fffffff)) {
            iVar4 = PEM_get_EVP_CIPHER_INFO(local_198,local_168);
            iVar12 = iVar3;
            if (iVar4 != 0) {
              local_1d8 = &local_180;
              local_170 = "PEM";
              local_180 = param_2;
              local_178 = param_3;
              iVar4 = PEM_do_header(local_168,local_1b0,&local_1b8);
              if (iVar4 != 0) goto LAB_14f766f36;
            }
            goto LAB_14f766ff8;
          }
LAB_14f766f36:
          local_1d8 = (int **)(longlong)(int)local_1b8;
          local_1c0 = local_1a8;
          local_1d0 = param_2;
          local_1c8 = param_3;
          uVar9 = FUN_14f7685d0(param_1,local_1a0,local_198);
          iVar12 = local_1a8[0];
          if (uVar9 == 0) {
            if (local_1a0 == 0) {
              if (local_1a8[0] < 2) goto LAB_14f766f82;
              local_1d8 = (int **)CONCAT44(local_1d8._4_4_,0x566);
              ERR_put_error(0x2c,0x77,0x6b);
            }
            else {
              if (1 < local_1a8[0]) goto LAB_14f766ff8;
LAB_14f766f82:
              if (local_1a8[0] == 1) {
                iVar3 = ERR_peek_error();
                if (iVar3 == 0) {
                  local_1d8 = (int **)CONCAT44(local_1d8._4_4_,0x56e);
                  ERR_put_error(0x2c,0x77,0x6e);
                  if (local_1a0 != 0) {
                    ERR_add_error_data(3,"PEM type is \'");
                  }
                }
                goto LAB_14f766ff8;
              }
            }
            if (0 < iVar12) goto LAB_14f766ff8;
          }
        }
        else {
          local_188 = (int *)0x0;
          iVar4 = asn1_d2i_read_bio(*(undefined8 *)(param_1 + 4),&local_188);
          iVar12 = iVar3;
          if (-1 < iVar4) {
            local_1b0 = *(ulonglong *)(local_188 + 2);
            local_1b8._0_4_ = *local_188;
            CRYPTO_free(local_188,"crypto\\store\\loader_file.c",0x49a);
            goto LAB_14f766f36;
          }
LAB_14f766ff8:
          param_1[1] = param_1[1] + 1;
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          CRYPTO_free(local_1a0,"crypto\\store\\loader_file.c",0x46e);
        }
        else {
          CRYPTO_secure_clear_free(local_1a0,0,"crypto\\store\\loader_file.c");
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          CRYPTO_free(local_198,"crypto\\store\\loader_file.c",0x46e);
        }
        else {
          CRYPTO_secure_clear_free(local_198,0,"crypto\\store\\loader_file.c");
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          CRYPTO_free(local_1b0);
        }
        else {
          CRYPTO_secure_clear_free();
        }
        if (iVar12 != 0) {
          if (1 < iVar12) goto LAB_14f766d55;
          break;
        }
        if (*param_1 == 2) {
          iVar3 = param_1[6];
LAB_14f7670cc:
          if (iVar3 != 0) break;
        }
        else if ((*(longlong *)(param_1 + 6) == 0) ||
                (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))
                                   (*(undefined8 *)(param_1 + 8)), iVar3 != 0)) {
          iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 4));
          goto LAB_14f7670cc;
        }
      } while (param_1[1] < 1);
      if (uVar9 == 0) {
        return 0;
      }
      if (param_1[0x12] == 0) {
        return uVar9;
      }
      iVar3 = OSSL_STORE_INFO_get_type(uVar9);
      if (param_1[0x12] == iVar3) {
        return uVar9;
      }
      OSSL_STORE_INFO_free(uVar9);
    }
  }
  return uVar9;
}

// FUN_14f767120 @ 14f767120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f767120(int *param_1)

{
  if (*param_1 == 2) {
    OPENSSL_DIR_end(param_1 + 4);
    FUN_14f7682e0(param_1);
    return 1;
  }
  BIO_free_all(*(undefined8 *)(param_1 + 4));
  FUN_14f7682e0(param_1);
  return 1;
}

// FUN_14f767180 @ 14f767180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f767180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_4a8 [32];
  undefined8 *local_488;
  undefined8 local_478;
  undefined4 *local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458 [2];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f767195;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  uVar8 = 0;
  lVar5 = *param_5;
  local_470 = param_6;
  local_458[0] = param_3;
  if (lVar5 == 0) {
    uVar12 = 0;
    if (param_1 == 0) {
      lVar3 = d2i_PKCS12(0,local_458,param_4);
      if (lVar3 != 0) {
        *param_6 = 1;
        pcVar10 = "";
        local_468 = 0;
        local_460 = 0;
        local_478 = 0;
        iVar2 = PKCS12_verify_mac(lVar3,"",0);
        if ((iVar2 == 0) && (iVar2 = PKCS12_verify_mac(lVar3,0,0), iVar2 == 0)) {
          local_488 = (undefined8 *)param_8;
          pcVar10 = (char *)FUN_14f768400(param_7,local_448,0x400,"PKCS12 import password");
          if (pcVar10 == (char *)0x0) {
            local_488 = (undefined8 *)CONCAT44(local_488._4_4_,0xe8);
            ERR_put_error(0x2c,0x7a,0x72,"crypto\\store\\loader_file.c");
            param_6 = local_470;
            uVar12 = 0;
          }
          else {
            cVar1 = *pcVar10;
            pcVar4 = pcVar10;
            uVar6 = uVar8;
            while ((cVar1 != '\0' && (uVar12 = (uint)uVar6, uVar12 < 0x80000000))) {
              pcVar4 = pcVar4 + 1;
              uVar12 = uVar12 + 1;
              cVar1 = *pcVar4;
              uVar6 = (ulonglong)uVar12;
            }
            iVar2 = PKCS12_verify_mac(lVar3,pcVar10,uVar12 & 0x7fffffff);
            if (iVar2 != 0) goto LAB_14f7672fa;
            local_488 = (undefined8 *)CONCAT44(local_488._4_4_,0xed);
            ERR_put_error(0x2c,0x7a,0x71,"crypto\\store\\loader_file.c");
            param_6 = local_470;
            uVar12 = 0;
          }
        }
        else {
LAB_14f7672fa:
          local_488 = &local_478;
          iVar2 = PKCS12_parse(lVar3,pcVar10,&local_468,&local_460);
          param_6 = local_470;
          uVar12 = 0;
          if (iVar2 != 0) {
            uVar11 = 0;
            lVar5 = OPENSSL_sk_new_null();
            uVar6 = uVar8;
            uVar7 = uVar8;
            if ((((lVar5 == 0) || (uVar6 = OSSL_STORE_INFO_new_PKEY(local_468), uVar6 == 0)) ||
                (iVar2 = OPENSSL_sk_push(lVar5,uVar6), uVar8 = uVar11, uVar7 = 0, iVar2 == 0)) ||
               ((uVar7 = OSSL_STORE_INFO_new_CERT(local_460), uVar7 == 0 ||
                (iVar2 = OPENSSL_sk_push(lVar5,uVar7), iVar2 == 0)))) {
LAB_14f7673eb:
              OSSL_STORE_INFO_free(uVar8);
              OSSL_STORE_INFO_free(uVar7);
              OSSL_STORE_INFO_free(uVar6);
              OPENSSL_sk_pop_free(lVar5,OSSL_STORE_INFO_free);
              EVP_PKEY_free(local_468);
              X509_free(local_460);
              OPENSSL_sk_pop_free(local_478,X509_free);
              lVar5 = 0;
              uVar12 = 0;
            }
            else {
              uVar6 = 0;
              uVar7 = 0;
              iVar2 = OPENSSL_sk_num(local_478);
              while (uVar12 = 1, 0 < iVar2) {
                uVar9 = OPENSSL_sk_value(local_478,0);
                uVar8 = OSSL_STORE_INFO_new_CERT(uVar9);
                if ((uVar8 == 0) || (iVar2 = OPENSSL_sk_push(lVar5), iVar2 == 0))
                goto LAB_14f7673eb;
                OPENSSL_sk_shift(local_478);
                iVar2 = OPENSSL_sk_num(local_478);
              }
            }
            *param_5 = lVar5;
            param_6 = local_470;
          }
        }
      }
      PKCS12_free(lVar3);
      if (uVar12 != 0) {
        if (lVar5 == 0) {
          return 0;
        }
        goto LAB_14f767461;
      }
    }
    uVar9 = 0;
  }
  else {
LAB_14f767461:
    *param_6 = 1;
    uVar9 = OPENSSL_sk_shift(lVar5);
  }
  return uVar9;
}

// FUN_14f7674a0 @ 14f7674a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7674a0(longlong param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f7674e0 @ 14f7674e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7674e0(undefined8 *param_1)

{
  OPENSSL_sk_pop_free(*param_1,OSSL_STORE_INFO_free);
  *param_1 = 0;
  return;
}

// FUN_14f767520 @ 14f767520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f767520(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  longlong *local_470;
  int *local_468;
  undefined4 local_460;
  int local_458 [2];
  undefined4 *local_450;
  undefined8 local_448;
  longlong local_440;
  undefined8 local_438 [2];
  undefined1 local_428 [1024];
  ulonglong local_28;
  undefined8 local_20;
  ulonglong uVar11;
  
  local_20 = 0x14f767538;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_498;
  uVar8 = 0;
  local_448 = 0;
  local_450 = (undefined4 *)0x0;
  local_440 = 0;
  local_438[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(param_1,"ENCRYPTED PRIVATE KEY");
    if (iVar2 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  uVar3 = d2i_X509_SIG(0,local_438,param_4);
  if (uVar3 == 0) {
    return 0;
  }
  *param_6 = 1;
  plVar4 = (longlong *)BUF_MEM_new();
  if (plVar4 == (longlong *)0x0) {
    local_478._0_4_ = 0x162;
    uVar8 = uVar3;
LAB_14f7676c0:
    uVar9 = 0x41;
    uVar3 = uVar8;
  }
  else {
    local_478 = param_8;
    pcVar5 = (char *)FUN_14f768400(param_7,local_428,0x400,"PKCS8 decrypt password");
    if (pcVar5 != (char *)0x0) {
      X509_SIG_get0(uVar3,&local_448,&local_450);
      uVar10 = 0;
      cVar1 = *pcVar5;
      pcVar6 = pcVar5;
      uVar11 = uVar8;
      while ((cVar1 != '\0' && (uVar10 = (uint)uVar11, uVar10 < 0x80000000))) {
        pcVar6 = pcVar6 + 1;
        uVar10 = uVar10 + 1;
        cVar1 = *pcVar6;
        uVar11 = (ulonglong)uVar10;
      }
      local_468 = local_458;
      local_460 = 0;
      local_470 = &local_440;
      local_478._0_4_ = *local_450;
      lVar7 = PKCS12_pbe_crypt(local_448,pcVar5,uVar10 & 0x7fffffff,*(undefined8 *)(local_450 + 2));
      if (lVar7 == 0) goto LAB_14f7676da;
      plVar4[1] = local_440;
      *plVar4 = (longlong)local_458[0];
      plVar4[2] = (longlong)local_458[0];
      X509_SIG_free(uVar3);
      lVar7 = ossl_store_info_new_EMBEDDED("PRIVATE KEY",plVar4);
      if (lVar7 != 0) {
        return lVar7;
      }
      local_478._0_4_ = 0x17a;
      goto LAB_14f7676c0;
    }
    local_478._0_4_ = 0x169;
    uVar9 = 0x73;
  }
  ERR_put_error(0x2c,0x7d,uVar9,"crypto\\store\\loader_file.c");
LAB_14f7676da:
  X509_SIG_free(uVar3);
  BUF_MEM_free(plVar4);
  return 0;
}

// FUN_14f767720 @ 14f767720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f767720(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  uVar10 = 0;
  uVar4 = uVar10;
  local_res18[0] = param_3;
  if (param_1 == (char *)0x0) {
    for (lVar3 = ENGINE_get_first(); lVar3 != 0; lVar3 = ENGINE_get_next(lVar3)) {
      pcVar6 = (code *)ENGINE_get_pkey_asn1_meths(lVar3);
      if (pcVar6 != (code *)0x0) {
        local_res8 = 0;
        iVar1 = (*pcVar6)(lVar3,0,&local_res8,0);
        uVar8 = uVar10;
        if (0 < iVar1) {
          do {
            local_50 = local_res18[0];
            local_58 = (undefined4 *)0x0;
            iVar2 = (*pcVar6)(lVar3,&local_58,0);
            if ((((iVar2 != 0) && (local_58 != (undefined4 *)0x0)) &&
                ((*(byte *)(local_58 + 2) & 1) == 0)) &&
               (uVar7 = d2i_PrivateKey(*local_58), uVar7 != 0)) {
              if (uVar4 != 0) {
                EVP_PKEY_free(uVar7);
                uVar7 = uVar4;
              }
              *param_6 = *param_6 + 1;
              uVar4 = uVar7;
            }
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)iVar1);
        }
      }
    }
    iVar1 = EVP_PKEY_asn1_get_count();
    if (0 < iVar1) {
      do {
        local_48[0] = local_res18[0];
        puVar5 = (undefined4 *)EVP_PKEY_asn1_get0(uVar10);
        if (((*(byte *)(puVar5 + 2) & 1) == 0) &&
           (uVar8 = d2i_PrivateKey(*puVar5,0,local_48,param_4), uVar8 != 0)) {
          if (uVar4 != 0) {
            EVP_PKEY_free(uVar8);
            uVar8 = uVar4;
          }
          *param_6 = *param_6 + 1;
          uVar4 = uVar8;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        iVar1 = EVP_PKEY_asn1_get_count();
      } while ((int)uVar9 < iVar1);
    }
    if (1 < *param_6) {
      EVP_PKEY_free(uVar4);
      return 0;
    }
  }
  else {
    iVar1 = strcmp(param_1,"PRIVATE KEY");
    if (iVar1 == 0) {
      lVar3 = d2i_PKCS8_PRIV_KEY_INFO(0,local_res18,param_4);
      *param_6 = 1;
      if (lVar3 != 0) {
        uVar4 = EVP_PKCS82PKEY(lVar3);
      }
      PKCS8_PRIV_KEY_INFO_free(lVar3);
    }
    else {
      iVar1 = pem_check_suffix(param_1,"PRIVATE KEY");
      if (iVar1 < 1) {
        return 0;
      }
      puVar5 = (undefined4 *)EVP_PKEY_asn1_find_str(0,param_1,iVar1);
      if (puVar5 == (undefined4 *)0x0) {
        return 0;
      }
      *param_6 = 1;
      uVar4 = d2i_PrivateKey(*puVar5,0,local_res18,param_4);
    }
  }
  if (uVar4 == 0) {
    return 0;
  }
  lVar3 = OSSL_STORE_INFO_new_PKEY(uVar4);
  if (lVar3 == 0) {
    EVP_PKEY_free(uVar4);
  }
  return lVar3;
}

// FUN_14f7679a0 @ 14f7679a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7679a0(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  
  uVar3 = 0;
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(param_1,"PUBLIC KEY");
    if (iVar1 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  lVar2 = d2i_PUBKEY(0,local_res18,param_4);
  if (lVar2 != 0) {
    *param_6 = 1;
    uVar3 = OSSL_STORE_INFO_new_PKEY(lVar2);
  }
  return uVar3;
}

// FUN_14f767a40 @ 14f767a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f767a40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,int *param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined8 uVar10;
  ulonglong uVar8;
  
  uVar10 = 0x14f767a5b;
  uVar6 = 0;
  local_res18[0] = param_3;
  if (param_1 == 0) {
LAB_14f767b27:
    iVar1 = EVP_PKEY_asn1_get_count();
    uVar4 = uVar6;
    uVar8 = uVar6;
    uVar9 = uVar6;
    uVar2 = uVar6;
    if (0 < iVar1) {
      do {
        local_res8 = local_res18[0];
        uVar2 = uVar9;
        if ((uVar4 == 0) && (uVar4 = EVP_PKEY_new(), uVar4 == 0)) {
          ERR_put_error(0x2c,0x79,6,"crypto\\store\\loader_file.c",0x24a,uVar10);
          break;
        }
        puVar5 = (undefined4 *)EVP_PKEY_asn1_get0(uVar8);
        if (((((*(byte *)(puVar5 + 2) & 1) == 0) &&
             (iVar1 = EVP_PKEY_set_type(uVar4,*puVar5), iVar1 != 0)) &&
            (lVar3 = EVP_PKEY_get0_asn1(uVar4), lVar3 != 0)) &&
           ((*(code **)(lVar3 + 0x70) != (code *)0x0 &&
            (iVar1 = (**(code **)(lVar3 + 0x70))(uVar4,&local_res8,param_4), iVar1 != 0)))) {
          uVar2 = uVar4;
          if (uVar9 != 0) {
            EVP_PKEY_free(uVar4);
            uVar2 = uVar9;
          }
          *param_6 = *param_6 + 1;
          uVar4 = uVar6;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        iVar1 = EVP_PKEY_asn1_get_count();
        uVar9 = uVar2;
      } while ((int)uVar7 < iVar1);
    }
    EVP_PKEY_free(uVar4);
    if (*param_6 != 1) goto LAB_14f767c06;
  }
  else {
    iVar1 = pem_check_suffix(param_1,"PARAMETERS");
    if (iVar1 == 0) {
      return 0;
    }
    *param_6 = 1;
    if (iVar1 < 1) goto LAB_14f767b27;
    uVar2 = EVP_PKEY_new();
    if (uVar2 == 0) {
      ERR_put_error(0x2c,0x79,6,"crypto\\store\\loader_file.c",0x238,uVar10);
      return 0;
    }
    iVar1 = EVP_PKEY_set_type_str(uVar2,param_1,iVar1);
    if (((iVar1 == 0) || (lVar3 = EVP_PKEY_get0_asn1(uVar2), lVar3 == 0)) ||
       ((*(code **)(lVar3 + 0x70) == (code *)0x0 ||
        (iVar1 = (**(code **)(lVar3 + 0x70))(uVar2,local_res18,param_4), iVar1 == 0))))
    goto LAB_14f767c06;
  }
  lVar3 = OSSL_STORE_INFO_new_PARAMS(uVar2);
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_14f767c06:
  EVP_PKEY_free(uVar2);
  return 0;
}

// FUN_14f767c30 @ 14f767c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f767c30(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 *param_6)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res18 [2];
  
  bVar1 = true;
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(param_1,"TRUSTED CERTIFICATE");
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = strcmp(param_1,"X509 CERTIFICATE");
      if ((iVar2 != 0) && (iVar2 = strcmp(param_1,"CERTIFICATE"), iVar2 != 0)) {
        return 0;
      }
    }
    *param_6 = 1;
  }
  lVar3 = d2i_X509_AUX(0,local_res18,param_4);
  if ((lVar3 != 0) || ((bVar1 && (lVar3 = d2i_X509(0,local_res18,param_4), lVar3 != 0)))) {
    *param_6 = 1;
    lVar4 = OSSL_STORE_INFO_new_CERT(lVar3);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  X509_free(lVar3);
  return 0;
}

// FUN_14f767d20 @ 14f767d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f767d20(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(param_1,"X509 CRL");
    if (iVar1 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  lVar2 = d2i_X509_CRL(0,local_res18,param_4);
  if (lVar2 != 0) {
    *param_6 = 1;
    lVar3 = OSSL_STORE_INFO_new_CRL(lVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  X509_CRL_free(lVar2);
  return 0;
}

// FUN_14f767dd0 @ 14f767dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_14f767dd0(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_11b8 [32];
  undefined4 local_1198;
  char *local_1188;
  uint local_1180 [6];
  undefined1 local_1168 [6];
  ushort local_1162;
  undefined1 local_1138 [256];
  char local_1038 [4095];
  undefined1 local_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f767de6;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_11b8;
  local_1180[0] = local_1180[0] & 0xfffffffe;
  pcVar12 = (char *)0x1;
  local_1188 = param_2;
  iVar2 = _strnicmp(param_2,"file:",5);
  pcVar11 = (char *)0x0;
  if (iVar2 == 0) {
    pcVar8 = param_2 + 5;
    iVar2 = strncmp(pcVar8,"//",2);
    if (iVar2 == 0) {
      pcVar8 = param_2 + 7;
      pcVar12 = (char *)0x0;
      iVar2 = _strnicmp(pcVar8,"localhost/",10);
      if (iVar2 == 0) {
        pcVar8 = param_2 + 0x10;
        pcVar12 = pcVar11;
      }
      else if (*pcVar8 != '/') {
        local_1198 = 0x33d;
        ERR_put_error(0x2c,0x78,0x6f,"crypto\\store\\loader_file.c");
        return (undefined4 *)0x0;
      }
    }
    local_1180[(longlong)pcVar12 * 4] = local_1180[(longlong)pcVar12 * 4] | 1;
    if ((((*pcVar8 == '/') && (pcVar8[2] == ':')) && (pcVar8[3] == '/')) &&
       (cVar1 = ossl_tolower((int)pcVar8[1]), (byte)(cVar1 + 0x9fU) < 0x1a)) {
      pcVar8 = pcVar8 + 1;
      local_1180[(longlong)pcVar12 * 4] = local_1180[(longlong)pcVar12 * 4] & 0xfffffffe;
    }
    *(char **)(local_1180 + (longlong)pcVar12 * 4 + -2) = pcVar8;
    pcVar12 = pcVar12 + 1;
  }
  ppcVar9 = &local_1188;
  pcVar8 = pcVar11;
  do {
    if (pcVar12 <= pcVar11) {
      pcVar10 = pcVar8;
      if (pcVar8 == (char *)0x0) {
        return (undefined4 *)0x0;
      }
      break;
    }
    if ((((ulonglong)ppcVar9[1] & 1) != 0) && (**ppcVar9 != '/')) {
      local_1198 = 0x35a;
      ERR_put_error(0x2c,0x78,0x6c,"crypto\\store\\loader_file.c");
      ERR_add_error_data(1,*(undefined8 *)(local_1180 + (longlong)pcVar11 * 4 + -2));
      return (undefined4 *)0x0;
    }
    pcVar10 = *ppcVar9;
    iVar2 = _stat64i32(pcVar10,local_1168);
    if (iVar2 < 0) {
      piVar3 = _errno();
      local_1198 = 0x360;
      ERR_put_error(2,0x16,*piVar3,"crypto\\store\\loader_file.c");
      ERR_add_error_data(1,pcVar10);
      pcVar10 = pcVar8;
    }
    pcVar11 = pcVar11 + 1;
    ppcVar9 = ppcVar9 + 2;
    pcVar8 = pcVar10;
  } while (pcVar10 == (char *)0x0);
  ERR_clear_error();
  puVar4 = (undefined4 *)CRYPTO_zalloc(0x50,"crypto\\store\\loader_file.c",0x36d);
  if (puVar4 == (undefined4 *)0x0) {
    local_1198 = 0x36f;
    ERR_put_error(0x2c,0x78,0x41,"crypto\\store\\loader_file.c");
  }
  else {
    if ((local_1162 & 0xf000) == 0x4000) {
      lVar5 = CRYPTO_strdup(param_2,"crypto\\store\\loader_file.c",0x379);
      *(longlong *)(puVar4 + 8) = lVar5;
      *puVar4 = 2;
      if (lVar5 != 0) {
        uVar6 = OPENSSL_DIR_read(puVar4 + 4,pcVar10);
        *(undefined8 *)(puVar4 + 0xe) = uVar6;
        piVar3 = _errno();
        iVar2 = *piVar3;
        puVar4[0x10] = iVar2;
        if (*(longlong *)(puVar4 + 0xe) != 0) {
          return puVar4;
        }
        if (iVar2 == 0) {
          puVar4[6] = 1;
          return puVar4;
        }
        local_1198 = 900;
        ERR_put_error(0x2c,0x78,2,"crypto\\store\\loader_file.c");
        piVar3 = _errno();
        *piVar3 = puVar4[0x10];
        piVar3 = _errno();
        iVar2 = openssl_strerror_r(*piVar3,local_1138,0x100);
        if (iVar2 != 0) {
          ERR_add_error_data(1,local_1138);
        }
      }
    }
    else {
      memset(local_1038,0,0x1000);
      uVar6 = BIO_f_buffer();
      lVar5 = BIO_new(uVar6);
      if (lVar5 != 0) {
        lVar7 = BIO_new_file(pcVar10,"rb");
        *(longlong *)(puVar4 + 4) = lVar7;
        if (lVar7 != 0) {
          uVar6 = BIO_push(lVar5,lVar7);
          *(undefined8 *)(puVar4 + 4) = uVar6;
          iVar2 = BIO_ctrl(uVar6,0x1d,0xfff,local_1038);
          if (iVar2 < 1) {
            return puVar4;
          }
          local_39 = 0;
          pcVar12 = strstr(local_1038,"-----BEGIN ");
          if (pcVar12 != (char *)0x0) {
            *puVar4 = 1;
            return puVar4;
          }
          return puVar4;
        }
      }
      BIO_free_all(lVar5);
    }
    FUN_14f7682e0(puVar4);
  }
  return (undefined4 *)0x0;
}

// FUN_14f7681b0 @ 14f7681b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7681b0(longlong param_1,int param_2,undefined8 *param_3)

{
  if (param_2 == 1) {
    if (*(int *)*param_3 != 0) {
      if (*(int *)*param_3 != 1) {
        ERR_put_error(0x2c,0x81,7,"crypto\\store\\loader_file.c",0x3b6);
        return 0;
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      return 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  return 1;
}

// FUN_14f768230 @ 14f768230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f768230(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f768240;
  iVar1 = OSSL_STORE_SEARCH_get_type(param_2);
  if (iVar1 == 1) {
    if (param_1 == (int *)0x0) {
      return 1;
    }
    if (*param_1 == 2) {
      uVar4 = OSSL_STORE_SEARCH_get0_name(param_2);
      uVar2 = X509_NAME_hash(uVar4);
      BIO_snprintf(param_1 + 10,9,"%08lx",uVar2);
      return 1;
    }
    uVar3 = 0x3d8;
    uVar2 = 0x77;
  }
  else {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    uVar3 = 0x3e4;
    uVar2 = 0x78;
  }
  ERR_put_error(0x2c,0x8a,uVar2,"crypto\\store\\loader_file.c",uVar3,uVar4);
  return 0;
}

// FUN_14f7682e0 @ 14f7682e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7682e0(int *param_1)

{
  if (*param_1 == 2) {
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\store\\loader_file.c",0x30d);
  }
  else if (*(longlong *)(param_1 + 6) != 0) {
    (**(code **)(*(longlong *)(param_1 + 6) + 0x18))(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  CRYPTO_free(param_1,"crypto\\store\\loader_file.c",0x315);
  return;
}

// FUN_14f768400 @ 14f768400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f768400(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f768420;
  lVar2 = UI_new();
  if (lVar2 == 0) {
    ERR_put_error(0x2c,0x76,0x41,"crypto\\store\\loader_file.c",0x36,uVar6);
    return 0;
  }
  if (param_1 != 0) {
    UI_set_method(lVar2,param_1);
  }
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  UI_add_user_data(lVar2,param_5);
  lVar3 = UI_construct_prompt(lVar2,"pass phrase",param_4);
  if (lVar3 == 0) {
    uVar5 = 0x40;
    uVar4 = 0x41;
  }
  else {
    iVar1 = UI_add_input_string(lVar2,lVar3,2,param_2,0,CONCAT44(uVar4,param_3 + -1));
    if (iVar1 == 0) {
      uVar5 = 0x44;
      uVar4 = 0x28;
    }
    else {
      iVar1 = UI_process(lVar2);
      if (iVar1 == -2) {
        uVar5 = 0x4a;
        uVar4 = 0x6d;
      }
      else {
        if (iVar1 != -1) goto LAB_14f768520;
        uVar5 = 0x4e;
        uVar4 = 0x28;
      }
    }
  }
  ERR_put_error(0x2c,0x76,uVar4,"crypto\\store\\loader_file.c",uVar5);
  param_2 = 0;
LAB_14f768520:
  CRYPTO_free(lVar3,"crypto\\store\\loader_file.c",0x56);
  UI_free(lVar2);
  return param_2;
}

// FUN_14f768570 @ 14f768570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f768570(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)FUN_14f768400(*param_4,param_1,(longlong)param_2,param_4[2],param_4[1]);
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    return uVar2 & 0x7fffffff;
  }
  return 0;
}

// FUN_14f7685d0 @ 14f7685d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7685d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,int *param_8)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *in_stack_ffffffffffffff78;
  undefined4 uVar9;
  int local_68 [2];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f7685f4;
  puVar7 = (undefined8 *)0x0;
  uVar6 = 0;
  local_48 = (undefined8 *)0x0;
  local_50 = 0;
  do {
    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    local_60 = 0;
    plVar3 = (longlong *)CRYPTO_zalloc(0x38,"crypto\\store\\loader_file.c",0x40b);
    if (plVar3 == (longlong *)0x0) {
      in_stack_ffffffffffffff78 = (longlong *)CONCAT44(uVar9,0x40f);
      ERR_put_error(0x2c,0x7c,0x41,"crypto\\store\\loader_file.c",in_stack_ffffffffffffff78);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      *param_8 = 0;
      uVar8 = uVar4;
      do {
        lVar1 = *(longlong *)((longlong)&PTR_PTR_154df99b8 + uVar8);
        local_68[0] = 0;
        local_58 = 0;
        in_stack_ffffffffffffff78 = &local_58;
        uVar5 = (**(code **)(lVar1 + 8))
                          (param_2,param_3,param_4,param_5,in_stack_ffffffffffffff78,local_68,
                           param_6,param_7);
        if (0 < local_68[0]) {
          plVar3[*param_8] = lVar1;
          if (local_60 != 0) {
            (**(code **)(lVar1 + 0x18))(&local_60);
          }
          *param_8 = *param_8 + local_68[0];
          local_60 = local_58;
          if (*param_8 < 2) {
            if (uVar4 != 0) goto LAB_14f76874b;
          }
          else {
            OSSL_STORE_INFO_free(uVar4);
            OSSL_STORE_INFO_free(uVar5);
            if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
              (**(code **)(lVar1 + 0x18))(&local_60);
            }
            local_60 = 0;
            uVar5 = 0;
          }
          uVar4 = uVar5;
        }
LAB_14f76874b:
        uVar8 = uVar8 + 8;
      } while (uVar8 < 0x38);
      if ((*param_8 == 1) && (*(int *)(*plVar3 + 0x20) != 0)) {
        *(longlong *)(param_1 + 0x18) = *plVar3;
        *(longlong *)(param_1 + 0x20) = local_60;
      }
      CRYPTO_free(plVar3,"crypto\\store\\loader_file.c",0x439);
      uVar6 = local_50;
      puVar7 = local_48;
    }
    CRYPTO_free(uVar6,"crypto\\store\\loader_file.c",0x43d);
    BUF_MEM_free(puVar7);
    if (uVar4 == 0) {
      return 0;
    }
    iVar2 = OSSL_STORE_INFO_get_type(uVar4);
    if (iVar2 != -1) {
      ERR_clear_error();
      return uVar4;
    }
    uVar6 = ossl_store_info_get0_EMBEDDED_pem_name(uVar4);
    local_50 = uVar6;
    puVar7 = (undefined8 *)ossl_store_info_get0_EMBEDDED_buffer(uVar4);
    param_4 = puVar7[1];
    param_5 = *puVar7;
    local_48 = puVar7;
    CRYPTO_free(uVar4,"crypto\\store\\loader_file.c",0x447);
    param_2 = uVar6;
  } while( true );
}

// FUN_14f768840 @ 14f768840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f768840(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 8))
                      (0,0,0,0,puVar1,local_res8,param_2,param_3);
    if (lVar2 == 0) {
      (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(puVar1);
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    return lVar2;
  }
  return 0;
}

// FUN_14f7688d0 @ 14f7688d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7688d0(longlong param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    return true;
  }
  if (((((*(uint *)(param_1 + 0x48) & 0xfffffffa) == 0) && (*(uint *)(param_1 + 0x48) != 1)) &&
      (iVar2 = _strnicmp(param_2,(char *)(param_1 + 0x28),8), iVar2 == 0)) && (param_2[8] == '.')) {
    pcVar3 = param_2 + 9;
    if (*pcVar3 == 'r') {
      pcVar3 = param_2 + 10;
      if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x48) != 5)) {
        return false;
      }
    }
    else if (*(int *)(param_1 + 0x48) == 5) {
      return false;
    }
    iVar2 = ossl_ctype_check((int)*pcVar3,4);
    if (iVar2 != 0) {
      iVar2 = ossl_ctype_check((int)*pcVar3,4);
      while (iVar2 != 0) {
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
        iVar2 = ossl_ctype_check((int)*pcVar1,4);
      }
      return *pcVar3 == '\0';
    }
  }
  return false;
}

// FUN_14f7689b0 @ 14f7689b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7689b0(longlong param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f7689d0;
  pcVar8 = *(char **)(param_1 + 0x20);
  uVar7 = 0;
  pcVar9 = pcVar8;
  if (*pcVar8 != '\0') {
    uVar2 = 0;
    do {
      if (0x7fffffff < uVar2) break;
      pcVar9 = pcVar9 + 1;
      uVar2 = uVar2 + 1;
    } while (*pcVar9 != '\0');
    pcVar9 = pcVar8 + ((uVar2 & 0x7fffffff) - 1);
  }
  pcVar6 = "/";
  uVar2 = 0;
  if (*pcVar9 == '\\' || *pcVar9 == '/') {
    pcVar6 = "";
  }
  cVar1 = *pcVar8;
  for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
  }
  cVar1 = *pcVar6;
  pcVar8 = pcVar6;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
  }
  cVar1 = *param_2;
  pcVar8 = param_2;
  for (; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
  }
  lVar5 = (longlong)(int)((uVar2 & 0x7fffffff) + 1 + (uVar7 & 0x7fffffff) + (uVar3 & 0x7fffffff));
  lVar4 = CRYPTO_zalloc(lVar5,"crypto\\store\\loader_file.c",0x4b7);
  *param_3 = lVar4;
  if (lVar4 != 0) {
    OPENSSL_strlcat(lVar4,*(undefined8 *)(param_1 + 0x20),lVar5);
    OPENSSL_strlcat(*param_3,pcVar6,lVar5);
    OPENSSL_strlcat(*param_3,param_2,lVar5);
  }
  else {
    ERR_put_error(0x2c,0x7e,0x41,"crypto\\store\\loader_file.c",0x4b9,uVar10);
  }
  return lVar4 != 0;
}

// FUN_14f768b40 @ 14f768b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f768b40(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *local_res20;
  
  local_res20 = (undefined4 *)0x0;
  iVar1 = asn1_d2i_read_bio(param_1,&local_res20);
  if (iVar1 < 0) {
    return 0;
  }
  *param_2 = *(undefined8 *)(local_res20 + 2);
  *param_3 = *local_res20;
  CRYPTO_free(local_res20,"crypto\\store\\loader_file.c",0x49a);
  return 1;
}

// FUN_14f768bc0 @ 14f768bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f768bc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f768bce;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_8 == 0) {
    local_68 = (undefined8 *)param_5;
    iVar3 = PEM_read_bio();
  }
  else {
    local_60 = 3;
    local_68 = (undefined8 *)param_5;
    iVar3 = PEM_read_bio_ex();
  }
  if (0 < iVar3) {
    pcVar2 = (char *)*param_3;
    cVar1 = *pcVar2;
    pcVar5 = pcVar2;
    for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    if ((uVar4 & 0x7fffffff) < 0xb) {
      return 1;
    }
    iVar3 = PEM_get_EVP_CIPHER_INFO(pcVar2,local_40);
    if (iVar3 != 0) {
      local_58 = param_6;
      local_50 = param_7;
      local_48 = "PEM";
      local_68 = &local_58;
      iVar3 = PEM_do_header(local_40,*param_4,param_5,FUN_14f768570);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// ossl_store_file_attach_pem_bio_int @ 14f768cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ossl_store_file_attach_pem_bio_int(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f768cdc;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x50,"crypto\\store\\loader_file.c",0x3eb);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x80,0x41,"crypto\\store\\loader_file.c",0x3ef,uVar2);
    return (undefined4 *)0x0;
  }
  *(undefined8 *)(puVar1 + 4) = param_1;
  *puVar1 = 1;
  return puVar1;
}

// ossl_store_file_detach_pem_bio_int @ 14f768d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_store_file_detach_pem_bio_int(void)

{
  FUN_14f7682e0();
  return 1;
}

// ossl_store_file_loader_init @ 14f768d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ossl_store_file_loader_init(void)

{
  undefined4 uVar1;
  
  uVar1 = ossl_store_register_loader_int(&PTR_s_file_154df9850);
  OPENSSL_atexit(FUN_14f768f20);
  return uVar1;
}

// FUN_14f768db0 @ 14f768db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768db0(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    CRYPTO_secure_clear_free(param_1,param_3,"crypto\\store\\loader_file.c",0x46c);
    return;
  }
  CRYPTO_free(param_1,"crypto\\store\\loader_file.c",0x46e);
  return;
}

// FUN_14f768e00 @ 14f768e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768e00(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f768e20 @ 14f768e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768e20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f768e40 @ 14f768e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768e40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f768e60 @ 14f768e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768e60(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f768e80 @ 14f768e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768e80(void)

{
  OPENSSL_sk_shift();
  return;
}

// FUN_14f768ea0 @ 14f768ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768ea0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f768ec0 @ 14f768ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768ec0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f768ee0 @ 14f768ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768ee0(void)

{
  OPENSSL_sk_shift();
  return;
}

// FUN_14f768f00 @ 14f768f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768f00(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f768f20 @ 14f768f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f768f20(void)

{
  ossl_store_unregister_loader_int(PTR_s_file_154df9850);
  return;
}

