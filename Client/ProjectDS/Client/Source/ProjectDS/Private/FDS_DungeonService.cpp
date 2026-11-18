// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// OnExitDungeon @ 14bbc96e0

void __cdecl FDS_DungeonService::OnExitDungeon(FDS_ButtonEventField *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  long64 local_res10 [3];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FDS_DungeonService::OnExitDungeon'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pTVar3 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_40,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  local_res10[0] = 0x3348a;
  local_res10[1] = 0x3348a;
  local_res10[2] = 0x33485;
  FDS_RaidPartyService::IsPartyStateCheckLeave(local_res10 + 2,local_res10 + 1,local_res10,pTVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// OpenDuneonExitButton @ 14bbcc6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_DungeonService::OpenDuneonExitButton(void)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  FDelegateAllocation local_170;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if ((bVar1) &&
     (pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst(), (pFVar2->RaidPartyInfo).State == 3)) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar2);
    if (pFVar3->MemberState == DungeonInPlay) {
      this = UDS_WindowManager::GetInst();
      if (this == (UDS_WindowManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"FDS_DungeonService::OpenDuneonExitButton",0x28,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x7e,L"windowManager is nullptr.")
          ;
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
                   (FWriteAccessScope *)&local_160);
        local_148 = &local_170;
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
          puVar5[3] = OpenExitWindow;
        }
        if (local_160.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
        }
        pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &local_160,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_178);
        UDS_WindowManager::OpenWindow(this,BtnDungeonExit,pTVar7);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                   (FWriteAccessScope *)&local_160);
        if ((local_170.DelegateSize != 0) &&
           (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_170.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_170,0,0,0x10);
          local_170.DelegateSize = 0;
        }
        if (local_160.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
        }
        if (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_170.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_178);
      }
    }
  }
  return;
}

// OpenExitWindow @ 14bbcc910

void __cdecl FDS_DungeonService::OpenExitWindow(UDS_UserWidget *param_1)

{
  FString *pFVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FDS_ViewModelContext_CommonIconTextButton *pFVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  int iVar9;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res10;
  FDS_Text local_a8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_58);
    pFVar5 = local_58.Object;
    if (local_58.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x15b;
    local_a8.StringTableID = 0;
    local_a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_a8.StringEnumTableNameID.Number = 0;
    local_a8.TimeExpressionType = None;
    local_a8.IsExpression = false;
    local_a8.DateTime.Ticks = 0;
    local_a8.TimeSpan.Ticks = 0;
    local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.UniqueString.Data.ArrayNum = 0;
    local_a8.UniqueString.Data.ArrayMax = 0;
    local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.FormatArgs.ArrayNum = 0;
    local_a8.FormatArgs.ArrayMax = 0;
    local_a8.StringTableType = None;
    FDS_Text::SetTextFromStringTable(&local_a8,StringUi,0x33485);
    pFVar1 = &(pFVar5->DSText).UniqueString;
    (pFVar5->DSText).StringTableType = local_a8.StringTableType;
    (pFVar5->DSText).StringTableID = local_a8.StringTableID;
    (pFVar5->DSText).StringEnumTableNameID = local_a8.StringEnumTableNameID;
    (pFVar5->DSText).DateTime.Ticks = local_a8.DateTime.Ticks;
    (pFVar5->DSText).TimeSpan.Ticks = local_a8.TimeSpan.Ticks;
    (pFVar5->DSText).TimeExpressionType = local_a8.TimeExpressionType;
    (pFVar5->DSText).IsExpression = local_a8.IsExpression;
    if (pFVar1 != &local_a8.UniqueString) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_a8.UniqueString.Data.AllocatorInstance.Data;
      local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->DSText).UniqueString.Data.ArrayNum = local_a8.UniqueString.Data.ArrayNum;
      (pFVar5->DSText).UniqueString.Data.ArrayMax = local_a8.UniqueString.Data.ArrayMax;
      local_a8.UniqueString.Data.ArrayNum = 0;
      local_a8.UniqueString.Data.ArrayMax = 0;
    }
    pTVar2 = &(pFVar5->DSText).FormatArgs;
    if (pTVar2 == &local_a8.FormatArgs) {
      iVar9 = local_a8.FormatArgs.ArrayNum;
    }
    else {
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
                 (pFVar5->DSText).FormatArgs.ArrayNum);
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar2->AllocatorInstance).Data = local_a8.FormatArgs.AllocatorInstance.Data;
      local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->DSText).FormatArgs.ArrayNum = local_a8.FormatArgs.ArrayNum;
      (pFVar5->DSText).FormatArgs.ArrayMax = local_a8.FormatArgs.ArrayMax;
      local_a8.FormatArgs.ArrayNum = 0;
      local_a8.FormatArgs.ArrayMax = 0;
      iVar9 = 0;
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data,iVar9);
    if ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_a8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.UniqueString.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickDelegate,
               (FWriteAccessScope *)&local_48);
    local_30 = &(pFVar5->OnClickDelegate).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = OnExitDungeon;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    local_28.Object = (FDS_ViewModelContext *)local_58.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
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
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ProcessError @ 14bbce7e0

bool __cdecl FDS_DungeonService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return true;
}

// ReceiveDungeonFirstClearMailNotify @ 14bbd15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_DungeonService::ReceiveDungeonFirstClearMailNotify(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_EventManager *this;
  UDS_MailEvent *pUVar3;
  undefined1 auStackY_188 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_DungeonService::ReceiveDungeonFirstClearMailNotify",0x36,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,local_138.Ptr,0x56,L"ReceiveDungeonFirstClearMailNotify");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  local_158._0_8_ = 0;
  local_158._8_8_ = 0;
  local_158._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x34841,Complete_System_01,&local_158);
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ == '\x01') {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = UDS_EventManager::GetEventInternal<UDS_MailEvent>(this);
      if (pUVar3 != (UDS_MailEvent *)0x0) {
        bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar3->OnMailRewardNotification);
        if (!bVar1) {
          return;
        }
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar3->OnMailRewardNotification).Delegate);
        return;
      }
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_DungeonService::ReceiveDungeonFirstClearMailNotify",0x36,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x5d,L"mailEvent is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// ReceiveDungeonResultNotify @ 14bbd1810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_DungeonService::ReceiveDungeonResultNotify(ServerMessages *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  FDS_RaidPartyMemberInfo *pFVar5;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar9;
  DungeonResultNotifyDefaultTypeInternal *pDVar10;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5147) {
    pDVar10 = *(DungeonResultNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pDVar10 = &server_msg::_DungeonResultNotify_default_instance_;
  }
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
  if (bVar3) {
    lVar1 = *(longlong *)((longlong)pDVar10 + 0x30);
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if (lVar1 == (pFVar4->RaidPartyInfo).RaidPartyUID) {
      pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      FDS_RaidPartyRepo::RaidPartyStateChange(pFVar4,Rewarding);
      pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
      if ((bVar3) &&
         (pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst(), (pFVar4->RaidPartyInfo).State == 3))
      {
        pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        pFVar5 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar4);
        if (pFVar5->MemberState == DungeonInPlay) {
          this = UDS_WindowManager::GetInst();
          if (this == (UDS_WindowManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 != (UDS_LogManager *)0x0) {
              pUVar6 = UDS_LogManager::GetInst();
              local_138._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_138,"FDS_DungeonService::OpenDuneonExitButton",0x28,Yes);
              UDS_LogManager::PrintLog
                        (pUVar6,1,Warning,local_138.Ptr,0x7e,L"windowManager is nullptr.");
              if ((void *)local_138._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_138._padding_);
              }
            }
          }
          else {
            local_1a8 = (undefined1  [8])0x0;
            local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_1a0.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                       (FWriteAccessScope *)&local_178);
            local_160 = &local_1a0;
            puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_1a0);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &
                        ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar8 = FDelegateHandle::GenerateNewID();
              puVar7[2] = uVar8;
              *puVar7 = &
                        ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar7[3] = OpenExitWindow;
            }
            if (local_178.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
            }
            pTVar9 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                     TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               (&local_158,
                                (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                 *)local_1a8);
            UDS_WindowManager::OpenWindow(this,BtnDungeonExit,pTVar9);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                       (FWriteAccessScope *)&local_190);
            if ((local_1a0.DelegateSize != 0) &&
               (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_1a0,0,0,0x10);
              local_1a0.DelegateSize = 0;
            }
            if (local_190.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
            }
            if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_1a0.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_1a8);
          }
        }
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9003245818949402549>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_DungeonService.cpp"
                         ,0x4b,"false");
      if (bVar3) goto code_r0x00014bbd18cc;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9003245818949402555>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_DungeonService.cpp"
                       ,0x45,"false");
    if (bVar3) {
code_r0x00014bbd18cc:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

