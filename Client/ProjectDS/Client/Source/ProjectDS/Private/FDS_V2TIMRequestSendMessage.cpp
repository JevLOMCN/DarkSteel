// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// GetDebugString @ 14b9efa80

FString * __thiscall
FDS_V2TIMRequestSendMessage::GetDebugString
          (FDS_V2TIMRequestSendMessage *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestSendMessage");
  return __return_storage_ptr__;
}

// OnProgress @ 14ba028a0

void __thiscall
FDS_V2TIMRequestSendMessage::OnProgress(FDS_V2TIMRequestSendMessage *this,uint param_1)

{
  return;
}

// OnSuccessInternal @ 14ba07d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestSendMessage::OnSuccessInternal
          (FDS_V2TIMRequestSendMessage *this,V2TIMMessage *param_1)

{
  bool bVar1;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_208 [32];
  FDS_ChatMessageInfo local_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestSendMessage::OnSuccessInternal",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x230,L"chattingManager is nullptr.");
    FVar3.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    if ((char)this_00->_padding_ == '\x01') {
      return;
    }
    local_1d8.ConversationType = 0;
    local_1d8.SendTime = 0.0;
    local_1d8.MessageID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.MessageID.Data.ArrayNum = 0;
    local_1d8.MessageID.Data.ArrayMax = 0;
    local_1d8.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.GroupID.Data.ArrayNum = 0;
    local_1d8.GroupID.Data.ArrayMax = 0;
    local_1d8.SenderUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.SenderUserID.Data.ArrayNum = 0;
    local_1d8.SenderUserID.Data.ArrayMax = 0;
    local_1d8.SenderNickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.SenderNickname.Data.ArrayNum = 0;
    local_1d8.SenderNickname.Data.ArrayMax = 0;
    local_1d8.SenderPlayerUID = 0;
    local_1d8.ReceiverUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ReceiverUserID.Data.ArrayNum = 0;
    local_1d8.ReceiverUserID.Data.ArrayMax = 0;
    local_1d8.ReceiverPlayerUID = 0;
    local_1d8.MessageText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.MessageText.Data.ArrayNum = 0;
    local_1d8.MessageText.Data.ArrayMax = 0;
    local_1d8.MetaData.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.MetaData.Data.ArrayNum = 0;
    local_1d8.MetaData.Data.ArrayMax = 0;
    local_1d8.Sequence = 0;
    local_1d8.IsRead = false;
    bVar1 = FDS_ChatMessageInfo::SetChatMessageInfo(&local_1d8,param_1);
    if (bVar1) {
      UDS_ChattingManager::SetDataByChatResponse(this_00,&local_1d8);
    }
    if (local_1d8.MetaData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.MetaData.Data.AllocatorInstance.Data);
    }
    if (local_1d8.MessageText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.MessageText.Data.AllocatorInstance.Data);
    }
    if (local_1d8.ReceiverUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.ReceiverUserID.Data.AllocatorInstance.Data);
    }
    if (local_1d8.SenderNickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.SenderNickname.Data.AllocatorInstance.Data);
    }
    if (local_1d8.SenderUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.SenderUserID.Data.AllocatorInstance.Data);
    }
    FVar3.Data = local_1d8.MessageID.Data.AllocatorInstance.Data;
    if (local_1d8.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.GroupID.Data.AllocatorInstance.Data);
      FVar3.Data = local_1d8.MessageID.Data.AllocatorInstance.Data;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// Request @ 14ba11c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestSendMessage::Request(FDS_V2TIMRequestSendMessage *this)

{
  code *pcVar1;
  V2TIMManager *pVVar2;
  UDS_LogManager *pUVar3;
  longlong *plVar4;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_458 [32];
  uint uVar8;
  wchar_t *pwVar9;
  V2TIMString local_408;
  V2TIMString local_3f8;
  V2TIMString local_3e8;
  V2TIMString local_3d8;
  V2TIMOfflinePushInfo local_3c8;
  V2TIMMessage local_318;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_458;
  pVVar2 = V2TIMManager::GetInstance();
  if (pVVar2 == (V2TIMManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_V2TIMRequestSendMessage::Request",0x24,Yes);
    pwVar9 = L"v2TIMMng is nullptr.";
    uVar8 = 0x20d;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pVVar2 + 0xe8))(pVVar2);
    if (plVar4 != (longlong *)0x0) {
      pwVar9 = L"";
      pcVar1 = *(code **)(*plVar4 + 0x18);
      if ((this->Message).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->Message).Data.AllocatorInstance.Data;
      }
      pTVar5 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                          pwVar7);
      V2TIMString::V2TIMString(&local_408,(char *)pTVar5->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      (*pcVar1)(plVar4,&local_318,&local_408);
      V2TIMString::~V2TIMString(&local_408);
      V2TIMString::V2TIMString(&local_3e8);
      V2TIMString::V2TIMString(&local_3f8);
      if (0 < this->WhisperPlayerUID) {
        pFVar6 = DS_Util::FromInt64((FString *)&local_3d8,this->WhisperPlayerUID);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pTVar5 = StringCast<char8_t,128,wchar_t>
                           ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                            pwVar9);
        V2TIMString::V2TIMString(&local_408,(char *)pTVar5->Ptr);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        V2TIMString::operator=(&local_3e8,&local_408);
        V2TIMString::~V2TIMString(&local_408);
        if ((void *)local_3d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3d8._padding_);
        }
      }
      if (1 < (this->GroupID).Data.ArrayNum) {
        pTVar5 = StringCast<char8_t,128,wchar_t>
                           ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                            (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data);
        V2TIMString::V2TIMString(&local_408,(char *)pTVar5->Ptr);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        V2TIMString::operator=(&local_3f8,&local_408);
        V2TIMString::~V2TIMString(&local_408);
      }
      V2TIMOfflinePushInfo::V2TIMOfflinePushInfo(&local_3c8);
      (**(code **)(*plVar4 + 0x88))(plVar4,&local_3d8,&local_318,&local_3e8);
      V2TIMString::~V2TIMString(&local_3d8);
      V2TIMOfflinePushInfo::~V2TIMOfflinePushInfo(&local_3c8);
      V2TIMString::~V2TIMString(&local_3f8);
      V2TIMString::~V2TIMString(&local_3e8);
      V2TIMMessage::~V2TIMMessage(&local_318);
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_V2TIMRequestSendMessage::Request",0x24,Yes);
    pwVar9 = L"v2TIMMessageMng is nullptr.";
    uVar8 = 0x214;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar8,pwVar9);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// SetMessage @ 14ba1d1b0

void __thiscall
FDS_V2TIMRequestSendMessage::SetMessage
          (FDS_V2TIMRequestSendMessage *this,FString *param_1,FString *param_2)

{
  ::FString::operator=(&this->GroupID,param_1);
  ::FString::operator=(&this->Message,param_2);
  return;
}

// SetMessage @ 14ba1d1f0

void __thiscall
FDS_V2TIMRequestSendMessage::SetMessage
          (FDS_V2TIMRequestSendMessage *this,long64 param_1,FString *param_2)

{
  this->WhisperPlayerUID = param_1;
  ::FString::operator=(&this->Message,param_2);
  return;
}

