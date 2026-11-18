// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// ProcessError @ 14bc026d0

bool __cdecl FDS_TamingService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestTaming @ 14bc18070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_TamingService::RequestTaming(ulong64 *param_1,EDS_TamingRequestType *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NetworkManager *this;
  undefined1 auStackY_188 [32];
  ClientMessages local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  client_msg::ClientMessages::ClientMessages(&local_158,(Arena *)0x0);
  local_158._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_158._impl_._oneof_case_[0] != 0x1e0) {
    client_msg::ClientMessages::clear_ClientMessage(&local_158);
    local_158._impl_._oneof_case_[0] = 0x1e0;
    if (((byte)local_158._padding_ & 1) == 0) {
      local_158._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::TamingRequest>
                     ((Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_158._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::TamingRequest>
                     (*(Arena **)
                       (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_158._impl_.ClientMessage_.joincontinentreq_ == (Message *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_TamingService::RequestTaming",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x48,L"TamingRequest is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1225133378165014601>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_TamingService.cpp"
                       ,0x49,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    *(ulong64 *)&local_158._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = *param_1;
    *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 2) = (uint)*param_2;
    *(int *)&local_158._impl_.ClientMessage_.joincontinentreq_[2].field_0x8 = param_3;
    *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) | 10;
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::SendPacket(this,&local_158);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_158);
  return;
}

// RequestTaming @ 14bc18230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_TamingService::RequestTaming
          (ulong64 *param_1,EDS_TamingRequestType *param_2,EDS_TamingMountSide param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_NetworkManager *this;
  undefined1 auStackY_188 [32];
  ClientMessages local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  client_msg::ClientMessages::ClientMessages(&local_158,(Arena *)0x0);
  local_158._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_158._impl_._oneof_case_[0] != 0x1e0) {
    client_msg::ClientMessages::clear_ClientMessage(&local_158);
    local_158._impl_._oneof_case_[0] = 0x1e0;
    if (((byte)local_158._padding_ & 1) == 0) {
      local_158._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::TamingRequest>
                     ((Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_158._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::TamingRequest>
                     (*(Arena **)
                       (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_158._impl_.ClientMessage_.joincontinentreq_ == (Message *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_TamingService::RequestTaming",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x30,L"TamingRequest is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1225133378165014577>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_TamingService.cpp"
                       ,0x31,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    *(ulong64 *)&local_158._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = *param_1;
    uVar1 = *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(uint *)&local_158._impl_.ClientMessage_.joincontinentreq_[2].field_0x4 = (uint)param_3;
    *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 5;
    *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 2) = (uint)*param_2;
    *(int *)&local_158._impl_.ClientMessage_.joincontinentreq_[2].field_0x8 = param_4;
    *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 0xf;
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::SendPacket(this,&local_158);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_158);
  return;
}

// ResponseTamingState @ 14bc1ac40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_TamingService::ResponseTamingState(ServerMessages *param_1)

{
  byte bVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  UDS_EventManager *this;
  UDS_InteractionEvent *pUVar5;
  UDS_VM_MiniGame_KeyTimeAttack *pUVar6;
  TamingStateResponseDefaultTypeInternal *pTVar7;
  undefined1 auStackY_198 [32];
  EDS_TamingState local_158 [8];
  ulong64 local_150;
  FWeakObjectPtr local_148;
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x526c) {
    pTVar7 = *(TamingStateResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pTVar7 = &server_msg::_TamingStateResponse_default_instance_;
  }
  local_140 = *(ulong64 *)&((Message *)((longlong)pTVar7 + 0x10))->field_0x8;
  local_158[0] = ((Message *)((longlong)pTVar7 + 0x20))->field_0x8;
  local_150 = 0;
  if ((*(byte *)((longlong)pTVar7 + 0x10) & 2) != 0) {
    local_150 = *(ulong64 *)((longlong)pTVar7 + 0x20);
    pFVar3 = FDS_EntityBase::GetEntityBase(&local_150);
    if (pFVar3 == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_TamingService::ResponseTamingState",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x67,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
    if (pFVar3->EntityType != MainCharacter) {
      bVar1 = 0;
      if ((*(byte *)((longlong)pTVar7 + 0x10) & 8) != 0) {
        bVar1 = ((Message *)((longlong)pTVar7 + 0x20))->field_0xc;
      }
      UDS_InteractionAbility_NPCTaming::TryActivate(&local_150,&local_140,(uint)bVar1,0);
    }
    this = UDS_EventManager::GetInst();
    if (this != (UDS_EventManager *)0x0) {
      if ((char)this->_padding_ == '\x01') {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_138.Ptr,0x31,
                     L"Cannot access event during UDS_EventManager destruction.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        pUVar5 = UDS_EventManager::GetEventInternal<UDS_InteractionEvent>(this);
        if (pUVar5 != (UDS_InteractionEvent *)0x0) {
          FDS_FilteredEventDelegate<unsigned___int64_const_,enum_EDS_TamingState_const_>::Broadcast
                    (&pUVar5->InteractionNpcTamingStateDelegate,&local_150,local_158[0]);
        }
      }
    }
  }
  UDS_TamingNPCAbility::TryActivate(&local_140,&local_150,local_158);
  UDS_VM_MiniGame_KeyTimeAttack::GetCurrentInstanceNullable();
  if (local_158[0] == FailDismounting) {
    bVar2 = TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr> *)&local_148,
                       (void *)0x0);
    if (!bVar2) {
      pUVar6 = (UDS_VM_MiniGame_KeyTimeAttack *)FWeakObjectPtr::Get(&local_148);
      UDS_VM_MiniGame_KeyTimeAttack::ShowFailEffectAndClose(pUVar6);
    }
  }
  else if ((local_158[0] == SuccessDismounting) &&
          (bVar2 = TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr>::UEOpEquals
                             ((TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr> *)
                              &local_148,(void *)0x0), !bVar2)) {
    pUVar6 = (UDS_VM_MiniGame_KeyTimeAttack *)FWeakObjectPtr::Get(&local_148);
    UDS_VM_MiniGame_KeyTimeAttack::ShowSuccessEffectAndClose(pUVar6);
  }
  return;
}

