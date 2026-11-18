// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 52

// FUN_14f66aa80 @ 14f66aa80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f66aa80(undefined8 *param_1,undefined8 *param_2)

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
      if (uVar4 == uVar2) {
        *param_1 = pbVar3 + uVar2;
        param_1[1] = 0;
        *param_2 = pbVar3;
        param_2[1] = uVar2;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f66ab70 @ 14f66ab70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f66ab70(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f66acc0 @ 14f66acc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66acc0(undefined8 *param_1,undefined8 *param_2)

{
  X509_NAME_cmp(*param_1,*param_2);
  return;
}

// FUN_14f66acf0 @ 14f66acf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66acf0(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 == 0x303) {
    iVar1 = ssl_version_supported(param_1,0x304,0);
    if (iVar1 != 0) {
      *param_3 = 1;
      return;
    }
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
     (param_2 < 0x303)) {
    iVar1 = ssl_version_supported(param_1,0x303,0);
    if (iVar1 != 0) {
      *param_3 = 2;
      return;
    }
  }
  *param_3 = 0;
  return;
}

// check_in_list @ 14f66ada0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
check_in_list(undefined8 param_1,short param_2,longlong param_3,ulonglong param_4,int param_5)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar3 = 0;
  if (param_4 != 0) {
    do {
      sVar1 = *(short *)(param_3 + uVar3 * 2);
      if ((param_2 == sVar1) &&
         ((param_5 == 0 || (iVar2 = tls_curve_allowed(param_1,sVar1,0x20006), iVar2 != 0)))) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4);
  }
  return 0;
}

// construct_ca_names @ 14f66ae50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 construct_ca_names(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res20 [8];
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0x14f66ae60;
  iVar1 = WPACKET_start_sub_packet_len__(param_3,2);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x228,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar6,0x920));
    return 0;
  }
  if (param_2 != 0) {
    iVar4 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (0 < iVar1) {
      do {
        lVar3 = OPENSSL_sk_value(param_2,iVar4);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (lVar3 == 0) {
LAB_14f66af6f:
          uVar5 = CONCAT44(uVar6,0x932);
          goto LAB_14f66af48;
        }
        iVar1 = i2d_X509_NAME(lVar3,0);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (iVar1 < 0) goto LAB_14f66af6f;
        iVar2 = WPACKET_sub_allocate_bytes__(param_3,(longlong)iVar1,local_res20,2);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (iVar2 == 0) goto LAB_14f66af6f;
        iVar2 = i2d_X509_NAME(lVar3,local_res20);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (iVar2 != iVar1) goto LAB_14f66af6f;
        iVar4 = iVar4 + 1;
        iVar1 = OPENSSL_sk_num(param_2);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      } while (iVar4 < iVar1);
    }
  }
  iVar1 = WPACKET_close(param_3);
  if (iVar1 == 0) {
    uVar5 = CONCAT44(uVar6,0x93a);
LAB_14f66af48:
    ossl_statem_fatal(param_1,0x50,0x228,0x44,"ssl\\statem\\statem_lib.c",uVar5);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

// construct_key_exchange_tbs @ 14f66afa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong construct_key_exchange_tbs
                   (longlong param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  puVar2 = (undefined8 *)CRYPTO_malloc(param_4 + 0x40,"ssl\\statem\\statem_lib.c",0x946);
  if (puVar2 == (undefined8 *)0x0) {
    ossl_statem_fatal(param_1,0x50,0x229,0x41,"ssl\\statem\\statem_lib.c",CONCAT44(uVar4,0x94a));
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    uVar1 = *(undefined8 *)(lVar3 + 0xc0);
    *puVar2 = *(undefined8 *)(lVar3 + 0xb8);
    puVar2[1] = uVar1;
    uVar1 = *(undefined8 *)(lVar3 + 0xd0);
    puVar2[2] = *(undefined8 *)(lVar3 + 200);
    puVar2[3] = uVar1;
    lVar3 = *(longlong *)(param_1 + 0xa8);
    uVar1 = *(undefined8 *)(lVar3 + 0xa0);
    puVar2[4] = *(undefined8 *)(lVar3 + 0x98);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)(lVar3 + 0xb0);
    puVar2[6] = *(undefined8 *)(lVar3 + 0xa8);
    puVar2[7] = uVar1;
    memcpy(puVar2 + 8,param_3,param_4);
    lVar3 = param_4 + 0x40;
    *param_2 = puVar2;
  }
  return lVar3;
}

// create_synthetic_message_hash @ 14f66b090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
create_synthetic_message_hash
          (longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f66b09e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = param_3;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = local_68;
    local_70 = 0;
    iVar1 = ssl3_digest_cached_records();
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = ssl_handshake_hash(param_1,local_68,0x40,&local_70);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = ssl3_init_finished_mac(param_1);
  if (iVar1 != 0) {
    local_78 = CONCAT13((undefined1)local_70,(undefined3)local_78);
    local_78 = CONCAT31(local_78._1_3_,0xfe);
    iVar1 = ssl3_finish_mac(param_1,&local_78,4);
    if (((iVar1 != 0) && (iVar1 = ssl3_finish_mac(param_1,param_2,local_70), iVar1 != 0)) &&
       ((param_4 == 0 ||
        ((iVar1 = ssl3_finish_mac(param_1,param_4,param_5), iVar1 != 0 &&
         (iVar1 = ssl3_finish_mac(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                                  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x228) + 4),
         iVar1 != 0)))))) {
      return 1;
    }
  }
  return 0;
}

// get_ca_names @ 14f66b1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong get_ca_names(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar2 = SSL_get_client_CA_list();
    if (lVar2 != 0) {
      iVar1 = OPENSSL_sk_num(lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
  lVar2 = SSL_get0_CA_list(param_1);
  return lVar2;
}

// FUN_14f66b220 @ 14f66b220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f66b220(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong local_res8;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    *param_2 = 0x2020202020202020;
    param_2[1] = 0x2020202020202020;
    param_2[2] = 0x2020202020202020;
    param_2[3] = 0x2020202020202020;
    param_2[4] = 0x2020202020202020;
    param_2[5] = 0x2020202020202020;
    param_2[6] = 0x2020202020202020;
    param_2[7] = 0x2020202020202020;
    if (*(int *)(param_1 + 0x5c) - 0x27U < 2) {
      pcVar3 = "TLS 1.3, server CertificateVerify";
      do {
        cVar1 = *pcVar3;
        *(char *)((longlong)(param_2 + -0x2a68f95c) + (longlong)pcVar3) = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar3 = "TLS 1.3, client CertificateVerify";
      do {
        cVar1 = *pcVar3;
        *(char *)((longlong)(param_2 + -0x2a68f961) + (longlong)pcVar3) = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    if ((*(int *)(param_1 + 0x5c) == 0x27) || (*(int *)(param_1 + 0x5c) == 0x1d)) {
      memcpy((void *)((longlong)param_2 + 0x62),(void *)(param_1 + 0x490),
             *(size_t *)(param_1 + 0x4d0));
      local_res8 = *(longlong *)(param_1 + 0x4d0) + 0x62;
      *param_3 = param_2;
    }
    else {
      iVar2 = ssl_handshake_hash(param_1,(longlong)param_2 + 0x62,0x40,&local_res8);
      if (iVar2 == 0) {
        return 0;
      }
      local_res8 = local_res8 + 0x62;
      *param_3 = param_2;
    }
  }
  else {
    iVar2 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,param_3);
    if (iVar2 < 1) {
      ossl_statem_fatal(param_1,0x50,0x24c,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar4,0xdd));
      return 0;
    }
    local_res8 = (longlong)iVar2;
  }
  *param_4 = local_res8;
  return 1;
}

// FUN_14f66b3d0 @ 14f66b3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f66b3d0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 0x598) == 0) || (*(longlong *)(param_1 + 0x768) == 0)) {
    return 0;
  }
  if ((((*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x1f8) == 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x768) + 0x1f8) == 0)) &&
      (*(longlong *)(param_1 + 0x580) == 0)) &&
     ((*(longlong *)(param_1 + 0x588) == 0 &&
      (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1b8) == 0)))) {
    uVar5 = 0;
    lVar6 = 0;
    do {
      if (((uVar5 != 2) && (2 < uVar5 - 4)) &&
         ((uVar5 < 9 &&
          ((lVar3 = *(longlong *)(param_1 + 0x488), *(longlong *)(lVar6 + 0x20 + lVar3) != 0 &&
           (*(longlong *)(lVar6 + 0x28 + lVar3) != 0)))))) {
        if (uVar5 != 3) {
          return 1;
        }
        lVar3 = EVP_PKEY_get0_EC_KEY(*(undefined8 *)(lVar3 + 0xa0));
        if (lVar3 != 0) {
          uVar4 = EC_KEY_get0_group(lVar3);
          uVar1 = EC_GROUP_get_curve_name(uVar4);
          iVar2 = tls_check_sigalg_curve(param_1,uVar1);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < 9);
    return 0;
  }
  return 1;
}

// parse_ca_names @ 14f66b520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 parse_ca_names(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *local_res18 [2];
  undefined4 uVar12;
  
  lVar4 = OPENSSL_sk_new(FUN_14f66acc0);
  lVar5 = 0;
  if (lVar4 == 0) {
    uVar12 = 0x8d7;
LAB_14f66b563:
    uVar6 = 0x50;
    uVar11 = 0x41;
  }
  else {
    puVar10 = (undefined1 *)*param_2;
    if (1 < (ulonglong)param_2[1]) {
      uVar7 = param_2[1] - 2;
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      puVar10 = puVar10 + 2;
      uVar8 = (ulonglong)(uint)CONCAT11(uVar1,uVar2);
      if (uVar8 <= uVar7) {
        *param_2 = puVar10 + uVar8;
        param_2[1] = uVar7 - uVar8;
        if (CONCAT11(uVar1,uVar2) != 0) {
          do {
            if (uVar8 < 2) {
LAB_14f66b6b6:
              ossl_statem_fatal(param_1,0x32,0x21d,0x9f,"ssl\\statem\\statem_lib.c",0x8e8);
              lVar5 = 0;
              goto LAB_14f66b712;
            }
            puVar9 = puVar10 + 2;
            uVar7 = (ulonglong)CONCAT11(*puVar10,puVar10[1]);
            if (uVar8 - 2 < uVar7) goto LAB_14f66b6b6;
            puVar10 = puVar9 + uVar7;
            uVar8 = (uVar8 - 2) - uVar7;
            local_res18[0] = puVar9;
            lVar5 = d2i_X509_NAME(0,local_res18);
            if (lVar5 == 0) {
              uVar12 = 0x8ef;
              uVar11 = 0xd;
              goto LAB_14f66b6f3;
            }
            if (local_res18[0] != puVar9 + uVar7) {
              uVar12 = 0x8f4;
              uVar11 = 0x83;
              goto LAB_14f66b6f3;
            }
            iVar3 = OPENSSL_sk_push(lVar4,lVar5);
            if (iVar3 == 0) {
              uVar12 = 0x8fa;
              goto LAB_14f66b563;
            }
          } while (uVar8 != 0);
        }
        OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260),X509_NAME_free);
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x260) = lVar4;
        return 1;
      }
    }
    uVar12 = 0x8dd;
    uVar11 = 0x9f;
LAB_14f66b6f3:
    uVar6 = 0x32;
  }
  ossl_statem_fatal(param_1,uVar6,0x21d,uVar11,"ssl\\statem\\statem_lib.c",uVar12);
LAB_14f66b712:
  OPENSSL_sk_pop_free(lVar4,X509_NAME_free);
  X509_NAME_free(lVar5);
  return 0;
}

// FUN_14f66b750 @ 14f66b750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b750(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f66b770 @ 14f66b770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b770(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f66b790 @ 14f66b790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b790(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f66b7b0 @ 14f66b7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b7b0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f66b7d0 @ 14f66b7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b7d0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f66b7f0 @ 14f66b7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b7f0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f66b810 @ 14f66b810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b810(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f66b830 @ 14f66b830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b830(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f66b850 @ 14f66b850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f66b850(void)

{
  OPENSSL_sk_value();
  return;
}

// ssl3_do_write @ 14f66b870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_do_write(undefined4 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x14f66b880;
  local_res8 = 0;
  iVar2 = ssl3_write_bytes(param_1,param_2,
                           *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                           *(longlong *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x26),&local_res8
                          );
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  if ((((int)param_2 == 0x16) &&
      (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0 ||
         (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
       ((param_1[0x17] != 0x21 && (1 < param_1[0x17] - 0x2a)))))) &&
     (iVar2 = ssl3_finish_mac(param_1,*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                                      *(longlong *)(param_1 + 0x28),local_res8), iVar2 == 0)) {
    return 0xffffffff;
  }
  lVar1 = *(longlong *)(param_1 + 0x26);
  if (local_res8 != lVar1) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + local_res8;
    *(longlong *)(param_1 + 0x26) = lVar1 - local_res8;
    return 0;
  }
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,param_2 & 0xffffffff,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
               lVar1 + *(longlong *)(param_1 + 0x28),param_1,*(undefined8 *)(param_1 + 0x30),uVar3);
  }
  return 1;
}

// ssl3_output_cert_chain @ 14f66b9b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_output_cert_chain(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_start_sub_packet_len__(param_2,3);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x93,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x3f3));
  }
  else {
    iVar1 = FUN_14f66bb20(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_2);
      if (iVar1 == 0) {
        ossl_statem_fatal(param_1,0x50,0x93,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x3fc));
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// ssl3_take_mac @ 14f66ba90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl3_take_mac(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
  }
  uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x28))
                    (param_1,uVar2,uVar3,*(longlong *)(param_1 + 0xa8) + 0x1a0);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x220) = uVar2;
  return *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0;
}

// FUN_14f66bb20 @ 14f66bb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f66bb20(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = 1;
  uVar9 = 1;
  if ((param_3 != (longlong *)0x0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar3 = param_3[2];
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0xf8);
    }
    if ((((*(byte *)(param_1 + 0x5d0) & 8) == 0) && (lVar3 == 0)) &&
       ((lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1c8), lVar7 != 0 ||
        (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20), lVar7 != 0)))) {
      lVar3 = X509_STORE_CTX_new();
      if (lVar3 == 0) {
        uVar4 = CONCAT44(uVar10,0x3b0);
        iVar8 = 0x41;
      }
      else {
        iVar8 = X509_STORE_CTX_init(lVar3,lVar7,lVar1,0);
        if (iVar8 == 0) {
          X509_STORE_CTX_free();
          iVar8 = 0xb;
          uVar4 = CONCAT44(uVar10,0x3b6);
        }
        else {
          X509_verify_cert(lVar3);
          ERR_clear_error();
          uVar4 = X509_STORE_CTX_get0_chain(lVar3);
          iVar8 = ssl_security_cert_chain(param_1,uVar4,0,0);
          if (iVar8 == 1) {
            iVar8 = OPENSSL_sk_num(uVar4);
            iVar6 = 0;
            if (0 < iVar8) {
              do {
                uVar5 = OPENSSL_sk_value(uVar4,iVar6);
                iVar2 = FUN_14f66bd70(param_1,param_2,uVar5,iVar6);
                if (iVar2 == 0) {
                  X509_STORE_CTX_free(lVar3);
                  return 0;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar8);
            }
            X509_STORE_CTX_free(lVar3);
            return 1;
          }
          X509_STORE_CTX_free(lVar3);
          uVar4 = CONCAT44(uVar10,0x3cc);
        }
      }
    }
    else {
      iVar8 = ssl_security_cert_chain(param_1,lVar3,lVar1,0);
      if (iVar8 == 1) {
        iVar8 = FUN_14f66bd70(param_1,param_2,lVar1,0);
        if (iVar8 == 0) {
          return 0;
        }
        iVar6 = 0;
        iVar8 = OPENSSL_sk_num(lVar3);
        if (0 < iVar8) {
          do {
            uVar4 = OPENSSL_sk_value(lVar3,iVar6);
            iVar6 = iVar6 + 1;
            iVar8 = FUN_14f66bd70(param_1,param_2,uVar4,iVar6);
            if (iVar8 == 0) {
              return 0;
            }
            iVar8 = OPENSSL_sk_num(lVar3);
          } while (iVar6 < iVar8);
        }
        return 1;
      }
      uVar4 = CONCAT44(uVar9,0x3dd);
    }
    ossl_statem_fatal(param_1,0x50,0x13c,iVar8,"ssl\\statem\\statem_lib.c",uVar4);
    return 0;
  }
  return 1;
}

// FUN_14f66bd70 @ 14f66bd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f66bd70(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f66bd90;
  iVar1 = i2d_X509(param_3,0);
  if (iVar1 < 0) {
    uVar4 = 0x37a;
    uVar3 = 7;
  }
  else {
    iVar2 = WPACKET_sub_allocate_bytes__(param_2,(longlong)iVar1,local_18,3);
    if ((iVar2 != 0) && (iVar2 = i2d_X509(param_3,local_18), iVar2 == iVar1)) {
      if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         (((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)) &&
          (iVar1 = tls_construct_extensions(param_1,param_2,0x1000,param_3,(longlong)param_4),
          iVar1 == 0)))) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x380;
    uVar3 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x1ed,uVar3,"ssl\\statem\\statem_lib.c",uVar4);
  return 0;
}

// ssl_allow_compression @ 14f66be80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_allow_compression(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x5cc) & 0x20000) != 0) {
    return 0;
  }
  uVar1 = ssl_security(param_1,0xf,0,0,0);
  return uVar1;
}

// ssl_check_version_downgrade @ 14f66bed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl_check_version_downgrade(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (*param_1 == *(int *)**(undefined8 **)(param_1 + 0x166)) {
    return true;
  }
  piVar2 = (int *)TLS_method();
  if (*(int *)**(undefined8 **)(param_1 + 0x166) == *piVar2) {
    piVar2 = &DAT_15347cce0;
  }
  else {
    piVar2 = (int *)DTLS_method();
    if (*(int *)**(undefined8 **)(param_1 + 0x166) != *piVar2) {
      return false;
    }
    piVar2 = &DAT_15347cac0;
  }
  iVar1 = *piVar2;
  do {
    if (iVar1 == 0) {
      return false;
    }
    if (*(code **)(piVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(piVar2 + 4))();
      iVar1 = FUN_14f66c8a0(param_1,uVar3);
      if (iVar1 == 0) {
        return *param_1 == *piVar2;
      }
    }
    piVar2 = piVar2 + 6;
    iVar1 = *piVar2;
  } while( true );
}

// ssl_choose_client_version @ 14f66bf90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_choose_client_version(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  
  iVar1 = *param_1;
  *param_1 = param_2;
  uVar7 = 0;
  uVar5 = tls_parse_extension(param_1,0x11,0x300,param_3,0,0);
  if ((int)uVar5 == 0) {
    *param_1 = iVar1;
    return uVar5;
  }
  if ((param_1[0x136] != 0) && (*param_1 != 0x304)) {
    *param_1 = iVar1;
    ossl_statem_fatal(param_1,0x46,0x25f,0x10a,"ssl\\statem\\statem_lib.c",CONCAT44(uVar7,0x77e));
    return 0;
  }
  iVar3 = **(int **)(param_1 + 2);
  if (iVar3 == 0x10000) {
    piVar8 = &DAT_15347cce0;
LAB_14f66c062:
    iVar3 = ssl_get_min_max_version(param_1,local_res10,local_res8,local_res20);
    if (iVar3 == 0) {
      iVar3 = *param_1;
      uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8;
      if (uVar9 == 0) {
        bVar2 = iVar3 < local_res10[0];
      }
      else {
        iVar6 = iVar3;
        if (iVar3 == 0x100) {
          iVar6 = 0xff00;
        }
        if (local_res10[0] == 0x100) {
          local_res10[0] = 0xff00;
        }
        bVar2 = local_res10[0] < iVar6;
      }
      if (bVar2) {
        uVar5 = CONCAT44(uVar7,0x7a6);
      }
      else {
        if (uVar9 == 0) {
          bVar2 = local_res8[0] < iVar3;
        }
        else {
          iVar6 = iVar3;
          if (iVar3 == 0x100) {
            iVar6 = 0xff00;
          }
          iVar4 = local_res8[0];
          if (local_res8[0] == 0x100) {
            iVar4 = 0xff00;
          }
          bVar2 = iVar6 < iVar4;
        }
        if (bVar2) {
          uVar5 = CONCAT44(uVar7,0x7ac);
        }
        else {
          if ((*(byte *)(param_1 + 0x174) & 0x80) == 0) {
            local_res20[0] = local_res8[0];
          }
          if ((iVar3 == 0x303) && (0x303 < local_res20[0])) {
            if (tls12downgrade == *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0xb0)) {
              uVar5 = CONCAT44(uVar7,0x7bc);
              uVar7 = 0x2f;
              iVar3 = 0x175;
              goto LAB_14f66c1db;
            }
          }
          else if ((uVar9 == 0) &&
                  (((iVar3 < 0x303 && (iVar3 < local_res20[0])) &&
                   (tls11downgrade == *(char (*) [8])(*(longlong *)(param_1 + 0x2a) + 0xb0))))) {
            uVar5 = CONCAT44(uVar7,0x7c9);
            uVar7 = 0x2f;
            iVar3 = 0x175;
            goto LAB_14f66c1db;
          }
          iVar6 = *piVar8;
          while (iVar6 != 0) {
            if ((*(longlong *)(piVar8 + 2) != 0) && (iVar3 == *piVar8)) {
              uVar5 = (**(code **)(piVar8 + 2))();
              *(undefined8 *)(param_1 + 2) = uVar5;
              return 1;
            }
            piVar8 = piVar8 + 6;
            iVar6 = *piVar8;
          }
          uVar5 = CONCAT44(uVar7,0x7d8);
        }
      }
      iVar3 = 0x102;
    }
    else {
      uVar5 = CONCAT44(uVar7,0x79f);
    }
  }
  else {
    if (iVar3 == 0x1ffff) {
      piVar8 = &DAT_15347cac0;
      goto LAB_14f66c062;
    }
    if (*param_1 == iVar3) {
      return 1;
    }
    uVar5 = CONCAT44(uVar7,0x788);
    iVar3 = 0x10a;
  }
  uVar7 = 0x46;
LAB_14f66c1db:
  *param_1 = iVar1;
  ossl_statem_fatal(param_1,uVar7,0x25f,iVar3,"ssl\\statem\\statem_lib.c",uVar5);
  return 0;
}

// ssl_choose_server_version @ 14f66c230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_choose_server_version(uint *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 local_res8;
  
  uVar13 = *(uint *)(param_2 + 4);
  piVar3 = *(int **)(param_1 + 2);
  uVar5 = 0;
  iVar6 = *piVar3;
  param_1[0x17b] = uVar13;
  if (iVar6 == 0x10000) {
LAB_14f66c305:
    puVar14 = &DAT_15347cce0;
  }
  else {
    if (iVar6 != 0x1ffff) {
      uVar11 = *(uint *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8;
      if (((uVar11 != 0) || (*piVar3 < 0x304)) || (*piVar3 == 0x10000)) {
        uVar5 = *param_1;
        if (uVar13 != uVar5) {
          if (uVar11 == 0) {
            iVar6 = 1;
            if ((int)uVar13 < (int)uVar5) {
              iVar6 = -1;
            }
          }
          else {
            if (uVar5 == 0x100) {
              uVar5 = 0xff00;
            }
            if (uVar13 == 0x100) {
              uVar13 = 0xff00;
            }
            iVar6 = 1;
            if ((int)uVar5 < (int)uVar13) {
              iVar6 = -1;
            }
          }
          if (iVar6 < 0) {
            return 0x10a;
          }
        }
        *param_3 = 0;
        return 0;
      }
      goto LAB_14f66c305;
    }
    puVar14 = &DAT_15347cac0;
  }
  lVar4 = *(longlong *)(param_2 + 0x288);
  if ((*(int *)(lVar4 + 0x2b8) == 0) && (param_1[0x136] != 0)) {
    return 0x102;
  }
  if ((*(int *)(lVar4 + 0x2b8) != 0) && ((*(byte *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8) == 0))
  {
    *(undefined4 *)(lVar4 + 700) = 1;
    local_res8 = 0;
    if (*(longlong *)(lVar4 + 0x2b0) != 0) {
      uVar10 = *(longlong *)(lVar4 + 0x2b0) - 1;
      bVar2 = **(byte **)(lVar4 + 0x2a8);
      uVar8 = (ulonglong)bVar2;
      pbVar12 = *(byte **)(lVar4 + 0x2a8) + 1;
      uVar15 = (ulonglong)bVar2;
      if ((uVar8 <= uVar10) && (uVar10 == uVar8)) {
        *(byte **)(lVar4 + 0x2a8) = pbVar12 + uVar8;
        *(undefined8 *)(lVar4 + 0x2b0) = 0;
        if ((int)uVar13 < 0x301) {
          return 0x124;
        }
        while (1 < uVar15) {
          bVar2 = *pbVar12;
          uVar15 = uVar15 - 2;
          pbVar1 = pbVar12 + 1;
          pbVar12 = pbVar12 + 2;
          uVar13 = (uint)CONCAT11(bVar2,*pbVar1);
          if (uVar13 != uVar5) {
            if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
              iVar6 = 1;
              if (uVar13 < uVar5) {
                iVar6 = -1;
              }
            }
            else {
              uVar11 = uVar5;
              if (uVar5 == 0x100) {
                uVar11 = 0xff00;
              }
              uVar7 = uVar13;
              if (uVar13 == 0x100) {
                uVar7 = 0xff00;
              }
              iVar6 = 1;
              if (uVar11 < uVar7) {
                iVar6 = -1;
              }
            }
            if ((0 < iVar6) &&
               (iVar6 = ssl_version_supported(param_1,uVar13,&local_res8), iVar6 != 0)) {
              uVar5 = uVar13;
            }
          }
        }
        if (uVar15 == 0) {
          if (uVar5 == 0) {
            return 0x102;
          }
          if (param_1[0x136] != 0) {
            if (uVar5 == 0x304) {
              return 0;
            }
            return 0x102;
          }
          FUN_14f66acf0(param_1,uVar5,param_3);
          *(undefined8 *)(param_1 + 2) = local_res8;
          *param_1 = uVar5;
          return 0;
        }
      }
    }
    return 0x9f;
  }
  if (uVar13 != 0x304) {
    iVar6 = 1;
    if ((*(byte *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8) == 0) {
      if ((int)uVar13 < 0x304) {
        iVar6 = -1;
      }
    }
    else {
      uVar11 = uVar13;
      if (uVar13 == 0x100) {
        uVar11 = 0xff00;
      }
      iVar6 = 1;
      if (0x304 < (int)uVar11) {
        iVar6 = -1;
      }
    }
    if (iVar6 < 0) goto LAB_14f66c53c;
  }
  uVar13 = 0x303;
LAB_14f66c53c:
  uVar11 = *puVar14;
  do {
    if (uVar11 == 0) {
      uVar9 = 0x18c;
      if (uVar5 != 0) {
        uVar9 = 0x102;
      }
      return uVar9;
    }
    if (*(code **)(puVar14 + 4) != (code *)0x0) {
      uVar11 = *puVar14;
      if (uVar13 != uVar11) {
        iVar6 = 1;
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          if ((int)uVar13 < (int)uVar11) {
            iVar6 = -1;
          }
        }
        else {
          if (uVar11 == 0x100) {
            uVar11 = 0xff00;
          }
          uVar7 = uVar13;
          if (uVar13 == 0x100) {
            uVar7 = 0xff00;
          }
          iVar6 = 1;
          if ((int)uVar11 < (int)uVar7) {
            iVar6 = -1;
          }
        }
        if (iVar6 < 0) goto LAB_14f66c5a9;
      }
      uVar9 = (**(code **)(puVar14 + 4))();
      iVar6 = FUN_14f66c8a0(param_1,uVar9);
      if (iVar6 == 0) {
        FUN_14f66acf0(param_1,*puVar14,param_3);
        *param_1 = *puVar14;
        *(undefined8 *)(param_1 + 2) = uVar9;
        return 0;
      }
      uVar5 = 1;
    }
LAB_14f66c5a9:
    puVar14 = puVar14 + 6;
    uVar11 = *puVar14;
  } while( true );
}

// ssl_get_min_max_version @ 14f66c610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint ssl_get_min_max_version(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int local_res8;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    puVar10 = &DAT_15347cce0;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar5 = *param_1;
      *param_3 = iVar5;
      *param_2 = iVar5;
      return -(uint)(param_4 != (uint *)0x0) & 0x44;
    }
    puVar10 = &DAT_15347cac0;
  }
  uVar9 = 0;
  local_res8 = 0;
  *param_2 = 0;
  bVar3 = true;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  uVar1 = *puVar10;
  uVar4 = uVar9;
  do {
    if (uVar1 == 0) {
      *param_3 = local_res8;
      if (local_res8 == 0) {
        uVar9 = 0xbf;
      }
      return uVar9;
    }
    uVar11 = uVar9;
    if (*(code **)(puVar10 + 2) == (code *)0x0) {
LAB_14f66c6bc:
      bVar3 = true;
    }
    else {
      piVar7 = (int *)(**(code **)(puVar10 + 2))();
      uVar11 = uVar4;
      if ((bVar3) && (uVar4 == 0)) {
        uVar11 = *puVar10;
      }
      iVar5 = param_1[0x175];
      iVar2 = *piVar7;
      if ((iVar5 != 0) && (iVar2 != iVar5)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          iVar8 = 1;
          if (iVar2 < iVar5) {
            iVar8 = -1;
          }
        }
        else {
          if (iVar5 == 0x100) {
            iVar5 = 0xff00;
          }
          iVar6 = iVar2;
          if (iVar2 == 0x100) {
            iVar6 = 0xff00;
          }
          iVar8 = 1;
          if (iVar5 < iVar6) {
            iVar8 = -1;
          }
        }
        if (iVar8 < 0) goto LAB_14f66c6bc;
      }
      iVar5 = ssl_security(param_1,9,0,iVar2,0);
      if (iVar5 == 0) goto LAB_14f66c6bc;
      iVar5 = param_1[0x176];
      if ((iVar5 != 0) && (iVar2 != iVar5)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          iVar6 = 1;
          if (iVar2 < iVar5) {
            iVar6 = -1;
          }
        }
        else {
          if (iVar5 == 0x100) {
            iVar5 = 0xff00;
          }
          if (iVar2 == 0x100) {
            iVar2 = 0xff00;
          }
          iVar6 = 1;
          if (iVar5 < iVar2) {
            iVar6 = -1;
          }
        }
        if (0 < iVar6) goto LAB_14f66c6bc;
      }
      if (((piVar7[2] & param_1[0x173]) != 0) ||
         (((*(byte *)(piVar7 + 1) & 2) != 0 &&
          ((*(uint *)(*(longlong *)(param_1 + 0x122) + 0x1c) & 0x30000) != 0)))) goto LAB_14f66c6bc;
      if (bVar3) {
        if ((param_4 != (uint *)0x0) && (uVar11 != 0)) {
          *param_4 = uVar11;
        }
        local_res8 = *piVar7;
        *param_2 = local_res8;
        bVar3 = false;
      }
      else {
        *param_2 = *piVar7;
      }
    }
    puVar10 = puVar10 + 6;
    uVar1 = *puVar10;
    uVar4 = uVar11;
  } while( true );
}

// FUN_14f66c8a0 @ 14f66c8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f66c8a0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  iVar2 = *(int *)(param_1 + 0x5d4);
  if ((iVar2 != 0) && (iVar3 != iVar2)) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      iVar4 = 1;
      if (iVar3 < iVar2) {
        iVar4 = -1;
      }
    }
    else {
      if (iVar2 == 0x100) {
        iVar2 = 0xff00;
      }
      iVar1 = iVar3;
      if (iVar3 == 0x100) {
        iVar1 = 0xff00;
      }
      iVar4 = 1;
      if (iVar2 < iVar1) {
        iVar4 = -1;
      }
    }
    if (iVar4 < 0) {
      return 0x18c;
    }
  }
  iVar2 = ssl_security(param_1,9,0,iVar3,0,0x14f66c8b5);
  if (iVar2 == 0) {
    return 0x18c;
  }
  if ((*(int *)(param_1 + 0x5d8) != 0) && (iVar3 = FUN_14f66ea30(param_1,iVar3), 0 < iVar3)) {
    return 0xa6;
  }
  if ((param_2[2] & *(uint *)(param_1 + 0x5cc)) != 0) {
    return 0x102;
  }
  if (((*(byte *)(param_2 + 1) & 2) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0)) {
    return 0x9e;
  }
  return 0;
}

// ssl_set_client_hello_version @ 14f66c9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_set_client_hello_version(int *param_1)

{
  undefined8 uVar1;
  int local_res8 [2];
  undefined1 local_res10 [24];
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
    uVar1 = ssl_get_min_max_version(param_1,local_res10,local_res8,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_1 = local_res8[0];
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) &&
       (0x303 < local_res8[0])) {
      local_res8[0] = 0x303;
    }
    param_1[0x17b] = local_res8[0];
  }
  return 0;
}

// ssl_set_version_bound @ 14f66ca70

undefined8 ssl_set_version_bound(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *param_3 = 0;
    return 1;
  }
  bVar1 = param_2 - 0x300U < 5;
  iVar3 = param_2;
  if (param_2 == 0x100) {
    iVar3 = 0xff00;
  }
  bVar2 = iVar3 - 0xfefdU < 4;
  if ((!bVar1) && (!bVar2)) {
    return 0;
  }
  if (((param_1 == 0x10000) || (bVar1 = bVar2, param_1 == 0x1ffff)) && (bVar1)) {
    *param_3 = param_2;
  }
  return 1;
}

// ssl_version_supported @ 14f66caf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl_version_supported(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = **(int **)(param_1 + 2);
  if (iVar2 == 0x10000) {
    piVar6 = &DAT_15347cce0;
  }
  else {
    if (iVar2 != 0x1ffff) {
      iVar2 = *param_1;
      if (param_2 == iVar2) {
        return true;
      }
      if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) {
        if (iVar2 == 0x100) {
          iVar2 = 0xff00;
        }
        if (param_2 == 0x100) {
          param_2 = 0xff00;
        }
        iVar5 = 1;
        if (iVar2 < param_2) {
          iVar5 = -1;
        }
        return iVar5 == 0;
      }
      iVar5 = 1;
      if (param_2 < iVar2) {
        iVar5 = -1;
      }
      return iVar5 == 0;
    }
    piVar6 = &DAT_15347cac0;
  }
  iVar2 = *piVar6;
  do {
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = *piVar6;
    if (param_2 != iVar2) {
      iVar5 = 1;
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
        if (param_2 < iVar2) {
          iVar5 = -1;
        }
      }
      else {
        iVar4 = iVar2;
        if (iVar2 == 0x100) {
          iVar4 = 0xff00;
        }
        iVar1 = param_2;
        if (param_2 == 0x100) {
          iVar1 = 0xff00;
        }
        iVar5 = 1;
        if (iVar4 < iVar1) {
          iVar5 = -1;
        }
      }
      if (0 < iVar5) {
        return false;
      }
    }
    if (*(code **)(piVar6 + 2) != (code *)0x0) {
      if (param_2 != iVar2) {
        iVar5 = 1;
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          if (param_2 < iVar2) {
            iVar5 = -1;
          }
        }
        else {
          if (iVar2 == 0x100) {
            iVar2 = 0xff00;
          }
          iVar4 = param_2;
          if (param_2 == 0x100) {
            iVar4 = 0xff00;
          }
          iVar5 = 1;
          if (iVar2 < iVar4) {
            iVar5 = -1;
          }
        }
        if (iVar5 != 0) goto LAB_14f66cc7c;
      }
      uVar3 = (**(code **)(piVar6 + 2))();
      iVar2 = FUN_14f66c8a0(param_1,uVar3);
      if ((iVar2 == 0) &&
         (((param_1[0xe] == 0 || (param_2 != 0x304)) || (iVar2 = FUN_14f66b3d0(param_1), iVar2 != 0)
          ))) {
        if (param_3 != (undefined8 *)0x0) {
          uVar3 = (**(code **)(piVar6 + 2))();
          *param_3 = uVar3;
        }
        return true;
      }
    }
LAB_14f66cc7c:
    piVar6 = piVar6 + 6;
    iVar2 = *piVar6;
  } while( true );
}

// ssl_x509err2alert @ 14f66ccc0

undefined4 ssl_x509err2alert(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_15347cb90;
  iVar2 = 0x32;
  do {
    if (iVar2 == param_1) break;
    iVar2 = *(int *)(puVar1 + 8);
    puVar1 = puVar1 + 8;
  } while (iVar2 != 0);
  return *(undefined4 *)(puVar1 + 4);
}

// tls13_restore_handshake_digest_for_pha @ 14f66ccf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls13_restore_handshake_digest_for_pha(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x7a8) == 0) {
    ossl_statem_fatal(param_1,0x50,0x269,0x44,"ssl\\statem\\statem_lib.c",0x10000097e);
    return 0;
  }
  iVar1 = EVP_MD_CTX_copy_ex(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x269,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x985));
    return 0;
  }
  return 1;
}

// tls13_save_handshake_digest_for_pha @ 14f66cda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls13_save_handshake_digest_for_pha(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    return 1;
  }
  iVar1 = ssl3_digest_cached_records(param_1,1);
  if (iVar1 != 0) {
    lVar2 = EVP_MD_CTX_new();
    *(longlong *)(param_1 + 0x7a8) = lVar2;
    if (lVar2 != 0) {
      iVar1 = EVP_MD_CTX_copy_ex(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
      if (iVar1 != 0) {
        return 1;
      }
      ossl_statem_fatal(param_1,0x50,0x26a,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar3,0x96c));
      EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x7a8));
      *(undefined8 *)(param_1 + 0x7a8) = 0;
      return 0;
    }
    ossl_statem_fatal(param_1,0x50,0x26a,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar3,0x965));
  }
  return 0;
}

// tls_close_construct_packet @ 14f66ce90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_close_construct_packet(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong local_res20;
  
  if ((param_3 != 0x101) && (iVar1 = WPACKET_close(param_2), iVar1 == 0)) {
    return 0;
  }
  iVar1 = WPACKET_get_length(param_2,&local_res20);
  if ((iVar1 != 0) && (local_res20 < 0x80000000)) {
    *(longlong *)(param_1 + 0x98) = (longlong)(int)local_res20;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return 1;
  }
  return 0;
}

// tls_construct_cert_verify @ 14f66cf20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_cert_verify(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  char *local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined1 local_f8 [176];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f66cf3a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar8 = 0;
  local_110 = 0;
  local_120 = 0;
  lVar6 = 0;
  local_128 = 0;
  lVar5 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x2d8);
  local_118 = (char *)0x0;
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x2e0), lVar2 == 0)) {
    local_130 = 0xf4;
LAB_14f66d22e:
    uVar7 = 0x44;
  }
  else {
    pcVar3 = *(char **)(lVar2 + 8);
    if ((pcVar3 == (char *)0x0) || (iVar4 = tls1_lookup_md(lVar1,&local_110), iVar4 == 0)) {
      local_130 = 0xfb;
      goto LAB_14f66d22e;
    }
    lVar6 = EVP_MD_CTX_new();
    lVar5 = lVar8;
    if (lVar6 == 0) {
      local_130 = 0x102;
      uVar7 = 0x41;
      goto LAB_14f66d234;
    }
    iVar4 = FUN_14f66b220(param_1,local_f8,local_108,&local_118);
    if (iVar4 == 0) goto LAB_14f66d249;
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) != 0) &&
       (iVar4 = WPACKET_put_bytes__(param_2,*(undefined2 *)(lVar1 + 8),2), iVar4 == 0)) {
      local_130 = 0x10e;
      goto LAB_14f66d22e;
    }
    iVar4 = EVP_PKEY_size(pcVar3);
    local_128 = (longlong)iVar4;
    lVar5 = CRYPTO_malloc(local_128,"ssl\\statem\\statem_lib.c",0x112);
    if (lVar5 == 0) {
      local_130 = 0x115;
      uVar7 = 0x41;
    }
    else {
      local_138 = pcVar3;
      iVar4 = EVP_DigestSignInit(lVar6,&local_120,local_110,0);
      if (iVar4 < 1) {
        local_130 = 0x11b;
        uVar7 = 6;
      }
      else if (*(int *)(lVar1 + 0x14) == 0x390) {
        local_138 = (char *)0x0;
        iVar4 = RSA_pkey_ctx_ctrl(local_120,0xffffffff,0x1001,6);
        if (0 < iVar4) {
          local_138 = (char *)0x0;
          iVar4 = RSA_pkey_ctx_ctrl(local_120,0x18,0x1002);
          if (0 < iVar4) goto LAB_14f66d106;
        }
        local_130 = 0x124;
        uVar7 = 6;
      }
      else {
LAB_14f66d106:
        if (*param_1 == 0x300) {
          iVar4 = EVP_DigestUpdate(lVar6,local_108[0],local_118);
          if (((0 < iVar4) &&
              (iVar4 = EVP_MD_CTX_ctrl(lVar6,0x1d,
                                       *(undefined4 *)(*(longlong *)(param_1 + 0x142) + 8),
                                       *(longlong *)(param_1 + 0x142) + 0x50), iVar4 != 0)) &&
             (iVar4 = EVP_DigestSignFinal(lVar6,lVar5,&local_128), 0 < iVar4)) {
LAB_14f66d1a4:
            if ((*(int *)(lVar1 + 0x14) == 0x32b) || (*(int *)(lVar1 + 0x14) - 0x3d3U < 2)) {
              BUF_reverse(lVar5,0,local_128);
            }
            iVar4 = WPACKET_sub_memcpy__(param_2,lVar5,local_128,2);
            if (iVar4 != 0) {
              iVar4 = ssl3_digest_cached_records(param_1,0);
              if (iVar4 != 0) {
                CRYPTO_free(lVar5,"ssl\\statem\\statem_lib.c",0x150);
                EVP_MD_CTX_free(lVar6);
                return 1;
              }
              goto LAB_14f66d249;
            }
            local_130 = 0x146;
            goto LAB_14f66d22e;
          }
          local_130 = 0x130;
          uVar7 = 6;
        }
        else {
          local_138 = local_118;
          iVar4 = EVP_DigestSign(lVar6,lVar5,&local_128,local_108[0]);
          if (0 < iVar4) goto LAB_14f66d1a4;
          local_130 = 0x135;
          uVar7 = 6;
        }
      }
    }
  }
LAB_14f66d234:
  local_138 = "ssl\\statem\\statem_lib.c";
  ossl_statem_fatal(param_1,0x50,0x1f0,uVar7);
LAB_14f66d249:
  CRYPTO_free(lVar5,"ssl\\statem\\statem_lib.c",0x154);
  EVP_MD_CTX_free(lVar6);
  return 0;
}

// tls_construct_change_cipher_spec @ 14f66d2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_change_cipher_spec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_put_bytes__(param_2,1,1);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1ab,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x36a));
    return 0;
  }
  return 1;
}

// tls_construct_finished @ 14f66d310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_finished(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong _Size;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x788) != 4)) {
    *(undefined4 *)(param_1 + 0x70) = 1;
  }
  lVar1 = *(longlong *)(*(int **)(param_1 + 8) + 0x30);
  if ((((((*(byte *)(lVar1 + 0x60) & 8) == 0) && (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2))
       && (iVar2 != 0x10000)) &&
      ((*(int *)(param_1 + 0x38) == 0 && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) == 0))))
     && (uVar6 = 1, uVar3 = (**(code **)(lVar1 + 0x20))(param_1,0x92), (int)uVar3 == 0)) {
    return uVar3;
  }
  plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
  lVar1 = *plVar4;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
  }
  _Size = (**(code **)(*plVar4 + 0x28))(param_1,uVar3,uVar5,*(longlong *)(param_1 + 0xa8) + 0x118);
  if (_Size != 0) {
    *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x198) = _Size;
    iVar2 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0xa8) + 0x118,_Size);
    if (iVar2 == 0) {
      uVar3 = CONCAT44(uVar6,0x23f);
    }
    else {
      if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
           (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
         (iVar2 = ssl_log_secret(param_1,"CLIENT_RANDOM",*(longlong *)(param_1 + 0x508) + 0x50,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)), iVar2 == 0))
      {
        return 0;
      }
      if (_Size < 0x41) {
        lVar1 = *(longlong *)(param_1 + 0xa8);
        if (*(int *)(param_1 + 0x38) == 0) {
          memcpy((void *)(lVar1 + 0x348),(void *)(lVar1 + 0x118),_Size);
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388) = _Size;
        }
        else {
          memcpy((void *)(lVar1 + 0x390),(void *)(lVar1 + 0x118),_Size);
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) = _Size;
        }
        return 1;
      }
      uVar3 = CONCAT44(uVar6,0x253);
    }
    ossl_statem_fatal(param_1,0x50,0x167,0x44,"ssl\\statem\\statem_lib.c",uVar3);
  }
  return 0;
}

// tls_construct_key_update @ 14f66d510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_key_update(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_put_bytes__(param_2,(longlong)*(int *)(param_1 + 0x784),1);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x205,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x267));
    return 0;
  }
  *(undefined4 *)(param_1 + 0x784) = 0xffffffff;
  return 1;
}

// tls_finish_handshake @ 14f66d590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 tls_finish_handshake(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  uVar5 = 1;
  iVar1 = *(int *)(param_1 + 0x70);
  if (param_3 != 0) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      uVar5 = 1;
      BUF_MEM_free(*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    iVar4 = ssl_free_wbio_buffer(param_1);
    if (iVar4 == 0) {
      ossl_statem_fatal(param_1,0x50,0x255,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar5,0x423));
      return 0;
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
       (iVar4 = **(int **)(param_1 + 8), 0x303 < iVar4)) && (iVar4 != 0x10000)) &&
     ((*(int *)(param_1 + 0x38) == 0 && (*(int *)(param_1 + 0x788) == 4)))) {
    *(undefined4 *)(param_1 + 0x788) = 1;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x780) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    ssl3_cleanup_key_block(param_1);
    piVar2 = *(int **)(param_1 + 8);
    if (*(int *)(param_1 + 0x38) == 0) {
      if ((((*(byte *)(*(longlong *)(piVar2 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar2)) &&
         (*piVar2 != 0x10000)) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x768) + 0x48) & 1) != 0) {
          SSL_CTX_remove_session(*(longlong *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x508));
        }
      }
      else {
        ssl_update_cache(param_1,1);
      }
      if (*(int *)(param_1 + 200) != 0) {
        LOCK();
        piVar2 = (int *)(*(longlong *)(param_1 + 0x768) + 0x8c);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *(code **)(param_1 + 0x30) = ossl_statem_connect;
      LOCK();
      piVar2 = (int *)(*(longlong *)(param_1 + 0x768) + 0x70);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    else {
      if ((((*(byte *)(*(longlong *)(piVar2 + 0x30) + 0x60) & 8) != 0) || (*piVar2 < 0x304)) ||
         (*piVar2 == 0x10000)) {
        ssl_update_cache(param_1,2);
      }
      LOCK();
      piVar2 = (int *)(*(longlong *)(param_1 + 0x598) + 0x7c);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      *(code **)(param_1 + 0x30) = ossl_statem_accept;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x110) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10c) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10e) = 0;
      dtls1_clear_received_buffer(param_1);
    }
  }
  pcVar6 = *(code **)(param_1 + 0x568);
  if ((*(code **)(param_1 + 0x568) == (code *)0x0) &&
     (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108), pcVar6 = (code *)0x0,
     pcVar3 != (code *)0x0)) {
    pcVar6 = pcVar3;
  }
  ossl_statem_set_in_init(param_1,0);
  if ((pcVar6 != (code *)0x0) &&
     (((iVar1 != 0 || ((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0))
      || ((iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304 ||
          (((iVar1 == 0x10000 || (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0)) ||
           (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)))))))) {
    (*pcVar6)(param_1,0x20,1);
  }
  if (param_4 == 0) {
    ossl_statem_set_in_init(param_1,1);
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

// tls_get_message_body @ 14f66d860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_get_message_body(undefined4 *param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffffd0;
  undefined8 uVar7;
  
  uVar7 = 0x14f66d86e;
  if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) == 0x101) {
    *param_2 = (ulonglong)(uint)param_1[0x26];
    return 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x24);
  for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x228) - *(longlong *)(param_1 + 0x26);
      lVar4 != 0; lVar4 = lVar4 - local_res8) {
    in_stack_ffffffffffffffd0 = in_stack_ffffffffffffffd0 & 0xffffffff00000000;
    iVar1 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))
                      (param_1,0x16,0,*(longlong *)(param_1 + 0x26) + lVar2,lVar4,
                       in_stack_ffffffffffffffd0,&local_res8,uVar7);
    if (iVar1 < 1) {
      param_1[10] = 3;
      goto LAB_14f66d9a2;
    }
    *(longlong *)(param_1 + 0x26) = *(longlong *)(param_1 + 0x26) + local_res8;
  }
  if ((**(char **)(*(longlong *)(param_1 + 0x22) + 8) == '\x14') &&
     (iVar1 = ssl3_take_mac(param_1), iVar1 == 0)) {
LAB_14f66d9a2:
    *param_2 = 0;
    return 0;
  }
  iVar1 = RECORD_LAYER_is_sslv2_record(param_1 + 0x20c);
  if (iVar1 == 0) {
    if (((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
           (iVar1 = **(int **)(param_1 + 2), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
         ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 4 &&
          (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 0x18)))) &&
        ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 2 ||
         ((*(ulonglong *)(param_1 + 0x26) < 0x26 ||
          (iVar1 = memcmp(&hrrrandom,(void *)(*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 6),
                          0x20), iVar1 != 0)))))) &&
       (iVar1 = ssl3_finish_mac(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
                                *(longlong *)(param_1 + 0x26) + 4), iVar1 == 0)) goto LAB_14f66d9a2;
    pcVar6 = *(code **)(param_1 + 0x2e);
    if (pcVar6 == (code *)0x0) goto LAB_14f66da8e;
    uVar5 = 0x16;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(longlong *)(param_1 + 0x26) + 4;
    uVar3 = *param_1;
  }
  else {
    iVar1 = ssl3_finish_mac(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
                            *(undefined8 *)(param_1 + 0x26));
    if (iVar1 == 0) goto LAB_14f66d9a2;
    pcVar6 = *(code **)(param_1 + 0x2e);
    if (pcVar6 == (code *)0x0) goto LAB_14f66da8e;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = 0;
    lVar2 = *(longlong *)(param_1 + 0x26);
    uVar3 = 2;
  }
  (*pcVar6)(0,uVar3,uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),lVar2,param_1,uVar7);
LAB_14f66da8e:
  *param_2 = *(ulonglong *)(param_1 + 0x26);
  return 1;
}

// tls_get_message_header @ 14f66dac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_get_message_header(undefined4 *param_1,uint *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_res8 [2];
  longlong local_res18 [2];
  undefined4 *in_stack_ffffffffffffffd0;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f66dad2;
  pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x22) + 8);
  do {
    uVar2 = *(ulonglong *)(param_1 + 0x26);
    while (uVar2 < 4) {
      in_stack_ffffffffffffffd0 =
           (undefined4 *)((ulonglong)in_stack_ffffffffffffffd0 & 0xffffffff00000000);
      iVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))
                        (param_1,0x16,local_res8,pbVar1 + *(longlong *)(param_1 + 0x26),
                         4 - *(longlong *)(param_1 + 0x26),in_stack_ffffffffffffffd0,local_res18,
                         uVar6);
      if (iVar3 < 1) {
        param_1[10] = 3;
        return 0;
      }
      if (local_res8[0] == 0x14) {
        if (((*(longlong *)(param_1 + 0x26) == 0) && (local_res18[0] == 1)) && (*pbVar1 == 1)) {
          if ((param_1[0x17] == 0) && ((**(uint **)(param_1 + 0x2a) & 0x800) != 0)) {
            return 0;
          }
          *param_2 = 0x101;
          *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x230) = 0x101;
          *(undefined8 *)(param_1 + 0x26) = 0;
          *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x228) = 1;
          return 1;
        }
        uVar5 = 0x498;
        uVar6 = 0x67;
LAB_14f66dc8a:
        ossl_statem_fatal(param_1,10,0x183,uVar6,"ssl\\statem\\statem_lib.c",uVar5);
        return 0;
      }
      if (local_res8[0] != 0x16) {
        uVar5 = 0x4ae;
        uVar6 = 0x85;
        goto LAB_14f66dc8a;
      }
      *(longlong *)(param_1 + 0x26) = *(longlong *)(param_1 + 0x26) + local_res18[0];
      local_res8[0] = 0x16;
      uVar2 = *(ulonglong *)(param_1 + 0x26);
    }
    if (((param_1[0xe] != 0) || (param_1[0x17] == 1)) ||
       ((*pbVar1 != 0 || (((pbVar1[1] != 0 || (pbVar1[2] != 0)) || (pbVar1[3] != 0)))))) {
      *param_2 = (uint)*pbVar1;
      *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x230) = (uint)*pbVar1;
      iVar3 = RECORD_LAYER_is_sslv2_record(param_1 + 0x20c);
      if (iVar3 == 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x2a) + 0x228) =
             (ulonglong)CONCAT21(CONCAT11(pbVar1[1],pbVar1[2]),pbVar1[3]);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 4;
        *(undefined8 *)(param_1 + 0x26) = 0;
      }
      else {
        lVar4 = RECORD_LAYER_get_rrec_length(param_1 + 0x20c);
        *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x228) = lVar4 + 4;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8);
        *(undefined8 *)(param_1 + 0x26) = 4;
      }
      *(longlong *)(param_1 + 0x24) = lVar4;
      return 1;
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      in_stack_ffffffffffffffd0 = param_1;
      (**(code **)(param_1 + 0x2e))
                (0,*param_1,0x16,pbVar1,4,param_1,*(undefined8 *)(param_1 + 0x30));
    }
  } while( true );
}

// tls_process_cert_verify @ 14f66dd90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong tls_process_cert_verify(int *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined4 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f66dda6;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar6 = 0;
  local_108 = 0;
  lVar14 = 0;
  local_110 = (char *)0x0;
  lVar7 = EVP_MD_CTX_new();
  local_118 = 0;
  lVar10 = lVar6;
  if (lVar7 == 0) {
    local_120 = 0x16d;
    local_128 = "ssl\\statem\\statem_lib.c";
    ossl_statem_fatal(param_1,0x50,0x17b,0x41);
    lVar14 = lVar6;
    goto LAB_14f66e285;
  }
  pcVar8 = (char *)X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x1b8));
  if (pcVar8 == (char *)0x0) {
    local_120 = 0x175;
    uVar11 = 0x50;
    uVar13 = 0x44;
  }
  else {
    lVar9 = ssl_cert_lookup_by_pkey(pcVar8,0);
    if (lVar9 == 0) {
      local_120 = 0x17b;
      uVar11 = 0x2f;
      uVar13 = 0xdc;
    }
    else if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) == 0) {
      iVar5 = tls1_set_peer_legacy_sigalg(param_1,pcVar8);
      if (iVar5 != 0) goto LAB_14f66dec5;
      local_120 = 0x18d;
      uVar11 = 0x50;
      uVar13 = 0x44;
    }
    else {
      if ((ulonglong)param_2[1] < 2) {
        local_120 = 0x184;
        uVar13 = 0xf0;
      }
      else {
        puVar3 = (undefined1 *)*param_2;
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        *param_2 = (longlong)(puVar3 + 2);
        param_2[1] = param_2[1] - 2;
        iVar5 = tls12_check_peer_sigalg(param_1,CONCAT11(uVar1,uVar2),pcVar8);
        if (iVar5 < 1) goto LAB_14f66e285;
LAB_14f66dec5:
        iVar5 = tls1_lookup_md(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x308),&local_108);
        if (iVar5 == 0) {
          local_120 = 0x193;
          uVar11 = 0x50;
          uVar13 = 0x44;
          goto LAB_14f66e261;
        }
        if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) == 0) &&
           (((param_2[1] == 0x40 &&
             ((iVar5 = EVP_PKEY_id(pcVar8), iVar5 == 0x32b ||
              (iVar5 = EVP_PKEY_id(pcVar8), iVar5 == 0x3d3)))) ||
            ((param_2[1] == 0x80 && (iVar5 = EVP_PKEY_id(pcVar8), iVar5 == 0x3d4)))))) {
          uVar12 = (ulonglong)*(uint *)(param_2 + 1);
LAB_14f66dfab:
          iVar5 = EVP_PKEY_size(pcVar8);
          if (((iVar5 < (int)uVar12) || (iVar5 < (int)param_2[1])) ||
             (uVar4 = param_2[1], uVar4 == 0)) {
            local_120 = 0x1b6;
            local_128 = "ssl\\statem\\statem_lib.c";
            ossl_statem_fatal(param_1,0x32,0x17b);
            lVar10 = 0;
            goto LAB_14f66e285;
          }
          if (uVar12 <= uVar4) {
            lVar9 = *param_2;
            param_2[1] = uVar4 - uVar12;
            *param_2 = lVar9 + uVar12;
            iVar5 = FUN_14f66b220(param_1,local_f8,&local_100,&local_110);
            if (iVar5 == 0) goto LAB_14f66e285;
            local_128 = pcVar8;
            iVar5 = EVP_DigestVerifyInit(lVar7,&local_118,local_108,0);
            if (iVar5 < 1) {
              uVar11 = 0x50;
              local_120 = 0x1ca;
              uVar13 = 6;
              goto LAB_14f66e261;
            }
            iVar5 = EVP_PKEY_id(pcVar8);
            if ((iVar5 == 0x32b) || (iVar5 - 0x3d3U < 2)) {
              lVar10 = CRYPTO_malloc(uVar12,"ssl\\statem\\statem_lib.c",0x1d3);
              if (lVar10 == 0) {
                local_120 = 0x1d5;
                uVar11 = 0x50;
                uVar13 = 0x41;
                goto LAB_14f66e261;
              }
              BUF_reverse(lVar10,lVar9,uVar12);
              lVar9 = lVar10;
            }
            if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x308) == 0) ||
               (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x308) + 0x14) != 0x390)) {
LAB_14f66e119:
              if (*param_1 == 0x300) {
                iVar5 = EVP_DigestUpdate(lVar7,local_100,local_110);
                if ((iVar5 < 1) ||
                   (iVar5 = EVP_MD_CTX_ctrl(lVar7,0x1d,
                                            *(undefined4 *)(*(longlong *)(param_1 + 0x142) + 8),
                                            *(longlong *)(param_1 + 0x142) + 0x50), iVar5 == 0)) {
                  uVar11 = 0x50;
                  local_120 = 0x1ed;
                  uVar13 = 6;
                }
                else {
                  iVar5 = EVP_DigestVerifyFinal(lVar7,lVar9,uVar12);
                  if (0 < iVar5) goto LAB_14f66e1c9;
                  uVar11 = 0x33;
                  local_120 = 0x1f2;
                  uVar13 = 0x7b;
                }
              }
              else {
                local_128 = local_110;
                iVar5 = EVP_DigestVerify(lVar7,lVar9,uVar12,local_100);
                if (0 < iVar5) {
LAB_14f66e1c9:
                  if ((((param_1[0xe] == 0) &&
                       ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0))
                      && (iVar5 = **(int **)(param_1 + 2), 0x303 < iVar5)) &&
                     ((iVar5 != 0x10000 && (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x248) == 1))))
                  {
                    lVar14 = 2;
                  }
                  else {
                    lVar14 = 3;
                  }
                  goto LAB_14f66e285;
                }
                uVar11 = 0x33;
                local_120 = 0x1f9;
                uVar13 = 0x7b;
              }
            }
            else {
              local_128 = (char *)0x0;
              iVar5 = RSA_pkey_ctx_ctrl(local_118,0xffffffff,0x1001,6);
              if (0 < iVar5) {
                local_128 = (char *)0x0;
                iVar5 = RSA_pkey_ctx_ctrl(local_118,0x18,0x1002,0xffffffff);
                if (0 < iVar5) goto LAB_14f66e119;
              }
              uVar11 = 0x50;
              local_120 = 0x1e3;
              uVar13 = 6;
            }
            goto LAB_14f66e261;
          }
          local_120 = 0x1bb;
        }
        else {
          if (1 < (ulonglong)param_2[1]) {
            puVar3 = (undefined1 *)*param_2;
            uVar12 = (ulonglong)CONCAT11(*puVar3,puVar3[1]);
            *param_2 = (longlong)(puVar3 + 2);
            param_2[1] = param_2[1] - 2;
            goto LAB_14f66dfab;
          }
          local_120 = 0x1ae;
        }
        uVar13 = 0x9f;
      }
      uVar11 = 0x32;
    }
  }
LAB_14f66e261:
  local_128 = "ssl\\statem\\statem_lib.c";
  ossl_statem_fatal(param_1,uVar11,0x17b,uVar13);
  lVar14 = lVar6;
LAB_14f66e285:
  BIO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0xe0));
  *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0xe0) = 0;
  EVP_MD_CTX_free(lVar7);
  CRYPTO_free(lVar10,"ssl\\statem\\statem_lib.c",0x20f);
  return lVar14;
}

// tls_process_change_cipher_spec @ 14f66e2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_change_cipher_spec(int *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = 1;
  lVar1 = *(longlong *)(param_2 + 8);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    if (lVar1 == 0) goto LAB_14f66e325;
    uVar5 = 0x1000002d4;
LAB_14f66e359:
    uVar3 = 0x32;
    uVar4 = 0x67;
  }
  else {
    if (*param_1 == 0x100) {
      if (lVar1 != 2) {
LAB_14f66e351:
        uVar5 = 0x1000002cd;
        goto LAB_14f66e359;
      }
    }
    else if (lVar1 != 0) goto LAB_14f66e351;
LAB_14f66e325:
    if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) == 0) {
      uVar3 = 10;
      uVar5 = 0x1000002dc;
      uVar4 = 0x85;
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xf0) = 1;
      iVar2 = ssl3_do_change_cipher_spec(param_1);
      if (iVar2 != 0) {
        if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) &&
           (dtls1_reset_seq_numbers(param_1,1), *param_1 == 0x100)) {
          *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) =
               *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) + 1;
        }
        return 3;
      }
      uVar5 = CONCAT44(uVar3,0x2e3);
      uVar3 = 0x50;
      uVar4 = 0x44;
    }
  }
  ossl_statem_fatal(param_1,uVar3,0x16b,uVar4,"ssl\\statem\\statem_lib.c",uVar5);
  return 0;
}

// tls_process_finished @ 14f66e400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_finished(longlong param_1,undefined8 *param_2)

{
  ulonglong _Size;
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x788) != 4) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) &&
       (uVar6 = 1, iVar2 = tls13_save_handshake_digest_for_pha(param_1), iVar2 == 0)) {
      return 0;
    }
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) &&
     ((iVar2 != 0x10000 &&
      (iVar2 = RECORD_LAYER_processed_read_pending(param_1 + 0x830), iVar2 != 0)))) {
    uVar5 = CONCAT44(uVar6,0x315);
    uVar4 = 0xb6;
  }
  else {
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
       (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xf0) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xf0) = 0;
      _Size = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x220);
      if (_Size == param_2[1]) {
        iVar2 = CRYPTO_memcmp(*param_2,*(longlong *)(param_1 + 0xa8) + 0x1a0,_Size);
        if (iVar2 == 0) {
          if (_Size < 0x41) {
            lVar1 = *(longlong *)(param_1 + 0xa8);
            if (*(int *)(param_1 + 0x38) == 0) {
              memcpy((void *)(lVar1 + 0x390),(void *)(lVar1 + 0x1a0),_Size);
              *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) = _Size;
            }
            else {
              memcpy((void *)(lVar1 + 0x348),(void *)(lVar1 + 0x1a0),_Size);
              *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388) = _Size;
            }
            lVar1 = *(longlong *)(*(int **)(param_1 + 8) + 0x30);
            if ((((*(byte *)(lVar1 + 0x60) & 8) != 0) ||
                (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
              return 1;
            }
            if (*(int *)(param_1 + 0x38) == 0) {
              iVar2 = (**(code **)(lVar1 + 0x18))
                                (param_1,param_1 + 0x1b4,param_1 + 0x174,0,local_res8);
              if (iVar2 == 0) {
                return 0;
              }
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))
                                (param_1,0x111);
              if (iVar2 == 0) {
                return 0;
              }
              iVar2 = tls_process_initial_server_flight(param_1);
              if (iVar2 == 0) {
                return 0;
              }
              return 1;
            }
            if (*(int *)(param_1 + 0x788) == 4) {
              return 1;
            }
            uVar4 = (**(code **)(lVar1 + 0x20))(param_1,0x121);
            if ((int)uVar4 != 0) {
              return 1;
            }
            return uVar4;
          }
          uVar3 = 0x50;
          uVar5 = CONCAT44(uVar6,0x335);
          uVar4 = 0x44;
        }
        else {
          uVar3 = 0x33;
          uVar5 = CONCAT44(uVar6,0x32c);
          uVar4 = 0x95;
        }
      }
      else {
        uVar3 = 0x32;
        uVar5 = CONCAT44(uVar6,0x325);
        uVar4 = 0x6f;
      }
      goto LAB_14f66e4ac;
    }
    uVar5 = CONCAT44(uVar6,0x31c);
    uVar4 = 0x9a;
  }
  uVar3 = 10;
LAB_14f66e4ac:
  ossl_statem_fatal(param_1,uVar3,0x16c,uVar4,"ssl\\statem\\statem_lib.c",uVar5);
  return 0;
}

// tls_process_key_update @ 14f66e6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_process_key_update(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = 1;
  iVar3 = RECORD_LAYER_processed_read_pending(param_1 + 0x830);
  if (iVar3 != 0) {
    uVar6 = CONCAT44(uVar4,0x279);
    uVar4 = 10;
    uVar5 = 0xb6;
    goto LAB_14f66e76e;
  }
  if (param_2[1] == 0) {
LAB_14f66e75b:
    uVar6 = CONCAT44(uVar4,0x280);
    uVar4 = 0x32;
  }
  else {
    cVar2 = *(char *)*param_2;
    *param_2 = (char *)*param_2 + 1;
    lVar1 = param_2[1] + -1;
    param_2[1] = lVar1;
    if (lVar1 != 0) goto LAB_14f66e75b;
    if (cVar2 == '\0') {
LAB_14f66e73e:
      iVar3 = tls13_update_key(param_1,0);
      return iVar3 != 0;
    }
    if (cVar2 == '\x01') {
      *(undefined4 *)(param_1 + 0x784) = 0;
      goto LAB_14f66e73e;
    }
    uVar6 = CONCAT44(uVar4,0x28b);
    uVar4 = 0x2f;
  }
  uVar5 = 0x7a;
LAB_14f66e76e:
  ossl_statem_fatal(param_1,uVar4,0x206,uVar5,"ssl\\statem\\statem_lib.c",uVar6);
  return false;
}

// tls_setup_handshake @ 14f66e7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_setup_handshake(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int local_res10 [2];
  undefined1 local_res18 [8];
  
  uVar4 = ssl3_init_finished_mac();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  *(undefined8 *)(param_1 + 0x608) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined2 *)(param_1 + 0x620) = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x768) + 0x68);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x768) + 0x6c);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    lVar5 = *(longlong *)(param_1 + 0xa8);
    *(undefined8 *)(lVar5 + 0xb8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x248) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
LAB_14f66ea08:
    uVar4 = 1;
  }
  else {
    uVar4 = SSL_get_ciphers(param_1);
    iVar3 = ssl_get_min_max_version(param_1,local_res18,local_res10,0);
    if (iVar3 == 0) {
      iVar6 = 0;
      iVar3 = OPENSSL_sk_num(uVar4);
      if (0 < iVar3) {
        do {
          lVar5 = OPENSSL_sk_value(uVar4,iVar6);
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
            if ((*(int *)(lVar5 + 0x2c) <= local_res10[0]) &&
               (local_res10[0] <= *(int *)(lVar5 + 0x30))) {
LAB_14f66e8b8:
              if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
                 (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
                LOCK();
                piVar1 = (int *)(*(longlong *)(param_1 + 0x768) + 0x74);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              else {
                LOCK();
                piVar1 = (int *)(*(longlong *)(param_1 + 0x598) + 0x78);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
                *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) = 0;
              }
              goto LAB_14f66ea08;
            }
          }
          else {
            iVar3 = *(int *)(lVar5 + 0x34);
            if (iVar3 == 0x100) {
              iVar3 = 0xff00;
            }
            iVar2 = local_res10[0];
            if (local_res10[0] == 0x100) {
              iVar2 = 0xff00;
            }
            if (iVar2 <= iVar3) {
              iVar3 = *(int *)(lVar5 + 0x38);
              if (iVar3 == 0x100) {
                iVar3 = 0xff00;
              }
              if (iVar3 <= iVar2) goto LAB_14f66e8b8;
            }
          }
          iVar6 = iVar6 + 1;
          iVar3 = OPENSSL_sk_num(uVar4);
        } while (iVar6 < iVar3);
      }
      ossl_statem_fatal(param_1,0x28,0x1fc,0xb5,"ssl\\statem\\statem_lib.c",0x80);
      ERR_add_error_data(1,"No ciphers enabled for max supported SSL/TLS version");
      uVar4 = 0;
    }
    else {
      ossl_statem_fatal(param_1,0x50,0x1fc,0x44,"ssl\\statem\\statem_lib.c",0x6e);
      uVar4 = 0;
    }
  }
  return uVar4;
}

// FUN_14f66ea30 @ 14f66ea30

undefined8 FUN_14f66ea30(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 == param_3) {
    return 0;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    uVar1 = 1;
    if (param_2 < param_3) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  if (param_2 == 0x100) {
    param_2 = 0xff00;
  }
  if (param_3 == 0x100) {
    param_3 = 0xff00;
  }
  uVar1 = 1;
  if (param_3 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

