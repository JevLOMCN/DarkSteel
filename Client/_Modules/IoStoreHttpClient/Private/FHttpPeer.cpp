// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 7

// FHttpPeer @ 14456b280

FHttpPeer * __thiscall UE::IoStore::HTTP::FHttpPeer::FHttpPeer(FHttpPeer *this,FParams *param_1)

{
  EHttpVersion EVar1;
  ulong64 uVar2;
  char *pcVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FHttpPeer *pFVar8;
  undefined8 uVar9;
  ssl_st *psVar10;
  char *pcVar11;
  FCertRoots FVar12;
  undefined4 uStack_20;
  
  FVar12.Handle = param_1->Certs;
  pcVar11 = (char *)0x0;
  uVar2 = (param_1->Socket).Socket;
  pcVar3 = param_1->HostName;
  (param_1->Socket).Socket = 0xffffffffffffffff;
  this->_padding_ = uVar2;
  this->_padding_ = 0;
  if (FVar12.Handle != 0) {
    if (FVar12.Handle == 0xffffffffffffffff) {
      if ((GDefaultCertRoots.Handle == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CertRoots.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                             ,0x19e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FHttpPeer *)(*pcVar5)();
        return pFVar8;
      }
      FVar12.Handle = GDefaultCertRoots.Handle;
      if ((GDefaultCertRoots.Handle == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Certs != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                             ,0xd0,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FHttpPeer *)(*pcVar5)();
        return pFVar8;
      }
    }
    if (BioMethod == (bio_method_st *)0x0) {
      uVar7 = BIO_get_new_index();
      BioMethod = (bio_method_st *)BIO_meth_new(uVar7 | 0x400,"IasBIO");
      BIO_meth_set_write_ex(BioMethod,Ssl_BioWrite);
      BIO_meth_set_read_ex(BioMethod,Ssl_BioRead);
      BIO_meth_set_ctrl(BioMethod,Ssl_BioControl);
    }
    uVar9 = BIO_new(BioMethod);
    psVar10 = (ssl_st *)SSL_new(FVar12.Handle);
    SSL_set_connect_state(psVar10);
    SSL_set0_rbio(psVar10,uVar9);
    SSL_set0_wbio(psVar10,uVar9);
    BIO_up_ref(uVar9);
    if (pcVar3 != (char *)0x0) {
      SSL_ctrl(psVar10,0x37,0,pcVar3);
    }
    this->_padding_ = (longlong)psVar10;
    Ssl_AssociatePeer(psVar10,(FPeer *)this);
  }
  lVar4 = this->_padding_;
  this->PeerData = (void *)0x0;
  EVar1 = param_1->HttpVersion;
  this->Proto = EVar1;
  if (lVar4 != 0) {
    uStack_20 = 0;
    if (EVar1 == One) {
      pcVar11 = "\bhttp/1.1";
      uStack_20 = 9;
    }
    else if (EVar1 == Two) {
      pcVar11 = "\x02h2";
      uStack_20 = 3;
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AlpnProtos.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                         ,0x109,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FHttpPeer *)(*pcVar5)();
        return pFVar8;
      }
    }
    SSL_set_alpn_protos(lVar4,pcVar11,uStack_20);
  }
  return this;
}

// ~FHttpPeer @ 14456bf10

void __thiscall UE::IoStore::HTTP::FHttpPeer::~FHttpPeer(FHttpPeer *this)

{
  FDriverNg *this_00;
  
  if (((this->Proto != '\x01') && (this->Proto == '\x02')) &&
     (this_00 = this->PeerData, this_00 != (FDriverNg *)0x0)) {
    if (this_00->Session != (nghttp2_session *)0x0) {
      nghttp2_session_terminate_session(this_00->Session,0);
      DetailTwo::FDriverNg::PumpSend(this_00,(FTlsPeer *)&stack0x00000008);
      nghttp2_session_del(this_00->Session);
    }
    ::operator_delete(this_00,0x228);
  }
  if (this->_padding_ != 0) {
    SSL_free();
  }
  if (this->_padding_ != 0xffffffffffffffff) {
    Trace(this->_padding_,SocketDestroy,(FOutcome *)0x0);
    closesocket(this->_padding_);
    this->_padding_ = -1;
  }
  return;
}

// operator= @ 14456c170

FHttpPeer * __thiscall UE::IoStore::HTTP::FHttpPeer::operator=(FHttpPeer *this,FHttpPeer *param_1)

{
  uchar uVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FHttpPeer *pFVar6;
  
  pvVar2 = this->PeerData;
  this->PeerData = param_1->PeerData;
  param_1->PeerData = pvVar2;
  uVar1 = this->Proto;
  this->Proto = param_1->Proto;
  param_1->Proto = uVar1;
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  if ((ssl_st *)this->_padding_ != (ssl_st *)0x0) {
    Ssl_AssociatePeer((ssl_st *)this->_padding_,(FPeer *)this);
  }
  if ((ssl_st *)param_1->_padding_ != (ssl_st *)0x0) {
    Ssl_AssociatePeer((ssl_st *)param_1->_padding_,(FPeer *)param_1);
  }
  if ((this->_padding_ != -1) && (param_1->_padding_ != -1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid() || !Rhs.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Socket.inl"
                       ,0x18c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FHttpPeer *)(*pcVar4)();
      return pFVar6;
    }
  }
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  return this;
}

// GetPendingTransactId @ 1445743e0

FOutcome __thiscall UE::IoStore::HTTP::FHttpPeer::GetPendingTransactId(FHttpPeer *this)

{
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  FDriverNg *this_00;
  FOutcome_u_0 in_RDX;
  
  if (this->Proto == '\x01') {
    *(undefined4 *)in_RDX = 1;
    *(undefined4 *)((longlong)in_RDX + 4) = 0x8000;
    return (FOutcome)in_RDX;
  }
  if (this->Proto != '\x02') {
    *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ 0x150d72a88;
    *(undefined2 *)((longlong)in_RDX + 6) = 0xffff;
    return (FOutcome)in_RDX;
  }
  this_00 = this->PeerData;
  if ((-1 < this_00->RecvRemaining) &&
     (bVar1 = (this_00->field6_0x21c).RecvFrame.Id[3], (bVar1 & 1) != 0)) {
    uVar2 = (this_00->field6_0x21c).RecvFrame.Id[1];
    uVar3 = (this_00->field6_0x21c).RecvFrame.Id[0];
    uVar4 = (this_00->field6_0x21c).RecvFrame.Id[2];
    *(undefined4 *)((longlong)in_RDX + 4) = 0x8000;
    *(uint *)in_RDX = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),bVar1);
    return (FOutcome)in_RDX;
  }
  DetailTwo::FDriverNg::Tick(this_00,(FTlsPeer *)in_RDX);
  return (FOutcome)in_RDX;
}

// GetVersion @ 144574cb0

uint __thiscall UE::IoStore::HTTP::FHttpPeer::GetVersion(FHttpPeer *this)

{
  return (uint)this->Proto;
}

// Handshake @ 144574e60

FOutcome __thiscall UE::IoStore::HTTP::FHttpPeer::Handshake(FHttpPeer *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  FOutcome FVar8;
  FDriverNg *pFVar9;
  char *pcVar10;
  FOutcome_u_0 in_RDX;
  FDriverNg *pFVar11;
  uint uVar12;
  int iVar13;
  int local_res8 [2];
  char *local_res18;
  nghttp2_session_callbacks *local_res20;
  FTlsPeer local_68;
  int local_58 [2];
  char *local_50;
  undefined4 local_48;
  
  lVar2 = this->_padding_;
  pFVar11 = (FDriverNg *)0x0;
  if (lVar2 != 0) {
    iVar5 = SSL_do_handshake(lVar2);
    if (iVar5 == 0) {
      uVar7 = 0xffff000150d72330;
LAB_144574f88:
      if ((int)(uVar7 >> 0x20) != 0x8000) goto LAB_144574f97;
    }
    else {
      if (iVar5 != 1) {
        iVar5 = SSL_get_error(lVar2,iVar5);
        if (iVar5 - 2U < 2) {
          *(ulonglong *)in_RDX = 0x1800000000000;
          return (FOutcome)in_RDX;
        }
        if ((0x1fffe < iVar5 + 0xffffU) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Code <= 0xffff && Code >= -0xffff",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x9a,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
          return (FOutcome)FVar8.field0_0x0;
        }
        pcVar10 = "tls handshake error";
LAB_144574f70:
        uVar7 = (longlong)(short)iVar5 << 0x30 | (ulonglong)pcVar10;
        goto LAB_144574f88;
      }
      iVar5 = SSL_get_verify_result(lVar2);
      if (iVar5 != 0) {
        if ((0x1fffe < iVar5 + 0xffffU) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Code <= 0xffff && Code >= -0xffff",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x9a,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
          return (FOutcome)FVar8.field0_0x0;
        }
        pcVar10 = "x509 verification error";
        goto LAB_144574f70;
      }
    }
    local_res18 = (char *)0x0;
    iVar13 = 1;
    SSL_get0_alpn_selected(this->_padding_,&local_res18,local_res8);
    pcVar10 = local_res18;
    iVar5 = local_res8[0];
    if (local_res18 != (char *)0x0) {
      local_68.Ssl = (ssl_st *)0x150d72320;
      local_58[0] = 8;
      local_50 = "h2";
      local_48 = 2;
      pFVar9 = pFVar11;
      do {
        iVar1 = local_58[(longlong)pFVar9 * 4];
        if ((local_res8[0] == iVar1) && (iVar1 == iVar5)) {
          iVar6 = iVar5;
          if (iVar1 < iVar5) {
            iVar6 = iVar1;
          }
          if ((((iVar1 == 0) || (iVar5 == 0)) ||
              (iVar6 = FGenericPlatformStricmp::Strnicmp
                                 (*(char **)(local_58 + (longlong)pFVar9 * 4 + -2),pcVar10,
                                  (longlong)iVar6), iVar6 == 0)) && (iVar1 == iVar5)) {
            iVar13 = (int)pFVar9 + 1;
            break;
          }
        }
        uVar12 = (int)pFVar9 + 1;
        pFVar9 = (FDriverNg *)(ulonglong)uVar12;
      } while (uVar12 < 2);
      if (1 < iVar13 - 1U) {
        if ((0x1fffe < iVar13 + 0xffffU) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Code <= 0xffff && Code >= -0xffff",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x9a,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
          return (FOutcome)FVar8.field0_0x0;
        }
        *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ 0x150d72a60;
        *(short *)((longlong)in_RDX + 6) = (short)iVar13;
        return (FOutcome)in_RDX;
      }
    }
    this->Proto = (uchar)iVar13;
  }
  if (this->Proto == '\x01') {
    local_68._padding_ = 0x800000000000;
  }
  else {
    if (this->Proto != '\x02') {
      *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ 0x150d72a88;
      *(undefined2 *)((longlong)in_RDX + 6) = 0xffff;
      return (FOutcome)in_RDX;
    }
    pFVar9 = this->PeerData;
    if (this->PeerData == (FDriverNg *)0x0) {
      pFVar9 = ::operator_new(0x228);
      if (pFVar9 != (FDriverNg *)0x0) {
        uVar7 = (ulonglong)_tls_index;
        pFVar9->ResponseHeaders =
             (TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *)0x0;
        (pFVar9->SendPending).Data = (void *)0x0;
        (pFVar9->SendPending).Size = 0;
        pFVar9->bWithTls = this->_padding_ != 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l2::
                 _dynamic_atexit_destructor_for__Statics__);
          _Init_thread_footer(&::_TSS0);
        }
        if (Statics.Instance == (nghttp2_session_callbacks *)0x0) {
          nghttp2_session_callbacks_new(&local_res20);
          nghttp2_session_callbacks_set_on_header_callback2
                    (local_res20,
                     `UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l5::<lambda_1>::
                     <lambda_invoker_cdecl>);
          Statics.Instance = local_res20;
        }
        pFVar9->RecvRemaining = -9;
        nghttp2_session_client_new3(pFVar9,Statics.Instance,pFVar9,0,&Mem);
        pFVar11 = pFVar9;
      }
      this->PeerData = pFVar11;
      pFVar9 = pFVar11;
    }
    DetailTwo::FDriverNg::Handshake(pFVar9,&local_68);
  }
  uVar7 = local_68._padding_;
  if ((int)((ulonglong)local_68._padding_ >> 0x20) == 0x8000) {
    *(uint *)in_RDX = (uint)this->Proto;
    *(undefined4 *)((longlong)in_RDX + 4) = 0x8000;
    return (FOutcome)in_RDX;
  }
LAB_144574f97:
  *(ulonglong *)in_RDX = uVar7;
  return (FOutcome)in_RDX;
}

// Transact @ 144583dc0

FTransactRef __thiscall UE::IoStore::HTTP::FHttpPeer::Transact(FHttpPeer *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  longlong *_Dst;
  FTransactRef FVar4;
  ulonglong *in_RDX;
  
  if (this->Proto == '\x01') {
    _Dst = FMemory::Malloc(0x160,8);
    memset(_Dst,0,0x160);
    *(undefined4 *)(_Dst + 1) = 0x100;
    *(undefined4 *)((longlong)_Dst + 0xc) = 0x80000000;
    *_Dst = (longlong)(_Dst + 2);
    *(undefined4 *)((longlong)_Dst + 0x124) = 0xffffffff;
    *(undefined2 *)((longlong)_Dst + 0x114) = 0xffff;
    *(undefined1 *)((longlong)_Dst + 0x116) = 0xff;
    _Dst[0x23] = -1;
    *in_RDX = (ulonglong)_Dst;
  }
  else {
    if (this->Proto != '\x02') {
      *in_RDX = 0;
      return (FTransactRef)(ulong64)in_RDX;
    }
    pvVar1 = this->PeerData;
    _Dst = FMemory::Malloc(0x48,8);
    *_Dst = (longlong)pvVar1;
    _Dst[1] = 0;
    _Dst[2] = 0;
    _Dst[4] = 0;
    _Dst[5] = 0;
    *(undefined4 *)(_Dst + 7) = 0;
    _Dst[6] = -1;
    *in_RDX = (ulonglong)_Dst | 1;
    _Dst[8] = -1;
  }
  if (((ulonglong)_Dst & 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Ptr & 1) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x3c8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Self = (*pcVar2)();
      return (FTransactRef)FVar4.Self;
    }
  }
  return (FTransactRef)(ulong64)in_RDX;
}

