// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 49

// PEM_read_SSL_SESSION @ 14f6622b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_SSL_SESSION
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read(d2i_SSL_SESSION,"SSL SESSION PARAMETERS",param_1,param_2,param_3,param_4,0x14f6622ba
               );
  return;
}

// PEM_read_bio_SSL_SESSION @ 14f6622f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_SSL_SESSION
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_SSL_SESSION,"SSL SESSION PARAMETERS",param_1,param_2,param_3,param_4,
                    0x14f6622fa);
  return;
}

// PEM_write_SSL_SESSION @ 14f662330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_SSL_SESSION(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write(i2d_SSL_SESSION,"SSL SESSION PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// PEM_write_bio_SSL_SESSION @ 14f662380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_SSL_SESSION(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_SSL_SESSION,"SSL SESSION PARAMETERS",param_1,param_2,0,0,0,0,0);
  return;
}

// SSL_CTX_add_session @ 14f6623d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_add_session(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 1;
  LOCK();
  *(int *)(param_2 + 0x1cc) = *(int *)(param_2 + 0x1cc) + 1;
  UNLOCK();
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x380));
  lVar4 = OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x28),param_2);
  if (lVar4 == 0) {
    lVar4 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x28),param_2);
    if ((lVar4 == 0) && (lVar4 = param_2, param_2 != 0)) goto LAB_14f662494;
  }
  else {
    if (lVar4 == param_2) {
LAB_14f662494:
      SSL_SESSION_free(lVar4);
      uVar7 = 0;
      goto LAB_14f6625c4;
    }
    FUN_14f662c60(param_1);
    SSL_SESSION_free(lVar4);
  }
  if ((*(longlong *)(param_2 + 0x200) != 0) && (*(longlong *)(param_2 + 0x1f8) != 0)) {
    FUN_14f662c60(param_1,param_2);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    *plVar1 = param_2;
    *(longlong *)(param_1 + 0x40) = param_2;
    *(longlong **)(param_2 + 0x1f8) = plVar1;
    *(longlong **)(param_2 + 0x200) = (longlong *)(param_1 + 0x40);
  }
  else {
    *(longlong *)(param_2 + 0x200) = lVar4;
    *(longlong *)(lVar4 + 0x1f8) = param_2;
    *(longlong **)(param_2 + 0x1f8) = plVar1;
    *plVar1 = param_2;
  }
  iVar2 = SSL_CTX_ctrl(param_1,0x2b,0);
  if (0 < iVar2) {
    iVar2 = SSL_CTX_ctrl(param_1,0x2b,0);
    iVar3 = SSL_CTX_ctrl(param_1,0x14,0);
    if (iVar2 < iVar3) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x40);
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x150) == 0)) break;
        lVar5 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x28),lVar4);
        uVar6 = 0;
        if (lVar5 != 0) {
          uVar6 = OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x28),lVar5);
          FUN_14f662c60(param_1,uVar6);
        }
        *(undefined4 *)(lVar4 + 0x1b0) = 1;
        if (*(code **)(param_1 + 0x58) != (code *)0x0) {
          (**(code **)(param_1 + 0x58))(param_1,lVar4);
        }
        if (lVar5 == 0) break;
        SSL_SESSION_free(uVar6);
        LOCK();
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        UNLOCK();
        iVar2 = SSL_CTX_ctrl(param_1,0x2b,0);
        iVar3 = SSL_CTX_ctrl(param_1,0x14);
      } while (iVar2 < iVar3);
    }
  }
LAB_14f6625c4:
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x380));
  return uVar7;
}

// SSL_CTX_flush_sessions @ 14f6625f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_flush_sessions(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6625fc;
  local_18 = *(longlong *)(param_1 + 0x28);
  if (local_18 != 0) {
    local_28 = param_1;
    local_20 = param_2;
    CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x380));
    uVar1 = OPENSSL_LH_get_down_load(*(undefined8 *)(param_1 + 0x28));
    OPENSSL_LH_set_down_load(*(undefined8 *)(param_1 + 0x28),0);
    OPENSSL_LH_doall_arg(local_18,FUN_14f6643b0,&local_28);
    OPENSSL_LH_set_down_load(*(undefined8 *)(param_1 + 0x28),uVar1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x380));
  }
  return;
}

// SSL_CTX_remove_session @ 14f6626c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_remove_session(undefined8 param_1,undefined8 param_2)

{
  FUN_14f663790(param_1,param_2,1);
  return;
}

// SSL_CTX_sess_set_new_cb @ 14f662720

void SSL_CTX_sess_set_new_cb(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}

// SSL_CTX_set_client_cert_engine @ 14f662750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_client_cert_engine(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f662760;
  iVar1 = ENGINE_init(param_2);
  if (iVar1 == 0) {
    ERR_put_error(0x14,0x122,0x26,"ssl\\ssl_sess.c",0x4b9,uVar3);
    return 0;
  }
  lVar2 = ENGINE_get_ssl_client_cert_function(param_2);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0x122,0x14b,"ssl\\ssl_sess.c",0x4be,uVar3);
    ENGINE_finish(param_2);
    return 0;
  }
  *(undefined8 *)(param_1 + 0x1e0) = param_2;
  return 1;
}

// SSL_SESSION_dup @ 14f662880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_SESSION_dup(undefined8 param_1)

{
  ssl_session_dup(param_1,1);
  return;
}

// SSL_SESSION_free @ 14f6628a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_SESSION_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x1cc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      CRYPTO_free_ex_data(2,param_1,param_1 + 0x1f0);
      OPENSSL_cleanse(param_1 + 0x50,0x100);
      OPENSSL_cleanse(param_1 + 0x158,0x20);
      X509_free(*(undefined8 *)(param_1 + 0x1b8));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x1c0),X509_free);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x208),"ssl\\ssl_sess.c",0x2fd);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x210),"ssl\\ssl_sess.c",0x2fe);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1a0),"ssl\\ssl_sess.c",0x300);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1a8),"ssl\\ssl_sess.c",0x301);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x248),"ssl\\ssl_sess.c",0x304);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x230),"ssl\\ssl_sess.c",0x306);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x250),"ssl\\ssl_sess.c",0x307);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x268));
      CRYPTO_clear_free(param_1,0x270,"ssl\\ssl_sess.c",0x309);
    }
  }
  return;
}

// SSL_SESSION_get0_cipher @ 14f662a30

undefined8 SSL_SESSION_get0_cipher(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}

// SSL_SESSION_get_ex_data @ 14f662ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_SESSION_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x1f0);
  return;
}

// SSL_SESSION_get_time @ 14f662b50

undefined4 SSL_SESSION_get_time(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x1d4);
}

// SSL_SESSION_get_timeout @ 14f662b70

undefined4 SSL_SESSION_get_timeout(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x1d0);
}

// SSL_SESSION_is_resumable @ 14f662bb0

undefined8 SSL_SESSION_is_resumable(longlong param_1)

{
  if ((*(int *)(param_1 + 0x1b0) == 0) &&
     ((*(longlong *)(param_1 + 0x150) != 0 || (*(longlong *)(param_1 + 0x218) != 0)))) {
    return 1;
  }
  return 0;
}

// FUN_14f662be0 @ 14f662be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f662be0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_2 + 0x200) != 0) && (*(longlong *)(param_2 + 0x1f8) != 0)) {
    FUN_14f662c60();
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    *plVar1 = param_2;
    *(longlong *)(param_1 + 0x40) = param_2;
    *(longlong **)(param_2 + 0x1f8) = plVar1;
    *(longlong **)(param_2 + 0x200) = (longlong *)(param_1 + 0x40);
    return;
  }
  *(longlong *)(param_2 + 0x200) = lVar2;
  *(longlong *)(lVar2 + 0x1f8) = param_2;
  *(longlong **)(param_2 + 0x1f8) = plVar1;
  *plVar1 = param_2;
  return;
}

// FUN_14f662c60 @ 14f662c60

void FUN_14f662c60(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_2 + 0x200);
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar3 = *(undefined8 **)(param_2 + 0x1f8), puVar3 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    puVar4 = (undefined8 *)(param_1 + 0x38);
    if (puVar2 == puVar1) {
      if (puVar3 == puVar4) {
        *puVar4 = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x200) = 0;
        *(undefined8 *)(param_2 + 0x1f8) = 0;
        return;
      }
      *puVar1 = puVar3;
      *(undefined8 **)(*(longlong *)(param_2 + 0x1f8) + 0x200) = puVar1;
      *(undefined8 *)(param_2 + 0x200) = 0;
      *(undefined8 *)(param_2 + 0x1f8) = 0;
      return;
    }
    if (puVar3 == puVar4) {
      *puVar4 = puVar2;
      *(undefined8 **)(*(longlong *)(param_2 + 0x200) + 0x1f8) = puVar4;
      *(undefined8 *)(param_2 + 0x200) = 0;
      *(undefined8 *)(param_2 + 0x1f8) = 0;
      return;
    }
    puVar2[0x3f] = puVar3;
    *(undefined8 *)(*(longlong *)(param_2 + 0x1f8) + 0x200) = *(undefined8 *)(param_2 + 0x200);
    *(undefined8 *)(param_2 + 0x200) = 0;
    *(undefined8 *)(param_2 + 0x1f8) = 0;
  }
  return;
}

// SSL_SESSION_new @ 14f662d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_SESSION_new(void)

{
  int iVar1;
  longlong lVar2;
  __time64_t _Var3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar1 = OPENSSL_init_ssl(0x200000,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = CRYPTO_zalloc(0x270,"ssl\\ssl_sess.c",0x48);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xbd,0x41,"ssl\\ssl_sess.c",0x4a);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x1c8) = 1;
  *(undefined4 *)(lVar2 + 0x1cc) = 1;
  *(undefined4 *)(lVar2 + 0x1d0) = 0x130;
  _Var3 = _time64((__time64_t *)0x0);
  *(int *)(lVar2 + 0x1d4) = (int)_Var3;
  lVar4 = CRYPTO_THREAD_lock_new();
  *(longlong *)(lVar2 + 0x268) = lVar4;
  if (lVar4 == 0) {
    ERR_put_error(0x14,0xbd,0x41,"ssl\\ssl_sess.c",0x54);
    uVar5 = 0x55;
  }
  else {
    iVar1 = CRYPTO_new_ex_data(2,lVar2,lVar2 + 0x1f0);
    if (iVar1 != 0) {
      return lVar2;
    }
    CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar2 + 0x268));
    uVar5 = 0x5b;
  }
  CRYPTO_free(lVar2,"ssl\\ssl_sess.c",uVar5);
  return 0;
}

// SSL_SESSION_set1_alpn_selected @ 14f662e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SESSION_set1_alpn_selected(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  CRYPTO_free(*(undefined8 *)(param_1 + 0x230),"ssl\\ssl_sess.c",0x3a6);
  if ((param_2 == 0) || (param_3 == 0)) {
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  else {
    lVar1 = CRYPTO_memdup(param_2,param_3,"ssl\\ssl_sess.c",0x3ac);
    *(longlong *)(param_1 + 0x230) = lVar1;
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x238) = 0;
      return 0;
    }
    *(longlong *)(param_1 + 0x238) = param_3;
  }
  return 1;
}

// SSL_SESSION_set1_hostname @ 14f662f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool SSL_SESSION_set1_hostname(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  CRYPTO_free(*(undefined8 *)(param_1 + 0x208),"ssl\\ssl_sess.c",0x373);
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    return true;
  }
  lVar1 = CRYPTO_strdup(param_2,"ssl\\ssl_sess.c",0x378);
  *(longlong *)(param_1 + 0x208) = lVar1;
  return lVar1 != 0;
}

// SSL_SESSION_set1_id @ 14f662fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SESSION_set1_id(longlong param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    ERR_put_error(0x14,0x1a7,0x198,"ssl\\ssl_sess.c",0x32f);
    return 0;
  }
  *(ulonglong *)(param_1 + 0x150) = (ulonglong)param_3;
  if (param_2 != (void *)(param_1 + 0x158)) {
    memcpy((void *)(param_1 + 0x158),param_2,(ulonglong)param_3);
  }
  return 1;
}

// SSL_SESSION_set1_id_context @ 14f663020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SESSION_set1_id_context(longlong param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    ERR_put_error(0x14,0x138,0x111,"ssl\\ssl_sess.c",0x3c0);
    return 0;
  }
  *(ulonglong *)(param_1 + 0x178) = (ulonglong)param_3;
  if (param_2 != (void *)(param_1 + 0x180)) {
    memcpy((void *)(param_1 + 0x180),param_2,(ulonglong)param_3);
  }
  return 1;
}

// SSL_SESSION_set1_ticket_appdata @ 14f663090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SESSION_set1_ticket_appdata(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  CRYPTO_free(*(undefined8 *)(param_1 + 0x250),"ssl\\ssl_sess.c",0x4d9);
  *(undefined8 *)(param_1 + 600) = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  else {
    lVar1 = CRYPTO_memdup(param_2,param_3,"ssl\\ssl_sess.c",0x4df);
    *(longlong *)(param_1 + 0x250) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 600) = param_3;
  }
  return 1;
}

// SSL_SESSION_set_cipher @ 14f663140

undefined8 SSL_SESSION_set_cipher(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1e0) = param_2;
  return 1;
}

// SSL_SESSION_set_ex_data @ 14f663160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_SESSION_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x1f0);
  return;
}

// SSL_SESSION_set_protocol_version @ 14f6631b0

undefined8 SSL_SESSION_set_protocol_version(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return 1;
}

// SSL_SESSION_up_ref @ 14f663200

bool SSL_SESSION_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x1cc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// SSL_get1_session @ 14f663220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_get1_session(longlong param_1)

{
  longlong lVar1;
  
  CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x1738));
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x1cc) = *(int *)(lVar1 + 0x1cc) + 1;
    UNLOCK();
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x1738));
  return lVar1;
}

// SSL_get_session @ 14f663280

undefined8 SSL_get_session(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x508);
}

// SSL_set_session @ 14f663290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_session(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
    iVar1 = SSL_in_init();
    if (iVar1 == 0) {
      iVar1 = SSL_in_before(param_1);
      if (iVar1 == 0) {
        FUN_14f663790(*(undefined8 *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x508),1);
      }
    }
  }
  if (**(longlong **)(param_1 + 0x598) != *(longlong *)(param_1 + 8)) {
    uVar2 = SSL_set_ssl_method(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0x1cc) = *(int *)(param_2 + 0x1cc) + 1;
    UNLOCK();
    *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_2 + 0x1c8);
  }
  SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
  *(longlong *)(param_1 + 0x508) = param_2;
  return 1;
}

// SSL_set_session_ticket_ext @ 14f663390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_session_ticket_ext(int *param_1,void *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6633a5;
  if (0x300 < *param_1) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x1b0),"ssl\\ssl_sess.c",0x3fd);
    param_1[0x1b0] = 0;
    param_1[0x1b1] = 0;
    puVar1 = (undefined2 *)CRYPTO_malloc((longlong)param_3 + 0x10,"ssl\\ssl_sess.c",0x400);
    *(undefined2 **)(param_1 + 0x1b0) = puVar1;
    if (puVar1 == (undefined2 *)0x0) {
      ERR_put_error(0x14,0x126,0x41,"ssl\\ssl_sess.c",0x402,uVar2);
      uVar2 = 0;
    }
    else if (param_2 == (void *)0x0) {
      *puVar1 = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 8) = 0;
      uVar2 = 1;
    }
    else {
      *puVar1 = (short)param_3;
      *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 8) = *(longlong *)(param_1 + 0x1b0) + 0x10;
      memcpy(*(void **)(*(longlong *)(param_1 + 0x1b0) + 8),param_2,(longlong)param_3);
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}

// FUN_14f6634e0 @ 14f6634e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6634e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = RAND_bytes(param_2,*param_3);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = SSL_has_matching_session_id(param_1,param_2,*param_3);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
    if (9 < uVar2) {
      return 0;
    }
  }
  if (9 < uVar2) {
    return 0;
  }
  return 1;
}

// FUN_14f663560 @ 14f663560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f663560(void)

{
  OPENSSL_LH_delete();
  return;
}

// FUN_14f663580 @ 14f663580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f663580(void)

{
  OPENSSL_LH_doall_arg();
  return;
}

// FUN_14f6635a0 @ 14f6635a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6635a0(void)

{
  OPENSSL_LH_get_down_load();
  return;
}

// FUN_14f6635c0 @ 14f6635c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6635c0(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f6635e0 @ 14f6635e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6635e0(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// FUN_14f663600 @ 14f663600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f663600(void)

{
  OPENSSL_LH_set_down_load();
  return;
}

// lookup_sess_in_cache @ 14f663620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong lookup_sess_in_cache(undefined4 *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  undefined1 auStack_2d8 [32];
  int local_2b8 [4];
  undefined4 local_2a8 [84];
  size_t local_158;
  undefined1 local_150 [280];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f663636;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  lVar1 = *(longlong *)(param_1 + 0x1da);
  if ((*(uint *)(lVar1 + 0x48) & 0x100) == 0) {
    local_2a8[0] = *param_1;
    if (0x20 < param_3) {
      return 0;
    }
    memcpy(local_150,param_2,param_3);
    local_158 = param_3;
    CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar1 + 0x380));
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x28),local_2a8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x1cc) = *(int *)(lVar1 + 0x1cc) + 1;
      UNLOCK();
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
    if (lVar1 != 0) {
      return lVar1;
    }
    LOCK();
    *(int *)(*(longlong *)(param_1 + 0x1da) + 0x80) =
         *(int *)(*(longlong *)(param_1 + 0x1da) + 0x80) + 1;
    UNLOCK();
  }
  lVar1 = 0;
  if (*(code **)(*(longlong *)(param_1 + 0x1da) + 0x60) != (code *)0x0) {
    local_2b8[0] = 1;
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1da) + 0x60))
                      (param_1,param_2,param_3 & 0xffffffff,local_2b8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(*(longlong *)(param_1 + 0x1da) + 0x90) =
           *(int *)(*(longlong *)(param_1 + 0x1da) + 0x90) + 1;
      UNLOCK();
      if (local_2b8[0] != 0) {
        LOCK();
        *(int *)(lVar1 + 0x1cc) = *(int *)(lVar1 + 0x1cc) + 1;
        UNLOCK();
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x1da) + 0x48) & 0x200) == 0) {
        SSL_CTX_add_session(*(longlong *)(param_1 + 0x1da),lVar1);
      }
    }
  }
  return lVar1;
}

// FUN_14f663790 @ 14f663790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f663790(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x150) != 0)) {
    if (param_3 != 0) {
      CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x380));
    }
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x28),param_2);
    bVar3 = lVar1 != 0;
    uVar2 = 0;
    if (bVar3) {
      uVar2 = OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x28),lVar1);
      FUN_14f662c60(param_1,uVar2);
    }
    *(undefined4 *)(param_2 + 0x1b0) = 1;
    if (param_3 != 0) {
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x380));
    }
    if (*(code **)(param_1 + 0x58) != (code *)0x0) {
      (**(code **)(param_1 + 0x58))(param_1,param_2);
    }
    if (bVar3) {
      SSL_SESSION_free(uVar2);
    }
  }
  return bVar3;
}

// FUN_14f663880 @ 14f663880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f663880(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// ssl_clear_bad_session @ 14f6638a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_clear_bad_session(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
    iVar1 = SSL_in_init();
    if (iVar1 == 0) {
      iVar1 = SSL_in_before(param_1);
      if (iVar1 == 0) {
        FUN_14f663790(*(undefined8 *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x508),1);
        return 1;
      }
    }
  }
  return 0;
}

// ssl_generate_session_id @ 14f663910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_session_id(int *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar1 = *param_1;
  if ((((iVar1 != 0x100) && (4 < iVar1 - 0x300U)) && (iVar1 != 0xfefd)) && (iVar1 != 0xfeff)) {
    ossl_statem_fatal(param_1,0x50,0x223,0x103,"ssl\\ssl_sess.c",0x10000012a);
    return 0;
  }
  *(undefined8 *)(param_2 + 0x150) = 0x20;
  if (param_1[0x19e] != 0) {
    *(undefined8 *)(param_2 + 0x150) = 0;
    return 1;
  }
  CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x5ce));
  CRYPTO_THREAD_read_lock(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
  pcVar2 = *(code **)(param_1 + 0x14a);
  if (*(code **)(param_1 + 0x14a) == (code *)0x0) {
    pcVar2 = FUN_14f6634e0;
    if (*(code **)(*(longlong *)(param_1 + 0x1da) + 400) != (code *)0x0) {
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1da) + 400);
    }
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x5ce));
  memset((void *)(param_2 + 0x158),0,*(size_t *)(param_2 + 0x150));
  local_res8[0] = *(uint *)(param_2 + 0x150);
  iVar1 = (*pcVar2)(param_1,param_2 + 0x158,local_res8);
  if (iVar1 == 0) {
    uVar4 = CONCAT44(uVar5,0x151);
    uVar3 = 0x12d;
  }
  else if ((local_res8[0] == 0) || (*(ulonglong *)(param_2 + 0x150) < (ulonglong)local_res8[0])) {
    uVar4 = CONCAT44(uVar5,0x15b);
    uVar3 = 0x12f;
  }
  else {
    *(ulonglong *)(param_2 + 0x150) = (ulonglong)local_res8[0];
    iVar1 = SSL_has_matching_session_id(param_1,param_2 + 0x158,local_res8[0]);
    if (iVar1 == 0) {
      return 1;
    }
    uVar4 = CONCAT44(uVar5,0x163);
    uVar3 = 0x12e;
  }
  ossl_statem_fatal(param_1,0x50,0x223,uVar3,"ssl\\ssl_sess.c",uVar4);
  return 0;
}

// ssl_get_new_session @ 14f663b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_get_new_session(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  puVar3 = (undefined4 *)SSL_SESSION_new();
  if (puVar3 == (undefined4 *)0x0) {
    ossl_statem_fatal(param_1,0x50,0xb5,0x41,"ssl\\ssl_sess.c",CONCAT44(uVar5,0x172));
    return 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x1da) + 0x4c) == 0) {
    uVar1 = SSL_get_default_timeout(param_1);
    puVar3[0x74] = uVar1;
  }
  else {
    puVar3[0x74] = *(int *)(*(longlong *)(param_1 + 0x1da) + 0x4c);
  }
  SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
  *(undefined8 *)(param_1 + 0x142) = 0;
  if ((param_2 == 0) ||
     ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
       (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)))) {
    *(undefined8 *)(puVar3 + 0x54) = 0;
  }
  else {
    iVar2 = ssl_generate_session_id(param_1,puVar3);
    if (iVar2 == 0) {
      SSL_SESSION_free(puVar3);
      return 0;
    }
  }
  if (*(ulonglong *)(param_1 + 0x138) < 0x21) {
    memcpy(puVar3 + 0x60,param_1 + 0x13a,*(ulonglong *)(param_1 + 0x138));
    *(undefined8 *)(puVar3 + 0x5e) = *(undefined8 *)(param_1 + 0x138);
    *(undefined4 **)(param_1 + 0x142) = puVar3;
    *puVar3 = *param_1;
    puVar3[0x72] = 0;
    if ((**(uint **)(param_1 + 0x2a) & 0x200) != 0) {
      puVar3[0x98] = puVar3[0x98] | 1;
    }
    uVar4 = 1;
  }
  else {
    ossl_statem_fatal(param_1,0x50,0xb5,0x44,"ssl\\ssl_sess.c",CONCAT44(uVar5,0x192));
    SSL_SESSION_free(puVar3);
    uVar4 = 0;
  }
  return uVar4;
}

// ssl_get_prev_session @ 14f663cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_get_prev_session(int *param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  __time64_t _Var5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  int *local_res8;
  undefined8 uVar9;
  
  uVar6 = 1;
  bVar1 = false;
  local_res8 = (int *)0x0;
  bVar2 = false;
  bVar3 = false;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
    param_1[0x19e] = 1;
    iVar4 = tls_parse_extension(param_1,0x12,0x80,*(undefined8 *)(param_2 + 0x288),0,0);
    if ((iVar4 != 0) &&
       (iVar4 = tls_parse_extension(param_1,0x19,0x80,*(undefined8 *)(param_2 + 0x288),0,0),
       iVar4 != 0)) {
      local_res8 = *(int **)(param_1 + 0x142);
      bVar3 = false;
      goto LAB_14f663e57;
    }
LAB_14f663d66:
    uVar8 = 0xffffffff;
  }
  else {
    iVar4 = tls_get_ticket_from_client(param_1,param_2,&local_res8);
    if (iVar4 < 0) {
LAB_14f663e57:
      bVar1 = bVar3;
      piVar7 = local_res8;
      if (local_res8 != (int *)0x0) {
        bVar3 = false;
        if (((*local_res8 == *param_1) &&
            (bVar3 = bVar2, *(size_t *)(local_res8 + 0x5e) == *(size_t *)(param_1 + 0x138))) &&
           (iVar4 = memcmp(local_res8 + 0x60,param_1 + 0x13a,*(size_t *)(local_res8 + 0x5e)),
           iVar4 == 0)) {
          if (((*(byte *)(param_1 + 0x156) & 1) == 0) || (*(longlong *)(param_1 + 0x138) != 0)) {
            _Var5 = _time64((__time64_t *)0x0);
            piVar7 = local_res8;
            if (local_res8[0x74] < (int)_Var5 - local_res8[0x75]) {
              LOCK();
              *(int *)(*(longlong *)(param_1 + 0x1da) + 0x84) =
                   *(int *)(*(longlong *)(param_1 + 0x1da) + 0x84) + 1;
              UNLOCK();
              bVar3 = false;
              if (bVar1) {
                FUN_14f663790(*(undefined8 *)(param_1 + 0x1da),local_res8,1);
                piVar7 = local_res8;
                bVar3 = bVar2;
              }
            }
            else {
              if ((*(byte *)(local_res8 + 0x98) & 1) != 0) {
                if ((**(uint **)(param_1 + 0x2a) & 0x200) != 0) {
LAB_14f663f66:
                  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0)
                      || (iVar4 = **(int **)(param_1 + 2), iVar4 < 0x304)) || (iVar4 == 0x10000)) {
                    SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
                    *(int **)(param_1 + 0x142) = local_res8;
                  }
                  LOCK();
                  *(int *)(*(longlong *)(param_1 + 0x1da) + 0x8c) =
                       *(int *)(*(longlong *)(param_1 + 0x1da) + 0x8c) + 1;
                  UNLOCK();
                  param_1[0x16a] = *(int *)(*(longlong *)(param_1 + 0x142) + 0x1c8);
                  return 1;
                }
                uVar6 = 0x2f;
                uVar9 = 0x255;
                uVar8 = 0x68;
                goto LAB_14f663eb4;
              }
              if ((**(uint **)(param_1 + 0x2a) & 0x200) == 0) goto LAB_14f663f66;
            }
          }
          else {
            uVar9 = 0x242;
            uVar6 = 0x50;
            uVar8 = 0x115;
LAB_14f663eb4:
            ossl_statem_fatal(param_1,uVar6,0xd9,uVar8,"ssl\\ssl_sess.c",uVar9);
            piVar7 = local_res8;
            bVar3 = true;
          }
        }
        goto LAB_14f663df0;
      }
    }
    else {
      if (1 < iVar4) {
        if ((iVar4 < 4) && (*(longlong *)(param_2 + 0x28) != 0)) {
          local_res8 = (int *)lookup_sess_in_cache(param_1,param_2 + 0x30);
          bVar3 = true;
        }
        goto LAB_14f663e57;
      }
      bVar3 = true;
      ossl_statem_fatal(param_1,0x50,0xd9,0x44,"ssl\\ssl_sess.c",CONCAT44(uVar6,0x213));
      piVar7 = local_res8;
LAB_14f663df0:
      if (piVar7 != (int *)0x0) {
        SSL_SESSION_free(piVar7);
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
            (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
          param_1[0x142] = 0;
          param_1[0x143] = 0;
        }
        if (!bVar1) {
          param_1[0x19e] = 1;
        }
      }
      if (bVar3) goto LAB_14f663d66;
    }
    uVar8 = 0;
  }
  return uVar8;
}

// ssl_session_dup @ 14f663fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * ssl_session_dup(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  uVar12 = 0x14f664000;
  puVar8 = (undefined8 *)CRYPTO_malloc(0x270,"ssl\\ssl_sess.c",0x6e);
  if (puVar8 != (undefined8 *)0x0) {
    lVar9 = 4;
    puVar5 = param_1;
    puVar6 = puVar8;
    do {
      puVar11 = puVar6;
      puVar10 = puVar5;
      uVar4 = puVar10[1];
      *puVar11 = *puVar10;
      puVar11[1] = uVar4;
      uVar4 = puVar10[3];
      puVar11[2] = puVar10[2];
      puVar11[3] = uVar4;
      uVar4 = puVar10[5];
      puVar11[4] = puVar10[4];
      puVar11[5] = uVar4;
      uVar4 = puVar10[7];
      puVar11[6] = puVar10[6];
      puVar11[7] = uVar4;
      uVar4 = puVar10[9];
      puVar11[8] = puVar10[8];
      puVar11[9] = uVar4;
      uVar4 = puVar10[0xb];
      puVar11[10] = puVar10[10];
      puVar11[0xb] = uVar4;
      uVar4 = puVar10[0xd];
      puVar11[0xc] = puVar10[0xc];
      puVar11[0xd] = uVar4;
      uVar4 = puVar10[0xf];
      puVar11[0xe] = puVar10[0xe];
      puVar11[0xf] = uVar4;
      lVar9 = lVar9 + -1;
      puVar5 = puVar10 + 0x10;
      puVar6 = puVar11 + 0x10;
    } while (lVar9 != 0);
    uVar4 = puVar10[0x11];
    puVar11[0x10] = puVar10[0x10];
    puVar11[0x11] = uVar4;
    uVar4 = puVar10[0x13];
    puVar11[0x12] = puVar10[0x12];
    puVar11[0x13] = uVar4;
    uVar4 = puVar10[0x15];
    puVar11[0x14] = puVar10[0x14];
    puVar11[0x15] = uVar4;
    uVar4 = puVar10[0x17];
    puVar11[0x16] = puVar10[0x16];
    puVar11[0x17] = uVar4;
    uVar4 = puVar10[0x19];
    puVar11[0x18] = puVar10[0x18];
    puVar11[0x19] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar10 + 0xd4);
    uVar2 = *(undefined4 *)(puVar10 + 0x1b);
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0xdc);
    *(undefined4 *)(puVar11 + 0x1a) = *(undefined4 *)(puVar10 + 0x1a);
    *(undefined4 *)((longlong)puVar11 + 0xd4) = uVar1;
    *(undefined4 *)(puVar11 + 0x1b) = uVar2;
    *(undefined4 *)((longlong)puVar11 + 0xdc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar10 + 0xe4);
    uVar2 = *(undefined4 *)(puVar10 + 0x1d);
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0xec);
    *(undefined4 *)(puVar11 + 0x1c) = *(undefined4 *)(puVar10 + 0x1c);
    *(undefined4 *)((longlong)puVar11 + 0xe4) = uVar1;
    *(undefined4 *)(puVar11 + 0x1d) = uVar2;
    *(undefined4 *)((longlong)puVar11 + 0xec) = uVar3;
    puVar8[0x34] = 0;
    puVar8[0x35] = 0;
    puVar8[0x41] = 0;
    puVar8[0x42] = 0;
    puVar8[0x46] = 0;
    puVar8[0x49] = 0;
    puVar8[0x38] = 0;
    puVar8[0x37] = 0;
    puVar8[0x4a] = 0;
    puVar8[0x3e] = 0;
    puVar8[0x3f] = 0;
    puVar8[0x40] = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1cc) = 1;
    lVar9 = CRYPTO_THREAD_lock_new();
    puVar8[0x4d] = lVar9;
    if ((lVar9 != 0) && (iVar7 = CRYPTO_new_ex_data(2,puVar8,puVar8 + 0x3e), iVar7 != 0)) {
      if (param_1[0x37] != 0) {
        iVar7 = X509_up_ref();
        if (iVar7 == 0) goto LAB_14f664287;
        puVar8[0x37] = param_1[0x37];
      }
      if (param_1[0x38] != 0) {
        lVar9 = X509_chain_up_ref();
        puVar8[0x38] = lVar9;
        if (lVar9 == 0) goto LAB_14f664287;
      }
      if (param_1[0x34] != 0) {
        lVar9 = CRYPTO_strdup(param_1[0x34],"ssl\\ssl_sess.c",0xa1);
        puVar8[0x34] = lVar9;
        if (lVar9 == 0) goto LAB_14f664287;
      }
      if (param_1[0x35] != 0) {
        lVar9 = CRYPTO_strdup(param_1[0x35],"ssl\\ssl_sess.c",0xa7);
        puVar8[0x35] = lVar9;
        if (lVar9 == 0) goto LAB_14f664287;
      }
      iVar7 = CRYPTO_dup_ex_data(2,puVar8 + 0x3e,param_1 + 0x3e);
      if (iVar7 != 0) {
        if (param_1[0x41] != 0) {
          lVar9 = CRYPTO_strdup(param_1[0x41],"ssl\\ssl_sess.c",0xb4);
          puVar8[0x41] = lVar9;
          if (lVar9 == 0) goto LAB_14f664287;
        }
        if ((param_2 == 0) || (param_1[0x42] == 0)) {
          *(undefined4 *)(puVar8 + 0x44) = 0;
          puVar8[0x43] = 0;
        }
        else {
          lVar9 = CRYPTO_memdup(param_1[0x42],param_1[0x43],"ssl\\ssl_sess.c",0xbc);
          puVar8[0x42] = lVar9;
          if (lVar9 == 0) goto LAB_14f664287;
        }
        if (param_1[0x46] != 0) {
          lVar9 = CRYPTO_memdup(param_1[0x46],param_1[0x47],"ssl\\ssl_sess.c",0xc6);
          puVar8[0x46] = lVar9;
          if (lVar9 == 0) goto LAB_14f664287;
        }
        if (param_1[0x49] != 0) {
          lVar9 = CRYPTO_strdup(param_1[0x49],"ssl\\ssl_sess.c",0xcd);
          puVar8[0x49] = lVar9;
          if (lVar9 == 0) goto LAB_14f664287;
        }
        if (param_1[0x4a] == 0) {
          return puVar8;
        }
        lVar9 = CRYPTO_memdup(param_1[0x4a],param_1[0x4b],"ssl\\ssl_sess.c",0xd6);
        puVar8[0x4a] = lVar9;
        if (lVar9 != 0) {
          return puVar8;
        }
      }
    }
  }
LAB_14f664287:
  ERR_put_error(0x14,0x15c,0x41,"ssl\\ssl_sess.c",0xdd,uVar12);
  SSL_SESSION_free(puVar8);
  return (undefined8 *)0x0;
}

// FUN_14f664390 @ 14f664390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f664390(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6643a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

// FUN_14f6643b0 @ 14f6643b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6643b0(longlong param_1,longlong *param_2)

{
  if (((int)param_2[1] == 0) ||
     (*(int *)(param_1 + 0x1d4) + *(int *)(param_1 + 0x1d0) < (int)param_2[1])) {
    OPENSSL_LH_delete(param_2[2],param_1);
    FUN_14f662c60(*param_2,param_1);
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    if (*(code **)(*param_2 + 0x58) != (code *)0x0) {
      (**(code **)(*param_2 + 0x58))();
    }
    SSL_SESSION_free(param_1);
  }
  return;
}

