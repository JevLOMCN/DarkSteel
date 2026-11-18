// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetDebugString @ 14b9efb10

FString * __thiscall
FDS_V2TIMRequestSetSelfInfo::GetDebugString
          (FDS_V2TIMRequestSetSelfInfo *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestSetSelfInfo");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba08130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_V2TIMRequestSetSelfInfo::OnSuccessInternal(FDS_V2TIMRequestSetSelfInfo *this)

{
  UDS_LogManager *pUVar1;
  UDS_TencentCloudChatManager *this_00;
  undefined1 auStackY_178 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TSharedPtr<FDS_V2TIMRequestGetConversationList,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestSetSelfInfo::OnSuccessInternal",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0xa5,L"[TCC] Success SetSelfInfo.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestSetSelfInfo::OnSuccessInternal",0x2e,Yes);
    pwVar3 = L"tencentChatManager is nullptr.";
    uVar2 = 0xaa;
  }
  else {
    if ((char)this_00->_padding_ == '\x01') {
      return;
    }
    UDS_TencentCloudChatManager::Request_UserInfoList(this_00,this->PlayerUID);
    if (this_00->ChatState == LoggedIn) {
      UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetConversationList>
                (this_00,&local_148);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::Request_ConversationList",0x35,Yes);
    pwVar3 = L"[TCC] IsLoggedIn() == false";
    uVar2 = 0x253;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar2,pwVar3);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Request @ 14ba123c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestSetSelfInfo::Request(FDS_V2TIMRequestSetSelfInfo *this)

{
  bool bVar1;
  V2TIMManager *pVVar2;
  UDS_LogManager *pUVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  undefined1 auStackY_208 [32];
  V2TIMString local_1d8;
  FString local_1c8;
  undefined1 local_1b8 [40];
  V2TIMString local_190 [4];
  uint local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pVVar2 = V2TIMManager::GetInstance();
  if (pVVar2 == (V2TIMManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestSetSelfInfo::Request",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x94,L"v2TIMMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    ::FString::PrintfImpl(&local_1c8,L"%s%d %s%d");
    V2TIMUserFullInfo::V2TIMUserFullInfo((V2TIMUserFullInfo *)local_1b8);
    if ((this->Nickname).Data.ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(this->Nickname).Data.AllocatorInstance.Data;
    }
    pTVar4 = StringCast<char8_t,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,pwVar5)
    ;
    V2TIMString::V2TIMString(&local_1d8,(char *)pTVar4->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    V2TIMString::operator=((V2TIMString *)(local_1b8 + 0x18),&local_1d8);
    V2TIMString::~V2TIMString(&local_1d8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      FVar6.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    pTVar4 = StringCast<char8_t,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                        (wchar_t *)FVar6.Data);
    V2TIMString::V2TIMString(&local_1d8,(char *)pTVar4->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    V2TIMString::operator=(local_190,&local_1d8);
    V2TIMString::~V2TIMString(&local_1d8);
    local_148 = 3;
    plVar7 = &this->_padding_;
    if (this == (FDS_V2TIMRequestSetSelfInfo *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    (**(code **)((longlong)*pVVar2 + 0xc0))(pVVar2,local_1b8,plVar7);
    V2TIMUserFullInfo::~V2TIMUserFullInfo((V2TIMUserFullInfo *)local_1b8);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  return bVar1;
}

// SetSelfInfo @ 14ba1d410

void __thiscall
FDS_V2TIMRequestSetSelfInfo::SetSelfInfo
          (FDS_V2TIMRequestSetSelfInfo *this,long64 param_1,FString *param_2,int param_3,int param_4
          )

{
  this->PlayerUID = param_1;
  ::FString::operator=(&this->Nickname,param_2);
  this->CharLevel = param_4;
  this->CharID = param_3;
  return;
}

