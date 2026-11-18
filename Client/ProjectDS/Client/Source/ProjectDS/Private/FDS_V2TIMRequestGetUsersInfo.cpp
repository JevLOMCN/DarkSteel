// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// AddPlayerUIDs @ 14b9e09d0

void __thiscall
FDS_V2TIMRequestGetUsersInfo::AddPlayerUIDs
          (FDS_V2TIMRequestGetUsersInfo *this,TArrayView<__int64_const_,int> *param_1)

{
  int iVar1;
  long64 *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  _Src = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if ((_Src == (long64 *)0x0) && (iVar1 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&(this->PlayerUIDs).AllocatorInstance,&(this->PlayerUIDs).ArrayNum,
                     &(this->PlayerUIDs).ArrayMax);
  if (iVar1 != 0) {
    memcpy((this->PlayerUIDs).AllocatorInstance.Data + (longlong)iVar4 * 8,_Src,(longlong)iVar1 << 3
          );
  }
  return;
}

// GetDebugString @ 14b9ef900

FString * __thiscall
FDS_V2TIMRequestGetUsersInfo::GetDebugString
          (FDS_V2TIMRequestGetUsersInfo *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestGetUsersInfo");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba06f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestGetUsersInfo::OnSuccessInternal
          (FDS_V2TIMRequestGetUsersInfo *this,TXV2TIMUserFullInfoVector *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  __uint64 _Var5;
  V2TIMUserFullInfo *pVVar6;
  char *pcVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  __uint64 _Var10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStackY_288 [32];
  wchar_t *pwVar15;
  int local_228;
  int local_224;
  uint local_220;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FWeakObjectPtr local_1e8;
  UDS_ChattingManager *local_1e0;
  TXV2TIMUserFullInfoVector *local_1d8;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  longlong local_1a0;
  longlong local_198;
  FString local_190;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1d8 = param_1;
  this_00 = UDS_ChattingManager::GetInst();
  local_1e0 = this_00;
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_V2TIMRequestGetUsersInfo::OnSuccessInternal",0x2f,Yes);
    pwVar15 = L"chattingManager == nullptr";
    uVar13 = 0x110;
  }
  else {
    if ((char)this_00->_padding_ == '\x01') {
      return;
    }
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid(&local_1e8);
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_1e8);
      _Var10 = 0;
      local_220 = 0;
      local_1a0 = *(longlong *)&pUVar4[6].field_0x8;
      _Var5 = TXV2TIMUserFullInfoVector::Size(param_1);
      uVar12 = _Var10;
      uVar14 = _Var10;
      if (_Var5 == 0) {
        return;
      }
      do {
        pVVar6 = TXV2TIMUserFullInfoVector::operator[](param_1,uVar12);
        pcVar7 = V2TIMString::CString((V2TIMString *)&pVVar6->_padding_);
        DS_Util::ConvertUTF8ToFString(&local_1f8,pcVar7);
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_1f8.Data.ArrayNum != 0) {
          FVar8.Data = local_1f8.Data.AllocatorInstance.Data;
        }
        local_198 = _wtoi64((wchar_t *)FVar8.Data);
        pcVar7 = V2TIMString::CString((V2TIMString *)&pVVar6->_padding_);
        DS_Util::ConvertUTF8ToFString(&local_1b0,pcVar7);
        pcVar7 = V2TIMString::CString((V2TIMString *)&pVVar6->_padding_);
        DS_Util::ConvertUTF8ToFString(&local_1c0,pcVar7);
        local_224 = 1;
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_1c0.Data.ArrayNum != 0) {
          FVar8.Data = local_1c0.Data.AllocatorInstance.Data;
        }
        local_228 = 1;
        FParse::Value((wchar_t *)FVar8.Data,L"CharID=",&local_224);
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_1c0.Data.ArrayNum != 0) {
          FVar8.Data = local_1c0.Data.AllocatorInstance.Data;
        }
        FParse::Value((wchar_t *)FVar8.Data,L"CharLevel=",&local_228);
        local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.Data.ArrayNum = 0;
        local_218.Data.ArrayMax = 0;
        ::FString::FString(&local_170,L"GroupIDs");
        DS_ChatHelper::GetCustomInfoString(&pVVar6->customInfo,&local_170,&local_218);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        pUVar3 = UDS_LogManager::GetInst();
        uVar13 = (uint)uVar14;
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_V2TIMRequestGetUsersInfo::OnSuccessInternal",0x2f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Display,local_158.Ptr,0x131,
                     L"[TCC][UserInfo] RecvUserInfoList : userID(uid) : %s, nickname : %s, charID : %d, charLevel : %d, customString : %s"
                    );
          param_1 = local_1d8;
          this_00 = local_1e0;
          uVar13 = local_220;
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
            param_1 = local_1d8;
            this_00 = local_1e0;
            uVar13 = local_220;
          }
        }
        if ((local_198 == local_1a0) &&
           (iVar2 = DS_CommonDataHelper::ChattingCustomTabCount(), _Var5 = _Var10, 0 < iVar2)) {
          do {
            uVar11 = (int)_Var5 + 1;
            local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_208.Data.ArrayNum = 0;
            local_208.Data.ArrayMax = 0;
            local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d0.Data.ArrayNum = 0;
            local_1d0.Data.ArrayMax = 0;
            ::FString::PrintfImpl(&local_190,L"Custom%dFlag=");
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_190.Data.ArrayNum != 0) {
              FVar8.Data = local_190.Data.AllocatorInstance.Data;
            }
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_218.Data.ArrayNum != 0) {
              FVar9.Data = local_218.Data.AllocatorInstance.Data;
            }
            FParse::Value((wchar_t *)FVar9.Data,(wchar_t *)FVar8.Data,&local_208,true,
                          (wchar_t **)0x0);
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            ::FString::PrintfImpl(&local_180,L"Custom%dMark=");
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_180.Data.ArrayNum != 0) {
              FVar8.Data = local_180.Data.AllocatorInstance.Data;
            }
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_218.Data.ArrayNum != 0) {
              FVar9.Data = local_218.Data.AllocatorInstance.Data;
            }
            FParse::Value((wchar_t *)FVar9.Data,(wchar_t *)FVar8.Data,&local_1d0,true,
                          (wchar_t **)0x0);
            if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Data.AllocatorInstance.Data);
            }
            if (1 < local_208.Data.ArrayNum) {
              UDS_ChattingManager::OnRecvCustomInfo(this_00,(int)_Var5,&local_208,&local_1d0);
            }
            if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            }
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            _Var5 = (__uint64)uVar11;
          } while ((int)uVar11 < iVar2);
        }
        UDS_ChattingManager::OnRecvUserInfo(this_00,&local_1f8,&local_1b0,local_224,local_228);
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        local_220 = uVar13 + 1;
        uVar14 = (ulonglong)local_220;
        uVar12 = (ulonglong)(int)local_220;
        _Var5 = TXV2TIMUserFullInfoVector::Size(param_1);
      } while (uVar12 < _Var5);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_V2TIMRequestGetUsersInfo::OnSuccessInternal",0x2f,Yes);
    pwVar15 = L"myPlayerData.IsValid() == false";
    uVar13 = 0x11c;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar13,pwVar15);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// Request @ 14ba10e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestGetUsersInfo::Request(FDS_V2TIMRequestGetUsersInfo *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  V2TIMManager *pVVar4;
  UDS_LogManager *pUVar5;
  FString *pFVar6;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  TXV2TIMStringVector local_180;
  V2TIMString local_170;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pVVar4 = V2TIMManager::GetInstance();
  if (pVVar4 == (V2TIMManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_V2TIMRequestGetUsersInfo::Request",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0xfa,L"v2TIMMng is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar3 = false;
  }
  else {
    TXV2TIMStringVector::TXV2TIMStringVector(&local_180);
    pFVar9 = (this->PlayerUIDs).AllocatorInstance.Data;
    iVar2 = (this->PlayerUIDs).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->PlayerUIDs).ArrayNum != iVar2) {
        `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_188);
      }
      if (pFVar9 == pFVar1) break;
      pFVar6 = DS_Util::FromInt64(&local_160,*(long64 *)pFVar9);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pTVar7 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_148,
                          pwVar8);
      V2TIMString::V2TIMString(&local_170,(char *)pTVar7->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      TXV2TIMStringVector::PushBack(&local_180,&local_170);
      V2TIMString::~V2TIMString(&local_170);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 8;
    }
    (**(code **)((longlong)*pVVar4 + 0xb8))(pVVar4,&local_180);
    (this->PlayerUIDs).ArrayNum = 0;
    if ((this->PlayerUIDs).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PlayerUIDs).AllocatorInstance,0,&(this->PlayerUIDs).ArrayMax);
    }
    TXV2TIMStringVector::~TXV2TIMStringVector(&local_180);
    bVar3 = true;
  }
  return bVar3;
}

