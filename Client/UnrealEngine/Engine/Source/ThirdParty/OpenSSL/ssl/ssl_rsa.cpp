// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 38

// FUN_14f6a0660 @ 14f6a0660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a0660(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (1 < (ulonglong)param_1[1]) {
    uVar3 = param_1[1] - 2;
    uVar2 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uVar2 <= uVar3) {
      *param_1 = puVar1 + 2 + uVar2;
      param_1[1] = uVar3 - uVar2;
      *param_2 = puVar1 + 2;
      param_2[1] = uVar2;
      return 1;
    }
  }
  return 0;
}

// SSL_CTX_use_PrivateKey @ 14f6a0860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_use_PrivateKey(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    ERR_put_error(0x14,0xae,0x43,"ssl\\ssl_rsa.c",0x1f6);
    return 0;
  }
  uVar1 = FUN_14f6a29a0(*(undefined8 *)(param_1 + 0x138));
  return uVar1;
}

// SSL_CTX_use_PrivateKey_ASN1 @ 14f6a08b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_PrivateKey_ASN1(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x14f6a08c0;
  local_res18[0] = param_3;
  lVar2 = d2i_PrivateKey(param_1,0,local_res18);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xaf,0xd,"ssl\\ssl_rsa.c",0x22c,uVar3);
    return 0;
  }
  uVar1 = FUN_14f6a29a0(*(undefined8 *)(param_2 + 0x138),lVar2);
  EVP_PKEY_free(lVar2);
  return uVar1;
}

// SSL_CTX_use_PrivateKey_file @ 14f6a0940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_PrivateKey_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6a0960;
  uVar2 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    uVar7 = 0x204;
    uVar6 = 7;
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0x209;
      uVar6 = 2;
    }
    else {
      if (param_3 == 1) {
        uVar6 = 9;
        lVar5 = PEM_read_bio_PrivateKey
                          (lVar4,0,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
      }
      else {
        if (param_3 != 2) {
          uVar7 = 0x215;
          uVar6 = 0x7c;
          goto LAB_14f6a0a2c;
        }
        uVar6 = 0xd;
        lVar5 = d2i_PrivateKey_bio(lVar4,0);
      }
      if (lVar5 != 0) {
        uVar2 = SSL_CTX_use_PrivateKey(param_1,lVar5);
        EVP_PKEY_free(lVar5);
        goto LAB_14f6a0a42;
      }
      uVar7 = 0x219;
    }
  }
LAB_14f6a0a2c:
  ERR_put_error(0x14,0xb0,uVar6,"ssl\\ssl_rsa.c",uVar7,uVar8);
LAB_14f6a0a42:
  BIO_free(lVar4);
  return uVar2;
}

// SSL_CTX_use_RSAPrivateKey @ 14f6a0a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_RSAPrivateKey(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6a0a80;
  if (param_2 == 0) {
    ERR_put_error(0x14,0xb1,0x43,"ssl\\ssl_rsa.c",0x1a5,0x14f6a0a80);
    return 0;
  }
  lVar3 = EVP_PKEY_new();
  if (lVar3 == 0) {
    ERR_put_error(0x14,0xb1,6,"ssl\\ssl_rsa.c",0x1a9,uVar4);
    return 0;
  }
  RSA_up_ref(param_2);
  iVar1 = EVP_PKEY_assign(lVar3,6,param_2);
  if (iVar1 < 1) {
    RSA_free(param_2);
    EVP_PKEY_free(lVar3);
    return 0;
  }
  uVar2 = FUN_14f6a29a0(*(undefined8 *)(param_1 + 0x138),lVar3);
  EVP_PKEY_free(lVar3);
  return uVar2;
}

// SSL_CTX_use_RSAPrivateKey_ASN1 @ 14f6a0b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_RSAPrivateKey_ASN1(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined8 uVar3;
  
  uVar3 = 0x14f6a0b80;
  local_res10[0] = param_2;
  lVar2 = d2i_RSAPrivateKey(0,local_res10);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xb2,0xd,"ssl\\ssl_rsa.c",0x1e9,uVar3);
    return 0;
  }
  uVar1 = SSL_CTX_use_RSAPrivateKey(param_1,lVar2);
  RSA_free(lVar2);
  return uVar1;
}

// SSL_CTX_use_RSAPrivateKey_file @ 14f6a0c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_RSAPrivateKey_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6a0c20;
  uVar2 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    uVar7 = 0x1c1;
    uVar6 = 7;
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0x1c6;
      uVar6 = 2;
    }
    else {
      if (param_3 == 2) {
        uVar6 = 0xd;
        lVar5 = d2i_RSAPrivateKey_bio(lVar4,0);
      }
      else {
        if (param_3 != 1) {
          uVar7 = 0x1d2;
          uVar6 = 0x7c;
          goto LAB_14f6a0cec;
        }
        uVar6 = 9;
        lVar5 = PEM_read_bio_RSAPrivateKey
                          (lVar4,0,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
      }
      if (lVar5 != 0) {
        uVar2 = SSL_CTX_use_RSAPrivateKey(param_1,lVar5);
        RSA_free(lVar5);
        goto LAB_14f6a0d02;
      }
      uVar7 = 0x1d6;
    }
  }
LAB_14f6a0cec:
  ERR_put_error(0x14,0xb3,uVar6,"ssl\\ssl_rsa.c",uVar7,uVar8);
LAB_14f6a0d02:
  BIO_free(lVar4);
  return uVar2;
}

// SSL_CTX_use_cert_and_key @ 14f6a0d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_use_cert_and_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  FUN_14f6a2630(0,param_1,param_2,param_3,param_4,param_5,0x14f6a0d3a);
  return;
}

// SSL_CTX_use_certificate @ 14f6a0d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_use_certificate(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    ERR_put_error(0x14,0xab,0x43,"ssl\\ssl_rsa.c",0x128);
    return 0;
  }
  iVar1 = ssl_security_cert(0,param_1,param_2,0,1,0x14f6a0d80);
  if (iVar1 != 1) {
    ERR_put_error(0x14,0xab,iVar1,"ssl\\ssl_rsa.c",0x12d);
    return 0;
  }
  uVar2 = FUN_14f6a2480(*(undefined8 *)(param_1 + 0x138),param_2);
  return uVar2;
}

// SSL_CTX_use_certificate_ASN1 @ 14f6a0e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_certificate_ASN1(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x14f6a0e45;
  local_res18[0] = param_3;
  lVar2 = d2i_X509(0,local_res18,param_2);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xac,0xd,"ssl\\ssl_rsa.c",0x195,uVar3);
    return 0;
  }
  uVar1 = SSL_CTX_use_certificate(param_1,lVar2);
  X509_free(lVar2);
  return uVar1;
}

// SSL_CTX_use_certificate_chain_file @ 14f6a0ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_use_certificate_chain_file(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6a2b00(param_1,0,param_2);
  return;
}

// SSL_CTX_use_certificate_file @ 14f6a0ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_CTX_use_certificate_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f6a0f0e;
  uVar7 = 0;
  uVar5 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    uVar8 = 0x16e;
    uVar6 = 7;
    uVar5 = uVar7;
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar8 = 0x173;
      uVar6 = 2;
    }
    else {
      if (param_3 == 2) {
        uVar6 = 0xd;
        uVar5 = d2i_X509_bio(lVar4,0);
      }
      else {
        if (param_3 != 1) {
          uVar8 = 0x17e;
          uVar6 = 0x7c;
          goto LAB_14f6a0fd9;
        }
        uVar6 = 9;
        uVar5 = PEM_read_bio_X509(lVar4,0,*(undefined8 *)(param_1 + 0xa8),
                                  *(undefined8 *)(param_1 + 0xb0));
      }
      if (uVar5 != 0) {
        uVar2 = SSL_CTX_use_certificate(param_1,uVar5);
        uVar7 = (ulonglong)uVar2;
        goto LAB_14f6a0fef;
      }
      uVar8 = 0x183;
    }
  }
LAB_14f6a0fd9:
  ERR_put_error(0x14,0xad,uVar6,"ssl\\ssl_rsa.c",uVar8,uVar9);
LAB_14f6a0fef:
  X509_free(uVar5);
  BIO_free(lVar4);
  return uVar7;
}

// SSL_CTX_use_serverinfo @ 14f6a1030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_use_serverinfo(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  SSL_CTX_use_serverinfo_ex(param_1,1,param_2,param_3);
  return;
}

// SSL_CTX_use_serverinfo_ex @ 14f6a1060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_serverinfo_ex(longlong param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6a107a;
  if (((param_1 == 0) || (param_3 == (void *)0x0)) || (param_4 == 0)) {
    uVar5 = 0x36c;
    uVar4 = 0x43;
  }
  else if (param_2 == 1) {
    puVar2 = (undefined4 *)CRYPTO_malloc(param_4 + 4,"ssl\\ssl_rsa.c",0x379);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0xd0010000;
      memcpy(puVar2 + 1,param_3,param_4);
      uVar4 = SSL_CTX_use_serverinfo_ex(param_1,2,puVar2,param_4 + 4);
      CRYPTO_free(puVar2,"ssl\\ssl_rsa.c",900);
      return uVar4;
    }
    uVar5 = 0x37b;
    uVar4 = 0x41;
  }
  else {
    iVar1 = FUN_14f6a2090(param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      uVar5 = 0x389;
      uVar4 = 0x184;
    }
    else if (**(longlong **)(param_1 + 0x138) == 0) {
      uVar5 = 0x38d;
      uVar4 = 0x44;
    }
    else {
      lVar3 = CRYPTO_realloc(*(undefined8 *)(**(longlong **)(param_1 + 0x138) + 0x18),param_4,
                             "ssl\\ssl_rsa.c",0x391);
      if (lVar3 == 0) {
        uVar5 = 0x393;
        uVar4 = 0x41;
      }
      else {
        *(longlong *)(**(longlong **)(param_1 + 0x138) + 0x18) = lVar3;
        memcpy(*(void **)(**(longlong **)(param_1 + 0x138) + 0x18),param_3,param_4);
        *(size_t *)(**(longlong **)(param_1 + 0x138) + 0x20) = param_4;
        iVar1 = FUN_14f6a2090(param_2,param_3,param_4,param_1);
        if (iVar1 != 0) {
          return 1;
        }
        uVar5 = 0x3a0;
        uVar4 = 0x184;
      }
    }
  }
  ERR_put_error(0x14,0x21f,uVar4,"ssl\\ssl_rsa.c",uVar5,uVar6);
  return 0;
}

// SSL_CTX_use_serverinfo_file @ 14f6a1240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong SSL_CTX_use_serverinfo_file(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_a8 [2];
  void *local_a0;
  char *local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  char local_70;
  char acStack_6f [7];
  char acStack_68 [4];
  char acStack_64 [4];
  char local_60 [8];
  char local_58;
  char acStack_57 [7];
  char acStack_50 [4];
  char acStack_4c [4];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f6a125f;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_60._0_2_ = s_SERVERINFOV2_FOR_._16_2_;
  uVar11 = 0;
  local_88 = 0;
  local_a0 = (void *)0x0;
  lVar13 = 0;
  local_a8[0] = 0;
  local_98 = (char *)0x0;
  local_90 = 0;
  _local_58 = s_SERVERINFO_FOR_._0_4_;
  acStack_57._3_4_ = s_SERVERINFO_FOR_._4_4_;
  acStack_50 = (char  [4])s_SERVERINFO_FOR_._8_4_;
  acStack_4c = (char  [4])s_SERVERINFO_FOR_._12_4_;
  _local_70 = s_SERVERINFOV2_FOR_._0_4_;
  acStack_6f._3_4_ = s_SERVERINFOV2_FOR_._4_4_;
  acStack_68 = (char  [4])s_SERVERINFOV2_FOR_._8_4_;
  acStack_64 = (char  [4])s_SERVERINFOV2_FOR_._12_4_;
  local_78 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3bd);
    uVar5 = 0x43;
  }
  else {
    uVar5 = BIO_s_file();
    lVar13 = BIO_new(uVar5);
    if (lVar13 == 0) {
      local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3c3);
      uVar5 = 7;
    }
    else {
      iVar2 = BIO_ctrl(lVar13,0x6c,3,param_2);
      if (iVar2 < 1) {
        local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3c7);
        uVar5 = 2;
      }
      else {
        local_b8 = local_a8;
        local_80 = 0;
        iVar2 = PEM_read_bio(lVar13,&local_98,&local_90,&local_a0);
        uVar12 = uVar11;
        if (iVar2 != 0) {
          do {
            uVar4 = 0;
            cVar1 = *local_98;
            uVar14 = uVar11;
            uVar8 = uVar4;
            pcVar6 = local_98;
            while ((cVar1 != '\0' && (uVar8 = (uint)uVar14, uVar8 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar8 = uVar8 + 1;
              cVar1 = *pcVar6;
              uVar14 = (ulonglong)uVar8;
            }
            pcVar6 = &local_58;
            uVar14 = uVar11;
            uVar3 = uVar4;
            cVar1 = local_58;
            while ((cVar1 != '\0' && (uVar3 = (uint)uVar14, uVar3 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar3 = uVar3 + 1;
              cVar1 = *pcVar6;
              uVar14 = (ulonglong)uVar3;
            }
            if ((uVar8 & 0x7fffffff) < (uVar3 & 0x7fffffff)) {
              local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3dd);
              uVar5 = 0x188;
              goto LAB_14f6a1637;
            }
            pcVar6 = &local_58;
            uVar14 = uVar11;
            uVar8 = uVar4;
            cVar1 = local_58;
            while ((cVar1 != '\0' && (uVar8 = (uint)uVar14, uVar8 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar8 = uVar8 + 1;
              cVar1 = *pcVar6;
              uVar14 = (ulonglong)uVar8;
            }
            iVar2 = strncmp(local_98,&local_58,(ulonglong)(uVar8 & 0x7fffffff));
            if (iVar2 == 0) {
              iVar9 = 1;
              iVar2 = 1;
              if ((local_a8[0] < 4) ||
                 ((uint)*(byte *)((longlong)local_a0 + 2) * 0x100 +
                  (uint)*(byte *)((longlong)local_a0 + 3) != local_a8[0] + -4)) {
                local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3f7);
                uVar5 = 0x186;
                goto LAB_14f6a1637;
              }
            }
            else {
              cVar1 = *local_98;
              uVar14 = uVar11;
              uVar8 = uVar4;
              pcVar6 = local_98;
              while ((cVar1 != '\0' && (uVar8 = (uint)uVar14, uVar8 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar8 = uVar8 + 1;
                cVar1 = *pcVar6;
                uVar14 = (ulonglong)uVar8;
              }
              pcVar6 = &local_70;
              uVar14 = uVar11;
              uVar3 = uVar4;
              cVar1 = local_70;
              while ((cVar1 != '\0' && (uVar3 = (uint)uVar14, uVar3 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar3 = uVar3 + 1;
                cVar1 = *pcVar6;
                uVar14 = (ulonglong)uVar3;
              }
              if ((uVar8 & 0x7fffffff) < (uVar3 & 0x7fffffff)) {
                local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3e5);
                uVar5 = 0x188;
                goto LAB_14f6a1637;
              }
              pcVar6 = &local_70;
              uVar14 = uVar11;
              cVar1 = local_70;
              while ((cVar1 != '\0' && (uVar4 = (uint)uVar14, uVar4 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar4 = uVar4 + 1;
                cVar1 = *pcVar6;
                uVar14 = (ulonglong)uVar4;
              }
              iVar2 = strncmp(local_98,&local_70,(ulonglong)(uVar4 & 0x7fffffff));
              if (iVar2 != 0) {
                local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3ea);
                uVar5 = 0x187;
                goto LAB_14f6a1637;
              }
              iVar9 = 2;
              iVar2 = 2;
              if ((local_a8[0] < 8) ||
                 ((uint)*(byte *)((longlong)local_a0 + 6) * 0x100 +
                  (uint)*(byte *)((longlong)local_a0 + 7) != local_a8[0] + -8)) {
                local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3ff);
                uVar5 = 0x186;
                goto LAB_14f6a1637;
              }
            }
            uVar14 = uVar11;
            if (iVar2 == 1) {
              uVar14 = 4;
            }
            uVar15 = (longlong)local_a8[0] + uVar14 + uVar12;
            lVar7 = CRYPTO_realloc(local_88,uVar15,"ssl\\ssl_rsa.c",0x405);
            if (lVar7 == 0) {
              local_b8 = (int *)CONCAT44(local_b8._4_4_,0x407);
              uVar5 = 0x41;
              goto LAB_14f6a1637;
            }
            if (iVar9 == 1) {
              *(undefined4 *)(lVar7 + uVar12) = 0xd0010000;
            }
            local_88 = lVar7;
            memcpy((void *)(uVar14 + (longlong)(lVar7 + uVar12)),local_a0,(longlong)local_a8[0]);
            CRYPTO_free(local_98,"ssl\\ssl_rsa.c",0x40f);
            local_98 = (char *)0x0;
            CRYPTO_free(local_90,"ssl\\ssl_rsa.c",0x411);
            local_90 = 0;
            CRYPTO_free(local_a0,"ssl\\ssl_rsa.c",0x413);
            local_b8 = local_a8;
            lVar10 = local_80 + 1;
            local_a0 = (void *)0x0;
            local_80 = lVar10;
            iVar2 = PEM_read_bio(lVar13,&local_98,&local_90,&local_a0);
            uVar12 = uVar15;
          } while (iVar2 != 0);
          if (lVar10 != 0) {
            uVar8 = SSL_CTX_use_serverinfo_ex(local_78,2,lVar7,uVar15);
            uVar11 = (ulonglong)uVar8;
            goto LAB_14f6a164d;
          }
        }
        local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3d6);
        uVar5 = 0x185;
      }
    }
  }
LAB_14f6a1637:
  ERR_put_error(0x14,0x151,uVar5,"ssl\\ssl_rsa.c");
LAB_14f6a164d:
  CRYPTO_free(local_98,"ssl\\ssl_rsa.c",0x41b);
  CRYPTO_free(local_90,"ssl\\ssl_rsa.c",0x41c);
  CRYPTO_free(local_a0,"ssl\\ssl_rsa.c",0x41d);
  CRYPTO_free(local_88,"ssl\\ssl_rsa.c",0x41e);
  BIO_free(lVar13);
  return uVar11;
}

// SSL_use_PrivateKey @ 14f6a16e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_use_PrivateKey(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    ERR_put_error(0x14,0xc9,0x43,"ssl\\ssl_rsa.c",0xe4);
    return 0;
  }
  uVar1 = FUN_14f6a29a0(*(undefined8 *)(param_1 + 0x488));
  return uVar1;
}

// SSL_use_PrivateKey_ASN1 @ 14f6a1730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_use_PrivateKey_ASN1(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x14f6a1740;
  local_res18[0] = param_3;
  lVar2 = d2i_PrivateKey(param_1,0,local_res18);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xca,0xd,"ssl\\ssl_rsa.c",0x11b,uVar3);
    return 0;
  }
  uVar1 = FUN_14f6a29a0(*(undefined8 *)(param_2 + 0x488),lVar2);
  EVP_PKEY_free(lVar2);
  return uVar1;
}

// SSL_use_PrivateKey_file @ 14f6a17c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_use_PrivateKey_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6a17e0;
  uVar2 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    uVar7 = 0xf3;
    uVar6 = 7;
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0xf8;
      uVar6 = 2;
    }
    else {
      if (param_3 == 1) {
        uVar6 = 9;
        lVar5 = PEM_read_bio_PrivateKey
                          (lVar4,0,*(undefined8 *)(param_1 + 0x16e8),
                           *(undefined8 *)(param_1 + 0x16f0));
      }
      else {
        if (param_3 != 2) {
          uVar7 = 0x104;
          uVar6 = 0x7c;
          goto LAB_14f6a18ac;
        }
        uVar6 = 0xd;
        lVar5 = d2i_PrivateKey_bio(lVar4,0);
      }
      if (lVar5 != 0) {
        uVar2 = SSL_use_PrivateKey(param_1,lVar5);
        EVP_PKEY_free(lVar5);
        goto LAB_14f6a18c2;
      }
      uVar7 = 0x108;
    }
  }
LAB_14f6a18ac:
  ERR_put_error(0x14,0xcb,uVar6,"ssl\\ssl_rsa.c",uVar7,uVar8);
LAB_14f6a18c2:
  BIO_free(lVar4);
  return uVar2;
}

// SSL_use_RSAPrivateKey @ 14f6a18f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_use_RSAPrivateKey(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6a1900;
  if (param_2 == 0) {
    ERR_put_error(0x14,0xcc,0x43,"ssl\\ssl_rsa.c",0x6b,0x14f6a1900);
    return 0;
  }
  lVar3 = EVP_PKEY_new();
  if (lVar3 == 0) {
    ERR_put_error(0x14,0xcc,6,"ssl\\ssl_rsa.c",0x6f,uVar4);
    return 0;
  }
  RSA_up_ref(param_2);
  iVar1 = EVP_PKEY_assign(lVar3,6,param_2);
  if (iVar1 < 1) {
    RSA_free(param_2);
    EVP_PKEY_free(lVar3);
    return 0;
  }
  uVar2 = FUN_14f6a29a0(*(undefined8 *)(param_1 + 0x488),lVar3);
  EVP_PKEY_free(lVar3);
  return uVar2;
}

// SSL_use_RSAPrivateKey_ASN1 @ 14f6a19f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_use_RSAPrivateKey_ASN1(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined8 uVar3;
  
  uVar3 = 0x14f6a1a00;
  local_res10[0] = param_2;
  lVar2 = d2i_RSAPrivateKey(0,local_res10);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xcd,0xd,"ssl\\ssl_rsa.c",0xd5,uVar3);
    return 0;
  }
  uVar1 = SSL_use_RSAPrivateKey(param_1,lVar2);
  RSA_free(lVar2);
  return uVar1;
}

// SSL_use_RSAPrivateKey_file @ 14f6a1a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_use_RSAPrivateKey_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6a1aa0;
  uVar2 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    uVar7 = 0xae;
    uVar6 = 7;
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0xb3;
      uVar6 = 2;
    }
    else {
      if (param_3 == 2) {
        uVar6 = 0xd;
        lVar5 = d2i_RSAPrivateKey_bio(lVar4,0);
      }
      else {
        if (param_3 != 1) {
          uVar7 = 0xbf;
          uVar6 = 0x7c;
          goto LAB_14f6a1b6c;
        }
        uVar6 = 9;
        lVar5 = PEM_read_bio_RSAPrivateKey
                          (lVar4,0,*(undefined8 *)(param_1 + 0x16e8),
                           *(undefined8 *)(param_1 + 0x16f0));
      }
      if (lVar5 != 0) {
        uVar2 = SSL_use_RSAPrivateKey(param_1,lVar5);
        RSA_free(lVar5);
        goto LAB_14f6a1b82;
      }
      uVar7 = 0xc3;
    }
  }
LAB_14f6a1b6c:
  ERR_put_error(0x14,0xce,uVar6,"ssl\\ssl_rsa.c",uVar7,uVar8);
LAB_14f6a1b82:
  BIO_free(lVar4);
  return uVar2;
}

// SSL_use_cert_and_key @ 14f6a1bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_use_cert_and_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  FUN_14f6a2630(param_1,0,param_2,param_3,param_4,param_5,0x14f6a1bba);
  return;
}

// SSL_use_certificate @ 14f6a1bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_use_certificate(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    ERR_put_error(0x14,0xc6,0x43,"ssl\\ssl_rsa.c",0x1f);
    return 0;
  }
  iVar1 = ssl_security_cert(param_1,0,param_2,0,1,0x14f6a1c00);
  if (iVar1 != 1) {
    ERR_put_error(0x14,0xc6,iVar1,"ssl\\ssl_rsa.c",0x24);
    return 0;
  }
  uVar2 = FUN_14f6a2480(*(undefined8 *)(param_1 + 0x488),param_2);
  return uVar2;
}

// SSL_use_certificate_ASN1 @ 14f6a1cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_use_certificate_ASN1(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined8 uVar3;
  
  uVar3 = 0x14f6a1cc5;
  local_res10[0] = param_2;
  lVar2 = d2i_X509(0,local_res10);
  if (lVar2 == 0) {
    ERR_put_error(0x14,199,0xd,"ssl\\ssl_rsa.c",0x5b,uVar3);
    return 0;
  }
  uVar1 = SSL_use_certificate(param_1,lVar2);
  X509_free(lVar2);
  return uVar1;
}

// SSL_use_certificate_chain_file @ 14f6a1d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_use_certificate_chain_file(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6a2b00(0,param_1,param_2);
  return;
}

// SSL_use_certificate_file @ 14f6a1d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_use_certificate_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f6a1d8e;
  uVar7 = 0;
  uVar5 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    uVar8 = 0x34;
    uVar6 = 7;
    uVar5 = uVar7;
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar8 = 0x39;
      uVar6 = 2;
    }
    else {
      if (param_3 == 2) {
        uVar6 = 0xd;
        uVar5 = d2i_X509_bio(lVar4,0);
      }
      else {
        if (param_3 != 1) {
          uVar8 = 0x44;
          uVar6 = 0x7c;
          goto LAB_14f6a1e59;
        }
        uVar6 = 9;
        uVar5 = PEM_read_bio_X509(lVar4,0,*(undefined8 *)(param_1 + 0x16e8),
                                  *(undefined8 *)(param_1 + 0x16f0));
      }
      if (uVar5 != 0) {
        uVar2 = SSL_use_certificate(param_1,uVar5);
        uVar7 = (ulonglong)uVar2;
        goto LAB_14f6a1e6f;
      }
      uVar8 = 0x49;
    }
  }
LAB_14f6a1e59:
  ERR_put_error(0x14,200,uVar6,"ssl\\ssl_rsa.c",uVar8,uVar9);
LAB_14f6a1e6f:
  X509_free(uVar5);
  BIO_free(lVar4);
  return uVar7;
}

// FUN_14f6a1ee0 @ 14f6a1ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a1ee0(int param_1,void *param_2,size_t param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 == 1) {
    lVar1 = 4;
    *param_4 = 0xd0010000;
  }
  memcpy((void *)(lVar1 + (longlong)param_4),param_2,param_3);
  return;
}

// FUN_14f6a1f70 @ 14f6a1f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6a1f70(longlong param_1,ulonglong param_2,uint param_3,longlong *param_4,ulonglong *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_4 = 0;
  *param_5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_2 < 0x8000000000000000)) {
    while ((3 < param_2 && (1 < param_2 - 4))) {
      puVar1 = (undefined1 *)(param_1 + 4);
      puVar2 = (undefined1 *)(param_1 + 5);
      if (param_2 - 6 < 2) {
        return 0xffffffff;
      }
      lVar4 = param_1 + 8;
      uVar3 = (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7));
      if (param_2 - 8 < uVar3) {
        return 0xffffffff;
      }
      param_2 = (param_2 - 8) - uVar3;
      param_1 = lVar4 + uVar3;
      if (CONCAT11(*puVar1,*puVar2) == param_3) {
        *param_4 = lVar4;
        *param_5 = uVar3;
        return 1;
      }
      if (param_2 == 0) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}

// FUN_14f6a2090 @ 14f6a2090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a2090(int param_1,undefined1 *param_2,ulonglong param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  if ((((param_2 == (undefined1 *)0x0) || (param_3 == 0)) || (1 < param_1 - 1U)) ||
     (0x7fffffffffffffff < param_3)) {
    return 0;
  }
  while( true ) {
    iVar6 = 0;
    if (param_1 == 2) {
      if (param_3 < 4) {
        return 0;
      }
      puVar1 = param_2 + 1;
      uVar4 = *param_2;
      puVar2 = param_2 + 2;
      puVar3 = param_2 + 3;
      param_2 = param_2 + 4;
      iVar6 = CONCAT31(CONCAT21(CONCAT11(uVar4,*puVar1),*puVar2),*puVar3);
      param_3 = param_3 - 4;
    }
    if (param_3 < 2) {
      return 0;
    }
    uVar4 = *param_2;
    puVar1 = param_2 + 1;
    if (param_3 - 2 < 2) {
      return 0;
    }
    uVar5 = (ulonglong)CONCAT11(param_2[2],param_2[3]);
    if (param_3 - 4 < uVar5) break;
    param_2 = param_2 + uVar5 + 4;
    param_3 = (param_3 - 4) - uVar5;
    if (param_4 != 0) {
      if ((param_1 == 1) || (iVar6 == 0x1d0)) {
        iVar6 = SSL_CTX_add_server_custom_ext
                          (param_4,CONCAT11(uVar4,*puVar1),FUN_14f6a2260,0,0,&LAB_14f6a2300,0);
      }
      else {
        iVar6 = SSL_CTX_add_custom_ext
                          (param_4,CONCAT11(uVar4,*puVar1),iVar6,FUN_14f6a2320,0,0,&LAB_14f6a23f0,0)
        ;
      }
      if (iVar6 == 0) {
        return 0;
      }
    }
    if (param_3 == 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f6a2260 @ 14f6a2260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6a2260(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar2 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar1 = ssl_get_server_cert_serverinfo(param_1,&local_10,&local_18);
  if (iVar1 != 0) {
    iVar1 = FUN_14f6a1f70(local_10,local_18,param_2,param_3,param_4);
    if (iVar1 == -1) {
      *param_5 = 0x50;
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (ulonglong)(iVar1 != 0);
    }
  }
  return uVar2;
}

// FUN_14f6a2320 @ 14f6a2320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6a2320(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,longlong param_7,undefined4 *param_8)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (((param_3 >> 0xc & 1) == 0) || (param_7 == 0)) {
    iVar1 = ssl_get_server_cert_serverinfo(param_1,&local_10,&local_18);
    if (iVar1 != 0) {
      iVar1 = FUN_14f6a1f70(local_10,local_18,param_2,param_4,param_5);
      if (iVar1 == -1) {
        *param_8 = 0x50;
        return 0xffffffff;
      }
      return (ulonglong)(iVar1 != 0);
    }
  }
  return 0;
}

// FUN_14f6a2420 @ 14f6a2420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a2420(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6a2440 @ 14f6a2440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a2440(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6a2460 @ 14f6a2460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a2460(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6a2480 @ 14f6a2480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a2480(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0x14f6a2495;
  lVar2 = X509_get0_pubkey(param_2);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xbf,0x10c,"ssl\\ssl_rsa.c",0x13a,uVar5);
    return 0;
  }
  lVar3 = ssl_cert_lookup_by_pkey(lVar2,local_res18);
  if (lVar3 == 0) {
    ERR_put_error(0x14,0xbf,0xf7,"ssl\\ssl_rsa.c",0x13f,uVar5);
    return 0;
  }
  if (local_res18[0] == 3) {
    uVar4 = EVP_PKEY_get0_EC_KEY(lVar2);
    iVar1 = EC_KEY_can_sign(uVar4);
    if (iVar1 == 0) {
      ERR_put_error(0x14,0xbf,0x13e,"ssl\\ssl_rsa.c",0x144,uVar5);
      return 0;
    }
  }
  if (param_1[local_res18[0] * 5 + 5] != 0) {
    EVP_PKEY_copy_parameters(lVar2);
    ERR_clear_error();
    iVar1 = X509_check_private_key(param_2,param_1[local_res18[0] * 5 + 5]);
    if (iVar1 == 0) {
      EVP_PKEY_free(param_1[local_res18[0] * 5 + 5]);
      param_1[local_res18[0] * 5 + 5] = 0;
      ERR_clear_error();
    }
  }
  X509_free(param_1[local_res18[0] * 5 + 4]);
  X509_up_ref(param_2);
  param_1[local_res18[0] * 5 + 4] = param_2;
  *param_1 = (longlong)(param_1 + local_res18[0] * 5 + 4);
  return 1;
}

// FUN_14f6a2630 @ 14f6a2630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6a2630(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                       longlong param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong local_res8;
  longlong local_48;
  ulonglong uVar10;
  
  uVar10 = 0;
  uVar9 = 0;
  if (param_1 == 0) {
    plVar8 = *(longlong **)(param_2 + 0x138);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x488);
  }
  local_48 = 0;
  uVar7 = 0;
  iVar1 = ssl_security_cert();
  if (iVar1 != 1) {
    ERR_put_error(0x14,0x26d,iVar1,"ssl\\ssl_rsa.c",0x431);
    uVar7 = uVar10;
    goto LAB_14f6a2977;
  }
  iVar1 = OPENSSL_sk_num(param_5);
  uVar4 = uVar10;
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_5,uVar4);
      iVar1 = ssl_security_cert(param_1,param_2,uVar2,0,0);
      if (iVar1 != 1) {
        ERR_put_error(0x14,0x26d,iVar1,"ssl\\ssl_rsa.c",0x437);
        uVar10 = uVar9;
        goto LAB_14f6a2977;
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
      iVar1 = OPENSSL_sk_num(param_5);
    } while ((int)uVar6 < iVar1);
  }
  uVar7 = X509_get_pubkey(param_3);
  if (uVar7 == 0) goto LAB_14f6a2977;
  uVar4 = uVar7;
  if (param_4 != 0) {
    iVar1 = EVP_PKEY_missing_parameters(param_4);
    if (iVar1 == 0) {
      iVar1 = EVP_PKEY_missing_parameters(uVar7);
      uVar5 = param_4;
      if (iVar1 != 0) goto LAB_14f6a27e9;
    }
    else {
      iVar1 = EVP_PKEY_missing_parameters(uVar7);
      uVar4 = param_4;
      uVar5 = uVar7;
      if (iVar1 != 0) {
        ERR_put_error(0x14,0x26d,0x122,"ssl\\ssl_rsa.c",0x446);
        uVar10 = uVar9;
        goto LAB_14f6a2977;
      }
LAB_14f6a27e9:
      EVP_PKEY_copy_parameters(uVar4,uVar5);
    }
    iVar1 = EVP_PKEY_cmp(uVar7,param_4);
    uVar4 = param_4;
    if (iVar1 != 1) {
      ERR_put_error(0x14,0x26d,0x120,"ssl\\ssl_rsa.c",0x453);
      uVar10 = uVar9;
      goto LAB_14f6a2977;
    }
  }
  lVar3 = ssl_cert_lookup_by_pkey(uVar7,&local_res8);
  if (lVar3 == 0) {
    ERR_put_error(0x14,0x26d,0xf7,"ssl\\ssl_rsa.c",0x458);
  }
  else if ((param_6 == 0) &&
          (((plVar8[local_res8 * 5 + 4] != 0 || (plVar8[local_res8 * 5 + 5] != 0)) ||
           (plVar8[local_res8 * 5 + 6] != 0)))) {
    ERR_put_error(0x14,0x26d,0x121,"ssl\\ssl_rsa.c",0x460);
  }
  else if ((param_5 == 0) || (local_48 = X509_chain_up_ref(param_5), local_48 != 0)) {
    OPENSSL_sk_pop_free(plVar8[local_res8 * 5 + 6],X509_free);
    plVar8[local_res8 * 5 + 6] = local_48;
    X509_free(plVar8[local_res8 * 5 + 4]);
    X509_up_ref(param_3);
    plVar8[local_res8 * 5 + 4] = param_3;
    EVP_PKEY_free(plVar8[local_res8 * 5 + 5]);
    EVP_PKEY_up_ref(uVar4);
    plVar8[local_res8 * 5 + 5] = uVar4;
    *plVar8 = (longlong)(plVar8 + local_res8 * 5 + 4);
    uVar10 = 1;
  }
  else {
    ERR_put_error(0x14,0x26d,0x41,"ssl\\ssl_rsa.c",0x467);
    uVar10 = uVar9;
  }
LAB_14f6a2977:
  EVP_PKEY_free(uVar7);
  return uVar10;
}

// FUN_14f6a29a0 @ 14f6a29a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a29a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x14f6a29b0;
  lVar2 = ssl_cert_lookup_by_pkey(param_2,local_res18);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xc1,0xf7,"ssl\\ssl_rsa.c",0x85,uVar3);
    return 0;
  }
  if (param_1[local_res18[0] * 5 + 4] != 0) {
    lVar2 = X509_get0_pubkey();
    if (lVar2 == 0) {
      ERR_put_error(0x14,0xc1,0x41,"ssl\\ssl_rsa.c",0x8d,uVar3);
      return 0;
    }
    EVP_PKEY_copy_parameters(lVar2,param_2);
    ERR_clear_error();
    iVar1 = X509_check_private_key(param_1[local_res18[0] * 5 + 4],param_2);
    if (iVar1 == 0) {
      X509_free(param_1[local_res18[0] * 5 + 4]);
      param_1[local_res18[0] * 5 + 4] = 0;
      return 0;
    }
  }
  EVP_PKEY_free(param_1[local_res18[0] * 5 + 5]);
  EVP_PKEY_up_ref(param_2);
  param_1[local_res18[0] * 5 + 5] = param_2;
  *param_1 = (longlong)(param_1 + local_res18[0] * 5 + 4);
  return 1;
}

// FUN_14f6a2b00 @ 14f6a2b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6a2b00(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f6a2b22;
  iVar2 = 0;
  lVar6 = 0;
  ERR_clear_error();
  if (param_1 == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x16e8);
    uVar8 = *(undefined8 *)(param_2 + 0x16f0);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
  }
  uVar4 = BIO_s_file();
  lVar5 = BIO_new(uVar4);
  if (lVar5 == 0) {
    ERR_put_error(0x14,0xdc,7,"ssl\\ssl_rsa.c",0x24f,uVar10);
  }
  else {
    iVar1 = BIO_ctrl(lVar5,0x6c,3,param_3);
    if (iVar1 < 1) {
      ERR_put_error(0x14,0xdc,2,"ssl\\ssl_rsa.c",0x254,uVar10);
    }
    else {
      lVar6 = PEM_read_bio_X509_AUX(lVar5,0,uVar9,uVar8);
      if (lVar6 == 0) {
        ERR_put_error(0x14,0xdc,9,"ssl\\ssl_rsa.c",0x25b);
      }
      else {
        if (param_1 == 0) {
          iVar2 = SSL_use_certificate(param_2,lVar6);
        }
        else {
          iVar2 = SSL_CTX_use_certificate(param_1);
        }
        iVar1 = ERR_peek_error();
        if (iVar1 == 0) {
          if (iVar2 == 0) goto LAB_14f6a2cfd;
          if (param_1 == 0) {
            iVar1 = SSL_ctrl(param_2,0x58,0,0);
          }
          else {
            iVar1 = SSL_CTX_ctrl(param_1);
          }
          if (iVar1 != 0) {
            lVar7 = PEM_read_bio_X509(lVar5,0,uVar9,uVar8);
            while (lVar7 != 0) {
              if (param_1 == 0) {
                iVar1 = SSL_ctrl(param_2,0x59,0,lVar7);
              }
              else {
                iVar1 = SSL_CTX_ctrl(param_1);
              }
              if (iVar1 == 0) {
                X509_free(lVar7);
                goto LAB_14f6a2cfb;
              }
              lVar7 = PEM_read_bio_X509(lVar5,0,uVar9,uVar8);
            }
            uVar3 = ERR_peek_last_error();
            if (((uVar3 & 0xff000000) == 0x9000000) && ((uVar3 & 0xfff) == 0x6c)) {
              ERR_clear_error();
              goto LAB_14f6a2cfd;
            }
          }
        }
LAB_14f6a2cfb:
        iVar2 = 0;
      }
    }
  }
LAB_14f6a2cfd:
  X509_free(lVar6);
  BIO_free(lVar5);
  return iVar2;
}

