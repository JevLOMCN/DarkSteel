// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// OpenLockCompleteError @ 14bbfeba0

bool __cdecl FDS_StuffService::OpenLockCompleteError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  OpenLockCompleteResponseDefaultTypeInternal *pOVar3;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  if (*(int *)&param_2[1].field_0xc == 0x5016) {
    pOVar3 = *(OpenLockCompleteResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pOVar3 = &server_msg::_OpenLockCompleteResponse_default_instance_;
  }
  local_res18[0] = (pOVar3->_instance)._impl_.stuff_entity_id_;
  UDS_StuffGatherData::GetData((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)(pUVar2 + 9),local_res18);
  }
  return false;
}

// OpenLockUseError @ 14bbfec10

bool __cdecl FDS_StuffService::OpenLockUseError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  OpenLockSkillUseResponseDefaultTypeInternal *pOVar3;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  if (*(int *)&param_2[1].field_0xc == 0x5014) {
    pOVar3 = *(OpenLockSkillUseResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pOVar3 = &server_msg::_OpenLockSkillUseResponse_default_instance_;
  }
  local_res18[0] = (pOVar3->_instance)._impl_.target_entity_id_;
  UDS_StuffGatherData::GetData((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)(pUVar2 + 9),local_res18);
  }
  return false;
}

// ProcessError @ 14bc026c0

bool __cdecl FDS_StuffService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveOpenLockCancelResponse @ 14bc05580

void __cdecl FDS_StuffService::ReceiveOpenLockCancelResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_StuffGatherData *this;
  OpenLockSkillCancelResponseDefaultTypeInternal *pOVar2;
  FWeakObjectPtr local_res8 [4];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5015) {
    pOVar2 = *(OpenLockSkillCancelResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pOVar2 = &server_msg::_OpenLockSkillCancelResponse_default_instance_;
  }
  UDS_StuffGatherData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res8);
    UDS_StuffGatherData::SetDataByOpenlockCancelResponse(this,&pOVar2->_instance);
  }
  return;
}

// ReceiveOpenLockCompleteResponse @ 14bc055e0

void __cdecl FDS_StuffService::ReceiveOpenLockCompleteResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_StuffGatherData *this;
  OpenLockCompleteResponseDefaultTypeInternal *pOVar2;
  FWeakObjectPtr local_res8 [4];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5016) {
    pOVar2 = *(OpenLockCompleteResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pOVar2 = &server_msg::_OpenLockCompleteResponse_default_instance_;
  }
  UDS_StuffGatherData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res8);
    UDS_StuffGatherData::SetDataByOpenlockCompleteResponse(this,&pOVar2->_instance);
  }
  return;
}

// ReceiveOpenLockResponse @ 14bc05640

void __cdecl FDS_StuffService::ReceiveOpenLockResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_StuffGatherData *this;
  OpenLockSkillUseResponseDefaultTypeInternal *pOVar2;
  FWeakObjectPtr local_res8 [4];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5014) {
    pOVar2 = *(OpenLockSkillUseResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pOVar2 = &server_msg::_OpenLockSkillUseResponse_default_instance_;
  }
  UDS_StuffGatherData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res8);
    UDS_StuffGatherData::SetDataByOpenlockStartResponse(this,&pOVar2->_instance);
  }
  return;
}

// RequestStuffGatherCancel @ 14bc17ed0

void __cdecl FDS_StuffService::RequestStuffGatherCancel(ulong64 param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x17) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x17;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::StuffGatherCancelRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::StuffGatherCancelRequest>
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

// RequestStuffGatherStart @ 14bc17f90

void __cdecl FDS_StuffService::RequestStuffGatherStart(ulong64 param_1,int param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x16) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x16;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::StuffGatherStartRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::StuffGatherStartRequest>
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

// ResponeStuffGatherCancel @ 14bc18db0

void __cdecl FDS_StuffService::ResponeStuffGatherCancel(ServerMessages *param_1)

{
  bool bVar1;
  UDS_StuffGatherData *this;
  StuffGatherCancelResponseDefaultTypeInternal *pSVar2;
  FWeakObjectPtr local_res8 [4];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x2f) {
    pSVar2 = *(StuffGatherCancelResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar2 = &server_msg::_StuffGatherCancelResponse_default_instance_;
  }
  UDS_StuffGatherData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res8);
    UDS_StuffGatherData::SetDataByStuffGatherCancelResponse(this,&pSVar2->_instance);
  }
  return;
}

// ResponeStuffGatherComplete @ 14bc18e10

void __cdecl FDS_StuffService::ResponeStuffGatherComplete(ServerMessages *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  UDS_StuffGatherData *this;
  UObject *pUVar4;
  UDS_DeathData *this_00;
  StuffGatherCompleteResponseDefaultTypeInternal *pSVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x30) {
    pSVar5 = *(StuffGatherCompleteResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar5 = &server_msg::_StuffGatherCompleteResponse_default_instance_;
  }
  uVar1 = *(ulong64 *)&((Message *)((longlong)pSVar5 + 0x20))->field_0x8;
  UDS_StuffGatherData::GetData((ulong64)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    this = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res8);
    UDS_StuffGatherData::SetDataByStuffGatherCompleteResponse(this,&pSVar5->_instance);
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    if (pUVar4[0xb].field_0x1d == '\x05') {
      UDS_DeathData::GetData((ulong64)&local_res10,uVar1,false);
      bVar3 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar3) {
        this_00 = (UDS_DeathData *)FWeakObjectPtr::Get(&local_res10);
        UDS_DeathData::SetDeathDataResponse_Stuff(this_00);
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2176410454602022806>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_StuffService.cpp"
                       ,0x6a,"stuffData.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ResponeStuffGatherStart @ 14bc18ef0

void __cdecl FDS_StuffService::ResponeStuffGatherStart(ServerMessages *param_1)

{
  bool bVar1;
  UDS_StuffGatherData *this;
  StuffGatherStartResponseDefaultTypeInternal *pSVar2;
  FWeakObjectPtr local_res8 [4];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x2e) {
    pSVar2 = *(StuffGatherStartResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pSVar2 = &server_msg::_StuffGatherStartResponse_default_instance_;
  }
  UDS_StuffGatherData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res8);
    UDS_StuffGatherData::SetDataByStuffGatherStartResponse(this,&pSVar2->_instance);
  }
  return;
}

// SendOpenLockCancelRequest @ 14bc1cf70

bool __cdecl FDS_StuffService::SendOpenLockCancelRequest(ulong64 *param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x5015) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x5015;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::OpenLockSkillCancelRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::OpenLockSkillCancelRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = *param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      bVar1 = UDS_NetworkManager::SendPacket(this,&local_28);
      client_msg::ClientMessages::~ClientMessages(&local_28);
      return bVar1;
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return false;
}

// SendOpenLockUseRequest @ 14bc1d060

bool __cdecl FDS_StuffService::SendOpenLockUseRequest(ulong64 *param_1,int param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x5014) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x5014;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::OpenLockSkillUseRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::OpenLockSkillUseRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = *param_1;
    *(int *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 3;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      bVar1 = UDS_NetworkManager::SendPacket(this,&local_28);
      goto LAB_14bc1d12a;
    }
  }
  bVar1 = false;
LAB_14bc1d12a:
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return bVar1;
}

// SendPacket @ 14bc1d1f0

bool __cdecl FDS_StuffService::SendPacket(ClientMessages *param_1)

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

// StuffGatherCompleteError @ 14bc1fb80

bool __cdecl
FDS_StuffService::StuffGatherCompleteError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  StuffGatherCompleteResponseDefaultTypeInternal *pSVar3;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  if (*(int *)&param_2[1].field_0xc == 0x30) {
    pSVar3 = *(StuffGatherCompleteResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pSVar3 = &server_msg::_StuffGatherCompleteResponse_default_instance_;
  }
  local_res18[0] = (pSVar3->_instance)._impl_.entity_id_;
  UDS_StuffGatherData::GetData((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)(pUVar2 + 9),local_res18);
  }
  return false;
}

// StuffGatherStartError @ 14bc1fbf0

bool __cdecl FDS_StuffService::StuffGatherStartError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  StuffGatherStartResponseDefaultTypeInternal *pSVar3;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  if (*(int *)&param_2[1].field_0xc == 0x2e) {
    pSVar3 = *(StuffGatherStartResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pSVar3 = &server_msg::_StuffGatherStartResponse_default_instance_;
  }
  local_res18[0] = (pSVar3->_instance)._impl_.entity_id_;
  UDS_StuffGatherData::GetData((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)(pUVar2 + 9),local_res18);
  }
  return false;
}

