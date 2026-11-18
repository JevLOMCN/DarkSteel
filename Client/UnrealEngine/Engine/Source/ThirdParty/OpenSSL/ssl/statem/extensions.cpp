// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 33

// FUN_14f6840f0 @ 14f6840f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6840f0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (((*(uint *)(param_1 + 0x5cc) & 0x40004) != 0) || (param_3 != 0)) {
      return 1;
    }
    uVar1 = 0x380;
  }
  else {
    if (*(int *)(param_1 + 0x780) == 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + 0x5cc) & 0x40000) != 0) {
      return 1;
    }
    if (param_3 != 0) {
      return 1;
    }
    uVar1 = 0x38c;
  }
  ossl_statem_fatal(param_1,0x28,0x1e3,0x152,"ssl\\statem\\extensions.c",uVar1,0x14f6840fa);
  return 0;
}

// FUN_14f684180 @ 14f684180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684180(longlong param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x740) = 0;
    CRYPTO_free(*(undefined8 *)(param_1 + 0x638),"ssl\\statem\\extensions.c",0x399);
    *(undefined8 *)(param_1 + 0x638) = 0;
  }
  return 1;
}

// FUN_14f6841e0 @ 14f6841e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6841e0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_res8 [2];
  undefined4 uVar9;
  
  uVar9 = 1;
  local_res8[0] = 0x70;
  iVar7 = 3;
  uVar3 = SSL_get_options();
  lVar6 = *(longlong *)(param_1 + 0x598);
  if ((lVar6 == 0) || (lVar2 = *(longlong *)(param_1 + 0x768), lVar2 == 0)) {
    uVar5 = CONCAT44(uVar9,0x3a8);
  }
  else {
    if (*(code **)(lVar6 + 0x1f8) == (code *)0x0) {
      if (*(code **)(lVar2 + 0x1f8) != (code *)0x0) {
        iVar7 = (**(code **)(lVar2 + 0x1f8))(param_1,local_res8,*(undefined8 *)(lVar2 + 0x200));
      }
    }
    else {
      iVar7 = (**(code **)(lVar6 + 0x1f8))(param_1,local_res8,*(undefined8 *)(lVar6 + 0x200));
    }
    if ((((*(int *)(param_1 + 0x38) != 0) && (param_3 != 0)) && (iVar7 == 0)) &&
       (*(int *)(param_1 + 200) == 0)) {
      CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x208),
                  "ssl\\statem\\extensions.c",0x3be);
      uVar5 = CRYPTO_strdup(*(undefined8 *)(param_1 + 0x638),"ssl\\statem\\extensions.c",0x3bf);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x208) = uVar5;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208) == 0) &&
         (*(longlong *)(param_1 + 0x638) != 0)) {
        uVar5 = CONCAT44(uVar9,0x3c2);
        ossl_statem_fatal(param_1,0x50,0x22e,0x44,"ssl\\statem\\extensions.c",uVar5);
        uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
    }
    if (((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) &&
       ((*(longlong *)(param_1 + 0x598) != *(longlong *)(param_1 + 0x768) &&
        (*(int *)(param_1 + 0x4d8) == 0)))) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x598) + 0x74);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x768) + 0x74);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if ((((iVar7 != 0) || (*(int *)(param_1 + 0x678) == 0)) || ((~(uVar3 >> 0xe) & 1) == 0)) ||
       ((uVar3 = SSL_get_options(param_1), (uVar3 >> 0xe & 1) == 0 ||
        (*(undefined4 *)(param_1 + 0x678) = 0, *(int *)(param_1 + 200) != 0)))) {
LAB_14f68440e:
      if (iVar7 == 1) {
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
            (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) || (iVar7 == 0x10000)) {
          ssl3_send_alert(param_1,1,local_res8[0]);
        }
        *(undefined4 *)(param_1 + 0x740) = 0;
        return 1;
      }
      if (iVar7 != 2) {
        if (iVar7 != 3) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x740) = 0;
        return 1;
      }
      uVar8 = 0xea;
      uVar5 = CONCAT44(uVar9,0x3f3);
      uVar9 = local_res8[0];
      goto LAB_14f68449f;
    }
    lVar6 = SSL_get_session(param_1);
    if (lVar6 == 0) {
      uVar5 = CONCAT44(uVar9,0x3eb);
    }
    else {
      CRYPTO_free(*(undefined8 *)(lVar6 + 0x210),"ssl\\statem\\extensions.c",0x3df);
      *(undefined8 *)(lVar6 + 0x210) = 0;
      *(undefined8 *)(lVar6 + 0x218) = 0;
      *(undefined8 *)(lVar6 + 0x220) = 0;
      iVar4 = ssl_generate_session_id(param_1,lVar6);
      if (iVar4 != 0) goto LAB_14f68440e;
      uVar5 = CONCAT44(uVar9,0x3e6);
    }
  }
  uVar8 = 0x44;
  uVar9 = 0x50;
LAB_14f68449f:
  ossl_statem_fatal(param_1,uVar9,0x22e,uVar8,"ssl\\statem\\extensions.c",uVar5);
  return 0;
}

// FUN_14f6844d0 @ 14f6844d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6844d0(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x698),"ssl\\statem\\extensions.c",0x409);
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  return 1;
}

// FUN_14f684520 @ 14f684520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684520(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  if ((((*(int *)(param_1 + 0x38) == 0) && (*(longlong *)(param_1 + 0x688) != 0)) &&
      (*(longlong *)(param_1 + 0x680) != 0)) &&
     (((pcVar5 = *(char **)(param_1 + 0x698), pcVar5 != (char *)0x0 &&
       (uVar2 = *(ulonglong *)(param_1 + 0x690), uVar2 != 0)) &&
      ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238),
       (*(byte *)(lVar3 + 0x1c) & 4) != 0 || ((*(byte *)(lVar3 + 0x20) & 8) != 0)))))) {
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        if (cVar1 == '\0') break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    if (uVar4 == uVar2) {
      ossl_statem_fatal(param_1,0x2f,0x1e5,0x9d,"ssl\\statem\\extensions.c",0x42e,0x14f68452a);
      return 0;
    }
  }
  return 1;
}

// FUN_14f684610 @ 14f684610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684610(longlong param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x640) = 0xffffffff;
    return 1;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 0x668),"ssl\\statem\\extensions.c",0x449);
  *(undefined8 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0;
  return 1;
}

// FUN_14f6846a0 @ 14f6846a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6846a0(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),"ssl\\statem\\extensions.c",
              0x45d);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0),"ssl\\statem\\extensions.c",
                0x461);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f8) = 0;
  }
  return 1;
}

// FUN_14f684750 @ 14f684750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684750(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((param_3 == 0) && (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x230) != 0)) {
      *(undefined4 *)(param_1 + 0x714) = 0;
    }
  }
  else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
           (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    uVar2 = tls_handle_alpn();
    return uVar2;
  }
  return 1;
}

// FUN_14f6847c0 @ 14f6847c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6847c0(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2f0),"ssl\\statem\\extensions.c",
              0x489);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x300) = 0;
  return 1;
}

// FUN_14f684820 @ 14f684820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684820(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e8),"ssl\\statem\\extensions.c",
              0x47f);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2f8) = 0;
  return 1;
}

// FUN_14f684880 @ 14f684880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684880(longlong param_1)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260),X509_NAME_free);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260) = 0;
  return 1;
}

// FUN_14f6848d0 @ 14f6848d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6848d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  uVar4 = 1;
  lVar2 = get_ca_names();
  if (lVar2 == 0) {
    return 2;
  }
  iVar1 = OPENSSL_sk_num(lVar2);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x2f,2);
  if ((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    uVar3 = CONCAT44(uVar4,0x4dc);
  }
  else {
    iVar1 = construct_ca_names(param_1,lVar2,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = WPACKET_close(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = CONCAT44(uVar4,0x4e8);
  }
  ossl_statem_fatal(param_1,0x50,0x21e,0x44,"ssl\\statem\\extensions.c",uVar3);
  return 0;
}

// FUN_14f6849d0 @ 14f6849d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6849d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = parse_ca_names();
  if (iVar1 != 0) {
    if (*(longlong *)(param_2 + 8) == 0) {
      return 1;
    }
    ossl_statem_fatal(param_1,0x32,0x236,0x6e,"ssl\\statem\\extensions.c",CONCAT44(uVar2,0x4f7));
  }
  return 0;
}

// FUN_14f684a50 @ 14f684a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684a50(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 2000),"ssl\\statem\\extensions.c",0x493);
  *(undefined8 *)(param_1 + 2000) = 0;
  return 1;
}

// FUN_14f684af0 @ 14f684af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684af0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = **(uint **)(param_1 + 0xa8);
  if (((uVar1 >> 9 & 1) == 0) && ((uVar1 >> 0xc & 1) != 0)) {
    ossl_statem_fatal(param_1,0x28,0x1e6,0x68,"ssl\\statem\\extensions.c",0x4b4,0x14f684afa);
    return 0;
  }
  if ((*(int *)(param_1 + 0x38) == 0) &&
     ((*(int *)(param_1 + 200) != 0 &&
      (((~(uVar1 >> 9) ^ ~*(uint *)(*(longlong *)(param_1 + 0x508) + 0x260)) & 1) != 0)))) {
    ossl_statem_fatal(param_1,0x28,0x1e6,0x68,"ssl\\statem\\extensions.c",0x4bf,0x14f684afa);
    return 0;
  }
  return 1;
}

// FUN_14f684bd0 @ 14f684bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684bd0(longlong param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong local_res8;
  longlong local_res20;
  undefined4 uVar7;
  
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
       (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) ||
     ((param_2 >> 0xb & 1) != 0)) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x38) == 0) && (param_3 == 0)) &&
     ((*(int *)(param_1 + 200) == 0 || ((*(byte *)(param_1 + 0x708) & 1) == 0)))) {
    ossl_statem_fatal(param_1,0x6d,0x1f7,0x65,"ssl\\statem\\extensions.c",0x52d);
    return 0;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    if (param_3 != 0) {
      return 1;
    }
    iVar3 = tls13_generate_handshake_secret(param_1,0,0);
    if (iVar3 != 0) {
      return 1;
    }
    uVar7 = 0x5ae;
  }
  else if (*(longlong *)(*(uint **)(param_1 + 0xa8) + 0x102) == 0) {
    if (((*(int *)(param_1 + 0x4d8) == 0) && (param_3 != 0)) &&
       ((*(int *)(param_1 + 200) == 0 || ((*(byte *)(param_1 + 0x708) & 2) != 0)))) {
      uVar4 = *(undefined8 *)(param_1 + 0x6b8);
      uVar2 = *(undefined8 *)(param_1 + 0x6b0);
      tls1_get_supported_groups(param_1,&local_res20,&local_res8);
      uVar5 = 0;
      if (local_res8 != 0) {
        do {
          uVar1 = *(undefined2 *)(local_res20 + uVar5 * 2);
          iVar3 = check_in_list(param_1,uVar1,uVar4,uVar2,1);
          if (iVar3 != 0) {
            if (uVar5 < local_res8) {
              *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406) = uVar1;
              goto LAB_14f684d93;
            }
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_res8);
      }
    }
    if ((*(int *)(param_1 + 200) == 0) || ((*(byte *)(param_1 + 0x708) & 1) == 0)) {
      uVar7 = 0x58b;
      uVar4 = 0x6d;
      if (param_3 != 0) {
        uVar4 = 0x28;
      }
      uVar6 = 0x65;
      goto LAB_14f684e01;
    }
    if (((**(uint **)(param_1 + 0xa8) & 0x800) == 0) || (*(int *)(param_1 + 0x728) != 0))
    goto LAB_14f684da4;
    if (*(int *)(param_1 + 0x4d8) == 0) goto LAB_14f684d93;
    uVar7 = 0x598;
  }
  else {
    if (((**(uint **)(param_1 + 0xa8) & 0x800) == 0) || (*(int *)(param_1 + 0x728) != 0)) {
LAB_14f684da4:
      if (*(int *)(param_1 + 0x4d8) != 1) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x4d8) = 2;
      return 1;
    }
    if (*(int *)(param_1 + 0x4d8) == 0) {
LAB_14f684d93:
      *(undefined4 *)(param_1 + 0x4d8) = 1;
      return 1;
    }
    uVar7 = 0x55e;
  }
  uVar4 = 0x50;
  uVar6 = 0x44;
LAB_14f684e01:
  ossl_statem_fatal(param_1,uVar4,0x1f7,uVar6,"ssl\\statem\\extensions.c",uVar7);
  return 0;
}

// FUN_14f684e60 @ 14f684e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684e60(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((((param_3 == 0) &&
       ((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0)) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) &&
     ((iVar1 != 0x10000 && (*(int *)(param_1 + 200) == 0)))) {
    ossl_statem_fatal(param_1,0x6d,0x1f1,0x70,"ssl\\statem\\extensions.c",0x50b,0x14f684e6a);
    return 0;
  }
  return 1;
}

// FUN_14f684ee0 @ 14f684ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684ee0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    if ((((*(int *)(param_1 + 0x1710) == 0) || (*(int *)(param_1 + 200) == 0)) ||
        (*(int *)(param_1 + 0x84) != 9)) ||
       (((*(int *)(param_1 + 0x714) == 0 || (*(int *)(param_1 + 0x4d8) != 0)) ||
        ((*(code **)(param_1 + 0x1758) != (code *)0x0 &&
         (iVar1 = (**(code **)(param_1 + 0x1758))(param_1,*(undefined8 *)(param_1 + 0x1760)),
         iVar1 == 0)))))) {
      *(undefined4 *)(param_1 + 0x710) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x710) = 2;
      uVar2 = tls13_change_cipher_state(param_1,0x61);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
    return 1;
  }
  if (param_2 != 0x400) {
    return 1;
  }
  if (*(int *)(param_1 + 0x714) != 0) {
    return 1;
  }
  ossl_statem_fatal(param_1,0x2f,0x22c,0xe9,"ssl\\statem\\extensions.c",0x100000688);
  return 0;
}

// FUN_14f684fd0 @ 14f684fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f684fd0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 200) != 0)) &&
      ((byte)(*(char *)(*(longlong *)(param_1 + 0x508) + 0x240) - 1U) < 4)) && (param_3 == 0)) {
    ossl_statem_fatal(param_1,0x6d,0x22d,0x6e,"ssl\\statem\\extensions.c",0x6ae,0x14f684fda);
    return 0;
  }
  if (((*(longlong *)(param_1 + 0x508) != 0) &&
      (cVar1 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x240), (byte)(cVar1 - 1U) < 4)) &&
     ((*(ulonglong *)(param_1 + 0x5f8) < (ulonglong)(uint)(0x200 << (cVar1 - 1U & 0x1f)) &&
      (iVar2 = ssl3_setup_buffers(param_1), iVar2 == 0)))) {
    return 0;
  }
  return 1;
}

// FUN_14f6850b0 @ 14f6850b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6850b0(longlong param_1,undefined8 param_2,int param_3)

{
  if ((((*(int *)(param_1 + 0x38) != 0) && (param_3 != 0)) && (*(longlong *)(param_1 + 0x738) != 0))
     && (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x738) + 0x288) + 0x2e0) == 0)) {
    ossl_statem_fatal(param_1,0x6d,0x27f,0x136,"ssl\\statem\\extensions.c",0x6ce,0x14f6850ba);
    return 0;
  }
  return 1;
}

// FUN_14f6851d0 @ 14f6851d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6851d0(undefined8 *param_1,undefined8 *param_2)

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

// FUN_14f685250 @ 14f685250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f685250(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (2 < (ulonglong)param_1[1]) {
    uVar3 = param_1[1] - 3;
    uVar2 = (ulonglong)CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]);
    if (uVar2 <= uVar3) {
      *param_1 = puVar1 + 3 + uVar2;
      param_1[1] = uVar3 - uVar2;
      *param_2 = puVar1 + 3;
      param_2[1] = uVar2;
      return 1;
    }
  }
  return 0;
}

// extension_is_relevant @ 14f685430

undefined8 extension_is_relevant(int *param_1,byte param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  
  if ((param_3 >> 0xb & 1) == 0) {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = true;
  }
  if ((((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) ||
      ((param_2 & 4) == 0)) && ((*param_1 != 0x300 || ((param_2 & 8) != 0)))) {
    if (bVar2) {
      if ((param_2 & 0x10) != 0) {
        return 0;
      }
    }
    else if (((param_2 & 0x20) != 0) && (-1 < (char)param_3)) {
      return 0;
    }
    if ((((param_1[0xe] == 0) || (bVar2)) || ((param_2 & 0x20) == 0)) &&
       ((param_1[0x32] == 0 || ((param_2 & 0x40) == 0)))) {
      return 1;
    }
  }
  return 0;
}

// should_add_extension @ 14f6854f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 should_add_extension(longlong param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((((param_3 & param_2) != 0) && (iVar1 = extension_is_relevant(), iVar1 != 0)) &&
     ((((param_2 & 0x20) == 0 || (-1 < (char)param_3)) ||
      (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0 &&
       (0x303 < param_4)))))) {
    return 1;
  }
  return 0;
}

// FUN_14f685570 @ 14f685570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f685570(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f685590 @ 14f685590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f685590(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// tls_collect_extensions @ 14f6855d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_collect_extensions
          (longlong param_1,undefined8 *param_2,uint param_3,longlong *param_4,longlong *param_5,
          int param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *local_res8;
  longlong local_res10;
  uint local_res18;
  longlong *local_res20;
  uint uStack_50;
  
  lVar6 = *(longlong *)(param_1 + 0x488);
  uVar14 = 0;
  puVar12 = (undefined1 *)*param_2;
  uVar11 = param_2[1];
  lVar13 = lVar6 + 0x1d8;
  *param_4 = 0;
  local_res18 = param_3 & 0x80;
  local_res20 = param_4;
  if ((param_3 & 0x80) != 0) {
    custom_ext_init(*(longlong *)(param_1 + 0x488) + 0x1d8);
  }
  uVar15 = uVar14;
  if (lVar13 != 0) {
    uVar15 = *(ulonglong *)(lVar6 + 0x1e0);
  }
  local_res10 = uVar15 + 0x1a;
  lVar6 = CRYPTO_zalloc(local_res10 * 0x28,"ssl\\statem\\extensions.c",0x241);
  uVar15 = uVar14;
  if (lVar6 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1b3,0x41,"ssl\\statem\\extensions.c",0x244);
    return 0;
  }
  while (uVar11 != 0) {
    puVar7 = puVar12;
    if (uVar11 < 2) {
LAB_14f6858cb:
      ossl_statem_fatal(param_1,0x32,0x1b3,0x6e,"ssl\\statem\\extensions.c",0x251,puVar7);
      goto LAB_14f68598e;
    }
    puVar7 = puVar12 + 2;
    uVar9 = (uint)CONCAT11(*puVar12,puVar12[1]);
    if (uVar11 - 2 < 2) goto LAB_14f6858cb;
    uVar2 = *puVar7;
    puVar1 = puVar12 + 4;
    uVar3 = puVar12[3];
    uVar8 = (ulonglong)CONCAT11(uVar2,uVar3);
    if (uVar11 - 4 < uVar8) goto LAB_14f6858cb;
    puVar12 = puVar1 + uVar8;
    uVar11 = (uVar11 - 4) - uVar8;
    iVar5 = FUN_14f686470(param_1,param_3,uVar9,lVar13,lVar6,&local_res8);
    if (((iVar5 == 0) || ((local_res8 != (longlong *)0x0 && ((int)local_res8[2] == 1)))) ||
       ((uVar9 == 0x29 && ((local_res18 != 0 && (uVar11 != 0)))))) {
      ossl_statem_fatal(param_1,0x2f,0x1b3,0x6e,"ssl\\statem\\extensions.c",0x25f);
      goto LAB_14f68598e;
    }
    uVar8 = ((longlong)local_res8 - lVar6) / 0x28;
    if (((((uint)uVar8 < 0x1a) && ((param_3 & 0x6080) == 0)) && (uVar9 != 0x2c)) &&
       (((uVar9 != 0xff01 && (uVar9 != 0x12)) &&
        (((*(byte *)((uVar8 & 0xffffffff) + 0x608 + param_1) & 2) == 0 &&
         (((param_3 >> 8 & 1) == 0 || (uVar9 != 65000)))))))) {
      ossl_statem_fatal(param_1,0x6e,0x1b3,0xd9,"ssl\\statem\\extensions.c",0x27f);
      goto LAB_14f68598e;
    }
    if (local_res8 != (longlong *)0x0) {
      uStack_50 = (uint)CONCAT11(uVar2,uVar3);
      *local_res8 = (longlong)puVar1;
      *(uint *)(local_res8 + 1) = uStack_50;
      *(undefined4 *)((longlong)local_res8 + 0xc) = 0;
      *(undefined4 *)(local_res8 + 2) = 1;
      *(uint *)(local_res8 + 3) = uVar9;
      local_res8[4] = uVar15;
      uVar15 = uVar15 + 1;
      if (*(code **)(param_1 + 0x628) != (code *)0x0) {
        (**(code **)(param_1 + 0x628))
                  (param_1,*(int *)(param_1 + 0x38) == 0,uVar9,*local_res8,(int)local_res8[1],
                   *(undefined8 *)(param_1 + 0x630));
      }
    }
  }
  if (param_6 != 0) {
    puVar10 = &DAT_153487fb8;
    do {
      pcVar4 = (code *)*puVar10;
      if ((((pcVar4 != (code *)0x0) && ((param_3 & *(uint *)((longlong)puVar10 + -4)) != 0)) &&
          (iVar5 = extension_is_relevant(param_1,*(uint *)((longlong)puVar10 + -4),param_3),
          iVar5 != 0)) && (iVar5 = (*pcVar4)(param_1,param_3), iVar5 == 0)) {
LAB_14f68598e:
        CRYPTO_free(lVar6,"ssl\\statem\\extensions.c",0x2a5);
        return 0;
      }
      uVar14 = uVar14 + 1;
      puVar10 = puVar10 + 7;
    } while (uVar14 < 0x1a);
  }
  *local_res20 = lVar6;
  if (param_5 != (longlong *)0x0) {
    *param_5 = local_res10;
  }
  return 1;
}

// tls_construct_extensions @ 14f6859b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_extensions
          (longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 local_28;
  undefined1 local_24 [4];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6859c9;
  uVar6 = 0;
  local_28 = 0;
  iVar2 = WPACKET_start_sub_packet_len__(param_2,2);
  if ((iVar2 == 0) ||
     (((param_3 & 0x180) != 0 && (iVar2 = WPACKET_set_flags(param_2,2), iVar2 == 0)))) {
    uVar7 = 0x333;
    iVar2 = 0x44;
LAB_14f685a35:
    ossl_statem_fatal(param_1,0x50,0x1bf,iVar2,"ssl\\statem\\extensions.c",uVar7);
    uVar3 = 0;
  }
  else {
    if ((char)param_3 < '\0') {
      iVar2 = ssl_get_min_max_version(param_1,local_24,&local_28,0);
      if (iVar2 != 0) {
        uVar7 = 0x33b;
        goto LAB_14f685a35;
      }
      custom_ext_init(*(longlong *)(param_1 + 0x488) + 0x1d8);
    }
    uVar3 = custom_ext_add(param_1,param_3,param_2,param_4,param_5,local_28);
    if ((int)uVar3 != 0) {
      ppuVar5 = &PTR_tls_construct_stoc_renegotiate_153487fd0;
      do {
        iVar2 = should_add_extension
                          (param_1,*(undefined4 *)((longlong)ppuVar5 + -0x1c),param_3,local_28);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x38) == 0) {
            pcVar4 = (code *)ppuVar5[1];
          }
          else {
            pcVar4 = (code *)*ppuVar5;
          }
          if (pcVar4 != (code *)0x0) {
            iVar2 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
            if (iVar2 == 0) goto LAB_14f685b49;
            if ((iVar2 == 1) && ((param_3 & 0x6080) != 0)) {
              pbVar1 = (byte *)(uVar6 + 0x608 + param_1);
              *pbVar1 = *pbVar1 | 2;
            }
          }
        }
        uVar6 = uVar6 + 1;
        ppuVar5 = ppuVar5 + 7;
      } while (uVar6 < 0x1a);
      iVar2 = WPACKET_close(param_2);
      if (iVar2 == 0) {
        ossl_statem_fatal(param_1,0x50,0x1bf,0x44,"ssl\\statem\\extensions.c",0x367);
LAB_14f685b49:
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

// tls_parse_all_extensions @ 14f685b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_all_extensions
          (longlong param_1,uint param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
          int param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f685bb4;
  uVar7 = 0;
  uVar8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1e0);
  if (lVar2 != -0x1a) {
    do {
      uVar5 = (ulonglong)(int)uVar8;
      puVar1 = (undefined8 *)(param_3 + uVar5 * 0x28);
      if ((*(int *)(param_3 + 0x10 + uVar5 * 0x28) != 0) && (*(int *)((longlong)puVar1 + 0x14) == 0)
         ) {
        *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
        if (uVar5 < 0x1a) {
          iVar3 = extension_is_relevant(param_1,(&DAT_153487fb4)[uVar5 * 0xe],param_2);
          if (iVar3 == 0) goto LAB_14f685ca4;
          if (*(int *)(param_1 + 0x38) == 0) {
            pcVar4 = (code *)(&PTR_tls_parse_stoc_renegotiate_153487fc8)[uVar5 * 7];
          }
          else {
            pcVar4 = (code *)(&PTR_tls_parse_ctos_renegotiate_153487fc0)[uVar5 * 7];
          }
          if (pcVar4 == (code *)0x0) goto LAB_14f685c64;
          iVar3 = (*pcVar4)(param_1,puVar1,param_2,param_4,param_5);
        }
        else {
LAB_14f685c64:
          iVar3 = custom_ext_parse(param_1,param_2,*(undefined4 *)(puVar1 + 3),*puVar1,puVar1[1],
                                   param_4,param_5,uVar10);
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_14f685ca4:
      uVar8 = uVar8 + 1;
    } while (uVar8 < lVar2 + 0x1aU);
  }
  if (param_6 != 0) {
    ppuVar6 = &PTR_FUN_153487fe0;
    puVar9 = (undefined4 *)(param_3 + 0x10);
    do {
      if ((((code *)*ppuVar6 != (code *)0x0) &&
          ((*(uint *)((longlong)ppuVar6 + -0x2c) & param_2) != 0)) &&
         (iVar3 = (*(code *)*ppuVar6)(param_1,param_2,*puVar9), iVar3 == 0)) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 10;
      ppuVar6 = ppuVar6 + 7;
    } while (uVar7 < 0x1a);
  }
  return 1;
}

// tls_parse_extension @ 14f685d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_extension(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f685d35;
  lVar3 = (longlong)(int)param_2;
  puVar1 = (undefined8 *)(param_4 + lVar3 * 0x28);
  if ((*(int *)(param_4 + 0x10 + lVar3 * 0x28) == 0) || (*(int *)((longlong)puVar1 + 0x14) != 0)) {
    return 1;
  }
  *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
  if (param_2 < 0x1a) {
    iVar2 = extension_is_relevant(param_1,(&DAT_153487fb4)[lVar3 * 0xe]);
    if (iVar2 == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      pcVar4 = (code *)(&PTR_tls_parse_stoc_renegotiate_153487fc8)[lVar3 * 7];
    }
    else {
      pcVar4 = (code *)(&PTR_tls_parse_ctos_renegotiate_153487fc0)[lVar3 * 7];
    }
    if (pcVar4 != (code *)0x0) {
      uVar5 = (*pcVar4)(param_1,puVar1,param_3,param_5,param_6);
      return uVar5;
    }
  }
  uVar5 = custom_ext_parse(param_1,param_3,*(undefined4 *)(puVar1 + 3),*puVar1,puVar1[1],param_5,
                           param_6,uVar5);
  return uVar5;
}

// tls_psk_do_binder @ 14f685e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint tls_psk_do_binder(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined1 *param_6,longlong param_7,int param_8,
                      int param_9)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_1f8 [32];
  char *local_1d8;
  undefined1 *local_1d0;
  char *local_1c8;
  undefined1 *local_1c0;
  char *local_1b8;
  undefined4 local_1b0;
  undefined1 *local_1a8;
  ulonglong uStack_1a0;
  uint local_198;
  char *local_190;
  char *local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158 [64];
  undefined1 local_118 [64];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_168 = param_6;
  lVar3 = 0;
  local_160 = param_5;
  local_188 = (char *)0x0;
  local_178 = param_4;
  local_170 = param_3;
  iVar2 = EVP_MD_size();
  local_198 = 0xffffffff;
  if (iVar2 < 0) {
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x5d7);
    local_1d8 = "ssl\\statem\\extensions.c";
    ossl_statem_fatal(param_1,0x50,0x1fa,0x44);
    goto LAB_14f6862ea;
  }
  pcVar11 = (char *)(longlong)iVar2;
  bVar1 = false;
  if ((((param_9 != 0) && (bVar1 = false, *(int *)(param_1 + 0x84) == 2)) &&
      (*(int *)(*(longlong *)(param_1 + 0x508) + 0x228) == 0)) &&
     (bVar1 = false, *(int *)(param_7 + 0x228) != 0)) {
    bVar1 = true;
  }
  pcVar10 = "ext binder";
  if (param_9 == 0) {
    pcVar10 = "res binder";
  }
  if (((*(int *)(param_1 + 0x38) != 0) || (param_9 == 0)) ||
     (puVar6 = (undefined1 *)(param_7 + 0x10), bVar1)) {
    puVar6 = (undefined1 *)(param_1 + 0x134);
  }
  local_1d8 = *(char **)(param_7 + 8);
  local_1d0 = puVar6;
  iVar2 = tls13_generate_secret(param_1,param_2,0,param_7 + 0x50);
  if (iVar2 == 0) goto LAB_14f6862ea;
  lVar3 = EVP_MD_CTX_new();
  if (((lVar3 == 0) || (iVar2 = EVP_DigestInit_ex(lVar3,param_2,0), iVar2 < 1)) ||
     (iVar2 = EVP_DigestFinal_ex(lVar3,local_158,0), iVar2 < 1)) {
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x606);
    goto LAB_14f6862ad;
  }
  local_1b0 = 1;
  local_1c0 = local_118;
  local_1d0 = local_158;
  local_1d8 = (char *)0xa;
  local_1c8 = pcVar11;
  local_1b8 = pcVar11;
  iVar2 = tls13_hkdf_expand(param_1,param_2,puVar6,pcVar10);
  if ((iVar2 == 0) ||
     (local_1d8 = pcVar11, iVar2 = tls13_derive_finishedkey(param_1,param_2,local_118,local_d8),
     iVar2 == 0)) goto LAB_14f6862ea;
  iVar2 = EVP_DigestInit_ex(lVar3,param_2,0);
  if (iVar2 < 1) {
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x619);
    goto LAB_14f6862ad;
  }
  if (*(int *)(param_1 + 0x4d8) == 1) {
    iVar2 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,&local_180);
    uVar8 = (ulonglong)iVar2;
    if (0 < iVar2) {
      if (*(int *)(param_1 + 0x38) == 0) {
LAB_14f686170:
        iVar2 = EVP_DigestUpdate(lVar3,local_180,uVar8);
        if (0 < iVar2) goto LAB_14f686199;
        local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x645);
      }
      else {
        if ((uVar8 < 0x8000000000000000) && (local_1a8 = local_180, uStack_1a0 = uVar8, uVar8 != 0))
        {
          uStack_1a0 = uVar8 - 1;
          local_1a8 = local_180 + 1;
          if (2 < uStack_1a0) {
            uVar4 = (ulonglong)CONCAT21(CONCAT11(*local_1a8,local_180[2]),local_180[3]);
            if (uVar4 <= uVar8 - 4) {
              puVar6 = local_180 + uVar4 + 4;
              uVar4 = (uVar8 - 4) - uVar4;
              local_1a8 = puVar6;
              uStack_1a0 = uVar4;
              if (uVar4 != 0) {
                local_1a8 = puVar6 + 1;
                uStack_1a0 = uVar4 - 1;
                if (2 < uStack_1a0) {
                  uVar7 = (ulonglong)CONCAT21(CONCAT11(*local_1a8,puVar6[2]),puVar6[3]);
                  if (uVar7 <= uVar4 - 4) {
                    uVar8 = uVar8 - ((uVar4 - 4) - uVar7);
                    goto LAB_14f686170;
                  }
                }
              }
            }
          }
        }
        local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x63d);
      }
      goto LAB_14f6862ad;
    }
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x62b);
    uVar9 = 0x14c;
LAB_14f6862b3:
    cVar5 = 'P';
  }
  else {
LAB_14f686199:
    iVar2 = EVP_DigestUpdate(lVar3,local_170,local_178);
    if ((iVar2 < 1) || (iVar2 = EVP_DigestFinal_ex(lVar3,local_158,0), iVar2 < 1)) {
      local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x64d);
LAB_14f6862ad:
      uVar9 = 0x44;
      goto LAB_14f6862b3;
    }
    local_1d8 = (char *)EVP_PKEY_new_raw_private_key(0x357,0,local_d8,pcVar11);
    local_188 = local_1d8;
    if (local_1d8 == (char *)0x0) {
      local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x655);
      goto LAB_14f6862ad;
    }
    puVar6 = local_98;
    if (param_8 != 0) {
      puVar6 = local_168;
    }
    local_190 = pcVar11;
    iVar2 = EVP_DigestSignInit(lVar3,0,param_2,0);
    if ((((iVar2 < 1) || (iVar2 = EVP_DigestUpdate(lVar3,local_158,pcVar11), iVar2 < 1)) ||
        (iVar2 = EVP_DigestSignFinal(lVar3,puVar6,&local_190), iVar2 < 1)) || (local_190 != pcVar11)
       ) {
      local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x662);
      goto LAB_14f6862ad;
    }
    if (param_8 != 0) {
      local_198 = 1;
      goto LAB_14f6862ea;
    }
    iVar2 = CRYPTO_memcmp(local_160,puVar6,pcVar11);
    local_198 = (uint)(iVar2 == 0);
    if (local_198 != 0) goto LAB_14f6862ea;
    local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,0x66d);
    cVar5 = (iVar2 == 0) + '/';
    uVar9 = 0xfd;
  }
  local_1d8 = "ssl\\statem\\extensions.c";
  ossl_statem_fatal(param_1,cVar5,0x1fa,uVar9);
LAB_14f6862ea:
  OPENSSL_cleanse(local_118,0x40);
  OPENSSL_cleanse(local_d8,0x40);
  EVP_PKEY_free(local_188);
  EVP_MD_CTX_free(lVar3);
  return local_198;
}

// tls_validate_all_contexts @ 14f686340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_validate_all_contexts(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  if ((char)param_2 < '\0') {
    uVar7 = 1;
  }
  else {
    uVar7 = 2;
    if ((param_2 >> 8 & 1) != 0) {
      uVar7 = 0;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1e0);
  if (lVar1 != -0x1a) {
    puVar6 = (undefined4 *)(param_3 + 0x18);
    puVar5 = &DAT_153487fb4;
    do {
      if (puVar6[-2] != 0) {
        if (uVar4 < 0x1a) {
          uVar3 = *puVar5;
        }
        else {
          lVar2 = custom_ext_find(*(longlong *)(param_1 + 0x488) + 0x1d8,uVar7,*puVar6,local_res8);
          if (lVar2 == 0) {
            return 0;
          }
          uVar3 = *(uint *)(lVar2 + 8);
        }
        if ((param_2 & uVar3) == 0) {
          return 0;
        }
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          uVar3 = uVar3 & 2;
        }
        else {
          uVar3 = uVar3 & 1;
        }
        if (uVar3 != 0) {
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xe;
      puVar6 = puVar6 + 10;
    } while (uVar4 < lVar1 + 0x1aU);
  }
  return 1;
}

// FUN_14f686470 @ 14f686470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f686470(longlong param_1,uint param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong *param_6)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_18 [2];
  
  local_18[1] = 0x14f686485;
  piVar2 = &DAT_153487fb0;
  uVar4 = 0;
  while ((int)param_3 != *piVar2) {
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 0xe;
    if (0x19 < uVar4) {
      if (param_4 != 0) {
        local_18[0] = 0;
        if ((char)param_2 < '\0') {
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
          if ((param_2 >> 8 & 1) != 0) {
            uVar4 = 0;
          }
        }
        lVar3 = custom_ext_find(param_4,uVar4,param_3,local_18);
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar3 + 8);
          if ((param_2 & uVar1) != 0) {
            if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
              uVar1 = uVar1 & 2;
            }
            else {
              uVar1 = uVar1 & 1;
            }
            if (uVar1 == 0) {
              *param_6 = param_5 + (local_18[0] + 0x1a) * 0x28;
              return 1;
            }
          }
          return 0;
        }
      }
      *param_6 = 0;
      return 1;
    }
  }
  uVar1 = piVar2[1];
  if ((param_2 & uVar1) == 0) {
    return 0;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    uVar1 = uVar1 & 2;
  }
  else {
    uVar1 = uVar1 & 1;
  }
  if (uVar1 != 0) {
    return 0;
  }
  *param_6 = param_5 + uVar4 * 0x28;
  return 1;
}

