// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 17

// dtls1_buffer_message @ 14f6865d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 dtls1_buffer_message(int *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return 0;
  }
  puVar2 = (undefined1 *)FUN_14f686ef0(*(undefined8 *)(param_1 + 0x26),0);
  if (puVar2 != (undefined1 *)0x0) {
    memcpy(*(void **)(puVar2 + 0x58),*(void **)(*(longlong *)(param_1 + 0x22) + 8),
           *(size_t *)(param_1 + 0x26));
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2c) + 0x140);
    if (param_2 == 0) {
      if (lVar3 + 0xcU != (ulonglong)(uint)param_1[0x26]) {
        return 0;
      }
    }
    else {
      lVar4 = 1;
      if (*param_1 == 0x100) {
        lVar4 = 3;
      }
      if (lVar4 + lVar3 != (ulonglong)(uint)param_1[0x26]) {
        return 0;
      }
    }
    *(longlong *)(puVar2 + 8) = lVar3;
    *(undefined2 *)(puVar2 + 0x10) = *(undefined2 *)(*(longlong *)(param_1 + 0x2c) + 0x148);
    *puVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x2c) + 0x138);
    *(undefined8 *)(puVar2 + 0x18) = 0;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x140);
    *(int *)(puVar2 + 0x28) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = uVar1;
    *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(param_1 + 0x11a);
    *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)(param_1 + 0x116);
    *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(param_1 + 0x142);
    *(undefined2 *)(puVar2 + 0x50) = *(undefined2 *)(*(longlong *)(param_1 + 0x5b8) + 2);
    local_18 = (ulonglong)
               CONCAT11(puVar2[0x10] * '\x02' - puVar2[0x28],
                        (char)((uint)*(ushort *)(puVar2 + 0x10) * 2 - *(int *)(puVar2 + 0x28) >> 8))
               << 0x30;
    lVar3 = pitem_new(&local_18,puVar2);
    if (lVar3 != 0) {
      pqueue_insert(*(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x120),lVar3);
      return 1;
    }
    dtls1_hm_fragment_free(puVar2);
  }
  return 0;
}

// dtls1_close_construct_packet @ 14f686790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_close_construct_packet(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong local_res20;
  
  if ((param_3 != 0x101) && (iVar1 = WPACKET_close(param_2), iVar1 == 0)) {
    return 0;
  }
  iVar1 = WPACKET_get_length(param_2,&local_res20);
  if ((iVar1 != 0) && (local_res20 < 0x80000000)) {
    if (param_3 != 0x101) {
      *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x140) = local_res20 - 0xc;
      *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x158) = local_res20 - 0xc;
    }
    *(longlong *)(param_1 + 0x98) = (longlong)(int)local_res20;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if ((param_3 != 3) && (iVar1 = dtls1_buffer_message(param_1,param_3 == 0x101), iVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

// dtls1_do_write @ 14f686880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_do_write(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong local_res18;
  
  iVar3 = dtls1_query_mtu();
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  lVar9 = *(longlong *)(param_1 + 0x2c);
  uVar5 = dtls1_min_mtu(param_1);
  if ((*(ulonglong *)(lVar9 + 0x130) < uVar5) ||
     (((*(longlong *)(param_1 + 0x28) == 0 && (param_2 == 0x16)) &&
      (*(longlong *)(param_1 + 0x26) != *(longlong *)(lVar9 + 0x140) + 0xc)))) {
    return 0xffffffff;
  }
  lVar9 = 0;
  lVar11 = lVar9;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    if (*(longlong *)(param_1 + 0x11a) != 0) {
      uVar6 = EVP_CIPHER_CTX_cipher();
      uVar4 = EVP_CIPHER_flags(uVar6);
      if ((uVar4 >> 0x15 & 1) != 0) goto LAB_14f686957;
    }
    uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x120));
    iVar3 = EVP_MD_size(uVar6);
    lVar11 = (longlong)iVar3;
  }
LAB_14f686957:
  lVar10 = lVar9;
  if (*(longlong *)(param_1 + 0x11a) != 0) {
    uVar6 = EVP_CIPHER_CTX_cipher();
    uVar4 = EVP_CIPHER_flags(uVar6);
    if ((uVar4 & 0xf0007) == 2) {
      iVar3 = EVP_CIPHER_CTX_block_size(*(undefined8 *)(param_1 + 0x11a));
      lVar10 = (longlong)(iVar3 * 2);
    }
  }
  param_1[10] = 1;
  lVar7 = *(longlong *)(param_1 + 0x26);
  bVar2 = true;
  do {
    if (lVar7 == 0) {
      return 0;
    }
    if ((param_2 == 0x16) && (uVar5 = *(ulonglong *)(param_1 + 0x28), uVar5 != 0)) {
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2c) + 0x150);
      }
      else {
        if (uVar5 < 0xd) {
          return 0xffffffff;
        }
        *(longlong *)(param_1 + 0x26) = *(longlong *)(param_1 + 0x26) + 0xc;
        *(ulonglong *)(param_1 + 0x28) = uVar5 - 0xc;
      }
    }
    iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 6),0xd,0);
    uVar5 = (iVar3 + 0xd) + lVar10 + lVar11;
    if ((*(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x130) <= uVar5) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x130) - uVar5, uVar5 < 0xd)) {
      uVar6 = BIO_ctrl(*(undefined8 *)(param_1 + 6),0xb,0);
      if ((int)uVar6 < 1) {
        param_1[10] = 2;
        return uVar6;
      }
      lVar7 = lVar11 + 0xd + lVar10;
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x130) <= lVar7 + 0xcU) {
        return 0xffffffff;
      }
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x2c) + 0x130) - lVar7;
    }
    if ((uint)param_1[0x26] <= uVar5) {
      uVar5 = *(ulonglong *)(param_1 + 0x26);
    }
    uVar4 = ssl_get_max_send_fragment(param_1);
    if (uVar4 < uVar5) {
      uVar5 = ssl_get_max_send_fragment(param_1);
      uVar5 = uVar5 & 0xffffffff;
    }
    if (param_2 == 0x16) {
      if (uVar5 < 0xc) {
        return 0xffffffff;
      }
      lVar7 = *(longlong *)(param_1 + 0x2c);
      *(longlong *)(lVar7 + 0x150) = lVar9;
      *(ulonglong *)(lVar7 + 0x158) = uVar5 - 0xc;
      lVar7 = *(longlong *)(param_1 + 0x2c);
      puVar8 = (undefined1 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + *(longlong *)(param_1 + 0x28));
      *puVar8 = *(undefined1 *)(lVar7 + 0x138);
      puVar8[1] = *(undefined1 *)(lVar7 + 0x142);
      puVar8[2] = *(undefined1 *)(lVar7 + 0x141);
      puVar8[3] = *(undefined1 *)(lVar7 + 0x140);
      puVar8[4] = *(undefined1 *)(lVar7 + 0x149);
      puVar8[5] = *(undefined1 *)(lVar7 + 0x148);
      puVar8[6] = *(undefined1 *)(lVar7 + 0x152);
      puVar8[7] = *(undefined1 *)(lVar7 + 0x151);
      puVar8[8] = *(undefined1 *)(lVar7 + 0x150);
      puVar8[9] = *(undefined1 *)(lVar7 + 0x15a);
      puVar8[10] = *(undefined1 *)(lVar7 + 0x159);
      puVar8[0xb] = *(undefined1 *)(lVar7 + 0x158);
    }
    iVar3 = dtls1_write_bytes(param_1,param_2,
                              *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                              *(longlong *)(param_1 + 0x28),uVar5,&local_res18);
    bVar1 = false;
    if (iVar3 < 1) {
      if (!bVar2) {
        return 0xffffffff;
      }
      uVar6 = SSL_get_wbio(param_1);
      iVar3 = BIO_ctrl(uVar6,0x2b,0);
      if (iVar3 < 1) {
        return 0xffffffff;
      }
      uVar4 = SSL_get_options(param_1);
      if ((uVar4 >> 0xc & 1) != 0) {
        return 0xffffffff;
      }
      iVar3 = dtls1_query_mtu(param_1);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
    }
    else {
      if (uVar5 != local_res18) {
        return 0xffffffff;
      }
      if ((param_2 == 0x16) && (lVar7 = *(longlong *)(param_1 + 0x2c), *(int *)(lVar7 + 0x200) == 0)
         ) {
        puVar8 = (undefined1 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + *(longlong *)(param_1 + 0x28));
        if ((lVar9 == 0) && (*param_1 != 0x100)) {
          *puVar8 = *(undefined1 *)(lVar7 + 0x138);
          puVar8[1] = *(undefined1 *)(lVar7 + 0x142);
          puVar8[2] = *(undefined1 *)(lVar7 + 0x141);
          puVar8[3] = *(undefined1 *)(lVar7 + 0x140);
          puVar8[4] = *(undefined1 *)(lVar7 + 0x149);
          puVar8[5] = *(undefined1 *)(lVar7 + 0x148);
          *(undefined2 *)(puVar8 + 6) = 0;
          puVar8[8] = 0;
          puVar8[9] = *(undefined1 *)(lVar7 + 0x142);
          puVar8[10] = *(undefined1 *)(lVar7 + 0x141);
          puVar8[0xb] = *(undefined1 *)(lVar7 + 0x140);
        }
        else {
          puVar8 = puVar8 + 0xc;
        }
        iVar3 = ssl3_finish_mac(param_1,puVar8);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
      }
      uVar5 = *(ulonglong *)(param_1 + 0x26);
      if (local_res18 == uVar5) {
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          (**(code **)(param_1 + 0x2e))
                    (1,*param_1,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
                     uVar5 + *(longlong *)(param_1 + 0x28),param_1,*(undefined8 *)(param_1 + 0x30));
        }
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        return 1;
      }
      *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + local_res18;
      *(ulonglong *)(param_1 + 0x26) = uVar5 - local_res18;
      local_res18 = local_res18 - 0xc;
      lVar7 = *(longlong *)(param_1 + 0x2c);
      lVar9 = lVar9 + local_res18;
      *(longlong *)(lVar7 + 0x150) = lVar9;
      *(undefined8 *)(lVar7 + 0x158) = 0;
      bVar1 = bVar2;
    }
    lVar7 = *(longlong *)(param_1 + 0x26);
    bVar2 = bVar1;
  } while( true );
}

// dtls1_get_message_header @ 14f686db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_get_message_header(undefined1 *param_1,undefined1 *param_2)

{
  memset(param_2,0,0x58);
  *param_2 = *param_1;
  *(ulonglong *)(param_2 + 8) = (ulonglong)CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 0x10) = CONCAT11(param_1[4],param_1[5]);
  *(ulonglong *)(param_2 + 0x18) = (ulonglong)CONCAT21(CONCAT11(param_1[6],param_1[7]),param_1[8]);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)CONCAT21(CONCAT11(param_1[9],param_1[10]),param_1[0xb]);
  return;
}

// dtls1_hm_fragment_free @ 14f686e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_hm_fragment_free(longlong param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0x30));
      EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x38));
    }
    CRYPTO_free(*(undefined8 *)(param_1 + 0x58),"ssl\\statem\\statem_dtls.c",0x67);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x60),"ssl\\statem\\statem_dtls.c",0x68);
    CRYPTO_free(param_1,"ssl\\statem\\statem_dtls.c",0x69);
  }
  return;
}

// FUN_14f686ef0 @ 14f686ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f686ef0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f686f10;
  lVar3 = 0;
  lVar1 = CRYPTO_malloc(0x68,"ssl\\statem\\statem_dtls.c",0x3e);
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x26f,0x41,"ssl\\statem\\statem_dtls.c",0x3f,uVar5);
    return 0;
  }
  lVar2 = lVar3;
  if ((param_1 == 0) ||
     (lVar2 = CRYPTO_malloc(param_1,"ssl\\statem\\statem_dtls.c",0x44), lVar2 != 0)) {
    *(longlong *)(lVar1 + 0x58) = lVar2;
    if ((param_2 == 0) ||
       (lVar3 = CRYPTO_zalloc(param_1 + 7U >> 3,"ssl\\statem\\statem_dtls.c",0x50), lVar3 != 0)) {
      *(longlong *)(lVar1 + 0x60) = lVar3;
      return lVar1;
    }
    ERR_put_error(0x14,0x26f,0x41,"ssl\\statem\\statem_dtls.c",0x52,uVar5);
    CRYPTO_free(lVar2,"ssl\\statem\\statem_dtls.c",0x53);
    uVar4 = 0x54;
  }
  else {
    ERR_put_error(0x14,0x26f,0x41,"ssl\\statem\\statem_dtls.c",0x45,uVar5);
    uVar4 = 0x46;
  }
  CRYPTO_free(lVar1,"ssl\\statem\\statem_dtls.c",uVar4);
  return 0;
}

// FUN_14f687070 @ 14f687070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f687070(longlong param_1,byte *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = 1;
  uVar1 = *(ulonglong *)(param_2 + 8);
  if (uVar1 < (ulonglong)(*(longlong *)(param_2 + 0x20) + *(longlong *)(param_2 + 0x18))) {
LAB_14f687177:
    uVar6 = 0x1000001ae;
  }
  else {
    uVar4 = 0x454c;
    if (0x454c < *(ulonglong *)(param_1 + 0x5e0)) {
      uVar4 = *(ulonglong *)(param_1 + 0x5e0);
    }
    if (uVar4 < uVar1) goto LAB_14f687177;
    if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x1a8) == 0) {
      lVar2 = BUF_MEM_grow_clean(*(undefined8 *)(param_1 + 0x88),uVar1 + 0xc);
      if (lVar2 != 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x228) = uVar1;
        *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x198) = uVar1;
        *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x230) = (uint)*param_2;
        *(byte *)(*(longlong *)(param_1 + 0xb0) + 400) = *param_2;
        *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x1a0) = *(undefined2 *)(param_2 + 0x10);
        return 1;
      }
      uVar6 = CONCAT44(uVar3,0x1b9);
      uVar3 = 0x50;
      uVar5 = 7;
      goto LAB_14f687189;
    }
    if (uVar1 == *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x198)) {
      return 1;
    }
    uVar6 = 0x1000001c8;
  }
  uVar5 = 0x98;
  uVar3 = 0x2f;
LAB_14f687189:
  ossl_statem_fatal(param_1,uVar3,0x120,uVar5,"ssl\\statem\\statem_dtls.c",uVar6);
  return 0;
}

// FUN_14f6871c0 @ 14f6871c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6871c0(longlong param_1,char *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined4 local_160;
  ulonglong *local_158;
  ulonglong local_148;
  longlong local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6871d6;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar10 = *(ulonglong *)(param_2 + 0x20);
  puVar8 = (undefined8 *)0x0;
  if (*(longlong *)(param_2 + 0x18) + uVar10 <= *(ulonglong *)(param_2 + 8)) {
    local_140 = (ulonglong)CONCAT11(param_2[0x10],param_2[0x11]) << 0x30;
    lVar6 = pqueue_find(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),&local_140);
    if ((lVar6 != 0) && (uVar10 != *(ulonglong *)(param_2 + 8))) {
      lVar6 = 0;
    }
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xb0) + 0x110);
    puVar8 = (undefined8 *)0x0;
    if ((((uVar1 < *(ushort *)(param_2 + 0x10)) && ((uint)*(ushort *)(param_2 + 0x10) <= uVar1 + 10)
         ) && (lVar6 == 0)) && ((uVar1 != 0 || (*param_2 != '\x14')))) {
      if (uVar10 != *(ulonglong *)(param_2 + 8)) {
        uVar7 = FUN_14f6874c0(param_1,param_2);
        return uVar7;
      }
      uVar9 = 0x454c;
      if (0x454c < *(ulonglong *)(param_1 + 0x5e0)) {
        uVar9 = *(ulonglong *)(param_1 + 0x5e0);
      }
      if ((uVar10 <= uVar9) &&
         (puVar8 = (undefined8 *)FUN_14f686ef0(uVar10,0), puVar8 != (undefined8 *)0x0)) {
        uVar7 = *(undefined8 *)(param_2 + 8);
        *puVar8 = *(undefined8 *)param_2;
        puVar8[1] = uVar7;
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        puVar8[2] = *(undefined8 *)(param_2 + 0x10);
        puVar8[3] = uVar7;
        uVar7 = *(undefined8 *)(param_2 + 0x28);
        puVar8[4] = *(undefined8 *)(param_2 + 0x20);
        puVar8[5] = uVar7;
        uVar7 = *(undefined8 *)(param_2 + 0x38);
        puVar8[6] = *(undefined8 *)(param_2 + 0x30);
        puVar8[7] = uVar7;
        uVar2 = *(undefined4 *)(param_2 + 0x44);
        uVar3 = *(undefined4 *)(param_2 + 0x48);
        uVar4 = *(undefined4 *)(param_2 + 0x4c);
        *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(param_2 + 0x40);
        *(undefined4 *)((longlong)puVar8 + 0x44) = uVar2;
        *(undefined4 *)(puVar8 + 9) = uVar3;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar4;
        puVar8[10] = *(undefined8 *)(param_2 + 0x50);
        if (uVar10 != 0) {
          local_158 = &local_148;
          local_160 = 0;
          local_168 = uVar10;
          iVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0x16,0,puVar8[0xb]);
          if ((iVar5 < 1) || (local_148 != uVar10)) goto LAB_14f687373;
        }
        lVar6 = pitem_new(&local_140,puVar8);
        if ((lVar6 != 0) &&
           (lVar6 = pqueue_insert(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),lVar6),
           lVar6 != 0)) {
          return 0xfffffffd;
        }
      }
    }
    else {
      while( true ) {
        if (uVar10 == 0) {
          return 0xfffffffd;
        }
        local_158 = &local_148;
        local_160 = 0;
        local_168 = uVar10;
        if (0x100 < uVar10) {
          local_168 = 0x100;
        }
        iVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0x16,0,local_138);
        if (iVar5 < 1) break;
        uVar10 = uVar10 - local_148;
      }
      if (lVar6 != 0) {
        return 0;
      }
    }
  }
LAB_14f687373:
  dtls1_hm_fragment_free(puVar8);
  return 0;
}

// dtls1_read_failed @ 14f687410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dtls1_read_failed(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_2) {
    ossl_statem_fatal(param_1,0x50,0x153,0x44,"ssl\\statem\\statem_dtls.c",0x1000003cc);
    return 0;
  }
  iVar1 = dtls1_is_timer_expired();
  if (iVar1 != 0) {
    iVar1 = ossl_statem_in_error(param_1);
    if (iVar1 == 0) {
      iVar1 = SSL_in_init(param_1);
      if (iVar1 != 0) {
        uVar3 = dtls1_handle_timeout(param_1);
        return uVar3;
      }
      uVar2 = SSL_get_rbio();
      BIO_set_flags(uVar2,1);
    }
  }
  return (ulonglong)param_2;
}

// FUN_14f6874c0 @ 14f6874c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14f6874c0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined4 local_160;
  ulonglong *local_158;
  ulonglong local_148;
  longlong local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6874d6;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar14 = param_2[4];
  puVar9 = (undefined8 *)0x0;
  if (param_2[3] + uVar14 <= (ulonglong)param_2[1]) {
    uVar11 = 0x454c;
    if (0x454c < *(ulonglong *)(param_1 + 0x5e0)) {
      uVar11 = *(ulonglong *)(param_1 + 0x5e0);
    }
    puVar9 = (undefined8 *)0x0;
    if ((ulonglong)param_2[1] <= uVar11) {
      if (uVar14 == 0) {
        return 0xfffffffd;
      }
      local_140 = (ulonglong)
                  CONCAT11(*(undefined1 *)(param_2 + 2),*(undefined1 *)((longlong)param_2 + 0x11))
                  << 0x30;
      lVar8 = pqueue_find(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),&local_140);
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)FUN_14f686ef0(param_2[1],1);
        if (puVar9 == (undefined8 *)0x0) goto LAB_14f6877eb;
        uVar5 = param_2[1];
        *puVar9 = *param_2;
        puVar9[1] = uVar5;
        uVar5 = param_2[3];
        puVar9[2] = param_2[2];
        puVar9[3] = uVar5;
        uVar5 = param_2[5];
        puVar9[4] = param_2[4];
        puVar9[5] = uVar5;
        uVar5 = param_2[7];
        puVar9[6] = param_2[6];
        puVar9[7] = uVar5;
        uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
        uVar3 = *(undefined4 *)(param_2 + 9);
        uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((longlong)puVar9 + 0x44) = uVar2;
        *(undefined4 *)(puVar9 + 9) = uVar3;
        *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar4;
        puVar9[10] = param_2[10];
        puVar9[4] = puVar9[1];
        puVar9[3] = 0;
      }
      else {
        puVar9 = *(undefined8 **)(lVar8 + 8);
        if (puVar9[1] != param_2[1]) {
          puVar9 = (undefined8 *)0x0;
          goto LAB_14f6877eb;
        }
      }
      if (puVar9[0xc] == 0) {
        while( true ) {
          local_158 = &local_148;
          local_160 = 0;
          local_168 = uVar14;
          if (0x100 < uVar14) {
            local_168 = 0x100;
          }
          iVar6 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0x16,0,local_138);
          if (iVar6 < 1) break;
          uVar14 = uVar14 - local_148;
          if (uVar14 == 0) {
            return 0xfffffffd;
          }
        }
      }
      else {
        local_158 = &local_148;
        local_160 = 0;
        local_168 = uVar14;
        iVar6 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))
                          (param_1,0x16,0,puVar9[0xb] + param_2[3]);
        if ((0 < iVar6) && (local_148 == uVar14)) {
          iVar6 = (int)uVar14;
          if (iVar6 < 9) {
            uVar15 = *(uint *)(param_2 + 3);
            if ((int)uVar15 < (int)(uVar15 + iVar6)) {
              do {
                uVar7 = uVar15 & 7;
                pbVar13 = (byte *)(((longlong)(int)uVar15 >> 3) + puVar9[0xc]);
                uVar15 = uVar15 + 1;
                *pbVar13 = *pbVar13 | (byte)(1 << uVar7);
              } while ((int)uVar15 < *(int *)(param_2 + 3) + iVar6);
            }
          }
          else {
            pbVar13 = (byte *)(((longlong)(int)*(uint *)(param_2 + 3) >> 3) + puVar9[0xc]);
            *pbVar13 = *pbVar13 | (&DAT_154df7f70)[*(uint *)(param_2 + 3) & 7];
            iVar12 = (*(int *)(param_2 + 3) >> 3) + 1;
            if (iVar12 < *(int *)(param_2 + 3) + -1 + iVar6 >> 3) {
              lVar16 = (longlong)iVar12;
              do {
                iVar12 = iVar12 + 1;
                *(undefined1 *)(lVar16 + puVar9[0xc]) = 0xff;
                lVar16 = lVar16 + 1;
              } while (iVar12 < iVar6 + -1 + *(int *)(param_2 + 3) >> 3);
            }
            pbVar13 = (byte *)(((longlong)(int)((*(int *)(param_2 + 3) + iVar6) - 1) >> 3) +
                              puVar9[0xc]);
            *pbVar13 = *pbVar13 | (&DAT_154df7f78)[*(int *)(param_2 + 3) + iVar6 & 7];
          }
          if (param_2[1] != 0) {
            lVar16 = puVar9[0xc];
            iVar6 = *(uint *)(param_2 + 1) - 1;
            cVar1 = *(char *)(((longlong)iVar6 >> 3) + lVar16);
            if ((cVar1 == (&DAT_154df7f78)[*(uint *)(param_2 + 1) & 7]) &&
               (iVar6 = (iVar6 >> 3) + -1, -1 < iVar6)) {
              lVar10 = (longlong)iVar6;
              do {
                if (*(char *)(lVar16 + lVar10) != -1) goto LAB_14f6877aa;
                lVar10 = lVar10 + -1;
              } while (-1 < lVar10);
            }
            if (cVar1 == (&DAT_154df7f78)[*(uint *)(param_2 + 1) & 7]) {
              CRYPTO_free(lVar16,"ssl\\statem\\statem_dtls.c",0x261);
              puVar9[0xc] = 0;
            }
LAB_14f6877aa:
            if (lVar8 != 0) {
              return 0xfffffffd;
            }
            lVar8 = pitem_new(&local_140,puVar9);
            if ((lVar8 != 0) &&
               (lVar8 = pqueue_insert(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),lVar8),
               lVar8 != 0)) {
              return 0xfffffffd;
            }
            goto LAB_14f6877eb;
          }
        }
      }
      if (lVar8 != 0) {
        return 0xffffffff;
      }
    }
  }
LAB_14f6877eb:
  dtls1_hm_fragment_free(puVar9);
  return 0xffffffff;
}

// dtls1_retransmit_buffered_messages @ 14f687830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 dtls1_retransmit_buffered_messages(longlong param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = param_1;
  local_40 = pqueue_iterator(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  lVar9 = pqueue_next(&local_40);
  while( true ) {
    if (lVar9 == 0) {
      return 1;
    }
    iVar10 = (uint)*(ushort *)(*(longlong *)(lVar9 + 8) + 0x10) * 2 -
             *(int *)(*(longlong *)(lVar9 + 8) + 0x28);
    local_38 = (ulonglong)CONCAT11((char)iVar10,(char)((uint)iVar10 >> 8)) << 0x30;
    lVar9 = pqueue_find(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120),&local_38);
    if (lVar9 == 0) break;
    puVar3 = *(undefined1 **)(lVar9 + 8);
    lVar9 = 1;
    if (*(int *)(puVar3 + 0x28) == 0) {
      lVar9 = 0xc;
    }
    memcpy(*(void **)(*(longlong *)(param_1 + 0x88) + 8),*(void **)(puVar3 + 0x58),
           *(longlong *)(puVar3 + 8) + lVar9);
    lVar4 = *(longlong *)(param_1 + 0xb0);
    *(longlong *)(param_1 + 0x98) = *(longlong *)(puVar3 + 8) + lVar9;
    uVar2 = *(undefined2 *)(puVar3 + 0x10);
    uVar1 = *puVar3;
    uVar5 = *(undefined8 *)(puVar3 + 0x20);
    *(undefined8 *)(lVar4 + 0x140) = *(undefined8 *)(puVar3 + 8);
    *(undefined1 *)(lVar4 + 0x138) = uVar1;
    *(undefined2 *)(lVar4 + 0x148) = uVar2;
    *(undefined8 *)(lVar4 + 0x158) = uVar5;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x468);
    uVar6 = *(undefined8 *)(param_1 + 0x480);
    uVar7 = *(undefined8 *)(param_1 + 0x458);
    uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0x16e0) + 2);
    uVar8 = *(undefined8 *)(param_1 + 0x508);
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x200) = 1;
    *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(puVar3 + 0x30);
    *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(puVar3 + 0x38);
    *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(puVar3 + 0x40);
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(puVar3 + 0x48);
    DTLS_RECORD_LAYER_set_saved_w_epoch(param_1 + 0x830,*(undefined2 *)(puVar3 + 0x50));
    lVar4 = local_48;
    uVar11 = 0x16;
    if (*(int *)(puVar3 + 0x28) != 0) {
      uVar11 = 0x14;
    }
    iVar10 = dtls1_do_write(local_48,uVar11);
    *(undefined8 *)(lVar4 + 0x468) = uVar5;
    *(undefined8 *)(lVar4 + 0x480) = uVar6;
    *(undefined8 *)(lVar4 + 0x458) = uVar7;
    *(undefined8 *)(lVar4 + 0x508) = uVar8;
    DTLS_RECORD_LAYER_set_saved_w_epoch(param_1 + 0x830,uVar2);
    *(undefined4 *)(*(longlong *)(lVar4 + 0xb0) + 0x200) = 0;
    BIO_ctrl(*(undefined8 *)(lVar4 + 0x18),0xb,0,0);
    if (iVar10 < 1) {
      return 0xffffffff;
    }
    lVar9 = pqueue_next(&local_40);
    param_1 = lVar4;
  }
  local_50 = 0x45b;
  local_58 = "ssl\\statem\\statem_dtls.c";
  ossl_statem_fatal(param_1,0x50,0x186,0x44);
  return 0xffffffff;
}

// dtls1_retransmit_message @ 14f687ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 dtls1_retransmit_message(longlong param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined4 local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_50 = (ulonglong)CONCAT11((char)param_2,(char)((ushort)param_2 >> 8)) << 0x30;
  lVar10 = pqueue_find(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120),&local_50);
  if (lVar10 == 0) {
    local_60 = 0x45b;
    local_68 = "ssl\\statem\\statem_dtls.c";
    ossl_statem_fatal(param_1,0x50,0x186,0x44);
    uVar9 = 0;
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    puVar3 = *(undefined1 **)(lVar10 + 8);
    lVar10 = 1;
    if (*(int *)(puVar3 + 0x28) == 0) {
      lVar10 = 0xc;
    }
    memcpy(*(void **)(*(longlong *)(param_1 + 0x88) + 8),*(void **)(puVar3 + 0x58),
           *(longlong *)(puVar3 + 8) + lVar10);
    lVar4 = *(longlong *)(param_1 + 0xb0);
    *(longlong *)(param_1 + 0x98) = *(longlong *)(puVar3 + 8) + lVar10;
    uVar2 = *(undefined2 *)(puVar3 + 0x10);
    uVar1 = *puVar3;
    uVar5 = *(undefined8 *)(puVar3 + 0x20);
    *(undefined8 *)(lVar4 + 0x140) = *(undefined8 *)(puVar3 + 8);
    *(undefined1 *)(lVar4 + 0x138) = uVar1;
    *(undefined2 *)(lVar4 + 0x148) = uVar2;
    *(undefined8 *)(lVar4 + 0x158) = uVar5;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x468);
    uVar6 = *(undefined8 *)(param_1 + 0x480);
    uVar7 = *(undefined8 *)(param_1 + 0x458);
    uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0x16e0) + 2);
    uVar8 = *(undefined8 *)(param_1 + 0x508);
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x200) = 1;
    *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(puVar3 + 0x30);
    *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(puVar3 + 0x38);
    *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(puVar3 + 0x40);
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(puVar3 + 0x48);
    DTLS_RECORD_LAYER_set_saved_w_epoch(param_1 + 0x830,*(undefined2 *)(puVar3 + 0x50));
    uVar11 = 0x16;
    if (*(int *)(puVar3 + 0x28) != 0) {
      uVar11 = 0x14;
    }
    uVar9 = dtls1_do_write(param_1,uVar11);
    *(undefined8 *)(param_1 + 0x468) = uVar5;
    *(undefined8 *)(param_1 + 0x480) = uVar6;
    *(undefined8 *)(param_1 + 0x458) = uVar7;
    *(undefined8 *)(param_1 + 0x508) = uVar8;
    DTLS_RECORD_LAYER_set_saved_w_epoch(param_1 + 0x830,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x200) = 0;
    BIO_ctrl(*(undefined8 *)(param_1 + 0x18),0xb,0);
  }
  return uVar9;
}

// FUN_14f687d20 @ 14f687d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f687d20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  while( true ) {
    lVar4 = pqueue_peek(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
    if (lVar4 == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0xb0);
    lVar2 = *(longlong *)(lVar4 + 8);
    if (*(ushort *)(lVar1 + 0x110) <= *(ushort *)(lVar2 + 0x10)) break;
    pqueue_pop(*(undefined8 *)(lVar1 + 0x118));
    if (*(int *)(lVar2 + 0x28) != 0) {
      EVP_CIPHER_CTX_free(*(undefined8 *)(lVar2 + 0x30));
      EVP_MD_CTX_free(*(undefined8 *)(lVar2 + 0x38));
    }
    CRYPTO_free(*(undefined8 *)(lVar2 + 0x58),"ssl\\statem\\statem_dtls.c",0x67);
    CRYPTO_free(*(undefined8 *)(lVar2 + 0x60),"ssl\\statem\\statem_dtls.c",0x68);
    CRYPTO_free(lVar2,"ssl\\statem\\statem_dtls.c",0x69);
    pitem_free(lVar4);
  }
  if (*(longlong *)(lVar2 + 0x60) != 0) {
    return 0;
  }
  if (*(ushort *)(lVar1 + 0x110) != *(ushort *)(lVar2 + 0x10)) {
    return 0;
  }
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  pqueue_pop(*(undefined8 *)(lVar1 + 0x118));
  iVar3 = FUN_14f687070(param_1,lVar2);
  if ((iVar3 != 0) && (*(size_t *)(lVar2 + 0x20) != 0)) {
    memcpy((void *)(*(longlong *)(lVar2 + 0x18) +
                   *(longlong *)(*(longlong *)(param_1 + 0x88) + 8) + 0xc),*(void **)(lVar2 + 0x58),
           *(size_t *)(lVar2 + 0x20));
  }
  dtls1_hm_fragment_free(lVar2);
  pitem_free(lVar4);
  if (iVar3 == 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    uVar5 = 0xffffffff;
  }
  else {
    *param_2 = uVar5;
    uVar5 = 1;
  }
  return uVar5;
}

// dtls1_set_handshake_header @ 14f687eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_set_handshake_header(longlong param_1,undefined8 param_2,int param_3)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_res20 [8];
  
  if (param_3 == 0x101) {
    *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10c) =
         *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10e);
    lVar2 = *(longlong *)(param_1 + 0xb0);
    *(undefined8 *)(lVar2 + 0x140) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    *(undefined1 *)(lVar2 + 0x138) = 1;
    *(undefined2 *)(lVar2 + 0x148) = *(undefined2 *)(lVar2 + 0x10c);
    iVar3 = WPACKET_put_bytes__(param_2,1,1);
  }
  else {
    *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10c) =
         *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10e);
    psVar1 = (short *)(*(longlong *)(param_1 + 0xb0) + 0x10e);
    *psVar1 = *psVar1 + 1;
    lVar2 = *(longlong *)(param_1 + 0xb0);
    *(char *)(lVar2 + 0x138) = (char)param_3;
    *(undefined8 *)(lVar2 + 0x140) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    *(undefined2 *)(lVar2 + 0x148) = *(undefined2 *)(lVar2 + 0x10c);
    iVar3 = WPACKET_allocate_bytes(param_2,0xc,local_res20);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = WPACKET_start_sub_packet(param_2);
  }
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}

// dtls_construct_change_cipher_spec @ 14f688100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_construct_change_cipher_spec(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*param_1 == 0x100) {
    *(short *)(*(longlong *)(param_1 + 0x2c) + 0x10e) =
         *(short *)(*(longlong *)(param_1 + 0x2c) + 0x10e) + 1;
    iVar1 = WPACKET_put_bytes__(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0x2c) + 0x10c),2);
    if (iVar1 == 0) {
      ossl_statem_fatal(param_1,0x50,0x173,0x44,"ssl\\statem\\statem_dtls.c",CONCAT44(uVar2,0x396));
      return 0;
    }
  }
  return 1;
}

// dtls_get_message @ 14f688190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_get_message(int *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *_Dst;
  int local_res8 [2];
  undefined1 local_res20 [8];
  undefined8 uVar8;
  
  uVar8 = 0x14f6881a4;
  lVar1 = *(longlong *)(param_1 + 0x2c);
  _Dst = (undefined1 *)(lVar1 + 400);
  memset(_Dst,0,0x58);
  iVar3 = FUN_14f6883a0(param_1,local_res8,local_res20);
  while (iVar3 == 0) {
    if (1 < local_res8[0] + 3U) {
      return 0;
    }
    iVar3 = FUN_14f6883a0(param_1,local_res8,local_res20);
  }
  *param_2 = *(int *)(*(longlong *)(param_1 + 0x2a) + 0x230);
  puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x22) + 8);
  *param_3 = *(undefined8 *)(param_1 + 0x26);
  if (*param_2 == 0x101) {
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      (**(code **)(param_1 + 0x2e))
                (0,*param_1,0x14,puVar2,1,param_1,*(undefined8 *)(param_1 + 0x30),uVar8);
    }
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x198);
    *puVar2 = *_Dst;
    puVar2[3] = (char)lVar6;
    uVar5 = (undefined1)((ulonglong)lVar6 >> 0x10);
    puVar2[1] = uVar5;
    uVar4 = (undefined1)((ulonglong)lVar6 >> 8);
    puVar2[2] = uVar4;
    puVar2[4] = *(undefined1 *)(lVar1 + 0x1a1);
    puVar2[5] = *(undefined1 *)(lVar1 + 0x1a0);
    *(undefined2 *)(puVar2 + 6) = 0;
    puVar2[8] = 0;
    puVar2[9] = uVar5;
    puVar2[10] = uVar4;
    puVar2[0xb] = (char)lVar6;
    puVar7 = puVar2 + 0xc;
    if (*param_1 != 0x100) {
      lVar6 = lVar6 + 0xc;
      puVar7 = puVar2;
    }
    if (((*param_2 == 0x14) && (iVar3 = ssl3_take_mac(param_1), iVar3 == 0)) ||
       (iVar3 = ssl3_finish_mac(param_1,puVar7,lVar6), iVar3 == 0)) {
      return 0;
    }
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      (**(code **)(param_1 + 0x2e))
                (0,*param_1,0x16,puVar7,lVar6,param_1,*(undefined8 *)(param_1 + 0x30));
    }
    memset(_Dst,0,0x58);
    *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) =
         *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) + 1;
    *(longlong *)(param_1 + 0x24) = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 0xc;
  }
  return 1;
}

// FUN_14f6883a0 @ 14f6883a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6883a0(undefined4 *param_1,undefined4 *param_2,ulonglong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  short sVar8;
  ulonglong uVar9;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined4 *local_f0;
  ulonglong *local_e8;
  ulonglong local_d8;
  int local_d0 [2];
  ulonglong local_c8 [2];
  char local_b8 [8];
  ulonglong local_b0;
  ulonglong local_a0;
  ulonglong local_98;
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f6883bf;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  *param_2 = 0;
  iVar1 = FUN_14f687d20(param_1,local_c8);
  do {
    if (iVar1 < 0) {
      return 0;
    }
    if (0 < iVar1) {
      *(ulonglong *)(param_1 + 0x26) = local_c8[0];
      *param_3 = local_c8[0];
      return 1;
    }
    local_e8 = &local_d8;
    local_f0 = (undefined4 *)((ulonglong)local_f0 & 0xffffffff00000000);
    local_f8 = (char *)0xc;
    iVar1 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))(param_1,0x16,local_d0,&local_58);
    if (iVar1 < 1) {
LAB_14f688668:
      param_1[10] = 3;
      *param_3 = 0;
      return 0;
    }
    if (local_d0[0] == 0x14) {
      if (local_58 != '\x01') {
        local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,0x304);
        local_f8 = "ssl\\statem\\statem_dtls.c";
        ossl_statem_fatal(param_1,10,0x172,0x67);
        *(undefined8 *)(param_1 + 0x26) = 0;
        *param_3 = 0;
        return 0;
      }
      memcpy(*(void **)(*(longlong *)(param_1 + 0x22) + 8),&local_58,local_d8);
      *(ulonglong *)(param_1 + 0x26) = local_d8 - 1;
      *(longlong *)(param_1 + 0x24) = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x230) = 0x101;
      *(ulonglong *)(*(longlong *)(param_1 + 0x2a) + 0x228) = local_d8 - 1;
      *param_3 = local_d8 - 1;
      return 1;
    }
    if (local_d8 != 0xc) {
      local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,0x314);
      local_f8 = "ssl\\statem\\statem_dtls.c";
      ossl_statem_fatal(param_1,10,0x172);
      *(undefined8 *)(param_1 + 0x26) = 0;
      *param_3 = 0;
      return 0;
    }
    memset(local_b8,0,0x58);
    local_b8[0] = local_58;
    uVar5 = (ulonglong)CONCAT21(CONCAT11(local_57,local_56),local_55);
    sVar8 = CONCAT11(local_54,local_53);
    uVar9 = (ulonglong)CONCAT21(CONCAT11(local_52,local_51),local_50);
    uVar6 = (ulonglong)CONCAT21(CONCAT11(local_4f,local_4e),local_4d);
    local_c8[0] = uVar6;
    local_b0 = uVar5;
    local_a0 = uVar9;
    local_98 = uVar6;
    uVar3 = RECORD_LAYER_get_rrec_length(param_1 + 0x20c);
    if (uVar3 < uVar6) {
      local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,0x325);
      uVar4 = 0x2f;
      uVar7 = 0x10f;
LAB_14f6885fc:
      local_f8 = "ssl\\statem\\statem_dtls.c";
      ossl_statem_fatal(param_1,uVar4,0x172,uVar7);
LAB_14f68860a:
      *(undefined8 *)(param_1 + 0x26) = 0;
      *param_3 = 0;
      return 0;
    }
    if (sVar8 != *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110)) {
      uVar2 = FUN_14f6871c0(param_1,local_b8);
LAB_14f6885b0:
      *param_2 = uVar2;
      return 0;
    }
    if ((uVar6 != 0) && (uVar6 < uVar5)) {
      uVar2 = FUN_14f6874c0(param_1,local_b8);
      goto LAB_14f6885b0;
    }
    if ((((param_1[0xe] != 0) || (*(longlong *)(*(longlong *)(param_1 + 0x2c) + 0x1a8) != 0)) ||
        (param_1[0x17] == 1)) || (local_58 != '\0')) {
      iVar1 = FUN_14f687070(param_1,local_b8);
      if (iVar1 != 0) {
        if (uVar6 == 0) {
          local_d8 = 0;
        }
        else {
          local_e8 = &local_d8;
          local_f0 = (undefined4 *)((ulonglong)local_f0 & 0xffffffff00000000);
          local_f8 = (char *)uVar6;
          iVar1 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))
                            (param_1,0x16,0,
                             *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 0xc + uVar9);
          if (iVar1 < 1) goto LAB_14f688668;
        }
        if (local_d8 != uVar6) {
          local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,0x372);
          local_f8 = "ssl\\statem\\statem_dtls.c";
          ossl_statem_fatal(param_1,0x2f,0x172);
          *(undefined8 *)(param_1 + 0x26) = 0;
          *param_3 = 0;
          return 0;
        }
        *(ulonglong *)(param_1 + 0x26) = uVar6;
        *param_3 = uVar6;
        return 1;
      }
      goto LAB_14f68860a;
    }
    if (((local_57 != '\0') || (local_56 != '\0')) || (local_55 != '\0')) {
      local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,0x34e);
      uVar4 = 10;
      uVar7 = 0xf4;
      goto LAB_14f6885fc;
    }
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      local_e8 = *(ulonglong **)(param_1 + 0x30);
      local_f8 = (char *)0xc;
      local_f0 = param_1;
      (**(code **)(param_1 + 0x2e))(0,*param_1,0x16,&local_58);
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
    iVar1 = FUN_14f687d20(param_1,local_c8);
  } while( true );
}

