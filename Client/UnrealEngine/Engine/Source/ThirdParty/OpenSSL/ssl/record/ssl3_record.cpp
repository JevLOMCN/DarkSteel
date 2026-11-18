// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 18

// SSL3_RECORD_clear @ 14f690460

void SSL3_RECORD_clear(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = *puVar1;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 9;
    } while (param_2 != 0);
  }
  return;
}

// SSL3_RECORD_release @ 14f6904b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL3_RECORD_release(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      CRYPTO_free(*puVar1,"ssl\\record\\ssl3_record.c",0x37);
      *puVar1 = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// SSL3_RECORD_set_seq_num @ 14f690520

void SSL3_RECORD_set_seq_num(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  return;
}

// dtls1_get_record @ 14f690740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_get_record(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int local_res8 [2];
  ulonglong local_res10;
  undefined8 uVar9;
  
  uVar9 = 0x14f690752;
  iVar5 = dtls1_process_buffered_records();
  if (iVar5 == 0) {
    return 0xffffffff;
  }
  do {
    iVar5 = dtls1_retrieve_buffered_record(param_1,*(longlong *)(param_1 + 0x5b8) + 0x30);
    if (iVar5 != 0) {
      return 1;
    }
    if ((param_1[0x20f] == 0xf1) && (0xc < *(ulonglong *)(param_1 + 0x5a0))) {
LAB_14f6908e6:
      uVar8 = *(ulonglong *)(param_1 + 0x360);
      if ((*(longlong *)(param_1 + 0x5a0) - 0xdU < uVar8) &&
         ((iVar5 = ssl3_read_n(param_1,uVar8,uVar8,1,1,&local_res10), iVar5 < 1 ||
          (local_res10 != uVar8)))) {
LAB_14f6909cc:
        iVar5 = ossl_statem_in_error(param_1);
        if (iVar5 != 0) {
          return 0xffffffff;
        }
        goto LAB_14f6909d8;
      }
      param_1[0x20f] = 0xf0;
      lVar7 = dtls1_get_bitmap(param_1,param_1 + 0x35e,local_res8);
      if (lVar7 == 0) {
LAB_14f6909df:
        param_1[0x360] = 0;
        param_1[0x361] = 0;
        goto LAB_14f6909e3;
      }
      iVar5 = dtls1_record_replay_check(param_1,lVar7);
      if (iVar5 == 0) {
LAB_14f6909d8:
        param_1[0x36c] = 1;
        goto LAB_14f6909df;
      }
      if (*(longlong *)(param_1 + 0x360) != 0) {
        if (local_res8[0] == 0) {
          iVar5 = dtls1_process_record(param_1,lVar7);
          if (iVar5 != 0) {
            return 1;
          }
          goto LAB_14f6909cc;
        }
        iVar5 = SSL_in_init();
        if (((iVar5 != 0) || (iVar5 = ossl_statem_get_in_handshake(param_1), iVar5 != 0)) &&
           (iVar5 = dtls1_buffer_record(param_1,*(longlong *)(param_1 + 0x5b8) + 0x20,
                                        param_1 + 0x36e), iVar5 < 0)) {
          return 0xffffffff;
        }
        goto LAB_14f6909d8;
      }
      param_1[0x36c] = 1;
    }
    else {
      uVar6 = ssl3_read_n(param_1,0xd,*(undefined8 *)(param_1 + 0x218),0,1,&local_res10);
      if ((int)uVar6 < 1) {
        return uVar6;
      }
      if (*(longlong *)(param_1 + 0x5a0) == 0xd) {
        pbVar4 = *(byte **)(param_1 + 0x59e);
        param_1[0x20f] = 0xf1;
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          (**(code **)(param_1 + 0x2e))
                    (0,0,0x100,pbVar4,0xd,param_1,*(undefined8 *)(param_1 + 0x30),uVar9);
        }
        param_1[0x35f] = (uint)*pbVar4;
        bVar1 = pbVar4[2];
        bVar2 = pbVar4[1];
        param_1[0x36d] = (uint)CONCAT11(pbVar4[3],pbVar4[4]);
        *(undefined4 *)((longlong)param_1 + 0x16ca) = *(undefined4 *)(pbVar4 + 5);
        *(undefined2 *)((longlong)param_1 + 0x16ce) = *(undefined2 *)(pbVar4 + 9);
        uVar8 = (ulonglong)CONCAT11(pbVar4[0xb],pbVar4[0xc]);
        param_1[0x36c] = 0;
        *(ulonglong *)(param_1 + 0x360) = uVar8;
        if ((((param_1[0x17a] != 0) || (param_1[0x35f] == 0x15)) ||
            ((uint)CONCAT11(bVar2,bVar1) == *param_1)) &&
           ((((((uint)CONCAT11(bVar2,bVar1) ^ *param_1) & 0xff00) == 0 && (uVar8 < 0x4541)) &&
            ((*(longlong *)(param_1 + 0x142) == 0 ||
             ((cVar3 = *(char *)(*(longlong *)(param_1 + 0x142) + 0x240), 3 < (byte)(cVar3 - 1U) ||
              (uVar8 <= (0x200 << (cVar3 - 1U & 0x1f)) + 0x140)))))))) goto LAB_14f6908e6;
        goto LAB_14f6909d8;
      }
LAB_14f6909e3:
      param_1[0x5a0] = 0;
      param_1[0x5a1] = 0;
    }
    iVar5 = dtls1_process_buffered_records(param_1);
    if (iVar5 == 0) {
      return 0xffffffff;
    }
  } while( true );
}

// dtls1_process_record @ 14f690a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 dtls1_process_record(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + 0xd78;
  lVar9 = *(longlong *)(param_1 + 0x508);
  lVar7 = *(longlong *)(param_1 + 0x1678) + 0xd;
  *(longlong *)(param_1 + 0xda0) = lVar7;
  uVar15 = 0x4000;
  if (0x4540 < *(ulonglong *)(param_1 + 0xd80)) {
    local_d0 = 0x66f;
    local_d8 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,0x16,0x101);
    return 0;
  }
  *(longlong *)(param_1 + 0xd98) = lVar7;
  *(ulonglong *)(param_1 + 0xd88) = *(ulonglong *)(param_1 + 0xd80);
  if (((**(uint **)(param_1 + 0xa8) & 0x100) != 0) && (*(longlong *)(param_1 + 0x450) != 0)) {
    uVar8 = EVP_MD_CTX_md();
    iVar4 = EVP_MD_size(uVar8);
    uVar12 = (ulonglong)iVar4;
    if (0x40 < uVar12) {
      uVar8 = 0x50;
      local_d0 = 0x67c;
      uVar14 = 0x44;
LAB_14f690bae:
      local_d8 = "ssl\\record\\ssl3_record.c";
      ossl_statem_fatal(param_1,uVar8,0x101,uVar14);
      return 0;
    }
    if (*(ulonglong *)(param_1 + 0xd88) < uVar12) {
      local_d0 = 0x681;
      local_d8 = "ssl\\record\\ssl3_record.c";
      ossl_statem_fatal(param_1,0x32,0x101);
      return 0;
    }
    *(longlong *)(param_1 + 0xd80) = *(longlong *)(param_1 + 0xd80) - uVar12;
    lVar7 = *(longlong *)(param_1 + 0xd80);
    lVar3 = *(longlong *)(param_1 + 0xd98);
    iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 8))
                      (param_1,lVar1,local_c8,0);
    if ((iVar4 == 0) || (iVar4 = CRYPTO_memcmp(local_c8,lVar7 + lVar3,uVar12), iVar4 != 0)) {
      local_d0 = 0x689;
      uVar8 = 0x14;
      uVar14 = 0x119;
      goto LAB_14f690bae;
    }
  }
  iVar4 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 0xc0))(param_1,lVar1,1);
  if (iVar4 == 0) {
    iVar4 = ossl_statem_in_error(param_1);
    if (iVar4 != 0) {
      return 0;
    }
    goto LAB_14f690d7f;
  }
  if ((((lVar9 != 0) && ((**(uint **)(param_1 + 0xa8) & 0x100) == 0)) &&
      (*(longlong *)(param_1 + 0x438) != 0)) &&
     (lVar9 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x450)), lVar9 != 0)) {
    uVar8 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x450));
    iVar5 = EVP_MD_size(uVar8);
    if (iVar5 < 0) {
      uVar10 = 0x50;
      local_d0 = 0x6b4;
      uVar13 = 6;
      goto LAB_14f690e03;
    }
    uVar12 = (ulonglong)iVar5;
    if (0x40 < uVar12) {
      uVar10 = 0x50;
      local_d0 = 0x6ba;
      uVar13 = 0x44;
      goto LAB_14f690e03;
    }
    if (uVar12 <= *(ulonglong *)(param_1 + 0xd88)) {
      uVar8 = EVP_CIPHER_CTX_cipher(*(undefined8 *)(param_1 + 0x438));
      uVar6 = EVP_CIPHER_flags(uVar8);
      if (((uVar6 & 0xf0007) != 2) || (uVar12 + 1 <= *(ulonglong *)(param_1 + 0xd88))) {
        uVar8 = EVP_CIPHER_CTX_cipher(*(undefined8 *)(param_1 + 0x438));
        uVar6 = EVP_CIPHER_flags(uVar8);
        if ((uVar6 & 0xf0007) == 2) {
          puVar11 = local_88;
          iVar5 = ssl3_cbc_copy_mac(local_88,lVar1,uVar12);
          if (iVar5 == 0) {
            local_d0 = 0x6d7;
            uVar10 = 0x50;
            uVar13 = 0x44;
            goto LAB_14f690e03;
          }
          *(longlong *)(param_1 + 0xd80) = *(longlong *)(param_1 + 0xd80) - uVar12;
        }
        else {
          *(longlong *)(param_1 + 0xd80) = *(longlong *)(param_1 + 0xd80) - uVar12;
          puVar11 = (undefined1 *)(*(longlong *)(param_1 + 0xd80) + *(longlong *)(param_1 + 0xd98));
        }
        iVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 8))
                          (param_1,lVar1,local_c8,0);
        if (((iVar5 == 0) || (puVar11 == (undefined1 *)0x0)) ||
           (iVar5 = CRYPTO_memcmp(local_c8,puVar11,uVar12), iVar5 != 0)) {
          iVar4 = -1;
        }
        if (uVar12 + 0x4400 < *(ulonglong *)(param_1 + 0xd80)) goto LAB_14f690d7f;
        goto LAB_14f690d7a;
      }
    }
    uVar10 = 0x32;
    local_d0 = 0x6c9;
    uVar13 = 0xa0;
LAB_14f690e03:
    local_d8 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,uVar10,0x101,uVar13);
    return 0;
  }
LAB_14f690d7a:
  if (iVar4 < 0) {
LAB_14f690d7f:
    *(undefined8 *)(param_1 + 0xd80) = 0;
    *(undefined8 *)(param_1 + 0x1680) = 0;
    return 0;
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    if (0x4400 < *(ulonglong *)(param_1 + 0xd80)) {
      local_d0 = 0x6f8;
      local_d8 = "ssl\\record\\ssl3_record.c";
      ossl_statem_fatal(param_1,0x16,0x101);
      return 0;
    }
    iVar4 = ssl3_do_uncompress(param_1,lVar1);
    if (iVar4 == 0) {
      local_d0 = 0x6fd;
      uVar10 = 0x1e;
      uVar13 = 0x6b;
      goto LAB_14f690e03;
    }
  }
  if ((*(longlong *)(param_1 + 0x508) != 0) &&
     (cVar2 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x240), (byte)(cVar2 - 1U) < 4)) {
    uVar15 = (ulonglong)(uint)(0x200 << (cVar2 - 1U & 0x1f));
  }
  if (uVar15 < *(ulonglong *)(param_1 + 0xd80)) {
    local_d0 = 0x709;
    local_d8 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,0x16,0x101);
    return 0;
  }
  *(undefined8 *)(param_1 + 0xd90) = 0;
  *(undefined8 *)(param_1 + 0x1680) = 0;
  dtls1_record_bitmap_update(param_1,param_2);
  return 1;
}

// dtls_buffer_listen_record @ 14f690ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool dtls_buffer_listen_record
               (longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xd78) = 0;
  *(undefined8 *)(param_1 + 0xd88) = 0;
  *(undefined8 *)(param_1 + 0xd90) = 0;
  *(undefined8 *)(param_1 + 0xd98) = 0;
  *(undefined8 *)(param_1 + 0xda0) = 0;
  *(undefined8 *)(param_1 + 0xda8) = 0;
  *(undefined8 *)(param_1 + 0xdb0) = 0;
  *(undefined8 *)(param_1 + 0xdb8) = 0;
  *(longlong *)(param_1 + 0xd80) = param_2;
  *(undefined4 *)(param_1 + 0xd7c) = 0x16;
  *(undefined8 *)(param_1 + 0xdb8) = *param_3;
  *(undefined8 *)(param_1 + 0xd90) = param_4;
  *(longlong *)(param_1 + 0x1680) = param_2 + 0xd;
  *(longlong *)(param_1 + 0x1678) = *(longlong *)(param_1 + 0x850);
  *(longlong *)(param_1 + 0xd98) = *(longlong *)(param_1 + 0x850) + 0xd;
  iVar1 = dtls1_buffer_record(param_1,*(longlong *)(param_1 + 0x16e0) + 0x30,param_1 + 0xdb8,param_4
                              ,0x14f690eea);
  return 0 < iVar1;
}

// early_data_count_ok @ 14f690fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 early_data_count_ok(longlong param_1,longlong param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x508);
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(int *)(lVar2 + 0x228) == 0) &&
       ((lVar2 = *(longlong *)(param_1 + 0x510), lVar2 == 0 || (*(int *)(lVar2 + 0x228) == 0)))) {
      uVar3 = 0x50;
      uVar5 = 0x100000076;
      uVar4 = 0x44;
      goto LAB_14f690ff4;
    }
    uVar1 = *(uint *)(lVar2 + 0x228);
  }
  else if (*(int *)(param_1 + 0x710) == 2) {
    uVar1 = *(uint *)(lVar2 + 0x228);
    if (*(uint *)(param_1 + 0x1714) < *(uint *)(lVar2 + 0x228)) {
      uVar1 = *(uint *)(param_1 + 0x1714);
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1714);
  }
  if (uVar1 == 0) {
    uVar5 = 0x100000086;
  }
  else {
    if (param_2 + (ulonglong)*(uint *)(param_1 + 0x1718) <= (ulonglong)(uVar1 + param_3)) {
      *(uint *)(param_1 + 0x1718) = *(uint *)(param_1 + 0x1718) + (int)param_2;
      return 1;
    }
    uVar5 = 0x10000008f;
  }
  uVar3 = 10;
  if (param_4 != 0) {
    uVar3 = 0x50;
  }
  uVar4 = 0xa4;
LAB_14f690ff4:
  ossl_statem_fatal(param_1,uVar3,0x214,uVar4,"ssl\\record\\ssl3_record.c",uVar5);
  return 0;
}

// n_ssl3_mac @ 14f6910a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 n_ssl3_mac(longlong param_1,longlong param_2,undefined1 *param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *_Src;
  size_t _Size;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  void *local_d0;
  size_t local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 auStack_90 [72];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f6910b5;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_4 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x450);
    _Src = (void *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    lVar9 = 0x16c8;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x480);
    _Src = (void *)(*(longlong *)(param_1 + 0xa8) + 0x58);
    lVar9 = 0x16d0;
  }
  puVar1 = (undefined8 *)(lVar9 + param_1);
  uVar10 = EVP_MD_CTX_md(uVar11);
  iVar7 = EVP_MD_size(uVar10);
  if (iVar7 < 0) {
    return 0;
  }
  local_b0 = (ulonglong)iVar7;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_b0;
  auVar4 = ZEXT816(0) << 0x40 | ZEXT816(0x30);
  _Size = SUB168(auVar4 / auVar3,0) * local_b0;
  if (param_4 == 0) {
    uVar10 = EVP_CIPHER_CTX_cipher(*(undefined8 *)(param_1 + 0x438),SUB168(auVar4 % auVar3,0));
    uVar8 = EVP_CIPHER_flags(uVar10);
    if (((uVar8 & 0xf0007) == 2) &&
       (cVar6 = ssl3_cbc_record_digest_supported(uVar11), uVar5 = local_b0, cVar6 != '\0')) {
      memcpy(&local_98,_Src,local_b0);
      memcpy((void *)((longlong)&local_98 + uVar5),&DAT_153488ac0,_Size);
      lVar2 = *(longlong *)(param_2 + 8);
      lVar9 = _Size + uVar5;
      *(undefined8 *)((longlong)&local_98 + lVar9) = *puVar1;
      auStack_90[lVar9] = *(undefined1 *)(param_2 + 4);
      local_e0 = lVar2 + uVar5;
      local_c0 = 1;
      auStack_90[lVar9 + 1] = (char)((ulonglong)lVar2 >> 8);
      local_d8 = *(undefined8 *)(param_2 + 0x10);
      local_c8 = uVar5;
      local_e8 = *(undefined8 *)(param_2 + 0x28);
      auStack_90[lVar9 + 2] = (char)lVar2;
      local_d0 = _Src;
      iVar7 = ssl3_cbc_digest_record(uVar11,param_3,&local_b0,&local_98);
      if (iVar7 < 1) {
        return 0;
      }
      goto LAB_14f69136f;
    }
  }
  lVar9 = EVP_MD_CTX_new();
  if (lVar9 != 0) {
    local_b8[0] = *(undefined1 *)(param_2 + 4);
    *param_3 = *(undefined1 *)(param_2 + 9);
    param_3[1] = *(undefined1 *)(param_2 + 8);
    iVar7 = EVP_MD_CTX_copy_ex(lVar9,uVar11);
    if (((((0 < iVar7) && (iVar7 = EVP_DigestUpdate(lVar9,_Src,local_b0), 0 < iVar7)) &&
         (iVar7 = EVP_DigestUpdate(lVar9,&DAT_153488ac0,_Size), 0 < iVar7)) &&
        (((iVar7 = EVP_DigestUpdate(lVar9,puVar1,8), 0 < iVar7 &&
          (iVar7 = EVP_DigestUpdate(lVar9,local_b8,1), 0 < iVar7)) &&
         ((iVar7 = EVP_DigestUpdate(lVar9,param_3,2), 0 < iVar7 &&
          ((iVar7 = EVP_DigestUpdate(lVar9,*(undefined8 *)(param_2 + 0x28),
                                     *(undefined8 *)(param_2 + 8)), 0 < iVar7 &&
           (iVar7 = EVP_DigestFinal_ex(lVar9,param_3,0), 0 < iVar7)))))))) &&
       ((iVar7 = EVP_MD_CTX_copy_ex(lVar9,uVar11), 0 < iVar7 &&
        ((((iVar7 = EVP_DigestUpdate(lVar9,_Src,local_b0), 0 < iVar7 &&
           (iVar7 = EVP_DigestUpdate(lVar9,&DAT_153488af0,_Size), 0 < iVar7)) &&
          (iVar7 = EVP_DigestUpdate(lVar9,param_3,local_b0), 0 < iVar7)) &&
         (iVar7 = EVP_DigestFinal_ex(lVar9,param_3,local_a8), 0 < iVar7)))))) {
      EVP_MD_CTX_free(lVar9);
LAB_14f69136f:
      ssl3_record_sequence_update(puVar1);
      return 1;
    }
    EVP_MD_CTX_free(lVar9);
  }
  return 0;
}

// ssl3_cbc_copy_mac @ 14f6913d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ssl3_cbc_copy_mac(longlong param_1,longlong param_2,size_t param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *_Dst;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  byte local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar11 = *(ulonglong *)(param_2 + 8);
  uVar7 = 0;
  uVar8 = *(ulonglong *)(param_2 + 0x10);
  local_e0 = uVar11 - param_3;
  if ((uVar8 < param_3) || (0x40 < param_3)) {
    uVar4 = 0;
  }
  else {
    _Dst = local_c8 + (-((int)&stack0x00000010 + -0xd8) & 0x3f);
    uVar9 = uVar7;
    if (param_3 + 0x100 < uVar8) {
      uVar9 = (uVar8 - param_3) - 0x100;
    }
    local_e8 = 0;
    local_d8 = param_1;
    memset(_Dst,0,param_3);
    if (uVar9 < uVar8) {
      lVar1 = *(longlong *)(param_2 + 0x20);
      uVar10 = uVar7;
      uVar12 = uVar7;
      do {
        pbVar6 = (byte *)(uVar9 + lVar1);
        uVar2 = (longlong)((uVar9 ^ local_e0) - 1 & ~(uVar9 ^ local_e0)) >> 0x3f;
        uVar5 = ((longlong)pbVar6 - (uVar11 + lVar1) ^ uVar11 | uVar9 ^ uVar11) ^ uVar9;
        uVar7 = uVar7 | uVar2 & uVar12;
        uVar9 = uVar9 + 1;
        uVar10 = (longlong)uVar5 >> 0x3f & (uVar2 | uVar10);
        _Dst[uVar12] = _Dst[uVar12] | *pbVar6 & (byte)uVar10;
        uVar12 = uVar12 + 1;
        uVar12 = uVar12 & (longlong)((uVar12 - param_3 ^ param_3 | param_3 ^ uVar12) ^ uVar12) >>
                          0x3f;
      } while (uVar9 < uVar8);
    }
    uVar11 = 0;
    if (param_3 != 0) {
      do {
        uVar8 = uVar7 + 1;
        bVar3 = (byte)((int)(((uint)uVar7 & 0x20) - 1) >> 0x1f);
        *(byte *)(local_d8 + uVar11) =
             bVar3 & _Dst[uVar7 & 0xffffffffffffffdf] | ~bVar3 & _Dst[uVar7 | 0x20];
        uVar11 = uVar11 + 1;
        uVar7 = uVar8 & (longlong)((uVar8 - param_3 ^ param_3 | param_3 ^ uVar8) ^ uVar8) >> 0x3f;
      } while (uVar11 < param_3);
    }
    uVar4 = 1;
  }
  return uVar4;
}

// ssl3_cbc_remove_padding @ 14f6915f0

uint ssl3_cbc_remove_padding(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 < param_3 + 1U) {
    return 0;
  }
  uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x20) + -1 + uVar1);
  uVar4 = uVar2 + param_3 + 1U;
  uVar2 = uVar2 + 1;
  uVar4 = 0xffffffffffffffffU -
          ((longlong)((uVar1 - uVar4 ^ uVar4 | uVar1 ^ uVar4) ^ uVar1) >> 0x3f) &
          0xffffffffffffffffU -
          ((longlong)((param_2 - uVar2 ^ uVar2 | uVar2 ^ param_2) ^ param_2) >> 0x3f);
  *(ulonglong *)(param_1 + 8) = uVar1 - (uVar2 & uVar4);
  uVar3 = (uint)uVar4;
  return ~uVar3 | uVar3 & 1;
}

// ssl3_do_compress @ 14f691690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_do_compress(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = COMP_compress_block(*(undefined8 *)(param_1 + 0x458),*(undefined8 *)(param_2 + 0x20),
                              *(int *)(param_2 + 8) + 0x400,*(undefined8 *)(param_2 + 0x28),
                              *(int *)(param_2 + 8),0x14f69169c);
  if (iVar1 < 0) {
    return 0;
  }
  *(longlong *)(param_2 + 8) = (longlong)iVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  return 1;
}

// ssl3_do_uncompress @ 14f6916f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_do_uncompress(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f691700;
  if (*(longlong *)(param_2 + 0x30) == 0) {
    uVar2 = CRYPTO_malloc(0x4540,"ssl\\record\\ssl3_record.c",799);
    *(undefined8 *)(param_2 + 0x30) = uVar2;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    iVar1 = COMP_expand_block(*(undefined8 *)(param_1 + 0x460),*(longlong *)(param_2 + 0x30),0x4000,
                              *(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 8),uVar3);
    if (-1 < iVar1) {
      *(longlong *)(param_2 + 8) = (longlong)iVar1;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
      return 1;
    }
  }
  return 0;
}

// ssl3_enc @ 14f691790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_enc(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  size_t _Size;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar5 = 0;
  if (param_3 != 1) {
    return 0;
  }
  if (param_4 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x438);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x468);
  }
  lVar2 = lVar5;
  if (lVar3 != 0) {
    lVar2 = EVP_CIPHER_CTX_cipher(lVar3);
  }
  if (((*(longlong *)(param_1 + 0x508) == 0) || (lVar3 == 0)) || (lVar2 == 0)) {
    memmove(*(void **)(param_2 + 0x20),*(void **)(param_2 + 0x28),*(size_t *)(param_2 + 8));
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
    return 1;
  }
  uVar7 = *(ulonglong *)(param_2 + 8);
  iVar1 = EVP_CIPHER_CTX_block_size(lVar3);
  uVar6 = (ulonglong)iVar1;
  if (uVar6 == 1) {
LAB_14f69186e:
    if (param_4 != 0) goto LAB_14f69188c;
  }
  else if (param_4 != 0) {
    _Size = uVar6 - uVar7 % uVar6;
    uVar7 = uVar7 + _Size;
    memset((void *)(*(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 8)),0,_Size);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + _Size;
    *(char *)(*(longlong *)(param_2 + 0x28) + -1 + uVar7) = (char)_Size + -1;
    goto LAB_14f69186e;
  }
  if ((uVar7 == 0) || (uVar7 % uVar6 != 0)) {
    return 0;
  }
LAB_14f69188c:
  iVar1 = EVP_Cipher(lVar3,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                     uVar7 & 0xffffffff);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  lVar3 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x450));
  if (lVar3 != 0) {
    uVar4 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x450));
    iVar1 = EVP_MD_size(uVar4);
    if (iVar1 < 0) {
      ossl_statem_fatal(param_1,0x50,0x260,0x44,"ssl\\record\\ssl3_record.c",0x392);
      return 0xffffffff;
    }
    lVar5 = (longlong)iVar1;
  }
  if ((uVar6 != 1) && (param_4 == 0)) {
    uVar4 = ssl3_cbc_remove_padding(param_2,uVar6,lVar5);
    return uVar4;
  }
  return 1;
}

// ssl3_get_record @ 14f691960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ssl3_get_record(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  char *_Str1;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_138 [32];
  char *local_118;
  uint *local_110;
  undefined8 local_108;
  ulonglong *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  uint local_e0 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14f691982;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar20 = *(ulonglong *)(param_1 + 0x180);
  local_e8 = *(longlong *)(param_1 + 0x142);
  local_f8 = (ulonglong *)(param_1 + 0x360);
  uVar16 = 0;
  puVar21 = local_f8;
  local_f0 = uVar20;
  if (uVar20 == 0) {
    uVar20 = 1;
    local_f0 = uVar20;
  }
  do {
    puVar18 = puVar21;
    uVar23 = uVar16;
    puVar21 = puVar18 + -1;
    if ((param_1[0x20f] != 0xf1) || (*(ulonglong *)(param_1 + 0x5a0) < 5)) {
      local_110 = local_e0;
      local_118 = (char *)CONCAT44(local_118._4_4_,(uint)(uVar23 == 0));
      uVar11 = ssl3_read_n(param_1,5,*(undefined8 *)(param_1 + 0x218));
      if ((int)uVar11 < 1) {
        return uVar11;
      }
      uVar20 = *(ulonglong *)(param_1 + 0x5a0);
      pbVar7 = *(byte **)(param_1 + 0x59e);
      param_1[0x20f] = 0xf1;
      if (0x7fffffffffffffff < uVar20) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0xda);
        goto LAB_14f69270e;
      }
      local_c8._0_4_ = SUB84(pbVar7,0);
      local_c8._4_4_ = (undefined4)((ulonglong)pbVar7 >> 0x20);
      uStack_c0._0_4_ = (undefined4)uVar20;
      uStack_c0._4_4_ = (undefined4)(uVar20 >> 0x20);
      local_d8 = (undefined4)local_c8;
      uStack_d4 = local_c8._4_4_;
      uStack_d0 = (undefined4)uStack_c0;
      uStack_cc = uStack_c0._4_4_;
      local_c8 = pbVar7;
      uStack_c0 = uVar20;
      if (1 < uVar20) {
        bVar1 = *pbVar7;
        bVar2 = pbVar7[1];
        if (uVar20 != 2) {
          if ((((param_1[0xe] != 0) && (param_1[0x5b6] != 0)) && ((char)bVar1 < '\0')) &&
             (pbVar7[2] == 1)) {
            *(uint *)((longlong)puVar18 + -4) = 0x16;
            uVar16 = (ulonglong)(CONCAT11(bVar1,bVar2) & 0x7fff);
            *(uint *)puVar21 = 2;
            *puVar18 = uVar16;
            if (*(longlong *)(param_1 + 0x218) - 2U < uVar16) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0xfb);
              uVar15 = 0x16;
              uVar11 = 0xc6;
            }
            else {
              uVar20 = local_f0;
              if (8 < uVar16) goto LAB_14f691ca7;
              uVar15 = 0x32;
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x101);
              uVar11 = 0xa0;
            }
            goto LAB_14f692729;
          }
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            local_108 = *(undefined8 *)(param_1 + 0x30);
            local_118 = (char *)0x5;
            local_110 = param_1;
            (**(code **)(param_1 + 0x2e))(0,0,0x100,pbVar7);
          }
          if ((uVar20 != 0) && (bVar1 = *pbVar7, 1 < uVar20 - 1)) {
            bVar2 = pbVar7[1];
            bVar3 = pbVar7[2];
            uVar8 = (uint)CONCAT11(bVar2,bVar3);
            if (1 < uVar20 - 3) {
              bVar4 = pbVar7[3];
              bVar5 = pbVar7[4];
              *(uint *)((longlong)puVar18 + -4) = (uint)bVar1;
              *puVar18 = (ulonglong)CONCAT11(bVar4,bVar5);
              *(uint *)puVar21 = uVar8;
              if ((param_1[0x17a] != 0) ||
                 (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
                    (iVar9 = **(int **)(param_1 + 2), 0x303 < iVar9)) && (iVar9 != 0x10000)) ||
                  ((param_1[0x136] == 1 || (uVar8 == *param_1)))))) {
                if ((uVar8 & 0xffffff00) == 0x300) {
                  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                       && (iVar9 = **(int **)(param_1 + 2), 0x303 < iVar9)) && (iVar9 != 0x10000))
                     && (*(longlong *)(param_1 + 0x10e) != 0)) {
                    if (bVar1 != 0x17) {
                      if (bVar1 != 0x14) {
                        if (bVar1 == 0x15) {
                          bVar24 = param_1[0x20] == 1;
                          goto LAB_14f691c6d;
                        }
LAB_14f691e5e:
                        local_110 = (uint *)CONCAT44(local_110._4_4_,0x15e);
                        uVar15 = 10;
                        uVar11 = 0x1bb;
                        goto LAB_14f692729;
                      }
                      if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) != 0) {
                        bVar24 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0;
LAB_14f691c6d:
                        if (!bVar24) goto LAB_14f691e5e;
                      }
                    }
                    if (uVar8 != 0x303) {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,0x163);
                      uVar15 = 0x32;
                      uVar11 = 0x10b;
                      goto LAB_14f692729;
                    }
                  }
                  uVar20 = local_f0;
                  if ((ulonglong)CONCAT11(bVar4,bVar5) <= *(longlong *)(param_1 + 0x218) - 5U)
                  goto LAB_14f691ca7;
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x16b);
                  uVar15 = 0x16;
                  uVar11 = 0xc6;
                  goto LAB_14f692729;
                }
                if (param_1[0x5b6] == 0) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x151);
                  uVar15 = 0x46;
                  uVar11 = 0x10b;
                }
                else {
                  _Str1 = *(char **)(param_1 + 0x59e);
                  iVar9 = strncmp(_Str1,"GET ",4);
                  if (((iVar9 == 0) || (iVar9 = strncmp(_Str1,"POST ",5), iVar9 == 0)) ||
                     ((iVar9 = strncmp(_Str1,"HEAD ",5), iVar9 == 0 ||
                      (iVar9 = strncmp(_Str1,"PUT ",4), iVar9 == 0)))) {
                    local_110 = (uint *)CONCAT44(local_110._4_4_,0x142);
                    uVar11 = 0x9c;
                    uVar15 = 0xffffffff;
                  }
                  else {
                    iVar9 = strncmp(_Str1,"CONNE",5);
                    uVar15 = 0xffffffff;
                    if (iVar9 == 0) {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,0x146);
                      uVar11 = 0x9b;
                      uVar15 = 0xffffffff;
                    }
                    else {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,0x14c);
                      uVar11 = 0x10b;
                    }
                  }
                }
                goto LAB_14f692729;
              }
              if (((((*param_1 ^ uVar8) & 0xff00) == 0) && (*(longlong *)(param_1 + 0x11a) == 0)) &&
                 (*(longlong *)(param_1 + 0x120) == 0)) {
                if (bVar1 == 0x15) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,299);
                  uVar11 = 0x10b;
                  uVar15 = 0xffffffff;
                  goto LAB_14f692729;
                }
                *param_1 = (uint)CONCAT11(bVar2,bVar3);
              }
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x134);
              uVar15 = 0x46;
              uVar11 = 0x10b;
              goto LAB_14f692729;
            }
          }
          uVar15 = 0x32;
          local_110 = (uint *)CONCAT44(local_110._4_4_,0x10f);
          uVar11 = 0x44;
          goto LAB_14f692729;
        }
      }
      uVar15 = 0x32;
      local_110 = (uint *)CONCAT44(local_110._4_4_,0xe1);
      uVar11 = 0x44;
      goto LAB_14f692729;
    }
LAB_14f691ca7:
    uVar19 = 0;
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
        (iVar9 = **(int **)(param_1 + 2), 0x303 < iVar9)) && (iVar9 != 0x10000)) {
      uVar16 = *puVar18;
      if (0x4100 < uVar16) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0x176);
        uVar15 = 0x16;
        uVar11 = 0x96;
        goto LAB_14f692729;
      }
    }
    else {
      uVar12 = 0x4140;
      uVar16 = *puVar18;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        uVar12 = 0x4540;
      }
      if (uVar12 < uVar16) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0x187);
        uVar15 = 0x16;
        uVar11 = 0x96;
        goto LAB_14f692729;
      }
    }
    if ((uint)*puVar21 == 2) {
      uVar16 = uVar16 - 3;
    }
    if (uVar16 != 0) {
      local_110 = local_e0;
      local_118 = (char *)((ulonglong)local_118 & 0xffffffff00000000);
      uVar11 = ssl3_read_n(param_1,uVar16,uVar16);
      if ((int)uVar11 < 1) {
        return uVar11;
      }
    }
    param_1[0x20f] = 0xf0;
    if ((uint)*puVar21 == 2) {
      uVar12 = *(longlong *)(param_1 + 0x59e) + 2;
    }
    else {
      uVar12 = *(longlong *)(param_1 + 0x59e) + 5;
    }
    puVar18[4] = uVar12;
    uVar16 = uVar23 + 1;
    puVar18[3] = uVar12;
    puVar18[1] = *puVar18;
    *(uint *)(puVar18 + 6) = 0;
    param_1[0x5a0] = 0;
    param_1[0x5a1] = 0;
    param_1[0x5b6] = 0;
    if (((uVar20 <= uVar16) || (*(uint *)((longlong)puVar18 + -4) != 0x17)) ||
       (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0 ||
        (*(longlong *)(param_1 + 0x10e) == 0)))) break;
    uVar11 = EVP_CIPHER_CTX_cipher();
    uVar8 = EVP_CIPHER_flags(uVar11);
    if (((uVar8 >> 0x17 & 1) == 0) ||
       (iVar9 = FUN_14f692770(param_1), puVar21 = puVar18 + 9, iVar9 == 0)) break;
  } while( true );
  if ((uVar16 == 1) &&
     ((*(uint *)((longlong)puVar18 + -4) == 0x14 &&
      ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
          (iVar9 = **(int **)(param_1 + 2), 0x303 < iVar9)) && (iVar9 != 0x10000)) ||
        (param_1[0x136] != 0)) &&
       ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0 ||
        (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)))))))) {
    if ((*puVar18 == 1) && (*(char *)puVar18[3] == '\x01')) {
      *(uint *)((longlong)puVar18 + -4) = 0x16;
      *(longlong *)(param_1 + 0x5a8) = *(longlong *)(param_1 + 0x5a8) + 1;
      if (*(ulonglong *)(param_1 + 0x5a8) < 0x21) {
        *(uint *)(puVar18 + 6) = 1;
        param_1[0x210] = 1;
        param_1[0x211] = 0;
        return 1;
      }
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x1e5);
      uVar15 = 10;
      uVar11 = 0x106;
    }
    else {
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x1d9);
      uVar15 = 0x2f;
      uVar11 = 0x104;
    }
    goto LAB_14f692729;
  }
  if (((**(uint **)(param_1 + 0x2a) & 0x100) == 0) || (*(longlong *)(param_1 + 0x114) == 0)) {
LAB_14f69202b:
    puVar21 = local_f8;
    uVar20 = *local_f8;
    iVar9 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))
                      (param_1,param_1 + 0x35e,uVar16,0);
    if (iVar9 == 0) {
      iVar9 = ossl_statem_in_error(param_1);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      if ((uVar16 == 1) && (iVar9 = ossl_statem_skip_early_data(param_1), iVar9 != 0)) {
        iVar9 = early_data_count_ok(param_1,*puVar21,0x68,0);
        if (iVar9 == 0) {
          return 0xffffffff;
        }
        *puVar21 = 0;
        goto LAB_14f6920a5;
      }
      uVar15 = 0x14;
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x233);
      uVar11 = 0x81;
      goto LAB_14f692729;
    }
    puVar18 = puVar21;
    if ((((local_e8 != 0) && (*(longlong *)(param_1 + 0x10e) != 0)) &&
        ((**(uint **)(param_1 + 0x2a) & 0x100) == 0)) &&
       (lVar13 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x114)), lVar13 != 0)) {
      uVar11 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x114));
      iVar10 = EVP_MD_size(uVar11);
      uVar19 = (ulonglong)iVar10;
      if (0x40 < uVar19) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0x24b);
LAB_14f69270e:
        uVar11 = 0x44;
        goto LAB_14f692714;
      }
      uVar12 = 0;
      iVar10 = iVar9;
      if (uVar16 != 0) {
        do {
          if (puVar21[1] < uVar19) {
LAB_14f6922eb:
            uVar15 = 0x32;
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x25c);
            uVar11 = 0xa0;
            goto LAB_14f692729;
          }
          uVar11 = EVP_CIPHER_CTX_cipher(*(undefined8 *)(param_1 + 0x10e));
          uVar8 = EVP_CIPHER_flags(uVar11);
          if (((uVar8 & 0xf0007) == 2) && (puVar21[1] < uVar19 + 1)) goto LAB_14f6922eb;
          uVar11 = EVP_CIPHER_CTX_cipher(*(undefined8 *)(param_1 + 0x10e));
          uVar8 = EVP_CIPHER_flags(uVar11);
          if ((uVar8 & 0xf0007) == 2) {
            puVar17 = local_78;
            iVar9 = ssl3_cbc_copy_mac(local_78,puVar21 + -1,uVar19);
            if (iVar9 == 0) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x26a);
              goto LAB_14f69270e;
            }
            *puVar21 = *puVar21 - uVar19;
          }
          else {
            *puVar21 = *puVar21 - uVar19;
            puVar17 = (undefined1 *)(*puVar21 + puVar21[3]);
          }
          iVar9 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                            (param_1,puVar21 + -1,local_b8,0);
          if (((iVar9 == 0) || (puVar17 == (undefined1 *)0x0)) ||
             (iVar9 = CRYPTO_memcmp(local_b8,puVar17,uVar19), iVar9 != 0)) {
            iVar10 = -1;
          }
          iVar9 = -1;
          if (*puVar21 <= uVar19 + 0x4400) {
            iVar9 = iVar10;
          }
          uVar12 = uVar12 + 1;
          puVar21 = puVar21 + 9;
          puVar18 = local_f8;
          iVar10 = iVar9;
        } while (uVar12 < uVar16);
      }
    }
    puVar22 = param_1 + 0x35e;
    if (-1 < iVar9) {
      uVar20 = 0;
      if (uVar16 != 0) {
        do {
          if (*(longlong *)(param_1 + 0x118) != 0) {
            if (0x4400 < *(ulonglong *)(puVar22 + 2)) {
              uVar15 = 0x16;
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x2b0);
              uVar11 = 0x8c;
              goto LAB_14f692729;
            }
            iVar9 = ssl3_do_uncompress(param_1,puVar22);
            if (iVar9 == 0) {
              uVar15 = 0x1e;
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x2b5);
              uVar11 = 0x6b;
              goto LAB_14f692729;
            }
          }
          if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
               (iVar9 = **(int **)(param_1 + 2), 0x303 < iVar9)) && (iVar9 != 0x10000)) &&
             ((*(longlong *)(param_1 + 0x10e) != 0 && (puVar22[1] != 0x15)))) {
            if ((*(longlong *)(puVar22 + 2) == 0) || (puVar22[1] != 0x17)) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x2c2);
              uVar15 = 10;
              uVar11 = 0x1bb;
              goto LAB_14f692729;
            }
            lVar13 = *(longlong *)(puVar22 + 2) + -1;
            if (lVar13 != 0) {
              do {
                if (*(char *)(*(longlong *)(puVar22 + 8) + lVar13) != '\0') break;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            *(longlong *)(puVar22 + 2) = lVar13;
            bVar1 = *(byte *)(*(longlong *)(puVar22 + 8) + lVar13);
            puVar22[1] = (uint)bVar1;
            if (2 < bVar1 - 0x15) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x2d1);
              uVar15 = 10;
              uVar11 = 0x1bb;
              goto LAB_14f692729;
            }
            if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
              local_108 = *(undefined8 *)(param_1 + 0x30);
              local_118 = (char *)0x1;
              local_110 = param_1;
              (**(code **)(param_1 + 0x2e))(0,*param_1,0x101);
            }
          }
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
              (iVar9 = **(int **)(param_1 + 2), 0x303 < iVar9)) &&
             ((iVar9 != 0x10000 && ((puVar22[1] - 0x15 < 2 && (*(longlong *)(puVar22 + 2) == 0))))))
          {
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x2e2);
            uVar15 = 10;
            uVar11 = 0x10f;
            goto LAB_14f692729;
          }
          uVar23 = *(ulonglong *)(puVar22 + 2);
          if (0x4000 < uVar23) {
            uVar15 = 0x16;
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x2e8);
            uVar11 = 0x92;
            goto LAB_14f692729;
          }
          if (((*(longlong *)(param_1 + 0x142) != 0) &&
              (cVar6 = *(char *)(*(longlong *)(param_1 + 0x142) + 0x240), (byte)(cVar6 - 1U) < 4))
             && ((uint)(0x200 << (cVar6 - 1U & 0x1f)) < uVar23)) {
            uVar15 = 0x16;
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x2f0);
            uVar11 = 0x92;
            goto LAB_14f692729;
          }
          puVar22[6] = 0;
          puVar22[7] = 0;
          if (uVar23 == 0) {
            *(longlong *)(param_1 + 0x5a8) = *(longlong *)(param_1 + 0x5a8) + 1;
            if (0x20 < *(ulonglong *)(param_1 + 0x5a8)) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x303);
              uVar15 = 10;
              uVar11 = 0x12a;
              goto LAB_14f692729;
            }
          }
          else {
            param_1[0x5a8] = 0;
            param_1[0x5a9] = 0;
          }
          uVar20 = uVar20 + 1;
          puVar22 = puVar22 + 0x12;
        } while (uVar20 < uVar16);
      }
      if (((param_1[0x21] == 0xb) && (param_1[0x35f] == 0x17)) &&
         (iVar9 = early_data_count_ok(param_1,*puVar18,0,0), iVar9 == 0)) {
        return 0xffffffff;
      }
      *(ulonglong *)(param_1 + 0x210) = uVar16;
      return 1;
    }
    iVar9 = ossl_statem_in_error(param_1);
    if (iVar9 != 0) {
      return 0xffffffff;
    }
    if ((uVar16 == 1) && (iVar9 = ossl_statem_skip_early_data(param_1), iVar9 != 0)) {
      iVar9 = early_data_count_ok(param_1,uVar20,(int)uVar23 + 0x68,0);
      if (iVar9 == 0) {
        return 0xffffffff;
      }
      *puVar18 = 0;
LAB_14f6920a5:
      param_1[0x36c] = 1;
      param_1[0x210] = 1;
      param_1[0x211] = 0;
      RECORD_LAYER_reset_read_sequence(param_1 + 0x20c);
      return 1;
    }
    local_110 = (uint *)CONCAT44(local_110._4_4_,0x2a5);
    uVar15 = 0x14;
    uVar11 = 0x119;
  }
  else {
    uVar11 = EVP_MD_CTX_md();
    uVar8 = EVP_MD_size(uVar11);
    if (uVar8 < 0x41) {
      uVar20 = (ulonglong)(int)uVar8;
      puVar21 = local_f8;
      if (uVar16 != 0) {
        do {
          if (*puVar21 < uVar20) {
            uVar15 = 0x32;
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x201);
            uVar11 = 0xa0;
            goto LAB_14f692729;
          }
          uVar12 = puVar21[3];
          uVar14 = *puVar21 - uVar20;
          *puVar21 = uVar14;
          iVar9 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                            (param_1,puVar21 + -1,local_b8,0);
          if ((iVar9 == 0) || (iVar9 = CRYPTO_memcmp(local_b8,uVar12 + uVar14,uVar20), iVar9 != 0))
          {
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x209);
            uVar15 = 0x14;
            uVar11 = 0x119;
            goto LAB_14f692729;
          }
          uVar19 = uVar19 + 1;
          puVar21 = puVar21 + 9;
        } while (uVar19 < uVar16);
      }
      goto LAB_14f69202b;
    }
    local_110 = (uint *)CONCAT44(local_110._4_4_,0x1f8);
    uVar11 = 6;
LAB_14f692714:
    uVar15 = 0x50;
  }
LAB_14f692729:
  local_118 = "ssl\\record\\ssl3_record.c";
  ossl_statem_fatal(param_1,uVar15,0x8f,uVar11);
  return 0xffffffff;
}

// FUN_14f692770 @ 14f692770

bool FUN_14f692770(longlong param_1)

{
  char *pcVar1;
  
  if (((*(longlong *)(param_1 + 0x850) != 0) && (4 < *(ulonglong *)(param_1 + 0x870))) &&
     (pcVar1 = (char *)(*(longlong *)(param_1 + 0x850) + *(longlong *)(param_1 + 0x868)),
     *pcVar1 == '\x17')) {
    return (ulonglong)CONCAT11(pcVar1[3],pcVar1[4]) + 5 <= *(ulonglong *)(param_1 + 0x870);
  }
  return false;
}

// tls1_cbc_remove_padding @ 14f6927c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint tls1_cbc_remove_padding(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  
  uVar6 = param_4 + 1;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 1) == 0) {
    if (uVar6 <= *(ulonglong *)(param_2 + 8)) goto LAB_14f69281d;
  }
  else if (uVar6 + param_3 <= *(ulonglong *)(param_2 + 8)) {
    *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + param_3;
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + param_3;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) - param_3;
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) - param_3;
LAB_14f69281d:
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x20) + -1 + *(longlong *)(param_2 + 8));
    uVar7 = (ulonglong)bVar1;
    uVar5 = EVP_CIPHER_CTX_cipher(*(undefined8 *)(param_1 + 0x438));
    uVar4 = EVP_CIPHER_flags(uVar5);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (-1 - uVar7);
      return 1;
    }
    uVar6 = uVar7 + uVar6;
    uVar2 = *(ulonglong *)(param_2 + 8);
    uVar8 = 0xffffffffffffffff -
            ((longlong)((uVar2 - uVar6 ^ uVar6 | uVar2 ^ uVar6) ^ uVar2) >> 0x3f);
    uVar6 = 0x100;
    if (uVar2 < 0x100) {
      uVar6 = uVar2;
    }
    if (uVar6 != 0) {
      uVar9 = 0;
      pbVar11 = (byte *)((uVar2 - 1) + *(longlong *)(param_2 + 0x20));
      do {
        uVar10 = uVar9 + 1;
        bVar3 = (byte)(uVar9 >> 0x38);
        uVar8 = uVar8 & ~(ulonglong)
                         (byte)(0xffU - ((char)((byte)(uVar7 - uVar9 >> 0x38) ^ bVar3 | bVar3) >> 7)
                               & (bVar1 ^ *pbVar11));
        uVar9 = uVar10;
        pbVar11 = pbVar11 + -1;
      } while (uVar10 < uVar6);
    }
    uVar6 = (~uVar8 & 0xff) - 1 & ~(~uVar8 & 0xff);
    *(ulonglong *)(param_2 + 8) = uVar2 - (uVar7 + 1 & (longlong)uVar6 >> 0x3f);
    uVar4 = (uint)((longlong)uVar6 >> 0x3f);
    return ~uVar4 | uVar4 & 1;
  }
  return 0;
}

// tls1_enc @ 14f692950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint tls1_enc(undefined4 *param_1,longlong param_2,ulonglong param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_458 [32];
  char *local_438;
  undefined4 local_430;
  longlong local_428;
  ulonglong local_420;
  int local_418;
  ulonglong local_410;
  ulonglong local_408;
  ulonglong local_3f8 [32];
  undefined8 local_2f8 [32];
  undefined1 local_1f8;
  undefined1 uStack_1f7;
  undefined4 uStack_1f6;
  undefined2 uStack_1f2;
  undefined1 local_1df [407];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_458;
  uVar17 = 0;
  local_418 = 0;
  local_408 = 0;
  local_428 = param_2;
  if (param_3 == 0) {
    local_430 = 0x3b6;
    local_438 = "ssl\\record\\ssl3_record.c";
    ossl_statem_fatal(param_1,0x50,0x191,0x44);
    return 0;
  }
  if (param_4 == 0) {
    lVar5 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x114));
    if (lVar5 != 0) {
      uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x114));
      iVar2 = EVP_MD_size(uVar6);
      if (iVar2 < 0) {
        local_430 = 0x3e6;
        goto LAB_14f692f8d;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x10e);
    if (lVar5 == 0) {
      local_420 = 0;
      uVar13 = 0;
    }
    else {
      local_420 = EVP_CIPHER_CTX_cipher(lVar5);
      uVar13 = local_420;
    }
LAB_14f692ac2:
    if (((*(longlong *)(param_1 + 0x142) == 0) || (lVar5 == 0)) || (uVar13 == 0)) {
      if (param_3 != 0) {
        puVar10 = (undefined8 *)(param_2 + 0x20);
        do {
          memmove((void *)*puVar10,(void *)puVar10[1],puVar10[-3]);
          puVar10[1] = *puVar10;
          puVar10 = puVar10 + 9;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      return 1;
    }
    uVar6 = EVP_CIPHER_CTX_cipher(lVar5);
    iVar2 = EVP_CIPHER_block_size(uVar6);
    local_410 = (ulonglong)iVar2;
    if (1 < param_3) {
      uVar6 = EVP_CIPHER_CTX_cipher(lVar5);
      uVar3 = EVP_CIPHER_flags(uVar6);
      if ((uVar3 >> 0x17 & 1) == 0) {
        local_430 = 0x402;
        uVar6 = 0x196;
        goto LAB_14f692f93;
      }
    }
    if (param_3 != 0) {
      puVar14 = local_1df;
      puVar12 = (ulonglong *)(local_428 + 8);
      uVar13 = uVar17;
      do {
        local_3f8[uVar13] = *puVar12;
        uVar6 = EVP_CIPHER_CTX_cipher(lVar5);
        uVar3 = EVP_CIPHER_flags(uVar6);
        if ((uVar3 >> 0x15 & 1) == 0) {
          if (local_410 != 1) {
            if (param_4 == 0) goto LAB_14f692d5a;
            uVar15 = local_3f8[uVar13];
            uVar16 = local_410 - uVar15 % local_410;
            if (0x100 < uVar16) {
              local_430 = 0x43a;
              goto LAB_14f692f8d;
            }
            if (uVar15 < uVar15 + uVar16) {
              do {
                *(char *)(uVar15 + puVar12[4]) = (char)uVar16 + -1;
                uVar15 = uVar15 + 1;
              } while (uVar15 < local_3f8[uVar13] + uVar16);
            }
            local_3f8[uVar13] = local_3f8[uVar13] + uVar16;
            *puVar12 = *puVar12 + uVar16;
          }
LAB_14f692d50:
          if (param_4 == 0) goto LAB_14f692d5a;
        }
        else {
          lVar9 = 0x16c8;
          if (param_4 != 0) {
            lVar9 = 0x16d0;
          }
          puVar10 = (undefined8 *)(lVar9 + (longlong)param_1);
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
            pcVar8 = (char *)((longlong)puVar10 + 7);
            *(undefined8 *)(puVar14 + -9) = *puVar10;
            do {
              *pcVar8 = *pcVar8 + '\x01';
              if (*pcVar8 != '\0') break;
              pcVar8 = pcVar8 + -1;
            } while (-1 < (longlong)pcVar8 - (longlong)puVar10);
          }
          else {
            puVar1 = *(undefined2 **)(param_1 + 0x5b8);
            puVar7 = puVar1 + 1;
            if (param_4 == 0) {
              puVar7 = puVar1;
            }
            local_1f8 = *(undefined1 *)((longlong)puVar7 + 1);
            if (param_4 == 0) {
              uStack_1f7 = (undefined1)*puVar1;
            }
            else {
              uStack_1f7 = (undefined1)puVar1[1];
            }
            uStack_1f6 = *(undefined4 *)((longlong)puVar10 + 2);
            uStack_1f2 = *(undefined2 *)((longlong)puVar10 + 6);
            *(ulonglong *)(puVar14 + -9) =
                 CONCAT26(uStack_1f2,CONCAT42(uStack_1f6,CONCAT11(uStack_1f7,local_1f8)));
          }
          puVar14[-1] = *(undefined1 *)((longlong)puVar12 + -4);
          *puVar14 = (char)((uint)*param_1 >> 8);
          puVar14[1] = *(undefined1 *)param_1;
          puVar14[2] = (char)((uint)(int)*puVar12 >> 8);
          puVar14[3] = (char)*puVar12;
          local_418 = EVP_CIPHER_CTX_ctrl(lVar5,0x16,0xd);
          if (local_418 < 1) {
            local_430 = 0x42a;
            goto LAB_14f692f8d;
          }
          if (param_4 != 0) {
            local_3f8[uVar13] = local_3f8[uVar13] + (longlong)local_418;
            *puVar12 = *puVar12 + (longlong)local_418;
            goto LAB_14f692d50;
          }
LAB_14f692d5a:
          if (local_3f8[uVar13] == 0) {
            return 0;
          }
          if (local_3f8[uVar13] % local_410 != 0) {
            return 0;
          }
        }
        uVar13 = uVar13 + 1;
        puVar14 = puVar14 + 0xd;
        puVar12 = puVar12 + 9;
      } while (uVar13 < param_3);
    }
    lVar9 = local_428;
    if (1 < param_3) {
      if (param_3 != 0) {
        puVar10 = (undefined8 *)(local_428 + 0x20);
        uVar13 = uVar17;
        do {
          uVar6 = *puVar10;
          puVar10 = puVar10 + 9;
          local_2f8[uVar13] = uVar6;
          uVar13 = uVar13 + 1;
        } while (uVar13 < param_3);
      }
      iVar2 = EVP_CIPHER_CTX_ctrl(lVar5,0x22,param_3 & 0xffffffff,local_2f8);
      if (iVar2 < 1) {
        local_430 = 0x454;
        uVar6 = 0x196;
        goto LAB_14f692f93;
      }
      if (param_3 != 0) {
        puVar10 = (undefined8 *)(lVar9 + 0x28);
        uVar13 = uVar17;
        do {
          uVar6 = *puVar10;
          puVar10 = puVar10 + 9;
          local_2f8[uVar13] = uVar6;
          uVar13 = uVar13 + 1;
        } while (uVar13 < param_3);
      }
      iVar2 = EVP_CIPHER_CTX_ctrl(lVar5,0x23,param_3 & 0xffffffff,local_2f8);
      if ((iVar2 < 1) ||
         (iVar2 = EVP_CIPHER_CTX_ctrl(lVar5,0x24,param_3 & 0xffffffff,local_3f8), iVar2 < 1)) {
        local_430 = 0x460;
        uVar6 = 0x196;
        goto LAB_14f692f93;
      }
    }
    lVar9 = local_428;
    plVar11 = (longlong *)(local_428 + 0x28);
    iVar2 = EVP_Cipher(lVar5,*(undefined8 *)(local_428 + 0x20),*(undefined8 *)(local_428 + 0x28),
                       (undefined4)local_3f8[0]);
    uVar6 = EVP_CIPHER_CTX_cipher(lVar5);
    uVar3 = EVP_CIPHER_flags(uVar6);
    uVar13 = local_420;
    if ((uVar3 >> 0x14 & 1) == 0) {
      bVar18 = iVar2 == 0;
    }
    else {
      bVar18 = iVar2 < 0;
    }
    if (bVar18) {
      return 0xffffffff;
    }
    if (param_4 == 0) {
      uVar3 = EVP_CIPHER_flags(local_420);
      uVar15 = param_3;
      if ((uVar3 & 0xf0007) == 6) {
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          plVar11[-1] = plVar11[-1] + 8;
          *plVar11 = *plVar11 + 8;
          plVar11[-4] = plVar11[-4] + -8;
          plVar11 = plVar11 + 9;
        }
      }
      else {
        uVar3 = EVP_CIPHER_flags(uVar13);
        uVar13 = param_3;
        if ((uVar3 & 0xf0007) == 7) {
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            plVar11[-1] = plVar11[-1] + 8;
            *plVar11 = *plVar11 + 8;
            plVar11[-4] = plVar11[-4] + -8;
            plVar11 = plVar11 + 9;
          }
        }
      }
    }
    uVar3 = 1;
    uVar13 = uVar17;
    if (((**(uint **)(param_1 + 0x2a) & 0x100) != 0) ||
       (lVar5 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x114)), lVar5 == 0)) {
LAB_14f692fc7:
      if (((local_410 != 1) && (param_4 == 0)) && (lVar5 = lVar9, param_3 != 0)) {
        do {
          uVar4 = tls1_cbc_remove_padding(param_1,lVar5,local_410,uVar13);
          if (uVar4 == 0) {
            return 0;
          }
          uVar17 = uVar17 + 1;
          uVar4 = (int)((uVar4 ^ 1) - 1 & ~(uVar4 ^ 1)) >> 0x1f;
          local_420 = CONCAT44(local_420._4_4_,uVar4);
          local_428 = CONCAT44(local_428._4_4_,~uVar4);
          uVar3 = ~uVar4 | uVar4 & uVar3;
          uVar13 = local_408;
          lVar5 = lVar5 + 0x48;
        } while (uVar17 < param_3);
      }
      if (local_418 == 0) {
        return uVar3;
      }
      if (param_4 != 0) {
        return uVar3;
      }
      if (param_3 != 0) {
        plVar11 = (longlong *)(lVar9 + 8);
        do {
          *plVar11 = *plVar11 - (longlong)local_418;
          plVar11 = plVar11 + 9;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return uVar3;
      }
      return uVar3;
    }
    uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x114));
    iVar2 = EVP_MD_size(uVar6);
    if (-1 < iVar2) {
      local_408 = (ulonglong)iVar2;
      uVar13 = local_408;
      goto LAB_14f692fc7;
    }
    local_430 = 0x483;
  }
  else {
    lVar5 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x120));
    if (lVar5 == 0) {
LAB_14f692a20:
      lVar5 = *(longlong *)(param_1 + 0x11a);
      if (lVar5 == 0) {
        local_420 = 0;
        uVar13 = uVar17;
      }
      else {
        uVar13 = EVP_CIPHER_CTX_cipher(lVar5);
        local_420 = uVar13;
        if (((((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) != 0) &&
             (uVar3 = EVP_CIPHER_flags(uVar13), (uVar3 & 0xf0007) == 2)) &&
            (iVar2 = EVP_CIPHER_iv_length(uVar13), 1 < iVar2)) &&
           (param_2 = local_428, param_3 != 0)) {
          plVar11 = (longlong *)(local_428 + 0x28);
          uVar15 = uVar17;
          do {
            if (plVar11[-1] != *plVar11) {
              local_430 = 0x3d7;
              goto LAB_14f692f8d;
            }
            iVar2 = RAND_bytes();
            if (iVar2 < 1) {
              local_430 = 0x3db;
              goto LAB_14f692f8d;
            }
            uVar15 = uVar15 + 1;
            plVar11 = plVar11 + 9;
            uVar13 = local_420;
            param_2 = local_428;
          } while (uVar15 < param_3);
        }
      }
      goto LAB_14f692ac2;
    }
    uVar6 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x120));
    iVar2 = EVP_MD_size(uVar6);
    if (-1 < iVar2) goto LAB_14f692a20;
    local_430 = 0x3bf;
  }
LAB_14f692f8d:
  uVar6 = 0x44;
LAB_14f692f93:
  local_438 = "ssl\\record\\ssl3_record.c";
  ossl_statem_fatal(param_1,0x50,0x191,uVar6);
  return 0xffffffff;
}

// tls1_mac @ 14f6930e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls1_mac(undefined4 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_50;
  undefined1 uStack_4f;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_4 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x114);
    uVar11 = param_1[0x4c] & 1;
    lVar5 = 0x16c8;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x120);
    uVar11 = param_1[0x4c] & 2;
    lVar5 = 0x16d0;
  }
  puVar1 = (undefined8 *)((longlong)param_1 + lVar5);
  uVar6 = EVP_MD_CTX_md(lVar9);
  iVar4 = EVP_MD_size(uVar6);
  if (iVar4 < 0) {
    return 0;
  }
  local_68 = (longlong)iVar4;
  lVar5 = lVar9;
  lVar10 = 0;
  if ((uVar11 == 0) &&
     ((lVar5 = EVP_MD_CTX_new(), lVar10 = lVar5, lVar5 == 0 ||
      (iVar4 = EVP_MD_CTX_copy(lVar5,lVar9), iVar4 == 0)))) goto LAB_14f6932c7;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    local_60 = *puVar1;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x5b8);
    puVar7 = puVar2 + 1;
    if (param_4 == 0) {
      puVar7 = puVar2;
    }
    local_50 = *(undefined1 *)((longlong)puVar7 + 1);
    if (param_4 == 0) {
      uStack_4f = (undefined1)*puVar2;
    }
    else {
      uStack_4f = (undefined1)puVar2[1];
    }
    uStack_4e = *(undefined4 *)((longlong)puVar1 + 2);
    uStack_4a = *(undefined2 *)((longlong)puVar1 + 6);
    local_60 = CONCAT26(uStack_4a,CONCAT42(uStack_4e,CONCAT11(uStack_4f,local_50)));
  }
  local_58 = *(undefined1 *)(param_2 + 4);
  local_57 = (undefined1)((uint)*param_1 >> 8);
  local_56 = *(undefined1 *)param_1;
  local_55 = (undefined1)((uint)*(undefined4 *)(param_2 + 8) >> 8);
  local_54 = *(undefined1 *)(param_2 + 8);
  if ((param_4 == 0) && ((**(uint **)(param_1 + 0x2a) & 0x100) == 0)) {
    uVar6 = EVP_CIPHER_CTX_cipher(*(undefined8 *)(param_1 + 0x10e));
    uVar11 = EVP_CIPHER_flags(uVar6);
    if (((uVar11 & 0xf0007) != 2) ||
       (cVar3 = ssl3_cbc_record_digest_supported(lVar5), cVar3 == '\0')) goto LAB_14f6932f9;
    local_90 = local_68 + *(longlong *)(param_2 + 8);
    local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 8);
    local_80 = *(longlong *)(param_1 + 0x2a) + 0x10;
    local_88 = *(undefined8 *)(param_2 + 0x10);
    local_98 = *(undefined8 *)(param_2 + 0x28);
    local_70 = (char)param_4;
    iVar4 = ssl3_cbc_digest_record(lVar5,param_3,&local_68,&local_60);
  }
  else {
LAB_14f6932f9:
    iVar4 = EVP_DigestUpdate(lVar5,&local_60,0xd);
    if ((iVar4 < 1) ||
       (iVar4 = EVP_DigestUpdate(lVar5,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 8))
       , iVar4 < 1)) goto LAB_14f6932c7;
    iVar4 = EVP_DigestSignFinal(lVar5,param_3,&local_68);
  }
  if (0 < iVar4) {
    EVP_MD_CTX_free(lVar10);
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
      pcVar8 = (char *)((longlong)puVar1 + 7);
      do {
        *pcVar8 = *pcVar8 + '\x01';
        if (*pcVar8 != '\0') {
          return 1;
        }
        pcVar8 = pcVar8 + -1;
      } while (-1 < (longlong)pcVar8 - (longlong)puVar1);
    }
    return 1;
  }
LAB_14f6932c7:
  EVP_MD_CTX_free(lVar10);
  return 0;
}

