// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 25

// SSL_get_state @ 14f6611d0

undefined4 SSL_get_state(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}

// SSL_in_before @ 14f6611e0

undefined8 SSL_in_before(longlong param_1)

{
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x48) == 0)) {
    return 1;
  }
  return 0;
}

// SSL_in_init @ 14f661200

undefined4 SSL_in_init(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}

// SSL_is_init_finished @ 14f661210

undefined8 SSL_is_init_finished(longlong param_1)

{
  if ((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x5c) == 1)) {
    return 1;
  }
  return 0;
}

// FUN_14f661260 @ 14f661260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f661260(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = *(longlong *)(param_1 + 0x90) - *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
  lVar1 = BUF_MEM_grow_clean(*(longlong *)(param_1 + 0x88),(longlong)(int)param_2);
  if ((lVar1 != 0) && (uVar2 <= param_2)) {
    *(ulonglong *)(param_1 + 0x90) = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8) + uVar2;
    return 1;
  }
  return 0;
}

// ossl_statem_accept @ 14f661310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_statem_accept(undefined8 param_1)

{
  FUN_14f6619c0(param_1,1);
  return;
}

// ossl_statem_app_data_allowed @ 14f661330

undefined8 ossl_statem_app_data_allowed(longlong param_1)

{
  if (((*(int *)(param_1 + 0x48) != 0) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x110) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x108) != 0)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(int *)(param_1 + 0x5c) == 0xc) {
        return 1;
      }
    }
    else if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(param_1 + 0x5c) == 0x14)) {
      return 1;
    }
  }
  return 0;
}

// ossl_statem_check_finish_init @ 14f661380

void ossl_statem_check_finish_init(longlong param_1,int param_2)

{
  if (param_2 == -1) {
    if (1 < *(int *)(param_1 + 0x5c) - 0x2eU) {
      return;
    }
    *(undefined4 *)(param_1 + 100) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      if (*(int *)(param_1 + 0x84) != 0xc) {
        return;
      }
      if (*(int *)(param_1 + 0x5c) != 0x2e) {
        return;
      }
      *(undefined4 *)(param_1 + 100) = 1;
      return;
    }
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x5c) != 0x2e) {
        return;
      }
    }
    else {
      if (1 < *(int *)(param_1 + 0x5c) - 0x2eU) {
        return;
      }
      if (*(int *)(param_1 + 0x84) == 4) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 100) = 1;
    if (param_2 == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x84) != 3) {
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 7;
  return;
}

// ossl_statem_clear @ 14f661400

void ossl_statem_clear(longlong param_1)

{
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}

// ossl_statem_connect @ 14f661420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_statem_connect(undefined8 param_1)

{
  FUN_14f6619c0(param_1,0);
  return;
}

// ossl_statem_export_allowed @ 14f661440

undefined8 ossl_statem_export_allowed(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) != 0) &&
     (*(int *)(param_1 + 0x5c) != 0x24)) {
    return 1;
  }
  return 0;
}

// ossl_statem_export_early_allowed @ 14f661470

undefined8 ossl_statem_export_early_allowed(longlong param_1)

{
  if ((*(int *)(param_1 + 0x710) != 2) &&
     ((*(int *)(param_1 + 0x38) != 0 || (*(int *)(param_1 + 0x710) == 0)))) {
    return 0;
  }
  return 1;
}

// ossl_statem_fatal @ 14f6614a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_statem_fatal(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 param_6)

{
  ERR_put_error(0x14,param_3,param_4,param_5,param_6,0x14f6614b0);
  if ((*(int *)(param_1 + 100) == 0) || (*(int *)(param_1 + 0x48) != 1)) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if ((param_2 != -1) && (*(int *)(param_1 + 0x7c) != 1)) {
      ssl3_send_alert(param_1,2,param_2);
    }
  }
  return;
}

// ossl_statem_get_in_handshake @ 14f661530

undefined4 ossl_statem_get_in_handshake(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}

// ossl_statem_in_error @ 14f661540

bool ossl_statem_in_error(longlong param_1)

{
  return *(int *)(param_1 + 0x48) == 1;
}

// ossl_statem_set_hello_verify_done @ 14f661550

void ossl_statem_set_hello_verify_done(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0x14;
  return;
}

// ossl_statem_set_in_handshake @ 14f661570

void ossl_statem_set_in_handshake(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    return;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  return;
}

// ossl_statem_set_in_init @ 14f661590

void ossl_statem_set_in_init(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}

// ossl_statem_set_renegotiate @ 14f6615a0

void ossl_statem_set_renegotiate(longlong param_1)

{
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x13;
  return;
}

// ossl_statem_skip_early_data @ 14f6615c0

undefined8 ossl_statem_skip_early_data(longlong param_1)

{
  if ((((*(int *)(param_1 + 0x710) == 1) && (*(int *)(param_1 + 0x38) != 0)) &&
      (*(int *)(param_1 + 0x5c) == 0x2e)) && (*(int *)(param_1 + 0x4d8) != 2)) {
    return 1;
  }
  return 0;
}

// FUN_14f6615f0 @ 14f6615f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6615f0(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  undefined4 uVar11;
  undefined8 local_48;
  ulonglong local_40;
  
  pcVar6 = *(code **)(param_1 + 0x568);
  local_res10 = 0;
  if (pcVar6 == (code *)0x0) {
    pcVar6 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    pcVar5 = ossl_statem_client_read_transition;
    pcVar8 = ossl_statem_client_process_message;
    pcVar9 = (code *)&ossl_statem_client_max_message_size;
    pcVar10 = ossl_statem_client_post_process_message;
  }
  else {
    pcVar5 = ossl_statem_server_read_transition;
    pcVar8 = ossl_statem_server_process_message;
    pcVar9 = ossl_statem_server_max_message_size;
    pcVar10 = ossl_statem_server_post_process_message;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    *(undefined4 *)(param_1 + 0x5e8) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
LAB_14f6616a0:
  while (iVar3 = *(int *)(param_1 + 0x54), iVar3 != 0) {
    if (iVar3 == 1) goto LAB_14f6617b0;
    if (iVar3 != 2) {
      uVar11 = 0x2b1;
      uVar7 = 0x44;
      goto LAB_14f66187a;
    }
    iVar3 = (*pcVar10)(param_1,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar11 = 0x29b;
      goto LAB_14f661874;
    }
    if (iVar3 == 1) {
      bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60);
      goto LAB_14f6618f2;
    }
    if (iVar3 == 2) goto LAB_14f66182c;
    if (iVar3 - 3U < 3) {
      return 0;
    }
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    iVar3 = tls_get_message_header(param_1,local_res8);
  }
  else {
    iVar3 = dtls_get_message(param_1,local_res8,&local_res10);
  }
  if (iVar3 == 0) {
    return 0;
  }
  if (pcVar6 != (code *)0x0) {
    uVar7 = 0x2001;
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar7 = 0x1001;
    }
    (*pcVar6)(param_1,uVar7,1);
  }
  iVar3 = (*pcVar5)(param_1,local_res8[0]);
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x228);
  uVar4 = (*pcVar9)(param_1);
  if (uVar4 < uVar2) {
    ERR_put_error(0x14,0x160,0x98,"ssl\\statem\\statem.c",0x25b);
    if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (*(int *)(param_1 + 0x7c) == 1) {
      return 0;
    }
    uVar7 = 0x2f;
    goto LAB_14f66197c;
  }
  if ((((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
      (uVar2 != 0)) && (iVar3 = FUN_14f661260(param_1,uVar2 + 4), iVar3 == 0)) {
    uVar11 = 0x265;
    uVar7 = 7;
    goto LAB_14f66187a;
  }
  *(undefined4 *)(param_1 + 0x54) = 1;
LAB_14f6617b0:
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
     (iVar3 = tls_get_message_body(param_1,&local_res10), iVar3 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x5e8) = 0;
  if (local_res10 < 0x8000000000000000) {
    local_48 = *(undefined8 *)(param_1 + 0x90);
    local_40 = local_res10;
    iVar3 = (*pcVar8)(param_1,&local_48);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60);
LAB_14f6618f2:
        if ((bVar1 & 8) != 0) {
          dtls1_stop_timer(param_1);
        }
        return 1;
      }
      if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 0x54) = 2;
        *(undefined4 *)(param_1 + 0x58) = 3;
      }
      else {
LAB_14f66182c:
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      goto LAB_14f6616a0;
    }
    if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
      return 0;
    }
    uVar11 = 0x283;
LAB_14f661874:
    uVar7 = 0x100;
  }
  else {
    uVar11 = 0x279;
    uVar7 = 0x44;
  }
LAB_14f66187a:
  ERR_put_error(0x14,0x160,uVar7,"ssl\\statem\\statem.c",uVar11);
  if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  if (*(int *)(param_1 + 0x7c) == 1) {
    return 0;
  }
  uVar7 = 0x50;
LAB_14f66197c:
  ssl3_send_alert(param_1,2,uVar7);
  return 0;
}

// FUN_14f6619c0 @ 14f6619c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6619c0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f6619d9;
  lVar8 = 0;
  uVar6 = 0xffffffff;
  if (param_1[0x12] == 1) {
    return 0xffffffff;
  }
  ERR_clear_error();
  SetLastError(0);
  pcVar5 = *(code **)(param_1 + 0x15a);
  if (pcVar5 == (code *)0x0) {
    pcVar5 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108);
  }
  param_1[0x1b] = param_1[0x1b] + 1;
  if ((((param_1[0x19] == 0) || ((param_1[0x17] == 0 && (param_1[0x12] == 0)))) &&
      ((**(uint **)(param_1 + 0x2a) & 0x800) == 0)) && (iVar2 = SSL_clear(param_1), iVar2 == 0)) {
    return 0xffffffff;
  }
  uVar7 = uVar6;
  if (param_1[0x12] == 0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  else if (param_1[0x12] != 4) {
    do {
      if (param_1[0x12] == 2) {
        iVar2 = FUN_14f6615f0(param_1);
        if (iVar2 != 1) goto LAB_14f661cdb;
        param_1[0x12] = 3;
        param_1[0x13] = 0;
      }
      else {
        if (param_1[0x12] != 3) {
          if (((param_1[0x19] == 0) || (param_1[0x12] != 1)) &&
             ((ERR_put_error(0x14,0x161,0x100,"ssl\\statem\\statem.c",0x1c7), param_1[0x19] == 0 ||
              (param_1[0x12] != 1)))) {
            param_1[0x19] = 1;
            param_1[0x12] = 1;
            if (param_1[0x1f] != 1) {
              ssl3_send_alert(param_1,2,0x50);
            }
          }
          ERR_put_error(0x14,0x161,0x42,"ssl\\statem\\statem.c",0x1c8);
          goto LAB_14f661cdb;
        }
        iVar2 = FUN_14f661e70(param_1);
        if (iVar2 == 1) {
          param_1[0x12] = 2;
          param_1[0x15] = 0;
        }
        else {
          if (iVar2 != 2) goto LAB_14f661cdb;
          param_1[0x12] = 4;
        }
      }
      uVar1 = param_1[0x12];
joined_r0x00014f661c81:
    } while (uVar1 != 4);
    uVar7 = 1;
    goto LAB_14f661cdb;
  }
  param_1[0xe] = param_2;
  if ((pcVar5 != (code *)0x0) &&
     ((((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0 ||
        (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) ||
       ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0)) ||
      ((iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304 || (iVar2 == 0x10000)))))) {
    (*pcVar5)(param_1,0x10,1);
  }
  uVar1 = *param_1;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    if ((uVar1 & 0xffffff00) == 0x300) goto LAB_14f661b46;
    uVar10 = 0x16e;
    lVar8 = 0;
  }
  else if (((uVar1 & 0xff00) == 0xfe00) || ((param_2 == 0 && ((uVar1 & 0xff00) == 0x100)))) {
LAB_14f661b46:
    uVar9 = 0;
    iVar2 = ssl_security(param_1,9,0,uVar1,0,uVar10);
    if (iVar2 == 0) {
      uVar10 = 0x175;
      lVar8 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x22) != 0) {
LAB_14f661bb1:
        iVar2 = ssl3_setup_buffers(param_1);
        if (iVar2 == 0) {
          uVar10 = CONCAT44(uVar9,0x18a);
        }
        else {
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xf0) = 0;
          iVar2 = ssl_init_wbio_buffer(param_1);
          if (iVar2 != 0) {
            if (((param_1[0x17] != 0) || (param_1[0x12] != 0)) && (param_1[0x1e0] == 0)) {
LAB_14f661c75:
              param_1[0x12] = 3;
              param_1[0x13] = 0;
              uVar1 = param_1[0x12];
              goto joined_r0x00014f661c81;
            }
            iVar2 = tls_setup_handshake(param_1);
            if (iVar2 != 0) {
              if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
                 (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
                param_1[0x1a] = 1;
              }
              goto LAB_14f661c75;
            }
            goto LAB_14f661cdb;
          }
          uVar10 = CONCAT44(uVar9,0x19d);
        }
        ERR_put_error(0x14,0x161,0x44,"ssl\\statem\\statem.c",uVar10);
        if ((param_1[0x19] == 0) || (uVar7 = 0xffffffff, param_1[0x12] != 1)) {
          param_1[0x19] = 1;
          param_1[0x12] = 1;
          uVar7 = uVar6;
        }
        goto LAB_14f661cdb;
      }
      lVar3 = BUF_MEM_new();
      if (lVar3 == 0) {
        uVar10 = 0x17c;
        lVar8 = lVar3;
      }
      else {
        lVar4 = BUF_MEM_grow(lVar3,0x4000);
        if (lVar4 != 0) {
          *(longlong *)(param_1 + 0x22) = lVar3;
          goto LAB_14f661bb1;
        }
        uVar10 = 0x181;
        lVar8 = lVar3;
      }
    }
  }
  else {
    uVar10 = 0x168;
  }
  ERR_put_error(0x14,0x161,0x44,"ssl\\statem\\statem.c",uVar10);
  if ((param_1[0x19] == 0) || (uVar7 = 0xffffffff, param_1[0x12] != 1)) {
    param_1[0x19] = 1;
    param_1[0x12] = 1;
    uVar7 = uVar6;
  }
LAB_14f661cdb:
  param_1[0x1b] = param_1[0x1b] - 1;
  BUF_MEM_free(lVar8);
  if (pcVar5 != (code *)0x0) {
    uVar10 = 0x2002;
    if (param_2 == 0) {
      uVar10 = 0x1002;
    }
    (*pcVar5)(param_1,uVar10,uVar7);
  }
  return uVar7;
}

// FUN_14f661db0 @ 14f661db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f661db0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x5c) != 0x10) && (*(int *)(param_1 + 0x5c) != 0x23)) {
                    /* WARNING: Could not recover jumptable at 0x00014f661ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x78))();
    return;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    dtls1_do_write();
    return;
  }
  ssl3_do_write(param_1,0x14);
  return;
}

// statem_flush @ 14f661e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 statem_flush(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 2;
  iVar1 = BIO_ctrl(*(undefined8 *)(param_1 + 0x18),0xb,0,0);
  if (iVar1 < 1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 1;
}

// FUN_14f661e70 @ 14f661e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f661e70(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  int local_res8 [2];
  code *local_res10;
  undefined4 uVar8;
  undefined1 local_58 [48];
  
  pcVar4 = *(code **)(param_1 + 0x568);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    pcVar3 = ossl_statem_client_write_transition;
    pcVar2 = ossl_statem_client_pre_work;
    pcVar6 = ossl_statem_client_post_work;
    pcVar7 = ossl_statem_client_construct_message;
  }
  else {
    pcVar3 = ossl_statem_server_write_transition;
    pcVar2 = ossl_statem_server_pre_work;
    pcVar6 = ossl_statem_server_post_work;
    pcVar7 = ossl_statem_server_construct_message;
  }
LAB_14f661f00:
  while (iVar1 = *(int *)(param_1 + 0x4c), iVar1 == 0) {
    if (pcVar4 != (code *)0x0) {
      uVar5 = 0x2001;
      if (*(int *)(param_1 + 0x38) == 0) {
        uVar5 = 0x1001;
      }
      (*pcVar4)(param_1,uVar5,1);
    }
    iVar1 = (*pcVar3)(param_1);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar8 = 0x324;
      goto LAB_14f6621f3;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      *(undefined4 *)(param_1 + 0x50) = 3;
    }
    else if (iVar1 == 2) {
      return 1;
    }
  }
  if (iVar1 == 1) {
    iVar1 = (*pcVar2)(param_1,*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar8 = 0x32c;
    }
    else {
      if (iVar1 == 1) {
        return 2;
      }
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x4c) = 2;
      }
      else if (iVar1 - 3U < 3) {
        return 0;
      }
      iVar1 = (*pcVar7)(param_1,local_58,&local_res10,local_res8);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_res8[0] == -1) {
        *(undefined4 *)(param_1 + 0x4c) = 3;
        *(undefined4 *)(param_1 + 0x50) = 3;
        goto LAB_14f661f00;
      }
      iVar1 = WPACKET_init(local_58,*(undefined8 *)(param_1 + 0x88));
      if ((iVar1 == 0) ||
         (iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x68))
                            (param_1,local_58,local_res8[0]), iVar1 == 0)) {
        WPACKET_cleanup(local_58);
        uVar5 = 0x44;
        uVar8 = 0x348;
        goto LAB_14f6621f9;
      }
      if ((local_res10 == (code *)0x0) || (iVar1 = (*local_res10)(param_1,local_58), iVar1 != 0)) {
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x70))
                          (param_1,local_58,local_res8[0]);
        if ((iVar1 == 0) || (iVar1 = WPACKET_finish(local_58), iVar1 == 0)) {
          WPACKET_cleanup(local_58);
          uVar5 = 0x44;
          uVar8 = 0x354;
          goto LAB_14f6621f9;
        }
        goto LAB_14f662043;
      }
      WPACKET_cleanup(local_58);
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar8 = 0x34d;
    }
  }
  else {
    if (iVar1 == 2) {
LAB_14f662043:
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) &&
         (*(int *)(param_1 + 0x78) != 0)) {
        dtls1_start_timer(param_1);
      }
      if ((*(int *)(param_1 + 0x5c) == 0x10) || (*(int *)(param_1 + 0x5c) == 0x23)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          iVar1 = ssl3_do_write(param_1,0x14);
        }
        else {
          iVar1 = dtls1_do_write();
        }
      }
      else {
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x78))(param_1);
      }
      if (iVar1 < 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x4c) = 3;
      *(undefined4 *)(param_1 + 0x50) = 3;
    }
    else if (iVar1 != 3) {
      uVar8 = 0x37b;
      uVar5 = 0x44;
      goto LAB_14f6621f9;
    }
    iVar1 = (*pcVar6)(param_1,*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        return 2;
      }
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else if (iVar1 - 3U < 3) {
        return 0;
      }
      goto LAB_14f661f00;
    }
    if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
      return 0;
    }
    uVar8 = 0x369;
  }
LAB_14f6621f3:
  uVar5 = 0x100;
LAB_14f6621f9:
  ERR_put_error(0x14,0x24a,uVar5,"ssl\\statem\\statem.c",uVar8);
  if ((*(int *)(param_1 + 100) == 0) || (*(int *)(param_1 + 0x48) != 1)) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (*(int *)(param_1 + 0x7c) != 1) {
      ssl3_send_alert(param_1,2);
    }
  }
  return 0;
}

