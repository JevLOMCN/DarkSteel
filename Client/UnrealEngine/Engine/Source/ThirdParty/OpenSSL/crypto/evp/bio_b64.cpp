// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f7cea90 @ 14f7cea90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7cea90(undefined8 param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar5 = 0;
  piVar3 = (int *)BIO_get_data();
  lVar4 = BIO_next(param_1);
  if ((piVar3 != (int *)0x0) && (lVar4 != 0)) {
    BIO_clear_flags(param_1,0xf);
    if (piVar3[4] != 1) {
      piVar3[4] = 1;
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      EVP_EncodeInit(*(undefined8 *)(piVar3 + 8));
    }
    if (0x5dd < piVar3[1]) {
      OPENSSL_die("assertion failed: ctx->buf_off < (int)sizeof(ctx->buf)","crypto\\evp\\bio_b64.c",
                  0x15f);
    }
    if (0x5de < *piVar3) {
      OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)","crypto\\evp\\bio_b64.c"
                  ,0x160);
    }
    if (*piVar3 < piVar3[1]) {
      OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x161);
    }
    for (iVar6 = *piVar3 - piVar3[1]; 0 < iVar6; iVar6 = iVar6 - iVar1) {
      iVar1 = BIO_write(lVar4,(longlong)piVar3[1] + 0x28 + (longlong)piVar3,iVar6);
      if (iVar1 < 1) {
        BIO_copy_next_retry(param_1);
        return iVar1;
      }
      if (iVar6 < iVar1) {
        OPENSSL_die("assertion failed: i <= n","crypto\\evp\\bio_b64.c",0x169);
      }
      piVar3[1] = piVar3[1] + iVar1;
      if (0x5de < piVar3[1]) {
        OPENSSL_die("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)",
                    "crypto\\evp\\bio_b64.c",0x16b);
      }
      if (*piVar3 < piVar3[1]) {
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x16c)
        ;
      }
    }
    piVar3[0] = 0;
    piVar3[1] = 0;
    if ((param_2 != (void *)0x0) && (0 < param_3)) {
      do {
        iVar6 = param_3;
        if (0x400 < param_3) {
          iVar6 = 0x400;
        }
        uVar2 = BIO_test_flags(param_1,0xffffffff);
        if ((uVar2 >> 8 & 1) == 0) {
          iVar1 = EVP_EncodeUpdate(*(undefined8 *)(piVar3 + 8),piVar3 + 10,piVar3,param_2,iVar6);
          if (iVar1 == 0) {
            if (iVar5 == 0) {
              return -1;
            }
            return iVar5;
          }
          if (0x5de < *piVar3) {
            OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                        "crypto\\evp\\bio_b64.c",0x1a5);
          }
          if (*piVar3 < piVar3[1]) {
            uVar7 = 0x1a6;
LAB_14f7cedbc:
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                        uVar7);
          }
LAB_14f7cedcf:
          iVar5 = iVar5 + iVar6;
        }
        else {
          if (piVar3[2] < 1) {
            if (iVar6 < 3) {
              memcpy((void *)((longlong)piVar3 + 0x606),param_2,(longlong)iVar6);
              piVar3[2] = iVar6;
              return iVar5 + iVar6;
            }
            iVar6 = (iVar6 / 3 + (iVar6 >> 0x1f) +
                    (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * 3;
            iVar1 = EVP_EncodeBlock(piVar3 + 10,param_2,iVar6);
            *piVar3 = iVar1;
            if (0x5de < iVar1) {
              OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                          "crypto\\evp\\bio_b64.c",0x19c);
            }
            if (*piVar3 < piVar3[1]) {
              uVar7 = 0x19d;
              goto LAB_14f7cedbc;
            }
            goto LAB_14f7cedcf;
          }
          if (3 < piVar3[2]) {
            OPENSSL_die("assertion failed: ctx->tmp_len <= 3","crypto\\evp\\bio_b64.c",0x17b);
          }
          iVar6 = 3 - piVar3[2];
          if (param_3 < 3 - piVar3[2]) {
            iVar6 = param_3;
          }
          memcpy((void *)((longlong)piVar3[2] + 0x606 + (longlong)piVar3),param_2,(longlong)iVar6);
          piVar3[2] = piVar3[2] + iVar6;
          iVar5 = iVar5 + iVar6;
          if (piVar3[2] < 3) {
            return iVar5;
          }
          iVar1 = EVP_EncodeBlock(piVar3 + 10,(longlong)piVar3 + 0x606);
          *piVar3 = iVar1;
          if (0x5de < iVar1) {
            OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                        "crypto\\evp\\bio_b64.c",0x18a);
          }
          if (*piVar3 < piVar3[1]) {
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                        0x18b);
          }
          piVar3[2] = 0;
        }
        param_3 = param_3 - iVar6;
        param_2 = (void *)((longlong)param_2 + (longlong)iVar6);
        piVar3[1] = 0;
        iVar6 = *piVar3;
        while (0 < iVar6) {
          iVar1 = BIO_write(lVar4,(longlong)piVar3[1] + 0x28 + (longlong)piVar3,iVar6);
          if (iVar1 < 1) {
            BIO_copy_next_retry(param_1);
            if (iVar5 == 0) {
              return iVar1;
            }
            return iVar5;
          }
          if (iVar6 < iVar1) {
            OPENSSL_die("assertion failed: i <= n","crypto\\evp\\bio_b64.c",0x1b4);
          }
          piVar3[1] = piVar3[1] + iVar1;
          iVar6 = iVar6 - iVar1;
          if (0x5de < piVar3[1]) {
            OPENSSL_die("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)",
                        "crypto\\evp\\bio_b64.c",0x1b7);
          }
          if (*piVar3 < piVar3[1]) {
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                        0x1b8);
          }
        }
        piVar3[0] = 0;
        piVar3[1] = 0;
        if (param_3 < 1) {
          return iVar5;
        }
      } while( true );
    }
  }
  return 0;
}

// FUN_14f7ceef0 @ 14f7ceef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f7ceef0(undefined8 param_1,void *param_2,uint param_3)

{
  uint *_Src;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  uint local_res20;
  int local_48 [2];
  longlong local_40;
  
  uVar12 = 0;
  uVar3 = 0;
  if (param_2 == (void *)0x0) {
    return 0;
  }
  puVar4 = (uint *)BIO_get_data();
  lVar5 = BIO_next(param_1);
  if ((puVar4 == (uint *)0x0) || (lVar5 == 0)) {
    uVar12 = 0;
  }
  else {
    local_40 = lVar5;
    BIO_clear_flags(param_1,0xf);
    if (puVar4[4] != 2) {
      puVar4[4] = 2;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      EVP_DecodeInit(*(undefined8 *)(puVar4 + 8));
    }
    if (0 < (int)*puVar4) {
      if ((int)*puVar4 < (int)puVar4[1]) {
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x89);
      }
      uVar12 = *puVar4 - puVar4[1];
      if ((int)param_3 < (int)(*puVar4 - puVar4[1])) {
        uVar12 = param_3;
      }
      if (0x5dd < (int)(puVar4[1] + uVar12)) {
        OPENSSL_die("assertion failed: ctx->buf_off + i < (int)sizeof(ctx->buf)",
                    "crypto\\evp\\bio_b64.c",0x8d);
      }
      memcpy(param_2,(void *)((longlong)(int)puVar4[1] + 0x28 + (longlong)puVar4),
             (longlong)(int)uVar12);
      puVar4[1] = puVar4[1] + uVar12;
      param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar12);
      param_3 = param_3 - uVar12;
      if (*puVar4 == puVar4[1]) {
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
    }
    while (0 < (int)param_3) {
      uVar10 = 0;
      if (((int)puVar4[6] < 1) ||
         ((uVar1 = BIO_read(lVar5,(longlong)(int)puVar4[2] + 0x606 + (longlong)puVar4,
                            0x400 - puVar4[2]), uVar8 = uVar1, local_res20 = uVar3, (int)uVar1 < 1
          && ((iVar2 = BIO_test_flags(lVar5,8), uVar3 = uVar1, iVar2 != 0 ||
              (puVar4[6] = uVar1, uVar8 = uVar10, local_res20 = uVar1, puVar4[2] == 0)))))) break;
      puVar4[2] = puVar4[2] + uVar8;
      uVar8 = puVar4[2];
      uVar3 = local_res20;
      if (puVar4[5] == 0) {
LAB_14f7cf256:
        if ((0x3ff < (int)uVar8) || ((int)puVar4[6] < 1)) {
LAB_14f7cf264:
          uVar3 = BIO_test_flags(param_1,0xffffffff);
          _Src = puVar4 + 10;
          if ((uVar3 >> 8 & 1) == 0) {
            uVar10 = EVP_DecodeUpdate(*(undefined8 *)(puVar4 + 8),_Src,puVar4,
                                      (longlong)puVar4 + 0x606,uVar8);
            puVar4[2] = 0;
          }
          else {
            uVar1 = uVar8 & 0xfffffffc;
            uVar3 = EVP_DecodeBlock(_Src,(longlong)puVar4 + 0x606,uVar1);
            uVar10 = uVar3;
            if (((2 < (int)uVar1) &&
                (*(char *)((longlong)(int)(uVar1 - 1) + 0x606 + (longlong)puVar4) == '=')) &&
               (uVar10 = uVar3 - 1,
               *(char *)((longlong)(int)(uVar1 - 2) + 0x606 + (longlong)puVar4) == '=')) {
              uVar10 = uVar3 - 2;
            }
            if (uVar1 != uVar8) {
              memmove((void *)((longlong)puVar4 + 0x606),
                      (void *)((longlong)puVar4 + (longlong)(int)uVar1 + 0x606),
                      (longlong)(int)(uVar8 - uVar1));
              puVar4[2] = uVar8 - uVar1;
            }
            uVar3 = 0;
            if (0 < (int)uVar10) {
              uVar3 = uVar10;
            }
            *puVar4 = uVar3;
          }
          puVar4[6] = uVar10;
          uVar3 = 0;
          puVar4[1] = 0;
          if ((int)uVar10 < 0) {
            *puVar4 = 0;
            break;
          }
          uVar3 = param_3;
          if ((int)*puVar4 <= (int)param_3) {
            uVar3 = *puVar4;
          }
          memcpy(param_2,_Src,(longlong)(int)uVar3);
          uVar12 = uVar12 + uVar3;
          puVar4[1] = uVar3;
          if (uVar3 == *puVar4) {
            puVar4[0] = 0;
            puVar4[1] = 0;
          }
          param_3 = param_3 - uVar3;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar3);
          uVar3 = local_res20;
          lVar5 = local_40;
        }
      }
      else {
        uVar1 = BIO_test_flags(param_1,0xffffffff);
        if ((uVar1 >> 8 & 1) != 0) {
          puVar4[2] = 0;
          goto LAB_14f7cf264;
        }
        if (puVar4[5] == 0) goto LAB_14f7cf256;
        local_48[0] = 0;
        pcVar13 = (char *)((longlong)puVar4 + 0x606);
        pcVar9 = pcVar13;
        pcVar11 = pcVar13;
        pcVar6 = pcVar13;
        uVar1 = 0;
        if (0 < (int)uVar8) {
LAB_14f7cf0f0:
          uVar10 = uVar1;
          pcVar11 = pcVar6 + 1;
          if (*pcVar6 != '\n') goto LAB_14f7cf143;
          if (puVar4[3] != 0) {
            puVar4[3] = 0;
            pcVar9 = pcVar11;
            goto LAB_14f7cf143;
          }
          iVar2 = EVP_DecodeUpdate(*(undefined8 *)(puVar4 + 8),puVar4 + 10,local_48,pcVar9,
                                   (int)pcVar11 - (int)pcVar9);
          if (((iVar2 < 1) && (local_48[0] == 0)) && (puVar4[5] != 0)) {
            EVP_DecodeInit(*(undefined8 *)(puVar4 + 8));
            pcVar9 = pcVar11;
            goto LAB_14f7cf143;
          }
          if (pcVar9 != pcVar13) {
            uVar8 = uVar8 + 0x606 + ((int)puVar4 - (int)pcVar9);
            lVar5 = (longlong)(int)uVar8;
            if (0 < (int)uVar8) {
              pcVar6 = pcVar13;
              do {
                *pcVar6 = pcVar6[(longlong)(pcVar9 + (-0x606 - (longlong)puVar4))];
                pcVar6 = pcVar6 + 1;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
          }
          EVP_DecodeInit(*(undefined8 *)(puVar4 + 8));
          puVar4[5] = 0;
        }
LAB_14f7cf195:
        if ((uVar10 != uVar8) || (local_48[0] != 0)) {
          puVar4[2] = 0;
          goto LAB_14f7cf264;
        }
        lVar5 = local_40;
        if (pcVar9 == pcVar13) {
          if (uVar8 == 0x400) {
            puVar4[3] = 1;
            puVar4[2] = 0;
          }
        }
        else if (pcVar9 != pcVar11) {
          uVar10 = (int)pcVar11 - (int)pcVar9;
          lVar7 = (longlong)(int)uVar10;
          if (0 < (int)uVar10) {
            do {
              *pcVar13 = pcVar13[(longlong)(pcVar9 + (-0x606 - (longlong)puVar4))];
              pcVar13 = pcVar13 + 1;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          puVar4[2] = uVar10;
        }
      }
    }
    BIO_copy_next_retry(param_1);
    if (uVar12 == 0) {
      uVar12 = uVar3;
    }
  }
  return uVar12;
LAB_14f7cf143:
  uVar10 = uVar10 + 1;
  pcVar6 = pcVar11;
  uVar1 = uVar10;
  if ((int)uVar8 <= (int)uVar10) goto LAB_14f7cf195;
  goto LAB_14f7cf0f0;
}

// FUN_14f7cf3a0 @ 14f7cf3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cf3a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_14f7cea90();
  return;
}

// FUN_14f7cf3d0 @ 14f7cf3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7cf3d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = 1;
  piVar2 = (int *)BIO_get_data();
  lVar3 = BIO_next(param_1);
  if ((piVar2 == (int *)0x0) || (lVar3 == 0)) {
    return 0;
  }
  switch(param_2) {
  case 1:
    piVar2[6] = 1;
    piVar2[5] = 1;
    piVar2[4] = 0;
    break;
  case 2:
    if (piVar2[6] < 1) goto switchD_14f7cf450_caseD_c;
    break;
  case 10:
    if (*piVar2 < piVar2[1]) {
      OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x1e3);
    }
    uVar5 = *piVar2 - piVar2[1];
LAB_14f7cf4e9:
    if (0 < (int)uVar5) goto switchD_14f7cf450_caseD_c;
    break;
  case 0xb:
    while( true ) {
      while( true ) {
        if (*piVar2 != piVar2[1]) {
          do {
            uVar4 = FUN_14f7cea90(param_1,0,0);
            if ((int)uVar4 < 0) {
              return uVar4;
            }
          } while (*piVar2 != piVar2[1]);
        }
        uVar5 = BIO_test_flags(param_1,0xffffffff);
        if ((uVar5 >> 8 & 1) != 0) break;
        if ((piVar2[4] == 0) ||
           (iVar1 = EVP_ENCODE_CTX_num(*(undefined8 *)(piVar2 + 8)), iVar1 == 0))
        goto switchD_14f7cf450_caseD_3;
        piVar2[1] = 0;
        EVP_EncodeFinal(*(undefined8 *)(piVar2 + 8));
      }
      if (piVar2[2] == 0) break;
      iVar1 = EVP_EncodeBlock(piVar2 + 10);
      *piVar2 = iVar1;
      piVar2[1] = 0;
      piVar2[2] = 0;
    }
    break;
  case 0xc:
    goto switchD_14f7cf450_caseD_c;
  case 0xd:
    if (*piVar2 < piVar2[1]) {
      OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x1da);
    }
    uVar5 = *piVar2 - piVar2[1];
    if (uVar5 != 0) goto LAB_14f7cf4e9;
    if ((piVar2[4] != 0) && (iVar1 = EVP_ENCODE_CTX_num(*(undefined8 *)(piVar2 + 8)), iVar1 != 0)) {
      return 1;
    }
    break;
  case 0x65:
    BIO_clear_flags(param_1,0xf);
    uVar5 = BIO_ctrl(lVar3,param_2,param_3,param_4);
    BIO_copy_next_retry(param_1);
    return (ulonglong)uVar5;
  }
switchD_14f7cf450_caseD_3:
  uVar5 = BIO_ctrl(lVar3,param_2,param_3,param_4);
switchD_14f7cf450_caseD_c:
  return (ulonglong)uVar5;
}

// FUN_14f7cf660 @ 14f7cf660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7cf660(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7cf670;
  lVar1 = CRYPTO_zalloc(0xa08,"crypto\\evp\\bio_b64.c",0x49);
  if (lVar1 == 0) {
    ERR_put_error(6,0xc6,0x41,"crypto\\evp\\bio_b64.c",0x4a,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x14) = 1;
  lVar2 = EVP_ENCODE_CTX_new();
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(lVar1,"crypto\\evp\\bio_b64.c",0x52);
    return 0;
  }
  BIO_set_data(param_1,lVar1);
  BIO_set_init(param_1,1);
  return 1;
}

// FUN_14f7cf730 @ 14f7cf730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7cf730(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = BIO_get_data();
  if (lVar1 == 0) {
    return 0;
  }
  EVP_ENCODE_CTX_free(*(undefined8 *)(lVar1 + 0x20));
  CRYPTO_free(lVar1,"crypto\\evp\\bio_b64.c",0x67);
  BIO_set_data(param_1,0);
  BIO_set_init(param_1,0);
  return 1;
}

// FUN_14f7cf7c0 @ 14f7cf7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cf7c0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_callback_ctrl(lVar1,param_2,param_3);
  return;
}

// BIO_f_base64 @ 14f7cf810

undefined * BIO_f_base64(void)

{
  return &DAT_1534f1e70;
}

