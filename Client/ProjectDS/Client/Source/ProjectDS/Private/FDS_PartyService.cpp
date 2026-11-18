// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 53

// ClosePartyMenuPopup @ 14b8b8e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::ClosePartyMenuPopup(void)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PartyService::ClosePartyMenuPopup",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x241,L"windowManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,PartyMenu,local_144,&local_148);
  }
  return;
}

// IsPartyStateCheckLeave @ 14b8d0490

bool __cdecl
FDS_PartyService::IsPartyStateCheckLeave
          (long64 *param_1,long64 *param_2,long64 *param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_5)

{
  FDS_RaidPartyRepo *pFVar1;
  FDS_PartyRepo *pFVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_48;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  
  pFVar1 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  if ((pFVar1->RaidPartyInfo).RaidPartyUID < 1) {
    pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    if (((pFVar2->PartyInfo).PartyUID < 1) || ((pFVar2->PartyInfo).PartyType == None)) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
      if (*(void **)&param_4->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_4->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_4);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
      if (*(void **)&param_5->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_5->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_5);
      return true;
    }
    local_30._0_8_ = 0;
    local_30._8_8_ = 0;
    local_30._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_30,param_5);
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_48,param_4);
    pTVar4 = &local_30;
    pTVar3 = &local_48;
    param_2 = param_3;
  }
  else {
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_48,param_5);
    local_30._0_8_ = 0;
    local_30._8_8_ = 0;
    local_30._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_30,param_4);
    pTVar4 = &local_48;
    pTVar3 = &local_30;
  }
  OpenPartyLeavePopup(param_1,param_2,pTVar3,pTVar4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  return false;
}

// OnClosePartyPopup @ 14b8d5310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
FDS_PartyService::OnClosePartyPopup(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this;
  FWeakObjectPtr local_res8 [4];
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res8[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = UDS_WindowManager::GetInst();
    if (this != (UDS_WindowManager *)0x0) {
      local_148 = 0.0;
      local_144[0] = 0;
      UDS_WindowManager::CloseWindow(this,PopupCommon,local_144,&local_148);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PartyService::OnClosePartyPopup",0x23,Yes);
    pwVar4 = L"windowManager == nullptr";
    uVar3 = 0x436;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PartyService::OnClosePartyPopup",0x23,Yes);
    pwVar4 = L"InOwner(UDS_M_CommonPopup) is Invalid";
    uVar3 = 0x42f;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnCommonPopup_MsgRes @ 14b8d5480

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_PartyService::OnCommonPopup_MsgRes
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,bool param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this;
  longlong *plVar3;
  float local_res10 [2];
  uint local_38 [2];
  FReadAccessScope local_30;
  
  if (param_2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_30);
    if (((*(int *)&param_3->field_0x10 == 0) ||
        (plVar3 = *(longlong **)&param_3->field_0x8, plVar3 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    if (!bVar1) goto LAB_14b8d557e;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_30);
    if (*(int *)&param_3->field_0x10 == 0) {
LAB_14b8d556c:
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&param_3->field_0x8;
    }
  }
  else {
    if (param_2) goto LAB_14b8d557e;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_30);
    if (((*(int *)&param_4->field_0x10 == 0) ||
        (*(longlong **)&param_4->field_0x8 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(**(longlong **)&param_4->field_0x8 + 0x38))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    if (!bVar1) goto LAB_14b8d557e;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_30);
    if (*(int *)&param_4->field_0x10 == 0) goto LAB_14b8d556c;
    plVar3 = *(longlong **)&param_4->field_0x8;
  }
  (**(code **)(*plVar3 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
LAB_14b8d557e:
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_38[0] = 0;
    UDS_WindowManager::CloseWindow(this,PopupCommon,local_38,local_res10);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return;
}

// OnConfirmPartyCreate @ 14b8d5610

void __cdecl
FDS_PartyService::OnConfirmPartyCreate(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  RequestPartyCreate(&local_28);
  OnClosePartyPopup(param_1);
  return;
}

// OnConfirmPartyDismiss @ 14b8d5650

void __cdecl
FDS_PartyService::OnConfirmPartyDismiss(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  RequestPartyDismiss();
  OnClosePartyPopup(param_1);
  return;
}

// OnConfirmPartyJoin @ 14b8d5680

void __cdecl
FDS_PartyService::OnConfirmPartyJoin
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,long64 param_2)

{
  RequestPartyJoin(param_2);
  OnClosePartyPopup(param_1);
  return;
}

// OnConfirmPartyKick @ 14b8d56b0

void __cdecl
FDS_PartyService::OnConfirmPartyKick
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,long64 param_2)

{
  RequestPartyKick(param_2);
  OnClosePartyPopup(param_1);
  return;
}

// OnConfirmPartyLeaderChange @ 14b8d56e0

void __cdecl
FDS_PartyService::OnConfirmPartyLeaderChange
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,long64 param_2)

{
  RequestPartyLeaderChange(param_2);
  OnClosePartyPopup(param_1);
  return;
}

// OnConfirmPartyLeave @ 14b8d5710

void __cdecl
FDS_PartyService::OnConfirmPartyLeave(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  RequestPartyLeave(&local_28);
  OnClosePartyPopup(param_1);
  return;
}

// OnOpenPartyInvitePopup @ 14b8d8620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::OnOpenPartyInvitePopup(UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *pUVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  undefined1 auStackY_268 [32];
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  UDS_UserWidget *local_220;
  UDS_UserWidget *local_218;
  UDS_UserWidget *local_210;
  TSharedPtr<FDS_ViewModelContext,1> local_208;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  FDS_Text local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_PartyService::OnOpenPartyInvitePopup",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x2e4,L"InContentsWidget == nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar4 = ::operator_new(0x28);
    pFVar10 = (FDS_ViewModelContext *)0x0;
    pFVar9 = pFVar10;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_PartyInvitation__6B_;
      *(undefined4 *)&pFVar4[1]._padding_ = 0;
      pFVar9 = pFVar4;
    }
    pFVar5 = ::operator_new(0x20);
    pFVar4 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PartyInvitation__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar4 = pFVar5;
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
    pUVar6 = FDS_ViewModelContext_PartyInvitation::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    pUVar7 = UDS_ViewModelContextManager::GetInst();
    if (pUVar7 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar4->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_208.Object = pFVar9;
      local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
      UDS_ViewModelContextManager::RegisterContext(pUVar7,&local_208);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = PartyInvitation;
    *(undefined4 *)&pFVar9[1]._padding_ = 1;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar4->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar4->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_188.Object = pFVar9;
    local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_238.ObjectIndex = 0;
    local_238.ObjectSerialNumber = 0;
    local_220 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_220);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_238,&local_188,false);
    pFVar5 = ::operator_new(0x70);
    pFVar9 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar5->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar5[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 7) = 0;
      *(undefined2 *)&((atomic<int> *)&pFVar5[2].DerivedStaticStruct)[1].field_0x1 = 0;
      ((atomic<int> *)&pFVar5[2].DerivedStaticStruct)[1].field_0x3 = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      pFVar5->ViewModelTemplateKey = None;
      *(undefined1 *)&pFVar5[1]._padding_ = 0;
      *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
      pFVar5[1].ViewModelName.ComparisonIndex = 0;
      pFVar5[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5[1].ViewModelTemplateKey = 0;
      pFVar5[2]._padding_ = 0;
      *(atomic<int> *)&pFVar5[2].DerivedStaticStruct = (atomic<int>)0x0;
      *(undefined1 *)((atomic<int> *)&pFVar5[2].DerivedStaticStruct + 1) = 0;
      pFVar5[2].ViewModelName.ComparisonIndex = 0;
      pFVar5[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5[2].ViewModelTemplateKey = 0;
      pFVar5[3]._padding_ = 0;
      *(undefined8 *)&pFVar5[3].DerivedStaticStruct = 0;
      pFVar9 = pFVar5;
    }
    pFVar8 = ::operator_new(0x20);
    pFVar5 = pFVar10;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar9;
      pFVar5 = pFVar8;
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
    pUVar6 = FDS_ViewModelContext_PopupTitle::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    pUVar7 = UDS_ViewModelContextManager::GetInst();
    if (pUVar7 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar5->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_1f8.Object = pFVar9;
      local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      UDS_ViewModelContextManager::RegisterContext(pUVar7,&local_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = W_ContentsPopupTitle;
    local_1d8.StringTableType = None;
    local_1d8.StringTableID = 0;
    local_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1d8.StringEnumTableNameID.Number = 0;
    local_1d8.DateTime.Ticks = 0;
    local_1d8.TimeSpan.Ticks = 0;
    local_1d8.TimeExpressionType = None;
    local_1d8.IsExpression = false;
    local_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.UniqueString.Data.ArrayNum = 0;
    local_1d8.UniqueString.Data.ArrayMax = 0;
    local_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.FormatArgs.ArrayNum = 0;
    local_1d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_1d8,StringUi,0x41efb);
    FDS_Text::operator=((FDS_Text *)(pFVar9 + 1),&local_1d8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data,
               local_1d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.UniqueString.Data.AllocatorInstance.Data);
    }
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_178.Object = pFVar9;
    local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_230.ObjectIndex = 0;
    local_230.ObjectSerialNumber = 0;
    local_218 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_218);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_230,&local_178,false);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = pFVar10;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar8->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 4) = 0;
      *(undefined4 *)&((atomic<int> *)&pFVar8[1].DerivedStaticStruct)->field_0x2 = 0;
      *(undefined2 *)&((atomic<int> *)&pFVar8[1].DerivedStaticStruct)[1].field_0x2 = 0;
      *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
      (pFVar8->ViewModelName).ComparisonIndex = 0;
      (pFVar8->ViewModelName).Number = 0;
      pFVar8->ViewModelTemplateKey = None;
      pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKey__6B_;
      *(undefined2 *)&pFVar8[1].DerivedStaticStruct = 0x100;
      pFVar9 = pFVar8;
    }
    pFVar8 = ::operator_new(0x20);
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKey__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar8;
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
    pUVar6 = FDS_ViewModelContext_InputKey::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    pUVar7 = UDS_ViewModelContextManager::GetInst();
    if (pUVar7 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_1e8.Object = pFVar9;
      local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(pUVar7,&local_1e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = InputKey;
    *(undefined4 *)&pFVar9[1]._padding_ = 0x4e28;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_168.Object = pFVar9;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_228.ObjectIndex = 0;
    local_228.ObjectSerialNumber = 0;
    local_210 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_210);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_228,&local_168,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
  }
  return;
}

// OnOpenPartyMenuPopup @ 14b8d8c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_PartyService::OnOpenPartyMenuPopup
          (UDS_UserWidget *param_1,EDS_PartyType param_2,EDS_PartyMenuType param_3,long64 param_4)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_188;
  UDS_UserWidget *local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_PartyService::OnOpenPartyMenuPopup",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x22e,L"InContentsWidget == nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar4 = ::operator_new(0x30);
    pFVar7 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar7;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_PartyInformation__6B_;
      pFVar4[1]._padding_ = 0;
      *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
      pFVar6 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PartyInformation__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
      pFVar7 = pFVar4;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_PartyInformation::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
    this = UDS_ViewModelContextManager::GetInst();
    if (this != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_178.Object = pFVar6;
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelContextManager::RegisterContext(this,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
    }
    pFVar6->ViewModelTemplateKey = PartyInformation;
    *(EDS_PartyType *)&pFVar6[1]._padding_ = param_2;
    *(EDS_PartyMenuType *)((longlong)&pFVar6[1]._padding_ + 4) = param_3;
    *(long64 *)&pFVar6[1].DerivedStaticStruct = param_4;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_168.Object = pFVar6;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_188.ObjectIndex = 0;
    local_188.ObjectSerialNumber = 0;
    local_180 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_180);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_188,&local_168,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  return;
}

// OnPartyInviteLink @ 14b8d9490

void __cdecl FDS_PartyService::OnPartyInviteLink(ChatParty *param_1)

{
  OpenPartyJoinPopup((param_1->_impl_).party_id_);
  return;
}

// OnResponsePartyInvited @ 14b8d9ab0

void __cdecl
FDS_PartyService::OnResponsePartyInvited(EDS_MessageResponseType *param_1,long64 param_2)

{
  if (*param_1 == Yes) {
    RequestPartyInvitedAccept(param_2);
    return;
  }
  if (*param_1 == No) {
    RequestPartyInviteReject(param_2);
    return;
  }
  return;
}

// OpenPartyCreatePopup @ 14b8db610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::OpenPartyCreatePopup(void)

{
  code *pcVar1;
  bool bVar2;
  FDS_PartyRepo *pFVar3;
  FDS_RaidPartyRepo *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_ContentManager *this;
  UObject *pUVar6;
  FDS_ContentsBaseTableRow *pFVar7;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar8;
  FDS_Text *pFVar9;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar10;
  undefined1 auStackY_628 [32];
  FWeakObjectPtr local_5e8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_5e0;
  int local_5d0 [2];
  FWeakObjectPtr local_5c8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_5c0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_5a8;
  FStringFormatArg local_590;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_570;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_558;
  FDS_Text local_540;
  FDS_Text local_4f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_628;
  pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  if (((pFVar3->PartyInfo).PartyUID < 1) || ((pFVar3->PartyInfo).PartyType == None)) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if ((pFVar4->RaidPartyInfo).RaidPartyUID < 1) {
      UDS_PlayerData::GetMainPlayerData();
      bVar2 = FWeakObjectPtr::IsValid(&local_5c8);
      if (bVar2) {
        this = UDS_ContentManager::GetInst();
        if (this == (UDS_ContentManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_378._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_378,"FDS_PartyService::OpenPartyCreatePopup",0x26,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_378.Ptr,0x266,L"contentManager is nullptr.");
            if ((void *)local_378._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_378._padding_);
            }
          }
        }
        else {
          pUVar6 = FWeakObjectPtr::Get(&local_5c8);
          local_5d0[1] = 0x1b77a5;
          local_5d0[0] = *(int *)&pUVar6[6].field_0x10;
          bVar2 = UDS_ContentManager::HasContentsFunction
                            (this,(EDS_ContentsFunctionType *)(local_5d0 + 1),local_5d0);
          if (bVar2) {
            pFVar7 = FDS_ContentsBaseTableRow::Get(0x4651,bVar2);
            if (pFVar7 != (FDS_ContentsBaseTableRow *)0x0) {
              FStringFormatArg::FStringFormatArg(&local_590,pFVar7->OpenPlayerLevel);
              local_5e0.ArrayNum = 1;
              local_5e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,0,&local_5e0.AllocatorInstance,1,&local_5e0.ArrayMax);
              ConstructItems<FStringFormatArg,FStringFormatArg,int>
                        (local_5e0.AllocatorInstance.Data,&local_590,1);
              UDS_UIMessageManager::OpenMsgByStringUi
                        (0x41ec3,Alert_System_01,&local_5e0,
                         (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                          *)0x0);
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_5e0.AllocatorInstance.Data,local_5e0.ArrayNum);
              if ((FStringFormatArg *)local_5e0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
                FMemory::Free(local_5e0.AllocatorInstance.Data);
              }
              if (local_590.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_590.StringValue.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            this_00 = UDS_CommonPopupManager::GetInst();
            if (this_00 == (UDS_CommonPopupManager *)0x0) {
              pUVar5 = UDS_LogManager::GetInst();
              if (pUVar5 != (UDS_LogManager *)0x0) {
                pUVar5 = UDS_LogManager::GetInst();
                local_258._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_258,"FDS_PartyService::OpenPartyCreatePopup",0x26,Yes);
                UDS_LogManager::PrintLog
                          (pUVar5,1,Warning,local_258.Ptr,0x279,L"commonPopupManager == nullptr");
                if ((void *)local_258._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_258._padding_);
                }
              }
            }
            else {
              UDS_CommonPopupManager::CreateCommonPopup(this_00);
              bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_5e8,
                                 (void *)0x0);
              if (bVar2) {
                pUVar5 = UDS_LogManager::GetInst();
                if (pUVar5 != (UDS_LogManager *)0x0) {
                  pUVar5 = UDS_LogManager::GetInst();
                  local_138._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_138,"FDS_PartyService::OpenPartyCreatePopup",0x26,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar5,1,Warning,local_138.Ptr,0x280,L"CommonPopupModel == nullptr");
                  if ((void *)local_138._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_138._padding_);
                  }
                }
              }
              else {
                pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_5e8);
                pFVar9 = FDS_Text::FromStringTable(&local_540,StringUi,0x41eb1);
                UDS_M_CommonPopup::SetTitle(pUVar8,pFVar9);
                pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_5e8);
                UDS_M_CommonPopup::SetButton(pUVar8,ButtonCancel,StringUi,0x66,false);
                pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_5e8);
                UDS_M_CommonPopup::SetButton(pUVar8,ButtonConfirm,StringUi,0x67,false);
                pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_5e8);
                pFVar9 = FDS_Text::FromStringTable(&local_4f0,StringUi,0x41edd);
                UDS_M_CommonPopup::SetMainContent(pUVar8,pFVar9);
                pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_5e8);
                pTVar10 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateStatic<>(&local_570,OnClosePartyPopup);
                UDS_M_CommonPopup::SetDelegate(pUVar8,ButtonCancel,pTVar10);
                pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_5e8);
                pTVar10 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateStatic<>(&local_558,OnConfirmPartyCreate);
                UDS_M_CommonPopup::SetDelegate(pUVar8,ButtonConfirm,pTVar10);
                pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_5e8);
                UDS_M_CommonPopup::OpenCommonPopup(pUVar8);
              }
            }
          }
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_622140340836498851>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyService.cpp"
                           ,0x25d,"playerData.IsValid()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_498._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_498,"FDS_PartyService::OpenPartyCreatePopup",0x26,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_498.Ptr,0x25f,L"playerData is Invalid");
          if ((void *)local_498._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_498._padding_);
          }
        }
      }
    }
    else {
      local_5a8._0_8_ = 0;
      local_5a8._8_8_ = 0;
      local_5a8._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x347fb,Alert_System_01,&local_5a8);
    }
  }
  else {
    local_5c0._0_8_ = 0;
    local_5c0._8_8_ = 0;
    local_5c0._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x41ec4,Alert_System_01,&local_5c0);
  }
  return;
}

// OpenPartyDismissPopup @ 14b8dbb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::OpenPartyDismissPopup(void)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_PartyRepo *pFVar4;
  UObject *pUVar5;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar6;
  FDS_Text *pFVar7;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar8;
  undefined1 auStackY_4b8 [32];
  FWeakObjectPtr local_488;
  FWeakObjectPtr local_480;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_478;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_460;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_448;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_430;
  FDS_Text local_418;
  FDS_Text local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_480);
  if (bVar2) {
    pFVar4 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    pUVar5 = FWeakObjectPtr::Get(&local_480);
    if (*(longlong *)&pUVar5[6].field_0x8 == (pFVar4->PartyInfo).PartyLeaderUID) {
      if ((pFVar4->PartyInfo).PartyMemberCount < 2) {
        this = UDS_CommonPopupManager::GetInst();
        if (this == (UDS_CommonPopupManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_258._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_258,"FDS_PartyService::OpenPartyDismissPopup",0x27,Yes);
            UDS_LogManager::PrintLog
                      (pUVar3,1,Warning,local_258.Ptr,0x3de,L"commonPopupManager == nullptr");
            if ((void *)local_258._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_258._padding_);
            }
          }
        }
        else {
          UDS_CommonPopupManager::CreateCommonPopup(this);
          bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_488,
                             (void *)0x0);
          if (bVar2) {
            pUVar3 = UDS_LogManager::GetInst();
            if (pUVar3 != (UDS_LogManager *)0x0) {
              pUVar3 = UDS_LogManager::GetInst();
              local_138._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_138,"FDS_PartyService::OpenPartyDismissPopup",0x27,Yes);
              UDS_LogManager::PrintLog
                        (pUVar3,1,Warning,local_138.Ptr,0x3e5,L"CommonPopupModel == nullptr");
              if ((void *)local_138._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_138._padding_);
              }
            }
          }
          else {
            pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_488);
            pFVar7 = FDS_Text::FromStringTable(&local_418,StringUi,0x41ee8);
            UDS_M_CommonPopup::SetTitle(pUVar6,pFVar7);
            pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_488);
            UDS_M_CommonPopup::SetButton(pUVar6,ButtonCancel,StringUi,0x66,false);
            pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_488);
            UDS_M_CommonPopup::SetButton(pUVar6,ButtonConfirm,StringUi,0x67,false);
            pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_488);
            pFVar7 = FDS_Text::FromStringTable(&local_3c8,StringUi,0x41ee9);
            UDS_M_CommonPopup::SetMainContent(pUVar6,pFVar7);
            pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_488);
            pTVar8 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     ::CreateStatic<>(&local_448,OnClosePartyPopup);
            UDS_M_CommonPopup::SetDelegate(pUVar6,ButtonCancel,pTVar8);
            pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_488);
            pTVar8 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     ::CreateStatic<>(&local_430,OnConfirmPartyDismiss);
            UDS_M_CommonPopup::SetDelegate(pUVar6,ButtonConfirm,pTVar8);
            pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_488);
            UDS_M_CommonPopup::OpenCommonPopup(pUVar6);
          }
        }
      }
      else {
        local_460._0_8_ = 0;
        local_460._8_8_ = 0;
        local_460._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x41edc,Alert_System_01,&local_460);
      }
    }
    else {
      local_478._0_8_ = 0;
      local_478._8_8_ = 0;
      local_478._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x41ed9,Alert_System_01,&local_478);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_622140340836498490>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyService.cpp"
                       ,0x3c6,"playerData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"FDS_PartyService::OpenPartyDismissPopup",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_378.Ptr,0x3c8,L"playerData is Invalid");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  return;
}

// OpenPartyInvitePopup @ 14b8dbf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_PartyService::OpenPartyInvitePopup(void)

{
  code *pcVar1;
  bool bVar2;
  FDS_PartyRepo *pFVar3;
  FDS_RaidPartyRepo *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_ContentManager *this;
  UObject *pUVar6;
  FDS_ContentsBaseTableRow *pFVar7;
  UDS_WindowManager *this_00;
  undefined8 *puVar8;
  ulong64 uVar9;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar10;
  undefined1 auStackY_478 [32];
  undefined1 local_438 [8];
  FDelegateAllocation local_430;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_420;
  int local_410 [2];
  FWeakObjectPtr local_408;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_400;
  FDestructionSentinel local_3e8;
  FDestructionSentinel local_3d0;
  FDelegateAllocation *local_3b8;
  FStringFormatArg local_3b0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_390;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_478;
  pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  if ((((pFVar3->PartyInfo).PartyUID < 1) || ((pFVar3->PartyInfo).PartyType == None)) &&
     (pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst(), (pFVar4->RaidPartyInfo).RaidPartyUID < 1
     )) {
    local_400._0_8_ = 0;
    local_400._8_8_ = 0;
    local_400._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x41ec5,Alert_System_01,&local_400);
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar2 = FWeakObjectPtr::IsValid(&local_408);
    if (bVar2) {
      this = UDS_ContentManager::GetInst();
      if (this == (UDS_ContentManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_258._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_258,"FDS_PartyService::OpenPartyInvitePopup",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_258.Ptr,0x2c5,L"contentManager is nullptr.");
          if ((void *)local_258._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_258._padding_);
          }
        }
      }
      else {
        pUVar6 = FWeakObjectPtr::Get(&local_408);
        local_410[1] = 0x1b77a5;
        local_410[0] = *(int *)&pUVar6[6].field_0x10;
        bVar2 = UDS_ContentManager::HasContentsFunction
                          (this,(EDS_ContentsFunctionType *)(local_410 + 1),local_410);
        if (bVar2) {
          pFVar7 = FDS_ContentsBaseTableRow::Get(0x4651,bVar2);
          if (pFVar7 != (FDS_ContentsBaseTableRow *)0x0) {
            FStringFormatArg::FStringFormatArg(&local_3b0,pFVar7->OpenPlayerLevel);
            local_420.ArrayNum = 1;
            local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_420.AllocatorInstance,1,&local_420.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_420.AllocatorInstance.Data,&local_3b0,1);
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x41ec3,Alert_System_01,&local_420,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)0x0);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_420.AllocatorInstance.Data,local_420.ArrayNum);
            if ((FStringFormatArg *)local_420.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_420.AllocatorInstance.Data);
            }
            if (local_3b0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_3b0.StringValue.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          this_00 = UDS_WindowManager::GetInst();
          if (this_00 == (UDS_WindowManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 != (UDS_LogManager *)0x0) {
              pUVar5 = UDS_LogManager::GetInst();
              local_138._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_138,"FDS_PartyService::OpenPartyInvitePopup",0x26,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Warning,local_138.Ptr,0x2d8,L"windowManager == nullptr");
              if ((void *)local_138._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_138._padding_);
              }
            }
          }
          else {
            local_438 = (undefined1  [8])0x0;
            local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_430.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
                       (FWriteAccessScope *)&local_3d0);
            local_3b8 = &local_430;
            puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_430);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &
                        ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar9 = FDelegateHandle::GenerateNewID();
              puVar8[2] = uVar9;
              *puVar8 = &
                        ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar8[3] = OnOpenPartyInvitePopup;
            }
            if (local_3d0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d0.Accessor,&local_3d0);
            }
            pTVar10 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                      TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                (&local_390,
                                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                  *)local_438);
            UDS_WindowManager::OpenWindow(this_00,PartyInvitation,pTVar10);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
                       (FWriteAccessScope *)&local_3e8);
            if ((local_430.DelegateSize != 0) &&
               (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_430.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_430,0,0,0x10);
              local_430.DelegateSize = 0;
            }
            if (local_3e8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
            }
            if (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_430.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_438);
          }
        }
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_622140340836498756>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyService.cpp"
                         ,700,"playerData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_378._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_378,"FDS_PartyService::OpenPartyInvitePopup",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_378.Ptr,0x2be,L"playerData is Invalid");
        if ((void *)local_378._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_378._padding_);
        }
      }
    }
  }
  return;
}

// OpenPartyInvitedPopup @ 14b8dc400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FDS_PartyService::OpenPartyInvitedPopup(long64 param_1,int param_2,FString *param_3,double param_4)

{
  double dVar1;
  int iVar2;
  FDS_PartyRepo *pFVar3;
  FDS_RaidPartyRepo *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong lVar7;
  int local_res10 [6];
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  ForAnyElementType local_1b0;
  int local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  FDelegateAllocation local_198;
  FDestructionSentinel local_188;
  FDelegateAllocation *local_170;
  FDS_Text local_168;
  undefined1 local_118 [168];
  undefined4 local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_res10[0] = param_2;
  pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  if (((pFVar3->PartyInfo).PartyUID < 1) || ((pFVar3->PartyInfo).PartyType == None)) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if ((pFVar4->RaidPartyInfo).RaidPartyUID < 1) {
      local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_198.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1a0,(FWriteAccessScope *)&local_188);
      local_170 = &local_198;
      puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_198);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___J__6B_
        ;
        puVar5[1] = param_1;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEBW4EDS_MessageResponseType___ZUFDefaultDelegateUserPolicy___J__6B_
        ;
        puVar5[3] = OnResponsePartyInvited;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
      FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)local_118,Request_Popup);
      local_168.StringTableType = None;
      local_168.StringTableID = 0;
      local_168.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_168.StringEnumTableNameID.Number = 0;
      local_168.TimeExpressionType = None;
      local_168.DateTime.Ticks = 0;
      local_168.TimeSpan.Ticks = 0;
      local_168.IsExpression = false;
      local_168.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.UniqueString.Data.ArrayNum = 0;
      local_168.UniqueString.Data.ArrayMax = 0;
      local_168.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.FormatArgs.ArrayNum = 0;
      local_168.FormatArgs.ArrayMax = 0;
      local_1b8 = (undefined1  [8])0x0;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,(ForAnyElementType *)local_1b8,(int *)((longlong)&local_1b0.Data + 4)
                        );
      local_1b0.Data._0_4_ = iVar2 + 1;
      FDS_TextFormatArg::FDS_TextFormatArg<int_const_&>
                ((FDS_TextFormatArg *)((longlong)local_1b8 + (longlong)iVar2 * 0x28),local_res10);
      if ((int)local_1b0.Data == local_1b0.Data._4_4_) {
        local_1b0.Data._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,(ForAnyElementType *)local_1b8,(int *)((longlong)&local_1b0.Data + 4))
        ;
      }
      lVar7 = (longlong)(int)local_1b0.Data;
      local_1b0.Data._0_4_ = (int)local_1b0.Data + 1;
      FDS_TextFormatArg::FDS_TextFormatArg<FString_const_&>
                ((FDS_TextFormatArg *)((longlong)local_1b8 + lVar7 * 0x28),param_3);
      FDS_Text::SetTextFormatFromStringTable
                (&local_168,StringUi,0x41efc,
                 (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)local_1b8);
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_1b8,(int)local_1b0.Data);
      if ((atomic<unsigned___int64>)local_1b8 != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_1b8);
      }
      FDS_Text::operator=((FDS_Text *)local_118,&local_168);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_168.FormatArgs.AllocatorInstance.Data,
                 local_168.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_168.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_168.FormatArgs.AllocatorInstance.Data);
      }
      if (local_168.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.UniqueString.Data.AllocatorInstance.Data);
      }
      local_1b8 = (undefined1  [8])0x0;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      local_118._88_4_ = (float)(param_4 - dVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_1a0,(FReadAccessScope *)&local_188);
      if ((local_198.DelegateSize != 0) &&
         (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_198.DelegateAllocator + 0x50))
                  (local_198.DelegateAllocator,local_1b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_188);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_188);
      if ((local_1a8 != 0) && (local_1b0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_1b0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b0,0,0,0x10);
        local_1a8 = 0;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1b8);
      local_118._80_8_ = 0x41efc;
      UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_118);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
      local_70 = 0;
      if ((void *)local_118._160_8_ != (void *)0x0) {
        FMemory::Free((void *)local_118._160_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_118 + 0x60);
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_118._64_8_,local_118._72_4_);
      if ((FDS_TextFormatArg *)local_118._64_8_ != (FDS_TextFormatArg *)0x0) {
        FMemory::Free((void *)local_118._64_8_);
      }
      if ((FScriptContainerElement *)local_118._48_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._48_8_);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1a0,(FWriteAccessScope *)&local_188);
      if ((local_198.DelegateSize != 0) &&
         (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_198.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_198,0,0,0x10);
        local_198.DelegateSize = 0;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      if (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_198.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
    }
    else {
      local_1b8 = (undefined1  [8])0x0;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x347fb,Alert_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)local_1b8);
      RequestPartyInviteReject(param_1);
    }
  }
  else {
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x41ec4,Alert_System_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)local_1b8);
    RequestPartyInviteReject(param_1);
  }
  return;
}

// OpenPartyJoinPopup @ 14b8dc850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::OpenPartyJoinPopup(long64 param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDS_RaidPartyRepo *pFVar3;
  FDS_PartyRepo *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_1f8 [32];
  FDestructionSentinel local_1b8;
  FDelegateAllocation *local_1a0;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined1 local_180 [8];
  ForAnyElementType local_178;
  int local_170;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_168;
  long64 local_150;
  long64 local_148;
  long64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_180 = (undefined1  [8])0x0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_198 = (undefined1  [8])0x0;
  local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_190.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)&local_1b8);
  local_1a0 = &local_190;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_190);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
    puVar1[1] = param_1;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
    puVar1[3] = OpenPartyJoinPopup;
  }
  if (local_1b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
  }
  local_140 = 0x41edf;
  local_148 = 0x41eb4;
  local_150 = 0x41ede;
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  if ((pFVar3->RaidPartyInfo).RaidPartyUID < 1) {
    pFVar4 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    if (((pFVar4->PartyInfo).PartyUID < 1) || ((pFVar4->PartyInfo).PartyType == None)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                 (FWriteAccessScope *)&local_1b8);
      if ((local_190.DelegateSize != 0) &&
         (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_190,0,0,0x10);
        local_190.DelegateSize = 0;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_190.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_198);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
                 (FWriteAccessScope *)&local_1b8);
      if ((local_170 != 0) && (local_178.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_178.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,0x10);
        local_170 = 0;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_180);
      pFVar4 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      if ((0 < (pFVar4->PartyInfo).PartyUID) && ((pFVar4->PartyInfo).PartyType != None)) {
        local_1b8.AccessType = Reader;
        local_1b8._4_4_ = 0;
        local_1b8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
        local_1b8.bDestroyed = false;
        local_1b8._17_3_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x41ec4,Alert_System_01,
                   (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                    *)&local_1b8);
        return;
      }
      pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      if (0 < (pFVar3->RaidPartyInfo).RaidPartyUID) {
        local_1b8.AccessType = Reader;
        local_1b8._4_4_ = 0;
        local_1b8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
        local_1b8.bDestroyed = false;
        local_1b8._17_3_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x347fb,Alert_System_01,
                   (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                    *)&local_1b8);
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_PartyService::OpenPartyJoinPopup",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Display,local_138.Ptr,0x2a7,
                   L"[Party] FDS_PartyService::OpenPartyJoinPopup() - PartyUID : %lld");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      RequestPartyJoin(param_1);
      return;
    }
    local_1b8.AccessType = Reader;
    local_1b8._4_4_ = 0;
    local_1b8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_1b8.bDestroyed = false;
    local_1b8._17_3_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1b8,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_180);
    local_168._0_8_ = 0;
    local_168._8_8_ = 0;
    local_168._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_168,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_198);
    OpenPartyLeavePopup(&local_150,&local_140,&local_168,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_1b8);
    if ((local_190.DelegateSize != 0) &&
       (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_190,0,0,0x10);
      local_190.DelegateSize = 0;
    }
    if (local_1b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
    }
    if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_190.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_198);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_1b8);
  }
  else {
    local_168._0_8_ = 0;
    local_168._8_8_ = 0;
    local_168._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_168,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_180);
    local_1b8.AccessType = Reader;
    local_1b8._4_4_ = 0;
    local_1b8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_1b8.bDestroyed = false;
    local_1b8._17_3_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1b8,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_198);
    OpenPartyLeavePopup(&local_150,&local_148,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1b8,
                        &local_168);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_1b8);
    if ((local_190.DelegateSize != 0) &&
       (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_190,0,0,0x10);
      local_190.DelegateSize = 0;
    }
    if (local_1b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
    }
    if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_190.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_198);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_1b8);
  }
  if ((local_170 != 0) && (local_178.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_178.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,0x10);
    local_170 = 0;
  }
  if (local_1b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_180);
  return;
}

// OpenPartyKickPopup @ 14b8dcd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::OpenPartyKickPopup(long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_PartyRepo *pFVar5;
  FDS_PartyMemberInfo *pFVar6;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar7;
  FDS_Text *pFVar8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  undefined1 auStackY_4f8 [32];
  FWeakObjectPtr local_4c8;
  FWeakObjectPtr local_4c0;
  undefined1 local_4b8 [8];
  FDelegateAllocation local_4b0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_4a0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_488;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_470;
  FDestructionSentinel local_458;
  FDelegateAllocation *local_440;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_438;
  FDS_Text local_420;
  FDS_Text local_3d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_4c0);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_4c0);
    if (*(longlong *)&pUVar4[6].field_0x8 == param_1) {
      local_4a0._0_8_ = 0;
      local_4a0._8_8_ = 0;
      local_4a0._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x41ecf,Alert_System_01,&local_4a0);
    }
    else {
      pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      pUVar4 = FWeakObjectPtr::Get(&local_4c0);
      if (*(longlong *)&pUVar4[6].field_0x8 == (pFVar5->PartyInfo).PartyLeaderUID) {
        pFVar6 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar5->PartyInfo,param_1);
        if (pFVar6->PlayerUID < 1) {
          local_470._0_8_ = 0;
          local_470._8_8_ = 0;
          local_470._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x41eda,Alert_System_01,&local_470);
        }
        else {
          this = UDS_CommonPopupManager::GetInst();
          if (this == (UDS_CommonPopupManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            if (pUVar3 != (UDS_LogManager *)0x0) {
              pUVar3 = UDS_LogManager::GetInst();
              local_258._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_258,"FDS_PartyService::OpenPartyKickPopup",0x24,Yes);
              UDS_LogManager::PrintLog
                        (pUVar3,1,Warning,local_258.Ptr,0x3a9,L"commonPopupManager == nullptr");
              if ((void *)local_258._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_258._padding_);
              }
            }
          }
          else {
            UDS_CommonPopupManager::CreateCommonPopup(this);
            bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_4c8,
                               (void *)0x0);
            if (bVar2) {
              pUVar3 = UDS_LogManager::GetInst();
              if (pUVar3 != (UDS_LogManager *)0x0) {
                pUVar3 = UDS_LogManager::GetInst();
                local_138._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_138,"FDS_PartyService::OpenPartyKickPopup",0x24,Yes);
                UDS_LogManager::PrintLog
                          (pUVar3,1,Warning,local_138.Ptr,0x3b0,L"CommonPopupModel == nullptr");
                if ((void *)local_138._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_138._padding_);
                }
              }
            }
            else {
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              pFVar8 = FDS_Text::FromStringTable(&local_420,StringUi,0x41ee6);
              UDS_M_CommonPopup::SetTitle(pUVar7,pFVar8);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              UDS_M_CommonPopup::SetButton(pUVar7,ButtonCancel,StringUi,0x66,false);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              UDS_M_CommonPopup::SetButton(pUVar7,ButtonConfirm,StringUi,0x67,false);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              pFVar8 = FDS_Text::FromStringTableFormat<FString_const_&>
                                 (&local_3d0,StringUi,0x41ee7,&pFVar6->Nickname);
              UDS_M_CommonPopup::SetMainContent(pUVar7,pFVar8);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              pTVar9 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                       ::CreateStatic<>(&local_438,OnClosePartyPopup);
              UDS_M_CommonPopup::SetDelegate(pUVar7,ButtonCancel,pTVar9);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              local_4b8 = (undefined1  [8])0x0;
              local_4b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_4b0.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
                         (FWriteAccessScope *)&local_458);
              local_440 = &local_4b0;
              puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_4b0);
              if (puVar10 != (undefined8 *)0x0) {
                *puVar10 = &
                           ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
                ;
                puVar10[1] = param_1;
                uVar11 = FDelegateHandle::GenerateNewID();
                puVar10[2] = uVar11;
                *puVar10 = &
                           ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
                ;
                puVar10[3] = OnConfirmPartyKick;
              }
              if (local_458.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
              }
              UDS_M_CommonPopup::SetDelegate
                        (pUVar7,ButtonConfirm,
                         (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          *)local_4b8);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              UDS_M_CommonPopup::OpenCommonPopup(pUVar7);
            }
          }
        }
      }
      else {
        local_488._0_8_ = 0;
        local_488._8_8_ = 0;
        local_488._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x41ed9,Alert_System_01,&local_488);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_622140340836498551>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyService.cpp"
                       ,0x389,"myPlayerData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"FDS_PartyService::OpenPartyKickPopup",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_378.Ptr,0x38b,L"myPlayerData is Invalid");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  return;
}

// OpenPartyLeaderChangePopup @ 14b8dd200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::OpenPartyLeaderChangePopup(long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_PartyRepo *pFVar5;
  FDS_PartyMemberInfo *pFVar6;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar7;
  FDS_Text *pFVar8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  undefined1 auStackY_4f8 [32];
  FWeakObjectPtr local_4c8;
  FWeakObjectPtr local_4c0;
  undefined1 local_4b8 [8];
  FDelegateAllocation local_4b0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_4a0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_488;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_470;
  FDestructionSentinel local_458;
  FDelegateAllocation *local_440;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_438;
  FDS_Text local_420;
  FDS_Text local_3d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_4c0);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_4c0);
    if (*(longlong *)&pUVar4[6].field_0x8 == param_1) {
      local_4a0._0_8_ = 0;
      local_4a0._8_8_ = 0;
      local_4a0._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x41ecf,Alert_System_01,&local_4a0);
    }
    else {
      pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      pUVar4 = FWeakObjectPtr::Get(&local_4c0);
      if (*(longlong *)&pUVar4[6].field_0x8 == (pFVar5->PartyInfo).PartyLeaderUID) {
        pFVar6 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar5->PartyInfo,param_1);
        if (pFVar6->PlayerUID < 1) {
          local_470._0_8_ = 0;
          local_470._8_8_ = 0;
          local_470._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x41eda,Alert_System_01,&local_470);
        }
        else {
          this = UDS_CommonPopupManager::GetInst();
          if (this == (UDS_CommonPopupManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            if (pUVar3 != (UDS_LogManager *)0x0) {
              pUVar3 = UDS_LogManager::GetInst();
              local_258._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_258,"FDS_PartyService::OpenPartyLeaderChangePopup",0x2c,Yes);
              UDS_LogManager::PrintLog
                        (pUVar3,1,Warning,local_258.Ptr,0x36c,L"commonPopupManager == nullptr");
              if ((void *)local_258._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_258._padding_);
              }
            }
          }
          else {
            UDS_CommonPopupManager::CreateCommonPopup(this);
            bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_4c8,
                               (void *)0x0);
            if (bVar2) {
              pUVar3 = UDS_LogManager::GetInst();
              if (pUVar3 != (UDS_LogManager *)0x0) {
                pUVar3 = UDS_LogManager::GetInst();
                local_138._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_138,"FDS_PartyService::OpenPartyLeaderChangePopup",0x2c,Yes);
                UDS_LogManager::PrintLog
                          (pUVar3,1,Warning,local_138.Ptr,0x373,L"CommonPopupModel == nullptr");
                if ((void *)local_138._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_138._padding_);
                }
              }
            }
            else {
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              pFVar8 = FDS_Text::FromStringTable(&local_420,StringUi,0x41ee0);
              UDS_M_CommonPopup::SetTitle(pUVar7,pFVar8);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              UDS_M_CommonPopup::SetButton(pUVar7,ButtonCancel,StringUi,0x66,false);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              UDS_M_CommonPopup::SetButton(pUVar7,ButtonConfirm,StringUi,0x67,false);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              pFVar8 = FDS_Text::FromStringTableFormat<FString_const_&>
                                 (&local_3d0,StringUi,0x41ee1,&pFVar6->Nickname);
              UDS_M_CommonPopup::SetMainContent(pUVar7,pFVar8);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              pTVar9 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                       ::CreateStatic<>(&local_438,OnClosePartyPopup);
              UDS_M_CommonPopup::SetDelegate(pUVar7,ButtonCancel,pTVar9);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              local_4b8 = (undefined1  [8])0x0;
              local_4b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_4b0.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
                         (FWriteAccessScope *)&local_458);
              local_440 = &local_4b0;
              puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_4b0);
              if (puVar10 != (undefined8 *)0x0) {
                *puVar10 = &
                           ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
                ;
                puVar10[1] = param_1;
                uVar11 = FDelegateHandle::GenerateNewID();
                puVar10[2] = uVar11;
                *puVar10 = &
                           ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___J__6B_
                ;
                puVar10[3] = OnConfirmPartyLeaderChange;
              }
              if (local_458.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
              }
              UDS_M_CommonPopup::SetDelegate
                        (pUVar7,ButtonConfirm,
                         (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          *)local_4b8);
              pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_4c8);
              UDS_M_CommonPopup::OpenCommonPopup(pUVar7);
            }
          }
        }
      }
      else {
        local_488._0_8_ = 0;
        local_488._8_8_ = 0;
        local_488._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x41ed9,Alert_System_01,&local_488);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_622140340836498612>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyService.cpp"
                       ,0x34c,"myPlayerData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"FDS_PartyService::OpenPartyLeaderChangePopup",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_378.Ptr,0x34e,L"myPlayerData is Invalid");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  return;
}

// OpenPartyLeavePopup @ 14b8dd6a0

void __cdecl
FDS_PartyService::OpenPartyLeavePopup
          (long64 *param_1,long64 *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  UDS_GameInstance *pUVar4;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar5;
  FDS_RaidPartyRepo *pFVar6;
  FDS_PartyRepo *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  atomic<unsigned_char> *paVar10;
  code *pcVar11;
  int iVar12;
  FWeakObjectPtr local_278;
  undefined1 local_270 [8];
  ForAnyElementType local_268;
  int local_260;
  UDS_M_CommonPopup *local_258;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  ForAnyElementType local_248;
  int local_240;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  ForAnyElementType local_230;
  int local_228;
  FWeakObjectPtr local_220;
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  undefined1 local_200 [8];
  FDelegateAllocation local_1f8;
  FDS_Text local_1e8;
  FDS_Text local_198;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  pUVar4 = UDS_GameInstance::GetInst();
  if (pUVar4 != (UDS_GameInstance *)0x0) {
    local_258 = (UDS_M_CommonPopup *)UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_258 != (UDS_M_CommonPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_258);
    }
    local_220.ObjectIndex = 0;
    local_220.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_258 != (UDS_M_CommonPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_258);
    }
    FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_258);
    bVar3 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_220,
                       (void *)0x0);
    if (bVar3) {
      iVar12 = 0x45a;
      paVar10 = &bGEnsureHasExecuted<_622140340836498342>;
    }
    else {
      this = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_220);
      UDS_CommonPopupManager::CreateCommonPopup(this);
      bVar3 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_278,(void *)0x0)
      ;
      if (!bVar3) {
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_278);
        local_1e8.StringTableType = None;
        local_1e8.StringTableID = 0;
        local_1e8.DateTime.Ticks = 0;
        local_1e8.TimeSpan.Ticks = 0;
        local_1e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1e8.StringEnumTableNameID.Number = 0;
        local_1e8.TimeExpressionType = None;
        local_1e8.IsExpression = false;
        local_1e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.UniqueString.Data.ArrayNum = 0;
        local_1e8.UniqueString.Data.ArrayMax = 0;
        local_1e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.FormatArgs.ArrayNum = 0;
        local_1e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_1e8,StringUi,*param_1);
        UDS_M_CommonPopup::SetTitle(pUVar5,&local_1e8);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_278);
        UDS_M_CommonPopup::SetButton(pUVar5,ButtonCancel,StringUi,0x66,false);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_278);
        UDS_M_CommonPopup::SetButton(pUVar5,ButtonConfirm,StringUi,0x67,false);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_278);
        local_198.StringTableType = None;
        local_198.StringTableID = 0;
        local_198.DateTime.Ticks = 0;
        local_198.TimeSpan.Ticks = 0;
        local_198.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_198.StringEnumTableNameID.Number = 0;
        local_198.TimeExpressionType = None;
        local_198.IsExpression = false;
        local_198.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.UniqueString.Data.ArrayNum = 0;
        local_198.UniqueString.Data.ArrayMax = 0;
        local_198.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.FormatArgs.ArrayNum = 0;
        local_198.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_198,StringUi,*param_2);
        UDS_M_CommonPopup::SetMainContent(pUVar5,&local_198);
        local_270 = (undefined1  [8])0x0;
        local_268.Data = (FScriptContainerElement *)0x0;
        local_260 = 0;
        pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        if ((pFVar6->RaidPartyInfo).RaidPartyUID < 1) {
          pFVar7 = TDS_Singleton<FDS_PartyRepo>::GetInst();
          if (((pFVar7->PartyInfo).PartyUID < 1) || ((pFVar7->PartyInfo).PartyType == None))
          goto LAB_14b8dd911;
          pcVar11 = RequestPartyLeave;
        }
        else {
          pcVar11 = FDS_RaidPartyService::RequestRaidPartyLeave;
        }
        TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        BindStatic<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&>
                  ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_270
                   ,pcVar11,param_3);
LAB_14b8dd911:
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_278);
        local_218 = (undefined1  [8])0x0;
        local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_210.DelegateSize = 0;
        local_258 = pUVar5;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                   (FWriteAccessScope *)&local_a0);
        local_88 = &local_210;
        puVar8 = UE::Core::Private::DelegateAllocate(0x50,&local_210);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____V3___6B_
          ;
          pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar8 + 2);
          *(undefined1 *)(puVar8 + 1) = 0;
          (pTVar1->AccessDetector).State = (atomic<unsigned___int64>)0x0;
          puVar8[3] = 0;
          *(undefined4 *)(puVar8 + 4) = 0;
          if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270 != pTVar1) {
            local_250.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_248.Data = (FScriptContainerElement *)0x0;
            local_240 = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,&local_60
                      );
            if ((local_260 != 0) && (local_268.Data != (FScriptContainerElement *)0x0)) {
              (**(code **)(*(longlong *)local_268.Data + 0x50))(local_268.Data,&local_250);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_60);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_250,(FWriteAccessScope *)&local_148);
            iVar12 = local_240;
            FVar2.Data = local_248.Data;
            local_248.Data = (FScriptContainerElement *)0x0;
            local_240 = 0;
            if (local_148.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (pTVar1,(FWriteAccessScope *)&local_130);
            if ((*(int *)(puVar8 + 4) != 0) && ((undefined8 *)puVar8[3] != (undefined8 *)0x0)) {
              (*(code *)**(undefined8 **)puVar8[3])();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)(puVar8 + 3),0,0,0x10);
              *(undefined4 *)(puVar8 + 4) = 0;
            }
            if ((void *)puVar8[3] != (void *)0x0) {
              FMemory::Free((void *)puVar8[3]);
            }
            puVar8[3] = FVar2.Data;
            *(int *)(puVar8 + 4) = iVar12;
            if (local_130.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_250,(FWriteAccessScope *)&local_118);
            if ((local_240 != 0) && (local_248.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)local_248.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_248,0,0,0x10);
              local_240 = 0;
            }
            if (local_118.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
            }
            if (local_248.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
          }
          puVar8[5] = 0;
          puVar8[6] = 0;
          *(undefined4 *)(puVar8 + 7) = 0;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 5),
                     param_4);
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[8] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____V3___6B_
          ;
          puVar8[9] = OnCommonPopup_MsgRes;
          pUVar5 = local_258;
        }
        if (local_a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar5,ButtonCancel,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)local_218);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_278);
        local_200 = (undefined1  [8])0x0;
        local_1f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1f8.DelegateSize = 0;
        local_258 = pUVar5;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_200,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_1f8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x50,&local_1f8);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____V3___6B_
          ;
          pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar8 + 2);
          *(undefined1 *)(puVar8 + 1) = 1;
          (pTVar1->AccessDetector).State = (atomic<unsigned___int64>)0x0;
          puVar8[3] = 0;
          *(undefined4 *)(puVar8 + 4) = 0;
          if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270 != pTVar1) {
            local_238.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_230.Data = (FScriptContainerElement *)0x0;
            local_228 = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,&local_48
                      );
            if ((local_260 != 0) && (local_268.Data != (FScriptContainerElement *)0x0)) {
              (**(code **)(*(longlong *)local_268.Data + 0x50))(local_268.Data,&local_238);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_48);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_238,(FWriteAccessScope *)&local_100);
            iVar12 = local_228;
            FVar2.Data = local_230.Data;
            local_230.Data = (FScriptContainerElement *)0x0;
            local_228 = 0;
            if (local_100.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (pTVar1,(FWriteAccessScope *)&local_e8);
            if ((*(int *)(puVar8 + 4) != 0) && ((undefined8 *)puVar8[3] != (undefined8 *)0x0)) {
              (*(code *)**(undefined8 **)puVar8[3])();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)(puVar8 + 3),0,0,0x10);
              *(undefined4 *)(puVar8 + 4) = 0;
            }
            if ((void *)puVar8[3] != (void *)0x0) {
              FMemory::Free((void *)puVar8[3]);
            }
            puVar8[3] = FVar2.Data;
            *(int *)(puVar8 + 4) = iVar12;
            if (local_e8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_238,(FWriteAccessScope *)&local_d0);
            if ((local_228 != 0) && (local_230.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)local_230.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_230,0,0,0x10);
              local_228 = 0;
            }
            if (local_d0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
            }
            if (local_230.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_230.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
          }
          puVar8[5] = 0;
          puVar8[6] = 0;
          *(undefined4 *)(puVar8 + 7) = 0;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 5),
                     param_4);
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[8] = uVar9;
          *puVar8 = &
                    ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____V3___6B_
          ;
          puVar8[9] = OnCommonPopup_MsgRes;
          pUVar5 = local_258;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar5,ButtonConfirm,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)local_200);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_278);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar5);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,
                   (FWriteAccessScope *)&local_b8);
        if ((local_260 != 0) && (local_268.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_268.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_268,0,0,0x10);
          local_260 = 0;
        }
        if (local_b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
        }
        if (local_268.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_270);
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(param_3);
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(param_4);
        return;
      }
      iVar12 = 0x461;
      paVar10 = &bGEnsureHasExecuted<_622140340836498335>;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar10,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\Party\\Common\\DS_PartyService.cpp"
                       ,iVar12,"false");
    if (bVar3) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return;
}

// OpenPartyLeavePopup @ 14b8ddea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::OpenPartyLeavePopup(void)

{
  bool bVar1;
  FDS_PartyRepo *pFVar2;
  FDS_RaidPartyRepo *pFVar3;
  UDS_CommonPopupManager *this;
  UDS_LogManager *pUVar4;
  UDS_M_CommonPopup *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 auStackY_208 [32];
  uint uVar8;
  wchar_t *pwVar9;
  FWeakObjectPtr local_1d8;
  undefined1 local_1d0 [8];
  FDelegateAllocation local_1c8;
  FDS_Text local_1b8;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  if ((((pFVar2->PartyInfo).PartyUID < 1) || ((pFVar2->PartyInfo).PartyType == None)) &&
     (pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst(), (pFVar3->RaidPartyInfo).RaidPartyUID < 1
     )) {
    local_1d0 = (undefined1  [8])0x0;
    local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1c8.DelegateSize = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x41ec5,Alert_System_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)local_1d0);
    return;
  }
  this = UDS_CommonPopupManager::GetInst();
  if (this == (UDS_CommonPopupManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyService::OpenPartyLeavePopup",0x25,Yes);
    pwVar9 = L"commonPopupManager == nullptr";
    uVar8 = 0x32f;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
    if (!bVar1) {
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.IsExpression = false;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringUi,0x41ee2);
      UDS_M_CommonPopup::SetTitle(pUVar5,&local_1b8);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::SetButton(pUVar5,ButtonCancel,StringUi,0x66,false);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::SetButton(pUVar5,ButtonConfirm,StringUi,0x67,false);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.IsExpression = false;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringUi,0x41ee3);
      UDS_M_CommonPopup::SetMainContent(pUVar5,&local_1b8);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = (undefined1  [8])0x0;
      local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1c8;
      puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_1c8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        puVar6[3] = OnClosePartyPopup;
        *puVar6 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar5,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d0);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = (undefined1  [8])0x0;
      local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1c8;
      puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_1c8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        puVar6[3] = OnConfirmPartyLeave;
        *puVar6 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar5,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d0);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar5);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyService::OpenPartyLeavePopup",0x25,Yes);
    pwVar9 = L"CommonPopupModel == nullptr";
    uVar8 = 0x336;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar8,pwVar9);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OpenPartyMenuPopup @ 14b8de2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_PartyService::OpenPartyMenuPopup(EDS_PartyType param_1,EDS_PartyMenuType param_2,long64 param_3)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_PartyService::OpenPartyMenuPopup",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x222,L"windowManager == nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_180;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_PartyType__W4EDS_PartyMenuType___J__6B_
      ;
      *(EDS_PartyType *)(puVar2 + 1) = param_1;
      *(EDS_PartyMenuType *)((longlong)puVar2 + 0xc) = param_2;
      puVar2[2] = param_3;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[3] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_PartyType__W4EDS_PartyMenuType___J__6B_
      ;
      puVar2[4] = OnOpenPartyMenuPopup;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_170,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_188);
    UDS_WindowManager::OpenWindow(this,PartyMenu,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    if ((local_180.DelegateSize != 0) &&
       (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_180,0,0,0x10);
      local_180.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_180.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
  }
  return;
}

// OpenRaidPartyInfo @ 14b8de4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FDS_PartyService::OpenRaidPartyInfo(void)

{
  EDS_DungeonType EVar1;
  uint uVar2;
  int iVar3;
  FDS_RaidPartyRepo *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_ContentManager *pUVar6;
  UDS_ContentManager *this;
  UObject *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 auStackY_238 [32];
  TPairInitializer<FName_const_&,int_const_&> local_1f8;
  int local_1e8 [2];
  int **local_1e0;
  int *local_1d8;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  local_1e8[0] = (pFVar4->RaidPartyInfo).DungeonId;
  if (local_1e8[0] < 1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x3ff,L"dungeonID <= 0");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  pUVar6 = (UDS_ContentManager *)FDS_DungeonBaseTableRow::Get((longlong)local_1e8[0],true);
  if (pUVar6 == (UDS_ContentManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = (longlong)pUVar6;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_148.Ptr,0x406,
               L"dungeonBaseTableRow == nullptr - DungeonID : %d");
  }
  else {
    this = UDS_ContentManager::GetInst();
    if (this != (UDS_ContentManager *)0x0) {
      pUVar7 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UDS_ContentArguments_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1c8,pUVar8);
      local_1c8._8_8_ = pUVar7;
      pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
      if (local_1c8._64_8_ != 0) {
        plVar9 = (longlong *)(local_1c8 + 0x50);
        if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_1c8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      ::FName::FName((FName *)&local_1f8.Value,"DungeonBaseID");
      uVar2 = ::GetTypeHash((FNameEntryId)(uint)local_1f8.Value);
      if (*(int *)&pUVar7[3].field_0x8 != *(int *)&pUVar7[4].field_0xc) {
        puVar10 = *(undefined1 **)&pUVar7[4].field_0x18;
        if (*(undefined1 **)&pUVar7[4].field_0x18 == (undefined1 *)0x0) {
          puVar10 = &pUVar7[4].field_0x10;
        }
        iVar3 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&pUVar7[4].field_0x20 - 1U &
                        (int)((ulonglong)local_1f8.Value >> 0x20) + uVar2) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int **)(*(longlong *)(pUVar7 + 3) + (longlong)iVar3 * 0x14) == local_1f8.Value)
            goto LAB_14b8de7af;
            iVar3 = *(int *)(*(longlong *)(pUVar7 + 3) + 0xc + (longlong)iVar3 * 0x14);
          } while (iVar3 != -1);
        }
      }
      local_1e0 = &local_1f8.Value;
      local_1d8 = local_1e8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)(pUVar7 + 3),&local_1f8,(bool *)&local_1e0);
LAB_14b8de7af:
      EVar1 = *(EDS_DungeonType *)&pUVar6->_padding_;
      local_1f8.Value = (int *)pUVar7;
      if (EVar1 == Normal) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_1f8.Key._0_4_ = 6000;
      }
      else if (EVar1 == Heroic) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_1f8.Key._0_4_ = 0x177a;
      }
      else {
        if (EVar1 != Raid) {
          return;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_1f8.Key._0_4_ = 0x1784;
      }
      UDS_ContentManager::OpenContent
                (this,(EDS_ContentsTabFrameType *)&local_1f8,
                 (TObjectPtr<UDS_ContentArguments>)&local_1f8.Value);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = (longlong)this;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x40d,L"contentManager == nullptr");
  }
  if ((UDS_ContentManager *)local_148._padding_ != (UDS_ContentManager *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// ProcessError @ 14b8df790

bool __cdecl FDS_PartyService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceivePartyDismiss @ 14b8df8e0

void __cdecl FDS_PartyService::ReceivePartyDismiss(ServerMessages *param_1)

{
  bool bVar1;
  PartyDismissResponseDefaultTypeInternal *pPVar2;
  FDS_PartyRepo *pFVar3;
  UDS_EntityManager *pUVar4;
  UDS_PartyEvent *pUVar5;
  UDS_ChattingManager *pUVar6;
  FString *pFVar7;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e89) {
    pPVar2 = *(PartyDismissResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar2 = &server_msg::_PartyDismissResponse_default_instance_;
  }
  if (*(int *)&((Message *)((longlong)pPVar2 + 0x10))->field_0x8 == 1) {
    pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    FDS_PartyInfo::Clear(&pFVar3->PartyInfo);
    pUVar4 = UDS_EntityManager::GetInst();
    if (pUVar4 != (UDS_EntityManager *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnSpawnEntityEvent,
                 pFVar3);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnRemoveEntityEvent,
                 pFVar3);
    }
    pUVar5 = UDS_PartyEvent::GetEvent();
    if (pUVar5 != (UDS_PartyEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnLeftParty)
      ;
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar5->OnLeftParty).Delegate);
      }
    }
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0xc36b,Complete_None_01,&local_28);
    pUVar6 = UDS_ChattingManager::GetInst();
    if (pUVar6 != (UDS_ChattingManager *)0x0) {
      local_28._8_8_ = 0xc36b;
      local_28._0_8_ = &___7FDS_StringUiID__6B_;
      pFVar7 = FDS_StringUiID::Str((FDS_StringUiID *)&local_28);
      UDS_ChattingManager::AddSystemMessage(Party,pFVar7);
    }
  }
  return;
}

// ReceivePartyInfo @ 14b8df9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::ReceivePartyInfo(ServerMessages *param_1)

{
  bool bVar1;
  char cVar2;
  pmf_909f4c1e pVar3;
  UDS_LogManager *pUVar4;
  UDS_EntityManager *pUVar5;
  UDS_PartyEvent *pUVar6;
  FDS_PartyRepo *pFVar7;
  UObject *pUVar8;
  UDS_ChattingManager *pUVar9;
  FString *pFVar10;
  longlong *plVar11;
  PartyInfoResponseDefaultTypeInternal *pPVar12;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  FDestructionSentinel local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e84) {
    pPVar12 = *(PartyInfoResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar12 = &server_msg::_PartyInfoResponse_default_instance_;
  }
  pVar3 = (pmf_909f4c1e)TDS_Singleton<FDS_PartyRepo>::GetInst();
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyRepo::SetPartyInfo",0x1b,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Display,local_148.Ptr,0x2c,L"[Party] FDS_PartyRepo::SetPartyInfo()");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  FDS_PartyInfo::Clear((FDS_PartyInfo *)((longlong)pVar3 + 8));
  pUVar5 = UDS_EntityManager::GetInst();
  if (pUVar5 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnSpawnEntityEvent,
               (void *)pVar3);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnRemoveEntityEvent,
               (void *)pVar3);
  }
  FDS_PartyInfo::SetPartyInfo((FDS_PartyInfo *)((longlong)pVar3 + 8),&pPVar12->_instance);
  pUVar5 = UDS_EntityManager::GetInst();
  if (pUVar5 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FDS_PartyRepo>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar5->OnSpawnEntityEvent,(FDS_PartyRepo *)local_168,pVar3);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FDS_PartyRepo>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar5->OnRemoveEntityEvent,(FDS_PartyRepo *)local_168,pVar3);
  }
  pUVar6 = UDS_PartyEvent::GetEvent();
  if (pUVar6 != (UDS_PartyEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnJoinedParty)
    ;
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar6->OnJoinedParty).Delegate);
    }
  }
  pFVar7 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  if ((0 < (pFVar7->PartyInfo).PartyUID) && ((pFVar7->PartyInfo).PartyType != None)) {
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_168);
    if (bVar1) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_168);
      if (*(longlong *)&pUVar8[6].field_0x8 != (pFVar7->PartyInfo).PartyLeaderUID) {
        local_160._0_8_ = (undefined **)0x0;
        local_160.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
        local_160.bDestroyed = false;
        local_160._17_3_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0xc368,Complete_None_01,
                   (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                    *)&local_160);
        pUVar9 = UDS_ChattingManager::GetInst();
        if (pUVar9 != (UDS_ChattingManager *)0x0) {
          local_160.Accessor = (FMRSWRecursiveAccessDetector *)0xc368;
          local_160._0_8_ = &___7FDS_StringUiID__6B_;
          pFVar10 = FDS_StringUiID::Str((FDS_StringUiID *)&local_160);
          UDS_ChattingManager::AddSystemMessage(Party,pFVar10);
        }
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&PartyCreateDelegate,
             (FReadAccessScope *)&local_160);
  if ((PartyCreateDelegate._16_4_ != 0) && (PartyCreateDelegate._8_8_ != 0)) {
    cVar2 = (**(code **)(*(longlong *)PartyCreateDelegate._8_8_ + 0x38))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_14b8dfc0b;
    }
  }
  bVar1 = false;
LAB_14b8dfc0b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_160);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&PartyCreateDelegate,
               (FReadAccessScope *)&local_160);
    plVar11 = (longlong *)0x0;
    if (PartyCreateDelegate._16_4_ != 0) {
      plVar11 = (longlong *)PartyCreateDelegate._8_8_;
    }
    (**(code **)(*plVar11 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&PartyCreateDelegate,
               (FWriteAccessScope *)&local_160);
    if ((PartyCreateDelegate._16_4_ != 0) && (PartyCreateDelegate._8_8_ != 0)) {
      (*(code *)**(undefined8 **)PartyCreateDelegate._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&PartyCreateDelegate.field_0x8,0,0,0x10);
      PartyCreateDelegate._16_4_ = 0;
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
  }
  return;
}

// ReceivePartyInvited @ 14b8dfce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::ReceivePartyInvited(ServerMessages *param_1)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  long64 lVar4;
  int iVar5;
  PartyInvitedResponseDefaultTypeInternal *pPVar6;
  size_t sVar7;
  UDS_GameOptionManager *this;
  UDS_GameOptionData *this_00;
  UDS_LogManager *pUVar8;
  uchar *_Str;
  PartyInvitedInfo *pPVar9;
  uint uVar10;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e86) {
    pPVar6 = *(PartyInvitedResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar6 = &server_msg::_PartyInvitedResponse_default_instance_;
  }
  pPVar9 = &ds_proto::_PartyInvitedInfo_default_instance_._instance;
  if (*(PartyInvitedInfo **)&((Message *)((longlong)pPVar6 + 0x10))->field_0x8 !=
      (PartyInvitedInfo *)0x0) {
    pPVar9 = *(PartyInvitedInfo **)&((Message *)((longlong)pPVar6 + 0x10))->field_0x8;
  }
  lVar4 = (pPVar9->_impl_).party_id_;
  _Str = (uchar *)((ulonglong)(pPVar9->_impl_).sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  iVar3 = (pPVar9->_impl_).sender_level_;
  if (0xf < *(ulonglong *)(_Str + 0x18)) {
    _Str = *(uchar **)_Str;
  }
  local_158._padding_ = 0;
  if (_Str == (uchar *)0x0) {
    local_158.Ptr = (wchar_t *)0x0;
    local_158.StringLength = 0;
    goto LAB_14b8dfe21;
  }
  sVar7 = strlen((char *)_Str);
  local_158.StringLength = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar7);
  uVar1 = local_158.StringLength + 1;
  uVar10 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
        (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
      uVar10 = 0;
      goto LAB_14b8dfdb7;
    }
  }
  else {
LAB_14b8dfdb7:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_158._padding_,0,uVar10,2);
  }
  local_158.Ptr = (wchar_t *)&local_158;
  if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
      (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
    local_158.Ptr = (wchar_t *)local_158._padding_;
  }
  UE::Core::Private::Convert(local_158.Ptr,uVar1,_Str,(int)sVar7 + 1);
LAB_14b8dfe21:
  ::FString::FString(&local_168,local_158.Ptr);
  if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
      (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  dVar2 = (pPVar9->_impl_).end_time_;
  this = UDS_GameOptionManager::GetInst();
  if (((this == (UDS_GameOptionManager *)0x0) ||
      (this_00 = UDS_GameOptionManager::GetGameOptionData(this,GameOptionAutoDeclinePartyInvites),
      this_00 == (UDS_GameOptionData *)0x0)) ||
     (iVar5 = UDS_GameOptionData::GetGameOptionValue(this_00,0), (char)iVar5 != '\x01')) {
    OpenPartyInvitedPopup(lVar4,iVar3,&local_168,dVar2);
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_PartyService::ReceivePartyInvited",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Display,local_158.Ptr,0x176,
                 L"GameOptionAutoDeclinePartyInvites On - PartyID : %lld");
      if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
          (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    RequestPartyInviteReject(lVar4);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return;
}

// ReceivePartyKicked @ 14b8dff70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::ReceivePartyKicked(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_PartyRepo *pFVar3;
  UDS_EntityManager *pUVar4;
  UDS_PartyEvent *pUVar5;
  UDS_ChattingManager *pUVar6;
  FString *pFVar7;
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
              (&local_138,"FDS_PartyService::ReceivePartyKicked",0x24,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,local_138.Ptr,0x1e3,L"[Party] FDS_PartyService::ReceivePartyKicked")
    ;
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e8a) {
    pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    FDS_PartyInfo::Clear(&pFVar3->PartyInfo);
    pUVar4 = UDS_EntityManager::GetInst();
    if (pUVar4 != (UDS_EntityManager *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnSpawnEntityEvent,
                 pFVar3);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnRemoveEntityEvent,
                 pFVar3);
    }
    pUVar5 = UDS_PartyEvent::GetEvent();
    if (pUVar5 != (UDS_PartyEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnLeftParty)
      ;
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar5->OnLeftParty).Delegate);
      }
    }
    local_158._0_8_ = 0;
    local_158._8_8_ = 0;
    local_158._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0xc36d,Complete_None_01,&local_158);
    pUVar6 = UDS_ChattingManager::GetInst();
    if (pUVar6 != (UDS_ChattingManager *)0x0) {
      local_158._8_8_ = 0xc36d;
      local_158._0_8_ = &___7FDS_StringUiID__6B_;
      pFVar7 = FDS_StringUiID::Str((FDS_StringUiID *)&local_158);
      UDS_ChattingManager::AddSystemMessage(Party,pFVar7);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PartyService::ReceivePartyKicked",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x1e7,L"has_partykickedres() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// ReceivePartyLeaderChange @ 14b8e0180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FDS_PartyService::ReceivePartyLeaderChange(ServerMessages *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 _Src;
  FDS_PartyRepo *pFVar3;
  UDS_PartyEvent *pUVar4;
  UDS_ChattingManager *pUVar5;
  FString *pFVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FDS_PartyMemberInfo *pFVar9;
  PartyLeaderChangeResponseDefaultTypeInternal *pPVar10;
  undefined1 auStackY_248 [32];
  undefined1 local_208 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_200;
  FString local_1f0;
  FStringFormatArg local_1e0;
  EDS_PartyType local_1b8;
  long64 local_1b0;
  long64 local_1a8;
  ForAnyElementType local_1a0;
  uint local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined1 local_188 [152];
  undefined4 local_f0;
  undefined1 local_d8 [152];
  undefined4 local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e87) {
    pPVar10 = *(PartyLeaderChangeResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar10 = &server_msg::_PartyLeaderChangeResponse_default_instance_;
  }
  lVar2 = *(longlong *)&((Message *)((longlong)pPVar10 + 0x10))->field_0x8;
  pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  (pFVar3->PartyInfo).PartyLeaderUID = lVar2;
  pUVar4 = UDS_PartyEvent::GetEvent();
  if (pUVar4 != (UDS_PartyEvent *)0x0) {
    FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar4->OnPartyLeaderChanged,lVar2);
  }
  pUVar4 = UDS_PartyEvent::GetEvent();
  if (pUVar4 != (UDS_PartyEvent *)0x0) {
    FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar4->OnPartyLeaderChanged,lVar2);
  }
  pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  local_1b8 = (pFVar3->PartyInfo).PartyType;
  local_1b0 = (pFVar3->PartyInfo).PartyUID;
  local_1a8 = (pFVar3->PartyInfo).PartyLeaderUID;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  uVar1 = (pFVar3->PartyInfo).PartyMemberInfos.ArrayNum;
  pFVar9 = (FDS_PartyMemberInfo *)(pFVar3->PartyInfo).PartyMemberInfos.AllocatorInstance.Data;
  local_198 = uVar1;
  if (uVar1 == 0) {
    local_194 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,uVar1,0,&local_1a0,uVar1,&local_194);
    ConstructItems<FDS_PartyMemberInfo,FDS_PartyMemberInfo,int>(local_1a0.Data,pFVar9,uVar1);
  }
  local_190 = (pFVar3->PartyInfo).MySlotIndex;
  local_18c = (pFVar3->PartyInfo).PartyMemberCount;
  FDS_PartyMemberInfo::FDS_PartyMemberInfo
            ((FDS_PartyMemberInfo *)local_188,&(pFVar3->PartyInfo).DefaultPartyMemberInfo);
  uVar1 = local_198;
  if ((0 < local_1b0) && (local_1b8 != None)) {
    uVar7 = (ulonglong)(int)local_198;
    pFVar9 = (FDS_PartyMemberInfo *)(local_1a0.Data + uVar7 * 0xa8);
    FVar8.Data = local_1a0.Data;
    while( true ) {
      if ((uint)uVar7 != uVar1) {
        `TCheckedPointerIterator<FDS_PartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_208);
        uVar7 = (ulonglong)local_198;
      }
      if ((FDS_PartyMemberInfo *)FVar8.Data == pFVar9) break;
      if ((0 < ((FDS_PartyMemberInfo *)FVar8.Data)->PlayerUID) &&
         (((FDS_PartyMemberInfo *)FVar8.Data)->PlayerUID == lVar2)) goto LAB_14b8e02f1;
      FVar8.Data = FVar8.Data + 0xa8;
    }
    FVar8.Data = (FScriptContainerElement *)local_188;
LAB_14b8e02f1:
    FDS_PartyMemberInfo::FDS_PartyMemberInfo
              ((FDS_PartyMemberInfo *)local_d8,(FDS_PartyMemberInfo *)FVar8.Data);
    _Src = local_d8._24_8_;
    if (0 < (longlong)local_d8._0_8_) {
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.Data.ArrayNum = local_d8._32_4_;
      if (local_d8._32_4_ == 0) {
        local_1f0.Data.ArrayNum = 0;
        local_1f0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d8._32_4_,0,(ForAnyElementType *)&local_1f0,local_d8._32_4_,
                   &local_1f0.Data.ArrayMax);
        memcpy(local_1f0.Data.AllocatorInstance.Data,(void *)_Src,(longlong)(int)local_d8._32_4_ * 2
              );
      }
      FStringFormatArg::FStringFormatArg(&local_1e0,&local_1f0);
      local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_200.AllocatorInstance,1,&local_200.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_200.AllocatorInstance.Data,&local_1e0,1);
      if (local_1e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.StringValue.Data.AllocatorInstance.Data);
      }
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x41ed7,Complete_None_01,&local_200,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      pUVar5 = UDS_ChattingManager::GetInst();
      if (pUVar5 != (UDS_ChattingManager *)0x0) {
        local_1f0.Data.ArrayNum = 0x41ed7;
        local_1f0.Data.ArrayMax = 0;
        local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)&___7FDS_StringUiID__6B_;
        pFVar6 = FDS_StringIDWrapper::Format
                           ((FDS_StringIDWrapper *)&local_1f0,(FString *)&local_1e0,&local_200);
        UDS_ChattingManager::AddSystemMessage(Party,pFVar6);
        if ((void *)local_1e0._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1e0._0_8_);
        }
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
      if ((FStringFormatArg *)local_200.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
    }
    local_40 = 0;
    if ((void *)local_d8._144_8_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._144_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_d8 + 0x50);
    if ((FScriptContainerElement *)local_d8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._24_8_);
    }
  }
  local_f0 = 0;
  if ((void *)local_188._144_8_ != (void *)0x0) {
    FMemory::Free((void *)local_188._144_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_188 + 0x50);
  if ((FScriptContainerElement *)local_188._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._24_8_);
  }
  DestructItems<FDS_PartyMemberInfo,int>((FDS_PartyMemberInfo *)local_1a0.Data,local_198);
  if ((FDS_PartyMemberInfo *)local_1a0.Data != (FDS_PartyMemberInfo *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  return;
}

// ReceivePartyMemberSync @ 14b8e0510

void __cdecl FDS_PartyService::ReceivePartyMemberSync(ServerMessages *param_1)

{
  FDS_PartyRepo *pFVar1;
  FDS_PartyMemberInfo *this;
  PartyMemberSyncResponseDefaultTypeInternal *pPVar2;
  PartyMemberSyncResponse local_58;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e88) {
    pPVar2 = *(PartyMemberSyncResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar2 = &server_msg::_PartyMemberSyncResponse_default_instance_;
  }
  server_msg::PartyMemberSyncResponse::PartyMemberSyncResponse
            (&local_58,(Arena *)0x0,&pPVar2->_instance);
  local_58._padding_ = (longlong)&___7PartyMemberSyncResponse_server_msg__6B_;
  pFVar1 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  this = FDS_PartyInfo::GetPartyMemberInfo(&pFVar1->PartyInfo,local_58._impl_.player_uid_);
  if (0 < this->PlayerUID) {
    FDS_PartyMemberInfo::SetPartyMemberSync(this,&local_58);
  }
  server_msg::PartyMemberSyncResponse::~PartyMemberSyncResponse(&local_58);
  return;
}

// ReceivePartyRejectInfo @ 14b8e0580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::ReceivePartyRejectInfo(ServerMessages *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  PartyRejectInfoResponseDefaultTypeInternal *pPVar5;
  FDS_PlayerRepo *pFVar6;
  size_t sVar7;
  FString *pFVar8;
  UDS_ChattingManager *pUVar9;
  UDS_LogManager *pUVar10;
  PartyInviteRejectInfo *pPVar11;
  PlayerDefaultTypeInternal *pPVar12;
  uchar *_Str;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  FStringFormatArg local_190;
  FString local_170;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e8b) {
    pPVar5 = *(PartyRejectInfoResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar5 = &server_msg::_PartyRejectInfoResponse_default_instance_;
  }
  if ((*(byte *)((longlong)pPVar5 + 0x10) & 1) == 0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyService::ReceivePartyRejectInfo",0x28,Yes);
    UDS_LogManager::PrintLog
              (pUVar10,1,Display,local_148.Ptr,0x1a4,
               L"partyLeaderChangeRes.has_reject_info() == false");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  pPVar11 = &ds_proto::_PartyInviteRejectInfo_default_instance_._instance;
  if (*(PartyInviteRejectInfo **)&((Message *)((longlong)pPVar5 + 0x10))->field_0x8 !=
      (PartyInviteRejectInfo *)0x0) {
    pPVar11 = *(PartyInviteRejectInfo **)&((Message *)((longlong)pPVar5 + 0x10))->field_0x8;
  }
  lVar4 = (pPVar11->_impl_).sender_uid_;
  bVar2 = (pPVar11->_impl_).is_timeout_;
  pFVar6 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  iVar3 = (pFVar6->PlayerList).ArrayNum;
  pPVar12 = (PlayerDefaultTypeInternal *)(pFVar6->PlayerList).AllocatorInstance.Data;
  pFVar13 = (FScriptContainerElement *)((longlong)pPVar12 + (longlong)iVar3 * 0x90);
  while( true ) {
    if ((pFVar6->PlayerList).ArrayNum != iVar3) {
      `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1a8);
    }
    if ((FScriptContainerElement *)pPVar12 == pFVar13) break;
    if (*(longlong *)((longlong)pPVar12 + 0x50) == lVar4) goto LAB_14b8e0653;
    pPVar12 = (PlayerDefaultTypeInternal *)((longlong)pPVar12 + 0x90);
  }
  pPVar12 = &misc::_Player_default_instance_;
LAB_14b8e0653:
  if (*(longlong *)((longlong)pPVar12 + 0x50) != lVar4) {
    return;
  }
  if (bVar2 == true) {
    return;
  }
  _Str = (uchar *)(*(ulonglong *)((longlong)pPVar12 + 0x18) & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(_Str + 0x18)) {
    _Str = *(uchar **)_Str;
  }
  local_148._padding_ = 0;
  if (_Str == (uchar *)0x0) {
    local_148.StringLength = 0;
    local_148.Ptr = (wchar_t *)0x0;
    goto LAB_14b8e0724;
  }
  sVar7 = strlen((char *)_Str);
  local_148.StringLength = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar7);
  uVar1 = local_148.StringLength + 1;
  uVar14 = uVar1;
  if (uVar1 < 0x81) {
    if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_148._padding_ !=
        (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
      uVar14 = 0;
      goto LAB_14b8e06d0;
    }
  }
  else {
LAB_14b8e06d0:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_148._padding_,0,uVar14,2);
  }
  local_148.Ptr = (wchar_t *)&local_148;
  if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_148._padding_ !=
      (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
    local_148.Ptr = (wchar_t *)local_148._padding_;
  }
  UE::Core::Private::Convert(local_148.Ptr,uVar1,_Str,(int)sVar7 + 1);
LAB_14b8e0724:
  ::FString::FString(&local_170,local_148.Ptr);
  if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_148._padding_ !=
      (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  pFVar8 = ::FString::FString(&local_160,&local_170);
  FStringFormatArg::FStringFormatArg(&local_190,pFVar8);
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_1a0.AllocatorInstance.Data,&local_190,1);
  if (local_190.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.StringValue.Data.AllocatorInstance.Data);
  }
  UDS_UIMessageManager::OpenMsgByStringUi
            (0x41ed3,Complete_None_01,&local_1a0,
             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
              *)0x0);
  pUVar9 = UDS_ChattingManager::GetInst();
  if (pUVar9 != (UDS_ChattingManager *)0x0) {
    local_190.field1_0x8.DoubleValue = 1.33415016674741e-318;
    local_190._0_8_ = &___7FDS_StringUiID__6B_;
    pFVar8 = FDS_StringIDWrapper::Format((FDS_StringIDWrapper *)&local_190,&local_160,&local_1a0);
    UDS_ChattingManager::AddSystemMessage(Party,pFVar8);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
  if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return;
}

// RecievePartySlotChanged @ 14b8e0920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::RecievePartySlotChanged(ServerMessages *param_1)

{
  FDS_PartyRepo *pFVar1;
  UDS_LogManager *pUVar2;
  PartySlotChangeResponseDefaultTypeInternal *pPVar3;
  PartySlotInfo *pPVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e85) {
    pPVar3 = *(PartySlotChangeResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar3 = &server_msg::_PartySlotChangeResponse_default_instance_;
  }
  TDS_Singleton<FDS_PartyRepo>::GetInst();
  pFVar1 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  pPVar4 = &ds_proto::_PartySlotInfo_default_instance_._instance;
  if (*(PartySlotInfo **)&((Message *)((longlong)pPVar3 + 0x10))->field_0x8 != (PartySlotInfo *)0x0)
  {
    pPVar4 = *(PartySlotInfo **)&((Message *)((longlong)pPVar3 + 0x10))->field_0x8;
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PartyRepo::SetPartySlotInfo",0x1f,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,local_138.Ptr,0x3b,L"[Party] FDS_PartyRepo::SetPartySlotInfo()");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  FDS_PartyInfo::SetPartySlotInfo(&pFVar1->PartyInfo,pPVar4);
  return;
}

// RequestPartyCreate @ 14b8e3520

void __cdecl
FDS_PartyService::RequestPartyCreate
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e84) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e84;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyCreateRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  if ((pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ != (Message *)0x0) {
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
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_1);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ResponsePartyCreate;
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// RequestPartyDismiss @ 14b8e3770

void __cdecl FDS_PartyService::RequestPartyDismiss(void)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e8a) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e8a;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyDismissRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  if ((pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ != (Message *)0x0) {
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
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ResponsePartyDismiss;
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
  return;
}

// RequestPartyInvite @ 14b8e3980

void __cdecl FDS_PartyService::RequestPartyInvite(int param_1,long64 param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  FDS_PartyRepo *pFVar8;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar9;
  Message *pMVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UDS_NetworkManager *this;
  Arena *pAVar13;
  ForAnyElementType local_148;
  undefined8 local_140;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_138;
  undefined1 local_128 [8];
  ForAnyElementType local_120;
  ulonglong local_118;
  TArray<TSharedPtr<FDS_ClientMessage_Twoway,1>,TSizedDefaultAllocator<32>_> local_110;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  undefined1 *local_b8;
  FDestructionSentinel local_b0;
  undefined1 *local_98;
  FDestructionSentinel local_90;
  undefined1 *local_78;
  FDestructionSentinel local_70;
  undefined1 *local_58;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_50;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_40;
  
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  pFVar8 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  if (((pFVar8->PartyInfo).PartyUID < 1) || ((pFVar8->PartyInfo).PartyType == None)) {
    pTVar9 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_50);
    local_138.Object = pTVar9->Object;
    local_138.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    if ((local_138.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = local_138.Object;
    if (((local_138.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e84) {
      client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                (&(local_138.Object)->clientMsg);
      (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x4e84;
      pAVar13 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
      if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
        pAVar13 = (Arena *)(pAVar13->impl_).tag_and_id_;
      }
      pMVar10 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyCreateRequest>
                          (pAVar13);
      (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar10;
    }
    if ((local_138.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = local_138.Object;
    local_118 = 0;
    local_128 = (undefined1  [8])0x0;
    local_120.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_138.Object)->SuccessDel,(FWriteAccessScope *)&local_d0);
    local_b8 = &(pFVar3->SuccessDel).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar11 + 1),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[4] = uVar12;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar11[5] = ResponsePartyCreate;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
               (FWriteAccessScope *)&local_e8);
    if (((int)local_118 != 0) && (local_120.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_120.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_120,0,0,0x10);
      local_118 = local_118 & 0xffffffff00000000;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (local_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_128);
    if ((local_138.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = local_138.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_138.Object)->FailDel,(FWriteAccessScope *)&local_b0);
    local_98 = &(pFVar3->FailDel).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_98);
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
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (((local_148.Data <= &local_138) &&
        (&local_138 <
         (TSharedPtr<FDS_ClientMessage_Twoway,1> *)
         (local_148.Data + (longlong)local_140._4_4_ * 0x10))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (int)local_140;
    if ((int)local_140 == local_140._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_148,(int *)((longlong)&local_140 + 4));
    }
    local_140 = CONCAT44(local_140._4_4_,iVar7 + 1);
    *(FDS_ClientMessage_Twoway **)&local_148.Data[(longlong)iVar7 * 0x10].field_0x0 =
         local_138.Object;
    *(TReferenceControllerBase<1> **)(local_148.Data + (longlong)iVar7 * 0x10 + 8) =
         local_138.SharedReferenceCount.ReferenceController;
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
  }
  pTVar9 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_40);
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar9->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  if ((pFVar3 == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar3->clientMsg)._impl_._oneof_case_[0] != 0x4e85) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway(&pFVar3->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x4e85;
    pAVar13 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar13 = (Arena *)(pAVar13->impl_).tag_and_id_;
    }
    pMVar10 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyInviteRequest>
                        (pAVar13);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar10;
  }
  pMVar10 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar10 != (Message *)0x0) {
    *(int *)(pMVar10 + 2) = param_1;
    uVar1 = *(uint *)(pMVar10 + 1);
    *(long64 *)&pMVar10[1].field_0x8 = param_2;
    *(uint *)(pMVar10 + 1) = uVar1 | 3;
    if ((pFVar3 == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->SuccessDel,
               (FWriteAccessScope *)&local_90);
    local_78 = &(pFVar3->SuccessDel).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_78);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = ResponsePartyInvite;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if ((pFVar3 == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->FailDel,
               (FWriteAccessScope *)&local_70);
    local_58 = &(pFVar3->FailDel).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_58);
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
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    iVar7 = (int)local_140;
    if ((int)local_140 == local_140._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_148,(int *)((longlong)&local_140 + 4));
    }
    local_140 = CONCAT44(local_140._4_4_,iVar7 + 1);
    *(FDS_ClientMessage_Twoway **)&local_148.Data[(longlong)iVar7 * 0x10].field_0x0 = pFVar3;
    *(TReferenceControllerBase<1> **)(local_148.Data + (longlong)iVar7 * 0x10 + 8) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    this = UDS_NetworkManager::GetInst();
    FVar5.Data = local_148.Data;
    iVar7 = (int)local_140;
    local_100._16_8_ = 0;
    local_100._0_8_ = 0;
    local_100._8_8_ = 0;
    local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ArrayNum = (int)local_140;
    if ((int)local_140 == 0) {
      local_110.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_140,0,&local_110.AllocatorInstance,(int)local_140,
                 &local_110.ArrayMax);
      ConstructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,TSharedPtr<FDS_ClientMessage_Twoway,1>,int>
                (local_110.AllocatorInstance.Data,
                 (TSharedPtr<FDS_ClientMessage_Twoway,1> *)FVar5.Data,iVar7);
    }
    UDS_NetworkManager::SendTwoWayPacketSequence(this,&local_110,&local_100);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  DestructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,int>
            ((TSharedPtr<FDS_ClientMessage_Twoway,1> *)local_148.Data,(int)local_140);
  if ((TSharedPtr<FDS_ClientMessage_Twoway,1> *)local_148.Data !=
      (TSharedPtr<FDS_ClientMessage_Twoway,1> *)0x0) {
    FMemory::Free(local_148.Data);
  }
  return;
}

// RequestPartyInviteReject @ 14b8e3fa0

void __cdecl FDS_PartyService::RequestPartyInviteReject(long64 param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e87) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e87;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyInvitedRejectRequest>
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
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ResponsePartyInviteReject;
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
  return;
}

// RequestPartyInvitedAccept @ 14b8e41c0

void __cdecl FDS_PartyService::RequestPartyInvitedAccept(long64 param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e86) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e86;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyInvitedAcceptRequest>
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
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ResponsePartyInviteAccept;
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
  return;
}

// RequestPartyJoin @ 14b8e43e0

void __cdecl FDS_PartyService::RequestPartyJoin(long64 param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e8d) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e8d;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyJoinRequest>(pAVar8);
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
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
      ;
      puVar6[1] = param_1;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
      ;
      puVar6[3] = ResponsePartyJoin;
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
  return;
}

// RequestPartyKick @ 14b8e4610

void __cdecl FDS_PartyService::RequestPartyKick(long64 param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e88) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e88;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyKickRequest>(pAVar8);
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
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
      ;
      puVar6[1] = param_1;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___J__6B_
      ;
      puVar6[3] = ResponsePartyKick;
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
  return;
}

// RequestPartyLeaderChange @ 14b8e4840

void __cdecl FDS_PartyService::RequestPartyLeaderChange(long64 param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e8b) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e8b;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyLeaderChangeRequest>
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
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ResponsePartyLeaderChange;
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
  return;
}

// RequestPartyLeave @ 14b8e4a60

void __cdecl
FDS_PartyService::RequestPartyLeave
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4e89) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4e89;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PartyLeaveRequest>(pAVar8)
    ;
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  if ((pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ != (Message *)0x0) {
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
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_1);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ResponsePartyLeave;
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// ResponsePartyCreate @ 14b8e5c50

void __cdecl
FDS_PartyService::ResponsePartyCreate
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  char cVar1;
  UDS_ChattingManager *pUVar2;
  FString *pFVar3;
  FReadAccessScope local_28;
  
  local_28.DestructionSentinel._0_8_ = (undefined **)0x0;
  local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_28.DestructionSentinel.bDestroyed = false;
  local_28.DestructionSentinel._17_3_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi
            (0xc367,Complete_None_01,
             (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *)
             &local_28);
  pUVar2 = UDS_ChattingManager::GetInst();
  if (pUVar2 != (UDS_ChattingManager *)0x0) {
    local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0xc367;
    local_28.DestructionSentinel._0_8_ = &___7FDS_StringUiID__6B_;
    pFVar3 = FDS_StringUiID::Str((FDS_StringUiID *)&local_28);
    UDS_ChattingManager::AddSystemMessage(Party,pFVar3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar1 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&PartyCreateDelegate,param_2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ResponsePartyDismiss @ 14b8e5d50

void __cdecl FDS_PartyService::ResponsePartyDismiss(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponsePartyInvite @ 14b8e5d60

void __cdecl FDS_PartyService::ResponsePartyInvite(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponsePartyInviteAccept @ 14b8e5d70

void __cdecl FDS_PartyService::ResponsePartyInviteAccept(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponsePartyInviteReject @ 14b8e5d80

void __cdecl FDS_PartyService::ResponsePartyInviteReject(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponsePartyJoin @ 14b8e5d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::ResponsePartyJoin(ServerMessagesTwoway *param_1,long64 param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PartyService::ResponsePartyJoin",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0x6d,
               L"[Party] FDS_PartyService::ResponsePartyJoin() - InPartyID : %lld");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// ResponsePartyKick @ 14b8e5e70

void __cdecl FDS_PartyService::ResponsePartyKick(ServerMessagesTwoway *param_1,long64 param_2)

{
  UDS_ChattingManager *pUVar1;
  FString *pFVar2;
  undefined **local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28 = (undefined **)0x0;
  local_20 = 0;
  local_18 = 0;
  UDS_UIMessageManager::OpenMsgByStringUi
            (0xc36c,Complete_None_01,
             (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *)
             &local_28);
  pUVar1 = UDS_ChattingManager::GetInst();
  if (pUVar1 != (UDS_ChattingManager *)0x0) {
    local_20 = 0xc36c;
    local_28 = &___7FDS_StringUiID__6B_;
    pFVar2 = FDS_StringUiID::Str((FDS_StringUiID *)&local_28);
    UDS_ChattingManager::AddSystemMessage(Party,pFVar2);
  }
  return;
}

// ResponsePartyLeaderChange @ 14b8e5ee0

void __cdecl FDS_PartyService::ResponsePartyLeaderChange(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponsePartyLeave @ 14b8e5ef0

void __cdecl
FDS_PartyService::ResponsePartyLeave
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  FDS_PartyRepo *pFVar4;
  UDS_EntityManager *pUVar5;
  UDS_PartyEvent *pUVar6;
  UDS_ChattingManager *pUVar7;
  FString *pFVar8;
  longlong *plVar9;
  FReadAccessScope local_28;
  
  pFVar4 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  FDS_PartyInfo::Clear(&pFVar4->PartyInfo);
  pUVar5 = UDS_EntityManager::GetInst();
  if (pUVar5 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnSpawnEntityEvent,
               pFVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnRemoveEntityEvent,
               pFVar4);
  }
  pUVar6 = UDS_PartyEvent::GetEvent();
  if (pUVar6 != (UDS_PartyEvent *)0x0) {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnLeftParty);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar6->OnLeftParty).Delegate);
    }
  }
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
  plVar9 = (longlong *)0x0;
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar9 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar9 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  local_28.DestructionSentinel._0_8_ = (undefined **)0x0;
  local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_28.DestructionSentinel.bDestroyed = false;
  local_28.DestructionSentinel._17_3_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi
            (0x41ed8,Complete_None_01,
             (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *)
             &local_28);
  pUVar7 = UDS_ChattingManager::GetInst();
  if (pUVar7 != (UDS_ChattingManager *)0x0) {
    local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x41ed8;
    local_28.DestructionSentinel._0_8_ = &___7FDS_StringUiID__6B_;
    pFVar8 = FDS_StringUiID::Str((FDS_StringUiID *)&local_28);
    UDS_ChattingManager::AddSystemMessage(Party,pFVar8);
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

// SendPartyInviteLink @ 14b8e63b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PartyService::SendPartyInviteLink(void)

{
  long64 lVar1;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar2;
  FDS_PartyRepo *pFVar3;
  FDS_PartyMemberInfo *pFVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PartyService::SendPartyInviteLink",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x203,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_138._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    lVar1 = (pFVar3->PartyInfo).PartyUID;
    pFVar4 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar3->PartyInfo,(pFVar3->PartyInfo).MySlotIndex);
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PartyService::SendPartyInviteLink",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,local_138.Ptr,0x20c,
                 L"[Party] FDS_PartyService::SendPartyInviteLink() - PartyUID : %lld");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    UDS_ChattingManager::SendPartyChatLink(this,lVar1,pFVar4->PlayerUID,&pFVar4->Nickname);
  }
  return;
}

