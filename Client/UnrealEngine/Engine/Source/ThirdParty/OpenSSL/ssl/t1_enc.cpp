// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f694580 @ 14f694580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f694580(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4,
             undefined4 param_5,longlong param_6,undefined4 param_7,longlong param_8,
             undefined4 param_9,longlong param_10,undefined4 param_11,longlong param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,int param_16)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  undefined8 uVar5;
  longlong lVar7;
  
  lVar7 = 0x14f69459f;
  lVar2 = ssl_prf_md();
  uVar4 = 0;
  if (lVar2 == 0) {
    if (param_16 != 0) {
      ossl_statem_fatal(param_1,0x50,0x11c,0x44,"ssl\\t1_enc.c",0x24);
      return 0;
    }
    ERR_put_error(0x14,0x11c,0x44,"ssl\\t1_enc.c",0x26,lVar7);
    return 0;
  }
  lVar3 = EVP_PKEY_CTX_new_id(0x3fd,0);
  uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
  if (lVar3 != 0) {
    iVar1 = EVP_PKEY_derive_init(lVar3);
    uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
    if (0 < iVar1) {
      in_stack_ffffffffffffffd8 = in_stack_ffffffffffffffd8 & 0xffffffff00000000;
      iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1000,in_stack_ffffffffffffffd8,lVar2);
      uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
      lVar7 = lVar2;
      if (0 < iVar1) {
        uVar5 = CONCAT44(uVar6,param_13);
        iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1001,uVar5,param_12);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        lVar7 = param_12;
        if (0 < iVar1) {
          uVar5 = CONCAT44(uVar6,param_3);
          iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_2);
          uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
          lVar7 = param_2;
          if (0 < iVar1) {
            uVar5 = CONCAT44(uVar6,param_5);
            iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_4);
            uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
            lVar7 = param_4;
            if (0 < iVar1) {
              uVar5 = CONCAT44(uVar6,param_7);
              iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_6);
              uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
              lVar7 = param_6;
              if (0 < iVar1) {
                uVar5 = CONCAT44(uVar6,param_9);
                iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_8);
                uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
                lVar7 = param_8;
                if (0 < iVar1) {
                  uVar5 = CONCAT44(uVar6,param_11);
                  iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1002,uVar5,param_10);
                  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
                  lVar7 = param_10;
                  if ((0 < iVar1) &&
                     (iVar1 = EVP_PKEY_derive(lVar3,param_14,&param_15), lVar7 = param_10, 0 < iVar1
                     )) {
                    uVar4 = 1;
                    goto LAB_14f694807;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_16 == 0) {
    ERR_put_error(0x14,0x11c,0x44,"ssl\\t1_enc.c",CONCAT44(uVar6,0x37),lVar7);
  }
  else {
    ossl_statem_fatal(param_1,0x50,0x11c,0x44,"ssl\\t1_enc.c",0x35);
    uVar4 = 0;
  }
LAB_14f694807:
  EVP_PKEY_CTX_free(lVar3);
  return uVar4;
}

// tls1_alert_code @ 14f694840

undefined8 tls1_alert_code(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 0xffffffff;
  case 10:
    return 10;
  case 0x14:
    return 0x14;
  case 0x15:
    return 0x15;
  case 0x16:
    return 0x16;
  case 0x1e:
    return 0x1e;
  case 0x28:
  case 0x6d:
  case 0x74:
    return 0x28;
  case 0x2a:
    return 0x2a;
  case 0x2b:
    return 0x2b;
  case 0x2c:
    return 0x2c;
  case 0x2d:
    return 0x2d;
  case 0x2e:
    return 0x2e;
  case 0x2f:
    return 0x2f;
  case 0x30:
    return 0x30;
  case 0x31:
    return 0x31;
  case 0x32:
    return 0x32;
  case 0x33:
    return 0x33;
  case 0x3c:
    return 0x3c;
  case 0x46:
    return 0x46;
  case 0x47:
    return 0x47;
  case 0x50:
    return 0x50;
  case 0x56:
    return 0x56;
  case 0x5a:
    return 0x5a;
  case 100:
    return 100;
  case 0x6e:
    return 0x6e;
  case 0x6f:
    return 0x6f;
  case 0x70:
    return 0x70;
  case 0x71:
    return 0x71;
  case 0x72:
    return 0x72;
  case 0x73:
    return 0x73;
  case 0x78:
    return 0x78;
  }
}

// tls1_change_cipher_state @ 14f694a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_change_cipher_state(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  size_t _Size;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  void *_Src;
  size_t *psVar16;
  longlong lVar17;
  undefined4 uVar18;
  
  puVar1 = *(uint **)(param_1 + 0xa8);
  bVar4 = false;
  uVar14 = *(undefined8 *)(puVar1 + 0xa0);
  uVar2 = *(undefined8 *)(puVar1 + 0x9e);
  lVar9 = *(longlong *)(puVar1 + 0xa6);
  uVar7 = puVar1[0xa2];
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if (*(int *)(param_1 + 0x70c) == 0) {
      *puVar1 = *puVar1 & 0xfffffbff;
    }
    else {
      *puVar1 = *puVar1 | 0x400;
    }
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40) & 0x10000) == 0) {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffd;
    }
    else {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 2;
    }
    if ((*(longlong *)(param_1 + 0x468) == 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0)) {
      lVar8 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0x468) = lVar8;
      if (lVar8 == 0) {
        uVar18 = 0xa7;
        uVar15 = 0x41;
        goto LAB_14f69501f;
      }
    }
    else {
      bVar4 = true;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x468);
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      lVar8 = ssl_replace_hash(param_1 + 0x480,0);
      if (lVar8 == 0) {
        uVar18 = 0xb9;
        uVar15 = 0x41;
        goto LAB_14f69501f;
      }
    }
    else {
      lVar8 = EVP_MD_CTX_new();
      if (lVar8 == 0) {
        uVar18 = 0xb0;
        uVar15 = 0x41;
        goto LAB_14f69501f;
      }
      *(longlong *)(param_1 + 0x480) = lVar8;
    }
    COMP_CTX_free(*(undefined8 *)(param_1 + 0x458));
    *(undefined8 *)(param_1 + 0x458) = 0;
    if (lVar9 != 0) {
      lVar9 = COMP_CTX_new(*(undefined8 *)(lVar9 + 0x10));
      *(longlong *)(param_1 + 0x458) = lVar9;
      if (lVar9 == 0) {
        uVar18 = 0xc5;
        uVar15 = 0x8e;
        goto LAB_14f69501f;
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      RECORD_LAYER_reset_write_sequence(param_1 + 0x830);
    }
    _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + 0x58);
    psVar16 = (size_t *)(*(longlong *)(param_1 + 0xa8) + 0x50);
  }
  else {
    if (*(int *)(param_1 + 0x70c) == 0) {
      *puVar1 = *puVar1 & 0xfffffeff;
    }
    else {
      *puVar1 = *puVar1 | 0x100;
    }
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40) & 0x10000) == 0) {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffe;
    }
    else {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 1;
    }
    if (*(longlong *)(param_1 + 0x438) == 0) {
      lVar8 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0x438) = lVar8;
      if (lVar8 == 0) {
        uVar18 = 0x78;
        uVar15 = 0x41;
        goto LAB_14f69501f;
      }
      EVP_CIPHER_CTX_reset(lVar8);
    }
    else {
      bVar4 = true;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x438);
    lVar8 = ssl_replace_hash(param_1 + 0x450,0);
    if (lVar8 == 0) {
      return 0;
    }
    COMP_CTX_free(*(undefined8 *)(param_1 + 0x460));
    *(undefined8 *)(param_1 + 0x460) = 0;
    if (lVar9 != 0) {
      lVar9 = COMP_CTX_new(*(undefined8 *)(lVar9 + 0x10));
      *(longlong *)(param_1 + 0x460) = lVar9;
      if (lVar9 == 0) {
        uVar18 = 0x8c;
        uVar15 = 0x8e;
        goto LAB_14f69501f;
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      RECORD_LAYER_reset_read_sequence(param_1 + 0x830);
    }
    _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    psVar16 = (size_t *)(*(longlong *)(param_1 + 0xa8) + 8);
  }
  if (bVar4) {
    EVP_CIPHER_CTX_reset(uVar13);
  }
  pvVar3 = *(void **)(*(longlong *)(param_1 + 0xa8) + 0x270);
  _Size = *(size_t *)(*(longlong *)(param_1 + 0xa8) + 0x290);
  *psVar16 = _Size;
  iVar5 = EVP_CIPHER_key_length(uVar2);
  lVar9 = (longlong)iVar5;
  uVar6 = EVP_CIPHER_flags(uVar2);
  if ((uVar6 & 0xf0007) == 6) {
    uVar12 = 4;
  }
  else {
    uVar6 = EVP_CIPHER_flags(uVar2);
    if ((uVar6 & 0xf0007) == 7) {
      uVar12 = 4;
    }
    else {
      iVar5 = EVP_CIPHER_iv_length(uVar2);
      uVar12 = (ulonglong)iVar5;
    }
  }
  if ((param_2 == 0x12) || (param_2 == 0x21)) {
    lVar17 = _Size * 2;
    lVar9 = lVar17 + lVar9 * 2;
    uVar11 = lVar9 + uVar12 * 2;
    _Src = pvVar3;
  }
  else {
    lVar17 = lVar9 + _Size * 2;
    lVar9 = lVar17 + lVar9 + uVar12;
    uVar11 = lVar9 + uVar12;
    _Src = (void *)(_Size + (longlong)pvVar3);
  }
  lVar9 = lVar9 + (longlong)pvVar3;
  lVar17 = (longlong)pvVar3 + lVar17;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x268) < uVar11) {
    uVar18 = 0xf8;
  }
  else {
    memcpy(_Dst,_Src,_Size);
    uVar6 = EVP_CIPHER_flags(uVar2);
    if ((uVar6 >> 0x15 & 1) == 0) {
      lVar10 = EVP_PKEY_new_mac_key(uVar7,0,_Dst,(int)*psVar16);
      if ((lVar10 == 0) || (iVar5 = EVP_DigestSignInit(lVar8,0,uVar14,0,lVar10), iVar5 < 1)) {
        EVP_PKEY_free(lVar10);
        uVar18 = 0x106;
        goto LAB_14f695019;
      }
      EVP_PKEY_free(lVar10);
    }
    uVar7 = EVP_CIPHER_flags(uVar2);
    if ((uVar7 & 0xf0007) == 6) {
      iVar5 = EVP_CipherInit_ex(uVar13,uVar2,0,lVar17,0,param_2 & 2);
      if ((iVar5 == 0) ||
         (iVar5 = EVP_CIPHER_CTX_ctrl(uVar13,0x12,uVar12 & 0xffffffff,lVar9), iVar5 == 0)) {
        uVar18 = 0x119;
      }
      else {
LAB_14f694fdf:
        uVar7 = EVP_CIPHER_flags(uVar2);
        if ((((uVar7 >> 0x15 & 1) == 0) || (*psVar16 == 0)) ||
           (iVar5 = EVP_CIPHER_CTX_ctrl(uVar13,0x17,(int)*psVar16,_Dst), iVar5 != 0)) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
          return 1;
        }
        uVar18 = 0x138;
      }
    }
    else {
      uVar7 = EVP_CIPHER_flags(uVar2);
      if ((uVar7 & 0xf0007) == 7) {
        uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x24);
        iVar5 = EVP_CipherInit_ex(uVar13,uVar2,0,0,0,param_2 & 2);
        if ((iVar5 != 0) && (iVar5 = EVP_CIPHER_CTX_ctrl(uVar13,9,0xc,0), iVar5 != 0)) {
          uVar14 = 8;
          if ((uVar7 & 0x30000) == 0) {
            uVar14 = 0x10;
          }
          iVar5 = EVP_CIPHER_CTX_ctrl(uVar13,0x11,uVar14,0);
          if (((iVar5 != 0) &&
              (iVar5 = EVP_CIPHER_CTX_ctrl(uVar13,0x12,uVar12 & 0xffffffff,lVar9), iVar5 != 0)) &&
             (iVar5 = EVP_CipherInit_ex(uVar13,0,0,lVar17,0,0xffffffff), iVar5 != 0))
          goto LAB_14f694fdf;
        }
        uVar18 = 0x129;
      }
      else {
        iVar5 = EVP_CipherInit_ex(uVar13,uVar2,0,lVar17,lVar9,param_2 & 2);
        if (iVar5 != 0) goto LAB_14f694fdf;
        uVar18 = 0x12f;
      }
    }
  }
LAB_14f695019:
  uVar15 = 0x44;
LAB_14f69501f:
  ossl_statem_fatal(param_1,0x50,0xd1,uVar15,"ssl\\t1_enc.c",uVar18);
  return 0;
}

// tls1_export_keying_material @ 14f695070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
tls1_export_keying_material
          (longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5,
          void *param_6,size_t param_7,int param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *_Dst;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar7 = 0x14f695091;
  lVar4 = param_5 + 0x40;
  if (param_8 != 0) {
    lVar4 = param_5 + 0x42 + param_7;
  }
  _Dst = (longlong *)CRYPTO_malloc(lVar4,"ssl\\t1_enc.c",0x21e);
  if (_Dst == (longlong *)0x0) {
    uVar6 = CONCAT44(uVar5,599);
    uVar5 = 0x41;
  }
  else {
    memcpy(_Dst,param_4,param_5);
    lVar2 = *(longlong *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)((longlong)_Dst + param_5) = *(undefined8 *)(lVar2 + 0xb8);
    ((undefined8 *)((longlong)_Dst + param_5))[1] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0xd0);
    puVar1 = (undefined8 *)((longlong)_Dst + param_5 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 200);
    puVar1[1] = uVar6;
    lVar2 = *(longlong *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xa0);
    puVar1 = (undefined8 *)(param_5 + 0x20 + (longlong)_Dst);
    *puVar1 = *(undefined8 *)(lVar2 + 0x98);
    puVar1[1] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0xb0);
    puVar1 = (undefined8 *)(param_5 + 0x30 + (longlong)_Dst);
    *puVar1 = *(undefined8 *)(lVar2 + 0xa8);
    puVar1[1] = uVar6;
    if (param_8 != 0) {
      *(char *)(param_5 + 0x40 + (longlong)_Dst) = (char)(param_7 >> 8);
      *(char *)(param_5 + 0x41 + (longlong)_Dst) = (char)param_7;
      if ((param_7 != 0) || (param_6 != (void *)0x0)) {
        memcpy((void *)(param_5 + 0x42 + (longlong)_Dst),param_6,param_7);
      }
    }
    iVar3 = memcmp(_Dst,"client finished",0xf);
    if (iVar3 != 0) {
      iVar3 = memcmp(_Dst,"server finished",0xf);
      if ((iVar3 != 0) &&
         (((*_Dst != s_master_secret._0_8_ || ((int)_Dst[1] != s_master_secret._8_4_)) ||
          (*(char *)((longlong)_Dst + 0xc) != s_master_secret[0xc])))) {
        iVar3 = memcmp(_Dst,"extended master secret",0x16);
        if ((iVar3 != 0) &&
           (((*_Dst != s_key_expansion._0_8_ || ((int)_Dst[1] != s_key_expansion._8_4_)) ||
            (*(char *)((longlong)_Dst + 0xc) != s_key_expansion[0xc])))) {
          uVar5 = FUN_14f694580(param_1,_Dst,lVar4,0,0,0,0,0,0,0,0,
                                *(longlong *)(param_1 + 0x508) + 0x50,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8),param_2,param_3,
                                uVar7 & 0xffffffff00000000);
          goto LAB_14f6952a9;
        }
      }
    }
    uVar6 = CONCAT44(uVar5,0x253);
    uVar5 = 0x16f;
  }
  ERR_put_error(0x14,0x13a,uVar5,"ssl\\t1_enc.c",uVar6);
  uVar5 = 0;
LAB_14f6952a9:
  CRYPTO_clear_free(_Dst,lVar4,"ssl\\t1_enc.c",0x25a);
  return uVar5;
}

// tls1_final_finish_mac @ 14f6952f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
tls1_final_finish_mac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88 [2];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f6952ff;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar1 = ssl3_digest_cached_records(param_1,0);
  if ((iVar1 != 0) && (iVar1 = ssl_handshake_hash(param_1,local_78,0x40,local_88), iVar1 != 0)) {
    local_90 = 1;
    local_98 = 0xc;
    local_b0 = *(longlong *)(param_1 + 0x508) + 0x50;
    local_a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8);
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = local_88[0];
    local_a0 = param_4;
    iVar1 = FUN_14f694580(param_1,param_2,param_3,local_78);
    if (iVar1 != 0) {
      OPENSSL_cleanse(local_78,local_88[0]);
      return 0xc;
    }
  }
  return 0;
}

// FUN_14f695410 @ 14f695410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f695410(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14f694580(param_1,"key expansion",0xd,*(longlong *)(param_1 + 0xa8) + 0x98,0x20,
                *(longlong *)(param_1 + 0xa8) + 0xb8,0x20,0,0,0,0,
                *(longlong *)(param_1 + 0x508) + 0x50,
                *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8),param_2,param_3,1,0x14f69541a);
  return;
}

// tls1_generate_master_secret @ 14f6954b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
tls1_generate_master_secret
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6954c1;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_f0 = param_3;
  local_e8 = param_4;
  local_e0 = param_2;
  if ((*(byte *)(*(longlong *)(param_1 + 0x508) + 0x260) & 1) == 0) {
    local_d0 = 1;
    local_d8 = 0x30;
    local_110 = *(longlong *)(param_1 + 0xa8) + 0x98;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0x20;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0x20;
    iVar1 = FUN_14f694580(param_1,"master secret",0xd,*(longlong *)(param_1 + 0xa8) + 0xb8);
    if (iVar1 != 0) {
LAB_14f695636:
      *param_5 = 0x30;
      return 1;
    }
  }
  else {
    iVar1 = ssl3_digest_cached_records(param_1,1);
    if ((iVar1 != 0) && (iVar1 = ssl_handshake_hash(param_1,local_b8,0x80,local_c8), iVar1 != 0)) {
      local_d0 = 1;
      local_d8 = 0x30;
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = local_c8[0];
      iVar1 = FUN_14f694580(param_1,"extended master secret",0x16,local_b8);
      if (iVar1 != 0) {
        OPENSSL_cleanse(local_b8,local_c8[0]);
        goto LAB_14f695636;
      }
    }
  }
  return 0;
}

// tls1_setup_key_block @ 14f695670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_setup_key_block(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_38 [24];
  
  uVar5 = 0;
  local_res8[0] = 0;
  local_res18 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) != 0) {
    return 1;
  }
  puVar6 = local_38;
  iVar2 = ssl_cipher_get_evp(*(undefined8 *)(param_1 + 0x508),&local_res10,&local_res20,local_res8,
                             &local_res18,puVar6,*(undefined4 *)(param_1 + 0x70c));
  uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
  if (iVar2 == 0) {
    ossl_statem_fatal(param_1,0x50,0xd3,0x8a,"ssl\\t1_enc.c",CONCAT44(uVar7,0x162));
    return 0;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res10;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res20;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x288) = local_res8[0];
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x290) = local_res18;
  iVar2 = EVP_CIPHER_key_length(local_res10);
  iVar3 = EVP_CIPHER_iv_length(local_res10);
  lVar1 = ((longlong)iVar3 + (longlong)iVar2 + local_res18) * 2;
  ssl3_cleanup_key_block(param_1);
  lVar4 = CRYPTO_malloc(lVar1,"ssl\\t1_enc.c",0x16f);
  if (lVar4 == 0) {
    ossl_statem_fatal(param_1,0x50,0xd3,0x41,"ssl\\t1_enc.c",CONCAT44(uVar7,0x171));
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) = lVar1;
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) = lVar4;
    iVar2 = FUN_14f695410(param_1,lVar4,lVar1);
    if (iVar2 != 0) {
      if (((*(uint *)(param_1 + 0x5cc) & 0x800) == 0) && (**(int **)(param_1 + 8) < 0x302)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x24) == 0x20) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
          }
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0) + 0x24) == 4) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
          }
        }
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

