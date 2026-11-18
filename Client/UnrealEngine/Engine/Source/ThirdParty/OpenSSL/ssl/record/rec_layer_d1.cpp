// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// DTLS_RECORD_LAYER_clear @ 14f6819b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DTLS_RECORD_LAYER_clear(longlong param_1)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  _Dst = *(void **)(param_1 + 0xeb0);
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x28));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x49)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x4a);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x28));
  }
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x38));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x50)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x51);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x38));
  }
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x48));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x57)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x58);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x48));
  }
  uVar1 = *(undefined8 *)((longlong)_Dst + 0x28);
  uVar2 = *(undefined8 *)((longlong)_Dst + 0x38);
  uVar3 = *(undefined8 *)((longlong)_Dst + 0x48);
  memset(_Dst,0,0x60);
  *(undefined8 *)((longlong)_Dst + 0x28) = uVar1;
  *(undefined8 *)((longlong)_Dst + 0x48) = uVar3;
  *(undefined8 *)((longlong)_Dst + 0x38) = uVar2;
  return;
}

// DTLS_RECORD_LAYER_free @ 14f681b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DTLS_RECORD_LAYER_free(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xeb0) != 0) {
    DTLS_RECORD_LAYER_clear();
    pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x28));
    pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x38));
    pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x48));
    CRYPTO_free(*(undefined8 *)(param_1 + 0xeb0),"ssl\\record\\rec_layer_d1.c",0x38);
    *(undefined8 *)(param_1 + 0xeb0) = 0;
  }
  return;
}

// DTLS_RECORD_LAYER_new @ 14f681bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DTLS_RECORD_LAYER_new(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f681bd0;
  lVar1 = CRYPTO_malloc(0x60,"ssl\\record\\rec_layer_d1.c",0x17);
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x27b,0x41,"ssl\\record\\rec_layer_d1.c",0x18,uVar3);
    return 0;
  }
  *(longlong *)(param_1 + 0xeb0) = lVar1;
  uVar3 = pqueue_new();
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  uVar3 = pqueue_new();
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  lVar2 = pqueue_new();
  *(longlong *)(lVar1 + 0x48) = lVar2;
  if (((*(longlong *)(lVar1 + 0x28) != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) && (lVar2 != 0)) {
    return 1;
  }
  pqueue_free();
  pqueue_free(*(undefined8 *)(lVar1 + 0x38));
  pqueue_free(*(undefined8 *)(lVar1 + 0x48));
  CRYPTO_free(lVar1,"ssl\\record\\rec_layer_d1.c",0x27);
  *(undefined8 *)(param_1 + 0xeb0) = 0;
  return 0;
}

// DTLS_RECORD_LAYER_set_saved_w_epoch @ 14f681cb0

void DTLS_RECORD_LAYER_set_saved_w_epoch(longlong param_1,ushort param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xeb0);
  if ((uint)param_2 == *(ushort *)(lVar1 + 2) - 1) {
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_1 + 0xea0);
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x50);
    *(ushort *)(*(longlong *)(param_1 + 0xeb0) + 2) = param_2;
    return;
  }
  if ((uint)param_2 == *(ushort *)(lVar1 + 2) + 1) {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_1 + 0xea0);
    lVar1 = *(longlong *)(param_1 + 0xeb0);
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(lVar1 + 0x58);
  }
  *(ushort *)(lVar1 + 2) = param_2;
  return;
}

// DTLS_RECORD_LAYER_set_write_sequence @ 14f681d20

void DTLS_RECORD_LAYER_set_write_sequence(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xea0) = *param_2;
  return;
}

// do_dtls1_write @ 14f681dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
do_dtls1_write(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,ulonglong param_4,
              int param_5,longlong *param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  undefined1 *local_b8;
  longlong *local_b0;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  ulonglong local_a0;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_b0 = param_6;
  local_b8 = param_3;
  if (*(longlong *)(param_1 + 0x226) != 0) {
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x333);
    local_d8 = (longlong *)0x1534805e8;
    ossl_statem_fatal(param_1,0x50,0xf5,0x44);
    return 0;
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) &&
     (uVar6 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(), (int)uVar6 < 1)) {
    return uVar6;
  }
  if ((param_4 == 0) && (param_5 == 0)) {
    return 0;
  }
  uVar2 = ssl_get_max_send_fragment(param_1);
  if (uVar2 < param_4) {
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x344);
    local_d8 = (longlong *)0x1534805e8;
    ossl_statem_fatal(param_1,0x50,0xf5);
    return 0;
  }
  if (((*(longlong *)(param_1 + 0x142) == 0) || (*(longlong *)(param_1 + 0x11a) == 0)) ||
     (lVar7 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x120)), lVar7 == 0)) {
    iVar3 = 0;
  }
  else {
    uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x120));
    iVar3 = EVP_MD_size(uVar6);
    if (iVar3 < 0) {
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x354);
      local_d8 = (longlong *)0x1534805e8;
      ossl_statem_fatal(param_1,0x50,0xf5);
      return 0xffffffff;
    }
  }
  puVar1 = *(undefined1 **)(param_1 + 0x21e);
  *puVar1 = (char)param_2;
  if ((**(int **)(param_1 + 2) == 0x1ffff) && (param_1[0x176] != 0x100)) {
    *(undefined2 *)(puVar1 + 1) = 0xfffe;
  }
  else {
    puVar1[1] = (char)((uint)*param_1 >> 8);
    puVar1[2] = *(undefined1 *)param_1;
  }
  local_a4 = param_2;
  if (*(longlong *)(param_1 + 0x11a) == 0) {
LAB_14f681fbb:
    iVar4 = 0;
  }
  else {
    uVar6 = EVP_CIPHER_CTX_cipher();
    uVar2 = EVP_CIPHER_flags(uVar6);
    uVar2 = uVar2 & 0xf0007;
    if (uVar2 == 2) {
      iVar4 = EVP_CIPHER_CTX_iv_length(*(undefined8 *)(param_1 + 0x11a));
      if (iVar4 < 2) goto LAB_14f681fbb;
    }
    else {
      iVar4 = 8;
      if ((uVar2 != 6) && (iVar4 = 0, uVar2 == 7)) {
        iVar4 = 8;
      }
    }
  }
  lVar7 = (longlong)iVar4;
  local_88 = puVar1 + lVar7 + 0xd;
  local_80 = local_b8;
  local_a0 = param_4;
  if (*(longlong *)(param_1 + 0x116) == 0) {
    memcpy(local_88,local_b8,param_4);
    local_80 = local_88;
  }
  else {
    iVar5 = ssl3_do_compress(param_1,local_a8);
    if (iVar5 == 0) {
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x390);
      uVar6 = 0x8d;
      goto LAB_14f68212d;
    }
  }
  if (((**(uint **)(param_1 + 0x2a) & 0x400) == 0) && (iVar3 != 0)) {
    iVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                      (param_1,local_a8,puVar1 + local_a0 + lVar7 + 0xd,1);
    if (iVar5 != 0) {
      local_a0 = local_a0 + (longlong)iVar3;
      goto LAB_14f682090;
    }
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3a4);
  }
  else {
LAB_14f682090:
    local_88 = puVar1 + 0xd;
    if (iVar4 != 0) {
      local_a0 = local_a0 + lVar7;
    }
    local_80 = local_88;
    iVar4 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))(param_1,local_a8,1);
    if (iVar4 < 1) {
      iVar3 = ossl_statem_in_error(param_1);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3b4);
    }
    else {
      if (((**(uint **)(param_1 + 0x2a) & 0x400) == 0) || (iVar3 == 0)) {
LAB_14f68215b:
        puVar1[3] = *(undefined1 *)(*(longlong *)(param_1 + 0x5b8) + 3);
        puVar1[4] = *(undefined1 *)(*(longlong *)(param_1 + 0x5b8) + 2);
        *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((longlong)param_1 + 0x16d2);
        *(undefined2 *)(puVar1 + 9) = *(undefined2 *)((longlong)param_1 + 0x16d6);
        puVar1[0xb] = (char)(local_a0 >> 8);
        puVar1[0xc] = (undefined1)local_a0;
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          local_c8 = *(undefined8 *)(param_1 + 0x30);
          local_d8 = (longlong *)0xd;
          local_d0 = param_1;
          (**(code **)(param_1 + 0x2e))(1,0,0x100,puVar1);
        }
        local_a0 = local_a0 + 0xd;
        local_a4 = param_2;
        ssl3_record_sequence_update(param_1 + 0x5b4);
        if (param_5 == 0) {
          *(ulonglong *)(param_1 + 0x226) = local_a0;
          *(undefined8 *)(param_1 + 0x224) = 0;
          local_d8 = local_b0;
          *(ulonglong *)(param_1 + 0x5aa) = param_4;
          *(undefined1 **)(param_1 + 0x5b0) = local_b8;
          param_1[0x5ac] = param_2;
          *(ulonglong *)(param_1 + 0x5ae) = param_4;
          uVar6 = ssl3_write_pending(param_1,param_2,local_b8,param_4);
          return uVar6;
        }
        *local_b0 = local_a0;
        return 1;
      }
      iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                        (param_1,local_a8,puVar1 + local_a0 + 0xd,1);
      if (iVar4 != 0) {
        local_a0 = local_a0 + (longlong)iVar3;
        goto LAB_14f68215b;
      }
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3bd);
    }
  }
  uVar6 = 0x44;
LAB_14f68212d:
  local_d8 = (longlong *)0x1534805e8;
  ossl_statem_fatal(param_1,0x50,0xf5,uVar6);
  return 0xffffffff;
}

// dtls1_buffer_record @ 14f682290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_buffer_record(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  uVar3 = pqueue_size(*(undefined8 *)(param_2 + 8));
  if (99 < uVar3) {
    return 0;
  }
  puVar4 = (undefined8 *)CRYPTO_malloc(0x80,"ssl\\record\\rec_layer_d1.c");
  lVar5 = pitem_new(param_3);
  if ((puVar4 == (undefined8 *)0x0) || (lVar5 == 0)) {
    CRYPTO_free(puVar4,"ssl\\record\\rec_layer_d1.c",0x9a);
    pitem_free(lVar5);
    ossl_statem_fatal(param_1,0x50,0xf7,0x44,"ssl\\record\\rec_layer_d1.c",CONCAT44(uVar7,0x9d));
  }
  else {
    *puVar4 = *(undefined8 *)(param_1 + 0x1678);
    puVar4[1] = *(undefined8 *)(param_1 + 0x1680);
    uVar1 = *(undefined8 *)(param_1 + 0x858);
    puVar4[2] = *(undefined8 *)(param_1 + 0x850);
    puVar4[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x868);
    puVar4[4] = *(undefined8 *)(param_1 + 0x860);
    puVar4[5] = uVar1;
    puVar4[6] = *(undefined8 *)(param_1 + 0x870);
    uVar1 = *(undefined8 *)(param_1 + 0xd80);
    puVar4[7] = *(undefined8 *)(param_1 + 0xd78);
    puVar4[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xd90);
    puVar4[9] = *(undefined8 *)(param_1 + 0xd88);
    puVar4[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xda0);
    puVar4[0xb] = *(undefined8 *)(param_1 + 0xd98);
    puVar4[0xc] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xdb0);
    puVar4[0xd] = *(undefined8 *)(param_1 + 0xda8);
    puVar4[0xe] = uVar1;
    puVar4[0xf] = *(undefined8 *)(param_1 + 0xdb8);
    *(undefined8 **)(lVar5 + 8) = puVar4;
    *(undefined8 *)(param_1 + 0x1678) = 0;
    *(undefined8 *)(param_1 + 0x1680) = 0;
    *(undefined8 *)(param_1 + 0x850) = 0;
    *(undefined8 *)(param_1 + 0x858) = 0;
    *(undefined8 *)(param_1 + 0x860) = 0;
    *(undefined8 *)(param_1 + 0x868) = 0;
    *(undefined8 *)(param_1 + 0x870) = 0;
    memset((undefined8 *)(param_1 + 0xd78),0,0x900);
    iVar2 = ssl3_setup_buffers(param_1);
    if (iVar2 != 0) {
      lVar6 = pqueue_insert(*(undefined8 *)(param_2 + 8),lVar5);
      if (lVar6 == 0) {
        CRYPTO_free(puVar4[2],"ssl\\record\\rec_layer_d1.c",0xc1);
        CRYPTO_free(puVar4,"ssl\\record\\rec_layer_d1.c",0xc2);
        pitem_free(lVar5);
      }
      return 1;
    }
    CRYPTO_free(puVar4[2],"ssl\\record\\rec_layer_d1.c",0xb9);
    CRYPTO_free(puVar4,"ssl\\record\\rec_layer_d1.c",0xba);
    pitem_free(lVar5);
  }
  return 0xffffffff;
}

// FUN_14f6824b0 @ 14f6824b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6824b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  SSL3_BUFFER_release(param_1 + 0x850);
  *(longlong *)(param_1 + 0x1678) = *plVar1;
  *(longlong *)(param_1 + 0x1680) = plVar1[1];
  lVar2 = plVar1[3];
  *(longlong *)(param_1 + 0x850) = plVar1[2];
  *(longlong *)(param_1 + 0x858) = lVar2;
  lVar2 = plVar1[5];
  *(longlong *)(param_1 + 0x860) = plVar1[4];
  *(longlong *)(param_1 + 0x868) = lVar2;
  *(longlong *)(param_1 + 0x870) = plVar1[6];
  lVar2 = plVar1[8];
  *(longlong *)(param_1 + 0xd78) = plVar1[7];
  *(longlong *)(param_1 + 0xd80) = lVar2;
  lVar2 = plVar1[10];
  *(longlong *)(param_1 + 0xd88) = plVar1[9];
  *(longlong *)(param_1 + 0xd90) = lVar2;
  lVar2 = plVar1[0xc];
  *(longlong *)(param_1 + 0xd98) = plVar1[0xb];
  *(longlong *)(param_1 + 0xda0) = lVar2;
  lVar2 = plVar1[0xe];
  *(longlong *)(param_1 + 0xda8) = plVar1[0xd];
  *(longlong *)(param_1 + 0xdb0) = lVar2;
  *(longlong *)(param_1 + 0xdb8) = plVar1[0xf];
  lVar2 = *plVar1;
  *(undefined4 *)(param_1 + 0x16ca) = *(undefined4 *)(lVar2 + 5);
  *(undefined2 *)(param_1 + 0x16ce) = *(undefined2 *)(lVar2 + 9);
  return 1;
}

// dtls1_get_bitmap @ 14f682580

ushort * dtls1_get_bitmap(longlong param_1,longlong param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  *param_3 = 0;
  puVar2 = *(ushort **)(param_1 + 0x16e0);
  uVar1 = *puVar2;
  if (*(uint *)(param_2 + 0x3c) == (uint)uVar1) {
    return puVar2 + 2;
  }
  if (((*(uint *)(param_2 + 0x3c) == uVar1 + 1) && (puVar2[0x10] != uVar1)) &&
     (*(int *)(param_2 + 4) - 0x15U < 2)) {
    *param_3 = 1;
    return (ushort *)(*(longlong *)(param_1 + 0x16e0) + 0x10);
  }
  return (ushort *)0x0;
}

// dtls1_process_buffered_records @ 14f6825e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_process_buffered_records(longlong param_1)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  ushort *puVar5;
  
  lVar4 = pqueue_peek(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x28));
  if (lVar4 != 0) {
    psVar2 = *(short **)(param_1 + 0x16e0);
    if (psVar2[0x10] != *psVar2) {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x870) != 0) {
      return 1;
    }
    lVar4 = pqueue_peek(*(undefined8 *)(psVar2 + 0x14));
    while (lVar4 != 0) {
      lVar4 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x28));
      if (lVar4 != 0) {
        FUN_14f6824b0(param_1,lVar4);
        CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0xd1);
        pitem_free(lVar4);
      }
      puVar5 = *(ushort **)(param_1 + 0x16e0);
      uVar1 = *puVar5;
      if (*(uint *)(param_1 + 0xdb4) == (uint)uVar1) {
        puVar5 = puVar5 + 2;
      }
      else {
        if (((*(uint *)(param_1 + 0xdb4) != uVar1 + 1) || (puVar5[0x10] == uVar1)) ||
           (1 < *(int *)(param_1 + 0xd7c) - 0x15U)) goto LAB_14f68279e;
        puVar5 = puVar5 + 8;
      }
      if (puVar5 == (ushort *)0x0) {
LAB_14f68279e:
        ossl_statem_fatal(param_1,0x50,0x1a8,0x44,"ssl\\record\\rec_layer_d1.c",0x10b);
        return 0;
      }
      iVar3 = dtls1_record_replay_check(param_1,puVar5);
      if ((iVar3 == 0) || (iVar3 = dtls1_process_record(param_1,puVar5), iVar3 == 0)) {
        iVar3 = ossl_statem_in_error(param_1);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        *(undefined8 *)(param_1 + 0xd80) = 0;
        *(undefined8 *)(param_1 + 0x1680) = 0;
      }
      else {
        iVar3 = dtls1_buffer_record(param_1,*(longlong *)(param_1 + 0x16e0) + 0x30,param_1 + 0xdb8);
        if (iVar3 < 0) {
          return 0;
        }
      }
      lVar4 = pqueue_peek(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x28));
    }
  }
  (*(undefined2 **)(param_1 + 0x16e0))[0x18] = **(undefined2 **)(param_1 + 0x16e0);
  (*(short **)(param_1 + 0x16e0))[0x10] = **(short **)(param_1 + 0x16e0) + 1;
  return 1;
}

// dtls1_read_bytes @ 14f6827d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
dtls1_read_bytes(undefined4 *param_1,int param_2,undefined4 *param_3,void *param_4,ulonglong param_5
                ,int param_6,size_t *param_7)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  void *local_c8;
  char local_b8 [96];
  size_t *local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_58[0] = param_7;
  pcVar8 = (code *)0x0;
  local_c8 = param_4;
  if ((*(longlong *)(param_1 + 0x214) == 0) && (iVar4 = ssl3_setup_buffers(), iVar4 == 0)) {
    return 0xffffffff;
  }
  if (((param_2 != 0) && (1 < param_2 - 0x16U)) || ((param_6 != 0 && (param_2 != 0x17)))) {
    local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x16a);
    local_e8 = "ssl\\record\\rec_layer_d1.c";
    ossl_statem_fatal(param_1,0x50,0x102,0x44);
    return 0xffffffff;
  }
  iVar4 = ossl_statem_get_in_handshake(param_1);
  if ((iVar4 == 0) && (iVar4 = SSL_in_init(param_1), iVar4 != 0)) {
    uVar5 = (**(code **)(param_1 + 0xc))(param_1);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if ((int)uVar5 == 0) {
      return 0xffffffff;
    }
  }
LAB_14f6828d0:
  do {
    param_1[10] = 1;
    iVar4 = SSL_is_init_finished(param_1);
    if (((iVar4 != 0) && (*(longlong *)(param_1 + 0x360) == 0)) &&
       (lVar6 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0x5b8) + 0x48)), lVar6 != 0)) {
      FUN_14f6824b0(param_1,lVar6);
      CRYPTO_free(*(undefined8 *)(lVar6 + 8),"ssl\\record\\rec_layer_d1.c",0x196);
      pitem_free(lVar6);
    }
    iVar4 = dtls1_handle_timeout(param_1);
  } while (0 < iVar4);
  iVar4 = ossl_statem_in_error(param_1);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  if ((*(longlong *)(param_1 + 0x360) == 0) || (param_1[0x20f] == 0xf1)) {
    *(undefined8 *)(param_1 + 0x210) = 0;
    iVar4 = dtls1_get_record(param_1);
    if (iVar4 < 1) {
      uVar5 = dtls1_read_failed(param_1);
      if ((int)uVar5 < 1) {
        return uVar5;
      }
      goto LAB_14f6828d0;
    }
    *(undefined8 *)(param_1 + 0x210) = 1;
  }
  if ((param_1[0x35f] != 0x15) && (*(longlong *)(param_1 + 0x360) != 0)) {
    param_1[0x5b7] = 0;
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xf0) != 0) && (param_1[0x35f] != 0x16)) {
    iVar4 = dtls1_buffer_record(param_1,*(longlong *)(param_1 + 0x5b8) + 0x40,param_1 + 0x36e);
    if (iVar4 < 0) {
      return 0xffffffff;
    }
    goto LAB_14f682b2f;
  }
  if ((param_1[0x11] & 2) != 0) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    param_1[0x36c] = 1;
    param_1[10] = 1;
    return 0;
  }
  iVar4 = param_1[0x35f];
  if ((param_2 == iVar4) ||
     (((iVar4 == 0x14 && (param_2 == 0x16)) && (param_3 != (undefined4 *)0x0)))) {
    iVar4 = SSL_in_init(param_1);
    if (((iVar4 == 0) || (param_2 != 0x17)) || (*(longlong *)(param_1 + 0x10e) != 0)) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_1[0x35f];
      }
      if (param_5 == 0) {
        if (*(longlong *)(param_1 + 0x360) == 0) {
          param_1[0x36c] = 1;
        }
        return 0;
      }
      if (*(ulonglong *)(param_1 + 0x360) < param_5) {
        param_5 = *(ulonglong *)(param_1 + 0x360);
      }
      memcpy(local_c8,(void *)(*(longlong *)(param_1 + 0x366) + *(longlong *)(param_1 + 0x364)),
             param_5);
      if (param_6 == 0) {
        *(ulonglong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) - param_5;
        *(ulonglong *)(param_1 + 0x364) = *(longlong *)(param_1 + 0x364) + param_5;
        if (*(longlong *)(param_1 + 0x360) != 0) goto LAB_14f682f22;
        param_1[0x20f] = 0xf0;
        *(undefined8 *)(param_1 + 0x364) = 0;
      }
      else if (*(longlong *)(param_1 + 0x360) != 0) goto LAB_14f682f22;
      param_1[0x36c] = 1;
LAB_14f682f22:
      *local_58[0] = param_5;
      return 1;
    }
    local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x1ec);
    uVar10 = 100;
  }
  else {
    if (iVar4 != 0x15) {
      if ((param_1[0x11] & 1) != 0) {
        param_1[10] = 1;
        *(undefined8 *)(param_1 + 0x360) = 0;
        param_1[0x36c] = 1;
        return 0;
      }
      if (iVar4 == 0x14) {
LAB_14f682b2f:
        *(undefined8 *)(param_1 + 0x360) = 0;
        param_1[0x36c] = 1;
      }
      else {
        if ((iVar4 != 0x16) || (iVar4 = ossl_statem_get_in_handshake(param_1), iVar4 != 0)) {
          iVar4 = param_1[0x35f];
          if (iVar4 < 0x14) {
LAB_14f682e1b:
            local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x2ea);
          }
          else {
            if (iVar4 < 0x17) {
              local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x2f5);
              uVar10 = 0x44;
              goto LAB_14f682c64;
            }
            if (iVar4 != 0x17) goto LAB_14f682e1b;
            if (((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x110) != 0) &&
                (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x108) != 0)) &&
               (iVar4 = ossl_statem_app_data_allowed(param_1), iVar4 != 0)) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x110) = 2;
              return 0xffffffff;
            }
            local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x306);
          }
          uVar10 = 0xf5;
          goto LAB_14f682c64;
        }
        if ((param_1[0x36d] != (uint)**(ushort **)(param_1 + 0x5b8)) ||
           (*(ulonglong *)(param_1 + 0x360) < 0xc)) goto LAB_14f682b2f;
        dtls1_get_message_header(*(undefined8 *)(param_1 + 0x366),local_b8);
        if (local_b8[0] == '\x14') {
          iVar4 = dtls1_check_timeout_num();
          if (iVar4 < 0) {
            return 0xffffffff;
          }
          iVar4 = dtls1_retransmit_buffered_messages(param_1);
          if ((iVar4 < 1) && (iVar4 = ossl_statem_in_error(param_1), iVar4 != 0)) {
            return 0xffffffff;
          }
          *(undefined8 *)(param_1 + 0x360) = 0;
          param_1[0x36c] = 1;
        }
        else {
          iVar4 = SSL_is_init_finished(param_1);
          if (iVar4 == 0) {
            uVar7 = 0x50;
            local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x2c5);
            uVar10 = 0x44;
            goto LAB_14f682c6d;
          }
          ossl_statem_set_in_init(param_1,1);
          uVar5 = (**(code **)(param_1 + 0xc))(param_1);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          if ((int)uVar5 == 0) {
            return 0xffffffff;
          }
        }
        if (((*(byte *)(param_1 + 0x174) & 4) == 0) && (*(longlong *)(param_1 + 0x21c) == 0)) {
          param_1[10] = 3;
          uVar5 = SSL_get_rbio(param_1);
          BIO_clear_flags(uVar5,0xf);
          BIO_set_flags(uVar5,9);
          return 0xffffffff;
        }
      }
      goto LAB_14f6828d0;
    }
    uVar3 = *(ulonglong *)(param_1 + 0x360);
    if ((((uVar3 < 0x8000000000000000) && (uVar3 != 0)) &&
        (cVar1 = *(char *)(*(longlong *)(param_1 + 0x366) + *(longlong *)(param_1 + 0x364)),
        uVar3 != 1)) &&
       (bVar2 = ((char *)(*(longlong *)(param_1 + 0x366) + *(longlong *)(param_1 + 0x364)))[1],
       uVar3 == 2)) {
      if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
        local_d8 = *(undefined8 *)(param_1 + 0x30);
        local_e8 = (char *)0x2;
        local_e0 = param_1;
        (**(code **)(param_1 + 0x2e))(0,*param_1,0x15);
      }
      pcVar11 = *(code **)(param_1 + 0x15a);
      if ((pcVar11 == (code *)0x0) &&
         (pcVar11 = pcVar8, *(code **)(*(longlong *)(param_1 + 0x166) + 0x108) != (code *)0x0)) {
        pcVar11 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108);
      }
      uVar9 = (uint)bVar2;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(param_1,0x4004,CONCAT11(cVar1,bVar2));
      }
      if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
          param_1[10] = 1;
          local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x267);
          local_e8 = "ssl\\record\\rec_layer_d1.c";
          *(uint *)(*(longlong *)(param_1 + 0x2a) + 0xf8) = uVar9;
          ossl_statem_fatal(param_1,0xffffffff,0x102,bVar2 + 1000);
          BIO_snprintf(local_58,0x10,"%d",bVar2);
          ERR_add_error_data(2,"SSL alert number ",local_58);
          param_1[0x11] = param_1[0x11] | 2;
          param_1[0x36c] = 1;
          SSL_CTX_remove_session(*(undefined8 *)(param_1 + 0x1da),*(undefined8 *)(param_1 + 0x142));
          return 0;
        }
        local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x270);
        uVar7 = 0x2f;
        uVar10 = 0xf6;
        goto LAB_14f682c6d;
      }
      *(uint *)(*(longlong *)(param_1 + 0x2a) + 0xf4) = uVar9;
      param_1[0x36c] = 1;
      param_1[0x5b7] = param_1[0x5b7] + 1;
      if (param_1[0x5b7] == 5) {
        local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x24a);
        uVar10 = 0x199;
        goto LAB_14f682c64;
      }
      pcVar8 = pcVar11;
      if (uVar9 == 0) {
        param_1[0x11] = param_1[0x11] | 2;
        return 0;
      }
      goto LAB_14f6828d0;
    }
    local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x231);
    uVar10 = 0xcd;
  }
LAB_14f682c64:
  uVar7 = 10;
LAB_14f682c6d:
  local_e8 = "ssl\\record\\rec_layer_d1.c";
  ossl_statem_fatal(param_1,uVar7,0x102,uVar10);
  return 0xffffffff;
}

// dtls1_reset_seq_numbers @ 14f682f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_reset_seq_numbers(longlong param_1,ulonglong param_2)

{
  short *psVar1;
  longlong lVar2;
  
  if ((param_2 & 1) != 0) {
    **(short **)(param_1 + 0x16e0) = **(short **)(param_1 + 0x16e0) + 1;
    lVar2 = *(longlong *)(param_1 + 0x16e0);
    *(undefined8 *)(lVar2 + 4) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar2 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x16e0);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    dtls1_clear_received_buffer(param_1);
    *(undefined8 *)(param_1 + 0x16c8) = 0;
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x50) = *(undefined8 *)(param_1 + 0x16d0);
  psVar1 = (short *)(*(longlong *)(param_1 + 0x16e0) + 2);
  *psVar1 = *psVar1 + 1;
  *(undefined8 *)(param_1 + 0x16d0) = 0;
  return;
}

// dtls1_retrieve_buffered_record @ 14f683000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_retrieve_buffered_record(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = pqueue_pop(*(undefined8 *)(param_2 + 8));
  if (lVar1 != 0) {
    FUN_14f6824b0(param_1,lVar1);
    CRYPTO_free(*(undefined8 *)(lVar1 + 8),"ssl\\record\\rec_layer_d1.c",0xd1);
    pitem_free(lVar1);
    return 1;
  }
  return 0;
}

// dtls1_write_bytes @ 14f683080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dtls1_write_bytes(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (0x4000 < param_4) {
    ossl_statem_fatal(param_1,0x50,0x221,0x44,"ssl\\record\\rec_layer_d1.c",0x318,0x14f68308a);
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  uVar1 = do_dtls1_write();
  return uVar1;
}

