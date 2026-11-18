// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetDebugString @ 14b9ef960

FString * __thiscall
FDS_V2TIMRequestKickGroupMember::GetDebugString
          (FDS_V2TIMRequestKickGroupMember *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestKickGroupMember");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba07540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestKickGroupMember::OnSuccessInternal
          (FDS_V2TIMRequestKickGroupMember *this,TXV2TIMGroupMemberOperationResultVector *param_1)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  ForAnyElementType FVar2;
  undefined1 auStackY_178 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestKickGroupMember::OnSuccessInternal",0x32,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x59d,L"chattingManager == nullptr");
    FVar2.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    if ((char)this_00->_padding_ == '\x01') {
      return;
    }
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    UDS_ChattingManager::OnRemoveGroupMember(this_00,&this->GroupID,this->PlayerUID,&local_148,true)
    ;
    FVar2.Data = local_148.Data.AllocatorInstance.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return;
}

// Request @ 14ba11200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestKickGroupMember::Request(FDS_V2TIMRequestKickGroupMember *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 auStackY_1b8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TXV2TIMStringVector local_188;
  V2TIMString local_178;
  V2TIMString local_168;
  V2TIMString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestKickGroupMember::Request",0x28,Yes);
    pwVar8 = L"v2TIMMng is nullptr.";
    uVar7 = 0x583;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      pwVar8 = L"";
      if ((this->GroupID).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
      }
      pTVar4 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                          pwVar6);
      V2TIMString::V2TIMString(&local_158,(char *)pTVar4->Ptr);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      TXV2TIMStringVector::TXV2TIMStringVector(&local_188);
      pFVar5 = DS_Util::FromInt64(&local_148,this->PlayerUID);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pTVar4 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                          pwVar8);
      V2TIMString::V2TIMString(&local_178,(char *)pTVar4->Ptr);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      TXV2TIMStringVector::PushBack(&local_188,&local_178);
      V2TIMString::~V2TIMString(&local_178);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      V2TIMString::V2TIMString(&local_168);
      (**(code **)(*plVar3 + 0xa8))(plVar3,&local_158,&local_188,&local_168);
      V2TIMString::~V2TIMString(&local_168);
      TXV2TIMStringVector::~TXV2TIMStringVector(&local_188);
      V2TIMString::~V2TIMString(&local_158);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestKickGroupMember::Request",0x28,Yes);
    pwVar8 = L"v2TIMGroupMng is nullptr.";
    uVar7 = 0x58a;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetGroupID @ 14ba1c960

void __thiscall
FDS_V2TIMRequestKickGroupMember::SetGroupID(FDS_V2TIMRequestKickGroupMember *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

// SetPlayerUID @ 14ba1d3f0

void __thiscall
FDS_V2TIMRequestKickGroupMember::SetPlayerUID(FDS_V2TIMRequestKickGroupMember *this,long64 param_1)

{
  this->PlayerUID = param_1;
  return;
}

