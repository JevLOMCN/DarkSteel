// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetDebugString @ 14b9ef870

FString * __thiscall
FDS_V2TIMRequestGetGroupsInfo::GetDebugString
          (FDS_V2TIMRequestGetGroupsInfo *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestGetGroupsInfo");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba06400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestGetGroupsInfo::OnSuccessInternal
          (FDS_V2TIMRequestGetGroupsInfo *this,TXV2TIMGroupInfoResultVector *param_1)

{
  FDS_V2TIMRequestGetGroupsInfo *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UDS_TencentCloudChatManager *this_00;
  __uint64 _Var5;
  V2TIMGroupInfoResult *pVVar6;
  char *pcVar7;
  FDS_ChatGroupInfo *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_268 [32];
  FString local_238;
  FString local_228;
  FDS_ChatGroupInfo local_218;
  FDS_V2TIMRequestGetGroupsInfo *local_1d8;
  UDS_ChattingManager *local_1d0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_1c8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1d8 = this;
  local_1d0 = UDS_ChattingManager::GetInst();
  if (local_1d0 == (UDS_ChattingManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_V2TIMRequestGetGroupsInfo::OnSuccessInternal",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x429,L"chattingManager == nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else if ((char)local_1d0->_padding_ != '\x01') {
    this_00 = UDS_TencentCloudChatManager::GetInst();
    if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_V2TIMRequestGetGroupsInfo::OnSuccessInternal",0x30,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_158.Ptr,0x435,L"tencentChatManager is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      pFVar12 = (FScriptContainerElement *)0x0;
      _Var5 = TXV2TIMGroupInfoResultVector::Size(param_1);
      pFVar13 = pFVar12;
      pFVar15 = pFVar12;
      if (_Var5 != 0) {
        do {
          pVVar6 = TXV2TIMGroupInfoResultVector::operator[](param_1,(__uint64)pFVar13);
          if (pVVar6->resultCode == 0) {
            local_218.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_218.GroupID.Data.ArrayNum = 0;
            local_218.GroupID.Data.ArrayMax = 0;
            local_218.GroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_218.GroupName.Data.ArrayNum = 0;
            local_218.GroupName.Data.ArrayMax = 0;
            local_218.OwnerUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_218.OwnerUserID.Data.ArrayNum = 0;
            local_218.OwnerUserID.Data.ArrayMax = 0;
            local_218.GroupIconID = 0;
            pcVar7 = V2TIMString::CString(&(pVVar6->info).groupID);
            pFVar8 = (FDS_ChatGroupInfo *)DS_Util::ConvertUTF8ToFString(&local_190,pcVar7);
            if (&local_218 != pFVar8) {
              local_218.GroupID.Data.AllocatorInstance.Data =
                   (pFVar8->GroupID).Data.AllocatorInstance.Data;
              (pFVar8->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_218.GroupID.Data.ArrayNum = (pFVar8->GroupID).Data.ArrayNum;
              local_218.GroupID.Data.ArrayMax = (pFVar8->GroupID).Data.ArrayMax;
              (pFVar8->GroupID).Data.ArrayNum = 0;
              (pFVar8->GroupID).Data.ArrayMax = 0;
            }
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            pcVar7 = V2TIMString::CString(&(pVVar6->info).groupName);
            pFVar9 = DS_Util::ConvertUTF8ToFString(&local_180,pcVar7);
            if (&local_218.GroupName != pFVar9) {
              local_218.GroupName.Data.AllocatorInstance.Data =
                   (pFVar9->Data).AllocatorInstance.Data;
              (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_218.GroupName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
              local_218.GroupName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
              (pFVar9->Data).ArrayNum = 0;
              (pFVar9->Data).ArrayMax = 0;
            }
            if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Data.AllocatorInstance.Data);
            }
            pcVar7 = V2TIMString::CString(&(pVVar6->info).owner);
            pFVar9 = DS_Util::ConvertUTF8ToFString(&local_170,pcVar7);
            pFVar13 = pFVar12;
            iVar3 = 0;
            if (&local_218.OwnerUserID != pFVar9) {
              pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
              (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar3 = (pFVar9->Data).ArrayNum;
              local_218.OwnerUserID.Data.ArrayNum = (pFVar9->Data).ArrayNum;
              local_218.OwnerUserID.Data.ArrayMax = (pFVar9->Data).ArrayMax;
              (pFVar9->Data).ArrayNum = 0;
              (pFVar9->Data).ArrayMax = 0;
              local_218.OwnerUserID.Data.AllocatorInstance.Data = pFVar13;
            }
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
            pFVar10 = (FScriptContainerElement *)L"";
            if (iVar3 != 0) {
              pFVar10 = pFVar13;
            }
            local_218.OwnerPlayerUID = _wtoi64((wchar_t *)pFVar10);
            ::FString::FString(&local_1b0,L"GroupIconID");
            local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_238.Data.ArrayNum = 0;
            local_238.Data.ArrayMax = 0;
            bVar2 = DS_ChatHelper::GetCustomInfoString
                              (&(pVVar6->info).customInfo,&local_1b0,&local_238);
            if (bVar2) {
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_238.Data.ArrayNum != 0) {
                FVar11.Data = local_238.Data.AllocatorInstance.Data;
              }
              local_218.GroupIconID = _wtoi((wchar_t *)FVar11.Data);
            }
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
            ::FString::FString(&local_1a0,L"InviteGranted");
            local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_228.Data.ArrayNum = 0;
            local_228.Data.ArrayMax = 0;
            bVar2 = DS_ChatHelper::GetCustomInfoString
                              (&(pVVar6->info).customInfo,&local_1a0,&local_228);
            iVar3 = 0;
            if (bVar2) {
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_228.Data.ArrayNum != 0) {
                FVar11.Data = local_228.Data.AllocatorInstance.Data;
              }
              iVar3 = _wtoi((wchar_t *)FVar11.Data);
            }
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
            pFVar1 = local_1d8;
            local_218.bIsInviteGranted = 0 < iVar3;
            UDS_ChattingManager::OnGroupChatRoomInfo
                      (local_1d0,&local_218,local_1d8->bIsCreateOrJoin);
            if (pFVar1->bIsCreateOrJoin == true) {
              local_1c8._16_8_ = 0;
              local_1c8._0_8_ = 0;
              local_1c8._8_8_ = 0;
              UDS_TencentCloudChatManager::Request_GroupMemberList
                        (this_00,&local_218.GroupID,&local_1c8);
              UDS_TencentCloudChatManager::Request_GroupHistoryMessageList
                        (this_00,&local_218.GroupID);
            }
            if (local_218.OwnerUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_218.OwnerUserID.Data.AllocatorInstance.Data);
            }
            if (local_218.GroupName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.GroupName.Data.AllocatorInstance.Data);
            }
            if (local_218.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.GroupID.Data.AllocatorInstance.Data);
            }
          }
          uVar14 = (int)pFVar15 + 1;
          pFVar10 = (FScriptContainerElement *)TXV2TIMGroupInfoResultVector::Size(param_1);
          pFVar13 = (FScriptContainerElement *)(longlong)(int)uVar14;
          pFVar15 = (FScriptContainerElement *)(ulonglong)uVar14;
        } while ((FScriptContainerElement *)(longlong)(int)uVar14 < pFVar10);
      }
    }
  }
  return;
}

// Request @ 14ba108f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestGetGroupsInfo::Request(FDS_V2TIMRequestGetGroupsInfo *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  longlong *plVar5;
  undefined1 auStackY_188 [32];
  uint uVar6;
  wchar_t *pwVar7;
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
              (&local_138,"FDS_V2TIMRequestGetGroupsInfo::Request",0x26,Yes);
    pwVar7 = L"v2TIMMng is nullptr.";
    uVar6 = 0x411;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      TXV2TIMStringVector::TXV2TIMStringVector(&local_158);
      if ((this->GroupID).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
      }
      pTVar4 = StringCast<char8_t,128,wchar_t>
                         ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                          pwVar7);
      V2TIMString::V2TIMString(&local_148,(char *)pTVar4->Ptr);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      TXV2TIMStringVector::PushBack(&local_158,&local_148);
      V2TIMString::~V2TIMString(&local_148);
      plVar5 = &this->_padding_;
      if (this == (FDS_V2TIMRequestGetGroupsInfo *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_158,plVar5);
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
              (&local_138,"FDS_V2TIMRequestGetGroupsInfo::Request",0x26,Yes);
    pwVar7 = L"v2TIMGroupMng is nullptr.";
    uVar6 = 0x418;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetGroupID @ 14ba1c930

void __thiscall
FDS_V2TIMRequestGetGroupsInfo::SetGroupID(FDS_V2TIMRequestGetGroupsInfo *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

// SetIsCreateOrJoin @ 14ba1cde0

void __thiscall
FDS_V2TIMRequestGetGroupsInfo::SetIsCreateOrJoin(FDS_V2TIMRequestGetGroupsInfo *this,bool param_1)

{
  this->bIsCreateOrJoin = param_1;
  return;
}

