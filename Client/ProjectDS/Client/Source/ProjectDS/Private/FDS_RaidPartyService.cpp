// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 81

// GetDungeonType @ 14bbf7d10

DungeonType __cdecl FDS_RaidPartyService::GetDungeonType(EDS_DungeonType param_1)

{
  return (DungeonType)param_1;
}

// GetEDS_RaidPartyNotifyType @ 14bbf7d20

EDS_RaidPartyNotifyType __cdecl
FDS_RaidPartyService::GetEDS_RaidPartyNotifyType(RaidPartyNotifyType param_1)

{
  return (EDS_RaidPartyNotifyType)param_1;
}

// GetMyRaidPartyNumber @ 14bbf85b0

int __cdecl FDS_RaidPartyService::GetMyRaidPartyNumber(int param_1)

{
  int iVar1;
  
  if (param_1 - 1U < 4) {
    return 0;
  }
  if (param_1 < 9) {
    return 1;
  }
  iVar1 = -1;
  if (param_1 < 0xd) {
    iVar1 = 2;
  }
  return iVar1;
}

// IsDeckChangeAble @ 14bbf97e0

bool __cdecl FDS_RaidPartyService::IsDeckChangeAble(FDS_RaidPartyMemberInfo *param_1)

{
  if (param_1->MemberState != Waiting) {
    return param_1->MemberState == DungeonOutPlay;
  }
  return true;
}

// IsEnterStateCheck @ 14bbf98b0

bool __cdecl
FDS_RaidPartyService::IsEnterStateCheck
          (int *param_1,long64 *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FDS_DungeonBaseTableRow *pFVar4;
  FDS_DungeonTypeDataTableRow *pFVar5;
  UObject *pUVar6;
  ForAnyElementType FVar7;
  int iVar8;
  undefined1 local_res20 [8];
  FWeakObjectPtr local_58;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_50;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_40;
  
  bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar3) {
LAB_14bbf9a12:
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    if (*(void **)&param_3->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_3->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_3);
    return true;
  }
  pFVar4 = FDS_DungeonBaseTableRow::GetRef((longlong)*param_1,true);
  pFVar5 = FDS_DungeonTypeDataTableRow::GetRef((ulonglong)pFVar4->DungeonType,true);
  iVar8 = 0;
  FDS_DungeonBaseTableRow::GetAll(&local_50);
  iVar2 = local_50.ArrayNum;
  if (local_50.ArrayNum != 0) {
    pFVar1 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
    FVar7.Data = local_50.AllocatorInstance.Data;
    while( true ) {
      if (local_50.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_DungeonBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (FVar7.Data == pFVar1) break;
      if (*(EDS_DungeonType *)(*(longlong *)FVar7.Data + 0x20) == pFVar4->DungeonType) {
        UDS_DungeonRecordData::GetData
                  ((ulong64)&local_58,UDS_PlayerData::MainPlayerEntityID,
                   SUB41(*(undefined4 *)(*(longlong *)FVar7.Data + 8),0));
        bVar3 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_58,
                           (void *)0x0);
        if (!bVar3) {
          pUVar6 = FWeakObjectPtr::Get(&local_58);
          iVar8 = iVar8 + *(int *)&pUVar6[2].field_0xc;
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    if (0 < pFVar5->EnterLimitCount - iVar8) {
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      goto LAB_14bbf9a12;
    }
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    local_40._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347d9,Complete_System_01,&local_40);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return false;
}

// IsPartyStateCheckLeave @ 14bbf9a50

bool __cdecl
FDS_RaidPartyService::IsPartyStateCheckLeave
          (long64 *param_1,long64 *param_2,long64 *param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  bool bVar1;
  FDS_RaidPartyRepo *this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  FDS_PartyRepo *pFVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this);
  if (bVar1) {
    pTVar2 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_28,param_4);
  }
  else {
    pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar1 = FDS_PartyInfo::IsValid(&pFVar3->PartyInfo);
    if (!bVar1) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
      if (*(void **)&param_4->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_4->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_4);
      return true;
    }
    pTVar2 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_28,param_4);
    param_2 = param_3;
  }
  OpenPartyLeavePopup(param_1,param_2,pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return false;
}

// IsRaidPlaying @ 14bbf9b20

bool __cdecl FDS_RaidPartyService::IsRaidPlaying(void)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar2);
    return pFVar3->MemberState == DungeonInPlay;
  }
  return false;
}

// IsReqOnewayAvailableTime @ 14bbf9b60

bool __cdecl FDS_RaidPartyService::IsReqOnewayAvailableTime(int param_1,EDS_CoolDownType param_2)

{
  int iVar1;
  code *pcVar2;
  long64 *plVar3;
  bool bVar4;
  undefined1 uVar5;
  UDS_TimeUtilManager *pUVar6;
  FDateTime FVar7;
  FDS_TimeCoolDownTableRow *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  TPairInitializer<int_const_&,__int64_const_&> local_res18;
  uint *local_30;
  long64 **local_28;
  
  local_res8[0] = param_1;
  pUVar6 = UDS_TimeUtilManager::GetInst();
  if (pUVar6 == (UDS_TimeUtilManager *)0x0) {
    return false;
  }
  FVar7 = UDS_TimeUtilManager::GetCurrentServerDateTime();
  local_res18.Value = *(long64 **)FVar7.Ticks;
  if (RaidPartyReqOnewayTimeStampMap._8_4_ != RaidPartyReqOnewayTimeStampMap._52_4_) {
    lVar9 = 0x154cf7ae8;
    if (RaidPartyReqOnewayTimeStampMap._64_8_ != 0) {
      lVar9 = RaidPartyReqOnewayTimeStampMap._64_8_;
    }
    uVar10 = (ulonglong)(RaidPartyReqOnewayTimeStampMap._72_4_ - 1 & local_res8[0]);
    for (iVar1 = *(int *)(lVar9 + uVar10 * 4); iVar1 != -1;
        iVar1 = *(int *)(RaidPartyReqOnewayTimeStampMap._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
      if (*(uint *)(RaidPartyReqOnewayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0])
      {
        lVar9 = 0x154cf7ae8;
        if (RaidPartyReqOnewayTimeStampMap._64_8_ != 0) {
          lVar9 = RaidPartyReqOnewayTimeStampMap._64_8_;
        }
        iVar1 = *(int *)(lVar9 + uVar10 * 4);
        goto joined_r0x00014bbf9c42;
      }
    }
  }
  local_30 = local_res8;
  local_28 = &local_res18.Value;
  TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,__int64_const_&>_>
            ((TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator>
              *)&RaidPartyReqOnewayTimeStampMap,&local_res18,(bool *)&local_30);
  return true;
joined_r0x00014bbf9c42:
  if (iVar1 == -1) goto LAB_14bbf9c6d;
  lVar9 = RaidPartyReqOnewayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18;
  if (*(uint *)(RaidPartyReqOnewayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0]) {
    if (lVar9 != 0) goto LAB_14bbf9c95;
    goto LAB_14bbf9c6f;
  }
  iVar1 = *(int *)(lVar9 + 0x10);
  goto joined_r0x00014bbf9c42;
LAB_14bbf9c6d:
  lVar9 = 0;
LAB_14bbf9c6f:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_14bbf9c95:
  lVar9 = (longlong)local_res18.Value - *(longlong *)(lVar9 + 8);
  pFVar8 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)param_2,true);
  plVar3 = local_res18.Value;
  if ((float)lVar9 < pFVar8->CoolTime * __real_4b189680) {
    return false;
  }
  if (RaidPartyReqOnewayTimeStampMap._8_4_ != RaidPartyReqOnewayTimeStampMap._52_4_) {
    lVar9 = 0x154cf7ae8;
    if (RaidPartyReqOnewayTimeStampMap._64_8_ != 0) {
      lVar9 = RaidPartyReqOnewayTimeStampMap._64_8_;
    }
    iVar1 = *(int *)(lVar9 + (ulonglong)(RaidPartyReqOnewayTimeStampMap._72_4_ - 1 & local_res8[0])
                             * 4);
    while (iVar1 != -1) {
      lVar9 = RaidPartyReqOnewayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(uint *)(RaidPartyReqOnewayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0])
      {
        if (lVar9 != 0) goto LAB_14bbf9d50;
        goto LAB_14bbf9d2a;
      }
      iVar1 = *(int *)(lVar9 + 0x10);
    }
  }
  lVar9 = 0;
LAB_14bbf9d2a:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_14bbf9d50:
  *(long64 **)(lVar9 + 8) = plVar3;
  return true;
}

// IsReqTwowayAvailableTime @ 14bbf9d90

bool __cdecl FDS_RaidPartyService::IsReqTwowayAvailableTime(int param_1,EDS_CoolDownType param_2)

{
  int iVar1;
  code *pcVar2;
  long64 *plVar3;
  bool bVar4;
  undefined1 uVar5;
  UDS_TimeUtilManager *pUVar6;
  FDateTime FVar7;
  FDS_TimeCoolDownTableRow *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  TPairInitializer<int_const_&,__int64_const_&> local_res18;
  uint *local_30;
  long64 **local_28;
  
  local_res8[0] = param_1;
  pUVar6 = UDS_TimeUtilManager::GetInst();
  if (pUVar6 == (UDS_TimeUtilManager *)0x0) {
    return false;
  }
  FVar7 = UDS_TimeUtilManager::GetCurrentServerDateTime();
  local_res18.Value = *(long64 **)FVar7.Ticks;
  if (RaidPartyReqTwowayTimeStampMap._8_4_ != RaidPartyReqTwowayTimeStampMap._52_4_) {
    lVar9 = 0x154cf7a98;
    if (RaidPartyReqTwowayTimeStampMap._64_8_ != 0) {
      lVar9 = RaidPartyReqTwowayTimeStampMap._64_8_;
    }
    uVar10 = (ulonglong)(RaidPartyReqTwowayTimeStampMap._72_4_ - 1 & local_res8[0]);
    for (iVar1 = *(int *)(lVar9 + uVar10 * 4); iVar1 != -1;
        iVar1 = *(int *)(RaidPartyReqTwowayTimeStampMap._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
      if (*(uint *)(RaidPartyReqTwowayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0])
      {
        lVar9 = 0x154cf7a98;
        if (RaidPartyReqTwowayTimeStampMap._64_8_ != 0) {
          lVar9 = RaidPartyReqTwowayTimeStampMap._64_8_;
        }
        iVar1 = *(int *)(lVar9 + uVar10 * 4);
        goto joined_r0x00014bbf9e72;
      }
    }
  }
  local_30 = local_res8;
  local_28 = &local_res18.Value;
  TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,__int64_const_&>_>
            ((TSet<TTuple<int,__int64>,TDefaultMapHashableKeyFuncs<int,__int64,0>,FDefaultSetAllocator>
              *)&RaidPartyReqTwowayTimeStampMap,&local_res18,(bool *)&local_30);
  return true;
joined_r0x00014bbf9e72:
  if (iVar1 == -1) goto LAB_14bbf9e9d;
  lVar9 = RaidPartyReqTwowayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18;
  if (*(uint *)(RaidPartyReqTwowayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0]) {
    if (lVar9 != 0) goto LAB_14bbf9ec5;
    goto LAB_14bbf9e9f;
  }
  iVar1 = *(int *)(lVar9 + 0x10);
  goto joined_r0x00014bbf9e72;
LAB_14bbf9e9d:
  lVar9 = 0;
LAB_14bbf9e9f:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_14bbf9ec5:
  lVar9 = (longlong)local_res18.Value - *(longlong *)(lVar9 + 8);
  pFVar8 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)param_2,true);
  plVar3 = local_res18.Value;
  if ((float)lVar9 < pFVar8->CoolTime * __real_4b189680) {
    return false;
  }
  if (RaidPartyReqTwowayTimeStampMap._8_4_ != RaidPartyReqTwowayTimeStampMap._52_4_) {
    lVar9 = 0x154cf7a98;
    if (RaidPartyReqTwowayTimeStampMap._64_8_ != 0) {
      lVar9 = RaidPartyReqTwowayTimeStampMap._64_8_;
    }
    iVar1 = *(int *)(lVar9 + (ulonglong)(RaidPartyReqTwowayTimeStampMap._72_4_ - 1 & local_res8[0])
                             * 4);
    while (iVar1 != -1) {
      lVar9 = RaidPartyReqTwowayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(uint *)(RaidPartyReqTwowayTimeStampMap._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0])
      {
        if (lVar9 != 0) goto LAB_14bbf9f80;
        goto LAB_14bbf9f5a;
      }
      iVar1 = *(int *)(lVar9 + 0x10);
    }
  }
  lVar9 = 0;
LAB_14bbf9f5a:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_14bbf9f80:
  *(long64 **)(lVar9 + 8) = plVar3;
  return true;
}

// OnCommonPopup_MsgRes @ 14bbfab50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_RaidPartyService::OnCommonPopup_MsgRes
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,bool param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this;
  longlong *plVar3;
  float local_res10 [4];
  uint local_res20 [2];
  FReadAccessScope local_38;
  
  if (param_2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_38);
    if (((*(int *)&param_3->field_0x10 == 0) ||
        (plVar3 = *(longlong **)&param_3->field_0x8, plVar3 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (bVar1) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_38);
      if (*(int *)&param_3->field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&param_3->field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
  }
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this,PopupCommon,local_res20,local_res10);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// OnConfirmRaidPartyChangeLeader @ 14bbfacf0

void __cdecl
FDS_RaidPartyService::OnConfirmRaidPartyChangeLeader
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,long64 param_2)

{
  bool bVar1;
  UDS_M_CommonPopup *this;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = param_1.WeakPtr;
  RequestRaidPartyDelegateLeader(param_2);
  FDS_PartyService::ClosePartyMenuPopup();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res8);
    UDS_M_CommonPopup::CloseCommonPopup(this);
  }
  return;
}

// OnConfirmRaidPartyKick @ 14bbfad40

void __cdecl
FDS_RaidPartyService::OnConfirmRaidPartyKick
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,long64 param_2,bool param_3)

{
  bool bVar1;
  UDS_M_CommonPopup *this;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = param_1.WeakPtr;
  if (param_3) {
    RequestRaidPartyKickVote(param_2);
  }
  else {
    RequestRaidPartyKick(param_2);
  }
  FDS_PartyService::ClosePartyMenuPopup();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res8);
    UDS_M_CommonPopup::CloseCommonPopup(this);
  }
  return;
}

// OnConfirmRaidPartyLeave @ 14bbfad90

void __cdecl
FDS_RaidPartyService::OnConfirmRaidPartyLeave
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_M_CommonPopup *this;
  FWeakObjectPtr local_res8 [4];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  local_res8[0] = param_1.WeakPtr;
  RequestRaidPartyLeave(&local_28);
  FDS_PartyService::ClosePartyMenuPopup();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res8);
    UDS_M_CommonPopup::CloseCommonPopup(this);
  }
  return;
}

// OnRequestRaidPartyCreate @ 14bbfb680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FDS_RaidPartyService::OnRequestRaidPartyCreate
          (int param_1,FString *param_2,FString *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  wchar_t *pwVar11;
  undefined1 auStack_228 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_208;
  basic_string_view<char,std::char_traits<char>_> local_1f8;
  basic_string_view<char,std::char_traits<char>_> local_1e8;
  FDestructionSentinel local_1d8;
  undefined1 *local_1c0;
  FDestructionSentinel local_1b8;
  undefined1 *local_1a0;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_198;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_188;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  bVar4 = IsReqTwowayAvailableTime(0x51a4,CommonSystemCoolTime);
  if (bVar4) {
    pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_198);
    local_208.Object = pTVar5->Object;
    local_208.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    if ((local_208.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar3 = local_208.Object;
    if (((local_208.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51a4) {
      client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                (&(local_208.Object)->clientMsg);
      (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51a4;
      pAVar10 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
      if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
        pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
      }
      pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::RaidPartyCreateRequest>
                         (pAVar10);
      (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
    }
    pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
    if (pMVar6 != (Message *)0x0) {
      *(int *)&pMVar6[2].field_0x8 = param_1;
      *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 4;
      if ((param_2->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      pTVar7 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
               TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                         (&local_188,pwVar11);
      local_1f8._Mydata = pTVar7->Ptr;
      *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
      pAVar10 = (Arena *)(*(ulonglong *)&pMVar6->field_0x8 & 0xfffffffffffffffe);
      if ((pMVar6->field_0x8 & 1) != 0) {
        pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
      }
      local_1f8._Mysize = strlen(local_1f8._Mydata);
      google::protobuf::internal::ArenaStringPtr::Set
                ((ArenaStringPtr *)&pMVar6[1].field_0x8,&local_1f8,pAVar10);
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
      if ((param_3->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      pTVar7 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
               TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                         (&local_e8,pwVar11);
      local_1e8._Mydata = pTVar7->Ptr;
      *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 2;
      pAVar10 = (Arena *)(*(ulonglong *)&pMVar6->field_0x8 & 0xfffffffffffffffe);
      if ((pMVar6->field_0x8 & 1) != 0) {
        pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
      }
      local_1e8._Mysize = strlen(local_1e8._Mydata);
      google::protobuf::internal::ArenaStringPtr::Set
                ((ArenaStringPtr *)(pMVar6 + 2),&local_1e8,pAVar10);
      if ((void *)local_e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._padding_);
      }
      pMVar6[2].field_0xc = param_4;
      *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 8;
      if ((local_208.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_208.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_208.Object)->SuccessDel,(FWriteAccessScope *)&local_1d8);
      local_1c0 = &(pFVar3->SuccessDel).field_0x8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_1c0);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar8[3] = ReceiveRaidPartyCreate;
      }
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
      if ((local_208.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_208.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_208.Object)->FailDel,(FWriteAccessScope *)&local_1b8);
      local_1a0 = &(pFVar3->FailDel).field_0x8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_1a0);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar8[3] = ProcessError;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      this = UDS_NetworkManager::GetInst();
      UDS_NetworkManager::SendTwoWayPacket(this,&local_208);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// OnRequestRaidPartyInvitedRes @ 14bbfba30

void __cdecl
FDS_RaidPartyService::OnRequestRaidPartyInvitedRes(long64 param_1,int param_2,bool param_3)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar5->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar3 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51a6) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51a6;
    pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::RaidPartyInvitedResRequest>(pAVar9);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(long64 *)&pMVar6[1].field_0x8 = param_1;
    uVar1 = *(uint *)(pMVar6 + 1);
    *(int *)(pMVar6 + 2) = param_2;
    pMVar6[2].field_0x4 = param_3;
    *(uint *)(pMVar6 + 1) = uVar1 | 7;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar3 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar3->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ReceiveRaidPartyInvitedRes;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar3 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar3->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// OnRequestRaidPartyJoin @ 14bbfbc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FDS_RaidPartyService::OnRequestRaidPartyJoin(long64 param_1,FString *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  wchar_t *pwVar11;
  undefined1 auStack_168 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_148;
  basic_string_view<char,std::char_traits<char>_> local_138;
  FDestructionSentinel local_128;
  undefined1 *local_110;
  FDestructionSentinel local_108;
  undefined1 *local_f0;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_e8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar4 = IsReqTwowayAvailableTime(0x51ae,CommonSystemCoolTime);
  if (bVar4) {
    pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_e8);
    local_148.Object = pTVar5->Object;
    local_148.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    if ((local_148.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar3 = local_148.Object;
    if (((local_148.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51ae) {
      client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                (&(local_148.Object)->clientMsg);
      (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51ae;
      pAVar10 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
      if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
        pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
      }
      pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::RaidPartyJoinRequest>
                         (pAVar10);
      (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
    }
    pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
    if (pMVar6 != (Message *)0x0) {
      *(long64 *)(pMVar6 + 2) = param_1;
      *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 2;
      if ((param_2->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      pTVar7 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
               TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                         (&local_d8,pwVar11);
      local_138._Mydata = pTVar7->Ptr;
      *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
      pAVar10 = (Arena *)(*(ulonglong *)&pMVar6->field_0x8 & 0xfffffffffffffffe);
      if ((pMVar6->field_0x8 & 1) != 0) {
        pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
      }
      local_138._Mysize = strlen(local_138._Mydata);
      google::protobuf::internal::ArenaStringPtr::Set
                ((ArenaStringPtr *)&pMVar6[1].field_0x8,&local_138,pAVar10);
      if ((void *)local_d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._padding_);
      }
      *(int *)&pMVar6[2].field_0x8 = param_3;
      *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 4;
      if ((local_148.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_148.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_148.Object)->SuccessDel,(FWriteAccessScope *)&local_128);
      local_110 = &(pFVar3->SuccessDel).field_0x8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_110);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar8[3] = ReceiveRaidPartyJoin;
      }
      if (local_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
      }
      if ((local_148.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_148.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_148.Object)->FailDel,(FWriteAccessScope *)&local_108);
      local_f0 = &(pFVar3->FailDel).field_0x8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_f0);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar8[3] = ProcessError;
      }
      if (local_108.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
      }
      this = UDS_NetworkManager::GetInst();
      UDS_NetworkManager::SendTwoWayPacket(this,&local_148);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// OpenCommonPopup @ 14bbfde20

void __cdecl
FDS_RaidPartyService::OpenCommonPopup
          (long64 *param_1,long64 *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  bool bVar2;
  UDS_GameInstance *pUVar3;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_148;
  undefined1 local_140 [8];
  FDelegateAllocation local_138;
  undefined1 local_128 [8];
  FDelegateAllocation local_120;
  UDS_CommonPopupManager *local_110;
  FDS_Text local_108;
  FDS_Text local_b8;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pUVar3 = UDS_GameInstance::GetInst();
  if (pUVar3 == (UDS_GameInstance *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    if (*(void **)&param_3->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_3->field_0x8);
    }
  }
  else {
    local_110 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_110 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_110);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_110 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_110);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_110);
    bVar2 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_148,
                       (void *)0x0);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7761785461911062288>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_RaidPartyService.cpp"
                         ,0x710,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_148);
      UDS_CommonPopupManager::CreateCommonPopup(this);
      bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_res20,
                         (void *)0x0);
      if (bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7761785461911062295>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_RaidPartyService.cpp"
                           ,0x717,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        local_108.StringTableType = None;
        local_108.StringTableID = 0;
        local_108.DateTime.Ticks = 0;
        local_108.TimeSpan.Ticks = 0;
        local_108.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_108.StringEnumTableNameID.Number = 0;
        local_108.TimeExpressionType = None;
        local_108.IsExpression = false;
        local_108.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.UniqueString.Data.ArrayNum = 0;
        local_108.UniqueString.Data.ArrayMax = 0;
        local_108.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.FormatArgs.ArrayNum = 0;
        local_108.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_108,StringUi,*param_1);
        UDS_M_CommonPopup::SetTitle(pUVar4,&local_108);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonCancel,StringUi,0x66,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonConfirm,StringUi,0x67,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        local_b8.StringTableType = None;
        local_b8.StringTableID = 0;
        local_b8.DateTime.Ticks = 0;
        local_b8.TimeSpan.Ticks = 0;
        local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_b8.StringEnumTableNameID.Number = 0;
        local_b8.TimeExpressionType = None;
        local_b8.IsExpression = false;
        local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.UniqueString.Data.ArrayNum = 0;
        local_b8.UniqueString.Data.ArrayMax = 0;
        local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.FormatArgs.ArrayNum = 0;
        local_b8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_b8,StringUi,*param_2);
        UDS_M_CommonPopup::SetMainContent(pUVar4,&local_b8);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        local_140 = (undefined1  [8])0x0;
        local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_138.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
                   (FWriteAccessScope *)&local_68);
        local_50 = &local_138;
        puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_138);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          *(undefined1 *)(puVar5 + 1) = 0;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 2),
                     param_3);
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[5] = uVar6;
          *puVar5 = &
                    ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar5[6] = OnCommonPopup_MsgRes;
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar4,ButtonCancel,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)local_140);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        local_128 = (undefined1  [8])0x0;
        local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_120.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
                   (FWriteAccessScope *)&local_48);
        local_30 = &local_120;
        puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_120);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          *(undefined1 *)(puVar5 + 1) = 1;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 2),
                     param_3);
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[5] = uVar6;
          *puVar5 = &
                    ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar5[6] = OnCommonPopup_MsgRes;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar4,ButtonConfirm,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)local_128);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar4);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    if (*(void **)&param_3->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_3->field_0x8);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// OpenContentByRaidPartyInfo @ 14bbfe220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::OpenContentByRaidPartyInfo(void)

{
  EDS_DungeonType EVar1;
  bool bVar2;
  FDS_RaidPartyRepo *pFVar3;
  UDS_ContentManager *this;
  UDS_LogManager *pUVar4;
  FDS_DungeonBaseTableRow *pFVar5;
  undefined1 auStackY_178 [32];
  EDS_ContentsTabFrameType local_148 [2];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar3);
  if (bVar2) {
    this = UDS_ContentManager::GetInst();
    if (this == (UDS_ContentManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_RaidPartyService::OpenContentByRaidPartyInfo",0x30,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x647,L"contentManager is nullptr.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      local_148[0] = None;
      pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar5 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar3->RaidPartyInfo).DungeonId,true);
      EVar1 = pFVar5->DungeonType;
      if (EVar1 == Normal) {
        local_148[0] = NormalDungeon;
      }
      else if (EVar1 == Heroic) {
        local_148[0] = HeroicDungeon;
      }
      else if (EVar1 == Raid) {
        local_148[0] = RaidDungeon;
      }
      local_140 = 0;
      UDS_ContentManager::OpenContent(this,local_148,(TObjectPtr<UDS_ContentArguments>)&local_140);
    }
  }
  return;
}

// OpenInviteWindow @ 14bbfe380

void __cdecl FDS_RaidPartyService::OpenInviteWindow(UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *pUVar6;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_UserWidget *local_res20;
  UDS_UserWidget *local_108;
  UDS_UserWidget *local_100;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  FDS_Text local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x28);
    pFVar8 = (FDS_ViewModelContext *)0x0;
    pFVar9 = pFVar8;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PartyInvitation__6B_;
      *(undefined4 *)&pFVar3[1]._padding_ = 0;
      pFVar9 = pFVar3;
    }
    pFVar4 = ::operator_new(0x20);
    pFVar3 = pFVar8;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PartyInvitation__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar9;
      pFVar3 = pFVar4;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_PartyInvitation::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar5;
    pUVar6 = UDS_ViewModelContextManager::GetInst();
    if (pUVar6 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar3 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar3->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar3->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_f8.Object = pFVar9;
      local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
      UDS_ViewModelContextManager::RegisterContext(pUVar6,&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = PartyInvitation;
    *(undefined4 *)&pFVar9[1]._padding_ = 2;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_78.Object = pFVar9;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_78,false);
    pFVar4 = ::operator_new(0x70);
    pFVar9 = pFVar8;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar4->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar4[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar4[1]._padding_ + 7) = 0;
      *(undefined2 *)&((atomic<int> *)&pFVar4[2].DerivedStaticStruct)[1].field_0x1 = 0;
      ((atomic<int> *)&pFVar4[2].DerivedStaticStruct)[1].field_0x3 = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      pFVar4->ViewModelTemplateKey = None;
      *(undefined1 *)&pFVar4[1]._padding_ = 0;
      *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
      pFVar4[1].ViewModelName.ComparisonIndex = 0;
      pFVar4[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar4[1].ViewModelTemplateKey = 0;
      pFVar4[2]._padding_ = 0;
      *(atomic<int> *)&pFVar4[2].DerivedStaticStruct = (atomic<int>)0x0;
      *(undefined1 *)((atomic<int> *)&pFVar4[2].DerivedStaticStruct + 1) = 0;
      pFVar4[2].ViewModelName.ComparisonIndex = 0;
      pFVar4[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar4[2].ViewModelTemplateKey = 0;
      pFVar4[3]._padding_ = 0;
      *(undefined8 *)&pFVar4[3].DerivedStaticStruct = 0;
      pFVar9 = pFVar4;
    }
    pFVar7 = ::operator_new(0x20);
    pFVar4 = pFVar8;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar9;
      pFVar4 = pFVar7;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_PopupTitle::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar5;
    pUVar6 = UDS_ViewModelContextManager::GetInst();
    if (pUVar6 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar4->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_e8.Object = pFVar9;
      local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
      UDS_ViewModelContextManager::RegisterContext(pUVar6,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = W_ContentsPopupTitle;
    local_c8.StringTableType = None;
    local_c8.StringTableID = 0;
    local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_c8.StringEnumTableNameID.Number = 0;
    local_c8.DateTime.Ticks = 0;
    local_c8.TimeSpan.Ticks = 0;
    local_c8.TimeExpressionType = None;
    local_c8.IsExpression = false;
    local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.UniqueString.Data.ArrayNum = 0;
    local_c8.UniqueString.Data.ArrayMax = 0;
    local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.FormatArgs.ArrayNum = 0;
    local_c8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_c8,StringUi,0x33477);
    FDS_Text::operator=((FDS_Text *)(pFVar9 + 1),&local_c8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data,
               local_c8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_c8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_c8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.UniqueString.Data.AllocatorInstance.Data);
    }
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar4->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_68.Object = pFVar9;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_108 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_108);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_68,false);
    pFVar7 = ::operator_new(0x30);
    pFVar9 = pFVar8;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
      *(undefined4 *)&((atomic<int> *)&pFVar7[1].DerivedStaticStruct)->field_0x2 = 0;
      *(undefined2 *)&((atomic<int> *)&pFVar7[1].DerivedStaticStruct)[1].field_0x2 = 0;
      *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->ViewModelTemplateKey = None;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKey__6B_;
      *(undefined2 *)&pFVar7[1].DerivedStaticStruct = 0x100;
      pFVar9 = pFVar7;
    }
    pFVar7 = ::operator_new(0x20);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKey__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar9;
      pFVar8 = pFVar7;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_InputKey::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar5;
    pUVar6 = UDS_ViewModelContextManager::GetInst();
    if (pUVar6 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar9;
      local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelContextManager::RegisterContext(pUVar6,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = InputKey;
    *(undefined4 *)&pFVar9[1]._padding_ = 0x4e28;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_58.Object = pFVar9;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_100 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_100);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_58,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar3);
  }
  return;
}

// OpenInviteWindow @ 14bbfe8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::OpenInviteWindow(void)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UDS_WindowManager *this;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  FDelegateAllocation local_170;
  FWeakObjectPtr local_160;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_160,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_RaidPartyService::OpenInviteWindow",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x53d,L"playerData is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pUVar4 = FWeakObjectPtr::Get(&local_160);
      if ((pFVar2->RaidPartyInfo).LeaderUID == *(longlong *)&pUVar4[6].field_0x8) {
        this = UDS_WindowManager::GetInst();
        if (this == (UDS_WindowManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"FDS_RaidPartyService::OpenInviteWindow",0x26,Yes);
            UDS_LogManager::PrintLog
                      (pUVar3,1,Warning,local_138.Ptr,0x549,L"windowManager is nullptr.");
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
        }
        else {
          local_178 = (undefined1  [8])0x0;
          local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_170.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                     (FWriteAccessScope *)&local_158);
          local_140 = &local_170;
          puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_170);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar6 = FDelegateHandle::GenerateNewID();
            puVar5[2] = uVar6;
            *puVar5 = &
                      ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar5[3] = OpenInviteWindow;
          }
          if (local_158.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
          }
          pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&local_158,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)local_178);
          UDS_WindowManager::OpenWindow(this,PartyInvitation,pTVar7);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                     (FWriteAccessScope *)&local_158);
          if ((local_170.DelegateSize != 0) &&
             (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_170.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_170,0,0,0x10);
            local_170.DelegateSize = 0;
          }
          if (local_158.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
          }
          if (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_170.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_178);
        }
      }
    }
  }
  return;
}

// OpenPartyLeavePopup @ 14bbfec80

void __cdecl
FDS_RaidPartyService::OpenPartyLeavePopup
          (long64 *param_1,long64 *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  bool bVar2;
  UDS_GameInstance *pUVar3;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar4;
  FDS_RaidPartyRepo *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDS_PartyRepo *pFVar7;
  FDestructionSentinel *pFVar8;
  FWeakObjectPtr local_res20;
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  FWeakObjectPtr local_1a0;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined1 local_180 [8];
  FDelegateAllocation local_178;
  UDS_CommonPopupManager *local_168;
  FDS_Text local_160;
  FDS_Text local_110;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pUVar3 = UDS_GameInstance::GetInst();
  if (pUVar3 == (UDS_GameInstance *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    if (*(void **)&param_3->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_3->field_0x8);
    }
    goto LAB_14bbff206;
  }
  local_168 = UDS_CommonPopupManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_168 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168);
  }
  local_1a0.ObjectIndex = 0;
  local_1a0.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_168 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168);
  }
  FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_168);
  bVar2 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_1a0,(void *)0x0
                    );
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7761785461911062244>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_RaidPartyService.cpp"
                       ,0x6e4,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_1a0);
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_res20,(void *)0x0)
    ;
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7761785461911062251>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_RaidPartyService.cpp"
                         ,0x6eb,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
      local_160.StringTableType = None;
      local_160.StringTableID = 0;
      local_160.DateTime.Ticks = 0;
      local_160.TimeSpan.Ticks = 0;
      local_160.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_160.StringEnumTableNameID.Number = 0;
      local_160.TimeExpressionType = None;
      local_160.IsExpression = false;
      local_160.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.UniqueString.Data.ArrayNum = 0;
      local_160.UniqueString.Data.ArrayMax = 0;
      local_160.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.FormatArgs.ArrayNum = 0;
      local_160.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_160,StringUi,*param_1);
      UDS_M_CommonPopup::SetTitle(pUVar4,&local_160);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
      UDS_M_CommonPopup::SetButton(pUVar4,ButtonCancel,StringUi,0x66,false);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
      UDS_M_CommonPopup::SetButton(pUVar4,ButtonConfirm,StringUi,0x67,false);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
      local_110.StringTableType = None;
      local_110.StringTableID = 0;
      local_110.DateTime.Ticks = 0;
      local_110.TimeSpan.Ticks = 0;
      local_110.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_110.StringEnumTableNameID.Number = 0;
      local_110.TimeExpressionType = None;
      local_110.IsExpression = false;
      local_110.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.UniqueString.Data.ArrayNum = 0;
      local_110.UniqueString.Data.ArrayMax = 0;
      local_110.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.FormatArgs.ArrayNum = 0;
      local_110.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_110,StringUi,*param_2);
      UDS_M_CommonPopup::SetMainContent(pUVar4,&local_110);
      local_1b8 = (undefined1  [8])0x0;
      local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1b0.DelegateSize = 0;
      this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
      if (bVar2) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                   (FWriteAccessScope *)&local_a8);
        local_90 = &local_1b0;
        puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 1),
                     param_3);
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[4] = uVar6;
          *puVar5 = &
                    ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar5[5] = RequestRaidPartyLeave;
        }
        if (local_a8.bDestroyed == false) {
          pFVar8 = &local_a8;
LAB_14bbfefed:
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,pFVar8);
        }
      }
      else {
        pFVar7 = TDS_Singleton<FDS_PartyRepo>::GetInst();
        bVar2 = FDS_PartyInfo::IsValid(&pFVar7->PartyInfo);
        if (bVar2) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                     (FWriteAccessScope *)&local_88);
          local_70 = &local_1b0;
          puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
            ;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 1),
                       param_3);
            uVar6 = FDelegateHandle::GenerateNewID();
            puVar5[4] = uVar6;
            *puVar5 = &
                      ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
            ;
            puVar5[5] = FDS_PartyService::RequestPartyLeave;
          }
          if (local_88.bDestroyed == false) {
            pFVar8 = &local_88;
            local_a8.Accessor = local_88.Accessor;
            goto LAB_14bbfefed;
          }
        }
      }
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
      local_198 = (undefined1  [8])0x0;
      local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_190.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                 (FWriteAccessScope *)&local_68);
      local_50 = &local_190;
      puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_190);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
        ;
        *(undefined1 *)(puVar5 + 1) = 0;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 2),
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b8);
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[5] = uVar6;
        *puVar5 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
        ;
        puVar5[6] = OnCommonPopup_MsgRes;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar4,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_198);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
      local_180 = (undefined1  [8])0x0;
      local_178.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_178.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
                 (FWriteAccessScope *)&local_48);
      local_30 = &local_178;
      puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_178);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
        ;
        *(undefined1 *)(puVar5 + 1) = 1;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 2),
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b8);
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[5] = uVar6;
        *puVar5 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
        ;
        puVar5[6] = OnCommonPopup_MsgRes;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar4,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_180);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_c0);
      if ((local_1b0.DelegateSize != 0) &&
         (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1b0,0,0,0x10);
        local_1b0.DelegateSize = 0;
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1b8);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
LAB_14bbff206:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// OpenRaidPartyChangeLeaderPopup @ 14bbff230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup(long64 param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *this;
  FDS_RaidPartyMemberInfo *pFVar2;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_M_CommonPopup *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auStackY_228 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_1f8;
  undefined1 local_1f0 [8];
  ForAnyElementType local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8 [8];
  FDelegateAllocation local_1d0;
  FDestructionSentinel local_1c0;
  FDelegateAllocation *local_1a8;
  FDS_Text local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar2 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(this,param_1);
  if (pFVar2->PlayerUID < 1) {
    return;
  }
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup",0x34,Yes);
    pwVar8 = L"commonPopupManager == nullptr";
    uVar7 = 0x55c;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1f8,(void *)0x0);
    if (!bVar1) {
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f8);
      local_1a0.StringTableType = None;
      local_1a0.StringTableID = 0;
      local_1a0.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a0.StringEnumTableNameID.Number = 0;
      local_1a0.TimeExpressionType = None;
      local_1a0.IsExpression = false;
      local_1a0.DateTime.Ticks = 0;
      local_1a0.TimeSpan.Ticks = 0;
      local_1a0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.UniqueString.Data.ArrayNum = 0;
      local_1a0.UniqueString.Data.ArrayMax = 0;
      local_1a0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.FormatArgs.ArrayNum = 0;
      local_1a0.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1a0,StringUi,0x33474);
      UDS_M_CommonPopup::SetTitle(pUVar4,&local_1a0);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f8);
      UDS_M_CommonPopup::SetButton(pUVar4,ButtonCancel,StringUi,0x66,false);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f8);
      UDS_M_CommonPopup::SetButton(pUVar4,ButtonConfirm,StringUi,0x67,false);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f8);
      local_1e0 = 0;
      local_1f0 = (undefined1  [8])0x0;
      local_1e8.Data = (FScriptContainerElement *)0x0;
      local_1d8 = (undefined1  [8])0x0;
      local_1d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
                 (FWriteAccessScope *)&local_1c0);
      local_1a8 = &local_1d0;
      puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_1d0);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
        ;
        *(undefined1 *)(puVar5 + 1) = 0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar5 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[5] = uVar6;
        *puVar5 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
        ;
        puVar5[6] = OnCommonPopup_MsgRes;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar4,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
                 (FWriteAccessScope *)&local_1c0);
      if (((int)local_1e0 != 0) && (local_1e8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_1e8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e8,0,0,0x10);
        local_1e0 = local_1e0 & 0xffffffff00000000;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1f0);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f8);
      local_1d8 = (undefined1  [8])0x0;
      local_1d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
                 (FWriteAccessScope *)&local_1c0);
      local_1a8 = &local_1d0;
      puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_1d0);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
        ;
        puVar5[1] = param_1;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
        ;
        puVar5[3] = OnConfirmRaidPartyChangeLeader;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar4,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d8);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar4);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup",0x34,Yes);
    pwVar8 = L"CommonPopupModel == nullptr";
    uVar7 = 0x563;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OpenRaidPartyKickPopup @ 14bbff640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_RaidPartyService::OpenRaidPartyKickPopup(long64 param_1)

{
  FDS_TextFormatArg *this;
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  int iVar7;
  EDS_RaidPartyState EVar8;
  bool bVar9;
  int iVar10;
  FDS_RaidPartyRepo *pFVar11;
  FDS_RaidPartyMemberInfo *pFVar12;
  FDS_RaidPartyMemberInfo *pFVar13;
  UDS_LogManager *pUVar14;
  FDateTime FVar15;
  UDS_CommonPopupManager *this_00;
  FDS_DungeonBaseTableRow *pFVar16;
  UDS_M_CommonPopup *pUVar17;
  FDS_Text *pFVar18;
  FNumberFormattingOptions *pFVar19;
  FString *this_01;
  undefined8 *puVar20;
  ulong64 uVar21;
  long64 lVar22;
  undefined1 uVar23;
  float fVar24;
  undefined1 auStackY_248 [32];
  uint uVar25;
  wchar_t *pwVar26;
  undefined1 local_208 [8];
  FDelegateAllocation local_200;
  FWeakObjectPtr local_1f0;
  undefined1 local_1e8 [8];
  ForAnyElementType local_1e0;
  ulonglong local_1d8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  FDS_Text local_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar12 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(pFVar11,param_1);
  if (pFVar12->PlayerUID < 1) {
    return false;
  }
  pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar13 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar11);
  if (pFVar13->PlayerUID < 1) {
    return false;
  }
  pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  if (2 < (pFVar11->RaidPartyInfo).State) {
    lVar22 = 0x34800;
LAB_14bbff6d2:
    local_200.DelegateSize = 0;
    local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_208 = (undefined1  [8])0x0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (lVar22,Complete_None_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)local_208);
    return false;
  }
  pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  iVar10 = (pFVar11->RaidPartyInfo).DungeonId;
  if (iVar10 < 1) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_RaidPartyService::OpenRaidPartyKickPopup",0x2c,Yes);
    pwVar26 = L"dungeonID <= 0";
    uVar25 = 0x5b7;
  }
  else {
    pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if ((pFVar11->RaidPartyVoteData).VoteStartTime.Ticks != 0) {
      FVar15 = UDS_TimeUtilManager::GetCurrentServerDateTime();
      dVar3 = (double)(*(longlong *)FVar15.Ticks - (pFVar11->RaidPartyVoteData).VoteStartTime.Ticks)
              * __real_3e7ad7f29abcaf48;
      fVar24 = DS_CommonDataHelper::VoteRetryCoolTime();
      if (dVar3 < (double)fVar24) {
        lVar22 = 0x347ea;
        goto LAB_14bbff6d2;
      }
    }
    if ((pFVar11->RaidPartyVoteData).PlayerUID != 0) {
      lVar22 = 0x347f7;
      goto LAB_14bbff6d2;
    }
    pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    lVar1 = pFVar13->PlayerUID;
    lVar2 = (pFVar11->RaidPartyInfo).LeaderUID;
    pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    EVar8 = FDS_RaidPartyInfo::GetRaidPartyState(&pFVar11->RaidPartyInfo);
    if ((lVar2 == lVar1) && (EVar8 == Waiting)) {
      uVar23 = 0;
    }
    else {
      uVar23 = 1;
      pFVar16 = FDS_DungeonBaseTableRow::Get((longlong)iVar10,true);
      if (pFVar16 == (FDS_DungeonBaseTableRow *)0x0) {
        pUVar14 = UDS_LogManager::GetInst();
        if (pUVar14 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar14 = UDS_LogManager::GetInst();
        local_158._padding_ = (longlong)pFVar16;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_RaidPartyService::OpenRaidPartyKickPopup",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar14,1,Warning,local_158.Ptr,0x5d5,
                   L"dungeonBaseTableRow == nullptr - DungeonID : %d");
        goto LAB_14bbff8a9;
      }
      iVar10 = DS_CommonDataHelper::RequiredVotesForKick12();
      if (pFVar16->DungeonType == Normal) {
        iVar10 = DS_CommonDataHelper::RequiredVotesForKick4();
      }
      pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      if ((pFVar11->RaidPartyInfo).MemberCount < iVar10) {
        lVar22 = 0x3481c;
        goto LAB_14bbff6d2;
      }
    }
    this_00 = UDS_CommonPopupManager::GetInst();
    if (this_00 == (UDS_CommonPopupManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      if (pUVar14 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar14 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_RaidPartyService::OpenRaidPartyKickPopup",0x2c,Yes);
      pwVar26 = L"commonPopupManager == nullptr";
      uVar25 = 0x5e9;
    }
    else {
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar9 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1f0,(void *)0x0)
      ;
      if (!bVar9) {
        pUVar17 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f0);
        pFVar18 = FDS_Text::FromStringTable(&local_1b0,StringUi,0x33472);
        UDS_M_CommonPopup::SetTitle(pUVar17,pFVar18);
        pUVar17 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f0);
        local_1b0.StringTableType = None;
        local_1b0.StringTableID = 0;
        local_1b0.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1b0.StringEnumTableNameID.Number = 0;
        local_1b0.TimeExpressionType = None;
        local_1b0.IsExpression = false;
        local_1b0.DateTime.Ticks = 0;
        local_1b0.TimeSpan.Ticks = 0;
        local_1b0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.UniqueString.Data.ArrayNum = 0;
        local_1b0.UniqueString.Data.ArrayMax = 0;
        local_1b0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.FormatArgs.ArrayNum = 0;
        local_1b0.FormatArgs.ArrayMax = 0;
        local_1e8 = (undefined1  [8])0x0;
        local_1e0.Data = (FScriptContainerElement *)0x0;
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,(ForAnyElementType *)local_1e8,
                            (int *)((longlong)&local_1e0.Data + 4));
        local_1e0.Data._0_4_ = iVar10 + 1;
        this = (FDS_TextFormatArg *)((longlong)local_1e8 + (longlong)iVar10 * 0x28);
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)this);
        pFVar19 = FNumberFormattingOptions::DefaultWithGrouping();
        bVar9 = pFVar19->UseGrouping;
        bVar4 = pFVar19->IndicateNearlyInteger;
        uVar5 = pFVar19->field_0x3;
        EVar6 = pFVar19->RoundingMode;
        iVar10 = pFVar19->MinimumIntegralDigits;
        iVar7 = pFVar19->MaximumIntegralDigits;
        (this->NumberFormatOption).AlwaysSign = pFVar19->AlwaysSign;
        (this->NumberFormatOption).UseGrouping = bVar9;
        (this->NumberFormatOption).IndicateNearlyInteger = bVar4;
        (this->NumberFormatOption).field_0x3 = uVar5;
        (this->NumberFormatOption).RoundingMode = EVar6;
        (this->NumberFormatOption).MinimumIntegralDigits = iVar10;
        (this->NumberFormatOption).MaximumIntegralDigits = iVar7;
        iVar10 = pFVar19->MaximumFractionalDigits;
        (this->NumberFormatOption).MinimumFractionalDigits = pFVar19->MinimumFractionalDigits;
        (this->NumberFormatOption).MaximumFractionalDigits = iVar10;
        FInstancedStruct::InitializeAs<FDS_StringFormatArg>((FInstancedStruct *)this);
        this_01 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>((FInstancedStruct *)this)->
                   Value;
        if (this_01 != (FString *)0x0) {
          ::FString::operator=(this_01,&pFVar12->NickName);
        }
        FDS_Text::SetTextFormatFromStringTable
                  (&local_1b0,StringUi,0x33473,
                   (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)local_1e8);
        DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_1e8,(int)local_1e0.Data);
        if ((atomic<unsigned___int64>)local_1e8 != (atomic<unsigned___int64>)0x0) {
          FMemory::Free((void *)local_1e8);
        }
        UDS_M_CommonPopup::SetMainContent(pUVar17,&local_1b0);
        pUVar17 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f0);
        UDS_M_CommonPopup::SetButton(pUVar17,ButtonCancel,StringUi,0x66,false);
        pUVar17 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f0);
        UDS_M_CommonPopup::SetButton(pUVar17,ButtonConfirm,StringUi,0x67,false);
        pUVar17 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f0);
        local_1d8 = 0;
        local_1e8 = (undefined1  [8])0x0;
        local_1e0.Data = (FScriptContainerElement *)0x0;
        local_208 = (undefined1  [8])0x0;
        local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_200.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
                   (FWriteAccessScope *)&local_1d0);
        local_1b8 = &local_200;
        puVar20 = UE::Core::Private::DelegateAllocate(0x38,&local_200);
        if (puVar20 != (undefined8 *)0x0) {
          *puVar20 = &
                     ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          *(undefined1 *)(puVar20 + 1) = 0;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar20 + 2),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
          uVar21 = FDelegateHandle::GenerateNewID();
          puVar20[5] = uVar21;
          *puVar20 = &
                     ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar20[6] = OnCommonPopup_MsgRes;
        }
        if (local_1d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar17,ButtonCancel,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)local_208);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
                   (FWriteAccessScope *)&local_1d0);
        if (((int)local_1d8 != 0) && (local_1e0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_1e0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e0,0,0,0x10);
          local_1d8 = local_1d8 & 0xffffffff00000000;
        }
        if (local_1d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
        }
        if (local_1e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1e8);
        pUVar17 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f0);
        local_208 = (undefined1  [8])0x0;
        local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_200.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
                   (FWriteAccessScope *)&local_1d0);
        local_1b8 = &local_200;
        puVar20 = UE::Core::Private::DelegateAllocate(0x28,&local_200);
        if (puVar20 != (undefined8 *)0x0) {
          *puVar20 = &
                     ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J_N__6B_
          ;
          puVar20[1] = pFVar12->PlayerUID;
          *(undefined1 *)(puVar20 + 2) = uVar23;
          uVar21 = FDelegateHandle::GenerateNewID();
          puVar20[3] = uVar21;
          *puVar20 = &
                     ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J_N__6B_
          ;
          puVar20[4] = OnConfirmRaidPartyKick;
        }
        if (local_1d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar17,ButtonConfirm,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)local_208);
        pUVar17 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1f0);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar17);
        return true;
      }
      pUVar14 = UDS_LogManager::GetInst();
      if (pUVar14 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar14 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_RaidPartyService::OpenRaidPartyKickPopup",0x2c,Yes);
      pwVar26 = L"CommonPopupModel == nullptr";
      uVar25 = 0x5f0;
    }
  }
  UDS_LogManager::PrintLog(pUVar14,1,Warning,local_158.Ptr,uVar25,pwVar26);
LAB_14bbff8a9:
  if ((FDS_DungeonBaseTableRow *)local_158._padding_ != (FDS_DungeonBaseTableRow *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// OpenRaidPartyLeavePopup @ 14bbffd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::OpenRaidPartyLeavePopup(void)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_218 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_1e8;
  undefined1 local_1e0 [8];
  ForAnyElementType local_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  FDestructionSentinel local_1b0;
  FDelegateAllocation *local_198;
  FDS_Text local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this = UDS_CommonPopupManager::GetInst();
  if (this == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_RaidPartyService::OpenRaidPartyLeavePopup",0x2d,Yes);
    pwVar7 = L"commonPopupManager == nullptr";
    uVar6 = 0x581;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1e8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      local_190.StringTableType = None;
      local_190.StringTableID = 0;
      local_190.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_190.StringEnumTableNameID.Number = 0;
      local_190.TimeExpressionType = None;
      local_190.IsExpression = false;
      local_190.DateTime.Ticks = 0;
      local_190.TimeSpan.Ticks = 0;
      local_190.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.UniqueString.Data.ArrayNum = 0;
      local_190.UniqueString.Data.ArrayMax = 0;
      local_190.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.FormatArgs.ArrayNum = 0;
      local_190.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_190,StringUi,0x33469);
      UDS_M_CommonPopup::SetTitle(pUVar3,&local_190);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      local_190.StringTableType = None;
      local_190.StringTableID = 0;
      local_190.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_190.StringEnumTableNameID.Number = 0;
      local_190.TimeExpressionType = None;
      local_190.DateTime.Ticks = 0;
      local_190.TimeSpan.Ticks = 0;
      local_190.IsExpression = false;
      local_190.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.UniqueString.Data.ArrayNum = 0;
      local_190.UniqueString.Data.ArrayMax = 0;
      local_190.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.FormatArgs.ArrayNum = 0;
      local_190.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_190,StringUi,0x3346a);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&local_190);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x67,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      local_1d0 = 0;
      local_1e0 = (undefined1  [8])0x0;
      local_1d8.Data = (FScriptContainerElement *)0x0;
      local_1c8 = (undefined1  [8])0x0;
      local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                 (FWriteAccessScope *)&local_1b0);
      local_198 = &local_1c0;
      puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_1c0);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
        ;
        *(undefined1 *)(puVar4 + 1) = 0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e0);
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[5] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
        ;
        puVar4[6] = OnCommonPopup_MsgRes;
      }
      if (local_1b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar3,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                 (FWriteAccessScope *)&local_1b0);
      if (((int)local_1d0 != 0) && (local_1d8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_1d8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d8,0,0,0x10);
        local_1d0 = local_1d0 & 0xffffffff00000000;
      }
      if (local_1b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
      }
      if (local_1d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1e0);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      local_1c8 = (undefined1  [8])0x0;
      local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                 (FWriteAccessScope *)&local_1b0);
      local_198 = &local_1c0;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_1c0);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar4[3] = OnConfirmRaidPartyLeave;
      }
      if (local_1b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar3,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1c8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_RaidPartyService::OpenRaidPartyLeavePopup",0x2d,Yes);
    pwVar7 = L"CommonPopupModel == nullptr";
    uVar6 = 0x588;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OpenVoteWindow @ 14bc00180

void __cdecl FDS_RaidPartyService::OpenVoteWindow(UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x28);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar5 = pFVar6;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar3[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 7) = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_OpenRiadPartyVote__6B_;
      *(undefined1 *)&pFVar3[1]._padding_ = 0;
      pFVar5 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_OpenRiadPartyVote__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      pFVar6 = pFVar3;
    }
    if ((pFVar5 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_OpenRiadPartyVote::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this = UDS_ViewModelContextManager::GetInst();
    if (this != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar5;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar5->ViewModelTemplateKey = RiadPartyVote;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar5;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// ProcessError @ 14bc02620

bool __cdecl FDS_RaidPartyService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  EDS_ErrorCode EVar1;
  long64 lVar2;
  EDS_MessageDefineType EVar3;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  EVar1 = param_1->ErrorCode;
  if (EVar1 == RaidMemberIsFull) {
    lVar2 = 0x347dc;
  }
  else {
    if (EVar1 == NotMatchPassword) {
      EVar3 = Alert_None_01;
      lVar2 = 0x347e0;
      goto LAB_14bc0265c;
    }
    if (EVar1 != NotJoinRaidPartyByKickPlayer) {
      return false;
    }
    lVar2 = 0x347dd;
  }
  EVar3 = Complete_None_01;
LAB_14bc0265c:
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(lVar2,EVar3,&local_28);
  return true;
}

// ReceiveDungeonIn @ 14bc03d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::ReceiveDungeonIn(ServerMessagesTwoway *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_CCSAIManager *this;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = UDS_GameInstance::GetIsCCSAIMode();
  if (bVar2) {
    this = UDS_CCSAIManager::GetInst();
    if (this == (UDS_CCSAIManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_RaidPartyService::ReceiveDungeonIn",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x31a,L"ccsAIMng is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7761785461911061275>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_RaidPartyService.cpp"
                         ,0x31b,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UDS_CCSAIManager::OnRecv_DungeonIn(this);
    }
  }
  return;
}

// ReceiveDungeonOut @ 14bc03e90

void __cdecl FDS_RaidPartyService::ReceiveDungeonOut(ServerMessagesTwoway *param_1)

{
  UDS_DungeonManager *this;
  
  this = UDS_DungeonManager::GetInst();
  if (this != (UDS_DungeonManager *)0x0) {
    UDS_DungeonManager::RemoveAllDungeonNpc(this);
    return;
  }
  return;
}

// ReceiveGetRaidPartyInfo @ 14bc042e0

void __cdecl FDS_RaidPartyService::ReceiveGetRaidPartyInfo(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveGetRaidPartyInfo @ 14bc042f0

void __cdecl
FDS_RaidPartyService::ReceiveGetRaidPartyInfo
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar3 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    if (*(int *)&param_2->field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar1 = *(void **)&param_2->field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ReceiveGetRaidPartyInfoSearch @ 14bc043d0

void __cdecl FDS_RaidPartyService::ReceiveGetRaidPartyInfoSearch(ServerMessages *param_1)

{
  undefined8 *puVar1;
  long64 lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_DungeonManager *this;
  FDS_RaidPartySimpleInfo *pFVar6;
  longlong lVar7;
  GetRaidPartyInfoSearchResponseDefaultTypeInternal *pGVar8;
  undefined8 *puVar9;
  TArray<FDS_RaidPartySimpleInfo,TSizedDefaultAllocator<32>_> local_78;
  FDS_RaidPartySimpleInfo local_68;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x514b) {
    pGVar8 = *(GetRaidPartyInfoSearchResponseDefaultTypeInternal **)
              &(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar8 = &server_msg::_GetRaidPartyInfoSearchResponse_default_instance_;
  }
  this = UDS_DungeonManager::GetInst();
  if (this != (UDS_DungeonManager *)0x0) {
    puVar9 = (undefined8 *)&((Message *)((longlong)pGVar8 + 0x10))->field_0x8;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    if ((*puVar9 & 1) != 0) {
      puVar9 = (undefined8 *)(*puVar9 + 7);
    }
    puVar1 = puVar9 + *(int *)((longlong)pGVar8 + 0x20);
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      pFVar6 = FDS_RaidPartySimpleInfo::FDS_RaidPartySimpleInfo
                         (&local_68,(RaidPartySimpleInfo *)*puVar9);
      if (((local_78.AllocatorInstance.Data <= pFVar6) &&
          (pFVar6 < (FDS_RaidPartySimpleInfo *)
                    (local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 0x48))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = local_78.ArrayNum;
      if (local_78.ArrayNum == local_78.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      lVar7 = (longlong)iVar5;
      local_78.ArrayNum = iVar5 + 1;
      *(long64 *)&local_78.AllocatorInstance.Data[lVar7 * 0x48].field_0x0 = pFVar6->RaidPartyUID;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 8) = pFVar6->DungeonId;
      *(undefined8 *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x10) = 0;
      *(FScriptContainerElement **)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x10) =
           (pFVar6->PartyName).Data.AllocatorInstance.Data;
      (pFVar6->PartyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x18) =
           (pFVar6->PartyName).Data.ArrayNum;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x1c) =
           (pFVar6->PartyName).Data.ArrayMax;
      (pFVar6->PartyName).Data.ArrayNum = 0;
      (pFVar6->PartyName).Data.ArrayMax = 0;
      local_78.AllocatorInstance.Data[lVar7 * 0x48 + 0x20] =
           (FScriptContainerElement)pFVar6->IsPassword;
      lVar2 = pFVar6->LeaderUID;
      *(undefined8 *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x30) = 0;
      *(long64 *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x28) = lVar2;
      *(FScriptContainerElement **)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x30) =
           (pFVar6->LeaderNickName).Data.AllocatorInstance.Data;
      (pFVar6->LeaderNickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x38) =
           (pFVar6->LeaderNickName).Data.ArrayNum;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x3c) =
           (pFVar6->LeaderNickName).Data.ArrayMax;
      (pFVar6->LeaderNickName).Data.ArrayNum = 0;
      (pFVar6->LeaderNickName).Data.ArrayMax = 0;
      local_78.AllocatorInstance.Data[lVar7 * 0x48 + 0x40] =
           (FScriptContainerElement)pFVar6->IsPublic;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x44) = pFVar6->MemberCount;
      if (local_68.LeaderNickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.LeaderNickName.Data.AllocatorInstance.Data);
      }
      if (local_68.PartyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.PartyName.Data.AllocatorInstance.Data);
      }
    }
    UDS_DungeonManager::SetRaidPartySimpleInfoList(this,&local_78);
    DestructItems<FDS_RaidPartySimpleInfo,int>
              ((FDS_RaidPartySimpleInfo *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if ((FDS_RaidPartySimpleInfo *)local_78.AllocatorInstance.Data != (FDS_RaidPartySimpleInfo *)0x0
       ) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// ReceiveRaidPartyChangeSetting @ 14bc06f50

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyChangeSetting(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyClearExitNotify @ 14bc06f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyClearExitNotify(ServerMessages *param_1)

{
  bool bVar1;
  char cVar2;
  FDS_RaidPartyRepo *this;
  UDS_WindowManager *this_00;
  UObject *pUVar3;
  ServerMessages *local_res8;
  uint local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  local_res8 = param_1;
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::Clear(this);
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)local_res18);
    bVar1 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      if (cVar2 == '\x01') {
        local_res8 = (ServerMessages *)((ulonglong)local_res8 & 0xffffffff00000000);
        local_res10[0] = 0;
        UDS_WindowManager::CloseWindow(this_00,BtnDungeonExit,local_res10,(float *)&local_res8);
      }
    }
  }
  return;
}

// ReceiveRaidPartyCreate @ 14bc07000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyCreate(ServerMessagesTwoway *param_1)

{
  UDS_WindowManager *this;
  FDS_RaidPartyRepo *this_00;
  RaidPartyInfo *pRVar1;
  RaidPartyCreateResponseDefaultTypeInternal *pRVar2;
  float local_res8 [2];
  uint local_res10 [6];
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x51a4) {
    pRVar2 = (RaidPartyCreateResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pRVar2 = &server_msg_twoway::_RaidPartyCreateResponse_default_instance_;
  }
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res10[0] = 0;
    UDS_WindowManager::CloseWindow(this,PartyCreate,local_res10,local_res8);
    this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pRVar1 = &ds_proto::_RaidPartyInfo_default_instance_._instance;
    if (*(RaidPartyInfo **)&((Message *)((longlong)pRVar2 + 0x10))->field_0x8 !=
        (RaidPartyInfo *)0x0) {
      pRVar1 = *(RaidPartyInfo **)&((Message *)((longlong)pRVar2 + 0x10))->field_0x8;
    }
    FDS_RaidPartyRepo::SetRaidPartyInfo(this_00,pRVar1);
    return;
  }
  return;
}

// ReceiveRaidPartyDelegateLeader @ 14bc07080

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyDelegateLeader(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyDeleteNotify @ 14bc07090

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyDeleteNotify(ServerMessages *param_1)

{
  FDS_RaidPartyRepo *this;
  
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::Clear(this);
  return;
}

// ReceiveRaidPartyDungeonStart @ 14bc070b0

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyDungeonStart(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyDungeonStartNotify @ 14bc070c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyDungeonStartNotify(ServerMessages *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  UDS_CCSAIManager *this;
  UDS_LogManager *pUVar5;
  UDS_ContentManager *this_00;
  APawn *this_01;
  ADS_PlayerController *this_02;
  FDS_RaidPartyMemberInfo *pFVar6;
  FDS_RaidPartyMemberInfo *pFVar7;
  UDS_DungeonPlayBuildManager *this_03;
  UDS_UIMessageManager *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FDS_TimeCoolDownTableRow *pFVar11;
  RaidPartyDungeonStartNotifyDefaultTypeInternal *pRVar12;
  undefined1 auStackY_588 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_558;
  FDelegateAllocation local_550;
  undefined1 local_540 [8];
  ForAnyElementType local_538;
  int local_530;
  FWeakObjectPtr local_528;
  FDS_Text local_520;
  FDestructionSentinel local_4d0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_4b8;
  FDestructionSentinel local_4a0;
  FDestructionSentinel local_488;
  FDelegateAllocation *local_470;
  FReadAccessScope local_468;
  FDS_UIMessageInfo local_450;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_588;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5143) {
    pRVar12 = *(RaidPartyDungeonStartNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar12 = &server_msg::_RaidPartyDungeonStartNotify_default_instance_;
  }
  lVar1 = *(longlong *)&((Message *)((longlong)pRVar12 + 0x10))->field_0x8;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  if (lVar1 == (pFVar4->RaidPartyInfo).RaidPartyUID) {
    bVar3 = UDS_GameInstance::GetIsCCSAIMode();
    if (bVar3) {
      this = UDS_CCSAIManager::GetInst();
      if (this == (UDS_CCSAIManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_378._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_378,"FDS_RaidPartyService::ReceiveRaidPartyDungeonStartNotify",0x38,Yes)
          ;
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_378.Ptr,0x46e,L"ccsAIMng is nullptr.");
          if ((void *)local_378._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_378._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7761785461911061615>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_RaidPartyService.cpp"
                           ,0x46f,"false");
        if (bVar3) goto code_r0x00014bc0720b;
      }
      else {
        UDS_CCSAIManager::OnRecv_RaidPartyDungeonStartNotify(this);
      }
    }
    else {
      pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      FDS_RaidPartyRepo::RaidPartyStateChange(pFVar4,Starting);
      this_00 = UDS_ContentManager::GetInst();
      if (this_00 == (UDS_ContentManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_258._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_258,"FDS_RaidPartyService::ReceiveRaidPartyDungeonStartNotify",0x38,Yes)
          ;
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_258.Ptr,0x47b,L"contentManager is nullptr.");
          if ((void *)local_258._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_258._padding_);
          }
        }
      }
      else {
        UDS_ContentManager::CloseContent(this_00);
        ADS_MainCharacter::GetMainPlayer();
        bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_528,
                           (void *)0x0);
        if (!bVar3) {
          this_01 = (APawn *)FWeakObjectPtr::Get(&local_528);
          this_02 = APawn::GetController<ADS_PlayerController>(this_01);
          if (this_02 != (ADS_PlayerController *)0x0) {
            ADS_PlayerController::SetActionModeCursor(this_02,true);
            pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
            pFVar6 = FDS_RaidPartyRepo::GetRaidPartyLeaderMemberInfo(pFVar4);
            pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
            pFVar7 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar4);
            if (pFVar6->PlayerUID == pFVar7->PlayerUID) {
              RequestRaidPartyInDungeon();
            }
            else {
              bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
              if (bVar3) {
                this_03 = UDS_DungeonPlayBuildManager::GetInst();
                if ((this_03 == (UDS_DungeonPlayBuildManager *)0x0) &&
                   (pUVar5 = UDS_LogManager::GetInst(), pUVar5 != (UDS_LogManager *)0x0)) {
                  pUVar5 = UDS_LogManager::GetInst();
                  local_138._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_138,"FDS_RaidPartyService::ReceiveRaidPartyDungeonStartNotify",
                             0x38,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar5,1,Warning,local_138.Ptr,0x49b,L"dungeonPlayBuildMng is nullptr."
                            );
                  if ((void *)local_138._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_138._padding_);
                  }
                }
                UDS_DungeonPlayBuildManager::ReserveRequestRaidPartyInDungeon(this_03);
              }
              else {
                pUVar8 = UDS_UIMessageManager::GetInst();
                if (pUVar8 != (UDS_UIMessageManager *)0x0) {
                  local_558.AccessDetector.State =
                       (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
                  local_550.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                  local_550.DelegateSize = 0;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            (&local_558,(FWriteAccessScope *)&local_488);
                  local_470 = &local_550;
                  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_550);
                  if (puVar9 != (undefined8 *)0x0) {
                    *puVar9 = &
                              ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy____V__6B_
                    ;
                    uVar10 = FDelegateHandle::GenerateNewID();
                    puVar9[2] = uVar10;
                    *puVar9 = &
                              ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy____V__6B_
                    ;
                    puVar9[3] = Recive_DungeonStartAlarm_MsgRes;
                  }
                  if (local_488.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
                  }
                  pFVar11 = FDS_TimeCoolDownTableRow::GetRef(0x9ca5,true);
                  FDS_UIMessageInfo::FDS_UIMessageInfo(&local_450,Request_Popup);
                  local_520.StringTableType = None;
                  local_520.StringTableID = 0;
                  local_520.StringEnumTableNameID.ComparisonIndex.Value = 0;
                  local_520.StringEnumTableNameID.Number = 0;
                  local_520.TimeExpressionType = None;
                  local_520.DateTime.Ticks = 0;
                  local_520.TimeSpan.Ticks = 0;
                  local_520.IsExpression = false;
                  local_520.UniqueString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_520.UniqueString.Data.ArrayNum = 0;
                  local_520.UniqueString.Data.ArrayMax = 0;
                  local_520.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_520.FormatArgs.ArrayNum = 0;
                  local_520.FormatArgs.ArrayMax = 0;
                  FDS_Text::SetTextFromStringTable(&local_520,StringBase,0x334a8);
                  FDS_Text::operator=(&local_450.MsgText,&local_520);
                  DestructItems<FDS_TextFormatArg,int>
                            ((FDS_TextFormatArg *)local_520.FormatArgs.AllocatorInstance.Data,
                             local_520.FormatArgs.ArrayNum);
                  if ((FDS_TextFormatArg *)local_520.FormatArgs.AllocatorInstance.Data !=
                      (FDS_TextFormatArg *)0x0) {
                    FMemory::Free(local_520.FormatArgs.AllocatorInstance.Data);
                  }
                  if (local_520.UniqueString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_520.UniqueString.Data.AllocatorInstance.Data);
                  }
                  local_450.MessageCoolTime = pFVar11->CoolTime;
                  local_540 = (undefined1  [8])0x0;
                  local_538.Data = (FScriptContainerElement *)0x0;
                  local_530 = 0;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                            (&local_558,&local_468);
                  if ((local_550.DelegateSize != 0) &&
                     (local_550.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                    (**(code **)(*(longlong *)local_550.DelegateAllocator + 0x50))
                              (local_550.DelegateAllocator,local_540);
                  }
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                  ~FReadAccessScope(&local_468);
                  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_450.UIMsgResDel,
                             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_540);
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_540,
                             (FWriteAccessScope *)&local_4d0);
                  if ((local_530 != 0) && (local_538.Data != (FScriptContainerElement *)0x0)) {
                    (*(code *)**(undefined8 **)local_538.Data)();
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_538,0,0,0x10);
                    local_530 = 0;
                  }
                  if (local_4d0.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d0.Accessor,&local_4d0);
                  }
                  if (local_538.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_538.Data);
                  }
                  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                            ((FMRSWRecursiveAccessDetector *)local_540);
                  local_450.StringUiTID = 0x334a8;
                  UDS_UIMessageManager::OpenMsgByMsgInfo(&local_450);
                  if (this_02->InputControlType == UIMode) {
                    local_4b8._0_8_ = 0;
                    local_4b8._8_8_ = 0;
                    local_4b8._16_4_ = 0;
                    UDS_UIMessageManager::OpenMsgByStringUi(0x34803,Complete_System_01,&local_4b8);
                  }
                  FDS_UIMessageInfo::~FDS_UIMessageInfo(&local_450);
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            (&local_558,(FWriteAccessScope *)&local_4a0);
                  if ((local_550.DelegateSize != 0) &&
                     (local_550.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                    (*(code *)**(undefined8 **)local_550.DelegateAllocator)();
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              ((ForAnyElementType *)&local_550,0,0,0x10);
                    local_550.DelegateSize = 0;
                  }
                  if (local_4a0.bDestroyed == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a0.Accessor,&local_4a0);
                  }
                  if (local_550.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                    FMemory::Free((void *)local_550.DelegateAllocator);
                  }
                  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                            (&local_558.AccessDetector);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7761785461911061604>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_RaidPartyService.cpp"
                       ,0x464,"false");
    if (bVar3) {
code_r0x00014bc0720b:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ReceiveRaidPartyInfoNotify @ 14bc076c0

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyInfoNotify(ServerMessages *param_1)

{
  FDS_RaidPartyRepo *this;
  RaidPartyInfo *pRVar1;
  RaidPartyInfoNotifyDefaultTypeInternal *pRVar2;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5144) {
    pRVar2 = *(RaidPartyInfoNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar2 = &server_msg::_RaidPartyInfoNotify_default_instance_;
  }
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pRVar1 = &ds_proto::_RaidPartyInfo_default_instance_._instance;
  if (*(RaidPartyInfo **)&((Message *)((longlong)pRVar2 + 0x10))->field_0x8 != (RaidPartyInfo *)0x0)
  {
    pRVar1 = *(RaidPartyInfo **)&((Message *)((longlong)pRVar2 + 0x10))->field_0x8;
  }
  FDS_RaidPartyRepo::SetRaidPartyInfo(this,pRVar1);
  UpdateNotifyInfo(*(RaidPartyNotifyType *)&((Message *)((longlong)pRVar2 + 0x20))->field_0x8,
                   *(long64 *)((longlong)pRVar2 + 0x20));
  return;
}

// ReceiveRaidPartyInvite @ 14bc07720

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyInvite(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyInviteAlarm @ 14bc07730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyInviteAlarm(ServerMessages *param_1)

{
  FString *pFVar1;
  int iVar2;
  long64 lVar3;
  longlong lVar4;
  bool bVar5;
  UDS_UIMessageManager *pUVar6;
  RaidPartyInfoDefaultTypeInternal *pRVar7;
  RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *pRVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FDS_TimeCoolDownTableRow *pFVar12;
  FDS_Text *pFVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  RaidPartyInfoDefaultTypeInternal *pRVar16;
  RaidPartyInviteAlarmDefaultTypeInternal *pRVar17;
  undefined1 auStackY_4b8 [32];
  int local_488 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_480;
  FDelegateAllocation local_478;
  FDestructionSentinel local_468;
  FDelegateAllocation *local_450;
  undefined1 local_448 [8];
  ForAnyElementType local_440;
  int local_438;
  FWeakObjectPtr local_430;
  FString local_428;
  FString local_418;
  FDS_Text local_408;
  uint local_3b8;
  long64 local_3b0;
  FScriptContainerElement *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  int local_390;
  EDS_RaidMemberState local_38c;
  FDS_RaidPartyMemberSyncData local_388;
  undefined1 local_258 [168];
  undefined4 local_1b0;
  undefined1 local_1a8 [32];
  FDS_RaidPartyMemberInfo local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5142) {
    pRVar17 = *(RaidPartyInviteAlarmDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar17 = &server_msg::_RaidPartyInviteAlarm_default_instance_;
  }
  bVar5 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar5) {
    pRVar7 = &ds_proto::_RaidPartyInfo_default_instance_;
    if (*(RaidPartyInfoDefaultTypeInternal **)((longlong)pRVar17 + 0x20) !=
        (RaidPartyInfoDefaultTypeInternal *)0x0) {
      pRVar7 = *(RaidPartyInfoDefaultTypeInternal **)((longlong)pRVar17 + 0x20);
    }
    RequestRaidPartyInvitedRes
              ((pRVar7->_instance)._impl_.raid_party_uid_,(pRVar7->_instance)._impl_.dungeon_id_,
               true);
  }
  else {
    pUVar6 = UDS_UIMessageManager::GetInst();
    if (pUVar6 != (UDS_UIMessageManager *)0x0) {
      local_488[0] = 0;
      ::FString::FString(&local_418,L"");
      ::FString::FString(&local_428,L"");
      local_3b8 = 0;
      local_3b0 = 0;
      local_3a8 = (FScriptContainerElement *)0x0;
      local_3a0 = 0;
      local_398 = 0;
      local_390 = 0;
      local_38c = None;
      local_388.PlayerEntityId = 0;
      local_388.PlayerUID = 0;
      local_388.CharId = 0;
      local_388.CharEntityId = 0;
      local_388.IsDead = false;
      local_388.ZoneID = 0;
      local_388.StatusMaxMap._0_8_ = 0;
      local_388.StatusMaxMap._8_8_ = 0;
      local_388.StatusMaxMap._32_8_ = 0;
      local_388.StatusMaxMap._40_4_ = 0;
      local_388.StatusMaxMap._44_4_ = 0x80;
      local_388.StatusMaxMap._48_4_ = 0xffffffff;
      local_388.StatusMaxMap._52_4_ = 0;
      local_388.StatusMaxMap._64_8_ = 0;
      local_388.StatusMaxMap._72_4_ = 0;
      local_388.StatusCurMap._0_8_ = 0;
      local_388.StatusCurMap._8_8_ = 0;
      local_388.StatusCurMap._32_8_ = 0;
      local_388.StatusCurMap._40_4_ = 0;
      local_388.StatusCurMap._44_4_ = 0x80;
      local_388.StatusCurMap._48_4_ = 0xffffffff;
      local_388.StatusCurMap._52_4_ = 0;
      local_388.StatusCurMap._64_8_ = 0;
      local_388.StatusCurMap._72_4_ = 0;
      local_388.BuffMap._0_8_ = 0;
      local_388.BuffMap._8_8_ = 0;
      local_388.BuffMap._32_8_ = 0;
      local_388.BuffMap._40_4_ = 0;
      local_388.BuffMap._44_4_ = 0x80;
      local_388.BuffMap._48_4_ = 0xffffffff;
      local_388.BuffMap._52_4_ = 0;
      local_388.BuffMap._64_8_ = 0;
      local_388.BuffMap._72_4_ = 0;
      pRVar7 = &ds_proto::_RaidPartyInfo_default_instance_;
      if (*(RaidPartyInfoDefaultTypeInternal **)((longlong)pRVar17 + 0x20) !=
          (RaidPartyInfoDefaultTypeInternal *)0x0) {
        pRVar7 = *(RaidPartyInfoDefaultTypeInternal **)((longlong)pRVar17 + 0x20);
      }
      pRVar8 = &(pRVar7->_instance)._impl_.members_;
      if ((~*(byte *)&(pRVar7->_instance)._impl_.members_ & 1) == 0) {
        pRVar8 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)(*(longlong *)pRVar8 + 7);
      }
      puVar10 = (undefined8 *)&pRVar8->field_0x0;
      if (pRVar8 != (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)
                    (puVar10 + *(int *)&(pRVar7->_instance)._impl_.members_.field_0x8)) {
        pRVar16 = &ds_proto::_RaidPartyInfo_default_instance_;
        if (*(RaidPartyInfoDefaultTypeInternal **)((longlong)pRVar17 + 0x20) !=
            (RaidPartyInfoDefaultTypeInternal *)0x0) {
          pRVar16 = *(RaidPartyInfoDefaultTypeInternal **)((longlong)pRVar17 + 0x20);
        }
        do {
          if (((*(RaidPartyMemberInfo **)pRVar8)->_impl_).player_uid_ ==
              (pRVar16->_instance)._impl_.leader_uid_) {
            pFVar9 = FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
                               (&local_188,*(RaidPartyMemberInfo **)pRVar8);
            local_3b8 = pFVar9->SlotIndex;
            pFVar1 = &pFVar9->NickName;
            local_3b0 = pFVar9->PlayerUID;
            if ((FString *)&local_3a8 != pFVar1) {
              if (local_3a8 != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3a8);
              }
              local_3a8 = (pFVar1->Data).AllocatorInstance.Data;
              (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3a0._0_4_ = (pFVar9->NickName).Data.ArrayNum;
              local_3a0._4_4_ = (pFVar9->NickName).Data.ArrayMax;
              (pFVar9->NickName).Data.ArrayNum = 0;
              (pFVar9->NickName).Data.ArrayMax = 0;
            }
            local_398._0_4_ = (pFVar9->CharInfo).CharId;
            local_398._4_4_ = (pFVar9->CharInfo).CharLevel;
            local_390 = (pFVar9->CharInfo).CharAscend;
            local_38c = pFVar9->MemberState;
            FDS_RaidPartyMemberSyncData::operator=(&local_388,&pFVar9->RaidPartyMemberSyncData);
            FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData
                      (&local_188.RaidPartyMemberSyncData);
            if (local_188.NickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.NickName.Data.AllocatorInstance.Data);
            }
            break;
          }
          pRVar8 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)&pRVar8->field_0x8;
        } while (pRVar8 != (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)
                           (puVar10 + *(int *)&(pRVar7->_instance)._impl_.members_.field_0x8));
      }
      pRVar7 = &ds_proto::_RaidPartyInfo_default_instance_;
      if (*(RaidPartyInfoDefaultTypeInternal **)((longlong)pRVar17 + 0x20) !=
          (RaidPartyInfoDefaultTypeInternal *)0x0) {
        pRVar7 = *(RaidPartyInfoDefaultTypeInternal **)((longlong)pRVar17 + 0x20);
      }
      iVar2 = (pRVar7->_instance)._impl_.dungeon_id_;
      lVar3 = (pRVar7->_instance)._impl_.raid_party_uid_;
      local_480.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_478.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_478.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_480,(FWriteAccessScope *)&local_468);
      local_450 = &local_478;
      puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_478);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___JH__6B_
        ;
        puVar10[1] = lVar3;
        *(int *)(puVar10 + 2) = iVar2;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[3] = uVar11;
        *puVar10 = &
                   ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___JH__6B_
        ;
        puVar10[4] = Recive_RaidPartyInviteAlarm_MsgRes;
      }
      if (local_468.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
      }
      pFVar12 = FDS_TimeCoolDownTableRow::GetRef(0x9c41,true);
      FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)local_258,Request_Popup);
      pFVar13 = FDS_Text::FromStringTableFormat<int_&,FString_&,FString_&>
                          (&local_408,StringUi,0x33478,local_488,&local_418,&local_428);
      FDS_Text::operator=((FDS_Text *)local_258,pFVar13);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_408.FormatArgs.AllocatorInstance.Data,
                 local_408.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_408.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_408.FormatArgs.AllocatorInstance.Data);
      }
      if (local_408.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.UniqueString.Data.AllocatorInstance.Data);
      }
      local_258._88_4_ = pFVar12->CoolTime;
      local_448 = (undefined1  [8])0x0;
      local_440.Data = (FScriptContainerElement *)0x0;
      local_438 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_480,(FReadAccessScope *)&local_468);
      if ((local_478.DelegateSize != 0) &&
         (local_478.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_478.DelegateAllocator + 0x50))
                  (local_478.DelegateAllocator,local_448);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_468);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_448);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_448,
                 (FWriteAccessScope *)&local_468);
      if ((local_438 != 0) && (local_440.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_440.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_440,0,0,0x10);
        local_438 = 0;
      }
      if (local_468.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
      }
      if (local_440.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_448);
      local_258._80_8_ = 0x33478;
      UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_258);
      ADS_MainCharacter::GetMainPlayer();
      bVar5 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_430,(void *)0x0)
      ;
      if (!bVar5) {
        pUVar14 = FWeakObjectPtr::Get(&local_430);
        lVar4 = *(longlong *)&pUVar14[0x12].field_0x20;
        if (lVar4 != 0) {
          pUVar15 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
          iVar2 = (int)pUVar15->_padding_;
          if (((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
               &pUVar15->_padding_)) && (*(char *)(lVar4 + 0x9a9) == '\x01')) {
            local_468.AccessType = Reader;
            local_468._4_4_ = 0;
            local_468.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
            local_468.bDestroyed = false;
            local_468._17_3_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x33477,Complete_System_01,
                       (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                        *)&local_468);
          }
        }
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
      if ((void *)local_1a8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1a8);
      local_1b0 = 0;
      if ((void *)local_258._160_8_ != (void *)0x0) {
        FMemory::Free((void *)local_258._160_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_258 + 0x60);
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_258._64_8_,local_258._72_4_);
      if ((FDS_TextFormatArg *)local_258._64_8_ != (FDS_TextFormatArg *)0x0) {
        FMemory::Free((void *)local_258._64_8_);
      }
      if ((FScriptContainerElement *)local_258._48_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_258._48_8_);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_480,(FWriteAccessScope *)&local_468);
      if ((local_478.DelegateSize != 0) &&
         (local_478.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_478.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_478,0,0,0x10);
        local_478.DelegateSize = 0;
      }
      if (local_468.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
      }
      if (local_478.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_478.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_480.AccessDetector);
      FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData(&local_388);
      if (local_3a8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8);
      }
      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data.AllocatorInstance.Data);
      }
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ReceiveRaidPartyInvitedRes @ 14bc07dc0

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyInvitedRes(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *this;
  RaidPartyInfo *pRVar2;
  RaidPartyInvitedResResponseDefaultTypeInternal *pRVar3;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x51a6) {
    pRVar3 = (RaidPartyInvitedResResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pRVar3 = &server_msg_twoway::_RaidPartyInvitedResResponse_default_instance_;
  }
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pRVar2 = &ds_proto::_RaidPartyInfo_default_instance_._instance;
  if (*(RaidPartyInfo **)&((Message *)((longlong)pRVar3 + 0x10))->field_0x8 != (RaidPartyInfo *)0x0)
  {
    pRVar2 = *(RaidPartyInfo **)&((Message *)((longlong)pRVar3 + 0x10))->field_0x8;
  }
  FDS_RaidPartyRepo::SetRaidPartyInfo(this,pRVar2);
  bVar1 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar1) {
    bVar1 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (!bVar1) {
      OpenContentByRaidPartyInfo();
      return;
    }
  }
  return;
}

// ReceiveRaidPartyJoin @ 14bc07e30

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyJoin(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *this;
  RaidPartyInfo *pRVar2;
  RaidPartyJoinResponseDefaultTypeInternal *pRVar3;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x51ae) {
    pRVar3 = (RaidPartyJoinResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pRVar3 = &server_msg_twoway::_RaidPartyJoinResponse_default_instance_;
  }
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pRVar2 = &ds_proto::_RaidPartyInfo_default_instance_._instance;
  if (*(RaidPartyInfo **)&((Message *)((longlong)pRVar3 + 0x10))->field_0x8 != (RaidPartyInfo *)0x0)
  {
    pRVar2 = *(RaidPartyInfo **)&((Message *)((longlong)pRVar3 + 0x10))->field_0x8;
  }
  FDS_RaidPartyRepo::SetRaidPartyInfo(this,pRVar2);
  bVar1 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar1) {
    bVar1 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (!bVar1) {
      OpenContentByRaidPartyInfo();
      return;
    }
  }
  return;
}

// ReceiveRaidPartyKick @ 14bc07ea0

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyKick(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyKickVote @ 14bc07eb0

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyKickVote(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyKickVoteNotify @ 14bc07ec0

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyKickVoteNotify(ServerMessages *param_1)

{
  FDS_RaidPartyRepo *this;
  RaidPartyKickVoteNotifyDefaultTypeInternal *pRVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5141) {
    pRVar1 = *(RaidPartyKickVoteNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar1 = &server_msg::_RaidPartyKickVoteNotify_default_instance_;
  }
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::SetRaidPartyVoteData(this,&pRVar1->_instance);
  return;
}

// ReceiveRaidPartyKickVoteRes @ 14bc07f00

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyKickVoteRes(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyLeave @ 14bc07f10

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyLeave(ServerMessagesTwoway *param_1)

{
  FDS_RaidPartyRepo *this;
  
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::Clear(this);
  return;
}

// ReceiveRaidPartyLeave @ 14bc07f30

void __cdecl
FDS_RaidPartyService::ReceiveRaidPartyLeave
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  FDS_RaidPartyRepo *this;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::Clear(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar3 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    if (*(int *)&param_2->field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar1 = *(void **)&param_2->field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ReceiveRaidPartyList @ 14bc08010

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyList(ServerMessages *param_1)

{
  undefined8 *puVar1;
  long64 lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_DungeonManager *this;
  FDS_RaidPartySimpleInfo *pFVar6;
  longlong lVar7;
  RaidPartyListResponseDefaultTypeInternal *pRVar8;
  undefined8 *puVar9;
  TArray<FDS_RaidPartySimpleInfo,TSizedDefaultAllocator<32>_> local_78;
  FDS_RaidPartySimpleInfo local_68;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x514a) {
    pRVar8 = *(RaidPartyListResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar8 = &server_msg::_RaidPartyListResponse_default_instance_;
  }
  this = UDS_DungeonManager::GetInst();
  if (this != (UDS_DungeonManager *)0x0) {
    puVar9 = (undefined8 *)&((Message *)((longlong)pRVar8 + 0x10))->field_0x8;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    if ((*puVar9 & 1) != 0) {
      puVar9 = (undefined8 *)(*puVar9 + 7);
    }
    puVar1 = puVar9 + *(int *)((longlong)pRVar8 + 0x20);
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      pFVar6 = FDS_RaidPartySimpleInfo::FDS_RaidPartySimpleInfo
                         (&local_68,(RaidPartySimpleInfo *)*puVar9);
      if (((local_78.AllocatorInstance.Data <= pFVar6) &&
          (pFVar6 < (FDS_RaidPartySimpleInfo *)
                    (local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 0x48))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = local_78.ArrayNum;
      if (local_78.ArrayNum == local_78.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      lVar7 = (longlong)iVar5;
      local_78.ArrayNum = iVar5 + 1;
      *(long64 *)&local_78.AllocatorInstance.Data[lVar7 * 0x48].field_0x0 = pFVar6->RaidPartyUID;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 8) = pFVar6->DungeonId;
      *(undefined8 *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x10) = 0;
      *(FScriptContainerElement **)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x10) =
           (pFVar6->PartyName).Data.AllocatorInstance.Data;
      (pFVar6->PartyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x18) =
           (pFVar6->PartyName).Data.ArrayNum;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x1c) =
           (pFVar6->PartyName).Data.ArrayMax;
      (pFVar6->PartyName).Data.ArrayNum = 0;
      (pFVar6->PartyName).Data.ArrayMax = 0;
      local_78.AllocatorInstance.Data[lVar7 * 0x48 + 0x20] =
           (FScriptContainerElement)pFVar6->IsPassword;
      lVar2 = pFVar6->LeaderUID;
      *(undefined8 *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x30) = 0;
      *(long64 *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x28) = lVar2;
      *(FScriptContainerElement **)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x30) =
           (pFVar6->LeaderNickName).Data.AllocatorInstance.Data;
      (pFVar6->LeaderNickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x38) =
           (pFVar6->LeaderNickName).Data.ArrayNum;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x3c) =
           (pFVar6->LeaderNickName).Data.ArrayMax;
      (pFVar6->LeaderNickName).Data.ArrayNum = 0;
      (pFVar6->LeaderNickName).Data.ArrayMax = 0;
      local_78.AllocatorInstance.Data[lVar7 * 0x48 + 0x40] =
           (FScriptContainerElement)pFVar6->IsPublic;
      *(int *)(local_78.AllocatorInstance.Data + lVar7 * 0x48 + 0x44) = pFVar6->MemberCount;
      if (local_68.LeaderNickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.LeaderNickName.Data.AllocatorInstance.Data);
      }
      if (local_68.PartyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.PartyName.Data.AllocatorInstance.Data);
      }
    }
    UDS_DungeonManager::SetRaidPartySimpleInfoList(this,&local_78);
    DestructItems<FDS_RaidPartySimpleInfo,int>
              ((FDS_RaidPartySimpleInfo *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if ((FDS_RaidPartySimpleInfo *)local_78.AllocatorInstance.Data != (FDS_RaidPartySimpleInfo *)0x0
       ) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// ReceiveRaidPartyMemberInfoNotify @ 14bc08230

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyMemberInfoNotify(ServerMessages *param_1)

{
  RaidPartyNotifyType RVar1;
  RaidPartyMemberInfoNotifyDefaultTypeInternal *pRVar2;
  FDS_RaidPartyRepo *this;
  RaidPartyMemberInfo *pRVar3;
  RaidPartyMemberInfo local_48;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5145) {
    pRVar2 = *(RaidPartyMemberInfoNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar2 = &server_msg::_RaidPartyMemberInfoNotify_default_instance_;
  }
  RVar1 = *(RaidPartyNotifyType *)((longlong)pRVar2 + 0x20);
  pRVar3 = &ds_proto::_RaidPartyMemberInfo_default_instance_._instance;
  if (*(RaidPartyMemberInfo **)&((Message *)((longlong)pRVar2 + 0x10))->field_0x8 !=
      (RaidPartyMemberInfo *)0x0) {
    pRVar3 = *(RaidPartyMemberInfo **)&((Message *)((longlong)pRVar2 + 0x10))->field_0x8;
  }
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  ds_proto::RaidPartyMemberInfo::RaidPartyMemberInfo(&local_48,(Arena *)0x0,pRVar3);
  local_48._padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
  FDS_RaidPartyRepo::SetRaidPartyMemberInfo(this,&local_48);
  UpdateNotifyInfo(RVar1,(pRVar3->_impl_).player_uid_);
  return;
}

// ReceiveRaidPartyMemberSync @ 14bc082c0

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyMemberSync(ServerMessages *param_1)

{
  FDS_RaidPartyRepo *this;
  RaidPartyMemberSyncResponseDefaultTypeInternal *pRVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x514c) {
    pRVar1 = *(RaidPartyMemberSyncResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar1 = &server_msg::_RaidPartyMemberSyncResponse_default_instance_;
  }
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::SetRaidPartyMemberSyncData(this,&pRVar1->_instance);
  return;
}

// ReceiveRaidPartyMemberUpdateState @ 14bc08300

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyMemberUpdateState(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyMemberUpdateStateNotify @ 14bc08310

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyMemberUpdateStateNotify(ServerMessages *param_1)

{
  FDS_RaidPartyRepo *this;
  RaidPartyMemberUpdateStateNotifyDefaultTypeInternal *pRVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5140) {
    pRVar1 = *(RaidPartyMemberUpdateStateNotifyDefaultTypeInternal **)
              &(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar1 = &server_msg::_RaidPartyMemberUpdateStateNotify_default_instance_;
  }
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::SetRaidPartyMemberState
            (this,*(long64 *)&((Message *)((longlong)pRVar1 + 0x10))->field_0x8,
             *(long64 *)((longlong)pRVar1 + 0x20),((Message *)((longlong)pRVar1 + 0x20))->field_0x8)
  ;
  return;
}

// ReceiveRaidPartyPassword @ 14bc08360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyPassword(ServerMessagesTwoway *param_1)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType _Src;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_RaidPartyRepo *pFVar5;
  UObject *pUVar6;
  char *pcVar7;
  GetRaidPartyPassWordResponseDefaultTypeInternal *pGVar8;
  FString *pFVar9;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_RaidPartyService::ReceiveRaidPartyPassword",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,300,L"playerData is nullptr");
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if (!bVar3) {
      return;
    }
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pUVar6 = FWeakObjectPtr::Get(&local_158);
    if ((pFVar5->RaidPartyInfo).LeaderUID != *(longlong *)&pUVar6[6].field_0x8) {
      return;
    }
    if ((param_1->_impl_)._oneof_case_[0] == 0x51b2) {
      pGVar8 = (GetRaidPartyPassWordResponseDefaultTypeInternal *)
               (param_1->_impl_).ServerMessageTwoway_.pongres_;
    }
    else {
      pGVar8 = &server_msg_twoway::_GetRaidPartyPassWordResponse_default_instance_;
    }
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if ((pFVar5->RaidPartyInfo).RaidPartyUID != *(longlong *)((longlong)pGVar8 + 0x20)) {
      return;
    }
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pcVar7 = (char *)(*(ulonglong *)&((Message *)((longlong)pGVar8 + 0x10))->field_0x8 &
                     0xfffffffffffffffc);
    if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
      pcVar7 = *(char **)pcVar7;
    }
    ::FString::FString(&local_150,pcVar7);
    _Src.Data = local_150.Data.AllocatorInstance.Data;
    pFVar9 = &pFVar5->Password;
    if (pFVar9 != &local_150) {
      piVar1 = &(pFVar5->Password).Data.ArrayMax;
      iVar2 = *piVar1;
      (pFVar5->Password).Data.ArrayNum = local_150.Data.ArrayNum;
      if ((local_150.Data.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_150.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar9,
                   local_150.Data.ArrayNum,piVar1);
        if (local_150.Data.ArrayNum != 0) {
          memcpy((pFVar9->Data).AllocatorInstance.Data,_Src.Data,
                 (longlong)local_150.Data.ArrayNum * 2);
        }
      }
    }
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return;
}

// ReceiveRaidPartySlotChange @ 14bc08550

void __cdecl FDS_RaidPartyService::ReceiveRaidPartySlotChange(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRaidPartyVoteStartNotify @ 14bc08560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::ReceiveRaidPartyVoteStartNotify(ServerMessages *param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDateTime FVar3;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  FDS_RaidPartyMemberInfo *pFVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  FString *pFVar10;
  RaidPartyVoteStartNotifyDefaultTypeInternal *pRVar11;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8 [8];
  FDelegateAllocation local_1e0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1d0;
  FDestructionSentinel local_1c0;
  FDelegateAllocation *local_1a8;
  FString local_1a0;
  FStringFormatArg local_188;
  FStringFormatArg local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5146) {
    pRVar11 = *(RaidPartyVoteStartNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar11 = &server_msg::_RaidPartyVoteStartNotify_default_instance_;
  }
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    local_1a0.Data.AllocatorInstance.Data = *(FScriptContainerElement **)((longlong)pRVar11 + 0x20);
    FDS_RaidPartyRepo::SetRaidPartyVoteProposerUID(pFVar2,(long64 *)&local_1a0);
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    FVar3 = UDS_TimeUtilManager::GetCurrentServerDateTime();
    FDS_RaidPartyRepo::SetVoteStartTime(pFVar2,(FDateTime *)FVar3.Ticks);
    this = UDS_WindowManager::GetInst();
    if (this == (UDS_WindowManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_RaidPartyService::ReceiveRaidPartyVoteStartNotify",0x35,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x3fc,L"windowManager is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      local_1e8 = (undefined1  [8])0x0;
      local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1e0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
                 (FWriteAccessScope *)&local_1c0);
      local_1a8 = &local_1e0;
      puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_1e0);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar5[3] = OpenVoteWindow;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_1c0,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_1e8);
      UDS_WindowManager::OpenWindow(this,RaidPartyVote,pTVar7);
      pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar8 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID
                         (pFVar2,*(long64 *)&((Message *)((longlong)pRVar11 + 0x20))->field_0x8);
      pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar9 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID
                         (pFVar2,*(long64 *)((longlong)pRVar11 + 0x20));
      pFVar10 = ::FString::FString(&local_1a0,&pFVar9->NickName);
      FStringFormatArg::FStringFormatArg(&local_188,pFVar10);
      pFVar10 = ::FString::FString((FString *)&local_1c0,&pFVar8->NickName);
      FStringFormatArg::FStringFormatArg(&local_168,pFVar10);
      local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_1d0.AllocatorInstance,2,&local_1d0.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_1d0.AllocatorInstance.Data,&local_188,2);
      if (local_168.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_188.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.StringValue.Data.AllocatorInstance.Data);
      }
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x347e7,None_System_01,&local_1d0,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
      if ((FStringFormatArg *)local_1d0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
                 (FWriteAccessScope *)&local_1c0);
      if ((local_1e0.DelegateSize != 0) &&
         (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1e0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1e0,0,0,0x10);
        local_1e0.DelegateSize = 0;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      if (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1e0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1e8);
    }
  }
  return;
}

// RecieveRaidPartyAllDungeonOutResponse @ 14bc0c9f0

void __cdecl FDS_RaidPartyService::RecieveRaidPartyAllDungeonOutResponse(ServerMessages *param_1)

{
  return;
}

// Recive_DungeonStartAlarm_MsgRes @ 14bc0cbe0

void __cdecl FDS_RaidPartyService::Recive_DungeonStartAlarm_MsgRes(EDS_MessageResponseType *param_1)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> TStack_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> TStack_58;
  FDestructionSentinel FStack_48;
  undefined1 *puStack_30;
  FDestructionSentinel FStack_28;
  undefined1 *puStack_10;
  
  if (*param_1 != Yes) {
    return;
  }
  bVar3 = IsReqTwowayAvailableTime(0x51b5,CommonSystemCoolTime);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
    if (bVar3) {
      pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&TStack_58);
      TStack_68.Object = pTVar5->Object;
      TStack_68.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      if (TStack_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_58.SharedReferenceCount.ReferenceController);
      if (TStack_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = TStack_68.Object;
      if (((TStack_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51b5) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(TStack_68.Object)->clientMsg);
        (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x51b5;
        pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::DungeonInRequest>
                           (pAVar9);
        (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
      }
      pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar6 != (Message *)0x0) {
        pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        *(long64 *)&pMVar6[1].field_0x8 = (pFVar4->RaidPartyInfo).RaidPartyUID;
        *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
        if (TStack_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = TStack_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(TStack_68.Object)->SuccessDel,(FWriteAccessScope *)&FStack_48);
        puStack_30 = &(pFVar2->SuccessDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_30);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = ReceiveDungeonIn;
        }
        if (FStack_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
        }
        if (TStack_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = TStack_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(TStack_68.Object)->FailDel,(FWriteAccessScope *)&FStack_28);
        puStack_10 = &(pFVar2->FailDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_10);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = ProcessError;
        }
        if (FStack_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&TStack_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// Recive_RaidPartyInviteAlarm_MsgRes @ 14bc0cbf0

void __cdecl
FDS_RaidPartyService::Recive_RaidPartyInviteAlarm_MsgRes
          (EDS_MessageResponseType *param_1,long64 param_2,int param_3)

{
  if (*param_1 == Yes) {
    RequestRaidPartyInvitedRes(param_2,param_3,true);
    return;
  }
  if (*param_1 == No) {
    RequestRaidPartyInvitedRes(param_2,param_3,false);
    return;
  }
  return;
}

// RequestGetRaidPartyInfo @ 14bc0e1d0

void __cdecl
FDS_RaidPartyService::RequestGetRaidPartyInfo
          (long64 param_1,
          TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51b3) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x51b3;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::GetRaidPartyInfoRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(long64 *)&pMVar5[1].field_0x8 = param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
      ::
      TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                  *)(puVar6 + 1),param_2);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ReceiveGetRaidPartyInfo;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RequestGetRaidPartyInfoSearch @ 14bc0e430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FDS_RaidPartyService::RequestGetRaidPartyInfoSearch(FString *param_1)

{
  ClientMessageUnion CVar1;
  bool bVar2;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar3;
  UDS_NetworkManager *this;
  wchar_t *pwVar4;
  Arena *pAVar5;
  undefined1 auStack_108 [32];
  ClientMessages local_e8;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar2 = IsReqOnewayAvailableTime(0x4f4d,RaidPartyFindAddTime);
  if (bVar2) {
    client_msg::ClientMessages::ClientMessages(&local_e8,(Arena *)0x0);
    local_e8._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_e8._impl_._oneof_case_[0] != 0x4f4d) {
      client_msg::ClientMessages::clear_ClientMessage(&local_e8);
      local_e8._impl_._oneof_case_[0] = 0x4f4d;
      if (((byte)local_e8._padding_ & 1) == 0) {
        local_e8._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::GetRaidPartyInfoSearchRequest>
                       ((Arena *)(CONCAT71(local_e8._padding_._1_7_,(byte)local_e8._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_e8._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::GetRaidPartyInfoSearchRequest>
                       (*(Arena **)
                         (CONCAT71(local_e8._padding_._1_7_,(byte)local_e8._padding_) &
                         0xfffffffffffffffe));
      }
    }
    CVar1 = local_e8._impl_.ClientMessage_;
    if (local_e8._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pTVar3 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
               TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                         (&local_b8,pwVar4);
      local_c8._Mydata = pTVar3->Ptr;
      *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
      pAVar5 = (Arena *)(*(ulonglong *)&(CVar1.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
      if (((CVar1.joincontinentreq_)->field_0x8 & 1) != 0) {
        pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
      }
      local_c8._Mysize = strlen(local_c8._Mydata);
      google::protobuf::internal::ArenaStringPtr::Set
                ((ArenaStringPtr *)&CVar1.joincontinentreq_[1].field_0x8,&local_c8,pAVar5);
      if ((void *)local_b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_b8._padding_);
      }
      this = UDS_NetworkManager::GetInst();
      if (this != (UDS_NetworkManager *)0x0) {
        UDS_NetworkManager::SendPacket(this,&local_e8);
      }
    }
    client_msg::ClientMessages::~ClientMessages(&local_e8);
  }
  return;
}

// RequestRaidPartyChangeSetting @ 14bc13e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FDS_RaidPartyService::RequestRaidPartyChangeSetting(FString *param_1,FString *param_2,bool param_3)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  wchar_t *pwVar11;
  undefined1 auStack_218 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_1f8;
  basic_string_view<char,std::char_traits<char>_> local_1e8;
  basic_string_view<char,std::char_traits<char>_> local_1d8;
  FDestructionSentinel local_1c8;
  undefined1 *local_1b0;
  FDestructionSentinel local_1a8;
  undefined1 *local_190;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_188;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_178;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  bVar3 = IsReqTwowayAvailableTime(0x51b1,CommonSystemCoolTime);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
    if (bVar3) {
      pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
      if (bVar3) {
        pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_188);
        local_1f8.Object = pTVar5->Object;
        local_1f8.SharedReferenceCount.ReferenceController =
             (pTVar5->SharedReferenceCount).ReferenceController;
        if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.SharedReferenceCount.ReferenceController);
        if (local_1f8.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_1f8.Object;
        if (((local_1f8.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51b1) {
          client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                    (&(local_1f8.Object)->clientMsg);
          (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x51b1;
          pAVar10 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
          if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
            pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
          }
          pMVar6 = google::protobuf::Arena::
                   DefaultConstruct<client_msg_twoway::RaidPartyChangeSettingRequest>(pAVar10);
          (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
        }
        pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
        if (pMVar6 != (Message *)0x0) {
          pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
          *(long64 *)&pMVar6[2].field_0x8 = (pFVar4->RaidPartyInfo).RaidPartyUID;
          *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 4;
          if ((param_1->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          pTVar7 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
                   TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                             (&local_178,pwVar11);
          local_1e8._Mydata = pTVar7->Ptr;
          *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
          pAVar10 = (Arena *)(*(ulonglong *)&pMVar6->field_0x8 & 0xfffffffffffffffe);
          if ((pMVar6->field_0x8 & 1) != 0) {
            pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
          }
          local_1e8._Mysize = strlen(local_1e8._Mydata);
          google::protobuf::internal::ArenaStringPtr::Set
                    ((ArenaStringPtr *)&pMVar6[1].field_0x8,&local_1e8,pAVar10);
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
          if ((param_2->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          }
          pTVar7 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
                   TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                             (&local_d8,pwVar11);
          local_1d8._Mydata = pTVar7->Ptr;
          *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 2;
          pAVar10 = (Arena *)(*(ulonglong *)&pMVar6->field_0x8 & 0xfffffffffffffffe);
          if ((pMVar6->field_0x8 & 1) != 0) {
            pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
          }
          local_1d8._Mysize = strlen(local_1d8._Mydata);
          google::protobuf::internal::ArenaStringPtr::Set
                    ((ArenaStringPtr *)(pMVar6 + 2),&local_1d8,pAVar10);
          if ((void *)local_d8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_d8._padding_);
          }
          *(bool *)(pMVar6 + 3) = param_3;
          *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 8;
          if (local_1f8.Object == (FDS_ClientMessage_Twoway *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          pFVar2 = local_1f8.Object;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(local_1f8.Object)->SuccessDel,(FWriteAccessScope *)&local_1c8);
          local_1b0 = &(pFVar2->SuccessDel).field_0x8;
          puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_1b0);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &
                      ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar9 = FDelegateHandle::GenerateNewID();
            puVar8[2] = uVar9;
            *puVar8 = &
                      ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar8[3] = ReceiveRaidPartyChangeSetting;
          }
          if (local_1c8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
          }
          if (local_1f8.Object == (FDS_ClientMessage_Twoway *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          pFVar2 = local_1f8.Object;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(local_1f8.Object)->FailDel,(FWriteAccessScope *)&local_1a8);
          local_190 = &(pFVar2->FailDel).field_0x8;
          puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_190);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &
                      ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar9 = FDelegateHandle::GenerateNewID();
            puVar8[2] = uVar9;
            *puVar8 = &
                      ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar8[3] = ProcessError;
          }
          if (local_1a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
          }
          this = UDS_NetworkManager::GetInst();
          UDS_NetworkManager::SendTwoWayPacket(this,&local_1f8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f8.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return;
}

// RequestRaidPartyCreate @ 14bc141d0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
FDS_RaidPartyService::RequestRaidPartyCreate
          (int param_1,FString *param_2,FString *param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDS_RaidPartyRepo *this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  FDS_PartyRepo *pFVar6;
  FDS_DungeonBaseTableRow *pFVar7;
  FDS_DungeonTypeDataTableRow *pFVar8;
  UObject *pUVar9;
  FString *pFVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [16];
  int local_80;
  FDelegateAllocation *local_78;
  undefined1 local_70 [8];
  FDestructionSentinel local_68;
  undefined1 *local_50;
  FWeakObjectPtr local_48 [2];
  
  local_90._0_8_ = (atomic<unsigned___int64>)0x0;
  local_90._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_80 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_68);
  local_50 = local_90 + 8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)(local_90 + 8));
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HVFString__V2__N__6B_
    ;
    *(int *)(puVar3 + 1) = param_1;
    ::FString::FString((FString *)(puVar3 + 2),param_2);
    ::FString::FString((FString *)(puVar3 + 4),param_3);
    *(bool *)(puVar3 + 6) = param_4;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[7] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__HVFString__V2__N__6B_
    ;
    puVar3[8] = RequestRaidPartyCreate;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor),&local_68);
  }
  local_68._0_8_ = &DAT_0003348f;
  local_a8 = (undefined1  [8])0x3348e;
  local_48[0].ObjectIndex = 0x33459;
  local_48[0].ObjectSerialNumber = 0;
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this);
  if (bVar2) {
    pTVar5 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_68,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_90);
    OpenPartyLeavePopup((long64 *)local_48,(long64 *)local_a8,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_68);
joined_r0x00014bc1433e:
    if ((local_80 != 0) &&
       ((atomic<unsigned___int64> *)local_90._8_8_ != (atomic<unsigned___int64> *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_90._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_90 + 8),0,0,0x10);
      local_80 = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor),&local_68);
    }
    if ((atomic<unsigned___int64> *)local_90._8_8_ != (atomic<unsigned___int64> *)0x0) {
      FMemory::Free((void *)local_90._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_90);
  }
  else {
    pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar2 = FDS_PartyInfo::IsValid(&pFVar6->PartyInfo);
    if (bVar2) {
      pTVar5 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8,
                          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_90);
      OpenPartyLeavePopup((long64 *)local_48,(long64 *)&local_68,pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
                 (FWriteAccessScope *)&local_68);
      goto joined_r0x00014bc1433e;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_68);
    if ((local_80 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_90._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_90._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_90 + 8),0,0,0x10);
      local_80 = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor),&local_68);
    }
    if ((atomic<unsigned___int64> *)local_90._8_8_ != (atomic<unsigned___int64> *)0x0) {
      FMemory::Free((void *)local_90._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_90);
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)local_90);
    local_78 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x48,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HVFString__V2__N__6B_
      ;
      *(int *)(puVar3 + 1) = param_1;
      ::FString::FString((FString *)(puVar3 + 2),param_2);
      ::FString::FString((FString *)(puVar3 + 4),param_3);
      *(bool *)(puVar3 + 6) = param_4;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[7] = uVar4;
      *puVar3 = &
                ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__HVFString__V2__N__6B_
      ;
      puVar3[8] = OnRequestRaidPartyCreate;
    }
    if ((bool)(char)local_80 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_90._8_8_,(FDestructionSentinel *)local_90);
    }
    bVar2 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (!bVar2) {
      pFVar7 = FDS_DungeonBaseTableRow::GetRef((longlong)param_1,true);
      pFVar8 = FDS_DungeonTypeDataTableRow::GetRef((ulonglong)pFVar7->DungeonType,true);
      iVar14 = 0;
      FDS_DungeonBaseTableRow::GetAll
                ((TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)&local_68);
      iVar1 = (int)local_68.Accessor;
      if ((int)local_68.Accessor == 0) {
        if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_68._0_8_);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                   (FWriteAccessScope *)local_90);
        if ((local_a0.DelegateSize != 0) &&
           (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_a0,0,0,0x10);
          local_a0.DelegateSize = 0;
        }
      }
      else {
        pFVar12 = (FScriptContainerElement *)(local_68._0_8_ + (longlong)(int)local_68.Accessor * 8)
        ;
        pFVar13 = (FScriptContainerElement *)local_68._0_8_;
        while( true ) {
          if ((int)local_68.Accessor != iVar1) {
            `TCheckedPointerIterator<FDS_DungeonBaseTableRow_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_70);
          }
          if (pFVar13 == pFVar12) break;
          if (*(EDS_DungeonType *)(*(longlong *)pFVar13 + 0x20) == pFVar7->DungeonType) {
            UDS_DungeonRecordData::GetData
                      ((ulong64)local_48,UDS_PlayerData::MainPlayerEntityID,
                       SUB41(*(undefined4 *)(*(longlong *)pFVar13 + 8),0));
            bVar2 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)local_48,
                               (void *)0x0);
            if (!bVar2) {
              pUVar9 = FWeakObjectPtr::Get(local_48);
              iVar14 = iVar14 + *(int *)&pUVar9[2].field_0xc;
            }
          }
          pFVar13 = pFVar13 + 8;
        }
        if (0 < pFVar8->EnterLimitCount - iVar14) {
          if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_68._0_8_);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                     (FWriteAccessScope *)local_90);
          if ((local_a0.DelegateSize != 0) &&
             (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_a0,0,0,0x10);
            local_a0.DelegateSize = 0;
          }
          if ((bool)(char)local_80 == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_90._8_8_,
                       (FDestructionSentinel *)local_90);
          }
          if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_a0.DelegateAllocator);
          }
          goto LAB_14bc14713;
        }
        local_90._0_8_ = (atomic<unsigned___int64>)0x0;
        local_90._8_8_ = (atomic<unsigned___int64> *)0x0;
        local_80 = 0;
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x347d9,Complete_System_01,
                   (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                    *)local_90);
        if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_68._0_8_);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                   (FWriteAccessScope *)local_90);
        if ((local_a0.DelegateSize != 0) &&
           (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_a0,0,0,0x10);
          local_a0.DelegateSize = 0;
        }
      }
      if ((char)local_80 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_90._8_8_,(FDestructionSentinel *)local_90);
      }
      if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a8);
      pFVar12 = (param_2->Data).AllocatorInstance.Data;
      goto LAB_14bc1474b;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)local_90);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if ((bool)(char)local_80 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_90._8_8_,(FDestructionSentinel *)local_90);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
LAB_14bc14713:
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
    pFVar10 = ::FString::FString((FString *)&local_68,param_3);
    pFVar11 = ::FString::FString((FString *)local_a8,param_2);
    OnRequestRaidPartyCreate(param_1,pFVar11,pFVar10,param_4);
  }
  pFVar12 = (param_2->Data).AllocatorInstance.Data;
LAB_14bc1474b:
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  pFVar12 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  return;
}

// RequestRaidPartyDelegateLeader @ 14bc14790

void __cdecl FDS_RaidPartyService::RequestRaidPartyDelegateLeader(long64 param_1)

{
  long64 lVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar4 = IsReqTwowayAvailableTime(0x51a9,CommonSystemCoolTime);
  if (bVar4) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if (bVar4) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      lVar1 = (pFVar5->RaidPartyInfo).RaidPartyUID;
      pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
      local_68.Object = pTVar6->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar3 = local_68.Object;
      if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51a9) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_68.Object)->clientMsg);
        (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51a9;
        pAVar10 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        pMVar7 = google::protobuf::Arena::
                 DefaultConstruct<client_msg_twoway::RaidPartyDelegateLeaderRequest>(pAVar10);
        (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
      }
      pMVar7 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar7 != (Message *)0x0) {
        *(long64 *)&pMVar7[1].field_0x8 = lVar1;
        *(long64 *)(pMVar7 + 2) = param_1;
        *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 3;
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
        local_30 = &(pFVar3->SuccessDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar8[3] = ReceiveRaidPartyDelegateLeader;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
        local_10 = &(pFVar3->FailDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar8[3] = ProcessError;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// RequestRaidPartyDungeonStart @ 14bc14a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::RequestRaidPartyDungeonStart(void)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_RaidPartyMemberInfo *pFVar7;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar8;
  Message *pMVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_NetworkManager *this;
  Arena *pAVar12;
  undefined1 auStackY_2f8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_2c8;
  FWeakObjectPtr local_2b8;
  FDestructionSentinel local_2b0;
  undefined1 *local_298;
  FDestructionSentinel local_290;
  undefined1 *local_278;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar3 = IsReqTwowayAvailableTime(0x51b4,CommonSystemCoolTime);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
    if (bVar3) {
      UDS_PlayerData::GetMainPlayerData();
      bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_2b8,(void *)0x0);
      if (bVar3) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_258._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_258,"FDS_RaidPartyService::RequestRaidPartyDungeonStart",0x32,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_258.Ptr,0x2dc,L"PlayerData is nullptr");
          if ((void *)local_258._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_258._padding_);
          }
        }
      }
      else {
        pUVar6 = FWeakObjectPtr::Get(&local_2b8);
        pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        pFVar7 = FDS_RaidPartyRepo::GetRaidPartyLeaderMemberInfo(pFVar4);
        if (*(longlong *)&pUVar6[6].field_0x8 == pFVar7->PlayerUID) {
          pTVar8 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_270);
          local_2c8.Object = pTVar8->Object;
          local_2c8.SharedReferenceCount.ReferenceController =
               (pTVar8->SharedReferenceCount).ReferenceController;
          if (local_2c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_270.SharedReferenceCount.ReferenceController);
          if ((local_2c8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar2 = local_2c8.Object;
          if (((local_2c8.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51b4) {
            client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                      (&(local_2c8.Object)->clientMsg);
            (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x51b4;
            pAVar12 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
            if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
              pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
            }
            pMVar9 = google::protobuf::Arena::
                     DefaultConstruct<client_msg_twoway::RaidPartyDungeonStartRequest>(pAVar12);
            (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar9;
          }
          pMVar9 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
          if (pMVar9 != (Message *)0x0) {
            pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
            *(long64 *)&pMVar9[1].field_0x8 = (pFVar4->RaidPartyInfo).RaidPartyUID;
            *(uint *)(pMVar9 + 1) = *(uint *)(pMVar9 + 1) | 1;
            if ((local_2c8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar2 = local_2c8.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_2c8.Object)->SuccessDel,(FWriteAccessScope *)&local_2b0);
            local_298 = &(pFVar2->SuccessDel).field_0x8;
            puVar10 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_298);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar11 = FDelegateHandle::GenerateNewID();
              puVar10[2] = uVar11;
              *puVar10 = &
                         ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar10[3] = ReceiveRaidPartyDungeonStart;
            }
            if (local_2b0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
            }
            if ((local_2c8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar2 = local_2c8.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_2c8.Object)->FailDel,(FWriteAccessScope *)&local_290);
            local_278 = &(pFVar2->FailDel).field_0x8;
            puVar10 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_278);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &
                         ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar11 = FDelegateHandle::GenerateNewID();
              puVar10[2] = uVar11;
              *puVar10 = &
                         ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar10[3] = ProcessError;
            }
            if (local_290.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
            }
            this = UDS_NetworkManager::GetInst();
            UDS_NetworkManager::SendTwoWayPacket(this,&local_2c8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2c8.SharedReferenceCount.ReferenceController);
        }
        else {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"FDS_RaidPartyService::RequestRaidPartyDungeonStart",0x32,Yes);
            UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x2e2,L"Player is not leader");
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
        }
      }
    }
  }
  return;
}

// RequestRaidPartyInDungeon @ 14bc14df0

void __cdecl FDS_RaidPartyService::RequestRaidPartyInDungeon(void)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar3 = IsReqTwowayAvailableTime(0x51b5,CommonSystemCoolTime);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
    if (bVar3) {
      pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
      local_68.Object = pTVar5->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = local_68.Object;
      if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51b5) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_68.Object)->clientMsg);
        (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x51b5;
        pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::DungeonInRequest>
                           (pAVar9);
        (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
      }
      pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar6 != (Message *)0x0) {
        pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        *(long64 *)&pMVar6[1].field_0x8 = (pFVar4->RaidPartyInfo).RaidPartyUID;
        *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
        local_30 = &(pFVar2->SuccessDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = ReceiveDungeonIn;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
        local_10 = &(pFVar2->FailDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = ProcessError;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// RequestRaidPartyInvite @ 14bc15050

void __cdecl FDS_RaidPartyService::RequestRaidPartyInvite(long64 param_1)

{
  long64 lVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar4 = IsReqTwowayAvailableTime(0x51a5,CommonSystemCoolTime);
  if (bVar4) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if (bVar4) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      lVar1 = (pFVar5->RaidPartyInfo).RaidPartyUID;
      pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
      local_68.Object = pTVar6->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar3 = local_68.Object;
      if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51a5) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_68.Object)->clientMsg);
        (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51a5;
        pAVar10 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        pMVar7 = google::protobuf::Arena::
                 DefaultConstruct<client_msg_twoway::RaidPartyInviteRequest>(pAVar10);
        (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
      }
      pMVar7 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar7 != (Message *)0x0) {
        *(long64 *)&pMVar7[1].field_0x8 = lVar1;
        *(long64 *)(pMVar7 + 2) = param_1;
        *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 3;
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
        local_30 = &(pFVar3->SuccessDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar8[3] = ReceiveRaidPartyInvite;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
        local_10 = &(pFVar3->FailDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar8[3] = ProcessError;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// RequestRaidPartyInvitedRes @ 14bc152d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_RaidPartyService::RequestRaidPartyInvitedRes(long64 param_1,int param_2,bool param_3)

{
  bool bVar1;
  UDS_DungeonManager *this;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDS_RaidPartyRepo *this_00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  FDS_PartyRepo *pFVar6;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  FDestructionSentinel local_1a0;
  FDelegateAllocation *local_188;
  int local_180 [2];
  long64 local_178;
  undefined1 *local_170;
  long64 local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_180[0] = param_2;
  this = UDS_DungeonManager::GetInst();
  if (this == (UDS_DungeonManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_RaidPartyService::RequestRaidPartyInvitedRes",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0xc6,L"dungeonManager is nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    bVar1 = UDS_DungeonManager::IsDungeonEnterCondition(this,param_2,RaidPartyJoin);
    if (bVar1) {
      local_1b8 = (undefined1  [8])0x0;
      local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1b0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_1a0);
      local_188 = &local_1b0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_1b0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_
        ;
        puVar3[1] = param_1;
        *(int *)(puVar3 + 2) = param_2;
        *(bool *)((longlong)puVar3 + 0x14) = param_3;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[3] = uVar4;
        puVar3[4] = RequestRaidPartyInvitedRes;
        *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_
        ;
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      local_170 = &DAT_00033493;
      local_168[0] = 0x33492;
      local_178 = 0x3348d;
      this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
      if (bVar1) {
        pTVar5 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1a0,
                            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b8);
        OpenPartyLeavePopup(&local_178,local_168,pTVar5);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                   (FWriteAccessScope *)&local_1a0);
      }
      else {
        pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
        bVar1 = FDS_PartyInfo::IsValid(&pFVar6->PartyInfo);
        if (!bVar1) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                     (FWriteAccessScope *)&local_1a0);
          if ((local_1b0.DelegateSize != 0) &&
             (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_1b0,0,0,0x10);
            local_1b0.DelegateSize = 0;
          }
          if (local_1a0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
          }
          if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_1b0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1b8);
          local_1b8 = (undefined1  [8])0x0;
          local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_1b0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                     (FWriteAccessScope *)&local_1a0);
          local_188 = &local_1b0;
          puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_1b0);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_
            ;
            puVar3[1] = param_1;
            *(int *)(puVar3 + 2) = param_2;
            *(bool *)((longlong)puVar3 + 0x14) = param_3;
            uVar4 = FDelegateHandle::GenerateNewID();
            puVar3[3] = uVar4;
            puVar3[4] = OnRequestRaidPartyInvitedRes;
            *puVar3 = &
                      ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JH_N__6B_
            ;
          }
          if (local_1a0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
          }
          bVar1 = IsEnterStateCheck(local_180,(long64 *)&local_170,
                                    (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                                    local_1b8);
          if (!bVar1) {
            return;
          }
          OnRequestRaidPartyInvitedRes(param_1,param_2,param_3);
          return;
        }
        pTVar5 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1a0,
                            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b8);
        OpenPartyLeavePopup(&local_178,(long64 *)&local_170,pTVar5);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                   (FWriteAccessScope *)&local_1a0);
      }
      if ((local_1b0.DelegateSize != 0) &&
         (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1b0,0,0,0x10);
        local_1b0.DelegateSize = 0;
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1b8);
    }
  }
  return;
}

// RequestRaidPartyJoin @ 14bc156b0

/* WARNING: Type propagation algorithm not settling */

void __cdecl FDS_RaidPartyService::RequestRaidPartyJoin(long64 param_1,FString *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FDS_RaidPartyRepo *this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  FDS_PartyRepo *pFVar7;
  FDS_DungeonBaseTableRow *pFVar8;
  FDS_DungeonTypeDataTableRow *pFVar9;
  UObject *pUVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  long64 local_res20;
  FWeakObjectPtr local_98;
  FDestructionSentinel local_90;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  iVar13 = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
    ;
    puVar4[1] = param_1;
    ::FString::FString((FString *)(puVar4 + 2),param_2);
    *(int *)(puVar4 + 4) = param_3;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[5] = uVar5;
    puVar4[6] = RequestRaidPartyJoin;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
    ;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  local_90._0_8_ = &DAT_00033493;
  local_98.ObjectIndex = 0x33492;
  local_98.ObjectSerialNumber = 0;
  local_res20 = 0x3348d;
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this);
  if (bVar3) {
    pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_60,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
    OpenPartyLeavePopup(&local_res20,(long64 *)&local_98,pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_90);
  }
  else {
    pFVar7 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar3 = FDS_PartyInfo::IsValid(&pFVar7->PartyInfo);
    if (!bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FWriteAccessScope *)&local_90);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)
                   CONCAT44(local_90.Accessor._4_4_,(int)local_90.Accessor),&local_90);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_78);
      local_78 = (undefined1  [8])0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FWriteAccessScope *)&local_60);
      local_48 = &local_70;
      puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_70);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
        ;
        puVar4[1] = param_1;
        ::FString::FString((FString *)(puVar4 + 2),param_2);
        *(int *)(puVar4 + 4) = param_3;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[5] = uVar5;
        puVar4[6] = OnRequestRaidPartyJoin;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___JVFString__H__6B_
        ;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
      if (bVar3) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                   (FWriteAccessScope *)&local_60);
        if ((local_70.DelegateSize != 0) &&
           (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_70,0,0,0x10);
          local_70.DelegateSize = 0;
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_70.DelegateAllocator);
        }
LAB_14bc15bba:
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_78);
        pFVar11 = ::FString::FString((FString *)&local_90,param_2);
        OnRequestRaidPartyJoin(param_1,pFVar11,param_3);
      }
      else {
        pFVar8 = FDS_DungeonBaseTableRow::GetRef((longlong)param_3,true);
        pFVar9 = FDS_DungeonTypeDataTableRow::GetRef((ulonglong)pFVar8->DungeonType,true);
        FDS_DungeonBaseTableRow::GetAll
                  ((TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)&local_90)
        ;
        iVar2 = (int)local_90.Accessor;
        if ((int)local_90.Accessor == 0) {
          if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_90._0_8_);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                     (FWriteAccessScope *)&local_60);
          if ((local_70.DelegateSize != 0) &&
             (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_70,0,0,0x10);
            local_70.DelegateSize = 0;
          }
        }
        else {
          pFVar1 = (FScriptContainerElement *)
                   (local_90._0_8_ + (longlong)(int)local_90.Accessor * 8);
          pFVar12 = (FScriptContainerElement *)local_90._0_8_;
          while( true ) {
            if ((int)local_90.Accessor != iVar2) {
              `TCheckedPointerIterator<FDS_DungeonBaseTableRow_const_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_res20);
            }
            if (pFVar12 == pFVar1) break;
            if (*(EDS_DungeonType *)(*(longlong *)pFVar12 + 0x20) == pFVar8->DungeonType) {
              UDS_DungeonRecordData::GetData
                        ((ulong64)&local_98,UDS_PlayerData::MainPlayerEntityID,
                         SUB41(*(undefined4 *)(*(longlong *)pFVar12 + 8),0));
              bVar3 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_98,
                                 (void *)0x0);
              if (!bVar3) {
                pUVar10 = FWeakObjectPtr::Get(&local_98);
                iVar13 = iVar13 + *(int *)&pUVar10[2].field_0xc;
              }
            }
            pFVar12 = pFVar12 + 8;
          }
          if (0 < pFVar9->EnterLimitCount - iVar13) {
            if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_90._0_8_);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                       (FWriteAccessScope *)&local_60);
            if ((local_70.DelegateSize != 0) &&
               (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_70,0,0,0x10);
              local_70.DelegateSize = 0;
            }
            if (local_60.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
            }
            if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_70.DelegateAllocator);
            }
            goto LAB_14bc15bba;
          }
          local_60.AccessType = Reader;
          local_60._4_4_ = 0;
          local_60.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
          local_60.bDestroyed = false;
          local_60._17_3_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x347d9,Complete_System_01,
                     (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                      *)&local_60);
          if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_90._0_8_);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                     (FWriteAccessScope *)&local_60);
          if ((local_70.DelegateSize != 0) &&
             (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_70,0,0,0x10);
            local_70.DelegateSize = 0;
          }
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_70.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_78);
      }
      goto LAB_14bc15bdd;
    }
    pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_60,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
    OpenPartyLeavePopup(&local_res20,(long64 *)&local_90,pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_90);
  }
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_90.Accessor._4_4_,(int)local_90.Accessor),&local_90);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
LAB_14bc15bdd:
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// RequestRaidPartyKick @ 14bc15c10

void __cdecl FDS_RaidPartyService::RequestRaidPartyKick(long64 param_1)

{
  long64 lVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar4 = IsReqTwowayAvailableTime(0x51ab,CommonSystemCoolTime);
  if (bVar4) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if (bVar4) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      lVar1 = (pFVar5->RaidPartyInfo).RaidPartyUID;
      pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
      local_68.Object = pTVar6->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar3 = local_68.Object;
      if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51ab) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_68.Object)->clientMsg);
        (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51ab;
        pAVar10 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        pMVar7 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::RaidPartyKickRequest>
                           (pAVar10);
        (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
      }
      pMVar7 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar7 != (Message *)0x0) {
        *(long64 *)&pMVar7[1].field_0x8 = lVar1;
        *(long64 *)(pMVar7 + 2) = param_1;
        *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 3;
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
        local_30 = &(pFVar3->SuccessDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar8[3] = ReceiveRaidPartyKick;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
        local_10 = &(pFVar3->FailDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar8[3] = ProcessError;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// RequestRaidPartyKickVote @ 14bc15e90

void __cdecl FDS_RaidPartyService::RequestRaidPartyKickVote(long64 param_1)

{
  int iVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  long64 lVar10;
  Arena *pAVar11;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *pTVar12;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_98;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_88;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_70;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_18;
  
  bVar4 = IsReqTwowayAvailableTime(0x51a7,CommonSystemCoolTime);
  if (bVar4) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if ((pFVar5->RaidPartyVoteData).RaidPartyUID < 1) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      iVar1 = (pFVar5->RaidPartyInfo).State;
      if ((iVar1 != 3) && (iVar1 != 4)) {
        pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
        if (!bVar4) {
          return;
        }
        pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        lVar10 = (pFVar5->RaidPartyInfo).RaidPartyUID;
        pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_18);
        local_98.Object = pTVar6->Object;
        local_98.SharedReferenceCount.ReferenceController =
             (pTVar6->SharedReferenceCount).ReferenceController;
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        if ((local_98.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar3 = local_98.Object;
        if (((local_98.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51a7) {
          client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                    (&(local_98.Object)->clientMsg);
          (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51a7;
          pAVar11 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
          if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          pMVar7 = google::protobuf::Arena::
                   DefaultConstruct<client_msg_twoway::RaidPartyKickVoteRequest>(pAVar11);
          (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
        }
        pMVar7 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
        if (pMVar7 != (Message *)0x0) {
          *(long64 *)&pMVar7[1].field_0x8 = lVar10;
          *(long64 *)(pMVar7 + 2) = param_1;
          *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 3;
          if ((local_98.Object == (FDS_ClientMessage_Twoway *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar3 = local_98.Object;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(local_98.Object)->SuccessDel,(FWriteAccessScope *)&local_58);
          local_40 = &(pFVar3->SuccessDel).field_0x8;
          puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_40);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &
                      ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar9 = FDelegateHandle::GenerateNewID();
            puVar8[2] = uVar9;
            *puVar8 = &
                      ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar8[3] = ReceiveRaidPartyKickVote;
          }
          if (local_58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
          }
          if ((local_98.Object == (FDS_ClientMessage_Twoway *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar3 = local_98.Object;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(local_98.Object)->FailDel,(FWriteAccessScope *)&local_38);
          local_20 = &(pFVar3->FailDel).field_0x8;
          puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &
                      ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar9 = FDelegateHandle::GenerateNewID();
            puVar8[2] = uVar9;
            *puVar8 = &
                      ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar8[3] = ProcessError;
          }
          if (local_38.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
          }
          this = UDS_NetworkManager::GetInst();
          UDS_NetworkManager::SendTwoWayPacket(this,&local_98);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        return;
      }
      pTVar12 = &local_70;
      local_70._0_8_ = 0;
      lVar10 = 0x34800;
      local_70._8_8_ = 0;
      local_70._16_4_ = 0;
    }
    else {
      pTVar12 = &local_88;
      local_88._0_8_ = 0;
      lVar10 = 0x347f7;
      local_88._8_8_ = 0;
      local_88._16_4_ = 0;
    }
    UDS_UIMessageManager::OpenMsgByStringUi(lVar10,Complete_None_01,pTVar12);
  }
  return;
}

// RequestRaidPartyKickVoteRes @ 14bc16180

void __cdecl FDS_RaidPartyService::RequestRaidPartyKickVoteRes(bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar4 = IsReqTwowayAvailableTime(0x51aa,CommonSystemCoolTime);
  if (bVar4) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if ((bVar4) &&
       (pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst(), pFVar5->bIsVoteable != false)) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar5->bIsVoteable = false;
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
      if (bVar4) {
        pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        lVar1 = (pFVar5->RaidPartyInfo).RaidPartyUID;
        pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        if ((lVar1 == (pFVar5->RaidPartyVoteData).RaidPartyUID) &&
           (0 < (pFVar5->RaidPartyVoteData).PlayerUID)) {
          pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
          local_68.Object = pTVar6->Object;
          local_68.SharedReferenceCount.ReferenceController =
               (pTVar6->SharedReferenceCount).ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar3 = local_68.Object;
          if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51aa) {
            client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                      (&(local_68.Object)->clientMsg);
            (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51aa;
            pAVar10 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
            if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
              pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
            }
            pMVar7 = google::protobuf::Arena::
                     DefaultConstruct<client_msg_twoway::RaidPartyKickVoteResRequest>(pAVar10);
            (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
          }
          pMVar7 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
          if (pMVar7 != (Message *)0x0) {
            *(long64 *)&pMVar7[1].field_0x8 = (pFVar5->RaidPartyVoteData).RaidPartyUID;
            *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 1;
            *(long64 *)(pMVar7 + 2) = (pFVar5->RaidPartyVoteData).PlayerUID;
            pMVar7[2].field_0x8 = param_1;
            *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 6;
            if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar3 = local_68.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
            local_30 = &(pFVar3->SuccessDel).field_0x8;
            puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &
                        ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar9 = FDelegateHandle::GenerateNewID();
              puVar8[2] = uVar9;
              *puVar8 = &
                        ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar8[3] = ReceiveRaidPartyKickVoteRes;
            }
            if (local_48.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
            }
            if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar3 = local_68.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
            local_10 = &(pFVar3->FailDel).field_0x8;
            puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &
                        ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar9 = FDelegateHandle::GenerateNewID();
              puVar8[2] = uVar9;
              *puVar8 = &
                        ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar8[3] = ProcessError;
            }
            if (local_28.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
            }
            this = UDS_NetworkManager::GetInst();
            UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// RequestRaidPartyLeave @ 14bc16450

void __cdecl
FDS_RaidPartyService::RequestRaidPartyLeave
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  long64 lVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar4 = IsReqTwowayAvailableTime(0x51a8,CommonSystemCoolTime);
  if (bVar4) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if (bVar4) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      lVar1 = (pFVar5->RaidPartyInfo).RaidPartyUID;
      pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
      local_68.Object = pTVar6->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_68.Object;
      if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51a8) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_68.Object)->clientMsg);
        (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x51a8;
        pAVar10 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        pMVar7 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::RaidPartyLeaveRequest>
                           (pAVar10);
        (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
      }
      pMVar7 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar7 != (Message *)0x0) {
        *(long64 *)&pMVar7[1].field_0x8 = lVar1;
        *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 1;
        if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
        local_30 = &(pFVar3->SuccessDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 1),
                     param_1);
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[4] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar8[5] = ReceiveRaidPartyLeave;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
        local_10 = &(pFVar3->FailDel).field_0x8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar8[3] = ProcessError;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
      if (*(void **)&param_1->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_1->field_0x8);
      }
      goto LAB_14bc166ef;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return;
  }
LAB_14bc166ef:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// RequestRaidPartyList @ 14bc16710

void __cdecl
FDS_RaidPartyService::RequestRaidPartyList
          (EDS_DungeonType param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ClientMessageUnion CVar3;
  bool bVar4;
  UDS_NetworkManager *this;
  FScriptContainerElement *pFVar5;
  undefined1 local_res20 [8];
  ClientMessages local_38;
  
  bVar4 = IsReqOnewayAvailableTime(0x4f4c,RaidPartyFindAddTime);
  if (bVar4) {
    client_msg::ClientMessages::ClientMessages(&local_38,(Arena *)0x0);
    local_38._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_38._impl_._oneof_case_[0] != 0x4f4c) {
      client_msg::ClientMessages::clear_ClientMessage(&local_38);
      local_38._impl_._oneof_case_[0] = 0x4f4c;
      if (((byte)local_38._padding_ & 1) == 0) {
        local_38._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::RaidPartyListRequest>
                       ((Arena *)(CONCAT71(local_38._padding_._1_7_,(byte)local_38._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_38._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::RaidPartyListRequest>
                       (*(Arena **)
                         (CONCAT71(local_38._padding_._1_7_,(byte)local_38._padding_) &
                         0xfffffffffffffffe));
      }
    }
    CVar3 = local_38._impl_.ClientMessage_;
    if (local_38._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      *(uint *)&local_38._impl_.ClientMessage_.joincontinentreq_[2].field_0xc = (uint)param_1;
      *(uint *)(local_38._impl_.ClientMessage_.joincontinentreq_ + 1) =
           *(uint *)(local_38._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
      pFVar5 = (param_2->AllocatorInstance).Data;
      iVar1 = param_2->ArrayNum;
      pFVar2 = pFVar5 + (longlong)iVar1 * 4;
      while( true ) {
        if (param_2->ArrayNum != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar5 == pFVar2) break;
        google::protobuf::RepeatedField<int>::Add
                  ((RepeatedField<int> *)&CVar3.joincontinentreq_[1].field_0x8,*(int *)pFVar5);
        pFVar5 = pFVar5 + 4;
      }
      *(bool *)(CVar3.joincontinentreq_ + 3) = param_3;
      *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 2;
      this = UDS_NetworkManager::GetInst();
      if (this != (UDS_NetworkManager *)0x0) {
        UDS_NetworkManager::SendPacket(this,&local_38);
      }
    }
    client_msg::ClientMessages::~ClientMessages(&local_38);
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  else {
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
      return;
    }
  }
  return;
}

// RequestRaidPartyMemberUpdateState @ 14bc16870

void __cdecl FDS_RaidPartyService::RequestRaidPartyMemberUpdateState(EDS_RaidMemberState param_1)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar3 = IsReqTwowayAvailableTime(0x51ac,CommonSystemCoolTime);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
    if (bVar3) {
      pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
      local_68.Object = pTVar5->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = local_68.Object;
      if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51ac) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_68.Object)->clientMsg);
        (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x51ac;
        pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        pMVar6 = google::protobuf::Arena::
                 DefaultConstruct<client_msg_twoway::RaidPartyMemberUpdateStateRequest>(pAVar9);
        (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
      }
      pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar6 != (Message *)0x0) {
        pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        *(long64 *)&pMVar6[1].field_0x8 = (pFVar4->RaidPartyInfo).RaidPartyUID;
        *(uint *)(pMVar6 + 2) = (uint)param_1;
        *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 3;
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
        local_30 = &(pFVar2->SuccessDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = ReceiveRaidPartyMemberUpdateState;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
        local_10 = &(pFVar2->FailDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = ProcessError;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// RequestRaidPartyOutDungeon @ 14bc16ae0

void __cdecl FDS_RaidPartyService::RequestRaidPartyOutDungeon(void)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar3 = IsReqTwowayAvailableTime(0x51b6,CommonSystemCoolTime);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
    if (bVar3) {
      pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
      local_68.Object = pTVar5->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = local_68.Object;
      if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51b6) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_68.Object)->clientMsg);
        (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x51b6;
        pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::DungeonOutRequest>
                           (pAVar9);
        (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
      }
      pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar6 != (Message *)0x0) {
        pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        *(long64 *)&pMVar6[1].field_0x8 = (pFVar4->RaidPartyInfo).RaidPartyUID;
        *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
        local_30 = &(pFVar2->SuccessDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = ReceiveDungeonOut;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar2 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
        local_10 = &(pFVar2->FailDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = ProcessError;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// RequestRaidPartyPassword @ 14bc16d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::RequestRaidPartyPassword(void)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_RaidPartyRepo *pFVar5;
  UObject *pUVar6;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar7;
  Message *pMVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UDS_NetworkManager *this;
  Arena *pAVar11;
  undefined1 auStackY_1d8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_1a8;
  FWeakObjectPtr local_198;
  FDestructionSentinel local_190;
  undefined1 *local_178;
  FDestructionSentinel local_170;
  undefined1 *local_158;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_198,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_RaidPartyService::RequestRaidPartyPassword",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x105,L"playerData is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if (bVar3) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pUVar6 = FWeakObjectPtr::Get(&local_198);
      if ((pFVar5->RaidPartyInfo).LeaderUID == *(longlong *)&pUVar6[6].field_0x8) {
        pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
        if (bVar3) {
          pTVar7 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_150);
          local_1a8.Object = pTVar7->Object;
          local_1a8.SharedReferenceCount.ReferenceController =
               (pTVar7->SharedReferenceCount).ReferenceController;
          if (local_1a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_150.SharedReferenceCount.ReferenceController);
          if (local_1a8.Object == (FDS_ClientMessage_Twoway *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          pFVar2 = local_1a8.Object;
          if (((local_1a8.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51b2) {
            client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                      (&(local_1a8.Object)->clientMsg);
            (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x51b2;
            pAVar11 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
            if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
              pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
            }
            pMVar8 = google::protobuf::Arena::
                     DefaultConstruct<client_msg_twoway::GetRaidPartyPassWordRequest>(pAVar11);
            (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar8;
          }
          pMVar8 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
          if (pMVar8 != (Message *)0x0) {
            pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
            *(long64 *)&pMVar8[1].field_0x8 = (pFVar5->RaidPartyInfo).RaidPartyUID;
            *(uint *)(pMVar8 + 1) = *(uint *)(pMVar8 + 1) | 1;
            if (local_1a8.Object == (FDS_ClientMessage_Twoway *)0x0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            pFVar2 = local_1a8.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_1a8.Object)->SuccessDel,(FWriteAccessScope *)&local_190);
            local_178 = &(pFVar2->SuccessDel).field_0x8;
            puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_178);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = &
                        ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar9[2] = uVar10;
              *puVar9 = &
                        ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar9[3] = ReceiveRaidPartyPassword;
            }
            if (local_190.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
            }
            if (local_1a8.Object == (FDS_ClientMessage_Twoway *)0x0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            pFVar2 = local_1a8.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_1a8.Object)->FailDel,(FWriteAccessScope *)&local_170);
            local_158 = &(pFVar2->FailDel).field_0x8;
            puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_158);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = &
                        ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar9[2] = uVar10;
              *puVar9 = &
                        ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar9[3] = ProcessError;
            }
            if (local_170.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
            }
            this = UDS_NetworkManager::GetInst();
            UDS_NetworkManager::SendTwoWayPacket(this,&local_1a8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a8.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// RequestRaidPartySlotChange @ 14bc17080

bool __cdecl FDS_RaidPartyService::RequestRaidPartySlotChange(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long64 lVar3;
  code *pcVar4;
  FDS_ClientMessage_Twoway *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  FDS_RaidPartyRepo *pFVar8;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar9;
  Message *pMVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UDS_NetworkManager *this;
  Arena *pAVar13;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_98;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_88;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_78;
  FDestructionSentinel local_60;
  undefined1 *local_48;
  FDestructionSentinel local_40;
  undefined1 *local_28;
  
  if (param_1 != param_2) {
    bVar6 = IsReqTwowayAvailableTime(0x51ad,CommonSystemCoolTime);
    if (bVar6) {
      pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      bVar6 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar8);
      if (bVar6) {
        pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        lVar3 = (pFVar8->RaidPartyInfo).RaidPartyUID;
        pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        iVar1 = (pFVar8->RaidPartyInfo).DungeonId;
        pTVar9 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_88);
        local_98.Object = pTVar9->Object;
        local_98.SharedReferenceCount.ReferenceController =
             (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        if (local_98.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        pFVar5 = local_98.Object;
        if (((local_98.Object)->clientMsg)._impl_._oneof_case_[0] != 0x51ad) {
          client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                    (&(local_98.Object)->clientMsg);
          (pFVar5->clientMsg)._impl_._oneof_case_[0] = 0x51ad;
          pAVar13 = (Arena *)((pFVar5->clientMsg)._padding_ & 0xfffffffffffffffe);
          if (((pFVar5->clientMsg)._padding_ & 1) != 0) {
            pAVar13 = (Arena *)(pAVar13->impl_).tag_and_id_;
          }
          pMVar10 = google::protobuf::Arena::
                    DefaultConstruct<client_msg_twoway::RaidPartySlotChangeRequest>(pAVar13);
          (pFVar5->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar10;
        }
        pMVar10 = (pFVar5->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
        if (pMVar10 == (Message *)0x0) {
          bVar6 = false;
        }
        else {
          *(long64 *)&pMVar10[1].field_0x8 = lVar3;
          uVar2 = *(uint *)(pMVar10 + 1);
          *(int *)(pMVar10 + 2) = iVar1;
          *(uint *)&pMVar10[2].field_0x4 = param_1;
          *(uint *)&pMVar10[2].field_0x8 = param_2;
          *(uint *)(pMVar10 + 1) = uVar2 | 0xf;
          if (local_98.Object == (FDS_ClientMessage_Twoway *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          pFVar5 = local_98.Object;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(local_98.Object)->SuccessDel,(FWriteAccessScope *)&local_60);
          local_48 = &(pFVar5->SuccessDel).field_0x8;
          puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_48);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar12 = FDelegateHandle::GenerateNewID();
            puVar11[2] = uVar12;
            *puVar11 = &
                       ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar11[3] = ReceiveRaidPartySlotChange;
          }
          if (local_60.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
          }
          if (local_98.Object == (FDS_ClientMessage_Twoway *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          pFVar5 = local_98.Object;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(local_98.Object)->FailDel,(FWriteAccessScope *)&local_40);
          local_28 = &(pFVar5->FailDel).field_0x8;
          puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_28);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &
                       ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar12 = FDelegateHandle::GenerateNewID();
            puVar11[2] = uVar12;
            *puVar11 = &
                       ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar11[3] = ProcessError;
          }
          if (local_40.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
          }
          this = UDS_NetworkManager::GetInst();
          UDS_NetworkManager::SendTwoWayPacket(this,&local_98);
          bVar6 = true;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        return bVar6;
      }
    }
    else {
      local_78._0_8_ = 0;
      local_78._8_8_ = 0;
      local_78._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x585,Alert_None_01,&local_78);
    }
  }
  return false;
}

// SendRaidPartyAllDungeonOutRequest @ 14bc1dc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_RaidPartyService::SendRaidPartyAllDungeonOutRequest(void)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FDS_RaidPartyRepo *pFVar5;
  UDS_LogManager *pUVar6;
  TSharedRef<client_msg::ClientMessages,1> *pTVar7;
  Message *pMVar8;
  UDS_NetworkManager *this_00;
  Arena *pAVar9;
  undefined1 auStackY_298 [32];
  TSharedRef<client_msg::ClientMessages,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  if ((pFVar5->RaidPartyInfo).RaidPartyUID < 1) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"FDS_RaidPartyService::SendRaidPartyAllDungeonOutRequest",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_258.Ptr,0x34d,L"RaidPartyUID <= 0.");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    return false;
  }
  pTVar7 = MakeShared<client_msg::ClientMessages,1>(&local_268);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  this = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if ((this == (ClientMessages *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this->_impl_)._oneof_case_[0] != 0x4f4e) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x4f4e;
    pAVar9 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar8 = google::protobuf::Arena::DefaultConstruct<client_msg::RaidPartyAllDungeonOutRequest>
                       (pAVar9);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar8;
  }
  pMVar8 = (this->_impl_).ClientMessage_.joincontinentreq_;
  if (pMVar8 != (Message *)0x0) {
    *(long64 *)&pMVar8[1].field_0x8 = (pFVar5->RaidPartyInfo).RaidPartyUID;
    *(uint *)(pMVar8 + 1) = *(uint *)(pMVar8 + 1) | 1;
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1de76;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_RaidPartyService::SendRaidPartyAllDungeonOutRequest",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x35d,L"netMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  bVar3 = false;
LAB_14bc1de76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// UpdateNotifyInfo @ 14bc211b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_RaidPartyService::UpdateNotifyInfo(RaidPartyNotifyType param_1,long64 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FDS_EventDelegate<EDS_RaidPartyNotifyType_const_,__int64_const_> *this;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UDS_LogManager *pUVar12;
  UDS_EventManager *this_00;
  UDS_DungeonEvent *pUVar13;
  FDS_RaidPartyMemberInfo *pFVar14;
  FString *pFVar15;
  UObject *pUVar16;
  FDS_RaidPartyRepo *pFVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_4c8 [32];
  FWeakObjectPtr local_488;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_480;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_470;
  RaidPartyNotifyType local_460;
  FString local_458;
  FString local_448;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_438;
  FDestructionSentinel local_420;
  FStringFormatArg local_408;
  FStringFormatArg local_3e8;
  FString local_3c8;
  FString local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_460 = param_1;
  UDS_PlayerData::GetMainPlayerData();
  bVar8 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_488,(void *)0x0);
  if (bVar8) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"FDS_RaidPartyService::UpdateNotifyInfo",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_3a8.Ptr,0x737,L"playerData is nullptr");
    if ((void *)local_3a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_3a8._padding_);
    return;
  }
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_288.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else {
      pUVar13 = UDS_EventManager::GetEventInternal<UDS_DungeonEvent>(this_00);
      if (pUVar13 != (UDS_DungeonEvent *)0x0) {
        switch(param_1) {
        case RaidPartyNotifyType_Leave:
          pUVar16 = FWeakObjectPtr::Get(&local_488);
          if (param_2 != *(longlong *)&pUVar16[6].field_0x8) {
            FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar13->OnLeftRaidPartyMember,param_2);
          }
          break;
        case RaidPartyNotifyType_Join:
          pUVar16 = FWeakObjectPtr::Get(&local_488);
          if (param_2 != *(longlong *)&pUVar16[6].field_0x8) {
            FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar13->OnJoinedRaidPartyMember,param_2);
          }
          break;
        case RaidPartyNotifyType_DelegateLeader:
          pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
          bVar8 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar17);
          if (bVar8) {
            pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
            pUVar16 = FWeakObjectPtr::Get(&local_488);
            if ((pFVar17->RaidPartyInfo).LeaderUID == *(longlong *)&pUVar16[6].field_0x8) {
              pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
              if ((pFVar17->RaidPartyInfo).IsPassword != false) {
                RequestRaidPartyPassword();
                FDS_EventDelegate<__int64_const_>::Broadcast
                          (&pUVar13->OnRaidPartyLeaderChanged,param_2);
                break;
              }
              pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
              ::FString::FString(&local_458,L"");
              FVar7.Data = local_458.Data.AllocatorInstance.Data;
              pFVar15 = &pFVar17->Password;
              if (pFVar15 != &local_458) {
                piVar1 = &(pFVar17->Password).Data.ArrayMax;
                iVar3 = *piVar1;
                (pFVar17->Password).Data.ArrayNum = local_458.Data.ArrayNum;
                if ((local_458.Data.ArrayNum == 0) && (iVar3 == 0)) {
                  *piVar1 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_458.Data.ArrayNum,iVar3,(ForAnyElementType *)pFVar15,
                             local_458.Data.ArrayNum,piVar1);
                  if (local_458.Data.ArrayNum != 0) {
                    memcpy((pFVar15->Data).AllocatorInstance.Data,FVar7.Data,
                           (longlong)local_458.Data.ArrayNum * 2);
                  }
                }
              }
            }
            else {
              pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
              ::FString::FString(&local_448,L"");
              FVar7.Data = local_448.Data.AllocatorInstance.Data;
              pFVar15 = &pFVar17->Password;
              local_458.Data.AllocatorInstance.Data = local_448.Data.AllocatorInstance.Data;
              if (pFVar15 != &local_448) {
                piVar1 = &(pFVar17->Password).Data.ArrayMax;
                iVar3 = *piVar1;
                (pFVar17->Password).Data.ArrayNum = local_448.Data.ArrayNum;
                if ((local_448.Data.ArrayNum == 0) && (iVar3 == 0)) {
                  *piVar1 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_448.Data.ArrayNum,iVar3,(ForAnyElementType *)pFVar15,
                             local_448.Data.ArrayNum,piVar1);
                  local_458.Data.AllocatorInstance.Data = local_448.Data.AllocatorInstance.Data;
                  if (local_448.Data.ArrayNum != 0) {
                    memcpy((pFVar15->Data).AllocatorInstance.Data,FVar7.Data,
                           (longlong)local_448.Data.ArrayNum * 2);
                    local_458.Data.AllocatorInstance.Data = local_448.Data.AllocatorInstance.Data;
                  }
                }
              }
            }
            if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_458.Data.AllocatorInstance.Data);
            }
            FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar13->OnRaidPartyLeaderChanged,param_2)
            ;
          }
          break;
        case RaidPartyNotifyType_Kick:
          pUVar16 = FWeakObjectPtr::Get(&local_488);
          if (param_2 == *(longlong *)&pUVar16[6].field_0x8) {
            pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
            FDS_RaidPartyRepo::Clear(pFVar17);
          }
          break;
        case RaidPartyNotifyType_VoteKickReject:
          pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
          FDS_RaidPartyRepo::SetRaidPartyVoteClear(pFVar17);
          pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
          pFVar14 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(pFVar17,param_2);
          pFVar15 = ::FString::FString(&local_3c8,&pFVar14->NickName);
          FStringFormatArg::FStringFormatArg(&local_408,pFVar15);
          local_480.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_480.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_480.AllocatorInstance,1,&local_480.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_480.AllocatorInstance.Data,&local_408,1);
          if (local_408.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.StringValue.Data.AllocatorInstance.Data);
          }
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x347e9,None_System_01,&local_480,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_480.AllocatorInstance.Data,local_480.ArrayNum);
          if ((FStringFormatArg *)local_480.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_480.AllocatorInstance.Data);
          }
          break;
        case RaidPartyNotifyType_VoteKickAgreement:
          pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
          pFVar14 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(pFVar17,param_2);
          pFVar15 = ::FString::FString(&local_3b8,&pFVar14->NickName);
          FStringFormatArg::FStringFormatArg(&local_3e8,pFVar15);
          local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_470.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_470.AllocatorInstance,1,&local_470.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_470.AllocatorInstance.Data,&local_3e8,1);
          if (local_3e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e8.StringValue.Data.AllocatorInstance.Data);
          }
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x347e8,None_System_01,&local_470,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
          bVar8 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar17);
          if (bVar8) {
            pUVar16 = FWeakObjectPtr::Get(&local_488);
            if (param_2 == *(longlong *)&pUVar16[6].field_0x8) {
              pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
              FDS_RaidPartyRepo::Clear(pFVar17);
            }
            else {
              pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
              FDS_RaidPartyRepo::SetRaidPartyVoteClear(pFVar17);
            }
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_470.AllocatorInstance.Data,local_470.ArrayNum);
          if ((FStringFormatArg *)local_470.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_470.AllocatorInstance.Data);
          }
          break;
        case RaidPartyNotifyType_VoteUserLeave:
          pFVar17 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
          FDS_RaidPartyRepo::SetRaidPartyVoteClear(pFVar17);
          local_438._0_8_ = 0;
          local_438._8_8_ = 0;
          local_438._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x34801,Alert_System_01,&local_438);
        }
        this = &pUVar13->OnChangedRaidPartyNotify;
        bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
        if (!bVar8) {
          return;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)&local_420);
        puVar2 = &(pUVar13->OnChangedRaidPartyNotify).Delegate.field_0x1c;
        *(int *)puVar2 = *(int *)puVar2 + 1;
        bVar8 = false;
        uVar18 = *(int *)&(pUVar13->OnChangedRaidPartyNotify).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar18) {
          lVar19 = (longlong)(int)uVar18 << 4;
          bVar8 = false;
          do {
            uVar11 = 0;
            if ((int)uVar18 < *(int *)&(pUVar13->OnChangedRaidPartyNotify).Delegate.field_0x10) {
              uVar11 = ~uVar18 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)&(pUVar13->OnChangedRaidPartyNotify).Delegate.field_0x8;
            if ((*(int *)(lVar4 + 8 + lVar19) == 0) ||
               (plVar5 = *(longlong **)(lVar4 + lVar19), plVar5 == (longlong *)0x0)) {
LAB_14bc218ad:
              bVar8 = true;
            }
            else {
              cVar10 = (**(code **)(*plVar5 + 0x68))(plVar5,(undefined1)local_460,param_2);
              if (cVar10 == '\0') goto LAB_14bc218ad;
            }
            lVar19 = lVar19 + -0x10;
            uVar18 = uVar18 - 1;
          } while (-1 < (int)uVar18);
        }
        puVar2 = &(pUVar13->OnChangedRaidPartyNotify).Delegate.field_0x1c;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
        }
        if (local_420.bDestroyed != false) {
          return;
        }
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
        return;
      }
    }
  }
  pUVar12 = UDS_LogManager::GetInst();
  if (pUVar12 != (UDS_LogManager *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"FDS_RaidPartyService::UpdateNotifyInfo",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_168.Ptr,0x73e,L"dungeonEvent is nullptr");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  return;
}

