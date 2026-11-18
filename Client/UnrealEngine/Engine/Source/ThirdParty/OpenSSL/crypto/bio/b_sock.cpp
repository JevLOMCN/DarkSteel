// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// BIO_accept @ 14f7028d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BIO_accept(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar3 = BIO_accept_ex(param_1,local_48,0);
  uVar11 = uVar3 & 0xffffffff;
  if ((int)uVar3 == -1) {
    iVar2 = BIO_sock_should_retry(0xffffffff);
    if (iVar2 == 0) {
      iVar2 = WSAGetLastError();
      local_58 = 0xf6;
      ERR_put_error(2,8,iVar2,"crypto\\bio\\b_sock.c");
      local_58 = 0xf7;
      ERR_put_error(0x20,0x65,100,"crypto\\bio\\b_sock.c");
      return uVar11;
    }
    return 0xfffffffe;
  }
  if (param_2 == (longlong *)0x0) {
    return uVar3;
  }
  pcVar4 = (char *)BIO_ADDR_hostname_string(local_48,1);
  pcVar5 = (char *)BIO_ADDR_service_string(local_48,1);
  if ((pcVar4 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
    *param_2 = 0;
  }
  else {
    uVar6 = 0;
    cVar1 = *pcVar4;
    pcVar12 = pcVar4;
    for (uVar8 = 0; (cVar1 != '\0' && (uVar8 < 0x80000000)); uVar8 = uVar8 + 1) {
      pcVar12 = pcVar12 + 1;
      cVar1 = *pcVar12;
    }
    cVar1 = *pcVar5;
    pcVar12 = pcVar5;
    for (; (cVar1 != '\0' && (uVar6 < 0x80000000)); uVar6 = uVar6 + 1) {
      pcVar12 = pcVar12 + 1;
      cVar1 = *pcVar12;
    }
    pcVar12 = (char *)CRYPTO_zalloc((uVar6 & 0x7fffffff) + (uVar8 & 0x7fffffff) + 2,
                                    "crypto\\bio\\b_sock.c",0xff);
    *param_2 = (longlong)pcVar12;
    pcVar9 = pcVar4;
    if (pcVar12 != (char *)0x0) {
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        pcVar12 = pcVar12 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar12 = (char *)(*param_2 + -1);
      do {
        pcVar9 = *(char (*) [2])pcVar12;
        pcVar12 = *(char (*) [2])pcVar12 + 1;
      } while (pcVar9[1] != '\0');
      *(char (*) [2])pcVar12 = s__;
      lVar7 = *param_2 + -1;
      do {
        pcVar12 = (char *)(lVar7 + 1);
        lVar7 = lVar7 + 1;
      } while (*pcVar12 != '\0');
      lVar10 = 0;
      do {
        cVar1 = pcVar5[lVar10];
        *(char *)(lVar7 + lVar10) = cVar1;
        lVar10 = lVar10 + 1;
      } while (cVar1 != '\0');
      goto LAB_14f702ab0;
    }
  }
  local_58 = 0x104;
  ERR_put_error(0x20,0x65,0x41,"crypto\\bio\\b_sock.c");
  BIO_closesocket(uVar11);
  uVar11 = 0xffffffff;
LAB_14f702ab0:
  CRYPTO_free(pcVar4,"crypto\\bio\\b_sock.c",0x10c);
  CRYPTO_free(pcVar5,"crypto\\bio\\b_sock.c",0x10d);
  return uVar11;
}

// BIO_get_accept_socket @ 14f702b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BIO_get_accept_socket(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f702b1e;
  local_res20 = 0;
  local_28 = 0;
  local_res18 = 0;
  iVar5 = -1;
  iVar1 = BIO_parse_hostserv(param_1,&local_res20,&local_28,1);
  if (iVar1 != 0) {
    iVar1 = BIO_sock_init();
    if (iVar1 == 1) {
      iVar1 = BIO_lookup(local_res20,local_28,1,0,1,&local_res18);
      if (iVar1 == 0) {
        uVar2 = BIO_ADDRINFO_protocol(local_res18);
        uVar3 = BIO_ADDRINFO_socktype(local_res18);
        uVar4 = BIO_ADDRINFO_family(local_res18);
        iVar5 = BIO_socket(uVar4,uVar3,uVar2,0);
        if (iVar5 != -1) {
          uVar6 = BIO_ADDRINFO_address(local_res18);
          iVar1 = BIO_listen(iVar5,uVar6,param_2 != 0);
          if (iVar1 != 0) goto LAB_14f702bfc;
          BIO_closesocket(iVar5);
        }
        iVar5 = -1;
      }
LAB_14f702bfc:
      BIO_ADDRINFO_free(local_res18);
      CRYPTO_free(local_res20,"crypto\\bio\\b_sock.c",0xe5);
      CRYPTO_free(local_28,"crypto\\bio\\b_sock.c",0xe6);
      return iVar5;
    }
  }
  return -1;
}

// BIO_get_host_ip @ 14f702c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BIO_get_host_ip(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res18;
  longlong local_res20;
  
  uVar2 = 0;
  local_res18 = 0;
  iVar1 = BIO_sock_init();
  if (iVar1 != 1) {
    return 0;
  }
  iVar1 = BIO_lookup(param_1,0,0,2,1,&local_res18);
  if (iVar1 != 0) {
    iVar1 = BIO_ADDRINFO_family(local_res18);
    if (iVar1 != 2) {
      ERR_put_error(0x20,0x6a,0x6b,"crypto\\bio\\b_sock.c",0x29);
      BIO_ADDRINFO_free(local_res18);
      return 0;
    }
    uVar3 = BIO_ADDRINFO_address(local_res18);
    iVar1 = BIO_ADDR_rawaddress(uVar3,0,&local_res20);
    if ((iVar1 != 0) && (local_res20 == 4)) {
      uVar3 = BIO_ADDRINFO_address(local_res18);
      uVar2 = BIO_ADDR_rawaddress(uVar3,param_2,&local_res20);
    }
    BIO_ADDRINFO_free(local_res18);
    return uVar2;
  }
  ERR_add_error_data(2,"host=",param_1);
  return 0;
}

// BIO_get_port @ 14f702da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_get_port(longlong param_1,u_short *param_2)

{
  u_short uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (param_1 == 0) {
    ERR_put_error(0x20,0x6b,0x71,"crypto\\bio\\b_sock.c",0x40,0x14f702db5);
  }
  else {
    iVar2 = BIO_sock_init();
    if (iVar2 == 1) {
      iVar2 = BIO_lookup(0,param_1,0,2,1,&local_res8);
      if (iVar2 == 0) {
        ERR_add_error_data(2,"host=",param_1);
        return 0;
      }
      iVar2 = BIO_ADDRINFO_family(local_res8);
      if (iVar2 != 2) {
        ERR_put_error(0x20,0x6b,0x8d,"crypto\\bio\\b_sock.c",0x4a);
        BIO_ADDRINFO_free(local_res8);
        return 0;
      }
      uVar3 = BIO_ADDRINFO_address(local_res8);
      uVar1 = BIO_ADDR_rawport(uVar3);
      uVar1 = ntohs(uVar1);
      *param_2 = uVar1;
      BIO_ADDRINFO_free(local_res8);
      return 1;
    }
  }
  return 0;
}

// BIO_gethostbyname @ 14f702ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_gethostbyname(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f702f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gethostbyname(param_1);
  return;
}

// BIO_sock_error @ 14f702f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BIO_sock_error(int param_1)

{
  int iVar1;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = 0;
  local_res10[0] = 4;
  iVar1 = getsockopt((longlong)param_1,0xffff,0x1007,(char *)local_res8,local_res10);
  if (iVar1 < 0) {
    iVar1 = WSAGetLastError();
    return iVar1;
  }
  return local_res8[0];
}

// BIO_sock_info @ 14f702f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_sock_info(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  sockaddr *name;
  uint local_res10 [6];
  undefined8 uVar2;
  
  uVar2 = 0x14f702f8c;
  if (param_2 != 0) {
    ERR_put_error(0x20,0x8d,0x8c,"crypto\\bio\\b_sock.c",0x16b,0x14f702f8c);
    return 0;
  }
  local_res10[0] = 0x1c;
  name = (sockaddr *)BIO_ADDR_sockaddr_noconst(*param_3);
  iVar1 = getsockname((longlong)param_1,name,(int *)local_res10);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    ERR_put_error(2,0x10,iVar1,"crypto\\bio\\b_sock.c",0x160,uVar2);
    ERR_put_error(0x20,0x8d,0x84,"crypto\\bio\\b_sock.c",0x161);
    return 0;
  }
  if (0x1c < local_res10[0]) {
    ERR_put_error(0x20,0x8d,0x85,"crypto\\bio\\b_sock.c",0x165,uVar2);
    return 0;
  }
  return 1;
}

// BIO_sock_init @ 14f703080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_sock_init(void)

{
  int iVar1;
  
  if (DAT_1553e2d10 == 0) {
    DAT_1553e2d10 = 1;
    memset(&DAT_1553e2d20,0,0x198);
    iVar1 = WSAStartup(0x202,(LPWSADATA)&DAT_1553e2d20);
    if (iVar1 != 0) {
      iVar1 = WSAGetLastError();
      ERR_put_error(2,9,iVar1,"crypto\\bio\\b_sock.c",0x87);
      ERR_put_error(0x20,0x70,0x7a,"crypto\\bio\\b_sock.c",0x88);
      return 0xffffffff;
    }
  }
  return 1;
}

// BIO_socket_ioctl @ 14f703130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BIO_socket_ioctl(int param_1,long param_2,u_long *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f70313c;
  iVar1 = ioctlsocket((longlong)param_1,param_2,param_3);
  if (iVar1 < 0) {
    iVar2 = WSAGetLastError();
    ERR_put_error(2,5,iVar2,"crypto\\bio\\b_sock.c",0xc3,uVar3);
  }
  return iVar1;
}

// BIO_socket_nbio @ 14f703190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool BIO_socket_nbio(int param_1,u_long param_2)

{
  int iVar1;
  int iVar2;
  u_long local_res8 [8];
  undefined8 uVar3;
  
  uVar3 = 0x14f70319c;
  local_res8[0] = param_2;
  iVar1 = ioctlsocket((longlong)param_1,-0x7ffb9982,local_res8);
  if (iVar1 < 0) {
    iVar2 = WSAGetLastError();
    ERR_put_error(2,5,iVar2,"crypto\\bio\\b_sock.c",0xc3,uVar3);
  }
  return iVar1 == 0;
}

// bio_sock_cleanup_int @ 14f703230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bio_sock_cleanup_int(void)

{
  if (DAT_1553e2d10 != 0) {
    DAT_1553e2d10 = 0;
                    /* WARNING: Could not recover jumptable at 0x00014f703254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WSACleanup();
    return;
  }
  return;
}

