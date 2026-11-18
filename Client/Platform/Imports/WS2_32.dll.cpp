// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 52

// accept @ 1501585a0

SOCKET __stdcall accept(SOCKET s,sockaddr *addr,int *addrlen)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501585a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = accept(s,addr,addrlen);
  return SVar1;
}

// bind @ 1501585ac

int __stdcall bind(SOCKET s,sockaddr *addr,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501585ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = bind(s,addr,namelen);
  return iVar1;
}

// closesocket @ 1501585b8

int __stdcall closesocket(SOCKET s)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501585b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = closesocket(s);
  return iVar1;
}

// connect @ 1501585c4

int __stdcall connect(SOCKET s,sockaddr *name,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501585c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = connect(s,name,namelen);
  return iVar1;
}

// ioctlsocket @ 1501585d0

int __stdcall ioctlsocket(SOCKET s,long cmd,u_long *argp)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501585d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ioctlsocket(s,cmd,argp);
  return iVar1;
}

// htons @ 1501585dc

u_short __stdcall htons(u_short hostshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501585dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htons(hostshort);
  return uVar1;
}

// listen @ 1501585e8

int __stdcall listen(SOCKET s,int backlog)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501585e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = listen(s,backlog);
  return iVar1;
}

// select @ 1501585f4

int __stdcall select(int nfds,fd_set *readfds,fd_set *writefds,fd_set *exceptfds,timeval *timeout)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501585f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = select(nfds,readfds,writefds,exceptfds,timeout);
  return iVar1;
}

// WSAStartup @ 150158600

int __stdcall WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}

// WSAGetLastError @ 15015860c

int __stdcall WSAGetLastError(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015860c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAGetLastError();
  return iVar1;
}

// WSASocketW @ 150158618

void WSASocketW(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSASocketW();
  return;
}

// getaddrinfo @ 150158624

void getaddrinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  getaddrinfo();
  return;
}

// freeaddrinfo @ 150158630

void freeaddrinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  freeaddrinfo();
  return;
}

// getpeername @ 15015863c

int __stdcall getpeername(SOCKET s,sockaddr *name,int *namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015863c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = getpeername(s,name,namelen);
  return iVar1;
}

// getsockname @ 150158648

int __stdcall getsockname(SOCKET s,sockaddr *name,int *namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = getsockname(s,name,namelen);
  return iVar1;
}

// getsockopt @ 150158654

int __stdcall getsockopt(SOCKET s,int level,int optname,char *optval,int *optlen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = getsockopt(s,level,optname,optval,optlen);
  return iVar1;
}

// htonl @ 150158660

u_long __stdcall htonl(u_long hostlong)

{
  u_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htonl(hostlong);
  return uVar1;
}

// ntohl @ 15015866c

u_long __stdcall ntohl(u_long netlong)

{
  u_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015866c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ntohl(netlong);
  return uVar1;
}

// ntohs @ 150158678

u_short __stdcall ntohs(u_short netshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ntohs(netshort);
  return uVar1;
}

// recv @ 150158684

int __stdcall recv(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = recv(s,buf,len,flags);
  return iVar1;
}

// recvfrom @ 150158690

int __stdcall recvfrom(SOCKET s,char *buf,int len,int flags,sockaddr *from,int *fromlen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = recvfrom(s,buf,len,flags,from,fromlen);
  return iVar1;
}

// send @ 15015869c

int __stdcall send(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015869c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = send(s,buf,len,flags);
  return iVar1;
}

// sendto @ 1501586a8

int __stdcall sendto(SOCKET s,char *buf,int len,int flags,sockaddr *to,int tolen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501586a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sendto(s,buf,len,flags,to,tolen);
  return iVar1;
}

// setsockopt @ 1501586b4

int __stdcall setsockopt(SOCKET s,int level,int optname,char *optval,int optlen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501586b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = setsockopt(s,level,optname,optval,optlen);
  return iVar1;
}

// shutdown @ 1501586c0

int __stdcall shutdown(SOCKET s,int how)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501586c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = shutdown(s,how);
  return iVar1;
}

// socket @ 1501586cc

SOCKET __stdcall socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501586cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = socket(af,type,protocol);
  return SVar1;
}

// gethostname @ 1501586d8

int __stdcall gethostname(char *name,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501586d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = gethostname(name,namelen);
  return iVar1;
}

// WSACleanup @ 1501586e4

int __stdcall WSACleanup(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501586e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSACleanup();
  return iVar1;
}

// WSAIoctl @ 1501586f0

void WSAIoctl(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501586f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAIoctl();
  return;
}

// getnameinfo @ 1501586fc

void getnameinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501586fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  getnameinfo();
  return;
}

// inet_pton @ 150158708

void inet_pton(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inet_pton();
  return;
}

// __WSAFDIsSet @ 150158714

int __stdcall __WSAFDIsSet(SOCKET param_1,fd_set *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __WSAFDIsSet(param_1,param_2);
  return iVar1;
}

// inet_addr @ 150158720

ulong __stdcall inet_addr(char *cp)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = inet_addr(cp);
  return uVar1;
}

// InetNtopW @ 15015872c

void InetNtopW(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015872c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InetNtopW();
  return;
}

// WSAPoll @ 150158738

void WSAPoll(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAPoll();
  return;
}

// WSASetLastError @ 150158744

void __stdcall WSASetLastError(int iError)

{
                    /* WARNING: Could not recover jumptable at 0x000150158744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSASetLastError(iError);
  return;
}

// WSARecv @ 150158750

void WSARecv(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSARecv();
  return;
}

// WSARecvFrom @ 15015875c

void WSARecvFrom(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSARecvFrom();
  return;
}

// WSASend @ 150158768

void WSASend(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSASend();
  return;
}

// WSASendTo @ 150158774

void WSASendTo(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSASendTo();
  return;
}

// WSAAddressToStringW @ 150158780

void WSAAddressToStringW(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAAddressToStringW();
  return;
}

// WSAStringToAddressW @ 15015878c

void WSAStringToAddressW(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015878c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAStringToAddressW();
  return;
}

// gethostbyname @ 150158798

hostent * __stdcall gethostbyname(char *name)

{
  hostent *phVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = gethostbyname(name);
  return phVar1;
}

// WSACloseEvent @ 1501587a4

void WSACloseEvent(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501587a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSACloseEvent();
  return;
}

// WSACreateEvent @ 1501587b0

void WSACreateEvent(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501587b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSACreateEvent();
  return;
}

// WSAEnumNetworkEvents @ 1501587bc

void WSAEnumNetworkEvents(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501587bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAEnumNetworkEvents();
  return;
}

// WSAEventSelect @ 1501587c8

void WSAEventSelect(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501587c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAEventSelect();
  return;
}

// WSAResetEvent @ 1501587d4

void WSAResetEvent(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501587d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAResetEvent();
  return;
}

// WSASetEvent @ 1501587e0

void WSASetEvent(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501587e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSASetEvent();
  return;
}

// WSAWaitForMultipleEvents @ 1501587ec

void WSAWaitForMultipleEvents(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501587ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAWaitForMultipleEvents();
  return;
}

// inet_ntop @ 1501587f8

void inet_ntop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501587f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inet_ntop();
  return;
}

// getprotobyname @ 150158804

protoent * __stdcall getprotobyname(char *name)

{
  protoent *ppVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppVar1 = getprotobyname(name);
  return ppVar1;
}

