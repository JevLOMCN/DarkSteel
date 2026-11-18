// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 24

// FUN_14f67fc00 @ 14f67fc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67fc00(undefined8 param_1)

{
  dtls1_do_write(param_1,0x16);
  return;
}

// DTLS_get_data_mtu @ 14f67fc20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DTLS_get_data_mtu(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong local_res20;
  
  lVar2 = SSL_get_current_cipher();
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130);
  if (lVar2 != 0) {
    iVar1 = ssl_cipher_get_overhead(lVar2,&local_res10,&local_res8,&local_res20,&local_res18);
    if (iVar1 != 0) {
      if ((**(uint **)(param_1 + 0xa8) & 0x100) == 0) {
        local_res8 = local_res8 + local_res10;
      }
      else {
        local_res18 = local_res18 + local_res10;
      }
      if (local_res18 + 0xdU < uVar3) {
        uVar3 = uVar3 + (-0xd - local_res18);
        if (local_res20 != 0) {
          uVar3 = uVar3 - uVar3 % local_res20;
        }
        if (local_res8 < uVar3) {
          return uVar3 - local_res8;
        }
      }
    }
  }
  return 0;
}

// DTLSv1_listen @ 14f67fd10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 DTLSv1_listen(uint *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  char *pcVar15;
  char *pcVar16;
  byte *pbVar17;
  undefined8 uVar18;
  char *pcVar19;
  bool bVar20;
  undefined1 auStack_238 [32];
  longlong local_218;
  uint *local_210;
  undefined8 local_208;
  byte *local_1f8;
  longlong lStack_1f0;
  uint local_1e8 [4];
  char *local_1d8;
  ulonglong uStack_1d0;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  int local_198 [2];
  undefined1 local_190 [48];
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_158 = param_2;
  if (*(longlong *)(param_1 + 0xc) == 0) {
    SSL_set_accept_state();
  }
  iVar5 = SSL_clear(param_1);
  if (iVar5 == 0) {
    return 0xffffffff;
  }
  ERR_clear_error();
  lVar7 = SSL_get_rbio(param_1);
  local_1b8 = lVar7;
  local_1a0 = SSL_get_wbio(param_1);
  if ((lVar7 == 0) || (local_1a0 == 0)) {
    local_218 = CONCAT44(local_218._4_4_,0x1da);
    ERR_put_error(0x14,0x15e,0x80,"ssl\\d1_lib.c");
  }
  else {
    if ((*param_1 & 0xff00) != 0xfe00) {
      local_218 = CONCAT44(local_218._4_4_,0x1e6);
      ERR_put_error(0x14,0x15e,0x103,"ssl\\d1_lib.c");
      return 0xffffffff;
    }
    iVar5 = ssl3_setup_buffers(param_1);
    if (iVar5 != 0) {
      local_160 = *(longlong *)(param_1 + 0x21e);
      local_1b0 = 7 - (ulonglong)((int)*(longlong *)(param_1 + 0x214) - 4U & 7);
      pcVar19 = (char *)(*(longlong *)(param_1 + 0x214) + local_1b0);
      SetLastError(0);
      while (iVar5 = BIO_read(lVar7,pcVar19,0x400d), 0 < iVar5) {
        uVar14 = (ulonglong)iVar5;
        if (0x7fffffffffffffff < uVar14) {
          local_218 = CONCAT44(local_218._4_4_,0x20d);
          uVar18 = 0x44;
LAB_14f68058e:
          ERR_put_error(0x14,0x15e,uVar18,"ssl\\d1_lib.c");
          return 0xffffffff;
        }
        local_1d8 = pcVar19;
        uStack_1d0 = uVar14;
        if (iVar5 < 0xd) {
          local_218 = CONCAT44(local_218._4_4_,0x21c);
          uVar18 = 0x12a;
          goto LAB_14f680514;
        }
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          local_208 = *(undefined8 *)(param_1 + 0x30);
          local_218 = 0xd;
          local_210 = param_1;
          (**(code **)(param_1 + 0x2e))(0,0,0x100,pcVar19);
        }
        if (uVar14 == 0) {
LAB_14f680777:
          local_218 = CONCAT44(local_218._4_4_,0x227);
LAB_14f680703:
          uVar18 = 0x9f;
LAB_14f680514:
          ERR_put_error(0x14,0x15e,uVar18,"ssl\\d1_lib.c");
          goto LAB_14f680519;
        }
        if (uVar14 == 1) goto LAB_14f680777;
        if (*pcVar19 != '\x16') {
          local_218 = CONCAT44(local_218._4_4_,0x22c);
LAB_14f68075d:
          uVar18 = 0xf4;
          goto LAB_14f680514;
        }
        if (pcVar19[1] != -2) {
          local_218 = CONCAT44(local_218._4_4_,0x235);
          uVar18 = 0x74;
          goto LAB_14f680514;
        }
        if ((uVar14 == 2) || (uVar14 - 3 < 8)) {
LAB_14f680729:
          local_218 = CONCAT44(local_218._4_4_,0x23d);
          goto LAB_14f680703;
        }
        local_150 = *(undefined8 *)(pcVar19 + 3);
        uStack_1d0 = uVar14 - 0xb;
        local_1d8 = pcVar19 + 0xb;
        if (uStack_1d0 < 2) goto LAB_14f680729;
        pcVar1 = pcVar19 + 0xd;
        uVar3 = CONCAT11(*local_1d8,pcVar19[0xc]);
        uVar8 = (ulonglong)(uint)uVar3;
        if (uVar14 - 0xd < uVar8) goto LAB_14f680729;
        uStack_1d0 = (uVar14 - 0xd) - uVar8;
        local_1d8 = pcVar1 + uVar8;
        if (((char)local_150 != '\0') ||
           (local_150._1_1_ = (char)((ulonglong)local_150 >> 8), local_150._1_1_ != '\0')) {
          local_218 = CONCAT44(local_218._4_4_,0x248);
          goto LAB_14f68075d;
        }
        if (uVar3 == 0) {
LAB_14f6806fb:
          local_218 = CONCAT44(local_218._4_4_,599);
          goto LAB_14f680703;
        }
        pcVar15 = pcVar19 + 0xe;
        uVar14 = uVar8 - 1;
        bVar20 = uVar14 < 3;
        if (!bVar20) {
          cVar10 = *pcVar15;
          pcVar15 = pcVar19 + 0x11;
          local_1c8 = (uint)CONCAT21(CONCAT11(cVar10,pcVar19[0xf]),pcVar19[0x10]);
          uVar14 = uVar8 - 4;
        }
        uVar8 = (ulonglong)local_1c8;
        if ((bVar20) || (local_1a8 = uVar8, uVar14 < 2)) goto LAB_14f6806fb;
        if (uVar14 - 2 < 3) goto LAB_14f6806fb;
        pcVar16 = pcVar15 + 5;
        local_1c4 = (uint)CONCAT21(CONCAT11(pcVar15[2],pcVar15[3]),pcVar15[4]);
        uVar12 = uVar14 - 5;
        bVar20 = uVar12 < 3;
        if (!bVar20) {
          cVar10 = *pcVar16;
          pcVar16 = pcVar15 + 8;
          local_1c0 = (uint)CONCAT21(CONCAT11(cVar10,pcVar15[6]),pcVar15[7]);
          uVar12 = uVar14 - 8;
        }
        uVar14 = (ulonglong)local_1c0;
        if ((((bVar20) || (uVar12 < uVar14)) || (0x7fffffffffffffff < uVar14)) || (uVar12 != uVar14)
           ) goto LAB_14f6806fb;
        if (*pcVar1 != '\x01') {
          local_218 = CONCAT44(local_218._4_4_,0x25c);
          goto LAB_14f68075d;
        }
        if (2 < CONCAT11(*pcVar15,pcVar15[1])) {
          local_218 = CONCAT44(local_218._4_4_,0x262);
          uVar18 = 0x192;
          goto LAB_14f680514;
        }
        if ((local_1c4 != 0) || (uVar8 < uVar14)) {
          local_218 = CONCAT44(local_218._4_4_,0x26f);
          uVar18 = 0x191;
          goto LAB_14f680514;
        }
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          local_208 = *(undefined8 *)(param_1 + 0x30);
          local_218 = uVar14 + 0xc;
          local_210 = param_1;
          (**(code **)(param_1 + 0x2e))(0,*param_1,0x16,pcVar1);
        }
        if (uVar14 < 2) {
          local_218 = CONCAT44(local_218._4_4_,0x279);
          goto LAB_14f680703;
        }
        uVar11 = (uint)CONCAT11(*pcVar16,pcVar16[1]);
        uVar13 = **(uint **)(param_1 + 2);
        uVar6 = uVar13;
        if (uVar13 == 0x100) {
          uVar6 = 0xff00;
        }
        if (uVar11 == 0x100) {
          uVar11 = 0xff00;
        }
        if ((uVar6 < uVar11) && (uVar13 != 0x1ffff)) {
          local_218 = CONCAT44(local_218._4_4_,0x282);
          uVar18 = 0x10b;
          goto LAB_14f680514;
        }
        if (uVar14 - 2 < 0x20) {
LAB_14f680699:
          local_218 = CONCAT44(local_218._4_4_,0x28d);
          goto LAB_14f680703;
        }
        local_1f8 = (byte *)(pcVar16 + 0x22);
        lStack_1f0 = uVar14 - 0x22;
        if (lStack_1f0 == 0) goto LAB_14f680699;
        uVar8 = (ulonglong)*local_1f8;
        if (uVar14 - 0x23 < uVar8) goto LAB_14f680699;
        local_1f8 = (byte *)(pcVar16 + uVar8 + 0x23);
        lStack_1f0 = (uVar14 - 0x23) - uVar8;
        if (lStack_1f0 == 0) goto LAB_14f680699;
        bVar2 = *local_1f8;
        uVar14 = (ulonglong)bVar2;
        pbVar17 = local_1f8 + 1;
        if (lStack_1f0 - 1U < uVar14) goto LAB_14f680699;
        lStack_1f0 = (lStack_1f0 - 1U) - uVar14;
        local_1f8 = pbVar17 + uVar14;
        if (bVar2 == 0) {
          cVar10 = '\x01';
        }
        else {
          if (*(code **)(*(longlong *)(param_1 + 0x166) + 200) == (code *)0x0) {
            local_218 = CONCAT44(local_218._4_4_,0x29c);
            uVar18 = 0x193;
            goto LAB_14f68058e;
          }
          iVar5 = (**(code **)(*(longlong *)(param_1 + 0x166) + 200))(param_1,pbVar17,bVar2);
          cVar10 = (iVar5 != 0) + '\x01';
        }
        if (cVar10 == '\x01') {
          if (((*(code **)(*(longlong *)(param_1 + 0x166) + 0xc0) == (code *)0x0) ||
              (iVar5 = (**(code **)(*(longlong *)(param_1 + 0x166) + 0xc0))
                                 (param_1,local_148,local_1e8), iVar5 == 0)) ||
             (0xff < local_1e8[0])) {
            local_218 = CONCAT44(local_218._4_4_,700);
            uVar18 = 400;
            goto LAB_14f68058e;
          }
          uVar13 = 0xfeff;
          if (**(int **)(param_1 + 2) != 0x1ffff) {
            uVar13 = *param_1;
          }
          iVar5 = ssl_get_max_send_fragment(param_1);
          lVar4 = local_160;
          iVar5 = WPACKET_init_static_len(local_190,local_160,iVar5 + 0xd,0);
          if (((((iVar5 == 0) || (iVar5 = WPACKET_put_bytes__(local_190,0x16,1), iVar5 == 0)) ||
               ((iVar5 = WPACKET_put_bytes__(local_190,uVar13,2), iVar5 == 0 ||
                ((iVar5 = WPACKET_memcpy(local_190,&local_150,8), iVar5 == 0 ||
                 (iVar5 = WPACKET_start_sub_packet_len__(local_190,2), iVar5 == 0)))))) ||
              (iVar5 = WPACKET_put_bytes__(local_190,3,1), iVar5 == 0)) ||
             (((((iVar5 = WPACKET_put_bytes__(local_190,0,3), iVar5 == 0 ||
                 (iVar5 = WPACKET_put_bytes__(local_190,0,2), iVar5 == 0)) ||
                (iVar5 = WPACKET_put_bytes__(local_190,0,3), iVar5 == 0)) ||
               ((iVar5 = WPACKET_start_sub_packet_len__(local_190,3), iVar5 == 0 ||
                (iVar5 = dtls_raw_hello_verify_request(local_190,local_148,local_1e8[0]), iVar5 == 0
                )))) || (((iVar5 = WPACKET_close(local_190), iVar5 == 0 ||
                          ((iVar5 = WPACKET_close(local_190), iVar5 == 0 ||
                           (iVar5 = WPACKET_get_total_written(local_190,local_198), iVar5 == 0))))
                         || (iVar5 = WPACKET_finish(local_190), iVar5 == 0)))))) {
            local_218 = CONCAT44(local_218._4_4_,0x2fb);
            ERR_put_error(0x14,0x15e,0x44,"ssl\\d1_lib.c");
            WPACKET_cleanup(local_190);
            return 0xffffffff;
          }
          *(undefined2 *)(lVar4 + 0xe) = *(undefined2 *)(lVar4 + 0x16);
          *(undefined1 *)(lVar4 + 0x10) = *(undefined1 *)(lVar4 + 0x18);
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            local_208 = *(undefined8 *)(param_1 + 0x30);
            local_218 = 0xd;
            local_210 = param_1;
            (**(code **)(param_1 + 0x2e))(1,0,0x100,pcVar19);
          }
          lVar9 = BIO_ADDR_new();
          if (lVar9 == 0) {
            local_218 = CONCAT44(local_218._4_4_,0x311);
            uVar18 = 0x41;
            goto LAB_14f680514;
          }
          iVar5 = BIO_ctrl(local_1b8,0x2e,0,lVar9);
          lVar7 = local_1a0;
          if (0 < iVar5) {
            BIO_ctrl(local_1a0,0x2c,0,lVar9);
          }
          BIO_ADDR_free(lVar9);
          iVar5 = BIO_write(lVar7,lVar4,local_198[0]);
          if ((iVar5 < local_198[0]) || (iVar5 = BIO_ctrl(lVar7,0xb,0), iVar5 < 1)) break;
        }
        else if (cVar10 == '\x02') {
          *(undefined2 *)(*(longlong *)(param_1 + 0x2c) + 0x110) = 1;
          *(undefined2 *)(*(longlong *)(param_1 + 0x2c) + 0x10c) = 1;
          *(undefined2 *)(*(longlong *)(param_1 + 0x2c) + 0x10e) = 1;
          DTLS_RECORD_LAYER_set_write_sequence(param_1 + 0x20c,&local_150);
          SSL_set_options(param_1,0x2000);
          ossl_statem_set_hello_verify_done(param_1);
          uVar18 = local_158;
          iVar5 = BIO_ctrl(local_1b8,0x2e,0,local_158);
          if (iVar5 < 1) {
            BIO_ADDR_clear(uVar18);
          }
          iVar5 = dtls_buffer_listen_record(param_1,(uint)uVar3,&local_150,local_1b0);
          if (iVar5 == 0) {
            return 0xffffffff;
          }
          BIO_ADDR_free(0);
          return 1;
        }
        SetLastError(0);
        lVar7 = local_1b8;
      }
      iVar5 = BIO_test_flags(lVar7,8);
      if (iVar5 == 0) {
        return 0xffffffff;
      }
LAB_14f680519:
      BIO_ADDR_free(0);
      return 0;
    }
  }
  return 0xffffffff;
}

// FUN_14f680840 @ 14f680840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f680840(longlong *param_1,void *param_2,ulonglong param_3)

{
  if (param_3 <= (ulonglong)param_1[1]) {
    memcpy(param_2,(void *)*param_1,param_3);
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}

// FUN_14f680940 @ 14f680940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f680940(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f6809c0 @ 14f6809c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6809c0(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f680bb0 @ 14f680bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f680bb0(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  if ((ulonglong)param_1[1] < param_3) {
    return 0;
  }
  memcpy(param_2,(void *)*param_1,param_3);
  return 1;
}

// dtls1_check_timeout_num @ 14f680cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_check_timeout_num(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f0);
  *piVar1 = *piVar1 + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) {
    uVar5 = 1;
    uVar2 = SSL_get_options();
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar4 = SSL_get_wbio(param_1);
      iVar3 = BIO_ctrl(uVar4,0x2f,0);
      if ((ulonglong)(longlong)iVar3 < *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130)) {
        *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)iVar3;
      }
    }
  }
  if (0xc < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) {
    ossl_statem_fatal(param_1,0xffffffff,0x13e,0x138,"ssl\\d1_lib.c",CONCAT44(uVar5,0x17e));
    return 0xffffffff;
  }
  return 0;
}

// dtls1_clear @ 14f680d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_clear(int *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  DTLS_RECORD_LAYER_clear(param_1 + 0x20c);
  lVar1 = *(longlong *)(param_1 + 0x2c);
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0x208);
    uVar2 = *(undefined8 *)(lVar1 + 0x120);
    uVar3 = *(undefined8 *)(lVar1 + 0x118);
    uVar4 = *(undefined8 *)(lVar1 + 0x130);
    uVar5 = *(undefined8 *)(lVar1 + 0x128);
    dtls1_clear_received_buffer(param_1);
    dtls1_clear_sent_buffer(param_1);
    memset(*(void **)(param_1 + 0x2c),0,0x210);
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x208) = uVar7;
    if (param_1[0xe] != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x100) = 0x100;
    }
    uVar6 = SSL_get_options(param_1);
    if ((uVar6 >> 0xc & 1) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x130) = uVar4;
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x128) = uVar5;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x118) = uVar3;
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x120) = uVar2;
  }
  uVar7 = ssl3_clear(param_1);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  if (**(int **)(param_1 + 2) == 0x1ffff) {
    *param_1 = 0xfefd;
    return 1;
  }
  if ((param_1[0x173] & 0x8000U) != 0) {
    *param_1 = 0x100;
    param_1[0x17b] = 0x100;
    return 1;
  }
  *param_1 = **(int **)(param_1 + 2);
  return 1;
}

// FUN_14f680f00 @ 14f680f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f680f00(undefined8 param_1)

{
  dtls1_clear_received_buffer();
  dtls1_clear_sent_buffer(param_1);
  return;
}

// dtls1_clear_received_buffer @ 14f680f30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_clear_received_buffer(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  while (lVar1 != 0) {
    dtls1_hm_fragment_free(*(undefined8 *)(lVar1 + 8));
    pitem_free(lVar1);
    lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  }
  return;
}

// dtls1_clear_sent_buffer @ 14f680fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_clear_sent_buffer(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  while (lVar1 != 0) {
    dtls1_hm_fragment_free(*(undefined8 *)(lVar1 + 8));
    pitem_free(lVar1);
    lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  }
  return;
}

// dtls1_ctrl @ 14f681010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dtls1_ctrl(longlong param_1,int param_2,uint param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_2 == 0x11) {
    if (0xcf < (int)param_3) {
      *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)(int)param_3;
      return (ulonglong)param_3;
    }
  }
  else {
    if (param_2 == 0x49) {
      lVar2 = dtls1_get_timeout(param_1,param_4);
      return (ulonglong)(lVar2 != 0);
    }
    if (param_2 == 0x4a) {
      uVar1 = dtls1_handle_timeout();
      return uVar1;
    }
    if (param_2 != 0x78) {
      if (param_2 != 0x79) {
        uVar1 = ssl3_ctrl();
        return uVar1;
      }
      return 0x100;
    }
    if (0xff < (int)param_3) {
      *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) = (longlong)(int)param_3;
      return 1;
    }
  }
  return 0;
}

// dtls1_free @ 14f681130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_free(longlong param_1)

{
  DTLS_RECORD_LAYER_free(param_1 + 0x830);
  ssl3_free(param_1);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    dtls1_clear_received_buffer(param_1);
    dtls1_clear_sent_buffer(param_1);
    pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
    pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 0xb0),"ssl\\d1_lib.c",0x97);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}

// dtls1_get_timeout @ 14f6811d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * dtls1_get_timeout(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)(param_1 + 0xb0) + 500) == 0) &&
     (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8) == 0)) {
    param_2 = (int *)0x0;
  }
  else {
    GetSystemTime(&local_20);
    SystemTimeToFileTime(&local_20,&local_28);
    iVar4 = (int)(((longlong)local_28 + 0xfe624e212ac18000U) / 10000000);
    iVar3 = ((int)((longlong)local_28 + 0xfe624e212ac18000U) + iVar4 * -10000000) / 10;
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if ((iVar4 <= *(int *)(lVar2 + 500)) &&
       ((*(int *)(lVar2 + 500) != iVar4 || (iVar3 < *(int *)(lVar2 + 0x1f8))))) {
      *(undefined8 *)param_2 = *(undefined8 *)(lVar2 + 500);
      *param_2 = *param_2 - iVar4;
      piVar1 = param_2 + 1;
      *piVar1 = *piVar1 - iVar3;
      if (*piVar1 < 0) {
        *param_2 = *param_2 + -1;
        param_2[1] = param_2[1] + 1000000;
      }
      if (*param_2 != 0) {
        return param_2;
      }
      if (14999 < param_2[1]) {
        return param_2;
      }
    }
    param_2[0] = 0;
    param_2[1] = 0;
  }
  return param_2;
}

// dtls1_handle_timeout @ 14f6812e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_handle_timeout(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res10;
  int local_res14;
  
  lVar4 = dtls1_get_timeout(param_1,&local_res10);
  if (((lVar4 == 0) || (0 < local_res10)) || (0 < local_res14)) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (*(code **)(lVar4 + 0x208) == (code *)0x0) {
    *(int *)(lVar4 + 0x1fc) = *(int *)(lVar4 + 0x1fc) * 2;
    if (60000000 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1fc)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = 60000000;
    }
  }
  else {
    uVar2 = (**(code **)(lVar4 + 0x208))(param_1,*(undefined4 *)(lVar4 + 0x1fc));
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = uVar2;
  }
  iVar3 = dtls1_check_timeout_num(param_1);
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1e8);
  *piVar1 = *piVar1 + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1e8)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1e8) = 1;
  }
  dtls1_start_timer(param_1);
  uVar5 = dtls1_retransmit_buffered_messages(param_1);
  return uVar5;
}

// dtls1_is_timer_expired @ 14f6813e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dtls1_is_timer_expired(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int local_res10;
  int local_res14;
  
  lVar1 = dtls1_get_timeout(param_1,&local_res10,param_3,param_4,0x14f6813ea);
  if (((lVar1 != 0) && (local_res10 < 1)) && (local_res14 < 1)) {
    return 1;
  }
  return 0;
}

// dtls1_min_mtu @ 14f681440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong dtls1_min_mtu(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f68144a;
  uVar2 = SSL_get_wbio();
  uVar1 = BIO_ctrl(uVar2,0x31,0,0,uVar3);
  return 0x100 - (ulonglong)uVar1;
}

// dtls1_new @ 14f681480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool dtls1_new(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = DTLS_RECORD_LAYER_new(param_1 + 0x830);
  if (iVar1 != 0) {
    iVar1 = ssl3_new(param_1);
    if (iVar1 != 0) {
      lVar2 = CRYPTO_zalloc(0x210,"ssl\\d1_lib.c",0x4d);
      if (lVar2 == 0) {
        ssl3_free(param_1);
        return false;
      }
      uVar3 = pqueue_new();
      *(undefined8 *)(lVar2 + 0x118) = uVar3;
      lVar4 = pqueue_new();
      *(longlong *)(lVar2 + 0x120) = lVar4;
      if (*(int *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(lVar2 + 0x100) = 0x100;
      }
      *(undefined8 *)(lVar2 + 0x128) = 0;
      *(undefined8 *)(lVar2 + 0x130) = 0;
      if ((*(longlong *)(lVar2 + 0x118) != 0) && (lVar4 != 0)) {
        *(longlong *)(param_1 + 0xb0) = lVar2;
        iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
        return iVar1 != 0;
      }
      pqueue_free();
      pqueue_free(*(undefined8 *)(lVar2 + 0x120));
      CRYPTO_free(lVar2,"ssl\\d1_lib.c",0x5f);
      ssl3_free(param_1);
      return false;
    }
  }
  return false;
}

// dtls1_query_mtu @ 14f6815b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_query_mtu(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) != 0) {
    uVar4 = SSL_get_wbio();
    uVar2 = BIO_ctrl(uVar4,0x31,0);
    *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) =
         *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) - (ulonglong)uVar2;
    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x128) = 0;
  }
  uVar4 = SSL_get_wbio(param_1);
  uVar2 = BIO_ctrl(uVar4,0x31,0);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) < 0x100 - (ulonglong)uVar2) {
    uVar2 = SSL_get_options(param_1);
    if ((uVar2 >> 0xc & 1) != 0) {
      return 0;
    }
    uVar4 = SSL_get_wbio(param_1);
    iVar3 = BIO_ctrl(uVar4,0x28,0);
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)iVar3;
    uVar4 = SSL_get_wbio(param_1);
    uVar2 = BIO_ctrl(uVar4,0x31,0);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) < 0x100 - (ulonglong)uVar2) {
      uVar4 = SSL_get_wbio(param_1);
      uVar2 = BIO_ctrl(uVar4,0x31,0);
      *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = 0x100 - (ulonglong)uVar2;
      lVar1 = *(longlong *)(param_1 + 0xb0);
      uVar4 = SSL_get_wbio(param_1);
      BIO_ctrl(uVar4,0x2a,*(undefined4 *)(lVar1 + 0x130));
    }
  }
  return 1;
}

// dtls1_shutdown @ 14f681740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_shutdown(void)

{
  ssl3_shutdown();
  return;
}

// dtls1_start_timer @ 14f681760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_start_timer(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if ((*(int *)(lVar3 + 500) == 0) && (*(int *)(lVar3 + 0x1f8) == 0)) {
    if (*(code **)(lVar3 + 0x208) == (code *)0x0) {
      *(undefined4 *)(lVar3 + 0x1fc) = 1000000;
    }
    else {
      uVar4 = (**(code **)(lVar3 + 0x208))(param_1,0);
      *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = uVar4;
    }
  }
  FUN_14f681900(*(longlong *)(param_1 + 0xb0) + 500);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1fc);
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 500);
  *piVar1 = *piVar1 + uVar2 / 1000000;
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8);
  *piVar1 = *piVar1 + uVar2 % 1000000;
  if (999999 < *(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 500);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8);
    *piVar1 = *piVar1 + -1000000;
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  uVar5 = SSL_get_rbio(param_1);
  BIO_ctrl(uVar5,0x2d,0,lVar3 + 500);
  return;
}

// dtls1_stop_timer @ 14f681870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_stop_timer(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  *(undefined8 *)(lVar1 + 0x1e8) = 0;
  *(undefined4 *)(lVar1 + 0x1f0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 500) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = 1000000;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  uVar2 = SSL_get_rbio(param_1);
  BIO_ctrl(uVar2,0x2d,0,lVar1 + 500);
  dtls1_clear_sent_buffer(param_1);
  return;
}

// FUN_14f681900 @ 14f681900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f681900(int *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  GetSystemTime(&local_20);
  SystemTimeToFileTime(&local_20,&local_28);
  iVar1 = (int)(((longlong)local_28 + 0xfe624e212ac18000U) / 10000000);
  *param_1 = iVar1;
  param_1[1] = ((int)((longlong)local_28 + 0xfe624e212ac18000U) + iVar1 * -10000000) / 10;
  return;
}

