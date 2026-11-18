// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetDebugString @ 14b9ef9c0

FString * __thiscall
FDS_V2TIMRequestLogout::GetDebugString(FDS_V2TIMRequestLogout *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestLogout");
  return __return_storage_ptr__;
}

// OnErrorInternal @ 14b9fef60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestLogout::OnErrorInternal(FDS_V2TIMRequestLogout *this,int param_1,FString *param_2)

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
                (&local_138,"FDS_V2TIMRequestLogout::OnErrorInternal",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x7d,L"tencentChatManager is nullptr.");
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
                (&local_138,"UDS_TencentCloudChatManager::OnErrorLogOut",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x204,L"[TCC] Failed Logout.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    if (pUVar1->ChatState == LoggingOut) {
      pUVar1->ChatState = LoggedIn;
    }
  }
  return;
}

// OnSuccessInternal @ 14ba077d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_V2TIMRequestLogout::OnSuccessInternal(FDS_V2TIMRequestLogout *this)

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
                (&local_138,"FDS_V2TIMRequestLogout::OnSuccessInternal",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x6c,L"tencentChatManager is nullptr.");
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
                (&local_138,"UDS_TencentCloudChatManager::OnSuccessLogOut",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x1fd,L"[TCC] Success Logout.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    UDS_TencentCloudChatManager::ShutdownTencentCloudChat(this_00);
  }
  return;
}

// Request @ 14ba11630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestLogout::Request(FDS_V2TIMRequestLogout *this)

{
  bool bVar1;
  V2TIMManager *pVVar2;
  UDS_LogManager *pUVar3;
  undefined1 *puVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pVVar2 = V2TIMManager::GetInstance();
  if (pVVar2 == (V2TIMManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestLogout::Request",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x5e,L"v2TIMMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    puVar4 = &this->field_0x30;
    if (this == (FDS_V2TIMRequestLogout *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    (**(code **)((longlong)*pVVar2 + 0x40))(pVVar2,puVar4);
    bVar1 = true;
  }
  return bVar1;
}

