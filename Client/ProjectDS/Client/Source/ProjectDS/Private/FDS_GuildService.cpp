// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 44

// CheckGuildNameDuplicationError @ 14bbaf2e0

bool __cdecl
FDS_GuildService::CheckGuildNameDuplicationError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  UDS_GuildEvent *pUVar2;
  
  pUVar2 = UDS_GuildEvent::GetEvent();
  if (pUVar2 != (UDS_GuildEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->CheckGuildNameDuplicationDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->CheckGuildNameDuplicationDelegate).Delegate,false);
    }
    return false;
  }
  return false;
}

// JoinApproveError @ 14bbc4ec0

bool __cdecl FDS_GuildService::JoinApproveError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ProcessError @ 14bbce830

bool __cdecl FDS_GuildService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveAcceptGuildInvitationResponse @ 14bbcfba0

void __cdecl FDS_GuildService::ReceiveAcceptGuildInvitationResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  AcceptGuildInvitationResponseDefaultTypeInternal *pAVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f5c) {
    pAVar1 = *(AcceptGuildInvitationResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_
    ;
  }
  else {
    pAVar1 = &server_msg::_AcceptGuildInvitationResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetAcceptGuildInvitationResponse(this,&pAVar1->_instance);
    return;
  }
  return;
}

// ReceiveApproveJoinGuildResponse @ 14bbd0300

void __cdecl FDS_GuildService::ReceiveApproveJoinGuildResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  ApproveJoinGuildResponseDefaultTypeInternal *pAVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f53) {
    pAVar1 = *(ApproveJoinGuildResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pAVar1 = &server_msg::_ApproveJoinGuildResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetGuildJoinApproveResponse(this,&pAVar1->_instance);
    return;
  }
  return;
}

// ReceiveChangeGuildMemberGradeResponse @ 14bbd0ac0

void __cdecl FDS_GuildService::ReceiveChangeGuildMemberGradeResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  ChangeGuildMemberGradeResponseDefaultTypeInternal *pCVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f55) {
    pCVar1 = *(ChangeGuildMemberGradeResponseDefaultTypeInternal **)
              &(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar1 = &server_msg::_ChangeGuildMemberGradeResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetChangeGuildMemberGradeResponse(this,&pCVar1->_instance);
    return;
  }
  return;
}

// ReceiveCheckGuildNameDuplicationResponse @ 14bbd0b10

void __cdecl FDS_GuildService::ReceiveCheckGuildNameDuplicationResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_GuildEvent *pUVar2;
  
  pUVar2 = UDS_GuildEvent::GetEvent();
  if (pUVar2 != (UDS_GuildEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->CheckGuildNameDuplicationDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->CheckGuildNameDuplicationDelegate).Delegate,true);
      return;
    }
  }
  return;
}

// ReceiveCreateGuildResponse @ 14bbd0e50

void __cdecl FDS_GuildService::ReceiveCreateGuildResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  CreateGuildResponseDefaultTypeInternal *pCVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f4e) {
    pCVar1 = *(CreateGuildResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar1 = &server_msg::_CreateGuildResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetCreateGuildResponse(this,&pCVar1->_instance);
    return;
  }
  return;
}

// ReceiveDisbandGuildResponse @ 14bbd15a0

void __cdecl FDS_GuildService::ReceiveDisbandGuildResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  DeleteGuildResponseDefaultTypeInternal *pDVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f50) {
    pDVar1 = *(DeleteGuildResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pDVar1 = &server_msg::_DeleteGuildResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetDisbandGuildResponse(this,&pDVar1->_instance);
    return;
  }
  return;
}

// ReceiveGetGuildListResponse @ 14bbd1ed0

void __cdecl FDS_GuildService::ReceiveGetGuildListResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  GetGuildListResponseDefaultTypeInternal *pGVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f57) {
    pGVar1 = *(GetGuildListResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar1 = &server_msg::_GetGuildListResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetGetGuildListResponse(this,&pGVar1->_instance);
    return;
  }
  return;
}

// ReceiveGuildInfoResponse @ 14bbd2fc0

void __cdecl FDS_GuildService::ReceiveGuildInfoResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  GuildFullInfoResponseDefaultTypeInternal *pGVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f58) {
    pGVar1 = *(GuildFullInfoResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar1 = &api_guild::_GuildFullInfoResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetGuildFullInfoResponse(this,&pGVar1->_instance);
    return;
  }
  return;
}

// ReceiveGuildInviteCancelResponse @ 14bbd3010

void __cdecl FDS_GuildService::ReceiveGuildInviteCancelResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  CancelGuildInvitationResponseDefaultTypeInternal *pCVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f5f) {
    pCVar1 = *(CancelGuildInvitationResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_
    ;
  }
  else {
    pCVar1 = &server_msg::_CancelGuildInvitationResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetGuildInviteCancelResponse(this,&pCVar1->_instance);
    return;
  }
  return;
}

// ReceiveGuildInviteResponse @ 14bbd3060

void __cdecl FDS_GuildService::ReceiveGuildInviteResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveGuildJoinApplyCancelResponse @ 14bbd3070

void __cdecl FDS_GuildService::ReceiveGuildJoinApplyCancelResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  CancelJoinGuildResponseDefaultTypeInternal *pCVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f60) {
    pCVar1 = *(CancelJoinGuildResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar1 = &server_msg::_CancelJoinGuildResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetGuildJoinApplyCancelResponse(this,&pCVar1->_instance);
    return;
  }
  return;
}

// ReceiveGuildPendingListResponse @ 14bbd30c0

void __cdecl FDS_GuildService::ReceiveGuildPendingListResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  GetGuildPendingListResponseDefaultTypeInternal *pGVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f5d) {
    pGVar1 = *(GetGuildPendingListResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar1 = &server_msg::_GetGuildPendingListResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetGuildPendingListResponse(this,&pGVar1->_instance);
    return;
  }
  return;
}

// ReceiveJoinGuildResponse @ 14bbd3c90

void __cdecl FDS_GuildService::ReceiveJoinGuildResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  JoinGuildResponseDefaultTypeInternal *pJVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f52) {
    pJVar1 = *(JoinGuildResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pJVar1 = &server_msg::_JoinGuildResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetJoinGuildResponse(this,&pJVar1->_instance);
    return;
  }
  return;
}

// ReceiveJoinGuildResultResponse @ 14bbd3ce0

void __cdecl FDS_GuildService::ReceiveJoinGuildResultResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  UDS_NotificationManager *this_00;
  GuildFullInfoResponse *pGVar1;
  JoinGuildResultResponseDefaultTypeInternal *pJVar2;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f7e) {
    pJVar2 = *(JoinGuildResultResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pJVar2 = &server_msg::_JoinGuildResultResponse_default_instance_;
  }
  if (((Message *)((longlong)pJVar2 + 0x20))->field_0x4 == '\x01') {
    this = UDS_GuildManager::GetInst();
    if (this != (UDS_GuildManager *)0x0) {
      pGVar1 = &api_guild::_GuildFullInfoResponse_default_instance_._instance;
      if (*(GuildFullInfoResponse **)&((Message *)((longlong)pJVar2 + 0x10))->field_0x8 !=
          (GuildFullInfoResponse *)0x0) {
        pGVar1 = *(GuildFullInfoResponse **)&((Message *)((longlong)pJVar2 + 0x10))->field_0x8;
      }
      UDS_GuildManager::SetGuildFullInfoResponse(this,pGVar1);
    }
    this_00 = UDS_NotificationManager::GetInst();
    if (this_00 != (UDS_NotificationManager *)0x0) {
      UDS_NotificationManager::AddNotificationData(this_00,GuildJoinApproved);
      return;
    }
  }
  return;
}

// ReceiveKickoutGuildMemberResponse @ 14bbd4220

void __cdecl FDS_GuildService::ReceiveKickoutGuildMemberResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  DeleteGuildMemberResponseDefaultTypeInternal *pDVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f56) {
    pDVar1 = *(DeleteGuildMemberResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pDVar1 = &server_msg::_DeleteGuildMemberResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetKickoutGuildMemberResponse(this,&pDVar1->_instance);
    return;
  }
  return;
}

// ReceiveLeaveGuildResponse @ 14bbd4270

void __cdecl FDS_GuildService::ReceiveLeaveGuildResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  LeaveGuildResponseDefaultTypeInternal *pLVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f5a) {
    pLVar1 = *(LeaveGuildResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pLVar1 = &server_msg::_LeaveGuildResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetLeaveGuildResponse(this,&pLVar1->_instance);
    return;
  }
  return;
}

// ReceiveMyPendingListResponse @ 14bbd4780

void __cdecl FDS_GuildService::ReceiveMyPendingListResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  GetMyPendingListResponseDefaultTypeInternal *pGVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f5e) {
    pGVar1 = *(GetMyPendingListResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar1 = &server_msg::_GetMyPendingListResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetMyPendingListResponse(this,&pGVar1->_instance);
    return;
  }
  return;
}

// ReceiveNotifyGuildMessage @ 14bbd4bc0

void __cdecl FDS_GuildService::ReceiveNotifyGuildMessage(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  NotifyGuildMessageDefaultTypeInternal *pNVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f59) {
    pNVar1 = *(NotifyGuildMessageDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pNVar1 = &api_guild::_NotifyGuildMessage_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetNotifyGuildMessageResponse(this,&pNVar1->_instance);
    return;
  }
  return;
}

// ReceiveUpdateGuildMarkResponse @ 14bbd5fb0

void __cdecl FDS_GuildService::ReceiveUpdateGuildMarkResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  UpdateGuildMarkResponseDefaultTypeInternal *pUVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f61) {
    pUVar1 = *(UpdateGuildMarkResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pUVar1 = &server_msg::_UpdateGuildMarkResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetUpdateGuildMarkResponse(this,&pUVar1->_instance);
    return;
  }
  return;
}

// ReceiveUpdateGuildNameResponse @ 14bbd6000

void __cdecl FDS_GuildService::ReceiveUpdateGuildNameResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  UpdateGuildNameResponseDefaultTypeInternal *pUVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f62) {
    pUVar1 = *(UpdateGuildNameResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pUVar1 = &server_msg::_UpdateGuildNameResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetUpdateGuildNameResponse(this,&pUVar1->_instance);
    return;
  }
  return;
}

// ReceiveUpdateGuildSettingResponse @ 14bbd6050

void __cdecl FDS_GuildService::ReceiveUpdateGuildSettingResponse(ServerMessages *param_1)

{
  UDS_GuildManager *this;
  UpdateGuildSettingResponseDefaultTypeInternal *pUVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f63) {
    pUVar1 = *(UpdateGuildSettingResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pUVar1 = &server_msg::_UpdateGuildSettingResponse_default_instance_;
  }
  this = UDS_GuildManager::GetInst();
  if (this != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SetUpdateGuildSettingResponse(this,&pUVar1->_instance);
    return;
  }
  return;
}

// SendAcceptGuildInvitationRequest @ 14bbddf20

void __cdecl FDS_GuildService::SendAcceptGuildInvitationRequest(long64 param_1,bool param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e93) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e93;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::AcceptGuildInvitationRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::AcceptGuildInvitationRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(bool *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 3;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendApproveJoinGuildRequest @ 14bbde000

void __cdecl
FDS_GuildService::SendApproveJoinGuildRequest(long64 param_1,long64 param_2,bool param_3)

{
  uint uVar1;
  bool bVar2;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e8b) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e8b;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::ApproveJoinGuildRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::ApproveJoinGuildRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(long64 *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    local_28._impl_.ClientMessage_.joincontinentreq_[2].field_0x8 = param_3;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 7;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar2 = UDS_NetworkManager::GetIsConnected(this), bVar2)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendChangeMemberGradeRequest @ 14bbde0f0

void __cdecl
FDS_GuildService::SendChangeMemberGradeRequest
          (long64 param_1,
          TArray<FDS_GuildMemberGradeChangeInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  ClientMessageUnion CVar2;
  bool bVar3;
  void *pvVar4;
  UDS_NetworkManager *this;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [16];
  ClientMessages local_38;
  
  client_msg::ClientMessages::ClientMessages(&local_38,(Arena *)0x0);
  local_38._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_38._impl_._oneof_case_[0] != 0x4e8d) {
    client_msg::ClientMessages::clear_ClientMessage(&local_38);
    local_38._impl_._oneof_case_[0] = 0x4e8d;
    if (((byte)local_38._padding_ & 1) == 0) {
      local_38._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::ChangeGuildMemberGradeRequest>
                     ((Arena *)(CONCAT71(local_38._padding_._1_7_,(byte)local_38._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_38._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::ChangeGuildMemberGradeRequest>
                     (*(Arena **)
                       (CONCAT71(local_38._padding_._1_7_,(byte)local_38._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar2 = local_38._impl_.ClientMessage_;
  if (local_38._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)(local_38._impl_.ClientMessage_.joincontinentreq_ + 3) = param_1;
    *(uint *)(local_38._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_38._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    pFVar5 = (param_2->AllocatorInstance).Data;
    iVar1 = param_2->ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_GuildMemberGradeChangeInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar5 == pFVar6) break;
      pvVar4 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                         ((RepeatedPtrFieldBase *)&CVar2.joincontinentreq_[1].field_0x8,
                          google::protobuf::Arena::
                          DefaultConstruct<api_guild::ChangeGuildMemberGradeInfo>);
      if (pvVar4 != (void *)0x0) {
        *(undefined8 *)((longlong)pvVar4 + 0x18) = *(undefined8 *)pFVar5;
        *(uint *)((longlong)pvVar4 + 0x10) = *(uint *)((longlong)pvVar4 + 0x10) | 1;
        *(undefined4 *)((longlong)pvVar4 + 0x20) = *(undefined4 *)(pFVar5 + 8);
        *(uint *)((longlong)pvVar4 + 0x10) = *(uint *)((longlong)pvVar4 + 0x10) | 2;
      }
      pFVar5 = pFVar5 + 0x10;
    }
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar3 = UDS_NetworkManager::GetIsConnected(this), bVar3)) {
      UDS_NetworkManager::SendPacket(this,&local_38);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_38);
  return;
}

// SendCheckGuildNameDuplicationRequest @ 14bbde230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FDS_GuildService::SendCheckGuildNameDuplicationRequest(FString *param_1)

{
  ClientMessageUnion CVar1;
  bool bVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  UDS_NetworkManager *this;
  undefined8 uVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStackY_88 [32];
  ClientMessages local_58;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  client_msg::ClientMessages::ClientMessages(&local_58,(Arena *)0x0);
  local_58._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_58._impl_._oneof_case_[0] != 0x4e9b) {
    client_msg::ClientMessages::clear_ClientMessage(&local_58);
    local_58._impl_._oneof_case_[0] = 0x4e9b;
    if (((byte)local_58._padding_ & 1) == 0) {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CheckGuildNameExistRequest>
                     ((Arena *)(CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CheckGuildNameExistRequest>
                     (*(Arena **)
                       (CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar1 = local_58._impl_.ClientMessage_;
  if (local_58._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    pbVar3 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,param_1);
    *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
    pAVar6 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)&CVar1.joincontinentreq_[1].field_0x8,pbVar3,pAVar6);
    if (0xf < local_20) {
      uVar5 = local_20 + 1;
      uVar4 = local_38._Ptr;
      if (0xfff < uVar5) {
        uVar4 = *(undefined8 *)(local_38._Ptr + -8);
        uVar5 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar2 = UDS_NetworkManager::GetIsConnected(this), bVar2)) {
      UDS_NetworkManager::SendPacket(this,&local_58);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_58);
  return;
}

// SendCreateGuildRequest @ 14bbde8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FDS_GuildService::SendCreateGuildRequest(FDS_GuildCreateInfo *param_1)

{
  ClientMessageUnion CVar1;
  bool bVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  UDS_NetworkManager *this;
  undefined8 uVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStackY_88 [32];
  ClientMessages local_58;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  client_msg::ClientMessages::ClientMessages(&local_58,(Arena *)0x0);
  local_58._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_58._impl_._oneof_case_[0] != 0x4e86) {
    client_msg::ClientMessages::clear_ClientMessage(&local_58);
    local_58._impl_._oneof_case_[0] = 0x4e86;
    if (((byte)local_58._padding_ & 1) == 0) {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CreateGuildRequest>
                     ((Arena *)(CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CreateGuildRequest>
                     (*(Arena **)
                       (CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar1 = local_58._impl_.ClientMessage_;
  if (local_58._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    pbVar3 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&param_1->GuildName);
    *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
    pAVar6 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)&CVar1.joincontinentreq_[1].field_0x8,pbVar3,pAVar6);
    if (0xf < local_20) {
      uVar5 = local_20 + 1;
      uVar4 = local_38._Ptr;
      if (0xfff < uVar5) {
        uVar4 = *(undefined8 *)(local_38._Ptr + -8);
        uVar5 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
    pbVar3 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&param_1->GuildMarkInfo);
    *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 2;
    pAVar6 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)(CVar1.joincontinentreq_ + 2),pbVar3,pAVar6);
    if (0xf < local_20) {
      uVar5 = local_20 + 1;
      uVar4 = local_38._Ptr;
      if (0xfff < uVar5) {
        uVar4 = *(undefined8 *)(local_38._Ptr + -8);
        uVar5 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
    pbVar3 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&param_1->GuildIntroduction);
    *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 4;
    pAVar6 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)&CVar1.joincontinentreq_[2].field_0x8,pbVar3,pAVar6);
    if (0xf < local_20) {
      uVar5 = local_20 + 1;
      uVar4 = local_38._Ptr;
      if (0xfff < uVar5) {
        uVar4 = *(undefined8 *)(local_38._Ptr + -8);
        uVar5 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
    pbVar3 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&param_1->GuildNotice);
    *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 8;
    pAVar6 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)(CVar1.joincontinentreq_ + 3),pbVar3,pAVar6);
    if (0xf < local_20) {
      uVar5 = local_20 + 1;
      uVar4 = local_38._Ptr;
      if (0xfff < uVar5) {
        uVar4 = *(undefined8 *)(local_38._Ptr + -8);
        uVar5 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
    *(uint *)&CVar1.joincontinentreq_[3].field_0x8 = (uint)param_1->JoinType;
    *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 0x10;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar2 = UDS_NetworkManager::GetIsConnected(this), bVar2)) {
      UDS_NetworkManager::SendPacket(this,&local_58);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_58);
  return;
}

// SendDisbandGuildRequest @ 14bbdedf0

void __cdecl FDS_GuildService::SendDisbandGuildRequest(long64 param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e88) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e88;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::DeleteGuildRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::DeleteGuildRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendGetGuildListRequest @ 14bbdeeb0

void __cdecl FDS_GuildService::SendGetGuildListRequest(long64 param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e8f) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e8f;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::GetGuildListRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::GetGuildListRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[2].field_0x4 = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 5;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar2 = UDS_NetworkManager::GetIsConnected(this), bVar2)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendGuildInviteCancelRequest @ 14bbdef90

void __cdecl FDS_GuildService::SendGuildInviteCancelRequest(long64 param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e96) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e96;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CancelGuildInvitationRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CancelGuildInvitationRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendGuildInviteRequest @ 14bbdf050

void __cdecl FDS_GuildService::SendGuildInviteRequest(long64 param_1,long64 param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e92) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e92;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::InviteGuildRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::InviteGuildRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(long64 *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 3;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendGuildJoinApplyCancelRequest @ 14bbdf130

void __cdecl FDS_GuildService::SendGuildJoinApplyCancelRequest(long64 param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e97) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e97;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CancelJoinGuildRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CancelJoinGuildRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendGuildPendingListRequest @ 14bbdf1f0

void __cdecl FDS_GuildService::SendGuildPendingListRequest(long64 param_1,int param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e94) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e94;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::GetGuildPendingListRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::GetGuildPendingListRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(int *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 3;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendJoinGuildRequest @ 14bbdf420

void __cdecl FDS_GuildService::SendJoinGuildRequest(long64 param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e8a) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e8a;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::JoinGuildRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::JoinGuildRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendKickoutGuildMemberRequest @ 14bbdf4e0

void __cdecl FDS_GuildService::SendKickoutGuildMemberRequest(long64 param_1,long64 param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e8e) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e8e;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::DeleteGuildMemberRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::DeleteGuildMemberRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(long64 *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 3;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendLeaveGuildRequest @ 14bbdf5c0

void __cdecl FDS_GuildService::SendLeaveGuildRequest(long64 param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e91) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e91;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LeaveGuildRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LeaveGuildRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendMyPendingListRequest @ 14bbdf680

void __cdecl FDS_GuildService::SendMyPendingListRequest(int param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e95) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e95;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::GetMyPendingListRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::GetMyPendingListRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendPacket @ 14bbdf740

bool __cdecl FDS_GuildService::SendPacket(ClientMessages *param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  
  this = UDS_NetworkManager::GetInst();
  if (this != (UDS_NetworkManager *)0x0) {
    bVar1 = UDS_NetworkManager::GetIsConnected(this);
    if (bVar1) {
      bVar1 = UDS_NetworkManager::SendPacket(this,param_1);
      return bVar1;
    }
  }
  return false;
}

// SendTwoWayPacket @ 14bbdf990

void __cdecl FDS_GuildService::SendTwoWayPacket(TSharedPtr<FDS_ClientMessage_Twoway,1> *param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  
  this = UDS_NetworkManager::GetInst();
  if (this != (UDS_NetworkManager *)0x0) {
    bVar1 = UDS_NetworkManager::GetIsConnected(this);
    if (bVar1) {
      UDS_NetworkManager::SendTwoWayPacket(this,param_1);
    }
  }
  return;
}

// SendUpdateGuildMarkRequest @ 14bbdf9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FDS_GuildService::SendUpdateGuildMarkRequest(long64 param_1,FString *param_2)

{
  ClientMessageUnion CVar1;
  bool bVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  UDS_NetworkManager *this;
  undefined8 uVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStackY_88 [32];
  ClientMessages local_58;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  client_msg::ClientMessages::ClientMessages(&local_58,(Arena *)0x0);
  local_58._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_58._impl_._oneof_case_[0] != 0x4e98) {
    client_msg::ClientMessages::clear_ClientMessage(&local_58);
    local_58._impl_._oneof_case_[0] = 0x4e98;
    if (((byte)local_58._padding_ & 1) == 0) {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::UpdateGuildMarkRequest>
                     ((Arena *)(CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::UpdateGuildMarkRequest>
                     (*(Arena **)
                       (CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar1 = local_58._impl_.ClientMessage_;
  if (local_58._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 2) = param_1;
    *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) | 2;
    pbVar3 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,param_2);
    *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
    pAVar6 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)&CVar1.joincontinentreq_[1].field_0x8,pbVar3,pAVar6);
    if (0xf < local_20) {
      uVar5 = local_20 + 1;
      uVar4 = local_38._Ptr;
      if (0xfff < uVar5) {
        uVar4 = *(undefined8 *)(local_38._Ptr + -8);
        uVar5 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar2 = UDS_NetworkManager::GetIsConnected(this), bVar2)) {
      UDS_NetworkManager::SendPacket(this,&local_58);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_58);
  return;
}

// SendUpdateGuildNameRequest @ 14bbdfb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FDS_GuildService::SendUpdateGuildNameRequest(long64 param_1,FString *param_2)

{
  ClientMessageUnion CVar1;
  bool bVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  UDS_NetworkManager *this;
  undefined8 uVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStackY_88 [32];
  ClientMessages local_58;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  client_msg::ClientMessages::ClientMessages(&local_58,(Arena *)0x0);
  local_58._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_58._impl_._oneof_case_[0] != 0x4e99) {
    client_msg::ClientMessages::clear_ClientMessage(&local_58);
    local_58._impl_._oneof_case_[0] = 0x4e99;
    if (((byte)local_58._padding_ & 1) == 0) {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::UpdateGuildNameRequest>
                     ((Arena *)(CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::UpdateGuildNameRequest>
                     (*(Arena **)
                       (CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar1 = local_58._impl_.ClientMessage_;
  if (local_58._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 2) = param_1;
    *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) | 2;
    pbVar3 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,param_2);
    *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
    pAVar6 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)&CVar1.joincontinentreq_[1].field_0x8,pbVar3,pAVar6);
    if (0xf < local_20) {
      uVar5 = local_20 + 1;
      uVar4 = local_38._Ptr;
      if (0xfff < uVar5) {
        uVar4 = *(undefined8 *)(local_38._Ptr + -8);
        uVar5 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar2 = UDS_NetworkManager::GetIsConnected(this), bVar2)) {
      UDS_NetworkManager::SendPacket(this,&local_58);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_58);
  return;
}

// SendUpdateGuildSettingRequest @ 14bbdfd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FDS_GuildService::SendUpdateGuildSettingRequest(long64 param_1,FDS_GuildSettingUpdate *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ClientMessageUnion CVar3;
  bool bVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  UDS_NetworkManager *this;
  undefined8 uVar6;
  ulong64 uVar7;
  Arena *pAVar8;
  undefined1 auStackY_88 [32];
  ClientMessages local_58;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  client_msg::ClientMessages::ClientMessages(&local_58,(Arena *)0x0);
  local_58._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_58._impl_._oneof_case_[0] != 0x4e9a) {
    client_msg::ClientMessages::clear_ClientMessage(&local_58);
    local_58._impl_._oneof_case_[0] = 0x4e9a;
    if (((byte)local_58._padding_ & 1) == 0) {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::UpdateGuildSettingRequest>
                     ((Arena *)(CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_58._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::UpdateGuildSettingRequest>
                     (*(Arena **)
                       (CONCAT71(local_58._padding_._1_7_,(byte)local_58._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar3 = local_58._impl_.ClientMessage_;
  if (local_58._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_58._impl_.ClientMessage_.joincontinentreq_[2].field_0x8 = param_1;
    *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) | 4;
    uVar1 = *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 3) = (uint)param_2->KickType;
    *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 8;
    *(uint *)&local_58._impl_.ClientMessage_.joincontinentreq_[3].field_0x4 =
         (uint)param_2->JoinType;
    *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 0x18;
    *(int *)&local_58._impl_.ClientMessage_.joincontinentreq_[3].field_0x8 = param_2->JoinLimitLevel
    ;
    *(uint *)(local_58._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 0x38;
    pbVar5 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&param_2->GuildIntroduction);
    *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 1;
    pAVar8 = (Arena *)(*(ulonglong *)&(CVar3.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar3.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)&CVar3.joincontinentreq_[1].field_0x8,pbVar5,pAVar8);
    if (0xf < local_20) {
      uVar7 = local_20 + 1;
      uVar6 = local_38._Ptr;
      if (0xfff < uVar7) {
        uVar6 = *(undefined8 *)(local_38._Ptr + -8);
        uVar7 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar7);
    }
    pbVar5 = DS_Util::ConvertFStringToUTF8
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&param_2->GuildNotice);
    *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 2;
    pAVar8 = (Arena *)(*(ulonglong *)&(CVar3.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar3.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)(CVar3.joincontinentreq_ + 2),pbVar5,pAVar8);
    if (0xf < local_20) {
      uVar7 = local_20 + 1;
      uVar6 = local_38._Ptr;
      if (0xfff < uVar7) {
        uVar6 = *(undefined8 *)(local_38._Ptr + -8);
        uVar7 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar7);
    }
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar4 = UDS_NetworkManager::GetIsConnected(this), bVar4)) {
      UDS_NetworkManager::SendPacket(this,&local_58);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_58);
  pFVar2 = (param_2->GuildNotice).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->GuildIntroduction).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

