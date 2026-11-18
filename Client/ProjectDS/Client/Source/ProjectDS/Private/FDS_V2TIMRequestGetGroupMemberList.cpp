// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetDebugString @ 14b9ef810

FString * __thiscall
FDS_V2TIMRequestGetGroupMemberList::GetDebugString
          (FDS_V2TIMRequestGetGroupMemberList *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestGetGroupMemberList");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba05e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestGetGroupMemberList::OnSuccessInternal
          (FDS_V2TIMRequestGetGroupMemberList *this,V2TIMGroupMemberInfoResult *param_1)

{
  longlong *plVar1;
  UDS_LogManager *pUVar2;
  __uint64 _Var3;
  V2TIMGroupMemberFullInfo *this_00;
  char *pcVar4;
  ForAnyElementType FVar5;
  __uint64 _Var6;
  TXV2TIMGroupMemberFullInfoVector *this_01;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStackY_238 [32];
  int local_1d8;
  int local_1d4;
  int local_1d0;
  TXV2TIMGroupMemberFullInfoVector *local_1c8;
  FDS_V2TIMRequestGetGroupMemberList *local_1c0;
  FString local_1b8;
  FString local_1a8;
  FReadAccessScope local_198;
  longlong local_180;
  UDS_ChattingManager *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1c0 = this;
  local_178 = UDS_ChattingManager::GetInst();
  if (local_178 == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_V2TIMRequestGetGroupMemberList::OnSuccessInternal",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_168.Ptr,0x39e,L"chattingManager == nullptr");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else if ((char)local_178->_padding_ != '\x01') {
    this_01 = &param_1->memberInfoList;
    _Var6 = 0;
    local_1c8 = this_01;
    _Var3 = TXV2TIMGroupMemberFullInfoVector::Size(this_01);
    uVar8 = _Var6;
    if (_Var3 != 0) {
      do {
        this_00 = TXV2TIMGroupMemberFullInfoVector::operator[](this_01,_Var6);
        pcVar4 = V2TIMString::CString((V2TIMString *)this_00);
        DS_Util::ConvertUTF8ToFString(&local_1a8,pcVar4);
        pcVar4 = V2TIMString::CString((V2TIMString *)&this_00->_padding_);
        DS_Util::ConvertUTF8ToFString((FString *)&local_198,pcVar4);
        pcVar4 = V2TIMString::CString((V2TIMString *)&this_00->_padding_);
        DS_Util::ConvertUTF8ToFString(&local_1b8,pcVar4);
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_1a8.Data.ArrayNum != 0) {
          FVar5.Data = local_1a8.Data.AllocatorInstance.Data;
        }
        local_180 = _wtoi64((wchar_t *)FVar5.Data);
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_1b8.Data.ArrayNum != 0) {
          FVar5.Data = local_1b8.Data.AllocatorInstance.Data;
        }
        local_1d4 = 0;
        local_1d8 = 0;
        FParse::Value((wchar_t *)FVar5.Data,L"CharID=",&local_1d4);
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_1b8.Data.ArrayNum != 0) {
          FVar5.Data = local_1b8.Data.AllocatorInstance.Data;
        }
        FParse::Value((wchar_t *)FVar5.Data,L"CharLevel=",&local_1d8);
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_1d0 = local_1d4;
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"FDS_V2TIMRequestGetGroupMemberList::OnSuccessInternal",0x35,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Display,local_168.Ptr,0x3b5,
                     L"[TCC] OnAddGroupMember : GroupID : %s, userID(uid) : %s, nickname : %s, charID : %d, charLevel : %d"
                    );
          this = local_1c0;
          this_01 = local_1c8;
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
            this = local_1c0;
            this_01 = local_1c8;
          }
        }
        UDS_ChattingManager::OnAddGroupMember
                  (local_178,&this->GroupID,local_180,(FString *)&local_198,local_1d4,local_1d8,
                   false);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if ((void *)local_198.DestructionSentinel._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_198.DestructionSentinel._0_8_);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        uVar7 = (int)uVar8 + 1;
        _Var6 = (__uint64)(int)uVar7;
        _Var3 = TXV2TIMGroupMemberFullInfoVector::Size(this_01);
        uVar8 = (ulonglong)uVar7;
      } while (_Var6 < _Var3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->FinishCallback,
               &local_198);
    if ((*(int *)&(this->FinishCallback).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->FinishCallback).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_198);
  }
  return;
}

// Request @ 14ba104c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_V2TIMRequestGetGroupMemberList::Request(FDS_V2TIMRequestGetGroupMemberList *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  V2TIMString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestGetGroupMemberList::Request",0x2b,Yes);
    pwVar6 = L"v2TIMMng is nullptr.";
    uVar5 = 0x387;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      if ((this->GroupID).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
      }
      pTVar4 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                          pwVar6);
      V2TIMString::V2TIMString(&local_148,(char *)pTVar4->Ptr);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      (**(code **)(*plVar3 + 0x78))(plVar3,&local_148,0,0);
      V2TIMString::~V2TIMString(&local_148);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestGetGroupMemberList::Request",0x2b,Yes);
    pwVar6 = L"v2TIMGroupMng is nullptr.";
    uVar5 = 0x38e;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetFinishCallback @ 14ba1c8c0

void __thiscall
FDS_V2TIMRequestGetGroupMemberList::SetFinishCallback
          (FDS_V2TIMRequestGetGroupMemberList *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->FinishCallback,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetGroupID @ 14ba1c910

void __thiscall
FDS_V2TIMRequestGetGroupMemberList::SetGroupID
          (FDS_V2TIMRequestGetGroupMemberList *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

