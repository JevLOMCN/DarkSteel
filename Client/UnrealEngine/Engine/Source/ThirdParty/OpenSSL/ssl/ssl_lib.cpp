// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 263

// FUN_14f652ed0 @ 14f652ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f652ed0(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}

// FUN_14f652f10 @ 14f652f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f652f10(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}

// FUN_14f652f50 @ 14f652f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f652f50(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}

// FUN_14f652f90 @ 14f652f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f652f90(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}

// FUN_14f652fd0 @ 14f652fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f652fd0(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}

// FUN_14f653010 @ 14f653010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f653010(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}

// FUN_14f653050 @ 14f653050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f653050(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}

// ssl_undefined_function @ 14f653090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_undefined_function(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}

// OBJ_bsearch_ssl_cipher_id @ 14f653110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_bsearch_ssl_cipher_id(void)

{
  OBJ_bsearch_();
  return;
}

// FUN_14f653170 @ 14f653170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f653170(longlong *param_1,void *param_2,ulonglong param_3)

{
  if (param_3 <= (ulonglong)param_1[1]) {
    memcpy(param_2,(void *)*param_1,param_3);
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}

// FUN_14f653240 @ 14f653240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f653240(undefined8 *param_1,longlong *param_2,longlong *param_3)

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

// FUN_14f653300 @ 14f653300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f653300(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  if ((ulonglong)param_1[1] < param_3) {
    return 0;
  }
  memcpy(param_2,(void *)*param_1,param_3);
  return 1;
}

// SSL_CTX_callback_ctrl @ 14f653350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_callback_ctrl(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00014f653369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xd8))();
    return uVar1;
  }
  param_1[0x29] = param_3;
  return 1;
}

// SSL_CTX_check_private_key @ 14f653390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_check_private_key(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)**(longlong **)(param_1 + 0x138);
    if (lVar1 != 0) {
      if (((longlong *)**(longlong **)(param_1 + 0x138))[1] != 0) {
        uVar2 = X509_check_private_key(lVar1);
        return uVar2;
      }
      uVar3 = 0x64d;
      uVar2 = 0xbe;
      goto LAB_14f6533e7;
    }
  }
  uVar3 = 0x649;
  uVar2 = 0xb1;
LAB_14f6533e7:
  ERR_put_error(0x14,0xa8,uVar2,"ssl\\ssl_lib.c",uVar3);
  return 0;
}

// SSL_CTX_clear_options @ 14f653410

uint SSL_CTX_clear_options(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x120) = uVar1;
  return uVar1;
}

// SSL_CTX_ct_is_enabled @ 14f653430

bool SSL_CTX_ct_is_enabled(longlong param_1)

{
  return *(longlong *)(param_1 + 0x1b0) != 0;
}

// SSL_CTX_ctrl @ 14f653450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_CTX_ctrl(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(int)param_3;
  iVar1 = (int)param_2;
  if (param_1 == (longlong *)0x0) {
    if (iVar1 == 0x5c) {
      uVar3 = tls1_set_groups_list(0,0,param_4);
      return uVar3;
    }
    if ((iVar1 - 0x62U & 0xfffffffb) == 0) {
      uVar3 = tls1_set_sigalgs_list(0,param_4,0);
      return uVar3;
    }
  }
  else {
    switch(iVar1) {
    case 0x10:
      param_1[0x2a] = param_4;
      return 1;
    default:
                    /* WARNING: Could not recover jumptable at 0x00014f65374b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3);
      return uVar3;
    case 0x14:
      uVar3 = OPENSSL_LH_num_items(param_1[5]);
      return uVar3;
    case 0x15:
      return (ulonglong)*(uint *)(param_1 + 0xd);
    case 0x16:
      return (ulonglong)*(uint *)(param_1 + 0xe);
    case 0x17:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x6c);
    case 0x18:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x74);
    case 0x19:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x7c);
    case 0x1a:
      return (ulonglong)*(uint *)(param_1 + 0xf);
    case 0x1b:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x8c);
    case 0x1c:
      return (ulonglong)*(uint *)(param_1 + 0x12);
    case 0x1d:
      return (ulonglong)*(uint *)(param_1 + 0x10);
    case 0x1e:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x84);
    case 0x1f:
      return (ulonglong)*(uint *)(param_1 + 0x11);
    case 0x21:
      param_3 = *(uint *)((longlong)param_1 + 0x124) | param_3;
      *(uint *)((longlong)param_1 + 0x124) = param_3;
      return (ulonglong)param_3;
    case 0x28:
      return (ulonglong)*(uint *)(param_1 + 0x28);
    case 0x29:
      uVar2 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = param_3;
      return (ulonglong)uVar2;
    case 0x2a:
      if (-1 < (int)param_3) {
        uVar2 = *(uint *)(param_1 + 6);
        param_1[6] = uVar3;
        return (ulonglong)uVar2;
      }
      break;
    case 0x2b:
      return (ulonglong)*(uint *)(param_1 + 6);
    case 0x2c:
      uVar2 = *(uint *)(param_1 + 9);
      *(uint *)(param_1 + 9) = param_3;
      return (ulonglong)uVar2;
    case 0x2d:
      return (ulonglong)*(uint *)(param_1 + 9);
    case 0x32:
      return (ulonglong)*(uint *)(param_1 + 0x26);
    case 0x33:
      if (-1 < (int)param_3) {
        uVar2 = *(uint *)(param_1 + 0x26);
        param_1[0x26] = uVar3;
        return (ulonglong)uVar2;
      }
      break;
    case 0x34:
      if (param_3 - 0x200 < 0x3e01) {
        param_1[0x39] = uVar3;
        if (uVar3 < (ulonglong)param_1[0x38]) {
          param_1[0x38] = uVar3;
        }
        return 1;
      }
      break;
    case 0x4e:
      uVar2 = ~param_3 & *(uint *)((longlong)param_1 + 0x124);
      *(uint *)((longlong)param_1 + 0x124) = uVar2;
      return (ulonglong)uVar2;
    case 99:
      param_3 = *(uint *)(param_1[0x27] + 0x1c) | param_3;
      *(uint *)(param_1[0x27] + 0x1c) = param_3;
      return (ulonglong)param_3;
    case 100:
      uVar2 = ~param_3 & *(uint *)(param_1[0x27] + 0x1c);
      *(uint *)(param_1[0x27] + 0x1c) = uVar2;
      return (ulonglong)uVar2;
    case 0x7b:
      iVar1 = FUN_14f65b4c0(param_3,*(undefined4 *)((longlong)param_1 + 300),
                            &switchD_1501dbc7b::caseD_1,param_4,0x14f65345a);
      if ((iVar1 != 0) &&
         (iVar1 = ssl_set_version_bound(*(undefined4 *)*param_1,uVar3 & 0xffffffff,param_1 + 0x25),
         iVar1 != 0)) {
        return 1;
      }
      break;
    case 0x7c:
      iVar1 = FUN_14f65b4c0((int)param_1[0x25],param_3,&switchD_1501dbc7b::caseD_1,param_4,
                            0x14f65345a);
      if ((iVar1 != 0) && (iVar1 = ssl_set_version_bound(*(undefined4 *)*param_1), iVar1 != 0)) {
        return 1;
      }
      break;
    case 0x7d:
      if ((uVar3 <= (ulonglong)param_1[0x39]) && (param_3 != 0)) {
        param_1[0x38] = uVar3;
        return 1;
      }
      break;
    case 0x7e:
      if (param_3 - 1 < 0x20) {
        param_1[0x3a] = uVar3;
        return 1;
      }
      break;
    case 0x82:
      return (ulonglong)*(uint *)(param_1 + 0x25);
    case 0x83:
      return (ulonglong)*(uint *)((longlong)param_1 + 300);
    }
  }
  return 0;
}

// SSL_CTX_dane_enable @ 14f653880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_dane_enable(longlong param_1)

{
  FUN_14f65a250(param_1 + 0x358);
  return;
}

// SSL_CTX_dane_mtype_set @ 14f6538b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_dane_mtype_set(longlong param_1)

{
  FUN_14f65a470(param_1 + 0x358);
  return;
}

// SSL_CTX_enable_ct @ 14f653900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_enable_ct(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f65390c;
  if (param_2 == 0) {
    iVar1 = SSL_CTX_has_client_custom_ext(param_1,0x12);
    if (iVar1 != 0) {
      ERR_put_error(0x14,0x18c,0xce,"ssl\\ssl_lib.c",0x135c,uVar2);
      return 0;
    }
    *(undefined1 **)(param_1 + 0x1b0) = &LAB_14f65a190;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    return 1;
  }
  if (param_2 != 1) {
    ERR_put_error(0x14,0x18e,0xd4,"ssl\\ssl_lib.c",0x13d9,0x14f65390c);
    return 0;
  }
  uVar2 = SSL_CTX_set_ct_validation_callback(param_1,FUN_14f65a1a0,0);
  return uVar2;
}

// SSL_CTX_free @ 14f6539c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x94);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      X509_VERIFY_PARAM_free(*(undefined8 *)(param_1 + 0x198));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x358),"ssl\\ssl_lib.c",0xae);
      *(undefined8 *)(param_1 + 0x358) = 0;
      CRYPTO_free(*(undefined8 *)(param_1 + 0x360),"ssl\\ssl_lib.c",0xb1);
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined1 *)(param_1 + 0x368) = 0;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        SSL_CTX_flush_sessions(param_1,0);
      }
      CRYPTO_free_ex_data(1,param_1,param_1 + 0xe0);
      OPENSSL_LH_free(*(undefined8 *)(param_1 + 0x28));
      X509_STORE_free(*(undefined8 *)(param_1 + 0x20));
      CTLOG_STORE_free(*(undefined8 *)(param_1 + 0x1a8));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 8));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x10));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x18));
      ssl_cert_free(*(undefined8 *)(param_1 + 0x138));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x110),X509_NAME_free);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x118),X509_NAME_free);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xf8),X509_free);
      *(undefined8 *)(param_1 + 0x100) = 0;
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x370));
      SSL_CTX_SRP_CTX_free(param_1);
      ENGINE_finish(*(undefined8 *)(param_1 + 0x1e0));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x248),"ssl\\ssl_lib.c",0xcd5);
      CRYPTO_free(*(undefined8 *)(param_1 + 600),"ssl\\ssl_lib.c",0xcd6);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x270),"ssl\\ssl_lib.c",0xcd8);
      CRYPTO_secure_free(*(undefined8 *)(param_1 + 0x218),"ssl\\ssl_lib.c",0xcd9);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x380));
      CRYPTO_free(param_1,"ssl\\ssl_lib.c",0xcdd);
    }
  }
  return;
}

// SSL_CTX_get0_certificate @ 14f653bb0

undefined8 SSL_CTX_get0_certificate(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x138) != (undefined8 *)0x0) {
    return *(undefined8 *)**(undefined8 **)(param_1 + 0x138);
  }
  return 0;
}

// SSL_CTX_get_cert_store @ 14f653c30

undefined8 SSL_CTX_get_cert_store(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

// SSL_CTX_get_ex_data @ 14f653c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0xe0);
  return;
}

// SSL_CTX_get_security_level @ 14f653d40

undefined4 SSL_CTX_get_security_level(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x1f0);
}

// SSL_CTX_get_verify_depth @ 14f653d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_get_verify_depth(longlong param_1)

{
  X509_VERIFY_PARAM_get_depth(*(undefined8 *)(param_1 + 0x198));
  return;
}

// SSL_CTX_get_verify_mode @ 14f653db0

undefined4 SSL_CTX_get_verify_mode(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x158);
}

// SSL_CTX_load_verify_locations @ 14f653dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_load_verify_locations(longlong param_1)

{
  X509_STORE_load_locations(*(undefined8 *)(param_1 + 0x20));
  return;
}

// SSL_CTX_new @ 14f653de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * SSL_CTX_new(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x14f653df5;
  plVar3 = (longlong *)0x0;
  if (param_1 == 0) {
    ERR_put_error(0x14,0xa9,0xc4,"ssl\\ssl_lib.c",0xbdc,0x14f653df5);
    return (longlong *)0x0;
  }
  iVar1 = OPENSSL_init_ssl(0x200000,0);
  if (iVar1 == 0) {
    return (longlong *)0x0;
  }
  iVar1 = SSL_get_ex_data_X509_STORE_CTX_idx();
  if (iVar1 < 0) {
    uVar5 = CONCAT44(uVar6,0xbe4);
    ERR_put_error(0x14,0xa9,0x10d,"ssl\\ssl_lib.c",uVar5,uVar7);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  else {
    plVar3 = (longlong *)CRYPTO_zalloc(1000,"ssl\\ssl_lib.c",0xbe7);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = param_1;
      plVar3[0x25] = 0;
      *(undefined4 *)((longlong)plVar3 + 0x124) = 4;
      *(undefined4 *)(plVar3 + 9) = 2;
      plVar3[6] = 0x5000;
      uVar2 = (**(code **)(param_1 + 0xb8))();
      *(undefined4 *)((longlong)plVar3 + 0x4c) = uVar2;
      *(undefined4 *)((longlong)plVar3 + 0x94) = 1;
      lVar4 = CRYPTO_THREAD_lock_new();
      plVar3[0x70] = lVar4;
      if (lVar4 == 0) {
        ERR_put_error(0x14,0xa9,0x41,"ssl\\ssl_lib.c",CONCAT44(uVar6,0xbf6));
        CRYPTO_free(plVar3,"ssl\\ssl_lib.c",0xbf7);
        return (longlong *)0x0;
      }
      plVar3[0x26] = 0x19000;
      *(undefined4 *)(plVar3 + 0x2b) = 0;
      lVar4 = ssl_cert_new();
      plVar3[0x27] = lVar4;
      if (lVar4 != 0) {
        lVar4 = OPENSSL_LH_new(FUN_14f65c060,FUN_14f65c010);
        plVar3[5] = lVar4;
        if (lVar4 != 0) {
          lVar4 = X509_STORE_new();
          plVar3[4] = lVar4;
          if (lVar4 != 0) {
            lVar4 = CTLOG_STORE_new();
            plVar3[0x35] = lVar4;
            if ((lVar4 != 0) &&
               (iVar1 = SSL_CTX_set_ciphersuites
                                  (plVar3,
                                   "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256"
                                  ), iVar1 != 0)) {
              uVar6 = 1;
              lVar4 = ssl_create_cipher_list
                                (*plVar3,plVar3[3],plVar3 + 1,plVar3 + 2,
                                 "ALL:!COMPLEMENTOFDEFAULT:!eNULL",plVar3[0x27]);
              if ((lVar4 == 0) || (iVar1 = OPENSSL_sk_num(plVar3[1]), iVar1 < 1)) {
                uVar5 = CONCAT44(uVar6,0xc13);
                uVar7 = 0xa1;
                goto LAB_14f653e82;
              }
              lVar4 = X509_VERIFY_PARAM_new();
              plVar3[0x33] = lVar4;
              if (lVar4 != 0) {
                lVar4 = EVP_get_digestbyname("ssl3-md5");
                plVar3[0x1d] = lVar4;
                if (lVar4 == 0) {
                  uVar5 = CONCAT44(uVar6,0xc1c);
                  uVar7 = 0xf2;
                  goto LAB_14f653e82;
                }
                lVar4 = EVP_get_digestbyname("ssl3-sha1");
                plVar3[0x1e] = lVar4;
                if (lVar4 == 0) {
                  uVar5 = CONCAT44(uVar6,0xc20);
                  uVar7 = 0xf3;
                  goto LAB_14f653e82;
                }
                lVar4 = OPENSSL_sk_new_null();
                plVar3[0x22] = lVar4;
                if (lVar4 != 0) {
                  lVar4 = OPENSSL_sk_new_null();
                  plVar3[0x23] = lVar4;
                  if ((lVar4 != 0) &&
                     (iVar1 = CRYPTO_new_ex_data(1,plVar3,plVar3 + 0x1c), iVar1 != 0)) {
                    lVar4 = CRYPTO_secure_zalloc(0x40,"ssl\\ssl_lib.c",0xc2d);
                    plVar3[0x43] = lVar4;
                    if (lVar4 != 0) {
                      if ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 8) == 0) {
                        lVar4 = SSL_COMP_get_compression_methods();
                        plVar3[0x20] = lVar4;
                      }
                      plVar3[0x39] = 0x4000;
                      plVar3[0x38] = 0x4000;
                      iVar1 = RAND_bytes(plVar3 + 0x41,0x10);
                      if (((iVar1 < 1) || (iVar1 = RAND_priv_bytes(plVar3[0x43],0x20), iVar1 < 1))
                         || (iVar1 = RAND_priv_bytes(plVar3[0x43] + 0x20,0x20), iVar1 < 1)) {
                        *(uint *)(plVar3 + 0x24) = *(uint *)(plVar3 + 0x24) | 0x4000;
                      }
                      iVar1 = RAND_priv_bytes(plVar3 + 0x54,0x20);
                      if ((0 < iVar1) && (iVar1 = SSL_CTX_SRP_CTX_init(plVar3), iVar1 != 0)) {
                        *(uint *)(plVar3 + 0x24) = *(uint *)(plVar3 + 0x24) | 0x120004;
                        *(undefined4 *)(plVar3 + 0x47) = 0xffffffff;
                        *(undefined4 *)(plVar3 + 0x72) = 0;
                        *(undefined4 *)((longlong)plVar3 + 0x394) = 0x4000;
                        plVar3[0x79] = 2;
                        ssl_ctx_system_config(plVar3);
                        return plVar3;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = CONCAT44(uVar6,0xc8e);
  uVar7 = 0x41;
LAB_14f653e82:
  ERR_put_error(0x14,0xa9,uVar7,"ssl\\ssl_lib.c",uVar5);
  SSL_CTX_free(plVar3);
  return (longlong *)0x0;
}

// SSL_CTX_set0_ctlog_store @ 14f654210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set0_ctlog_store(longlong param_1,undefined8 param_2)

{
  CTLOG_STORE_free(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1a8) = param_2;
  return;
}

// SSL_CTX_set1_cert_store @ 14f654270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set1_cert_store(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    X509_STORE_up_ref(param_2);
  }
  X509_STORE_free(*(undefined8 *)(param_1 + 0x20));
  *(longlong *)(param_1 + 0x20) = param_2;
  return;
}

// SSL_CTX_set1_param @ 14f6542c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set1_param(longlong param_1)

{
  X509_VERIFY_PARAM_set1(*(undefined8 *)(param_1 + 0x198));
  return;
}

// SSL_CTX_set_alpn_protos @ 14f654310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_set_alpn_protos(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar4;
  ulonglong uVar3;
  
  uVar4 = 0x14f65431c;
  if ((param_3 == 0) || (param_2 == 0)) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x270),"ssl\\ssl_lib.c",0xb3e);
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    return 0;
  }
  if (1 < param_3) {
    uVar3 = 0;
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        if (*(byte *)(uVar3 + param_2) == 0) {
          return 1;
        }
        uVar2 = (int)uVar3 + 1 + (uint)*(byte *)(uVar3 + param_2);
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < param_3);
    }
    if (uVar2 == param_3) {
      lVar1 = CRYPTO_memdup(param_2,(ulonglong)param_3,"ssl\\ssl_lib.c",0xb47);
      if (lVar1 != 0) {
        CRYPTO_free(*(undefined8 *)(param_1 + 0x270),"ssl\\ssl_lib.c",0xb4c);
        *(longlong *)(param_1 + 0x270) = lVar1;
        *(ulonglong *)(param_1 + 0x278) = (ulonglong)param_3;
        return 0;
      }
      ERR_put_error(0x14,0x157,0x41,"ssl\\ssl_lib.c",0xb49,uVar4);
      return 1;
    }
  }
  return 1;
}

// SSL_CTX_set_alpn_select_cb @ 14f654460

void SSL_CTX_set_alpn_select_cb(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x260) = param_2;
  *(undefined8 *)(param_1 + 0x268) = param_3;
  return;
}

// SSL_CTX_set_block_padding @ 14f654480

undefined4 SSL_CTX_set_block_padding(longlong param_1,ulonglong param_2)

{
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    return 1;
  }
  if (param_2 < 0x4001) {
    *(ulonglong *)(param_1 + 0x3a8) = param_2;
    return 1;
  }
  return 0;
}

// SSL_CTX_set_cert_cb @ 14f6544c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_cert_cb(longlong param_1)

{
  ssl_cert_set_cert_cb(*(undefined8 *)(param_1 + 0x138));
  return;
}

// SSL_CTX_set_cert_store @ 14f6544f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_cert_store(longlong param_1,undefined8 param_2)

{
  X509_STORE_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}

// SSL_CTX_set_cipher_list @ 14f654550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_cipher_list(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = ssl_create_cipher_list
                    (*param_1,param_1[3],param_1 + 1,param_1 + 2,param_2,param_1[0x27],0x14f65455a);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (lVar2 != 0) {
    iVar1 = FUN_14f659db0(lVar2);
    if (iVar1 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x10d,0xb9,"ssl\\ssl_lib.c",CONCAT44(uVar3,0xa1c));
  }
  return 0;
}

// SSL_CTX_set_ct_validation_callback @ 14f6545f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_ct_validation_callback(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f654605;
  if (param_2 != 0) {
    iVar1 = SSL_CTX_has_client_custom_ext(param_1,0x12);
    if (iVar1 != 0) {
      ERR_put_error(0x14,0x18c,0xce,"ssl\\ssl_lib.c",0x135c,uVar2);
      return 0;
    }
  }
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  *(longlong *)(param_1 + 0x1b0) = param_2;
  return 1;
}

// SSL_CTX_set_ctlog_list_file @ 14f654690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_ctlog_list_file(longlong param_1)

{
  CTLOG_STORE_load_file(*(undefined8 *)(param_1 + 0x1a8));
  return;
}

// SSL_CTX_set_default_ctlog_list_file @ 14f6546c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_default_ctlog_list_file(longlong param_1)

{
  CTLOG_STORE_load_default_file(*(undefined8 *)(param_1 + 0x1a8));
  return;
}

// SSL_CTX_set_default_passwd_cb @ 14f6546f0

void SSL_CTX_set_default_passwd_cb(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}

// SSL_CTX_set_default_passwd_cb_userdata @ 14f654700

void SSL_CTX_set_default_passwd_cb_userdata(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  return;
}

// SSL_CTX_set_default_verify_dir @ 14f654710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_default_verify_dir(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f65471c;
  uVar1 = X509_LOOKUP_hash_dir();
  lVar2 = X509_STORE_add_lookup(*(undefined8 *)(param_1 + 0x20),uVar1);
  if (lVar2 == 0) {
    return 0;
  }
  X509_LOOKUP_ctrl(lVar2,2,0,3,0,uVar3);
  ERR_clear_error();
  return 1;
}

// SSL_CTX_set_default_verify_file @ 14f654780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_default_verify_file(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f65478c;
  uVar1 = X509_LOOKUP_file();
  lVar2 = X509_STORE_add_lookup(*(undefined8 *)(param_1 + 0x20),uVar1);
  if (lVar2 == 0) {
    return 0;
  }
  X509_LOOKUP_ctrl(lVar2,1,0,3,0,uVar3);
  ERR_clear_error();
  return 1;
}

// SSL_CTX_set_default_verify_paths @ 14f6547f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_default_verify_paths(longlong param_1)

{
  X509_STORE_set_default_paths(*(undefined8 *)(param_1 + 0x20));
  return;
}

// SSL_CTX_set_ex_data @ 14f654810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0xe0);
  return;
}

// SSL_CTX_set_generate_session_id @ 14f654840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_generate_session_id(longlong param_1,undefined8 param_2)

{
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x380));
  *(undefined8 *)(param_1 + 400) = param_2;
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x380));
  return 1;
}

// SSL_CTX_set_keylog_callback @ 14f654890

void SSL_CTX_set_keylog_callback(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x388) = param_2;
  return;
}

// SSL_CTX_set_msg_callback @ 14f6548c0

void SSL_CTX_set_msg_callback(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x148) = param_2;
  return;
}

// SSL_CTX_set_not_resumable_session_callback @ 14f654910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_not_resumable_session_callback(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f65492c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1,0x4f,param_2);
  return;
}

// SSL_CTX_set_num_tickets @ 14f654940

undefined8 SSL_CTX_set_num_tickets(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x3c8) = param_2;
  return 1;
}

// SSL_CTX_set_options @ 14f654960

uint SSL_CTX_set_options(longlong param_1,uint param_2)

{
  param_2 = param_2 | *(uint *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x120) = param_2;
  return param_2;
}

// SSL_CTX_set_post_handshake_auth @ 14f654980

void SSL_CTX_set_post_handshake_auth(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3e0) = param_2;
  return;
}

// SSL_CTX_set_purpose @ 14f6549d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_purpose(longlong param_1)

{
  X509_VERIFY_PARAM_set_purpose(*(undefined8 *)(param_1 + 0x198));
  return;
}

// SSL_CTX_set_session_id_context @ 14f654a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_session_id_context(longlong param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    ERR_put_error(0x14,0xdb,0x111,"ssl\\ssl_lib.c",0x373);
    return 0;
  }
  *(ulonglong *)(param_1 + 0x160) = (ulonglong)param_3;
  memcpy((void *)(param_1 + 0x168),param_2,(ulonglong)param_3);
  return 1;
}

// SSL_CTX_set_ssl_version @ 14f654b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_ssl_version(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x14f654b2c;
  *param_1 = param_2;
  iVar1 = SSL_CTX_set_ciphersuites
                    (param_1,
                     "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256");
  if (iVar1 == 0) {
    uVar3 = CONCAT44(uVar4,0x297);
  }
  else {
    uVar5 = param_1[0x27];
    uVar4 = 1;
    lVar2 = ssl_create_cipher_list
                      (*param_1,param_1[3],param_1 + 1,param_1 + 2,"ALL:!COMPLEMENTOFDEFAULT:!eNULL"
                       ,uVar5);
    if (lVar2 != 0) {
      iVar1 = OPENSSL_sk_num(lVar2);
      if (0 < iVar1) {
        return 1;
      }
    }
    uVar3 = CONCAT44(uVar4,0x2a0);
  }
  ERR_put_error(0x14,0xaa,0xe6,"ssl\\ssl_lib.c",uVar3,uVar5);
  return 0;
}

// SSL_CTX_set_tmp_dh_callback @ 14f654bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_tmp_dh_callback(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f654bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1,6,param_2);
  return;
}

// SSL_CTX_set_trust @ 14f654c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_trust(longlong param_1)

{
  X509_VERIFY_PARAM_set_trust(*(undefined8 *)(param_1 + 0x198));
  return;
}

// SSL_CTX_set_verify @ 14f654c30

void SSL_CTX_set_verify(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x158) = param_2;
  *(undefined8 *)(param_1 + 0x188) = param_3;
  return;
}

// SSL_CTX_set_verify_depth @ 14f654c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_verify_depth(longlong param_1)

{
  X509_VERIFY_PARAM_set_depth(*(undefined8 *)(param_1 + 0x198));
  return;
}

// SSL_CTX_use_psk_identity_hint @ 14f654ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_use_psk_identity_hint(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar4 = param_2;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    if (0x80 < (uVar2 & 0x7fffffff)) {
      ERR_put_error(0x14,0x110,0x92,"ssl\\ssl_lib.c",0x10f1,0x14f654cb0);
      return 0;
    }
  }
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x200),"ssl\\ssl_lib.c",0x10f4);
  if (param_2 == (char *)0x0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x200) = 0;
  }
  else {
    uVar3 = CRYPTO_strdup(param_2,"ssl\\ssl_lib.c",0x10f6);
    *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x200) = uVar3;
    if (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x200) == 0) {
      return 0;
    }
  }
  return 1;
}

// SSL_SESSION_get_master_key @ 14f654db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

size_t SSL_SESSION_get_master_key(longlong param_1,void *param_2,ulonglong param_3)

{
  if (param_3 == 0) {
    return *(size_t *)(param_1 + 8);
  }
  if (*(ulonglong *)(param_1 + 8) < param_3) {
    param_3 = *(size_t *)(param_1 + 8);
  }
  memcpy(param_2,(void *)(param_1 + 0x50),param_3);
  return param_3;
}

// SSL_SESSION_set1_master_key @ 14f654e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SESSION_set1_master_key(longlong param_1,void *param_2,size_t param_3)

{
  if (0x100 < param_3) {
    return 0;
  }
  memcpy((void *)(param_1 + 0x50),param_2,param_3);
  *(size_t *)(param_1 + 8) = param_3;
  return 1;
}

// SSL_accept @ 14f654e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_accept(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    SSL_set_accept_state();
  }
  SSL_do_handshake(param_1);
  return;
}

// SSL_add1_host @ 14f654ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_add1_host(longlong param_1,undefined8 param_2)

{
  X509_VERIFY_PARAM_add1_host(*(undefined8 *)(param_1 + 0xd0),param_2,0);
  return;
}

// SSL_alloc_buffers @ 14f654ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_alloc_buffers(void)

{
  ssl3_setup_buffers();
  return;
}

// SSL_bytes_to_cipher_list @ 14f654ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SSL_bytes_to_cipher_list
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_18;
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f654efa;
  if (param_3 < 0x8000000000000000) {
    local_18 = param_2;
    local_10 = param_3;
    uVar1 = bytes_to_cipher_list(param_1,&local_18,param_5,param_6,param_4,0);
    return uVar1;
  }
  return 0;
}

// SSL_callback_ctrl @ 14f654f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_callback_ctrl(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00014f654f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0xd0))();
    return uVar1;
  }
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return 1;
}

// SSL_certs_clear @ 14f654f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_certs_clear(longlong param_1)

{
  ssl_cert_clear_certs(*(undefined8 *)(param_1 + 0x488));
  return;
}

// SSL_check_private_key @ 14f654fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_check_private_key(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    ERR_put_error(0x14,0xa3,0x43,"ssl\\ssl_lib.c",0x658);
    return 0;
  }
  lVar1 = *(longlong *)**(longlong **)(param_1 + 0x488);
  if (lVar1 == 0) {
    ERR_put_error(0x14,0xa3,0xb1,"ssl\\ssl_lib.c",0x65c);
    return 0;
  }
  if (((longlong *)**(longlong **)(param_1 + 0x488))[1] == 0) {
    ERR_put_error(0x14,0xa3,0xbe,"ssl\\ssl_lib.c",0x660);
    return 0;
  }
  uVar2 = X509_check_private_key(lVar1);
  return uVar2;
}

// SSL_clear @ 14f655080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_clear(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f65508c;
  if (*(longlong *)(param_1 + 2) == 0) {
    ERR_put_error(0x14,0xa4,0xbc,"ssl\\ssl_lib.c",0x244,0x14f65508c);
    return 0;
  }
  iVar3 = ssl_clear_bad_session();
  if (iVar3 != 0) {
    SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
    *(undefined8 *)(param_1 + 0x142) = 0;
  }
  SSL_SESSION_free(*(undefined8 *)(param_1 + 0x144));
  *(undefined8 *)(param_1 + 0x144) = 0;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x146),"ssl\\ssl_lib.c",0x24e);
  *(undefined8 *)(param_1 + 0x146) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  param_1[0x136] = 0;
  *(undefined8 *)(param_1 + 0x5d2) = 0;
  param_1[0x15c] = 0;
  param_1[0x32] = 0;
  param_1[0x11] = 0;
  if (param_1[0x1e0] == 0) {
    ossl_statem_clear(param_1);
    uVar1 = **(undefined4 **)(param_1 + 2);
    *param_1 = uVar1;
    param_1[0x17b] = uVar1;
    param_1[10] = 1;
    BUF_MEM_free(*(undefined8 *)(param_1 + 0x22));
    *(undefined8 *)(param_1 + 0x22) = 0;
    ssl_clear_cipher_ctx(param_1);
    EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x114));
    *(undefined8 *)(param_1 + 0x114) = 0;
    EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
    param_1[0x17a] = 0;
    param_1[0x1e1] = 0xffffffff;
    EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x1ea));
    *(undefined8 *)(param_1 + 0x1ea) = 0;
    *(undefined8 *)(param_1 + 0x41) = 0xffffffffffffffff;
    X509_free(*(undefined8 *)(param_1 + 0x3e));
    *(undefined8 *)(param_1 + 0x3e) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    X509_VERIFY_PARAM_move_peername(*(undefined8 *)(param_1 + 0x34),0);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x5da),"ssl\\ssl_lib.c",0x278);
    lVar2 = *(longlong *)(param_1 + 2);
    *(undefined8 *)(param_1 + 0x5da) = 0;
    *(undefined8 *)(param_1 + 0x5dc) = 0;
    if (lVar2 == **(longlong **)(param_1 + 0x166)) {
      iVar3 = (**(code **)(lVar2 + 0x18))(param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(lVar2 + 0x20))();
      lVar2 = **(longlong **)(param_1 + 0x166);
      *(longlong *)(param_1 + 2) = lVar2;
      uVar4 = (**(code **)(lVar2 + 0x10))(param_1);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    RECORD_LAYER_clear(param_1 + 0x20c);
    return 1;
  }
  ERR_put_error(0x14,0xa4,0x44,"ssl\\ssl_lib.c",0x259,uVar4);
  return 0;
}

// SSL_client_hello_get1_extensions_present @ 14f655430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SSL_client_hello_get1_extensions_present(longlong param_1,longlong *param_2,ulonglong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f655450;
  lVar4 = *(longlong *)(param_1 + 0x738);
  uVar6 = 0;
  if (((lVar4 == 0) || (param_2 == (longlong *)0x0)) || (param_3 == (ulonglong *)0x0)) {
LAB_14f655504:
    uVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar4 + 0x280);
    if (lVar8 != 0) {
      piVar5 = (int *)(*(longlong *)(lVar4 + 0x288) + 0x10);
      uVar7 = uVar6;
      do {
        iVar1 = *piVar5;
        piVar5 = piVar5 + 10;
        uVar3 = uVar7 + 1;
        if (iVar1 == 0) {
          uVar3 = uVar7;
        }
        lVar8 = lVar8 + -1;
        uVar7 = uVar3;
      } while (lVar8 != 0);
      if (uVar3 != 0) {
        lVar4 = CRYPTO_malloc(uVar3 * 4,"ssl\\ssl_lib.c",0x1451);
        if (lVar4 != 0) {
          lVar8 = *(longlong *)(param_1 + 0x738);
          uVar7 = uVar6;
          if (*(longlong *)(lVar8 + 0x280) != 0) {
            do {
              lVar8 = *(longlong *)(lVar8 + 0x288);
              if (*(int *)(uVar6 + 0x10 + lVar8) != 0) {
                uVar2 = *(ulonglong *)(uVar6 + 0x20 + lVar8);
                if (uVar3 <= uVar2) {
                  CRYPTO_free(lVar4,"ssl\\ssl_lib.c",0x1462);
                  goto LAB_14f655504;
                }
                *(undefined4 *)(lVar4 + uVar2 * 4) = *(undefined4 *)(uVar6 + 0x18 + lVar8);
              }
              lVar8 = *(longlong *)(param_1 + 0x738);
              uVar7 = uVar7 + 1;
              uVar6 = uVar6 + 0x28;
            } while (uVar7 < *(ulonglong *)(lVar8 + 0x280));
          }
          *param_2 = lVar4;
          *param_3 = uVar3;
          return 1;
        }
        ERR_put_error(0x14,0x273,0x41,"ssl\\ssl_lib.c",0x1453,uVar9);
        goto LAB_14f655504;
      }
    }
    *param_2 = 0;
    uVar9 = 1;
    *param_3 = 0;
  }
  return uVar9;
}

// SSL_client_version @ 14f6555e0

undefined4 SSL_client_version(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5ec);
}

// SSL_connect @ 14f6555f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_connect(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    SSL_set_connect_state();
  }
  SSL_do_handshake(param_1);
  return;
}

// SSL_copy_session_id @ 14f655630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_copy_session_id(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f655640;
  uVar5 = SSL_get_session(param_2);
  iVar4 = SSL_set_session(param_1,uVar5);
  if (iVar4 != 0) {
    if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1);
      lVar3 = *(longlong *)(param_2 + 8);
      *(longlong *)(param_1 + 8) = lVar3;
      iVar4 = (**(code **)(lVar3 + 0x10))(param_1);
      if (iVar4 == 0) {
        return 0;
      }
    }
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x488) + 0x208);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    ssl_cert_free(*(undefined8 *)(param_1 + 0x488));
    *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_2 + 0x488);
    uVar2 = *(uint *)(param_2 + 0x4e0);
    if (uVar2 < 0x21) {
      *(ulonglong *)(param_1 + 0x4e0) = (ulonglong)uVar2;
      memcpy((void *)(param_1 + 0x4e8),(void *)(param_2 + 0x4e8),(ulonglong)uVar2);
      return 1;
    }
    ERR_put_error(0x14,0xda,0x111,"ssl\\ssl_lib.c",0x381,uVar6);
  }
  return 0;
}

// SSL_ctrl @ 14f655740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_ctrl(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(int)param_3;
  switch((int)param_2) {
  case 0x10:
    *(longlong **)(param_1 + 0xc0) = param_4;
    return 1;
  default:
                    /* WARNING: Could not recover jumptable at 0x00014f655a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 0x80))(param_1,param_2,param_3);
    return uVar4;
  case 0x21:
    param_3 = *(uint *)(param_1 + 0x5d0) | param_3;
    *(uint *)(param_1 + 0x5d0) = param_3;
    return (ulonglong)param_3;
  case 0x28:
    return (ulonglong)*(uint *)(param_1 + 0x838);
  case 0x29:
    uVar3 = *(uint *)(param_1 + 0x838);
    *(uint *)(param_1 + 0x838) = param_3;
    return (ulonglong)uVar3;
  case 0x32:
    return (ulonglong)*(uint *)(param_1 + 0x5e0);
  case 0x33:
    if (-1 < (int)param_3) {
      uVar3 = *(uint *)(param_1 + 0x5e0);
      *(ulonglong *)(param_1 + 0x5e0) = uVar4;
      return (ulonglong)uVar3;
    }
    break;
  case 0x34:
    if (param_3 - 0x200 < 0x3e01) {
      *(ulonglong *)(param_1 + 0x5f8) = uVar4;
      if (uVar4 < *(ulonglong *)(param_1 + 0x5f0)) {
        *(ulonglong *)(param_1 + 0x5f0) = uVar4;
      }
      return 1;
    }
    break;
  case 0x4c:
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x3d8);
    }
    break;
  case 0x4e:
    uVar3 = ~param_3 & *(uint *)(param_1 + 0x5d0);
    *(uint *)(param_1 + 0x5d0) = uVar3;
    return (ulonglong)uVar3;
  case 99:
    param_3 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) | param_3;
    *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) = param_3;
    return (ulonglong)param_3;
  case 100:
    uVar3 = ~param_3 & *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c);
    *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) = uVar3;
    return (ulonglong)uVar3;
  case 0x6e:
    if (param_4 == (longlong *)0x0) {
      return 2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2a8);
    if (lVar1 != 0) {
      *param_4 = lVar1;
      return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x2b0);
    }
    break;
  case 0x7a:
    if (((*(longlong *)(param_1 + 0x508) != 0) && (iVar2 = SSL_in_init(param_1), iVar2 == 0)) &&
       (iVar2 = ossl_statem_get_in_handshake(param_1), iVar2 == 0)) {
      return (ulonglong)(*(byte *)(*(longlong *)(param_1 + 0x508) + 0x260) & 1);
    }
    return 0xffffffff;
  case 0x7b:
    iVar2 = FUN_14f65b4c0(param_3,*(undefined4 *)(param_1 + 0x5d8));
    if ((iVar2 != 0) &&
       (iVar2 = ssl_set_version_bound
                          (*(undefined4 *)**(undefined8 **)(param_1 + 0x598),uVar4 & 0xffffffff,
                           param_1 + 0x5d4), iVar2 != 0)) {
      return 1;
    }
    break;
  case 0x7c:
    iVar2 = FUN_14f65b4c0(*(undefined4 *)(param_1 + 0x5d4),param_3);
    if ((iVar2 != 0) &&
       (iVar2 = ssl_set_version_bound(*(undefined4 *)**(undefined8 **)(param_1 + 0x598)), iVar2 != 0
       )) {
      return 1;
    }
    break;
  case 0x7d:
    if ((uVar4 <= *(ulonglong *)(param_1 + 0x5f8)) && (param_3 != 0)) {
      *(ulonglong *)(param_1 + 0x5f0) = uVar4;
      return 1;
    }
    break;
  case 0x7e:
    if (param_3 - 1 < 0x20) {
      *(ulonglong *)(param_1 + 0x600) = uVar4;
      if (1 < (int)param_3) {
        *(undefined4 *)(param_1 + 0x838) = 1;
        return 1;
      }
      return 1;
    }
    break;
  case 0x82:
    return (ulonglong)*(uint *)(param_1 + 0x5d4);
  case 0x83:
    return (ulonglong)*(uint *)(param_1 + 0x5d8);
  }
  return 0;
}

// SSL_dane_enable @ 14f655b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_dane_enable(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f655b10;
  if (*(char *)(*(longlong *)(param_1 + 0x598) + 0x368) == '\0') {
    ERR_put_error(0x14,0x18b,0xa7,"ssl\\ssl_lib.c",0x3f5,0x14f655b10);
    return 0;
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    ERR_put_error(0x14,0x18b,0xac,"ssl\\ssl_lib.c",0x3f9,0x14f655b10);
    return 0;
  }
  if (*(longlong *)(param_1 + 0x638) == 0) {
    iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x80))(param_1,0x37,0,param_2);
    if (iVar1 != 0) goto LAB_14f655be9;
    uVar4 = 0x404;
  }
  else {
LAB_14f655be9:
    iVar1 = X509_VERIFY_PARAM_set1_host(*(undefined8 *)(param_1 + 0xd0),param_2,0);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
      *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0x598) + 0x358;
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 0xe0) = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
      uVar4 = 0x415;
      uVar3 = 0x41;
      goto LAB_14f655bc5;
    }
    uVar4 = 0x40b;
  }
  uVar3 = 0xcc;
LAB_14f655bc5:
  ERR_put_error(0x14,0x18b,uVar3,"ssl\\ssl_lib.c",uVar4,uVar5);
  return 0xffffffff;
}

// SSL_dane_tlsa_add @ 14f655c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_dane_tlsa_add(longlong param_1)

{
  FUN_14f65a5e0(param_1 + 0xd8);
  return;
}

// SSL_do_handshake @ 14f655cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_do_handshake(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f655cc0;
  uVar3 = 1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    ERR_put_error(0x14,0xb4,0x90,"ssl\\ssl_lib.c",0xe83);
    return 0xffffffff;
  }
  ossl_statem_check_finish_init(param_1,0xffffffff);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x60))(param_1,0);
  iVar1 = SSL_in_init(param_1);
  if (iVar1 == 0) {
    iVar1 = SSL_in_before(param_1);
    if (iVar1 == 0) goto LAB_14f655d80;
  }
  if ((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) {
    local_30 = ASYNC_get_current_job();
    if (local_30 == 0) {
      local_38 = param_1;
      local_28 = local_30;
      local_20 = local_30;
      local_18 = local_30;
      uVar2 = FUN_14f65c300(param_1,&local_38,FUN_14f65b820);
      return uVar2;
    }
  }
  uVar3 = (**(code **)(param_1 + 0x30))(param_1);
LAB_14f655d80:
  return (ulonglong)uVar3;
}

// SSL_dup @ 14f655da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * SSL_dup(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  iVar1 = SSL_in_init();
  if ((iVar1 == 0) || (iVar1 = SSL_in_before(param_1), iVar1 == 0)) {
    LOCK();
    param_1[0x172] = param_1[0x172] + 1;
    UNLOCK();
    return param_1;
  }
  puVar3 = (undefined4 *)SSL_new(*(undefined8 *)(param_1 + 0x166));
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (*(longlong *)(param_1 + 0x142) == 0) {
    iVar1 = SSL_set_ssl_method(puVar3,*(undefined8 *)(param_1 + 2));
    if (iVar1 == 0) goto LAB_14f656030;
    if (*(longlong *)(param_1 + 0x122) != 0) {
      ssl_cert_free(*(undefined8 *)(puVar3 + 0x122));
      lVar4 = ssl_cert_dup(*(undefined8 *)(param_1 + 0x122));
      *(longlong *)(puVar3 + 0x122) = lVar4;
      if (lVar4 == 0) goto LAB_14f656030;
    }
    iVar1 = SSL_set_session_id_context(puVar3,param_1 + 0x13a,param_1[0x138]);
  }
  else {
    iVar1 = SSL_copy_session_id(puVar3,param_1);
  }
  if ((iVar1 != 0) && (iVar1 = FUN_14f65b6e0(puVar3,param_1), iVar1 != 0)) {
    *puVar3 = *param_1;
    puVar3[0x173] = param_1[0x173];
    puVar3[0x175] = param_1[0x175];
    puVar3[0x176] = param_1[0x176];
    puVar3[0x174] = param_1[0x174];
    if (-1 < (int)param_1[0x178]) {
      *(longlong *)(puVar3 + 0x178) = (longlong)(int)param_1[0x178];
    }
    puVar3[0x20e] = param_1[0x20e];
    *(undefined8 *)(puVar3 + 0x2e) = *(undefined8 *)(param_1 + 0x2e);
    *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    lVar4 = *(longlong *)(param_1 + 0x158);
    puVar3[0x156] = param_1[0x156];
    if (lVar4 != 0) {
      *(longlong *)(puVar3 + 0x158) = lVar4;
    }
    uVar2 = X509_VERIFY_PARAM_get_depth(*(undefined8 *)(param_1 + 0x34));
    X509_VERIFY_PARAM_set_depth(*(undefined8 *)(puVar3 + 0x34),uVar2);
    *(undefined8 *)(puVar3 + 0x14a) = *(undefined8 *)(param_1 + 0x14a);
    *(undefined8 *)(puVar3 + 0x15a) = *(undefined8 *)(param_1 + 0x15a);
    iVar1 = CRYPTO_dup_ex_data(0,puVar3 + 0x16c,param_1 + 0x16c);
    if (iVar1 != 0) {
      puVar3[0xe] = param_1[0xe];
      if (*(longlong *)(param_1 + 0xc) != 0) {
        if (param_1[0xe] == 0) {
          SSL_set_connect_state(puVar3);
        }
        else {
          SSL_set_accept_state();
        }
      }
      puVar3[0x11] = param_1[0x11];
      puVar3[0x32] = param_1[0x32];
      *(undefined8 *)(puVar3 + 0x5ba) = *(undefined8 *)(param_1 + 0x5ba);
      *(undefined8 *)(puVar3 + 0x5bc) = *(undefined8 *)(param_1 + 0x5bc);
      X509_VERIFY_PARAM_inherit(*(undefined8 *)(puVar3 + 0x34),*(undefined8 *)(param_1 + 0x34));
      if (*(longlong *)(param_1 + 0x46) != 0) {
        lVar4 = OPENSSL_sk_dup();
        *(longlong *)(puVar3 + 0x46) = lVar4;
        if (lVar4 == 0) goto LAB_14f656030;
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        lVar4 = OPENSSL_sk_dup();
        *(longlong *)(puVar3 + 0x48) = lVar4;
        if (lVar4 == 0) goto LAB_14f656030;
      }
      iVar1 = FUN_14f65aae0(puVar3 + 0x16e,*(undefined8 *)(param_1 + 0x16e));
      if ((iVar1 != 0) &&
         (iVar1 = FUN_14f65aae0(puVar3 + 0x170,*(undefined8 *)(param_1 + 0x170)), iVar1 != 0)) {
        return puVar3;
      }
    }
  }
LAB_14f656030:
  SSL_free(puVar3);
  return (undefined4 *)0x0;
}

// SSL_enable_ct @ 14f656070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_enable_ct(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = SSL_set_ct_validation_callback(param_1,&LAB_14f65a190,0);
    return uVar1;
  }
  if (param_2 != 1) {
    ERR_put_error(0x14,0x192,0xd4,"ssl\\ssl_lib.c",0x13e6);
    return 0;
  }
  uVar1 = SSL_set_ct_validation_callback(param_1,FUN_14f65a1a0,0);
  return uVar1;
}

// SSL_export_keying_material @ 14f6560e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_export_keying_material(int *param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x142) != 0) && ((0x300 < *param_1 || (*param_1 == 0x100)))) {
                    /* WARNING: Could not recover jumptable at 0x00014f656116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x58))();
    return uVar1;
  }
  return 0xffffffff;
}

// SSL_export_keying_material_early @ 14f656130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_export_keying_material_early(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0x304) {
    return 0;
  }
  uVar1 = tls13_export_keying_material_early();
  return uVar1;
}

// SSL_free @ 14f656160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x5c8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      X509_VERIFY_PARAM_free(*(undefined8 *)(param_1 + 0xd0));
      FUN_14f65a400(param_1 + 0xd8);
      CRYPTO_free_ex_data(0,param_1,param_1 + 0x5b0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        uVar3 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        BIO_free(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      BIO_free_all(*(undefined8 *)(param_1 + 0x18));
      BIO_free_all(*(undefined8 *)(param_1 + 0x10));
      BUF_MEM_free(*(undefined8 *)(param_1 + 0x88));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x118));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x120));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x128));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x110));
      if (*(longlong *)(param_1 + 0x508) != 0) {
        ssl_clear_bad_session(param_1);
        SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
      }
      SSL_SESSION_free(*(undefined8 *)(param_1 + 0x510));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x518),"ssl\\ssl_lib.c",0x49e);
      ssl_clear_cipher_ctx(param_1);
      EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x450));
      *(undefined8 *)(param_1 + 0x450) = 0;
      EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x480));
      *(undefined8 *)(param_1 + 0x480) = 0;
      ssl_cert_free(*(undefined8 *)(param_1 + 0x488));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1768),"ssl\\ssl_lib.c",0x4a3);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x638),"ssl\\ssl_lib.c",0x4a6);
      SSL_CTX_free(*(undefined8 *)(param_1 + 0x768));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x688),"ssl\\ssl_lib.c",0x4a9);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x698),"ssl\\ssl_lib.c",0x4aa);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6a8),"ssl\\ssl_lib.c",0x4ab);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6b8),"ssl\\ssl_lib.c",0x4ac);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x660),X509_EXTENSION_free);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x658),OCSP_RESPID_free);
      SCT_LIST_free(*(undefined8 *)(param_1 + 0x758));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x648),"ssl\\ssl_lib.c",0x4b4);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x668),"ssl\\ssl_lib.c",0x4b6);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6e8),"ssl\\ssl_lib.c",0x4b7);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x718),"ssl\\ssl_lib.c",0x4b8);
      if (*(longlong *)(param_1 + 0x738) != 0) {
        CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x288),"ssl\\ssl_lib.c",0x4ba);
      }
      CRYPTO_free(*(undefined8 *)(param_1 + 0x738),"ssl\\ssl_lib.c",0x4bb);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x790),"ssl\\ssl_lib.c",0x4bc);
      EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x7a8));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5b8),X509_NAME_free);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5c0),X509_NAME_free);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5a0),X509_free);
      if (*(longlong *)(param_1 + 8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1);
      }
      RECORD_LAYER_release(param_1 + 0x830);
      SSL_CTX_free(*(undefined8 *)(param_1 + 0x598));
      ASYNC_WAIT_CTX_free(*(undefined8 *)(param_1 + 0x1700));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6f8),"ssl\\ssl_lib.c",0x4ce);
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x770));
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x1738));
      CRYPTO_free(param_1,"ssl\\ssl_lib.c",0x4d7);
    }
  }
  return;
}

// SSL_free_buffers @ 14f656510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_free_buffers(longlong param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x830;
  iVar1 = RECORD_LAYER_read_pending(param_1);
  if (iVar1 == 0) {
    iVar1 = RECORD_LAYER_write_pending(param_1);
    if (iVar1 == 0) {
      RECORD_LAYER_release(param_1);
      return 1;
    }
  }
  return 0;
}

// SSL_get0_alpn_selected @ 14f656560

void SSL_get0_alpn_selected(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  *param_2 = 0;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0), *param_2 = lVar1, lVar1 != 0)) {
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 1000);
    return;
  }
  *param_3 = 0;
  return;
}

// SSL_get0_dane_authority @ 14f6565b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_get0_dane_authority(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (((param_1 != -0xd8) && (iVar1 = OPENSSL_sk_num(), 0 < iVar1)) &&
     (*(int *)(param_1 + 0x5a8) == 0)) {
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = *(undefined8 *)(param_1 + 0xf8);
      }
      if (param_3 != (undefined8 *)0x0) {
        if (*(longlong *)(param_1 + 0xf8) == 0) {
          *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x18);
          return *(undefined4 *)(param_1 + 0x104);
        }
        *param_3 = 0;
      }
    }
    return *(undefined4 *)(param_1 + 0x104);
  }
  return 0xffffffff;
}

// SSL_get0_dane_tlsa @ 14f656650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
SSL_get0_dane_tlsa(longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  
  if (((param_1 != -0xd8) && (iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xe0)), 0 < iVar1))
     && (*(int *)(param_1 + 0x5a8) == 0)) {
    if (*(undefined1 **)(param_1 + 0xf0) != (undefined1 *)0x0) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = **(undefined1 **)(param_1 + 0xf0);
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 1);
      }
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 2);
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8);
      }
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10);
      }
    }
    return *(undefined4 *)(param_1 + 0x104);
  }
  return 0xffffffff;
}

// SSL_get0_param @ 14f656760

undefined8 SSL_get0_param(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}

// SSL_get0_peer_scts @ 14f656770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get0_peer_scts(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x760) != 0) {
LAB_14f6567b6:
    return *(undefined8 *)(param_1 + 0x758);
  }
  iVar1 = FUN_14f659fb0();
  if (-1 < iVar1) {
    iVar1 = FUN_14f659e90(param_1);
    if (-1 < iVar1) {
      iVar1 = FUN_14f65a030(param_1);
      if (-1 < iVar1) {
        *(undefined4 *)(param_1 + 0x760) = 1;
        goto LAB_14f6567b6;
      }
    }
  }
  return 0;
}

// SSL_get0_peername @ 14f6567e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_get0_peername(longlong param_1)

{
  X509_VERIFY_PARAM_get0_peername(*(undefined8 *)(param_1 + 0xd0));
  return;
}

// SSL_get0_verified_chain @ 14f656830

undefined8 SSL_get0_verified_chain(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5a0);
}

// SSL_get1_supported_ciphers @ 14f656840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_get1_supported_ciphers(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  if ((param_1 != 0) &&
     (((lVar4 = *(longlong *)(param_1 + 0x118), lVar4 != 0 ||
       ((*(longlong *)(param_1 + 0x598) != 0 &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 8), lVar4 != 0)))) &&
      (iVar1 = ssl_set_client_disabled(), iVar1 != 0)))) {
    iVar1 = OPENSSL_sk_num(lVar4);
    uVar6 = uVar3;
    if (0 < iVar1) {
      do {
        uVar2 = OPENSSL_sk_value(lVar4,uVar6);
        iVar1 = ssl_cipher_disabled(param_1,uVar2,0x10001,0);
        if (iVar1 == 0) {
          if ((uVar3 == 0) && (uVar3 = OPENSSL_sk_new_null(), uVar3 == 0)) {
            return 0;
          }
          iVar1 = OPENSSL_sk_push(uVar3,uVar2);
          if (iVar1 == 0) {
            OPENSSL_sk_free(uVar3);
            return 0;
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar1 = OPENSSL_sk_num(lVar4);
      } while ((int)uVar5 < iVar1);
    }
    return uVar3;
  }
  return 0;
}

// SSL_get_SSL_CTX @ 14f656940

undefined8 SSL_get_SSL_CTX(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x598);
}

// SSL_get_all_async_fds @ 14f656950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get_all_async_fds(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1700) == 0) {
    return 0;
  }
  uVar1 = ASYNC_WAIT_CTX_get_all_fds();
  return uVar1;
}

// SSL_get_certificate @ 14f656980

undefined8 SSL_get_certificate(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x488) != (undefined8 *)0x0) {
    return *(undefined8 *)**(undefined8 **)(param_1 + 0x488);
  }
  return 0;
}

// SSL_get_changed_async_fds @ 14f6569a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get_changed_async_fds(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1700) == 0) {
    return 0;
  }
  uVar1 = ASYNC_WAIT_CTX_get_changed_fds();
  return uVar1;
}

// SSL_get_cipher_list @ 14f6569d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get_cipher_list(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x118);
  if ((lVar2 != 0) ||
     ((*(longlong *)(param_1 + 0x598) != 0 &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 8), lVar2 != 0)))) {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (param_2 < iVar1) {
      lVar2 = OPENSSL_sk_value(lVar2,param_2);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar2 + 8);
      }
    }
  }
  return 0;
}

// SSL_get_ciphers @ 14f656a60

longlong SSL_get_ciphers(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x118), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 8), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}

// SSL_get_client_random @ 14f656ab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

size_t SSL_get_client_random(longlong param_1,void *param_2,ulonglong param_3)

{
  size_t _Size;
  
  if (param_3 == 0) {
    return 0x20;
  }
  _Size = 0x20;
  if (param_3 < 0x21) {
    _Size = param_3;
  }
  memcpy(param_2,(void *)(*(longlong *)(param_1 + 0xa8) + 0xb8),_Size);
  return _Size;
}

// SSL_get_current_cipher @ 14f656b10

longlong SSL_get_current_cipher(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x508) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0), lVar1 == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}

// SSL_get_current_compression @ 14f656b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get_current_compression(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x458) != 0) {
    uVar1 = COMP_CTX_get_method();
    return uVar1;
  }
  return 0;
}

// SSL_get_current_expansion @ 14f656b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get_current_expansion(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x460) != 0) {
    uVar1 = COMP_CTX_get_method();
    return uVar1;
  }
  return 0;
}

// SSL_get_default_timeout @ 14f656bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_get_default_timeout(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f656bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0xb8))();
  return;
}

// SSL_get_error @ 14f656c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_get_error(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (0 < param_2) {
    return 0;
  }
  uVar1 = ERR_peek_error();
  if (uVar1 != 0) {
    uVar4 = 1;
    if ((uVar1 & 0xff000000) == 0x2000000) {
      uVar4 = 5;
    }
    return uVar4;
  }
  if (*(int *)(param_1 + 0x28) == 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    iVar2 = BIO_test_flags(uVar3,1);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = BIO_test_flags(uVar3,2);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = BIO_test_flags(uVar3,4);
    if (iVar2 != 0) goto LAB_14f656cf7;
  }
  if (*(int *)(param_1 + 0x28) == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    iVar2 = BIO_test_flags(uVar3,2);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = BIO_test_flags(uVar3,1);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = BIO_test_flags(uVar3,4);
    if (iVar2 != 0) {
LAB_14f656cf7:
      iVar2 = BIO_get_retry_reason(uVar3);
      if (iVar2 != 2) {
        uVar4 = 5;
        if (iVar2 == 3) {
          uVar4 = 8;
        }
        return uVar4;
      }
      return 7;
    }
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 4) {
    return 4;
  }
  if (iVar2 == 5) {
    return 9;
  }
  if (iVar2 == 6) {
    return 10;
  }
  if (iVar2 != 7) {
    if (((*(byte *)(param_1 + 0x44) & 2) == 0) ||
       (uVar4 = 6, *(int *)(*(longlong *)(param_1 + 0xa8) + 0xf4) != 0)) {
      uVar4 = 5;
    }
    return uVar4;
  }
  return 0xb;
}

// SSL_get_ex_data @ 14f656de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x5b0);
  return;
}

// SSL_get_fd @ 14f656e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_get_fd(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0xffffffff;
  lVar1 = BIO_find_type(*(undefined8 *)(param_1 + 0x10),0x100,param_3,param_4,0x14f656e1a);
  if (lVar1 != 0) {
    BIO_ctrl(lVar1,0x69,0,local_res8);
  }
  return local_res8[0];
}

// SSL_get_finished @ 14f656e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_get_finished(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    uVar2 = *(ulonglong *)(lVar1 + 0x198);
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    memcpy(param_2,(void *)(lVar1 + 0x118),param_3);
    return uVar2;
  }
  return 0;
}

// SSL_get_options @ 14f656f00

undefined4 SSL_get_options(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5cc);
}

// SSL_get_peer_cert_chain @ 14f656f10

undefined8 SSL_get_peer_cert_chain(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x508) != 0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1c0);
  }
  return 0;
}

// SSL_get_peer_certificate @ 14f656f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_get_peer_certificate(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x508) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8), lVar1 != 0)) {
    X509_up_ref(lVar1);
    return lVar1;
  }
  return 0;
}

// SSL_get_peer_finished @ 14f656f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_get_peer_finished(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    uVar2 = *(ulonglong *)(lVar1 + 0x220);
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    memcpy(param_2,(void *)(lVar1 + 0x1a0),param_3);
    return uVar2;
  }
  return 0;
}

// SSL_get_privatekey @ 14f657010

undefined8 SSL_get_privatekey(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x488) != (longlong *)0x0) {
    return *(undefined8 *)(**(longlong **)(param_1 + 0x488) + 8);
  }
  return 0;
}

// SSL_get_rbio @ 14f6570a0

undefined8 SSL_get_rbio(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// SSL_get_rfd @ 14f6570e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_get_rfd(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0xffffffff;
  lVar1 = BIO_find_type(*(undefined8 *)(param_1 + 0x10),0x100,param_3,param_4,0x14f6570ea);
  if (lVar1 != 0) {
    BIO_ctrl(lVar1,0x69,0,local_res8);
  }
  return local_res8[0];
}

// SSL_get_security_level @ 14f657150

undefined4 SSL_get_security_level(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x488) + 0x1f0);
}

// SSL_get_server_random @ 14f657170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

size_t SSL_get_server_random(longlong param_1,void *param_2,ulonglong param_3)

{
  size_t _Size;
  
  if (param_3 == 0) {
    return 0x20;
  }
  _Size = 0x20;
  if (param_3 < 0x21) {
    _Size = param_3;
  }
  memcpy(param_2,(void *)(*(longlong *)(param_1 + 0xa8) + 0x98),_Size);
  return _Size;
}

// SSL_get_servername @ 14f6571d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_get_servername(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x38);
  }
  if (param_2 == 0) {
    if (iVar3 == 0) {
      iVar3 = SSL_in_before();
      if (iVar3 == 0) {
        if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
             (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) &&
           ((*(int *)(param_1 + 200) != 0 &&
            (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208), lVar2 != 0)))) {
          return lVar2;
        }
      }
      else if (((*(longlong *)(param_1 + 0x638) == 0) &&
               (piVar1 = *(int **)(param_1 + 0x508), piVar1 != (int *)0x0)) && (*piVar1 != 0x304)) {
        return *(longlong *)(piVar1 + 0x82);
      }
    }
    else if ((*(int *)(param_1 + 200) != 0) &&
            ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
              (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)))) {
      return *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208);
    }
    return *(longlong *)(param_1 + 0x638);
  }
  return 0;
}

// SSL_get_servername_type @ 14f6572d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_get_servername_type
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = SSL_get_servername(param_1,0,param_3,param_4,0x14f6572da);
  return (lVar1 != 0) - 1;
}

// SSL_get_shared_ciphers @ 14f657300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * SSL_get_shared_ciphers(longlong param_1,char *param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  
  if (((*(int *)(param_1 + 0x38) == 0) || (lVar2 = *(longlong *)(param_1 + 0x110), lVar2 == 0)) ||
     (param_3 < 2)) {
    return (char *)0x0;
  }
  lVar10 = *(longlong *)(param_1 + 0x118);
  if ((((lVar10 == 0) &&
       ((*(longlong *)(param_1 + 0x598) == 0 ||
        (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 8), lVar10 == 0)))) ||
      (iVar3 = OPENSSL_sk_num(lVar2), iVar3 == 0)) || (iVar3 = OPENSSL_sk_num(lVar10), iVar3 == 0))
  {
    param_2 = (char *)0x0;
  }
  else {
    iVar9 = 0;
    iVar3 = OPENSSL_sk_num(lVar2);
    pcVar8 = param_2;
    if (0 < iVar3) {
      do {
        lVar5 = OPENSSL_sk_value(lVar2,iVar9);
        iVar3 = OPENSSL_sk_find(lVar10,lVar5);
        if (-1 < iVar3) {
          pcVar6 = *(char **)(lVar5 + 8);
          cVar1 = *pcVar6;
          pcVar7 = pcVar6;
          for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
          }
          uVar4 = uVar4 & 0x7fffffff;
          pcVar7 = pcVar8;
          if (param_3 <= (int)uVar4) {
            pcVar6 = pcVar8 + -1;
            if (pcVar8 == param_2) {
              pcVar6 = pcVar8;
            }
            *pcVar6 = '\0';
            return param_2;
          }
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            *pcVar7 = cVar1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          pcVar8[uVar4] = ':';
          pcVar8 = pcVar8 + uVar4 + 1;
          param_3 = param_3 + (-1 - uVar4);
        }
        iVar9 = iVar9 + 1;
        iVar3 = OPENSSL_sk_num(lVar2);
      } while (iVar9 < iVar3);
    }
    pcVar8[-1] = '\0';
  }
  return param_2;
}

// SSL_get_shutdown @ 14f657480

undefined4 SSL_get_shutdown(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}

// SSL_get_verify_depth @ 14f6574b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_get_verify_depth(longlong param_1)

{
  X509_VERIFY_PARAM_get_depth(*(undefined8 *)(param_1 + 0xd0));
  return;
}

// SSL_get_verify_result @ 14f6574f0

undefined4 SSL_get_verify_result(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5a8);
}

// SSL_get_version @ 14f657500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_get_version(undefined4 *param_1)

{
  ssl_protocol_to_string(*param_1);
  return;
}

// SSL_get_wbio @ 14f657520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get_wbio(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = BIO_next(*(longlong *)(param_1 + 0x20));
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x18);
}

// SSL_get_wfd @ 14f657560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_get_wfd(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res8 [8];
  undefined8 uVar3;
  
  uVar3 = 0x14f65756a;
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = BIO_next(*(longlong *)(param_1 + 0x20));
  }
  lVar2 = BIO_find_type(uVar1,0x100);
  if (lVar2 != 0) {
    BIO_ctrl(lVar2,0x69,0,local_res8,uVar3);
  }
  return local_res8[0];
}

// SSL_has_matching_session_id @ 14f6575d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool SSL_has_matching_session_id(undefined4 *param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_2a8 [32];
  undefined4 local_288 [84];
  ulonglong local_138;
  undefined1 local_130 [280];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6575dc;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  if (param_3 < 0x21) {
    local_288[0] = *param_1;
    local_138 = (ulonglong)param_3;
    memcpy(local_130,param_2,local_138);
    CRYPTO_THREAD_read_lock(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x28),local_288);
    CRYPTO_THREAD_unlock(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
    bVar2 = lVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// SSL_has_pending @ 14f6576a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_has_pending(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8 [4];
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    local_res8[0] = pqueue_iterator(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x48));
    lVar2 = pqueue_next(local_res8);
    while (lVar2 != 0) {
      if (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x40) != 0) {
        return 1;
      }
      lVar2 = pqueue_next(local_res8);
    }
  }
  iVar1 = RECORD_LAYER_processed_read_pending(param_1 + 0x830);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = RECORD_LAYER_read_pending(param_1 + 0x830);
  return uVar3;
}

// SSL_key_update @ 14f657770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_key_update(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f657780;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (param_2 < 2) {
      iVar1 = SSL_is_init_finished(param_1);
      if (iVar1 == 0) {
        uVar3 = 0x857;
        uVar2 = 0x79;
      }
      else {
        iVar1 = RECORD_LAYER_write_pending(param_1 + 0x830);
        if (iVar1 == 0) {
          ossl_statem_set_in_init(param_1,1);
          *(uint *)(param_1 + 0x784) = param_2;
          return 1;
        }
        uVar3 = 0x85c;
        uVar2 = 0x7f;
      }
    }
    else {
      uVar3 = 0x852;
      uVar2 = 0x78;
    }
  }
  else {
    uVar3 = 0x84c;
    uVar2 = 0x10a;
  }
  ERR_put_error(0x14,0x203,uVar2,"ssl\\ssl_lib.c",uVar3,uVar4);
  return 0;
}

// SSL_new @ 14f657860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_new(longlong *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Dst;
  undefined8 uVar7;
  
  uVar7 = 0x14f65786c;
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0x14,0xba,0xc3,"ssl\\ssl_lib.c",0x2ab,0x14f65786c);
    return 0;
  }
  if (*param_1 == 0) {
    ERR_put_error(0x14,0xba,0xe4,"ssl\\ssl_lib.c",0x2af,0x14f65786c);
    return 0;
  }
  lVar5 = CRYPTO_zalloc(0x1778,"ssl\\ssl_lib.c",0x2b3);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x5c8) = 1;
    lVar6 = CRYPTO_THREAD_lock_new();
    *(longlong *)(lVar5 + 0x1738) = lVar6;
    if (lVar6 == 0) {
      CRYPTO_free(lVar5,"ssl\\ssl_lib.c",0x2ba);
      lVar5 = 0;
    }
    else {
      RECORD_LAYER_init(lVar5 + 0x830,lVar5);
      *(int *)(lVar5 + 0x5cc) = (int)param_1[0x24];
      *(undefined4 *)(lVar5 + 0x10c) = *(undefined4 *)((longlong)param_1 + 0x36c);
      *(int *)(lVar5 + 0x5d4) = (int)param_1[0x25];
      *(undefined4 *)(lVar5 + 0x5d8) = *(undefined4 *)((longlong)param_1 + 300);
      *(undefined4 *)(lVar5 + 0x5d0) = *(undefined4 *)((longlong)param_1 + 0x124);
      *(longlong *)(lVar5 + 0x5e0) = param_1[0x26];
      *(int *)(lVar5 + 0x1710) = (int)param_1[0x72];
      *(undefined4 *)(lVar5 + 0x1714) = *(undefined4 *)((longlong)param_1 + 0x394);
      *(longlong *)(lVar5 + 0x1740) = param_1[0x79];
      *(int *)(lVar5 + 0x78c) = (int)param_1[0x7c];
      lVar6 = OPENSSL_sk_dup(param_1[3]);
      *(longlong *)(lVar5 + 0x128) = lVar6;
      if (lVar6 != 0) {
        lVar6 = ssl_cert_dup(param_1[0x27]);
        *(longlong *)(lVar5 + 0x488) = lVar6;
        if (lVar6 != 0) {
          *(int *)(lVar5 + 0x838) = (int)param_1[0x28];
          *(longlong *)(lVar5 + 0xb8) = param_1[0x29];
          *(longlong *)(lVar5 + 0xc0) = param_1[0x2a];
          *(int *)(lVar5 + 0x558) = (int)param_1[0x2b];
          *(longlong *)(lVar5 + 0x828) = param_1[0x6f];
          *(longlong *)(lVar5 + 0x1720) = param_1[0x73];
          *(longlong *)(lVar5 + 0x1728) = param_1[0x74];
          *(longlong *)(lVar5 + 0x1730) = param_1[0x75];
          uVar1 = param_1[0x2c];
          *(ulonglong *)(lVar5 + 0x4e0) = uVar1;
          if (uVar1 < 0x21) {
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x16c);
            lVar6 = param_1[0x2e];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x174);
            *(int *)(lVar5 + 0x4e8) = (int)param_1[0x2d];
            *(undefined4 *)(lVar5 + 0x4ec) = uVar2;
            *(int *)(lVar5 + 0x4f0) = (int)lVar6;
            *(undefined4 *)(lVar5 + 0x4f4) = uVar3;
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x17c);
            lVar6 = param_1[0x30];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x184);
            *(int *)(lVar5 + 0x4f8) = (int)param_1[0x2f];
            *(undefined4 *)(lVar5 + 0x4fc) = uVar2;
            *(int *)(lVar5 + 0x500) = (int)lVar6;
            *(undefined4 *)(lVar5 + 0x504) = uVar3;
            *(longlong *)(lVar5 + 0x560) = param_1[0x31];
            *(longlong *)(lVar5 + 0x528) = param_1[0x32];
            lVar6 = X509_VERIFY_PARAM_new();
            *(longlong *)(lVar5 + 0xd0) = lVar6;
            if (lVar6 != 0) {
              X509_VERIFY_PARAM_inherit(lVar6,param_1[0x33]);
              *(int *)(lVar5 + 0x40) = (int)param_1[0x34];
              *(undefined1 *)(lVar5 + 0x72c) = *(undefined1 *)((longlong)param_1 + 0x23c);
              *(longlong *)(lVar5 + 0x5f8) = param_1[0x39];
              *(longlong *)(lVar5 + 0x5f0) = param_1[0x38];
              uVar1 = param_1[0x3a];
              *(ulonglong *)(lVar5 + 0x600) = uVar1;
              if (1 < uVar1) {
                *(undefined4 *)(lVar5 + 0x838) = 1;
              }
              if (param_1[0x3b] != 0) {
                SSL_set_default_read_buffer_len(lVar5);
              }
              LOCK();
              *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
              UNLOCK();
              *(longlong **)(lVar5 + 0x598) = param_1;
              *(undefined8 *)(lVar5 + 0x628) = 0;
              *(undefined8 *)(lVar5 + 0x630) = 0;
              *(undefined4 *)(lVar5 + 0x678) = 0;
              *(int *)(lVar5 + 0x640) = (int)param_1[0x47];
              *(undefined4 *)(lVar5 + 0x654) = 0;
              *(undefined8 *)(lVar5 + 0x658) = 0;
              *(undefined8 *)(lVar5 + 0x660) = 0;
              *(undefined8 *)(lVar5 + 0x668) = 0;
              *(undefined8 *)(lVar5 + 0x670) = 0;
              LOCK();
              *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
              UNLOCK();
              *(longlong **)(lVar5 + 0x768) = param_1;
              if (param_1[0x49] != 0) {
                lVar6 = CRYPTO_memdup(param_1[0x49],param_1[0x48],"ssl\\ssl_lib.c",0x30d);
                *(longlong *)(lVar5 + 0x688) = lVar6;
                if (lVar6 == 0) {
                  *(undefined8 *)(lVar5 + 0x680) = 0;
                  goto LAB_14f657932;
                }
                *(longlong *)(lVar5 + 0x680) = param_1[0x48];
              }
              if (param_1[0x4b] != 0) {
                lVar6 = CRYPTO_memdup(param_1[0x4b],param_1[0x4a] * 2,"ssl\\ssl_lib.c",0x319);
                *(longlong *)(lVar5 + 0x6a8) = lVar6;
                if (lVar6 == 0) {
                  *(undefined8 *)(lVar5 + 0x6a0) = 0;
                  goto LAB_14f657932;
                }
                *(longlong *)(lVar5 + 0x6a0) = param_1[0x4a];
              }
              *(undefined8 *)(lVar5 + 0x6f8) = 0;
              if (*(longlong *)(*(longlong *)(lVar5 + 0x598) + 0x270) != 0) {
                _Dst = (void *)CRYPTO_malloc(*(undefined8 *)(*(longlong *)(lVar5 + 0x598) + 0x278),
                                             "ssl\\ssl_lib.c",0x326);
                *(void **)(lVar5 + 0x6e8) = _Dst;
                if (_Dst == (void *)0x0) {
                  *(undefined8 *)(lVar5 + 0x6f0) = 0;
                  goto LAB_14f657932;
                }
                memcpy(_Dst,*(void **)(*(longlong *)(lVar5 + 0x598) + 0x270),
                       *(size_t *)(*(longlong *)(lVar5 + 0x598) + 0x278));
                *(undefined8 *)(lVar5 + 0x6f0) =
                     *(undefined8 *)(*(longlong *)(lVar5 + 0x598) + 0x278);
              }
              *(undefined8 *)(lVar5 + 0x5a0) = 0;
              *(undefined4 *)(lVar5 + 0x5a8) = 0;
              *(longlong *)(lVar5 + 0x16e8) = param_1[0x15];
              *(longlong *)(lVar5 + 0x16f0) = param_1[0x16];
              lVar6 = *param_1;
              *(longlong *)(lVar5 + 8) = lVar6;
              *(undefined4 *)(lVar5 + 0x784) = 0xffffffff;
              *(longlong *)(lVar5 + 0x1758) = param_1[0x7a];
              *(longlong *)(lVar5 + 0x1760) = param_1[0x7b];
              iVar4 = (**(code **)(lVar6 + 0x10))(lVar5);
              if (iVar4 != 0) {
                *(uint *)(lVar5 + 0x38) =
                     (uint)(*(code **)(*param_1 + 0x28) != ssl_undefined_function);
                iVar4 = SSL_clear(lVar5);
                if ((iVar4 != 0) && (iVar4 = CRYPTO_new_ex_data(0,lVar5,lVar5 + 0x5b0), iVar4 != 0))
                {
                  *(longlong *)(lVar5 + 0x578) = param_1[0x58];
                  *(longlong *)(lVar5 + 0x580) = param_1[0x59];
                  *(longlong *)(lVar5 + 0x588) = param_1[0x5a];
                  *(longlong *)(lVar5 + 0x590) = param_1[0x5b];
                  *(undefined8 *)(lVar5 + 0x16f8) = 0;
                  iVar4 = SSL_set_ct_validation_callback(lVar5,param_1[0x36],param_1[0x37]);
                  if (iVar4 != 0) {
                    return lVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14f657932:
  SSL_free(lVar5);
  ERR_put_error(0x14,0xba,0x41,"ssl\\ssl_lib.c",0x359,uVar7);
  return 0;
}

// SSL_peek @ 14f657e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_peek(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    ERR_put_error(0x14,0x10e,0x10f,"ssl\\ssl_lib.c",0x77a);
    return -1;
  }
  iVar1 = FUN_14f65bce0(param_1,param_2,(longlong)param_3,local_res20);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}

// SSL_peek_ex @ 14f657e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_peek_ex(void)

{
  int iVar1;
  
  iVar1 = FUN_14f65bce0();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

// SSL_pending @ 14f657e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_pending(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0xa0))();
  uVar2 = 0x7fffffff;
  if (uVar1 < 0x7fffffff) {
    uVar2 = uVar1 & 0xffffffff;
  }
  return uVar2;
}

// SSL_read @ 14f657ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_read(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    ERR_put_error(0x14,0xdf,0x10f,"ssl\\ssl_lib.c",0x703);
    return -1;
  }
  iVar1 = ssl_read_internal(param_1,param_2,(longlong)param_3,local_res20);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}

// SSL_read_early_data @ 14f657f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
SSL_read_early_data(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f657f3b;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = 0x721;
LAB_14f657f58:
    ERR_put_error(0x14,0x211,0x42,"ssl\\ssl_lib.c",uVar4,uVar5);
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 == 0) {
      iVar2 = SSL_in_before();
      if (iVar2 == 0) {
        uVar4 = 0x729;
        goto LAB_14f657f58;
      }
LAB_14f657faa:
      *(undefined4 *)(param_1 + 0x84) = 9;
      if (*(longlong *)(param_1 + 0x30) == 0) {
        SSL_set_accept_state(param_1);
      }
      iVar2 = SSL_do_handshake(param_1);
      if (iVar2 < 1) {
        *(undefined4 *)(param_1 + 0x84) = 8;
        return false;
      }
    }
    else {
      if (iVar2 == 8) goto LAB_14f657faa;
      if (iVar2 != 10) {
        uVar4 = 0x74e;
        goto LAB_14f657f58;
      }
    }
    if (*(int *)(param_1 + 0x710) == 2) {
      *(undefined4 *)(param_1 + 0x84) = 0xb;
      iVar3 = ssl_read_internal(param_1,param_2,param_3,param_4);
      iVar2 = 0;
      if (((-1 < iVar3) && (iVar2 = iVar3, 0 < iVar3)) ||
         (iVar3 = iVar2, *(int *)(param_1 + 0x84) != 0xc)) {
        *(undefined4 *)(param_1 + 0x84) = 10;
        return 0 < iVar3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x84) = 0xc;
    }
    *param_4 = 0;
    uVar1 = 2;
  }
  return uVar1;
}

// SSL_read_ex @ 14f658070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_read_ex(void)

{
  int iVar1;
  
  iVar1 = ssl_read_internal();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

// SSL_renegotiate @ 14f6580a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_renegotiate(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1)) &&
     (*piVar1 != 0x10000)) {
    ERR_put_error(0x14,0x204,0x10a,"ssl\\ssl_lib.c",0x86d);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5cc) & 0x40000000) != 0) {
    ERR_put_error(0x14,0x204,0x153,"ssl\\ssl_lib.c",0x872);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x780) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014f658145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(piVar1 + 0x16))();
  return uVar2;
}

// SSL_renegotiate_abbreviated @ 14f658150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_renegotiate_abbreviated(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1)) &&
     (*piVar1 != 0x10000)) {
    ERR_put_error(0x14,0x222,0x10a,"ssl\\ssl_lib.c",0x87f);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5cc) & 0x40000000) != 0) {
    ERR_put_error(0x14,0x222,0x153,"ssl\\ssl_lib.c",0x884);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x780) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014f6581f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(piVar1 + 0x16))();
  return uVar2;
}

// SSL_select_next_proto @ 14f658220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SSL_select_next_proto
          (longlong *param_1,undefined1 *param_2,longlong param_3,uint param_4,undefined1 *param_5,
          uint param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      uVar6 = 0;
      if (param_6 != 0) {
        bVar1 = *(byte *)(uVar7 + param_3);
        do {
          bVar2 = param_5[uVar6];
          if ((bVar1 == bVar2) &&
             (iVar3 = memcmp((void *)((ulonglong)((int)uVar7 + 1) + param_3),
                             param_5 + ((int)uVar6 + 1),(ulonglong)bVar1), iVar3 == 0)) {
            uVar4 = 1;
            param_5 = (undefined1 *)(uVar7 + param_3);
            goto LAB_14f6582b3;
          }
          uVar5 = (int)uVar6 + 1 + (uint)bVar2;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < param_6);
      }
      uVar5 = (int)uVar7 + 1 + (uint)*(byte *)(uVar7 + param_3);
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < param_4);
  }
  uVar4 = 2;
LAB_14f6582b3:
  *param_1 = (longlong)(param_5 + 1);
  *param_2 = *param_5;
  return uVar4;
}

// SSL_set0_rbio @ 14f658310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set0_rbio(longlong param_1,undefined8 param_2)

{
  BIO_free_all(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

// SSL_set0_wbio @ 14f658370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set0_wbio(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  BIO_free_all(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = BIO_push(*(longlong *)(param_1 + 0x20),param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}

// SSL_set1_host @ 14f6583d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set1_host(longlong param_1,undefined8 param_2)

{
  X509_VERIFY_PARAM_set1_host(*(undefined8 *)(param_1 + 0xd0),param_2,0);
  return;
}

// SSL_set1_param @ 14f658400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set1_param(longlong param_1)

{
  X509_VERIFY_PARAM_set1(*(undefined8 *)(param_1 + 0xd0));
  return;
}

// SSL_set_SSL_CTX @ 14f658430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_set_SSL_CTX(longlong param_1,longlong param_2)

{
  ulonglong _Size;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x598) == param_2) {
    return *(longlong *)(param_1 + 0x598);
  }
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x768);
  }
  lVar3 = ssl_cert_dup(*(undefined8 *)(param_2 + 0x138));
  if (lVar3 != 0) {
    iVar2 = custom_exts_copy_flags(lVar3 + 0x1d8,*(longlong *)(param_1 + 0x488) + 0x1d8);
    if (iVar2 == 0) {
      ssl_cert_free(lVar3);
    }
    else {
      ssl_cert_free(*(undefined8 *)(param_1 + 0x488));
      _Size = *(ulonglong *)(param_1 + 0x4e0);
      *(longlong *)(param_1 + 0x488) = lVar3;
      if (_Size < 0x21) {
        lVar3 = *(longlong *)(param_1 + 0x598);
        if (((lVar3 != 0) && (_Size == *(ulonglong *)(lVar3 + 0x160))) &&
           (iVar2 = memcmp((void *)(param_1 + 0x4e8),(void *)(lVar3 + 0x168),_Size), iVar2 == 0)) {
          *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_2 + 0x160);
          uVar1 = *(undefined8 *)(param_2 + 0x170);
          *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_2 + 0x168);
          *(undefined8 *)(param_1 + 0x4f0) = uVar1;
          uVar1 = *(undefined8 *)(param_2 + 0x180);
          *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_2 + 0x178);
          *(undefined8 *)(param_1 + 0x500) = uVar1;
        }
        LOCK();
        *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
        UNLOCK();
        SSL_CTX_free(*(undefined8 *)(param_1 + 0x598));
        *(longlong *)(param_1 + 0x598) = param_2;
        return param_2;
      }
    }
  }
  return 0;
}

// SSL_set_accept_state @ 14f658570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_accept_state(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  ossl_statem_clear();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28);
  ssl_clear_cipher_ctx(param_1);
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x450));
  *(undefined8 *)(param_1 + 0x450) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x480));
  *(undefined8 *)(param_1 + 0x480) = 0;
  return;
}

// SSL_set_alpn_protos @ 14f658610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_set_alpn_protos(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar4;
  ulonglong uVar3;
  
  uVar4 = 0x14f65861c;
  if ((param_3 == 0) || (param_2 == 0)) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x6e8),"ssl\\ssl_lib.c",0xb5e);
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    return 0;
  }
  if (1 < param_3) {
    uVar3 = 0;
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        if (*(byte *)(uVar3 + param_2) == 0) {
          return 1;
        }
        uVar2 = (int)uVar3 + 1 + (uint)*(byte *)(uVar3 + param_2);
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < param_3);
    }
    if (uVar2 == param_3) {
      lVar1 = CRYPTO_memdup(param_2,(ulonglong)param_3,"ssl\\ssl_lib.c",0xb67);
      if (lVar1 != 0) {
        CRYPTO_free(*(undefined8 *)(param_1 + 0x6e8),"ssl\\ssl_lib.c",0xb6c);
        *(longlong *)(param_1 + 0x6e8) = lVar1;
        *(ulonglong *)(param_1 + 0x6f0) = (ulonglong)param_3;
        return 0;
      }
      ERR_put_error(0x14,0x158,0x41,"ssl\\ssl_lib.c",0xb69,uVar4);
      return 1;
    }
  }
  return 1;
}

// SSL_set_bio @ 14f658760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_bio(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == *(longlong *)(param_1 + 0x10)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar1 = BIO_next();
    }
    if (param_3 == lVar1) {
      return;
    }
  }
  if ((param_2 != 0) && (param_2 == param_3)) {
    BIO_up_ref(param_2);
  }
  if (param_2 == *(longlong *)(param_1 + 0x10)) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar2 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    BIO_free_all(*(undefined8 *)(param_1 + 0x18));
    *(longlong *)(param_1 + 0x18) = param_3;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar2 = BIO_push(*(longlong *)(param_1 + 0x20),param_3);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar1 = BIO_next();
    }
    if (param_3 == lVar1) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
      }
      else {
        lVar3 = BIO_next();
      }
      if (lVar1 != lVar3) {
        BIO_free_all(*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = param_2;
        return;
      }
    }
    BIO_free_all(*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = param_2;
    SSL_set0_wbio(param_1,param_3);
  }
  return;
}

// SSL_set_block_padding @ 14f6588a0

undefined4 SSL_set_block_padding(longlong param_1,ulonglong param_2)

{
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x1730) = 0;
    return 1;
  }
  if (param_2 < 0x4001) {
    *(ulonglong *)(param_1 + 0x1730) = param_2;
    return 1;
  }
  return 0;
}

// SSL_set_cert_cb @ 14f6588e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_cert_cb(longlong param_1)

{
  ssl_cert_set_cert_cb(*(undefined8 *)(param_1 + 0x488));
  return;
}

// SSL_set_cipher_list @ 14f658910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_cipher_list(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = ssl_create_cipher_list
                    (**(undefined8 **)(param_1 + 0x598),*(undefined8 *)(param_1 + 0x128),
                     param_1 + 0x118,param_1 + 0x120,param_2,*(undefined8 *)(param_1 + 0x488),
                     0x14f65891a);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (lVar2 != 0) {
    iVar1 = FUN_14f659db0(lVar2);
    if (iVar1 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x10f,0xb9,"ssl\\ssl_lib.c",CONCAT44(uVar3,0xa2e));
  }
  return 0;
}

// SSL_set_connect_state @ 14f6589a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_connect_state(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  ossl_statem_clear();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
  ssl_clear_cipher_ctx(param_1);
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x450));
  *(undefined8 *)(param_1 + 0x450) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x480));
  *(undefined8 *)(param_1 + 0x480) = 0;
  return;
}

// SSL_set_ct_validation_callback @ 14f658a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_ct_validation_callback(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f658a25;
  if (param_2 != 0) {
    iVar1 = SSL_CTX_has_client_custom_ext(*(undefined8 *)(param_1 + 0x598),0x12);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x80))(param_1,0x41,1);
      if (iVar1 != 0) goto LAB_14f658a9b;
    }
    else {
      ERR_put_error(0x14,399,0xce,"ssl\\ssl_lib.c",0x133f,uVar2);
    }
    return 0;
  }
LAB_14f658a9b:
  *(undefined8 *)(param_1 + 0x750) = param_3;
  *(longlong *)(param_1 + 0x748) = param_2;
  return 1;
}

// SSL_set_ex_data @ 14f658b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x5b0);
  return;
}

// SSL_set_fd @ 14f658b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_fd(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f658b45;
  uVar1 = BIO_s_socket();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xc0,7,"ssl\\ssl_lib.c",0x54f,uVar3);
    return 0;
  }
  BIO_int_ctrl(lVar2,0x68,0,param_2);
  SSL_set_bio(param_1,lVar2,lVar2);
  return 1;
}

// SSL_set_generate_session_id @ 14f658bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_generate_session_id(longlong param_1,undefined8 param_2)

{
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x1738));
  *(undefined8 *)(param_1 + 0x528) = param_2;
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x1738));
  return 1;
}

// SSL_set_hostflags @ 14f658c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_hostflags(longlong param_1)

{
  X509_VERIFY_PARAM_set_hostflags(*(undefined8 *)(param_1 + 0xd0));
  return;
}

// SSL_set_info_callback @ 14f658c50

void SSL_set_info_callback(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x568) = param_2;
  return;
}

// SSL_set_not_resumable_session_callback @ 14f658c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_not_resumable_session_callback(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f658cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0xd0))(param_1,0x4f,param_2);
  return;
}

// SSL_set_num_tickets @ 14f658cc0

undefined8 SSL_set_num_tickets(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1740) = param_2;
  return 1;
}

// SSL_set_options @ 14f658ce0

uint SSL_set_options(longlong param_1,uint param_2)

{
  param_2 = param_2 | *(uint *)(param_1 + 0x5cc);
  *(uint *)(param_1 + 0x5cc) = param_2;
  return param_2;
}

// SSL_set_purpose @ 14f658d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_purpose(longlong param_1)

{
  X509_VERIFY_PARAM_set_purpose(*(undefined8 *)(param_1 + 0xd0));
  return;
}

// SSL_set_rfd @ 14f658de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_rfd(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f658df5;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
  }
  else {
    lVar2 = BIO_next();
  }
  if (lVar2 != 0) {
    iVar1 = BIO_method_type(lVar2);
    if (iVar1 == 0x505) {
      iVar1 = BIO_ctrl(lVar2,0x69,0);
      if (iVar1 == param_2) {
        BIO_up_ref(lVar2);
        goto LAB_14f658ea1;
      }
    }
  }
  uVar3 = BIO_s_socket();
  lVar2 = BIO_new(uVar3);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xc2,7,"ssl\\ssl_lib.c",0x577,uVar4);
    return 0;
  }
  BIO_int_ctrl(lVar2,0x68,0,param_2);
LAB_14f658ea1:
  BIO_free_all(*(undefined8 *)(param_1 + 0x10));
  *(longlong *)(param_1 + 0x10) = lVar2;
  return 1;
}

// SSL_set_session_id_context @ 14f658f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_session_id_context(longlong param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    ERR_put_error(0x14,0xda,0x111,"ssl\\ssl_lib.c",0x381);
    return 0;
  }
  *(ulonglong *)(param_1 + 0x4e0) = (ulonglong)param_3;
  memcpy((void *)(param_1 + 0x4e8),param_2,(ulonglong)param_3);
  return 1;
}

// SSL_set_ssl_method @ 14f658f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_set_ssl_method(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = 1;
  if (piVar1 != param_2) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*piVar1 == *param_2) {
      *(int **)(param_1 + 8) = param_2;
    }
    else {
      (**(code **)(piVar1 + 8))();
      *(int **)(param_1 + 8) = param_2;
      uVar3 = (**(code **)(param_2 + 4))(param_1);
    }
    if (lVar2 == *(longlong *)(piVar1 + 0xc)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0xc);
    }
    else if (lVar2 == *(longlong *)(piVar1 + 10)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 10);
    }
  }
  return uVar3;
}

// SSL_set_tmp_dh_callback @ 14f659010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_tmp_dh_callback(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f65902d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0xd0))(param_1,6,param_2);
  return;
}

// SSL_set_trust @ 14f659040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_trust(longlong param_1)

{
  X509_VERIFY_PARAM_set_trust(*(undefined8 *)(param_1 + 0xd0));
  return;
}

// SSL_set_verify @ 14f659070

void SSL_set_verify(longlong param_1,undefined4 param_2,longlong param_3)

{
  *(undefined4 *)(param_1 + 0x558) = param_2;
  if (param_3 != 0) {
    *(longlong *)(param_1 + 0x560) = param_3;
  }
  return;
}

// SSL_set_verify_depth @ 14f659090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_verify_depth(longlong param_1)

{
  X509_VERIFY_PARAM_set_depth(*(undefined8 *)(param_1 + 0xd0));
  return;
}

// SSL_set_wfd @ 14f6590d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_wfd(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6590e5;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (((lVar3 != 0) && (iVar1 = BIO_method_type(lVar3), iVar1 == 0x505)) &&
     (iVar1 = BIO_ctrl(lVar3,0x69,0), iVar1 == param_2)) {
    BIO_up_ref(lVar3);
    SSL_set0_wbio(param_1,lVar3);
    return 1;
  }
  uVar2 = BIO_s_socket();
  lVar3 = BIO_new(uVar2);
  if (lVar3 != 0) {
    BIO_int_ctrl(lVar3,0x68,0,param_2);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar4 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar4;
    }
    BIO_free_all(*(undefined8 *)(param_1 + 0x18));
    *(longlong *)(param_1 + 0x18) = lVar3;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar4 = BIO_push(*(longlong *)(param_1 + 0x20),lVar3);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
    }
    return 1;
  }
  ERR_put_error(0x14,0xc4,7,"ssl\\ssl_lib.c",0x562,uVar4);
  return 0;
}

// SSL_shutdown @ 14f6591e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_shutdown(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6591ec;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar3 = 0x82d;
    uVar2 = 0x114;
  }
  else {
    iVar1 = SSL_in_init();
    if (iVar1 == 0) {
      if ((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) {
        local_30 = ASYNC_get_current_job();
        if (local_30 == 0) {
          local_20 = 2;
          local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50);
          local_38 = param_1;
          local_28 = local_30;
          uVar2 = FUN_14f65c300(param_1,&local_38,FUN_14f65bbb0);
          return uVar2;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014f65927f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x50))(param_1);
      return uVar2;
    }
    uVar3 = 0x83f;
    uVar2 = 0x197;
  }
  ERR_put_error(0x14,0xe0,uVar2,"ssl\\ssl_lib.c",uVar3);
  return 0xffffffff;
}

// SSL_stateless @ 14f6592c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_stateless(longlong param_1)

{
  int iVar1;
  
  iVar1 = SSL_clear();
  if (iVar1 == 0) {
    return 0;
  }
  ERR_clear_error();
  **(uint **)(param_1 + 0xa8) = **(uint **)(param_1 + 0xa8) | 0x800;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    SSL_set_accept_state(param_1);
  }
  iVar1 = SSL_do_handshake(param_1);
  **(uint **)(param_1 + 0xa8) = **(uint **)(param_1 + 0xa8) & 0xfffff7ff;
  if ((0 < iVar1) && (*(int *)(param_1 + 0x728) != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x4d8) == 1) && (iVar1 = ossl_statem_in_error(param_1), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}

// SSL_use_psk_identity_hint @ 14f659380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_use_psk_identity_hint(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar4 = param_2;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    if (0x80 < (uVar2 & 0x7fffffff)) {
      ERR_put_error(0x14,0x111,0x92,"ssl\\ssl_lib.c",0x1104,0x14f659390);
      return 0;
    }
  }
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x200),"ssl\\ssl_lib.c",0x1107);
  if (param_2 == (char *)0x0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x200) = 0;
  }
  else {
    uVar3 = CRYPTO_strdup(param_2,"ssl\\ssl_lib.c",0x1109);
    *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x200) = uVar3;
    if (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x200) == 0) {
      return 0;
    }
  }
  return 1;
}

// SSL_verify_client_post_handshake @ 14f659490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_verify_client_post_handshake(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f65949c;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar3 = 0x160c;
      uVar2 = 0x11c;
    }
    else {
      iVar1 = SSL_is_init_finished(param_1);
      if (iVar1 == 0) {
        uVar3 = 0x1611;
        uVar2 = 0x79;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x788);
        if (iVar1 == 0) {
          uVar3 = 0x1617;
          uVar2 = 0x117;
        }
        else if (iVar1 == 2) {
          *(undefined4 *)(param_1 + 0x788) = 3;
          iVar1 = send_certificate_request(param_1);
          if (iVar1 != 0) {
            ossl_statem_set_in_init(param_1,1);
            return 1;
          }
          *(undefined4 *)(param_1 + 0x788) = 2;
          uVar2 = 0x11b;
          uVar3 = 0x162c;
        }
        else {
          if (iVar1 != 3) {
            if (iVar1 != 4) {
              ERR_put_error(0x14,0x268,0x44,"ssl\\ssl_lib.c",0x161b,uVar4);
              return 0;
            }
            ERR_put_error(0x14,0x268,0x11e,"ssl\\ssl_lib.c",0x1623,uVar4);
            return 0;
          }
          uVar3 = 0x1620;
          uVar2 = 0x11d;
        }
      }
    }
  }
  else {
    uVar3 = 0x1608;
    uVar2 = 0x10a;
  }
  ERR_put_error(0x14,0x268,uVar2,"ssl\\ssl_lib.c",uVar3,uVar4);
  return 0;
}

// SSL_version @ 14f659610

undefined4 SSL_version(undefined4 *param_1)

{
  return *param_1;
}

// SSL_want @ 14f659640

undefined4 SSL_want(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}

// SSL_write @ 14f659650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_write(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    ERR_put_error(0x14,0xd0,0x10f,"ssl\\ssl_lib.c",0x7c2);
    return -1;
  }
  iVar1 = ssl_write_internal(param_1,param_2,(longlong)param_3,local_res20);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}

// SSL_write_early_data @ 14f6596b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_write_early_data
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6596c8;
  uVar4 = *(undefined4 *)(param_1 + 0x84);
  switch(uVar4) {
  case 0:
    if (((*(int *)(param_1 + 0x38) == 0) && (iVar1 = SSL_in_before(param_1), iVar1 != 0)) &&
       (((*(longlong *)(param_1 + 0x508) != 0 &&
         (*(int *)(*(longlong *)(param_1 + 0x508) + 0x228) != 0)) ||
        (*(longlong *)(param_1 + 0x590) != 0)))) goto switchD_14f6596f9_caseD_1;
    uVar4 = 0x7e8;
    break;
  case 1:
switchD_14f6596f9_caseD_1:
    *(undefined4 *)(param_1 + 0x84) = 2;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      SSL_set_connect_state(param_1);
    }
    iVar1 = SSL_do_handshake(param_1);
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x84) = 1;
      return 0;
    }
  case 3:
    uVar2 = *(uint *)(param_1 + 0x5d0);
    *(undefined4 *)(param_1 + 0x84) = 4;
    *(uint *)(param_1 + 0x5d0) = uVar2 & 0xfffffffe;
    iVar1 = ssl_write_internal(param_1,param_2,param_3,local_res8);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *(uint *)(param_1 + 0x5d0) = *(uint *)(param_1 + 0x5d0) | uVar2 & 1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x84) = 3;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x84) = 5;
  case 5:
    uVar3 = statem_flush(param_1);
    if ((int)uVar3 != 1) {
      return 0;
    }
    *param_4 = param_3;
    *(undefined4 *)(param_1 + 0x84) = 3;
    return uVar3;
  default:
    uVar4 = 0x81e;
    break;
  case 10:
  case 0xc:
    *(undefined4 *)(param_1 + 0x84) = 6;
    uVar2 = ssl_write_internal(param_1);
    if (-1 < (int)uVar2) {
      if (uVar2 != 0) {
        BIO_ctrl(*(undefined8 *)(param_1 + 0x18),0xb,0);
      }
      *(undefined4 *)(param_1 + 0x84) = uVar4;
      return (ulonglong)uVar2;
    }
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    return 0;
  }
  ERR_put_error(0x14,0x20e,0x42,"ssl\\ssl_lib.c",uVar4,uVar5);
  return 0;
}

// SSL_write_ex @ 14f6598a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_write_ex(void)

{
  int iVar1;
  
  iVar1 = ssl_write_internal();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

// _vsnprintf_l @ 14f659900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl
_vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// _vsprintf_l @ 14f659980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl _vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,_DstBuf,0xffffffffffffffff,_Format,param_3,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// bytes_to_cipher_list @ 14f659a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bytes_to_cipher_list
          (undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,int param_5,
          int param_6)

{
  ulonglong uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 *puVar7;
  ulonglong _Size;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  iVar2 = param_5;
  if (param_2[1] == 0) {
    if (param_6 != 0) {
      ossl_statem_fatal(param_1,0x2f,0x207,0xb7,"ssl\\ssl_lib.c",0x1551);
      return 0;
    }
    ERR_put_error(0x14,0x207,0xb7,"ssl\\ssl_lib.c",0x1553);
    return 0;
  }
  _Size = (ulonglong)((param_5 != 0) + 2);
  if ((ulonglong)param_2[1] % _Size != 0) {
    if (param_6 != 0) {
      ossl_statem_fatal(param_1,0x32,0x207,0x97,"ssl\\ssl_lib.c",0x155a);
      return 0;
    }
    ERR_put_error(0x14,0x207,0x97,"ssl\\ssl_lib.c",0x155d);
    return 0;
  }
  lVar4 = OPENSSL_sk_new_null();
  lVar5 = OPENSSL_sk_new_null();
  if ((lVar4 == 0) || (lVar5 == 0)) {
    if (param_6 == 0) {
      uVar9 = 0x1568;
      goto LAB_14f659d5b;
    }
    uVar10 = 0x1566;
  }
  else {
LAB_14f659bc0:
    do {
      do {
        do {
          uVar1 = param_2[1];
          if (uVar1 < _Size) {
            if (uVar1 == 0) {
              if (param_3 == (longlong *)0x0) {
                OPENSSL_sk_free(lVar4);
              }
              else {
                *param_3 = lVar4;
              }
              if (param_4 != (longlong *)0x0) {
                *param_4 = lVar5;
                return 1;
              }
              OPENSSL_sk_free(lVar5);
              return 1;
            }
            if (param_6 != 0) {
              ossl_statem_fatal(param_1,0x32,0x207,0x10f,"ssl\\ssl_lib.c",0x1586);
              goto LAB_14f659d70;
            }
            uVar9 = 0x1588;
            uVar8 = 0x10f;
            goto LAB_14f659d61;
          }
          _Src = (void *)*param_2;
          memcpy(&param_5,_Src,_Size);
          *param_2 = (longlong)_Src + _Size;
          param_2[1] = uVar1 - _Size;
        } while ((iVar2 != 0) && ((char)param_5 != '\0'));
        puVar7 = &param_5;
        if (iVar2 != 0) {
          puVar7 = (undefined4 *)((longlong)&param_5 + 1);
        }
        piVar6 = (int *)ssl_get_cipher_by_char(param_1,puVar7,1);
      } while (piVar6 == (int *)0x0);
      if (*piVar6 != 0) {
        iVar3 = OPENSSL_sk_push(lVar4,piVar6);
        if (iVar3 == 0) break;
        if (*piVar6 != 0) goto LAB_14f659bc0;
      }
      iVar3 = OPENSSL_sk_push(lVar5,piVar6);
    } while (iVar3 != 0);
    if (param_6 == 0) {
      uVar9 = 0x157e;
LAB_14f659d5b:
      uVar8 = 0x41;
LAB_14f659d61:
      ERR_put_error(0x14,0x207,uVar8,"ssl\\ssl_lib.c",uVar9);
      goto LAB_14f659d70;
    }
    uVar10 = 0x157c;
  }
  ossl_statem_fatal(param_1,0x50,0x207,0x41,"ssl\\ssl_lib.c",uVar10);
LAB_14f659d70:
  OPENSSL_sk_free(lVar4);
  OPENSSL_sk_free(lVar5);
  return 0;
}

// FUN_14f659db0 @ 14f659db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f659db0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_1 != 0) {
    iVar4 = 0;
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      do {
        lVar2 = OPENSSL_sk_value(param_1,iVar4);
        iVar4 = iVar4 + 1;
        iVar1 = iVar3 + 1;
        if (0x303 < *(int *)(lVar2 + 0x2c)) {
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        iVar1 = OPENSSL_sk_num(param_1);
      } while (iVar4 < iVar1);
    }
    return iVar3;
  }
  return 0;
}

// FUN_14f659e30 @ 14f659e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f659e30(longlong param_1)

{
  ssl_clear_cipher_ctx();
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x450));
  *(undefined8 *)(param_1 + 0x450) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x480));
  *(undefined8 *)(param_1 + 0x480) = 0;
  return;
}

// FUN_14f659e90 @ 14f659e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f659e90(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_res8;
  
  uVar7 = 0;
  uVar9 = 0;
  uVar8 = uVar7;
  uVar4 = uVar7;
  uVar6 = uVar7;
  uVar3 = uVar7;
  if ((((*(longlong *)(param_1 + 0x668) != 0) &&
       (uVar4 = 0, uVar6 = uVar9, uVar3 = 0, *(longlong *)(param_1 + 0x670) != 0)) &&
      (local_res8 = *(longlong *)(param_1 + 0x668),
      uVar3 = d2i_OCSP_RESPONSE(0,&local_res8,*(undefined4 *)(param_1 + 0x670)), uVar3 != 0)) &&
     ((uVar4 = OCSP_response_get1_basic(uVar3), uVar8 = 0, uVar4 != 0 &&
      (iVar1 = OCSP_resp_count(uVar4), uVar8 = uVar7, uVar6 = uVar7, 0 < iVar1)))) {
    do {
      lVar5 = OCSP_resp_get0(uVar4,uVar7);
      if (lVar5 != 0) {
        uVar6 = OCSP_SINGLERESP_get1_ext_d2i(lVar5,0x3ba,0,0);
        uVar2 = FUN_14f65a0b0(param_1 + 0x758,uVar6);
        uVar8 = (ulonglong)uVar2;
        if ((int)uVar2 < 0) break;
      }
      uVar2 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar2;
      iVar1 = OCSP_resp_count(uVar4);
    } while ((int)uVar2 < iVar1);
  }
  SCT_LIST_free(uVar6);
  OCSP_BASICRESP_free(uVar4);
  OCSP_RESPONSE_free(uVar3);
  return uVar8;
}

// FUN_14f659fb0 @ 14f659fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f659fb0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x648);
  if (local_res8 != 0) {
    uVar2 = o2i_SCT_LIST(0,&local_res8,*(undefined2 *)(param_1 + 0x650));
    uVar1 = FUN_14f65a0b0(param_1 + 0x758,uVar2,1);
    SCT_LIST_free(uVar2);
    return uVar1;
  }
  return 0;
}

// FUN_14f65a030 @ 14f65a030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f65a030(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8), lVar1 != 0)) {
    uVar3 = X509_get_ext_d2i(lVar1,0x3b7,0,0);
    uVar2 = FUN_14f65a0b0(param_1 + 0x758,uVar3,2);
    SCT_LIST_free(uVar3);
    return uVar2;
  }
  return 0;
}

// FUN_14f65a0b0 @ 14f65a0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f65a0b0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f65a0d0;
  iVar3 = 0;
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(0x14,0x159,0x41,"ssl\\ssl_lib.c",0x1293,uVar4);
      return -1;
    }
  }
  lVar2 = OPENSSL_sk_pop(param_2);
  while( true ) {
    if (lVar2 == 0) {
      return iVar3;
    }
    iVar1 = SCT_set_source(lVar2,param_3);
    if ((iVar1 != 1) || (iVar1 = OPENSSL_sk_push(*param_1,lVar2), iVar1 < 1)) break;
    iVar3 = iVar3 + 1;
    lVar2 = OPENSSL_sk_pop(param_2);
  }
  if (lVar2 != 0) {
    OPENSSL_sk_push(param_2,lVar2);
  }
  return -1;
}

// FUN_14f65a1a0 @ 14f65a1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65a1a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f65a1b5;
  iVar4 = 0;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = OPENSSL_sk_num(param_2);
  }
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_2,iVar4);
      iVar2 = SCT_get_validation_status(uVar3);
      if (iVar2 == 2) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  ERR_put_error(0x14,0x15d,0xd8,"ssl\\ssl_lib.c",0x1330,uVar5);
  return 0;
}

// FUN_14f65a250 @ 14f65a250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65a250(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f65a25c;
  if (*param_1 != 0) {
    return 1;
  }
  lVar1 = CRYPTO_zalloc(0x18,"ssl\\ssl_lib.c");
  lVar2 = CRYPTO_zalloc(3,"ssl\\ssl_lib.c",0x91);
  if ((lVar2 != 0) && (lVar1 != 0)) {
    uVar4 = 0;
    do {
      if (*(int *)((longlong)&DAT_1534791d4 + uVar4) != 0) {
        uVar5 = OBJ_nid2sn();
        lVar3 = EVP_get_digestbyname(uVar5);
        if (lVar3 != 0) {
          *(longlong *)(lVar1 + (ulonglong)(byte)(&DAT_1534791d0)[uVar4] * 8) = lVar3;
          *(undefined1 *)((ulonglong)(byte)(&DAT_1534791d0)[uVar4] + lVar2) =
               (&DAT_1534791d1)[uVar4];
        }
      }
      uVar4 = uVar4 + 8;
    } while (uVar4 < 0x18);
    *param_1 = lVar1;
    param_1[1] = lVar2;
    *(undefined1 *)(param_1 + 2) = 2;
    return 1;
  }
  CRYPTO_free(lVar2,"ssl\\ssl_lib.c",0x94);
  CRYPTO_free(lVar1,"ssl\\ssl_lib.c",0x95);
  ERR_put_error(0x14,0x15b,0x41,"ssl\\ssl_lib.c",0x96,uVar5);
  return 0;
}

// FUN_14f65a3a0 @ 14f65a3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65a3a0(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"ssl\\ssl_lib.c",0xae);
  *param_1 = 0;
  CRYPTO_free(param_1[1],"ssl\\ssl_lib.c",0xb1);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

// FUN_14f65a400 @ 14f65a400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65a400(longlong param_1)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),FUN_14f65c990);
  *(undefined8 *)(param_1 + 8) = 0;
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),X509_free);
  *(undefined8 *)(param_1 + 0x10) = 0;
  X509_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  return;
}

// FUN_14f65a470 @ 14f65a470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65a470(longlong *param_1,longlong param_2,byte param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  if ((param_3 == 0) && (param_2 != 0)) {
    ERR_put_error(0x14,0x189,0xad,"ssl\\ssl_lib.c",0xf4);
    return 0;
  }
  if (*(byte *)(param_1 + 2) < param_3) {
    lVar1 = CRYPTO_realloc(*param_1,(param_3 + 1) * 8,"ssl\\ssl_lib.c",0xfd);
    if (lVar1 == 0) {
      uVar6 = 0xff;
    }
    else {
      *param_1 = lVar1;
      lVar2 = CRYPTO_realloc(param_1[1],param_3 + 1,"ssl\\ssl_lib.c",0x104);
      if (lVar2 != 0) {
        uVar4 = (ulonglong)(*(byte *)(param_1 + 2) + 1);
        param_1[1] = lVar2;
        if (uVar4 < param_3) {
          do {
            *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
            *(undefined1 *)(uVar4 + lVar2) = 0;
            uVar4 = uVar4 + 1;
          } while ((longlong)uVar4 < (longlong)(ulonglong)param_3);
        }
        *(byte *)(param_1 + 2) = param_3;
        goto LAB_14f65a594;
      }
      uVar6 = 0x106;
    }
    ERR_put_error(0x14,0x189,0x41,"ssl\\ssl_lib.c",uVar6);
    uVar3 = 0xffffffff;
  }
  else {
LAB_14f65a594:
    *(longlong *)(*param_1 + (ulonglong)param_3 * 8) = param_2;
    uVar5 = 0;
    if (param_2 != 0) {
      uVar5 = param_4;
    }
    *(undefined1 *)((ulonglong)param_3 + param_1[1]) = uVar5;
    uVar3 = 1;
  }
  return uVar3;
}

// FUN_14f65a5e0 @ 14f65a5e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f65a5e0(longlong *param_1,byte param_2,byte param_3,byte param_4,void *param_5,
             ulonglong param_6)

{
  ulonglong _Size;
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  void *_Dst;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  void *local_res8;
  undefined4 uVar8;
  undefined8 local_38 [2];
  
  _Size = param_6;
  if (param_1[1] == 0) {
    ERR_put_error(0x14,0x18a,0xaf,"ssl\\ssl_lib.c",0x12e);
    return 0xffffffff;
  }
  if (((int)param_6 < 0) || (param_6 != (longlong)(int)param_6)) {
    ERR_put_error(0x14,0x18a,0xbd,"ssl\\ssl_lib.c",0x133);
    return 0;
  }
  if (3 < param_2) {
    ERR_put_error(0x14,0x18a,0xb8,"ssl\\ssl_lib.c",0x138);
    return 0;
  }
  if (1 < param_3) {
    ERR_put_error(0x14,0x18a,0xca,"ssl\\ssl_lib.c",0x13d);
    return 0;
  }
  if (param_4 != 0) {
    if ((*(byte *)((longlong *)*param_1 + 2) < param_4) ||
       (*(longlong *)(*(longlong *)*param_1 + (ulonglong)param_4 * 8) == 0)) {
      ERR_put_error(0x14,0x18a,200,"ssl\\ssl_lib.c",0x144);
      return 0;
    }
    iVar1 = EVP_MD_size();
    if (_Size != (longlong)iVar1) {
      ERR_put_error(0x14,0x18a,0xc0,"ssl\\ssl_lib.c",0x14a);
      return 0;
    }
  }
  if (param_5 == (void *)0x0) {
    ERR_put_error(0x14,0x18a,0xcb,"ssl\\ssl_lib.c",0x14e);
    return 0;
  }
  pbVar4 = (byte *)CRYPTO_zalloc(0x20,"ssl\\ssl_lib.c",0x152);
  if (pbVar4 == (byte *)0x0) {
    uVar8 = 0x153;
LAB_14f65a7e6:
    ERR_put_error(0x14,0x18a,0x41,"ssl\\ssl_lib.c",uVar8);
    return 0xffffffff;
  }
  *pbVar4 = param_2;
  pbVar4[1] = param_3;
  pbVar4[2] = param_4;
  _Dst = (void *)CRYPTO_malloc(_Size,"ssl\\ssl_lib.c",0x15a);
  *(void **)(pbVar4 + 8) = _Dst;
  if (_Dst == (void *)0x0) {
    FUN_14f65c990(pbVar4);
    uVar8 = 0x15d;
    goto LAB_14f65a7e6;
  }
  memcpy(_Dst,param_5,_Size);
  iVar1 = 0;
  *(ulonglong *)(pbVar4 + 0x10) = _Size;
  if (param_4 != 0) goto LAB_14f65a892;
  local_res8 = param_5;
  param_6 = 0;
  local_38[0] = 0;
  if (param_3 == 0) {
    lVar5 = d2i_X509(&param_6,&local_res8,_Size & 0xffffffff);
    if (((lVar5 == 0) || (local_res8 < param_5)) ||
       (_Size != (longlong)local_res8 - (longlong)param_5)) {
      FUN_14f65c990(pbVar4);
      uVar8 = 0x16e;
    }
    else {
      lVar5 = X509_get0_pubkey(param_6);
      if (lVar5 != 0) {
        if ((1 << (param_2 & 0x1f) & 5U) == 0) {
          X509_free(param_6);
          goto LAB_14f65a892;
        }
        if (param_1[2] == 0) {
          lVar5 = OPENSSL_sk_new_null();
          param_1[2] = lVar5;
          if (lVar5 == 0) goto LAB_14f65aa25;
        }
        iVar3 = OPENSSL_sk_push(param_1[2],param_6);
        if (iVar3 == 0) {
LAB_14f65aa25:
          ERR_put_error(0x14,0x18a,0x41,"ssl\\ssl_lib.c",0x186);
          X509_free(param_6);
          FUN_14f65c990(pbVar4);
          return 0xffffffff;
        }
        goto LAB_14f65a892;
      }
      FUN_14f65c990(pbVar4);
      uVar8 = 0x173;
    }
    uVar7 = 0xb4;
  }
  else {
    if (param_3 != 1) {
LAB_14f65a892:
      iVar2 = OPENSSL_sk_num(param_1[1]);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          iVar1 = iVar3;
          pbVar6 = (byte *)OPENSSL_sk_value(param_1[1],iVar1);
          if ((*pbVar6 <= param_2) &&
             ((*pbVar6 < param_2 ||
              ((pbVar6[1] <= param_3 &&
               ((pbVar6[1] < param_3 ||
                (*(byte *)((ulonglong)pbVar6[2] + *(longlong *)(*param_1 + 8)) <=
                 *(byte *)((ulonglong)param_4 + *(longlong *)(*param_1 + 8)))))))))) break;
          iVar1 = iVar1 + 1;
          iVar3 = iVar1;
        } while (iVar1 < iVar2);
      }
      iVar1 = OPENSSL_sk_insert(param_1[1],pbVar4,iVar1);
      if (iVar1 == 0) {
        FUN_14f65c990(pbVar4);
        ERR_put_error(0x14,0x18a,0x41,"ssl\\ssl_lib.c",0x1c3);
        return 0xffffffff;
      }
      *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1 << (param_2 & 0x1f);
      return 1;
    }
    lVar5 = d2i_PUBKEY(local_38,&local_res8,_Size & 0xffffffff);
    if (((lVar5 != 0) && (param_5 <= local_res8)) &&
       (_Size == (longlong)local_res8 - (longlong)param_5)) {
      if (param_2 == 2) {
        *(undefined8 *)(pbVar4 + 0x18) = local_38[0];
      }
      else {
        EVP_PKEY_free(local_38[0]);
      }
      goto LAB_14f65a892;
    }
    FUN_14f65c990(pbVar4);
    uVar7 = 0xc9;
    uVar8 = 0x191;
  }
  ERR_put_error(0x14,0x18a,uVar7,"ssl\\ssl_lib.c",uVar8);
  return 0;
}

// FUN_14f65aae0 @ 14f65aae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65aae0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
    return 1;
  }
  lVar2 = OPENSSL_sk_new_null();
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      do {
        uVar3 = OPENSSL_sk_value(param_2,iVar5);
        lVar4 = X509_NAME_dup(uVar3);
        if (lVar4 == 0) {
          OPENSSL_sk_pop_free(lVar2,X509_NAME_free);
          return 0;
        }
        iVar1 = OPENSSL_sk_insert(lVar2,lVar4,iVar5);
        if (iVar1 == 0) {
          X509_NAME_free(lVar4);
          OPENSSL_sk_pop_free(lVar2,X509_NAME_free);
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(param_2);
      } while (iVar5 < iVar1);
    }
    *param_1 = lVar2;
    uVar3 = 1;
  }
  return uVar3;
}

// FUN_14f65abd0 @ 14f65abd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65abd0(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f65abf0 @ 14f65abf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65abf0(void)

{
  OPENSSL_LH_new();
  return;
}

// FUN_14f65ac10 @ 14f65ac10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65ac10(void)

{
  OPENSSL_LH_num_items();
  return;
}

// FUN_14f65ac30 @ 14f65ac30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65ac30(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// FUN_14f65ac50 @ 14f65ac50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f65ac50(char *param_1,longlong param_2,longlong param_3,ulonglong param_4,longlong param_5,
             ulonglong param_6)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x598) + 0x388) == 0) {
    return 1;
  }
  uVar2 = 0;
  cVar1 = *param_1;
  uVar9 = 0;
  uVar10 = uVar9;
  pcVar6 = param_1;
  while ((cVar1 != '\0' && (uVar2 = (uint)uVar10, uVar2 < 0x80000000))) {
    pcVar6 = pcVar6 + 1;
    uVar2 = uVar2 + 1;
    cVar1 = *pcVar6;
    uVar10 = (ulonglong)uVar2;
  }
  lVar3 = (param_4 + param_6) * 2 + 3 + (ulonglong)(uVar2 & 0x7fffffff);
  lVar4 = CRYPTO_malloc(lVar3,"ssl\\ssl_lib.c",0x14af);
  if (lVar4 == 0) {
    ossl_statem_fatal(param_2,0x50,500,0x41,"ssl\\ssl_lib.c",0x14b1);
    uVar5 = 0;
  }
  else {
    lVar7 = lVar4 - (longlong)param_1;
    do {
      cVar1 = *param_1;
      param_1[lVar7] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined1 *)(lVar4 + (ulonglong)(uVar2 & 0x7fffffff));
    *puVar8 = 0x20;
    pcVar6 = puVar8 + 1;
    uVar10 = uVar9;
    if (param_4 != 0) {
      do {
        sprintf(pcVar6,"%02x",(ulonglong)*(byte *)(uVar10 + param_3));
        pcVar6 = pcVar6 + 2;
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_4);
    }
    *pcVar6 = ' ';
    pcVar6 = pcVar6 + 1;
    if (param_6 != 0) {
      do {
        sprintf(pcVar6,"%02x",(ulonglong)*(byte *)(uVar9 + param_5));
        pcVar6 = pcVar6 + 2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_6);
    }
    *pcVar6 = '\0';
    (**(code **)(*(longlong *)(param_2 + 0x598) + 0x388))(param_2,lVar4);
    CRYPTO_clear_free(lVar4,lVar3,"ssl\\ssl_lib.c",0x14c6);
    uVar5 = 1;
  }
  return uVar5;
}

// FUN_14f65ae40 @ 14f65ae40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65ae40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f65ae60 @ 14f65ae60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65ae60(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f65ae80 @ 14f65ae80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65ae80(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f65aea0 @ 14f65aea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65aea0(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f65aec0 @ 14f65aec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65aec0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f65aee0 @ 14f65aee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65aee0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f65af00 @ 14f65af00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65af00(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f65af20 @ 14f65af20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65af20(void)

{
  OPENSSL_sk_dup();
  return;
}

// FUN_14f65af40 @ 14f65af40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65af40(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f65af60 @ 14f65af60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65af60(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f65af80 @ 14f65af80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65af80(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f65afa0 @ 14f65afa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65afa0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f65afc0 @ 14f65afc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65afc0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f65afe0 @ 14f65afe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65afe0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f65b000 @ 14f65b000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b000(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f65b020 @ 14f65b020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b020(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f65b040 @ 14f65b040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b040(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f65b060 @ 14f65b060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b060(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f65b080 @ 14f65b080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b080(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f65b0a0 @ 14f65b0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b0a0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f65b0c0 @ 14f65b0c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b0c0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f65b0e0 @ 14f65b0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b0e0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f65b100 @ 14f65b100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b100(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f65b120 @ 14f65b120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b120(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f65b140 @ 14f65b140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b140(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f65b160 @ 14f65b160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b160(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f65b180 @ 14f65b180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b180(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f65b1a0 @ 14f65b1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b1a0(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f65b1c0 @ 14f65b1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b1c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f65b1e0 @ 14f65b1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b1e0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f65b200 @ 14f65b200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b200(void)

{
  OPENSSL_sk_value();
  return;
}

// ssl_bad_method @ 14f65b220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_bad_method(void)

{
  ERR_put_error(0x14,0xa0,0x42,"ssl\\ssl_lib.c",0xec0);
  return 0;
}

// ssl_cache_cipherlist @ 14f65b260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cache_cipherlist(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  if (param_2[1] == 0) {
    ossl_statem_fatal(param_1,0x2f,0x208,0xb7,"ssl\\ssl_lib.c",0x14f7);
    return 0;
  }
  uVar8 = (ulonglong)((param_3 != 0) + 2);
  if ((ulonglong)param_2[1] % uVar8 == 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\ssl_lib.c",0x1501);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
    if (param_3 == 0) {
      iVar2 = FUN_14f653240(param_2,*(longlong *)(param_1 + 0xa8) + 0x2a8,
                            *(longlong *)(param_1 + 0xa8) + 0x2b0);
      if (iVar2 == 0) {
        uVar9 = 0x152f;
        uVar7 = 0x44;
        goto LAB_14f65b498;
      }
    }
    else {
      pcVar6 = (char *)*param_2;
      lVar4 = param_2[1];
      puVar3 = (undefined2 *)
               CRYPTO_malloc(((ulonglong)param_2[1] / uVar8) * 2,"ssl\\ssl_lib.c",0x1512);
      *(undefined2 **)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = puVar3;
      if (puVar3 == (undefined2 *)0x0) {
        uVar9 = 0x1516;
        uVar7 = 0x41;
LAB_14f65b498:
        uVar5 = 0x50;
        goto LAB_14f65b49d;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
      for (; lVar4 != 0; lVar4 = lVar4 + -3) {
        if (*pcVar6 == '\0') {
          if (lVar4 - 1U < 2) {
LAB_14f65b405:
            ossl_statem_fatal(param_1,0x32,0x208,0xf0,"ssl\\ssl_lib.c",0x1523);
            CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\ssl_lib.c",
                        0x1524);
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = 0;
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
            return 0;
          }
          *puVar3 = *(undefined2 *)(pcVar6 + 1);
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2b0);
          *plVar1 = *plVar1 + 2;
        }
        else if (lVar4 - 1U < 2) goto LAB_14f65b405;
        pcVar6 = pcVar6 + 3;
        puVar3 = puVar3 + 1;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0x32;
    uVar9 = 0x14fd;
    uVar7 = 0x97;
LAB_14f65b49d:
    ossl_statem_fatal(param_1,uVar5,0x208,uVar7,"ssl\\ssl_lib.c",uVar9);
    uVar5 = 0;
  }
  return uVar5;
}

// FUN_14f65b4c0 @ 14f65b4c0

undefined8 FUN_14f65b4c0(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = false;
  bVar2 = false;
  if ((param_1 == 0x100) || ((param_1 & 0xffffff00) == 0xfe00)) {
    bVar1 = true;
  }
  if ((param_2 == 0x100) || ((param_2 & 0xffffff00) == 0xfe00)) {
    bVar2 = true;
  }
  if (bVar1) {
    if (!bVar2) {
      if (param_2 != 0) {
        return 0;
      }
LAB_14f65b50c:
      if (bVar1) {
        return 1;
      }
      goto LAB_14f65b511;
    }
  }
  else if (!bVar2) goto LAB_14f65b50c;
  if (bVar1) {
    return 1;
  }
  if (param_1 != 0) {
    return 0;
  }
LAB_14f65b511:
  if (!bVar2) {
    uVar3 = 0x300;
    if (param_1 != 0) {
      uVar3 = param_1;
    }
    uVar4 = 0x304;
    if (param_2 != 0) {
      uVar4 = param_2;
    }
    if (((uVar3 != 0x300) && ((int)uVar3 < 0x301)) && (0x2ff < (int)uVar4)) {
      return 0;
    }
  }
  return 1;
}

// ssl_check_srvr_ecc_cert_and_alg @ 14f65b560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_check_srvr_ecc_cert_and_alg(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0xa8) + 0x238) + 0x20) & 8) != 0) {
    cVar1 = X509_get_key_usage();
    if (-1 < cVar1) {
      ERR_put_error(0x14,0x117,0x13e,"ssl\\ssl_lib.c",0xda1);
      return 0;
    }
  }
  return 1;
}

// ssl_clear_cipher_ctx @ 14f65b630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_clear_cipher_ctx(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x438) != 0) {
    EVP_CIPHER_CTX_free();
    *(undefined8 *)(param_1 + 0x438) = 0;
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    EVP_CIPHER_CTX_free();
    *(undefined8 *)(param_1 + 0x468) = 0;
  }
  COMP_CTX_free(*(undefined8 *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x460) = 0;
  COMP_CTX_free(*(undefined8 *)(param_1 + 0x458));
  *(undefined8 *)(param_1 + 0x458) = 0;
  return;
}

// ssl_clear_hash_ctx @ 14f65b6b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_clear_hash_ctx(undefined8 *param_1)

{
  EVP_MD_CTX_free(*param_1);
  *param_1 = 0;
  return;
}

// FUN_14f65b6e0 @ 14f65b6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65b6e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x14f65b6f0;
  if ((param_2 == -0xd8) || (iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 0xe0)), iVar2 < 1)) {
    return 1;
  }
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 0xe0));
  plVar1 = (longlong *)(param_1 + 0xd8);
  FUN_14f65a400(plVar1);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *plVar1 = *(longlong *)(param_1 + 0x598) + 0x358;
  lVar4 = OPENSSL_sk_new_reserve(0,iVar2);
  *(longlong *)(param_1 + 0xe0) = lVar4;
  if (lVar4 == 0) {
    ERR_put_error(0x14,0x193,0x41,"ssl\\ssl_lib.c",CONCAT44(uVar7,0xe0),uVar8);
LAB_14f65b796:
    uVar8 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar2) {
      do {
        puVar5 = (undefined1 *)OPENSSL_sk_value(*(undefined8 *)(param_2 + 0xe0),iVar6);
        iVar3 = FUN_14f65a5e0(plVar1,*puVar5,puVar5[1],puVar5[2],*(undefined8 *)(puVar5 + 8),
                              *(undefined8 *)(puVar5 + 0x10));
        if (iVar3 < 1) goto LAB_14f65b796;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    uVar8 = 1;
  }
  return uVar8;
}

// FUN_14f65b820 @ 14f65b820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65b820(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f65b837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(*param_1);
  return;
}

// ssl_free_wbio_buffer @ 14f65b850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_free_wbio_buffer(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    BIO_free(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 1;
}

// ssl_get_ciphers_by_id @ 14f65b8a0

longlong ssl_get_ciphers_by_id(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x120), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x10), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}

// ssl_get_max_send_fragment @ 14f65b8d0

int ssl_get_max_send_fragment(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) &&
     (cVar1 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x240), (byte)(cVar1 - 1U) < 4)) {
    return 0x200 << (cVar1 - 1U & 0x1f);
  }
  return *(int *)(param_1 + 0x5f8);
}

// ssl_get_server_cert_serverinfo @ 14f65b910

undefined8 ssl_get_server_cert_serverinfo(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  *param_3 = 0;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
    *param_2 = *(longlong *)(lVar1 + 0x18);
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
    return 1;
  }
  return 0;
}

// ssl_get_split_send_fragment @ 14f65b950

ulonglong ssl_get_split_send_fragment(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((((*(longlong *)(param_1 + 0x508) == 0) ||
       (cVar1 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x240), 3 < (byte)(cVar1 - 1U))) ||
      (uVar2 = (ulonglong)(uint)(0x200 << (cVar1 - 1U & 0x1f)),
      *(ulonglong *)(param_1 + 0x5f0) <= uVar2)) &&
     (uVar2 = *(ulonglong *)(param_1 + 0x5f8), *(ulonglong *)(param_1 + 0x5f0) <= uVar2)) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x5f0);
  }
  return uVar2;
}

// ssl_handshake_hash @ 14f65b9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_handshake_hash(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4
                           )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  lVar5 = 0;
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8);
  uVar3 = EVP_MD_CTX_md(uVar6);
  iVar1 = EVP_MD_size(uVar3);
  if ((iVar1 < 0) || (param_3 < (ulonglong)(longlong)iVar1)) {
    uVar6 = CONCAT44(uVar7,0x11e2);
    lVar4 = lVar5;
  }
  else {
    lVar4 = EVP_MD_CTX_new();
    if (lVar4 == 0) {
      uVar6 = CONCAT44(uVar7,0x11e9);
    }
    else {
      iVar2 = EVP_MD_CTX_copy_ex(lVar4,uVar6);
      if (iVar2 != 0) {
        iVar2 = EVP_DigestFinal_ex(lVar4,param_2,0);
        if (0 < iVar2) {
          *param_4 = (longlong)iVar1;
          lVar5 = 1;
          goto LAB_14f65ba77;
        }
      }
      uVar6 = CONCAT44(uVar7,0x11f0);
    }
  }
  ossl_statem_fatal(param_1,0x50,0x230,0x44,"ssl\\ssl_lib.c",uVar6);
LAB_14f65ba77:
  EVP_MD_CTX_free(lVar4);
  return lVar5;
}

// ssl_init_wbio_buffer @ 14f65baf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_init_wbio_buffer(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f65bafc;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return 1;
  }
  uVar2 = BIO_f_buffer();
  lVar3 = BIO_new(uVar2);
  if (lVar3 != 0) {
    iVar1 = BIO_int_ctrl(lVar3,0x75,1);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x20) = lVar3;
      uVar4 = BIO_push(lVar3,*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      return 1;
    }
  }
  BIO_free(lVar3);
  ERR_put_error(0x14,0xb8,7,"ssl\\ssl_lib.c",0xfcc,uVar4);
  return 0;
}

// FUN_14f65bbb0 @ 14f65bbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65bbb0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[3];
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (iVar1 != 2) {
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00014f65bbeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)param_1[4])(lVar2);
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f65bbfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)param_1[4])(lVar2,param_1[1],param_1[2],lVar2 + 0x1708);
  return uVar3;
}

// ssl_log_rsa_client_key_exchange @ 14f65bc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_log_rsa_client_key_exchange
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 < 8) {
    ossl_statem_fatal(param_1,0x50,499,0x44,"ssl\\ssl_lib.c",0x14d3);
    return 0;
  }
  uVar1 = FUN_14f65ac50(&s_RSA,param_1,param_2,8,param_4,param_5,0x14f65bc1a);
  return uVar1;
}

// ssl_log_secret @ 14f65bc90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_log_secret(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14f65ac50(param_2,param_1,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20,param_3,param_4,
                0x14f65bc9a);
  return;
}

// FUN_14f65bce0 @ 14f65bce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65bce0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f65bcfa;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    ERR_put_error(0x14,0x20a,0x114,"ssl\\ssl_lib.c",0x75b);
    uVar2 = 0xffffffff;
  }
  else if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
    if (((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) && (lVar1 = ASYNC_get_current_job(), lVar1 == 0)
       ) {
      local_20 = 0;
      local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x40);
      local_38 = param_1;
      local_30 = param_2;
      local_28 = param_3;
      uVar2 = FUN_14f65c300(param_1,&local_38,FUN_14f65bbb0);
      *param_4 = *(undefined8 *)(param_1 + 0x1708);
      return uVar2;
    }
    uVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ssl_protocol_to_string @ 14f65bdd0

char * ssl_protocol_to_string(int param_1)

{
  if (param_1 < 0x304) {
    if (param_1 == 0x303) {
      return "TLSv1.2";
    }
    if (param_1 == 0x100) {
      return "DTLSv0.9";
    }
    if (param_1 == 0x300) {
      return "SSLv3";
    }
    if (param_1 == 0x301) {
      return "TLSv1";
    }
    if (param_1 == 0x302) {
      return "TLSv1.1";
    }
  }
  else {
    if (param_1 == 0x304) {
      return "TLSv1.3";
    }
    if (param_1 == 0xfefd) {
      return "DTLSv1.2";
    }
    if (param_1 == 0xfeff) {
      return "DTLSv1";
    }
  }
  return "unknown";
}

// ssl_read_internal @ 14f65be60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_read_internal(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f65be7a;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    ERR_put_error(0x14,0x20b,0x114,"ssl\\ssl_lib.c",0x6d7);
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
      if ((*(int *)(param_1 + 0x84) != 1) && (*(int *)(param_1 + 0x84) != 8)) {
        ossl_statem_check_finish_init(param_1,0);
        if (((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) &&
           (lVar1 = ASYNC_get_current_job(), lVar1 == 0)) {
          local_20 = 0;
          local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38);
          local_38 = param_1;
          local_30 = param_2;
          local_28 = param_3;
          uVar2 = FUN_14f65c300(param_1,&local_38,FUN_14f65bbb0);
          *param_4 = *(undefined8 *)(param_1 + 0x1708);
          return uVar2;
        }
        uVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x38))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      ERR_put_error(0x14,0x20b,0x42,"ssl\\ssl_lib.c",0x6e2);
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ssl_replace_hash @ 14f65bf90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_replace_hash(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  EVP_MD_CTX_free(*param_1);
  *param_1 = 0;
  lVar2 = EVP_MD_CTX_new();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    if (param_2 != 0) {
      iVar1 = EVP_DigestInit_ex(lVar2,param_2,0);
      if (iVar1 < 1) goto LAB_14f65bfea;
    }
    return *param_1;
  }
LAB_14f65bfea:
  EVP_MD_CTX_free(*param_1);
  *param_1 = 0;
  return 0;
}

// FUN_14f65c010 @ 14f65c010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f65c010(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_1 == *param_2) && (*(size_t *)(param_1 + 0x54) == *(size_t *)(param_2 + 0x54))) {
    iVar1 = memcmp(param_1 + 0x56,param_2 + 0x56,*(size_t *)(param_1 + 0x54));
    return iVar1;
  }
  return 1;
}

// FUN_14f65c060 @ 14f65c060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f65c060(longlong param_1)

{
  undefined4 *_Src;
  undefined4 local_res8 [8];
  
  _Src = (undefined4 *)(param_1 + 0x158);
  if (*(ulonglong *)(param_1 + 0x150) < 4) {
    local_res8[0] = 0;
    memcpy(local_res8,_Src,*(ulonglong *)(param_1 + 0x150));
    _Src = local_res8;
  }
  return *_Src;
}

// ssl_set_masks @ 14f65c0c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_set_masks(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x122);
  lVar2 = *(longlong *)(param_1 + 0x2a);
  if (lVar1 != 0) {
    if (((*(longlong *)(lVar1 + 8) != 0) || (*(longlong *)(lVar1 + 0x10) != 0)) ||
       (iVar9 = 0, *(int *)(lVar1 + 0x18) != 0)) {
      iVar9 = 1;
    }
    uVar8 = *(uint *)(lVar2 + 0x310) & 1;
    if ((*(longlong *)(lVar1 + 0x110) == 0) || (iVar5 = 1, *(longlong *)(lVar1 + 0x118) == 0)) {
      iVar5 = 0;
    }
    uVar6 = iVar5 << 4;
    uVar7 = iVar5 << 7;
    if ((*(longlong *)(lVar1 + 0xe8) != 0) && (*(longlong *)(lVar1 + 0xf0) != 0)) {
      uVar6 = 0x10;
      uVar7 = 0x80;
    }
    if ((*(longlong *)(lVar1 + 0xc0) != 0) && (*(longlong *)(lVar1 + 200) != 0)) {
      uVar6 = 0x10;
      uVar7 = uVar7 | 0x20;
    }
    uVar3 = uVar6 | 1;
    if (uVar8 == 0) {
      uVar3 = uVar6;
    }
    uVar6 = uVar3 | 2;
    if (iVar9 == 0) {
      uVar6 = uVar3;
    }
    if ((uVar8 != 0) ||
       ((((*(longlong *)(lVar1 + 0x48) != 0 && (*(longlong *)(lVar1 + 0x50) != 0)) &&
         ((*(uint *)(lVar2 + 0x314) & 0x100) != 0)) &&
        (((*param_1 & 0xffffff00) == 0x300 && (*param_1 == 0x303)))))) {
      uVar7 = uVar7 | 1;
    }
    uVar8 = uVar7 | 2;
    if ((*(uint *)(lVar2 + 0x318) & 1) == 0) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 | 4;
    if ((*(uint *)(lVar2 + 0x31c) & 1) != 0) {
      uVar4 = X509_get_key_usage(*(undefined8 *)(lVar1 + 0x98));
      uVar3 = 0;
      if ((*(byte *)(lVar2 + 0x31c) & 2) != 0) {
        uVar3 = uVar4 & 0x80;
      }
      if (uVar3 != 0) {
        uVar7 = uVar8 | 0xc;
      }
    }
    if ((uVar7 & 8) == 0) {
      if (((*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x138) != 0) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x140) != 0)) &&
         (((*(uint *)(lVar2 + 0x32c) & 0x100) != 0 &&
          (((*param_1 & 0xffffff00) == 0x300 && (*param_1 == 0x303)))))) {
        uVar7 = uVar7 | 8;
      }
      if ((((((uVar7 & 8) == 0) && (*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x160) != 0)) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x168) != 0)) &&
          (((*(uint *)(lVar2 + 0x330) & 0x100) != 0 && ((*param_1 & 0xffffff00) == 0x300)))) &&
         (*param_1 == 0x303)) {
        uVar7 = uVar7 | 8;
      }
    }
    uVar8 = uVar6 | 0x4c;
    if ((uVar6 & 1) == 0) {
      uVar8 = uVar6 | 0xc;
    }
    uVar6 = uVar8 | 0x100;
    if ((uVar8 & 2) == 0) {
      uVar6 = uVar8;
    }
    *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x334) = uVar6 | 0x80;
    *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x338) = uVar7 | 0x10;
    return;
  }
  return;
}

// FUN_14f65c300 @ 14f65c300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f65c300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x1700) == 0) {
    lVar2 = ASYNC_WAIT_CTX_new();
    *(longlong *)(param_1 + 0x1700) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  iVar1 = ASYNC_start_job(param_1 + 0x16f8,*(undefined8 *)(param_1 + 0x1700),local_res8,param_3,
                          param_2,0x28);
  if (iVar1 == 0) {
    uVar4 = 0x6ab;
    uVar3 = 0x195;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x28) = 6;
      return 0xffffffff;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x28) = 5;
      return 0xffffffff;
    }
    if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 0x16f8) = 0;
      return local_res8[0];
    }
    uVar4 = 0x6b8;
    uVar3 = 0x44;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  ERR_put_error(0x14,0x185,uVar3,"ssl\\ssl_lib.c",uVar4);
  return 0xffffffff;
}

// ssl_undefined_void_function @ 14f65c430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_undefined_void_function(void)

{
  ERR_put_error(0x14,0xf4,0x42,"ssl\\ssl_lib.c",0xeb5);
  return 0;
}

// ssl_update_cache @ 14f65c470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_update_cache(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x150) != 0) &&
     (((*(int *)(param_1 + 0x38) == 0 ||
       (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x178) != 0)) ||
      ((*(byte *)(param_1 + 0x558) & 1) == 0)))) {
    lVar2 = *(longlong *)(param_1 + 0x768);
    uVar1 = *(uint *)(lVar2 + 0x48);
    if (((uVar1 & param_2) != 0) &&
       ((*(int *)(param_1 + 200) == 0 ||
        ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
          (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)))))) {
      if (((uVar1 >> 9 & 1) == 0) &&
         ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
           (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) ||
          (((iVar3 == 0x10000 || (*(int *)(param_1 + 0x38) == 0)) ||
           ((((*(int *)(param_1 + 0x1710) != 0 && ((*(uint *)(param_1 + 0x5cc) & 0x1000000) == 0))
             || (*(longlong *)(lVar2 + 0x58) != 0)) || ((*(uint *)(param_1 + 0x5cc) & 0x4000) != 0))
           )))))) {
        SSL_CTX_add_session(lVar2);
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x768) + 0x50) != 0) {
        SSL_SESSION_up_ref(*(undefined8 *)(param_1 + 0x508));
        iVar3 = (**(code **)(*(longlong *)(param_1 + 0x768) + 0x50))
                          (param_1,*(undefined8 *)(param_1 + 0x508));
        if (iVar3 == 0) {
          SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
        }
      }
    }
    if ((-1 < (char)uVar1) && ((uVar1 & param_2) == param_2)) {
      if ((param_2 & 1) == 0) {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x768) + 0x7c);
      }
      else {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x768) + 0x70);
      }
      if ((char)*puVar4 == -1) {
        uVar5 = _time64((__time64_t *)0x0);
        SSL_CTX_flush_sessions(*(undefined8 *)(param_1 + 0x768),uVar5 & 0xffffffff);
      }
    }
  }
  return;
}

// ssl_validate_ct @ 14f65c610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_validate_ct(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  uVar6 = 1;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x508) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8);
  }
  if (((((*(longlong *)(param_1 + 0x748) == 0) || (lVar7 == 0)) || (*(int *)(param_1 + 0x5a8) != 0))
      || ((*(longlong *)(param_1 + 0x5a0) == 0 || (iVar1 = OPENSSL_sk_num(), iVar1 < 2)))) ||
     (((param_1 != -0xd8 &&
       ((iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xe0)), 0 < iVar1 &&
        (*(char **)(param_1 + 0xf0) != (char *)0x0)))) &&
      ((byte)(**(char **)(param_1 + 0xf0) - 2U) < 2)))) {
    return 1;
  }
  lVar3 = CT_POLICY_EVAL_CTX_new();
  if (lVar3 == 0) {
    uVar4 = CONCAT44(uVar6,0x1397);
    uVar5 = 0x50;
    uVar6 = 0x41;
  }
  else {
    uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x5a0),1);
    CT_POLICY_EVAL_CTX_set1_cert(lVar3,lVar7);
    CT_POLICY_EVAL_CTX_set1_issuer(lVar3,uVar4);
    CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE
              (lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x1a8));
    uVar4 = SSL_get_session(param_1);
    iVar2 = SSL_SESSION_get_time(uVar4);
    CT_POLICY_EVAL_CTX_set_time(lVar3,(longlong)iVar2 * 1000);
    uVar4 = SSL_get0_peer_scts(param_1);
    iVar2 = SCT_LIST_validate(uVar4,lVar3);
    if (iVar2 < 0) {
      uVar4 = CONCAT44(uVar6,0x13b4);
      uVar6 = 0xd0;
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x748))(lVar3,uVar4,*(undefined8 *)(param_1 + 0x750));
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (iVar2 != 0) goto LAB_14f65c7b8;
      uVar4 = CONCAT44(uVar6,0x13bd);
      uVar6 = 0xea;
    }
    uVar5 = 0x28;
  }
  ossl_statem_fatal(param_1,uVar5,400,uVar6,"ssl\\ssl_lib.c",uVar4);
LAB_14f65c7b8:
  CT_POLICY_EVAL_CTX_free(lVar3);
  if (iVar2 < 1) {
    *(undefined4 *)(param_1 + 0x5a8) = 0x47;
  }
  return iVar2;
}

// ssl_write_internal @ 14f65c800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_write_internal(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f65c81a;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    ERR_put_error(0x14,0x20c,0x114,"ssl\\ssl_lib.c",0x797);
    uVar1 = 0xffffffff;
  }
  else if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x84) < 0xb) &&
       ((0x502U >> (*(uint *)(param_1 + 0x84) & 0x1f) & 1) != 0)) {
      ERR_put_error(0x14,0x20c,0x42,"ssl\\ssl_lib.c",0x7a4);
      uVar1 = 0;
    }
    else {
      ossl_statem_check_finish_init(param_1,1);
      if (((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) &&
         (lVar2 = ASYNC_get_current_job(), lVar2 == 0)) {
        local_20 = 1;
        local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48);
        local_38 = param_1;
        local_30 = param_2;
        local_28 = param_3;
        uVar1 = FUN_14f65c300(param_1,&local_38,FUN_14f65bbb0);
        *param_4 = *(undefined8 *)(param_1 + 0x1708);
        return uVar1;
      }
      uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,param_2,param_3,param_4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 1;
    ERR_put_error(0x14,0x20c,0xcf,"ssl\\ssl_lib.c",0x79d);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// FUN_14f65c970 @ 14f65c970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65c970(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f65c981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

// FUN_14f65c990 @ 14f65c990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65c990(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"ssl\\ssl_lib.c",0xba);
    EVP_PKEY_free(*(undefined8 *)(param_1 + 0x18));
    CRYPTO_free(param_1,"ssl\\ssl_lib.c",0xbc);
  }
  return;
}

