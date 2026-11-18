// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// ProcessError @ 14bc026e0

bool __cdecl FDS_TencentUserSigService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveTencentUserSigResponse @ 14bc0b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_TencentUserSigService::ReceiveTencentUserSigResponse(ServerMessages *param_1)

{
  uint uVar1;
  UDS_TencentCloudChatManager *this;
  UDS_LogManager *pUVar2;
  char *pcVar3;
  TencentUserSigResponseDefaultTypeInternal *pTVar4;
  undefined1 auStackY_188 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this = UDS_TencentCloudChatManager::GetInst();
  if (this == (UDS_TencentCloudChatManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = (longlong)this;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_TencentUserSigService::ReceiveTencentUserSigResponse",0x38,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x14,L"tencentChatManager is nullptr.");
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 8) {
      pTVar4 = *(TencentUserSigResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pTVar4 = &server_msg::_TencentUserSigResponse_default_instance_;
    }
    pcVar3 = (char *)(*(ulonglong *)&((Message *)((longlong)pTVar4 + 0x10))->field_0x8 &
                     0xfffffffffffffffc);
    if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
      pcVar3 = *(char **)pcVar3;
    }
    DS_Util::ConvertUTF8ToFString(&local_148,pcVar3);
    uVar1 = *(uint *)((longlong)pTVar4 + 0x20);
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_TencentUserSigService::ReceiveTencentUserSigResponse",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,local_138.Ptr,0x1c,L"[TCC] UserSig: %s, SDKAppID: %d");
      if ((UDS_TencentCloudChatManager *)local_138._padding_ != (UDS_TencentCloudChatManager *)0x0)
      {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    UDS_TencentCloudChatManager::OnReceive_TencentUserSig(this,&local_148,uVar1);
  }
  if ((UDS_TencentCloudChatManager *)local_148.Data.AllocatorInstance.Data !=
      (UDS_TencentCloudChatManager *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

