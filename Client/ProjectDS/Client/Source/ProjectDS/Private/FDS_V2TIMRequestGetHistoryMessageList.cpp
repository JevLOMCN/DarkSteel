// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetDebugString @ 14b9ef8a0

FString * __thiscall
FDS_V2TIMRequestGetHistoryMessageList::GetDebugString
          (FDS_V2TIMRequestGetHistoryMessageList *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestGetHistoryMessageList");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba06890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestGetHistoryMessageList::OnSuccessInternal
          (FDS_V2TIMRequestGetHistoryMessageList *this,TXV2TIMMessageVector *param_1)

{
  bool bVar1;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar2;
  __uint64 _Var3;
  V2TIMMessage *pVVar4;
  __uint64 _Var5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [256];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_58 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158,
                 "FDS_V2TIMRequestGetHistoryMessageList::OnSuccessInternal",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_50,0x279,L"chattingManager == nullptr");
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    _Var5 = 0;
    _Var3 = TXV2TIMMessageVector::Size(param_1);
    uVar7 = _Var5;
    if (_Var3 != 0) {
      do {
        pVVar4 = TXV2TIMMessageVector::operator[](param_1,_Var5);
        local_158._136_8_ = 0.0;
        local_158._96_8_ = 0;
        local_158._104_8_ = (FScriptContainerElement *)0x0;
        local_158._0_4_ = 0;
        local_158._8_8_ = (FScriptContainerElement *)0x0;
        local_158._16_8_ = 0;
        local_158._24_8_ = (FScriptContainerElement *)0x0;
        local_158._32_8_ = 0;
        local_158._40_8_ = (FScriptContainerElement *)0x0;
        local_158._48_8_ = 0;
        local_158._56_8_ = (FScriptContainerElement *)0x0;
        local_158._64_8_ = 0;
        local_158._72_8_ = 0;
        local_158._80_8_ = (FScriptContainerElement *)0x0;
        local_158._88_8_ = 0;
        local_158._112_8_ = 0;
        local_158._120_8_ = (FScriptContainerElement *)0x0;
        local_158._128_8_ = 0;
        local_158._144_8_ = 0;
        local_158[0x98] = false;
        bVar1 = FDS_ChatMessageInfo::SetChatMessageInfo((FDS_ChatMessageInfo *)local_158,pVVar4);
        if (bVar1) {
          UDS_ChattingManager::SetDataByChatResponse(this_00,(FDS_ChatMessageInfo *)local_158);
        }
        if ((FScriptContainerElement *)local_158._120_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._120_8_);
        }
        if ((FScriptContainerElement *)local_158._104_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._104_8_);
        }
        if ((FScriptContainerElement *)local_158._80_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._80_8_);
        }
        if ((FScriptContainerElement *)local_158._56_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._56_8_);
        }
        if ((FScriptContainerElement *)local_158._40_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._40_8_);
        }
        if ((FScriptContainerElement *)local_158._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._24_8_);
        }
        if ((FScriptContainerElement *)local_158._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._8_8_);
        }
        uVar6 = (int)uVar7 + 1;
        _Var5 = (__uint64)(int)uVar6;
        _Var3 = TXV2TIMMessageVector::Size(param_1);
        uVar7 = (ulonglong)uVar6;
      } while (_Var5 < _Var3);
    }
  }
  return;
}

// Request @ 14ba10ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_V2TIMRequestGetHistoryMessageList::Request(FDS_V2TIMRequestGetHistoryMessageList *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar5;
  longlong *plVar6;
  undefined1 auStackY_1e8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  V2TIMString local_1b8;
  FString local_1a8;
  V2TIMMessageListGetOption local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestGetHistoryMessageList::Request",0x2e,Yes);
    pwVar8 = L"v2TIMMng is nullptr.";
    uVar7 = 599;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      V2TIMMessageListGetOption::V2TIMMessageListGetOption(&local_198);
      local_198.count = 100;
      local_198.getType = V2TIM_GET_CLOUD_OLDER_MSG;
      local_198.lastMsg = (V2TIMMessage *)0x0;
      if (this->WhisperPlayerUID < 1) {
        if ((this->GroupID).Data.ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
        }
        pTVar5 = StringCast<char8_t,128,wchar_t>
                           ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                            pwVar8);
        V2TIMString::V2TIMString(&local_1b8,(char *)pTVar5->Ptr);
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        V2TIMString::operator=(&local_198.groupID,&local_1b8);
        V2TIMString::~V2TIMString(&local_1b8);
      }
      else {
        pFVar4 = DS_Util::FromInt64(&local_1a8,this->WhisperPlayerUID);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        pTVar5 = StringCast<char8_t,128,wchar_t>
                           ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                            pwVar8);
        V2TIMString::V2TIMString(&local_1b8,(char *)pTVar5->Ptr);
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        V2TIMString::operator=(&local_198.userID,&local_1b8);
        V2TIMString::~V2TIMString(&local_1b8);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      plVar6 = &this->_padding_;
      if (this == (FDS_V2TIMRequestGetHistoryMessageList *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0xa8))(plVar3,&local_198,plVar6);
      V2TIMMessageListGetOption::~V2TIMMessageListGetOption(&local_198);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestGetHistoryMessageList::Request",0x2e,Yes);
    pwVar8 = L"v2TIMMessageMng is nullptr.";
    uVar7 = 0x25e;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetGroupID @ 14ba1c940

void __thiscall
FDS_V2TIMRequestGetHistoryMessageList::SetGroupID
          (FDS_V2TIMRequestGetHistoryMessageList *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

// SetWhisperPlayerUID @ 14ba1d4f0

void __thiscall
FDS_V2TIMRequestGetHistoryMessageList::SetWhisperPlayerUID
          (FDS_V2TIMRequestGetHistoryMessageList *this,long64 param_1)

{
  this->WhisperPlayerUID = param_1;
  return;
}

