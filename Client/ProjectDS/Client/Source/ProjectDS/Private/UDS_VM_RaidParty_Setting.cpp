// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 41

// SetTitleText_WrapperImpl @ 14b6d32f0

void __cdecl UDS_VM_RaidParty_Setting::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetInvitationLinkText_WrapperImpl @ 14b6d3300

void __cdecl
UDS_VM_RaidParty_Setting::SetInvitationLinkText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InvitationLinkText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InvitationLinkText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xf0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetInviteText_WrapperImpl @ 14b6d3310

void __cdecl UDS_VM_RaidParty_Setting::SetInviteText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InviteText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InviteText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x140),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetSecessionText_WrapperImpl @ 14b6d3320

void __cdecl UDS_VM_RaidParty_Setting::SetSecessionText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::SecessionText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SecessionText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 400),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetInfomationText_WrapperImpl @ 14b6d3330

void __cdecl UDS_VM_RaidParty_Setting::SetInfomationText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InfomationText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InfomationText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1e0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetInvitationLinkState_WrapperImpl @ 14b6d3340

void __cdecl
UDS_VM_RaidParty_Setting::SetInvitationLinkState_WrapperImpl(void *param_1,void *param_2)

{
  SetInvitationLinkState(param_1,*(bool *)param_2);
  return;
}

// SetInviteState_WrapperImpl @ 14b6d3350

void __cdecl UDS_VM_RaidParty_Setting::SetInviteState_WrapperImpl(void *param_1,void *param_2)

{
  SetInviteState(param_1,*(bool *)param_2);
  return;
}

// SetSecessionState_WrapperImpl @ 14b6d3360

void __cdecl UDS_VM_RaidParty_Setting::SetSecessionState_WrapperImpl(void *param_1,void *param_2)

{
  SetSecessionState(param_1,*(bool *)param_2);
  return;
}

// SetInfomationState_WrapperImpl @ 14b6d3370

void __cdecl UDS_VM_RaidParty_Setting::SetInfomationState_WrapperImpl(void *param_1,void *param_2)

{
  SetInfomationState(param_1,*(bool *)param_2);
  return;
}

// SetClickInvitationLink_WrapperImpl @ 14b6d3380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RaidParty_Setting::SetClickInvitationLink_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,RaidPartySetting,auStackX_20,afStackX_18);
  }
  return;
}

// SetClickInvite_WrapperImpl @ 14b6d3390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RaidParty_Setting::SetClickInvite_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  FDS_RaidPartyService::OpenInviteWindow();
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,RaidPartySetting,auStackX_20,afStackX_18);
  }
  return;
}

// SetClickSecession_WrapperImpl @ 14b6d33a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RaidParty_Setting::SetClickSecession_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> TStack_28;
  
  TStack_28._0_8_ = 0;
  TStack_28._8_8_ = 0;
  TStack_28._16_4_ = 0;
  FDS_RaidPartyService::RequestRaidPartyLeave(&TStack_28);
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,RaidPartySetting,auStackX_20,afStackX_18);
  }
  return;
}

// SetClickInfomation_WrapperImpl @ 14b6d33b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RaidParty_Setting::SetClickInfomation_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1e8 [32];
  undefined1 auStack_1b8 [8];
  FDelegateAllocation FStack_1b0;
  float afStack_1a0 [2];
  void *apvStack_198 [2];
  code *pcStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  bool bStack_178;
  FDestructionSentinel FStack_168;
  FDelegateAllocation *pFStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pUVar1 = UDS_WindowManager::GetInst();
  if (pUVar1 == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_RaidParty_Setting::OnClickInfomation",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_148.Ptr,0x8c,L"windowManager is nullptr.");
      if ((void *)TStack_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_148._padding_);
      }
    }
  }
  else {
    uStack_180 = 0;
    pcStack_188 = OnOpenInfomation;
    auStack_1b8 = (undefined1  [8])0x0;
    FStack_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1b8,
               (FWriteAccessScope *)&FStack_168);
    pFStack_150 = &FStack_1b0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1b0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidParty_Setting____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar3[3] = 0;
      apvStack_198[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)apvStack_198);
      puVar3[4] = pcStack_188;
      puVar3[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (FStack_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_168.Accessor,&FStack_168);
    }
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &pcStack_188,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        auStack_1b8);
    UDS_WindowManager::OpenWindow(pUVar1,PartyCreate,pTVar5);
    pUVar1 = UDS_WindowManager::GetInst();
    if (pUVar1 != (UDS_WindowManager *)0x0) {
      afStack_1a0[0] = 0.0;
      apvStack_198[0] = (void *)((ulonglong)apvStack_198[0] & 0xffffffff00000000);
      UDS_WindowManager::CloseWindow(pUVar1,RaidPartySetting,(uint *)apvStack_198,afStack_1a0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1b8,
               (FWriteAccessScope *)&pcStack_188);
    if ((FStack_1b0.DelegateSize != 0) &&
       (FStack_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_1b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_1b0,0,0,0x10);
      FStack_1b0.DelegateSize = 0;
    }
    if (bStack_178 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                 (FDestructionSentinel *)&pcStack_188);
    }
    if (FStack_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_1b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_1b8);
  }
  return;
}

// SetClickClose_WrapperImpl @ 14b6d33c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RaidParty_Setting::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,RaidPartySetting,auStackX_20,afStackX_18);
  }
  return;
}

// SetSubTitleVisibility_WrapperImpl @ 14b6d33d0

void __cdecl
UDS_VM_RaidParty_Setting::SetSubTitleVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetSubTitleVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b6d33e0

UClass * __cdecl UDS_VM_RaidParty_Setting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidParty_Setting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidParty_Setting",
               &Z_Registration_Info_UClass_UDS_VM_RaidParty_Setting.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidParty_Setting,0x2e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RaidParty_Setting>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidParty_Setting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidParty_Setting.InnerSingleton;
}

// UDS_VM_RaidParty_Setting @ 14b6d84e0

UDS_VM_RaidParty_Setting * __thiscall
UDS_VM_RaidParty_Setting::UDS_VM_RaidParty_Setting
          (UDS_VM_RaidParty_Setting *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidParty_Setting__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->InvitationLinkText).StringTableType = None;
  (this->InvitationLinkText).StringTableID = 0;
  (this->InvitationLinkText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InvitationLinkText).StringEnumTableNameID.Number = 0;
  (this->InvitationLinkText).DateTime.Ticks = 0;
  (this->InvitationLinkText).TimeSpan.Ticks = 0;
  (this->InvitationLinkText).TimeExpressionType = None;
  (this->InvitationLinkText).IsExpression = false;
  (this->InvitationLinkText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InvitationLinkText).UniqueString.Data.ArrayNum = 0;
  (this->InvitationLinkText).UniqueString.Data.ArrayMax = 0;
  (this->InvitationLinkText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvitationLinkText).FormatArgs.ArrayNum = 0;
  (this->InvitationLinkText).FormatArgs.ArrayMax = 0;
  (this->InviteText).StringTableType = None;
  (this->InviteText).StringTableID = 0;
  (this->InviteText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InviteText).StringEnumTableNameID.Number = 0;
  (this->InviteText).DateTime.Ticks = 0;
  (this->InviteText).TimeSpan.Ticks = 0;
  (this->InviteText).TimeExpressionType = None;
  (this->InviteText).IsExpression = false;
  (this->InviteText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InviteText).UniqueString.Data.ArrayNum = 0;
  (this->InviteText).UniqueString.Data.ArrayMax = 0;
  (this->InviteText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InviteText).FormatArgs.ArrayNum = 0;
  (this->InviteText).FormatArgs.ArrayMax = 0;
  (this->SecessionText).StringTableType = None;
  (this->SecessionText).StringTableID = 0;
  (this->SecessionText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SecessionText).StringEnumTableNameID.Number = 0;
  (this->SecessionText).DateTime.Ticks = 0;
  (this->SecessionText).TimeSpan.Ticks = 0;
  (this->SecessionText).TimeExpressionType = None;
  (this->SecessionText).IsExpression = false;
  (this->SecessionText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecessionText).UniqueString.Data.ArrayNum = 0;
  (this->SecessionText).UniqueString.Data.ArrayMax = 0;
  (this->SecessionText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecessionText).FormatArgs.ArrayNum = 0;
  (this->SecessionText).FormatArgs.ArrayMax = 0;
  (this->InfomationText).StringTableType = None;
  (this->InfomationText).StringTableID = 0;
  (this->InfomationText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InfomationText).StringEnumTableNameID.Number = 0;
  (this->InfomationText).DateTime.Ticks = 0;
  (this->InfomationText).TimeSpan.Ticks = 0;
  (this->InfomationText).TimeExpressionType = None;
  (this->InfomationText).IsExpression = false;
  (this->InfomationText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InfomationText).UniqueString.Data.ArrayNum = 0;
  (this->InfomationText).UniqueString.Data.ArrayMax = 0;
  (this->InfomationText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InfomationText).FormatArgs.ArrayNum = 0;
  (this->InfomationText).FormatArgs.ArrayMax = 0;
  (this->ClickInvitationLink)._padding_ = '\0';
  (this->ClickInvitationLink).bIsCustomSelected = false;
  (this->ClickInvitationLink).bIsLacked = false;
  (this->ClickInvitationLink).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInvitationLink).Delegate = 0;
  *(undefined8 *)&(this->ClickInvitationLink).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvitationLink).Delegate.field_0x10 = 0;
  (this->ClickInvite)._padding_ = '\0';
  (this->ClickInvite).bIsCustomSelected = false;
  (this->ClickInvite).bIsLacked = false;
  (this->ClickInvite).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvite).Delegate.field_0x10 = 0;
  (this->ClickSecession)._padding_ = '\0';
  (this->ClickSecession).bIsCustomSelected = false;
  (this->ClickSecession).bIsLacked = false;
  (this->ClickSecession).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSecession).Delegate = 0;
  *(undefined8 *)&(this->ClickSecession).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSecession).Delegate.field_0x10 = 0;
  (this->ClickInfomation)._padding_ = '\0';
  (this->ClickInfomation).bIsCustomSelected = false;
  (this->ClickInfomation).bIsLacked = false;
  (this->ClickInfomation).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInfomation).Delegate = 0;
  *(undefined8 *)&(this->ClickInfomation).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInfomation).Delegate.field_0x10 = 0;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  (this->TitleText).StringTableType = None;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  return this;
}

// UDS_VM_RaidParty_Setting @ 14b6d8720

UDS_VM_RaidParty_Setting * __thiscall
UDS_VM_RaidParty_Setting::UDS_VM_RaidParty_Setting
          (UDS_VM_RaidParty_Setting *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidParty_Setting__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->InvitationLinkText).StringTableType = None;
  (this->InvitationLinkText).StringTableID = 0;
  (this->InvitationLinkText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InvitationLinkText).StringEnumTableNameID.Number = 0;
  (this->InvitationLinkText).DateTime.Ticks = 0;
  (this->InvitationLinkText).TimeSpan.Ticks = 0;
  (this->InvitationLinkText).TimeExpressionType = None;
  (this->InvitationLinkText).IsExpression = false;
  (this->InvitationLinkText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InvitationLinkText).UniqueString.Data.ArrayNum = 0;
  (this->InvitationLinkText).UniqueString.Data.ArrayMax = 0;
  (this->InvitationLinkText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvitationLinkText).FormatArgs.ArrayNum = 0;
  (this->InvitationLinkText).FormatArgs.ArrayMax = 0;
  (this->InviteText).StringTableType = None;
  (this->InviteText).StringTableID = 0;
  (this->InviteText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InviteText).StringEnumTableNameID.Number = 0;
  (this->InviteText).DateTime.Ticks = 0;
  (this->InviteText).TimeSpan.Ticks = 0;
  (this->InviteText).TimeExpressionType = None;
  (this->InviteText).IsExpression = false;
  (this->InviteText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InviteText).UniqueString.Data.ArrayNum = 0;
  (this->InviteText).UniqueString.Data.ArrayMax = 0;
  (this->InviteText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InviteText).FormatArgs.ArrayNum = 0;
  (this->InviteText).FormatArgs.ArrayMax = 0;
  (this->SecessionText).StringTableType = None;
  (this->SecessionText).StringTableID = 0;
  (this->SecessionText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SecessionText).StringEnumTableNameID.Number = 0;
  (this->SecessionText).DateTime.Ticks = 0;
  (this->SecessionText).TimeSpan.Ticks = 0;
  (this->SecessionText).TimeExpressionType = None;
  (this->SecessionText).IsExpression = false;
  (this->SecessionText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecessionText).UniqueString.Data.ArrayNum = 0;
  (this->SecessionText).UniqueString.Data.ArrayMax = 0;
  (this->SecessionText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecessionText).FormatArgs.ArrayNum = 0;
  (this->SecessionText).FormatArgs.ArrayMax = 0;
  (this->InfomationText).StringTableType = None;
  (this->InfomationText).StringTableID = 0;
  (this->InfomationText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InfomationText).StringEnumTableNameID.Number = 0;
  (this->InfomationText).DateTime.Ticks = 0;
  (this->InfomationText).TimeSpan.Ticks = 0;
  (this->InfomationText).TimeExpressionType = None;
  (this->InfomationText).IsExpression = false;
  (this->InfomationText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InfomationText).UniqueString.Data.ArrayNum = 0;
  (this->InfomationText).UniqueString.Data.ArrayMax = 0;
  (this->InfomationText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InfomationText).FormatArgs.ArrayNum = 0;
  (this->InfomationText).FormatArgs.ArrayMax = 0;
  (this->ClickInvitationLink)._padding_ = '\0';
  (this->ClickInvitationLink).bIsCustomSelected = false;
  (this->ClickInvitationLink).bIsLacked = false;
  (this->ClickInvitationLink).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInvitationLink).Delegate = 0;
  *(undefined8 *)&(this->ClickInvitationLink).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvitationLink).Delegate.field_0x10 = 0;
  (this->ClickInvite)._padding_ = '\0';
  (this->ClickInvite).bIsCustomSelected = false;
  (this->ClickInvite).bIsLacked = false;
  (this->ClickInvite).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvite).Delegate.field_0x10 = 0;
  (this->ClickSecession)._padding_ = '\0';
  (this->ClickSecession).bIsCustomSelected = false;
  (this->ClickSecession).bIsLacked = false;
  (this->ClickSecession).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSecession).Delegate = 0;
  *(undefined8 *)&(this->ClickSecession).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSecession).Delegate.field_0x10 = 0;
  (this->ClickInfomation)._padding_ = '\0';
  (this->ClickInfomation).bIsCustomSelected = false;
  (this->ClickInfomation).bIsLacked = false;
  (this->ClickInfomation).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInfomation).Delegate = 0;
  *(undefined8 *)&(this->ClickInfomation).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInfomation).Delegate.field_0x10 = 0;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  (this->TitleText).StringTableType = None;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  return this;
}

// ~UDS_VM_RaidParty_Setting @ 14b6da3b0

void __thiscall UDS_VM_RaidParty_Setting::~UDS_VM_RaidParty_Setting(UDS_VM_RaidParty_Setting *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidParty_Setting__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClose).Delegate);
  pvVar1 = *(void **)&(this->ClickClose).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClose).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickInfomation).Delegate);
  pvVar1 = *(void **)&(this->ClickInfomation).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickInfomation).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSecession).Delegate);
  pvVar1 = *(void **)&(this->ClickSecession).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSecession).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickInvite).Delegate);
  pvVar1 = *(void **)&(this->ClickInvite).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickInvite).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickInvitationLink).Delegate);
  pvVar1 = *(void **)&(this->ClickInvitationLink).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickInvitationLink).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->InfomationText).FormatArgs.AllocatorInstance.Data,
             (this->InfomationText).FormatArgs.ArrayNum);
  pFVar2 = (this->InfomationText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InfomationText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SecessionText).FormatArgs.AllocatorInstance.Data,
             (this->SecessionText).FormatArgs.ArrayNum);
  pFVar2 = (this->SecessionText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SecessionText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->InviteText).FormatArgs.AllocatorInstance.Data,
             (this->InviteText).FormatArgs.ArrayNum);
  pFVar2 = (this->InviteText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InviteText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->InvitationLinkText).FormatArgs.AllocatorInstance.Data,
             (this->InvitationLinkText).FormatArgs.ArrayNum);
  pFVar2 = (this->InvitationLinkText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InvitationLinkText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar2 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcc90

IClassDescriptor * __thiscall
UDS_VM_RaidParty_Setting::GetFieldNotificationDescriptor(UDS_VM_RaidParty_Setting *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RaidParty_Setting::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd740

UClass * __cdecl UDS_VM_RaidParty_Setting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidParty_Setting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidParty_Setting",
               &Z_Registration_Info_UClass_UDS_VM_RaidParty_Setting.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidParty_Setting,0x2e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RaidParty_Setting>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidParty_Setting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidParty_Setting.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RaidParty_Setting @ 14b6ddf00

void __cdecl UDS_VM_RaidParty_Setting::StaticRegisterNativesUDS_VM_RaidParty_Setting(void)

{
  return;
}

// CloseWidget @ 14be788a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RaidParty_Setting::CloseWidget(UDS_VM_RaidParty_Setting *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartySetting,local_res18,local_res10);
  }
  return;
}

// InitViewModel @ 14be8e640

void __thiscall UDS_VM_RaidParty_Setting::InitViewModel(UDS_VM_RaidParty_Setting *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_InputKey *pUVar4;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_InputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
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
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    pFVar2->KeyActionType = IA_UI_Escape;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_InputKey).field0_0x0.DebugPtr = pUVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnClickClose @ 14be94380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_Setting::OnClickClose(UDS_VM_RaidParty_Setting *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartySetting,local_res20,local_res18);
  }
  return;
}

// OnClickInfomation @ 14be95670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_Setting::OnClickInfomation
          (UDS_VM_RaidParty_Setting *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  float local_1a0 [2];
  UDS_VM_RaidParty_Setting *local_198 [2];
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  bool local_178;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pUVar1 = UDS_WindowManager::GetInst();
  if (pUVar1 == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_RaidParty_Setting::OnClickInfomation",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x8c,L"windowManager is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    uStack_180 = 0;
    local_188 = OnOpenInfomation;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_168);
    local_150 = &local_1b0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RaidParty_Setting____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_RaidParty_Setting *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_198[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_RaidParty_Setting *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)local_198);
      puVar3[4] = local_188;
      puVar3[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_188,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_1b8);
    UDS_WindowManager::OpenWindow(pUVar1,PartyCreate,pTVar5);
    pUVar1 = UDS_WindowManager::GetInst();
    if (pUVar1 != (UDS_WindowManager *)0x0) {
      local_1a0[0] = 0.0;
      local_198[0] = (UDS_VM_RaidParty_Setting *)((ulonglong)local_198[0] & 0xffffffff00000000);
      UDS_WindowManager::CloseWindow(pUVar1,RaidPartySetting,(uint *)local_198,local_1a0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_188);
    if ((local_1b0.DelegateSize != 0) &&
       (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b0,0,0,0x10);
      local_1b0.DelegateSize = 0;
    }
    if (local_178 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                 (FDestructionSentinel *)&local_188);
    }
    if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
  }
  return;
}

// OnClickInvitationLink @ 14be95910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_Setting::OnClickInvitationLink
          (UDS_VM_RaidParty_Setting *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartySetting,local_res20,local_res18);
  }
  return;
}

// OnClickInvite @ 14be95950

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_Setting::OnClickInvite
          (UDS_VM_RaidParty_Setting *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  FDS_RaidPartyService::OpenInviteWindow();
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartySetting,local_res20,local_res18);
  }
  return;
}

// OnClickSecession @ 14be97190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_Setting::OnClickSecession
          (UDS_VM_RaidParty_Setting *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  FDS_RaidPartyService::RequestRaidPartyLeave(&local_28);
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartySetting,local_res20,local_res18);
  }
  return;
}

// OnOpenInfomation @ 14be9a250

void __thiscall
UDS_VM_RaidParty_Setting::OnOpenInfomation(UDS_VM_RaidParty_Setting *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  TReferenceControllerBase<1> *pTVar6;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDS_Text local_68;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x70);
    if (pFVar3 == (FDS_ViewModelContext *)0x0) {
      pFVar3 = (FDS_ViewModelContext *)0x0;
    }
    else {
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar3[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 7) = 0;
      *(undefined2 *)((longlong)&pFVar3[2].DerivedStaticStruct + 5) = 0;
      *(undefined1 *)((longlong)&pFVar3[2].DerivedStaticStruct + 7) = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
      pFVar3->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      *(undefined1 *)&pFVar3[1]._padding_ = 0;
      pFVar3[1].DerivedStaticStruct = (UStruct *)0x0;
      pFVar3[1].ViewModelName.ComparisonIndex = 0;
      pFVar3[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[1].ViewModelTemplateKey = 0;
      pFVar3[2]._padding_ = 0;
      *(undefined4 *)&pFVar3[2].DerivedStaticStruct = 0;
      *(undefined1 *)((longlong)&pFVar3[2].DerivedStaticStruct + 4) = 0;
      pFVar3[2].ViewModelName.ComparisonIndex = 0;
      pFVar3[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[2].ViewModelTemplateKey = 0;
      pFVar3[3]._padding_ = 0;
      pFVar3[3].DerivedStaticStruct = (UStruct *)0x0;
    }
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = ::operator_new(0x20);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar4[1].SharedReferenceCount = pFVar3;
      pTVar6 = pTVar4;
    }
    if ((pFVar3 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_PopupTitle::StaticStruct();
    pFVar3->DerivedStaticStruct = (UStruct *)pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_88.Object = pFVar3;
      local_88.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    pFVar3->ViewModelTemplateKey = W_CreatePartyPopup;
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x33453);
    FDS_Text::operator=((FDS_Text *)(pFVar3 + 1),&local_68);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
               local_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = pFVar3;
    local_78.SharedReferenceCount.ReferenceController = pTVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_78,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// OnSetViewModel @ 14bea6150

void __thiscall
UDS_VM_RaidParty_Setting::OnSetViewModel
          (UDS_VM_RaidParty_Setting *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FDS_RaidPartyRepo *pFVar6;
  UObject *pUVar7;
  FDS_RaidPartyMemberInfo *pFVar8;
  FNameEntryId FVar9;
  uint uVar10;
  FWeakObjectPtr local_res10;
  FName local_88;
  int local_80;
  FDS_Text local_78;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar6);
  if (bVar4) {
    UDS_PlayerData::GetMainPlayerData();
    bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
    if (!bVar4) {
      local_78.StringTableID = 0;
      local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_78.StringEnumTableNameID.Number = 0;
      local_78.TimeExpressionType = None;
      local_78.IsExpression = false;
      local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.UniqueString.Data.ArrayNum = 0;
      local_78.UniqueString.Data.ArrayMax = 0;
      local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.FormatArgs.ArrayNum = 0;
      local_78.FormatArgs.ArrayMax = 0;
      local_78.DateTime.Ticks = 0;
      local_78.TimeSpan.Ticks = 0;
      local_78.StringTableType = bVar4;
      FDS_Text::SetTextFromStringTable(&local_78,StringUi,0x33464);
      iVar5 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::TitleText.FieldName;
      FDS_Text::operator=(&this->TitleText,&local_78);
      local_88 = FVar3;
      local_80 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
                 local_78.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
      }
      if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
      }
      iVar5 = FFieldNotificationClassDescriptor::SubTitleVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::SubTitleVisibility.FieldName;
      if (this->SubTitleVisibility != Collapsed) {
        this->SubTitleVisibility = Collapsed;
        local_80 = iVar5;
        local_88 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      }
      local_78.StringTableType = None;
      local_78.StringTableID = 0;
      local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_78.StringEnumTableNameID.Number = 0;
      local_78.TimeExpressionType = None;
      local_78.DateTime.Ticks = 0;
      local_78.TimeSpan.Ticks = 0;
      local_78.IsExpression = false;
      local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.UniqueString.Data.ArrayNum = 0;
      local_78.UniqueString.Data.ArrayMax = 0;
      local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.FormatArgs.ArrayNum = 0;
      local_78.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_78,StringUi,0x33465);
      iVar5 = FFieldNotificationClassDescriptor::InvitationLinkText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::InvitationLinkText.FieldName;
      FDS_Text::operator=(&this->InvitationLinkText,&local_78);
      local_88 = FVar3;
      local_80 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
                 local_78.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
      }
      if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
      }
      local_78.StringTableType = None;
      local_78.StringTableID = 0;
      local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_78.StringEnumTableNameID.Number = 0;
      local_78.TimeExpressionType = None;
      local_78.DateTime.Ticks = 0;
      local_78.TimeSpan.Ticks = 0;
      local_78.IsExpression = false;
      local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.UniqueString.Data.ArrayNum = 0;
      local_78.UniqueString.Data.ArrayMax = 0;
      local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.FormatArgs.ArrayNum = 0;
      local_78.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_78,StringUi,0x33466);
      iVar5 = FFieldNotificationClassDescriptor::InviteText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::InviteText.FieldName;
      FDS_Text::operator=(&this->InviteText,&local_78);
      local_88 = FVar3;
      local_80 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
                 local_78.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
      }
      if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
      }
      local_78.StringTableType = None;
      local_78.StringTableID = 0;
      local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_78.StringEnumTableNameID.Number = 0;
      local_78.TimeExpressionType = None;
      local_78.DateTime.Ticks = 0;
      local_78.TimeSpan.Ticks = 0;
      local_78.IsExpression = false;
      local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.UniqueString.Data.ArrayNum = 0;
      local_78.UniqueString.Data.ArrayMax = 0;
      local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.FormatArgs.ArrayNum = 0;
      local_78.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_78,StringUi,0x33467);
      iVar5 = FFieldNotificationClassDescriptor::SecessionText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::SecessionText.FieldName;
      FDS_Text::operator=(&this->SecessionText,&local_78);
      local_88 = FVar3;
      local_80 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
                 local_78.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
      }
      if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
      }
      local_78.StringTableType = None;
      local_78.StringTableID = 0;
      local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_78.StringEnumTableNameID.Number = 0;
      local_78.TimeExpressionType = None;
      local_78.DateTime.Ticks = 0;
      local_78.TimeSpan.Ticks = 0;
      local_78.IsExpression = false;
      local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.UniqueString.Data.ArrayNum = 0;
      local_78.UniqueString.Data.ArrayMax = 0;
      local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.FormatArgs.ArrayNum = 0;
      local_78.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_78,StringUi,0x33468);
      iVar5 = FFieldNotificationClassDescriptor::InfomationText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::InfomationText.FieldName;
      FDS_Text::operator=(&this->InfomationText,&local_78);
      local_88 = FVar3;
      local_80 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
                 local_78.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
      }
      if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
      }
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      lVar2 = *(longlong *)&pUVar7[6].field_0x8;
      pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar8 = FDS_RaidPartyRepo::GetRaidPartyLeaderMemberInfo(pFVar6);
      iVar5 = FFieldNotificationClassDescriptor::InvitationLinkState.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::InvitationLinkState.FieldName;
      if (pFVar8->PlayerUID == lVar2) {
        if (this->InvitationLinkState != true) {
          this->InvitationLinkState = true;
          local_80 = iVar5;
          local_88 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
        }
        iVar5 = FFieldNotificationClassDescriptor::InviteState.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::InviteState.FieldName;
        if (this->InviteState != true) {
          this->InviteState = true;
          local_80 = iVar5;
          local_88 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
        }
        iVar5 = FFieldNotificationClassDescriptor::SecessionState.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::SecessionState.FieldName;
        if (this->SecessionState != true) {
          this->SecessionState = true;
          local_80 = iVar5;
          local_88 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
        }
        iVar5 = FFieldNotificationClassDescriptor::InfomationState.BitNumber;
        FVar9 = FFieldNotificationClassDescriptor::InfomationState.FieldName.ComparisonIndex.Value;
        uVar10 = FFieldNotificationClassDescriptor::InfomationState.FieldName.Number;
        if (this->InfomationState == true) goto LAB_14bea66d6;
        this->InfomationState = true;
      }
      else {
        if (this->InvitationLinkState != false) {
          this->InvitationLinkState = false;
          local_80 = iVar5;
          local_88 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
        }
        iVar5 = FFieldNotificationClassDescriptor::InviteState.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::InviteState.FieldName;
        if (this->InviteState != false) {
          this->InviteState = false;
          local_80 = iVar5;
          local_88 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
        }
        iVar5 = FFieldNotificationClassDescriptor::SecessionState.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::SecessionState.FieldName;
        if (this->SecessionState != true) {
          this->SecessionState = true;
          local_80 = iVar5;
          local_88 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
        }
        iVar5 = FFieldNotificationClassDescriptor::InfomationState.BitNumber;
        FVar9 = FFieldNotificationClassDescriptor::InfomationState.FieldName.ComparisonIndex.Value;
        uVar10 = FFieldNotificationClassDescriptor::InfomationState.FieldName.Number;
        if (this->InfomationState == false) goto LAB_14bea66d6;
        this->InfomationState = false;
      }
      local_88.Number = uVar10;
      local_88.ComparisonIndex.Value = FVar9.Value;
      local_80 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
  }
LAB_14bea66d6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetInfomationState @ 14beafe90

void __thiscall
UDS_VM_RaidParty_Setting::SetInfomationState(UDS_VM_RaidParty_Setting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InfomationState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InfomationState.FieldName;
  if (this->InfomationState != param_1) {
    this->InfomationState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetInfomationText @ 14beafee0

void __thiscall
UDS_VM_RaidParty_Setting::SetInfomationText(UDS_VM_RaidParty_Setting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InfomationText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InfomationText.FieldName;
  FDS_Text::operator=(&this->InfomationText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetInvitationLinkState @ 14beb10d0

void __thiscall
UDS_VM_RaidParty_Setting::SetInvitationLinkState(UDS_VM_RaidParty_Setting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InvitationLinkState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InvitationLinkState.FieldName;
  if (this->InvitationLinkState != param_1) {
    this->InvitationLinkState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetInvitationLinkText @ 14beb1120

void __thiscall
UDS_VM_RaidParty_Setting::SetInvitationLinkText(UDS_VM_RaidParty_Setting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InvitationLinkText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InvitationLinkText.FieldName;
  FDS_Text::operator=(&this->InvitationLinkText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetInviteState @ 14beb1180

void __thiscall
UDS_VM_RaidParty_Setting::SetInviteState(UDS_VM_RaidParty_Setting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InviteState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InviteState.FieldName;
  if (this->InviteState != param_1) {
    this->InviteState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetInviteText @ 14beb11d0

void __thiscall
UDS_VM_RaidParty_Setting::SetInviteText(UDS_VM_RaidParty_Setting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InviteText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InviteText.FieldName;
  FDS_Text::operator=(&this->InviteText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSecessionState @ 14beb41a0

void __thiscall
UDS_VM_RaidParty_Setting::SetSecessionState(UDS_VM_RaidParty_Setting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SecessionState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SecessionState.FieldName;
  if (this->SecessionState != param_1) {
    this->SecessionState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSecessionText @ 14beb41f0

void __thiscall
UDS_VM_RaidParty_Setting::SetSecessionText(UDS_VM_RaidParty_Setting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::SecessionText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SecessionText.FieldName;
  FDS_Text::operator=(&this->SecessionText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSubTitleVisibility @ 14beb4820

void __thiscall
UDS_VM_RaidParty_Setting::SetSubTitleVisibility
          (UDS_VM_RaidParty_Setting *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SubTitleVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SubTitleVisibility.FieldName;
  if (this->SubTitleVisibility != param_1) {
    this->SubTitleVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTitleText @ 14beb4ba0

void __thiscall
UDS_VM_RaidParty_Setting::SetTitleText(UDS_VM_RaidParty_Setting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

