// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetDebugString @ 14b9efa50

FString * __thiscall
FDS_V2TIMRequestQuitGroup::GetDebugString
          (FDS_V2TIMRequestQuitGroup *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestQuitGroup");
  return __return_storage_ptr__;
}

// OnErrorInternal @ 14b9ff0d0

void __thiscall
FDS_V2TIMRequestQuitGroup::OnErrorInternal
          (FDS_V2TIMRequestQuitGroup *this,int param_1,FString *param_2)

{
  if (param_1 == 0x2719) {
    UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopupForLeave(&this->GroupID);
    return;
  }
  return;
}

// OnSuccessInternal @ 14ba07c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_V2TIMRequestQuitGroup::OnSuccessInternal(FDS_V2TIMRequestQuitGroup *this)

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
                (&local_138,"FDS_V2TIMRequestQuitGroup::OnSuccessInternal",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x532,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    UDS_ChattingManager::OnLeaveGroupChatRoom(this_00,&this->GroupID);
  }
  return;
}

// Request @ 14ba11b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestQuitGroup::Request(FDS_V2TIMRequestQuitGroup *this)

{
  bool bVar1;
  V2TIMManager *pVVar2;
  UDS_LogManager *pUVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  undefined1 auStackY_178 [32];
  V2TIMString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pVVar2 = V2TIMManager::GetInstance();
  if (pVVar2 == (V2TIMManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestQuitGroup::Request",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x522,L"v2TIMMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    if ((this->GroupID).Data.ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
    }
    pTVar4 = StringCast<char8_t,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,pwVar5)
    ;
    V2TIMString::V2TIMString(&local_148,(char *)pTVar4->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    plVar6 = &this->_padding_;
    if (this == (FDS_V2TIMRequestQuitGroup *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)((longlong)*pVVar2 + 0xa8))(pVVar2,&local_148,plVar6);
    V2TIMString::~V2TIMString(&local_148);
    bVar1 = true;
  }
  return bVar1;
}

// SetGroupID @ 14ba1c980

void __thiscall
FDS_V2TIMRequestQuitGroup::SetGroupID(FDS_V2TIMRequestQuitGroup *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

