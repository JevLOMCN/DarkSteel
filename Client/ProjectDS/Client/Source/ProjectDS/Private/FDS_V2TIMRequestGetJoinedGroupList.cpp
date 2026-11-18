// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// GetDebugString @ 14b9ef8d0

FString * __thiscall
FDS_V2TIMRequestGetJoinedGroupList::GetDebugString
          (FDS_V2TIMRequestGetJoinedGroupList *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestGetJoinedGroupList");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba06ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestGetJoinedGroupList::OnSuccessInternal
          (FDS_V2TIMRequestGetJoinedGroupList *this,TXV2TIMGroupInfoVector *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_TencentCloudChatManager *this_00;
  __uint64 _Var4;
  V2TIMGroupInfo *this_01;
  char *pcVar5;
  FDS_ChatGroupInfo *pFVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_258 [32];
  FString local_228;
  FString local_218;
  FDS_ChatGroupInfo local_208;
  UDS_ChattingManager *local_1c8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_1c0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1c8 = UDS_ChattingManager::GetInst();
  if (local_1c8 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_V2TIMRequestGetJoinedGroupList::OnSuccessInternal",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x357,L"chattingManager == nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else if ((char)local_1c8->_padding_ != '\x01') {
    this_00 = UDS_TencentCloudChatManager::GetInst();
    if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_V2TIMRequestGetJoinedGroupList::OnSuccessInternal",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_158.Ptr,0x363,L"tencentChatManager is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      pFVar10 = (FScriptContainerElement *)0x0;
      _Var4 = TXV2TIMGroupInfoVector::Size(param_1);
      pFVar11 = pFVar10;
      pFVar13 = pFVar10;
      if (_Var4 != 0) {
        do {
          this_01 = TXV2TIMGroupInfoVector::operator[](param_1,(__uint64)pFVar11);
          local_208.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.GroupID.Data.ArrayNum = 0;
          local_208.GroupID.Data.ArrayMax = 0;
          local_208.GroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.GroupName.Data.ArrayNum = 0;
          local_208.GroupName.Data.ArrayMax = 0;
          local_208.OwnerUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.OwnerUserID.Data.ArrayNum = 0;
          local_208.OwnerUserID.Data.ArrayMax = 0;
          local_208.GroupIconID = 0;
          pcVar5 = V2TIMString::CString(&this_01->groupID);
          pFVar6 = (FDS_ChatGroupInfo *)DS_Util::ConvertUTF8ToFString(&local_188,pcVar5);
          if (&local_208 != pFVar6) {
            local_208.GroupID.Data.AllocatorInstance.Data =
                 (pFVar6->GroupID).Data.AllocatorInstance.Data;
            (pFVar6->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_208.GroupID.Data.ArrayNum = (pFVar6->GroupID).Data.ArrayNum;
            local_208.GroupID.Data.ArrayMax = (pFVar6->GroupID).Data.ArrayMax;
            (pFVar6->GroupID).Data.ArrayNum = 0;
            (pFVar6->GroupID).Data.ArrayMax = 0;
          }
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          pcVar5 = V2TIMString::CString(&this_01->groupName);
          pFVar7 = DS_Util::ConvertUTF8ToFString(&local_178,pcVar5);
          if (&local_208.GroupName != pFVar7) {
            local_208.GroupName.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
            (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_208.GroupName.Data.ArrayNum = (pFVar7->Data).ArrayNum;
            local_208.GroupName.Data.ArrayMax = (pFVar7->Data).ArrayMax;
            (pFVar7->Data).ArrayNum = 0;
            (pFVar7->Data).ArrayMax = 0;
          }
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          pcVar5 = V2TIMString::CString(&this_01->owner);
          pFVar7 = DS_Util::ConvertUTF8ToFString(&local_168,pcVar5);
          pFVar11 = pFVar10;
          iVar2 = 0;
          if (&local_208.OwnerUserID != pFVar7) {
            pFVar11 = (pFVar7->Data).AllocatorInstance.Data;
            (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar2 = (pFVar7->Data).ArrayNum;
            local_208.OwnerUserID.Data.ArrayNum = (pFVar7->Data).ArrayNum;
            local_208.OwnerUserID.Data.ArrayMax = (pFVar7->Data).ArrayMax;
            (pFVar7->Data).ArrayNum = 0;
            (pFVar7->Data).ArrayMax = 0;
            local_208.OwnerUserID.Data.AllocatorInstance.Data = pFVar11;
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          pFVar8 = (FScriptContainerElement *)L"";
          if (iVar2 != 0) {
            pFVar8 = pFVar11;
          }
          local_208.OwnerPlayerUID = _wtoi64((wchar_t *)pFVar8);
          ::FString::FString(&local_1a8,L"GroupIconID");
          local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.Data.ArrayNum = 0;
          local_228.Data.ArrayMax = 0;
          bVar1 = DS_ChatHelper::GetCustomInfoString(&this_01->customInfo,&local_1a8,&local_228);
          if (bVar1) {
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_228.Data.ArrayNum != 0) {
              FVar9.Data = local_228.Data.AllocatorInstance.Data;
            }
            local_208.GroupIconID = _wtoi((wchar_t *)FVar9.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_198,L"InviteGranted");
          local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_218.Data.ArrayNum = 0;
          local_218.Data.ArrayMax = 0;
          bVar1 = DS_ChatHelper::GetCustomInfoString(&this_01->customInfo,&local_198,&local_218);
          iVar2 = 0;
          if (bVar1) {
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_218.Data.ArrayNum != 0) {
              FVar9.Data = local_218.Data.AllocatorInstance.Data;
            }
            iVar2 = _wtoi((wchar_t *)FVar9.Data);
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          local_208.bIsInviteGranted = 0 < iVar2;
          UDS_ChattingManager::OnGroupChatRoomInfo(local_1c8,&local_208,false);
          local_1c0._16_8_ = 0;
          local_1c0._0_8_ = 0;
          local_1c0._8_8_ = 0;
          UDS_TencentCloudChatManager::Request_GroupMemberList
                    (this_00,&local_208.GroupID,&local_1c0);
          UDS_TencentCloudChatManager::Request_GroupHistoryMessageList(this_00,&local_208.GroupID);
          if (local_208.OwnerUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.OwnerUserID.Data.AllocatorInstance.Data);
          }
          if (local_208.GroupName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.GroupName.Data.AllocatorInstance.Data);
          }
          if (local_208.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.GroupID.Data.AllocatorInstance.Data);
          }
          uVar12 = (int)pFVar13 + 1;
          pFVar8 = (FScriptContainerElement *)TXV2TIMGroupInfoVector::Size(param_1);
          pFVar11 = (FScriptContainerElement *)(longlong)(int)uVar12;
          pFVar13 = (FScriptContainerElement *)(ulonglong)uVar12;
        } while ((FScriptContainerElement *)(longlong)(int)uVar12 < pFVar8);
      }
    }
  }
  return;
}

// Request @ 14ba10d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_V2TIMRequestGetJoinedGroupList::Request(FDS_V2TIMRequestGetJoinedGroupList *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStackY_168 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestGetJoinedGroupList::Request",0x2b,Yes);
    pwVar6 = L"v2TIMMng is nullptr.";
    uVar5 = 0x342;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      puVar4 = &this->field_0x30;
      if (this == (FDS_V2TIMRequestGetJoinedGroupList *)0x0) {
        puVar4 = (undefined1 *)0x0;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,puVar4);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestGetJoinedGroupList::Request",0x2b,Yes);
    pwVar6 = L"v2TIMGroupMng is nullptr.";
    uVar5 = 0x349;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

