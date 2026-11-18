// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetDebugString @ 14b9ef780

FString * __thiscall
FDS_V2TIMRequestDeleteConversation::GetDebugString
          (FDS_V2TIMRequestDeleteConversation *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestDeleteConversation");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba05720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestDeleteConversation::OnSuccessInternal(FDS_V2TIMRequestDeleteConversation *this)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
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
                (&local_138,"FDS_V2TIMRequestDeleteConversation::OnSuccessInternal",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x1f1,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    UDS_ChattingManager::OnDeleteConversation(this_00,&this->ConversationID);
  }
  return;
}

// Request @ 14ba10070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_V2TIMRequestDeleteConversation::Request(FDS_V2TIMRequestDeleteConversation *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  longlong *plVar5;
  undefined1 auStackY_178 [32];
  uint uVar6;
  wchar_t *pwVar7;
  V2TIMString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestDeleteConversation::Request",0x2b,Yes);
    pwVar7 = L"v2TIMMng is nullptr.";
    uVar6 = 0x1da;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      if ((this->ConversationID).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->ConversationID).Data.AllocatorInstance.Data;
      }
      pTVar4 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                          pwVar7);
      V2TIMString::V2TIMString(&local_148,(char *)pTVar4->Ptr);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      plVar5 = &this->_padding_;
      if (this == (FDS_V2TIMRequestDeleteConversation *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_148,plVar5);
      V2TIMString::~V2TIMString(&local_148);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestDeleteConversation::Request",0x2b,Yes);
    pwVar7 = L"v2TIMConversationMng is nullptr.";
    uVar6 = 0x1e1;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetConversationID @ 14ba1b1e0

void __thiscall
FDS_V2TIMRequestDeleteConversation::SetConversationID
          (FDS_V2TIMRequestDeleteConversation *this,FString *param_1)

{
  ::FString::operator=(&this->ConversationID,param_1);
  return;
}

