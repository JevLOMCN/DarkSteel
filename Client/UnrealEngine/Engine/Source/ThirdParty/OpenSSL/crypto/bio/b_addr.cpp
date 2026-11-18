// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 25

// BIO_ADDRINFO_address @ 14f6f5410

undefined8 BIO_ADDRINFO_address(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}

// BIO_ADDRINFO_family @ 14f6f5430

undefined4 BIO_ADDRINFO_family(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}

// BIO_ADDRINFO_free @ 14f6f5450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_ADDRINFO_free(longlong param_1)

{
  if (param_1 != 0) {
    freeaddrinfo();
  }
  return;
}

// BIO_ADDRINFO_protocol @ 14f6f54a0

int BIO_ADDRINFO_protocol(longlong param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      return *(int *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 8) == 1) {
      return 6;
    }
    if (*(int *)(param_1 + 8) == 2) {
      return 0x11;
    }
  }
  return 0;
}

// BIO_ADDRINFO_socktype @ 14f6f5510

undefined4 BIO_ADDRINFO_socktype(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0;
}

// BIO_ADDR_clear @ 14f6f5530

void BIO_ADDR_clear(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)param_1 = 0;
  return;
}

// BIO_ADDR_family @ 14f6f5550

undefined2 BIO_ADDR_family(undefined2 *param_1)

{
  return *param_1;
}

// BIO_ADDR_free @ 14f6f5560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_ADDR_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\bio\\b_addr.c",0x39);
  return;
}

// BIO_ADDR_hostname_string @ 14f6f5590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_ADDR_hostname_string(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  iVar1 = FUN_14f6f5d00(param_1,param_2,local_res18,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_res18[0];
  }
  return uVar2;
}

// BIO_ADDR_new @ 14f6f5610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * BIO_ADDR_new(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)CRYPTO_zalloc(0x1c,"crypto\\bio\\b_addr.c",0x2c);
  if (puVar1 == (undefined2 *)0x0) {
    ERR_put_error(0x20,0x90,0x41,"crypto\\bio\\b_addr.c",0x2f);
    return (undefined2 *)0x0;
  }
  *puVar1 = 0;
  return puVar1;
}

// BIO_ADDR_rawaddress @ 14f6f5680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_ADDR_rawaddress(short *param_1,void *param_2,size_t *param_3)

{
  size_t _Size;
  
  if (*param_1 == 2) {
    _Size = 4;
    param_1 = param_1 + 2;
  }
  else {
    if (*param_1 != 0x17) {
      return 0;
    }
    _Size = 0x10;
    param_1 = param_1 + 4;
  }
  if (param_1 == (short *)0x0) {
    return 0;
  }
  if (param_2 != (void *)0x0) {
    memcpy(param_2,param_1,_Size);
  }
  if (param_3 != (size_t *)0x0) {
    *param_3 = _Size;
  }
  return 1;
}

// BIO_ADDR_rawmake @ 14f6f5700

undefined4
BIO_ADDR_rawmake(undefined8 *param_1,int param_2,undefined8 *param_3,longlong param_4,
                undefined2 param_5)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    if (param_4 == 4) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined2 *)param_1 = 2;
      *(undefined2 *)((longlong)param_1 + 2) = param_5;
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)param_3;
      return 1;
    }
  }
  else if ((param_2 == 0x17) && (param_4 == 0x10)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined2 *)param_1 = 0x17;
    *(undefined2 *)((longlong)param_1 + 2) = param_5;
    uVar1 = param_3[1];
    param_1[1] = *param_3;
    param_1[2] = uVar1;
    return 1;
  }
  return 0;
}

// BIO_ADDR_rawport @ 14f6f5770

short BIO_ADDR_rawport(short *param_1)

{
  if ((*param_1 != 2) && (*param_1 != 0x17)) {
    return 0;
  }
  return param_1[1];
}

// BIO_ADDR_service_string @ 14f6f5790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_ADDR_service_string(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  iVar1 = FUN_14f6f5d00(param_1,param_2,0,local_res18);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_res18[0];
  }
  return uVar2;
}

// BIO_ADDR_sockaddr @ 14f6f57d0

undefined8 BIO_ADDR_sockaddr(undefined8 param_1)

{
  return param_1;
}

// BIO_ADDR_sockaddr_noconst @ 14f6f57e0

undefined8 BIO_ADDR_sockaddr_noconst(undefined8 param_1)

{
  return param_1;
}

// BIO_ADDR_sockaddr_size @ 14f6f57f0

undefined8 BIO_ADDR_sockaddr_size(short *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  if (*param_1 != 2) {
    uVar1 = 0x1c;
  }
  return uVar1;
}

// BIO_lookup @ 14f6f5810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_lookup(void)

{
  BIO_lookup_ex();
  return;
}

// BIO_lookup_ex @ 14f6f5850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BIO_lookup_ex(longlong param_1,undefined8 param_2,int param_3,uint param_4,undefined4 param_5,
             undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_48;
  uint uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0x14f6f5868;
  if ((param_4 < 0x18) && ((0x800005U >> (param_4 & 0x1f) & 1) != 0)) {
    iVar3 = BIO_sock_init();
    if (iVar3 == 1) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_40 = CONCAT44(param_6,param_5);
      local_48 = 0;
      uVar2 = local_48;
      local_48 = 0;
      uVar4 = local_48;
      if ((param_1 != 0) && (param_4 == 0)) {
        local_48 = 0x400;
        uVar4 = 0x400;
        uVar2 = local_48;
      }
      local_48 = uVar2;
      if (param_3 == 1) {
        local_48 = uVar4 | 1;
      }
      uStack_44 = param_4;
      iVar3 = getaddrinfo(param_1,param_2,&local_48,param_7);
      iVar1 = 0;
      while( true ) {
        if (iVar3 == 0) {
          return 1;
        }
        if (iVar3 == 8) break;
        if ((local_48 >> 10 & 1) == 0) {
          ERR_put_error(0x20,0x8f,2,"crypto\\bio\\b_addr.c",0x2da);
          if (iVar1 != 0) {
            iVar3 = iVar1;
          }
          uVar6 = gai_strerrorW(iVar3);
          ERR_add_error_data(1,uVar6);
          return 0;
        }
        local_48 = local_48 & 0xfffffbff | 4;
        iVar5 = getaddrinfo(param_1,param_2,&local_48,param_7);
        iVar1 = iVar3;
        iVar3 = iVar5;
      }
      ERR_put_error(0x20,0x8f,0x41,"crypto\\bio\\b_addr.c",0x2cb);
      return 0;
    }
  }
  else {
    ERR_put_error(0x20,0x8f,0x83,"crypto\\bio\\b_addr.c",0x297);
  }
  return 0;
}

// BIO_parse_hostserv @ 14f6f5a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_parse_hostserv(char *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f6f5a57;
  uVar8 = 0;
  uVar7 = 0;
  if (*param_1 == '[') {
    pcVar4 = strchr(param_1,0x5d);
    if (pcVar4 == (char *)0x0) goto LAB_14f6f5c0c;
    param_1 = param_1 + 1;
    uVar8 = (longlong)pcVar4 - (longlong)param_1;
    if (pcVar4[1] == '\0') {
      pcVar4 = (char *)0x0;
      uVar7 = 0;
      goto LAB_14f6f5a9d;
    }
    if (pcVar4[1] != ':') goto LAB_14f6f5c0c;
    pcVar4 = pcVar4 + 2;
    cVar1 = *pcVar4;
    pcVar6 = pcVar4;
    for (uVar3 = 0; (pcVar2 = param_1, cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
LAB_14f6f5be6:
    param_1 = pcVar2;
    uVar7 = uVar3 & 0x7fffffff;
    if ((pcVar4 != (char *)0x0) && (pcVar6 = strchr(pcVar4,0x3a), pcVar6 != (char *)0x0)) {
LAB_14f6f5c0c:
      ERR_put_error(0x20,0x88,0x82,"crypto\\bio\\b_addr.c",0x227,uVar9);
      return 0;
    }
  }
  else {
    pcVar4 = strrchr(param_1,0x3a);
    pcVar6 = strchr(param_1,0x3a);
    if (pcVar6 != pcVar4) {
      ERR_put_error(0x20,0x88,0x81,"crypto\\bio\\b_addr.c",0x224,uVar9);
      return 0;
    }
    uVar3 = 0;
    if (pcVar6 != (char *)0x0) {
      pcVar4 = pcVar6 + 1;
      uVar8 = (longlong)pcVar6 - (longlong)param_1;
      cVar1 = *pcVar4;
      pcVar6 = pcVar4;
      for (; (pcVar2 = param_1, cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar6;
      }
      goto LAB_14f6f5be6;
    }
    if (param_4 != 0) {
      cVar1 = *param_1;
      pcVar6 = param_1;
      for (; (pcVar4 = param_1, pcVar2 = (char *)0x0, cVar1 != '\0' && (uVar3 < 0x80000000));
          uVar3 = uVar3 + 1) {
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar6;
      }
      goto LAB_14f6f5be6;
    }
    cVar1 = *param_1;
    pcVar4 = param_1;
    for (; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    uVar8 = (ulonglong)(uVar3 & 0x7fffffff);
    pcVar4 = (char *)0x0;
  }
LAB_14f6f5a9d:
  if ((param_1 != (char *)0x0) && (param_2 != (longlong *)0x0)) {
    if ((uVar8 == 0) || ((uVar8 == 1 && (*param_1 == '*')))) {
      *param_2 = 0;
    }
    else {
      lVar5 = CRYPTO_strndup(param_1,uVar8,"crypto\\bio\\b_addr.c",0x212);
      *param_2 = lVar5;
      if (lVar5 == 0) goto LAB_14f6f5c72;
    }
  }
  if ((pcVar4 != (char *)0x0) && (param_3 != (longlong *)0x0)) {
    if ((uVar7 == 0) || ((uVar7 == 1 && (*pcVar4 == '*')))) {
      *param_3 = 0;
    }
    else {
      lVar5 = CRYPTO_strndup(pcVar4,uVar7,"crypto\\bio\\b_addr.c",0x21c);
      *param_3 = lVar5;
      if (lVar5 == 0) {
LAB_14f6f5c72:
        ERR_put_error(0x20,0x88,0x41,"crypto\\bio\\b_addr.c",0x22a,uVar9);
        return 0;
      }
    }
  }
  return 1;
}

// FUN_14f6f5d00 @ 14f6f5d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6f5d00(short *param_1,int param_2,longlong *param_3,longlong *param_4)

{
  u_short uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_498 [32];
  char *local_478;
  undefined4 local_470;
  uint local_468;
  char local_458 [1072];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6f5d12;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_498;
  iVar2 = BIO_sock_init();
  if (iVar2 == 1) {
    memset(local_458 + 0x20,0,0x401);
    local_458[0] = '\0';
    local_458[1] = '\0';
    local_458[2] = '\0';
    local_458[3] = '\0';
    local_458[4] = '\0';
    local_458[5] = '\0';
    local_458[6] = '\0';
    local_458[7] = '\0';
    local_458[8] = '\0';
    local_458[9] = '\0';
    local_458[10] = '\0';
    local_458[0xb] = '\0';
    local_458[0xc] = '\0';
    local_458[0xd] = '\0';
    local_458[0xe] = '\0';
    local_458[0xf] = '\0';
    local_458[0x10] = '\0';
    local_458[0x11] = '\0';
    local_458[0x12] = '\0';
    local_458[0x13] = '\0';
    local_458[0x14] = '\0';
    local_458[0x15] = '\0';
    local_458[0x16] = '\0';
    local_458[0x17] = '\0';
    local_458[0x18] = '\0';
    local_458[0x19] = '\0';
    local_458[0x1a] = '\0';
    local_458[0x1b] = '\0';
    local_458[0x1c] = '\0';
    local_458[0x1d] = '\0';
    local_458[0x1e] = '\0';
    local_458[0x1f] = 0;
    local_468 = -(uint)(param_2 != 0) & 10;
    local_478 = local_458;
    uVar4 = 0x1c;
    if (*param_1 == 2) {
      uVar4 = 0x10;
    }
    local_470 = 0x20;
    iVar2 = getnameinfo(param_1,uVar4,local_458 + 0x20,0x401);
    if (iVar2 == 0) {
      if (local_458[0] == '\0') {
        if (*param_1 == 2) {
          uVar1 = param_1[1];
        }
        else if (*param_1 == 0x17) {
          uVar1 = param_1[1];
        }
        else {
          uVar1 = 0;
        }
        uVar1 = ntohs(uVar1);
        BIO_snprintf(local_458,0x20,"%d",uVar1);
      }
      if (param_3 != (longlong *)0x0) {
        lVar3 = CRYPTO_strdup(local_458 + 0x20,"crypto\\bio\\b_addr.c",0xed);
        *param_3 = lVar3;
      }
      if (param_4 != (longlong *)0x0) {
        lVar3 = CRYPTO_strdup(local_458,"crypto\\bio\\b_addr.c",0xef);
        *param_4 = lVar3;
      }
      if (((param_3 == (longlong *)0x0) || (*param_3 != 0)) &&
         ((param_4 == (longlong *)0x0 || (*param_4 != 0)))) {
        return 1;
      }
      if (param_3 != (longlong *)0x0) {
        CRYPTO_free(*param_3,"crypto\\bio\\b_addr.c",0xfe);
        *param_3 = 0;
      }
      if (param_4 != (longlong *)0x0) {
        CRYPTO_free(*param_4,"crypto\\bio\\b_addr.c",0x102);
        *param_4 = 0;
      }
      local_478 = (char *)CONCAT44(local_478._4_4_,0x105);
      ERR_put_error(0x20,0x86,0x41,"crypto\\bio\\b_addr.c");
      return 0;
    }
    local_478 = (char *)CONCAT44(local_478._4_4_,0xdb);
    ERR_put_error(0x20,0x86,2,"crypto\\bio\\b_addr.c");
    uVar4 = gai_strerrorW(iVar2);
    ERR_add_error_data(1,uVar4);
  }
  return 0;
}

// FUN_14f6f5f20 @ 14f6f5f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6f5f20(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined2 param_5,longlong *param_6)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined4 in_stack_ffffffffffffffd8;
  undefined2 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined2)((uint)in_stack_ffffffffffffffd8 >> 0x10);
  uVar4 = 0x14f6f5f38;
  lVar1 = CRYPTO_zalloc(0x30,"crypto\\bio\\b_addr.c",0x23c);
  *param_6 = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0x20,0x94,0x41,"crypto\\bio\\b_addr.c",0x23d);
    uVar4 = 0;
  }
  else {
    *(undefined4 *)(lVar1 + 4) = param_1;
    *(int *)(*param_6 + 8) = param_2;
    if (param_2 == 1) {
      *(undefined4 *)(*param_6 + 0xc) = 6;
    }
    else if (param_2 == 2) {
      *(undefined4 *)(*param_6 + 0xc) = 0x11;
    }
    puVar2 = (undefined2 *)CRYPTO_zalloc(0x1c,"crypto\\bio\\b_addr.c");
    if (puVar2 == (undefined2 *)0x0) {
      ERR_put_error(0x20,0x90,0x41,"crypto\\bio\\b_addr.c",0x2f);
    }
    else {
      *puVar2 = 0;
      BIO_ADDR_rawmake(puVar2,param_1,param_3,param_4,CONCAT22(uVar3,param_5),uVar4);
      *(undefined2 **)(*param_6 + 0x20) = puVar2;
    }
    *(undefined8 *)(*param_6 + 0x28) = 0;
    if (*(longlong *)(*param_6 + 0x20) == 0) {
      if (*param_6 != 0) {
        freeaddrinfo();
      }
      *param_6 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}

// FUN_14f6f6070 @ 14f6f6070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6f6070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f6f607a);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  bio_lookup_lock = CRYPTO_THREAD_lock_new();
  return (ulonglong)(bio_lookup_lock != 0);
}

// FUN_14f6f60b0 @ 14f6f60b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f6f60b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f6f60ba);
  if (iVar1 == 0) {
    _DAT_1553e2b80 = 0;
    return;
  }
  bio_lookup_lock = CRYPTO_THREAD_lock_new();
  _DAT_1553e2b80 = (uint)(bio_lookup_lock != 0);
  return;
}

// gai_strerrorW @ 14f6f6100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * gai_strerrorW(DWORD param_1)

{
  FormatMessageW(0x12ff,(LPCVOID)0x0,param_1,0x400,(LPWSTR)&`gai_strerrorW'::__l2::buff,0x400,
                 (va_list *)0x0);
  return &`gai_strerrorW'::__l2::buff;
}

