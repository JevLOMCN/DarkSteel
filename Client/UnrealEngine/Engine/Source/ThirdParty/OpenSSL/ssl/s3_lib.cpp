// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 43

// ssl3_set_handshake_header @ 14f67c990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_set_handshake_header(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0x101) {
    return 1;
  }
  iVar1 = WPACKET_put_bytes__(param_2,(longlong)param_3,1);
  if ((iVar1 != 0) && (iVar1 = WPACKET_start_sub_packet_len__(param_2,3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// ssl3_handshake_write @ 14f67c9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_handshake_write(undefined8 param_1)

{
  ssl3_do_write(param_1,0x16);
  return;
}

// FUN_14f67ca10 @ 14f67ca10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67ca10(void)

{
  ssl_undefined_function();
  return;
}

// FUN_14f67ca90 @ 14f67ca90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67ca90(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f67cab0 @ 14f67cab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cab0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f67cad0 @ 14f67cad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cad0(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f67caf0 @ 14f67caf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67caf0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f67cb10 @ 14f67cb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cb10(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f67cb30 @ 14f67cb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cb30(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f67cb50 @ 14f67cb50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cb50(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f67cb70 @ 14f67cb70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cb70(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f67cb90 @ 14f67cb90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cb90(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f67cbb0 @ 14f67cbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cbb0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f67cbd0 @ 14f67cbd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67cbd0(longlong param_1)

{
  CRYPTO_strdup(*(undefined8 *)(param_1 + 0x818),"ssl\\s3_lib.c",0xd38);
  return;
}

// ssl3_choose_cipher @ 14f67cc40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl3_choose_cipher(int *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  uint local_res8;
  longlong local_res20;
  longlong local_48;
  
  uVar14 = 0;
  local_res8 = 0;
  lVar5 = 0;
  lVar3 = EVP_sha256();
  local_48 = 0;
  lVar4 = param_2;
  local_res20 = param_3;
  if (((((*(uint *)(*(longlong *)(param_1 + 0x122) + 0x1c) & 0x30000) == 0) &&
       (lVar4 = param_3, local_res20 = param_2, ((uint)param_1[0x173] >> 0x16 & 1) != 0)) &&
      (lVar4 = param_2, local_res20 = param_3, ((uint)param_1[0x173] >> 0x15 & 1) != 0)) &&
     ((iVar13 = OPENSSL_sk_num(param_2), local_res20 = param_3, 0 < iVar13 &&
      (lVar8 = OPENSSL_sk_value(param_2), local_res20 = param_3, *(int *)(lVar8 + 0x24) == 0x80000))
     )) {
    iVar12 = OPENSSL_sk_num(param_3);
    iVar13 = 0;
    local_res20 = param_3;
    if (0 < iVar12) {
      do {
        lVar8 = OPENSSL_sk_value(param_3);
        if (*(int *)(lVar8 + 0x24) == 0x80000) {
          local_48 = OPENSSL_sk_new_reserve(0);
          if (local_48 != 0) {
            OPENSSL_sk_push(local_48,lVar8);
            while (iVar13 = iVar13 + 1, iVar13 < iVar12) {
              lVar4 = OPENSSL_sk_value(param_3,iVar13);
              if (*(int *)(lVar4 + 0x24) == 0x80000) {
                OPENSSL_sk_push(local_48,lVar4);
              }
            }
            iVar13 = 0;
            do {
              lVar4 = OPENSSL_sk_value(param_3);
              if (*(int *)(lVar4 + 0x24) != 0x80000) {
                OPENSSL_sk_push(local_48);
              }
              iVar13 = iVar13 + 1;
              lVar4 = param_2;
              local_res20 = local_48;
            } while (iVar13 < iVar12);
          }
          break;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar12);
    }
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar13 = **(int **)(param_1 + 2), 0x303 < iVar13)) && (iVar13 != 0x10000)) {
    bVar15 = false;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      iVar13 = 0;
      uVar11 = 0;
      lVar8 = 0;
      do {
        if (((uVar11 < 9) && (*(longlong *)(lVar8 + 0x20 + *(longlong *)(param_1 + 0x122)) != 0)) &&
           (*(longlong *)(lVar8 + 0x28 + *(longlong *)(param_1 + 0x122)) != 0)) break;
        iVar13 = iVar13 + 1;
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x28;
      } while (lVar8 < 0x168);
      bVar15 = iVar13 == 9;
    }
  }
  else {
    tls1_set_cert_validity(param_1);
    ssl_set_masks(param_1);
    bVar15 = false;
  }
  iVar12 = 0;
  iVar13 = OPENSSL_sk_num(local_res20);
  lVar8 = lVar5;
  if (0 < iVar13) {
    do {
      lVar5 = OPENSSL_sk_value(local_res20,iVar12);
      uVar9 = *(uint *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8;
      if ((uVar9 != 0) ||
         ((*(int *)(lVar5 + 0x2c) <= *param_1 && (*param_1 <= *(int *)(lVar5 + 0x30))))) {
        if (uVar9 == 0) {
LAB_14f67cedf:
          iVar13 = **(int **)(param_1 + 2);
          if ((0x303 < iVar13) && (iVar13 != 0x10000)) goto LAB_14f67cf78;
LAB_14f67cef4:
          uVar9 = *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x334);
          uVar10 = *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x338);
          if ((*(byte *)(param_1 + 0x209) & 0x20) != 0) {
            uVar9 = uVar9 | 0x20;
            uVar10 = uVar10 | 0x40;
          }
          uVar14 = *(uint *)(lVar5 + 0x1c);
          local_res8 = *(uint *)(lVar5 + 0x20);
          if (((uVar14 & 0x1c8) == 0) || (*(longlong *)(param_1 + 0x160) != 0)) {
            if (((uVar14 & uVar9) == 0) || ((local_res8 & uVar10) == 0)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((uVar14 & 4) == 0) {
              if (bVar1) goto LAB_14f67cf78;
            }
            else if ((bVar1) &&
                    (iVar13 = tls1_check_ec_tmp_key(param_1,*(undefined4 *)(lVar5 + 0x18)),
                    iVar13 != 0)) {
LAB_14f67cf78:
              iVar13 = OPENSSL_sk_find(lVar4,lVar5);
              if ((-1 < iVar13) &&
                 (iVar2 = ssl_security(param_1,0x10002,*(undefined4 *)(lVar5 + 0x44),0,lVar5),
                 iVar2 != 0)) {
                if ((((uVar14 & 4) == 0) || ((local_res8 & 8) == 0)) ||
                   (*(char *)(*(longlong *)(param_1 + 0x2a) + 0x404) == '\0')) {
                  lVar5 = OPENSSL_sk_value(lVar4,iVar13);
                  if ((!bVar15) || (lVar6 = ssl_md(*(undefined4 *)(lVar5 + 0x40)), lVar6 == lVar3))
                  break;
                  if (lVar8 == 0) {
                    lVar8 = lVar5;
                  }
                }
                else if (lVar8 == 0) {
                  lVar8 = OPENSSL_sk_value(lVar4,iVar13);
                }
              }
            }
          }
        }
        else {
          iVar13 = *param_1;
          iVar2 = *(int *)(lVar5 + 0x34);
          iVar7 = iVar13;
          if (iVar13 == 0x100) {
            iVar7 = 0xff00;
          }
          if (iVar2 == 0x100) {
            iVar2 = 0xff00;
          }
          if (iVar7 <= iVar2) {
            iVar2 = *(int *)(lVar5 + 0x38);
            if (iVar13 == 0x100) {
              iVar13 = 0xff00;
            }
            if (iVar2 == 0x100) {
              iVar2 = 0xff00;
            }
            if (iVar2 <= iVar13) {
              if (uVar9 == 0) goto LAB_14f67cedf;
              goto LAB_14f67cef4;
            }
          }
        }
      }
      lVar5 = lVar8;
      iVar12 = iVar12 + 1;
      iVar13 = OPENSSL_sk_num(local_res20);
      lVar8 = lVar5;
    } while (iVar12 < iVar13);
  }
  OPENSSL_sk_free(local_48);
  return lVar5;
}

// ssl3_clear @ 14f67d060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_clear(undefined4 *param_1)

{
  undefined8 uVar1;
  
  ssl3_cleanup_key_block();
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x250),"ssl\\s3_lib.c",0xd13);
  OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x260),X509_NAME_free);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2a8),"ssl\\s3_lib.c",0xd15);
  CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2b8),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2c0),"ssl\\s3_lib.c",0xd16);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2e8),"ssl\\s3_lib.c",0xd17);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2f0),"ssl\\s3_lib.c",0xd18);
  EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x240));
  EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x408));
  ssl3_free_digest_list(param_1);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x3e0),"ssl\\s3_lib.c",0xd21);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x3f0),"ssl\\s3_lib.c",0xd22);
  memset(*(void **)(param_1 + 0x2a),0,0x410);
  uVar1 = ssl_free_wbio_buffer(param_1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_1 = 0x300;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x1be),"ssl\\s3_lib.c",0xd2d);
  *(undefined8 *)(param_1 + 0x1be) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return 1;
}

// ssl3_ctrl @ 14f67d210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_ctrl(longlong param_1,undefined4 param_2,int param_3,longlong *param_4)

{
  char cVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int local_res10 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar13 = 0x14f67d228;
  uVar8 = 0;
  uVar9 = 0;
  lVar11 = (longlong)param_3;
  uVar2 = 0;
  switch(param_2) {
  case 3:
    if (param_4 != (longlong *)0x0) {
      lVar11 = ssl_dh_to_pkey(param_4);
      if (lVar11 == 0) {
        ERR_put_error(0x14,0xd5,0x41,"ssl\\s3_lib.c",CONCAT44(uVar10,0xd5d),uVar13);
        return 0;
      }
      uVar10 = EVP_PKEY_security_bits(lVar11);
      iVar4 = ssl_security(param_1,0x40007,uVar10,0,lVar11);
      if (iVar4 == 0) {
        ERR_put_error(0x14,0xd5,0x18a,"ssl\\s3_lib.c",0xd62,uVar13);
        EVP_PKEY_free(lVar11);
        return 0;
      }
      EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 8));
      *(longlong *)(*(longlong *)(param_1 + 0x488) + 8) = lVar11;
      goto LAB_14f67d50f;
    }
    uVar12 = CONCAT44(uVar10,0xd58);
LAB_14f67d2bc:
    uVar10 = 0x43;
    goto LAB_14f67d2c2;
  case 4:
    if (param_4 == (longlong *)0x0) {
      uVar12 = CONCAT44(uVar10,0xd7b);
      goto LAB_14f67d2bc;
    }
    lVar11 = EC_KEY_get0_group(param_4);
    if (lVar11 == 0) {
      uVar12 = 0xd80;
      uVar10 = 0x7c;
      goto LAB_14f67d2c2;
    }
    local_res10[0] = EC_GROUP_get_curve_name(lVar11);
    if (local_res10[0] != 0) {
      uVar8 = tls1_set_groups(param_1 + 0x6a8,param_1 + 0x6a0,local_res10,1);
      return uVar8;
    }
    goto LAB_14f67d2d8;
  default:
    goto switchD_14f67d263_caseD_5;
  case 6:
    ERR_put_error(0x14,0xd5,0x42,"ssl\\s3_lib.c",CONCAT44(uVar10,0xd6d),0x14f67d228);
    uVar8 = 0;
    break;
  case 10:
    uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    goto switchD_14f67d263_caseD_5;
  case 0xb:
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x10c) = 0;
    uVar2 = (ulonglong)uVar9;
    goto switchD_14f67d263_caseD_5;
  case 0xc:
    uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x108);
    goto switchD_14f67d263_caseD_5;
  case 0xd:
    uVar2 = (ulonglong)**(uint **)(param_1 + 0xa8);
    goto switchD_14f67d263_caseD_5;
  case 0x37:
    if (param_3 == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x638),"ssl\\s3_lib.c",0xd99);
      *(undefined8 *)(param_1 + 0x638) = 0;
      uVar2 = 1;
      if (param_4 == (longlong *)0x0) goto switchD_14f67d263_caseD_5;
      cVar1 = (char)*param_4;
      plVar5 = param_4;
      while ((cVar1 != '\0' && (uVar9 = (uint)uVar8, uVar9 < 0x80000000))) {
        plVar5 = (longlong *)((longlong)plVar5 + 1);
        uVar9 = uVar9 + 1;
        cVar1 = *(char *)plVar5;
        uVar8 = (ulonglong)uVar9;
      }
      if ((ulonglong)(uVar9 & 0x7fffffff) - 1 < 0xff) {
        lVar11 = CRYPTO_strdup(param_4,"ssl\\s3_lib.c",0xda4);
        *(longlong *)(param_1 + 0x638) = lVar11;
        if (lVar11 != 0) goto switchD_14f67d263_caseD_5;
        uVar12 = 0xda5;
        uVar10 = 0x44;
      }
      else {
        uVar12 = 0xda1;
        uVar10 = 0x13f;
      }
    }
    else {
      uVar12 = CONCAT44(uVar10,0xda9);
      uVar10 = 0x140;
    }
LAB_14f67d2c2:
    ERR_put_error(0x14,0xd5,uVar10,"ssl\\s3_lib.c",uVar12,uVar13);
    goto LAB_14f67d2d8;
  case 0x39:
    *(longlong **)(param_1 + 0x630) = param_4;
    goto LAB_14f67d50f;
  case 0x41:
    *(int *)(param_1 + 0x640) = param_3;
    goto LAB_14f67d50f;
  case 0x42:
    lVar11 = *(longlong *)(param_1 + 0x660);
    goto LAB_14f67d50c;
  case 0x43:
    *(longlong **)(param_1 + 0x660) = param_4;
    goto LAB_14f67d50f;
  case 0x44:
    lVar11 = *(longlong *)(param_1 + 0x658);
    goto LAB_14f67d50c;
  case 0x45:
    *(longlong **)(param_1 + 0x658) = param_4;
    goto LAB_14f67d50f;
  case 0x46:
    *param_4 = *(longlong *)(param_1 + 0x668);
    if (*(longlong *)(param_1 + 0x670) - 1U < 0x7fffffff) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x670);
    }
    else {
      uVar8 = 0xffffffff;
    }
    break;
  case 0x47:
    CRYPTO_free(*(undefined8 *)(param_1 + 0x668),"ssl\\s3_lib.c",0xdd7);
    *(longlong **)(param_1 + 0x668) = param_4;
    *(longlong *)(param_1 + 0x670) = lVar11;
    goto LAB_14f67d50f;
  case 0x58:
    if (param_3 == 0) {
      uVar8 = ssl_cert_set0_chain(param_1,0,param_4);
    }
    else {
      uVar8 = ssl_cert_set1_chain();
    }
    break;
  case 0x59:
    if (param_3 == 0) {
      uVar8 = ssl_cert_add0_chain_cert(param_1,0,param_4);
    }
    else {
      uVar8 = ssl_cert_add1_chain_cert();
    }
    break;
  case 0x5a:
    if (*(longlong *)(param_1 + 0x508) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x6b8);
      uVar2 = *(ulonglong *)(param_1 + 0x6b0);
      if ((param_4 != (longlong *)0x0) && (uVar2 != 0)) {
        do {
          puVar6 = (undefined4 *)tls1_group_id_lookup(*(undefined2 *)(lVar11 + uVar8 * 2));
          if (puVar6 == (undefined4 *)0x0) {
            *(uint *)((longlong)param_4 + uVar8 * 4) = *(ushort *)(lVar11 + uVar8 * 2) | 0x1000000;
          }
          else {
            *(undefined4 *)((longlong)param_4 + uVar8 * 4) = *puVar6;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
      return uVar2 & 0xffffffff;
    }
    goto LAB_14f67d2d8;
  case 0x5b:
    uVar8 = tls1_set_groups(param_1 + 0x6a8,param_1 + 0x6a0,param_4,lVar11);
    break;
  case 0x5c:
    uVar8 = tls1_set_groups_list(param_1 + 0x6a8,param_1 + 0x6a0,param_4);
    break;
  case 0x5d:
    uVar3 = tls1_shared_group(param_1,param_3);
    if (param_3 == -1) {
      uVar8 = (ulonglong)uVar3;
    }
    else {
      puVar7 = (uint *)tls1_group_id_lookup(uVar3);
      if (puVar7 != (uint *)0x0) {
        uVar8 = (ulonglong)*puVar7;
      }
    }
    break;
  case 0x61:
    uVar8 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x488),param_4,lVar11,0);
    break;
  case 0x62:
    uVar8 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x488),param_4,0);
    break;
  case 0x65:
    uVar8 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x488),param_4,lVar11,1);
    break;
  case 0x66:
    uVar8 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x488),param_4,1);
    break;
  case 0x67:
    if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0)) {
      if (param_4 != (longlong *)0x0) {
        *param_4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x250);
      }
      return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 600);
    }
    goto LAB_14f67d2d8;
  case 0x68:
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar8 = FUN_14f67ed80(*(undefined8 *)(param_1 + 0x488),param_4,lVar11);
      return uVar8;
    }
    goto LAB_14f67d2d8;
  case 0x69:
    uVar8 = ssl_build_cert_chain(param_1,0,param_3);
    break;
  case 0x6a:
    uVar8 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x488),param_4,0,param_3);
    break;
  case 0x6b:
    uVar8 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x488),param_4,1,param_3);
    break;
  case 0x6c:
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x308);
    if (lVar11 != 0) goto LAB_14f67d881;
    goto LAB_14f67d2d8;
  case 0x6d:
    if ((*(longlong *)(param_1 + 0x508) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0)) {
      EVP_PKEY_up_ref();
      *param_4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
      return 1;
    }
    goto LAB_14f67d2d8;
  case 0x6f:
    if (*(longlong *)(param_1 + 0x698) != 0) {
      *param_4 = *(longlong *)(param_1 + 0x698);
      return (ulonglong)*(uint *)(param_1 + 0x690);
    }
    goto LAB_14f67d2d8;
  case 0x73:
    lVar11 = *(longlong *)(**(longlong **)(param_1 + 0x488) + 0x10);
LAB_14f67d50c:
    *param_4 = lVar11;
LAB_14f67d50f:
    uVar2 = 1;
    goto switchD_14f67d263_caseD_5;
  case 0x74:
    uVar8 = ssl_cert_select_current(*(undefined8 *)(param_1 + 0x488),param_4);
    break;
  case 0x75:
    if (param_3 != 3) {
      uVar8 = ssl_cert_set_current(*(undefined8 *)(param_1 + 0x488),param_3);
      return uVar8;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
      if (lVar11 != 0) {
        if ((*(byte *)(lVar11 + 0x20) & 0x44) != 0) {
          return 2;
        }
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
        if (lVar11 != 0) {
          **(longlong **)(param_1 + 0x488) = lVar11;
          return 1;
        }
      }
    }
    goto LAB_14f67d2d8;
  case 0x76:
    *(int *)(*(longlong *)(param_1 + 0x488) + 0x18) = param_3;
    uVar8 = 1;
    break;
  case 0x7f:
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x640);
switchD_14f67d263_caseD_5:
    uVar8 = uVar2;
    break;
  case 0x84:
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2d8);
    if (lVar11 == 0) {
      return 0;
    }
LAB_14f67d881:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar11 + 0xc);
    uVar8 = 1;
    break;
  case 0x85:
    if ((*(longlong *)(param_1 + 0x508) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) != 0)) {
      EVP_PKEY_up_ref();
      *param_4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
      return 1;
    }
LAB_14f67d2d8:
    uVar8 = 0;
    break;
  case 0x89:
    uVar8 = ssl_cert_get_cert_store(*(undefined8 *)(param_1 + 0x488),param_4,0);
    break;
  case 0x8a:
    uVar8 = ssl_cert_get_cert_store(*(undefined8 *)(param_1 + 0x488),param_4,1);
  }
  return uVar8;
}

// ssl3_ctx_callback_ctrl @ 14f67daa0

undefined8 ssl3_ctx_callback_ctrl(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  switch(param_2) {
  case 6:
    *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x10) = param_3;
    return 1;
  default:
    return 0;
  case 0x35:
    *(undefined8 *)(param_1 + 0x1f8) = param_3;
    return 1;
  case 0x3f:
    *(undefined8 *)(param_1 + 0x228) = param_3;
    return 1;
  case 0x48:
    *(undefined8 *)(param_1 + 0x220) = param_3;
    return 1;
  case 0x4b:
    *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 0x20;
    *(undefined8 *)(param_1 + 0x2e8) = param_3;
    return 1;
  case 0x4c:
    *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 0x20;
    *(undefined8 *)(param_1 + 0x2f0) = param_3;
    return 1;
  case 0x4d:
    *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 0x20;
    *(undefined8 *)(param_1 + 0x2f8) = param_3;
    return 1;
  case 0x4f:
    *(undefined8 *)(param_1 + 0x378) = param_3;
    return 1;
  }
}

// ssl3_ctx_ctrl @ 14f67dbd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_ctx_ctrl(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  int local_res10 [6];
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar12 = 0x14f67dbe0;
  switch(param_2) {
  case 3:
    if (param_4 != (longlong *)0x0) {
      lVar7 = ssl_dh_to_pkey(param_4);
      if (lVar7 != 0) {
        uVar4 = EVP_PKEY_security_bits(lVar7);
        iVar6 = ssl_ctx_security(param_1,0x40007,uVar4,0,lVar7);
        if (iVar6 != 0) {
          EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8));
          *(longlong *)(*(longlong *)(param_1 + 0x138) + 8) = lVar7;
          return 1;
        }
        ERR_put_error(0x14,0x85,0x18a,"ssl\\s3_lib.c",0xecc,uVar12);
        EVP_PKEY_free(lVar7);
        return 0;
      }
      uVar11 = CONCAT44(uVar4,0xec7);
LAB_14f67e24c:
      ERR_put_error(0x14,0x85,0x41,"ssl\\s3_lib.c",uVar11,uVar12);
      return 0;
    }
    uVar12 = CONCAT44(uVar4,0xec2);
    goto LAB_14f67dc1f;
  case 4:
    if (param_4 != (longlong *)0x0) {
      lVar7 = EC_KEY_get0_group(param_4);
      if (lVar7 == 0) {
        ERR_put_error(0x14,0x85,0x7c,"ssl\\s3_lib.c",CONCAT44(uVar4,0xee9));
        return 0;
      }
      local_res10[0] = EC_GROUP_get_curve_name(lVar7);
      if (local_res10[0] == 0) {
        return 0;
      }
      uVar8 = tls1_set_groups(param_1 + 600,param_1 + 0x250,local_res10,1);
      return uVar8;
    }
    uVar12 = CONCAT44(uVar4,0xee4);
LAB_14f67dc1f:
    ERR_put_error(0x14,0x85,0x43,"ssl\\s3_lib.c",uVar12,0x14f67dbe0);
switchD_14f67dc0f_caseD_5:
    return 0;
  default:
    goto switchD_14f67dc0f_caseD_5;
  case 6:
    ERR_put_error(0x14,0x85,0x42,"ssl\\s3_lib.c",CONCAT44(uVar4,0xed6),0x14f67dbe0);
    return 0;
  case 0xe:
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      lVar7 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 0xf8) = lVar7;
      if (lVar7 == 0) {
        uVar11 = CONCAT44(uVar4,0xf80);
        goto LAB_14f67e24c;
      }
    }
    iVar6 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0xf8),param_4);
    if (iVar6 == 0) {
      uVar11 = CONCAT44(uVar4,0xf85);
      goto LAB_14f67e24c;
    }
    break;
  case 0x36:
    *(longlong **)(param_1 + 0x200) = param_4;
    return 1;
  case 0x3a:
  case 0x3b:
    if (param_4 == (longlong *)0x0) {
      return 0x50;
    }
    if (param_3 == 0x50) {
      if (param_2 != 0x3b) {
        lVar7 = *(longlong *)(param_1 + 0x210);
        *param_4 = *(longlong *)(param_1 + 0x208);
        param_4[1] = lVar7;
        plVar10 = *(longlong **)(param_1 + 0x218);
        lVar7 = plVar10[1];
        param_4[2] = *plVar10;
        param_4[3] = lVar7;
        lVar7 = plVar10[3];
        param_4[4] = plVar10[2];
        param_4[5] = lVar7;
        lVar7 = *(longlong *)(param_1 + 0x218);
        lVar3 = *(longlong *)(lVar7 + 0x28);
        param_4[6] = *(longlong *)(lVar7 + 0x20);
        param_4[7] = lVar3;
        lVar3 = *(longlong *)(lVar7 + 0x38);
        param_4[8] = *(longlong *)(lVar7 + 0x30);
        param_4[9] = lVar3;
        return 1;
      }
      lVar7 = param_4[1];
      plVar10 = *(longlong **)(param_1 + 0x218);
      *(longlong *)(param_1 + 0x208) = *param_4;
      *(longlong *)(param_1 + 0x210) = lVar7;
      lVar7 = param_4[3];
      *plVar10 = param_4[2];
      plVar10[1] = lVar7;
      lVar7 = param_4[5];
      plVar10[2] = param_4[4];
      plVar10[3] = lVar7;
      lVar7 = *(longlong *)(param_1 + 0x218);
      lVar3 = param_4[7];
      *(longlong *)(lVar7 + 0x20) = param_4[6];
      *(longlong *)(lVar7 + 0x28) = lVar3;
      lVar3 = param_4[9];
      *(longlong *)(lVar7 + 0x30) = param_4[8];
      *(longlong *)(lVar7 + 0x38) = lVar3;
      return 1;
    }
    ERR_put_error(0x14,0x85,0x145,"ssl\\s3_lib.c",CONCAT44(uVar4,0xf01),0x14f67dbe0);
    return 0;
  case 0x40:
    *(longlong **)(param_1 + 0x230) = param_4;
    return 1;
  case 0x41:
    *(int *)(param_1 + 0x238) = param_3;
    return 1;
  case 0x4e:
    *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 0x20;
    *(longlong **)(param_1 + 0x2e0) = param_4;
    return 1;
  case 0x4f:
    *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 0x20;
    CRYPTO_free(*(undefined8 *)(param_1 + 0x300),"ssl\\s3_lib.c",0xf32);
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    if (param_4 != (longlong *)0x0) {
      cVar2 = (char)*param_4;
      plVar10 = param_4;
      cVar1 = cVar2;
      for (uVar9 = uVar5; (cVar1 != '\0' && (uVar9 < 0x80000000)); uVar9 = uVar9 + 1) {
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        cVar1 = *(char *)plVar10;
      }
      plVar10 = param_4;
      if ((uVar9 & 0x7fffffff) < 0x100) {
        for (; (cVar2 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
          cVar2 = *(char *)((longlong)plVar10 + 1);
          plVar10 = (longlong *)((longlong)plVar10 + 1);
        }
        if ((uVar5 & 0x7fffffff) != 0) {
          lVar7 = CRYPTO_strdup(param_4,"ssl\\s3_lib.c",0xf3a);
          *(longlong *)(param_1 + 0x300) = lVar7;
          if (lVar7 != 0) {
            return 1;
          }
          uVar12 = CONCAT44(uVar4,0xf3b);
          goto LAB_14f67dfd7;
        }
      }
      ERR_put_error(0x14,0x85,0x165,"ssl\\s3_lib.c",CONCAT44(uVar4,0xf37));
      return 0;
    }
    break;
  case 0x50:
    *(int *)(param_1 + 0x350) = param_3;
    return 1;
  case 0x51:
    *(code **)(param_1 + 0x2f8) = FUN_14f67cbd0;
    if (*(longlong *)(param_1 + 0x348) != 0) {
      CRYPTO_free(*(longlong *)(param_1 + 0x348),"ssl\\s3_lib.c",0xf43);
    }
    lVar7 = CRYPTO_strdup(param_4,"ssl\\s3_lib.c",0xf44);
    *(longlong *)(param_1 + 0x348) = lVar7;
    if (lVar7 == 0) {
      uVar12 = CONCAT44(uVar4,0xf45);
LAB_14f67dfd7:
      ERR_put_error(0x14,0x85,0x44,"ssl\\s3_lib.c",uVar12);
      return 0;
    }
    break;
  case 0x52:
    lVar7 = *(longlong *)(param_1 + 0xf8);
    if ((lVar7 == 0) && (param_3 == 0)) goto switchD_14f67dc0f_caseD_73;
    goto LAB_14f67e2ad;
  case 0x53:
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xf8),X509_free);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    return 1;
  case 0x58:
    if (param_3 == 0) {
      uVar8 = ssl_cert_set0_chain(0,param_1,param_4);
      return uVar8;
    }
    uVar8 = ssl_cert_set1_chain();
    return uVar8;
  case 0x59:
    if (param_3 == 0) {
      uVar8 = ssl_cert_add0_chain_cert(0,param_1,param_4);
      return uVar8;
    }
    uVar8 = ssl_cert_add1_chain_cert();
    return uVar8;
  case 0x5b:
    uVar8 = tls1_set_groups(param_1 + 600,param_1 + 0x250,param_4,(longlong)param_3);
    return uVar8;
  case 0x5c:
    uVar8 = tls1_set_groups_list(param_1 + 600,param_1 + 0x250,param_4);
    return uVar8;
  case 0x61:
    uVar8 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x138),param_4,(longlong)param_3,0);
    return uVar8;
  case 0x62:
    uVar8 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x138),param_4,0);
    return uVar8;
  case 0x65:
    uVar8 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x138),param_4,(longlong)param_3,1);
    return uVar8;
  case 0x66:
    uVar8 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x138),param_4,1);
    return uVar8;
  case 0x68:
    uVar8 = FUN_14f67ed80(*(undefined8 *)(param_1 + 0x138),param_4,(longlong)param_3);
    return uVar8;
  case 0x69:
    uVar8 = ssl_build_cert_chain(0,param_1);
    return uVar8;
  case 0x6a:
    uVar8 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x138),param_4,0,param_3);
    return uVar8;
  case 0x6b:
    uVar8 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x138),param_4,1,param_3);
    return uVar8;
  case 0x73:
switchD_14f67dc0f_caseD_73:
    lVar7 = *(longlong *)(**(longlong **)(param_1 + 0x138) + 0x10);
LAB_14f67e2ad:
    *param_4 = lVar7;
    break;
  case 0x74:
    uVar8 = ssl_cert_select_current(*(undefined8 *)(param_1 + 0x138),param_4);
    return uVar8;
  case 0x75:
    uVar8 = ssl_cert_set_current(*(undefined8 *)(param_1 + 0x138),param_3);
    return uVar8;
  case 0x76:
    *(int *)(*(longlong *)(param_1 + 0x138) + 0x18) = param_3;
    return 1;
  case 0x7f:
    return (ulonglong)*(uint *)(param_1 + 0x238);
  case 0x80:
    *param_4 = *(longlong *)(param_1 + 0x228);
    return 1;
  case 0x81:
    *param_4 = *(longlong *)(param_1 + 0x230);
    return 1;
  case 0x89:
    uVar8 = ssl_cert_get_cert_store(*(undefined8 *)(param_1 + 0x138),param_4,0);
    return uVar8;
  case 0x8a:
    uVar8 = ssl_cert_get_cert_store(*(undefined8 *)(param_1 + 0x138),param_4,1);
    return uVar8;
  }
  return 1;
}

// ssl3_free @ 14f67e4b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_free(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    ssl3_cleanup_key_block();
    EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408) = 0;
    EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x250),"ssl\\s3_lib.c",0xcff);
    OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260),X509_NAME_free);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\s3_lib.c",0xd01);
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0),"ssl\\s3_lib.c",0xd02);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e8),"ssl\\s3_lib.c",0xd03);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2f0),"ssl\\s3_lib.c",0xd04);
    ssl3_free_digest_list(param_1);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),"ssl\\s3_lib.c",0xd06);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0),"ssl\\s3_lib.c",0xd07);
    SSL_SRP_CTX_free(param_1);
    CRYPTO_clear_free(*(undefined8 *)(param_1 + 0xa8),0x410,"ssl\\s3_lib.c",0xd0c);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}

// ssl3_get_cipher_by_char @ 14f67e6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_get_cipher_by_char(byte *param_1)

{
  longlong lVar1;
  undefined1 local_58 [24];
  uint local_40;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f67e6aa;
  local_40 = (*param_1 | 0x30000) << 8 | (uint)param_1[1];
  lVar1 = OBJ_bsearch_ssl_cipher_id(local_58,&DAT_154df4a00,5);
  if (lVar1 == 0) {
    lVar1 = OBJ_bsearch_ssl_cipher_id(local_58,&DAT_154df4b90,0xa4);
    if (lVar1 == 0) {
      OBJ_bsearch_ssl_cipher_id(local_58,&DAT_154df7ed0,2);
    }
  }
  return;
}

// ssl3_get_cipher_by_id @ 14f67e720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_get_cipher_by_id(undefined4 param_1)

{
  longlong lVar1;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f67e72a;
  local_40 = param_1;
  lVar1 = OBJ_bsearch_ssl_cipher_id(local_58,&DAT_154df4a00,5);
  if (lVar1 == 0) {
    lVar1 = OBJ_bsearch_ssl_cipher_id(local_58,&DAT_154df4b90,0xa4);
    if (lVar1 == 0) {
      OBJ_bsearch_ssl_cipher_id(local_58,&DAT_154df7ed0,2);
    }
  }
  return;
}

// ssl3_get_cipher_by_std_name @ 14f67e790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ssl3_get_cipher_by_std_name(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined *local_48 [3];
  ulonglong local_30 [5];
  
  local_30[0] = 5;
  local_48[0] = &DAT_154df4a00;
  local_30[1] = 0xa4;
  local_48[1] = &DAT_154df4b90;
  uVar4 = 0;
  local_30[2] = 2;
  local_48[2] = &DAT_154df7ed0;
  do {
    uVar6 = 0;
    lVar5 = *(longlong *)((longlong)local_48 + uVar4);
    if (*(ulonglong *)((longlong)local_30 + uVar4) != 0) {
      do {
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          pcVar3 = param_1;
          do {
            cVar1 = *pcVar3;
            cVar2 = pcVar3[*(longlong *)(lVar5 + 0x10) - (longlong)param_1];
            if (cVar1 != cVar2) break;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return lVar5;
          }
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x50;
      } while (uVar6 < *(ulonglong *)((longlong)local_30 + uVar4));
    }
    uVar4 = uVar4 + 8;
    if (0x17 < uVar4) {
      return 0;
    }
  } while( true );
}

// ssl3_get_req_cert_type @ 14f67e880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_get_req_cert_type(int *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x122) + 0x188);
  if (lVar2 != 0) {
    uVar4 = WPACKET_memcpy(param_2,lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x122) + 400));
    return uVar4;
  }
  ssl_set_sig_mask(local_res8,param_1,0x5000e);
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x1c);
  if ((*param_1 < 0x301) || ((uVar1 & 0x10) == 0)) {
    uVar4 = 1;
    if (((((*param_1 == 0x300) && ((uVar1 & 2) != 0)) &&
         ((iVar3 = WPACKET_put_bytes__(param_2,5,1), iVar3 == 0 ||
          (iVar3 = WPACKET_put_bytes__(param_2,6,1), iVar3 == 0)))) ||
        (((local_res8[0] & 1) == 0 && (iVar3 = WPACKET_put_bytes__(param_2,1,1), iVar3 == 0)))) ||
       ((((local_res8[0] & 2) == 0 && (iVar3 = WPACKET_put_bytes__(param_2,2,1), iVar3 == 0)) ||
        ((0x300 < *param_1 &&
         (((local_res8[0] & 8) == 0 && (iVar3 = WPACKET_put_bytes__(param_2,0x40,1), iVar3 == 0)))))
        ))) {
      return 0;
    }
  }
  else {
    uVar4 = 1;
    iVar3 = WPACKET_put_bytes__(param_2,0x16,1);
    if (((iVar3 == 0) || (iVar3 = WPACKET_put_bytes__(param_2,0xee,1), iVar3 == 0)) ||
       (iVar3 = WPACKET_put_bytes__(param_2,0xef,1), iVar3 == 0)) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

// ssl3_new @ 14f67ea10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl3_new(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_zalloc(0x410,"ssl\\s3_lib.c",0xce0);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0xa8) = lVar2;
    iVar1 = SSL_SRP_CTX_init(param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}

// ssl3_peek @ 14f67ea90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_peek(void)

{
  FUN_14f67eb60();
  return;
}

// ssl3_put_cipher_by_char @ 14f67eac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_put_cipher_by_char(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x18) & 0xff000000) != 0x3000000) {
    *param_3 = 0;
    return 1;
  }
  uVar1 = WPACKET_put_bytes__(param_2,*(uint *)(param_1 + 0x18) & 0xffff,2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_3 = 2;
  return 1;
}

// ssl3_read @ 14f67eb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_read(void)

{
  FUN_14f67eb60();
  return;
}

// FUN_14f67eb60 @ 14f67eb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f67eb60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f67eb80;
  SetLastError(0);
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x104) != 0) {
    ssl3_renegotiate_check(param_1,0);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x110) = 1;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))
                    (param_1,0x17,0,param_2,param_3,param_4,param_5,uVar2);
  if ((iVar1 == -1) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x110) == 2)) {
    ossl_statem_set_in_handshake(param_1,1);
    iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))
                      (param_1,0x17,0,param_2,param_3,param_4,param_5);
    ossl_statem_set_in_handshake(param_1,0);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x110) = 0;
  }
  return iVar1;
}

// ssl3_renegotiate_check @ 14f67ecb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_renegotiate_check(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x104) == 0) {
    return 0;
  }
  iVar2 = RECORD_LAYER_read_pending(param_1 + 0x830);
  if ((iVar2 == 0) && (iVar2 = RECORD_LAYER_write_pending(param_1 + 0x830), iVar2 == 0)) {
    if ((param_2 == 0) && (iVar2 = SSL_in_init(param_1), iVar2 != 0)) {
      return 0;
    }
    ossl_statem_set_renegotiate(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x104) = 0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x108);
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  return 0;
}

// FUN_14f67ed80 @ 14f67ed80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f67ed80(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  
  CRYPTO_free(*(undefined8 *)(param_1 + 0x188),"ssl\\s3_lib.c",0x1128);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (0xff < param_3) {
      return 0;
    }
    lVar1 = CRYPTO_memdup(param_2,param_3,"ssl\\s3_lib.c",0x112f);
    *(longlong *)(param_1 + 0x188) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *(ulonglong *)(param_1 + 400) = param_3;
  }
  return 1;
}

// ssl3_shutdown @ 14f67ee40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_shutdown(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_res8 [32];
  undefined8 uVar3;
  
  uVar3 = 0x14f67ee4c;
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar2 = SSL_in_before(), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 3;
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x44) = uVar1 | 1;
    ssl3_send_alert(param_1,1,0);
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) != 0) {
      return 0xffffffff;
    }
  }
  else if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) == 0) {
    if (((uVar1 & 2) == 0) &&
       ((**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0,0,0,0,0,local_res8,uVar3),
       (*(byte *)(param_1 + 0x44) & 2) == 0)) {
      return 0xffffffff;
    }
  }
  else {
    iVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x78))(param_1);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
  }
  if ((*(int *)(param_1 + 0x44) == 3) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) == 0)) {
    return 1;
  }
  return 0;
}

// ssl3_write @ 14f67ef30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_write(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f67ef4a;
  SetLastError(0);
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x104) != 0) {
    ssl3_renegotiate_check(param_1,0);
  }
  (**(code **)(*(longlong *)(param_1 + 8) + 0x70))(param_1,0x17,param_2,param_3,param_4,uVar1);
  return;
}

// ssl_derive @ 14f67efb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl_derive(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  
  uVar8 = 1;
  uVar6 = 0;
  local_res10 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    ossl_statem_fatal(param_1,0x50,0x24e,0x44,"ssl\\s3_lib.c",0x1000012be);
    return 0;
  }
  uVar3 = EVP_PKEY_CTX_new(param_2,0);
  iVar1 = EVP_PKEY_derive_init(uVar3);
  if (iVar1 < 1) {
LAB_14f67f152:
    uVar5 = CONCAT44(uVar8,0x12c8);
    uVar4 = uVar6;
LAB_14f67f161:
    uVar7 = 0x44;
  }
  else {
    iVar1 = EVP_PKEY_derive_set_peer(uVar3,param_3);
    if (iVar1 < 1) goto LAB_14f67f152;
    iVar1 = EVP_PKEY_derive(uVar3,0,&local_res10);
    if (iVar1 < 1) goto LAB_14f67f152;
    uVar4 = CRYPTO_malloc(local_res10,"ssl\\s3_lib.c",0x12cc);
    if (uVar4 != 0) {
      iVar1 = EVP_PKEY_derive(uVar3,uVar4,&local_res10);
      if (0 < iVar1) {
        if (param_4 == 0) {
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = uVar4;
          uVar4 = 0;
          uVar6 = 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = local_res10;
        }
        else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
                 (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
          if (*(int *)(param_1 + 200) == 0) {
            uVar5 = ssl_handshake_md(param_1);
            iVar1 = tls13_generate_secret(param_1,uVar5,0,0,0,param_1 + 0x134);
            if (iVar1 == 0) goto LAB_14f67f17f;
          }
          iVar1 = tls13_generate_handshake_secret(param_1,uVar4,local_res10);
          if (iVar1 != 0) {
            uVar6 = 1;
          }
        }
        else {
          uVar2 = ssl_generate_master_secret(param_1,uVar4,local_res10,0);
          uVar6 = (ulonglong)uVar2;
        }
        goto LAB_14f67f17f;
      }
      uVar5 = CONCAT44(uVar8,0x12d5);
      goto LAB_14f67f161;
    }
    uVar5 = CONCAT44(uVar8,0x12cf);
    uVar7 = 0x41;
  }
  ossl_statem_fatal(param_1,0x50,0x24e,uVar7,"ssl\\s3_lib.c",uVar5);
LAB_14f67f17f:
  CRYPTO_clear_free(uVar4,local_res10,"ssl\\s3_lib.c",0x12f4);
  EVP_PKEY_CTX_free(uVar3);
  return uVar6;
}

// ssl_dh_to_pkey @ 14f67f200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_dh_to_pkey(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = EVP_PKEY_new();
  iVar1 = EVP_PKEY_set1_DH(uVar2,param_1);
  if (iVar1 < 1) {
    EVP_PKEY_free(uVar2);
    return 0;
  }
  return uVar2;
}

// ssl_fill_hello_random @ 14f67f270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_fill_hello_random
              (longlong param_1,int param_2,undefined1 *param_3,ulonglong param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  __time64_t _Var3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  if (param_4 < 4) {
    return 0;
  }
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x5d0) >> 5;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x5d0) >> 6;
  }
  if ((uVar1 & 1) == 0) {
    uVar5 = param_4 & 0xffffffff;
    puVar4 = param_3;
  }
  else {
    _Var3 = _time64((__time64_t *)0x0);
    uVar5 = (ulonglong)((int)param_4 - 4);
    *param_3 = (char)((ulonglong)_Var3 >> 0x18);
    param_3[1] = (char)((ulonglong)_Var3 >> 0x10);
    param_3[2] = (char)((ulonglong)_Var3 >> 8);
    param_3[3] = (char)_Var3;
    puVar4 = param_3 + 4;
  }
  iVar2 = RAND_bytes(puVar4,uVar5);
  if (0 < iVar2) {
    if (param_4 < 9) {
      return 0;
    }
    if (param_5 == 1) {
      *(undefined8 *)(param_3 + (param_4 - 8)) = tls12downgrade;
      return iVar2;
    }
    if (param_5 == 2) {
      *(char (*) [8])(param_3 + (param_4 - 8)) = tls11downgrade;
    }
  }
  return iVar2;
}

// ssl_generate_master_secret @ 14f67f340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_master_secret(longlong param_1,void *param_2,size_t param_3,int param_4)

{
  undefined1 *_Dst;
  size_t _Size;
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if ((uVar5 & 0x1c8) == 0) {
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(longlong *)(param_1 + 0x508) + 0x50,param_2,param_3,
                       *(longlong *)(param_1 + 0x508) + 8);
    uVar4 = 0;
    if (iVar1 == 0) goto LAB_14f67f507;
  }
  else {
    _Size = *(size_t *)(*(longlong *)(param_1 + 0xa8) + 0x2d0);
    uVar5 = uVar5 & 8;
    if (uVar5 != 0) {
      param_3 = _Size;
    }
    lVar3 = _Size + 4 + param_3;
    puVar2 = (undefined1 *)CRYPTO_malloc(lVar3,"ssl\\s3_lib.c",0x1215);
    uVar4 = 0;
    if (puVar2 == (undefined1 *)0x0) goto LAB_14f67f507;
    puVar2[1] = (char)param_3;
    _Dst = puVar2 + 2;
    *puVar2 = (char)(param_3 >> 8);
    if (uVar5 == 0) {
      memcpy(_Dst,param_2,param_3);
    }
    else {
      memset(_Dst,0,param_3);
    }
    puVar2[param_3 + 3] = (char)_Size;
    _Dst[param_3] = (char)(_Size >> 8);
    memcpy(_Dst + param_3 + 2,*(void **)(*(longlong *)(param_1 + 0xa8) + 0x2c8),_Size);
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),_Size,"ssl\\s3_lib.c",
                      0x1222);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = 0;
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(longlong *)(param_1 + 0x508) + 0x50,puVar2,lVar3,
                       *(longlong *)(param_1 + 0x508) + 8);
    if (iVar1 == 0) {
      CRYPTO_clear_free(puVar2,lVar3,"ssl\\s3_lib.c",0x1228);
      uVar4 = 0;
      goto LAB_14f67f507;
    }
    CRYPTO_clear_free(puVar2,lVar3,"ssl\\s3_lib.c",0x122c);
  }
  uVar4 = 1;
LAB_14f67f507:
  if (param_2 != (void *)0x0) {
    if (param_4 == 0) {
      OPENSSL_cleanse(param_2,param_3);
    }
    else {
      CRYPTO_clear_free(param_2,param_3,"ssl\\s3_lib.c",0x123e);
    }
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = 0;
  }
  return uVar4;
}

// ssl_generate_param_group @ 14f67f590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_generate_param_group(void)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  lVar3 = 0;
  local_res10[0] = 0;
  puVar2 = (undefined4 *)tls1_group_id_lookup();
  if (puVar2 != (undefined4 *)0x0) {
    if ((*(byte *)(puVar2 + 2) & 3) == 2) {
      local_res10[0] = EVP_PKEY_new();
      if ((local_res10[0] != 0) && (iVar1 = EVP_PKEY_set_type(local_res10[0],*puVar2), iVar1 != 0))
      {
        return local_res10[0];
      }
      EVP_PKEY_free(local_res10[0]);
      return 0;
    }
    lVar3 = EVP_PKEY_CTX_new_id(0x198,0);
    if ((((lVar3 != 0) && (iVar1 = EVP_PKEY_paramgen_init(lVar3), 0 < iVar1)) &&
        (iVar1 = EVP_PKEY_CTX_ctrl(lVar3,0x198,6,0x1001,*puVar2,0), 0 < iVar1)) &&
       (iVar1 = EVP_PKEY_paramgen(lVar3,local_res10), iVar1 < 1)) {
      EVP_PKEY_free(local_res10[0]);
      local_res10[0] = 0;
    }
  }
  EVP_PKEY_CTX_free(lVar3);
  return local_res10[0];
}

// ssl_generate_pkey @ 14f67f690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_pkey(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = EVP_PKEY_CTX_new(param_1,0);
  if (lVar2 != 0) {
    iVar1 = EVP_PKEY_keygen_init(lVar2);
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_keygen(lVar2,local_res8);
      if (iVar1 < 1) {
        EVP_PKEY_free(local_res8[0]);
        local_res8[0] = 0;
      }
    }
  }
  EVP_PKEY_CTX_free(lVar2);
  return local_res8[0];
}

// ssl_generate_pkey_group @ 14f67f720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_pkey_group(undefined8 param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 1;
  lVar4 = 0;
  local_res18 = 0;
  puVar3 = (undefined4 *)tls1_group_id_lookup(param_2);
  if (puVar3 == (undefined4 *)0x0) {
    ossl_statem_fatal(param_1,0x50,0x22f,0x44,"ssl\\s3_lib.c",CONCAT44(uVar8,0x126a));
    goto LAB_14f67f884;
  }
  uVar1 = *(ushort *)(puVar3 + 2);
  if ((uVar1 & 3) == 2) {
    uVar5 = *puVar3;
  }
  else {
    uVar5 = 0x198;
  }
  lVar4 = EVP_PKEY_CTX_new_id(uVar5,0);
  if (lVar4 == 0) {
    uVar7 = CONCAT44(uVar8,0x1274);
    uVar6 = 0x41;
  }
  else {
    iVar2 = EVP_PKEY_keygen_init(lVar4);
    if (0 < iVar2) {
      if ((uVar1 & 3) != 2) {
        uVar8 = 0;
        iVar2 = EVP_PKEY_CTX_ctrl(lVar4,0x198,6,0x1001,CONCAT44(uVar6,*puVar3),0);
        if (iVar2 < 1) {
          uVar7 = CONCAT44(uVar8,0x127f);
          goto LAB_14f67f809;
        }
      }
      iVar2 = EVP_PKEY_keygen(lVar4,&local_res18);
      if (iVar2 < 1) {
        ossl_statem_fatal(param_1,0x50,0x22f,6,"ssl\\s3_lib.c",CONCAT44(uVar8,0x1284));
        EVP_PKEY_free(local_res18);
        local_res18 = 0;
      }
      goto LAB_14f67f884;
    }
    uVar7 = CONCAT44(uVar8,0x1279);
LAB_14f67f809:
    uVar6 = 6;
  }
  ossl_statem_fatal(param_1,0x50,0x22f,uVar6,"ssl\\s3_lib.c",uVar7);
LAB_14f67f884:
  EVP_PKEY_CTX_free(lVar4);
  return local_res18;
}

// ssl_get_algorithm2 @ 14f67f8b0

int ssl_get_algorithm2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xa8) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar2 == 0)) {
    return -1;
  }
  iVar1 = *(int *)(lVar2 + 0x40);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 4) == 0) {
    if (((*(uint *)(lVar2 + 0x1c) & 0x1c8) != 0) && (iVar1 == 0x505)) {
      return 0x909;
    }
  }
  else if (iVar1 == 0x909) {
    return 0x404;
  }
  return iVar1;
}

// ssl_sort_cipher_list @ 14f67f950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_sort_cipher_list(void)

{
  qsort(&DAT_154df4a00,5,0x50,(_PtFuncCompare *)&LAB_14f67ca60);
  qsort(&DAT_154df4b90,0xa4,0x50,(_PtFuncCompare *)&LAB_14f67ca60);
                    /* WARNING: Could not recover jumptable at 0x00014f67f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(&DAT_154df7ed0,2,0x50,(_PtFuncCompare *)&LAB_14f67ca60);
  return;
}

// FUN_14f67f9c0 @ 14f67f9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f67f9c0(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f67f9d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

