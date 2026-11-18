// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// HasCooldown @ 14b8c9330

bool __cdecl FDS_ChatService::HasCooldown(EDS_ChattingType param_1)

{
  undefined4 uVar1;
  bool bVar2;
  EDS_CoolDownType *pEVar3;
  EDS_ChattingType *pEVar4;
  longlong lVar5;
  
  if (ChatCoolDownTypeMap._8_4_ != ChatCoolDownTypeMap._52_4_) {
    lVar5 = 0x154cef9a8;
    if (ChatCoolDownTypeMap._64_8_ != 0) {
      lVar5 = ChatCoolDownTypeMap._64_8_;
    }
    uVar1 = *(int *)(lVar5 + ((ulonglong)(ChatCoolDownTypeMap._72_4_ - 1) & (ulonglong)param_1) * 4)
    ;
    while (uVar1 != 0xffffffff) {
      pEVar4 = (EDS_ChattingType *)((longlong)(int)uVar1 * 0x10 + ChatCoolDownTypeMap._0_8_);
      if (*pEVar4 == param_1) {
        pEVar3 = (EDS_CoolDownType *)(pEVar4 + 4);
        if (pEVar4 == (EDS_ChattingType *)0x0) {
          pEVar3 = (EDS_CoolDownType *)0x0;
        }
        if (pEVar3 == (EDS_CoolDownType *)0x0) {
          return false;
        }
        if (*pEVar3 == None) {
          return false;
        }
        bVar2 = UDS_TimeCoolDownManager::HasCoolDown(*pEVar3,0);
        return bVar2;
      }
      uVar1 = *(undefined4 *)(pEVar4 + 8);
    }
  }
  return false;
}

// Init @ 14b8c99a0

void __cdecl FDS_ChatService::Init(int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  char local_res8 [8];
  undefined1 local_res10 [8];
  TPairInitializer<EDS_ChattingType_const_&,EDS_CoolDownType_const_&> local_res18;
  TArray<FDS_ChattingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  char *local_28;
  longlong local_20;
  
  if (0 < param_1) {
    MaxMessageLength = param_1;
  }
  if ((MaxMessageLength < 1) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4617265503067439134>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Chat\\DS_ChatService.cpp"
                         ,0x1e,"MaxMessageLength > 0"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FDS_ChattingBaseTableRow::GetAll(&local_38);
  TSet<TTuple<enum_EDS_ChattingType,enum_EDS_CoolDownType>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,enum_EDS_CoolDownType,0>,FDefaultSetAllocator>
  ::Reset(&ChatCoolDownTypeMap);
  TSet<TTuple<enum_EDS_ChattingType,enum_EDS_CoolDownType>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,enum_EDS_CoolDownType,0>,FDefaultSetAllocator>
  ::Reserve(&ChatCoolDownTypeMap,local_38.ArrayNum);
  iVar4 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_ChattingBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar6.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar6.Data;
    if ((((lVar2 != 0) && (local_res8[0] = *(char *)(lVar2 + 0x11), local_res8[0] != '\0')) &&
        (local_res8[0] != '\t')) && (local_res8[0] != '\x18')) {
      local_28 = local_res8;
      local_20 = lVar2 + 0x30;
      TSet<TTuple<enum_EDS_ChattingType,enum_EDS_CoolDownType>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,enum_EDS_CoolDownType,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_ChattingType_const_&,enum_EDS_CoolDownType_const_&>_>
                (&ChatCoolDownTypeMap,&local_res18,(bool *)&local_28);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// ProcessError @ 14b8df780

bool __cdecl FDS_ChatService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveChatResponse @ 14b8df880

void __cdecl FDS_ChatService::ReceiveChatResponse(ServerMessages *param_1)

{
  UDS_ChattingManager *this;
  
  if ((param_1->_impl_)._oneof_case_[0] == 21000) {
    this = UDS_ChattingManager::GetInst();
    if (this != (UDS_ChattingManager *)0x0) {
      if ((param_1->_impl_)._oneof_case_[0] == 21000) {
        UDS_ChattingManager::SetDataByChatResponse
                  (this,(ChatResponse *)(param_1->_impl_).ServerMessage_.errorcoderes_);
        return;
      }
      UDS_ChattingManager::SetDataByChatResponse
                (this,&server_msg::_ChatResponse_default_instance_._instance);
      return;
    }
  }
  return;
}

// SendChatMessage @ 14b8e6070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FDS_ChatService::SendChatMessage(EDS_ChattingType param_1,FString *param_2)

{
  ClientMessageUnion CVar1;
  bool bVar2;
  FString *pFVar3;
  UDS_NetworkManager *this;
  wchar_t *pwVar4;
  Arena *pAVar5;
  undefined1 auStack_128 [32];
  ClientMessages local_108;
  basic_string_view<char,std::char_traits<char>_> local_e8;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  bVar2 = HasCooldown(param_1);
  if (bVar2) {
    local_e8._Mysize = 0x585;
    local_e8._Mydata = (char *)&___7FDS_StringUiID__6B_;
    pFVar3 = FDS_StringUiID::Str((FDS_StringUiID *)&local_e8);
    UDS_ChattingManager::AddSystemMessage(System,pFVar3);
  }
  else {
    StartCooldown(param_1);
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar2 = UDS_NetworkManager::GetIsConnected(this), bVar2)) {
      client_msg::ClientMessages::ClientMessages(&local_108,(Arena *)0x0);
      local_108._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
      if (local_108._impl_._oneof_case_[0] != 0x51a4) {
        client_msg::ClientMessages::clear_ClientMessage(&local_108);
        local_108._impl_._oneof_case_[0] = 0x51a4;
        if (((byte)local_108._padding_ & 1) == 0) {
          local_108._impl_.ClientMessage_.joincontinentreq_ =
               google::protobuf::Arena::DefaultConstruct<client_msg::ChatRequest>
                         ((Arena *)(CONCAT71(local_108._padding_._1_7_,(byte)local_108._padding_) &
                                   0xfffffffffffffffe));
        }
        else {
          local_108._impl_.ClientMessage_.joincontinentreq_ =
               google::protobuf::Arena::DefaultConstruct<client_msg::ChatRequest>
                         (*(Arena **)
                           (CONCAT71(local_108._padding_._1_7_,(byte)local_108._padding_) &
                           0xfffffffffffffffe));
        }
      }
      CVar1 = local_108._impl_.ClientMessage_;
      if (local_108._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
        if ((param_2->Data).ArrayNum == 0) {
          pwVar4 = L"";
        }
        else {
          pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        StringCast<char8_t,128,wchar_t>(&local_d8,pwVar4);
        *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
        pAVar5 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe)
        ;
        if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        local_e8._Mysize = strlen((char *)local_d8.Ptr);
        local_e8._Mydata = (char *)local_d8.Ptr;
        google::protobuf::internal::ArenaStringPtr::Set
                  ((ArenaStringPtr *)&CVar1.joincontinentreq_[1].field_0x8,&local_e8,pAVar5);
        *(uint *)(CVar1.joincontinentreq_ + 2) = (uint)param_1;
        *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 2;
        bVar2 = UDS_NetworkManager::SendPacket(this,&local_108);
        if ((void *)local_d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_d8._padding_);
        }
        client_msg::ClientMessages::~ClientMessages(&local_108);
        return bVar2;
      }
      client_msg::ClientMessages::~ClientMessages(&local_108);
    }
  }
  return false;
}

// SendGroupMessage @ 14b8e6280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_ChatService::SendGroupMessage(EDS_ChattingType param_1,FString *param_2,FString *param_3)

{
  bool bVar1;
  FString *pFVar2;
  UDS_TencentCloudChatManager *this;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  FDS_StringUiID local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = HasCooldown(param_1);
  if (bVar1) {
    local_158.ID = 0x585;
    local_158._padding_ = (longlong)&___7FDS_StringUiID__6B_;
    pFVar2 = FDS_StringUiID::Str(&local_158);
    UDS_ChattingManager::AddSystemMessage(System,pFVar2);
  }
  else {
    StartCooldown(param_1);
    this = UDS_TencentCloudChatManager::GetInst();
    if (this == (UDS_TencentCloudChatManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_ChatService::SendToTencentCloudChat",0x27,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_148.Ptr,0x88,L"tencentChatManager == nullptr");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else if ((char)this->_padding_ != '\x01') {
      bVar1 = UDS_TencentCloudChatManager::Request_SendGroupMessage(this,param_2,param_3);
      return bVar1;
    }
  }
  return false;
}

// SendToGameServer @ 14b8e6560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FDS_ChatService::SendToGameServer(EDS_ChattingType param_1,FString *param_2)

{
  ClientMessageUnion CVar1;
  bool bVar2;
  UDS_NetworkManager *this;
  wchar_t *pwVar3;
  Arena *pAVar4;
  undefined1 auStack_118 [32];
  ClientMessages local_f8;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  this = UDS_NetworkManager::GetInst();
  if ((this == (UDS_NetworkManager *)0x0) ||
     (bVar2 = UDS_NetworkManager::GetIsConnected(this), !bVar2)) {
    bVar2 = false;
  }
  else {
    client_msg::ClientMessages::ClientMessages(&local_f8,(Arena *)0x0);
    local_f8._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_f8._impl_._oneof_case_[0] != 0x51a4) {
      client_msg::ClientMessages::clear_ClientMessage(&local_f8);
      local_f8._impl_._oneof_case_[0] = 0x51a4;
      if (((byte)local_f8._padding_ & 1) == 0) {
        local_f8._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::ChatRequest>
                       ((Arena *)(CONCAT71(local_f8._padding_._1_7_,(byte)local_f8._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_f8._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::ChatRequest>
                       (*(Arena **)
                         (CONCAT71(local_f8._padding_._1_7_,(byte)local_f8._padding_) &
                         0xfffffffffffffffe));
      }
    }
    CVar1 = local_f8._impl_.ClientMessage_;
    bVar2 = false;
    if (local_f8._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      if ((param_2->Data).ArrayNum == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      StringCast<char8_t,128,wchar_t>(&local_c8,pwVar3);
      *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
      pAVar4 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
      if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
        pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
      }
      local_d8._Mysize = strlen((char *)local_c8.Ptr);
      local_d8._Mydata = (char *)local_c8.Ptr;
      google::protobuf::internal::ArenaStringPtr::Set
                ((ArenaStringPtr *)&CVar1.joincontinentreq_[1].field_0x8,&local_d8,pAVar4);
      *(uint *)(CVar1.joincontinentreq_ + 2) = (uint)param_1;
      *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 2;
      bVar2 = UDS_NetworkManager::SendPacket(this,&local_f8);
      if ((void *)local_c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._padding_);
      }
    }
    client_msg::ClientMessages::~ClientMessages(&local_f8);
  }
  return bVar2;
}

// SendToTencentCloudChat @ 14b8e6710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_ChatService::SendToTencentCloudChat(FString *param_1,FString *param_2)

{
  bool bVar1;
  UDS_TencentCloudChatManager *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_TencentCloudChatManager::GetInst();
  if (this == (UDS_TencentCloudChatManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_ChatService::SendToTencentCloudChat",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x88,L"tencentChatManager == nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return false;
      }
    }
  }
  else if ((char)this->_padding_ != '\x01') {
    bVar1 = UDS_TencentCloudChatManager::Request_SendGroupMessage(this,param_1,param_2);
    return bVar1;
  }
  return false;
}

// SendToTencentCloudChat @ 14b8e6810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_ChatService::SendToTencentCloudChat(long64 param_1,FString *param_2)

{
  bool bVar1;
  UDS_TencentCloudChatManager *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_TencentCloudChatManager::GetInst();
  if (this == (UDS_TencentCloudChatManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_ChatService::SendToTencentCloudChat",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x77,L"tencentChatManager == nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return false;
      }
    }
  }
  else if ((char)this->_padding_ != '\x01') {
    bVar1 = UDS_TencentCloudChatManager::Request_SendC2CMessage(this,param_1,param_2);
    return bVar1;
  }
  return false;
}

// SendWhisperMessage @ 14b8e6910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_ChatService::SendWhisperMessage(long64 param_1,FString *param_2)

{
  bool bVar1;
  FString *pFVar2;
  UDS_TencentCloudChatManager *this;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  FDS_StringUiID local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = HasCooldown(Whisper);
  if (bVar1) {
    local_148.ID = 0x585;
    local_148._padding_ = (longlong)&___7FDS_StringUiID__6B_;
    pFVar2 = FDS_StringUiID::Str(&local_148);
    UDS_ChattingManager::AddSystemMessage(System,pFVar2);
  }
  else {
    StartCooldown(Whisper);
    this = UDS_TencentCloudChatManager::GetInst();
    if (this == (UDS_TencentCloudChatManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_ChatService::SendToTencentCloudChat",0x27,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x77,L"tencentChatManager == nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else if ((char)this->_padding_ != '\x01') {
      bVar1 = UDS_TencentCloudChatManager::Request_SendC2CMessage(this,param_1,param_2);
      return bVar1;
    }
  }
  return false;
}

// StartCooldown @ 14b8ed420

void __cdecl FDS_ChatService::StartCooldown(EDS_ChattingType param_1)

{
  undefined4 uVar1;
  EDS_CoolDownType *pEVar2;
  EDS_ChattingType *pEVar3;
  longlong lVar4;
  
  if (ChatCoolDownTypeMap._8_4_ != ChatCoolDownTypeMap._52_4_) {
    lVar4 = 0x154cef9a8;
    if (ChatCoolDownTypeMap._64_8_ != 0) {
      lVar4 = ChatCoolDownTypeMap._64_8_;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(ChatCoolDownTypeMap._72_4_ - 1) & (ulonglong)param_1) * 4)
    ;
    if (uVar1 != 0xffffffff) {
      while (pEVar3 = (EDS_ChattingType *)((longlong)(int)uVar1 * 0x10 + ChatCoolDownTypeMap._0_8_),
            *pEVar3 != param_1) {
        uVar1 = *(undefined4 *)(pEVar3 + 8);
        if (uVar1 == 0xffffffff) {
          return;
        }
      }
      pEVar2 = (EDS_CoolDownType *)(pEVar3 + 4);
      if (pEVar3 == (EDS_ChattingType *)0x0) {
        pEVar2 = (EDS_CoolDownType *)0x0;
      }
      if ((pEVar2 != (EDS_CoolDownType *)0x0) && (*pEVar2 != None)) {
        UDS_TimeCoolDownManager::StartCoolDown(*pEVar2,0,0.0);
        return;
      }
    }
  }
  return;
}

