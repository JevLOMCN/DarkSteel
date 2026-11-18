// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// GetDebugString @ 14b9efb40

FString * __thiscall
FDS_V2TIMRequestTransferGroupOwner::GetDebugString
          (FDS_V2TIMRequestTransferGroupOwner *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestTransferGroupOwner");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba08310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestTransferGroupOwner::OnSuccessInternal(FDS_V2TIMRequestTransferGroupOwner *this)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  UDS_TencentCloudChatManager *this_01;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestTransferGroupOwner::OnSuccessInternal",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x5d6,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    this_01 = UDS_TencentCloudChatManager::GetInst();
    if (this_01 == (UDS_TencentCloudChatManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)this_01;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_V2TIMRequestTransferGroupOwner::OnSuccessInternal",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Warning,local_138.Ptr,0x5e2,L"tencentChatManager is nullptr.");
        if ((UDS_TencentCloudChatManager *)local_138._padding_ != (UDS_TencentCloudChatManager *)0x0
           ) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      UDS_ChattingManager::OnChangeGroupChatRoomOwner(this_00,&this->GroupID,this->PlayerUID);
      if (this->bLeaveAfter == true) {
        UDS_TencentCloudChatManager::Request_LeaveGroup(this_01,&this->GroupID);
      }
    }
  }
  return;
}

// Request @ 14ba125e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_V2TIMRequestTransferGroupOwner::Request(FDS_V2TIMRequestTransferGroupOwner *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  undefined1 auStackY_198 [32];
  uint uVar8;
  wchar_t *pwVar9;
  V2TIMString local_168;
  V2TIMString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestTransferGroupOwner::Request",0x2b,Yes);
    pwVar9 = L"v2TIMMng is nullptr.";
    uVar8 = 0x5be;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      pwVar9 = L"";
      if ((this->GroupID).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
      }
      pTVar4 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                          pwVar6);
      V2TIMString::V2TIMString(&local_158,(char *)pTVar4->Ptr);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      pFVar5 = DS_Util::FromInt64(&local_148,this->PlayerUID);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pTVar4 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                          pwVar9);
      V2TIMString::V2TIMString(&local_168,(char *)pTVar4->Ptr);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      plVar7 = &this->_padding_;
      if (this == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0xc0))(plVar3,&local_158,&local_168,plVar7);
      V2TIMString::~V2TIMString(&local_168);
      V2TIMString::~V2TIMString(&local_158);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestTransferGroupOwner::Request",0x2b,Yes);
    pwVar9 = L"v2TIMGroupMng is nullptr.";
    uVar8 = 0x5c5;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar8,pwVar9);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetGroupID @ 14ba1c990

void __thiscall
FDS_V2TIMRequestTransferGroupOwner::SetGroupID
          (FDS_V2TIMRequestTransferGroupOwner *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

// SetLeaveAfter @ 14ba1cfd0

void __thiscall
FDS_V2TIMRequestTransferGroupOwner::SetLeaveAfter
          (FDS_V2TIMRequestTransferGroupOwner *this,bool param_1)

{
  this->bLeaveAfter = param_1;
  return;
}

// SetPlayerUID @ 14ba1d400

void __thiscall
FDS_V2TIMRequestTransferGroupOwner::SetPlayerUID
          (FDS_V2TIMRequestTransferGroupOwner *this,long64 param_1)

{
  this->PlayerUID = param_1;
  return;
}

