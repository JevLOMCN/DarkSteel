// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetDebugString @ 14b9efae0

FString * __thiscall
FDS_V2TIMRequestSetGroupInfo::GetDebugString
          (FDS_V2TIMRequestSetGroupInfo *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestSetGroupInfo");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba08040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_V2TIMRequestSetGroupInfo::OnSuccessInternal(FDS_V2TIMRequestSetGroupInfo *this)

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
                (&local_138,"FDS_V2TIMRequestSetGroupInfo::OnSuccessInternal",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x48b,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    UDS_ChattingManager::OnChangeGroupChatRoomInfo
              (this_00,&this->GroupID,&this->GroupName,this->GroupIconID,this->bIsInviteGranted);
  }
  return;
}

// Request @ 14ba12110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestSetGroupInfo::Request(FDS_V2TIMRequestSetGroupInfo *this)

{
  bool bVar1;
  int iVar2;
  V2TIMManager *pVVar3;
  UDS_LogManager *pUVar4;
  longlong *plVar5;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined1 auStackY_248 [32];
  uint uVar9;
  wchar_t *pwVar10;
  V2TIMString local_218;
  V2TIMGroupInfo local_208;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pVVar3 = V2TIMManager::GetInstance();
  if (pVVar3 == (V2TIMManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_V2TIMRequestSetGroupInfo::Request",0x25,Yes);
    pwVar10 = L"v2TIMMng is nullptr.";
    uVar9 = 0x46f;
  }
  else {
    plVar5 = (longlong *)(**(code **)((longlong)*pVVar3 + 0xf0))(pVVar3);
    if (plVar5 != (longlong *)0x0) {
      V2TIMGroupInfo::V2TIMGroupInfo(&local_208);
      pwVar10 = L"";
      if ((this->GroupID).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
      }
      pTVar6 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                          pwVar7);
      V2TIMString::V2TIMString(&local_218,(char *)pTVar6->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      V2TIMString::operator=(&local_208.groupID,&local_218);
      V2TIMString::~V2TIMString(&local_218);
      if ((this->GroupName).Data.ArrayNum != 0) {
        pwVar10 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
      }
      pTVar6 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                          pwVar10);
      V2TIMString::V2TIMString(&local_218,(char *)pTVar6->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      V2TIMString::operator=(&local_208.groupName,&local_218);
      V2TIMString::~V2TIMString(&local_218);
      iVar2 = this->GroupIconID;
      ::FString::FString((FString *)&local_218,L"GroupIconID");
      DS_ChatHelper::SetCustomInfoInt32(&local_208.customInfo,(FString *)&local_218,iVar2);
      if ((void *)local_218._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_218._padding_);
      }
      bVar1 = this->bIsInviteGranted;
      ::FString::FString((FString *)&local_218,L"InviteGranted");
      DS_ChatHelper::SetCustomInfoInt32
                (&local_208.customInfo,(FString *)&local_218,(uint)(bVar1 == true));
      if ((void *)local_218._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_218._padding_);
      }
      local_208.modifyFlag = 0x201;
      plVar8 = &this->_padding_;
      if (this == (FDS_V2TIMRequestSetGroupInfo *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_208,plVar8);
      V2TIMGroupInfo::~V2TIMGroupInfo(&local_208);
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_V2TIMRequestSetGroupInfo::Request",0x25,Yes);
    pwVar10 = L"v2TIMGroupMng is nullptr.";
    uVar9 = 0x476;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar9,pwVar10);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// SetGroupInfo @ 14ba1c9f0

void __thiscall
FDS_V2TIMRequestSetGroupInfo::SetGroupInfo
          (FDS_V2TIMRequestSetGroupInfo *this,FString *param_1,FString *param_2,int param_3,
          bool param_4)

{
  ::FString::operator=(&this->GroupID,param_1);
  ::FString::operator=(&this->GroupName,param_2);
  this->GroupIconID = param_3;
  this->bIsInviteGranted = param_4;
  return;
}

