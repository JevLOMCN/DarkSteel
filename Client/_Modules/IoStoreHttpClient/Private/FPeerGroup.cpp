// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 9

// Fail @ 144572f80

void __thiscall
UE::IoStore::HTTP::FPeerGroup::Fail(FPeerGroup *this,FTickState *param_1,FOutcome param_2)

{
  FActivityNode *pFVar1;
  FSocket FVar2;
  code *pcVar3;
  FDriverNg *this_00;
  bool bVar4;
  FActivityNode *pFVar5;
  FOutcome_u_0 local_res18 [2];
  FPeer local_38;
  ssl_st *local_30;
  FDriverNg *local_28;
  uchar local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  
  pFVar5 = (FActivityNode *)0x0;
  pFVar1 = (this->Send).Head;
  if (pFVar1 == (FActivityNode *)0x0) {
    (this->Send).Head = (this->Recv).Head;
  }
  else {
    for (pFVar5 = pFVar1->Next; pFVar5 != (FActivityNode *)0x0; pFVar5 = pFVar5->Next) {
      pFVar1 = pFVar5;
    }
    pFVar5 = pFVar1->Next;
    pFVar1->Next = (this->Recv).Head;
  }
  (this->Recv).Head = (this->Send).Head;
  (this->Send).Head = pFVar5;
  local_res18[0] = param_2.field0_0x0;
  while (pFVar1 = (this->Recv).Head, pFVar1 != (FActivityNode *)0x0) {
    (this->Recv).Head = pFVar1->Next;
    pFVar1->Next = (FActivityNode *)0x0;
    FActivity::Fail((FActivity *)pFVar1,(FOutcome *)&local_res18[0]._s_0);
    if ((pFVar1->Next != (FActivityNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node->Next == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x102,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1->Next = (param_1->DoneList).Head;
    (param_1->DoneList).Head = pFVar1;
  }
  local_28 = (this->Peer).PeerData;
  local_30 = (ssl_st *)(this->Peer)._padding_;
  local_20 = (this->Peer).Proto;
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  local_38.Socket.Socket = (FSocket)0xffffffffffffffff;
  (this->Peer).PeerData = (void *)0x0;
  (this->Peer).Proto = '\0';
  (this->Peer)._padding_ = 0;
  if (local_30 != (ssl_st *)0x0) {
    Ssl_AssociatePeer(local_30,&local_38);
  }
  if ((((this->Peer)._padding_ != -1) && (local_38.Socket.Socket != 0xffffffffffffffff)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValid() || !Rhs.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Socket.inl"
                         ,0x18c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = local_28;
  FVar2.Socket = (this->Peer)._padding_;
  (this->Peer)._padding_ = (longlong)local_38.Socket.Socket;
  local_38.Socket.Socket = (FSocket)(FSocket)FVar2.Socket;
  if (((local_20 != '\x01') && (local_20 == '\x02')) && (local_28 != (FDriverNg *)0x0)) {
    if (local_28->Session != (nghttp2_session *)0x0) {
      nghttp2_session_terminate_session(local_28->Session,0);
      DetailTwo::FDriverNg::PumpSend(this_00,(FTlsPeer *)&stack0x00000008);
      nghttp2_session_del(this_00->Session);
    }
    ::operator_delete(this_00,0x228);
  }
  if (local_30 != (ssl_st *)0x0) {
    SSL_free();
  }
  if (local_38.Socket.Socket != 0xffffffffffffffff) {
    Trace((ulong64)local_38.Socket.Socket,SocketDestroy,(FOutcome *)0x0);
    closesocket((SOCKET)local_38.Socket.Socket);
    local_38.Socket.Socket = (FSocket)0xffffffffffffffff;
  }
  pFVar1 = (this->Send).Head;
  (this->Send).Head = (FActivityNode *)0x0;
  if ((pFVar1 != (FActivityNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0xc5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->Recv).Head;
  (this->Recv).Head = (FActivityNode *)0x0;
  if ((pFVar1 != (FActivityNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0xc5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bNegotiating = false;
  this->bWaiting = false;
  this->IsKeepAlive = '\0';
  this->InflightNum = '\0';
  return;
}

// GetWaiter @ 144574cc0

FWaiter * __thiscall
UE::IoStore::HTTP::FPeerGroup::GetWaiter(FPeerGroup *this,FWaiter *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uStack_c;
  
  if (this->bWaiting == false) {
    __return_storage_ptr__->Socket = 0xffffffffffffffff;
    __return_storage_ptr__->Index = 0;
    __return_storage_ptr__->WaitOn = None;
    __return_storage_ptr__->Ready = '\0';
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (uint)(byte)(((this->Recv).Head != (FActivityNode *)0x0) + 1) << 0x10;
  __return_storage_ptr__->Socket = (this->Peer)._padding_;
  __return_storage_ptr__->Index = (short)iVar1;
  __return_storage_ptr__->WaitOn = (char)((uint)iVar1 >> 0x10);
  __return_storage_ptr__->Ready = (char)((uint)iVar1 >> 0x18);
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uStack_c;
  return __return_storage_ptr__;
}

// MaybeStartNewWork @ 144579850

bool __thiscall
UE::IoStore::HTTP::FPeerGroup::MaybeStartNewWork(FPeerGroup *this,FTickState *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FActivityNode *pFVar4;
  
  if (((this->InflightMax <= this->InflightNum) || (this->IsKeepAlive == '\0')) ||
     ((param_1->Work->List).Head == (FActivityNode *)0x0)) {
    return false;
  }
  pFVar4 = FWorkQueue::PopActivity(param_1->Work);
  while( true ) {
    if ((2 < *(byte *)pFVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("State <= EState::RecvMessage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x155,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((*(char *)(*(longlong *)&pFVar4->field_0x38 + 0x29) == '\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Activity->GetHost()->IsPooled()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x1f2,L""), bVar2)) break;
    FActivityList::Append(&this->Send,pFVar4);
    this->InflightNum = this->InflightNum + '\x01';
    if (this->InflightNum == this->InflightMax) {
      return true;
    }
    pFVar4 = FWorkQueue::PopActivity(param_1->Work);
    if (pFVar4 == (FActivityNode *)0x0) {
      return true;
    }
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// Negotiate @ 14457b9c0

void __thiscall UE::IoStore::HTTP::FPeerGroup::Negotiate(FPeerGroup *this,FTickState *param_1)

{
  code *pcVar1;
  FOutcome FVar2;
  bool bVar3;
  undefined4 local_res8;
  uint uStackX_c;
  
  if (this->bNegotiating == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bNegotiating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x205,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Send).Head == (FActivityNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Send.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x206,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Peer)._padding_ == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Peer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x207,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FHttpPeer::Handshake(&this->Peer);
  FVar2.field0_0x0._s_1.Tag = uStackX_c;
  FVar2.field0_0x0._s_1.Result = local_res8;
  if (((ulonglong)FVar2.field0_0x0 & 0xffffffffffff) < 0x800000000000) {
    Fail(this,param_1,FVar2);
    return;
  }
  if ((uStackX_c & 0x18000) == 0x18000) {
    this->bWaiting = true;
    return;
  }
  this->bNegotiating = false;
  SendInternal(this,param_1);
  return;
}

// RecvInternal @ 14457dcc0

void __thiscall UE::IoStore::HTTP::FPeerGroup::RecvInternal(FPeerGroup *this,FTickState *param_1)

{
  uchar uVar1;
  FDriverNg *this_00;
  ulonglong uVar2;
  code *pcVar3;
  FActivityNode *pFVar4;
  undefined4 uVar5;
  FOutcome_u_0 FVar6;
  void *this_01;
  bool bVar7;
  byte bVar8;
  FTransactRef *pFVar9;
  FOutcome FVar10;
  FActivityNode *pFVar11;
  FActivityNode *this_02;
  FActivityNode *pFVar12;
  FOutcome_u_0 local_res8;
  FHttpPeer local_58;
  
  pFVar12 = (FActivityNode *)0x0;
  do {
    if ((this->bNegotiating != false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bNegotiating == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x21d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->Recv).Head == (FActivityNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Recv.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x21e,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = (this->Peer).Proto;
    if (uVar1 == '\x01') {
      local_res8._s_1.Result = 1;
LAB_14457ddd4:
      local_res8._s_1.Tag = 0x8000;
    }
    else if (uVar1 == '\x02') {
      this_00 = (this->Peer).PeerData;
      if ((-1 < this_00->RecvRemaining) &&
         (bVar8 = (this_00->field6_0x21c).RecvFrame.Id[3], (bVar8 & 1) != 0)) {
        local_res8._s_1.Result =
             CONCAT31(CONCAT21(CONCAT11((this_00->field6_0x21c).RecvFrame.Id[0],
                                        (this_00->field6_0x21c).RecvFrame.Id[1]),
                               (this_00->field6_0x21c).RecvFrame.Id[2]),bVar8);
        goto LAB_14457ddd4;
      }
      DetailTwo::FDriverNg::Tick(this_00,(FTlsPeer *)&local_res8._s_0);
    }
    else {
      local_res8 = (FOutcome_u_0)0xffff000150d72a88;
    }
    if ((local_res8._s_1.Tag & 0x18000) == 0x18000) {
      this->bWaiting = (bool)(this->bWaiting | 1);
      return;
    }
    this_02 = pFVar12;
    if (local_res8._s_1.Tag == 0x8000) {
      if ((((ulonglong)local_res8 & 0xffffffffffff) < 0x800000000000) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                             ,0x59,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar6 = local_res8;
      uVar5 = local_res8._s_1.Result;
      pFVar11 = (this->Recv).Head;
      pFVar4 = pFVar12;
      while (this_02 = pFVar11, pFVar11 = pFVar12, this_02 != (FActivityNode *)0x0) {
        if ((*(uint *)&this_02->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransactId != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                               ,0x13a,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(uint *)&this_02->field_0x8 == uVar5) {
          if (pFVar4 == (FActivityNode *)0x0) {
            if (((this->Recv).Head != this_02) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Head == Node",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                                   ,0xd7,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            pFVar4->Next = this_02->Next;
            this_02->Next = (this->Recv).Head;
            (this->Recv).Head = this_02;
          }
          pFVar11 = this_02;
          if (this_02 != (FActivityNode *)0x0) {
            FVar10 = FActivity::Tick((FActivity *)this_02,(FHttpPeer *)&stack0x00000018,
                                     (int *)&this->Peer);
                    /* WARNING: Load size is inaccurate */
            local_res8._s_0 = *FVar10.field0_0x0;
            goto LAB_14457dee7;
          }
          break;
        }
        pFVar4 = this_02;
        pFVar11 = this_02->Next;
      }
      if ((0x1fffe < uVar5 + 0xffff) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Code <= 0xffff && Code >= -0xffff",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                             ,0x9a,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8 = (FOutcome_u_0)((longlong)(short)FVar6._s_1.Result << 0x30 | 0x150d734e0);
      this_02 = pFVar11;
    }
LAB_14457dee7:
    if (((ulonglong)local_res8 & 0xffffffffffff) < 0x800000000000) {
      Fail(this,param_1,(FOutcome)local_res8._s_0);
      return;
    }
    if ((this_02 == (FActivityNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Activity != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x244,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = FActivity::GetTransaction((FActivity *)this_02);
    uVar2 = pFVar9->Self;
    if (((uVar2 & 1) == 0) && (0 < *(short *)(uVar2 + 0x126))) {
      bVar8 = *(byte *)(uVar2 + 0x12a) & 1;
    }
    else {
      bVar8 = 1;
    }
    this->IsKeepAlive = this->IsKeepAlive & bVar8;
    this->LastUseMs = param_1->NowMs;
    if (((local_res8._s_1.Tag & 0x18000) == 0x18000) &&
       (((ulonglong)local_res8 & 0xfffe7fff00000000) == 0)) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    this->bWaiting = (bool)(this->bWaiting | bVar8);
    if ((this->Peer)._padding_ == -1) {
      return;
    }
    if ((local_res8._s_1.Tag & 0x18000) == 0x18000) {
      return;
    }
    if ((((ulonglong)local_res8 & 0xffffffffffff) < 0x800000000000) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                           ,0x59,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_res8._s_1.Result != -3) {
      if ((((ulonglong)local_res8 & 0xffffffffffff) < 0x800000000000) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                             ,0x59,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_res8._s_1.Result != -4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Outcome.GetResult() == uint32(FActivity::EStage::Content)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,0x25d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->Recv).Head != this_02) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Recv.GetHead() == Activity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,0x25f,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->Recv).Head == (FActivityNode *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Head != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,300,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (this->Recv).Head;
      (this->Recv).Head = pFVar12->Next;
      pFVar12->Next = (FActivityNode *)0x0;
      pFVar12->Next = (param_1->DoneList).Head;
      (param_1->DoneList).Head = pFVar12;
      this->InflightNum = this->InflightNum + 0xff;
      bVar7 = MaybeStartNewWork(this,param_1);
      if (bVar7) {
        SendInternal(this,param_1);
      }
      if (this->IsKeepAlive == '\0') {
        local_58._25_4_ = 0;
        local_58._29_2_ = 0;
        local_58._31_1_ = 0;
        local_58._padding_ = 0;
        local_58.PeerData = (FDriverNg *)0x0;
        local_58._padding_ = 0xffffffffffffffff;
        local_58.Proto = '\0';
        FHttpPeer::operator=(&this->Peer,&local_58);
        this_01 = local_58.PeerData;
        if (((local_58.Proto != '\x01') && (local_58.Proto == '\x02')) &&
           (local_58.PeerData != (FDriverNg *)0x0)) {
          if (*(nghttp2_session **)local_58.PeerData != (nghttp2_session *)0x0) {
            nghttp2_session_terminate_session(*(nghttp2_session **)local_58.PeerData,0);
            DetailTwo::FDriverNg::PumpSend(this_01,(FTlsPeer *)&stack0x00000020);
            nghttp2_session_del(*(nghttp2_session **)this_01);
          }
          ::operator_delete(this_01,0x228);
        }
        if (local_58._padding_ != 0) {
          SSL_free();
        }
        if (local_58._padding_ != 0xffffffffffffffff) {
          Trace(local_58._padding_,SocketDestroy,(FOutcome *)0x0);
          closesocket(local_58._padding_);
        }
      }
      return;
    }
  } while( true );
}

// SendInternal @ 1445815b0

void __thiscall UE::IoStore::HTTP::FPeerGroup::SendInternal(FPeerGroup *this,FTickState *param_1)

{
  FActivityNode *pFVar1;
  FActivityNode *pFVar2;
  code *pcVar3;
  FOutcome FVar4;
  FActivityNode *pFVar5;
  bool bVar6;
  int local_res8;
  uint uStackX_c;
  
  while( true ) {
    if ((this->bNegotiating != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bNegotiating == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x272,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->IsKeepAlive != '\x01') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsKeepAlive == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x273,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->Send).Head == (FActivityNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Send.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x274,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FActivity::Tick((FActivity *)(this->Send).Head,(FHttpPeer *)&local_res8,(int *)&this->Peer);
    if ((uStackX_c & 0x18000) == 0x18000) {
      this->bWaiting = true;
      return;
    }
    FVar4.field0_0x0._s_1.Tag = uStackX_c;
    FVar4.field0_0x0._s_1.Result = local_res8;
    if (((ulonglong)FVar4.field0_0x0 & 0xffffffffffff) < 0x800000000000) break;
    if ((local_res8 != -2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Outcome.GetResult() == uint32(FActivity::EStage::Request)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x286,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->Send).Head == (FActivityNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x134,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->Send).Head;
    (this->Send).Head = pFVar1->Next;
    pFVar1->Next = (FActivityNode *)0x0;
    pFVar2 = (this->Recv).Head;
    if (pFVar2 == (FActivityNode *)0x0) {
      (this->Recv).Head = pFVar1;
    }
    else {
      for (pFVar5 = pFVar2->Next; pFVar5 != (FActivityNode *)0x0; pFVar5 = pFVar5->Next) {
        pFVar2 = pFVar5;
      }
      pFVar2->Next = pFVar1;
    }
    if ((this->Send).Head == (FActivityNode *)0x0) {
      return;
    }
  }
  Fail(this,param_1,FVar4);
  return;
}

// SetMaxInflight @ 144581a00

void __thiscall UE::IoStore::HTTP::FPeerGroup::SetMaxInflight(FPeerGroup *this,uint param_1)

{
  uchar uVar1;
  
  uVar1 = '\x7f';
  if (param_1 < 0x7f) {
    uVar1 = (uchar)param_1;
  }
  this->InflightMax = uVar1;
  return;
}

// Tick @ 1445827b0

bool __thiscall UE::IoStore::HTTP::FPeerGroup::Tick(FPeerGroup *this,FTickState *param_1)

{
  if (this->bNegotiating == false) {
    if ((this->Send).Head != (FActivityNode *)0x0) {
      SendInternal(this,param_1);
    }
  }
  else {
    Negotiate(this,param_1);
  }
  if (((this->Recv).Head != (FActivityNode *)0x0) && (*param_1->RecvAllowance != 0)) {
    RecvInternal(this,param_1);
  }
  return this->IsKeepAlive != '\0' ||
         ((this->Send).Head != (FActivityNode *)0x0 || (this->Recv).Head != (FActivityNode *)0x0);
}

// TickSend @ 144582e40

void __thiscall
UE::IoStore::HTTP::FPeerGroup::TickSend
          (FPeerGroup *this,FTickState *param_1,FHost *param_2,FPoller *param_3)

{
  code *pcVar1;
  void *this_00;
  FSocket s;
  bool bVar2;
  FActivityNode *pFVar3;
  SOCKET SVar4;
  FOutcome FVar5;
  FHttpPeer *pFVar6;
  FOutcome_u_0 FVar7;
  FOutcome_u_0 local_res8;
  FHttpPeer local_a8;
  SOCKET local_88;
  FParams local_80;
  FTlsPeer local_60;
  FHttpPeer local_50;
  
  if (this->InflightNum < this->InflightMax) {
    pFVar3 = FWorkQueue::PopActivity(param_1->Work);
    if ((pFVar3 == (FActivityNode *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pending != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x2b0,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this->Peer)._padding_ != -1) && (this->LastUseMs + GIdleMs < param_1->NowMs)) {
      this->LastUseMs = param_1->NowMs;
      local_a8._25_4_ = 0;
      local_a8._29_2_ = 0;
      local_a8._31_1_ = 0;
      local_a8._padding_ = 0;
      local_a8.PeerData = (FDriverNg *)0x0;
      local_a8.Proto = '\0';
      local_a8._padding_ = 0xffffffffffffffff;
      FHttpPeer::operator=(&this->Peer,&local_a8);
      this_00 = local_a8.PeerData;
      if ((local_a8.Proto != '\x01') &&
         ((local_a8.Proto == '\x02' && (local_a8.PeerData != (FDriverNg *)0x0)))) {
        if (*(nghttp2_session **)local_a8.PeerData != (nghttp2_session *)0x0) {
          nghttp2_session_terminate_session(*(nghttp2_session **)local_a8.PeerData,0);
          DetailTwo::FDriverNg::PumpSend(this_00,&local_60);
          nghttp2_session_del(*(nghttp2_session **)this_00);
        }
        ::operator_delete(this_00,0x228);
      }
      if (local_a8._padding_ != 0) {
        SSL_free();
      }
      if (local_a8._padding_ != 0xffffffffffffffff) {
        Trace(local_a8._padding_,SocketDestroy,(FOutcome *)0x0);
        closesocket(local_a8._padding_);
      }
    }
    bVar2 = false;
    if ((this->Peer)._padding_ == -1) {
      SVar4 = socket(2,1,6);
      local_88 = SVar4;
      if (SVar4 == 0xffffffffffffffff) {
        FVar7 = (FOutcome_u_0)0xffff000150d735f0;
      }
      else {
        local_res8._s_1.Result = 1;
        setsockopt(SVar4,6,1,(char *)&local_res8,4);
        Trace(SVar4,SocketCreate,(FOutcome *)0x0);
        FVar5 = FHost::Connect(param_2,(FSocket *)&local_60.Ssl);
                    /* WARNING: Load size is inaccurate */
        FVar7._s_0 = *FVar5.field0_0x0;
      }
      SVar4 = local_88;
      local_res8 = FVar7;
      if (((ulonglong)FVar7 & 0xffffffffffff) < 0x800000000000) {
        FActivityList::Prepend(&this->Recv,pFVar3);
        Fail(this,param_1,(FOutcome)FVar7);
        if (SVar4 == 0xffffffffffffffff) {
          return;
        }
        Trace(SVar4,SocketDestroy,(FOutcome *)0x0);
        closesocket(SVar4);
        return;
      }
      local_res8._s_1.Tag = FVar7._s_1.Tag;
      this->IsKeepAlive = '\x01';
      this->InflightNum = '\0';
      bVar2 = (local_res8._s_1.Tag & 0x18000) == 0x18000;
      this->bNegotiating = true;
      local_80.Certs = param_2->VerifyCert;
      local_80.HostName = param_2->HostName;
      local_80.HttpVersion = param_2->HttpVersion;
      local_80.Socket.Socket = local_88;
      pFVar6 = FHttpPeer::FHttpPeer(&local_50,&local_80);
      FHttpPeer::operator=(&this->Peer,pFVar6);
      FHttpPeer::~FHttpPeer(&local_50);
      s.Socket = local_80.Socket.Socket;
      if (local_80.Socket.Socket != 0xffffffffffffffff) {
        Trace(local_80.Socket.Socket,SocketDestroy,(FOutcome *)0x0);
        closesocket(s.Socket);
      }
    }
    FActivityList::Append(&this->Send,pFVar3);
    this->InflightNum = this->InflightNum + '\x01';
    MaybeStartNewWork(this,param_1);
    if (bVar2) {
      this->bWaiting = true;
    }
    else if (this->bNegotiating == false) {
      SendInternal(this,param_1);
    }
    else {
      Negotiate(this,param_1);
    }
  }
  return;
}

