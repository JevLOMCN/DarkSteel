// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// BIO_accept_ex @ 14f7314f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BIO_accept_ex(int param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  sockaddr *addr;
  SOCKET SVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_38 [2];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38[0] = 0x1c;
  puVar4 = local_30;
  if (param_2 != (undefined1 *)0x0) {
    puVar4 = param_2;
  }
  addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(puVar4);
  SVar2 = accept((longlong)param_1,addr,local_38);
  if ((int)SVar2 == -1) {
    iVar1 = BIO_sock_should_retry(0xffffffff);
    if (iVar1 == 0) {
      iVar1 = WSAGetLastError();
      local_48 = 0x126;
      ERR_put_error(2,8,iVar1,"crypto\\bio\\b_sock2.c");
      local_48 = 0x127;
      ERR_put_error(0x20,0x89,100,"crypto\\bio\\b_sock2.c");
    }
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = BIO_socket_nbio(SVar2 & 0xffffffff,(uint)(param_3 >> 3) & 1);
    if (iVar1 == 0) {
      closesocket((longlong)(int)SVar2);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = SVar2 & 0xffffffff;
    }
  }
  return uVar3;
}

// BIO_bind @ 14f7315f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_bind(int param_1,undefined8 param_2)

{
  int iVar1;
  sockaddr *addr;
  undefined8 uVar2;
  
  uVar2 = 0x14f731600;
  if (param_1 == -1) {
    ERR_put_error(0x20,0x93,0x87,"crypto\\bio\\b_sock2.c",0x8d,0x14f731600);
    return 0;
  }
  iVar1 = BIO_ADDR_sockaddr_size(param_2);
  addr = (sockaddr *)BIO_ADDR_sockaddr(param_2);
  iVar1 = bind((longlong)param_1,addr,iVar1);
  if (iVar1 != 0) {
    iVar1 = WSAGetLastError();
    ERR_put_error(2,6,iVar1,"crypto\\bio\\b_sock2.c",0xa1,uVar2);
    ERR_put_error(0x20,0x93,0x75,"crypto\\bio\\b_sock2.c",0xa2);
    return 0;
  }
  return 1;
}

// BIO_closesocket @ 14f7316d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool BIO_closesocket(int param_1)

{
  int iVar1;
  
  iVar1 = closesocket((longlong)param_1);
  return -1 < iVar1;
}

// BIO_connect @ 14f731700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_connect(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  sockaddr *name;
  SOCKET s;
  char local_res8 [8];
  undefined8 uVar2;
  
  uVar2 = 0x14f731715;
  s = (SOCKET)param_1;
  local_res8[0] = '\x01';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  if (param_1 == -1) {
    ERR_put_error(0x20,0x8a,0x87,"crypto\\bio\\b_sock2.c",0x52,0x14f731715);
  }
  else {
    iVar1 = BIO_socket_nbio(param_1,(uint)((param_3 & 0xffffffff) >> 3) & 1);
    if (iVar1 != 0) {
      if ((param_3 & 4) != 0) {
        iVar1 = setsockopt(s,0xffff,8,local_res8,4);
        if (iVar1 != 0) {
          iVar1 = WSAGetLastError();
          ERR_put_error(2,0xe,iVar1,"crypto\\bio\\b_sock2.c",0x5c,uVar2);
          ERR_put_error(0x20,0x8a,0x89,"crypto\\bio\\b_sock2.c",0x5d);
          return 0;
        }
      }
      if ((param_3 & 0x10) != 0) {
        iVar1 = setsockopt(s,6,1,local_res8,4);
        if (iVar1 != 0) {
          iVar1 = WSAGetLastError();
          ERR_put_error(2,0xe,iVar1,"crypto\\bio\\b_sock2.c",0x65,uVar2);
          ERR_put_error(0x20,0x8a,0x8a,"crypto\\bio\\b_sock2.c",0x66);
          return 0;
        }
      }
      iVar1 = BIO_ADDR_sockaddr_size(param_2);
      name = (sockaddr *)BIO_ADDR_sockaddr(param_2);
      iVar1 = connect(s,name,iVar1);
      if (iVar1 != -1) {
        return 1;
      }
      iVar1 = BIO_sock_should_retry(0xffffffff);
      if (iVar1 == 0) {
        iVar1 = WSAGetLastError();
        ERR_put_error(2,2,iVar1,"crypto\\bio\\b_sock2.c",0x6e);
        ERR_put_error(0x20,0x8a,0x67,"crypto\\bio\\b_sock2.c",0x6f);
        return 0;
      }
    }
  }
  return 0;
}

// BIO_listen @ 14f731920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_listen(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  SOCKET s;
  undefined8 uVar2;
  uint local_res8 [2];
  int local_res20 [2];
  undefined8 uVar3;
  int local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f73192e;
  s = (SOCKET)param_1;
  local_res8[0] = 1;
  local_res20[0] = 4;
  if (param_1 == -1) {
    ERR_put_error(0x20,0x8b,0x87,"crypto\\bio\\b_sock2.c",0xd5);
    return 0;
  }
  iVar1 = getsockopt(s,0xffff,0x1008,(char *)local_28,local_res20);
  if ((iVar1 == 0) && (local_res20[0] == 4)) {
    iVar1 = BIO_socket_nbio(param_1,param_3 >> 3 & 1);
    if (iVar1 == 0) {
      return 0;
    }
    if (((param_3 & 4) == 0) || (iVar1 = setsockopt(s,0xffff,8,(char *)local_res8,4), iVar1 == 0)) {
      if (((param_3 & 0x10) == 0) || (iVar1 = setsockopt(s,6,1,(char *)local_res8,4), iVar1 == 0)) {
        iVar1 = BIO_ADDR_family(param_2);
        if (iVar1 == 0x17) {
          local_res8[0] = param_3 >> 1 & 1;
          iVar1 = setsockopt(s,0x29,0x1b,(char *)local_res8,4);
          if (iVar1 != 0) {
            iVar1 = WSAGetLastError();
            ERR_put_error(2,0xe,iVar1,"crypto\\bio\\b_sock2.c",0x100);
            uVar2 = 0x88;
            uVar3 = 0x101;
            goto LAB_14f731ba7;
          }
        }
        iVar1 = BIO_bind(param_1,param_2,param_3);
        if (iVar1 == 0) {
          return 0;
        }
        if (local_28[0] == 2) {
          return 1;
        }
        iVar1 = listen(s,0x7fffffff);
        if (iVar1 != -1) {
          return 1;
        }
        iVar1 = WSAGetLastError();
        ERR_put_error(2,7,iVar1,"crypto\\bio\\b_sock2.c",0x10b);
        uVar2 = 0x77;
        uVar3 = 0x10c;
      }
      else {
        iVar1 = WSAGetLastError();
        ERR_put_error(2,0xe,iVar1,"crypto\\bio\\b_sock2.c",0xf0);
        uVar2 = 0x8a;
        uVar3 = 0xf1;
      }
    }
    else {
      iVar1 = WSAGetLastError();
      ERR_put_error(2,0xe,iVar1,"crypto\\bio\\b_sock2.c",0xe7);
      uVar2 = 0x89;
      uVar3 = 0xe8;
    }
  }
  else {
    iVar1 = WSAGetLastError();
    ERR_put_error(2,0xf,iVar1,"crypto\\bio\\b_sock2.c",0xdc);
    uVar2 = 0x86;
    uVar3 = 0xdd;
  }
LAB_14f731ba7:
  ERR_put_error(0x20,0x8b,uVar2,"crypto\\bio\\b_sock2.c",uVar3);
  return 0;
}

// BIO_socket @ 14f731bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

SOCKET BIO_socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  SOCKET SVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f731be5;
  iVar1 = BIO_sock_init();
  if (iVar1 == 1) {
    SVar2 = socket(param_1,param_2,param_3);
    if ((int)SVar2 != -1) {
      return SVar2;
    }
    iVar1 = WSAGetLastError();
    ERR_put_error(2,4,iVar1,"crypto\\bio\\b_sock2.c",0x31,uVar3);
    ERR_put_error(0x20,0x8c,0x76,"crypto\\bio\\b_sock2.c",0x32);
  }
  return 0xffffffff;
}

