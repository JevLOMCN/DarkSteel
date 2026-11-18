// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 7

// FTlsPeer @ 14456b6e0

FTlsPeer * __thiscall
UE::IoStore::HTTP::FTlsPeer::FTlsPeer(FTlsPeer *this,FSocket param_1,ulong64 param_2,char *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTlsPeer *pFVar5;
  undefined8 uVar6;
  ssl_st *psVar7;
  
  lVar1 = *(longlong *)param_1.Socket;
  *(undefined8 *)param_1.Socket = 0xffffffffffffffff;
  this->_padding_ = lVar1;
  this->Ssl = (ssl_st *)0x0;
  if (param_2 != 0) {
    if (param_2 == 0xffffffffffffffff) {
      if (GDefaultCertRoots.Handle == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CertRoots.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                           ,0x19e,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FTlsPeer *)(*pcVar2)();
          return pFVar5;
        }
      }
      param_2 = GDefaultCertRoots.Handle;
      if (GDefaultCertRoots.Handle == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Certs != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                           ,0xd0,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FTlsPeer *)(*pcVar2)();
          return pFVar5;
        }
      }
    }
    if (BioMethod == (bio_method_st *)0x0) {
      uVar4 = BIO_get_new_index();
      BioMethod = (bio_method_st *)BIO_meth_new(uVar4 | 0x400,"IasBIO");
      BIO_meth_set_write_ex(BioMethod,Ssl_BioWrite);
      BIO_meth_set_read_ex(BioMethod,Ssl_BioRead);
      BIO_meth_set_ctrl(BioMethod,Ssl_BioControl);
    }
    uVar6 = BIO_new(BioMethod);
    psVar7 = (ssl_st *)SSL_new(param_2);
    SSL_set_connect_state(psVar7);
    SSL_set0_rbio(psVar7,uVar6);
    SSL_set0_wbio(psVar7,uVar6);
    BIO_up_ref(uVar6);
    if (param_3 != (char *)0x0) {
      SSL_ctrl(psVar7,0x37,0,param_3);
    }
    this->Ssl = psVar7;
    Ssl_AssociatePeer(psVar7,(FPeer *)this);
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1.Socket != 0xffffffffffffffff) {
    Trace(*param_1.Socket,SocketDestroy,(FOutcome *)0x0);
    closesocket(*(SOCKET *)param_1.Socket);
    *(undefined8 *)param_1.Socket = 0xffffffffffffffff;
  }
  return this;
}

// ~FTlsPeer @ 14456c0a0

void __thiscall UE::IoStore::HTTP::FTlsPeer::~FTlsPeer(FTlsPeer *this)

{
  if (this->Ssl != (ssl_st *)0x0) {
    SSL_free();
  }
  if (this->_padding_ != 0xffffffffffffffff) {
    Trace(this->_padding_,SocketDestroy,(FOutcome *)0x0);
    closesocket(this->_padding_);
    this->_padding_ = -1;
  }
  return;
}

// Handshake @ 144575280

FOutcome __thiscall UE::IoStore::HTTP::FTlsPeer::Handshake(FTlsPeer *this)

{
  ssl_st *psVar1;
  code *pcVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  FOutcome FVar6;
  FOutcome_u_0 in_RDX;
  char *pcVar7;
  
  psVar1 = this->Ssl;
  if (psVar1 == (ssl_st *)0x0) {
    *(undefined4 *)((longlong)in_RDX + 4) = 0x8000;
    *(undefined4 *)in_RDX = 0;
    return (FOutcome)in_RDX;
  }
  iVar5 = SSL_do_handshake(psVar1);
  if (iVar5 == 0) {
    *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ 0x150d72330;
    *(undefined2 *)((longlong)in_RDX + 6) = 0xffff;
    return (FOutcome)in_RDX;
  }
  if (iVar5 == 1) {
    iVar5 = SSL_get_verify_result(psVar1);
    uVar3 = (undefined2)iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)in_RDX + 4) = 0x8000;
      goto LAB_1445753c4;
    }
    if (0x1fffe < iVar5 + 0xffffU) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Code <= 0xffff && Code >= -0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x9a,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
        return (FOutcome)FVar6.field0_0x0;
      }
    }
    pcVar7 = "x509 verification error";
  }
  else {
    iVar5 = SSL_get_error(psVar1,iVar5);
    uVar3 = (undefined2)iVar5;
    if (iVar5 - 2U < 2) {
      *(undefined4 *)((longlong)in_RDX + 4) = 0x18000;
LAB_1445753c4:
      *(undefined4 *)in_RDX = 0;
      return (FOutcome)in_RDX;
    }
    if (0x1fffe < iVar5 + 0xffffU) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Code <= 0xffff && Code >= -0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x9a,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
        return (FOutcome)FVar6.field0_0x0;
      }
    }
    pcVar7 = "tls handshake error";
  }
  *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ (ulonglong)pcVar7;
  *(undefined2 *)((longlong)in_RDX + 6) = uVar3;
  return (FOutcome)in_RDX;
}

// IsUsingTls @ 144578b80

bool __thiscall UE::IoStore::HTTP::FTlsPeer::IsUsingTls(FTlsPeer *this)

{
  return this->Ssl != (ssl_st *)0x0;
}

// Move @ 14457b920

FTlsPeer * __thiscall UE::IoStore::HTTP::FTlsPeer::Move(FTlsPeer *this,FTlsPeer *param_1)

{
  ssl_st *psVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FTlsPeer *pFVar5;
  
  psVar1 = this->Ssl;
  this->Ssl = param_1->Ssl;
  param_1->Ssl = psVar1;
  if (this->Ssl != (ssl_st *)0x0) {
    Ssl_AssociatePeer(this->Ssl,(FPeer *)this);
  }
  if (param_1->Ssl != (ssl_st *)0x0) {
    Ssl_AssociatePeer(param_1->Ssl,(FPeer *)param_1);
  }
  if ((this->_padding_ != -1) && (param_1->_padding_ != -1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid() || !Rhs.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Socket.inl"
                       ,0x18c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTlsPeer *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  return this;
}

// Recv @ 14457d540

FOutcome __thiscall UE::IoStore::HTTP::FTlsPeer::Recv(FTlsPeer *this,char *param_1,int param_2)

{
  ssl_st *psVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FOutcome FVar5;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  
  psVar1 = this->Ssl;
  if (psVar1 == (ssl_st *)0x0) {
    FSocket::Recv((FSocket *)this,param_1,param_2);
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  iVar4 = SSL_read(psVar1,CONCAT44(in_register_00000084,param_2),in_R9D);
  if (0 < iVar4) {
    *(ulonglong *)param_1 = CONCAT44(0x8000,iVar4);
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  iVar4 = SSL_get_error(psVar1,iVar4);
  if (iVar4 - 2U < 2) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = -0x80;
    param_1[6] = '\x01';
    param_1[7] = '\0';
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  if (0x1fffe < iVar4 + 0xffffU) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Code <= 0xffff && Code >= -0xffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                       ,0x9a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
      return (FOutcome)FVar5.field0_0x0;
    }
  }
  *(ulonglong *)param_1 = (longlong)(short)iVar4 << 0x30 | 0x150d72380;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Send @ 1445814a0

FOutcome __thiscall UE::IoStore::HTTP::FTlsPeer::Send(FTlsPeer *this,char *param_1,int param_2)

{
  ssl_st *psVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FOutcome FVar5;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  
  psVar1 = this->Ssl;
  if (psVar1 == (ssl_st *)0x0) {
    FSocket::Send((FSocket *)this,param_1,param_2);
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  iVar4 = SSL_write(psVar1,CONCAT44(in_register_00000084,param_2),in_R9D);
  if (0 < iVar4) {
    *(ulonglong *)param_1 = CONCAT44(0x8000,iVar4);
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  iVar4 = SSL_get_error(psVar1,iVar4);
  if (iVar4 - 2U < 2) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = -0x80;
    param_1[6] = '\x01';
    param_1[7] = '\0';
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  if (0x1fffe < iVar4 + 0xffffU) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Code <= 0xffff && Code >= -0xffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                       ,0x9a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
      return (FOutcome)FVar5.field0_0x0;
    }
  }
  *(ulonglong *)param_1 = (longlong)(short)iVar4 << 0x30 | 0x150d72380;
  return (FOutcome)(FOutcome_u_0)param_1;
}

