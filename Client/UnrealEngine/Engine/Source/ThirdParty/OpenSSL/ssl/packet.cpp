// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// WPACKET_allocate_bytes @ 14f683490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_allocate_bytes(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = WPACKET_reserve_bytes();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_2;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_2;
  return 1;
}

// WPACKET_cleanup @ 14f6834e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void WPACKET_cleanup(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    CRYPTO_free(puVar2,"ssl\\packet.c",0x1a5);
    puVar2 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

// WPACKET_close @ 14f683540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_close(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    uVar2 = FUN_14f683f10(param_1,plVar1,1);
    return uVar2;
  }
  return 0;
}

// WPACKET_fill_lengths @ 14f683580

undefined4 WPACKET_fill_lengths(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[5];
  if (plVar5 != (longlong *)0x0) {
    while ((uVar1 = param_1[3] - plVar5[3], uVar1 != 0 ||
           (((*(uint *)(plVar5 + 4) & 1) == 0 && ((*(uint *)(plVar5 + 4) & 2) == 0))))) {
      lVar4 = plVar5[2];
      if (lVar4 != 0) {
        lVar2 = param_1[1];
        if (lVar2 == 0) {
          lVar2 = *(longlong *)(*param_1 + 8);
        }
        puVar3 = (undefined1 *)(lVar4 + -1 + plVar5[1] + lVar2);
        do {
          *puVar3 = (char)uVar1;
          puVar3 = puVar3 + -1;
          uVar1 = uVar1 >> 8;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        if (uVar1 != 0) {
          return 0;
        }
      }
      plVar5 = (longlong *)*plVar5;
      if (plVar5 == (longlong *)0x0) {
        return 1;
      }
    }
  }
  return 0;
}

// WPACKET_finish @ 14f683600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int WPACKET_finish(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 == 0)) {
    iVar2 = FUN_14f683f10(param_1,plVar1,1);
    if (iVar2 != 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"ssl\\packet.c",0x109);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    return iVar2;
  }
  return 0;
}

// WPACKET_get_curr @ 14f683670

longlong WPACKET_get_curr(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*param_1 + 8);
  }
  return param_1[2] + lVar1;
}

// WPACKET_get_length @ 14f683690

undefined8 WPACKET_get_length(longlong param_1,longlong *param_2)

{
  if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
    *param_2 = *(longlong *)(param_1 + 0x18) - *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    return 1;
  }
  return 0;
}

// WPACKET_get_total_written @ 14f6836c0

undefined8 WPACKET_get_total_written(longlong param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return 1;
}

// WPACKET_init @ 14f6836e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_init(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6836f0;
  uVar2 = 0;
  if (param_2 != 0) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[4] = -1;
    param_1[2] = 0;
    param_1[3] = 0;
    lVar1 = CRYPTO_zalloc(0x28,"ssl\\packet.c",0x61);
    param_1[5] = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x14,0x279,0x41,"ssl\\packet.c",0x62,uVar3);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

// WPACKET_init_len @ 14f683780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_init_len(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  param_1[1] = 0;
  *param_1 = param_2;
  if (param_3 - 1U < 7) {
    param_1[4] = param_3 + -1 + (1L << (((byte)param_3 & 7) << 3));
    uVar1 = FUN_14f683ff0(param_1,param_3);
    return uVar1;
  }
  param_1[4] = -1;
  uVar1 = FUN_14f683ff0(param_1,param_3);
  return uVar1;
}

// WPACKET_init_static_len @ 14f683800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
WPACKET_init_static_len(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_4 - 1U < 7) {
    uVar1 = param_4 + -1 + (1L << (((byte)param_4 & 7) << 3));
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    param_1[1] = param_2;
    *param_1 = 0;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    param_1[4] = param_3;
    uVar2 = FUN_14f683ff0(param_1,param_4);
    return uVar2;
  }
  return 0;
}

// WPACKET_memcpy @ 14f683880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_memcpy(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *local_res18 [2];
  
  if (param_3 != 0) {
    iVar1 = WPACKET_reserve_bytes(param_1,param_3,local_res18);
    if (iVar1 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
    memcpy(local_res18[0],param_2,param_3);
  }
  return 1;
}

// WPACKET_memset @ 14f683900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_memset(longlong param_1,int param_2,size_t param_3)

{
  int iVar1;
  void *local_res18 [2];
  
  if (param_3 != 0) {
    iVar1 = WPACKET_reserve_bytes(param_1,param_3,local_res18);
    if (iVar1 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
    memset(local_res18[0],param_2,param_3);
  }
  return 1;
}

// WPACKET_put_bytes__ @ 14f683980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 WPACKET_put_bytes__(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  longlong local_res18 [2];
  
  if ((param_3 < 9) && (iVar1 = WPACKET_reserve_bytes(param_1,param_3,local_res18), iVar1 != 0)) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(char *)(local_res18[0] + -1 + param_3) = (char)param_2;
      param_2 = param_2 >> 8;
    }
    if (param_2 == 0) {
      return 1;
    }
  }
  return 0;
}

// WPACKET_reserve_bytes @ 14f683a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_reserve_bytes(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((param_1[5] == 0) || (param_2 == 0)) || ((ulonglong)(param_1[4] - param_1[3]) < param_2)) {
    return 0;
  }
  if (param_1[1] == 0) {
    uVar2 = *(ulonglong *)*param_1;
    if (uVar2 - param_1[3] < param_2) {
      if (uVar2 < param_2) {
        uVar2 = param_2;
      }
      if (uVar2 < 0x8000000000000000) {
        uVar2 = uVar2 * 2;
        if (uVar2 < 0x100) {
          uVar2 = 0x100;
        }
      }
      else {
        uVar2 = 0xffffffffffffffff;
      }
      lVar1 = BUF_MEM_grow((ulonglong *)*param_1,uVar2);
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  if (param_3 != (longlong *)0x0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(*param_1 + 8);
    }
    *param_3 = lVar1 + param_1[2];
  }
  return 1;
}

// WPACKET_set_flags @ 14f683ae0

undefined8 WPACKET_set_flags(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x20) = param_2;
  return 1;
}

// WPACKET_start_sub_packet @ 14f683b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WPACKET_start_sub_packet(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f683b8c;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    puVar1 = (undefined8 *)CRYPTO_zalloc(0x28,"ssl\\packet.c",0x119);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar1;
      puVar1[3] = *(undefined8 *)(param_1 + 0x18);
      puVar1[2] = 0;
      puVar1[1] = 0;
      return 1;
    }
    ERR_put_error(0x14,0x27a,0x41,"ssl\\packet.c",0x11a,uVar2);
  }
  return 0;
}

// WPACKET_start_sub_packet_len__ @ 14f683c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 WPACKET_start_sub_packet_len__(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 uVar4;
  
  uVar4 = 0x14f683c30;
  if (param_1[5] == 0) {
    return 0;
  }
  plVar2 = (longlong *)CRYPTO_zalloc(0x28,"ssl\\packet.c",0x119);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x14,0x27a,0x41,"ssl\\packet.c",0x11a,uVar4);
  }
  else {
    *plVar2 = param_1[5];
    param_1[5] = (longlong)plVar2;
    plVar2[3] = param_1[3] + param_2;
    plVar2[2] = param_2;
    if (param_2 == 0) {
      plVar2[1] = 0;
      return 1;
    }
    iVar1 = WPACKET_reserve_bytes(param_1,param_2,&local_res8);
    if (iVar1 != 0) {
      param_1[3] = param_1[3] + param_2;
      param_1[2] = param_1[2] + param_2;
      lVar3 = param_1[1];
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(*param_1 + 8);
      }
      plVar2[1] = local_res8 - lVar3;
      return 1;
    }
  }
  return 0;
}

// WPACKET_sub_allocate_bytes__ @ 14f683d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
WPACKET_sub_allocate_bytes__
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = WPACKET_start_sub_packet_len__(param_1,param_4);
  if (iVar2 != 0) {
    iVar2 = WPACKET_reserve_bytes(param_1,param_2,param_3);
    if (iVar2 != 0) {
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_2;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_2;
      plVar1 = *(longlong **)(param_1 + 0x28);
      if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
        iVar2 = FUN_14f683f10(param_1,plVar1,1);
        if (iVar2 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// WPACKET_sub_memcpy__ @ 14f683dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
WPACKET_sub_memcpy__(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = WPACKET_start_sub_packet_len__(param_1,param_4);
  if (iVar2 != 0) {
    iVar2 = WPACKET_memcpy(param_1,param_2,param_3);
    if (((iVar2 != 0) && (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) &&
       (*plVar1 != 0)) {
      iVar2 = FUN_14f683f10(param_1,plVar1,1);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// WPACKET_sub_reserve_bytes__ @ 14f683e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
WPACKET_sub_reserve_bytes__(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 uVar1;
  
  uVar1 = WPACKET_reserve_bytes(param_1,param_2 + param_4);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_3 = *param_3 + param_4;
  return 1;
}

// FUN_14f683f10 @ 14f683f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f683f10(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = param_1[3] - param_2[3];
  if (uVar4 == 0) {
    if ((*(uint *)(param_2 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(param_2 + 4) & 2) != 0) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_1[2] - param_2[2] == param_2[1]) {
        param_1[3] = param_1[3] - param_2[2];
        param_1[2] = param_1[2] - param_2[2];
      }
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(*param_1 + 8);
    }
    puVar2 = (undefined1 *)(lVar3 + -1 + param_2[1] + lVar1);
    do {
      *puVar2 = (char)uVar4;
      puVar2 = puVar2 + -1;
      uVar4 = uVar4 >> 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    bVar5 = uVar4 != 0;
    uVar4 = 0;
    if (bVar5) {
      return 0;
    }
  }
  if (param_3 != 0) {
    param_1[5] = *param_2;
    CRYPTO_free(param_2,"ssl\\packet.c",0xdb,uVar4,0x14f683f1a);
  }
  return 1;
}

// FUN_14f683ff0 @ 14f683ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f683ff0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x14f684000;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = CRYPTO_zalloc(0x28,"ssl\\packet.c",0x61);
  param_1[5] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(0x14,0x279,0x41,"ssl\\packet.c",0x62,uVar3);
    return 0;
  }
  if (param_2 != 0) {
    *(longlong *)(lVar2 + 0x18) = param_2;
    *(longlong *)(param_1[5] + 0x10) = param_2;
    iVar1 = WPACKET_reserve_bytes(param_1,param_2,&local_res8);
    if (iVar1 == 0) {
      CRYPTO_free(param_1[5],"ssl\\packet.c",0x6d);
      param_1[5] = 0;
      return 0;
    }
    param_1[3] = param_1[3] + param_2;
    param_1[2] = param_1[2] + param_2;
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(*param_1 + 8);
    }
    *(longlong *)(param_1[5] + 8) = local_res8 - lVar2;
  }
  return 1;
}

