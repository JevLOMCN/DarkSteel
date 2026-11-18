// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetDebugString @ 14b9efab0

FString * __thiscall
FDS_V2TIMRequestSetCustomInfo::GetDebugString
          (FDS_V2TIMRequestSetCustomInfo *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestSetCustomInfo");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba07f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestSetCustomInfo::OnSuccessInternal(FDS_V2TIMRequestSetCustomInfo *this)

{
  bool bVar1;
  UDS_ChattingManager *pUVar2;
  UDS_LogManager *pUVar3;
  UDS_ChatEvent *pUVar4;
  undefined1 auStackY_178 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = UDS_ChattingManager::GetInst();
  if (pUVar2 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestSetCustomInfo::OnSuccessInternal",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xde,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((char)pUVar2->_padding_ != '\x01') {
    pUVar4 = UDS_ChatEvent::GetEvent();
    if (pUVar4 != (UDS_ChatEvent *)0x0) {
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      FDS_EventDelegate<FString_const_&>::Broadcast(&pUVar4->OnRefreshChatRoom,&local_148);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->OnUpdateChattingTabs);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->OnUpdateChattingTabs).Delegate);
      }
    }
  }
  return;
}

// Request @ 14ba11fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestSetCustomInfo::Request(FDS_V2TIMRequestSetCustomInfo *this)

{
  bool bVar1;
  V2TIMManager *pVVar2;
  UDS_LogManager *pUVar3;
  longlong *plVar4;
  undefined1 auStackY_1f8 [32];
  FString local_1c8;
  V2TIMUserFullInfo local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pVVar2 = V2TIMManager::GetInstance();
  if (pVVar2 == (V2TIMManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestSetCustomInfo::Request",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xca,L"v2TIMMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    V2TIMUserFullInfo::V2TIMUserFullInfo(&local_1b8);
    local_1b8.modifyFlag = 0xb;
    ::FString::FString(&local_1c8,L"GroupIDs");
    DS_ChatHelper::SetCustomInfoString(&local_1b8.customInfo,&local_1c8,&this->CustomInfoString);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    plVar4 = &this->_padding_;
    if (this == (FDS_V2TIMRequestSetCustomInfo *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)((longlong)*pVVar2 + 0xc0))(pVVar2,&local_1b8,plVar4);
    V2TIMUserFullInfo::~V2TIMUserFullInfo(&local_1b8);
    bVar1 = true;
  }
  return bVar1;
}

// SetCustomInfos @ 14ba1b8d0

void __thiscall
FDS_V2TIMRequestSetCustomInfo::SetCustomInfos
          (FDS_V2TIMRequestSetCustomInfo *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  FString local_38;
  
  iVar2 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar2 * 0x10;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar3 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar4) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L" ",1);
    }
    iVar6 = *(int *)(pFVar5 + 8) + -1;
    if (*(int *)(pFVar5 + 8) == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar5,iVar6);
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar1 = &this->CustomInfoString;
  if (pFVar1 != &local_38) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->CustomInfoString).Data.ArrayNum = local_38.Data.ArrayNum;
    (this->CustomInfoString).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

