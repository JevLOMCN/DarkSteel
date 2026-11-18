// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 62

// FUN_14f688820 @ 14f688820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f688820(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f6888d0 @ 14f6888d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6888d0(longlong *param_1,void *param_2,ulonglong param_3)

{
  if (param_3 <= (ulonglong)param_1[1]) {
    memcpy(param_2,(void *)*param_1,param_3);
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}

// FUN_14f6889d0 @ 14f6889d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6889d0(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f688a50 @ 14f688a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f688a50(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f688c70 @ 14f688c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f688c70(undefined8 *param_1,longlong *param_2,longlong *param_3)

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

// FUN_14f688d60 @ 14f688d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f688d60(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  if ((ulonglong)param_1[1] < param_3) {
    return 0;
  }
  memcpy(param_2,(void *)*param_1,param_3);
  return 1;
}

// FUN_14f688ed0 @ 14f688ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f688ed0(undefined8 *param_1,longlong *param_2)

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

// FUN_14f688f70 @ 14f688f70

undefined8 FUN_14f688f70(int *param_1)

{
  if (((*param_1 < 0x301) ||
      ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x20) & 4) == 0)) &&
     ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x20) & 0x50) == 0)) {
    return 1;
  }
  return 0;
}

// dtls_process_hello_verify @ 14f688fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_process_hello_verify(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte *_Src;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong _Size;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (1 < (ulonglong)param_2[1]) {
    *param_2 = *param_2 + 2;
    param_2[1] = param_2[1] - 2;
    if (param_2[1] != 0) {
      uVar2 = param_2[1] - 1;
      bVar1 = *(byte *)*param_2;
      _Src = (byte *)*param_2 + 1;
      _Size = (ulonglong)bVar1;
      if (bVar1 <= uVar2) {
        *param_2 = (longlong)(_Src + _Size);
        param_2[1] = uVar2 - _Size;
        if (_Size < 0x101) {
          memcpy(*(void **)(param_1 + 0xb0),_Src,_Size);
          *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x100) = _Size;
          return 1;
        }
        uVar5 = 0x51f;
        uVar3 = 0x2f;
        uVar4 = 0x194;
        goto LAB_14f68908a;
      }
    }
  }
  uVar3 = 0x32;
  uVar5 = 0x518;
  uVar4 = 0x9f;
LAB_14f68908a:
  ossl_statem_fatal(param_1,uVar3,0x182,uVar4,"ssl\\statem\\statem_clnt.c",uVar5);
  return 0;
}

// FUN_14f6890f0 @ 14f6890f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6890f0(longlong param_1,int param_2)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (param_2 == 4) {
      *(undefined4 *)(param_1 + 0x5c) = 9;
      return 1;
    }
    if (param_2 == 0x18) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2d;
      return 1;
    }
    if (((param_2 == 0xd) &&
        ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0)) &&
       (*(int *)(param_1 + 0x788) == 1)) {
      *(undefined4 *)(param_1 + 0x788) = 4;
      iVar1 = tls13_restore_handshake_digest_for_pha(param_1);
      if (iVar1 != 0) {
LAB_14f689188:
        *(undefined4 *)(param_1 + 0x5c) = 7;
        return 1;
      }
    }
    break;
  case 3:
    if (param_2 == 8) {
      *(undefined4 *)(param_1 + 0x5c) = 0x26;
      return 1;
    }
    break;
  case 4:
    if (param_2 == 0xf) {
      *(undefined4 *)(param_1 + 0x5c) = 0x27;
      return 1;
    }
    break;
  case 0xc:
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x5c) = 3;
      return 1;
    }
    break;
  case 0x26:
    if (*(int *)(param_1 + 200) != 0) goto switchD_14f68912c_caseD_27;
    if (param_2 == 0xd) goto LAB_14f689188;
  case 7:
    if (param_2 == 0xb) {
      *(undefined4 *)(param_1 + 0x5c) = 4;
      return 1;
    }
    break;
  case 0x27:
switchD_14f68912c_caseD_27:
    if (param_2 == 0x14) {
      *(undefined4 *)(param_1 + 0x5c) = 0xb;
      return 1;
    }
  }
  return 0;
}

// FUN_14f689290 @ 14f689290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f689290(longlong param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (*(int *)(param_1 + 0x784) != -1) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2b;
      return 1;
    }
    return 2;
  default:
    uVar1 = 0x1a2;
    break;
  case 7:
    if (*(int *)(param_1 + 0x788) == 4) {
      *(undefined4 *)(param_1 + 0x5c) = 0xd;
      return 1;
    }
    if ((*(byte *)(param_1 + 0x44) & 1) != 0) goto switchD_14f6892c8_caseD_9;
    uVar1 = 0x1b2;
    break;
  case 9:
  case 0x12:
  case 0x2b:
  case 0x2d:
switchD_14f6892c8_caseD_9:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0xb:
    if ((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2f;
      return 1;
    }
    if (((*(uint *)(param_1 + 0x5cc) & 0x100000) != 0) && (*(int *)(param_1 + 0x4d8) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x10;
      return 1;
    }
    uVar1 = 0x12;
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0) {
      uVar1 = 0xd;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  case 0xd:
    uVar1 = 0x12;
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) == 1) {
      uVar1 = 0xf;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  case 0xf:
    *(undefined4 *)(param_1 + 0x5c) = 0x12;
    return 1;
  case 0x2f:
    if (*(int *)(param_1 + 0x710) == 2) {
      *(undefined4 *)(param_1 + 0x5c) = 0x30;
      return 1;
    }
  case 0x10:
  case 0x30:
    uVar1 = 0x12;
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0) {
      uVar1 = 0xd;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  }
  ossl_statem_fatal(param_1,0x50,0x256,0x44,"ssl\\statem\\statem_clnt.c",uVar1,0x14f68929a);
  return 0;
}

// ossl_statem_client_construct_message @ 14f6894b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_statem_client_construct_message
          (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0xc:
    *param_3 = tls_construct_client_hello;
    *param_4 = 1;
    return 1;
  case 0xd:
    *param_3 = tls_construct_client_certificate;
    *param_4 = 0xb;
    return 1;
  case 0xe:
    *param_3 = tls_construct_client_key_exchange;
    *param_4 = 0x10;
    return 1;
  case 0xf:
    *param_3 = tls_construct_cert_verify;
    *param_4 = 0xf;
    return 1;
  case 0x10:
    break;
  case 0x11:
    *param_3 = tls_construct_next_proto;
    *param_4 = 0x43;
    return 1;
  case 0x12:
    *param_3 = tls_construct_finished;
    *param_4 = 0x14;
    return 1;
  default:
    ossl_statem_fatal(param_1,0x50,0x1ae,0xec,"ssl\\statem\\statem_clnt.c",0x37f,0x14f6894ba);
    return 0;
  case 0x2b:
    *param_3 = tls_construct_key_update;
    *param_4 = 0x18;
    return 1;
  case 0x2f:
    *param_3 = 0;
    *param_4 = 0xffffffff;
    return 1;
  case 0x30:
    *param_3 = tls_construct_end_of_early_data;
    *param_4 = 5;
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

// ossl_statem_client_post_process_message @ 14f6897a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_post_process_message(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x5c) - 7U & 0xffffffdf) != 0) {
    ossl_statem_fatal(param_1,0x50,0x251,0x44,"ssl\\statem\\statem_clnt.c",0x442,0x14f6897aa);
    return 0;
  }
  uVar1 = tls_prepare_client_certificate();
  return uVar1;
}

// ossl_statem_client_post_work @ 14f689800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_post_work(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x98) = 0;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0xc:
    if ((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x1710) != 0)) {
      if (((*(uint *)(param_1 + 0x5cc) & 0x100000) == 0) &&
         (iVar2 = tls13_change_cipher_state(param_1,0x52), iVar2 == 0)) {
        return 0;
      }
    }
    else {
      iVar2 = statem_flush(param_1);
      if (iVar2 == 0) {
        return 3;
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x5e8) = 1;
      return 2;
    }
    break;
  case 0xe:
    uVar3 = tls_client_key_exchange_post_work(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    break;
  case 0x10:
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
         (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
       (*(int *)(param_1 + 0x4d8) != 1)) {
      if ((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x1710) != 0)) {
        uVar3 = tls13_change_cipher_state(param_1,0x52);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
      else {
        *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1e0) =
             *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
        puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0xa8) + 0x298);
        if (puVar1 == (undefined4 *)0x0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1d8) = 0;
        }
        else {
          *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1d8) = *puVar1;
        }
        iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))(param_1,0x12)
        ;
        if (iVar2 == 0) {
          return 0;
        }
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
          dtls1_reset_seq_numbers(param_1,2);
          return 2;
        }
      }
    }
    break;
  case 0x12:
    iVar2 = statem_flush(param_1);
    if (iVar2 != 1) {
      return 4;
    }
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      iVar2 = tls13_save_handshake_digest_for_pha(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(int *)(param_1 + 0x788) != 4) &&
         (uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))
                            (param_1,0x112), (int)uVar3 == 0)) {
        return uVar3;
      }
    }
    break;
  case 0x2b:
    iVar2 = statem_flush(param_1);
    if (iVar2 != 1) {
      return 3;
    }
    iVar2 = tls13_update_key(param_1,1);
    if (iVar2 == 0) {
      return 0;
    }
    break;
  case 0x30:
    EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0x468));
    *(undefined8 *)(param_1 + 0x468) = 0;
    return 2;
  }
  return 2;
}

// ossl_statem_client_pre_work @ 14f689b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_pre_work(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 1) {
    uVar2 = tls_finish_handshake(param_1,param_2,1);
    return uVar2;
  }
  if (iVar1 == 0xc) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      uVar2 = ssl3_init_finished_mac(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
  }
  else if (iVar1 == 0x10) {
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) &&
       (*(int *)(param_1 + 200) != 0)) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      return 2;
    }
  }
  else if ((iVar1 == 0x2e) ||
          (((iVar1 == 0x2f && (*(int *)(param_1 + 0x84) != 7)) && (*(int *)(param_1 + 0x84) != 0))))
  {
    uVar2 = tls_finish_handshake(param_1,param_2,0,1);
    return uVar2;
  }
  return 2;
}

// ossl_statem_client_process_message @ 14f689bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_statem_client_process_message(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 2:
    uVar2 = dtls_process_hello_verify();
    return uVar2;
  case 3:
    uVar2 = tls_process_server_hello();
    return uVar2;
  case 4:
    uVar2 = tls_process_server_certificate();
    return uVar2;
  case 5:
    iVar1 = tls_process_cert_status_body();
    return (ulonglong)(-(uint)(iVar1 != 0) & 3);
  case 6:
    uVar2 = tls_process_key_exchange();
    return uVar2;
  case 7:
    uVar2 = tls_process_certificate_request();
    return uVar2;
  case 8:
    uVar2 = tls_process_server_done();
    return uVar2;
  case 9:
    uVar2 = tls_process_new_session_ticket();
    return uVar2;
  case 10:
    uVar2 = tls_process_change_cipher_spec();
    return uVar2;
  case 0xb:
    uVar2 = tls_process_finished();
    return uVar2;
  default:
    ossl_statem_fatal(param_1,0x50,0x252,0x44,"ssl\\statem\\statem_clnt.c",0x406,0x14f689bda);
    return 0;
  case 0x26:
    uVar2 = FUN_14f68ce10();
    return uVar2;
  case 0x27:
    uVar2 = tls_process_cert_verify();
    return uVar2;
  case 0x29:
    uVar2 = tls_process_hello_req();
    return uVar2;
  case 0x2d:
    uVar2 = tls_process_key_update();
    return uVar2;
  }
}

// ossl_statem_client_read_transition @ 14f689d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ossl_statem_client_read_transition(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    uVar4 = 1;
    iVar1 = FUN_14f6890f0(param_1);
    if (iVar1 != 0) {
      return 1;
    }
    goto switchD_14f689dc2_caseD_2;
  }
  switch(param_1[0x17]) {
  case 1:
    if (param_2 == 0) {
      param_1[0x17] = 0x29;
      return 1;
    }
    break;
  case 3:
    if (param_1[0x32] != 0) goto switchD_14f689dc2_caseD_12;
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) &&
       (param_2 == 3)) {
LAB_14f689de7:
      param_1[0x17] = 2;
      return 1;
    }
    if ((((0x300 < *param_1) && (*(longlong *)(param_1 + 0x1b6) != 0)) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x210) != 0)) && (param_2 == 0x101)) {
      param_1[0x32] = 1;
      param_1[0x17] = 10;
      return 1;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238);
    if ((*(byte *)(lVar3 + 0x20) & 0x54) == 0) {
      if (param_2 == 0xb) {
        param_1[0x17] = 4;
        return 1;
      }
      break;
    }
    goto LAB_14f689f09;
  case 4:
    if ((param_1[0x195] != 0) && (param_2 == 0x16)) {
      param_1[0x17] = 5;
      return 1;
    }
  case 5:
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238);
LAB_14f689f09:
    if ((*(uint *)(lVar3 + 0x1c) & 0x1a6) == 0) {
      if (((*(uint *)(lVar3 + 0x1c) & 0x1c8) != 0) && (param_2 == 0xc)) {
LAB_14f689f70:
        param_1[0x17] = 6;
        return 1;
      }
switchD_14f689dc2_caseD_6:
      if (param_2 == 0xd) {
        uVar4 = 1;
        iVar1 = FUN_14f688f70(param_1);
        if (iVar1 != 0) {
          param_1[0x17] = 7;
          return 1;
        }
      }
      else {
switchD_14f689dc2_caseD_7:
        if (param_2 == 0xe) {
          param_1[0x17] = 8;
          return 1;
        }
      }
    }
    else if (param_2 == 0xc) goto LAB_14f689f70;
    break;
  case 6:
    goto switchD_14f689dc2_caseD_6;
  case 7:
    goto switchD_14f689dc2_caseD_7;
  case 10:
    if (param_2 == 0x14) {
      param_1[0x17] = 0xb;
      return 1;
    }
    break;
  case 0xc:
    if (param_2 == 2) {
LAB_14f689e07:
      param_1[0x17] = 3;
      return 1;
    }
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) &&
       (param_2 == 3)) goto LAB_14f689de7;
    break;
  case 0x12:
switchD_14f689dc2_caseD_12:
    if (param_1[0x19e] != 0) {
      if (param_2 == 4) {
        param_1[0x17] = 9;
        return 1;
      }
      break;
    }
  case 9:
    if (param_2 == 0x101) {
      param_1[0x17] = 10;
      return 1;
    }
    break;
  case 0x2e:
    if (param_2 == 2) goto LAB_14f689e07;
  }
switchD_14f689dc2_caseD_2:
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) &&
     (param_2 == 0x101)) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[10] = 3;
    uVar2 = SSL_get_rbio(param_1);
    BIO_clear_flags(uVar2,0xf);
    BIO_set_flags(uVar2,9);
    return 0;
  }
  ossl_statem_fatal(param_1,10,0x1a1,0xf4,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar4,0x18b));
  return 0;
}

// ossl_statem_client_write_transition @ 14f68a0f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_write_transition(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
  if (((uVar3 == 0) && (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    uVar2 = FUN_14f689290(param_1);
    return uVar2;
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
  case 2:
    break;
  case 1:
    if (*(int *)(param_1 + 0x780) == 0) {
      return 2;
    }
    break;
  case 3:
    if (((*(uint *)(param_1 + 0x5cc) & 0x100000) != 0) && (*(int *)(param_1 + 0x84) != 7))
    goto switchD_14f68a15a_caseD_f;
    break;
  default:
    ossl_statem_fatal(param_1,0x50,599,0x44,"ssl\\statem\\statem_clnt.c",0x100000202);
    return 0;
  case 8:
    *(uint *)(param_1 + 0x5c) = 0xe - (uint)(*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0);
    return 1;
  case 0xb:
    if (*(int *)(param_1 + 200) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x10;
      return 1;
    }
    goto LAB_14f68a297;
  case 0xc:
    if (*(int *)(param_1 + 0x84) != 2) {
      return 2;
    }
    bVar4 = (*(uint *)(param_1 + 0x5cc) & 0x100000) == 0;
    iVar1 = 0x2e;
    goto LAB_14f68a18c;
  case 0xd:
    *(undefined4 *)(param_1 + 0x5c) = 0xe;
    return 1;
  case 0xe:
    iVar1 = (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 1) + 0xf;
    *(int *)(param_1 + 0x5c) = iVar1;
    bVar4 = (**(byte **)(param_1 + 0xa8) & 0x10) == 0;
LAB_14f68a18c:
    if (!bVar4) {
      iVar1 = 0x10;
    }
    *(int *)(param_1 + 0x5c) = iVar1;
    return 1;
  case 0xf:
switchD_14f68a15a_caseD_f:
    *(undefined4 *)(param_1 + 0x5c) = 0x10;
    return 1;
  case 0x10:
    if (*(int *)(param_1 + 0x4d8) != 1) {
      if (*(int *)(param_1 + 0x84) == 2) {
        *(undefined4 *)(param_1 + 0x5c) = 0x2e;
        return 1;
      }
      if ((uVar3 == 0) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) != 0)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x11;
        return 1;
      }
      goto switchD_14f68a15a_caseD_11;
    }
    break;
  case 0x11:
switchD_14f68a15a_caseD_11:
    *(undefined4 *)(param_1 + 0x5c) = 0x12;
    return 1;
  case 0x12:
    if (*(int *)(param_1 + 200) == 0) {
      return 2;
    }
LAB_14f68a297:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0x29:
    iVar1 = ssl3_renegotiate_check(param_1,1);
    if (iVar1 == 0) goto LAB_14f68a297;
    iVar1 = tls_setup_handshake(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    break;
  case 0x2e:
    return 2;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0xc;
  return 1;
}

// FUN_14f68a3b0 @ 14f68a3b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68a3b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  lVar2 = ssl_get_cipher_by_char(param_1,param_2,0);
  if (lVar2 == 0) {
    ossl_statem_fatal(param_1,0x2f,0x21c,0xf8,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar7,0x537));
    return 0;
  }
  iVar1 = ssl_cipher_disabled(param_1,lVar2,0x10003,1);
  if (iVar1 != 0) {
    ossl_statem_fatal(param_1,0x2f,0x21c,0x105,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar7,0x540));
    return 0;
  }
  uVar3 = ssl_get_ciphers_by_id(param_1);
  iVar1 = OPENSSL_sk_find(uVar3,lVar2);
  if (iVar1 < 0) {
    uVar6 = CONCAT44(uVar7,0x549);
  }
  else {
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
         (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
       ((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar4 == 0 ||
        (*(int *)(lVar4 + 0x18) == *(int *)(lVar2 + 0x18))))) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
      if (lVar4 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1e8) = *(undefined4 *)(lVar4 + 0x18);
      }
      if ((*(int *)(param_1 + 200) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x508) + 0x1e8) == *(int *)(lVar2 + 0x18))) {
LAB_14f68a59f:
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) = lVar2;
        return 1;
      }
      if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         ((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)))) {
        lVar4 = ssl_md(*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0) + 0x40)
                      );
        lVar5 = ssl_md(*(undefined4 *)(lVar2 + 0x40));
        if (lVar5 == lVar4) goto LAB_14f68a59f;
        uVar6 = CONCAT44(uVar7,0x566);
        uVar3 = 0xda;
      }
      else {
        uVar6 = CONCAT44(uVar7,0x56f);
        uVar3 = 0xc5;
      }
      goto LAB_14f68a482;
    }
    uVar6 = CONCAT44(uVar7,0x551);
  }
  uVar3 = 0x105;
LAB_14f68a482:
  ossl_statem_fatal(param_1,0x2f,0x21c,uVar3,"ssl\\statem\\statem_clnt.c",uVar6);
  return 0;
}

// FUN_14f68a5d0 @ 14f68a5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a5d0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f68a5f0 @ 14f68a5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a5f0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f68a610 @ 14f68a610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a610(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f68a630 @ 14f68a630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a630(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f68a650 @ 14f68a650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a650(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f68a670 @ 14f68a670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a670(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f68a690 @ 14f68a690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a690(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f68a6b0 @ 14f68a6b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a6b0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f68a6d0 @ 14f68a6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68a6d0(void)

{
  OPENSSL_sk_value();
  return;
}

// ssl3_check_cert_and_algorithm @ 14f68a6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_check_cert_and_algorithm(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 uVar8;
  undefined8 uVar7;
  
  uVar8 = 1;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  uVar1 = *(uint *)(lVar5 + 0x20);
  uVar2 = *(uint *)(lVar5 + 0x1c);
  if ((uVar1 & 0xab) == 0) {
    return 1;
  }
  uVar4 = X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
  lVar5 = ssl_cert_lookup_by_pkey(uVar4,&local_res8);
  if ((lVar5 == 0) || ((uVar1 & *(uint *)(lVar5 + 4)) == 0)) {
    uVar7 = CONCAT44(uVar8,0xe17);
    uVar4 = 0xdd;
  }
  else if ((*(uint *)(lVar5 + 4) & 8) == 0) {
    if (((uVar2 & 0x41) == 0) || (local_res8 == 0)) {
      if ((uVar2 & 2) == 0) {
        return 1;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0) {
        return 1;
      }
      uVar6 = 0x50;
      uVar7 = CONCAT44(uVar8,0xe2f);
      uVar4 = 0x44;
      goto LAB_14f68a7fb;
    }
    uVar7 = CONCAT44(uVar8,0xe28);
    uVar4 = 0xa9;
  }
  else {
    iVar3 = ssl_check_srvr_ecc_cert_and_alg
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8),param_1);
    if (iVar3 != 0) {
      return 1;
    }
    uVar7 = CONCAT44(uVar8,0xe20);
    uVar4 = 0x130;
  }
  uVar6 = 0x28;
LAB_14f68a7fb:
  ossl_statem_fatal(param_1,uVar6,0x82,uVar4,"ssl\\statem\\statem_clnt.c",uVar7);
  return 0;
}

// FUN_14f68a830 @ 14f68a830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68a830(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f68a83c;
  iVar1 = tls_choose_sigalg(param_1,0);
  if ((iVar1 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) == 0)) {
    return 0;
  }
  if (((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30001) != 0) &&
     (iVar1 = tls1_check_chain(param_1,0,0,0,0xfffffffe,uVar2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

// FUN_14f68a8b0 @ 14f68a8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68a8b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong local_res20;
  undefined4 uVar12;
  undefined8 uVar13;
  ulonglong uVar11;
  
  uVar13 = 0x14f68a8c3;
  iVar3 = *(int *)(param_1 + 0x780);
  uVar7 = 0;
  iVar1 = ssl_set_client_disabled();
  if (iVar1 == 0) {
    uVar12 = 0xea1;
    uVar8 = 0xbf;
  }
  else {
    if (param_2 != 0) {
      uVar4 = 0xfffc;
      if (iVar3 != 0) {
        uVar4 = 0xfffe;
      }
      uVar9 = uVar4 - 2;
      if ((*(byte *)(param_1 + 0x5d0) & 0x80) == 0) {
        uVar9 = uVar4;
      }
      iVar1 = OPENSSL_sk_num(param_2);
      uVar4 = uVar7;
      uVar11 = uVar7;
      if (0 < iVar1) {
        do {
          if (uVar9 <= uVar7) break;
          lVar5 = OPENSSL_sk_value(param_2,uVar11);
          iVar1 = ssl_cipher_disabled(param_1,lVar5,0x10001,0);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))(lVar5,param_3,&local_res20);
            if (iVar1 == 0) {
              uVar8 = 0xeca;
              goto LAB_14f68aaae;
            }
            if (uVar4 == 0) {
              if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
                iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340);
                if ((iVar1 <= *(int *)(lVar5 + 0x30)) && (*(int *)(lVar5 + 0x2c) <= iVar1)) {
                  uVar4 = 1;
                }
              }
              else {
                iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340);
                iVar6 = *(int *)(lVar5 + 0x38);
                if (iVar6 == 0x100) {
                  iVar6 = 0xff00;
                }
                iVar2 = iVar1;
                if (iVar1 == 0x100) {
                  iVar2 = 0xff00;
                }
                if (iVar6 <= iVar2) {
                  iVar6 = *(int *)(lVar5 + 0x34);
                  if (iVar6 == 0x100) {
                    iVar6 = 0xff00;
                  }
                  if (iVar1 == 0x100) {
                    iVar1 = 0xff00;
                  }
                  if (iVar1 <= iVar6) {
                    uVar4 = 1;
                  }
                }
              }
            }
            uVar7 = uVar7 + local_res20;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          iVar1 = OPENSSL_sk_num(param_2);
        } while ((int)uVar10 < iVar1);
        if ((uVar7 != 0) && (uVar4 != 0)) {
          if ((iVar3 == 0) &&
             (iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                                (&DAT_154df7f80,param_3,&local_res20), iVar3 == 0)) {
            uVar8 = 0xef0;
          }
          else {
            if (((*(byte *)(param_1 + 0x5d0) & 0x80) == 0) ||
               (iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                                  (&DAT_154df7fd0,param_3,&local_res20), iVar3 != 0)) {
              return 1;
            }
            uVar8 = 0xefa;
          }
LAB_14f68aaae:
          ossl_statem_fatal(param_1,0x50,0x1a9,0x44,"ssl\\statem\\statem_clnt.c",uVar8);
          return 0;
        }
      }
      ossl_statem_fatal(param_1,0x50,0x1a9,0xb5,"ssl\\statem\\statem_clnt.c",0xee0);
      if (uVar4 == 0) {
        ERR_add_error_data(1,"No ciphers enabled for max supported SSL/TLS version");
      }
      return 0;
    }
    uVar12 = 0xea7;
    uVar8 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x1a9,uVar8,"ssl\\statem\\statem_clnt.c",uVar12,uVar13);
  return 0;
}

// ssl_do_client_cert_cb @ 14f68ab70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl_do_client_cert_cb(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x1e0) != 0) {
    uVar3 = SSL_get_client_CA_list();
    uVar4 = ENGINE_load_ssl_client_cert
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x1e0),param_1,uVar3,param_2
                       ,param_3,0,0,0);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0xb8);
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
    uVar5 = (ulonglong)uVar2;
  }
  return uVar5;
}

// FUN_14f68ac30 @ 14f68ac30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68ac30(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f68ac41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

// tls_client_key_exchange_post_work @ 14f68ac50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_client_key_exchange_post_work(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  lVar5 = *(longlong *)(lVar2 + 0x2b8);
  uVar4 = *(undefined8 *)(lVar2 + 0x2c0);
  uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x238) + 0x1c);
  if ((uVar1 & 0x20) == 0) {
    if ((lVar5 == 0) && ((uVar1 & 8) == 0)) {
      ossl_statem_fatal(param_1,0x50,0x162,0x41,"ssl\\statem\\statem_clnt.c",0x100000d40);
    }
    else {
      iVar3 = ssl_generate_master_secret(param_1,lVar5,uVar4,1);
      if (iVar3 != 0) {
        return 1;
      }
      lVar5 = 0;
      uVar4 = 0;
    }
  }
  else {
    iVar3 = srp_generate_client_master_secret(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  CRYPTO_clear_free(lVar5,uVar4,"ssl\\statem\\statem_clnt.c",0xd6f);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = 0;
  return 0;
}

// FUN_14f68ad60 @ 14f68ad60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68ad60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar3 = 0;
  local_res8 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
  if (lVar1 == 0) {
    uVar5 = 0x100000c03;
  }
  else {
    lVar3 = ssl_generate_pkey(lVar1);
    if (lVar3 == 0) {
      uVar5 = CONCAT44(uVar6,0xc0a);
    }
    else {
      lVar4 = EVP_PKEY_get0_DH(lVar3);
      if (lVar4 == 0) {
        uVar5 = CONCAT44(uVar6,0xc12);
      }
      else {
        iVar2 = ssl_derive(param_1,lVar3,lVar1,0);
        if (iVar2 == 0) goto LAB_14f68adc3;
        DH_get0_key(lVar4,&local_res18,0);
        iVar2 = BN_num_bits(local_res18);
        iVar2 = WPACKET_sub_allocate_bytes__
                          (param_2,(longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3),
                           &local_res8,2);
        if (iVar2 != 0) {
          BN_bn2bin(local_res18,local_res8);
          EVP_PKEY_free(lVar3);
          return 1;
        }
        uVar5 = CONCAT44(uVar6,0xc20);
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x194,0x44,"ssl\\statem\\statem_clnt.c",uVar5);
LAB_14f68adc3:
  EVP_PKEY_free(lVar3);
  return 0;
}

// FUN_14f68aec0 @ 14f68aec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68aec0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined4 uVar5;
  
  uVar5 = 1;
  uVar4 = 0;
  local_res8 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
  if (lVar3 == 0) {
    ossl_statem_fatal(param_1,0x50,0x195,0x44,"ssl\\statem\\statem_clnt.c",0x100000c3d);
    uVar4 = 0;
  }
  else {
    lVar2 = ssl_generate_pkey(lVar3);
    if (lVar2 == 0) {
      ossl_statem_fatal(param_1,0x50,0x195,0x41,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar5,0xc44));
    }
    else {
      iVar1 = ssl_derive(param_1,lVar2,lVar3,0);
      if (iVar1 != 0) {
        lVar3 = EVP_PKEY_get1_tls_encodedpoint(lVar2,&local_res8);
        if (lVar3 == 0) {
          ossl_statem_fatal(param_1,0x50,0x195,0x10,"ssl\\statem\\statem_clnt.c",
                            CONCAT44(uVar5,0xc52));
        }
        else {
          iVar1 = WPACKET_sub_memcpy__(param_2,local_res8,lVar3,1);
          if (iVar1 == 0) {
            ossl_statem_fatal(param_1,0x50,0x195,0x44,"ssl\\statem\\statem_clnt.c",
                              CONCAT44(uVar5,0xc58));
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
    }
    CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0xc5e);
    EVP_PKEY_free(lVar2);
  }
  return uVar4;
}

// FUN_14f68b040 @ 14f68b040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f68b040(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined1 *local_170;
  ulonglong local_168;
  undefined1 local_160 [8];
  undefined1 local_158 [32];
  undefined1 local_138 [256];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f68b052;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  lVar6 = 0;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
  if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8) == 0) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc7f);
    local_178 = "ssl\\statem\\statem_clnt.c";
    ossl_statem_fatal(param_1,0x28,0x196);
    return 0;
  }
  uVar3 = X509_get0_pubkey();
  lVar4 = EVP_PKEY_CTX_new(uVar3,0);
  if (lVar4 == 0) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc86);
    local_178 = "ssl\\statem\\statem_clnt.c";
    ossl_statem_fatal(param_1,0x50,0x196,0x41);
    return 0;
  }
  lVar5 = CRYPTO_malloc(0x20,"ssl\\statem\\statem_clnt.c",0xc91);
  if (lVar5 == 0) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc94);
    uVar7 = 0x41;
    goto LAB_14f68b341;
  }
  iVar2 = EVP_PKEY_encrypt_init(lVar4);
  if ((iVar2 < 1) || (iVar2 = RAND_bytes(lVar5,0x20), iVar2 < 1)) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc9e);
  }
  else {
    lVar6 = EVP_MD_CTX_new();
    if (lVar6 != 0) {
      uVar3 = 0x3d6;
      if ((uVar1 & 0x80) == 0) {
        uVar3 = 0x329;
      }
      uVar3 = OBJ_nid2sn(uVar3);
      uVar3 = EVP_get_digestbyname(uVar3);
      iVar2 = EVP_DigestInit(lVar6,uVar3);
      if ((((0 < iVar2) &&
           (iVar2 = EVP_DigestUpdate(lVar6,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20), 0 < iVar2))
          && (iVar2 = EVP_DigestUpdate(lVar6,*(longlong *)(param_1 + 0xa8) + 0x98,0x20), 0 < iVar2))
         && (iVar2 = EVP_DigestFinal_ex(lVar6,local_158,local_160), 0 < iVar2)) {
        EVP_MD_CTX_free(lVar6);
        local_170 = local_158;
        lVar6 = 0;
        local_178 = (char *)CONCAT44(local_178._4_4_,8);
        iVar2 = EVP_PKEY_CTX_ctrl(lVar4,0xffffffff,0x100,8);
        if (iVar2 < 0) {
          local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xcb6);
          uVar7 = 0x112;
          goto LAB_14f68b341;
        }
        local_168 = 0xff;
        local_178 = (char *)0x20;
        iVar2 = EVP_PKEY_encrypt(lVar4,local_138,&local_168,lVar5);
        if (iVar2 < 1) {
          local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xcc0);
          uVar7 = 0x112;
          goto LAB_14f68b341;
        }
        iVar2 = WPACKET_put_bytes__(param_2,0x30,1);
        if (((iVar2 != 0) &&
            ((local_168 < 0x80 || (iVar2 = WPACKET_put_bytes__(param_2,0x81,1), iVar2 != 0)))) &&
           (iVar2 = WPACKET_sub_memcpy__(param_2,local_138,local_168,1), iVar2 != 0)) {
          EVP_PKEY_CTX_free(lVar4);
          *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = lVar5;
          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = 0x20;
          return 1;
        }
        local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xcc8);
        goto LAB_14f68b33b;
      }
    }
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xcae);
  }
LAB_14f68b33b:
  uVar7 = 0x44;
LAB_14f68b341:
  local_178 = "ssl\\statem\\statem_clnt.c";
  ossl_statem_fatal(param_1,0x50,0x196,uVar7);
  EVP_PKEY_CTX_free(lVar4);
  CRYPTO_clear_free(lVar5,0x20,"ssl\\statem\\statem_clnt.c",0xcd3);
  EVP_MD_CTX_free(lVar6);
  return 0;
}

// FUN_14f68b3c0 @ 14f68b3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f68b3c0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined1 auStack_208 [32];
  char *local_1e8;
  undefined4 local_1e0;
  char local_1d8;
  char local_1d7 [143];
  char local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong uVar5;
  
  uStack_40 = 0x14f68b3da;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  pcVar1 = *(code **)(param_1 + 0x578);
  uVar10 = 0;
  uVar3 = 0;
  uVar5 = uVar10;
  uVar6 = uVar10;
  uVar7 = uVar10;
  if (pcVar1 == (code *)0x0) {
    local_1e0 = 0xb57;
    uVar11 = 0xe0;
    uVar12 = uVar10;
LAB_14f68b606:
    uVar9 = 0x50;
  }
  else {
    memset(&local_1d8,0,0x81);
    local_1e8 = local_148;
    local_1e0 = 0x100;
    uVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0),&local_1d8,
                      0x80);
    uVar12 = (ulonglong)uVar2;
    if (0x100 < uVar12) {
      local_1e0 = 0xb63;
      local_1e8 = "ssl\\statem\\statem_clnt.c";
      ossl_statem_fatal(param_1,0x28,0x197,0x44);
      uVar12 = 0x100;
      goto LAB_14f68b61b;
    }
    if (uVar2 != 0) {
      pcVar8 = &local_1d8;
      while ((local_1d8 != '\0' && (uVar3 = (uint)uVar5, uVar3 < 0x80000000))) {
        pcVar8 = pcVar8 + 1;
        uVar3 = uVar3 + 1;
        local_1d8 = *pcVar8;
        uVar5 = (ulonglong)uVar3;
      }
      uVar5 = (ulonglong)(uVar3 & 0x7fffffff);
      if (uVar5 < 0x81) {
        uVar6 = CRYPTO_memdup(local_148,uVar12,"ssl\\statem\\statem_clnt.c",0xb74);
        uVar7 = CRYPTO_strdup(&local_1d8,"ssl\\statem\\statem_clnt.c",0xb75);
        if ((uVar6 == 0) || (uVar7 == 0)) {
          local_1e0 = 0xb78;
          uVar11 = 0x41;
        }
        else {
          CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                      "ssl\\statem\\statem_clnt.c",0xb7c);
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = uVar6;
          uVar6 = 0;
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = uVar12;
          CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a8),
                      "ssl\\statem\\statem_clnt.c",0xb80);
          *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x1a8) = uVar7;
          uVar7 = 0;
          iVar4 = WPACKET_sub_memcpy__(param_2,&local_1d8,uVar5,2);
          if (iVar4 != 0) {
            uVar10 = 1;
            goto LAB_14f68b61b;
          }
          local_1e0 = 0xb86;
          uVar11 = 0x44;
        }
      }
      else {
        local_1e0 = 0xb70;
        uVar11 = 0x44;
      }
      goto LAB_14f68b606;
    }
    local_1e0 = 0xb69;
    uVar9 = 0x28;
    uVar11 = 0xdf;
  }
  local_1e8 = "ssl\\statem\\statem_clnt.c";
  ossl_statem_fatal(param_1,uVar9,0x197,uVar11);
LAB_14f68b61b:
  OPENSSL_cleanse(local_148,uVar12);
  OPENSSL_cleanse(&local_1d8,0x81);
  CRYPTO_clear_free(uVar6,uVar12,"ssl\\statem\\statem_clnt.c",0xb8f);
  CRYPTO_clear_free(uVar7,uVar5,"ssl\\statem\\statem_clnt.c",0xb90);
  return uVar10;
}

// FUN_14f68b6a0 @ 14f68b6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68b6a0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 uVar7;
  
  local_res18[0] = 0;
  lVar5 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1b8) == 0) {
    ossl_statem_fatal(param_1,0x50,0x199,0x44,"ssl\\statem\\statem_clnt.c",0xba9,0x14f68b6af);
    return 0;
  }
  uVar2 = X509_get0_pubkey();
  lVar3 = EVP_PKEY_get0_RSA(uVar2);
  if (lVar3 == 0) {
    ossl_statem_fatal(param_1,0x50,0x199,0x44,"ssl\\statem\\statem_clnt.c",0xbb0);
    return 0;
  }
  puVar4 = (undefined1 *)CRYPTO_malloc(0x30,"ssl\\statem\\statem_clnt.c",0xbb5);
  if (puVar4 == (undefined1 *)0x0) {
    ossl_statem_fatal(param_1,0x50,0x199,0x41,"ssl\\statem\\statem_clnt.c",3000);
    return 0;
  }
  *puVar4 = (char)((uint)param_1[0x17b] >> 8);
  puVar4[1] = (char)param_1[0x17b];
  iVar1 = RAND_bytes(puVar4 + 2,0x2e);
  if (iVar1 < 1) {
    uVar7 = 0xbc1;
    uVar6 = 0x41;
  }
  else if ((*param_1 < 0x301) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 != 0)) {
    lVar5 = EVP_PKEY_CTX_new(uVar2,0);
    if (((lVar5 == 0) || (iVar1 = EVP_PKEY_encrypt_init(lVar5), iVar1 < 1)) ||
       (iVar1 = EVP_PKEY_encrypt(lVar5,0,&local_res8,puVar4,0x30), iVar1 < 1)) {
      uVar7 = 0xbcf;
      uVar6 = 6;
    }
    else {
      iVar1 = WPACKET_allocate_bytes(param_2,local_res8,local_res18);
      if ((iVar1 == 0) ||
         (iVar1 = EVP_PKEY_encrypt(lVar5,local_res18[0],&local_res8,puVar4,0x30), iVar1 < 1)) {
        uVar7 = 0xbd5;
        uVar6 = 0x77;
      }
      else {
        EVP_PKEY_CTX_free(lVar5);
        lVar5 = 0;
        if ((*param_1 < 0x301) || (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
          iVar1 = ssl_log_rsa_client_key_exchange(param_1,local_res18[0],local_res8,puVar4,0x30);
          if (iVar1 != 0) {
            *(undefined1 **)(*(longlong *)(param_1 + 0x2a) + 0x2b8) = puVar4;
            *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2c0) = 0x30;
            return 1;
          }
          goto LAB_14f68b93a;
        }
        uVar7 = 0xbde;
        uVar6 = 0x44;
      }
    }
  }
  else {
    uVar7 = 0xbc8;
    uVar6 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x199,uVar6,"ssl\\statem\\statem_clnt.c",uVar7);
LAB_14f68b93a:
  CRYPTO_clear_free(puVar4,0x30,"ssl\\statem\\statem_clnt.c",0xbed);
  EVP_PKEY_CTX_free(lVar5);
  return 0;
}

// FUN_14f68b980 @ 14f68b980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68b980(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined4 uVar4;
  undefined8 uVar3;
  
  uVar4 = 1;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    uVar4 = 1;
    iVar1 = BN_num_bits();
    iVar1 = WPACKET_sub_allocate_bytes__
                      (param_2,(longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3),
                       &local_res8,2);
    if (iVar1 != 0) {
      BN_bn2bin(*(undefined8 *)(param_1 + 0x7f8),local_res8);
      CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x248),
                  "ssl\\statem\\statem_clnt.c",0xceb);
      uVar2 = CRYPTO_strdup(*(undefined8 *)(param_1 + 2000),"ssl\\statem\\statem_clnt.c",0xcec);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x248) = uVar2;
      if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x248) != 0) {
        return 1;
      }
      uVar3 = CONCAT44(uVar4,0xcef);
      uVar2 = 0x41;
      goto LAB_14f68ba7e;
    }
  }
  uVar3 = CONCAT44(uVar4,0xce6);
  uVar2 = 0x44;
LAB_14f68ba7e:
  ossl_statem_fatal(param_1,0x50,0x19a,uVar2,"ssl\\statem\\statem_clnt.c",uVar3);
  return 0;
}

// tls_construct_client_certificate @ 14f68bab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_client_certificate(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    uVar5 = 1;
    if (*(longlong *)(param_1 + 0x790) == 0) {
      iVar2 = WPACKET_put_bytes__(param_2,0,1);
      if (iVar2 != 0) goto LAB_14f68bb64;
      uVar4 = CONCAT44(uVar5,0xde3);
    }
    else {
      iVar2 = WPACKET_sub_memcpy__
                        (param_2,*(longlong *)(param_1 + 0x790),*(undefined8 *)(param_1 + 0x798),1);
      if (iVar2 != 0) goto LAB_14f68bb64;
      uVar4 = CONCAT44(uVar5,0xde8);
    }
    uVar3 = 0x50;
    uVar5 = 0x44;
  }
  else {
LAB_14f68bb64:
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) == 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0x488);
    }
    iVar2 = ssl3_output_cert_chain(param_1,param_2,uVar4);
    if (iVar2 == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(*(int **)(param_1 + 8) + 0x30);
    if ((((*(byte *)(lVar1 + 0x60) & 8) != 0) || (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304))
       || ((iVar2 == 0x10000 ||
           ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0)))))) {
      return 1;
    }
    iVar2 = (**(code **)(lVar1 + 0x20))(param_1,0x92);
    if (iVar2 != 0) {
      return 1;
    }
    uVar4 = CONCAT44(uVar5,0xdfc);
    uVar5 = 0x6d;
    uVar3 = 0xffffffff;
  }
  ossl_statem_fatal(param_1,uVar3,0x1e4,uVar5,"ssl\\statem\\statem_clnt.c",uVar4);
  return 0;
}

// tls_construct_client_hello @ 14f68bc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_client_hello(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  size_t _Size;
  ulonglong in_stack_ffffffffffffffe8;
  undefined8 uVar9;
  ulonglong uVar8;
  
  uVar9 = 0x14f68bc25;
  puVar1 = *(undefined4 **)(param_1 + 0x142);
  iVar3 = ssl_set_client_hello_version();
  if (iVar3 != 0) {
    ossl_statem_fatal(param_1,0x50,0x1e7,iVar3,"ssl\\statem\\statem_clnt.c",0x45a);
    return false;
  }
  if ((((puVar1 == (undefined4 *)0x0) ||
       (iVar3 = ssl_version_supported(param_1,*puVar1,0), iVar3 == 0)) ||
      (iVar3 = SSL_SESSION_is_resumable(puVar1), iVar3 == 0)) &&
     ((param_1[0x136] == 0 && (iVar3 = ssl_get_new_session(param_1,0), iVar3 == 0)))) {
    return false;
  }
  _Size = 0x20;
  uVar8 = 0;
  uVar5 = uVar8;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    if (param_1[0x136] == 0) goto LAB_14f68bd02;
  }
  else {
    do {
      if (*(char *)(uVar5 + *(longlong *)(param_1 + 0x2a) + 0xb8) != '\0') goto LAB_14f68bd25;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
LAB_14f68bd02:
    iVar3 = ssl_fill_hello_random
                      (param_1,0,*(longlong *)(param_1 + 0x2a) + 0xb8,0x20,
                       in_stack_ffffffffffffffe8 & 0xffffffff00000000,uVar9);
    if (iVar3 < 1) {
      uVar9 = 0x47f;
      goto LAB_14f68c025;
    }
  }
LAB_14f68bd25:
  iVar3 = WPACKET_put_bytes__(param_2,(longlong)param_1[0x17b],2);
  if ((iVar3 == 0) ||
     (iVar3 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0x2a) + 0xb8,0x20), iVar3 == 0)) {
    uVar9 = 0x4a7;
LAB_14f68c025:
    ossl_statem_fatal(param_1,0x50,0x1e7,0x44,"ssl\\statem\\statem_clnt.c",uVar9);
    return false;
  }
  piVar2 = *(int **)(param_1 + 0x142);
  piVar6 = piVar2 + 0x56;
  if ((param_1[0xf] == 0) && (*piVar2 != 0x304)) {
    _Size = *(size_t *)(piVar2 + 0x54);
    if (*param_1 == 0x304) {
      *(size_t *)(param_1 + 0x154) = _Size;
      memcpy(param_1 + 0x14c,piVar6,_Size);
    }
  }
  else if ((*param_1 == 0x304) && ((param_1[0x173] & 0x100000U) != 0)) {
    piVar6 = param_1 + 0x14c;
    param_1[0x154] = 0x20;
    param_1[0x155] = 0;
    if ((param_1[0x136] == 0) && (iVar3 = RAND_bytes(piVar6,0x20), iVar3 < 1)) {
      uVar9 = 0x4b7;
      goto LAB_14f68bff6;
    }
  }
  else {
    _Size = 0;
  }
  iVar3 = WPACKET_start_sub_packet_len__(param_2,1);
  if ((iVar3 == 0) ||
     (((_Size != 0 && (iVar3 = WPACKET_memcpy(param_2,piVar6,_Size), iVar3 == 0)) ||
      (iVar3 = WPACKET_close(param_2), iVar3 == 0)))) {
    uVar9 = 0x4ca;
  }
  else {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) {
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x100);
      if ((0x100 < uVar5) ||
         (iVar3 = WPACKET_sub_memcpy__(param_2,*(longlong *)(param_1 + 0x2c),uVar5,1), iVar3 == 0))
      {
        uVar9 = 0x4d4;
        goto LAB_14f68bff6;
      }
    }
    iVar3 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar3 == 0) {
      uVar9 = 0x4dc;
    }
    else {
      uVar9 = SSL_get_ciphers(param_1);
      iVar3 = FUN_14f68a8b0(param_1,uVar9,param_2);
      if (iVar3 == 0) {
        return false;
      }
      iVar3 = WPACKET_close(param_2);
      if (iVar3 == 0) {
        uVar9 = 0x4e6;
      }
      else {
        iVar3 = WPACKET_start_sub_packet_len__(param_2,1);
        if (iVar3 == 0) {
          uVar9 = 0x4ed;
        }
        else {
          iVar3 = ssl_allow_compression(param_1);
          if ((((iVar3 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x166) + 0x100) != 0)) &&
              (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0 ||
               (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x340) < 0x304)))) &&
             (iVar3 = OPENSSL_sk_num(), 0 < iVar3)) {
            do {
              piVar6 = (int *)OPENSSL_sk_value(*(undefined8 *)
                                                (*(longlong *)(param_1 + 0x166) + 0x100),uVar8);
              iVar4 = WPACKET_put_bytes__(param_2,(longlong)*piVar6,1);
              if (iVar4 == 0) {
                uVar9 = 0x4fa;
                goto LAB_14f68bff6;
              }
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while ((int)uVar7 < iVar3);
          }
          iVar3 = WPACKET_put_bytes__(param_2,0,1);
          if ((iVar3 != 0) && (iVar3 = WPACKET_close(param_2), iVar3 != 0)) {
            iVar3 = tls_construct_extensions(param_1,param_2,0x80,0,0);
            return iVar3 != 0;
          }
          uVar9 = 0x503;
        }
      }
    }
  }
LAB_14f68bff6:
  ossl_statem_fatal(param_1,0x50,0x1e7,0x44,"ssl\\statem\\statem_clnt.c",uVar9);
  return false;
}

// tls_construct_client_key_exchange @ 14f68c060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_client_key_exchange(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if ((uVar1 & 0x1c8) == 0) {
LAB_14f68c0b1:
    if ((uVar1 & 0x41) == 0) {
      if ((uVar1 & 0x102) != 0) {
        iVar2 = FUN_14f68ad60(param_1,param_2);
        goto LAB_14f68c0c2;
      }
      if ((uVar1 & 0x84) != 0) {
        iVar2 = FUN_14f68aec0(param_1,param_2);
        goto LAB_14f68c0c2;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar2 = FUN_14f68b040(param_1,param_2);
        goto LAB_14f68c0c2;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar2 = FUN_14f68b980(param_1,param_2);
        goto LAB_14f68c0c2;
      }
      if ((uVar1 & 8) == 0) {
        ossl_statem_fatal(param_1,0x50,0x1e8,0x44,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar4,0xd1a)
                         );
        goto LAB_14f68c15c;
      }
    }
    else {
      iVar2 = FUN_14f68b6a0(param_1,param_2);
LAB_14f68c0c2:
      if (iVar2 == 0) goto LAB_14f68c15c;
    }
    uVar3 = 1;
  }
  else {
    uVar4 = 1;
    iVar2 = FUN_14f68b3c0();
    if (iVar2 != 0) goto LAB_14f68c0b1;
LAB_14f68c15c:
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0),
                      "ssl\\statem\\statem_clnt.c",0xd20);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = 0;
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0),
                      "ssl\\statem\\statem_clnt.c",0xd24);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = 0;
    uVar3 = 0;
  }
  return uVar3;
}

// tls_construct_end_of_early_data @ 14f68c1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_end_of_early_data(longlong param_1)

{
  if ((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) != 0) {
    ossl_statem_fatal(param_1,0x50,0x218,0x42,"ssl\\statem\\statem_clnt.c",0xf09,0x14f68c1fa);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 7;
  return 1;
}

// tls_construct_next_proto @ 14f68c260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_next_proto(longlong param_1,undefined8 param_2)

{
  int iVar1;
  size_t _Size;
  void *local_res8;
  undefined4 uVar2;
  
  uVar2 = 1;
  local_res8 = (void *)0x0;
  _Size = 0x20 - (ulonglong)((int)*(undefined8 *)(param_1 + 0x700) + 2U & 0x1f);
  iVar1 = WPACKET_sub_memcpy__
                    (param_2,*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x700),1);
  if (iVar1 != 0) {
    iVar1 = WPACKET_sub_allocate_bytes__(param_2,_Size,&local_res8,1);
    if (iVar1 != 0) {
      memset(local_res8,0,_Size);
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1aa,0x44,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar2,0xe43));
  return 0;
}

// tls_prepare_client_certificate @ 14f68c340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls_prepare_client_certificate(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  local_res20 = 0;
  local_res18 = 0;
  if (param_2 == 3) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x122) + 0x1b8);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x122) + 0x1c0));
      if (iVar2 < 0) {
        param_1[10] = 4;
        return 3;
      }
      if (iVar2 == 0) {
        ossl_statem_fatal(param_1,0x50,0x168,0xea,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar6,0xd9a)
                         );
        return 0;
      }
      param_1[10] = 1;
    }
    iVar2 = FUN_14f68a830(param_1);
    if (iVar2 != 0) {
      return (ulonglong)((param_1[0x1e2] != 4) + 1);
    }
  }
  else if (param_2 != 4) {
    ossl_statem_fatal(param_1,0x50,0x168,0x44,"ssl\\statem\\statem_clnt.c",0xdd8);
    return 0;
  }
  iVar2 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x166) + 0x1e0) == 0) {
LAB_14f68c46b:
    if (*(code **)(*(longlong *)(param_1 + 0x166) + 0xb8) != (code *)0x0) {
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x166) + 0xb8))
                        (param_1,&local_res20,&local_res18);
    }
  }
  else {
    uVar4 = SSL_get_client_CA_list(param_1);
    iVar2 = ENGINE_load_ssl_client_cert
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x1e0),param_1,uVar4,
                       &local_res20,&local_res18,0,0,0);
    if (iVar2 == 0) goto LAB_14f68c46b;
  }
  if (iVar2 < 0) {
    param_1[10] = 4;
    return 4;
  }
  param_1[10] = 1;
  if (iVar2 == 1) {
    if ((local_res18 == 0) || (local_res20 == 0)) {
      iVar2 = 0;
      ERR_put_error(0x14,0x168,0x6a,"ssl\\statem\\statem_clnt.c",0xdbc);
    }
    else {
      iVar3 = SSL_use_certificate(param_1);
      if (iVar3 != 0) {
        iVar3 = SSL_use_PrivateKey(param_1,local_res18);
        if (iVar3 != 0) goto LAB_14f68c514;
      }
      iVar2 = 0;
    }
  }
LAB_14f68c514:
  X509_free(local_res20);
  EVP_PKEY_free(local_res18);
  if (iVar2 != 0) {
    iVar2 = FUN_14f68a830(param_1);
    if (iVar2 != 0) goto LAB_14f68c598;
  }
  if (*param_1 == 0x300) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x248) = 0;
    ssl3_send_alert(param_1,1,0x29);
    return 2;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x248) = 2;
  uVar5 = ssl3_digest_cached_records(param_1,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
LAB_14f68c598:
  return (ulonglong)((param_1[0x1e2] != 4) + 1);
}

// FUN_14f68c600 @ 14f68c600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68c600(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res8;
  undefined4 uVar3;
  undefined8 uVar2;
  
  uVar3 = 1;
  local_res8 = 0;
  EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0x468));
  uVar2 = CONCAT44(uVar3,1);
  *(undefined8 *)(param_1 + 0x468) = 0;
  iVar1 = tls_collect_extensions(param_1,param_2,0x800,&local_res8,0,uVar2);
  if (iVar1 != 0) {
    uVar2 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),1);
    iVar1 = tls_parse_all_extensions(param_1,0x800,local_res8,0,0,uVar2);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (iVar1 != 0) {
      CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0x6ef);
      local_res8 = 0;
      if ((*(longlong *)(param_1 + 0x720) == 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) != 0)) {
        ossl_statem_fatal(param_1,0x2f,0x262,0xd6,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar3,0x6fd)
                         );
      }
      else {
        iVar1 = create_synthetic_message_hash(param_1,0,0,0,0);
        if (iVar1 != 0) {
          iVar1 = ssl3_finish_mac(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                                  *(longlong *)(param_1 + 0x98) + 4);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0x718);
  return 0;
}

// tls_process_cert_status @ 14f68c760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte tls_process_cert_status(void)

{
  int iVar1;
  
  iVar1 = tls_process_cert_status_body();
  return -(iVar1 != 0) & 3;
}

// tls_process_cert_status_body @ 14f68c790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_cert_status_body(longlong param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = 1;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
LAB_14f68c8d2:
    ossl_statem_fatal(param_1,0x32,0x1ef,0x149,"ssl\\statem\\statem_clnt.c",0x100000ad2);
    return 0;
  }
  pcVar2 = (char *)*param_2;
  cVar1 = *pcVar2;
  *param_2 = (longlong)(pcVar2 + 1);
  param_2[1] = lVar4 - 1U;
  if (cVar1 != '\x01') goto LAB_14f68c8d2;
  if (2 < lVar4 - 1U) {
    uVar6 = (ulonglong)CONCAT21(CONCAT11(pcVar2[1],pcVar2[2]),pcVar2[3]);
    *param_2 = (longlong)(pcVar2 + 4);
    param_2[1] = lVar4 - 4U;
    if (lVar4 - 4U == uVar6) {
      lVar4 = CRYPTO_malloc(uVar6,"ssl\\statem\\statem_clnt.c",0xadb);
      *(longlong *)(param_1 + 0x668) = lVar4;
      if (lVar4 == 0) {
        *(undefined8 *)(param_1 + 0x670) = 0;
        uVar5 = 0x50;
        uVar8 = CONCAT44(uVar7,0xadf);
        uVar7 = 0x41;
      }
      else {
        *(ulonglong *)(param_1 + 0x670) = uVar6;
        iVar3 = FUN_14f6888d0(param_2,lVar4,uVar6);
        if (iVar3 != 0) {
          return 1;
        }
        uVar5 = 0x32;
        uVar8 = CONCAT44(uVar7,0xae5);
        uVar7 = 0x9f;
      }
      goto LAB_14f68c88a;
    }
  }
  uVar5 = 0x32;
  uVar8 = 0x100000ad8;
  uVar7 = 0x9f;
LAB_14f68c88a:
  ossl_statem_fatal(param_1,uVar5,0x1ef,uVar7,"ssl\\statem\\statem_clnt.c",uVar8);
  return 0;
}

// tls_process_certificate_request @ 14f68c920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_certificate_request(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  undefined4 uVar9;
  byte *local_48;
  ulonglong uStack_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  uStack_30 = 0x14f68c945;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x310) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x314) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x318) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x31c) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 800) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x324) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x328) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x32c) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x330) = 0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    local_res8 = 0;
    if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
      return 1;
    }
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x250),"ssl\\statem\\statem_clnt.c",
                0x9a2);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x250) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 600) = 0;
    CRYPTO_free(*(undefined8 *)(param_1 + 0x790),"ssl\\statem\\statem_clnt.c",0x9a5);
    *(undefined8 *)(param_1 + 0x790) = 0;
    *(undefined8 *)(param_1 + 0x798) = 0;
    pbVar6 = (byte *)*param_2;
    uVar3 = param_2[1];
    if (uVar3 == 0) {
LAB_14f68cba0:
      uStack_40 = uVar3;
      local_48 = pbVar6;
      uVar9 = 0x9ad;
      goto LAB_14f68cdcc;
    }
    local_48 = pbVar6 + 1;
    uStack_40 = (ulonglong)*pbVar6;
    if (uVar3 - 1 < (ulonglong)*pbVar6) goto LAB_14f68cba0;
    *param_2 = local_48 + uStack_40;
    param_2[1] = (uVar3 - 1) - uStack_40;
    iVar2 = FUN_14f688c70(&local_48,param_1 + 0x790);
    pbVar6 = local_48;
    uVar3 = uStack_40;
    if (iVar2 == 0) goto LAB_14f68cba0;
    iVar2 = FUN_14f688a50(param_2,local_38);
    if (iVar2 != 0) {
      iVar2 = tls_collect_extensions(param_1,local_38,0x4000,&local_res8,0,1);
      if ((iVar2 == 0) ||
         (iVar2 = tls_parse_all_extensions(param_1,0x4000,local_res8,0,0,1), iVar2 == 0)) {
        CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0x9bd);
        return 0;
      }
      CRYPTO_free(local_res8,"ssl\\statem\\statem_clnt.c",0x9c0);
      iVar2 = tls1_process_sigalgs(param_1);
      if (iVar2 == 0) {
        uVar9 = 0x9c4;
        uVar5 = 0x50;
        uVar7 = 0x10f;
        goto LAB_14f68cdda;
      }
      goto LAB_14f68cd64;
    }
    uVar9 = 0x9b4;
    uVar7 = 0x10f;
  }
  else {
    local_48 = (byte *)*param_2;
    uStack_40 = param_2[1];
    if (uStack_40 == 0) {
LAB_14f68cdbd:
      uVar9 = 0x9ce;
    }
    else {
      uVar3 = (ulonglong)*local_48;
      pbVar6 = local_48 + 1;
      uVar8 = (ulonglong)*local_48;
      if (uStack_40 - 1 < uVar3) goto LAB_14f68cdbd;
      uStack_40 = (uStack_40 - 1) - uVar3;
      local_48 = pbVar6 + uVar3;
      *param_2 = local_48;
      param_2[1] = uStack_40;
      lVar1 = *(longlong *)(param_1 + 0xa8);
      CRYPTO_free(*(undefined8 *)(lVar1 + 0x250),
                  "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                  ,0x1c5);
      *(undefined8 *)(lVar1 + 0x250) = 0;
      *(undefined8 *)(lVar1 + 600) = 0;
      if (uVar8 != 0) {
        lVar4 = CRYPTO_memdup(pbVar6,uVar8,
                              "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                              ,0x1ce);
        *(longlong *)(lVar1 + 0x250) = lVar4;
        if (lVar4 == 0) {
          uVar5 = 0x50;
          uVar9 = 0x9d5;
          uVar7 = 0x44;
          goto LAB_14f68cdda;
        }
        *(ulonglong *)(lVar1 + 600) = uVar8;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) {
LAB_14f68cd51:
        iVar2 = parse_ca_names(param_1,param_2);
        if (iVar2 == 0) {
          return 0;
        }
LAB_14f68cd64:
        if (param_2[1] == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x248) = 1;
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
              (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) &&
             ((iVar2 != 0x10000 && (*(int *)(param_1 + 0x788) != 4)))) {
            return 3;
          }
          return 2;
        }
        uVar9 = 0x9ff;
      }
      else {
        pbVar6 = (byte *)*param_2;
        uVar3 = param_2[1];
        if (1 < uVar3) {
          local_48 = pbVar6 + 2;
          uStack_40 = (ulonglong)CONCAT11(*pbVar6,pbVar6[1]);
          if (uStack_40 <= uVar3 - 2) {
            *param_2 = local_48 + uStack_40;
            param_2[1] = (uVar3 - 2) - uStack_40;
            iVar2 = tls1_save_sigalgs(param_1,&local_48,0);
            if (iVar2 == 0) {
              uVar9 = 0x9ea;
              uVar5 = 0x50;
              uVar7 = 0x168;
              goto LAB_14f68cdda;
            }
            iVar2 = tls1_process_sigalgs(param_1);
            if (iVar2 == 0) {
              uVar9 = 0x9f0;
              uVar5 = 0x50;
              uVar7 = 0x41;
              goto LAB_14f68cdda;
            }
            goto LAB_14f68cd51;
          }
        }
        uVar9 = 0x9df;
        local_48 = pbVar6;
        uStack_40 = uVar3;
      }
    }
LAB_14f68cdcc:
    uVar7 = 0x9f;
  }
  uVar5 = 0x32;
LAB_14f68cdda:
  ossl_statem_fatal(param_1,uVar5,0x169,uVar7,"ssl\\statem\\statem_clnt.c",uVar9);
  return 0;
}

// FUN_14f68ce10 @ 14f68ce10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68ce10(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_res10 [3];
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar1 = (undefined1 *)*param_2;
  uVar3 = param_2[1];
  local_res10[0] = 0;
  if (1 < uVar3) {
    local_18 = puVar1 + 2;
    uStack_10 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uStack_10 <= uVar3 - 2) {
      uVar3 = (uVar3 - 2) - uStack_10;
      puVar1 = local_18 + uStack_10;
      if (uVar3 == 0) {
        *param_2 = local_18 + uStack_10;
        param_2[1] = 0;
        puVar1 = local_18;
        uVar3 = uStack_10;
        if (param_2[1] == 0) {
          iVar2 = tls_collect_extensions(param_1,&local_18,0x400,local_res10,0,1);
          if (iVar2 != 0) {
            iVar2 = tls_parse_all_extensions(param_1,0x400,local_res10[0],0,0,1);
            if (iVar2 != 0) {
              CRYPTO_free(local_res10[0],"ssl\\statem\\statem_clnt.c",0xe7f);
              return 3;
            }
          }
          goto LAB_14f68cf4c;
        }
      }
    }
  }
  uStack_10 = uVar3;
  local_18 = puVar1;
  ossl_statem_fatal(param_1,0x32,0x1bc,0x9f,"ssl\\statem\\statem_clnt.c",0xe72);
LAB_14f68cf4c:
  CRYPTO_free(local_res10[0],"ssl\\statem\\statem_clnt.c",0xe83);
  return 0;
}

// tls_process_hello_req @ 14f68cf80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_hello_req(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    ossl_statem_fatal(param_1,0x32,0x1fb,0x9f,"ssl\\statem\\statem_clnt.c",0xe52,0x14f68cf8a);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5cc) & 0x40000000) != 0) {
    ssl3_send_alert(param_1,1,100);
    return 1;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    SSL_renegotiate();
    return 1;
  }
  SSL_renegotiate_abbreviated(param_1);
  return 1;
}

// tls_process_initial_server_flight @ 14f68d030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_initial_server_flight(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = 1;
  iVar2 = ssl3_check_cert_and_algorithm();
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x640) != -1) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x228);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x230));
      if (iVar2 == 0) {
        uVar5 = CONCAT44(uVar3,0xb14);
        uVar3 = 0x71;
        uVar4 = 0x148;
      }
      else {
        if (-1 < iVar2) goto LAB_14f68d0c1;
        uVar5 = CONCAT44(uVar3,0xb1a);
        uVar3 = 0x50;
        uVar4 = 0x126;
      }
      ossl_statem_fatal(param_1,uVar3,0x1ba,uVar4,"ssl\\statem\\statem_clnt.c",uVar5);
      return 0;
    }
  }
LAB_14f68d0c1:
  if (((*(longlong *)(param_1 + 0x748) != 0) && (iVar2 = ssl_validate_ct(param_1), iVar2 == 0)) &&
     ((*(byte *)(param_1 + 0x558) & 1) != 0)) {
    return 0;
  }
  return 1;
}

// tls_process_key_exchange @ 14f68d100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_key_exchange(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined4 uVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = param_2[1];
  local_res10 = 0;
  lVar12 = 0;
  local_res8 = 0;
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408) = 0;
  if (((uVar3 & 0x1c8) != 0) && (iVar7 = FUN_14f68ef80(param_1,param_2), lVar13 = 0, iVar7 == 0))
  goto LAB_14f68d565;
  lVar13 = lVar12;
  if ((uVar3 & 0x48) != 0) {
LAB_14f68d4f9:
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0x44) == 0) &&
       ((uVar3 & 0x1c8) == 0)) {
      iVar7 = ssl3_check_cert_and_algorithm(param_1);
      if (iVar7 == 0) goto LAB_14f68d565;
      uVar14 = 0x979;
      uVar11 = 0x186;
    }
    else {
      if (param_2[1] == 0) {
        return 3;
      }
      uVar14 = 0x981;
      uVar11 = 0x99;
    }
    goto LAB_14f68d546;
  }
  if ((uVar3 & 0x20) == 0) {
    if ((uVar3 & 0x102) != 0) {
      iVar7 = FUN_14f68e990(param_1,param_2,&local_res8);
      goto LAB_14f68d1e5;
    }
    if ((uVar3 & 0x84) != 0) {
      iVar7 = FUN_14f68ed70(param_1,param_2,&local_res8);
      goto LAB_14f68d1e5;
    }
    if (uVar3 == 0) goto LAB_14f68d4f9;
    uVar14 = 0x8ff;
    uVar9 = 10;
    uVar11 = 0xf4;
    goto LAB_14f68d552;
  }
  iVar7 = FUN_14f68f140(param_1,param_2,&local_res8);
LAB_14f68d1e5:
  lVar8 = local_res8;
  if (iVar7 == 0) goto LAB_14f68d565;
  if (local_res8 == 0) goto LAB_14f68d4f9;
  uVar4 = param_2[1];
  uVar10 = uStack_40 - uVar4;
  local_res8 = 0;
  if ((uStack_40 < uVar10) || (uVar6 = CONCAT44(uStack_44,local_48), 0x7fffffffffffffff < uVar10)) {
    uVar14 = 0x914;
    uVar11 = 0x44;
LAB_14f68d546:
    uVar9 = 0x32;
  }
  else {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) {
      iVar7 = tls1_set_peer_legacy_sigalg(param_1,lVar8);
      if (iVar7 == 0) {
        uVar14 = 0x926;
        uVar9 = 0x50;
        uVar11 = 0x44;
        goto LAB_14f68d552;
      }
    }
    else {
      if (uVar4 < 2) {
        uVar14 = 0x91d;
        uVar11 = 0xa0;
        goto LAB_14f68d546;
      }
      puVar5 = (undefined1 *)*param_2;
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      *param_2 = (longlong)(puVar5 + 2);
      param_2[1] = uVar4 - 2;
      iVar7 = tls12_check_peer_sigalg(param_1,CONCAT11(uVar1,uVar2),lVar8);
      if (iVar7 < 1) goto LAB_14f68d565;
    }
    iVar7 = tls1_lookup_md(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x308),&local_res8);
    if (iVar7 == 0) {
      uVar14 = 0x92c;
      uVar9 = 0x50;
      uVar11 = 0x44;
      lVar12 = 0;
    }
    else {
      iVar7 = FUN_14f688a50(param_2,&local_48);
      if ((iVar7 == 0) || (param_2[1] != 0)) {
        uVar14 = 0x938;
        uVar11 = 0x9f;
        goto LAB_14f68d546;
      }
      iVar7 = EVP_PKEY_size(lVar8);
      uVar4 = uStack_40;
      if (iVar7 < 0) {
        uVar9 = 0x50;
        uVar14 = 0x93e;
        uVar11 = 0x44;
      }
      else {
        if ((ulonglong)(longlong)iVar7 < uStack_40) {
          uVar14 = 0x948;
          uVar11 = 0x108;
          goto LAB_14f68d546;
        }
        lVar12 = EVP_MD_CTX_new();
        if (lVar12 == 0) {
          uVar14 = 0x94f;
          uVar9 = 0x50;
          uVar11 = 0x41;
        }
        else {
          iVar7 = EVP_DigestVerifyInit(lVar12,&local_res10,local_res8,0,lVar8);
          if (iVar7 < 1) {
            uVar9 = 0x50;
            uVar14 = 0x955;
            uVar11 = 6;
          }
          else {
            lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x308);
            if (((lVar13 == 0) || (*(int *)(lVar13 + 0x14) != 0x390)) ||
               ((iVar7 = RSA_pkey_ctx_ctrl(local_res10,0xffffffff,0x1001,6,0), 0 < iVar7 &&
                (iVar7 = RSA_pkey_ctx_ctrl(local_res10,0x18,0x1002,0xffffffff,0), 0 < iVar7)))) {
              lVar8 = construct_key_exchange_tbs(param_1,local_res18,uVar6,uVar10);
              lVar13 = lVar12;
              if (lVar8 == 0) goto LAB_14f68d565;
              iVar7 = EVP_DigestVerify(lVar12,CONCAT44(uStack_44,local_48),uVar4,local_res18[0],
                                       lVar8);
              CRYPTO_free(local_res18[0],"ssl\\statem\\statem_clnt.c",0x96a);
              if (0 < iVar7) {
                EVP_MD_CTX_free(lVar12);
                return 3;
              }
              uVar9 = 0x33;
              uVar14 = 0x96d;
              uVar11 = 0x7b;
            }
            else {
              uVar9 = 0x50;
              uVar14 = 0x95d;
              uVar11 = 6;
            }
          }
        }
      }
    }
  }
LAB_14f68d552:
  ossl_statem_fatal(param_1,uVar9,0x16d,uVar11,"ssl\\statem\\statem_clnt.c",uVar14);
  lVar13 = lVar12;
LAB_14f68d565:
  EVP_MD_CTX_free(lVar13);
  return 0;
}

// tls_process_new_session_ticket @ 14f68d590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_new_session_ticket(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  __time64_t _Var10;
  undefined8 uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  byte bVar17;
  uint uVar18;
  bool bVar20;
  uint local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffff90;
  byte *local_48;
  longlong lStack_40;
  ulonglong uVar19;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  lStack_40 = 0x14f68d5aa;
  uVar14 = 0;
  uVar13 = param_2[1];
  pbVar12 = (byte *)0x0;
  bVar17 = 0;
  local_res18[0] = 0;
  if (uVar13 < 4) {
LAB_14f68dafb:
    uVar14 = 0x32;
    uVar11 = 0xa26;
    uVar16 = 0x9f;
  }
  else {
    puVar5 = (undefined1 *)*param_2;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    param_2[1] = uVar13 - 4;
    *param_2 = (longlong)(puVar5 + 4);
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
      if (3 < uVar13 - 4) {
        uVar14 = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]);
        *param_2 = (longlong)(puVar5 + 8);
        param_2[1] = uVar13 - 8;
        local_48 = (byte *)*param_2;
        lStack_40 = param_2[1];
        if (lStack_40 != 0) {
          bVar17 = *local_48;
          uVar13 = (ulonglong)bVar17;
          pbVar12 = local_48 + 1;
          if (uVar13 <= lStack_40 - 1U) {
            local_48 = pbVar12 + uVar13;
            lStack_40 = (lStack_40 - 1U) - uVar13;
            *param_2 = (longlong)local_48;
            param_2[1] = lStack_40;
            goto LAB_14f68d6c2;
          }
        }
      }
      goto LAB_14f68dafb;
    }
LAB_14f68d6c2:
    if ((ulonglong)param_2[1] < 2) goto LAB_14f68dafb;
    puVar5 = (undefined1 *)*param_2;
    uVar13 = param_2[1] - 2;
    uVar18 = (uint)CONCAT11(*puVar5,puVar5[1]);
    uVar19 = (ulonglong)uVar18;
    param_2[1] = uVar13;
    *param_2 = (longlong)(puVar5 + 2);
    piVar6 = *(int **)(param_1 + 8);
    uVar15 = *(uint *)(*(longlong *)(piVar6 + 0x30) + 0x60) & 8;
    if (((uVar15 == 0) && (0x303 < *piVar6)) && (*piVar6 != 0x10000)) {
      if ((uVar18 == 0) || (uVar13 < uVar19)) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
    }
    else {
      bVar20 = uVar13 != uVar19;
    }
    if (bVar20) goto LAB_14f68dafb;
    if (uVar18 == 0) {
      return 3;
    }
    if ((((uVar15 == 0) && (0x303 < *piVar6)) && (*piVar6 != 0x10000)) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x150) != 0)) {
      lVar9 = ssl_session_dup(*(undefined8 *)(param_1 + 0x508),0);
      if (lVar9 != 0) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x768) + 0x48) & 1) != 0) &&
           ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
             (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) || (iVar7 == 0x10000)))) {
          SSL_CTX_remove_session(*(longlong *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x508));
        }
        SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
        *(longlong *)(param_1 + 0x508) = lVar9;
        goto LAB_14f68d7ee;
      }
      uVar11 = 0xa44;
      uVar14 = 0x50;
      uVar16 = 0x41;
    }
    else {
LAB_14f68d7ee:
      _Var10 = _time64((__time64_t *)0x0);
      *(int *)(*(longlong *)(param_1 + 0x508) + 0x1d4) = (int)_Var10;
      CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210),
                  "ssl\\statem\\statem_clnt.c",0xa5c);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210) = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x218) = 0;
      uVar11 = CRYPTO_malloc(uVar19,"ssl\\statem\\statem_clnt.c",0xa60);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210) = uVar11;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x210);
      if (lVar9 == 0) {
        uVar14 = 0x50;
        uVar11 = 0xa63;
        uVar16 = 0x41;
      }
      else {
        iVar7 = FUN_14f6888d0(param_2,lVar9,uVar19);
        if (iVar7 == 0) {
          uVar14 = 0x32;
          uVar11 = 0xa68;
          uVar16 = 0x9f;
        }
        else {
          *(uint *)(*(longlong *)(param_1 + 0x508) + 0x220) =
               CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
          *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x224) = uVar14;
          *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x218) = uVar19;
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
              (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
            iVar7 = FUN_14f688820(param_2,&local_48);
            if ((iVar7 == 0) || (param_2[1] != 0)) {
              uVar14 = 0x32;
              uVar11 = CONCAT44(uVar16,0xa77);
              uVar16 = 0x9f;
              goto LAB_14f68db16;
            }
            iVar7 = tls_collect_extensions
                              (param_1,&local_48,0x2000,local_res18,0,CONCAT44(uVar16,1));
            if ((iVar7 == 0) ||
               (iVar7 = tls_parse_all_extensions(param_1,0x2000,local_res18[0],0,0,1), iVar7 == 0))
            goto LAB_14f68db26;
          }
          lVar9 = *(longlong *)(param_1 + 0x508);
          uVar11 = EVP_sha256();
          iVar7 = EVP_Digest(*(undefined8 *)(lVar9 + 0x210),uVar19,lVar9 + 0x158,local_res10,uVar11,
                             0);
          if (iVar7 == 0) {
            uVar11 = 0xa99;
            uVar14 = 0x50;
            uVar16 = 6;
          }
          else {
            *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x150) = (ulonglong)local_res10[0];
            *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1b0) = 0;
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
                (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) || (iVar7 == 0x10000)) {
              return 3;
            }
            uVar11 = ssl_handshake_md(param_1);
            iVar7 = EVP_MD_size(uVar11);
            if (-1 < iVar7) {
              iVar8 = tls13_hkdf_expand(param_1,uVar11,param_1 + 500,"resumption",10,pbVar12,bVar17,
                                        *(longlong *)(param_1 + 0x508) + 0x50,(longlong)iVar7,1);
              if (iVar8 != 0) {
                *(longlong *)(*(longlong *)(param_1 + 0x508) + 8) = (longlong)iVar7;
                CRYPTO_free(local_res18[0],"ssl\\statem\\statem_clnt.c",0xabb);
                ssl_update_cache(param_1,1);
                return 1;
              }
              goto LAB_14f68db26;
            }
            uVar14 = 0x50;
            uVar11 = 0xaaa;
            uVar16 = 0x44;
          }
        }
      }
    }
  }
LAB_14f68db16:
  ossl_statem_fatal(param_1,uVar14,0x16e,uVar16,"ssl\\statem\\statem_clnt.c",uVar11);
LAB_14f68db26:
  CRYPTO_free(local_res18[0],"ssl\\statem\\statem_clnt.c",0xac2);
  return 0;
}

// tls_process_server_certificate @ 14f68db60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong tls_process_server_certificate(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 local_res20;
  undefined4 uVar18;
  undefined1 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  uStack_40 = 0x14f68db7a;
  lVar11 = 0;
  lVar12 = 0;
  lVar8 = OPENSSL_sk_new_null();
  lVar9 = lVar11;
  if (lVar8 == 0) {
    uVar18 = 0x72b;
    uVar10 = 0x50;
    uVar15 = 0x41;
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
      if (param_2[1] != 0) {
        cVar1 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        param_2[1] = param_2[1] + -1;
        if (cVar1 == '\0') goto LAB_14f68dbf8;
      }
    }
    else {
LAB_14f68dbf8:
      if (2 < (ulonglong)param_2[1]) {
        puVar5 = (undefined1 *)*param_2;
        uVar14 = param_2[1] - 3;
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        uVar4 = puVar5[2];
        param_2[1] = uVar14;
        *param_2 = (longlong)(puVar5 + 3);
        if ((uVar14 == CONCAT21(CONCAT11(uVar2,uVar3),uVar4)) && (lVar17 = lVar11, uVar14 != 0)) {
          do {
            if ((ulonglong)param_2[1] < 3) {
LAB_14f68e06c:
              ossl_statem_fatal(param_1,0x32,0x16f,0x87,"ssl\\statem\\statem_clnt.c",0x73d);
              lVar9 = lVar11;
              goto LAB_14f68e0c8;
            }
            puVar6 = (undefined1 *)*param_2;
            uVar14 = param_2[1] - 3;
            puVar5 = puVar6 + 3;
            uVar13 = (uint)CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]);
            *param_2 = (longlong)puVar5;
            uVar16 = (ulonglong)uVar13;
            param_2[1] = uVar14;
            if (uVar14 < uVar16) goto LAB_14f68e06c;
            param_2[1] = uVar14 - uVar16;
            *param_2 = (longlong)(puVar5 + uVar13);
            local_58 = puVar5;
            lVar9 = d2i_X509(0,&local_58);
            if (lVar9 == 0) {
              uVar10 = 0x2a;
              uVar18 = 0x745;
              uVar15 = 0xd;
              goto LAB_14f68e0b0;
            }
            if (local_58 != puVar5 + uVar16) {
              uVar10 = 0x32;
              uVar18 = 0x74b;
              uVar15 = 0x87;
              goto LAB_14f68e0b0;
            }
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
                (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
              local_res20 = 0;
              iVar7 = FUN_14f688a50(param_2,local_48);
              if (iVar7 == 0) {
                uVar18 = 0x756;
                uVar10 = 0x32;
                uVar15 = 0x10f;
                goto LAB_14f68e0b0;
              }
              iVar7 = tls_collect_extensions(param_1,local_48,0x1000,&local_res20,0,lVar17 == 0);
              if ((iVar7 == 0) ||
                 (iVar7 = tls_parse_all_extensions
                                    (param_1,0x1000,local_res20,lVar9,lVar17,param_2[1] == 0),
                 iVar7 == 0)) {
                CRYPTO_free(local_res20,"ssl\\statem\\statem_clnt.c",0x75f);
                goto LAB_14f68e0c8;
              }
              CRYPTO_free(local_res20,"ssl\\statem\\statem_clnt.c",0x763);
            }
            iVar7 = OPENSSL_sk_push(lVar8,lVar9);
            if (iVar7 == 0) {
              ossl_statem_fatal(param_1,0x50,0x16f,0x41,"ssl\\statem\\statem_clnt.c",0x769);
              lVar11 = lVar12;
              goto LAB_14f68e0c8;
            }
            lVar17 = lVar17 + 1;
          } while (param_2[1] != 0);
          iVar7 = ssl_verify_cert_chain(param_1,lVar8);
          if ((*(int *)(param_1 + 0x558) == 0) || (0 < iVar7)) {
            ERR_clear_error();
            if (iVar7 < 2) {
              *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1c0) = lVar8;
              uVar10 = OPENSSL_sk_value(lVar8,0);
              lVar8 = 0;
              lVar11 = X509_get0_pubkey(uVar10);
              if ((lVar11 == 0) || (iVar7 = EVP_PKEY_missing_parameters(lVar11), iVar7 != 0)) {
                ossl_statem_fatal(param_1,0x50,0x16f,0xef,"ssl\\statem\\statem_clnt.c",0x798);
                lVar11 = lVar12;
                lVar9 = 0;
              }
              else {
                lVar11 = ssl_cert_lookup_by_pkey(lVar11,local_50);
                if (lVar11 == 0) {
                  ossl_statem_fatal(param_1,0x2f,0x16f,0xf7,"ssl\\statem\\statem_clnt.c",0x7a0);
                  lVar11 = lVar12;
                  lVar9 = 0;
                }
                else if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) ==
                            0) && (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) &&
                         (iVar7 != 0x10000)) ||
                        ((*(uint *)(lVar11 + 4) &
                         *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20)) !=
                         0)) {
                  X509_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
                  X509_up_ref(uVar10);
                  *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8) = uVar10;
                  *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1c8) =
                       *(undefined4 *)(param_1 + 0x5a8);
                  lVar9 = 0;
                  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0)
                      || (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) ||
                     ((iVar7 == 0x10000 ||
                      (iVar7 = ssl_handshake_hash(param_1,param_1 + 0x490,0x40,param_1 + 0x4d0),
                      lVar11 = lVar12, iVar7 != 0)))) {
                    lVar11 = 3;
                  }
                }
                else {
                  ossl_statem_fatal(param_1,0x2f,0x16f,0x17f,"ssl\\statem\\statem_clnt.c",0x7ad);
                  lVar11 = lVar12;
                  lVar9 = 0;
                }
              }
            }
            else {
              ossl_statem_fatal(param_1,0x28,0x16f,iVar7,"ssl\\statem\\statem_clnt.c",0x787);
              lVar9 = lVar11;
            }
          }
          else {
            uVar15 = ssl_x509err2alert(*(undefined4 *)(param_1 + 0x5a8));
            ossl_statem_fatal(param_1,uVar15,0x16f,0x86,"ssl\\statem\\statem_clnt.c",0x781);
            lVar9 = lVar11;
          }
          goto LAB_14f68e0c8;
        }
      }
    }
    uVar10 = 0x32;
    uVar18 = 0x735;
    uVar15 = 0x9f;
  }
LAB_14f68e0b0:
  ossl_statem_fatal(param_1,uVar10,0x16f,uVar15,"ssl\\statem\\statem_clnt.c",uVar18);
LAB_14f68e0c8:
  X509_free(lVar9);
  OPENSSL_sk_pop_free(lVar8,X509_free);
  return lVar11;
}

// tls_process_server_done @ 14f68e100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_process_server_done(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_2 + 8) != 0) {
    ossl_statem_fatal(param_1,0x32,0x170,0x9f,"ssl\\statem\\statem_clnt.c",0x100000b30);
    return false;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c) & 0x20) != 0) {
    iVar1 = SRP_Calc_A_param(param_1);
    if (iVar1 < 1) {
      ossl_statem_fatal(param_1,0x50,0x170,0x169,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar2,0xb37))
      ;
      return false;
    }
  }
  iVar1 = tls_process_initial_server_flight(param_1);
  return iVar1 != 0;
}

// tls_process_server_hello @ 14f68e1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_server_hello(int *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  byte *_Buf1;
  undefined4 uVar14;
  uint uVar15;
  ulonglong _Size;
  int local_res10 [2];
  longlong local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 uVar16;
  byte *local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uStack_40 = 0x14f68e1dd;
  bVar7 = false;
  local_res20 = 0;
  if ((ulonglong)param_2[1] < 2) {
    uVar9 = 0x588;
    goto LAB_14f68e934;
  }
  puVar4 = (undefined1 *)*param_2;
  uVar12 = param_2[1] - 2;
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *param_2 = (longlong)(puVar4 + 2);
  param_2[1] = uVar12;
  if ((((*param_1 == 0x304) && (CONCAT11(uVar1,uVar2) == 0x303)) && (0x1f < uVar12)) &&
     (iVar8 = memcmp(&hrrrandom,puVar4 + 2,0x20), iVar8 == 0)) {
    if (param_1[0x136] == 0) {
      param_1[0x136] = 1;
      bVar7 = true;
      if (0x1f < (ulonglong)param_2[1]) {
        *param_2 = *param_2 + 0x20;
        param_2[1] = param_2[1] - 0x20;
        goto LAB_14f68e2d5;
      }
      uVar9 = 0x59a;
      goto LAB_14f68e934;
    }
    uVar9 = 0x593;
    uVar13 = 10;
    uVar14 = 0xf4;
    goto LAB_14f68e942;
  }
  if ((ulonglong)param_2[1] < 0x20) {
    uVar9 = 0x5a0;
    goto LAB_14f68e934;
  }
  puVar5 = (undefined8 *)*param_2;
  lVar11 = *(longlong *)(param_1 + 0x2a);
  uVar9 = puVar5[1];
  *(undefined8 *)(lVar11 + 0x98) = *puVar5;
  *(undefined8 *)(lVar11 + 0xa0) = uVar9;
  uVar9 = puVar5[3];
  *(undefined8 *)(lVar11 + 0xa8) = puVar5[2];
  *(undefined8 *)(lVar11 + 0xb0) = uVar9;
  *param_2 = *param_2 + 0x20;
  param_2[1] = param_2[1] + -0x20;
LAB_14f68e2d5:
  local_60 = (byte *)*param_2;
  lStack_58 = param_2[1];
  if (lStack_58 == 0) {
LAB_14f68e918:
    uVar9 = 0x5a8;
LAB_14f68e934:
    uVar14 = 0x9f;
LAB_14f68e93a:
    uVar13 = 0x32;
  }
  else {
    uVar12 = (ulonglong)*local_60;
    _Buf1 = local_60 + 1;
    _Size = (ulonglong)*local_60;
    if (lStack_58 - 1U < uVar12) goto LAB_14f68e918;
    lStack_58 = (lStack_58 - 1U) - uVar12;
    local_60 = _Buf1 + uVar12;
    *param_2 = (longlong)local_60;
    param_2[1] = lStack_58;
    if (0x20 < uVar12) {
      uVar9 = 0x5af;
      uVar13 = 0x2f;
      uVar14 = 300;
      goto LAB_14f68e942;
    }
    uVar12 = param_2[1];
    if (uVar12 < 2) {
      uVar9 = 0x5b5;
      goto LAB_14f68e934;
    }
    local_res18 = *param_2;
    *param_2 = local_res18 + 2;
    param_2[1] = uVar12 - 2;
    if (uVar12 - 2 == 0) {
      uVar9 = 0x5bb;
      goto LAB_14f68e934;
    }
    bVar3 = *(byte *)(local_res18 + 2);
    *param_2 = local_res18 + 3;
    param_2[1] = uVar12 - 3;
    if ((uVar12 - 3 != 0) || (bVar7)) {
      iVar8 = FUN_14f688820(param_2,&local_50);
      if ((iVar8 != 0) && (param_2[1] == 0)) {
        if (!bVar7) goto LAB_14f68e39f;
        goto LAB_14f68e3e5;
      }
      uVar9 = 0x5c5;
      uVar14 = 0x10f;
      goto LAB_14f68e93a;
    }
    local_50 = 0;
    local_48 = 0;
LAB_14f68e39f:
    uVar9 = CONCAT44(uVar13,1);
    iVar8 = tls_collect_extensions(param_1,&local_50,0x300,&local_res20,0,uVar9);
    uVar13 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if ((iVar8 == 0) ||
       (iVar8 = ssl_choose_client_version(param_1,CONCAT11(uVar1,uVar2),local_res20), iVar8 == 0))
    goto LAB_14f68e952;
LAB_14f68e3e5:
    piVar6 = *(int **)(param_1 + 2);
    uVar15 = *(uint *)(*(longlong *)(piVar6 + 0x30) + 0x60) & 8;
    if (((uVar15 == 0) && ((0x303 < *piVar6 && (*piVar6 != 0x10000)))) || (bVar7)) {
      if (bVar3 == 0) {
        if ((_Size == *(ulonglong *)(param_1 + 0x154)) &&
           (iVar8 = memcmp(_Buf1,param_1 + 0x14c,_Size), iVar8 == 0)) {
          if (bVar7) {
            iVar8 = FUN_14f68a3b0(param_1,local_res18);
            if (iVar8 != 0) {
              uVar9 = FUN_14f68c600(param_1,&local_50);
              return uVar9;
            }
            goto LAB_14f68e952;
          }
          goto LAB_14f68e48e;
        }
        uVar9 = 0x5e4;
        uVar13 = 0x2f;
        uVar14 = 999;
      }
      else {
        uVar9 = 0x5dc;
        uVar13 = 0x2f;
        uVar14 = 0x155;
      }
    }
    else {
LAB_14f68e48e:
      if (((uVar15 != 0) || (*piVar6 < 0x304)) || (uVar9 = 0x200, *piVar6 == 0x10000)) {
        uVar9 = 0x100;
      }
      iVar8 = tls_validate_all_contexts(param_1,uVar9,local_res20);
      if (iVar8 == 0) {
        uVar9 = 0x5fa;
        uVar13 = 0x2f;
        uVar14 = 0x6e;
      }
      else {
        param_1[0x32] = 0;
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
            (iVar8 = **(int **)(param_1 + 2), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
          iVar8 = RECORD_LAYER_processed_read_pending(param_1 + 0x20c);
          if (iVar8 != 0) {
            uVar9 = 0x608;
            uVar13 = 10;
            uVar14 = 0xb6;
            goto LAB_14f68e942;
          }
          uVar13 = 0;
          iVar8 = tls_parse_extension(param_1,0x19,0x200,local_res20,0,0);
          lVar11 = local_res18;
          if (iVar8 == 0) goto LAB_14f68e952;
        }
        else {
          lVar11 = local_res18;
          if (((0x300 < *param_1) && (*(code **)(param_1 + 0x1b6) != (code *)0x0)) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x210) != 0)) {
            uVar16 = *(undefined8 *)(param_1 + 0x1b8);
            local_60 = (byte *)0x0;
            local_res10[0] = 0x100;
            iVar8 = (**(code **)(param_1 + 0x1b6))
                              (param_1,*(longlong *)(param_1 + 0x142) + 0x50,local_res10,0,&local_60
                               ,uVar16);
            lVar11 = local_res18;
            uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
            if ((iVar8 == 0) || (local_res10[0] < 1)) {
              uVar13 = 0x50;
              uVar9 = 0x633;
              uVar14 = 0x44;
              goto LAB_14f68e942;
            }
            *(longlong *)(*(longlong *)(param_1 + 0x142) + 8) = (longlong)local_res10[0];
            pbVar10 = local_60;
            if (local_60 == (byte *)0x0) {
              pbVar10 = (byte *)ssl_get_cipher_by_char(param_1,local_res18,0);
            }
            *(byte **)(*(longlong *)(param_1 + 0x142) + 0x1e0) = pbVar10;
          }
          if (((_Size != 0) && (_Size == *(ulonglong *)(*(longlong *)(param_1 + 0x142) + 0x150))) &&
             (iVar8 = memcmp(_Buf1,(void *)(*(longlong *)(param_1 + 0x142) + 0x158),_Size),
             iVar8 == 0)) {
            param_1[0x32] = 1;
          }
        }
        if (param_1[0x32] == 0) {
          if (*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x150) != 0) {
            LOCK();
            *(int *)(*(longlong *)(param_1 + 0x1da) + 0x80) =
                 *(int *)(*(longlong *)(param_1 + 0x1da) + 0x80) + 1;
            UNLOCK();
            iVar8 = ssl_get_new_session(param_1,0);
            if (iVar8 == 0) goto LAB_14f68e952;
          }
          **(int **)(param_1 + 0x142) = *param_1;
          if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
               (iVar8 = **(int **)(param_1 + 2), iVar8 < 0x304)) || (iVar8 == 0x10000)) &&
             (*(ulonglong *)(*(longlong *)(param_1 + 0x142) + 0x150) = _Size, _Size != 0)) {
            memcpy((void *)(*(longlong *)(param_1 + 0x142) + 0x158),_Buf1,_Size);
          }
        }
        else if ((*(size_t *)(param_1 + 0x138) !=
                  *(size_t *)(*(longlong *)(param_1 + 0x142) + 0x178)) ||
                (iVar8 = memcmp((void *)(*(longlong *)(param_1 + 0x142) + 0x180),param_1 + 0x13a,
                                *(size_t *)(param_1 + 0x138)), iVar8 != 0)) {
          uVar9 = 0x645;
          uVar13 = 0x2f;
          uVar14 = 0x110;
          goto LAB_14f68e942;
        }
        if (*param_1 == **(int **)(param_1 + 0x142)) {
          *(int *)(*(longlong *)(param_1 + 0x2a) + 0x33c) = *param_1;
          *(int *)(*(longlong *)(param_1 + 0x2a) + 0x340) = *param_1;
          iVar8 = FUN_14f68a3b0(param_1,lVar11);
          if (iVar8 == 0) goto LAB_14f68e952;
          uVar15 = (uint)bVar3;
          if ((param_1[0x32] == 0) || (uVar15 == *(uint *)(*(longlong *)(param_1 + 0x142) + 0x1d8)))
          {
            if (uVar15 == 0) {
              lVar11 = 0;
LAB_14f68e7e2:
              *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x298) = lVar11;
              iVar8 = tls_parse_all_extensions(param_1,uVar9,local_res20,0,0,CONCAT44(uVar13,1));
              if (iVar8 != 0) {
                lVar11 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
                if (((((*(byte *)(lVar11 + 0x60) & 8) != 0) ||
                     (iVar8 = **(int **)(param_1 + 2), iVar8 < 0x304)) || (iVar8 == 0x10000)) ||
                   ((iVar8 = (**(code **)(lVar11 + 0x10))(param_1), iVar8 != 0 &&
                    (iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))
                                       (param_1,0x91), iVar8 != 0)))) {
                  CRYPTO_free(local_res20,"ssl\\statem\\statem_clnt.c",0x6d4);
                  return 3;
                }
              }
              goto LAB_14f68e952;
            }
            iVar8 = ssl_allow_compression(param_1);
            if (iVar8 == 0) {
              uVar9 = 0x693;
              uVar13 = 0x2f;
              uVar14 = 0x157;
            }
            else {
              lVar11 = ssl3_comp_find(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100),uVar15
                                     );
              if (lVar11 != 0) goto LAB_14f68e7e2;
              uVar9 = 0x69b;
              uVar13 = 0x2f;
              uVar14 = 0x101;
            }
          }
          else {
            uVar9 = 0x68c;
            uVar13 = 0x2f;
            uVar14 = 0x158;
          }
        }
        else {
          uVar9 = 0x66b;
          uVar13 = 0x46;
          uVar14 = 0xd2;
        }
      }
    }
  }
LAB_14f68e942:
  ossl_statem_fatal(param_1,uVar13,0x171,uVar14,"ssl\\statem\\statem_clnt.c",uVar9);
LAB_14f68e952:
  CRYPTO_free(local_res20,"ssl\\statem\\statem_clnt.c",0x6d7);
  return 0;
}

// FUN_14f68e990 @ 14f68e990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68e990(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int local_res10 [2];
  undefined8 *local_res18;
  undefined1 *local_res20;
  undefined4 uVar15;
  
  puVar7 = (undefined1 *)*param_2;
  lVar9 = 0;
  lVar12 = 0;
  lVar13 = 0;
  local_res10[0] = 0;
  local_res18 = param_3;
  if ((ulonglong)param_2[1] < 2) {
LAB_14f68ed28:
    ossl_statem_fatal(param_1,0x32,0x1a3,0x9f,"ssl\\statem\\statem_clnt.c",0x835);
    return 0;
  }
  uVar10 = param_2[1] - 2;
  puVar6 = puVar7 + 2;
  uVar14 = (ulonglong)CONCAT11(*puVar7,puVar7[1]);
  if (uVar10 < uVar14) goto LAB_14f68ed28;
  uVar10 = uVar10 - uVar14;
  puVar7 = puVar6 + uVar14;
  *param_2 = puVar7;
  param_2[1] = uVar10;
  local_res20 = puVar6;
  if (uVar10 < 2) goto LAB_14f68ed28;
  uVar11 = (ulonglong)CONCAT11(*puVar7,puVar7[1]);
  if (uVar10 - 2 < uVar11) goto LAB_14f68ed28;
  uVar10 = (uVar10 - 2) - uVar11;
  puVar6 = puVar7 + 2 + uVar11;
  *param_2 = puVar6;
  param_2[1] = uVar10;
  if (uVar10 < 2) goto LAB_14f68ed28;
  uVar5 = (ulonglong)CONCAT11(*puVar6,puVar6[1]);
  if (uVar10 - 2 < uVar5) goto LAB_14f68ed28;
  *param_2 = puVar6 + 2 + uVar5;
  param_2[1] = (uVar10 - 2) - uVar5;
  lVar3 = EVP_PKEY_new();
  lVar4 = DH_new();
  if ((lVar3 == 0) || (lVar4 == 0)) {
    uVar15 = 0x83e;
    uVar2 = 0x41;
  }
  else {
    lVar12 = BN_bin2bn(local_res20,uVar14,0);
    lVar13 = BN_bin2bn(puVar7 + 2,uVar11,0);
    lVar9 = BN_bin2bn(puVar6 + 2,uVar5,0);
    if (((lVar12 == 0) || (lVar13 == 0)) || (lVar9 == 0)) {
      uVar15 = 0x84a;
      uVar2 = 3;
    }
    else {
      iVar1 = BN_is_zero(lVar9);
      if (iVar1 != 0) {
        uVar8 = 0x2f;
        uVar15 = 0x851;
        uVar2 = 0x66;
        goto LAB_14f68ecdf;
      }
      iVar1 = DH_set0_pqg(lVar4,lVar12,0,lVar13);
      if (iVar1 == 0) {
        uVar15 = 0x857;
        uVar2 = 3;
      }
      else {
        lVar13 = 0;
        lVar12 = 0;
        iVar1 = DH_check_params(lVar4,local_res10);
        if ((iVar1 == 0) || (local_res10[0] != 0)) {
          uVar8 = 0x2f;
          uVar15 = 0x85e;
          uVar2 = 0x66;
          goto LAB_14f68ecdf;
        }
        iVar1 = DH_set0_key(lVar4,lVar9,0);
        if (iVar1 == 0) {
          uVar15 = 0x864;
          uVar2 = 3;
        }
        else {
          lVar9 = 0;
          iVar1 = EVP_PKEY_assign(lVar3,0x1c,lVar4);
          if (iVar1 != 0) {
            lVar4 = 0;
            uVar2 = EVP_PKEY_security_bits(lVar3);
            iVar1 = ssl_security(param_1,0x40007,uVar2,0,lVar3);
            if (iVar1 != 0) {
              *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar3;
              if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 3) != 0)
              {
                uVar8 = X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
                *local_res18 = uVar8;
              }
              return 1;
            }
            uVar15 = 0x873;
            uVar8 = 0x28;
            uVar2 = 0x18a;
            goto LAB_14f68ecdf;
          }
          uVar15 = 0x86b;
          uVar2 = 6;
        }
      }
    }
  }
  uVar8 = 0x50;
LAB_14f68ecdf:
  ossl_statem_fatal(param_1,uVar8,0x1a3,uVar2,"ssl\\statem\\statem_clnt.c",uVar15);
  BN_free(lVar12);
  BN_free(lVar13);
  BN_free(lVar9);
  DH_free(lVar4);
  EVP_PKEY_free(lVar3);
  return 0;
}

// FUN_14f68ed70 @ 14f68ed70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68ed70(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  
  lVar8 = param_2[1];
  if (lVar8 == 0) {
LAB_14f68ef30:
    ossl_statem_fatal(param_1,0x32,0x1a4,0xa0,"ssl\\statem\\statem_clnt.c",0x89f);
    return 0;
  }
  pcVar6 = (char *)*param_2;
  cVar1 = *pcVar6;
  *param_2 = (longlong)(pcVar6 + 1);
  param_2[1] = lVar8 - 1U;
  if (lVar8 - 1U < 2) goto LAB_14f68ef30;
  cVar2 = pcVar6[1];
  cVar3 = pcVar6[2];
  *param_2 = *param_2 + 2;
  param_2[1] = lVar8 + -3;
  if ((cVar1 == '\x03') &&
     (iVar7 = tls1_check_group_id(param_1,CONCAT11(cVar2,cVar3),1), iVar7 != 0)) {
    lVar8 = ssl_generate_param_group(CONCAT11(cVar2,cVar3));
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar8;
    if (lVar8 == 0) {
      uVar14 = 0x8af;
      uVar11 = 0x50;
      uVar12 = 0x13a;
      goto LAB_14f68ef12;
    }
    if (param_2[1] != 0) {
      uVar10 = param_2[1] - 1;
      bVar4 = *(byte *)*param_2;
      uVar9 = (ulonglong)bVar4;
      pbVar13 = (byte *)*param_2 + 1;
      if (uVar9 <= uVar10) {
        *param_2 = (longlong)(pbVar13 + uVar9);
        param_2[1] = uVar10 - uVar9;
        iVar7 = EVP_PKEY_set1_tls_encodedpoint
                          (*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408),pbVar13,bVar4);
        if (iVar7 != 0) {
          uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
          if (((uVar5 & 8) != 0) || ((uVar5 & 1) != 0)) {
            uVar12 = X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
            *param_3 = uVar12;
          }
          return 1;
        }
        uVar14 = 0x8bd;
        uVar12 = 0x132;
        goto LAB_14f68ef0d;
      }
    }
    uVar11 = 0x32;
    uVar14 = 0x8b5;
    uVar12 = 0x9f;
  }
  else {
    uVar14 = 0x8a9;
    uVar12 = 0x17a;
LAB_14f68ef0d:
    uVar11 = 0x2f;
  }
LAB_14f68ef12:
  ossl_statem_fatal(param_1,uVar11,0x1a4,uVar12,"ssl\\statem\\statem_clnt.c",uVar14);
  return 0;
}

// FUN_14f68ef80 @ 14f68ef80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68ef80(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar4 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if (1 < uVar5) {
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar8 = (ulonglong)CONCAT11(uVar1,uVar2);
    if (uVar8 <= uVar5 - 2) {
      *param_2 = puVar4 + 2 + uVar8;
      param_2[1] = (uVar5 - 2) - uVar8;
      if (0x80 < uVar8) {
        uVar7 = 0x28;
        uVar10 = 0x7df;
        uVar9 = 0x92;
LAB_14f68f028:
        ossl_statem_fatal(param_1,uVar7,0x1a5,uVar9,"ssl\\statem\\statem_clnt.c",uVar10);
        return 0;
      }
      if (CONCAT11(uVar1,uVar2) == 0) {
        CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0),
                    "ssl\\statem\\statem_clnt.c",0x7e4);
        *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0) = 0;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x508);
        CRYPTO_free(*(undefined8 *)(lVar3 + 0x1a0),
                    "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                    ,0x1e2);
        lVar6 = CRYPTO_strndup(puVar4 + 2,uVar8,
                               "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                               ,0x1e5);
        *(longlong *)(lVar3 + 0x1a0) = lVar6;
        if (lVar6 == 0) {
          uVar7 = 0x50;
          uVar10 = 0x7e9;
          uVar9 = 0x44;
          goto LAB_14f68f028;
        }
      }
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1a5,0x9f,"ssl\\statem\\statem_clnt.c",0x7d2,puVar4,uVar5);
  return 0;
}

// FUN_14f68f140 @ 14f68f140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68f140(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  pbVar7 = (byte *)*param_2;
  uVar11 = param_2[1];
  if (1 < uVar11) {
    pbVar6 = pbVar7 + 2;
    uVar12 = (ulonglong)CONCAT11(*pbVar7,pbVar7[1]);
    if (uVar12 <= uVar11 - 2) {
      uVar11 = (uVar11 - 2) - uVar12;
      pbVar7 = pbVar6 + uVar12;
      *param_2 = pbVar7;
      param_2[1] = uVar11;
      if (1 < uVar11) {
        pbVar8 = pbVar7 + 2;
        uVar10 = (ulonglong)CONCAT11(*pbVar7,pbVar7[1]);
        if (uVar10 <= uVar11 - 2) {
          pbVar7 = pbVar8 + uVar10;
          uVar11 = (uVar11 - 2) - uVar10;
          *param_2 = pbVar7;
          param_2[1] = uVar11;
          if (uVar11 != 0) {
            bVar1 = *pbVar7;
            uVar3 = (ulonglong)bVar1;
            pbVar9 = pbVar7 + 1;
            if (uVar3 <= uVar11 - 1) {
              uVar11 = (uVar11 - 1) - uVar3;
              pbVar7 = pbVar9 + uVar3;
              *param_2 = pbVar7;
              param_2[1] = uVar11;
              if (1 < uVar11) {
                uVar3 = (ulonglong)CONCAT11(*pbVar7,pbVar7[1]);
                if (uVar3 <= uVar11 - 2) {
                  *param_2 = pbVar7 + 2 + uVar3;
                  param_2[1] = (uVar11 - 2) - uVar3;
                  lVar4 = BN_bin2bn(pbVar6,uVar12,0);
                  *(longlong *)(param_1 + 0x7d8) = lVar4;
                  if (lVar4 != 0) {
                    lVar4 = BN_bin2bn(pbVar8,uVar10,0);
                    *(longlong *)(param_1 + 0x7e0) = lVar4;
                    if (lVar4 != 0) {
                      lVar4 = BN_bin2bn(pbVar9,bVar1,0);
                      *(longlong *)(param_1 + 0x7e8) = lVar4;
                      if (lVar4 != 0) {
                        lVar4 = BN_bin2bn(pbVar7 + 2,uVar3,0);
                        *(longlong *)(param_1 + 0x7f0) = lVar4;
                        if (lVar4 != 0) {
                          iVar2 = srp_verify_server_param(param_1);
                          if (iVar2 == 0) {
                            return 0;
                          }
                          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20
                                        ) & 3) != 0) {
                            uVar5 = X509_get0_pubkey(*(undefined8 *)
                                                      (*(longlong *)(param_1 + 0x508) + 0x1b8));
                            *param_3 = uVar5;
                          }
                          return 1;
                        }
                      }
                    }
                  }
                  ossl_statem_fatal(param_1,0x50,0x1a6,3,"ssl\\statem\\statem_clnt.c",0x811);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1a6,0x9f,"ssl\\statem\\statem_clnt.c",0x7ff,pbVar7,uVar11);
  return 0;
}

