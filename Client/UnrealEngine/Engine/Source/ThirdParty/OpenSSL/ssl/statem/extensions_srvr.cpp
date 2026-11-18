// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 55

// FUN_14f697560 @ 14f697560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f697560(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f6975e0 @ 14f6975e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6975e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (1 < (ulonglong)param_1[1]) {
    uVar3 = param_1[1] - 2;
    uVar2 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uVar2 <= uVar3) {
      if (uVar3 == uVar2) {
        *param_1 = puVar1 + 2 + uVar2;
        param_1[1] = 0;
        param_2[1] = uVar2;
        *param_2 = puVar1 + 2;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f697690 @ 14f697690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f697690(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = memchr((void *)*param_1,0,param_1[1]);
  return pvVar1 != (void *)0x0;
}

// FUN_14f6976f0 @ 14f6976f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6976f0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (param_1[1] != param_3) {
    return false;
  }
  iVar1 = CRYPTO_memcmp(*param_1);
  return iVar1 == 0;
}

// FUN_14f6977c0 @ 14f6977c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6977c0(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f697840 @ 14f697840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f697840(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f697970 @ 14f697970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f697970(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14f697b80();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_1 = *param_1 + 8;
  param_1[1] = param_1[1] + -8;
  return 1;
}

// FUN_14f697a00 @ 14f697a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f697a00(undefined8 *param_1,longlong *param_2,longlong *param_3)

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

// FUN_14f697b80 @ 14f697b80

undefined8 FUN_14f697b80(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  if ((ulonglong)param_1[1] < 8) {
    return 0;
  }
  bVar1 = *(byte *)*param_1;
  *param_2 = (ulonglong)bVar1 << 0x38;
  uVar2 = (ulonglong)*(byte *)(*param_1 + 1) << 0x30 | (ulonglong)bVar1 << 0x38;
  *param_2 = uVar2;
  uVar2 = (ulonglong)*(byte *)(*param_1 + 2) << 0x28 | uVar2;
  *param_2 = uVar2;
  uVar2 = (ulonglong)*(byte *)(*param_1 + 3) << 0x20 | uVar2;
  *param_2 = uVar2;
  uVar2 = (ulonglong)*(byte *)(*param_1 + 4) << 0x18 | uVar2;
  *param_2 = uVar2;
  uVar2 = (ulonglong)*(byte *)(*param_1 + 5) << 0x10 | uVar2;
  *param_2 = uVar2;
  uVar2 = (ulonglong)*(byte *)(*param_1 + 6) << 8 | uVar2;
  *param_2 = uVar2;
  *param_2 = *(byte *)(*param_1 + 7) | uVar2;
  return 1;
}

// FUN_14f697c60 @ 14f697c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f697c60(undefined8 *param_1,longlong *param_2)

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

// FUN_14f697d10 @ 14f697d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f697d10(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f697d30 @ 14f697d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f697d30(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f697d50 @ 14f697d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f697d50(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f697d70 @ 14f697d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f697d70(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f697d90 @ 14f697d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f697d90(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f697db0 @ 14f697db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f697db0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f697dd0 @ 14f697dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f697dd0(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f697de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

// tls_construct_stoc_alpn @ 14f697e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_alpn(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x10,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_sub_memcpy__
                          (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                           *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),1);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1c3,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x62e));
  return 0;
}

// tls_construct_stoc_cookie @ 14f697f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 tls_construct_stoc_cookie(longlong param_1,undefined8 param_2)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong local_res8;
  undefined4 uVar7;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  local_28[1] = 0x14f697f28;
  uVar6 = 0;
  if ((**(uint **)(param_1 + 0xa8) & 0x800) == 0) {
    return 2;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x598) + 0xd0) == 0) {
    uVar7 = 0x6fa;
    uVar6 = 0x11f;
    goto LAB_14f6983b3;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x2c,2);
  if ((((((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
        (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
       (((iVar1 = WPACKET_get_total_written(param_2,&local_30), iVar1 == 0 ||
         (iVar1 = WPACKET_reserve_bytes(param_2,0x1076,&local_58), iVar1 == 0)) ||
        ((iVar1 = WPACKET_put_bytes__(param_2,1,2), iVar1 == 0 ||
         ((iVar1 = WPACKET_put_bytes__(param_2,0x304,2), iVar1 == 0 ||
          (iVar1 = WPACKET_put_bytes__(param_2,*(undefined2 *)
                                                (*(longlong *)(param_1 + 0xa8) + 0x406),2),
          iVar1 == 0)))))))) ||
      (iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                         (*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238),param_2,
                          local_28 + 1), iVar1 == 0)) ||
     (iVar1 = WPACKET_put_bytes__(param_2,*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) == 0,
                                  1), iVar1 == 0)) {
LAB_14f6983a2:
    uVar7 = 0x70e;
  }
  else {
    _Var2 = _time64((__time64_t *)0x0);
    iVar1 = WPACKET_put_bytes__(param_2,_Var2,8);
    if (((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
       (iVar1 = WPACKET_reserve_bytes(param_2,0x40,&local_78), iVar1 == 0)) goto LAB_14f6983a2;
    iVar1 = ssl3_digest_cached_records(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = ssl_handshake_hash(param_1,local_78,0x40,&local_50);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = WPACKET_allocate_bytes(param_2,local_50,&local_48);
    if (((iVar1 == 0) || (local_78 != local_48)) ||
       ((iVar1 = WPACKET_close(param_2), iVar1 == 0 ||
        ((iVar1 = WPACKET_start_sub_packet_len__(param_2,1), iVar1 == 0 ||
         (iVar1 = WPACKET_reserve_bytes(param_2,0x1000,&local_70), iVar1 == 0)))))) {
      uVar7 = 0x723;
    }
    else {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x598) + 0xd0))(param_1,local_70,&local_40);
      if (iVar1 == 0) {
        uVar7 = 0x72a;
        uVar6 = 400;
        goto LAB_14f6983b3;
      }
      iVar1 = WPACKET_allocate_bytes(param_2,local_40,&local_38);
      if ((((iVar1 == 0) || (local_70 != local_38)) || (iVar1 = WPACKET_close(param_2), iVar1 == 0))
         || ((iVar1 = WPACKET_get_total_written(param_2,&local_res8), iVar1 == 0 ||
             (iVar1 = WPACKET_reserve_bytes(param_2,0x20,&local_60), iVar1 == 0)))) {
        uVar7 = 0x734;
      }
      else {
        local_res8 = local_res8 - local_30;
        local_68 = 0x20;
        if (local_res8 < 0x1057) {
          lVar3 = EVP_MD_CTX_new();
          lVar4 = EVP_PKEY_new_raw_private_key(0x357,0,*(longlong *)(param_1 + 0x768) + 0x2a0,0x20);
          if ((lVar3 == 0) || (lVar4 == 0)) {
            uVar7 = 0x748;
            uVar5 = 0x41;
          }
          else {
            uVar5 = EVP_sha256();
            iVar1 = EVP_DigestSignInit(lVar3,0,uVar5,0,lVar4);
            if ((iVar1 < 1) ||
               (iVar1 = EVP_DigestSign(lVar3,local_60,&local_68,local_58,local_res8), iVar1 < 1)) {
              uVar7 = 0x750;
              uVar5 = 0x44;
            }
            else if (local_res8 + local_68 < 0x1077) {
              iVar1 = WPACKET_allocate_bytes(param_2,local_68,local_28);
              if ((((iVar1 != 0) && (local_60 == local_28[0])) &&
                  (local_58 == local_60 - local_res8)) &&
                 ((iVar1 = WPACKET_close(param_2), iVar1 != 0 &&
                  (iVar1 = WPACKET_close(param_2), iVar1 != 0)))) {
                uVar6 = 1;
                goto LAB_14f698369;
              }
              uVar7 = 0x760;
              uVar5 = 0x44;
            }
            else {
              uVar7 = 0x756;
              uVar5 = 0x44;
            }
          }
          ossl_statem_fatal(param_1,0x50,0x265,uVar5,"ssl\\statem\\extensions_srvr.c",uVar7);
LAB_14f698369:
          EVP_MD_CTX_free(lVar3);
          EVP_PKEY_free(lVar4);
          return uVar6;
        }
        uVar7 = 0x73c;
      }
    }
  }
  uVar6 = 0x44;
LAB_14f6983b3:
  ossl_statem_fatal(param_1,0x50,0x265,uVar6,"ssl\\statem\\extensions_srvr.c",uVar7);
  return 0;
}

// tls_construct_stoc_cryptopro_bug @ 14f6983f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_stoc_cryptopro_bug(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = 0x2000e8fd;
  local_34 = 0x8301e30;
  local_30 = 0x852a0606;
  local_2c = 0x9020203;
  local_28 = 0x6060830;
  local_24 = 0x203852a;
  local_20 = 0x8301602;
  local_1c = 0x852a0606;
  local_18 = 0x17020203;
  if ((*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x18) - 0x80 < 2) &&
     (iVar1 = SSL_get_options(param_1), iVar1 < 0)) {
    iVar1 = WPACKET_memcpy(param_2,&local_38,0x24);
    if (iVar1 == 0) {
      local_40 = 0x783;
      local_48 = "ssl\\statem\\extensions_srvr.c";
      ossl_statem_fatal(param_1,0x50,0x1c4,0x44);
      return 0;
    }
    return 1;
  }
  return 2;
}

// tls_construct_stoc_early_data @ 14f698500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_early_data(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar4 = 1;
  if (param_3 == 0x2000) {
    if (*(int *)(param_1 + 0x1710) != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0x2a,2);
      if (((iVar1 != 0) && (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 != 0)) &&
         ((iVar1 = WPACKET_put_bytes__(param_2,*(undefined4 *)(param_1 + 0x1710),4), iVar1 != 0 &&
          (iVar1 = WPACKET_close(param_2), iVar1 != 0)))) {
        return 1;
      }
      uVar2 = CONCAT44(uVar3,0x797);
LAB_14f6985e2:
      ossl_statem_fatal(param_1,0x50,0x213,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x710) == 2) {
    iVar1 = WPACKET_put_bytes__(param_2,0x2a,2);
    if (((iVar1 != 0) && (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 != 0)) &&
       (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
      return 1;
    }
    uVar2 = CONCAT44(uVar4,0x7a5);
    goto LAB_14f6985e2;
  }
  return 2;
}

// tls_construct_stoc_ec_pt_formats @ 14f698620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_ec_pt_formats(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f698630;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  if ((((*(byte *)(lVar1 + 0x1c) & 4) != 0) || ((*(byte *)(lVar1 + 0x20) & 8) != 0)) &&
     (*(longlong *)(param_1 + 0x698) != 0)) {
    tls1_get_formatlist(param_1,&local_18,&local_res8);
    iVar2 = WPACKET_put_bytes__(param_2,0xb,2);
    if (iVar2 != 0) {
      iVar2 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar2 != 0) {
        iVar2 = WPACKET_sub_memcpy__(param_2,local_18,local_res8,1);
        if (iVar2 != 0) {
          iVar2 = WPACKET_close(param_2);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1c5,0x44,"ssl\\statem\\extensions_srvr.c",0x57a);
    return 0;
  }
  return 2;
}

// tls_construct_stoc_ems @ 14f698720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_ems(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((**(uint **)(param_1 + 0xa8) & 0x200) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x17,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1c6,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x671));
  return 0;
}

// tls_construct_stoc_etm @ 14f6987d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_etm(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0x70c) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if ((((*(int *)(lVar1 + 0x28) != 0x40) && (iVar2 = *(int *)(lVar1 + 0x24), iVar2 != 4)) &&
        (iVar2 != 0x400)) && (iVar2 != 0x40000)) {
      iVar2 = WPACKET_put_bytes__(param_2,0x16,2);
      if (iVar2 != 0) {
        iVar2 = WPACKET_put_bytes__(param_2,0,2);
        if (iVar2 != 0) {
          return 1;
        }
      }
      ossl_statem_fatal(param_1,0x50,0x1c7,0x44,"ssl\\statem\\extensions_srvr.c",
                        CONCAT44(uVar3,0x661));
      return 0;
    }
    *(undefined4 *)(param_1 + 0x70c) = 0;
  }
  return 2;
}

// tls_construct_stoc_key_share @ 14f6988c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 tls_construct_stoc_key_share(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 uVar8;
  undefined4 uVar7;
  
  uVar8 = 1;
  uVar7 = 1;
  uVar6 = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
  if (*(int *)(param_1 + 0x4d8) == 1) {
    if (lVar1 != 0) {
      return 2;
    }
    iVar2 = WPACKET_put_bytes__(param_2,0x33,2);
    if (((iVar2 != 0) && (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 != 0)) &&
       ((iVar2 = WPACKET_put_bytes__(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406),
                                     2), iVar2 != 0 && (iVar2 = WPACKET_close(param_2), iVar2 != 0))
       )) {
      return true;
    }
    uVar5 = CONCAT44(uVar7,0x6a4);
  }
  else if (lVar1 == 0) {
    if ((*(int *)(param_1 + 200) != 0) &&
       (uVar6 = 1, iVar2 = tls13_generate_handshake_secret(param_1,0,0), iVar2 != 0)) {
      return 2;
    }
    uVar5 = CONCAT44(uVar6,0x6af);
  }
  else {
    if ((*(int *)(param_1 + 200) != 0) && ((*(byte *)(param_1 + 0x708) & 2) == 0)) {
      return 2;
    }
    iVar2 = WPACKET_put_bytes__(param_2,0x33,2);
    if (((iVar2 != 0) && (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 != 0)) &&
       (iVar2 = WPACKET_put_bytes__(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406),2
                                   ), iVar2 != 0)) {
      lVar3 = ssl_generate_pkey(lVar1);
      if (lVar3 == 0) {
        ossl_statem_fatal(param_1,0x50,0x1c8,0x41,"ssl\\statem\\extensions_srvr.c",
                          CONCAT44(uVar8,0x6c7));
      }
      else {
        lVar4 = EVP_PKEY_get1_tls_encodedpoint(lVar3,&local_res8);
        if (lVar4 == 0) {
          ossl_statem_fatal(param_1,0x50,0x1c8,0x10,"ssl\\statem\\extensions_srvr.c",
                            CONCAT44(uVar8,0x6cf));
          EVP_PKEY_free(lVar3);
        }
        else {
          iVar2 = WPACKET_sub_memcpy__(param_2,local_res8,lVar4,2);
          if ((iVar2 != 0) && (iVar2 = WPACKET_close(param_2), iVar2 != 0)) {
            CRYPTO_free(local_res8,"ssl\\statem\\extensions_srvr.c",0x6dc);
            *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) = lVar3;
            iVar2 = ssl_derive(param_1,lVar3,lVar1,1);
            return iVar2 != 0;
          }
          ossl_statem_fatal(param_1,0x50,0x1c8,0x44,"ssl\\statem\\extensions_srvr.c",
                            CONCAT44(uVar8,0x6d7));
          EVP_PKEY_free(lVar3);
          CRYPTO_free(local_res8,"ssl\\statem\\extensions_srvr.c",0x6d9);
        }
      }
      return false;
    }
    uVar5 = CONCAT44(uVar8,0x6c0);
  }
  ossl_statem_fatal(param_1,0x50,0x1c8,0x44,"ssl\\statem\\extensions_srvr.c",uVar5);
  return false;
}

// tls_construct_stoc_maxfragmentlen @ 14f698bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_maxfragmentlen(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (3 < (byte)(*(char *)(*(longlong *)(param_1 + 0x508) + 0x240) - 1U)) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,1,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x508) + 0x240),1)
      ;
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x224,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x55e));
  return 0;
}

// tls_construct_stoc_next_proto_neg @ 14f698ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_next_proto_neg(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f698cb0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x3dc);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 0;
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x280);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,&local_18,local_res8,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x288));
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = WPACKET_put_bytes__(param_2,0x3374,2);
      if ((iVar2 != 0) &&
         (iVar2 = WPACKET_sub_memcpy__(param_2,local_18,local_res8[0],2), iVar2 != 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 1;
        return 1;
      }
      ossl_statem_fatal(param_1,0x50,0x1c9,0x44,"ssl\\statem\\extensions_srvr.c",0x615);
      return 0;
    }
  }
  return 2;
}

// tls_construct_stoc_psk @ 14f698db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_psk(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 200) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x29,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,(longlong)*(int *)(param_1 + 0x730),2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1f8,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x7b7));
  return 0;
}

// tls_construct_stoc_renegotiate @ 14f698e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_renegotiate(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x3d8) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0xff01,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0xa8) + 0x348,
                               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x388));
        if (iVar1 != 0) {
          iVar1 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0xa8) + 0x390,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3d0));
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              iVar1 = WPACKET_close(param_2);
              if (iVar1 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1ca,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x52e));
  return 0;
}

// tls_construct_stoc_server_name @ 14f698fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_server_name(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(int *)(param_1 + 0x740) == 1) &&
     ((*(int *)(param_1 + 200) == 0 ||
      ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)))))) {
    iVar1 = WPACKET_put_bytes__(param_2,0,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1cb,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x546)
                     );
    return 0;
  }
  return 2;
}

// tls_construct_stoc_session_ticket @ 14f699070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_session_ticket(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x678) != 0) {
    iVar1 = tls_use_ticket();
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0x23,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,0,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      ossl_statem_fatal(param_1,0x50,0x1cc,0x44,"ssl\\statem\\extensions_srvr.c",
                        CONCAT44(uVar2,0x5d0));
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x678) = 0;
  return 2;
}

// tls_construct_stoc_status_request @ 14f699130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_stoc_status_request
          (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  
  uVar3 = 1;
  if (((param_3 == 0x4000) || (*(int *)(param_1 + 0x654) == 0)) ||
     (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
      (((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)) && (param_5 != 0)))))
     ) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,5,2);
  if ((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    uVar2 = CONCAT44(uVar3,0x5e9);
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) &&
       ((iVar1 != 0x10000 && (iVar1 = tls_construct_cert_status_body(param_1,param_2), iVar1 == 0)))
       ) {
      return 0;
    }
    iVar1 = WPACKET_close(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = CONCAT44(uVar3,0x5f8);
  }
  ossl_statem_fatal(param_1,0x50,0x1cd,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
  return 0;
}

// tls_construct_stoc_supported_groups @ 14f699250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_supported_groups(longlong param_1,undefined8 param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  undefined4 uVar5;
  longlong local_28 [2];
  
  local_28[1] = 0x14f69925e;
  bVar2 = true;
  if (*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) == 0) {
    return 2;
  }
  tls1_get_supported_groups(param_1,local_28,&local_res8);
  if (local_res8 == 0) {
    ossl_statem_fatal(param_1,0x50,0x220,0x44,"ssl\\statem\\extensions_srvr.c",0x592);
    return 0;
  }
  uVar4 = 0;
  if (local_res8 != 0) {
    do {
      sVar1 = *(short *)(local_28[0] + uVar4 * 2);
      iVar3 = tls_curve_allowed(param_1,sVar1,0x20004);
      if (iVar3 != 0) {
        if (bVar2) {
          if (*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) == sVar1) {
            return 2;
          }
          iVar3 = WPACKET_put_bytes__(param_2,10,2);
          if (((iVar3 == 0) || (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 == 0)) ||
             (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 == 0)) {
            uVar5 = 0x5aa;
            goto LAB_14f6993c9;
          }
          bVar2 = false;
        }
        iVar3 = WPACKET_put_bytes__(param_2,sVar1,2);
        if (iVar3 == 0) {
          uVar5 = 0x5b3;
          goto LAB_14f6993c9;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_res8);
  }
  iVar3 = WPACKET_close(param_2);
  if ((iVar3 != 0) && (iVar3 = WPACKET_close(param_2), iVar3 != 0)) {
    return 1;
  }
  uVar5 = 0x5bc;
LAB_14f6993c9:
  ossl_statem_fatal(param_1,0x50,0x220,0x44,"ssl\\statem\\extensions_srvr.c",uVar5);
  return 0;
}

// tls_construct_stoc_supported_versions @ 14f699410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_supported_versions(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    iVar1 = WPACKET_put_bytes__(param_2,0x2b,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,(longlong)*param_1,2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
    uVar2 = CONCAT44(uVar3,0x689);
  }
  else {
    uVar2 = 0x10000067f;
  }
  ossl_statem_fatal(param_1,0x50,0x263,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
  return 0;
}

// tls_construct_stoc_use_srtp @ 14f6994f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_use_srtp(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x778) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0xe,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x778) + 8),2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_put_bytes__(param_2,0,1);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1ce,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x644));
  return 0;
}

// FUN_14f6995f0 @ 14f6995f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6995f0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x678) = 1;
  if (param_2[1] == 0) {
    return 3;
  }
  if (param_2[1] == 0x20) {
    lVar1 = lookup_sess_in_cache(param_1,*param_2,0x20);
    if (lVar1 != 0) {
      *param_3 = lVar1;
      return 5;
    }
  }
  return 4;
}

// tls_parse_ctos_alpn @ 14f699660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_alpn(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined4 uVar11;
  ulonglong uStack_10;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0)) {
    return 1;
  }
  pbVar8 = (byte *)*param_2;
  uVar9 = param_2[1];
  if (1 < uVar9) {
    pbVar7 = pbVar8 + 2;
    uVar3 = CONCAT11(*pbVar8,pbVar8[1]);
    uVar6 = (ulonglong)uVar3;
    if (uVar6 <= uVar9 - 2) {
      uVar9 = (uVar9 - 2) - uVar6;
      pbVar8 = pbVar7 + uVar6;
      if (uVar9 == 0) {
        *param_2 = pbVar7 + uVar6;
        param_2[1] = 0;
        pbVar8 = pbVar7;
        uVar9 = uVar6;
        if (1 < uVar6) {
          uStack_10 = (ulonglong)(uint)uVar3;
          uVar9 = (ulonglong)(uint)uVar3;
          while (bVar10 = uVar6 != 0, uVar6 = uVar9, bVar10) {
            bVar1 = *pbVar8;
            uVar4 = (ulonglong)bVar1;
            if (uVar9 - 1 < uVar4) break;
            pbVar8 = pbVar8 + uVar4 + 1;
            uVar6 = (uVar9 - 1) - uVar4;
            if (bVar1 == 0) break;
            uVar9 = uVar6;
            if (uVar6 == 0) {
              CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0),
                          "ssl\\statem\\extensions_srvr.c",0x1ea);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0) = 0;
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f8) = 0;
              lVar2 = *(longlong *)(param_1 + 0xa8);
              CRYPTO_free(*(undefined8 *)(lVar2 + 0x3f0),
                          "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                          ,0x1c5);
              *(undefined8 *)(lVar2 + 0x3f0) = 0;
              *(undefined8 *)(lVar2 + 0x3f8) = 0;
              if (uStack_10 != 0) {
                lVar5 = CRYPTO_memdup(pbVar7,uStack_10,
                                      "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                      ,0x1ce);
                *(longlong *)(lVar2 + 0x3f0) = lVar5;
                if (lVar5 == 0) {
                  ossl_statem_fatal(param_1,0x50,0x237,0x44,"ssl\\statem\\extensions_srvr.c",0x1f0);
                  return 0;
                }
                *(ulonglong *)(lVar2 + 0x3f8) = uStack_10;
              }
              return 1;
            }
          }
          uVar11 = 0x1e5;
          goto LAB_14f69987e;
        }
      }
    }
  }
  uVar6 = uVar9;
  uVar11 = 0x1db;
LAB_14f69987e:
  ossl_statem_fatal(param_1,0x32,0x237,0x6e,"ssl\\statem\\extensions_srvr.c",uVar11,pbVar8,uVar6);
  return 0;
}

// tls_parse_ctos_cookie @ 14f6998c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_parse_ctos_cookie(int *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined1 auStack_11d8 [32];
  char *local_11b8;
  undefined4 local_11b0;
  byte *local_11a8;
  ulonglong uStack_11a0;
  undefined1 local_1198 [48];
  longlong local_1168;
  byte *local_1160;
  ulonglong uStack_1158;
  ulonglong local_1150;
  undefined8 local_1148;
  byte *local_1140;
  undefined1 local_1138 [32];
  undefined1 local_1118 [4304];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_11d8;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x166) + 0xd8) == 0) ||
     ((**(uint **)(param_1 + 0x2a) & 0x800) == 0)) {
    return 1;
  }
  pbVar11 = (byte *)*param_2;
  uStack_1158 = param_2[1];
  local_1160 = pbVar11;
  if (uStack_1158 < 2) {
LAB_14f69a146:
    local_11b0 = 0x2f1;
    local_11b8 = "ssl\\statem\\extensions_srvr.c";
    ossl_statem_fatal(param_1,0x32,0x266,0x9f);
    return 0;
  }
  bVar1 = *pbVar11;
  bVar2 = pbVar11[1];
  pbVar9 = pbVar11 + 2;
  uVar7 = (ulonglong)(uint)CONCAT11(bVar1,bVar2);
  if (uStack_1158 - 2 < uVar7) goto LAB_14f69a146;
  local_1160 = pbVar9 + uVar7;
  uStack_1158 = (uStack_1158 - 2) - uVar7;
  if (uStack_1158 != 0) goto LAB_14f69a146;
  *param_2 = local_1160;
  param_2[1] = 0;
  local_11a8 = pbVar9;
  local_1150 = uVar7;
  if ((uVar7 < 0x20) || (uVar13 = (ulonglong)(uint)CONCAT11(bVar1,bVar2) - 0x20, uVar7 < uVar13)) {
    local_11b0 = 0x2fb;
    local_11b8 = "ssl\\statem\\extensions_srvr.c";
    ossl_statem_fatal(param_1,0x32,0x266,0x9f);
    return 0;
  }
  lVar4 = EVP_MD_CTX_new();
  uVar5 = EVP_PKEY_new_raw_private_key(0x357,0,*(longlong *)(param_1 + 0x1da) + 0x2a0,0x20);
  if ((lVar4 == 0) || (uVar5 == 0)) {
    EVP_MD_CTX_free(lVar4);
    EVP_PKEY_free(uVar5);
    uVar12 = 0x41;
    local_11b0 = 0x30a;
  }
  else {
    local_1168 = 0x20;
    uVar6 = EVP_sha256();
    local_11b8 = (char *)uVar5;
    iVar3 = EVP_DigestSignInit(lVar4,0,uVar6,0);
    if (((0 < iVar3) &&
        (local_11b8 = (char *)uVar13, iVar3 = EVP_DigestSign(lVar4,local_1138,&local_1168,pbVar9),
        0 < iVar3)) && (local_1168 == 0x20)) {
      EVP_MD_CTX_free(lVar4);
      EVP_PKEY_free(uVar5);
      iVar3 = CRYPTO_memcmp(local_1138,pbVar9 + uVar13,0x20);
      if (iVar3 != 0) {
        local_11b0 = 799;
        uVar8 = 0x2f;
        uVar12 = 0x134;
        goto LAB_14f69a0f3;
      }
      if (uVar7 < 2) {
        uVar8 = 0x32;
        local_11b0 = 0x325;
        uVar12 = 0x9f;
        goto LAB_14f69a0f3;
      }
      if (CONCAT11(*pbVar9,pbVar11[3]) != 1) {
        return 1;
      }
      if (uVar7 - 2 < 2) {
        uVar8 = 0x32;
        local_11b0 = 0x334;
        uVar12 = 0x9f;
        goto LAB_14f69a0f3;
      }
      if (CONCAT11(pbVar11[4],pbVar11[5]) != 0x304) {
        uVar8 = 0x2f;
        local_11b0 = 0x339;
        uVar12 = 0x74;
        goto LAB_14f69a0f3;
      }
      if (uVar7 - 4 < 2) {
        uVar8 = 0x32;
        local_11b0 = 0x33f;
        uVar12 = 0x9f;
        goto LAB_14f69a0f3;
      }
      if (uVar7 - 6 < 2) {
        uVar8 = 0x32;
        local_11b0 = 0x346;
        uVar12 = 0x9f;
        goto LAB_14f69a0f3;
      }
      if ((CONCAT11(pbVar11[6],pbVar11[7]) != *(short *)(*(longlong *)(param_1 + 0x2a) + 0x406)) ||
         (lVar4 = ssl_get_cipher_by_char(param_1,pbVar11 + 8,0),
         *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) != lVar4)) {
        local_11b0 = 0x351;
        uVar8 = 0x2f;
        uVar12 = 0xba;
        goto LAB_14f69a0f3;
      }
      if ((uVar7 != 8) && (bVar1 = pbVar11[10], 7 < uVar7 - 9)) {
        uStack_11a0 = uVar7 - 0x11;
        local_11a8 = pbVar11 + 0x13;
        uVar13 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(pbVar11[0xb],
                                                                                pbVar11[0xc]),
                                                                       pbVar11[0xd]),pbVar11[0xe]),
                                                     pbVar11[0xf]),pbVar11[0x10]),pbVar11[0x11]),
                          pbVar11[0x12]);
        if (1 < uStack_11a0) {
          pbVar10 = pbVar11 + 0x15;
          uVar5 = (ulonglong)CONCAT11(*local_11a8,pbVar11[0x14]);
          if (uVar5 <= uVar7 - 0x13) {
            pbVar11 = pbVar10 + uVar5;
            uStack_11a0 = (uVar7 - 0x13) - uVar5;
            local_11a8 = pbVar11;
            local_1140 = pbVar10;
            if (uStack_11a0 != 0) {
              bVar2 = *pbVar11;
              if (((ulonglong)bVar2 <= uStack_11a0 - 1) &&
                 ((uStack_11a0 - 1) - (ulonglong)bVar2 == 0x20)) {
                uVar7 = _time64((__time64_t *)0x0);
                if ((uVar7 < uVar13) || (600 < uVar7 - uVar13)) {
                  return 1;
                }
                iVar3 = (**(code **)(*(longlong *)(param_1 + 0x166) + 0xd8))
                                  (param_1,pbVar11 + 1,bVar2);
                if (iVar3 == 0) {
                  local_11b0 = 0x36a;
                  uVar8 = 0x2f;
                  uVar12 = 0x134;
                  goto LAB_14f69a0f3;
                }
                iVar3 = WPACKET_init_static_len(local_1198,local_1118,0x10cc,0);
                if (iVar3 == 0) {
                  local_11b0 = 0x375;
                  uVar12 = 0x44;
                }
                else {
                  iVar3 = WPACKET_put_bytes__(local_1198,2,1);
                  if ((((((iVar3 == 0) ||
                         (iVar3 = WPACKET_start_sub_packet_len__(local_1198,3), iVar3 == 0)) ||
                        (iVar3 = WPACKET_put_bytes__(local_1198,0x303,2), iVar3 == 0)) ||
                       ((iVar3 = WPACKET_memcpy(local_1198,&hrrrandom,0x20), iVar3 == 0 ||
                        (iVar3 = WPACKET_sub_memcpy__
                                           (local_1198,param_1 + 0x14c,
                                            *(undefined8 *)(param_1 + 0x154),1), iVar3 == 0)))) ||
                      (iVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x98))
                                         (*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x238),
                                          local_1198,&local_1160), iVar3 == 0)) ||
                     ((iVar3 = WPACKET_put_bytes__(local_1198,0,1), iVar3 == 0 ||
                      (iVar3 = WPACKET_start_sub_packet_len__(local_1198,2), iVar3 == 0)))) {
                    WPACKET_cleanup(local_1198);
                    uVar12 = 0x44;
                    local_11b0 = 900;
                  }
                  else {
                    iVar3 = WPACKET_put_bytes__(local_1198,0x2b,2);
                    if ((((iVar3 == 0) ||
                         (iVar3 = WPACKET_start_sub_packet_len__(local_1198,2), iVar3 == 0)) ||
                        (iVar3 = WPACKET_put_bytes__(local_1198,(longlong)*param_1,2), iVar3 == 0))
                       || (iVar3 = WPACKET_close(local_1198), iVar3 == 0)) {
                      WPACKET_cleanup(local_1198);
                      uVar12 = 0x44;
                      local_11b0 = 0x38d;
                    }
                    else if ((bVar1 == 0) ||
                            (((iVar3 = WPACKET_put_bytes__(local_1198,0x33,2), iVar3 != 0 &&
                              (iVar3 = WPACKET_start_sub_packet_len__(local_1198,2), iVar3 != 0)) &&
                             ((iVar3 = WPACKET_put_bytes__(local_1198,
                                                           *(undefined2 *)
                                                            (*(longlong *)(param_1 + 0x2a) + 0x406),
                                                           2), iVar3 != 0 &&
                              (iVar3 = WPACKET_close(local_1198), iVar3 != 0)))))) {
                      iVar3 = WPACKET_put_bytes__(local_1198,0x2c,2);
                      if ((((iVar3 != 0) &&
                           (iVar3 = WPACKET_start_sub_packet_len__(local_1198,2), iVar3 != 0)) &&
                          (iVar3 = WPACKET_sub_memcpy__(local_1198,pbVar9,local_1150,2), iVar3 != 0)
                          ) && ((((iVar3 = WPACKET_close(local_1198), iVar3 != 0 &&
                                  (iVar3 = WPACKET_close(local_1198), iVar3 != 0)) &&
                                 (iVar3 = WPACKET_close(local_1198), iVar3 != 0)) &&
                                ((iVar3 = WPACKET_get_total_written(local_1198,&local_1148),
                                 iVar3 != 0 && (iVar3 = WPACKET_finish(local_1198), iVar3 != 0))))))
                      {
                        local_11b8 = (char *)local_1148;
                        iVar3 = create_synthetic_message_hash(param_1,local_1140,uVar5,local_1118);
                        if (iVar3 == 0) {
                          return 0;
                        }
                        param_1[0x136] = 1;
                        param_1[0x1ca] = 1;
                        return 1;
                      }
                      WPACKET_cleanup(local_1198);
                      uVar12 = 0x44;
                      local_11b0 = 0x3a5;
                    }
                    else {
                      WPACKET_cleanup(local_1198);
                      uVar12 = 0x44;
                      local_11b0 = 0x397;
                    }
                  }
                }
                goto LAB_14f69a0ee;
              }
            }
          }
        }
      }
      uVar8 = 0x32;
      local_11b0 = 0x35b;
      uVar12 = 0x9f;
      goto LAB_14f69a0f3;
    }
    EVP_MD_CTX_free(lVar4);
    EVP_PKEY_free(uVar5);
    uVar12 = 0x44;
    local_11b0 = 0x316;
  }
LAB_14f69a0ee:
  uVar8 = 0x50;
LAB_14f69a0f3:
  local_11b8 = "ssl\\statem\\extensions_srvr.c";
  ossl_statem_fatal(param_1,uVar8,0x266,uVar12);
  return 0;
}

// tls_parse_ctos_early_data @ 14f69a190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_early_data(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    if (*(int *)(param_1 + 0x4d8) == 0) {
      return 1;
    }
    uVar2 = 0x3f6;
    uVar1 = 0x2f;
  }
  else {
    uVar2 = 0x3f0;
    uVar1 = 0x32;
  }
  ossl_statem_fatal(param_1,uVar1,0x238,0x6e,"ssl\\statem\\extensions_srvr.c",uVar2,0x14f69a19a);
  return 0;
}

// tls_parse_ctos_ec_pt_formats @ 14f69a200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_ec_pt_formats(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  pbVar7 = (byte *)*param_2;
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    bVar1 = *pbVar7;
    uVar3 = (ulonglong)bVar1;
    pbVar6 = pbVar7 + 1;
    uVar2 = (uint)bVar1;
    if (uVar3 <= lVar9 - 1U) {
      pbVar7 = pbVar6 + uVar3;
      lVar9 = (lVar9 - 1U) - uVar3;
      if (lVar9 == 0) {
        *param_2 = pbVar7;
        param_2[1] = 0;
        if (uVar2 != 0) {
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          CRYPTO_free(*(undefined8 *)(param_1 + 0x698),
                      "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                      ,0x1c5);
          *(undefined8 *)(param_1 + 0x698) = 0;
          *(undefined8 *)(param_1 + 0x690) = 0;
          lVar4 = CRYPTO_memdup(pbVar6,(ulonglong)uVar2,
                                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                ,0x1ce);
          *(longlong *)(param_1 + 0x698) = lVar4;
          if (lVar4 != 0) {
            *(ulonglong *)(param_1 + 0x690) = (ulonglong)uVar2;
            return 1;
          }
          uVar5 = 0x50;
          uVar10 = 0x109;
          uVar8 = 0x44;
          goto LAB_14f69a311;
        }
      }
    }
  }
  uVar5 = 0x32;
  uVar10 = 0x100;
  uVar8 = 0x6e;
LAB_14f69a311:
  ossl_statem_fatal(param_1,uVar5,0x239,uVar8,"ssl\\statem\\extensions_srvr.c",uVar10,pbVar7,lVar9);
  return 0;
}

// tls_parse_ctos_ems @ 14f69a340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_ems(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    ossl_statem_fatal(param_1,0x32,0x23a,0x6e,"ssl\\statem\\extensions_srvr.c",0x3e1,0x14f69a34a);
    return 0;
  }
  **(uint **)(param_1 + 0xa8) = **(uint **)(param_1 + 0xa8) | 0x200;
  return 1;
}

// tls_parse_ctos_key_share @ 14f69a3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_key_share(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong in_stack_ffffffffffffffa8;
  undefined4 uVar18;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  ulonglong uStack_30;
  
  bVar6 = false;
  if ((*(int *)(param_1 + 200) != 0) && ((*(byte *)(param_1 + 0x708) & 2) == 0)) {
    return 1;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0) {
    ossl_statem_fatal(param_1,0x50,0x1cf,0x44,"ssl\\statem\\extensions_srvr.c",0x277);
    return 0;
  }
  local_38 = (undefined1 *)*param_2;
  uStack_30 = param_2[1];
  if (1 < uStack_30) {
    puVar10 = local_38 + 2;
    uVar12 = (uint)CONCAT11(*local_38,local_38[1]);
    uVar13 = (ulonglong)uVar12;
    if (uVar13 <= uStack_30 - 2) {
      local_38 = puVar10 + uVar13;
      uStack_30 = (uStack_30 - 2) - uVar13;
      if (uStack_30 == 0) {
        *param_2 = local_38;
        param_2[1] = 0;
        tls1_get_supported_groups(local_38._0_4_,&local_40,&local_48);
        lVar5 = *(longlong *)(param_1 + 0x6b0);
        uVar11 = *(undefined8 *)(param_1 + 0x6b8);
        if (lVar5 == 0) {
          iVar9 = 0x6d;
          uVar18 = 0x28c;
          iVar15 = 0xd1;
        }
        else {
          uVar7 = uVar13;
          if ((*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) == 0) || (uVar13 != 0)) {
joined_r0x00014f69a546:
            do {
              if (uVar13 == 0) {
                return 1;
              }
              if (uVar7 < 2) {
LAB_14f69a74f:
                uVar11 = 0x32;
                uVar18 = 0x2a0;
                uVar16 = 0x9f;
                goto LAB_14f69a719;
              }
              uVar1 = *puVar10;
              uStack_30 = uVar7 - 2;
              uVar2 = puVar10[1];
              local_38 = puVar10 + 2;
              if (uStack_30 < 2) goto LAB_14f69a74f;
              uVar3 = *local_38;
              puVar14 = puVar10 + 4;
              uVar17 = (ulonglong)CONCAT11(uVar3,puVar10[3]);
              if (uVar7 - 4 < uVar17) goto LAB_14f69a74f;
              uVar13 = (uVar7 - 4) - uVar17;
              local_38 = puVar14 + uVar17;
              uStack_30 = uVar13;
              if (CONCAT11(uVar3,puVar10[3]) == 0) goto LAB_14f69a74f;
              puVar10 = local_38;
              uVar7 = uVar13;
            } while (bVar6);
            sVar4 = *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406);
            if ((sVar4 == 0) || ((CONCAT11(uVar1,uVar2) == sVar4 && (uVar13 == 0)))) {
              in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffff00000000;
              iVar9 = check_in_list(param_1,CONCAT11(uVar1,uVar2),uVar11,lVar5,
                                    in_stack_ffffffffffffffa8);
              if (iVar9 == 0) {
                uVar11 = 0x2f;
                uVar18 = 0x2ba;
                uVar16 = 0x6c;
              }
              else {
                in_stack_ffffffffffffffa8 = CONCAT44((int)(in_stack_ffffffffffffffa8 >> 0x20),1);
                iVar9 = check_in_list(param_1,CONCAT11(uVar1,uVar2),local_40,local_48,
                                      in_stack_ffffffffffffffa8);
                puVar10 = local_38;
                uVar7 = uStack_30;
                if (iVar9 == 0) goto joined_r0x00014f69a546;
                lVar8 = ssl_generate_param_group(CONCAT11(uVar1,uVar2));
                *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar8;
                if (lVar8 == 0) {
                  uVar18 = 0x2c6;
                  uVar11 = 0x50;
                  uVar16 = 0x13a;
                }
                else {
                  *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = CONCAT11(uVar1,uVar2);
                  iVar9 = EVP_PKEY_set1_tls_encodedpoint
                                    (*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408),puVar14,
                                     uVar17);
                  if (iVar9 != 0) {
                    bVar6 = true;
                    puVar10 = local_38;
                    uVar7 = uStack_30;
                    goto joined_r0x00014f69a546;
                  }
                  uVar18 = 0x2d0;
                  uVar11 = 0x2f;
                  uVar16 = 0x132;
                }
              }
            }
            else {
              uVar11 = 0x2f;
              uVar18 = 0x2b3;
              uVar16 = 0x6c;
            }
LAB_14f69a719:
            ossl_statem_fatal(param_1,uVar11,0x1cf,uVar16,"ssl\\statem\\extensions_srvr.c",uVar18);
            return 0;
          }
          uVar18 = 0x297;
          iVar9 = uVar12 + 0x2f;
          iVar15 = uVar12 + 0x6c;
        }
        ossl_statem_fatal(param_1,iVar9,0x1cf,iVar15,"ssl\\statem\\extensions_srvr.c",uVar18);
        return 0;
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1cf,0x9f,"ssl\\statem\\extensions_srvr.c",0x27d);
  return 0;
}

// tls_parse_ctos_maxfragmentlen @ 14f69a7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_maxfragmentlen(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_2[1] == 1) {
    bVar1 = *(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = 0;
    if (bVar1 - 1 < 4) {
      if ((*(int *)(param_1 + 200) == 0) ||
         (*(byte *)(*(longlong *)(param_1 + 0x508) + 0x240) == bVar1)) {
        *(byte *)(*(longlong *)(param_1 + 0x508) + 0x240) = bVar1;
        return 1;
      }
      uVar4 = 0xcf;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
    else {
      uVar4 = 0xc3;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
  }
  else {
    uVar2 = 0x32;
    uVar4 = 0xbb;
    uVar3 = 0x6e;
  }
  ossl_statem_fatal(param_1,uVar2,0x23b,uVar3,"ssl\\statem\\extensions_srvr.c",uVar4,0x14f69a7ba);
  return 0;
}

// tls_parse_ctos_post_handshake_auth @ 14f69a8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_post_handshake_auth(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    ossl_statem_fatal(param_1,0x32,0x26c,0x116,"ssl\\statem\\extensions_srvr.c",0x510,0x14f69a8ca);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x788) = 2;
  return 1;
}

// tls_parse_ctos_psk @ 14f69a920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_parse_ctos_psk(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  __time64_t _Var14;
  ulonglong uVar15;
  longlong lVar16;
  byte *pbVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined1 auStack_1f8 [32];
  byte *local_1d8;
  ulonglong *local_1d0;
  ulonglong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  ulonglong local_1a8 [2];
  byte *local_198;
  ulonglong uStack_190;
  undefined2 local_188 [2];
  uint local_184;
  undefined4 local_180;
  longlong local_178;
  ulonglong local_170;
  byte *local_168;
  longlong *local_158;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  uVar15 = 0;
  local_1a8[0] = 0;
  local_180 = 0;
  local_178 = 0;
  if ((*(byte *)(param_1 + 0x708) & 3) == 0) {
    return 1;
  }
  local_198 = (byte *)*param_2;
  uStack_190 = param_2[1];
  local_158 = param_2;
  if (uStack_190 < 2) {
LAB_14f69b157:
    local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x42c);
    local_1d8 = (byte *)0x153489b80;
    ossl_statem_fatal(param_1,0x32,0x1f9,0x6e);
    return 0;
  }
  uVar2 = *local_198;
  uVar3 = local_198[1];
  pbVar17 = local_198 + 2;
  uVar19 = (ulonglong)(uint)CONCAT11(uVar2,uVar3);
  if (uStack_190 - 2 < uVar19) goto LAB_14f69b157;
  local_184 = 0;
  *param_2 = (longlong)(pbVar17 + uVar19);
  param_2[1] = (uStack_190 - 2) - uVar19;
  *(undefined4 *)(param_1 + 0x678) = 0;
  uVar13 = uVar15;
  local_198 = pbVar17;
  uStack_190 = uVar19;
  if (CONCAT11(uVar2,uVar3) == 0) {
    return 1;
  }
  do {
    uVar11 = (uint)uVar13;
    if (uVar19 < 2) {
LAB_14f69b12f:
      local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x439);
LAB_14f69b137:
      uVar18 = 0x32;
LAB_14f69b13c:
      uVar21 = 0x6e;
LAB_14f69b145:
      local_1d8 = (byte *)0x153489b80;
      ossl_statem_fatal(param_1,uVar18,0x1f9,uVar21);
      return 0;
    }
    pbVar1 = pbVar17 + 2;
    uVar13 = (ulonglong)(uint)CONCAT11(*pbVar17,pbVar17[1]);
    if (uStack_190 - 2 < uVar13) goto LAB_14f69b12f;
    uStack_190 = (uStack_190 - 2) - uVar13;
    local_198 = pbVar1 + uVar13;
    if (uStack_190 < 4) goto LAB_14f69b12f;
    bVar4 = local_198[1];
    bVar5 = *local_198;
    uVar19 = uStack_190 - 4;
    bVar6 = local_198[2];
    bVar7 = local_198[3];
    local_198 = local_198 + 4;
    uStack_190 = uVar19;
    local_170 = uVar19;
    local_168 = local_198;
    if ((*(code **)(param_1 + 0x588) != (code *)0x0) &&
       (iVar10 = (**(code **)(param_1 + 0x588))
                           (param_1,pbVar1,(uint)CONCAT11(*pbVar17,pbVar17[1]),local_1a8),
       uVar15 = local_1a8[0], iVar10 == 0)) {
      local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x442);
      uVar18 = 0x50;
      goto LAB_14f69b13c;
    }
    if (uVar15 == 0) {
      if ((*(longlong *)(param_1 + 0x580) != 0) && (uVar13 < 0x81)) {
        CRYPTO_free(0,
                    "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                    ,0x1e2);
        lVar12 = CRYPTO_strndup(pbVar1,uVar13,
                                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                ,0x1e5);
        if (lVar12 == 0) {
          uVar18 = 0x50;
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x450);
          uVar21 = 0x44;
          goto LAB_14f69b145;
        }
        uVar11 = (**(code **)(param_1 + 0x580))(param_1,lVar12,local_148,0x100);
        CRYPTO_free(lVar12,"ssl\\statem\\extensions_srvr.c",0x455);
        if (0x100 < uVar11) {
          uVar18 = 0x50;
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x458);
          uVar21 = 0x44;
          goto LAB_14f69b145;
        }
        if (uVar11 != 0) {
          local_188[0] = 0x113;
          lVar12 = SSL_CIPHER_find(param_1,local_188);
          if (lVar12 == 0) {
            OPENSSL_cleanse(local_148,uVar11);
            uVar18 = 0x50;
            local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x466);
            uVar21 = 0x44;
            goto LAB_14f69b145;
          }
          local_1a8[0] = SSL_SESSION_new();
          if ((((local_1a8[0] != 0) &&
               (iVar10 = SSL_SESSION_set1_master_key(local_1a8[0],local_148,uVar11), iVar10 != 0))
              && (iVar10 = SSL_SESSION_set_cipher(local_1a8[0],lVar12), iVar10 != 0)) &&
             (iVar10 = SSL_SESSION_set_protocol_version(local_1a8[0],0x304), iVar10 != 0)) {
            OPENSSL_cleanse(local_148,uVar11);
            goto LAB_14f69ac0f;
          }
          OPENSSL_cleanse(local_148,uVar11);
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x473);
          goto LAB_14f69b0c4;
        }
LAB_14f69ac0f:
        uVar19 = local_170;
        uVar15 = local_1a8[0];
        uVar11 = local_184;
        if (local_1a8[0] != 0) goto LAB_14f69ada7;
      }
      if (((*(uint *)(param_1 + 0x5cc) >> 0xe & 1) != 0) ||
         ((*(int *)(param_1 + 0x1710) != 0 && ((*(uint *)(param_1 + 0x5cc) >> 0x18 & 1) == 0)))) {
        *(undefined4 *)(param_1 + 0x678) = 1;
        if (uVar13 == 0) goto LAB_14f69af0f;
        lVar12 = local_178;
        if ((uVar13 == 0x20) &&
           (uVar13 = lookup_sess_in_cache(param_1,pbVar1), uVar15 = local_1a8[0], lVar12 = local_178
           , uVar13 != 0)) {
LAB_14f69acc9:
          local_1a8[0] = uVar13;
          if (((*(int *)(param_1 + 0x1710) == 0) || ((*(uint *)(param_1 + 0x5cc) & 0x1000000) != 0))
             || (iVar10 = SSL_CTX_remove_session(*(undefined8 *)(param_1 + 0x768),local_1a8[0]),
                iVar10 != 0)) {
            _Var14 = _time64((__time64_t *)0x0);
            uVar20 = (int)_Var14 - *(int *)(local_1a8[0] + 0x1d4);
            uVar22 = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar4),bVar6),bVar7) -
                     *(int *)(local_1a8[0] + 0x224);
            if (((uVar11 == 0) && ((int)uVar20 <= *(int *)(local_1a8[0] + 0x1d0))) &&
               (((uVar20 * 1000) / 1000 == uVar20 &&
                ((uVar20 = uVar20 * 1000 + 1000, uVar22 <= uVar20 && (uVar20 <= uVar22 + 10000))))))
            {
              *(undefined4 *)(param_1 + 0x714) = 1;
            }
            goto LAB_14f69ae1f;
          }
          SSL_SESSION_free();
          local_1a8[0] = 0;
          uVar15 = 0;
          lVar12 = local_178;
        }
        goto LAB_14f69ad07;
      }
      local_1d0 = local_1a8;
      local_1d8 = (byte *)0x0;
      iVar10 = tls_decrypt_ticket(param_1,pbVar1,uVar13,0);
      if (iVar10 != 3) {
        if ((iVar10 == 0) || (iVar10 == 1)) {
          uVar18 = 0x50;
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4ac);
          uVar21 = 0x44;
          goto LAB_14f69b145;
        }
        uVar15 = local_1a8[0];
        lVar12 = local_178;
        uVar13 = local_1a8[0];
        if ((iVar10 - 2U & 0xfffffffd) != 0) goto LAB_14f69acc9;
        goto LAB_14f69ad07;
      }
LAB_14f69af0f:
      local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4a5);
      goto LAB_14f69b137;
    }
LAB_14f69ada7:
    uVar15 = ssl_session_dup(uVar15,0);
    if (uVar15 == 0) {
      local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x481);
LAB_14f69b0c4:
      uVar21 = 0x44;
      uVar18 = 0x50;
      goto LAB_14f69b0d1;
    }
    SSL_SESSION_free(local_1a8[0]);
    local_1a8[0] = uVar15;
    memcpy((void *)(uVar15 + 0x180),(void *)(param_1 + 0x4e8),*(size_t *)(param_1 + 0x4e0));
    local_180 = 1;
    *(undefined8 *)(local_1a8[0] + 0x178) = *(undefined8 *)(param_1 + 0x4e0);
    if (uVar11 == 0) {
      *(undefined4 *)(param_1 + 0x714) = 1;
    }
    *(undefined4 *)(param_1 + 0x678) = 1;
LAB_14f69ae1f:
    lVar12 = ssl_md(*(undefined4 *)(*(longlong *)(local_1a8[0] + 0x1e0) + 0x40));
    local_178 = lVar12;
    lVar16 = ssl_md(*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40));
    uVar15 = local_1a8[0];
    if (lVar12 == lVar16) break;
    SSL_SESSION_free();
    local_1a8[0] = 0;
    *(undefined4 *)(param_1 + 0x714) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    uVar15 = 0;
LAB_14f69ad07:
    uVar11 = uVar11 + 1;
    uVar13 = (ulonglong)uVar11;
    pbVar17 = local_168;
    local_184 = uVar11;
  } while (uVar19 != 0);
  plVar9 = local_158;
  if (uVar15 == 0) {
    return 1;
  }
  lVar16 = *local_158;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
  iVar10 = EVP_MD_size(lVar12);
  pbVar17 = (byte *)*plVar9;
  uVar15 = plVar9[1];
  if (uVar15 < 2) {
LAB_14f69b0a9:
    uVar18 = 0x32;
    local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4e9);
    uVar21 = 0x6e;
    local_198 = pbVar17;
    uStack_190 = uVar15;
  }
  else {
    local_198 = pbVar17 + 2;
    uStack_190 = (ulonglong)CONCAT11(*pbVar17,pbVar17[1]);
    if (uVar15 - 2 < uStack_190) goto LAB_14f69b0a9;
    *plVar9 = (longlong)(local_198 + uStack_190);
    plVar9[1] = (uVar15 - 2) - uStack_190;
    uVar20 = 0;
    do {
      if (uStack_190 == 0) {
LAB_14f69b096:
        uVar18 = 0x32;
        local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4f0);
        uVar21 = 0x6e;
        goto LAB_14f69b0d1;
      }
      uVar15 = (ulonglong)*local_198;
      local_1d8 = local_198 + 1;
      if (uStack_190 - 1 < uVar15) goto LAB_14f69b096;
      uStack_190 = (uStack_190 - 1) - uVar15;
      local_198 = local_1d8 + uVar15;
      uVar20 = uVar20 + 1;
    } while (uVar20 <= uVar11);
    if (uVar15 == (longlong)iVar10) {
      local_1b8 = local_180;
      local_1c0 = 0;
      local_1c8 = local_1a8[0];
      local_1d0 = (ulonglong *)0x0;
      iVar10 = tls_psk_do_binder(param_1,lVar12,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                                 lVar16 - lVar8);
      if (iVar10 == 1) {
        *(uint *)(param_1 + 0x730) = uVar11;
        SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
        *(ulonglong *)(param_1 + 0x508) = local_1a8[0];
        return 1;
      }
      goto LAB_14f69b0e1;
    }
    uVar18 = 0x32;
    local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4f7);
    uVar21 = 0x6e;
  }
LAB_14f69b0d1:
  local_1d8 = (byte *)0x153489b80;
  ossl_statem_fatal(param_1,uVar18,0x1f9,uVar21);
LAB_14f69b0e1:
  SSL_SESSION_free(local_1a8[0]);
  return 0;
}

// tls_parse_ctos_psk_kex_modes @ 14f69b190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_psk_kex_modes(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined4 in_XMM0_Da;
  
  pbVar5 = (byte *)*param_2;
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    bVar1 = *pbVar5;
    uVar2 = (ulonglong)bVar1;
    pbVar4 = pbVar5 + 1;
    uVar3 = (ulonglong)(uint)bVar1;
    if (uVar2 <= lVar6 - 1U) {
      pbVar5 = pbVar4 + uVar2;
      lVar6 = (lVar6 - 1U) - uVar2;
      if (lVar6 == 0) {
        in_XMM0_Da = SUB84(pbVar5,0);
        *param_2 = pbVar5;
        param_2[1] = 0;
        if (bVar1 != 0) {
          while (uVar3 != 0) {
            bVar1 = *pbVar4;
            uVar3 = uVar3 - 1;
            pbVar4 = pbVar4 + 1;
            if (bVar1 == 1) {
              *(uint *)(param_1 + 0x708) = *(uint *)(param_1 + 0x708) | 2;
            }
            else if ((bVar1 == 0) && ((*(uint *)(param_1 + 0x5cc) & 0x400) != 0)) {
              *(uint *)(param_1 + 0x708) = *(uint *)(param_1 + 0x708) | 1;
            }
          }
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(in_XMM0_Da,0x32,0x23c,0x6e,"ssl\\statem\\extensions_srvr.c",0x253,pbVar5,lVar6,
                    0x14f69b19a);
  return 0;
}

// tls_parse_ctos_renegotiate @ 14f69b270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_renegotiate(longlong param_1,undefined8 *param_2)

{
  byte *_Buf1;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (param_2[1] != 0) {
    uVar4 = param_2[1] - 1;
    uVar3 = (ulonglong)*(byte *)*param_2;
    _Buf1 = (byte *)*param_2 + 1;
    *param_2 = _Buf1;
    param_2[1] = uVar4;
    if (uVar3 <= uVar4) {
      *param_2 = _Buf1 + uVar3;
      param_2[1] = uVar4 - uVar3;
      lVar1 = *(longlong *)(param_1 + 0xa8);
      if (uVar3 == *(size_t *)(lVar1 + 0x388)) {
        iVar2 = memcmp(_Buf1,(void *)(lVar1 + 0x348),*(size_t *)(lVar1 + 0x388));
        if (iVar2 == 0) {
          *(undefined4 *)(lVar1 + 0x3d8) = 1;
          return 1;
        }
        uVar5 = 0x41;
      }
      else {
        uVar5 = 0x10000003a;
      }
      ossl_statem_fatal(param_1,0x28,0x1d0,0x151,"ssl\\statem\\extensions_srvr.c",uVar5);
      return 0;
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1d0,0x150,"ssl\\statem\\extensions_srvr.c",0x100000033);
  return 0;
}

// tls_parse_ctos_server_name @ 14f69b380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_server_name(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  pcVar10 = (char *)*param_2;
  uVar11 = param_2[1];
  pcVar7 = pcVar10;
  if (1 < uVar11) {
    pcVar9 = pcVar10 + 2;
    uVar6 = (ulonglong)CONCAT11(*pcVar10,pcVar10[1]);
    if (uVar6 <= uVar11 - 2) {
      uVar11 = (uVar11 - 2) - uVar6;
      pcVar7 = pcVar9 + uVar6;
      if (uVar11 == 0) {
        *param_2 = pcVar9 + uVar6;
        param_2[1] = 0;
        pcVar7 = pcVar9;
        if (uVar6 != 0) {
          pcVar7 = pcVar10 + 3;
          if ((*pcVar9 == '\0') && (1 < uVar6 - 1)) {
            pcVar9 = pcVar10 + 5;
            uVar11 = (ulonglong)CONCAT11(*pcVar7,pcVar10[4]);
            if (uVar6 - 3 == uVar11) {
              if ((*(int *)(param_1 + 200) != 0) &&
                 ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
                   (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)))) {
                pcVar10 = *(char **)(*(longlong *)(param_1 + 0x508) + 0x208);
                uVar13 = 0;
                if (pcVar10 != (char *)0x0) {
                  cVar1 = *pcVar10;
                  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
                    pcVar10 = pcVar10 + 1;
                    cVar1 = *pcVar10;
                  }
                  uVar13 = 0;
                  if ((uVar11 == (uVar2 & 0x7fffffff)) &&
                     (iVar3 = CRYPTO_memcmp(pcVar9), iVar3 == 0)) {
                    uVar13 = 1;
                  }
                }
                *(undefined4 *)(param_1 + 0x740) = uVar13;
                return 1;
              }
              if (uVar11 < 0x100) {
                pvVar4 = memchr(pcVar9,0,uVar11);
                if (pvVar4 == (void *)0x0) {
                  CRYPTO_free(*(undefined8 *)(param_1 + 0x638),"ssl\\statem\\extensions_srvr.c",0x99
                             );
                  *(undefined8 *)(param_1 + 0x638) = 0;
                  CRYPTO_free(0,
                              "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                              ,0x1e2);
                  lVar5 = CRYPTO_strndup(pcVar9,uVar11,
                                         "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                         ,0x1e5);
                  *(longlong *)(param_1 + 0x638) = lVar5;
                  if (lVar5 != 0) {
                    *(undefined4 *)(param_1 + 0x740) = 1;
                    return 1;
                  }
                  uVar13 = 0x9d;
                  uVar8 = 0x50;
                  uVar12 = 0x44;
                }
                else {
                  uVar8 = 0x70;
                  uVar13 = 0x91;
                  uVar12 = 0x6e;
                }
              }
              else {
                uVar8 = 0x70;
                uVar13 = 0x8a;
                uVar12 = 0x6e;
              }
              ossl_statem_fatal(param_1,uVar8,0x23d,uVar12,"ssl\\statem\\extensions_srvr.c",uVar13,
                                pcVar7);
              return 0;
            }
          }
          ossl_statem_fatal(param_1,0x32,0x23d,0x6e,"ssl\\statem\\extensions_srvr.c",0x7e,pcVar7);
          return 0;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x23d,0x6e,"ssl\\statem\\extensions_srvr.c",0x6b,pcVar7,uVar11);
  return 0;
}

// tls_parse_ctos_session_ticket @ 14f69b670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_session_ticket(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(code **)(param_1 + 0x6c8) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x6c8))
                      (param_1,*param_2,*(undefined4 *)(param_2 + 1),
                       *(undefined8 *)(param_1 + 0x6d0));
    if (iVar1 == 0) {
      ossl_statem_fatal(param_1,0x50,0x23e,0x44,"ssl\\statem\\extensions_srvr.c",
                        CONCAT44(uVar2,0x11a));
      return 0;
    }
  }
  return 1;
}

// tls_parse_ctos_sig_algs @ 14f69b6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_sig_algs(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar3 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if (1 < uVar5) {
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    local_18 = puVar3 + 2;
    uStack_10 = (ulonglong)CONCAT11(uVar2,uVar1);
    if (uStack_10 <= uVar5 - 2) {
      uVar5 = (uVar5 - 2) - uStack_10;
      puVar3 = local_18 + uStack_10;
      if (uVar5 == 0) {
        *param_2 = local_18 + uStack_10;
        param_2[1] = 0;
        puVar3 = local_18;
        uVar5 = uStack_10;
        if (CONCAT11(uVar2,uVar1) != 0) {
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          iVar4 = tls1_save_sigalgs(param_1,&local_18,0);
          if (iVar4 != 0) {
            return 1;
          }
          uVar6 = 0x144;
          goto LAB_14f69b7a9;
        }
      }
    }
  }
  uStack_10 = uVar5;
  local_18 = puVar3;
  uVar6 = 0x13e;
LAB_14f69b7a9:
  ossl_statem_fatal(param_1,0x32,0x23f,0x6e,"ssl\\statem\\extensions_srvr.c",uVar6);
  return 0;
}

// tls_parse_ctos_sig_algs_cert @ 14f69b7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_sig_algs_cert(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar3 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if (1 < uVar5) {
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    local_18 = puVar3 + 2;
    uStack_10 = (ulonglong)CONCAT11(uVar2,uVar1);
    if (uStack_10 <= uVar5 - 2) {
      uVar5 = (uVar5 - 2) - uStack_10;
      puVar3 = local_18 + uStack_10;
      if (uVar5 == 0) {
        *param_2 = local_18 + uStack_10;
        param_2[1] = 0;
        puVar3 = local_18;
        uVar5 = uStack_10;
        if (CONCAT11(uVar2,uVar1) != 0) {
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          iVar4 = tls1_save_sigalgs(param_1,&local_18,1);
          if (iVar4 != 0) {
            return 1;
          }
          uVar6 = 0x12f;
          goto LAB_14f69b89c;
        }
      }
    }
  }
  uStack_10 = uVar5;
  local_18 = puVar3;
  uVar6 = 0x129;
LAB_14f69b89c:
  ossl_statem_fatal(param_1,0x32,0x267,0x6e,"ssl\\statem\\extensions_srvr.c",uVar6);
  return 0;
}

// tls_parse_ctos_srp @ 14f69b8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_srp(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte *_Buf;
  byte *pbVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  pbVar6 = (byte *)*param_2;
  lVar8 = param_2[1];
  if (lVar8 != 0) {
    bVar1 = *pbVar6;
    uVar2 = (ulonglong)bVar1;
    _Buf = pbVar6 + 1;
    if (uVar2 <= lVar8 - 1U) {
      pbVar6 = _Buf + uVar2;
      lVar8 = (lVar8 - 1U) - uVar2;
      if (lVar8 == 0) {
        *param_2 = pbVar6;
        param_2[1] = 0;
        pvVar3 = memchr(_Buf,0,(ulonglong)(uint)bVar1);
        if (pvVar3 == (void *)0x0) {
          CRYPTO_free(*(undefined8 *)(param_1 + 2000),
                      "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                      ,0x1e2);
          lVar4 = CRYPTO_strndup(_Buf,(uint)bVar1,
                                 "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                 ,0x1e5);
          *(longlong *)(param_1 + 2000) = lVar4;
          if (lVar4 != 0) {
            return 1;
          }
          uVar9 = 0xef;
          uVar5 = 0x50;
          uVar7 = 0x44;
          goto LAB_14f69b9c3;
        }
      }
    }
  }
  uVar5 = 0x32;
  uVar9 = 0xe5;
  uVar7 = 0x6e;
LAB_14f69b9c3:
  ossl_statem_fatal(param_1,uVar5,0x240,uVar7,"ssl\\statem\\extensions_srvr.c",uVar9,pbVar6,lVar8);
  return 0;
}

// tls_parse_ctos_status_request @ 14f69ba00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_ctos_status_request
          (longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 *local_res8;
  undefined4 uVar12;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 *local_38;
  ulonglong uStack_30;
  
  if ((*(int *)(param_1 + 200) == 0) && (param_4 == 0)) {
    if (param_2[1] == 0) {
      ossl_statem_fatal(param_1,0x32,0x241,0x6e,"ssl\\statem\\extensions_srvr.c",0x15b);
      return 0;
    }
    *(uint *)(param_1 + 0x640) = (uint)*(byte *)*param_2;
    *param_2 = *param_2 + 1;
    param_2[1] = param_2[1] + -1;
    if (*(int *)(param_1 + 0x640) == 1) {
      iVar4 = FUN_14f697840(param_2,&local_48);
      if (iVar4 == 0) {
        ossl_statem_fatal(param_1,0x32,0x241,0x6e,"ssl\\statem\\extensions_srvr.c",0x169);
        return 0;
      }
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x658),OCSP_RESPID_free);
      uVar10 = CONCAT44(uStack_40._4_4_,(undefined4)uStack_40);
      if (uVar10 == 0) {
        *(undefined8 *)(param_1 + 0x658) = 0;
      }
      else {
        lVar5 = OPENSSL_sk_new_null();
        *(longlong *)(param_1 + 0x658) = lVar5;
        if (lVar5 == 0) {
          ossl_statem_fatal(param_1,0x50,0x241,0x41,"ssl\\statem\\extensions_srvr.c",0x176);
          return 0;
        }
      }
      uVar2 = CONCAT44(uStack_40._4_4_,(undefined4)uStack_40);
      uStack_40 = uVar10;
      puVar6 = (undefined1 *)CONCAT44(local_48._4_4_,(undefined4)local_48);
      puVar7 = (undefined1 *)CONCAT44(local_48._4_4_,(undefined4)local_48);
      uVar3 = uVar2;
      do {
        uVar9 = uVar3;
        if (uVar10 == 0) {
          local_48 = puVar7;
          uStack_40 = uVar9;
          iVar4 = FUN_14f6975e0(param_2,&local_38);
          uVar10 = uStack_30;
          puVar7 = local_38;
          if (iVar4 == 0) {
            uVar12 = 0x1a7;
            puVar7 = local_48;
            uVar9 = uStack_40;
          }
          else {
            if (uStack_30 == 0) {
              return 1;
            }
            local_res8 = local_38;
            OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x660),X509_EXTENSION_free);
            lVar5 = d2i_X509_EXTENSIONS(0,&local_res8,uVar10 & 0xffffffff);
            *(longlong *)(param_1 + 0x660) = lVar5;
            if ((lVar5 != 0) && (local_res8 == puVar7 + uVar10)) {
              return 1;
            }
            uVar12 = 0x1b4;
            puVar7 = local_48;
            uVar9 = uStack_40;
          }
          goto LAB_14f69bcc7;
        }
        local_38 = puVar6;
        uStack_30 = uVar2;
        if (uStack_40 < 2) {
LAB_14f69bc40:
          uVar12 = 0x185;
LAB_14f69bcc7:
          uVar8 = 0x32;
          uVar11 = 0x6e;
          local_48 = puVar7;
          uStack_40 = uVar9;
          goto LAB_14f69bcd0;
        }
        puVar6 = puVar7 + 2;
        uVar1 = CONCAT11(*puVar7,puVar7[1]);
        uVar10 = (ulonglong)(uint)uVar1;
        if (uVar2 - 2 < uVar10) goto LAB_14f69bc40;
        uVar9 = (uVar2 - 2) - uVar10;
        puVar7 = puVar6 + uVar10;
        local_38 = puVar7;
        uStack_30 = uVar9;
        if (uVar1 == 0) goto LAB_14f69bc40;
        local_res8 = puVar6;
        local_48 = puVar7;
        uStack_40 = uVar9;
        lVar5 = d2i_OCSP_RESPID(0,&local_res8,(uint)uVar1);
        if (lVar5 == 0) {
          uVar12 = 399;
          puVar7 = local_48;
          uVar9 = uStack_40;
          goto LAB_14f69bcc7;
        }
        if (local_res8 != puVar6 + uVar10) {
          OCSP_RESPID_free(lVar5);
          uVar12 = 0x196;
          puVar7 = local_48;
          uVar9 = uStack_40;
          goto LAB_14f69bcc7;
        }
        iVar4 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x658),lVar5);
        puVar6 = puVar7;
        puVar7 = local_48;
        uVar2 = uVar9;
        uVar3 = uStack_40;
        uVar10 = uVar9;
      } while (iVar4 != 0);
      OCSP_RESPID_free(lVar5);
      uVar8 = 0x50;
      uVar12 = 0x19e;
      uVar11 = 0x44;
LAB_14f69bcd0:
      ossl_statem_fatal(param_1,uVar8,0x241,uVar11,"ssl\\statem\\extensions_srvr.c",uVar12);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x640) = 0xffffffff;
  }
  return 1;
}

// tls_parse_ctos_supported_groups @ 14f69bd60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_supported_groups(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar3 = (undefined1 *)*param_2;
  uVar7 = param_2[1];
  if (1 < uVar7) {
    bVar1 = puVar3[1];
    local_18 = puVar3 + 2;
    uVar2 = CONCAT11(*puVar3,bVar1);
    uStack_10 = (ulonglong)uVar2;
    if (uStack_10 <= uVar7 - 2) {
      uVar7 = (uVar7 - 2) - uStack_10;
      puVar3 = local_18 + uStack_10;
      if (uVar7 == 0) {
        *param_2 = local_18 + uStack_10;
        param_2[1] = 0;
        puVar3 = local_18;
        uVar7 = uStack_10;
        if ((uVar2 != 0) && ((bVar1 & 1) == 0)) {
          if ((*(int *)(param_1 + 200) != 0) &&
             ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
               (iVar4 = **(int **)(param_1 + 8), iVar4 < 0x304)) || (iVar4 == 0x10000)))) {
            return 1;
          }
          CRYPTO_free(*(undefined8 *)(param_1 + 0x6b8),"ssl\\statem\\extensions_srvr.c",0x3ca);
          *(undefined8 *)(param_1 + 0x6b8) = 0;
          *(undefined8 *)(param_1 + 0x6b0) = 0;
          iVar4 = tls1_save_u16(&local_18,param_1 + 0x6b8);
          if (iVar4 != 0) {
            return 1;
          }
          uVar8 = 0x3d2;
          uVar5 = 0x50;
          uVar6 = 0x44;
          goto LAB_14f69bea8;
        }
      }
    }
  }
  uStack_10 = uVar7;
  local_18 = puVar3;
  uVar5 = 0x32;
  uVar8 = 0x3c5;
  uVar6 = 0x6e;
LAB_14f69bea8:
  ossl_statem_fatal(param_1,uVar5,0x242,uVar6,"ssl\\statem\\extensions_srvr.c",uVar8);
  return 0;
}

// tls_parse_ctos_use_srtp @ 14f69bed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_use_srtp(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  
  lVar6 = SSL_get_srtp_profiles();
  if (lVar6 == 0) {
    return 1;
  }
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    puVar13 = puVar4 + 2;
    bVar1 = puVar4[1];
    uVar9 = param_2[1] - 2;
    uVar10 = (uint)CONCAT11(*puVar4,bVar1);
    *param_2 = (longlong)puVar13;
    param_2[1] = uVar9;
    if (((bVar1 & 1) == 0) && (uVar12 = (ulonglong)uVar10, uVar12 <= uVar9)) {
      param_2[1] = uVar9 - uVar12;
      *param_2 = (longlong)(puVar13 + uVar10);
      uVar7 = SSL_get_srtp_profiles(param_1);
      *(undefined8 *)(param_1 + 0x778) = 0;
      iVar5 = OPENSSL_sk_num(uVar7);
      do {
        if (uVar12 == 0) {
          if (param_2[1] == 0) {
            uVar14 = 0x22d;
LAB_14f69c059:
            uVar7 = 0x161;
          }
          else {
            uVar9 = (ulonglong)*(byte *)*param_2;
            pbVar8 = (byte *)*param_2 + 1;
            uVar12 = param_2[1] - 1;
            *param_2 = (longlong)pbVar8;
            param_2[1] = uVar12;
            if (uVar9 <= uVar12) {
              *param_2 = (longlong)(pbVar8 + uVar9);
              param_2[1] = uVar12 - uVar9;
              if (uVar12 - uVar9 == 0) {
                return 1;
              }
            }
            uVar14 = 0x234;
            uVar7 = 0x160;
          }
          ossl_statem_fatal(param_1,0x32,0x1d1,uVar7,"ssl\\statem\\extensions_srvr.c",uVar14);
          return 0;
        }
        if (uVar12 < 2) {
          uVar14 = 0x214;
          goto LAB_14f69c059;
        }
        uVar2 = *puVar13;
        uVar12 = uVar12 - 2;
        uVar3 = puVar13[1];
        iVar11 = 0;
        puVar13 = puVar13 + 2;
        if (0 < iVar5) {
          do {
            lVar6 = OPENSSL_sk_value(uVar7,iVar11);
            if (*(uint *)(lVar6 + 8) == (uint)CONCAT11(uVar2,uVar3)) {
              *(longlong *)(param_1 + 0x778) = lVar6;
              iVar5 = iVar11;
              break;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar5);
        }
      } while( true );
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1d1,0x161,"ssl\\statem\\extensions_srvr.c",0x208);
  return 0;
}

