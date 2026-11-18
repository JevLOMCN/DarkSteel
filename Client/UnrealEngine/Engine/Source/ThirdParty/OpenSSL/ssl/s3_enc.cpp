// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// ssl3_change_cipher_state @ 14f693510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_change_cipher_state(longlong param_1,uint param_2)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  undefined4 uVar7;
  void *_Src;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  uVar7 = 1;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  lVar6 = 0;
  bVar2 = false;
  lVar9 = *(longlong *)(lVar4 + 0x280);
  uVar10 = *(undefined8 *)(lVar4 + 0x278);
  if (lVar9 == 0) {
    uVar10 = 0x10000006d;
  }
  else {
    if (*(longlong *)(lVar4 + 0x298) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x298) + 0x10);
    }
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      if (*(longlong *)(param_1 + 0x468) == 0) {
        uVar7 = 1;
        lVar4 = EVP_CIPHER_CTX_new();
        *(longlong *)(param_1 + 0x468) = lVar4;
        if (lVar4 == 0) {
          uVar10 = CONCAT44(uVar7,0xa1);
          uVar7 = 0x41;
          goto LAB_14f6937ff;
        }
        EVP_CIPHER_CTX_reset(lVar4);
      }
      else {
        bVar2 = true;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x468);
      lVar4 = ssl_replace_hash(param_1 + 0x480,lVar9);
      if (lVar4 == 0) {
        uVar10 = CONCAT44(uVar7,0xac);
        uVar7 = 0x41;
        goto LAB_14f6937ff;
      }
      COMP_CTX_free(*(undefined8 *)(param_1 + 0x458));
      *(undefined8 *)(param_1 + 0x458) = 0;
      if (lVar6 != 0) {
        lVar4 = COMP_CTX_new(lVar6);
        *(longlong *)(param_1 + 0x458) = lVar4;
        if (lVar4 == 0) {
          uVar10 = CONCAT44(uVar7,0xb8);
          uVar7 = 0x8e;
          goto LAB_14f6937ff;
        }
      }
      RECORD_LAYER_reset_write_sequence(param_1 + 0x830);
      _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + 0x58);
    }
    else {
      if (*(longlong *)(param_1 + 0x438) == 0) {
        uVar7 = 1;
        lVar4 = EVP_CIPHER_CTX_new();
        *(longlong *)(param_1 + 0x438) = lVar4;
        if (lVar4 == 0) {
          uVar10 = CONCAT44(uVar7,0x7c);
          uVar7 = 0x41;
          goto LAB_14f6937ff;
        }
        EVP_CIPHER_CTX_reset(lVar4);
      }
      else {
        bVar2 = true;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x438);
      lVar4 = ssl_replace_hash(param_1 + 0x450,lVar9);
      if (lVar4 == 0) {
        uVar10 = CONCAT44(uVar7,0x88);
        goto LAB_14f6937f9;
      }
      COMP_CTX_free(*(undefined8 *)(param_1 + 0x460));
      *(undefined8 *)(param_1 + 0x460) = 0;
      if (lVar6 != 0) {
        lVar4 = COMP_CTX_new(lVar6);
        *(longlong *)(param_1 + 0x460) = lVar4;
        if (lVar4 == 0) {
          uVar10 = CONCAT44(uVar7,0x94);
          uVar7 = 0x8e;
          goto LAB_14f6937ff;
        }
      }
      RECORD_LAYER_reset_read_sequence(param_1 + 0x830);
      _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    }
    if (bVar2) {
      EVP_CIPHER_CTX_reset(uVar8);
    }
    pvVar1 = *(void **)(*(longlong *)(param_1 + 0xa8) + 0x270);
    iVar3 = EVP_MD_size(lVar9);
    if (iVar3 < 0) {
      uVar10 = CONCAT44(uVar7,200);
    }
    else {
      _Size = (size_t)iVar3;
      iVar3 = EVP_CIPHER_key_length(uVar10);
      lVar9 = (longlong)iVar3;
      iVar3 = EVP_CIPHER_iv_length(uVar10);
      lVar4 = (longlong)iVar3;
      if ((param_2 == 0x12) || (param_2 == 0x21)) {
        lVar6 = _Size * 2;
        lVar9 = lVar6 + lVar9 * 2;
        uVar5 = lVar9 + lVar4 * 2;
        _Src = pvVar1;
      }
      else {
        lVar6 = lVar9 + _Size * 2;
        lVar9 = lVar6 + lVar4 + lVar9;
        uVar5 = lVar9 + lVar4;
        _Src = (void *)(_Size + (longlong)pvVar1);
      }
      if (*(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x268) < uVar5) {
        uVar10 = CONCAT44(uVar7,0xe3);
      }
      else {
        memcpy(_Dst,_Src,_Size);
        iVar3 = EVP_CipherInit_ex(uVar8,uVar10,0,lVar6 + (longlong)pvVar1,lVar9 + (longlong)pvVar1,
                                  CONCAT44(uVar7,param_2) & 0xffffffff00000002);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
          return 1;
        }
        uVar10 = 0xeb;
      }
    }
  }
LAB_14f6937f9:
  uVar7 = 0x44;
LAB_14f6937ff:
  ossl_statem_fatal(param_1,0x50,0x81,uVar7,"ssl\\s3_enc.c",uVar10);
  return 0;
}

// ssl3_cleanup_key_block @ 14f693850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_cleanup_key_block(longlong param_1)

{
  CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x270),
                    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x268),"ssl\\s3_enc.c",0x13b);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x270) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x268) = 0;
  return;
}

// ssl3_digest_cached_records @ 14f6938c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_digest_cached_records(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
    iVar1 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,&local_res8);
    if (iVar1 < 1) {
      uVar5 = CONCAT44(uVar6,0x182);
      uVar4 = 0x14c;
    }
    else {
      uVar4 = EVP_MD_CTX_new();
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8) = uVar4;
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
        ossl_statem_fatal(param_1,0x50,0x125,0x41,"ssl\\s3_enc.c",CONCAT44(uVar6,0x189));
        return 0;
      }
      lVar3 = ssl_handshake_md(param_1);
      if (lVar3 != 0) {
        iVar2 = EVP_DigestInit_ex(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8),lVar3,0);
        if (iVar2 != 0) {
          iVar1 = EVP_DigestUpdate(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8),local_res8,
                                   (longlong)iVar1);
          if (iVar1 != 0) goto LAB_14f693a09;
        }
      }
      uVar5 = CONCAT44(uVar6,0x191);
      uVar4 = 0x44;
    }
    ossl_statem_fatal(param_1,0x50,0x125,uVar4,"ssl\\s3_enc.c",uVar5);
    return 0;
  }
LAB_14f693a09:
  if (param_2 == 0) {
    BIO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
  }
  return 1;
}

// ssl3_final_finish_mac @ 14f693a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl3_final_finish_mac
                   (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar1 = ssl3_digest_cached_records(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = EVP_MD_CTX_md(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  iVar1 = EVP_MD_type(uVar3);
  if (iVar1 != 0x72) {
    ossl_statem_fatal(param_1,0x50,0x11d,0x144,"ssl\\s3_enc.c",CONCAT44(uVar5,0x1aa));
    return 0;
  }
  lVar4 = EVP_MD_CTX_new();
  if (lVar4 == 0) {
    ossl_statem_fatal(param_1,0x50,0x11d,0x41,"ssl\\s3_enc.c",CONCAT44(uVar5,0x1b1));
    return 0;
  }
  iVar1 = EVP_MD_CTX_copy_ex(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  if (iVar1 == 0) {
    uVar3 = CONCAT44(uVar5,0x1b6);
  }
  else {
    uVar3 = EVP_MD_CTX_md(lVar4);
    iVar1 = EVP_MD_size(uVar3);
    if (iVar1 < 0) {
      uVar3 = CONCAT44(uVar5,0x1be);
    }
    else {
      if ((((param_2 == 0) || (iVar2 = EVP_DigestUpdate(lVar4,param_2,param_3), 0 < iVar2)) &&
          (iVar2 = EVP_MD_CTX_ctrl(lVar4,0x1d,*(undefined4 *)(*(longlong *)(param_1 + 0x508) + 8),
                                   *(longlong *)(param_1 + 0x508) + 0x50), 0 < iVar2)) &&
         (iVar2 = EVP_DigestFinal_ex(lVar4,param_4,0), 0 < iVar2)) goto LAB_14f693bdc;
      uVar3 = CONCAT44(uVar5,0x1c9);
    }
  }
  ossl_statem_fatal(param_1,0x50,0x11d,0x44,"ssl\\s3_enc.c",uVar3);
  iVar1 = 0;
LAB_14f693bdc:
  EVP_MD_CTX_free(lVar4);
  return (longlong)iVar1;
}

// ssl3_finish_mac @ 14f693c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_finish_mac(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
    if (param_3 < 0x80000000) {
      iVar1 = BIO_write(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
      if ((0 < iVar1) && (iVar1 == (int)param_3)) {
        return 1;
      }
      uVar3 = CONCAT44(uVar2,0x16a);
      uVar2 = 0x44;
    }
    else {
      uVar3 = 0x100000164;
      uVar2 = 0xed;
    }
  }
  else {
    iVar1 = EVP_DigestUpdate();
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = CONCAT44(uVar2,0x171);
    uVar2 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x24b,uVar2,"ssl\\s3_enc.c",uVar3);
  return 0;
}

// ssl3_free_digest_list @ 14f693cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_free_digest_list(longlong param_1)

{
  BIO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8) = 0;
  return;
}

// FUN_14f693d40 @ 14f693d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14f693d40(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  char *pcVar11;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 local_80;
  char local_78;
  undefined4 local_74;
  undefined1 local_70 [24];
  char local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f693d5a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = 'A';
  uVar8 = 0;
  local_74 = 0;
  lVar4 = EVP_MD_CTX_new();
  lVar5 = EVP_MD_CTX_new();
  if ((lVar4 == 0) || (lVar5 == 0)) {
    local_80 = 0x22;
    uVar6 = 0x41;
LAB_14f693fa7:
    local_88 = "ssl\\s3_enc.c";
    ossl_statem_fatal(param_1,0x50,0xee,uVar6);
  }
  else {
    EVP_MD_CTX_set_flags(lVar4,8);
    cVar9 = 'A';
    iVar3 = 0;
    if (0 < param_3) {
      do {
        uVar8 = uVar8 + 1;
        if (0x10 < uVar8) {
          local_80 = 0x2b;
          uVar6 = 0x44;
          goto LAB_14f693fa7;
        }
        cVar10 = cVar9;
        if (uVar8 != 0) {
          pcVar11 = local_58;
          for (uVar7 = (ulonglong)uVar8; cVar10 = local_78, uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar11 = cVar9;
            pcVar11 = pcVar11 + 1;
          }
        }
        local_78 = cVar10 + '\x01';
        uVar6 = EVP_sha1();
        iVar1 = EVP_DigestInit_ex(lVar5,uVar6,0);
        if (((((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(lVar5,local_58,uVar8), iVar1 == 0)) ||
             (iVar1 = EVP_DigestUpdate(lVar5,*(longlong *)(param_1 + 0x508) + 0x50,
                                       *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)),
             iVar1 == 0)) ||
            ((iVar1 = EVP_DigestUpdate(lVar5,*(longlong *)(param_1 + 0xa8) + 0x98,0x20), iVar1 == 0
             || (iVar1 = EVP_DigestUpdate(lVar5,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20),
                iVar1 == 0)))) || (iVar1 = EVP_DigestFinal_ex(lVar5,local_70,0), iVar1 == 0)) {
LAB_14f693f60:
          local_80 = 0x3e;
          uVar6 = 0x44;
          goto LAB_14f693fa7;
        }
        uVar6 = EVP_md5();
        iVar1 = EVP_DigestInit_ex(lVar4,uVar6,0);
        if (((iVar1 == 0) ||
            (iVar1 = EVP_DigestUpdate(lVar4,*(longlong *)(param_1 + 0x508) + 0x50,
                                      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)),
            iVar1 == 0)) || (iVar1 = EVP_DigestUpdate(lVar4,local_70), iVar1 == 0))
        goto LAB_14f693f60;
        iVar1 = iVar3 + 0x10;
        if (param_3 < iVar1) {
          iVar2 = EVP_DigestFinal_ex(lVar4,local_70);
          if (iVar2 == 0) {
            local_80 = 0x44;
            uVar6 = 0x44;
            goto LAB_14f693fa7;
          }
          memcpy(param_2,local_70,(ulonglong)(uint)(param_3 - iVar3));
        }
        else {
          iVar3 = EVP_DigestFinal_ex(lVar4,param_2);
          if (iVar3 == 0) {
            local_80 = 0x4b;
            uVar6 = 0x44;
            goto LAB_14f693fa7;
          }
        }
        param_2 = (void *)((longlong)param_2 + 0x10);
        cVar9 = local_78;
        iVar3 = iVar1;
      } while (iVar1 < param_3);
    }
    OPENSSL_cleanse(local_70,0x14);
    local_74 = 1;
  }
  EVP_MD_CTX_free(lVar4);
  EVP_MD_CTX_free(lVar5);
  return local_74;
}

// ssl3_generate_master_secret @ 14f694010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int ssl3_generate_master_secret
              (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              longlong *param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined **ppuVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  char *local_b8;
  undefined4 local_b0;
  uint local_a8 [2];
  longlong *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a0 = param_5;
  lVar4 = EVP_MD_CTX_new();
  lVar9 = 0;
  if (lVar4 == 0) {
    local_b0 = 0x1e9;
    local_b8 = "ssl\\s3_enc.c";
    ossl_statem_fatal(param_1,0x50,0x184,0x41);
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    ppuVar8 = &PTR_s_A_154df8020;
    do {
      iVar3 = EVP_DigestInit_ex(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xf0),0);
      if (iVar3 < 1) {
LAB_14f6941f7:
        local_b0 = 0x1fc;
        local_b8 = "ssl\\s3_enc.c";
        ossl_statem_fatal(param_1,0x50,0x184,0x44);
        iVar7 = 0;
        goto LAB_14f694224;
      }
      pcVar2 = *ppuVar8;
      cVar1 = *pcVar2;
      pcVar5 = pcVar2;
      for (uVar6 = 0; (cVar1 != '\0' && (uVar6 < 0x80000000)); uVar6 = uVar6 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      iVar3 = EVP_DigestUpdate(lVar4,pcVar2,uVar6 & 0x7fffffff);
      if ((((((iVar3 < 1) || (iVar3 = EVP_DigestUpdate(lVar4,param_3,param_4), iVar3 < 1)) ||
            (iVar3 = EVP_DigestUpdate(lVar4,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20), iVar3 < 1))
           || ((iVar3 = EVP_DigestUpdate(lVar4,*(longlong *)(param_1 + 0xa8) + 0x98,0x20), iVar3 < 1
               || (iVar3 = EVP_DigestFinal_ex(lVar4,local_98,local_a8), iVar3 < 1)))) ||
          ((iVar3 = EVP_DigestInit_ex(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xe8),0
                                     ), iVar3 < 1 ||
           ((iVar3 = EVP_DigestUpdate(lVar4,param_3,param_4), iVar3 < 1 ||
            (iVar3 = EVP_DigestUpdate(lVar4,local_98,local_a8[0]), iVar3 < 1)))))) ||
         (iVar3 = EVP_DigestFinal_ex(lVar4,param_2), iVar3 < 1)) goto LAB_14f6941f7;
      iVar7 = iVar7 + 1;
      param_2 = param_2 + (ulonglong)local_a8[0];
      lVar9 = lVar9 + (ulonglong)local_a8[0];
      ppuVar8 = ppuVar8 + 1;
    } while (iVar7 < 3);
    iVar7 = 1;
LAB_14f694224:
    EVP_MD_CTX_free(lVar4);
    OPENSSL_cleanse(local_98,0x40);
    if (iVar7 != 0) {
      *local_a0 = lVar9;
    }
  }
  return iVar7;
}

// ssl3_init_finished_mac @ 14f694290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_init_finished_mac(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar1 = BIO_s_mem();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ossl_statem_fatal(param_1,0x50,0x18d,0x41,"ssl\\s3_enc.c",CONCAT44(uVar3,0x146));
    return 0;
  }
  ssl3_free_digest_list(param_1);
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = lVar2;
  BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),9,1);
  return 1;
}

// ssl3_setup_key_block @ 14f694340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl3_setup_key_block(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *puVar6;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) != 0) {
    return 1;
  }
  puVar6 = &local_res18;
  iVar1 = ssl_cipher_get_evp(*(undefined8 *)(param_1 + 0x508),&local_res8,&local_res10,0,0,puVar6,0)
  ;
  uVar4 = (undefined4)((ulonglong)puVar6 >> 0x20);
  if (iVar1 != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res8;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res10;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x298) = local_res18;
    iVar1 = EVP_MD_size(local_res10);
    if (iVar1 < 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = EVP_CIPHER_iv_length(local_res8);
      iVar3 = EVP_CIPHER_key_length(local_res8);
      iVar1 = (iVar3 + iVar1 + iVar2) * 2;
      ssl3_cleanup_key_block(param_1);
      lVar5 = CRYPTO_malloc((longlong)iVar1,"ssl\\s3_enc.c",0x118);
      if (lVar5 == 0) {
        ossl_statem_fatal(param_1,0x50,0x9d,0x41,"ssl\\s3_enc.c",CONCAT44(uVar4,0x11a));
        uVar4 = 0;
      }
      else {
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) = (longlong)iVar1;
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) = lVar5;
        uVar4 = FUN_14f693d40(param_1,lVar5,iVar1);
        if ((*(uint *)(param_1 + 0x5cc) & 0x800) == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 1;
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x24) == 0x20) {
              *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
            }
            if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0) + 0x24) == 4) {
              *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
            }
          }
        }
      }
    }
    return uVar4;
  }
  ossl_statem_fatal(param_1,0x50,0x9d,0x8a,"ssl\\s3_enc.c",CONCAT44(uVar4,0x103));
  return 0;
}

