// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetDebugString @ 14b9ef750

FString * __thiscall
FDS_V2TIMRequestCreateGroup::GetDebugString
          (FDS_V2TIMRequestCreateGroup *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestCreateGroup");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba05610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestCreateGroup::OnSuccessInternal
          (FDS_V2TIMRequestCreateGroup *this,V2TIMString *param_1)

{
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar1;
  char *pcVar2;
  undefined1 auStackY_178 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestCreateGroup::OnSuccessInternal",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x3f1,L"tencentChatManager is nullptr.")
    ;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    if ((char)this_00->_padding_ == '\x01') {
      return;
    }
    pcVar2 = V2TIMString::CString(param_1);
    DS_Util::ConvertUTF8ToFString(&local_148,pcVar2);
    UDS_TencentCloudChatManager::Request_GetGroupInfo(this_00,&local_148,true);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// Request @ 14ba0fd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestCreateGroup::Request(FDS_V2TIMRequestCreateGroup *this)

{
  bool bVar1;
  int iVar2;
  V2TIMManager *pVVar3;
  UDS_LogManager *pUVar4;
  longlong *plVar5;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar6;
  ForAnyElementType FVar7;
  longlong *plVar8;
  undefined1 auStackY_268 [32];
  uint uVar9;
  wchar_t *pwVar10;
  V2TIMString local_238;
  FString local_228;
  TXV2TIMCreateGroupMemberInfoVector local_218;
  V2TIMGroupInfo local_208;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pVVar3 = V2TIMManager::GetInstance();
  if (pVVar3 == (V2TIMManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_V2TIMRequestCreateGroup::Request",0x24,Yes);
    pwVar10 = L"v2TIMMng is nullptr.";
    uVar9 = 0x3d2;
  }
  else {
    plVar5 = (longlong *)(**(code **)((longlong)*pVVar3 + 0xf0))(pVVar3);
    if (plVar5 != (longlong *)0x0) {
      V2TIMGroupInfo::V2TIMGroupInfo(&local_208);
      ::FString::FString(&local_228,L"Meeting");
      pwVar10 = L"";
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_228.Data.ArrayNum != 0) {
        FVar7.Data = local_228.Data.AllocatorInstance.Data;
      }
      pTVar6 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                          (wchar_t *)FVar7.Data);
      V2TIMString::V2TIMString(&local_238,(char *)pTVar6->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      V2TIMString::operator=(&local_208.groupType,&local_238);
      V2TIMString::~V2TIMString(&local_238);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if ((this->GroupName).Data.ArrayNum != 0) {
        pwVar10 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
      }
      pTVar6 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                          pwVar10);
      V2TIMString::V2TIMString(&local_238,(char *)pTVar6->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      V2TIMString::operator=(&local_208.groupName,&local_238);
      V2TIMString::~V2TIMString(&local_238);
      local_208.memberMaxCount = this->MaxMemberCount;
      iVar2 = this->GroupIconID;
      local_208.groupAddOpt = V2TIM_GROUP_ADD_ANY;
      ::FString::FString((FString *)&local_238,L"GroupIconID");
      DS_ChatHelper::SetCustomInfoInt32(&local_208.customInfo,(FString *)&local_238,iVar2);
      if ((void *)local_238._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_238._padding_);
      }
      bVar1 = this->bIsInviteGranted;
      ::FString::FString((FString *)&local_238,L"InviteGranted");
      DS_ChatHelper::SetCustomInfoInt32
                (&local_208.customInfo,(FString *)&local_238,(uint)(bVar1 == true));
      if ((void *)local_238._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_238._padding_);
      }
      TXV2TIMCreateGroupMemberInfoVector::TXV2TIMCreateGroupMemberInfoVector(&local_218);
      plVar8 = &this->_padding_;
      if (this == (FDS_V2TIMRequestCreateGroup *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 8))(plVar5,&local_208,&local_218,plVar8);
      TXV2TIMCreateGroupMemberInfoVector::~TXV2TIMCreateGroupMemberInfoVector(&local_218);
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
              (&local_148,"FDS_V2TIMRequestCreateGroup::Request",0x24,Yes);
    pwVar10 = L"v2TIMGroupMng is nullptr.";
    uVar9 = 0x3d9;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar9,pwVar10);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// SetGroupInfo @ 14ba1c9a0

void __thiscall
FDS_V2TIMRequestCreateGroup::SetGroupInfo
          (FDS_V2TIMRequestCreateGroup *this,FString *param_1,int param_2,bool param_3,int param_4)

{
  ::FString::operator=(&this->GroupName,param_1);
  this->GroupIconID = param_2;
  this->bIsInviteGranted = param_3;
  this->MaxMemberCount = param_4;
  return;
}

