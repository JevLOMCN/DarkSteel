// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 39

// ~FSocketBSD @ 14310b980

void __thiscall FSocketBSD::~FSocketBSD(FSocketBSD *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FSocketBSD__6B_;
  if (this->Socket != 0xffffffffffffffff) {
    closesocket(this->Socket);
    this->Socket = 0xffffffffffffffff;
  }
  this->_padding_ = (longlong)&___7FSocket__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Accept @ 14310c8f0

FSocket * __thiscall FSocketBSD::Accept(FSocketBSD *this,FInternetAddr *param_1,FString *param_2)

{
  ISocketSubsystem *pIVar1;
  code *pcVar2;
  bool bVar3;
  SOCKET SVar4;
  FSocket *pFVar5;
  undefined8 uVar6;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  local_res8[0] = 0x80;
  SVar4 = accept(this->Socket,(sockaddr *)(param_1 + 1),local_res8);
  if (SVar4 == 0xffffffffffffffff) {
    return (FSocket *)0x0;
  }
  if (this->SocketSubsystem == (ISocketSubsystem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SocketSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\BSDSockets\\SocketsBSD.cpp"
                       ,0x9e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSocket *)(*pcVar2)();
      return pFVar5;
    }
  }
  pIVar1 = this->SocketSubsystem;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x160);
  uVar6 = (**(code **)((longlong)*param_1 + 0xa8))(param_1,local_res10);
  pFVar5 = (FSocket *)(*pcVar2)(pIVar1,SVar4,(int)this->_padding_,param_2,uVar6);
  return pFVar5;
}

// Accept @ 14310c9c0

FSocket * __thiscall FSocketBSD::Accept(FSocketBSD *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  SOCKET SVar3;
  FSocket *pFVar4;
  
  SVar3 = accept(this->Socket,(sockaddr *)0x0,(int *)0x0);
  if (SVar3 == 0xffffffffffffffff) {
    return (FSocket *)0x0;
  }
  if (this->SocketSubsystem == (ISocketSubsystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SocketSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\BSDSockets\\SocketsBSD.cpp"
                       ,0x8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSocket *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = (FSocket *)
           (**(code **)(this->SocketSubsystem->_padding_ + 0x160))
                     (this->SocketSubsystem,SVar3,(int)this->_padding_,param_1,&this->_padding_);
  return pFVar4;
}

// Bind @ 14310ccc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSocketBSD::Bind(FSocketBSD *this,FInternetAddr *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  FName *this_00;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_28;
  FString local_18;
  
  lVar1 = this->_padding_;
  plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,&local_res8);
  if (*plVar3 != lVar1) {
    if (2 < (byte)LogSockets._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      this_00 = (FName *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,local_res10);
      ::FName::ToString(this_00,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  iVar2 = (**(code **)((longlong)*param_1 + 0x108))(param_1);
  iVar2 = bind(this->Socket,(sockaddr *)(param_1 + 1),iVar2);
  return iVar2 == 0;
}

// Close @ 14310d480

bool __thiscall FSocketBSD::Close(FSocketBSD *this)

{
  int iVar1;
  
  if (this->Socket != 0xffffffffffffffff) {
    iVar1 = closesocket(this->Socket);
    this->Socket = 0xffffffffffffffff;
    return iVar1 == 0;
  }
  return false;
}

// Connect @ 14310d6b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSocketBSD::Connect(FSocketBSD *this,FInternetAddr *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  FName *this_00;
  FName local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FString local_38;
  FString local_28;
  
  lVar1 = this->_padding_;
  plVar6 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,local_res10);
  if (*plVar6 == lVar1) {
    iVar5 = (**(code **)((longlong)*param_1 + 0x108))(param_1);
    iVar5 = connect(this->Socket,(sockaddr *)(param_1 + 1),iVar5);
    if ((this->SocketSubsystem == (ISocketSubsystem *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SocketSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\BSDSockets\\SocketsBSD.cpp"
                           ,0x53,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = (**(code **)(this->SocketSubsystem->_padding_ + 0xc0))(this->SocketSubsystem,iVar5);
    if ((iVar5 == 0) || (iVar5 - 7U < 2)) {
      return true;
    }
  }
  else if (2 < (byte)LogSockets._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    this_00 = (FName *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,local_res18);
    ::FName::ToString(this_00,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAddress @ 14310f3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSocketBSD::GetAddress(FSocketBSD *this,FInternetAddr *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int local_res8 [8];
  
  local_res8[0] = 0x80;
  iVar3 = getsockname(this->Socket,(sockaddr *)(param_1 + 1),local_res8);
  if (iVar3 != 0) {
    if ((this->SocketSubsystem == (ISocketSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SocketSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\BSDSockets\\SocketsBSD.cpp"
                           ,0x1a2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (1 < (byte)LogSockets._0_1_) {
      uVar4 = (**(code **)(this->SocketSubsystem->_padding_ + 0xb8))();
      switch(uVar4) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        break;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
        break;
      case 0xc:
        break;
      case 0xd:
        break;
      case 0xe:
        break;
      case 0xf:
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
        break;
      case 0x16:
        break;
      case 0x17:
        break;
      case 0x18:
        break;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        break;
      case 0x1d:
        break;
      case 0x1e:
        break;
      case 0x1f:
        break;
      case 0x20:
        break;
      case 0x21:
        break;
      case 0x22:
        break;
      case 0x23:
        break;
      case 0x24:
        break;
      case 0x25:
        break;
      case 0x26:
        break;
      case 0x27:
        break;
      case 0x28:
        break;
      case 0x29:
        break;
      case 0x2a:
        break;
      case 0x2b:
        break;
      case 0x2c:
        break;
      case 0x2d:
        break;
      case 0x2e:
        break;
      case 0x2f:
        break;
      case 0x30:
        break;
      case 0x31:
        break;
      case 0x32:
        break;
      case 0x33:
        break;
      case 0x34:
        break;
      case 0x35:
        break;
      case 0x36:
        break;
      case 0x37:
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
  }
  return;
}

// GetConnectionState @ 143110650

ESocketConnectionState __thiscall FSocketBSD::GetConnectionState(FSocketBSD *this)

{
  char cVar1;
  char cVar2;
  undefined1 auVar3 [16];
  LARGE_INTEGER local_res8;
  
  if (this->Socket != 0xffffffffffffffff) {
    cVar1 = (**(code **)(this->_padding_ + 0x138))(this,2,0);
    if (cVar1 == '\x01') {
      QueryPerformanceCounter(&local_res8);
      if (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - (double)this->LastActivityTime <= __real_4014000000000000) {
        return SCS_Connected;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = __real_40c3884000000000;
      auVar3 = roundpd(auVar3,auVar3,1);
      cVar1 = (**(code **)(this->_padding_ + 0x138))(this,1,(longlong)auVar3._0_8_);
      cVar2 = (**(code **)(this->_padding_ + 0x138))(this,0,(longlong)auVar3._0_8_);
      if ((cVar1 != '\0') && (cVar2 != '\0')) {
        if ((cVar1 == '\x01') && (cVar2 == '\x01')) {
          return SCS_NotConnected;
        }
        return SCS_ConnectionError;
      }
      QueryPerformanceCounter(&local_res8);
      LOCK();
      this->LastActivityTime =
           (atomic<double>)
           ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000);
      UNLOCK();
      return SCS_Connected;
    }
  }
  return SCS_ConnectionError;
}

// GetPeerAddress @ 143112400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSocketBSD::GetPeerAddress(FSocketBSD *this,FInternetAddr *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_res8 [2];
  
  local_res8[0] = 0x80;
  iVar4 = getpeername(this->Socket,(sockaddr *)(param_1 + 1),local_res8);
  if (iVar4 != 0) {
    if ((this->SocketSubsystem == (ISocketSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SocketSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\BSDSockets\\SocketsBSD.cpp"
                           ,0x1b1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (2 < (byte)LogSockets._0_1_) {
      uVar5 = (**(code **)(this->SocketSubsystem->_padding_ + 0xb8))();
      switch(uVar5) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        break;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
        break;
      case 0xc:
        break;
      case 0xd:
        break;
      case 0xe:
        break;
      case 0xf:
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
        break;
      case 0x16:
        break;
      case 0x17:
        break;
      case 0x18:
        break;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        break;
      case 0x1d:
        break;
      case 0x1e:
        break;
      case 0x1f:
        break;
      case 0x20:
        break;
      case 0x21:
        break;
      case 0x22:
        break;
      case 0x23:
        break;
      case 0x24:
        break;
      case 0x25:
        break;
      case 0x26:
        break;
      case 0x27:
        break;
      case 0x28:
        break;
      case 0x29:
        break;
      case 0x2a:
        break;
      case 0x2b:
        break;
      case 0x2c:
        break;
      case 0x2d:
        break;
      case 0x2e:
        break;
      case 0x2f:
        break;
      case 0x30:
        break;
      case 0x31:
        break;
      case 0x32:
        break;
      case 0x33:
        break;
      case 0x34:
        break;
      case 0x35:
        break;
      case 0x36:
        break;
      case 0x37:
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
  }
  return iVar4 == 0;
}

// GetPortNo @ 1431128b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FSocketBSD::GetPortNo(FSocketBSD *this)

{
  code *pcVar1;
  bool bVar2;
  u_short uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_c8 [32];
  int local_a8 [4];
  sockaddr local_98 [8];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = 0x80;
  iVar4 = getsockname(this->Socket,local_98,local_a8);
  if (iVar4 == 0) {
    uVar3 = ntohs(local_98[0].sa_data._0_2_);
    uVar6 = (uint)uVar3;
  }
  else {
    if ((this->SocketSubsystem == (ISocketSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SocketSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\BSDSockets\\SocketsBSD.cpp"
                           ,0x293,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    if (1 < (byte)LogSockets._0_1_) {
      uVar5 = (**(code **)(this->SocketSubsystem->_padding_ + 0xb8))();
      switch(uVar5) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        break;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
        break;
      case 0xc:
        break;
      case 0xd:
        break;
      case 0xe:
        break;
      case 0xf:
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
        break;
      case 0x16:
        break;
      case 0x17:
        break;
      case 0x18:
        break;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        break;
      case 0x1d:
        break;
      case 0x1e:
        break;
      case 0x1f:
        break;
      case 0x20:
        break;
      case 0x21:
        break;
      case 0x22:
        break;
      case 0x23:
        break;
      case 0x24:
        break;
      case 0x25:
        break;
      case 0x26:
        break;
      case 0x27:
        break;
      case 0x28:
        break;
      case 0x29:
        break;
      case 0x2a:
        break;
      case 0x2b:
        break;
      case 0x2c:
        break;
      case 0x2d:
        break;
      case 0x2e:
        break;
      case 0x2f:
        break;
      case 0x30:
        break;
      case 0x31:
        break;
      case 0x32:
        break;
      case 0x33:
        break;
      case 0x34:
        break;
      case 0x35:
        break;
      case 0x36:
        break;
      case 0x37:
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
    uVar6 = 0;
  }
  return uVar6;
}

// HasPendingData @ 1431139f0

bool __thiscall FSocketBSD::HasPendingData(FSocketBSD *this,uint *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x138))(this,0,0);
  if (cVar1 == '\0') {
    iVar2 = ioctlsocket(this->Socket,0x4004667f,param_1);
    if (iVar2 == 0) {
      return *param_1 != 0;
    }
  }
  return false;
}

// HasState @ 143113a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ESocketBSDReturn __thiscall
FSocketBSD::HasState(FSocketBSD *this,ESocketBSDParam param_1,FTimespan param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  ESocketBSDReturn EVar4;
  int iVar5;
  longlong lVar6;
  fd_set *readfds;
  timeval *timeout;
  fd_set *writefds;
  fd_set *exceptfds;
  undefined1 auStackY_268 [32];
  timeval local_238 [2];
  fd_set local_228;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar1 = this->Socket;
  local_228.fd_count = 1;
  local_238[0].tv_sec = (long)((double)param_2.Ticks * __real_3e7ad7f29abcaf48);
  lVar6 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_2.Ticks),8) + param_2.Ticks;
  local_238[0].tv_usec =
       (long)((param_2.Ticks + ((lVar6 >> 0x17) - (lVar6 >> 0x3f)) * -10000000) / 10);
  timeout = local_238;
  if (param_2.Ticks < 0) {
    timeout = (timeval *)0x0;
  }
  local_228.fd_array[0] = uVar1;
  if (param_1 == CanRead) {
    iVar5 = (int)(uVar1 + 1);
    if (((uVar1 + 1 != (longlong)iVar5) || (iVar5 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    exceptfds = (fd_set *)0x0;
    readfds = &local_228;
LAB_143113bec:
    writefds = (fd_set *)0x0;
  }
  else {
    if (param_1 != CanWrite) {
      if (param_1 != HasError) {
        iVar5 = 0;
        goto LAB_143113c08;
      }
      iVar5 = (int)(uVar1 + 1);
      if (((uVar1 + 1 != (longlong)iVar5) || (iVar5 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      exceptfds = &local_228;
      readfds = (fd_set *)0x0;
      goto LAB_143113bec;
    }
    iVar5 = (int)(uVar1 + 1);
    if (((uVar1 + 1 != (longlong)iVar5) || (iVar5 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    exceptfds = (fd_set *)0x0;
    writefds = &local_228;
    readfds = (fd_set *)0x0;
  }
  iVar5 = select((int)uVar1 + 1,readfds,writefds,exceptfds,timeout);
  if (0 < iVar5) {
    return Yes;
  }
LAB_143113c08:
  return (iVar5 != 0) + No;
}

// JoinMulticastGroup @ 143114150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSocketBSD::JoinMulticastGroup(FSocketBSD *this,FInternetAddr *param_1,FInternetAddr *param_2)

{
  u_long hostlong;
  int iVar1;
  longlong *plVar2;
  char *optval;
  undefined1 auStackY_88 [32];
  int optlen;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  u_long local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,local_48);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar2 == local_50) {
    hostlong = (**(code **)((longlong)*param_2 + 0x118))(param_2);
    local_30 = htonl(hostlong);
    local_40 = *(undefined4 *)(param_1 + 2);
    uStack_3c = *(undefined4 *)&param_1[2].field_0x4;
    uStack_38 = *(undefined4 *)(param_1 + 3);
    uStack_34 = *(undefined4 *)&param_1[3].field_0x4;
    optval = (char *)&local_40;
    optlen = 0x14;
    iVar1 = 0x29;
  }
  else {
    local_54 = *(undefined4 *)&param_2[1].field_0x4;
    optval = (char *)&local_58;
    iVar1 = 0;
    local_58 = *(undefined4 *)&param_1[1].field_0x4;
    optlen = 8;
  }
  iVar1 = setsockopt(this->Socket,iVar1,0xc,optval,optlen);
  return iVar1 == 0;
}

// JoinMulticastGroup @ 143114230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FSocketBSD::JoinMulticastGroup(FSocketBSD *this,FInternetAddr *param_1)

{
  u_long hostlong;
  int iVar1;
  longlong *plVar2;
  char *optval;
  undefined1 auStackY_78 [32];
  int optlen;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  u_long local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,local_38);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar2 == local_40) {
    hostlong = (**(code **)((longlong)*param_1 + 0x118))(param_1);
    local_20 = htonl(hostlong);
    local_30 = *(undefined4 *)(param_1 + 2);
    uStack_2c = *(undefined4 *)&param_1[2].field_0x4;
    uStack_28 = *(undefined4 *)(param_1 + 3);
    uStack_24 = *(undefined4 *)&param_1[3].field_0x4;
    optval = (char *)&local_30;
    optlen = 0x14;
    iVar1 = 0x29;
  }
  else {
    local_48 = *(undefined4 *)&param_1[1].field_0x4;
    optval = (char *)&local_48;
    iVar1 = 0;
    local_44 = 0;
    optlen = 8;
  }
  iVar1 = setsockopt(this->Socket,iVar1,0xc,optval,optlen);
  return iVar1 == 0;
}

// LeaveMulticastGroup @ 143114310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSocketBSD::LeaveMulticastGroup(FSocketBSD *this,FInternetAddr *param_1,FInternetAddr *param_2)

{
  u_long hostlong;
  int iVar1;
  longlong *plVar2;
  char *optval;
  undefined1 auStackY_88 [32];
  int optlen;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  u_long local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,local_48);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar2 == local_50) {
    hostlong = (**(code **)((longlong)*param_2 + 0x118))(param_2);
    local_30 = htonl(hostlong);
    local_40 = *(undefined4 *)(param_1 + 2);
    uStack_3c = *(undefined4 *)&param_1[2].field_0x4;
    uStack_38 = *(undefined4 *)(param_1 + 3);
    uStack_34 = *(undefined4 *)&param_1[3].field_0x4;
    optval = (char *)&local_40;
    optlen = 0x14;
    iVar1 = 0x29;
  }
  else {
    local_54 = *(undefined4 *)&param_2[1].field_0x4;
    optval = (char *)&local_58;
    iVar1 = 0;
    local_58 = *(undefined4 *)&param_1[1].field_0x4;
    optlen = 8;
  }
  iVar1 = setsockopt(this->Socket,iVar1,0xd,optval,optlen);
  return iVar1 == 0;
}

// LeaveMulticastGroup @ 1431143f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FSocketBSD::LeaveMulticastGroup(FSocketBSD *this,FInternetAddr *param_1)

{
  u_long hostlong;
  int iVar1;
  longlong *plVar2;
  char *optval;
  undefined1 auStackY_78 [32];
  int optlen;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  u_long local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,local_38);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar2 == local_40) {
    hostlong = (**(code **)((longlong)*param_1 + 0x118))(param_1);
    local_20 = htonl(hostlong);
    local_30 = *(undefined4 *)(param_1 + 2);
    uStack_2c = *(undefined4 *)&param_1[2].field_0x4;
    uStack_28 = *(undefined4 *)(param_1 + 3);
    uStack_24 = *(undefined4 *)&param_1[3].field_0x4;
    optval = (char *)&local_30;
    optlen = 0x14;
    iVar1 = 0x29;
  }
  else {
    local_48 = *(undefined4 *)&param_1[1].field_0x4;
    optval = (char *)&local_48;
    iVar1 = 0;
    local_44 = 0;
    optlen = 8;
  }
  iVar1 = setsockopt(this->Socket,iVar1,0xd,optval,optlen);
  return iVar1 == 0;
}

// Listen @ 1431144d0

bool __thiscall FSocketBSD::Listen(FSocketBSD *this,int param_1)

{
  int iVar1;
  
  iVar1 = listen(this->Socket,param_1);
  return iVar1 == 0;
}

// Recv @ 143114930

bool __thiscall
FSocketBSD::Recv(FSocketBSD *this,uchar *param_1,int param_2,int *param_3,Type param_4)

{
  Type flags;
  int iVar1;
  int iVar2;
  LARGE_INTEGER local_res8;
  
  iVar2 = (int)this->_padding_;
  flags = param_4 & Peek | 8;
  if ((param_4 & WaitAll) == None) {
    flags = param_4 & Peek;
  }
  iVar1 = recv(this->Socket,(char *)param_1,param_2,flags);
  *param_3 = iVar1;
  if (-1 < iVar1) {
    if ((iVar2 == 2) && (iVar1 < 1)) {
      return false;
    }
LAB_1431149ae:
    QueryPerformanceCounter(&local_res8);
    LOCK();
    this->LastActivityTime =
         (atomic<double>)
         ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
    UNLOCK();
    return true;
  }
  if (iVar2 == 2) {
    iVar2 = (**(code **)(this->SocketSubsystem->_padding_ + 0xc0))(this->SocketSubsystem,iVar1);
    if (iVar2 == 7) {
      *param_3 = 0;
      goto LAB_1431149ae;
    }
  }
  *param_3 = 0;
  return false;
}

// RecvFrom @ 143114a60

bool __thiscall
FSocketBSD::RecvFrom
          (FSocketBSD *this,uchar *param_1,int param_2,int *param_3,FInternetAddr *param_4,
          Type param_5)

{
  Type flags;
  Type TVar1;
  int iVar2;
  int iVar3;
  Type TVar4;
  
  TVar1 = param_5;
  iVar3 = (int)this->_padding_;
  param_5 = 0x80;
  TVar4 = TVar1 & Peek;
  flags = TVar4 | 8;
  if ((TVar1 >> 8 & 1) == 0) {
    flags = TVar4;
  }
  iVar2 = recvfrom(this->Socket,(char *)param_1,param_2,flags,(sockaddr *)(param_4 + 1),
                   (int *)&param_5);
  *param_3 = iVar2;
  if (-1 < iVar2) {
    if ((iVar3 == 2) && (iVar2 < 1)) {
      return false;
    }
LAB_143114afe:
    QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
    LOCK();
    this->LastActivityTime =
         (atomic<double>)
         ((double)(longlong)param_4 * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
    UNLOCK();
    return true;
  }
  if (iVar3 == 2) {
    iVar3 = (**(code **)(this->SocketSubsystem->_padding_ + 0xc0))(this->SocketSubsystem,iVar2);
    if (iVar3 == 7) {
      *param_3 = 0;
      goto LAB_143114afe;
    }
  }
  *param_3 = 0;
  return false;
}

// RecvFromWithPktInfo @ 143114b70

bool __thiscall
FSocketBSD::RecvFromWithPktInfo
          (FSocketBSD *this,uchar *param_1,int param_2,int *param_3,FInternetAddr *param_4,
          FInternetAddr *param_5,Type param_6)

{
  return false;
}

// ReleaseNativeSocket @ 1431157c0

ulong64 __thiscall FSocketBSD::ReleaseNativeSocket(FSocketBSD *this)

{
  ulong64 uVar1;
  
  uVar1 = this->Socket;
  this->Socket = 0xffffffffffffffff;
  return uVar1;
}

// Send @ 143115e90

bool __thiscall FSocketBSD::Send(FSocketBSD *this,uchar *param_1,int param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  
  iVar1 = send(this->Socket,(char *)param_1,param_2,this->SendFlags);
  *param_3 = iVar1;
  bVar2 = (bool)((byte)((uint)iVar1 >> 0x1f) ^ 1);
  if (bVar2 != false) {
    QueryPerformanceCounter(&local_res8);
    LOCK();
    this->LastActivityTime =
         (atomic<double>)
         ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
    UNLOCK();
  }
  return bVar2;
}

// SendTo @ 143115fb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSocketBSD::SendTo(FSocketBSD *this,uchar *param_1,int param_2,int *param_3,FInternetAddr *param_4)

{
  longlong lVar1;
  FInternetAddr *pFVar2;
  int iVar3;
  longlong *plVar4;
  FName *this_00;
  bool bVar5;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  pFVar2 = param_4;
  lVar1 = this->_padding_;
  plVar4 = (longlong *)(**(code **)((longlong)*param_4 + 0xa8))(param_4,&param_4);
  if (*plVar4 == lVar1) {
    iVar3 = (**(code **)((longlong)*pFVar2 + 0x108))(pFVar2);
    iVar3 = sendto(this->Socket,(char *)param_1,param_2,this->SendFlags,(sockaddr *)(pFVar2 + 1),
                   iVar3);
    *param_3 = iVar3;
    bVar5 = (bool)((byte)((uint)iVar3 >> 0x1f) ^ 1);
    if (bVar5 != false) {
      QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
      LOCK();
      this->LastActivityTime =
           (atomic<double>)
           ((double)(longlong)param_4 * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000);
      UNLOCK();
    }
  }
  else {
    if (2 < (byte)LogSockets._0_1_) {
      (**(code **)((longlong)*pFVar2 + 0x80))(pFVar2,local_28,1);
      param_4 = (FInternetAddr *)this->_padding_;
      ::FName::ToString((FName *)&param_4,&local_38);
      this_00 = (FName *)(**(code **)((longlong)*pFVar2 + 0xa8))(pFVar2,local_res8);
      ::FName::ToString(this_00,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
    bVar5 = false;
  }
  return bVar5;
}

// SetBroadcast @ 143116360

bool __thiscall FSocketBSD::SetBroadcast(FSocketBSD *this,bool param_1)

{
  int iVar1;
  uint local_res10 [6];
  
  local_res10[0] = (uint)param_1;
  iVar1 = setsockopt(this->Socket,0xffff,0x20,(char *)local_res10,4);
  return iVar1 == 0;
}

// SetIPv6Only @ 1431165a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSocketBSD::SetIPv6Only(FSocketBSD *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_res8 [2];
  longlong local_res18;
  
  lVar1 = this->_padding_;
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (lVar1 != local_res18) {
    return true;
  }
  local_res8[0] = (uint)param_1;
  iVar5 = setsockopt(this->Socket,0x29,0x1b,(char *)local_res8,4);
  if (iVar5 != 0) {
    if ((this->SocketSubsystem == (ISocketSubsystem *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SocketSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\BSDSockets\\SocketsBSD.cpp"
                           ,0x2bd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (1 < (byte)LogSockets._0_1_) {
      uVar6 = (**(code **)(this->SocketSubsystem->_padding_ + 0xb8))();
      switch(uVar6) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        break;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
        break;
      case 0xc:
        break;
      case 0xd:
        break;
      case 0xe:
        break;
      case 0xf:
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
        break;
      case 0x16:
        break;
      case 0x17:
        break;
      case 0x18:
        break;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        break;
      case 0x1d:
        break;
      case 0x1e:
        break;
      case 0x1f:
        break;
      case 0x20:
        break;
      case 0x21:
        break;
      case 0x22:
        break;
      case 0x23:
        break;
      case 0x24:
        break;
      case 0x25:
        break;
      case 0x26:
        break;
      case 0x27:
        break;
      case 0x28:
        break;
      case 0x29:
        break;
      case 0x2a:
        break;
      case 0x2b:
        break;
      case 0x2c:
        break;
      case 0x2d:
        break;
      case 0x2e:
        break;
      case 0x2f:
        break;
      case 0x30:
        break;
      case 0x31:
        break;
      case 0x32:
        break;
      case 0x33:
        break;
      case 0x34:
        break;
      case 0x35:
        break;
      case 0x36:
        break;
      case 0x37:
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
  }
  return iVar5 == 0;
}

// SetIpPktInfo @ 143116f10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSocketBSD::SetIpPktInfo(FSocketBSD *this,bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_res10 [6];
  
  local_res10[0] = (uint)param_1;
  iVar1 = setsockopt(this->Socket,0,0x13,(char *)local_res10,4);
  if (iVar1 == 0) {
    return true;
  }
  if (1 < (byte)LogSockets._0_1_) {
    uVar2 = (**(code **)(this->SocketSubsystem->_padding_ + 0xb8))();
    switch(uVar2) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      break;
    case 0xd:
      break;
    case 0xe:
      break;
    case 0xf:
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      break;
    case 0x16:
      break;
    case 0x17:
      break;
    case 0x18:
      break;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      break;
    case 0x1c:
      break;
    case 0x1d:
      break;
    case 0x1e:
      break;
    case 0x1f:
      break;
    case 0x20:
      break;
    case 0x21:
      break;
    case 0x22:
      break;
    case 0x23:
      break;
    case 0x24:
      break;
    case 0x25:
      break;
    case 0x26:
      break;
    case 0x27:
      break;
    case 0x28:
      break;
    case 0x29:
      break;
    case 0x2a:
      break;
    case 0x2b:
      break;
    case 0x2c:
      break;
    case 0x2d:
      break;
    case 0x2e:
      break;
    case 0x2f:
      break;
    case 0x30:
      break;
    case 0x31:
      break;
    case 0x32:
      break;
    case 0x33:
      break;
    case 0x34:
      break;
    case 0x35:
      break;
    case 0x36:
      break;
    case 0x37:
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  return false;
}

// SetLinger @ 1431173f0

bool __thiscall FSocketBSD::SetLinger(FSocketBSD *this,bool param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ushort local_res10;
  undefined2 local_res12;
  
  local_res10 = (ushort)param_1;
  if ((param_2 != (param_2 & 0xffffU)) || (param_2 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res12 = (undefined2)param_2;
  iVar4 = setsockopt(this->Socket,0xffff,0x80,(char *)&local_res10,4);
  return iVar4 == 0;
}

// SetMulticastInterface @ 143117520

bool __thiscall FSocketBSD::SetMulticastInterface(FSocketBSD *this,FInternetAddr *param_1)

{
  u_long hostlong;
  int iVar1;
  longlong *plVar2;
  u_long *optval;
  u_long local_res10;
  undefined4 uStackX_14;
  u_long local_res18 [2];
  undefined1 local_res20 [8];
  
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,local_res20);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar2 == CONCAT44(uStackX_14,local_res10)) {
    hostlong = (**(code **)((longlong)*param_1 + 0x118))(param_1);
    local_res10 = htonl(hostlong);
    optval = &local_res10;
    iVar1 = 0x29;
  }
  else {
    local_res18[0] = *(u_long *)&param_1[1].field_0x4;
    optval = local_res18;
    iVar1 = 0;
  }
  iVar1 = setsockopt(this->Socket,iVar1,9,(char *)optval,4);
  return iVar1 == 0;
}

// SetMulticastLoopback @ 1431175c0

bool __thiscall FSocketBSD::SetMulticastLoopback(FSocketBSD *this,bool param_1)

{
  int iVar1;
  uint local_res8;
  undefined4 uStackX_c;
  char local_res10 [24];
  
  local_res10[0] = param_1;
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (this->_padding_ == CONCAT44(uStackX_c,local_res8)) {
    local_res8 = (uint)(local_res10[0] != '\0');
    iVar1 = setsockopt(this->Socket,0x29,0xb,(char *)&local_res8,4);
    return iVar1 == 0;
  }
  iVar1 = setsockopt(this->Socket,0,0xb,local_res10,1);
  return iVar1 == 0;
}

// SetMulticastTtl @ 143117650

bool __thiscall FSocketBSD::SetMulticastTtl(FSocketBSD *this,uchar param_1)

{
  int iVar1;
  uint local_res8;
  undefined4 uStackX_c;
  byte local_res10 [24];
  
  local_res10[0] = param_1;
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (this->_padding_ == CONCAT44(uStackX_c,local_res8)) {
    local_res8 = (uint)local_res10[0];
    iVar1 = setsockopt(this->Socket,0x29,10,(char *)&local_res8,4);
    return iVar1 == 0;
  }
  iVar1 = setsockopt(this->Socket,0,10,(char *)local_res10,1);
  return iVar1 == 0;
}

// SetNoDelay @ 1431176e0

bool __thiscall FSocketBSD::SetNoDelay(FSocketBSD *this,bool param_1)

{
  int iVar1;
  uint local_res8 [8];
  
  if ((int)this->_padding_ == 2) {
    local_res8[0] = (uint)param_1;
    iVar1 = setsockopt(this->Socket,6,1,(char *)local_res8,4);
    return iVar1 == 0;
  }
  return true;
}

// SetNonBlocking @ 143117730

bool __thiscall FSocketBSD::SetNonBlocking(FSocketBSD *this,bool param_1)

{
  int iVar1;
  uint local_res10 [6];
  
  local_res10[0] = (uint)param_1;
  iVar1 = ioctlsocket(this->Socket,-0x7ffb9982,local_res10);
  return iVar1 == 0;
}

// SetReceiveBufferSize @ 143117a30

bool __thiscall FSocketBSD::SetReceiveBufferSize(FSocketBSD *this,int param_1,int *param_2)

{
  int iVar1;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 4;
  local_res10[0] = param_1;
  iVar1 = setsockopt(this->Socket,0xffff,0x1002,(char *)local_res10,4);
  getsockopt(this->Socket,0xffff,0x1002,(char *)param_2,local_res8);
  return iVar1 == 0;
}

// SetRecvErr @ 143117ac0

bool __thiscall FSocketBSD::SetRecvErr(FSocketBSD *this,bool param_1)

{
  return true;
}

// SetReuseAddr @ 143117ae0

bool __thiscall FSocketBSD::SetReuseAddr(FSocketBSD *this,bool param_1)

{
  int iVar1;
  uint local_res10 [6];
  
  local_res10[0] = (uint)param_1;
  iVar1 = setsockopt(this->Socket,0xffff,4,(char *)local_res10,4);
  return iVar1 == 0;
}

// SetSendBufferSize @ 143117b50

bool __thiscall FSocketBSD::SetSendBufferSize(FSocketBSD *this,int param_1,int *param_2)

{
  int iVar1;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 4;
  local_res10[0] = param_1;
  iVar1 = setsockopt(this->Socket,0xffff,0x1001,(char *)local_res10,4);
  getsockopt(this->Socket,0xffff,0x1001,(char *)param_2,local_res8);
  return iVar1 == 0;
}

// Shutdown @ 143117be0

bool __thiscall FSocketBSD::Shutdown(FSocketBSD *this,ESocketShutdownMode param_1)

{
  int iVar1;
  
  iVar1 = ::shutdown(this->Socket,0);
  return iVar1 == 0;
}

// Wait @ 143118d00

bool __thiscall FSocketBSD::Wait(FSocketBSD *this,Type param_1,FTimespan param_2)

{
  char cVar1;
  
  if ((param_1 & ~WaitForReadOrWrite) == WaitForRead) {
    cVar1 = (**(code **)(this->_padding_ + 0x138))(this,0);
    if (cVar1 == '\0') {
      return true;
    }
  }
  if (param_1 - WaitForWrite < 2) {
    cVar1 = (**(code **)(this->_padding_ + 0x138))(this,1,param_2.Ticks);
    return cVar1 == '\0';
  }
  return false;
}

// WaitForPendingConnection @ 143118d90

bool __thiscall
FSocketBSD::WaitForPendingConnection(FSocketBSD *this,bool *param_1,FTimespan *param_2)

{
  char cVar1;
  
  *param_1 = false;
  cVar1 = (**(code **)(this->_padding_ + 0x138))(this,2,0);
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(this->_padding_ + 0x138))(this,0,param_2->Ticks);
    *param_1 = cVar1 == '\0';
    return cVar1 != '\x02';
  }
  return false;
}

