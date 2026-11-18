// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// operator= @ 14b9d9d30

FDS_ChatConversation * __thiscall
FDS_ChatConversation::operator=(FDS_ChatConversation *this,FDS_ChatConversation *param_1)

{
  ::FString::operator=(&this->ConversationID,&param_1->ConversationID);
  ::FString::operator=(&this->GroupID,&param_1->GroupID);
  ::FString::operator=(&this->WhisperUserID,&param_1->WhisperUserID);
  this->WhisperPlayerUID = param_1->WhisperPlayerUID;
  ::FString::operator=(&this->ShowName,&param_1->ShowName);
  this->OrderKey = param_1->OrderKey;
  this->UnreadCount = param_1->UnreadCount;
  this->bIsBookmark = param_1->bIsBookmark;
  return this;
}

// SetChatConversation @ 14ba1a3d0

void __thiscall
FDS_ChatConversation::SetChatConversation(FDS_ChatConversation *this,FDS_ChatConversation *param_1)

{
  ::FString::operator=(&this->ConversationID,&param_1->ConversationID);
  ::FString::operator=(&this->GroupID,&param_1->GroupID);
  ::FString::operator=(&this->WhisperUserID,&param_1->WhisperUserID);
  this->WhisperPlayerUID = param_1->WhisperPlayerUID;
  ::FString::operator=(&this->ShowName,&param_1->ShowName);
  this->OrderKey = param_1->OrderKey;
  this->UnreadCount = param_1->UnreadCount;
  this->bIsBookmark = param_1->bIsBookmark;
  return;
}

// SetChatConversation @ 14ba1a440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_ChatConversation::SetChatConversation(FDS_ChatConversation *this,V2TIMConversation *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  char *pcVar3;
  FDS_ChatConversation *pFVar4;
  FString *pFVar5;
  longlong lVar6;
  __uint64 _Var7;
  __uint64 *p_Var8;
  UDS_LogManager *pUVar9;
  wchar_t *_Str;
  TXuint64_tVector *this_00;
  uint uVar10;
  ulonglong uVar12;
  undefined1 auStackY_1e8 [32];
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  ulonglong uVar11;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pcVar3 = V2TIMString::CString(&param_1->conversationID);
  pFVar4 = (FDS_ChatConversation *)DS_Util::ConvertUTF8ToFString(&local_178,pcVar3);
  uVar11 = 0;
  if (this != pFVar4) {
    pFVar2 = (this->ConversationID).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->ConversationID).Data.AllocatorInstance.Data =
         (pFVar4->ConversationID).Data.AllocatorInstance.Data;
    (pFVar4->ConversationID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ConversationID).Data.ArrayNum = (pFVar4->ConversationID).Data.ArrayNum;
    (this->ConversationID).Data.ArrayMax = (pFVar4->ConversationID).Data.ArrayMax;
    (pFVar4->ConversationID).Data.ArrayNum = 0;
    (pFVar4->ConversationID).Data.ArrayMax = 0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pcVar3 = V2TIMString::CString(&param_1->groupID);
  pFVar5 = DS_Util::ConvertUTF8ToFString(&local_178,pcVar3);
  pFVar1 = &this->GroupID;
  if (pFVar1 != pFVar5) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GroupID).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->GroupID).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pcVar3 = V2TIMString::CString(&param_1->userID);
  pFVar5 = DS_Util::ConvertUTF8ToFString(&local_178,pcVar3);
  pFVar1 = &this->WhisperUserID;
  if (pFVar1 != pFVar5) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WhisperUserID).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->WhisperUserID).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if ((this->WhisperUserID).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  lVar6 = _wtoi64(_Str);
  this->WhisperPlayerUID = lVar6;
  pcVar3 = V2TIMString::CString(&param_1->showName);
  pFVar5 = DS_Util::ConvertUTF8ToFString(&local_178,pcVar3);
  pFVar1 = &this->ShowName;
  if (pFVar1 != pFVar5) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ShowName).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->ShowName).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  this->OrderKey = param_1->orderKey;
  this_00 = &param_1->markList;
  this->UnreadCount = param_1->unreadCount;
  this->bIsBookmark = false;
  _Var7 = TXuint64_tVector::Size(this_00);
  uVar12 = uVar11;
  if (_Var7 != 0) {
    do {
      p_Var8 = TXuint64_tVector::operator[](this_00,uVar12);
      if (*p_Var8 == 1) {
        this->bIsBookmark = true;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      _Var7 = TXuint64_tVector::Size(this_00);
      uVar12 = (longlong)(int)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 < _Var7);
  }
  pUVar9 = UDS_LogManager::GetInst();
  if (pUVar9 != (UDS_LogManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->OrderKey;
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"FDS_ChatConversation::SetChatConversation",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Display,local_168.Ptr,0x10c,
               L"[TCC] FDS_ChatConversation::SetChatConversation - conversationID : %s, groupID : %s, userID : %s, showName : %s, orderKey : %llu, unreadCount : %d, isBookmark : %d"
              );
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  return;
}

// SetChatConversation @ 14ba1a790

void __thiscall
FDS_ChatConversation::SetChatConversation
          (FDS_ChatConversation *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ForAnyElementType local_18;
  int local_10;
  int iStack_c;
  
  ::FString::ConcatCF((FString *)&stack0xffffffffffffffe8,L"group_",param_1);
  if (this != (FDS_ChatConversation *)&stack0xffffffffffffffe8) {
    pFVar2 = (this->ConversationID).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->ConversationID).Data.AllocatorInstance.Data = local_18.Data;
    (this->ConversationID).Data.ArrayNum = local_10;
    (this->ConversationID).Data.ArrayMax = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  ::FString::operator=(&this->GroupID,param_1);
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange(&this->ShowName,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ToString @ 14ba1e050

FString * __thiscall
FDS_ChatConversation::ToString(FDS_ChatConversation *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"ChatConversation - ID : %s, GroupID : %s, WhisperPlayerUID : %lld, ShowName : %s");
  return __return_storage_ptr__;
}

