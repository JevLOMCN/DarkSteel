// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetDebugString @ 14b9ef9f0

FString * __thiscall
FDS_V2TIMRequestMarkConversation::GetDebugString
          (FDS_V2TIMRequestMarkConversation *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestMarkConversation");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba07940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestMarkConversation::OnSuccessInternal
          (FDS_V2TIMRequestMarkConversation *this,TXV2TIMConversationOperationResultVector *param_1)

{
  int iVar1;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar2;
  __uint64 _Var3;
  V2TIMConversationOperationResult *this_01;
  char *pcVar4;
  ForAnyElementType FVar5;
  __uint64 _Var6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStackY_188 [32];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_V2TIMRequestMarkConversation::OnSuccessInternal",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x1b5,L"chattingManager == nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    _Var6 = 0;
    _Var3 = TXV2TIMConversationOperationResultVector::Size(param_1);
    uVar8 = _Var6;
    if (_Var3 != 0) {
      do {
        this_01 = TXV2TIMConversationOperationResultVector::operator[](param_1,_Var6);
        pcVar4 = V2TIMString::CString(&this_01->conversationID);
        DS_Util::ConvertUTF8ToFString(&local_158,pcVar4);
        FVar5.Data = local_158.Data.AllocatorInstance.Data;
        iVar1 = (this->ConversationID).Data.ArrayNum;
        if (iVar1 == local_158.Data.ArrayNum) {
          if (1 < iVar1) {
            iVar1 = wcscmp((wchar_t *)(this->ConversationID).Data.AllocatorInstance.Data,
                           (wchar_t *)local_158.Data.AllocatorInstance.Data);
            bVar9 = iVar1 == 0;
            goto LAB_14ba07a7d;
          }
LAB_14ba07a84:
          UDS_ChattingManager::OnMarkConversation(this_00,&local_158,this->bIsBookmark);
          FVar5.Data = local_158.Data.AllocatorInstance.Data;
        }
        else {
          bVar9 = iVar1 + local_158.Data.ArrayNum == 1;
LAB_14ba07a7d:
          if (bVar9) goto LAB_14ba07a84;
        }
        if (FVar5.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar5.Data);
        }
        uVar7 = (int)uVar8 + 1;
        _Var6 = (__uint64)(int)uVar7;
        _Var3 = TXV2TIMConversationOperationResultVector::Size(param_1);
        uVar8 = (ulonglong)uVar7;
      } while (_Var6 < _Var3);
    }
  }
  return;
}

// Request @ 14ba11710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestMarkConversation::Request(FDS_V2TIMRequestMarkConversation *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TXV2TIMStringVector local_158;
  V2TIMString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestMarkConversation::Request",0x29,Yes);
    pwVar6 = L"v2TIMMng is nullptr.";
    uVar5 = 0x19c;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      TXV2TIMStringVector::TXV2TIMStringVector(&local_158);
      if ((this->ConversationID).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(this->ConversationID).Data.AllocatorInstance.Data;
      }
      pTVar4 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                          pwVar6);
      V2TIMString::V2TIMString(&local_148,(char *)pTVar4->Ptr);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      TXV2TIMStringVector::PushBack(&local_158,&local_148);
      V2TIMString::~V2TIMString(&local_148);
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_158,1,this->bIsBookmark);
      TXV2TIMStringVector::~TXV2TIMStringVector(&local_158);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestMarkConversation::Request",0x29,Yes);
    pwVar6 = L"v2TIMConversationMng is nullptr.";
    uVar5 = 0x1a3;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetMarkConversation @ 14ba1d070

void __thiscall
FDS_V2TIMRequestMarkConversation::SetMarkConversation
          (FDS_V2TIMRequestMarkConversation *this,FString *param_1,bool param_2)

{
  ::FString::operator=(&this->ConversationID,param_1);
  this->bIsBookmark = param_2;
  return;
}

