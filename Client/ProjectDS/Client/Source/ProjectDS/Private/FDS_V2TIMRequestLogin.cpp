// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetDebugString @ 14b9ef990

FString * __thiscall
FDS_V2TIMRequestLogin::GetDebugString(FDS_V2TIMRequestLogin *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestLogin");
  return __return_storage_ptr__;
}

// OnErrorInternal @ 14b9fedf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestLogin::OnErrorInternal(FDS_V2TIMRequestLogin *this,int param_1,FString *param_2)

{
  UDS_TencentCloudChatManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_TencentCloudChatManager::GetInst();
  if (pUVar1 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)pUVar1;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestLogin::OnErrorInternal",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x41,L"tencentChatManager is nullptr.");
      if ((UDS_TencentCloudChatManager *)local_138._padding_ != (UDS_TencentCloudChatManager *)0x0)
      {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((char)pUVar1->_padding_ != '\x01') {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::OnErrorLogin",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x1dd,L"[TCC] Failed Login.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    if (pUVar1->ChatState == LoggingIn) {
      pUVar1->ChatState = LoginFailed;
    }
  }
  return;
}

// OnSuccessInternal @ 14ba07640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_V2TIMRequestLogin::OnSuccessInternal(FDS_V2TIMRequestLogin *this)

{
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestLogin::OnSuccessInternal",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x25,L"tencentChatManager is nullptr.");
      if ((UDS_TencentCloudChatManager *)local_138._padding_ != (UDS_TencentCloudChatManager *)0x0)
      {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::OnSuccessLogin",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x1d0,L"[TCC] Success Login.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    if (this_00->ChatState != LoggedIn) {
      this_00->ChatState = LoggedIn;
    }
    UDS_TencentCloudChatManager::CreateListeners(this_00);
    UDS_TencentCloudChatManager::AddListeners(this_00);
    UDS_TencentCloudChatManager::Request_SetSelfInfo(this_00);
  }
  return;
}

// Request @ 14ba11470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestLogin::Request(FDS_V2TIMRequestLogin *this)

{
  bool bVar1;
  V2TIMManager *pVVar2;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined1 auStackY_198 [32];
  V2TIMString local_168;
  V2TIMString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pVVar2 = V2TIMManager::GetInstance();
  if (pVVar2 == (V2TIMManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestLogin::Request",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x14,L"v2TIMMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    pFVar4 = DS_Util::FromInt64(&local_148,this->PlayerUID);
    pwVar7 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pTVar5 = StringCast<char8_t,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,pwVar6)
    ;
    V2TIMString::V2TIMString(&local_158,(char *)pTVar5->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if ((this->TencentUserSig).Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)(this->TencentUserSig).Data.AllocatorInstance.Data;
    }
    pTVar5 = StringCast<char8_t,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,pwVar7)
    ;
    V2TIMString::V2TIMString(&local_168,(char *)pTVar5->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    plVar8 = &this->_padding_;
    if (this == (FDS_V2TIMRequestLogin *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)((longlong)*pVVar2 + 0x38))(pVVar2,&local_158,&local_168,plVar8);
    V2TIMString::~V2TIMString(&local_168);
    V2TIMString::~V2TIMString(&local_158);
    bVar1 = true;
  }
  return bVar1;
}

// SetLoginInfo @ 14ba1d050

void __thiscall
FDS_V2TIMRequestLogin::SetLoginInfo(FDS_V2TIMRequestLogin *this,long64 param_1,FString *param_2)

{
  this->PlayerUID = param_1;
  ::FString::operator=(&this->TencentUserSig,param_2);
  return;
}

