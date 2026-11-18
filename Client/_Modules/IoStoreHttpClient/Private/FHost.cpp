// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 6

// FHost @ 14456b0f0

FHost * __thiscall UE::IoStore::HTTP::FHost::FHost(FHost *this,FParams *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FHost *pFVar5;
  
  this->VerifyCert = param_1->VerifyCert;
  this->HostName = param_1->HostName;
  this->IpAddresses[0] = 0;
  this->IpAddresses[1] = 0;
  this->IpAddresses[2] = 0;
  this->IpAddresses[3] = 0;
  this->SendBufKb = -1;
  this->RecvBufKb = -1;
  this->Port = (ushort)param_1->Port;
  bVar1 = (byte)param_1->MaxConnections;
  this->MaxConnections = bVar1;
  this->MaxInflight = param_1->MaxInflight;
  this->HttpVersion = param_1->HttpVersion;
  this->bPooled = param_1->bPooled;
  if ((bVar1 == 0) || ((ushort)bVar1 != param_1->MaxConnections)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxConnections && MaxConnections == Params.MaxConnections",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                       ,0x40,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FHost *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (this->Port == 0) {
    uVar4 = 0x1bb;
    if (this->VerifyCert == 0) {
      uVar4 = 0x50;
    }
    this->Port = uVar4;
  }
  return this;
}

// Connect @ 144571230

FOutcome __thiscall UE::IoStore::HTTP::FHost::Connect(FHost *this,FSocket *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FOutcome FVar6;
  FSocket *in_R8;
  u_long local_res8 [4];
  int local_res18 [2];
  int local_res20 [2];
  FSocket local_50;
  undefined1 local_48 [16];
  
  if ((in_R8->Socket == 0xffffffffffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Socket.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                         ,0x9d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
    return (FOutcome)FVar6.field0_0x0;
  }
  if ((this->IpAddresses[0] == 0) || (this->IpAddresses[0] == 1)) {
    FVar6 = ResolveHostName(this);
    if ((*(ulonglong *)FVar6.field0_0x0 & 0xffffffffffff) < 0x800000000000) {
      param_1->Socket = *(ulonglong *)FVar6.field0_0x0;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
  }
  uVar1 = this->IpAddresses[0];
  if (((uVar1 == 0) || (uVar1 == 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsResolved() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                         ,0xa9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
    return (FOutcome)FVar6.field0_0x0;
  }
  uVar1 = this->IpAddresses[0];
  FVar6 = MaybeConnectSocks(&local_50,(uint)in_R8,uVar1);
  uVar2 = *(ulonglong *)FVar6.field0_0x0;
  if ((uVar2 & 0xffffffffffff) < 0x800000000000) {
    param_1->Socket = uVar2;
  }
  else {
    if (((int)(uVar2 >> 0x20) != 0x8000) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Outcome.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                           ,0xb3,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar6.field0_0x0;
    }
    local_res8[0] = 1;
    iVar5 = ioctlsocket(in_R8->Socket,-0x7ffb9982,local_res8);
    if (iVar5 == -1) {
      param_1->Socket = param_1->Socket & 0xffff000000000000 ^ 0x150d72d50;
      *(undefined2 *)((longlong)&param_1->Socket + 6) = 0xffff;
    }
    else {
      if (-1 < (int)this->SendBufKb << 10) {
        local_res18[0] = (int)this->SendBufKb << 10;
        setsockopt(in_R8->Socket,0xffff,0x1001,(char *)local_res18,4);
      }
      if (-1 < (int)this->RecvBufKb << 10) {
        local_res20[0] = (int)this->RecvBufKb << 10;
        setsockopt(in_R8->Socket,0xffff,0x1002,(char *)local_res20,4);
      }
      if ((int)uVar2 == 1) {
        *(undefined4 *)((longlong)&param_1->Socket + 4) = 0x8000;
        *(undefined4 *)&param_1->Socket = 0;
      }
      else {
        FVar6 = FSocket::Connect(in_R8,(uint)local_48,uVar1);
        param_1->Socket = *(ulong64 *)FVar6.field0_0x0;
      }
    }
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// GetBufferSize @ 1445736f0

int __thiscall UE::IoStore::HTTP::FHost::GetBufferSize(FHost *this,EDirection param_1)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  if (param_1 != Send) {
    lVar1 = 0x22;
  }
  return (int)*(short *)((longlong)this->IpAddresses + lVar1 + -0x10) << 10;
}

// IsResolved @ 144578b20

int __thiscall UE::IoStore::HTTP::FHost::IsResolved(FHost *this)

{
  if (this->IpAddresses[0] == 0) {
    return 0;
  }
  if (this->IpAddresses[0] != 1) {
    return 1;
  }
  return -1;
}

// ResolveHostName @ 1445805b0

FOutcome __thiscall UE::IoStore::HTTP::FHost::ResolveHostName(FHost *this)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  FOutcome_u_0 in_RDX;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar9;
  longlong local_res8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong uVar8;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId89,"IasHttp::PoolResolve",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
               ,0x59);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId89);
  }
  uVar7 = 0;
  this->IpAddresses[0] = 1;
  local_res8 = 0;
  local_38 = 0;
  local_34 = 2;
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  local_2c = 6;
  local_18 = 0;
  uStack_10 = 0;
  iVar3 = getaddrinfo(this->HostName,0,&local_38,&local_res8);
  if ((iVar3 == 0) && (local_res8 != 0)) {
    lVar4 = local_res8;
    if (*(int *)(local_res8 + 4) == 2) {
      do {
        uVar6 = (uint)uVar7;
        uVar8 = uVar7;
        if (**(short **)(lVar4 + 0x20) == 2) {
          uVar2 = *(uint *)(*(short **)(lVar4 + 0x20) + 2);
          if (uVar2 == 0) break;
          uVar6 = uVar6 + 1;
          uVar8 = (ulonglong)uVar6;
          this->IpAddresses[uVar7] =
               uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          if (3 < uVar6) break;
        }
        uVar6 = (uint)uVar8;
        plVar1 = (longlong *)(lVar4 + 0x28);
        lVar4 = *plVar1;
        uVar7 = uVar8;
      } while (*plVar1 != 0);
      if (uVar6 != 0) {
        *(undefined4 *)((longlong)in_RDX + 4) = 0x8000;
        *(uint *)in_RDX = uVar6;
        goto LAB_14458070d;
      }
      pcVar5 = "Unable to resolve host";
    }
    else {
      pcVar5 = "Unexpected address family during resolve";
    }
    *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ (ulonglong)pcVar5;
    *(undefined2 *)((longlong)in_RDX + 6) = 0xffff;
  }
  else {
    *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ 0x150d72ca8;
    *(undefined2 *)((longlong)in_RDX + 6) = 0xffff;
    if (local_res8 == 0) goto LAB_144580716;
  }
LAB_14458070d:
  freeaddrinfo(local_res8);
LAB_144580716:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FOutcome)in_RDX;
}

// SetBufferSize @ 1445817d0

void __thiscall UE::IoStore::HTTP::FHost::SetBufferSize(FHost *this,EDirection param_1,int param_2)

{
  if (param_1 != Send) {
    this->RecvBufKb = (short)(param_2 >> 10);
  }
  return;
}

