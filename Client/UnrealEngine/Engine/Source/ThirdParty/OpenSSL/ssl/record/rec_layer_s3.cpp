// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 18

// RECORD_LAYER_clear @ 14f667d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RECORD_LAYER_clear(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xf0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0x1cd] = 0;
  param_1[0x1cf] = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  SSL3_BUFFER_clear(param_1 + 4);
  ssl3_release_write_buffer(*param_1);
  param_1[2] = 0;
  SSL3_RECORD_clear(param_1 + 0xa9,0x20);
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  if (param_1[0x1d6] != 0) {
    DTLS_RECORD_LAYER_clear(param_1);
  }
  return;
}

// RECORD_LAYER_get_rrec_length @ 14f667e30

undefined8 RECORD_LAYER_get_rrec_length(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x550);
}

// RECORD_LAYER_init @ 14f667e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RECORD_LAYER_init(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_2 + 0x16d8) = 1;
  SSL3_RECORD_clear(param_1 + 0xa9,0x20);
  return;
}

// RECORD_LAYER_is_sslv2_record @ 14f667e80

bool RECORD_LAYER_is_sslv2_record(longlong param_1)

{
  return *(int *)(param_1 + 0x548) == 2;
}

// RECORD_LAYER_processed_read_pending @ 14f667ea0

bool RECORD_LAYER_processed_read_pending(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x580);
    do {
      if (*piVar2 == 0) break;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x12;
    } while (uVar3 < uVar1);
  }
  return uVar3 < uVar1;
}

// RECORD_LAYER_read_pending @ 14f667ee0

bool RECORD_LAYER_read_pending(longlong param_1)

{
  return *(longlong *)(param_1 + 0x40) != 0;
}

// RECORD_LAYER_release @ 14f667ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RECORD_LAYER_release(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    ssl3_release_read_buffer(*param_1);
  }
  if (param_1[3] != 0) {
    ssl3_release_write_buffer(*param_1);
  }
  SSL3_RECORD_release(param_1 + 0xa9,0x20);
  return;
}

// RECORD_LAYER_reset_read_sequence @ 14f667f40

void RECORD_LAYER_reset_read_sequence(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xe98) = 0;
  return;
}

// RECORD_LAYER_reset_write_sequence @ 14f667f50

void RECORD_LAYER_reset_write_sequence(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xea0) = 0;
  return;
}

// RECORD_LAYER_write_pending @ 14f667f60

undefined8 RECORD_LAYER_write_pending(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(longlong *)(param_1 + 0x40 + *(longlong *)(param_1 + 0x18) * 0x28) != 0)) {
    return 1;
  }
  return 0;
}

// SSL_set_default_read_buffer_len @ 14f668020

void SSL_set_default_read_buffer_len(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x858) = param_2;
  return;
}

// do_ssl3_write @ 14f668030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
do_ssl3_write(int *param_1,int param_2,longlong param_3,longlong *param_4,ulonglong param_5,
             int param_6,ulonglong *param_7)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong *puVar9;
  int *piVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_ff8 [32];
  ulonglong *local_fd8;
  int *local_fd0;
  ulonglong *local_fc8;
  int local_fb8;
  undefined1 local_fb4 [4];
  int local_fb0;
  int local_fac;
  undefined1 *local_fa8;
  ulonglong *local_fa0;
  ulonglong local_f98;
  int local_f90;
  ulonglong local_f88;
  longlong local_f80;
  longlong *local_f78;
  ulonglong local_f70;
  longlong local_f68;
  ulonglong local_f60;
  ulonglong local_f58;
  ulonglong local_f50;
  ulonglong *local_f48;
  ulonglong local_f40;
  undefined1 local_f38 [1536];
  undefined1 local_938 [8];
  ulonglong local_930 [287];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f668047;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_ff8;
  uVar7 = 0;
  local_f48 = param_7;
  local_f50 = 0;
  local_f88 = 0;
  local_fb0 = 0;
  local_f80 = 0;
  uVar6 = uVar7;
  uVar16 = uVar7;
  if (3 < param_5) {
    lVar12 = 0;
    lVar14 = 0;
    lVar13 = lVar12;
    lVar15 = lVar14;
    do {
      lVar12 = param_4[uVar6] + lVar12;
      lVar14 = (param_4 + uVar6)[1] + lVar14;
      lVar1 = uVar6 + 2;
      uVar6 = uVar6 + 4;
      lVar13 = param_4[lVar1] + lVar13;
      lVar15 = (param_4 + lVar1)[1] + lVar15;
    } while (uVar6 < (param_5 & 0xfffffffffffffffc));
    uVar16 = lVar13 + lVar12 + lVar15 + lVar14;
  }
  if (uVar6 < param_5) {
    uVar11 = uVar7;
    if (1 < param_5 - uVar6) {
      do {
        uVar7 = uVar7 + param_4[uVar6];
        uVar11 = uVar11 + param_4[uVar6 + 1];
        uVar6 = uVar6 + 2;
      } while (uVar6 < param_5 - 1);
    }
    if (uVar6 < param_5) {
      uVar16 = uVar16 + param_4[uVar6];
    }
    uVar16 = uVar16 + uVar11 + uVar7;
  }
  local_fb8 = param_2;
  local_f78 = param_4;
  local_f68 = param_3;
  if ((*(longlong *)(param_1 + 0x212) == 0) ||
     (*(longlong *)(param_1 + *(longlong *)(param_1 + 0x212) * 10 + 0x21c) == 0)) {
    if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) &&
       (uVar5 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1), (int)uVar5 < 1)) {
      return uVar5;
    }
    if ((param_5 <= *(ulonglong *)(param_1 + 0x212)) ||
       (iVar2 = ssl3_setup_write_buffer(param_1,param_5,0), iVar2 != 0)) {
      if ((uVar16 == 0) && (param_6 == 0)) {
        return 0;
      }
      if (((*(longlong *)(param_1 + 0x142) == 0) || (*(longlong *)(param_1 + 0x11a) == 0)) ||
         (lVar13 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x120)), lVar13 == 0)) {
        local_fac = 0;
        if (*(longlong *)(param_1 + 0x11a) != 0) goto LAB_14f668257;
        if (param_6 == 0) goto LAB_14f6682df;
LAB_14f668339:
        lVar13 = 7 - (ulonglong)((int)*(undefined8 *)(param_1 + 0x21e) + 1U & 7);
        *(longlong *)(param_1 + 0x224) = lVar13;
        iVar2 = WPACKET_init_static_len
                          (local_f38,*(undefined8 *)(param_1 + 0x21e),
                           *(undefined8 *)(param_1 + 0x222),0);
        if ((iVar2 == 0) || (iVar2 = WPACKET_allocate_bytes(local_f38,lVar13,0), iVar2 == 0)) {
          local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x30f);
LAB_14f668208:
          local_fd8 = (ulonglong *)0x15347ca50;
          ossl_statem_fatal(param_1,0x50,0x68,0x44);
          return 0xffffffff;
        }
LAB_14f668436:
        local_f80 = 1;
LAB_14f66843f:
        if (*(longlong *)(param_1 + 0x11a) != 0) {
          uVar3 = *(uint *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
          if (((uVar3 & 1) != 0) &&
             (((((uVar3 & 8) != 0 || (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) ||
               (iVar2 == 0x10000)) && ((3 < param_1[0x21] - 1U && (param_1[0x136] != 1)))))) {
            uVar5 = EVP_CIPHER_CTX_cipher(*(longlong *)(param_1 + 0x11a));
            uVar3 = EVP_CIPHER_flags(uVar5);
            uVar3 = uVar3 & 0xf0007;
            if (uVar3 == 2) {
              local_fb0 = EVP_CIPHER_CTX_iv_length(*(undefined8 *)(param_1 + 0x11a));
              if (local_fb0 < 2) {
                local_fb0 = 0;
              }
            }
            else if (uVar3 == 6) {
              local_fb0 = 8;
            }
            else if (uVar3 == 7) {
              local_fb0 = 8;
            }
          }
        }
        local_f98 = 0;
        memset(local_938,0,0x900);
        local_f70 = 0;
        if (param_5 != 0) {
          local_fa8 = local_f38;
          puVar9 = local_930;
          do {
            local_f60 = 0;
            iVar2 = *param_1;
            if (*param_1 == 0x304) {
              iVar2 = 0x303;
            }
            local_f90 = local_fb8;
            if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                  (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) ||
                ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
               ((*(longlong *)(param_1 + 0x11a) != 0 &&
                ((param_1[0x1f] != 2 || (local_fb8 != 0x15)))))) {
              local_f90 = 0x17;
            }
            *(int *)((longlong)puVar9 + -4) = local_f90;
            local_fa0 = puVar9;
            iVar4 = SSL_get_state(param_1);
            if ((((iVar4 == 0xc) && (param_1[0x1e0] == 0)) &&
                (uVar3 = SSL_version(param_1), (uVar3 & 0xffffff00) == 0x300)) &&
               ((iVar4 = SSL_version(param_1), 0x301 < iVar4 && (param_1[0x136] == 0)))) {
              iVar2 = 0x301;
            }
            lVar13 = *(longlong *)(param_1 + 0x116);
            *(int *)(puVar9 + -1) = iVar2;
            lVar15 = local_f78[local_f70];
            if (lVar13 != 0) {
              lVar15 = lVar15 + 0x400;
            }
            iVar4 = WPACKET_put_bytes__(local_fa8,local_f90,1);
            puVar8 = local_fa8;
            if ((((iVar4 == 0) || (iVar2 = WPACKET_put_bytes__(local_fa8,iVar2,2), iVar2 == 0)) ||
                ((iVar2 = WPACKET_start_sub_packet_len__(puVar8,2), iVar2 == 0 ||
                 ((0 < local_fb0 &&
                  (iVar2 = WPACKET_allocate_bytes(puVar8,(longlong)local_fb0,0), iVar2 == 0)))))) ||
               ((lVar15 != 0 &&
                (iVar2 = WPACKET_reserve_bytes(puVar8,lVar15,&local_f60), iVar2 == 0)))) {
              local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x377);
              goto LAB_14f668c98;
            }
            puVar9 = local_fa0;
            local_fa0[3] = local_f60;
            uVar6 = local_f78[local_f70];
            uVar16 = local_f68 + local_f98;
            *local_fa0 = uVar6;
            local_f98 = local_f98 + uVar6;
            local_fa0[4] = uVar16;
            if (*(longlong *)(param_1 + 0x116) == 0) {
              iVar2 = WPACKET_memcpy(puVar8,uVar16);
              if (iVar2 == 0) {
                local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x391);
                goto LAB_14f668c98;
              }
              puVar9[4] = puVar9[3];
            }
            else {
              iVar2 = ssl3_do_compress(param_1,local_fa0 + -1);
              if ((iVar2 == 0) || (iVar2 = WPACKET_allocate_bytes(puVar8,*puVar9,0), iVar2 == 0)) {
                local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x38b);
                uVar5 = 0x8d;
                goto LAB_14f668ca1;
              }
            }
            if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                  (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
                ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
               ((*(longlong *)(param_1 + 0x11a) != 0 &&
                ((param_1[0x1f] != 2 || (local_fb8 != 0x15)))))) {
              iVar2 = WPACKET_put_bytes__(puVar8,(longlong)local_fb8,1);
              if (iVar2 == 0) {
                local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x39f);
                uVar5 = 0x44;
                goto LAB_14f668ca1;
              }
              *puVar9 = *puVar9 + 1;
              uVar3 = ssl_get_max_send_fragment(param_1);
              uVar6 = *puVar9;
              puVar8 = local_fa8;
              if (uVar6 < uVar3) {
                uVar16 = uVar3 - uVar6;
                if (*(code **)(param_1 + 0x5c8) == (code *)0x0) {
                  uVar7 = *(ulonglong *)(param_1 + 0x5cc);
                  if (uVar7 != 0) {
                    if ((uVar7 - 1 & uVar7) == 0) {
                      uVar6 = uVar7 - 1 & uVar6;
                    }
                    else {
                      uVar6 = uVar6 % uVar7;
                    }
                    if (uVar6 != 0) {
                      uVar7 = uVar7 - uVar6;
                      goto LAB_14f6687fc;
                    }
                  }
                }
                else {
                  uVar7 = (**(code **)(param_1 + 0x5c8))
                                    (param_1,local_fb8,uVar6,*(undefined8 *)(param_1 + 0x5ca));
LAB_14f6687fc:
                  puVar8 = local_fa8;
                  if (uVar7 != 0) {
                    if (uVar7 <= uVar16) {
                      uVar16 = uVar7;
                    }
                    iVar2 = WPACKET_memset(local_fa8,0,uVar16);
                    if (iVar2 == 0) {
                      local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x3c1);
                      goto LAB_14f668c98;
                    }
                    *puVar9 = *puVar9 + uVar16;
                    puVar8 = local_fa8;
                  }
                }
              }
            }
            if ((((**(uint **)(param_1 + 0x2a) & 0x400) == 0) && (local_fac != 0)) &&
               ((iVar2 = WPACKET_allocate_bytes(puVar8,(longlong)local_fac,&local_f40), iVar2 == 0
                || (iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                                      (param_1,puVar9 + -1,local_f40,1), iVar2 == 0)))) {
              local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x3d5);
              goto LAB_14f668c98;
            }
            iVar2 = WPACKET_reserve_bytes(puVar8,(longlong)(0x50 - local_fac),0);
            if ((iVar2 == 0) || (iVar2 = WPACKET_get_length(puVar8,&local_f58), iVar2 == 0)) {
              local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x3ea);
              goto LAB_14f668c98;
            }
            lVar13 = WPACKET_get_curr(puVar8);
            local_fa8 = puVar8 + 0x30;
            local_f70 = local_f70 + 1;
            puVar9[3] = lVar13 - local_f58;
            puVar9[4] = lVar13 - local_f58;
            *puVar9 = local_f58;
            puVar9 = puVar9 + 9;
            local_fa0 = puVar9;
          } while (local_f70 < param_5);
        }
        if (param_1[0x1f] == 2) {
          iVar2 = tls13_enc();
          if (0 < iVar2) {
LAB_14f6689c0:
            if (param_5 != 0) {
              local_f78 = (longlong *)(param_1 + 0x226);
              puVar8 = local_f38;
              puVar9 = local_930;
              do {
                iVar2 = WPACKET_get_length(puVar8,&local_f40);
                if (iVar2 == 0) {
LAB_14f668c90:
                  local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x41d);
                  goto LAB_14f668c98;
                }
                local_fa0 = (ulonglong *)(longlong)local_fac;
                uVar6 = *puVar9;
                if ((((local_f40 - (longlong)local_fa0) + 0x50 < uVar6) || (uVar6 < local_f40)) ||
                   ((local_f40 < uVar6 &&
                    (iVar2 = WPACKET_allocate_bytes(puVar8,uVar6 - local_f40,0), iVar2 == 0))))
                goto LAB_14f668c90;
                if (((**(uint **)(param_1 + 0x2a) & 0x400) != 0) && (local_fac != 0)) {
                  iVar2 = WPACKET_allocate_bytes(puVar8,local_fa0,&local_f60);
                  if ((iVar2 == 0) ||
                     (iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                                        (param_1,puVar9 + -1,local_f60,1), iVar2 == 0)) {
                    local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x426);
                    goto LAB_14f668c98;
                  }
                  *puVar9 = *puVar9 + (longlong)local_fa0;
                }
                iVar2 = WPACKET_get_length(puVar8,&local_f58);
                if ((iVar2 == 0) || (iVar2 = WPACKET_close(puVar8), iVar2 == 0)) {
                  local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x42f);
                  goto LAB_14f668c98;
                }
                if (*(longlong *)(param_1 + 0x2e) != 0) {
                  lVar13 = WPACKET_get_curr(puVar8);
                  local_fc8 = *(ulonglong **)(param_1 + 0x30);
                  local_fd8 = (ulonglong *)0x5;
                  local_fd0 = param_1;
                  (**(code **)(param_1 + 0x2e))(1,0,0x100,lVar13 + (-5 - local_f58));
                  if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                        && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000))
                      || ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
                     (*(longlong *)(param_1 + 0x11a) != 0)) {
                    local_fb4[0] = (undefined1)local_fb8;
                    local_fc8 = *(ulonglong **)(param_1 + 0x30);
                    local_fd8 = (ulonglong *)0x1;
                    local_fd0 = param_1;
                    (**(code **)(param_1 + 0x2e))(1,*param_1,0x101,local_fb4);
                  }
                }
                iVar2 = WPACKET_finish(puVar8);
                if (iVar2 == 0) {
                  local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x444);
                  goto LAB_14f668c98;
                }
                uVar6 = *puVar9 + 5;
                *(int *)((longlong)puVar9 + -4) = local_fb8;
                *puVar9 = uVar6;
                if (param_6 != 0) {
                  if (local_f50 == 0) {
                    *local_f48 = uVar6;
                    return 1;
                  }
                  local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x458);
                  goto LAB_14f668c98;
                }
                puVar8 = puVar8 + 0x30;
                puVar9 = puVar9 + 9;
                *local_f78 = uVar6 + local_f88;
                local_f78 = local_f78 + 5;
                local_f50 = local_f50 + 1;
              } while (local_f50 < param_5);
            }
            *(longlong *)(param_1 + 0x5b0) = local_f68;
            *(ulonglong *)(param_1 + 0x5aa) = local_f98;
            param_1[0x5ac] = local_fb8;
            *(ulonglong *)(param_1 + 0x5ae) = local_f98;
            uVar16 = local_f98;
            goto LAB_14f668c30;
          }
          iVar2 = ossl_statem_in_error(param_1);
          if (iVar2 == 0) {
            local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x3fe);
LAB_14f668c98:
            uVar5 = 0x44;
LAB_14f668ca1:
            local_fd8 = (ulonglong *)0x15347ca50;
            ossl_statem_fatal(param_1,0x50,0x68,uVar5);
          }
        }
        else {
          iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))
                            (param_1,local_938,param_5,1);
          if (0 < iVar2) goto LAB_14f6689c0;
          iVar2 = ossl_statem_in_error(param_1);
          if (iVar2 == 0) {
            local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x406);
            goto LAB_14f668c98;
          }
        }
      }
      else {
        uVar5 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x120));
        local_fac = EVP_MD_size(uVar5);
        if (local_fac < 0) {
          local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x2d5);
          goto LAB_14f668208;
        }
LAB_14f668257:
        if (param_6 != 0) goto LAB_14f668339;
        if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0xdc) != 0) {
LAB_14f6682df:
          if (local_f88 != 0) {
            iVar2 = WPACKET_init_static_len
                              (local_f38,*(undefined8 *)(param_1 + 0x21e),
                               *(undefined8 *)(param_1 + 0x222),0);
            if ((iVar2 == 0) ||
               (iVar2 = WPACKET_allocate_bytes
                                  (local_f38,local_f88 + *(longlong *)(param_1 + 0x224),0),
               iVar2 == 0)) {
              local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x31b);
              goto LAB_14f668208;
            }
            goto LAB_14f668436;
          }
          local_f98 = 0;
          if (param_5 != 0) {
            puVar8 = local_f38;
            piVar10 = param_1 + 0x21e;
            do {
              local_fa0 = (ulonglong *)(7 - (ulonglong)((int)*(undefined8 *)piVar10 - 4U & 7));
              *(ulonglong **)(piVar10 + 6) = local_fa0;
              iVar2 = WPACKET_init_static_len
                                (puVar8,*(undefined8 *)piVar10,*(undefined8 *)(piVar10 + 4),0);
              if ((iVar2 == 0) || (iVar2 = WPACKET_allocate_bytes(puVar8,local_fa0,0), iVar2 == 0))
              {
                local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x32d);
                goto LAB_14f668c98;
              }
              puVar8 = puVar8 + 0x30;
              local_f80 = local_f80 + 1;
              local_f98 = local_f98 + 1;
              piVar10 = piVar10 + 10;
            } while (local_f98 < param_5);
          }
          goto LAB_14f66843f;
        }
        if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xd8) == 0) || (local_fb8 != 0x17)) {
LAB_14f6682ce:
          *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xdc) = 1;
          goto LAB_14f6682df;
        }
        local_fc8 = &local_f88;
        local_fd0 = (int *)CONCAT44(local_fd0._4_4_,1);
        local_fd8 = (ulonglong *)0x1;
        local_fa0 = (ulonglong *)0x0;
        iVar2 = do_ssl3_write(param_1,0x17,local_f68,&local_fa0);
        if (0 < iVar2) {
          if (0x55 < local_f88) {
            local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x2f7);
            goto LAB_14f668208;
          }
          goto LAB_14f6682ce;
        }
      }
      if (local_f80 != 0) {
        puVar8 = local_f38;
        lVar13 = local_f80;
        do {
          WPACKET_cleanup(puVar8);
          puVar8 = puVar8 + 0x30;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
    uVar5 = 0xffffffff;
  }
  else {
LAB_14f668c30:
    local_fd8 = local_f48;
    uVar5 = ssl3_write_pending(param_1,local_fb8,local_f68,uVar16);
  }
  return uVar5;
}

// ssl3_pending @ 14f668d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_pending(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x83c) == 0xf1) {
    return 0;
  }
  uVar3 = uVar4;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    local_res8 = pqueue_iterator(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x48));
    lVar1 = pqueue_next(&local_res8);
    uVar3 = 0;
    while (lVar1 != 0) {
      uVar3 = uVar3 + *(longlong *)(*(longlong *)(lVar1 + 8) + 0x40);
      lVar1 = pqueue_next(&local_res8);
    }
  }
  if (*(ulonglong *)(param_1 + 0x840) != 0) {
    plVar2 = (longlong *)(param_1 + 0xd80);
    do {
      if (*(int *)((longlong)plVar2 + -4) != 0x17) {
        return uVar3;
      }
      uVar3 = uVar3 + *plVar2;
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 9;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x840));
  }
  return uVar3;
}

// ssl3_read_bytes @ 14f668dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ssl3_read_bytes(int *param_1,int param_2,int *param_3,void *param_4,ulonglong param_5,int param_6,
               ulonglong *param_7)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  char *local_98;
  int *local_90;
  undefined8 local_88;
  void *local_78;
  code *local_70;
  int *local_68;
  ulonglong local_60;
  ulonglong *local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar17 = 0;
  local_58[0] = param_7;
  local_70 = (code *)0x0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
      (iVar4 = **(int **)(param_1 + 2), iVar4 < 0x304)) || (uVar14 = 1, iVar4 == 0x10000)) {
    uVar14 = uVar17;
  }
  local_78 = param_4;
  local_68 = param_3;
  local_60 = uVar14;
  if ((*(longlong *)(param_1 + 0x214) != 0) || (iVar4 = ssl3_setup_read_buffer(param_1), iVar4 != 0)
     ) {
    if (((param_2 == 0) || (param_2 - 0x16U < 2)) && ((param_6 == 0 || (param_2 == 0x17)))) {
      if ((param_2 == 0x16) && (*(longlong *)(param_1 + 0x5a6) != 0)) {
        piVar8 = param_1 + 0x5a4;
        uVar14 = uVar17;
        if (param_5 != 0) {
          lVar16 = (longlong)local_78 - (longlong)piVar8;
          do {
            if (*(longlong *)(param_1 + 0x5a6) == 0) goto LAB_14f668f3d;
            uVar14 = uVar14 + 1;
            *(char *)(lVar16 + (longlong)piVar8) = (char)*piVar8;
            piVar8 = (int *)((longlong)piVar8 + 1);
            *(longlong *)(param_1 + 0x5a6) = *(longlong *)(param_1 + 0x5a6) + -1;
            param_5 = param_5 - 1;
          } while (param_5 != 0);
        }
        if (*(longlong *)(param_1 + 0x5a6) != 0) {
          do {
            iVar4 = *piVar8;
            piVar8 = (int *)((longlong)piVar8 + 1);
            uVar12 = (ulonglong)((int)uVar17 + 1);
            *(char *)(uVar17 + 0x1690 + (longlong)param_1) = (char)iVar4;
            uVar17 = uVar12;
          } while (uVar12 < *(ulonglong *)(param_1 + 0x5a6));
        }
LAB_14f668f3d:
        if (local_68 != (int *)0x0) {
          *local_68 = 0x16;
        }
        *local_58[0] = uVar14;
        return 1;
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
LAB_14f668fb0:
      param_1[10] = 1;
      uVar12 = *(ulonglong *)(param_1 + 0x210);
LAB_14f668fc0:
      if (uVar12 != 0) goto LAB_14f668fe5;
      do {
        uVar5 = ssl3_get_record(param_1);
        if ((int)uVar5 < 1) {
          return uVar5;
        }
        uVar12 = *(ulonglong *)(param_1 + 0x210);
        if (uVar12 == 0) {
          uVar9 = 0x50;
          local_90 = (int *)CONCAT44(local_90._4_4_,0x531);
          uVar15 = 0x44;
          goto LAB_14f6696bf;
        }
LAB_14f668fe5:
        uVar11 = uVar17;
        if (uVar12 != 0) {
          piVar8 = param_1 + 0x36c;
          do {
            if (*piVar8 == 0) break;
            uVar11 = uVar11 + 1;
            piVar8 = piVar8 + 0x12;
          } while (uVar11 < uVar12);
        }
        if (uVar11 == uVar12) goto code_r0x00014f66900a;
      } while (uVar12 == 0);
      piVar8 = param_1 + (uVar11 * 9 + 0x1af) * 2;
      if ((((*(longlong *)(param_1 + 0x5a6) == 0) || (piVar8[1] == 0x16)) ||
          ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0)) ||
         ((iVar4 = **(int **)(param_1 + 2), iVar4 < 0x304 || (iVar4 == 0x10000)))) {
        if ((piVar8[1] != 0x15) && (*(longlong *)(piVar8 + 2) != 0)) {
          param_1[0x5b7] = 0;
        }
        if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xf0) == 0) || (piVar8[1] == 0x16)) {
          if ((param_1[0x11] & 2U) != 0) {
            piVar8[2] = 0;
            piVar8[3] = 0;
            param_1[10] = 1;
            return 0;
          }
          iVar4 = piVar8[1];
          if ((param_2 == iVar4) ||
             ((((iVar4 == 0x14 && (param_2 == 0x16)) && (local_68 != (int *)0x0)) && (uVar14 == 0)))
             ) {
            iVar4 = SSL_in_init(param_1);
            if ((iVar4 == 0) || (param_2 != 0x17)) {
              if ((param_2 == 0x16) &&
                 ((piVar8[1] == 0x14 && (*(longlong *)(param_1 + 0x5a6) != 0)))) {
                local_90 = (int *)CONCAT44(local_90._4_4_,0x57d);
LAB_14f6696b1:
                uVar15 = 0x85;
                goto LAB_14f6696b7;
              }
            }
            else if (*(longlong *)(param_1 + 0x10e) == 0) {
              local_90 = (int *)CONCAT44(local_90._4_4_,0x575);
              uVar15 = 100;
              goto LAB_14f6696b7;
            }
            if (local_68 != (int *)0x0) {
              *local_68 = piVar8[1];
            }
            if (param_5 == 0) {
              if (*(longlong *)(piVar8 + 2) == 0) {
                piVar8[0xe] = 1;
              }
              return 0;
            }
            puVar13 = (ulonglong *)(piVar8 + 2);
            uVar18 = uVar17;
            goto LAB_14f669450;
          }
          if (*piVar8 == 2) {
            uVar9 = 0x50;
            local_90 = (int *)CONCAT44(local_90._4_4_,0x5ca);
            uVar15 = 0x44;
            goto LAB_14f6696bf;
          }
          iVar3 = **(int **)(param_1 + 2);
          if ((iVar3 == 0x10000) && ((param_1[0xe] != 0 || (iVar4 != 0x15)))) {
            uVar15 = 0xf4;
            *param_1 = *piVar8;
            local_90 = (int *)CONCAT44(local_90._4_4_,0x5d8);
          }
          else {
            if (iVar4 != 0x15) {
              if ((param_1[0x11] & 1U) == 0) {
LAB_14f6692bc:
                if (iVar4 == 0x16) {
                  uVar12 = 4 - *(longlong *)(param_1 + 0x5a6);
                  if (*(ulonglong *)(piVar8 + 2) < uVar12) {
                    uVar12 = *(size_t *)(piVar8 + 2);
                  }
                  memcpy((void *)(*(longlong *)(param_1 + 0x5a6) + 0x1690 + (longlong)param_1),
                         (void *)(*(longlong *)(piVar8 + 8) + *(longlong *)(piVar8 + 6)),uVar12);
                  *(ulonglong *)(piVar8 + 6) = *(longlong *)(piVar8 + 6) + uVar12;
                  *(ulonglong *)(piVar8 + 2) = *(longlong *)(piVar8 + 2) - uVar12;
                  *(ulonglong *)(param_1 + 0x5a6) = *(longlong *)(param_1 + 0x5a6) + uVar12;
                  if (*(longlong *)(piVar8 + 2) == 0) {
                    piVar8[0xe] = 1;
                  }
                  if (*(ulonglong *)(param_1 + 0x5a6) < 4) goto LAB_14f668fb0;
                }
                if (piVar8[1] == 0x14) {
                  local_90 = (int *)CONCAT44(local_90._4_4_,0x67e);
                  goto LAB_14f6696b1;
                }
                if ((*(ulonglong *)(param_1 + 0x5a6) < 4) ||
                   (iVar4 = ossl_statem_get_in_handshake(param_1), iVar4 != 0)) {
                  iVar4 = piVar8[1];
                  if (0x13 < iVar4) {
                    if (iVar4 < 0x17) {
                      local_90 = (int *)CONCAT44(local_90._4_4_,0x6c6);
                      uVar15 = 0x44;
                      goto LAB_14f6696b7;
                    }
                    if (iVar4 == 0x17) {
                      iVar4 = ossl_statem_app_data_allowed(param_1);
                      if (iVar4 != 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x110) = 2;
                        return 0xffffffff;
                      }
                      iVar4 = ossl_statem_skip_early_data(param_1);
                      if (iVar4 == 0) {
                        local_90 = (int *)CONCAT44(local_90._4_4_,0x6e6);
                        uVar9 = 10;
                        uVar15 = 0xf5;
                        goto LAB_14f6696bf;
                      }
                      iVar4 = early_data_count_ok(param_1,*(undefined8 *)(piVar8 + 2),0x68);
                      if (iVar4 == 0) {
                        return 0xffffffff;
                      }
                      piVar8[0xe] = 1;
                      goto LAB_14f668fb0;
                    }
                  }
                  local_90 = (int *)CONCAT44(local_90._4_4_,0x6bb);
                  uVar15 = 0xf5;
                  goto LAB_14f6696b7;
                }
                iVar4 = param_1[0x21];
                ossl_statem_set_in_init(param_1,1);
                uVar5 = (**(code **)(param_1 + 0xc))(param_1);
                if ((int)uVar5 < 0) {
                  return uVar5;
                }
                if ((int)uVar5 == 0) {
                  return 0xffffffff;
                }
                if (iVar4 == 0xb) {
                  return 0xffffffff;
                }
                if ((*(byte *)(param_1 + 0x174) & 4) != 0) goto LAB_14f668fb0;
                bVar19 = *(longlong *)(param_1 + 0x21c) == 0;
              }
              else {
                if (iVar4 != 0x16) {
                  piVar8[2] = 0;
                  piVar8[3] = 0;
                  uVar15 = 0x123;
                  piVar8[0xe] = 1;
                  uVar9 = 0xffffffff;
                  local_90 = (int *)CONCAT44(local_90._4_4_,0x65b);
                  goto LAB_14f6696bf;
                }
                if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                    (0x303 < iVar3)) && (iVar3 != 0x10000)) goto LAB_14f6692bc;
                piVar8[2] = 0;
                piVar8[3] = 0;
                piVar8[0xe] = 1;
                bVar19 = (*(byte *)(param_1 + 0x174) & 4) == 0;
              }
              if (bVar19) {
                param_1[10] = 3;
                uVar5 = SSL_get_rbio(param_1);
                BIO_clear_flags(uVar5,0xf);
                BIO_set_flags(uVar5,9);
                return 0xffffffff;
              }
              goto LAB_14f668fb0;
            }
            uVar12 = *(ulonglong *)(piVar8 + 2);
            if ((((uVar12 < 0x8000000000000000) && (uVar12 != 0)) &&
                (cVar1 = *(char *)(*(longlong *)(piVar8 + 8) + *(longlong *)(piVar8 + 6)),
                uVar12 != 1)) &&
               (bVar2 = ((char *)(*(longlong *)(piVar8 + 8) + *(longlong *)(piVar8 + 6)))[1],
               uVar12 == 2)) {
              if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
                local_88 = *(undefined8 *)(param_1 + 0x30);
                local_98 = (char *)0x2;
                local_90 = param_1;
                (**(code **)(param_1 + 0x2e))(0,*param_1,0x15);
              }
              pcVar6 = *(code **)(param_1 + 0x15a);
              if ((*(code **)(param_1 + 0x15a) == (code *)0x0) &&
                 (pcVar6 = local_70,
                 *(code **)(*(longlong *)(param_1 + 0x166) + 0x108) != (code *)0x0)) {
                pcVar6 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108);
              }
              uVar10 = (uint)bVar2;
              local_70 = pcVar6;
              if (pcVar6 != (code *)0x0) {
                (*pcVar6)(param_1,0x4004,CONCAT11(cVar1,bVar2));
              }
              if (cVar1 == '\x01') {
LAB_14f6691be:
                *(uint *)(*(longlong *)(param_1 + 0x2a) + 0xf4) = uVar10;
                piVar8[0xe] = 1;
                param_1[0x5b7] = param_1[0x5b7] + 1;
                if (param_1[0x5b7] == 5) {
                  local_90 = (int *)CONCAT44(local_90._4_4_,0x606);
                  uVar15 = 0x199;
                  goto LAB_14f6696b7;
                }
LAB_14f6691e5:
                if ((uVar14 != 0) && (uVar10 == 0x5a)) goto LAB_14f668fb0;
              }
              else if (uVar14 != 0) {
                if (uVar10 == 0x5a) goto LAB_14f6691be;
                goto LAB_14f6691e5;
              }
              if ((uVar10 == 0) && ((uVar14 != 0 || (cVar1 == '\x01')))) {
                param_1[0x11] = param_1[0x11] | 2;
                return 0;
              }
              if ((cVar1 == '\x02') || (uVar14 != 0)) {
                param_1[10] = 1;
                local_90 = (int *)CONCAT44(local_90._4_4_,0x61b);
                *(uint *)(*(longlong *)(param_1 + 0x2a) + 0xf8) = uVar10;
                local_98 = "ssl\\record\\rec_layer_s3.c";
                ossl_statem_fatal(param_1,0xffffffff,0x94,bVar2 + 1000);
                BIO_snprintf(local_58,0x10,"%d",bVar2);
                ERR_add_error_data(2,"SSL alert number ",local_58);
                param_1[0x11] = param_1[0x11] | 2;
                piVar8[0xe] = 1;
                SSL_CTX_remove_session
                          (*(undefined8 *)(param_1 + 0x1da),*(undefined8 *)(param_1 + 0x142));
                return 0;
              }
              if (uVar10 != 100) {
                if (cVar1 != '\x01') {
                  local_90 = (int *)CONCAT44(local_90._4_4_,0x634);
                  uVar9 = 0x2f;
                  uVar15 = 0xf6;
                  goto LAB_14f6696bf;
                }
                goto LAB_14f668fb0;
              }
              local_90 = (int *)CONCAT44(local_90._4_4_,0x62c);
              uVar9 = 0x28;
              uVar15 = 0x153;
              goto LAB_14f6696bf;
            }
            local_90 = (int *)CONCAT44(local_90._4_4_,0x5ec);
            uVar15 = 0xcd;
          }
        }
        else {
          local_90 = (int *)CONCAT44(local_90._4_4_,0x557);
          uVar15 = 0x91;
        }
      }
      else {
        local_90 = (int *)CONCAT44(local_90._4_4_,0x545);
        uVar15 = 0x125;
      }
LAB_14f6696b7:
      uVar9 = 10;
LAB_14f6696bf:
      local_98 = "ssl\\record\\rec_layer_s3.c";
      ossl_statem_fatal(param_1,uVar9,0x94,uVar15);
      return 0xffffffff;
    }
    local_90 = (int *)CONCAT44(local_90._4_4_,0x4ed);
    local_98 = "ssl\\record\\rec_layer_s3.c";
    ossl_statem_fatal(param_1,0x50,0x94,0x44);
  }
  return 0xffffffff;
LAB_14f669450:
  do {
    uVar14 = param_5 - uVar18;
    if (*puVar13 < param_5 - uVar18) {
      uVar14 = *puVar13;
    }
    memcpy(local_78,(void *)(puVar13[3] + puVar13[2]),uVar14);
    local_78 = (void *)((longlong)local_78 + uVar14);
    if (param_6 == 0) {
      *puVar13 = *puVar13 - uVar14;
      puVar13[2] = puVar13[2] + uVar14;
      if (*puVar13 == 0) {
        param_1[0x20f] = 0xf0;
        puVar13[2] = 0;
        goto LAB_14f6694a3;
      }
LAB_14f6694aa:
      uVar7 = *puVar13;
      if (uVar7 != 0) goto LAB_14f6694b2;
LAB_14f6694bb:
      uVar11 = uVar11 + 1;
      puVar13 = puVar13 + 9;
    }
    else {
      uVar7 = *puVar13;
      if (uVar7 == 0) {
LAB_14f6694a3:
        *(undefined4 *)(puVar13 + 6) = 1;
        goto LAB_14f6694aa;
      }
LAB_14f6694b2:
      if ((param_6 != 0) && (uVar14 == uVar7)) goto LAB_14f6694bb;
    }
    uVar18 = uVar18 + uVar14;
  } while (((param_2 == 0x17) && (uVar11 < uVar12)) && (uVar18 < param_5));
  uVar14 = local_60;
  if (uVar18 != 0) {
    if (((param_6 == 0) && (uVar11 == uVar12)) &&
       (((*(byte *)(param_1 + 0x174) & 0x10) != 0 && (*(longlong *)(param_1 + 0x21c) == 0)))) {
      ssl3_release_read_buffer(param_1);
    }
    *local_58[0] = uVar18;
    return 1;
  }
  goto LAB_14f668fb0;
code_r0x00014f66900a:
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  uVar12 = uVar17;
  goto LAB_14f668fc0;
}

// ssl3_read_n @ 14f669770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_read_n(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4,int param_5,
                     ulonglong *param_6)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  char *_Src;
  ulonglong _Size;
  void *_Dst;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x850) == 0) && (iVar2 = ssl3_setup_read_buffer(), iVar2 == 0)) {
    return 0xffffffff;
  }
  lVar1 = *(longlong *)(param_1 + 0x850);
  _Size = *(ulonglong *)(param_1 + 0x870);
  lVar5 = 7 - (ulonglong)((int)lVar1 - 4U & 7);
  if (param_4 == 0) {
    if (_Size == 0) {
LAB_14f669837:
      *(longlong *)(param_1 + 0x868) = lVar5;
    }
    else if ((((lVar5 != 0) && (4 < _Size)) &&
             (_Src = (char *)(*(longlong *)(param_1 + 0x868) + lVar1), *_Src == '\x17')) &&
            (0x7f < CONCAT11(_Src[3],_Src[4]))) {
      memmove((void *)(lVar1 + lVar5),_Src,_Size);
      goto LAB_14f669837;
    }
    *(longlong *)(param_1 + 0x1678) =
         *(longlong *)(param_1 + 0x868) + *(longlong *)(param_1 + 0x850);
    *(undefined8 *)(param_1 + 0x1680) = 0;
  }
  _Dst = (void *)(*(longlong *)(param_1 + 0x850) + lVar5);
  lVar1 = *(longlong *)(param_1 + 0x1680);
  if ((*(void **)(param_1 + 0x1678) != _Dst) && (param_5 == 1)) {
    memmove(_Dst,*(void **)(param_1 + 0x1678),lVar1 + _Size);
    *(void **)(param_1 + 0x1678) = _Dst;
    *(longlong *)(param_1 + 0x868) = lVar1 + lVar5;
  }
  uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8;
  if (uVar4 != 0) {
    if (_Size != 0) {
      if (_Size < param_2) {
        param_2 = _Size;
      }
      goto LAB_14f6698d6;
    }
    if (param_4 != 0) {
      return 0;
    }
  }
  if (_Size < param_2) {
    uVar3 = *(longlong *)(param_1 + 0x860) - *(longlong *)(param_1 + 0x868);
    if (uVar3 < param_2) {
      ossl_statem_fatal(param_1,0x50,0x95,0x44,"ssl\\record\\rec_layer_s3.c",0x118);
      return 0xffffffff;
    }
    if ((*(int *)(param_1 + 0x838) != 0) || (uVar7 = param_2, uVar4 != 0)) {
      if (param_3 < param_2) {
        param_3 = param_2;
      }
      uVar7 = param_3;
      if (uVar3 < param_3) {
        uVar7 = uVar3;
      }
    }
    do {
      SetLastError(0);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        ossl_statem_fatal(param_1,0x50,0x95,0xd3,"ssl\\record\\rec_layer_s3.c",0x13a);
        uVar3 = 0xffffffff;
LAB_14f669a2f:
        *(ulonglong *)(param_1 + 0x870) = _Size;
        if ((((*(byte *)(param_1 + 0x5d0) & 0x10) != 0) &&
            ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0)) &&
           (lVar1 + _Size == 0)) {
          ssl3_release_read_buffer(param_1);
        }
        return uVar3 & 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x28) = 3;
      iVar2 = BIO_read(*(longlong *)(param_1 + 0x10),(longlong)_Dst + _Size + lVar1,
                       (int)uVar7 - (int)_Size);
      uVar3 = (ulonglong)iVar2;
      uVar6 = 0;
      if (-1 < iVar2) {
        uVar6 = uVar3;
      }
      if (iVar2 < 1) goto LAB_14f669a2f;
      _Size = _Size + uVar6;
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
        if (_Size < param_2) {
          param_2 = _Size;
        }
        goto LAB_14f6699d0;
      }
      if (param_2 <= _Size) {
LAB_14f6699d0:
        *(longlong *)(param_1 + 0x868) = *(longlong *)(param_1 + 0x868) + param_2;
        *(ulonglong *)(param_1 + 0x870) = _Size - param_2;
        *(longlong *)(param_1 + 0x1680) = *(longlong *)(param_1 + 0x1680) + param_2;
        *(undefined4 *)(param_1 + 0x28) = 1;
        *param_6 = param_2;
        return 1;
      }
    } while( true );
  }
LAB_14f6698d6:
  *(longlong *)(param_1 + 0x1680) = *(longlong *)(param_1 + 0x1680) + param_2;
  *(longlong *)(param_1 + 0x868) = *(longlong *)(param_1 + 0x868) + param_2;
  *(ulonglong *)(param_1 + 0x870) = _Size - param_2;
  *param_6 = param_2;
  return 1;
}

// ssl3_record_sequence_update @ 14f669a90

void ssl3_record_sequence_update(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 7);
  do {
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 != '\0') {
      return;
    }
    pcVar1 = pcVar1 + -1;
  } while (-1 < (longlong)pcVar1 - param_1);
  return;
}

// ssl3_write_bytes @ 14f669ab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong ssl3_write_bytes(undefined4 *param_1,int param_2,longlong param_3,ulonglong param_4,
                          ulonglong *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined1 auStack_1f8 [32];
  ulonglong *local_1d8;
  undefined4 local_1d0;
  ulonglong *local_1c8;
  int local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  ulonglong *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  ulonglong local_180;
  uint local_178;
  ulonglong local_170;
  ulonglong local_168 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined2 local_5d;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  uVar12 = *(ulonglong *)(param_1 + 0x5a2);
  local_198 = param_5;
  param_1[10] = 1;
  local_1b8 = param_2;
  local_1a0 = param_3;
  if ((param_4 < uVar12) ||
     ((*(longlong *)(param_1 + 0x226) != 0 && (param_4 < *(longlong *)(param_1 + 0x5aa) + uVar12))))
  {
    local_1d0 = 0x179;
    local_1d8 = (ulonglong *)0x15347ca50;
    ossl_statem_fatal(param_1,0x50,0x9e,0x10f);
    return 0xffffffff;
  }
  if ((param_1[0x21] == 4) && (iVar2 = early_data_count_ok(param_1,param_4,0,1), iVar2 == 0)) {
    return 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0x5a2) = 0;
  if ((*(longlong *)(param_1 + 0x226) == 0) && (param_1[0x1e1] != -1)) {
    ossl_statem_set_in_init(param_1);
  }
  iVar2 = SSL_in_init(param_1);
  if (((iVar2 != 0) && (iVar2 = ossl_statem_get_in_handshake(param_1), iVar2 == 0)) &&
     (param_1[0x21] != 6)) {
    uVar6 = (**(code **)(param_1 + 0xc))(param_1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    if ((int)uVar6 == 0) {
      return 0xffffffff;
    }
  }
  if (*(longlong *)(param_1 + 0x226) != 0) {
    local_1d8 = &local_1b0;
    uVar6 = ssl3_write_pending(param_1,param_2,param_3 + uVar12,*(undefined8 *)(param_1 + 0x5aa));
    if ((int)uVar6 < 1) {
      *(ulonglong *)(param_1 + 0x5a2) = uVar12;
      return uVar6;
    }
    uVar12 = uVar12 + local_1b0;
  }
  if (param_2 == 0x17) {
    uVar3 = ssl_get_max_send_fragment(param_1);
    uVar6 = (ulonglong)uVar3;
    local_1a8 = uVar6;
    if (((param_4 < uVar6 * 4) || (*(longlong *)(param_1 + 0x116) != 0)) ||
       ((*(longlong *)(param_1 + 0x2e) != 0 ||
        (((**(uint **)(param_1 + 0x2a) & 0x400) != 0 ||
         ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0))))))
    goto LAB_14f669f5b;
    uVar7 = EVP_CIPHER_CTX_cipher(*(undefined8 *)(param_1 + 0x11a));
    uVar4 = EVP_CIPHER_flags(uVar7);
    if ((uVar4 >> 0x16 & 1) == 0) goto LAB_14f669f5b;
    if ((uVar3 & 0xfff) == 0) {
      uVar6 = uVar6 - 0x200;
      local_1a8 = uVar6;
    }
    if ((uVar12 != 0) && (*(longlong *)(param_1 + 0x21e) != 0)) {
      if (uVar12 != param_4) goto LAB_14f669d0d;
      goto LAB_14f669f7a;
    }
    ssl3_release_write_buffer(param_1);
    iVar2 = EVP_CIPHER_CTX_ctrl(*(undefined8 *)(param_1 + 0x11a),0x1c,uVar6 & 0xffffffff);
    lVar9 = 4;
    if (uVar6 * 8 <= param_4) {
      lVar9 = 8;
    }
    iVar2 = ssl3_setup_write_buffer(param_1,1,iVar2 * lVar9);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
LAB_14f669d0d:
    local_170 = uVar6 * 4;
    uVar16 = param_4 - uVar12;
    if (local_170 <= uVar16) {
      do {
        uVar8 = local_170;
        if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) {
          uVar8 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1);
          if ((int)uVar8 < 1) goto LAB_14f66a11c;
          uVar8 = uVar6 * 4;
        }
        if (uVar16 < uVar6 * 8) {
          local_178 = 4;
        }
        else {
          local_178 = 8;
          uVar8 = uVar6 * 8;
        }
        local_68 = *(undefined8 *)(param_1 + 0x5b4);
        local_5f = (undefined1)((uint)*param_1 >> 8);
        local_5e = *(undefined1 *)param_1;
        local_188 = &local_68;
        local_60 = 0x17;
        local_5d = 0;
        local_190 = 0;
        local_180 = uVar8;
        iVar2 = EVP_CIPHER_CTX_ctrl(*(undefined8 *)(param_1 + 0x11a),0x19,0x20,&local_190);
        if ((iVar2 < 1) || (*(ulonglong *)(param_1 + 0x222) < (ulonglong)(longlong)iVar2)) break;
        local_190 = *(undefined8 *)(param_1 + 0x21e);
        puVar14 = (undefined8 *)(param_3 + uVar12);
        local_188 = puVar14;
        local_180 = uVar8;
        iVar5 = EVP_CIPHER_CTX_ctrl(*(undefined8 *)(param_1 + 0x11a),0x1a,0x20,&local_190);
        if (iVar5 < 1) {
          return 0xffffffff;
        }
        *(char *)((longlong)param_1 + 0x16d7) =
             *(char *)((longlong)param_1 + 0x16d7) + (char)local_178;
        if (*(byte *)((longlong)param_1 + 0x16d7) < local_178) {
          pcVar10 = (char *)((longlong)param_1 + 0x16d6);
          do {
            if ((longlong)(pcVar10 + (-0x16d0 - (longlong)param_1)) < 0) break;
            *pcVar10 = *pcVar10 + '\x01';
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + -1;
          } while (cVar1 == '\0');
        }
        *(undefined8 *)(param_1 + 0x224) = 0;
        local_1d8 = &local_1b0;
        *(longlong *)(param_1 + 0x226) = (longlong)iVar2;
        *(ulonglong *)(param_1 + 0x5aa) = uVar8;
        *(undefined8 **)(param_1 + 0x5b0) = puVar14;
        param_1[0x5ac] = 0x17;
        *(ulonglong *)(param_1 + 0x5ae) = uVar8;
        uVar3 = ssl3_write_pending(param_1,0x17,puVar14,uVar8);
        if ((int)uVar3 < 1) {
          if (((int)uVar3 < 0) &&
             ((*(longlong *)(param_1 + 6) == 0 ||
              (iVar2 = BIO_test_flags(*(longlong *)(param_1 + 6),8), iVar2 == 0)))) {
            ssl3_release_write_buffer(param_1);
          }
          *(ulonglong *)(param_1 + 0x5a2) = uVar12;
          return (ulonglong)uVar3;
        }
        uVar6 = local_1b0;
        if (local_1b0 == uVar16) goto LAB_14f66a103;
        uVar16 = uVar16 - local_1b0;
        uVar12 = uVar12 + local_1b0;
        uVar6 = local_1a8;
        param_3 = local_1a0;
      } while (local_170 <= uVar16);
    }
    ssl3_release_write_buffer(param_1);
  }
  else {
LAB_14f669f5b:
    if (uVar12 == param_4) {
      if (((*(byte *)(param_1 + 0x174) & 0x10) == 0) ||
         ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0))
      goto LAB_14f669f82;
LAB_14f669f7a:
      ssl3_release_write_buffer(param_1);
LAB_14f669f82:
      *param_5 = uVar12;
      return 1;
    }
  }
  param_4 = param_4 - uVar12;
  uVar3 = ssl_get_max_send_fragment(param_1);
  uVar16 = (ulonglong)uVar3;
  uVar3 = ssl_get_split_send_fragment(param_1);
  puVar15 = *(ulonglong **)(param_1 + 0x180);
  uVar6 = (ulonglong)uVar3;
  if (&DAT_00000021 <= puVar15) {
    local_1d0 = 0x247;
    goto LAB_14f66a130;
  }
  if ((puVar15 == (ulonglong *)0x0) || (*(longlong *)(param_1 + 0x11a) == 0)) {
LAB_14f669fe8:
    puVar15 = (ulonglong *)&DAT_00000001;
  }
  else {
    uVar7 = EVP_CIPHER_CTX_cipher();
    uVar3 = EVP_CIPHER_flags(uVar7);
    if (((uVar3 >> 0x17 & 1) == 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0))
    goto LAB_14f669fe8;
  }
  if (((uVar16 != 0) && (uVar6 != 0)) && (uVar6 <= uVar16)) {
    while( true ) {
      if (param_4 == 0) {
        local_1d8 = (ulonglong *)&DAT_00000001;
      }
      else {
        local_1d8 = (ulonglong *)((param_4 - 1) / uVar6 + 1);
      }
      if (puVar15 < local_1d8) {
        local_1d8 = puVar15;
      }
      uVar8 = param_4 / (ulonglong)local_1d8;
      if (uVar8 < uVar16) {
        puVar11 = (ulonglong *)0x0;
        if (local_1d8 != (ulonglong *)0x0) {
          do {
            local_168[(longlong)puVar11] = uVar8;
            if (puVar11 < (ulonglong *)(param_4 % (ulonglong)local_1d8)) {
              local_168[(longlong)puVar11] = uVar8 + 1;
            }
            puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          } while (puVar11 < local_1d8);
        }
      }
      else if (local_1d8 != (ulonglong *)0x0) {
        puVar13 = local_168;
        for (puVar11 = local_1d8; puVar11 != (ulonglong *)0x0;
            puVar11 = (ulonglong *)((longlong)puVar11 + -1)) {
          *puVar13 = uVar16;
          puVar13 = puVar13 + 1;
        }
      }
      local_1c8 = &local_1b0;
      local_1d0 = 0;
      uVar8 = do_ssl3_write(param_1,local_1b8,local_1a0 + uVar12,local_168);
      if ((int)uVar8 < 1) break;
      if ((local_1b0 == param_4) || ((local_1b8 == 0x17 && ((*(byte *)(param_1 + 0x174) & 1) != 0)))
         ) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xdc) = 0;
        uVar6 = local_1b0;
        if ((local_1b0 == param_4) &&
           (((*(byte *)(param_1 + 0x174) & 0x10) != 0 &&
            ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0)))) {
LAB_14f66a103:
          ssl3_release_write_buffer(param_1);
        }
        *local_198 = uVar6 + uVar12;
        return 1;
      }
      param_4 = param_4 - local_1b0;
      uVar12 = uVar12 + local_1b0;
    }
LAB_14f66a11c:
    *(ulonglong *)(param_1 + 0x5a2) = uVar12;
    return uVar8;
  }
  local_1d0 = 599;
LAB_14f66a130:
  local_1d8 = (ulonglong *)0x15347ca50;
  ossl_statem_fatal(param_1,0x50,0x9e,0x44);
  return 0xffffffff;
}

// ssl3_write_pending @ 14f66a1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_write_pending(longlong param_1,int param_2,longlong param_3,ulonglong param_4,
                            undefined8 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  if ((param_4 < *(ulonglong *)(param_1 + 0x16a8)) ||
     ((((*(byte *)(param_1 + 0x5d0) & 2) == 0 && (*(longlong *)(param_1 + 0x16c0) != param_3)) ||
      (*(int *)(param_1 + 0x16b0) != param_2)))) {
    ossl_statem_fatal(param_1,0x50,0x9f,0x7f,"ssl\\record\\rec_layer_s3.c",0x100000486);
    uVar2 = 0xffffffff;
  }
  else {
    puVar4 = (ulonglong *)(param_1 + 0x898);
    uVar5 = uVar2;
LAB_14f66a205:
    do {
      for (; (*puVar4 == 0 && (uVar5 < *(longlong *)(param_1 + 0x848) - 1U)); uVar5 = uVar5 + 1) {
        puVar4 = puVar4 + 5;
      }
      SetLastError(0);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        ossl_statem_fatal(param_1,0x50,0x9f,0x80,"ssl\\record\\rec_layer_s3.c",0x49d);
        uVar3 = 0xffffffff;
LAB_14f66a2e7:
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
          *(undefined8 *)(param_1 + 0x898 + uVar5 * 0x28) = 0;
        }
        return uVar3 & 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x28) = 2;
      iVar1 = BIO_write(*(longlong *)(param_1 + 0x18),puVar4[-4] + puVar4[-1],(int)*puVar4);
      uVar3 = (ulonglong)iVar1;
      if (-1 < iVar1) {
        uVar2 = uVar3;
      }
      if (iVar1 < 1) goto LAB_14f66a2e7;
      puVar4[-1] = puVar4[-1] + uVar2;
      if (uVar2 != *puVar4) {
        *puVar4 = *puVar4 - uVar2;
        goto LAB_14f66a205;
      }
      *puVar4 = 0;
    } while (uVar5 + 1 < *(ulonglong *)(param_1 + 0x848));
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *param_5 = *(undefined8 *)(param_1 + 0x16b8);
  }
  return uVar2;
}

