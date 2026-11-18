// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// IsC2CType @ 14b9f90f0

bool __thiscall FDS_ChatMessageInfo::IsC2CType(FDS_ChatMessageInfo *this)

{
  return this->ConversationType == 1;
}

// IsGroupType @ 14b9f9340

bool __thiscall FDS_ChatMessageInfo::IsGroupType(FDS_ChatMessageInfo *this)

{
  return this->ConversationType == 2;
}

// SetChatMessageInfo @ 14ba1a870

bool __thiscall
FDS_ChatMessageInfo::SetChatMessageInfo(FDS_ChatMessageInfo *this,V2TIMMessage *param_1)

{
  int iVar1;
  V2TIMElem *pVVar2;
  bool bVar3;
  __uint64 _Var4;
  V2TIMElem **ppVVar5;
  char *pcVar6;
  FString *pFVar7;
  longlong lVar8;
  wchar_t *_Str;
  wchar_t *_Str_00;
  FString local_28;
  
  _Var4 = TXPV2TIMElemVector::Size(&param_1->elemList);
  if (_Var4 == 0) {
    return false;
  }
  ppVVar5 = TXPV2TIMElemVector::operator[](&param_1->elemList,0);
  pVVar2 = *ppVVar5;
  if ((pVVar2 != (V2TIMElem *)0x0) && (pVVar2->elemType == V2TIM_ELEM_TYPE_TEXT)) {
    pcVar6 = V2TIMString::CString(&param_1->msgID);
    pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar6);
    ::FString::operator=(&this->MessageID,pFVar7);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pcVar6 = V2TIMString::CString(&param_1->groupID);
    pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar6);
    ::FString::operator=(&this->GroupID,pFVar7);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pcVar6 = V2TIMString::CString(&param_1->sender);
    pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar6);
    ::FString::operator=(&this->SenderUserID,pFVar7);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pcVar6 = V2TIMString::CString(&param_1->nickName);
    pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar6);
    ::FString::operator=(&this->SenderNickname,pFVar7);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    _Str_00 = L"";
    if ((this->SenderUserID).Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(this->SenderUserID).Data.AllocatorInstance.Data;
    }
    lVar8 = _wtoi64(_Str);
    this->SenderPlayerUID = lVar8;
    pcVar6 = V2TIMString::CString((V2TIMString *)(pVVar2 + 1));
    pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar6);
    ::FString::operator=(&this->MessageText,pFVar7);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this->SendTime = (double)param_1->timestamp;
    this->Sequence = param_1->seq;
    bVar3 = V2TIMMessage::IsRead(param_1);
    iVar1 = (this->GroupID).Data.ArrayNum;
    this->IsRead = bVar3;
    if (iVar1 < 2) {
      this->ConversationType = 1;
      pcVar6 = V2TIMString::CString(&param_1->userID);
      pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar6);
      ::FString::operator=(&this->ReceiverUserID,pFVar7);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if ((this->ReceiverUserID).Data.ArrayNum != 0) {
        _Str_00 = (wchar_t *)(this->ReceiverUserID).Data.AllocatorInstance.Data;
      }
      lVar8 = _wtoi64(_Str_00);
      this->ReceiverPlayerUID = lVar8;
    }
    else {
      this->ConversationType = 2;
    }
    _Var4 = TXPV2TIMElemVector::Size(&param_1->elemList);
    if (1 < _Var4) {
      ppVVar5 = TXPV2TIMElemVector::operator[](&param_1->elemList,1);
      pVVar2 = *ppVVar5;
      if ((pVVar2 != (V2TIMElem *)0x0) && (pVVar2->elemType == V2TIM_ELEM_TYPE_TEXT)) {
        pcVar6 = V2TIMString::CString((V2TIMString *)(pVVar2 + 1));
        pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar6);
        ::FString::operator=(&this->MetaData,pFVar7);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    return true;
  }
  return false;
}

