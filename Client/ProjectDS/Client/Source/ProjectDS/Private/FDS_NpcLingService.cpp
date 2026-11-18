// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// LingCompleteError @ 14bbfa250

bool __cdecl FDS_NpcLingService::LingCompleteError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  LingCompleteResponseDefaultTypeInternal *pLVar4;
  UDS_NPCLingData *this;
  FWeakObjectPtr local_res10 [3];
  
  if (*(int *)&param_2[1].field_0xc == 0x507a) {
    pLVar4 = *(LingCompleteResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pLVar4 = &server_msg::_LingCompleteResponse_default_instance_;
  }
  uVar2 = (pLVar4->_instance)._impl_.target_entity_id_;
  iVar1 = (pLVar4->_instance)._impl_.error_code_;
  UDS_NPCLingData::GetData((ulong64)local_res10);
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    this = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_res10);
    UDS_NPCLingData::OnResponseInteractionCanceled(this,uVar2,iVar1);
  }
  return false;
}

// LingNpcTalkEndError @ 14bbfa2c0

bool __cdecl FDS_NpcLingService::LingNpcTalkEndError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// LingNpcTalkStartError @ 14bbfa2d0

bool __cdecl
FDS_NpcLingService::LingNpcTalkStartError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  LingSuccessNpcTalkStartResponseDefaultTypeInternal *pLVar4;
  UDS_NPCLingData *this;
  FWeakObjectPtr local_res10 [3];
  
  if (*(int *)&param_2[1].field_0xc == 0x507b) {
    pLVar4 = *(LingSuccessNpcTalkStartResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pLVar4 = &server_msg::_LingSuccessNpcTalkStartResponse_default_instance_;
  }
  uVar2 = (pLVar4->_instance)._impl_.target_entity_id_;
  iVar1 = (pLVar4->_instance)._impl_.error_code_;
  UDS_NPCLingData::GetData((ulong64)local_res10);
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    this = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_res10);
    UDS_NPCLingData::OnResponseLingNpcTalkStart(this,uVar2,iVar1);
  }
  return false;
}

// LingSkillCancelError @ 14bbfa340

bool __cdecl
FDS_NpcLingService::LingSkillCancelError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  LingSkillCancelResponseDefaultTypeInternal *pLVar4;
  UDS_NPCLingData *this;
  FWeakObjectPtr local_res10 [3];
  
  if (*(int *)&param_2[1].field_0xc == 0x5079) {
    pLVar4 = *(LingSkillCancelResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pLVar4 = &server_msg::_LingSkillCancelResponse_default_instance_;
  }
  uVar2 = (pLVar4->_instance)._impl_.target_entity_id_;
  iVar1 = (pLVar4->_instance)._impl_.error_code_;
  UDS_NPCLingData::GetData((ulong64)local_res10);
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    this = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_res10);
    UDS_NPCLingData::OnResponseInteractionCanceled(this,uVar2,iVar1);
  }
  return false;
}

// LingSkillStartError @ 14bbfa3b0

bool __cdecl FDS_NpcLingService::LingSkillStartError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  LingSkillUseResponseDefaultTypeInternal *pLVar4;
  UDS_NPCLingData *this;
  FWeakObjectPtr local_res10 [3];
  
  if (*(int *)&param_2[1].field_0xc == 0x5078) {
    pLVar4 = *(LingSkillUseResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pLVar4 = &server_msg::_LingSkillUseResponse_default_instance_;
  }
  uVar2 = (pLVar4->_instance)._impl_.target_entity_id_;
  iVar1 = (pLVar4->_instance)._impl_.error_code_;
  UDS_NPCLingData::GetData((ulong64)local_res10);
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    this = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_res10);
    UDS_NPCLingData::OnResponseInteractionCanceled(this,uVar2,iVar1);
  }
  return false;
}

// OnResponseInteractionCanceled @ 14bbfbfa0

void __cdecl FDS_NpcLingService::OnResponseInteractionCanceled(ServerMessages *param_1)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  LingSkillCancelResponseDefaultTypeInternal *pLVar4;
  UDS_NPCLingData *this;
  FWeakObjectPtr local_res8;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5079) {
    pLVar4 = *(LingSkillCancelResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pLVar4 = &server_msg::_LingSkillCancelResponse_default_instance_;
  }
  uVar2 = *(ulong64 *)&((Message *)((longlong)pLVar4 + 0x10))->field_0x8;
  iVar1 = *(int *)((longlong)pLVar4 + 0x20);
  UDS_NPCLingData::GetData((ulong64)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    this = (UDS_NPCLingData *)FWeakObjectPtr::Get(&local_res8);
    UDS_NPCLingData::OnResponseInteractionCanceled(this,uVar2,iVar1);
  }
  return;
}

// OnResponseInteractionCompleted @ 14bbfc010

void __cdecl FDS_NpcLingService::OnResponseInteractionCompleted(ServerMessages *param_1)

{
  ulong64 uVar1;
  bool bVar2;
  LingCompleteResponseDefaultTypeInternal *pLVar3;
  UDS_NPCLingData *this;
  FWeakObjectPtr local_res8 [4];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x507a) {
    pLVar3 = *(LingCompleteResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pLVar3 = &server_msg::_LingCompleteResponse_default_instance_;
  }
  uVar1 = *(ulong64 *)&((Message *)((longlong)pLVar3 + 0x10))->field_0x8;
  UDS_NPCLingData::GetData((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_res8);
    UDS_NPCLingData::OnResponseInteractionCompleted(this,uVar1);
  }
  return;
}

// OnResponseInteractionStarted @ 14bbfc070

void __cdecl FDS_NpcLingService::OnResponseInteractionStarted(ServerMessages *param_1)

{
  bool bVar1;
  UDS_NPCLingData *this;
  LingSkillUseResponseDefaultTypeInternal *pLVar2;
  FWeakObjectPtr local_res8 [4];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5078) {
    pLVar2 = *(LingSkillUseResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pLVar2 = &server_msg::_LingSkillUseResponse_default_instance_;
  }
  UDS_NPCLingData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_res8);
    UDS_NPCLingData::OnResponseInteractionStarted(this,&pLVar2->_instance);
  }
  return;
}

// ProcessError @ 14bc02580

bool __cdecl FDS_NpcLingService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestLingNpcTalkEnd @ 14bc10980

void __cdecl FDS_NpcLingService::RequestLingNpcTalkEnd(void)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x507b) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x507b;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LingSuccessNpcTalkEndRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LingSuccessNpcTalkEndRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (((local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) &&
      (this = UDS_NetworkManager::GetInst(), this != (UDS_NetworkManager *)0x0)) &&
     (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
    UDS_NetworkManager::SendPacket(this,&local_28);
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// RequestLingNpcTalkStart @ 14bc10a40

void __cdecl FDS_NpcLingService::RequestLingNpcTalkStart(ulong64 param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x507a) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x507a;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LingSuccessNpcTalkStartRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LingSuccessNpcTalkStartRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
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

// RequestLingSkillCancel @ 14bc10b00

void __cdecl FDS_NpcLingService::RequestLingSkillCancel(ulong64 param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x5079) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x5079;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LingSkillCancelRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LingSkillCancelRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
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

// RequestLingSkillStart @ 14bc10bc0

void __cdecl FDS_NpcLingService::RequestLingSkillStart(ulong64 param_1,int param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x5078) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x5078;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LingSkillUseRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LingSkillUseRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
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

// ResponeLingNpcTalkEnd @ 14bc18bf0

void __cdecl FDS_NpcLingService::ResponeLingNpcTalkEnd(ServerMessages *param_1)

{
  return;
}

// ResponeLingNpcTalkStart @ 14bc18c00

void __cdecl FDS_NpcLingService::ResponeLingNpcTalkStart(ServerMessages *param_1)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  LingSuccessNpcTalkStartResponseDefaultTypeInternal *pLVar4;
  UDS_NPCLingData *this;
  FWeakObjectPtr local_res8;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x507b) {
    pLVar4 = *(LingSuccessNpcTalkStartResponseDefaultTypeInternal **)
              &(param_1->_impl_).ServerMessage_;
  }
  else {
    pLVar4 = &server_msg::_LingSuccessNpcTalkStartResponse_default_instance_;
  }
  uVar2 = *(ulong64 *)&((Message *)((longlong)pLVar4 + 0x10))->field_0x8;
  iVar1 = *(int *)((longlong)pLVar4 + 0x20);
  UDS_NPCLingData::GetData((ulong64)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    this = (UDS_NPCLingData *)FWeakObjectPtr::Get(&local_res8);
    UDS_NPCLingData::OnResponseLingNpcTalkStart(this,uVar2,iVar1);
  }
  return;
}

// SendPacket @ 14bc1d150

void __cdecl FDS_NpcLingService::SendPacket(ClientMessages *param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  
  this = UDS_NetworkManager::GetInst();
  if (this != (UDS_NetworkManager *)0x0) {
    bVar1 = UDS_NetworkManager::GetIsConnected(this);
    if (bVar1) {
      UDS_NetworkManager::SendPacket(this,param_1);
    }
  }
  return;
}

