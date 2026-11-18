// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetDebugString @ 14b9ef840

FString * __thiscall
FDS_V2TIMRequestGetGroupMembersInfo::GetDebugString
          (FDS_V2TIMRequestGetGroupMembersInfo *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestGetGroupMembersInfo");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba061b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestGetGroupMembersInfo::OnSuccessInternal
          (FDS_V2TIMRequestGetGroupMembersInfo *this,TXV2TIMGroupMemberFullInfoVector *param_1)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  __uint64 _Var2;
  V2TIMGroupMemberFullInfo *this_01;
  char *pcVar3;
  longlong lVar4;
  __uint64 _Var5;
  ForAnyElementType FVar6;
  int iVar7;
  undefined1 auStackY_1d8 [32];
  int local_198;
  int local_194;
  FString local_190;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_V2TIMRequestGetGroupMembersInfo::OnSuccessInternal",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_158.Ptr,0x4c6,L"chattingManager == nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    iVar7 = 0;
    _Var2 = TXV2TIMGroupMemberFullInfoVector::Size(param_1);
    if (_Var2 != 0) {
      _Var2 = 0;
      do {
        this_01 = TXV2TIMGroupMemberFullInfoVector::operator[](param_1,_Var2);
        pcVar3 = V2TIMString::CString((V2TIMString *)this_01);
        DS_Util::ConvertUTF8ToFString(&local_180,pcVar3);
        pcVar3 = V2TIMString::CString((V2TIMString *)&this_01->_padding_);
        DS_Util::ConvertUTF8ToFString(&local_170,pcVar3);
        pcVar3 = V2TIMString::CString((V2TIMString *)&this_01->_padding_);
        DS_Util::ConvertUTF8ToFString(&local_190,pcVar3);
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_180.Data.ArrayNum != 0) {
          FVar6.Data = local_180.Data.AllocatorInstance.Data;
        }
        lVar4 = _wtoi64((wchar_t *)FVar6.Data);
        local_194 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_190.Data.ArrayNum != 0) {
          FVar6.Data = local_190.Data.AllocatorInstance.Data;
        }
        local_198 = 0;
        FParse::Value((wchar_t *)FVar6.Data,L"CharID=",&local_194);
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_190.Data.ArrayNum != 0) {
          FVar6.Data = local_190.Data.AllocatorInstance.Data;
        }
        FParse::Value((wchar_t *)FVar6.Data,L"CharLevel=",&local_198);
        UDS_ChattingManager::OnAddGroupMember
                  (this_00,&this->GroupID,lVar4,&local_170,local_194,local_198,false);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        iVar7 = iVar7 + 1;
        _Var2 = (__uint64)iVar7;
        _Var5 = TXV2TIMGroupMemberFullInfoVector::Size(param_1);
      } while (_Var2 < _Var5);
    }
  }
  return;
}

// Request @ 14ba10670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_V2TIMRequestGetGroupMembersInfo::Request(FDS_V2TIMRequestGetGroupMembersInfo *this)

{
  int iVar1;
  code *pcVar2;
  V2TIMManager *pVVar3;
  UDS_LogManager *pUVar4;
  longlong *plVar5;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  undefined1 auStackY_1b8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  undefined1 local_188 [8];
  TXV2TIMStringVector local_180;
  V2TIMString local_170;
  V2TIMString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pVVar3 = V2TIMManager::GetInstance();
  if (pVVar3 == (V2TIMManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_V2TIMRequestGetGroupMembersInfo::Request",0x2c,Yes);
    pwVar12 = L"v2TIMMng is nullptr.";
    uVar11 = 0x4aa;
  }
  else {
    plVar5 = (longlong *)(**(code **)((longlong)*pVVar3 + 0xf0))();
    if (plVar5 != (longlong *)0x0) {
      if ((this->GroupID).Data.ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
      }
      pTVar6 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                          pwVar12);
      V2TIMString::V2TIMString(&local_160,(char *)pTVar6->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      TXV2TIMStringVector::TXV2TIMStringVector(&local_180);
      iVar1 = (this->UserIDs).ArrayNum;
      pFVar8 = (this->UserIDs).AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->UserIDs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_188);
        }
        if (pFVar8 == pFVar9) break;
        if (*(int *)(pFVar8 + 8) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)pFVar8;
        }
        pTVar6 = StringCast<char8_t,128,wchar_t>
                           ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                            pwVar12);
        V2TIMString::V2TIMString(&local_170,(char *)pTVar6->Ptr);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        TXV2TIMStringVector::PushBack(&local_180,&local_170);
        V2TIMString::~V2TIMString(&local_170);
        pFVar8 = pFVar8 + 0x10;
      }
      pcVar2 = *(code **)(*plVar5 + 0x80);
      uVar7 = TXV2TIMStringVector::TXV2TIMStringVector((TXV2TIMStringVector *)&local_170,&local_180)
      ;
      plVar10 = &this->_padding_;
      if (this == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      (*pcVar2)(plVar5,&local_160,uVar7,plVar10);
      TXV2TIMStringVector::~TXV2TIMStringVector(&local_180);
      V2TIMString::~V2TIMString(&local_160);
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_V2TIMRequestGetGroupMembersInfo::Request",0x2c,Yes);
    pwVar12 = L"v2TIMGroupMng is nullptr.";
    uVar11 = 0x4b1;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar11,pwVar12);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// SetGroupID @ 14ba1c920

void __thiscall
FDS_V2TIMRequestGetGroupMembersInfo::SetGroupID
          (FDS_V2TIMRequestGetGroupMembersInfo *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

// SetUserIDs @ 14ba1d450

void __thiscall
FDS_V2TIMRequestGetGroupMembersInfo::SetUserIDs
          (FDS_V2TIMRequestGetGroupMembersInfo *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->UserIDs;
  if (pTVar1 != param_1) {
    DestructItems<FString,int>((FString *)(pTVar1->AllocatorInstance).Data,(this->UserIDs).ArrayNum)
    ;
    iVar3 = param_1->ArrayNum;
    piVar2 = &(this->UserIDs).ArrayMax;
    pFVar4 = (param_1->AllocatorInstance).Data;
    (this->UserIDs).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  return;
}

