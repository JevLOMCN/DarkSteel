// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 15

// FUN_14f66ea90 @ 14f66ea90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f66ea90(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,char *param_8,
             undefined1 *param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f66eaa7;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a0 = param_10;
  local_a8 = param_2;
  iVar1 = EVP_MD_size(param_3);
  if (iVar1 < 0) {
    local_d0 = CONCAT44(local_d0._4_4_,0x179);
  }
  else {
    local_b0 = 1;
    local_c8 = (longlong)iVar1;
    local_c0 = param_9;
    local_d0 = param_6;
    local_d8 = param_8;
    local_b8 = local_c8;
    iVar1 = tls13_hkdf_expand(param_1,param_3,param_5,param_7);
    if (iVar1 == 0) goto LAB_14f66ecff;
    iVar1 = EVP_CIPHER_key_length(param_4);
    uVar2 = EVP_CIPHER_flags(param_4);
    if ((uVar2 & 0xf0007) == 7) {
      pcVar5 = (char *)0xc;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
      if (((lVar4 == 0) &&
          (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0), lVar4 == 0)) &&
         ((*(longlong *)(param_1 + 0x510) == 0 ||
          (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x510) + 0x1e0), lVar4 == 0)))) {
        local_d0 = CONCAT44(local_d0._4_4_,0x194);
        goto LAB_14f66ecde;
      }
      lVar6 = 0x10;
      if ((*(uint *)(lVar4 + 0x24) & 0x30000) != 0) {
        lVar6 = 8;
      }
    }
    else {
      iVar3 = EVP_CIPHER_iv_length(param_4);
      pcVar5 = (char *)(longlong)iVar3;
      lVar6 = 0;
    }
    local_b0 = 1;
    local_c0 = local_98;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (char *)0x3;
    local_b8 = (longlong)iVar1;
    iVar1 = tls13_hkdf_expand(param_1,param_3,param_9,&DAT_15347cdd8);
    if ((iVar1 == 0) ||
       (local_d8 = pcVar5, iVar1 = tls13_derive_iv(param_1,param_3,param_9,local_a0), iVar1 == 0))
    goto LAB_14f66ecff;
    local_d0 = CONCAT44(local_d0._4_4_,local_a8);
    local_d8 = (char *)0x0;
    iVar1 = EVP_CipherInit_ex(param_11,param_4,0,0);
    if (((0 < iVar1) &&
        (iVar1 = EVP_CIPHER_CTX_ctrl(param_11,9,(ulonglong)pcVar5 & 0xffffffff,0), iVar1 != 0)) &&
       ((lVar6 == 0 || (iVar1 = EVP_CIPHER_CTX_ctrl(param_11,0x11,lVar6,0), iVar1 != 0)))) {
      local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
      local_d8 = (char *)0x0;
      iVar1 = EVP_CipherInit_ex(param_11,0,0,local_98);
      if (0 < iVar1) {
        return 1;
      }
    }
    local_d0 = CONCAT44(local_d0._4_4_,0x1ac);
  }
LAB_14f66ecde:
  local_d8 = "ssl\\tls13_enc.c";
  ossl_statem_fatal(param_1,0x50,0x202);
LAB_14f66ecff:
  OPENSSL_cleanse(local_98,0x40);
  return 0;
}

// tls13_alert_code @ 14f66ed40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls13_alert_code(uint param_1)

{
  ulonglong uVar1;
  
  if ((param_1 != 0x6d) && (param_1 != 0x74)) {
    uVar1 = tls1_alert_code();
    return uVar1;
  }
  return (ulonglong)param_1;
}

// tls13_change_cipher_state @ 14f66ed70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls13_change_cipher_state(longlong param_1,byte param_2)

{
  char *_Size;
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 auStack_188 [32];
  char *local_168;
  undefined1 *local_160;
  char *local_158;
  longlong local_150;
  char *local_148;
  longlong local_140;
  undefined8 local_138;
  char *local_128;
  char *local_120;
  int local_118;
  uint local_114;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  char *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8 [2];
  undefined1 local_c8 [64];
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar7 = 0;
  uVar8 = 0;
  local_110 = local_c8;
  local_f8 = 0;
  local_f0 = (char *)0x0;
  local_128 = (char *)0x0;
  local_100 = 0;
  local_108 = 0;
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if (*(longlong *)(param_1 + 0x468) == 0) {
      lVar10 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0x468) = lVar10;
      if (lVar10 == 0) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1f1);
        goto LAB_14f66ee10;
      }
    }
    else {
      EVP_CIPHER_CTX_reset();
    }
    local_e8 = *(undefined8 *)(param_1 + 0x468);
    local_e0 = param_1 + 0x470;
    RECORD_LAYER_reset_write_sequence(param_1 + 0x830);
  }
  else {
    if (*(longlong *)(param_1 + 0x438) == 0) {
      lVar10 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0x438) = lVar10;
      if (lVar10 == 0) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1e1);
LAB_14f66ee10:
        local_168 = "ssl\\tls13_enc.c";
        ossl_statem_fatal(param_1,0x50,0x1b8,0x41);
        uVar4 = uVar7;
        goto LAB_14f66f530;
      }
    }
    else {
      EVP_CIPHER_CTX_reset();
    }
    local_e8 = *(undefined8 *)(param_1 + 0x438);
    local_e0 = param_1 + 0x440;
    RECORD_LAYER_reset_read_sequence(param_1 + 0x830);
  }
  pcVar11 = "s hs traffic";
  uVar4 = uVar8;
  if (((param_2 & 0x12) == 0x12) || ((param_2 & 0x21) == 0x21)) {
    if ((param_2 & 0x40) == 0) {
      if (-1 < (char)param_2) {
        pcVar11 = "c ap traffic";
        local_120 = "CLIENT_TRAFFIC_SECRET_0";
        local_110 = (undefined1 *)(param_1 + 0x2b4);
        goto LAB_14f66f26a;
      }
      local_f8 = param_1 + 0x234;
      pcVar9 = (char *)(param_1 + 0x174);
      uVar4 = ssl_handshake_md(param_1);
      iVar2 = EVP_MD_size(uVar4);
      local_f0 = (char *)(longlong)iVar2;
      pcVar11 = "c hs traffic";
      local_120 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
      local_110 = (undefined1 *)(param_1 + 0x2f4);
      goto LAB_14f66f271;
    }
    lVar10 = SSL_SESSION_get0_cipher(*(undefined8 *)(param_1 + 0x508));
    pcVar9 = (char *)(param_1 + 0x134);
    pcVar11 = "c e traffic";
    local_120 = "CLIENT_EARLY_TRAFFIC_SECRET";
    local_118 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,local_d8);
    if (local_118 < 1) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x20d);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8);
      goto LAB_14f66f530;
    }
    if (((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x1710) != 0)) &&
       (*(int *)(*(longlong *)(param_1 + 0x508) + 0x228) == 0)) {
      if ((*(longlong *)(param_1 + 0x510) == 0) ||
         (*(int *)(param_1 + 0x1710) != *(int *)(*(longlong *)(param_1 + 0x510) + 0x228))) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x21e);
        local_168 = "ssl\\tls13_enc.c";
        ossl_statem_fatal(param_1,0x50,0x1b8,0x44);
        goto LAB_14f66f530;
      }
      lVar10 = SSL_SESSION_get0_cipher();
    }
    if (lVar10 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x225);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8,0xdb);
      goto LAB_14f66f530;
    }
    lVar5 = EVP_MD_CTX_new();
    if (lVar5 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x231);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8,0x41);
      goto LAB_14f66f530;
    }
    uVar3 = SSL_CIPHER_get_cipher_nid(lVar10);
    uVar6 = OBJ_nid2sn(uVar3);
    local_108 = EVP_get_cipherbyname(uVar6);
    lVar10 = ssl_md(*(undefined4 *)(lVar10 + 0x40));
    local_100 = lVar10;
    if (((lVar10 == 0) || (iVar2 = EVP_DigestInit_ex(lVar5,lVar10,0), iVar2 == 0)) ||
       ((iVar2 = EVP_DigestUpdate(lVar5,local_d8[0],(longlong)local_118), iVar2 == 0 ||
        (iVar2 = EVP_DigestFinal_ex(lVar5,local_c8,&local_114), iVar2 == 0)))) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x23a);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8,0x44);
      EVP_MD_CTX_free(lVar5);
      goto LAB_14f66f530;
    }
    local_128 = (char *)(ulonglong)local_114;
    EVP_MD_CTX_free(lVar5);
    local_140 = CONCAT44(local_140._4_4_,1);
    local_148 = local_128;
    local_158 = local_128;
    local_160 = local_c8;
    local_168 = (char *)0xc;
    local_150 = param_1 + 0x3f4;
    iVar2 = tls13_hkdf_expand(param_1,lVar10,pcVar9,"e exp master");
    if (iVar2 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x248);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8,0x44);
      goto LAB_14f66f530;
    }
    iVar2 = ssl_log_secret(param_1,"EARLY_EXPORTER_SECRET",param_1 + 0x3f4,local_128);
    if (iVar2 == 0) goto LAB_14f66f530;
    lVar10 = 0xb;
  }
  else {
    if ((char)param_2 < '\0') {
      local_f8 = param_1 + 0x274;
      pcVar9 = (char *)(param_1 + 0x174);
      uVar4 = ssl_handshake_md(param_1);
      iVar2 = EVP_MD_size(uVar4);
      local_f0 = (char *)(longlong)iVar2;
      local_120 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
    }
    else {
      pcVar11 = "s ap traffic";
      local_120 = "SERVER_TRAFFIC_SECRET_0";
LAB_14f66f26a:
      pcVar9 = (char *)(param_1 + 0x1b4);
    }
LAB_14f66f271:
    lVar10 = 0xc;
  }
  if ((param_2 & 0x40) == 0) {
    local_100 = ssl_handshake_md(param_1);
    local_108 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278);
    iVar2 = ssl3_digest_cached_records(param_1,1);
    uVar4 = uVar7;
    if ((iVar2 == 0) || (iVar2 = ssl_handshake_hash(param_1,local_c8,0x40,&local_128), iVar2 == 0))
    goto LAB_14f66f530;
  }
  _Size = local_128;
  if (pcVar11 == "s ap traffic") {
    memcpy((void *)(param_1 + 0x2b4),local_c8,(size_t)local_128);
  }
  if (pcVar11 == "s hs traffic") {
    memcpy((void *)(param_1 + 0x2f4),local_c8,(size_t)_Size);
  }
  if (pcVar11 == "c ap traffic") {
    uVar4 = ssl_handshake_md(param_1);
    local_140 = CONCAT44(local_140._4_4_,1);
    local_148 = local_128;
    local_158 = local_128;
    local_160 = local_c8;
    local_168 = (char *)0xa;
    local_150 = param_1 + 500;
    iVar2 = tls13_hkdf_expand(param_1,uVar4,pcVar9,"res master");
    uVar4 = uVar7;
    if (iVar2 == 0) goto LAB_14f66f530;
  }
  puVar1 = local_110;
  local_138 = local_e8;
  local_140 = local_e0;
  local_160 = local_110;
  local_168 = pcVar9;
  local_158 = pcVar11;
  local_150 = lVar10;
  local_148 = local_88;
  iVar2 = FUN_14f66ea90(param_1,param_2 & 2,local_100,local_108);
  uVar4 = uVar8;
  if (iVar2 != 0) {
    if (pcVar11 == "s ap traffic") {
      memcpy((void *)(param_1 + 0x374),local_88,(size_t)local_128);
      uVar7 = ssl_handshake_md(param_1);
      local_140 = CONCAT44(local_140._4_4_,1);
      local_148 = local_128;
      local_158 = local_128;
      local_160 = puVar1;
      local_168 = (char *)0xa;
      local_150 = param_1 + 0x3b4;
      iVar2 = tls13_hkdf_expand(param_1,uVar7,pcVar9,"exp master");
      if ((iVar2 == 0) ||
         (iVar2 = ssl_log_secret(param_1,"EXPORTER_SECRET",param_1 + 0x3b4,local_128), iVar2 == 0))
      goto LAB_14f66f530;
    }
    else if (pcVar11 == "c ap traffic") {
      memcpy((void *)(param_1 + 0x334),local_88,(size_t)local_128);
    }
    iVar2 = ssl_log_secret(param_1,local_120,local_88,local_128);
    lVar10 = local_f8;
    if (iVar2 != 0) {
      if (local_f8 != 0) {
        uVar7 = ssl_handshake_md(param_1);
        local_140 = CONCAT44(local_140._4_4_,1);
        local_148 = local_f0;
        local_150 = lVar10;
        local_158 = (char *)0x0;
        local_160 = (undefined1 *)0x0;
        local_168 = (char *)0x8;
        iVar2 = tls13_hkdf_expand(param_1,uVar7,local_88,"finished");
        if (iVar2 == 0) goto LAB_14f66f530;
      }
      if ((*(int *)(param_1 + 0x38) == 0) && (pcVar11 == "c e traffic")) {
        *(undefined4 *)(param_1 + 0x7c) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      uVar4 = 1;
    }
  }
LAB_14f66f530:
  OPENSSL_cleanse(local_88,0x40);
  return uVar4;
}

// tls13_derive_finishedkey @ 14f66f560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls13_derive_finishedkey(void)

{
  tls13_hkdf_expand();
  return;
}

// tls13_derive_iv @ 14f66f5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls13_derive_iv(void)

{
  tls13_hkdf_expand();
  return;
}

// tls13_derive_key @ 14f66f620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls13_derive_key(void)

{
  tls13_hkdf_expand();
  return;
}

// tls13_export_keying_material @ 14f66f680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
tls13_export_keying_material
          (longlong param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 *local_140;
  ulonglong local_138;
  undefined1 *local_130;
  ulonglong local_128;
  undefined4 local_120;
  uint local_118;
  uint local_114 [3];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f66f69a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar2 = ssl_handshake_md();
  lVar3 = EVP_MD_CTX_new();
  uVar4 = 0;
  uVar5 = 0;
  if (lVar3 != 0) {
    iVar1 = ossl_statem_export_allowed(param_1);
    uVar5 = uVar4;
    if (iVar1 != 0) {
      iVar1 = EVP_DigestInit_ex(lVar3,uVar2,0);
      if (0 < iVar1) {
        uVar6 = 0;
        if (param_8 != 0) {
          uVar6 = param_7;
        }
        iVar1 = EVP_DigestUpdate(lVar3,param_6,uVar6);
        if (0 < iVar1) {
          iVar1 = EVP_DigestFinal_ex(lVar3,local_c8,&local_118);
          if (0 < iVar1) {
            iVar1 = EVP_DigestInit_ex(lVar3,uVar2,0);
            if (0 < iVar1) {
              iVar1 = EVP_DigestFinal_ex(lVar3,local_108,local_114);
              if (0 < iVar1) {
                local_128 = (ulonglong)local_118;
                local_138 = (ulonglong)local_114[0];
                local_120 = 0;
                local_130 = local_88;
                local_140 = local_108;
                local_148 = param_5;
                iVar1 = tls13_hkdf_expand(param_1,uVar2,param_1 + 0x3b4,param_4);
                if (iVar1 != 0) {
                  local_138 = (ulonglong)local_118;
                  local_120 = 0;
                  local_140 = local_c8;
                  local_148 = 8;
                  local_130 = param_2;
                  local_128 = param_3;
                  iVar1 = tls13_hkdf_expand(param_1,uVar2,local_88,"exporter");
                  uVar5 = 0;
                  if (iVar1 != 0) {
                    uVar5 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  EVP_MD_CTX_free(lVar3);
  return uVar5;
}

// tls13_export_keying_material_early @ 14f66f860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
tls13_export_keying_material_early
          (longlong param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 *local_140;
  ulonglong local_138;
  undefined1 *local_130;
  ulonglong local_128;
  undefined4 local_120;
  uint local_118;
  uint local_114 [3];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f66f876;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  lVar2 = EVP_MD_CTX_new();
  uVar5 = 0;
  uVar6 = 0;
  if ((lVar2 != 0) && (iVar1 = ossl_statem_export_early_allowed(param_1), uVar6 = uVar5, iVar1 != 0)
     ) {
    if ((*(int *)(param_1 + 0x38) == 0) &&
       ((*(int *)(param_1 + 0x1710) != 0 && (*(int *)(*(longlong *)(param_1 + 0x508) + 0x228) == 0))
       )) {
      uVar4 = *(undefined8 *)(param_1 + 0x510);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x508);
    }
    lVar3 = SSL_SESSION_get0_cipher(uVar4);
    uVar4 = ssl_md(*(undefined4 *)(lVar3 + 0x40));
    iVar1 = EVP_DigestInit_ex(lVar2,uVar4,0);
    uVar6 = 0;
    if ((((0 < iVar1) && (iVar1 = EVP_DigestUpdate(lVar2,param_6,param_7), uVar6 = uVar5, 0 < iVar1)
         ) && (iVar1 = EVP_DigestFinal_ex(lVar2,local_c8,&local_118), 0 < iVar1)) &&
       ((iVar1 = EVP_DigestInit_ex(lVar2,uVar4,0), 0 < iVar1 &&
        (iVar1 = EVP_DigestFinal_ex(lVar2,local_108,local_114), 0 < iVar1)))) {
      local_128 = (ulonglong)local_118;
      local_138 = (ulonglong)local_114[0];
      local_120 = 0;
      local_130 = local_88;
      local_140 = local_108;
      local_148 = param_5;
      iVar1 = tls13_hkdf_expand(param_1,uVar4,param_1 + 0x3f4,param_4);
      if (iVar1 != 0) {
        local_138 = (ulonglong)local_118;
        local_120 = 0;
        local_140 = local_c8;
        local_148 = 8;
        local_130 = param_2;
        local_128 = param_3;
        iVar1 = tls13_hkdf_expand(param_1,uVar4,local_88,"exporter");
        uVar6 = 0;
        if (iVar1 != 0) {
          uVar6 = 1;
        }
      }
    }
  }
  EVP_MD_CTX_free(lVar2);
  return uVar6;
}

// tls13_final_finish_mac @ 14f66fa70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * tls13_final_finish_mac
                 (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8 [2];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14f66fa8c;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  uVar3 = ssl_handshake_md();
  pcVar8 = (char *)0x0;
  lVar4 = EVP_MD_CTX_new();
  iVar2 = ssl_handshake_hash(param_1,local_78,0x40,local_c8);
  pcVar1 = local_c8[0];
  pcVar6 = pcVar8;
  pcVar9 = pcVar8;
  if (iVar2 == 0) goto LAB_14f66fc3e;
  if (param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x40)) {
    lVar7 = param_1 + 0x274;
LAB_14f66fba8:
    pcVar6 = (char *)EVP_PKEY_new_raw_private_key(0x357,0,lVar7,local_c8[0]);
  }
  else {
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      lVar7 = param_1 + 0x234;
      goto LAB_14f66fba8;
    }
    uVar5 = ssl_handshake_md(param_1);
    local_d0 = 1;
    local_e0 = local_b8;
    local_d8 = pcVar1;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = (char *)0x8;
    iVar2 = tls13_hkdf_expand(param_1,uVar5,param_1 + 0x334,"finished");
    pcVar6 = (char *)0x0;
    pcVar9 = (char *)0x0;
    if (iVar2 == 0) goto LAB_14f66fc3e;
    pcVar6 = (char *)EVP_PKEY_new_raw_private_key(0x357,0,local_b8,local_c8[0]);
    OPENSSL_cleanse(local_b8,0x40);
  }
  if ((((pcVar6 == (char *)0x0) || (lVar4 == 0)) ||
      (local_f8 = pcVar6, iVar2 = EVP_DigestSignInit(lVar4,0,uVar3,0), iVar2 < 1)) ||
     ((iVar2 = EVP_DigestUpdate(lVar4,local_78,local_c8[0]), iVar2 < 1 ||
      (iVar2 = EVP_DigestSignFinal(lVar4,param_4,local_c8), pcVar9 = local_c8[0], iVar2 < 1)))) {
    local_f0 = CONCAT44(local_f0._4_4_,0x148);
    local_f8 = "ssl\\tls13_enc.c";
    ossl_statem_fatal(param_1,0x50,0x25d,0x44);
    pcVar9 = pcVar8;
  }
LAB_14f66fc3e:
  EVP_PKEY_free(pcVar6);
  EVP_MD_CTX_free(lVar4);
  return pcVar9;
}

// tls13_generate_handshake_secret @ 14f66fc90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls13_generate_handshake_secret(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = ssl_handshake_md();
  tls13_generate_secret(param_1,uVar1,param_1 + 0x134,param_2,param_3,param_1 + 0x174);
  return;
}

// tls13_generate_master_secret @ 14f66fd10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls13_generate_master_secret
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ssl_handshake_md();
  iVar1 = EVP_MD_size(uVar2);
  *param_5 = (longlong)iVar1;
  tls13_generate_secret(param_1,uVar2,param_3,0,0,param_2);
  return;
}

// tls13_generate_secret @ 14f66fd90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint tls13_generate_secret
               (undefined8 param_1,undefined *param_2,longlong param_3,undefined *param_4,
               int param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_138 [32];
  char *local_118;
  undefined *local_110;
  longlong local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_e0 = param_6;
  lVar2 = EVP_PKEY_CTX_new_id(0x40c,0);
  if (lVar2 == 0) {
    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xb8);
    local_118 = "ssl\\tls13_enc.c";
    ossl_statem_fatal(param_1,0x50,0x24f,0x44);
    return 0;
  }
  iVar1 = EVP_MD_size(param_2);
  if (iVar1 < 0) {
    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xc0);
    local_118 = "ssl\\tls13_enc.c";
    ossl_statem_fatal(param_1,0x50,0x24f,0x44);
    EVP_PKEY_CTX_free(lVar2);
    return 0;
  }
  puVar4 = &DAT_15347ceb0;
  local_e8 = (longlong)iVar1;
  if (param_4 == (undefined *)0x0) {
    param_5 = iVar1;
    param_4 = &DAT_15347ceb0;
  }
  uVar5 = 0;
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = EVP_MD_CTX_new();
    if (((lVar3 == 0) || (iVar1 = EVP_DigestInit_ex(lVar3,param_2,0), iVar1 < 1)) ||
       (iVar1 = EVP_DigestFinal_ex(lVar3,local_98,0), iVar1 < 1)) {
      local_110 = (undefined *)CONCAT44(local_110._4_4_,0xd6);
      local_118 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x24f,0x44);
      EVP_MD_CTX_free(lVar3);
LAB_14f670096:
      EVP_PKEY_CTX_free(lVar2);
      return 0;
    }
    EVP_MD_CTX_free(lVar3);
    local_100 = local_d8;
    local_f0 = 1;
    local_f8 = local_e8;
    local_108 = local_e8;
    local_110 = local_98;
    local_118 = (char *)0x7;
    iVar1 = tls13_hkdf_expand(param_1,param_2,param_3,"derived");
    if (iVar1 == 0) goto LAB_14f670096;
    uVar6 = (undefined4)local_e8;
    puVar4 = local_d8;
  }
  iVar1 = EVP_PKEY_derive_init(lVar2);
  if (0 < iVar1) {
    local_110 = (undefined *)0x0;
    local_118._0_4_ = 1;
    iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x400,0x1007);
    if (0 < iVar1) {
      local_118._0_4_ = 0;
      local_110 = param_2;
      iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x400,0x1003);
      if ((0 < iVar1) &&
         (local_110 = param_4, local_118._0_4_ = param_5,
         iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x400,0x1005), 0 < iVar1)) {
        local_118 = (char *)CONCAT44(local_118._4_4_,uVar6);
        local_110 = puVar4;
        iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x400,0x1004);
        if ((0 < iVar1) && (iVar1 = EVP_PKEY_derive(lVar2,local_e0,&local_e8), 0 < iVar1))
        goto LAB_14f67003b;
      }
    }
  }
  uVar5 = 1;
  local_110 = (undefined *)CONCAT44(local_110._4_4_,0xf7);
  local_118 = "ssl\\tls13_enc.c";
  ossl_statem_fatal(param_1,0x50,0x24f,0x44);
LAB_14f67003b:
  EVP_PKEY_CTX_free(lVar2);
  if (puVar4 == local_d8) {
    OPENSSL_cleanse(local_d8,local_e8);
  }
  return uVar5 ^ 1;
}

// tls13_hkdf_expand @ 14f6700e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint tls13_hkdf_expand(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4
                      ,ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_218 [32];
  char *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0 [2];
  undefined1 local_1d8 [48];
  undefined1 local_1a8 [336];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1e8 = param_3;
  lVar3 = EVP_PKEY_CTX_new_id(0x40c,0);
  if (lVar3 == 0) {
    return 0;
  }
  if (0xf9 < param_5) {
    if (param_10 != 0) {
      local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,0x3a);
      local_1f8 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x231,0x44);
      EVP_PKEY_CTX_free(lVar3);
      return 0;
    }
    local_1f8 = (char *)CONCAT44(local_1f8._4_4_,0x40);
    ERR_put_error(0x14,0x231,0x16f);
    EVP_PKEY_CTX_free(lVar3);
    return 0;
  }
  uVar1 = EVP_MD_size(param_2);
  iVar2 = WPACKET_init_static_len(local_1d8,local_1a8,0x143,0);
  if (((((iVar2 == 0) || (iVar2 = WPACKET_put_bytes__(local_1d8,param_9,2), iVar2 == 0)) ||
       (iVar2 = WPACKET_start_sub_packet_len__(local_1d8,1), iVar2 == 0)) ||
      ((iVar2 = WPACKET_memcpy(local_1d8,"tls13 ",6), iVar2 == 0 ||
       (iVar2 = WPACKET_memcpy(local_1d8,param_4,param_5), iVar2 == 0)))) ||
     (iVar2 = WPACKET_close(local_1d8), iVar2 == 0)) {
LAB_14f67040e:
    EVP_PKEY_CTX_free(lVar3);
    WPACKET_cleanup(local_1d8);
    if (param_10 == 0) {
      local_1f8 = (char *)CONCAT44(local_1f8._4_4_,0x57);
      ERR_put_error(0x14,0x231,0x44);
    }
    else {
      local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,0x55);
      local_1f8 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x231,0x44);
    }
    return 0;
  }
  uVar4 = 0;
  if (param_6 == 0) {
    param_7 = 0;
  }
  iVar2 = WPACKET_sub_memcpy__(local_1d8,param_6,param_7,1);
  if (((iVar2 == 0) || (iVar2 = WPACKET_get_total_written(local_1d8,local_1e0), iVar2 == 0)) ||
     (iVar2 = WPACKET_finish(local_1d8), iVar2 == 0)) goto LAB_14f67040e;
  iVar2 = EVP_PKEY_derive_init(lVar3);
  if (0 < iVar2) {
    local_1f0 = (undefined1 *)0x0;
    local_1f8 = (char *)CONCAT44(local_1f8._4_4_,2);
    iVar2 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1007);
    if (0 < iVar2) {
      local_1f8 = (char *)((ulonglong)local_1f8 & 0xffffffff00000000);
      local_1f0 = param_2;
      iVar2 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1003);
      if (0 < iVar2) {
        local_1f0 = local_1e8;
        local_1f8 = (char *)CONCAT44(local_1f8._4_4_,uVar1);
        iVar2 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1005);
        if (0 < iVar2) {
          local_1f0 = local_1a8;
          local_1f8 = (char *)CONCAT44(local_1f8._4_4_,local_1e0[0]);
          iVar2 = EVP_PKEY_CTX_ctrl(lVar3,0xffffffff,0x400,0x1006);
          if ((0 < iVar2) && (iVar2 = EVP_PKEY_derive(lVar3,param_8,&param_9), 0 < iVar2))
          goto LAB_14f6703a1;
        }
      }
    }
  }
  uVar4 = 1;
LAB_14f6703a1:
  EVP_PKEY_CTX_free(lVar3);
  if (uVar4 != 0) {
    if (param_10 != 0) {
      local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,0x68);
      local_1f8 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x231,0x44);
      return uVar4 ^ 1;
    }
    local_1f8 = (char *)CONCAT44(local_1f8._4_4_,0x6a);
    ERR_put_error(0x14,0x231,0x44);
  }
  return uVar4 ^ 1;
}

// tls13_setup_key_block @ 14f6704b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls13_setup_key_block(longlong param_1)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  undefined4 uVar2;
  
  *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1e0) =
       *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  uVar2 = 0;
  iVar1 = ssl_cipher_get_evp(*(undefined8 *)(param_1 + 0x508),&local_res8,local_res10,0,0,0,0,
                             0x14f6704bc);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1b9,0x8a,"ssl\\tls13_enc.c",CONCAT44(uVar2,0x15f));
    return 0;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res8;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res10[0];
  return 1;
}

// tls13_update_key @ 14f670580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool tls13_update_key(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  void *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f67059a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar4 = ssl_handshake_md();
  iVar2 = EVP_MD_size(uVar4);
  lVar7 = 0x334;
  if (*(int *)(param_1 + 0x38) == param_2) {
    lVar7 = 0x374;
  }
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x438);
    RECORD_LAYER_reset_read_sequence(param_1 + 0x830);
    lVar5 = 0x440;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x468);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    RECORD_LAYER_reset_write_sequence();
    lVar5 = 0x470;
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  uVar6 = ssl_handshake_md(param_1);
  local_a8 = local_88;
  local_b0 = 0xb;
  local_b8 = "traffic upd";
  local_c0 = 0;
  local_c8 = (void *)(lVar7 + param_1);
  local_a0 = param_1 + lVar5;
  local_98 = uVar4;
  iVar3 = FUN_14f66ea90(param_1,param_2,uVar6,*(undefined8 *)(lVar1 + 0x278));
  if (iVar3 != 0) {
    memcpy((void *)(lVar7 + param_1),local_88,(longlong)iVar2);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  OPENSSL_cleanse(local_88,0x40);
  return iVar3 != 0;
}

