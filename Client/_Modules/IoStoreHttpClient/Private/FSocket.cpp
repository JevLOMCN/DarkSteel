// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 10

// Connect @ 144571470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOutcome __thiscall UE::IoStore::HTTP::FSocket::Connect(FSocket *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FOutcome FVar6;
  undefined4 in_register_00000014;
  FOutcome_u_0 FVar7;
  uint uVar8;
  FOutcome_u_0 FVar9;
  ushort uVar10;
  FOutcome_u_0 *pFVar11;
  ushort in_R9W;
  undefined1 auStack_78 [32];
  FOutcome_u_0 local_58;
  FOutcome_u_0 local_50;
  FOutcome_u_0 local_48;
  sockaddr local_40;
  ulonglong local_30;
  
  FVar7._s_1.Tag = in_register_00000014;
  FVar7._s_1.Result = param_1;
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (this->Socket == 0xffffffffffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Socket.inl"
                       ,0x1b3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
      return (FOutcome)FVar6.field0_0x0;
    }
  }
  Trace(this->Socket,Connect,(FOutcome *)0x0);
  uVar10 = in_R9W >> 8 | in_R9W << 8;
  local_40.sa_data[8] = '\0';
  local_40.sa_data[9] = '\0';
  local_40.sa_data[10] = '\0';
  local_40.sa_data[0xb] = '\0';
  local_40.sa_data[0xc] = '\0';
  local_40.sa_data[0xd] = '\0';
  uVar8 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  local_40.sa_family = 2;
  local_40.sa_data[2] = (char)uVar8;
  local_40.sa_data[3] = (char)(uVar8 >> 8);
  local_40.sa_data[4] = (char)(uVar8 >> 0x10);
  local_40.sa_data[5] = (char)(uVar8 >> 0x18);
  local_40.sa_data[0] = (char)uVar10;
  local_40.sa_data[1] = (char)(uVar10 >> 8);
  local_40.sa_data[6] = '\0';
  local_40.sa_data[7] = '\0';
  iVar3 = connect(this->Socket,&local_40,0x10);
  iVar4 = WSAGetLastError();
  iVar5 = WSAGetLastError();
  if (iVar5 == 0x2734 || iVar4 == 0x2733) {
    pFVar11 = &local_58;
    local_58 = (FOutcome_u_0)0x1800000000000;
    FVar9 = local_58;
  }
  else if (iVar3 < 0) {
    if (0x1fffe < iVar3 + 0xffffU) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Code <= 0xffff && Code >= -0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x9a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
        return (FOutcome)FVar6.field0_0x0;
      }
    }
    pFVar11 = &local_50;
    local_50 = (FOutcome_u_0)((longlong)(short)iVar3 << 0x30 | 0x150d72158);
    FVar9 = local_50;
  }
  else {
    pFVar11 = &local_48;
    local_58 = (FOutcome_u_0)0x800000000000;
    local_48 = (FOutcome_u_0)0x800000000000;
    FVar9 = local_58;
  }
  Trace(this->Socket,Connect,(FOutcome *)&pFVar11->_s_0);
  *(FOutcome_u_0 *)FVar7 = FVar9;
  return (FOutcome)FVar7;
}

// Create @ 144571dc0

bool __thiscall UE::IoStore::HTTP::FSocket::Create(FSocket *this)

{
  code *pcVar1;
  bool bVar2;
  SOCKET s;
  char local_res8 [32];
  
  if (this->Socket != 0xffffffffffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Socket.inl"
                       ,0x193,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  s = socket(2,1,6);
  this->Socket = s;
  if (s == 0xffffffffffffffff) {
    return false;
  }
  local_res8[0] = '\x01';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  setsockopt(s,6,1,local_res8,4);
  Trace(this->Socket,SocketCreate,(FOutcome *)0x0);
  return true;
}

// Destroy @ 144572400

void __thiscall UE::IoStore::HTTP::FSocket::Destroy(FSocket *this)

{
  if (this->Socket != 0xffffffffffffffff) {
    Trace(this->Socket,SocketDestroy,(FOutcome *)0x0);
    closesocket(this->Socket);
    this->Socket = 0xffffffffffffffff;
  }
  return;
}

// Disconnect @ 144572440

void __thiscall UE::IoStore::HTTP::FSocket::Disconnect(FSocket *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Socket == 0xffffffffffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Socket.inl"
                       ,0x1d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144572482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::shutdown(this->Socket,2);
  return;
}

// Move @ 14457b8c0

void __thiscall UE::IoStore::HTTP::FSocket::Move(FSocket *this,FSocket *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Socket != 0xffffffffffffffff) && (param_1->Socket != 0xffffffffffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid() || !Rhs.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Socket.inl"
                       ,0x18c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->Socket;
  this->Socket = param_1->Socket;
  param_1->Socket = uVar1;
  return;
}

// Recv @ 14457d3f0

FOutcome __thiscall UE::IoStore::HTTP::FSocket::Recv(FSocket *this,char *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOutcome FVar4;
  FOutcome_u_0 FVar5;
  undefined4 in_register_00000084;
  FOutcome_u_0 *pFVar6;
  int in_R9D;
  FOutcome_u_0 local_res8;
  FOutcome_u_0 local_28;
  FOutcome_u_0 local_20;
  FOutcome_u_0 local_18 [2];
  
  Trace(this->Socket,Recv,(FOutcome *)0x0);
  iVar3 = recv(this->Socket,(char *)CONCAT44(in_register_00000084,param_2),in_R9D,0);
  if (iVar3 < 1) {
    if (iVar3 == 0) {
      pFVar6 = &local_28;
      local_28 = (FOutcome_u_0)0xffff000150d721a0;
      FVar5 = (FOutcome_u_0)0xffff000150d721a0;
    }
    else {
      iVar3 = WSAGetLastError();
      if (iVar3 == 0x2733) {
        pFVar6 = &local_20;
        local_res8 = (FOutcome_u_0)0x1800000000000;
        local_20 = (FOutcome_u_0)0x1800000000000;
        FVar5 = local_res8;
      }
      else {
        iVar3 = WSAGetLastError();
        if (0x1fffe < iVar3 + 0xffffU) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Code <= 0xffff && Code >= -0xffff",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                             ,0x9a,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
            return (FOutcome)FVar4.field0_0x0;
          }
        }
        pFVar6 = local_18;
        FVar5 = (FOutcome_u_0)((longlong)(short)iVar3 << 0x30 | 0x150d721ac);
        local_18[0] = FVar5;
      }
    }
  }
  else {
    pFVar6 = &local_res8;
    local_res8._s_1.Tag = 0x8000;
    local_res8._s_1.Result = iVar3;
    FVar5 = local_res8;
  }
  Trace(this->Socket,Recv,(FOutcome *)&pFVar6->_s_0);
  *(FOutcome_u_0 *)param_1 = FVar5;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Send @ 144581250

FOutcome __thiscall UE::IoStore::HTTP::FSocket::Send(FSocket *this,char *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOutcome FVar4;
  FOutcome_u_0 FVar5;
  undefined4 in_register_00000084;
  FOutcome_u_0 *pFVar6;
  int in_R9D;
  int local_res8 [2];
  int local_48 [2];
  FOutcome_u_0 local_40;
  FOutcome_u_0 local_38;
  FOutcome_u_0 local_30;
  FOutcome_u_0 local_28;
  FOutcome_u_0 local_20;
  FOutcome_u_0 local_18 [2];
  
  Trace(this->Socket,Send,(FOutcome *)0x0);
  iVar3 = send(this->Socket,(char *)CONCAT44(in_register_00000084,param_2),in_R9D,0);
  if (iVar3 < 1) {
    if (iVar3 == 0) {
      pFVar6 = &local_38;
      local_38 = (FOutcome_u_0)0xffff000150d72170;
      FVar5 = (FOutcome_u_0)0xffff000150d72170;
    }
    else {
      iVar3 = WSAGetLastError();
      if (iVar3 == 0x2733) {
        local_res8[1] = 0x18000;
        local_res8[0] = 0;
        pFVar6 = &local_30;
        local_30 = (FOutcome_u_0)0x1800000000000;
        FVar5 = local_30;
      }
      else {
        iVar3 = WSAGetLastError();
        if (iVar3 == 0x2749) {
          local_res8[0] = 0;
          local_48[0] = 4;
          iVar3 = getsockopt(this->Socket,0xffff,0x1007,(char *)local_res8,local_48);
          if (iVar3 < 0) {
            iVar3 = WSAGetLastError();
          }
          else {
            iVar3 = local_res8[0];
            if (local_res8[0] == 0) {
              pFVar6 = &local_28;
              local_40 = (FOutcome_u_0)0x1800000000000;
              local_28 = (FOutcome_u_0)0x1800000000000;
              FVar5 = local_40;
              goto LAB_144581461;
            }
          }
          if (0x1fffe < iVar3 + 0xffffU) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Code <= 0xffff && Code >= -0xffff",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x9a,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
              return (FOutcome)FVar4.field0_0x0;
            }
          }
          pFVar6 = &local_20;
          FVar5 = (FOutcome_u_0)((longlong)(short)iVar3 << 0x30 | 0x150d72180);
          local_20 = FVar5;
        }
        else {
          iVar3 = WSAGetLastError();
          if (0x1fffe < iVar3 + 0xffffU) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Code <= 0xffff && Code >= -0xffff",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x9a,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
              return (FOutcome)FVar4.field0_0x0;
            }
          }
          pFVar6 = local_18;
          FVar5 = (FOutcome_u_0)((longlong)(short)iVar3 << 0x30 | 0x150d72198);
          local_18[0] = FVar5;
        }
      }
    }
  }
  else {
    local_res8[1] = 0x8000;
    pFVar6 = &local_40;
    local_40._s_1.Tag = 0x8000;
    local_40._s_1.Result = iVar3;
    FVar5 = local_40;
    local_res8[0] = iVar3;
  }
LAB_144581461:
  Trace(this->Socket,Send,(FOutcome *)&pFVar6->_s_0);
  *(FOutcome_u_0 *)param_1 = FVar5;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// SetBlocking @ 144581790

bool __thiscall UE::IoStore::HTTP::FSocket::SetBlocking(FSocket *this,bool param_1)

{
  int iVar1;
  uint local_res10 [6];
  
  local_res10[0] = param_1 ^ 1;
  iVar1 = ioctlsocket(this->Socket,-0x7ffb9982,local_res10);
  return iVar1 != -1;
}

// SetRecvBufSize @ 144581b70

bool __thiscall UE::IoStore::HTTP::FSocket::SetRecvBufSize(FSocket *this,int param_1)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  iVar1 = setsockopt(this->Socket,0xffff,0x1002,(char *)local_res10,4);
  return iVar1 == 0;
}

// SetSendBufSize @ 144581bb0

bool __thiscall UE::IoStore::HTTP::FSocket::SetSendBufSize(FSocket *this,int param_1)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  iVar1 = setsockopt(this->Socket,0xffff,0x1001,(char *)local_res10,4);
  return iVar1 == 0;
}

