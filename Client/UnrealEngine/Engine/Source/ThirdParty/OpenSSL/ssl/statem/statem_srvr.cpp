// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 72

// GOST_KX_MESSAGE_free @ 14f675450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GOST_KX_MESSAGE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_15347d9c0);
  return;
}

// GOST_KX_MESSAGE_new @ 14f675490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GOST_KX_MESSAGE_new(void)

{
  ASN1_item_new(&DAT_15347d9c0);
  return;
}

// FUN_14f6754f0 @ 14f6754f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6754f0(undefined8 *param_1,void *param_2,ulonglong param_3,ulonglong *param_4)

{
  if (param_3 < (ulonglong)param_1[1]) {
    *param_4 = 0;
    return 0;
  }
  *param_4 = param_1[1];
  memcpy(param_2,(void *)*param_1,param_1[1]);
  return 1;
}

// FUN_14f675540 @ 14f675540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f675540(longlong *param_1,void *param_2,ulonglong param_3)

{
  if (param_3 <= (ulonglong)param_1[1]) {
    memcpy(param_2,(void *)*param_1,param_3);
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}

// FUN_14f6755b0 @ 14f6755b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6755b0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (param_1[1] != param_3) {
    return false;
  }
  iVar1 = CRYPTO_memcmp(*param_1);
  return iVar1 == 0;
}

// FUN_14f675680 @ 14f675680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f675680(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  if (param_1[1] != 0) {
    uVar4 = param_1[1] - 1;
    bVar1 = *(byte *)*param_1;
    pbVar3 = (byte *)*param_1 + 1;
    uVar2 = (ulonglong)bVar1;
    if (bVar1 <= uVar4) {
      *param_1 = pbVar3 + uVar2;
      param_1[1] = uVar4 - uVar2;
      *param_2 = pbVar3;
      param_2[1] = uVar2;
      return 1;
    }
  }
  return 0;
}

// FUN_14f675700 @ 14f675700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f675700(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f675780 @ 14f675780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f675780(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (2 < (ulonglong)param_1[1]) {
    uVar3 = param_1[1] - 3;
    uVar2 = (ulonglong)CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]);
    if (uVar2 <= uVar3) {
      *param_1 = puVar1 + 3 + uVar2;
      param_1[1] = uVar3 - uVar2;
      *param_2 = puVar1 + 3;
      param_2[1] = uVar2;
      return 1;
    }
  }
  return 0;
}

// FUN_14f6758a0 @ 14f6758a0

undefined8 FUN_14f6758a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  if ((param_3 <= (ulonglong)param_1[1]) && (param_3 < 0x8000000000000000)) {
    *param_2 = *param_1;
    param_2[1] = param_3;
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}

// FUN_14f6758f0 @ 14f6758f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6758f0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  CRYPTO_free(*param_2,
              "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h",
              0x1c5);
  *param_2 = 0;
  *param_3 = 0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = CRYPTO_memdup(*param_1,lVar1,
                          "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                          ,0x1ce);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    *param_3 = lVar1;
  }
  return 1;
}

// FUN_14f6759e0 @ 14f6759e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6759e0(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  if ((ulonglong)param_1[1] < param_3) {
    return 0;
  }
  memcpy(param_2,(void *)*param_1,param_3);
  return 1;
}

// FUN_14f675af0 @ 14f675af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f675af0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  CRYPTO_free(*param_2,
              "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h",
              0x1e2);
  lVar1 = CRYPTO_strndup(*param_1,param_1[1],
                         "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                         ,0x1e5);
  *param_2 = lVar1;
  return lVar1 != 0;
}

// FUN_14f675b90 @ 14f675b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f675b90(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if ((DVar1 != 0x20) && (DVar1 != 0x6c)) {
    return DVar1 == 0x2746;
  }
  return true;
}

// FUN_14f675cd0 @ 14f675cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f675cd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_14f676330();
  if (iVar1 != 0) {
    iVar1 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0x508) + 0x158,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x150));
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ossl_statem_fatal(param_1,0x50,0x27c,0x44,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar2,0xfd4));
  }
  return 0;
}

// FUN_14f675d70 @ 14f675d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f675d70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  int local_f0 [2];
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  uint local_d8 [2];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f675d8c;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_a8 = 0;
  pcVar6 = (char *)0x0;
  local_e8 = 0;
  local_b8 = *(longlong *)(param_1 + 0x768);
  local_dc = param_3;
  local_90 = param_4;
  iVar1 = i2d_SSL_SESSION(*(undefined8 *)(param_1 + 0x508),0);
  if ((iVar1 == 0) || (0xff00 < iVar1)) {
    local_100 = 0xf32;
    local_108 = "ssl\\statem\\statem_srvr.c";
    ossl_statem_fatal(param_1,0x50,0x27d,0x44);
    pcVar7 = (char *)0x0;
    goto LAB_14f675e9f;
  }
  local_e8 = CRYPTO_malloc((longlong)iVar1,"ssl\\statem\\statem_srvr.c",0xf35);
  if (local_e8 == 0) {
    local_100 = 0xf38;
    local_108 = "ssl\\statem\\statem_srvr.c";
    ossl_statem_fatal(param_1,0x50,0x27d,0x41);
    pcVar6 = (char *)0x0;
    pcVar7 = (char *)0x0;
    goto LAB_14f675e9f;
  }
  pcVar6 = (char *)EVP_CIPHER_CTX_new();
  local_f8 = (char *)HMAC_CTX_new();
  lVar4 = local_e8;
  if ((pcVar6 == (char *)0x0) || (local_f8 == (char *)0x0)) {
    local_100 = 0xf40;
    uVar5 = 0x41;
  }
  else {
    local_d0 = local_e8;
    iVar2 = i2d_SSL_SESSION(*(undefined8 *)(param_1 + 0x508),&local_d0);
    if (iVar2 == 0) {
      local_100 = 0xf47;
    }
    else {
      local_a0 = lVar4;
      lVar4 = d2i_SSL_SESSION(0,&local_a0,iVar1);
      if (lVar4 != 0) {
        iVar2 = i2d_SSL_SESSION(lVar4,0);
        if ((iVar2 == 0) || (iVar1 < iVar2)) {
          local_100 = 0xf5a;
        }
        else {
          local_d0 = local_e8;
          iVar1 = i2d_SSL_SESSION(lVar4,&local_d0);
          if (iVar1 != 0) {
            SSL_SESSION_free(lVar4);
            lVar4 = local_b8;
            pcVar8 = local_f8;
            if (*(code **)(local_b8 + 0x220) != (code *)0x0) {
              local_100 = 1;
              local_108 = local_f8;
              iVar1 = (**(code **)(local_b8 + 0x220))(param_1,&local_60,local_70,pcVar6);
              if (iVar1 == 0) {
                iVar1 = WPACKET_put_bytes__(param_2,0,4);
                if ((iVar1 != 0) && (iVar1 = WPACKET_put_bytes__(param_2,0,2), iVar1 != 0)) {
                  CRYPTO_free(local_e8,"ssl\\statem\\statem_srvr.c",0xf7a);
                  EVP_CIPHER_CTX_free(pcVar6);
                  HMAC_CTX_free(pcVar8);
                  return 1;
                }
                local_100 = 0xf77;
                uVar5 = 0x44;
              }
              else {
                if (-1 < iVar1) {
                  iVar1 = EVP_CIPHER_CTX_iv_length(pcVar6);
LAB_14f6760eb:
                  iVar3 = FUN_14f676330(param_1,param_2,local_dc,local_90);
                  pcVar7 = local_f8;
                  if (iVar3 == 0) goto LAB_14f675e9f;
                  iVar3 = WPACKET_get_total_written(param_2,&local_80);
                  if (((iVar3 != 0) && (iVar3 = WPACKET_memcpy(param_2,&local_60,0x10), iVar3 != 0))
                     && (iVar1 = WPACKET_memcpy(param_2,local_70,(longlong)iVar1), iVar1 != 0)) {
                    iVar1 = WPACKET_reserve_bytes(param_2,(longlong)(iVar2 + 0x20),&local_c8);
                    if (iVar1 != 0) {
                      local_108 = (char *)CONCAT44(local_108._4_4_,iVar2);
                      iVar1 = EVP_EncryptUpdate(pcVar6,local_c8,local_f0,local_e8);
                      if ((((iVar1 != 0) &&
                           (iVar1 = WPACKET_allocate_bytes(param_2,(longlong)local_f0[0],&local_c0),
                           iVar1 != 0)) &&
                          ((local_c8 == local_c0 &&
                           ((iVar1 = EVP_EncryptFinal(pcVar6,local_f0[0] + local_c8,&local_e0),
                            iVar1 != 0 &&
                            (iVar1 = WPACKET_allocate_bytes(param_2,(longlong)local_e0,&local_c0),
                            iVar1 != 0)))))) &&
                         ((local_f0[0] + local_c8 == local_c0 &&
                          (((((local_f0[0] + local_e0 <= iVar2 + 0x20 &&
                              (iVar1 = WPACKET_get_total_written(param_2,&local_88), iVar1 != 0)) &&
                             (iVar1 = HMAC_Update(pcVar8,local_80 +
                                                         *(longlong *)
                                                          (*(longlong *)(param_1 + 0x88) + 8),
                                                  local_88 - local_80), iVar1 != 0)) &&
                            ((iVar1 = WPACKET_reserve_bytes(param_2,0x40,&local_b0), iVar1 != 0 &&
                             (iVar1 = HMAC_Final(pcVar8,local_b0,local_d8), iVar1 != 0)))) &&
                           ((local_d8[0] < 0x41 &&
                            ((iVar1 = WPACKET_allocate_bytes(param_2,local_d8[0],&local_78),
                             iVar1 != 0 && (local_b0 == local_78)))))))))) {
                        iVar1 = WPACKET_close(param_2);
                        if (iVar1 != 0) {
                          local_a8 = CONCAT44(local_a8._4_4_,1);
                          pcVar7 = local_f8;
                          goto LAB_14f675e9f;
                        }
                        local_100 = 0xfbc;
                        goto LAB_14f675e7c;
                      }
                    }
                  }
                  local_100 = 0xfb5;
                  goto LAB_14f675e7c;
                }
                local_100 = 0xf81;
                uVar5 = 0xea;
              }
              local_108 = "ssl\\statem\\statem_srvr.c";
              ossl_statem_fatal(param_1,0x50,0x27d,uVar5);
              pcVar7 = pcVar8;
              goto LAB_14f675e9f;
            }
            local_98 = EVP_aes_256_cbc();
            iVar1 = EVP_CIPHER_iv_length(local_98);
            iVar3 = RAND_bytes(local_70,iVar1);
            if (0 < iVar3) {
              local_108 = local_70;
              iVar3 = EVP_EncryptInit_ex(pcVar6,local_98,0,*(longlong *)(lVar4 + 0x218) + 0x20);
              if (iVar3 != 0) {
                uVar5 = EVP_sha256();
                pcVar8 = local_f8;
                local_108 = (char *)0x0;
                iVar3 = HMAC_Init_ex(local_f8,*(undefined8 *)(lVar4 + 0x218),0x20,uVar5);
                if (iVar3 != 0) {
                  local_60 = *(undefined4 *)(local_b8 + 0x208);
                  uStack_5c = *(undefined4 *)(local_b8 + 0x20c);
                  uStack_58 = *(undefined4 *)(local_b8 + 0x210);
                  uStack_54 = *(undefined4 *)(local_b8 + 0x214);
                  goto LAB_14f6760eb;
                }
              }
            }
            local_100 = 0xf90;
            goto LAB_14f675e7c;
          }
          local_100 = 0xf61;
        }
        local_108 = "ssl\\statem\\statem_srvr.c";
        ossl_statem_fatal(param_1,0x50,0x27d,0x44);
        SSL_SESSION_free(lVar4);
        pcVar7 = local_f8;
        goto LAB_14f675e9f;
      }
      local_100 = 0xf52;
    }
LAB_14f675e7c:
    uVar5 = 0x44;
  }
  local_108 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,0x50,0x27d,uVar5);
  pcVar7 = local_f8;
LAB_14f675e9f:
  CRYPTO_free(local_e8,"ssl\\statem\\statem_srvr.c",0xfc2);
  EVP_CIPHER_CTX_free(pcVar6);
  HMAC_CTX_free(pcVar7);
  return local_a8 & 0xffffffff;
}

// FUN_14f676330 @ 14f676330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f676330(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x508) + 0x1d0);
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (0x93a80 < iVar2) {
      iVar2 = 0x93a80;
    }
  }
  else if (*(int *)(param_1 + 200) != 0) {
    iVar2 = 0;
  }
  iVar2 = WPACKET_put_bytes__(param_2,iVar2,4);
  if (iVar2 == 0) {
    uVar3 = CONCAT44(uVar4,0xf02);
  }
  else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
           (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) &&
          ((iVar2 != 0x10000 &&
           ((iVar2 = WPACKET_put_bytes__(param_2,param_3,4), iVar2 == 0 ||
            (iVar2 = WPACKET_sub_memcpy__(param_2,param_4,8), iVar2 == 0)))))) {
    uVar3 = CONCAT44(uVar4,0xf0a);
  }
  else {
    iVar2 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar2 != 0) {
      return 1;
    }
    uVar3 = CONCAT44(uVar4,0xf12);
  }
  ossl_statem_fatal(param_1,0x50,0x27e,0x44,"ssl\\statem\\statem_srvr.c",uVar3);
  return 0;
}

// d2i_GOST_KX_MESSAGE @ 14f676480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_GOST_KX_MESSAGE(void)

{
  ASN1_item_d2i();
  return;
}

// dtls_construct_hello_verify_request @ 14f6764b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_construct_hello_verify_request(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_res8 [2];
  undefined8 uVar4;
  
  uVar3 = 1;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0xc0);
  if (pcVar1 != (code *)0x0) {
    uVar3 = 1;
    iVar2 = (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0xb0),local_res8);
    if ((iVar2 != 0) && (local_res8[0] < 0x100)) {
      *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x100) = (ulonglong)local_res8[0];
      iVar2 = dtls_raw_hello_verify_request
                        (param_2,*(longlong *)(param_1 + 0xb0),
                         *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x100));
      if (iVar2 != 0) {
        return 1;
      }
      uVar4 = CONCAT44(uVar3,0x520);
      uVar3 = 0x44;
      goto LAB_14f676550;
    }
  }
  uVar4 = CONCAT44(uVar3,0x518);
  uVar3 = 400;
LAB_14f676550:
  ossl_statem_fatal(param_1,0xffffffff,0x181,uVar3,"ssl\\statem\\statem_srvr.c",uVar4);
  return 0;
}

// dtls_raw_hello_verify_request @ 14f676580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_raw_hello_verify_request(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = WPACKET_put_bytes__(param_1,0xfeff,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_sub_memcpy__(param_1,param_2,param_3,1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// i2d_GOST_KX_MESSAGE @ 14f676600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_GOST_KX_MESSAGE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_15347d9c0);
  return;
}

// FUN_14f676630 @ 14f676630

undefined4 FUN_14f676630(longlong param_1,int param_2)

{
  bool bVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (*(int *)(param_1 + 0x84) == 0xb) {
      return 0;
    }
    if (param_2 != 0xb) {
      if (param_2 != 0x18) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x2c;
      return 1;
    }
    bVar1 = *(int *)(param_1 + 0x788) == 4;
    goto LAB_14f6766ac;
  default:
    goto switchD_14f67665b_caseD_2;
  case 0x1b:
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8) != 0) {
      if (param_2 != 0xf) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x1d;
      return 1;
    }
    break;
  case 0x1d:
    break;
  case 0x2e:
    if (*(int *)(param_1 + 0x4d8) == 1) {
      if (param_2 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x14;
      return 1;
    }
    if (*(int *)(param_1 + 0x710) == 2) {
      if (param_2 != 5) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x31;
      return 1;
    }
  case 0x24:
  case 0x31:
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) != 0) {
      bVar1 = param_2 == 0xb;
LAB_14f6766ac:
      if (!bVar1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x1b;
      return 1;
    }
  }
  if (param_2 == 0x14) {
    *(undefined4 *)(param_1 + 0x5c) = 0x20;
    return 1;
  }
switchD_14f67665b_caseD_2:
  return 0;
}

// FUN_14f676770 @ 14f676770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f676770(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (*(int *)(param_1 + 0x784) != -1) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2a;
      return 1;
    }
    if (*(int *)(param_1 + 0x788) != 3) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x19;
    return 1;
  default:
    ossl_statem_fatal(param_1,0x50,600,0x44,"ssl\\statem\\statem_srvr.c",0x1000001ab);
    return 0;
  case 0x14:
    *(undefined4 *)(param_1 + 0x5c) = 0x16;
    return 1;
  case 0x16:
    if (((*(uint *)(param_1 + 0x5cc) & 0x100000) != 0) && (*(int *)(param_1 + 0x4d8) != 2)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x23;
      return 1;
    }
  case 0x23:
    uVar1 = 0x25;
    if (*(int *)(param_1 + 0x4d8) == 1) {
      uVar1 = 0x2e;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  case 0x17:
    *(undefined4 *)(param_1 + 0x5c) = 0x28;
    return 1;
  case 0x19:
    if (*(int *)(param_1 + 0x788) != 3) {
      *(undefined4 *)(param_1 + 0x5c) = 0x17;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x788) = 4;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0x20:
    if (*(int *)(param_1 + 0x788) == 4) {
      *(undefined4 *)(param_1 + 0x788) = 2;
    }
    else if (*(int *)(param_1 + 0x678) == 0) goto switchD_14f6767ab_caseD_2a;
    uVar1 = 1;
    if (*(ulonglong *)(param_1 + 0x1748) < *(ulonglong *)(param_1 + 0x1740)) {
      uVar1 = 0x21;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  case 0x21:
    if ((*(int *)(param_1 + 200) == 0) &&
       (*(ulonglong *)(param_1 + 0x1748) < *(ulonglong *)(param_1 + 0x1740))) {
      return 1;
    }
  case 0x2a:
  case 0x2c:
switchD_14f6767ab_caseD_2a:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0x24:
    *(undefined4 *)(param_1 + 0x5c) = 0x2e;
    return 1;
  case 0x25:
    if (*(int *)(param_1 + 200) == 0) {
      iVar2 = send_certificate_request(param_1);
      uVar1 = 0x17;
      if (iVar2 != 0) {
        uVar1 = 0x19;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x24;
    return 1;
  case 0x28:
    *(undefined4 *)(param_1 + 0x5c) = 0x24;
    return 1;
  case 0x2e:
    return 2;
  }
}

// ossl_statem_server_construct_message @ 14f676a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_statem_server_construct_message
          (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    *param_3 = 0;
    *param_4 = 0;
    return 1;
  default:
    ossl_statem_fatal(param_1,0x50,0x1af,0xec,"ssl\\statem\\statem_srvr.c",0x404,0x14f676a0a);
    return 0;
  case 0x15:
    *param_3 = dtls_construct_hello_verify_request;
    *param_4 = 3;
    return 1;
  case 0x16:
    *param_3 = tls_construct_server_hello;
    *param_4 = 2;
    return 1;
  case 0x17:
    *param_3 = tls_construct_server_certificate;
    *param_4 = 0xb;
    return 1;
  case 0x18:
    *param_3 = tls_construct_server_key_exchange;
    *param_4 = 0xc;
    return 1;
  case 0x19:
    *param_3 = tls_construct_certificate_request;
    *param_4 = 0xd;
    return 1;
  case 0x1a:
    *param_3 = tls_construct_server_done;
    *param_4 = 0xe;
    return 1;
  case 0x21:
    *param_3 = tls_construct_new_session_ticket;
    *param_4 = 4;
    return 1;
  case 0x22:
    *param_3 = tls_construct_cert_status;
    *param_4 = 0x16;
    return 1;
  case 0x23:
    break;
  case 0x24:
    *param_3 = tls_construct_finished;
    *param_4 = 0x14;
    return 1;
  case 0x25:
    *param_3 = FUN_14f678270;
    *param_4 = 8;
    return 1;
  case 0x28:
    *param_3 = tls_construct_cert_verify;
    *param_4 = 0xf;
    return 1;
  case 0x2a:
    *param_3 = tls_construct_key_update;
    *param_4 = 0x18;
    return 1;
  case 0x2e:
    *param_3 = 0;
    *param_4 = 0xffffffff;
    return 1;
  }
  pcVar1 = tls_construct_change_cipher_spec;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    pcVar1 = dtls_construct_change_cipher_spec;
  }
  *param_3 = pcVar1;
  *param_4 = 0x101;
  return 1;
}

// ossl_statem_server_max_message_size @ 14f676c80

undefined8 ossl_statem_server_max_message_size(longlong param_1)

{
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x14:
    return 0x20144;
  default:
    return 0;
  case 0x1b:
    return *(undefined8 *)(param_1 + 0x5e0);
  case 0x1c:
    return 0x800;
  case 0x1d:
    return 0x4000;
  case 0x1e:
    return 0x202;
  case 0x1f:
  case 0x2c:
    return 1;
  case 0x20:
    return 0x40;
  }
}

// ossl_statem_server_post_process_message @ 14f676d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_server_post_process_message(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x5c) == 0x14) {
    uVar1 = tls_post_process_client_hello();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x5c) != 0x1c) {
    ossl_statem_fatal(param_1,0x50,0x259,0x44,"ssl\\statem\\statem_srvr.c",0x4d7,0x14f676d3a);
    return 0;
  }
  uVar1 = tls_post_process_client_key_exchange();
  return uVar1;
}

// ossl_statem_server_post_work @ 14f676da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_server_post_work(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [32];
  
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  switch(param_1[0x17]) {
  case 0x13:
    iVar3 = statem_flush(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    iVar3 = ssl3_init_finished_mac(param_1);
    if (iVar3 != 0) {
      return 2;
    }
    return 0;
  case 0x15:
    iVar3 = statem_flush(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    if ((*param_1 != 0x100) && (iVar3 = ssl3_init_finished_mac(param_1), iVar3 == 0)) {
      return 0;
    }
    param_1[0x17a] = 1;
    return 2;
  case 0x16:
    piVar1 = *(int **)(param_1 + 2);
    uVar6 = *(uint *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8;
    if ((((uVar6 != 0) || (*piVar1 < 0x304)) || (*piVar1 == 0x10000)) || (param_1[0x136] != 1)) {
      if (uVar6 != 0) {
        return 2;
      }
      if (*piVar1 < 0x304) {
        return 2;
      }
      if (*piVar1 == 0x10000) {
        return 2;
      }
      if (((param_1[0x173] & 0x100000U) != 0) && (param_1[0x136] != 2)) {
        return 2;
      }
      goto switchD_14f676ddf_caseD_23;
    }
    uVar6 = param_1[0x173] & 0x100000;
    goto LAB_14f676e76;
  case 0x19:
    uVar6 = param_1[0x1e2] - 3;
LAB_14f676e76:
    if (uVar6 == 0) {
switchD_14f676ddf_caseD_1a:
      iVar3 = statem_flush(param_1);
      if (iVar3 != 1) {
        return 3;
      }
    }
    break;
  case 0x1a:
    goto switchD_14f676ddf_caseD_1a;
  case 0x21:
    SetLastError(0);
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
        (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) &&
       ((iVar3 != 0x10000 && (iVar3 = statem_flush(param_1), iVar3 != 1)))) {
      iVar3 = SSL_get_error(param_1,0);
      if (iVar3 != 5) {
        return 3;
      }
      DVar4 = GetLastError();
      if (((DVar4 != 0x20) && (DVar4 != 0x6c)) && (DVar4 != 0x2746)) {
        return 3;
      }
      param_1[10] = 1;
    }
    break;
  case 0x23:
switchD_14f676ddf_caseD_23:
    if (param_1[0x136] != 1) {
      lVar2 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
      if ((((*(byte *)(lVar2 + 0x60) & 8) == 0) && (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3))
         && (iVar3 != 0x10000)) {
        iVar3 = (**(code **)(lVar2 + 0x10))(param_1);
        if (((iVar3 != 0) &&
            (iVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))
                               (param_1,0xa2), iVar3 != 0)) &&
           ((param_1[0x1c4] == 2 ||
            (iVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))
                               (param_1,0xa1), iVar3 != 0)))) {
          param_1[0x20] = 1;
          return 2;
        }
      }
      else {
        iVar3 = (**(code **)(lVar2 + 0x20))(param_1,0x22);
        if (iVar3 != 0) {
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
            return 2;
          }
          dtls1_reset_seq_numbers(param_1,2);
          return 2;
        }
      }
      return 0;
    }
    iVar3 = statem_flush(param_1);
    if (iVar3 == 0) {
      return 3;
    }
    break;
  case 0x24:
    iVar3 = statem_flush(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    lVar2 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
    if ((((*(byte *)(lVar2 + 0x60) & 8) == 0) && (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3))
       && (iVar3 != 0x10000)) {
      iVar3 = (**(code **)(lVar2 + 0x18))(param_1,param_1 + 0x6d,param_1 + 0x5d,0,local_res8);
      if (iVar3 == 0) {
        return 0;
      }
      uVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0x122);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
    break;
  case 0x2a:
    iVar3 = statem_flush(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    uVar5 = tls13_update_key(param_1,1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  return 2;
}

// ossl_statem_server_pre_work @ 14f677170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_server_pre_work(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      dtls1_clear_sent_buffer(param_1);
      return 2;
    }
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      dtls1_clear_sent_buffer(param_1);
      *(undefined4 *)(param_1 + 0x78) = 0;
      return 2;
    }
    break;
  case 0x16:
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
      return 2;
    }
    break;
  case 0x21:
    uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
    if (((uVar4 == 0) && (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) &&
       ((iVar2 != 0x10000 && (*(longlong *)(param_1 + 0x1748) == 0)))) {
      uVar3 = tls_finish_handshake(param_1,param_2 & 0xffffffff,0,0);
      return uVar3;
    }
    bVar5 = uVar4 == 0;
    goto LAB_14f67727f;
  case 0x23:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      return 2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
    if (lVar1 == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1e0) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    }
    else if (lVar1 != *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238)) {
      ossl_statem_fatal(param_1,0x50,0x280,0x44,"ssl\\statem\\statem_srvr.c",0x1000002f0);
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    bVar5 = (*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0;
LAB_14f67727f:
    if (!bVar5) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    break;
  case 0x2e:
    if ((*(int *)(param_1 + 0x84) != 9) && ((**(uint **)(param_1 + 0xa8) & 0x800) == 0)) {
      return 2;
    }
  case 1:
    uVar3 = tls_finish_handshake(param_1,param_2,1);
    return uVar3;
  }
  return 2;
}

// ossl_statem_server_process_message @ 14f6773d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_server_process_message(longlong param_1)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x14:
    uVar1 = tls_process_client_hello();
    return uVar1;
  default:
    ossl_statem_fatal(param_1,0x50,0x25b,0x44,"ssl\\statem\\statem_srvr.c",0x4a7,0x14f6773da);
    return 0;
  case 0x1b:
    uVar1 = tls_process_client_certificate();
    return uVar1;
  case 0x1c:
    uVar1 = tls_process_client_key_exchange();
    return uVar1;
  case 0x1d:
    uVar1 = tls_process_cert_verify();
    return uVar1;
  case 0x1e:
    uVar1 = tls_process_next_proto();
    return uVar1;
  case 0x1f:
    uVar1 = tls_process_change_cipher_spec();
    return uVar1;
  case 0x20:
    uVar1 = tls_process_finished();
    return uVar1;
  case 0x2c:
    uVar1 = tls_process_key_update();
    return uVar1;
  case 0x31:
    uVar1 = tls_process_end_of_early_data();
    return uVar1;
  }
}

// ossl_statem_server_read_transition @ 14f6774e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ossl_statem_server_read_transition(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6774ea;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    iVar1 = FUN_14f676630(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    switch(param_1[0x17]) {
    case 0:
    case 1:
    case 0x15:
      if (param_2 == 1) {
        param_1[0x17] = 0x14;
        return 1;
      }
      break;
    case 0x1a:
      if (param_2 == 0x10) {
        if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x2a0) == 0) {
LAB_14f6775e4:
          param_1[0x17] = 0x1c;
          return 1;
        }
        if (*param_1 == 0x300) {
          if (((byte)param_1[0x156] & 3) != 3) goto LAB_14f6775e4;
          uVar4 = 200;
          uVar2 = 0x28;
          uVar3 = 199;
          goto LAB_14f6776ee;
        }
      }
      else if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x2a0) != 0) && (param_2 == 0xb)) {
        param_1[0x17] = 0x1b;
        return 1;
      }
      break;
    case 0x1b:
      if (param_2 == 0x10) goto LAB_14f6775e4;
      break;
    case 0x1c:
      if ((*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1b8) == 0) || (param_1[0x1d] != 0))
      goto switchD_14f677553_caseD_1d;
      if (param_2 == 0xf) {
        param_1[0x17] = 0x1d;
        return 1;
      }
      break;
    case 0x1d:
    case 0x24:
switchD_14f677553_caseD_1d:
      if (param_2 == 0x101) {
        param_1[0x17] = 0x1f;
        return 1;
      }
      break;
    case 0x1e:
switchD_14f677553_caseD_1e:
      if (param_2 == 0x14) {
        param_1[0x17] = 0x20;
        return 1;
      }
      break;
    case 0x1f:
      if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x3dc) == 0) goto switchD_14f677553_caseD_1e;
      if (param_2 == 0x43) {
        param_1[0x17] = 0x1e;
        return 1;
      }
    }
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) &&
     (param_2 == 0x101)) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[10] = 3;
    uVar5 = SSL_get_rbio(param_1);
    BIO_clear_flags(uVar5,0xf);
    BIO_set_flags(uVar5,9);
    return 0;
  }
  uVar4 = 0x139;
  uVar2 = 10;
  uVar3 = 0xf4;
LAB_14f6776ee:
  ossl_statem_fatal(param_1,uVar2,0x1a2,uVar3,"ssl\\statem\\statem_srvr.c",uVar4,uVar5);
  return 0;
}

// ossl_statem_server_write_transition @ 14f677760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_server_write_transition(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
  if (((uVar4 == 0) && (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    uVar3 = FUN_14f676770(param_1);
    return uVar3;
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
  case 0x15:
  case 0x1a:
    return 2;
  case 1:
    if (*(int *)(param_1 + 0x60) == 0x13) {
      *(undefined8 *)(param_1 + 0x5c) = 0x13;
      return 1;
    }
    iVar2 = tls_setup_handshake(param_1);
    if (iVar2 != 0) {
      return 2;
    }
    return 0;
  default:
    ossl_statem_fatal(param_1,0x50,0x25c,0x44,"ssl\\statem\\statem_srvr.c",0x10000022e);
    return 0;
  case 0x13:
    break;
  case 0x14:
    if (((uVar4 != 0) && (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x108) == 0)) &&
       (uVar4 = SSL_get_options(param_1), (uVar4 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x15;
      return 1;
    }
    if (((*(int *)(param_1 + 0x780) != 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0)) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x16;
      return 1;
    }
    break;
  case 0x16:
    if (*(int *)(param_1 + 200) != 0) {
      uVar1 = 0x23;
      if (*(int *)(param_1 + 0x678) != 0) {
        uVar1 = 0x21;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      return 1;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0x54) != 0) {
      iVar2 = FUN_14f677b00();
      if (iVar2 == 0) {
        iVar2 = send_certificate_request();
        *(uint *)(param_1 + 0x5c) = 0x1a - (uint)(iVar2 != 0);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x18;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x17;
    return 1;
  case 0x17:
    if (*(int *)(param_1 + 0x654) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x22;
      return 1;
    }
  case 0x22:
    iVar2 = FUN_14f677b00(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x18;
      return 1;
    }
  case 0x18:
    iVar2 = send_certificate_request(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x19;
      return 1;
    }
  case 0x19:
    *(undefined4 *)(param_1 + 0x5c) = 0x1a;
    return 1;
  case 0x20:
    if (*(int *)(param_1 + 200) == 0) {
      uVar1 = 0x23;
      if (*(int *)(param_1 + 0x678) != 0) {
        uVar1 = 0x21;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      return 1;
    }
    break;
  case 0x21:
    *(undefined4 *)(param_1 + 0x5c) = 0x23;
    return 1;
  case 0x23:
    *(undefined4 *)(param_1 + 0x5c) = 0x24;
    return 1;
  case 0x24:
    if (*(int *)(param_1 + 200) != 0) {
      return 2;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return 1;
}

// send_certificate_request @ 14f677a80

undefined8 send_certificate_request(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x558);
  if (((((uVar1 & 1) != 0) &&
       (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
          (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
        (((uVar1 & 8) == 0 || (*(int *)(param_1 + 0x788) == 3)))))) &&
      ((*(int *)(param_1 + 0x7a0) < 1 || ((uVar1 & 4) == 0)))) &&
     (((uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20),
       (uVar3 & 4) == 0 || ((uVar1 & 2) != 0)) && ((uVar3 & 0x50) == 0)))) {
    return 1;
  }
  return 0;
}

// FUN_14f677b00 @ 14f677b00

undefined8 FUN_14f677b00(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if (((uVar1 & 6) == 0) &&
     ((((uVar1 & 0x48) == 0 || (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x200) == 0)) &&
      ((uVar1 & 0x1a0) == 0)))) {
    return 0;
  }
  return 1;
}

// FUN_14f677b50 @ 14f677b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677b50(void)

{
  OPENSSL_sk_dup();
  return;
}

// FUN_14f677b70 @ 14f677b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677b70(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f677b90 @ 14f677b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677b90(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f677bb0 @ 14f677bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677bb0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f677bd0 @ 14f677bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677bd0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f677bf0 @ 14f677bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677bf0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f677c10 @ 14f677c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677c10(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f677c30 @ 14f677c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677c30(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f677c50 @ 14f677c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677c50(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f677c70 @ 14f677c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677c70(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f677c90 @ 14f677c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677c90(void)

{
  OPENSSL_sk_shift();
  return;
}

// FUN_14f677cb0 @ 14f677cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677cb0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f677cd0 @ 14f677cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677cd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(param_2 + 0x270);
  uVar2 = *(ulonglong *)(param_2 + 0x278);
  if ((1 < uVar2) && (1 < uVar2 - 2)) {
    if (1 < uVar2 - 4) {
      uVar5 = (ulonglong)CONCAT11(*(undefined1 *)(lVar1 + 4),*(undefined1 *)(lVar1 + 5));
      if (uVar5 <= uVar2 - 6) {
        if (CONCAT11(*(undefined1 *)(lVar1 + 2),*(undefined1 *)(lVar1 + 3)) == 0) {
          uVar3 = SSL_client_version(param_1);
          bVar7 = false;
          if ((uVar3 & 0xffffff00) == 0x300) {
            iVar4 = SSL_client_version(param_1);
          }
          else {
            iVar4 = 0;
          }
          lVar6 = 0x12;
          if (0x302 < iVar4) {
            lVar6 = 0x22;
          }
          if ((uVar2 - 6) - uVar5 == lVar6) {
            iVar4 = CRYPTO_memcmp(lVar1 + 6 + uVar5,&DAT_15347da00);
            bVar7 = iVar4 == 0;
          }
          *(bool *)(*(longlong *)(param_1 + 0xa8) + 0x404) = bVar7;
        }
      }
    }
  }
  return;
}

// FUN_14f677e00 @ 14f677e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f677e00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_res8 [8];
  undefined4 uVar3;
  
  uVar3 = 1;
  local_res8[0] = 0x70;
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c) & 0x20) != 0) &&
     (*(longlong *)(param_1 + 0x7b8) != 0)) {
    if (*(longlong *)(param_1 + 2000) == 0) {
      ossl_statem_fatal(param_1,0x73,0x25e,0xdf,"ssl\\statem\\statem_srvr.c",0x1000004f2);
      return 0xffffffff;
    }
    iVar1 = SSL_srp_server_param_with_username(param_1,local_res8);
    if (iVar1 < 0) {
      return 0;
    }
    if (iVar1 == 2) {
      uVar2 = 0xe2;
      if (local_res8[0] == 0x73) {
        uVar2 = 0xdf;
      }
      ossl_statem_fatal(param_1,local_res8[0],0x25e,uVar2,"ssl\\statem\\statem_srvr.c",
                        CONCAT44(uVar3,0x4fc));
      return 0xffffffff;
    }
  }
  return 1;
}

// FUN_14f677ef0 @ 14f677ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f677ef0(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f677f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

// tls_construct_cert_status @ 14f677f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_cert_status(void)

{
  int iVar1;
  
  iVar1 = tls_construct_cert_status_body();
  return iVar1 != 0;
}

// tls_construct_cert_status_body @ 14f677f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_cert_status_body(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_put_bytes__(param_2,(longlong)*(int *)(param_1 + 0x640),1);
  if (iVar1 != 0) {
    iVar1 = WPACKET_sub_memcpy__
                      (param_2,*(undefined8 *)(param_1 + 0x668),*(undefined8 *)(param_1 + 0x670),3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1ee,0x44,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar2,0x1070));
  return 0;
}

// tls_construct_certificate_request @ 14f677fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_certificate_request(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x14f677ff5;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (*(int *)(param_1 + 0x788) == 3) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x790),"ssl\\statem\\statem_srvr.c",0xb27);
      *(undefined8 *)(param_1 + 0x798) = 0x20;
      lVar2 = CRYPTO_malloc(0x20,"ssl\\statem\\statem_srvr.c",0xb29);
      *(longlong *)(param_1 + 0x790) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0x798) = 0;
        uVar3 = 0xb2d;
LAB_14f678237:
        ossl_statem_fatal(param_1,0x50,0x174,0x44,"ssl\\statem\\statem_srvr.c",uVar3);
        return 0;
      }
      iVar1 = RAND_bytes(lVar2,*(undefined4 *)(param_1 + 0x798));
      if ((iVar1 < 1) ||
         (iVar1 = WPACKET_sub_memcpy__
                            (param_2,*(undefined8 *)(param_1 + 0x790),
                             *(undefined8 *)(param_1 + 0x798),1), iVar1 == 0)) {
        uVar3 = 0xb35;
        goto LAB_14f678237;
      }
      iVar1 = tls13_restore_handshake_digest_for_pha(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = WPACKET_put_bytes__(param_2,0,1);
      if (iVar1 == 0) {
        uVar3 = 0xb41;
        goto LAB_14f678237;
      }
    }
    uVar3 = tls_construct_extensions(param_1,param_2,0x4000,0,0,uVar3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  else {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,1);
    if (((iVar1 == 0) || (iVar1 = ssl3_get_req_cert_type(param_1,param_2), iVar1 == 0)) ||
       (iVar1 = WPACKET_close(param_2), iVar1 == 0)) {
      uVar3 = 0xb53;
      goto LAB_14f678237;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) != 0) {
      uVar3 = tls12_get_psigalgs(param_1,1,&local_res8);
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (((iVar1 == 0) || (iVar1 = WPACKET_set_flags(param_2,1), iVar1 == 0)) ||
         ((iVar1 = tls12_copy_sigalgs(param_1,param_2,local_res8,uVar3), iVar1 == 0 ||
          (iVar1 = WPACKET_close(param_2), iVar1 == 0)))) {
        uVar3 = 0xb61;
        goto LAB_14f678237;
      }
    }
    uVar3 = get_ca_names(param_1);
    iVar1 = construct_ca_names(param_1,uVar3,param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x7a0) = *(int *)(param_1 + 0x7a0) + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) = 1;
  return 1;
}

// FUN_14f678270 @ 14f678270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f678270(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = tls_construct_extensions(param_1,param_2,0x400,0,0,0x14f67827c);
  return iVar1 != 0;
}

// tls_construct_new_session_ticket @ 14f6782b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_new_session_ticket(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  __time64_t _Var8;
  undefined8 uVar9;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 auStack_41 [9];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14f6782cc;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x768);
  local_48 = 0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    uVar5 = ssl_handshake_md(param_1);
    iVar3 = EVP_MD_size(uVar5);
    if (iVar3 < 0) {
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xff1);
      goto LAB_14f67834d;
    }
    if ((*(longlong *)(param_1 + 0x1748) != 0) || (*(int *)(param_1 + 200) != 0)) {
      lVar6 = ssl_session_dup(*(undefined8 *)(param_1 + 0x508),0);
      if (lVar6 == 0) {
        return 0;
      }
      SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
      *(longlong *)(param_1 + 0x508) = lVar6;
    }
    iVar4 = ssl_generate_session_id(param_1,*(undefined8 *)(param_1 + 0x508));
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = RAND_bytes(&local_48,4);
    if (iVar4 < 1) {
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x100e);
      goto LAB_14f67834d;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x224) = local_48;
    lVar6 = 8;
    uVar7 = *(ulonglong *)(param_1 + 0x1750);
    do {
      auStack_41[lVar6] = (char)uVar7;
      uVar7 = uVar7 >> 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    local_50 = 1;
    local_60 = *(longlong *)(param_1 + 0x508) + 0x50;
    local_70 = auStack_41 + 1;
    local_68 = 8;
    local_78 = (char *)0xa;
    local_58 = (longlong)iVar3;
    iVar4 = tls13_hkdf_expand(param_1,uVar5,param_1 + 500,"resumption");
    if (iVar4 == 0) {
      return 0;
    }
    *(longlong *)(*(longlong *)(param_1 + 0x508) + 8) = (longlong)iVar3;
    _Var8 = _time64((__time64_t *)0x0);
    *(int *)(*(longlong *)(param_1 + 0x508) + 0x1d4) = (int)_Var8;
    if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) == 0) {
LAB_14f678564:
      *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x228) = *(undefined4 *)(param_1 + 0x1710);
      goto LAB_14f67857c;
    }
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x230),"ssl\\statem\\statem_srvr.c"
                ,0x1027);
    uVar5 = CRYPTO_memdup(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),
                          "ssl\\statem\\statem_srvr.c",0x1029);
    *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x230) = uVar5;
    lVar6 = *(longlong *)(param_1 + 0x508);
    if (*(longlong *)(lVar6 + 0x230) != 0) {
      *(undefined8 *)(lVar6 + 0x238) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000);
      goto LAB_14f678564;
    }
    *(undefined8 *)(lVar6 + 0x238) = 0;
    uVar5 = 0x41;
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x102e);
  }
  else {
LAB_14f67857c:
    pcVar2 = *(code **)(lVar1 + 0x3b0);
    if ((pcVar2 == (code *)0x0) ||
       (iVar3 = (*pcVar2)(param_1,*(undefined8 *)(lVar1 + 0x3c0),local_48), iVar3 != 0)) {
      if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
           (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) ||
         (((*(uint *)(param_1 + 0x5cc) >> 0xe & 1) == 0 &&
          ((*(int *)(param_1 + 0x1710) == 0 || ((*(uint *)(param_1 + 0x5cc) >> 0x18 & 1) != 0))))))
      {
        iVar3 = FUN_14f675d70(param_1,param_2,local_48,auStack_41 + 1);
        if (iVar3 == 0) {
          return 0;
        }
LAB_14f678664:
        if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
           ((iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3 && (iVar3 != 0x10000)))) {
          local_78 = (char *)0x0;
          iVar3 = tls_construct_extensions(param_1,param_2,0x2000,0);
          if (iVar3 == 0) {
            return 0;
          }
          *(longlong *)(param_1 + 0x1748) = *(longlong *)(param_1 + 0x1748) + 1;
          *(longlong *)(param_1 + 0x1750) = *(longlong *)(param_1 + 0x1750) + 1;
          ssl_update_cache(param_1,2);
          return 1;
        }
        return 1;
      }
      iVar3 = FUN_14f676330(param_1,param_2,local_48,auStack_41 + 1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0x508) + 0x158,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x150));
      if ((iVar3 != 0) && (iVar3 = WPACKET_close(param_2), iVar3 != 0)) goto LAB_14f678664;
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xfd4);
      uVar5 = 0x44;
      uVar9 = 0x27c;
      goto LAB_14f678359;
    }
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x103a);
LAB_14f67834d:
    uVar5 = 0x44;
  }
  uVar9 = 0x1ac;
LAB_14f678359:
  local_78 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,0x50,uVar9,uVar5);
  return 0;
}

// tls_construct_server_certificate @ 14f6786e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_server_certificate(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  if (lVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1ea,0x44,"ssl\\statem\\statem_srvr.c",0x100000ed7);
    return false;
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    iVar2 = WPACKET_put_bytes__(param_2,0,1);
    if (iVar2 == 0) {
      ossl_statem_fatal(param_1,0x50,0x1ea,0x44,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar3,0xee1));
      return false;
    }
  }
  iVar2 = ssl3_output_cert_chain(param_1,param_2,lVar1);
  return iVar2 != 0;
}

// tls_construct_server_done @ 14f6787f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_server_done(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) == 0) {
    uVar1 = ssl3_digest_cached_records(param_1,0,param_3,param_4,0x14f6787fa);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  return 1;
}

// tls_construct_server_hello @ 14f678830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_server_hello(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined4 uVar8;
  
  uVar8 = 1;
  iVar2 = 0;
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
       (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) ||
     (param_1[0x136] == 1)) {
    iVar5 = 1;
    iVar1 = 0x303;
  }
  else {
    iVar1 = *param_1;
    iVar5 = iVar2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,(longlong)iVar1,2);
  if (iVar1 != 0) {
    if (param_1[0x136] == 1) {
      puVar3 = &hrrrandom;
    }
    else {
      puVar3 = (undefined *)(*(longlong *)(param_1 + 0x2a) + 0x98);
    }
    iVar1 = WPACKET_memcpy(param_2,puVar3,0x20);
    if (iVar1 != 0) {
      if ((*(int *)(*(longlong *)(param_1 + 0x142) + 0x1b0) != 0) ||
         (((*(byte *)(*(longlong *)(param_1 + 0x166) + 0x48) & 2) == 0 && (param_1[0x32] == 0)))) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x150) = 0;
      }
      if (iVar5 == 0) {
        uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x142) + 0x150);
        piVar4 = (int *)(*(longlong *)(param_1 + 0x142) + 0x158);
      }
      else {
        uVar6 = *(ulonglong *)(param_1 + 0x154);
        piVar4 = param_1 + 0x14c;
      }
      if (uVar6 < 0x21) {
        if ((iVar5 == 0) && (*(int **)(*(longlong *)(param_1 + 0x2a) + 0x298) != (int *)0x0)) {
          iVar2 = **(int **)(*(longlong *)(param_1 + 0x2a) + 0x298);
        }
        iVar1 = WPACKET_sub_memcpy__(param_2,piVar4,uVar6,1);
        if (((iVar1 != 0) &&
            (iVar1 = (**(code **)(*(longlong *)(param_1 + 2) + 0x98))
                               (*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x238),param_2,
                                local_res8), iVar1 != 0)) &&
           (iVar2 = WPACKET_put_bytes__(param_2,(longlong)iVar2,1), iVar2 != 0)) {
          if (param_1[0x136] == 1) {
            uVar7 = 0x800;
          }
          else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
                   (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) ||
                  (uVar7 = 0x200, iVar2 == 0x10000)) {
            uVar7 = 0x100;
          }
          iVar2 = tls_construct_extensions(param_1,param_2,uVar7,0,0);
          if (iVar2 == 0) {
            return 0;
          }
          if (param_1[0x136] == 1) {
            SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
            param_1[0x142] = 0;
            param_1[0x143] = 0;
            param_1[0x32] = 0;
            iVar2 = create_synthetic_message_hash(param_1,0,0,0,0);
          }
          else {
            if ((*(byte *)(param_1 + 0x156) & 1) != 0) {
              return 1;
            }
            iVar2 = ssl3_digest_cached_records(param_1,0);
          }
          if (iVar2 == 0) {
            return 0;
          }
          return 1;
        }
        uVar7 = CONCAT44(uVar8,0x987);
      }
      else {
        uVar7 = CONCAT44(uVar8,0x975);
      }
      goto LAB_14f678a7f;
    }
  }
  uVar7 = CONCAT44(uVar8,0x950);
LAB_14f678a7f:
  ossl_statem_fatal(param_1,0x50,0x1eb,0x44,"ssl\\statem\\statem_srvr.c",uVar7);
  return 0;
}

// tls_construct_server_key_exchange @ 14f678ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 tls_construct_server_key_exchange(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined4 local_c0;
  longlong local_b8;
  void *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68 [5];
  undefined8 uStack_40;
  char *pcVar12;
  
  uStack_40 = 0x14f678adf;
  local_68[4] = __security_cookie.value ^ (ulonglong)auStack_e8;
  pcVar10 = (char *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar13 = *(char **)(*(longlong *)(param_1 + 0xa8) + 0x2d8);
  lVar9 = EVP_MD_CTX_new();
  local_98 = 0;
  local_b8 = lVar9;
  iVar6 = WPACKET_get_total_written(param_2,&local_80);
  if (iVar6 == 0) {
    local_c0 = 0x9cc;
    uVar16 = 0x44;
  }
  else {
    if (lVar9 != 0) {
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
      local_68[3] = 0;
      local_68[2] = 0;
      local_68[1] = 0;
      local_68[0] = 0;
      pcVar18 = pcVar10;
      if ((uVar2 & 0x48) != 0) {
LAB_14f678d79:
        pcVar10 = (char *)0x0;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
        pcVar15 = pcVar10;
        if ((((*(byte *)(lVar9 + 0x20) & 0x44) == 0) && ((*(uint *)(lVar9 + 0x1c) & 0x1c8) == 0)) &&
           (pcVar15 = pcVar13, pcVar13 == (char *)0x0)) {
          local_c0 = 0xa70;
          local_c8 = "ssl\\statem\\statem_srvr.c";
          ossl_statem_fatal(param_1,0x32,0x1ec,0x44);
          lVar9 = local_b8;
          goto LAB_14f678f25;
        }
        if ((uVar2 & 0x1c8) != 0) {
          pcVar13 = *(char **)(*(longlong *)(param_1 + 0x488) + 0x200);
          uVar7 = 0;
          if (pcVar13 != (char *)0x0) {
            cVar1 = *pcVar13;
            pcVar14 = pcVar13;
            pcVar12 = pcVar10;
            while ((cVar1 != '\0' && (uVar7 = (uint)pcVar12, uVar7 < 0x80000000))) {
              pcVar14 = pcVar14 + 1;
              uVar7 = uVar7 + 1;
              cVar1 = *pcVar14;
              pcVar12 = (char *)(ulonglong)uVar7;
            }
            uVar7 = uVar7 & 0x7fffffff;
          }
          if ((0x80 < uVar7) || (iVar6 = WPACKET_sub_memcpy__(param_2,pcVar13,uVar7,2), iVar6 == 0))
          {
            local_c0 = 0xa82;
            local_c8 = "ssl\\statem\\statem_srvr.c";
            ossl_statem_fatal(param_1,0x50,0x1ec,0x44);
            lVar9 = local_b8;
            goto LAB_14f678f25;
          }
        }
        do {
          if (local_68[(longlong)pcVar10] == 0) break;
          if ((pcVar10 != (char *)0x2) || (uVar16 = 1, (uVar2 & 0x20) == 0)) {
            uVar16 = 2;
          }
          iVar6 = WPACKET_start_sub_packet_len__(param_2,uVar16);
          if (iVar6 == 0) {
            local_c0 = 0xa96;
            goto LAB_14f679198;
          }
          if ((pcVar10 == (char *)0x2) && ((uVar2 & 0x102) != 0)) {
            iVar6 = BN_num_bits(local_68[0]);
            iVar8 = BN_num_bits(local_68[2]);
            iVar6 = ((int)((iVar6 + 7 >> 0x1f & 7U) + iVar6 + 7) >> 3) -
                    ((int)(iVar8 + 7 + (iVar8 + 7 >> 0x1f & 7U)) >> 3);
            if (iVar6 != 0) {
              iVar8 = WPACKET_allocate_bytes(param_2,(longlong)iVar6,&local_b0);
              if (iVar8 == 0) {
                local_c0 = 0xaa7;
                goto LAB_14f679198;
              }
              memset(local_b0,0,(longlong)iVar6);
            }
          }
          iVar6 = BN_num_bits(local_68[(longlong)pcVar10]);
          iVar6 = WPACKET_allocate_bytes
                            (param_2,(longlong)((int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3),
                             &local_b0);
          if ((iVar6 == 0) || (iVar6 = WPACKET_close(param_2), iVar6 == 0)) {
            local_c0 = 0xab2;
            goto LAB_14f679198;
          }
          BN_bn2bin(local_68[(longlong)pcVar10],local_b0);
          pcVar10 = pcVar10 + 1;
        } while ((longlong)pcVar10 < 4);
        if ((uVar2 & 0x84) != 0) {
          iVar6 = WPACKET_put_bytes__(param_2,3,1);
          if ((((iVar6 == 0) || (iVar6 = WPACKET_put_bytes__(param_2,0,1), iVar6 == 0)) ||
              (iVar6 = WPACKET_put_bytes__(param_2,(int)pcVar18,1), iVar6 == 0)) ||
             (iVar6 = WPACKET_sub_memcpy__(param_2,local_a8,local_a0,1), iVar6 == 0)) {
            local_c0 = 0xac7;
LAB_14f679198:
            local_c8 = "ssl\\statem\\statem_srvr.c";
            ossl_statem_fatal(param_1,0x50,0x1ec,0x44);
            pcVar10 = (char *)0x0;
            lVar9 = local_b8;
            goto LAB_14f678f25;
          }
          CRYPTO_free(local_a8,"ssl\\statem\\statem_srvr.c",0xaca);
          local_a8 = 0;
        }
        lVar9 = local_b8;
        if (pcVar15 == (char *)0x0) goto LAB_14f6793fa;
        pcVar13 = *(char **)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) + 8);
        if ((pcVar13 == (char *)0x0) || (iVar6 = tls1_lookup_md(pcVar15,&local_88), iVar6 == 0)) {
          local_c0 = 0xadb;
        }
        else {
          iVar6 = WPACKET_get_length(param_2,&local_78);
          if (iVar6 == 0) {
            local_c0 = 0xae2;
          }
          else {
            if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) ||
               (iVar6 = WPACKET_put_bytes__(param_2,*(undefined2 *)(pcVar15 + 8),2), iVar6 != 0)) {
              iVar6 = EVP_PKEY_size(pcVar13);
              local_b0 = (void *)(longlong)iVar6;
              iVar6 = WPACKET_sub_reserve_bytes__(param_2,local_b0,&local_90,2);
              lVar9 = local_b8;
              if ((iVar6 == 0) ||
                 (local_c8 = pcVar13, iVar6 = EVP_DigestSignInit(local_b8,&local_98,local_88,0),
                 iVar6 < 1)) {
                local_c0 = 0xaf7;
LAB_14f6793c3:
                uVar11 = 0x44;
              }
              else {
                if (*(int *)(pcVar15 + 0x14) != 0x390) {
LAB_14f679331:
                  pcVar13 = (char *)construct_key_exchange_tbs
                                              (param_1,&local_a0,
                                               local_80 +
                                               *(longlong *)(*(longlong *)(param_1 + 0x88) + 8),
                                               local_78);
                  pcVar10 = (char *)0x0;
                  if (pcVar13 == (char *)0x0) goto LAB_14f678f25;
                  local_c8 = pcVar13;
                  iVar6 = EVP_DigestSign(lVar9,local_90,&local_b0,local_a0);
                  CRYPTO_free(local_a0,"ssl\\statem\\statem_srvr.c",0xb0b);
                  if (((0 < iVar6) &&
                      (iVar6 = WPACKET_sub_allocate_bytes__(param_2,local_b0,&local_70,2),
                      iVar6 != 0)) && (local_90 == local_70)) {
LAB_14f6793fa:
                    EVP_MD_CTX_free(lVar9);
                    return 1;
                  }
                  local_c0 = 0xb10;
                  goto LAB_14f6793c3;
                }
                local_c8 = (char *)0x0;
                iVar6 = RSA_pkey_ctx_ctrl(local_98,0xffffffff,0x1001,6);
                if (0 < iVar6) {
                  local_c8 = (char *)0x0;
                  iVar6 = RSA_pkey_ctx_ctrl(local_98,0x18,0x1002);
                  if (0 < iVar6) goto LAB_14f679331;
                }
                local_c0 = 0xaff;
                uVar11 = 6;
              }
              local_c8 = "ssl\\statem\\statem_srvr.c";
              ossl_statem_fatal(param_1,0x50,0x1ec,uVar11);
              pcVar10 = (char *)0x0;
              goto LAB_14f678f25;
            }
            local_c0 = 0xae9;
          }
        }
        local_c8 = "ssl\\statem\\statem_srvr.c";
        ossl_statem_fatal(param_1,0x50,0x1ec,0x44);
        pcVar10 = (char *)0x0;
        lVar9 = local_b8;
        goto LAB_14f678f25;
      }
      pcVar18 = (char *)0x0;
      if ((uVar2 & 0x102) == 0) {
        if ((uVar2 & 0x84) == 0) {
          pcVar10 = (char *)0x0;
          if ((uVar2 & 0x20) == 0) {
            local_c0 = 0xa67;
            uVar11 = 0xfa;
          }
          else {
            if ((((*(longlong *)(param_1 + 0x7d8) != 0) && (*(longlong *)(param_1 + 0x7e0) != 0)) &&
                (*(longlong *)(param_1 + 0x7e8) != 0)) && (*(longlong *)(param_1 + 0x7f0) != 0)) {
              local_68[0] = *(longlong *)(param_1 + 0x7d8);
              local_68[1] = *(longlong *)(param_1 + 0x7e0);
              local_68[2] = *(longlong *)(param_1 + 0x7e8);
              local_68[3] = *(longlong *)(param_1 + 0x7f0);
              goto LAB_14f678d79;
            }
            local_c0 = 0xa5b;
            uVar11 = 0x166;
          }
        }
        else {
          if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
            uVar5 = tls1_shared_group(param_1,0xfffffffe);
            if (uVar5 != 0) {
              uVar11 = ssl_generate_pkey_group(param_1,(char *)(ulonglong)uVar5);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = uVar11;
              lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
              lVar9 = local_b8;
              if (lVar4 == 0) goto LAB_14f678f25;
              local_a0 = EVP_PKEY_get1_tls_encodedpoint(lVar4,&local_a8);
              if (local_a0 != 0) {
                local_68[0] = 0;
                local_68[1] = 0;
                local_68[2] = 0;
                local_68[3] = 0;
                pcVar18 = (char *)(ulonglong)uVar5;
                goto LAB_14f678d79;
              }
              local_c0 = 0xa46;
              uVar17 = 0x10;
              goto LAB_14f678c0e;
            }
            local_c0 = 0xa37;
            uVar16 = 0x28;
            uVar17 = 0x13b;
            uVar11 = 0x1ec;
            goto LAB_14f678c1c;
          }
          local_c0 = 0xa2e;
          uVar11 = 0x44;
        }
LAB_14f678f0f:
        local_c8 = "ssl\\statem\\statem_srvr.c";
        ossl_statem_fatal(param_1,0x50,0x1ec,uVar11);
        lVar9 = local_b8;
      }
      else {
        if (*(int *)(*(longlong *)(param_1 + 0x488) + 0x18) == 0) {
          pcVar15 = *(char **)(*(longlong *)(param_1 + 0x488) + 8);
LAB_14f678c3a:
          if (pcVar15 == (char *)0x0) {
            pcVar3 = *(code **)(*(longlong *)(param_1 + 0x488) + 0x10);
            if (pcVar3 == (code *)0x0) {
              local_c0 = 0xa02;
              uVar11 = 0xab;
              goto LAB_14f678f0f;
            }
            uVar11 = (*pcVar3)(param_1,0,0x400);
            pcVar10 = (char *)ssl_dh_to_pkey(uVar11);
            pcVar15 = pcVar10;
            if (pcVar10 == (char *)0x0) {
              local_c0 = 0x9fa;
              goto LAB_14f678c08;
            }
          }
          uVar16 = EVP_PKEY_security_bits(pcVar15);
          local_c8 = pcVar15;
          iVar6 = ssl_security(param_1,0x40007,uVar16,0);
          if (iVar6 != 0) {
            if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
              uVar11 = ssl_generate_pkey(pcVar15);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = uVar11;
              if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
                local_c0 = 0xa15;
                uVar17 = 0x44;
                uVar11 = 0;
                uVar16 = 0x50;
                goto LAB_14f678c1c;
              }
              lVar9 = EVP_PKEY_get0_DH();
              if (lVar9 != 0) {
                EVP_PKEY_free(pcVar10);
                DH_get0_pqg(lVar9,local_68,0,local_68 + 1);
                DH_get0_key(lVar9,local_68 + 2,0);
                goto LAB_14f678d79;
              }
              local_c0 = 0xa1d;
            }
            else {
              local_c0 = 0xa0f;
            }
            goto LAB_14f678c08;
          }
          local_c0 = 0xa09;
          uVar16 = 0x28;
          uVar17 = 0x18a;
        }
        else {
          lVar9 = ssl_get_auto_dh(param_1);
          pcVar10 = (char *)EVP_PKEY_new();
          if ((pcVar10 != (char *)0x0) && (lVar9 != 0)) {
            EVP_PKEY_assign(pcVar10,0x1c,lVar9);
            pcVar15 = pcVar10;
            goto LAB_14f678c3a;
          }
          DH_free(lVar9);
          local_c0 = 0x9ec;
LAB_14f678c08:
          uVar17 = 0x44;
LAB_14f678c0e:
          uVar16 = 0x50;
        }
        uVar11 = 0x1ec;
LAB_14f678c1c:
        local_c8 = "ssl\\statem\\statem_srvr.c";
        ossl_statem_fatal(param_1,uVar16,uVar11,uVar17);
        lVar9 = local_b8;
      }
      goto LAB_14f678f25;
    }
    local_c0 = 0x9d2;
    uVar16 = 0x41;
  }
  local_c8 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,0x50,0x1ec,uVar16);
LAB_14f678f25:
  EVP_PKEY_free(pcVar10);
  CRYPTO_free(local_a8,"ssl\\statem\\statem_srvr.c",0xb1c);
  EVP_MD_CTX_free(lVar9);
  return 0;
}

// FUN_14f679440 @ 14f679440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f679440(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar15;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar16;
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  uint *puVar14;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uStack_48 = 0x14f67945a;
  piVar1 = *(int **)(param_1 + 0x1ce);
  puVar10 = (uint *)0x0;
  local_res10[0] = 0x50;
  local_res20 = 0;
  puVar15 = (uint *)0x0;
  local_58 = 0;
  local_res8[0] = 0;
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x1e8);
  if (pcVar2 == (code *)0x0) {
LAB_14f679543:
    lVar8 = *(longlong *)(param_1 + 0x2a);
    iVar4 = piVar1[3];
    iVar6 = piVar1[4];
    iVar3 = piVar1[5];
    *(int *)(lVar8 + 0xb8) = piVar1[2];
    *(int *)(lVar8 + 0xbc) = iVar4;
    *(int *)(lVar8 + 0xc0) = iVar6;
    *(int *)(lVar8 + 0xc4) = iVar3;
    iVar4 = piVar1[7];
    iVar6 = piVar1[8];
    iVar3 = piVar1[9];
    *(int *)(lVar8 + 200) = piVar1[6];
    *(int *)(lVar8 + 0xcc) = iVar4;
    *(int *)(lVar8 + 0xd0) = iVar6;
    *(int *)(lVar8 + 0xd4) = iVar3;
    if (*piVar1 != 0) {
      uVar5 = piVar1[1];
      if ((uVar5 == 2) || ((uVar5 & 0xff00) != 0x300)) {
        uVar7 = 0x67d;
        uVar11 = 0x46;
        iVar4 = 0xfc;
        goto LAB_14f6794d3;
      }
      param_1[0x17b] = uVar5;
    }
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) {
      iVar4 = ssl_choose_server_version(param_1,piVar1,local_res8);
      if (iVar4 != 0) {
LAB_14f679665:
        if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
          iVar6 = piVar1[1];
          param_1[0x17b] = iVar6;
          *param_1 = iVar6;
        }
        uVar7 = 0x696;
        uVar11 = 0x46;
        goto LAB_14f6794d3;
      }
    }
    else if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar4 = piVar1[1];
      iVar6 = *param_1;
      if (iVar4 == 0x100) {
        iVar4 = 0xff00;
      }
      if (iVar6 == 0x100) {
        iVar6 = 0xff00;
      }
      if (iVar6 < iVar4) {
        iVar4 = 0x18c;
        goto LAB_14f679665;
      }
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
         (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) &&
       (iVar4 = RECORD_LAYER_processed_read_pending(param_1 + 0x20c), iVar4 != 0)) {
      uVar7 = 0x69e;
      uVar11 = 10;
      iVar4 = 0xb6;
      goto LAB_14f6794d3;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) {
      uVar5 = SSL_get_options(param_1);
      if ((uVar5 >> 0xd & 1) == 0) {
LAB_14f679737:
        if ((**(int **)(param_1 + 2) != 0x1ffff) ||
           (iVar4 = ssl_choose_server_version(param_1,piVar1,local_res8), iVar4 == 0))
        goto LAB_14f679785;
        uVar11 = 0x46;
        uVar7 = 0x6be;
        *param_1 = param_1[0x17b];
      }
      else {
        if (*(code **)(*(longlong *)(param_1 + 0x166) + 200) == (code *)0x0) {
          _Size = *(size_t *)((longlong)*(void **)(param_1 + 0x2c) + 0x100);
          if ((_Size == *(size_t *)(piVar1 + 0x14)) &&
             (iVar4 = memcmp(piVar1 + 0x16,*(void **)(param_1 + 0x2c),_Size), iVar4 == 0))
          goto LAB_14f679726;
          uVar7 = 0x6b4;
        }
        else {
          iVar4 = (**(code **)(*(longlong *)(param_1 + 0x166) + 200))
                            (param_1,piVar1 + 0x16,piVar1[0x14]);
          if (iVar4 != 0) {
LAB_14f679726:
            *(undefined4 *)(*(longlong *)(param_1 + 0x2c) + 0x108) = 1;
            goto LAB_14f679737;
          }
          uVar7 = 0x6aa;
        }
        uVar11 = 0x28;
        iVar4 = 0x134;
      }
      goto LAB_14f6794d3;
    }
LAB_14f679785:
    param_1[0x32] = 0;
    iVar4 = ssl_cache_cipherlist(param_1,piVar1 + 0x56,*piVar1);
    if ((iVar4 != 0) &&
       (iVar4 = bytes_to_cipher_list
                          (param_1,piVar1 + 0x56,&local_res20,&local_58,CONCAT44(uVar11,*piVar1),
                           CONCAT44(uVar16,1)), iVar4 != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x3d8) = 0;
      if ((local_58 != 0) && (iVar4 = OPENSSL_sk_num(), puVar14 = puVar10, 0 < iVar4)) {
        do {
          uVar7 = OPENSSL_sk_value(local_58,puVar14);
          iVar4 = SSL_CIPHER_get_id(uVar7);
          if (iVar4 == 0x30000ff) {
            if (param_1[0x1e0] != 0) {
              uVar7 = 0x6d8;
              uVar11 = 0x28;
              iVar4 = 0x159;
              goto LAB_14f6794d3;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x3d8) = 1;
          }
          else {
            iVar4 = SSL_CIPHER_get_id(uVar7);
            if ((iVar4 == 0x3005600) && (iVar4 = ssl_check_version_downgrade(param_1), iVar4 == 0))
            {
              uVar7 = 0x6e7;
              uVar11 = 0x56;
              iVar4 = 0x175;
              goto LAB_14f6794d3;
            }
          }
          uVar5 = (int)puVar14 + 1;
          iVar4 = OPENSSL_sk_num(local_58);
          puVar14 = (uint *)(ulonglong)uVar5;
        } while ((int)uVar5 < iVar4);
      }
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
          (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
        uVar7 = SSL_get_ciphers(param_1);
        lVar8 = ssl3_choose_cipher(param_1,local_res20,uVar7);
        if (lVar8 != 0) {
          if ((param_1[0x136] == 1) &&
             ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) == 0 ||
              (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x18) !=
               *(int *)(lVar8 + 0x18))))) {
            uVar7 = 0x701;
            uVar11 = 0x2f;
            iVar4 = 0xba;
            goto LAB_14f6794d3;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) = lVar8;
          goto LAB_14f67995d;
        }
        uVar7 = 0x6f5;
LAB_14f6798bf:
        uVar11 = 0x28;
        iVar4 = 0xc1;
      }
      else {
LAB_14f67995d:
        iVar4 = tls_parse_extension(param_1,0xd,0x80,*(undefined8 *)(piVar1 + 0xa2),0,0);
        if (iVar4 == 0) goto LAB_14f6794e1;
        if ((*piVar1 == 0) && ((param_1[0xf] == 0 || ((param_1[0x173] & 0x10000U) == 0)))) {
          iVar4 = ssl_get_prev_session(param_1,piVar1);
          if (iVar4 != 1) {
            if (iVar4 == -1) goto LAB_14f6794e1;
            iVar4 = ssl_get_new_session(param_1,1);
            goto joined_r0x00014f6799e4;
          }
          param_1[0x32] = 1;
        }
        else {
          iVar4 = ssl_get_new_session(param_1,1);
joined_r0x00014f6799e4:
          if (iVar4 == 0) goto LAB_14f6794e1;
        }
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
            (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
          memcpy(param_1 + 0x14c,(void *)(*(longlong *)(param_1 + 0x1ce) + 0x30),
                 *(size_t *)(*(longlong *)(param_1 + 0x1ce) + 0x28));
          *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x28);
        }
        uVar5 = 0;
        if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
             (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) ||
           (param_1[0x32] == 0)) {
LAB_14f679ac1:
          puVar14 = *(uint **)(piVar1 + 0x5a);
          puVar9 = puVar10;
          if (puVar14 != (uint *)0x0) {
            do {
              if (*(char *)((longlong)(piVar1 + 0x5c) + (longlong)puVar9) == '\0') break;
              puVar9 = (uint *)((longlong)puVar9 + 1);
            } while (puVar9 < puVar14);
          }
          if (puVar9 < puVar14) {
            if ((*(byte *)(param_1 + 0x173) & 0x40) != 0) {
              FUN_14f677cd0(param_1,piVar1);
            }
            uVar11 = 0;
            iVar4 = tls_parse_all_extensions(param_1,0x80,*(undefined8 *)(piVar1 + 0xa2),0,0,1);
            if (iVar4 == 0) goto LAB_14f6794e1;
            iVar4 = ssl_fill_hello_random
                              (param_1,1,*(longlong *)(param_1 + 0x2a) + 0x98,0x20,
                               CONCAT44(uVar11,local_res8[0]));
            if (iVar4 < 1) {
              uVar7 = 0x784;
LAB_14f679b76:
              uVar11 = 0x50;
              iVar4 = 0x44;
            }
            else {
              if ((param_1[0x32] == 0) && (0x300 < *param_1)) {
                uVar12 = *(uint *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8;
                if ((((uVar12 != 0) ||
                     ((iVar4 = **(int **)(param_1 + 2), iVar4 < 0x304 || (iVar4 == 0x10000)))) &&
                    (uVar12 == 0)) && (*(code **)(param_1 + 0x1b6) != (code *)0x0)) {
                  local_50 = 0;
                  local_res18[0] = 0x100;
                  iVar4 = (**(code **)(param_1 + 0x1b6))
                                    (param_1,*(longlong *)(param_1 + 0x142) + 0x50,local_res18,
                                     local_res20,&local_50,*(undefined8 *)(param_1 + 0x1b8));
                  if ((iVar4 != 0) && (0 < local_res18[0])) {
                    *(longlong *)(*(longlong *)(param_1 + 0x142) + 8) = (longlong)local_res18[0];
                    *(longlong *)(param_1 + 0x44) = local_res20;
                    param_1[0x32] = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x142) + 0x1c8) = 0;
                    local_res20 = 0;
                    if (local_50 == 0) {
                      uVar7 = SSL_get_ciphers(param_1);
                      local_50 = ssl3_choose_cipher(param_1,*(undefined8 *)(param_1 + 0x44),uVar7);
                      if (local_50 == 0) {
                        uVar7 = 0x7a9;
                        goto LAB_14f6798bf;
                      }
                    }
                    *(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1e0) = local_50;
                    OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x46));
                    uVar7 = OPENSSL_sk_dup(*(undefined8 *)(param_1 + 0x44));
                    *(undefined8 *)(param_1 + 0x46) = uVar7;
                    OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x48));
                    uVar7 = OPENSSL_sk_dup(*(undefined8 *)(param_1 + 0x44));
                    *(undefined8 *)(param_1 + 0x48) = uVar7;
                  }
                }
              }
              *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x298) = 0;
              if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                  (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
                puVar15 = puVar10;
                if (*(longlong *)(piVar1 + 0x5a) == 1) {
LAB_14f679f00:
                  if ((param_1[0x32] == 0) ||
                     ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
                       (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)))) {
                    OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x44));
                    *(longlong *)(param_1 + 0x44) = local_res20;
                    if (local_res20 == 0) {
                      uVar7 = 0x81e;
                      goto LAB_14f679b76;
                    }
                    local_res20 = 0;
                  }
                  if (param_1[0x32] == 0) {
                    if (puVar15 != (uint *)0x0) {
                      uVar5 = *puVar15;
                    }
                    *(uint *)(*(longlong *)(param_1 + 0x142) + 0x1d8) = uVar5;
                    iVar4 = tls1_set_server_sigalgs(param_1);
                    if (iVar4 == 0) goto LAB_14f6794e1;
                  }
                  OPENSSL_sk_free(local_res20);
                  OPENSSL_sk_free(local_58);
                  CRYPTO_free(*(undefined8 *)(piVar1 + 0xa2),"ssl\\statem\\statem_srvr.c",0x832);
                  CRYPTO_free(*(undefined8 *)(param_1 + 0x1ce),"ssl\\statem\\statem_srvr.c",0x833);
                  uVar7 = 1;
                  goto LAB_14f67951f;
                }
                uVar7 = 0x7c4;
                uVar11 = 0x2f;
                iVar4 = 0x155;
              }
              else {
                uVar12 = *(uint *)(*(longlong *)(param_1 + 0x142) + 0x1d8);
                if (uVar12 == 0) {
                  if (((param_1[0x32] == 0) && (iVar4 = ssl_allow_compression(param_1), iVar4 != 0))
                     && (*(longlong *)(*(longlong *)(param_1 + 0x166) + 0x100) != 0)) {
                    iVar4 = OPENSSL_sk_num();
                    puVar14 = puVar10;
                    if (0 < iVar4) {
                      do {
                        puVar15 = (uint *)OPENSSL_sk_value(*(undefined8 *)
                                                            (*(longlong *)(param_1 + 0x166) + 0x100)
                                                           ,puVar14);
                        puVar9 = puVar10;
                        if (*(uint **)(piVar1 + 0x5a) != (uint *)0x0) {
                          do {
                            if (*puVar15 ==
                                (uint)*(byte *)((longlong)(puVar9 + 0x5c) + (longlong)piVar1)) {
                              *(uint **)(*(longlong *)(param_1 + 0x2a) + 0x298) = puVar15;
                              goto LAB_14f679f00;
                            }
                            puVar9 = (uint *)(ulonglong)((int)puVar9 + 1);
                          } while (puVar9 < *(uint **)(piVar1 + 0x5a));
                        }
                        uVar12 = (int)puVar14 + 1;
                        puVar14 = (uint *)(ulonglong)uVar12;
                      } while ((int)uVar12 < iVar4);
                    }
                    puVar15 = (uint *)0x0;
                  }
                  goto LAB_14f679f00;
                }
                iVar4 = ssl_allow_compression(param_1);
                if (iVar4 == 0) {
                  uVar7 = 0x7d2;
                  uVar11 = 0x28;
                  iVar4 = 0x154;
                }
                else {
                  iVar4 = OPENSSL_sk_num(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100));
                  puVar14 = puVar10;
                  puVar15 = puVar10;
                  if (0 < iVar4) {
                    do {
                      puVar15 = (uint *)OPENSSL_sk_value(*(undefined8 *)
                                                          (*(longlong *)(param_1 + 0x166) + 0x100),
                                                         puVar14);
                      if (uVar12 == *puVar15) {
                        *(uint **)(*(longlong *)(param_1 + 0x2a) + 0x298) = puVar15;
                        break;
                      }
                      uVar13 = (int)puVar14 + 1;
                      puVar14 = (uint *)(ulonglong)uVar13;
                      iVar4 = OPENSSL_sk_num(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100)
                                            );
                    } while ((int)uVar13 < iVar4);
                  }
                  if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x298) == 0) {
                    uVar7 = 0x7e0;
                    uVar11 = 0x28;
                    iVar4 = 0x155;
                  }
                  else {
                    puVar14 = *(uint **)(piVar1 + 0x5a);
                    if (puVar14 != (uint *)0x0) {
                      do {
                        if (*(byte *)((longlong)(puVar10 + 0x5c) + (longlong)piVar1) == uVar12)
                        break;
                        puVar10 = (uint *)(ulonglong)((int)puVar10 + 1);
                      } while (puVar10 < puVar14);
                    }
                    if (puVar10 < puVar14) goto LAB_14f679f00;
                    uVar7 = 0x7eb;
                    uVar11 = 0x2f;
                    iVar4 = 0x156;
                  }
                }
              }
            }
          }
          else {
            uVar7 = 0x768;
            uVar11 = 0x32;
            iVar4 = 0xbb;
          }
        }
        else {
          iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1e0) + 0x18);
          iVar6 = OPENSSL_sk_num(local_res20);
          puVar14 = puVar10;
          if (0 < iVar6) {
            do {
              lVar8 = OPENSSL_sk_value(local_res20,puVar14);
              if (*(int *)(lVar8 + 0x18) == iVar4) goto LAB_14f679ac1;
              uVar12 = (int)puVar14 + 1;
              puVar14 = (uint *)(ulonglong)uVar12;
              iVar6 = OPENSSL_sk_num(local_res20);
            } while ((int)uVar12 < iVar6);
          }
          uVar7 = 0x75a;
          uVar11 = 0x2f;
          iVar4 = 0xd7;
        }
      }
      goto LAB_14f6794d3;
    }
  }
  else {
    iVar4 = (*pcVar2)(param_1,local_res10,*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x1f0));
    if (iVar4 == -1) {
      param_1[10] = 7;
      return 0xffffffff;
    }
    if (iVar4 == 1) goto LAB_14f679543;
    iVar4 = 0xea;
    uVar7 = 0x669;
    uVar11 = local_res10[0];
LAB_14f6794d3:
    ossl_statem_fatal(param_1,uVar11,0x209,iVar4,"ssl\\statem\\statem_srvr.c",uVar7);
  }
LAB_14f6794e1:
  OPENSSL_sk_free(local_res20);
  OPENSSL_sk_free(local_58);
  CRYPTO_free(*(undefined8 *)(piVar1 + 0xa2),"ssl\\statem\\statem_srvr.c",0x839);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x1ce),"ssl\\statem\\statem_srvr.c",0x83a);
  uVar7 = 0;
LAB_14f67951f:
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  return uVar7;
}

// tls_handle_alpn @ 14f679ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_handle_alpn(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte local_res8 [8];
  void *local_res10;
  undefined8 uVar6;
  
  local_res10 = (void *)0x0;
  local_res8[0] = 0;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x260);
  if (pcVar1 != (code *)0x0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3f0);
    if (lVar2 != 0) {
      iVar3 = (*pcVar1)(param_1,&local_res10,local_res8,lVar2,
                        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3f8),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x268));
      if (iVar3 == 0) {
        CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                    "ssl\\statem\\statem_srvr.c",0x882);
        uVar4 = CRYPTO_memdup(local_res10,local_res8[0],"ssl\\statem\\statem_srvr.c",0x883);
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) = uVar4;
        lVar2 = *(longlong *)(param_1 + 0xa8);
        if (*(longlong *)(lVar2 + 0x3e0) != 0) {
          *(ulonglong *)(lVar2 + 1000) = (ulonglong)local_res8[0];
          *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 0;
          lVar2 = *(longlong *)(param_1 + 0x508);
          if (((*(void **)(lVar2 + 0x230) != (void *)0x0) &&
              ((ulonglong)local_res8[0] == *(ulonglong *)(lVar2 + 0x238))) &&
             (iVar3 = memcmp(local_res10,*(void **)(lVar2 + 0x230),(ulonglong)local_res8[0]),
             iVar3 == 0)) {
            return 1;
          }
          *(undefined4 *)(param_1 + 0x714) = 0;
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          if (*(longlong *)(lVar2 + 0x230) == 0) {
            uVar4 = CRYPTO_memdup(local_res10,local_res8[0],"ssl\\statem\\statem_srvr.c",0x8a5);
            *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x230) = uVar4;
            if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x230) != 0) {
              *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x238) = (ulonglong)local_res8[0];
              return 1;
            }
            uVar4 = 0x8a9;
          }
          else {
            uVar4 = 0x8a1;
          }
          ossl_statem_fatal(param_1,0x50,0x232,0x44,"ssl\\statem\\statem_srvr.c",uVar4);
          return 0;
        }
        *(undefined8 *)(lVar2 + 1000) = 0;
        uVar4 = 0x50;
        uVar6 = 0x887;
        uVar5 = 0x44;
      }
      else {
        if (iVar3 == 3) goto LAB_14f67a221;
        uVar4 = 0x78;
        uVar6 = 0x8b3;
        uVar5 = 0xeb;
      }
      ossl_statem_fatal(param_1,uVar4,0x232,uVar5,"ssl\\statem\\statem_srvr.c",uVar6);
      return 0;
    }
  }
LAB_14f67a221:
  if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x230) != 0) {
    *(undefined4 *)(param_1 + 0x714) = 0;
  }
  return 1;
}

// FUN_14f67a250 @ 14f67a250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f67a250(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  *(undefined4 *)(param_1 + 0x654) = 0;
  if ((((*(int *)(param_1 + 0x640) != -1) && (*(longlong *)(param_1 + 0x598) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x228) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0), lVar1 != 0)) {
    **(longlong **)(param_1 + 0x488) = lVar1;
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0x598) + 0x228))
                      (param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x230));
    if (iVar2 != 0) {
      if (iVar2 != 3) {
        ossl_statem_fatal(param_1,0x50,0x233,0xe2,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar3,0x869)
                         );
        return 0;
      }
      *(undefined4 *)(param_1 + 0x654) = 0;
      return 1;
    }
    if (*(longlong *)(param_1 + 0x668) != 0) {
      *(undefined4 *)(param_1 + 0x654) = 1;
    }
  }
  return 1;
}

// tls_post_process_client_hello @ 14f67a350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_post_process_client_hello(longlong param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = 1;
  if (param_2 == 3) {
    uVar3 = 1;
    iVar2 = FUN_14f679440();
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 < 0) {
      return 3;
    }
  }
  else if (param_2 != 4) {
    if (param_2 != 5) {
      return 1;
    }
    goto LAB_14f67a582;
  }
  if (*(int *)(param_1 + 200) == 0) {
LAB_14f67a3da:
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x488) + 0x1b8);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1c0));
      if (iVar2 == 0) {
        ossl_statem_fatal(param_1,0x50,0x17a,0x179,"ssl\\statem\\statem_srvr.c",
                          CONCAT44(uVar3,0x8db));
        return 0;
      }
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x28) = 4;
        return 4;
      }
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
LAB_14f67a44b:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
      uVar4 = SSL_get_ciphers(param_1);
      lVar5 = ssl3_choose_cipher(param_1,*(undefined8 *)(param_1 + 0x110),uVar4);
      if (lVar5 == 0) {
        ossl_statem_fatal(param_1,0x28,0x17a,0xc1,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar3,0x8ed)
                         );
        return 0;
      }
      *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) = lVar5;
    }
    if (*(int *)(param_1 + 200) == 0) {
      iVar2 = tls_choose_sigalg(param_1,1);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(code **)(param_1 + 0x828) != (code *)0x0) {
        uVar3 = (**(code **)(param_1 + 0x828))
                          (param_1,(*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) +
                                             0x1c) & 6) != 0);
        *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1b0) = uVar3;
      }
      if (*(int *)(*(longlong *)(param_1 + 0x508) + 0x1b0) != 0) {
        *(undefined4 *)(param_1 + 0x678) = 0;
      }
    }
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      if (*(int *)(param_1 + 200) == 0) goto LAB_14f67a3da;
      goto LAB_14f67a44b;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
  }
  iVar2 = FUN_14f67a250(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
       (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
     (iVar2 = tls_handle_alpn(param_1), iVar2 == 0)) {
    return 0;
  }
LAB_14f67a582:
  iVar2 = FUN_14f677e00(param_1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 4;
    return 5;
  }
  if (iVar2 < 0) {
    return 0;
  }
  return 1;
}

// tls_post_process_client_key_exchange @ 14f67a5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte tls_post_process_client_key_exchange(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x74) == 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8) != 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe0) == 0) {
      ossl_statem_fatal(param_1,0x50,0x180,0x44,"ssl\\statem\\statem_srvr.c",0xdf7,0x14f67a5ca);
      return 0;
    }
    iVar1 = ssl3_digest_cached_records(param_1,1);
    return -(iVar1 != 0) & 2;
  }
  iVar1 = ssl3_digest_cached_records(param_1,0);
  return -(iVar1 != 0) & 2;
}

// FUN_14f67a660 @ 14f67a660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f67a660(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  uVar15 = 1;
  lVar10 = 0;
  uVar13 = 0;
  if ((ulonglong)param_2[1] < 2) {
LAB_14f67a821:
    uVar14 = 0x100000c6d;
    uVar12 = 0x94;
LAB_14f67a82f:
    uVar8 = 0x32;
    lVar10 = 0;
  }
  else {
    puVar2 = (undefined1 *)*param_2;
    uVar7 = param_2[1] - 2;
    puVar1 = puVar2 + 2;
    uVar9 = (uint)CONCAT11(*puVar2,puVar2[1]);
    *param_2 = (longlong)puVar1;
    uVar11 = (ulonglong)uVar9;
    param_2[1] = uVar7;
    if (uVar7 != uVar11) goto LAB_14f67a821;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
    if (lVar3 != 0) {
      if (uVar7 != 0) {
        if (uVar7 < uVar11) {
          uVar8 = 0x50;
          uVar14 = 0x100000c7f;
          uVar12 = 0x44;
        }
        else {
          *param_2 = (longlong)(puVar1 + uVar9);
          param_2[1] = uVar7 - uVar11;
          lVar10 = EVP_PKEY_new();
          if (lVar10 != 0) {
            iVar4 = EVP_PKEY_copy_parameters(lVar10,lVar3);
            if (iVar4 != 0) {
              lVar5 = EVP_PKEY_get0_DH(lVar10);
              lVar6 = BN_bin2bn(puVar1,uVar9,0);
              if ((lVar6 != 0) && (lVar5 != 0)) {
                iVar4 = DH_set0_key(lVar5,lVar6,0);
                if (iVar4 != 0) {
                  iVar4 = ssl_derive(param_1,lVar3,lVar10,1);
                  if (iVar4 != 0) {
                    uVar13 = 1;
                    EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
                    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
                  }
                  goto LAB_14f67a84e;
                }
              }
              ossl_statem_fatal(param_1,0x50,0x19b,0x44,"ssl\\statem\\statem_srvr.c",
                                CONCAT44(uVar15,0xc8d));
              BN_free(lVar6);
              goto LAB_14f67a84e;
            }
          }
          uVar8 = 0x50;
          uVar14 = CONCAT44(uVar15,0xc85);
          uVar12 = 0x82;
        }
        goto LAB_14f67a834;
      }
      uVar14 = 0x100000c79;
      uVar12 = 0xab;
      goto LAB_14f67a82f;
    }
    uVar8 = 0x50;
    uVar14 = 0x100000c73;
    uVar12 = 0xab;
    lVar10 = 0;
  }
LAB_14f67a834:
  ossl_statem_fatal(param_1,uVar8,0x19b,uVar12,"ssl\\statem\\statem_srvr.c",uVar14);
LAB_14f67a84e:
  EVP_PKEY_free(lVar10);
  return uVar13;
}

// FUN_14f67a880 @ 14f67a880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f67a880(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = 1;
  lVar5 = 0;
  uVar10 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
  if (param_2[1] == 0) {
    ossl_statem_fatal(param_1,0x28,0x19c,0x137,"ssl\\statem\\statem_srvr.c",0x100000caf);
    goto LAB_14f67aa04;
  }
  uVar8 = param_2[1] - 1;
  bVar2 = *(byte *)*param_2;
  uVar6 = (ulonglong)bVar2;
  pbVar1 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar1;
  param_2[1] = uVar8;
  if (uVar8 < uVar6) {
LAB_14f67a9cf:
    uVar7 = 0x32;
    uVar11 = 0x100000cbe;
    uVar9 = 0x9f;
  }
  else {
    *param_2 = (longlong)(pbVar1 + uVar6);
    param_2[1] = uVar8 - uVar6;
    if (uVar8 - uVar6 != 0) goto LAB_14f67a9cf;
    if (lVar3 == 0) {
      uVar11 = 0x100000cc3;
      uVar7 = 0x50;
      uVar9 = 0x137;
    }
    else {
      lVar5 = EVP_PKEY_new();
      if ((lVar5 == 0) || (iVar4 = EVP_PKEY_copy_parameters(lVar5,lVar3), iVar4 < 1)) {
        uVar7 = 0x50;
        uVar11 = CONCAT44(uVar9,0xcca);
        uVar9 = 6;
      }
      else {
        iVar4 = EVP_PKEY_set1_tls_encodedpoint(lVar5,pbVar1,bVar2);
        if (iVar4 != 0) {
          iVar4 = ssl_derive(param_1,lVar3,lVar5,1);
          if (iVar4 != 0) {
            uVar10 = 1;
            EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
          }
          goto LAB_14f67aa04;
        }
        uVar11 = CONCAT44(uVar9,0xccf);
        uVar7 = 0x50;
        uVar9 = 0x10;
      }
    }
  }
  ossl_statem_fatal(param_1,uVar7,0x19c,uVar9,"ssl\\statem\\statem_srvr.c",uVar11);
LAB_14f67aa04:
  EVP_PKEY_free(lVar5);
  return uVar10;
}

// FUN_14f67aa30 @ 14f67aa30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14f67aa30(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f67aa42;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar7 = 0;
  local_58[1] = 0x20;
  lVar8 = 0;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
  if ((char)uVar1 < '\0') {
    lVar3 = *(longlong *)(param_1 + 0x488);
    lVar8 = *(longlong *)(lVar3 + 0x118);
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(lVar3 + 0xf0), lVar8 == 0)) {
LAB_14f67aaa9:
      lVar8 = *(longlong *)(lVar3 + 200);
    }
  }
  else if ((uVar1 & 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x488);
    goto LAB_14f67aaa9;
  }
  lVar8 = EVP_PKEY_CTX_new(lVar8,0);
  if (lVar8 == 0) {
    local_60 = CONCAT44(local_60._4_4_,0xd35);
    uVar9 = 0x41;
LAB_14f67aace:
    local_68 = "ssl\\statem\\statem_srvr.c";
    ossl_statem_fatal(param_1,0x50,0x19d,uVar9);
    return 0;
  }
  iVar2 = EVP_PKEY_decrypt_init(lVar8);
  if (iVar2 < 1) {
    local_60 = CONCAT44(local_60._4_4_,0xd3a);
    uVar9 = 0x44;
    goto LAB_14f67aace;
  }
  lVar3 = X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
  if ((lVar3 != 0) && (iVar2 = EVP_PKEY_derive_set_peer(lVar8,lVar3), iVar2 < 1)) {
    ERR_clear_error();
  }
  local_58[0] = *param_2;
  plVar4 = (longlong *)ASN1_item_d2i(0,local_58,(int)param_2[1],&DAT_15347d9c0);
  if (((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) || (iVar2 = ASN1_TYPE_get(), iVar2 != 0x10)) {
    local_60 = CONCAT44(local_60._4_4_,0xd51);
    uVar6 = 0x32;
  }
  else {
    uVar5 = local_58[0] - *param_2;
    if ((ulonglong)param_2[1] < uVar5) {
      local_60 = CONCAT44(local_60._4_4_,0xd57);
      uVar6 = 0x50;
    }
    else {
      lVar3 = param_2[1] - uVar5;
      *param_2 = *param_2 + uVar5;
      param_2[1] = lVar3;
      if (lVar3 == 0) {
        local_68 = (char *)(longlong)**(int **)(*plVar4 + 8);
        iVar2 = EVP_PKEY_decrypt(lVar8,local_48,local_58 + 1,
                                 *(undefined8 *)(*(int **)(*plVar4 + 8) + 2));
        if (0 < iVar2) {
          iVar2 = ssl_generate_master_secret(param_1,local_48,0x20);
          if (iVar2 != 0) {
            local_60 = 0;
            local_68 = (char *)CONCAT44(local_68._4_4_,2);
            iVar2 = EVP_PKEY_CTX_ctrl(lVar8,0xffffffff,0xffffffff,2);
            if (0 < iVar2) {
              *(undefined4 *)(param_1 + 0x74) = 1;
            }
            uVar7 = 1;
          }
          goto LAB_14f67ac82;
        }
        local_60 = CONCAT44(local_60._4_4_,0xd67);
        uVar6 = 0x32;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,0xd5d);
        uVar6 = 0x50;
      }
    }
  }
  local_68 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,uVar6,0x19d,0x93);
LAB_14f67ac82:
  EVP_PKEY_CTX_free(lVar8);
  ASN1_item_free(plVar4,&DAT_15347d9c0);
  return uVar7;
}

// FUN_14f67acd0 @ 14f67acd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f67acd0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 auStack_168 [32];
  char *local_148;
  undefined4 local_140;
  undefined1 *local_138;
  ulonglong uStack_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f67acde;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138 = (undefined1 *)*param_2;
  uStack_130 = param_2[1];
  if (1 < uStack_130) {
    puVar6 = local_138 + 2;
    uVar7 = (ulonglong)CONCAT11(*local_138,local_138[1]);
    if (uVar7 <= uStack_130 - 2) {
      uStack_130 = (uStack_130 - 2) - uVar7;
      local_138 = puVar6 + uVar7;
      *param_2 = local_138;
      param_2[1] = uStack_130;
      if (uVar7 < 0x81) {
        if (*(longlong *)(param_1 + 0x580) == 0) {
          local_140 = 0xb84;
          uVar5 = 0x50;
          uVar8 = 0xe1;
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0x508);
          CRYPTO_free(*(undefined8 *)(lVar1 + 0x1a8),
                      "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                      ,0x1e2);
          lVar3 = CRYPTO_strndup(puVar6,uVar7,
                                 "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                 ,0x1e5);
          *(longlong *)(lVar1 + 0x1a8) = lVar3;
          if (lVar3 == 0) {
            local_140 = 0xb8a;
            uVar5 = 0x50;
            uVar8 = 0x44;
          }
          else {
            uVar2 = (**(code **)(param_1 + 0x580))
                              (param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a8),
                               local_128,0x100);
            uVar7 = (ulonglong)uVar2;
            if (uVar7 < 0x101) {
              if (uVar2 == 0) {
                uVar5 = 0x73;
                local_140 = 0xb9b;
                uVar8 = 0xdf;
                goto LAB_14f67aee4;
              }
              CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                          "ssl\\statem\\statem_srvr.c",0xb9f);
              uVar4 = CRYPTO_memdup(local_128,uVar7,"ssl\\statem\\statem_srvr.c",0xba0);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = uVar4;
              OPENSSL_cleanse(local_128,uVar7);
              lVar1 = *(longlong *)(param_1 + 0xa8);
              if (*(longlong *)(lVar1 + 0x2c8) != 0) {
                *(ulonglong *)(lVar1 + 0x2d0) = uVar7;
                return 1;
              }
              *(undefined8 *)(lVar1 + 0x2d0) = 0;
              uVar8 = 0x41;
              local_140 = 0xba6;
            }
            else {
              local_140 = 0xb93;
              uVar8 = 0x44;
            }
            uVar5 = 0x50;
          }
        }
      }
      else {
        uVar5 = 0x32;
        local_140 = 0xb7f;
        uVar8 = 0x92;
      }
LAB_14f67aee4:
      local_148 = "ssl\\statem\\statem_srvr.c";
      ossl_statem_fatal(param_1,uVar5,0x19e,uVar8);
      return 0;
    }
  }
  local_140 = 0xb7a;
  local_148 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,0x32,0x19e,0x9f);
  return 0;
}

// FUN_14f67af60 @ 14f67af60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f67af60(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  undefined4 uVar12;
  byte *pbVar13;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_90;
  uint local_88;
  uint local_84;
  undefined1 *local_80;
  ulonglong uStack_78;
  byte local_70 [48];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar8 = 0;
  lVar5 = EVP_PKEY_get0_RSA(*(undefined8 *)(*(longlong *)(param_1 + 0x122) + 0x28));
  if (lVar5 == 0) {
    local_90 = 0xbc4;
    local_98 = "ssl\\statem\\statem_srvr.c";
    ossl_statem_fatal(param_1,0x50,0x19f,0xa8);
    return 0;
  }
  if ((*param_1 - 0x100 & 0xfffffdff) == 0) {
    puVar7 = (undefined1 *)*param_2;
    uVar9 = param_2[1];
    local_80 = puVar7;
    uStack_78 = uVar9;
LAB_14f67b06e:
    iVar4 = RSA_size(lVar5);
    if (0x2f < iVar4) {
      iVar4 = RSA_size(lVar5);
      pbVar6 = (byte *)CRYPTO_malloc((longlong)iVar4,"ssl\\statem\\statem_srvr.c",0xbe0);
      if (pbVar6 == (byte *)0x0) {
        local_90 = 0xbe3;
        local_98 = "ssl\\statem\\statem_srvr.c";
        ossl_statem_fatal(param_1,0x50,0x19f,0x41);
        return 0;
      }
      iVar4 = RAND_priv_bytes(local_70,0x30);
      if (iVar4 < 1) {
        local_90 = 0xbf2;
        local_98 = "ssl\\statem\\statem_srvr.c";
        ossl_statem_fatal(param_1,0x50,0x19f,0x44);
      }
      else {
        local_98 = (char *)CONCAT44(local_98._4_4_,3);
        iVar4 = RSA_private_decrypt(uVar9 & 0xffffffff,puVar7,pbVar6,lVar5);
        if (iVar4 < 0) {
          local_90 = 0xc00;
          local_98 = "ssl\\statem\\statem_srvr.c";
          ossl_statem_fatal(param_1,0x33,0x19f,0x44);
        }
        else if (iVar4 < 0x3b) {
          local_90 = 0xc0d;
          local_98 = "ssl\\statem\\statem_srvr.c";
          ossl_statem_fatal(param_1,0x33,0x19f,0x93);
        }
        else {
          lVar5 = (longlong)(iVar4 + -0x30);
          uVar9 = 2;
          bVar11 = (char)((byte)((pbVar6[1] ^ 2) - 1 >> 0x18) & (byte)(*pbVar6 - 1 >> 0x18)) >> 7;
          if (2 < lVar5 - 1U) {
            do {
              pbVar1 = pbVar6 + uVar9;
              uVar9 = uVar9 + 1;
              bVar11 = bVar11 & 0xffU - (char)((int)(*pbVar1 - 1) >> 0x1f);
            } while (uVar9 < lVar5 - 1U);
          }
          pbVar1 = pbVar6 + lVar5;
          uVar2 = param_1[0x17b];
          bVar3 = (byte)((uVar2 & 0xff ^ (uint)pbVar1[1]) - 1 >> 0x18) &
                  (byte)(((int)uVar2 >> 8 ^ (uint)*pbVar1) - 1 >> 0x18) &
                  ~(byte)((int)uVar2 >> 0x1f);
          if ((param_1[0x173] & 0x800000) != 0) {
            uVar2 = *param_1;
            bVar3 = bVar3 | (byte)((uVar2 & 0xff ^ (uint)pbVar1[1]) - 1 >> 0x18) &
                            (byte)(((int)uVar2 >> 8 ^ (uint)*pbVar1) - 1 >> 0x18) &
                            ~(byte)((int)uVar2 >> 0x1f);
          }
          bVar11 = bVar11 & (byte)((int)(pbVar6[lVar5 + -1] - 1) >> 0x1f) & (char)bVar3 >> 7;
          local_88 = (uint)bVar11;
          local_84 = ~(uint)bVar11;
          lVar10 = 0x30;
          pbVar13 = pbVar1;
          do {
            *pbVar13 = (pbVar13 + 1)[(longlong)(local_70 + (-(longlong)pbVar6 - lVar5) + -1)] &
                       (byte)local_84 | bVar11 & *pbVar13;
            lVar10 = lVar10 + -1;
            pbVar13 = pbVar13 + 1;
          } while (lVar10 != 0);
          iVar4 = ssl_generate_master_secret(param_1,pbVar1,0x30,0);
          uVar8 = 0;
          if (iVar4 != 0) {
            uVar8 = 1;
          }
        }
      }
      CRYPTO_free(pbVar6,"ssl\\statem\\statem_srvr.c",0xc56);
      return uVar8;
    }
    uVar8 = 0x50;
    local_90 = 0xbdc;
    uVar12 = 0x78;
  }
  else {
    local_80 = (undefined1 *)*param_2;
    uStack_78 = param_2[1];
    if (1 < uStack_78) {
      puVar7 = local_80 + 2;
      uVar9 = (ulonglong)CONCAT11(*local_80,local_80[1]);
      if (uVar9 <= uStack_78 - 2) {
        uStack_78 = (uStack_78 - 2) - uVar9;
        local_80 = puVar7 + uVar9;
        *param_2 = local_80;
        param_2[1] = uStack_78;
        if (param_2[1] == 0) goto LAB_14f67b06e;
      }
    }
    uVar8 = 0x32;
    local_90 = 0xbcf;
    uVar12 = 0x9f;
  }
  local_98 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,uVar8,0x19f,uVar12);
  return 0;
}

// FUN_14f67b390 @ 14f67b390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f67b390(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar9 = 1;
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    uVar11 = param_2[1] - 2;
    uVar2 = *puVar4;
    puVar1 = puVar4 + 2;
    uVar3 = puVar4[1];
    uVar10 = (ulonglong)(uint)CONCAT11(uVar2,uVar3);
    *param_2 = (longlong)puVar1;
    param_2[1] = uVar11;
    if (uVar10 <= uVar11) {
      *param_2 = (longlong)(puVar1 + uVar10);
      param_2[1] = uVar11 - uVar10;
      lVar6 = BN_bin2bn(puVar1,(uint)CONCAT11(uVar2,uVar3),0);
      *(longlong *)(param_1 + 0x7f8) = lVar6;
      if (lVar6 == 0) {
        uVar7 = CONCAT44(uVar9,0xcf6);
        uVar8 = 0x50;
        uVar9 = 3;
      }
      else {
        iVar5 = BN_ucmp(lVar6,*(undefined8 *)(param_1 + 0x7d8));
        if ((iVar5 < 0) && (iVar5 = BN_is_zero(*(undefined8 *)(param_1 + 0x7f8)), iVar5 == 0)) {
          CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x248),
                      "ssl\\statem\\statem_srvr.c",0xcfe);
          uVar7 = CRYPTO_strdup(*(undefined8 *)(param_1 + 2000),"ssl\\statem\\statem_srvr.c",0xcff);
          *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x248) = uVar7;
          if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x248) != 0) {
            iVar5 = srp_generate_server_master_secret(param_1);
            return iVar5 != 0;
          }
          uVar8 = 0x50;
          uVar7 = CONCAT44(uVar9,0xd02);
          uVar9 = 0x41;
        }
        else {
          uVar7 = CONCAT44(uVar9,0xcfb);
          uVar8 = 0x2f;
          uVar9 = 0x173;
        }
      }
      goto LAB_14f67b4fe;
    }
  }
  uVar7 = 0x100000cf1;
  uVar8 = 0x32;
  uVar9 = 0x15b;
LAB_14f67b4fe:
  ossl_statem_fatal(param_1,uVar8,0x1a0,uVar9,"ssl\\statem\\statem_srvr.c",uVar7);
  return false;
}

// tls_process_client_certificate @ 14f67b530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 tls_process_client_certificate(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 local_res8;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 uVar12;
  longlong local_68;
  byte *local_60;
  byte *local_58;
  ulonglong uStack_50;
  byte *local_48;
  ulonglong local_40;
  
  lVar11 = 0;
  local_res8 = 0;
  param_1[0x20] = 0;
  lVar2 = OPENSSL_sk_new_null();
  local_68 = lVar2;
  if (lVar2 == 0) {
    ossl_statem_fatal(param_1,0x50,0x17c,0x41,"ssl\\statem\\statem_srvr.c",0xe1c);
    lVar11 = 0;
    goto LAB_14f67bba4;
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
      (iVar1 = **(int **)(param_1 + 2), iVar1 < 0x304)) || (iVar1 == 0x10000)) goto LAB_14f67b678;
  local_58 = (byte *)*param_2;
  uStack_50 = param_2[1];
  if (uStack_50 != 0) {
    pbVar6 = local_58 + 1;
    uVar9 = (ulonglong)*local_58;
    if ((ulonglong)*local_58 <= uStack_50 - 1) {
      uStack_50 = (uStack_50 - 1) - uVar9;
      local_58 = pbVar6 + uVar9;
      *param_2 = local_58;
      param_2[1] = uStack_50;
      if (*(longlong *)(param_1 + 0x1e4) == 0) {
        if (uVar9 == 0) goto LAB_14f67b678;
      }
      else if ((uVar9 == *(ulonglong *)(param_1 + 0x1e6)) &&
              (iVar1 = CRYPTO_memcmp(pbVar6), iVar1 == 0)) {
LAB_14f67b678:
        local_58 = (byte *)*param_2;
        uStack_50 = param_2[1];
        if (2 < uStack_50) {
          pbVar6 = local_58 + 3;
          uVar4 = (uint)CONCAT21(CONCAT11(*local_58,local_58[1]),local_58[2]);
          uVar9 = (ulonglong)uVar4;
          if (uVar9 <= uStack_50 - 3) {
            uStack_50 = (uStack_50 - 3) - uVar9;
            local_58 = pbVar6 + uVar9;
            *param_2 = local_58;
            param_2[1] = uStack_50;
            if (param_2[1] == 0) {
              local_res18 = 0;
              if (uVar4 != 0) {
                do {
                  if (uVar9 < 3) {
LAB_14f67b93d:
                    uVar5 = 0x32;
                    uVar12 = 0xe35;
                    iVar1 = 0x87;
                    goto LAB_14f67b9cc;
                  }
                  pbVar8 = pbVar6 + 3;
                  uVar10 = (ulonglong)CONCAT21(CONCAT11(*pbVar6,pbVar6[1]),pbVar6[2]);
                  if (uVar9 - 3 < uVar10) goto LAB_14f67b93d;
                  uVar9 = (uVar9 - 3) - uVar10;
                  pbVar6 = pbVar8 + uVar10;
                  local_60 = pbVar8;
                  local_58 = pbVar6;
                  uStack_50 = uVar9;
                  lVar11 = d2i_X509(0,&local_60);
                  if (lVar11 == 0) {
                    uVar5 = 0xe3d;
                    uVar3 = 0xd;
                    goto LAB_14f67bb7f;
                  }
                  if (local_60 != pbVar8 + uVar10) {
                    uVar5 = 0xe43;
                    uVar3 = 0x87;
                    goto LAB_14f67bb7f;
                  }
                  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                      && (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
                    local_res20 = 0;
                    if (1 < uVar9) {
                      uVar9 = (ulonglong)CONCAT11(*pbVar6,pbVar6[1]);
                      if (uVar9 <= uStack_50 - 2) {
                        local_58 = pbVar6 + 2 + uVar9;
                        uVar10 = (uStack_50 - 2) - uVar9;
                        uStack_50 = uVar10;
                        local_48 = pbVar6 + 2;
                        local_40 = uVar9;
                        iVar1 = tls_collect_extensions
                                          (param_1,&local_48,0x1000,&local_res20,0,local_res18 == 0)
                        ;
                        if ((iVar1 != 0) &&
                           (iVar1 = tls_parse_all_extensions
                                              (param_1,0x1000,local_res20,lVar11,local_res18,
                                               uVar10 == 0), iVar1 != 0)) {
                          CRYPTO_free(local_res20,"ssl\\statem\\statem_srvr.c",0xe5a);
                          pbVar6 = local_58;
                          uVar9 = uStack_50;
                          goto LAB_14f67b87f;
                        }
                        CRYPTO_free(local_res20,"ssl\\statem\\statem_srvr.c",0xe57);
                        goto LAB_14f67bba4;
                      }
                    }
                    uVar5 = 0xe4e;
                    uVar3 = 0x10f;
                    goto LAB_14f67bb7f;
                  }
LAB_14f67b87f:
                  iVar1 = OPENSSL_sk_push(lVar2,lVar11);
                  if (iVar1 == 0) {
                    uVar7 = 0x50;
                    uVar5 = 0xe60;
                    uVar3 = 0x41;
                    goto LAB_14f67bb84;
                  }
                  local_res18 = local_res18 + 1;
                } while (uVar9 != 0);
              }
              iVar1 = OPENSSL_sk_num(lVar2);
              if (iVar1 < 1) {
                if (*param_1 == 0x300) {
                  uVar12 = 0xe6b;
                  uVar5 = 0x28;
                  iVar1 = 0xb0;
                }
                else {
                  if (((byte)param_1[0x156] & 3) != 3) {
                    if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0xe0) != 0) {
                      lVar11 = 0;
                      iVar1 = ssl3_digest_cached_records(param_1,0);
                      if (iVar1 == 0) goto LAB_14f67bba4;
                    }
LAB_14f67b996:
                    if (param_1[0x1e2] == 4) {
                      lVar11 = ssl_session_dup(*(undefined8 *)(param_1 + 0x142),0);
                      if (lVar11 == 0) {
                        uVar12 = 0xe9e;
                        uVar5 = 0x50;
                        iVar1 = 0x41;
                        goto LAB_14f67b9cc;
                      }
                      SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
                      *(longlong *)(param_1 + 0x142) = lVar11;
                    }
                    X509_free(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x1b8));
                    uVar3 = OPENSSL_sk_shift(lVar2);
                    *(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x1b8) = uVar3;
                    *(int *)(*(longlong *)(param_1 + 0x142) + 0x1c8) = param_1[0x16a];
                    OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x1c0),
                                        X509_free);
                    local_68 = 0;
                    *(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1c0) = lVar2;
                    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                        && (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000))
                    {
                      lVar11 = 0;
                      iVar1 = ssl3_digest_cached_records(param_1,1);
                      if (iVar1 == 0) goto LAB_14f67bba4;
                    }
                    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                        && (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000))
                    {
                      lVar11 = 0;
                      iVar1 = ssl_handshake_hash(param_1,param_1 + 0x124,0x40,param_1 + 0x134);
                      if (iVar1 == 0) goto LAB_14f67bba4;
                      param_1[0x5d2] = 0;
                      param_1[0x5d3] = 0;
                    }
                    local_res8 = 3;
                    lVar11 = 0;
                    goto LAB_14f67bba4;
                  }
                  uVar5 = 0x74;
                  uVar12 = 0xe73;
                  iVar1 = 199;
                }
              }
              else {
                iVar1 = ssl_verify_cert_chain(param_1,lVar2);
                if (iVar1 < 1) {
                  uVar5 = ssl_x509err2alert(param_1[0x16a]);
                  uVar12 = 0xe81;
                  iVar1 = 0x86;
                }
                else if (iVar1 < 2) {
                  uVar3 = OPENSSL_sk_value(lVar2,0);
                  lVar11 = X509_get0_pubkey(uVar3);
                  if (lVar11 != 0) goto LAB_14f67b996;
                  uVar12 = 0xe8d;
                  uVar5 = 0x28;
                  iVar1 = 0xf7;
                }
                else {
                  uVar12 = 0xe86;
                  uVar5 = 0x28;
                }
              }
LAB_14f67b9cc:
              ossl_statem_fatal(param_1,uVar5,0x17c,iVar1,"ssl\\statem\\statem_srvr.c",uVar12);
              lVar11 = 0;
              goto LAB_14f67bba4;
            }
          }
        }
        uVar5 = 0xe2c;
        uVar3 = 0x9f;
LAB_14f67bb7f:
        uVar7 = 0x32;
LAB_14f67bb84:
        ossl_statem_fatal(param_1,uVar7,0x17c,uVar3,"ssl\\statem\\statem_srvr.c",uVar5);
        goto LAB_14f67bba4;
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x17c,0x11a,"ssl\\statem\\statem_srvr.c",0xe25);
  lVar11 = 0;
LAB_14f67bba4:
  X509_free(lVar11);
  OPENSSL_sk_pop_free(local_68,X509_free);
  return local_res8;
}

// tls_process_client_hello @ 14f67bbe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_client_hello(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  void *_Src;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  size_t _Size;
  byte *pbVar15;
  uint uVar16;
  undefined4 uVar18;
  int local_38;
  int iStack_34;
  undefined8 uStack_30;
  ulonglong uVar17;
  
  uStack_30 = 0x14f67bc05;
  piVar8 = (int *)0x0;
  if (((*(int *)(param_1 + 0x780) == 0) &&
      (lVar9 = *(longlong *)(param_1 + 0xa8), *(longlong *)(lVar9 + 0x198) != 0)) &&
     (*(longlong *)(lVar9 + 0x220) != 0)) {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) || (iVar7 == 0x10000)) {
      if (((*(uint *)(param_1 + 0x5cc) >> 0x1e & 1) != 0) ||
         ((*(int *)(lVar9 + 0x3d8) == 0 && ((*(uint *)(param_1 + 0x5cc) >> 0x12 & 1) == 0)))) {
        ssl3_send_alert(param_1,1,100);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x780) = 1;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      goto LAB_14f67bcb9;
    }
    uVar18 = 0x572;
  }
  else {
LAB_14f67bcb9:
    piVar8 = (int *)CRYPTO_zalloc(0x290,"ssl\\statem\\statem_srvr.c",0x580);
    if (piVar8 != (int *)0x0) {
      iVar7 = RECORD_LAYER_is_sslv2_record(param_1 + 0x830);
      *piVar8 = iVar7;
      if (iVar7 != 0) {
        if (((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
            (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) &&
           (*(int *)(param_1 + 0x4d8) == 0)) {
          if (param_2[1] != 0) {
            cVar2 = *(char *)*param_2;
            *param_2 = (longlong)((char *)*param_2 + 1);
            param_2[1] = param_2[1] + -1;
            if (cVar2 == '\x01') goto LAB_14f67bd84;
          }
          uVar12 = 0x50;
          uVar18 = 0x5ae;
          uVar14 = 0x44;
        }
        else {
          uVar18 = 0x593;
          uVar12 = 10;
          uVar14 = 0xf4;
        }
        goto LAB_14f67c1f5;
      }
LAB_14f67bd84:
      if ((ulonglong)param_2[1] < 2) {
        uVar18 = 0x5b5;
        uVar14 = 0xa0;
        goto LAB_14f67c1f0;
      }
      bVar3 = *(byte *)*param_2;
      piVar8[1] = (uint)bVar3 << 8;
      piVar8[1] = (uint)CONCAT11(bVar3,*(undefined1 *)(*param_2 + 1));
      *param_2 = *param_2 + 2;
      param_2[1] = param_2[1] + -2;
      puVar6 = (undefined1 *)*param_2;
      uVar10 = param_2[1];
      if (*piVar8 == 0) {
        iVar7 = FUN_14f675540(param_2,piVar8 + 2,0x20);
        if (iVar7 == 0) {
LAB_14f67c00a:
          uVar18 = 0x5f8;
          uVar14 = 0x9f;
        }
        else {
          if (param_2[1] == 0) goto LAB_14f67c00a;
          uVar10 = param_2[1] - 1;
          bVar3 = *(byte *)*param_2;
          pbVar15 = (byte *)*param_2 + 1;
          uVar11 = (ulonglong)bVar3;
          if (uVar10 < bVar3) goto LAB_14f67c00a;
          *param_2 = (longlong)(pbVar15 + uVar11);
          param_2[1] = uVar10 - uVar11;
          if (0x20 < uVar11) {
            piVar8[10] = 0;
            piVar8[0xb] = 0;
            goto LAB_14f67c00a;
          }
          *(ulonglong *)(piVar8 + 10) = uVar11;
          memcpy(piVar8 + 0xc,pbVar15,uVar11);
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
LAB_14f67c0fe:
            iVar7 = FUN_14f675700(param_2,piVar8 + 0x56);
            if (iVar7 == 0) {
              uVar18 = 0x618;
              uVar14 = 0x9f;
            }
            else {
              if (param_2[1] != 0) {
                uVar11 = param_2[1] - 1;
                bVar3 = *(byte *)*param_2;
                uVar10 = (ulonglong)bVar3;
                pbVar15 = (byte *)*param_2 + 1;
                _Size = (size_t)bVar3;
                if (uVar10 <= uVar11) {
                  *param_2 = (longlong)(pbVar15 + uVar10);
                  param_2[1] = uVar11 - uVar10;
                  piVar1 = piVar8 + 0x9c;
                  if (param_2[1] == 0) {
                    piVar1[0] = 0;
                    piVar1[1] = 0;
                    piVar8[0x9e] = 0;
                    piVar8[0x9f] = 0;
                  }
                  else {
                    iVar7 = FUN_14f675700(param_2,piVar1);
                    if ((iVar7 == 0) || (param_2[1] != 0)) {
                      uVar18 = 0x629;
                      uVar14 = 0x9f;
                      goto LAB_14f67c1f0;
                    }
                  }
                  if (_Size < 0x100) goto LAB_14f67bf04;
                  uVar12 = 0x50;
                  piVar8[0x5a] = 0;
                  piVar8[0x5b] = 0;
                  uVar18 = 0x633;
                  uVar14 = 0x44;
                  goto LAB_14f67c1f5;
                }
              }
              uVar18 = 0x61e;
              uVar14 = 0x9f;
            }
          }
          else {
            if (param_2[1] != 0) {
              uVar10 = param_2[1] - 1;
              bVar3 = *(byte *)*param_2;
              pbVar15 = (byte *)*param_2 + 1;
              uVar11 = (ulonglong)bVar3;
              if (bVar3 <= uVar10) {
                *param_2 = (longlong)(pbVar15 + uVar11);
                param_2[1] = uVar10 - uVar11;
                if (0x100 < uVar11) {
                  uVar12 = 0x50;
                  piVar8[0x14] = 0;
                  piVar8[0x15] = 0;
                  uVar18 = 0x606;
                  uVar14 = 0x44;
                  goto LAB_14f67c1f5;
                }
                *(ulonglong *)(piVar8 + 0x14) = uVar11;
                memcpy(piVar8 + 0x16,pbVar15,uVar11);
                uVar13 = SSL_get_options(param_1);
                if (((uVar13 >> 0xd & 1) != 0) && (*(longlong *)(piVar8 + 0x14) == 0)) {
                  CRYPTO_free(piVar8,"ssl\\statem\\statem_srvr.c",0x610);
                  return 1;
                }
                goto LAB_14f67c0fe;
              }
            }
            uVar18 = 0x5ff;
            uVar14 = 0x9f;
          }
        }
LAB_14f67c1f0:
        uVar12 = 0x32;
LAB_14f67c1f5:
        ossl_statem_fatal(param_1,uVar12,0x17d,uVar14,"ssl\\statem\\statem_srvr.c",uVar18);
      }
      else {
        if (uVar10 < 2) {
LAB_14f67bf94:
          uVar18 = 0x5c7;
          uVar14 = 0xd5;
          goto LAB_14f67c1f0;
        }
        uVar4 = *puVar6;
        uVar5 = puVar6[1];
        *param_2 = (longlong)(puVar6 + 2);
        param_2[1] = uVar10 - 2;
        if (uVar10 - 2 < 2) goto LAB_14f67bf94;
        uVar13 = (uint)CONCAT11(puVar6[2],puVar6[3]);
        uVar11 = (ulonglong)uVar13;
        *param_2 = (longlong)(puVar6 + 4);
        param_2[1] = uVar10 - 4;
        if (uVar10 - 4 < 2) goto LAB_14f67bf94;
        uVar16 = (uint)CONCAT11(puVar6[4],puVar6[5]);
        uVar17 = (ulonglong)uVar16;
        *param_2 = (longlong)(puVar6 + 6);
        param_2[1] = uVar10 - 6;
        if (0x20 < uVar13) {
          uVar12 = 0x2f;
          uVar18 = 0x5cd;
          uVar14 = 0x9f;
          goto LAB_14f67c1f5;
        }
        iVar7 = FUN_14f6758a0(param_2,piVar8 + 0x56,CONCAT11(uVar4,uVar5));
        if (iVar7 == 0) {
LAB_14f67bf81:
          uVar18 = 0x5d8;
          uVar14 = 0xd5;
          goto LAB_14f67c1f0;
        }
        iVar7 = FUN_14f675540(param_2,piVar8 + 0xc,uVar11 & 0xffffffff);
        if ((iVar7 == 0) || ((ulonglong)param_2[1] < uVar17)) goto LAB_14f67bf81;
        _Src = (void *)*param_2;
        lVar9 = param_2[1] - uVar17;
        param_2[1] = lVar9;
        *param_2 = (longlong)_Src + uVar17;
        if (lVar9 != 0) goto LAB_14f67bf81;
        *(ulonglong *)(piVar8 + 10) = uVar11 & 0xffffffff;
        if (0x20 < uVar16) {
          uVar16 = 0x20;
        }
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[4] = 0;
        piVar8[5] = 0;
        uVar10 = (ulonglong)uVar16;
        piVar8[6] = 0;
        piVar8[7] = 0;
        piVar8[8] = 0;
        piVar8[9] = 0;
        if (uVar17 < uVar10) {
          uVar12 = 0x50;
          uVar18 = 0x5eb;
          uVar14 = 0x44;
          goto LAB_14f67c1f5;
        }
        memcpy((void *)((longlong)piVar8 + (0x28 - uVar10)),_Src,uVar10);
        piVar8[0x9c] = 0;
        piVar8[0x9d] = 0;
        pbVar15 = &DAT_15347d9fb;
        piVar8[0x9e] = 0;
        piVar8[0x9f] = 0;
        _Size = 1;
LAB_14f67bf04:
        *(size_t *)(piVar8 + 0x5a) = _Size;
        memcpy(piVar8 + 0x5c,pbVar15,_Size);
        local_38 = piVar8[0x9c];
        iStack_34 = piVar8[0x9d];
        uStack_30 = *(undefined8 *)(piVar8 + 0x9e);
        iVar7 = tls_collect_extensions(param_1,&local_38,0x80,piVar8 + 0xa2,piVar8 + 0xa0,1);
        if (iVar7 != 0) {
          *(int **)(param_1 + 0x738) = piVar8;
          return 2;
        }
      }
      CRYPTO_free(*(undefined8 *)(piVar8 + 0xa2),"ssl\\statem\\statem_srvr.c",0x645);
      goto LAB_14f67c21d;
    }
    uVar18 = 0x583;
  }
  ossl_statem_fatal(param_1,0x50,0x17d,0x44,"ssl\\statem\\statem_srvr.c",uVar18);
LAB_14f67c21d:
  CRYPTO_free(piVar8,"ssl\\statem\\statem_srvr.c",0x646);
  return 0;
}

// tls_process_client_key_exchange @ 14f67c260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_client_key_exchange(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  
  uVar6 = 1;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if (((uVar1 & 0x1c8) != 0) && (uVar6 = 1, iVar2 = FUN_14f67acd0(), iVar2 == 0))
  goto LAB_14f67c361;
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x41) == 0) {
      if ((uVar1 & 0x102) == 0) {
        if ((uVar1 & 0x84) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if ((uVar1 & 0x10) == 0) {
              uVar5 = CONCAT44(uVar6,0xdb7);
              uVar3 = 0x50;
              uVar4 = 0xf9;
              goto LAB_14f67c351;
            }
            iVar2 = FUN_14f67aa30(param_1,param_2);
          }
          else {
            iVar2 = FUN_14f67b390(param_1,param_2);
          }
        }
        else {
          iVar2 = FUN_14f67a880(param_1,param_2);
        }
      }
      else {
        iVar2 = FUN_14f67a660(param_1,param_2);
      }
    }
    else {
      iVar2 = FUN_14f67af60(param_1,param_2);
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      uVar3 = 0x32;
      uVar5 = CONCAT44(uVar6,0xd93);
      uVar4 = 0x9f;
LAB_14f67c351:
      ossl_statem_fatal(param_1,uVar3,0x17e,uVar4,"ssl\\statem\\statem_srvr.c",uVar5);
      goto LAB_14f67c361;
    }
    iVar2 = ssl_generate_master_secret(param_1,0,0,0);
  }
  if (iVar2 != 0) {
    return 2;
  }
LAB_14f67c361:
  CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0),
                    "ssl\\statem\\statem_srvr.c",0xdbe);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = 0;
  return 0;
}

// tls_process_end_of_early_data @ 14f67c3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte tls_process_end_of_early_data(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_2 + 8) != 0) {
    ossl_statem_fatal(param_1,0x32,0x219,0x9f,"ssl\\statem\\statem_srvr.c",0x1000010b6);
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x84) - 10U) {
    ossl_statem_fatal(param_1,0x50,0x219,0x44,"ssl\\statem\\statem_srvr.c",0x1000010bd);
    return 0;
  }
  iVar1 = RECORD_LAYER_processed_read_pending(param_1 + 0x830);
  if (iVar1 != 0) {
    ossl_statem_fatal(param_1,10,0x219,0xb6,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar2,0x10c8));
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0xc;
  iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))(param_1,0xa1);
  return -(iVar1 != 0) & 3;
}

// tls_process_next_proto @ 14f67c4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_next_proto(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)*param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    bVar1 = *pbVar6;
    uVar2 = (ulonglong)bVar1;
    pbVar5 = pbVar6 + 1;
    if (uVar2 <= lVar3 - 1U) {
      pbVar6 = pbVar5 + uVar2;
      lVar3 = (lVar3 - 1U) - uVar2;
      *param_2 = pbVar6;
      param_2[1] = lVar3;
      if (lVar3 != 0) {
        uVar2 = (ulonglong)*pbVar6;
        if (uVar2 <= lVar3 - 1U) {
          pbVar6 = pbVar6 + uVar2 + 1;
          lVar3 = (lVar3 - 1U) - uVar2;
          *param_2 = pbVar6;
          param_2[1] = lVar3;
          if (param_2[1] == 0) {
            CRYPTO_free(*(undefined8 *)(param_1 + 0x6f8),
                        "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                        ,0x1c5);
            *(undefined8 *)(param_1 + 0x6f8) = 0;
            bVar4 = 0;
            if (bVar1 != 0) {
              lVar3 = CRYPTO_memdup(pbVar5,bVar1,
                                    "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                    ,0x1ce);
              *(longlong *)(param_1 + 0x6f8) = lVar3;
              bVar4 = bVar1;
              if (lVar3 == 0) {
                *(undefined8 *)(param_1 + 0x700) = 0;
                ossl_statem_fatal(param_1,0x50,0x17f,0x44,"ssl\\statem\\statem_srvr.c",0x109d);
                return 0;
              }
            }
            *(ulonglong *)(param_1 + 0x700) = (ulonglong)bVar4;
            return 3;
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x17f,0x9f,"ssl\\statem\\statem_srvr.c",0x1096,pbVar6,lVar3);
  return 0;
}

