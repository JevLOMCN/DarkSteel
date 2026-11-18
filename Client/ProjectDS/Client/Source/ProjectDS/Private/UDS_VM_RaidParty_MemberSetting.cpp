// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 41

// SetTitleText_WrapperImpl @ 14b6d2e80

void __cdecl UDS_VM_RaidParty_MemberSetting::SetTitleText_WrapperImpl(void *param_1,void *param_2)

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

// SetMemberName_WrapperImpl @ 14b6d2e90

void __cdecl UDS_VM_RaidParty_MemberSetting::SetMemberName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::MemberName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::MemberName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xf0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xf0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xf0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xf8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetViewInfoText_WrapperImpl @ 14b6d2ea0

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetViewInfoText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ViewInfoText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ViewInfoText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x100),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetPartyChangeText_WrapperImpl @ 14b6d2f10

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetPartyChangeText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::PartyChangeText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::PartyChangeText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x150),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetExileText_WrapperImpl @ 14b6d2f20

void __cdecl UDS_VM_RaidParty_MemberSetting::SetExileText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ExileText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ExileText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1a0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetViewInfoState_WrapperImpl @ 14b6d2f30

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetViewInfoState_WrapperImpl(void *param_1,void *param_2)

{
  SetViewInfoState(param_1,*(bool *)param_2);
  return;
}

// SetPartyChangeState_WrapperImpl @ 14b6d2f40

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetPartyChangeState_WrapperImpl(void *param_1,void *param_2)

{
  SetPartyChangeState(param_1,*(bool *)param_2);
  return;
}

// SetExileState_WrapperImpl @ 14b6d2f50

void __cdecl UDS_VM_RaidParty_MemberSetting::SetExileState_WrapperImpl(void *param_1,void *param_2)

{
  SetExileState(param_1,*(bool *)param_2);
  return;
}

// SetMandateState_WrapperImpl @ 14b6d2f60

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetMandateState_WrapperImpl(void *param_1,void *param_2)

{
  SetMandateState(param_1,*(bool *)param_2);
  return;
}

// SetClickViewInfo_WrapperImpl @ 14b6d2f70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetClickViewInfo_WrapperImpl(void *param_1,void *param_2)

{
  FDS_RaidPartyRepo *pFVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  UDS_WindowManager *this;
  float afStackX_8 [4];
  uint auStackX_18 [4];
  
  pFVar1 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar1);
  pFVar1 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar2 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex
                     (pFVar1,*(int *)((longlong)param_1 + 0x2f8));
  if (0 < pFVar2->PlayerUID) {
    this = UDS_WindowManager::GetInst();
    if (this != (UDS_WindowManager *)0x0) {
      afStackX_8[0] = 0.0;
      auStackX_18[0] = 0;
      UDS_WindowManager::CloseWindow(this,RaidPartyMemberSetting,auStackX_18,afStackX_8);
    }
  }
  return;
}

// SetClickPartyChange_WrapperImpl @ 14b6d2f80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetClickPartyChange_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  UDS_WindowManager *this;
  longlong *plVar3;
  float afStackX_8 [2];
  uint auStackX_18 [4];
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x300),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0x310) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x308) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x308) + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x2f8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0x300),&FStack_28);
      if (*(int *)((longlong)param_1 + 0x310) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)param_1 + 0x308);
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar1,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_8[0] = 0.0;
    auStackX_18[0] = 0;
    UDS_WindowManager::CloseWindow(this,RaidPartyMemberSetting,auStackX_18,afStackX_8);
  }
  return;
}

// SetClickExile_WrapperImpl @ 14b6d2f90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RaidParty_MemberSetting::SetClickExile_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FDS_RaidPartyRepo *this;
  FDS_RaidPartyMemberInfo *pFVar2;
  UDS_WindowManager *this_00;
  float afStackX_8 [4];
  uint auStackX_18 [4];
  
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar2 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex
                     (this,*(int *)((longlong)param_1 + 0x2f8));
  if (0 < pFVar2->PlayerUID) {
    bVar1 = FDS_RaidPartyService::OpenRaidPartyKickPopup(pFVar2->PlayerUID);
    if (bVar1) {
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 != (UDS_WindowManager *)0x0) {
        afStackX_8[0] = 0.0;
        auStackX_18[0] = 0;
        UDS_WindowManager::CloseWindow(this_00,RaidPartyMemberSetting,auStackX_18,afStackX_8);
      }
    }
  }
  return;
}

// SetClickMandate_WrapperImpl @ 14b6d2fa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetClickMandate_WrapperImpl(void *param_1,void *param_2)

{
  FDS_RaidPartyRepo *this;
  FDS_RaidPartyMemberInfo *pFVar1;
  UDS_WindowManager *this_00;
  float afStackX_8 [4];
  uint auStackX_18 [4];
  
  this = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex
                     (this,*(int *)((longlong)param_1 + 0x2f8));
  if (0 < pFVar1->PlayerUID) {
    FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup(pFVar1->PlayerUID);
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      afStackX_8[0] = 0.0;
      auStackX_18[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,RaidPartyMemberSetting,auStackX_18,afStackX_8);
    }
  }
  return;
}

// SetClickExit_WrapperImpl @ 14b6d2fb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RaidParty_MemberSetting::SetClickExit_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,RaidPartyMemberSetting,auStackX_20,afStackX_18);
  }
  return;
}

// SetSubTitleVisibility_WrapperImpl @ 14b6d2fc0

void __cdecl
UDS_VM_RaidParty_MemberSetting::SetSubTitleVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetSubTitleVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b6d2fd0

UClass * __cdecl UDS_VM_RaidParty_MemberSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidParty_MemberSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidParty_MemberSetting",
               &Z_Registration_Info_UClass_UDS_VM_RaidParty_MemberSetting.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidParty_MemberSetting,0x318,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_RaidParty_MemberSetting>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidParty_MemberSetting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidParty_MemberSetting.InnerSingleton;
}

// UDS_VM_RaidParty_MemberSetting @ 14b6d8000

UDS_VM_RaidParty_MemberSetting * __thiscall
UDS_VM_RaidParty_MemberSetting::UDS_VM_RaidParty_MemberSetting
          (UDS_VM_RaidParty_MemberSetting *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TitleText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidParty_MemberSetting__6B_;
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
  FText::FText(&this->MemberName);
  (this->ViewInfoText).StringTableType = None;
  (this->ViewInfoText).StringTableID = 0;
  (this->ViewInfoText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ViewInfoText).StringEnumTableNameID.Number = 0;
  (this->ViewInfoText).DateTime.Ticks = 0;
  (this->ViewInfoText).TimeSpan.Ticks = 0;
  (this->ViewInfoText).TimeExpressionType = None;
  (this->ViewInfoText).IsExpression = false;
  (this->ViewInfoText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewInfoText).UniqueString.Data.ArrayNum = 0;
  (this->ViewInfoText).UniqueString.Data.ArrayMax = 0;
  (this->ViewInfoText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewInfoText).FormatArgs.ArrayNum = 0;
  (this->ViewInfoText).FormatArgs.ArrayMax = 0;
  (this->PartyChangeText).StringTableType = None;
  (this->PartyChangeText).StringTableID = 0;
  (this->PartyChangeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PartyChangeText).StringEnumTableNameID.Number = 0;
  (this->PartyChangeText).DateTime.Ticks = 0;
  (this->PartyChangeText).TimeSpan.Ticks = 0;
  (this->PartyChangeText).TimeExpressionType = None;
  (this->PartyChangeText).IsExpression = false;
  (this->PartyChangeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyChangeText).UniqueString.Data.ArrayNum = 0;
  (this->PartyChangeText).UniqueString.Data.ArrayMax = 0;
  (this->PartyChangeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyChangeText).FormatArgs.ArrayNum = 0;
  (this->PartyChangeText).FormatArgs.ArrayMax = 0;
  (this->ExileText).StringTableType = None;
  (this->ExileText).StringTableID = 0;
  (this->ExileText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExileText).StringEnumTableNameID.Number = 0;
  (this->ExileText).DateTime.Ticks = 0;
  (this->ExileText).TimeSpan.Ticks = 0;
  (this->ExileText).TimeExpressionType = None;
  (this->ExileText).IsExpression = false;
  (this->ExileText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExileText).UniqueString.Data.ArrayNum = 0;
  (this->ExileText).UniqueString.Data.ArrayMax = 0;
  (this->ExileText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExileText).FormatArgs.ArrayNum = 0;
  (this->ExileText).FormatArgs.ArrayMax = 0;
  (this->MandateText).StringTableType = None;
  (this->MandateText).StringTableID = 0;
  (this->MandateText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MandateText).StringEnumTableNameID.Number = 0;
  (this->MandateText).DateTime.Ticks = 0;
  (this->MandateText).TimeSpan.Ticks = 0;
  (this->MandateText).TimeExpressionType = None;
  (this->MandateText).IsExpression = false;
  (this->MandateText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MandateText).UniqueString.Data.ArrayNum = 0;
  (this->MandateText).UniqueString.Data.ArrayMax = 0;
  (this->MandateText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MandateText).FormatArgs.ArrayNum = 0;
  (this->MandateText).FormatArgs.ArrayMax = 0;
  (this->ClickViewInfo)._padding_ = '\0';
  (this->ClickViewInfo).bIsCustomSelected = false;
  (this->ClickViewInfo).bIsLacked = false;
  (this->ClickViewInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickViewInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickViewInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickViewInfo).Delegate.field_0x10 = 0;
  (this->ClickPartyChange)._padding_ = '\0';
  (this->ClickPartyChange).bIsCustomSelected = false;
  (this->ClickPartyChange).bIsLacked = false;
  (this->ClickPartyChange).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyChange).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyChange).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyChange).Delegate.field_0x10 = 0;
  (this->ClickExile)._padding_ = '\0';
  (this->ClickExile).bIsCustomSelected = false;
  (this->ClickExile).bIsLacked = false;
  (this->ClickExile).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExile).Delegate = 0;
  *(undefined8 *)&(this->ClickExile).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExile).Delegate.field_0x10 = 0;
  (this->ClickMandate)._padding_ = '\0';
  (this->ClickMandate).bIsCustomSelected = false;
  (this->ClickMandate).bIsLacked = false;
  (this->ClickMandate).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMandate).Delegate = 0;
  *(undefined8 *)&(this->ClickMandate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMandate).Delegate.field_0x10 = 0;
  (this->ClickExit)._padding_ = '\0';
  (this->ClickExit).bIsCustomSelected = false;
  (this->ClickExit).bIsLacked = false;
  (this->ClickExit).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExit).Delegate = 0;
  *(undefined8 *)&(this->ClickExit).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExit).Delegate.field_0x10 = 0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  *(undefined8 *)&this->OnDropModeChangeDelegate = 0;
  *(undefined8 *)&(this->OnDropModeChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropModeChangeDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_RaidParty_MemberSetting @ 14b6d8270

UDS_VM_RaidParty_MemberSetting * __thiscall
UDS_VM_RaidParty_MemberSetting::UDS_VM_RaidParty_MemberSetting
          (UDS_VM_RaidParty_MemberSetting *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TitleText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidParty_MemberSetting__6B_;
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
  FText::FText(&this->MemberName);
  (this->ViewInfoText).StringTableType = None;
  (this->ViewInfoText).StringTableID = 0;
  (this->ViewInfoText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ViewInfoText).StringEnumTableNameID.Number = 0;
  (this->ViewInfoText).DateTime.Ticks = 0;
  (this->ViewInfoText).TimeSpan.Ticks = 0;
  (this->ViewInfoText).TimeExpressionType = None;
  (this->ViewInfoText).IsExpression = false;
  (this->ViewInfoText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewInfoText).UniqueString.Data.ArrayNum = 0;
  (this->ViewInfoText).UniqueString.Data.ArrayMax = 0;
  (this->ViewInfoText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewInfoText).FormatArgs.ArrayNum = 0;
  (this->ViewInfoText).FormatArgs.ArrayMax = 0;
  (this->PartyChangeText).StringTableType = None;
  (this->PartyChangeText).StringTableID = 0;
  (this->PartyChangeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PartyChangeText).StringEnumTableNameID.Number = 0;
  (this->PartyChangeText).DateTime.Ticks = 0;
  (this->PartyChangeText).TimeSpan.Ticks = 0;
  (this->PartyChangeText).TimeExpressionType = None;
  (this->PartyChangeText).IsExpression = false;
  (this->PartyChangeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyChangeText).UniqueString.Data.ArrayNum = 0;
  (this->PartyChangeText).UniqueString.Data.ArrayMax = 0;
  (this->PartyChangeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyChangeText).FormatArgs.ArrayNum = 0;
  (this->PartyChangeText).FormatArgs.ArrayMax = 0;
  (this->ExileText).StringTableType = None;
  (this->ExileText).StringTableID = 0;
  (this->ExileText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExileText).StringEnumTableNameID.Number = 0;
  (this->ExileText).DateTime.Ticks = 0;
  (this->ExileText).TimeSpan.Ticks = 0;
  (this->ExileText).TimeExpressionType = None;
  (this->ExileText).IsExpression = false;
  (this->ExileText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExileText).UniqueString.Data.ArrayNum = 0;
  (this->ExileText).UniqueString.Data.ArrayMax = 0;
  (this->ExileText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExileText).FormatArgs.ArrayNum = 0;
  (this->ExileText).FormatArgs.ArrayMax = 0;
  (this->MandateText).StringTableType = None;
  (this->MandateText).StringTableID = 0;
  (this->MandateText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MandateText).StringEnumTableNameID.Number = 0;
  (this->MandateText).DateTime.Ticks = 0;
  (this->MandateText).TimeSpan.Ticks = 0;
  (this->MandateText).TimeExpressionType = None;
  (this->MandateText).IsExpression = false;
  (this->MandateText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MandateText).UniqueString.Data.ArrayNum = 0;
  (this->MandateText).UniqueString.Data.ArrayMax = 0;
  (this->MandateText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MandateText).FormatArgs.ArrayNum = 0;
  (this->MandateText).FormatArgs.ArrayMax = 0;
  (this->ClickViewInfo)._padding_ = '\0';
  (this->ClickViewInfo).bIsCustomSelected = false;
  (this->ClickViewInfo).bIsLacked = false;
  (this->ClickViewInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickViewInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickViewInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickViewInfo).Delegate.field_0x10 = 0;
  (this->ClickPartyChange)._padding_ = '\0';
  (this->ClickPartyChange).bIsCustomSelected = false;
  (this->ClickPartyChange).bIsLacked = false;
  (this->ClickPartyChange).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyChange).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyChange).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyChange).Delegate.field_0x10 = 0;
  (this->ClickExile)._padding_ = '\0';
  (this->ClickExile).bIsCustomSelected = false;
  (this->ClickExile).bIsLacked = false;
  (this->ClickExile).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExile).Delegate = 0;
  *(undefined8 *)&(this->ClickExile).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExile).Delegate.field_0x10 = 0;
  (this->ClickMandate)._padding_ = '\0';
  (this->ClickMandate).bIsCustomSelected = false;
  (this->ClickMandate).bIsLacked = false;
  (this->ClickMandate).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMandate).Delegate = 0;
  *(undefined8 *)&(this->ClickMandate).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMandate).Delegate.field_0x10 = 0;
  (this->ClickExit)._padding_ = '\0';
  (this->ClickExit).bIsCustomSelected = false;
  (this->ClickExit).bIsLacked = false;
  (this->ClickExit).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExit).Delegate = 0;
  *(undefined8 *)&(this->ClickExit).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExit).Delegate.field_0x10 = 0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  *(undefined8 *)&this->OnDropModeChangeDelegate = 0;
  *(undefined8 *)&(this->OnDropModeChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropModeChangeDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_RaidParty_MemberSetting @ 14b6da150

void __thiscall
UDS_VM_RaidParty_MemberSetting::~UDS_VM_RaidParty_MemberSetting
          (UDS_VM_RaidParty_MemberSetting *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidParty_MemberSetting__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropModeChangeDelegate);
  pvVar1 = *(void **)&(this->OnDropModeChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropModeChangeDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickExit).Delegate);
  pvVar1 = *(void **)&(this->ClickExit).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickExit).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMandate).Delegate);
  pvVar1 = *(void **)&(this->ClickMandate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMandate).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickExile).Delegate);
  pvVar1 = *(void **)&(this->ClickExile).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickExile).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyChange).Delegate);
  pvVar1 = *(void **)&(this->ClickPartyChange).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyChange).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickViewInfo).Delegate);
  pvVar1 = *(void **)&(this->ClickViewInfo).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickViewInfo).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MandateText).FormatArgs.AllocatorInstance.Data,
             (this->MandateText).FormatArgs.ArrayNum);
  pFVar2 = (this->MandateText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MandateText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ExileText).FormatArgs.AllocatorInstance.Data,
             (this->ExileText).FormatArgs.ArrayNum);
  pFVar2 = (this->ExileText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExileText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PartyChangeText).FormatArgs.AllocatorInstance.Data,
             (this->PartyChangeText).FormatArgs.ArrayNum);
  pFVar2 = (this->PartyChangeText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PartyChangeText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ViewInfoText).FormatArgs.AllocatorInstance.Data,
             (this->ViewInfoText).FormatArgs.ArrayNum);
  pFVar2 = (this->ViewInfoText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ViewInfoText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->MemberName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
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

// GetFieldNotificationDescriptor @ 14b6dcc20

IClassDescriptor * __thiscall
UDS_VM_RaidParty_MemberSetting::GetFieldNotificationDescriptor(UDS_VM_RaidParty_MemberSetting *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RaidParty_MemberSetting::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd680

UClass * __cdecl UDS_VM_RaidParty_MemberSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidParty_MemberSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidParty_MemberSetting",
               &Z_Registration_Info_UClass_UDS_VM_RaidParty_MemberSetting.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidParty_MemberSetting,0x318,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_RaidParty_MemberSetting>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidParty_MemberSetting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidParty_MemberSetting.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RaidParty_MemberSetting @ 14b6ddef0

void __cdecl
UDS_VM_RaidParty_MemberSetting::StaticRegisterNativesUDS_VM_RaidParty_MemberSetting(void)

{
  return;
}

// CloseWidget @ 14be78860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RaidParty_MemberSetting::CloseWidget(UDS_VM_RaidParty_MemberSetting *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartyMemberSetting,local_res18,local_res10);
  }
  return;
}

// InitViewModel @ 14be8e560

void __thiscall UDS_VM_RaidParty_MemberSetting::InitViewModel(UDS_VM_RaidParty_MemberSetting *this)

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

// OnClickExile @ 14be946f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_MemberSetting::OnClickExile
          (UDS_VM_RaidParty_MemberSetting *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar2;
  UDS_WindowManager *this_01;
  float local_res8 [4];
  uint local_res18 [4];
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar2 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->SlotID);
  if (0 < pFVar2->PlayerUID) {
    bVar1 = FDS_RaidPartyService::OpenRaidPartyKickPopup(pFVar2->PlayerUID);
    if (bVar1) {
      this_01 = UDS_WindowManager::GetInst();
      if (this_01 != (UDS_WindowManager *)0x0) {
        local_res8[0] = 0.0;
        local_res18[0] = 0;
        UDS_WindowManager::CloseWindow(this_01,RaidPartyMemberSetting,local_res18,local_res8);
      }
    }
  }
  return;
}

// OnClickExit @ 14be94760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_MemberSetting::OnClickExit
          (UDS_VM_RaidParty_MemberSetting *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartyMemberSetting,local_res20,local_res18);
  }
  return;
}

// OnClickMandate @ 14be95f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_MemberSetting::OnClickMandate
          (UDS_VM_RaidParty_MemberSetting *this,FDS_ButtonEventField *param_1)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  UDS_WindowManager *this_01;
  float local_res8 [4];
  uint local_res18 [4];
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->SlotID);
  if (0 < pFVar1->PlayerUID) {
    FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup(pFVar1->PlayerUID);
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 != (UDS_WindowManager *)0x0) {
      local_res8[0] = 0.0;
      local_res18[0] = 0;
      UDS_WindowManager::CloseWindow(this_01,RaidPartyMemberSetting,local_res18,local_res8);
    }
  }
  return;
}

// OnClickPartyChange @ 14be96240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_MemberSetting::OnClickPartyChange
          (UDS_VM_RaidParty_MemberSetting *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  longlong *plVar3;
  float local_res8 [2];
  uint local_res18 [4];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDropModeChangeDelegate,&local_28);
  if ((*(int *)&(this->OnDropModeChangeDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnDropModeChangeDelegate).field_0x8, plVar3 != (longlong *)0x0)
     ) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      iVar1 = this->SlotID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnDropModeChangeDelegate,&local_28);
      if (*(int *)&(this->OnDropModeChangeDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnDropModeChangeDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,iVar1,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartyMemberSetting,local_res18,local_res8);
  }
  return;
}

// OnClickViewInfo @ 14be975a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_MemberSetting::OnClickViewInfo
          (UDS_VM_RaidParty_MemberSetting *this,FDS_ButtonEventField *param_1)

{
  FDS_RaidPartyRepo *pFVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  UDS_WindowManager *this_00;
  float local_res8 [4];
  uint local_res18 [4];
  
  pFVar1 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar1);
  pFVar1 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar2 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(pFVar1,this->SlotID);
  if (0 < pFVar2->PlayerUID) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_res8[0] = 0.0;
      local_res18[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,RaidPartyMemberSetting,local_res18,local_res8);
    }
  }
  return;
}

// OnSetViewModel @ 14bea5670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidParty_MemberSetting::OnSetViewModel
          (UDS_VM_RaidParty_MemberSetting *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  FName FVar5;
  int iVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  EDS_RaidPartyState EVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  FDS_RaidPartyRepo *pFVar12;
  FDS_RaidPartyMemberInfo *pFVar13;
  FDS_RaidPartyMemberInfo *pFVar14;
  FName FVar15;
  FDS_DungeonBaseTableRow *pFVar16;
  undefined1 auStackY_4e8 [32];
  FName local_4a8;
  int local_4a0;
  FName local_498;
  int local_490;
  FName local_488;
  int local_480;
  undefined1 local_478 [8];
  ForAnyElementType local_470;
  int local_468;
  int local_460;
  FName local_458;
  int local_450;
  FDS_Text local_448;
  TSharedPtr<FDS_ViewModelContext_RaidPartyMemberSetting,1> local_3f8;
  undefined1 local_3e8 [8];
  TSharedPtr<FDS_ViewModelContext,1> *local_3e0;
  FName local_3d8;
  int local_3d0;
  FName local_3c8;
  int local_3c0;
  FName local_3b8;
  int local_3b0;
  FName local_3a8;
  int local_3a0;
  FName local_398;
  int local_390;
  FName local_388;
  int local_380;
  FName local_378;
  int local_370;
  FName local_368;
  int local_360;
  FDS_Text local_358;
  FDS_Text local_308;
  FDS_Text local_2b8;
  FDS_Text local_268;
  FDS_Text local_218;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  FDestructionSentinel local_1b8;
  FText local_1a0;
  FReadAccessScope local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3e0 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_1c8.Object = param_1->Object;
  local_1c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RaidPartyMemberSetting>(&local_3f8,&local_1c8);
  if (local_3f8.Object == (FDS_ViewModelContext_RaidPartyMemberSetting *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_RaidParty_MemberSetting::OnSetViewModel",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_178.Ptr,0x23,L"context is nullptr");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f8.SharedReferenceCount.ReferenceController);
  }
  else {
    this->SlotID = (local_3f8.Object)->SlotIndex;
    if (&(local_3f8.Object)->OnDropModeChangeDelegate != &this->OnDropModeChangeDelegate) {
      local_478 = (undefined1  [8])0x0;
      local_470.Data = (FScriptContainerElement *)0x0;
      local_468 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_3f8.Object)->OnDropModeChangeDelegate,&local_190);
      if ((*(int *)&((local_3f8.Object)->OnDropModeChangeDelegate).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&((local_3f8.Object)->OnDropModeChangeDelegate).field_0x8,
         plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_478);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_190);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropModeChangeDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
                 (FWriteAccessScope *)&local_1b8);
      if ((local_468 != 0) && (local_470.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_470.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_470,0,0,0x10);
        local_468 = 0;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (local_470.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_478);
    }
    iVar10 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    local_358.StringTableType = StringUi;
    local_358.DateTime.Ticks = 0;
    local_358.TimeSpan.Ticks = 0;
    local_358.StringTableID = 0x33464;
    local_358.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_358.StringEnumTableNameID.Number = 0;
    local_358.TimeExpressionType = None;
    local_358.IsExpression = false;
    local_358.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.UniqueString.Data.ArrayNum = 0;
    local_358.UniqueString.Data.ArrayMax = 0;
    local_358.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.FormatArgs.ArrayNum = 0;
    local_358.FormatArgs.ArrayMax = 0;
    FDS_Text::operator=(&this->TitleText,&local_358);
    local_3d8 = FVar5;
    local_3d0 = iVar10;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3d8);
    FVar7.Data = local_358.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_358.FormatArgs.AllocatorInstance.Data,
               local_358.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar7.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    if (local_358.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar10 = FFieldNotificationClassDescriptor::SubTitleVisibility.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::SubTitleVisibility.FieldName;
    if (this->SubTitleVisibility != Collapsed) {
      this->SubTitleVisibility = Collapsed;
      local_3c0 = iVar10;
      local_3c8 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3c8);
    }
    iVar10 = FFieldNotificationClassDescriptor::ViewInfoText.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::ViewInfoText.FieldName;
    local_308.StringTableType = StringUi;
    local_308.DateTime.Ticks = 0;
    local_308.TimeSpan.Ticks = 0;
    local_308.StringTableID = 0x3346d;
    local_308.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_308.StringEnumTableNameID.Number = 0;
    local_308.TimeExpressionType = None;
    local_308.IsExpression = false;
    local_308.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.UniqueString.Data.ArrayNum = 0;
    local_308.UniqueString.Data.ArrayMax = 0;
    local_308.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.FormatArgs.ArrayNum = 0;
    local_308.FormatArgs.ArrayMax = 0;
    FDS_Text::operator=(&this->ViewInfoText,&local_308);
    local_3b8 = FVar5;
    local_3b0 = iVar10;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3b8);
    FVar7.Data = local_308.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_308.FormatArgs.AllocatorInstance.Data,
               local_308.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar7.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    if (local_308.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar10 = FFieldNotificationClassDescriptor::PartyChangeText.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::PartyChangeText.FieldName;
    local_2b8.StringTableType = StringUi;
    local_2b8.DateTime.Ticks = 0;
    local_2b8.TimeSpan.Ticks = 0;
    local_2b8.StringTableID = 0x3346f;
    local_2b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2b8.StringEnumTableNameID.Number = 0;
    local_2b8.TimeExpressionType = None;
    local_2b8.IsExpression = false;
    local_2b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.UniqueString.Data.ArrayNum = 0;
    local_2b8.UniqueString.Data.ArrayMax = 0;
    local_2b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.FormatArgs.ArrayNum = 0;
    local_2b8.FormatArgs.ArrayMax = 0;
    FDS_Text::operator=(&this->PartyChangeText,&local_2b8);
    local_3a8 = FVar5;
    local_3a0 = iVar10;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3a8);
    FVar7.Data = local_2b8.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data,
               local_2b8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar7.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    if (local_2b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar10 = FFieldNotificationClassDescriptor::ExileText.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::ExileText.FieldName;
    local_268.StringTableType = StringUi;
    local_268.DateTime.Ticks = 0;
    local_268.TimeSpan.Ticks = 0;
    local_268.StringTableID = 0x33470;
    local_268.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_268.StringEnumTableNameID.Number = 0;
    local_268.TimeExpressionType = None;
    local_268.IsExpression = false;
    local_268.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.UniqueString.Data.ArrayNum = 0;
    local_268.UniqueString.Data.ArrayMax = 0;
    local_268.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.FormatArgs.ArrayNum = 0;
    local_268.FormatArgs.ArrayMax = 0;
    FDS_Text::operator=(&this->ExileText,&local_268);
    local_398 = FVar5;
    local_390 = iVar10;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_398);
    FVar7.Data = local_268.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data,
               local_268.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar7.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    if (local_268.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar10 = FFieldNotificationClassDescriptor::MandateText.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MandateText.FieldName;
    local_218.StringTableType = StringUi;
    local_218.DateTime.Ticks = 0;
    local_218.TimeSpan.Ticks = 0;
    local_218.StringTableID = 0x33471;
    local_218.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_218.StringEnumTableNameID.Number = 0;
    local_218.TimeExpressionType = None;
    local_218.IsExpression = false;
    local_218.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.UniqueString.Data.ArrayNum = 0;
    local_218.UniqueString.Data.ArrayMax = 0;
    local_218.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FormatArgs.ArrayNum = 0;
    local_218.FormatArgs.ArrayMax = 0;
    FDS_Text::operator=(&this->MandateText,&local_218);
    local_388 = FVar5;
    local_380 = iVar10;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_388);
    FVar7.Data = local_218.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_218.FormatArgs.AllocatorInstance.Data,
               local_218.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar7.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    if (local_218.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.UniqueString.Data.AllocatorInstance.Data);
    }
    pFVar12 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar8 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar12);
    iVar10 = FFieldNotificationClassDescriptor::ViewInfoState.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::ViewInfoState.FieldName;
    if (bVar8) {
      pFVar12 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar13 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar12);
      pFVar12 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar14 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(pFVar12,this->SlotID);
      if (pFVar14->PlayerUID < 1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3f8.SharedReferenceCount.ReferenceController);
      }
      else {
        pFVar12 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        local_488 = (FName)pFVar13->PlayerUID;
        local_498 = (FName)(pFVar12->RaidPartyInfo).LeaderUID;
        pFVar12 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        EVar9 = FDS_RaidPartyInfo::GetRaidPartyState(&pFVar12->RaidPartyInfo);
        iVar10 = FFieldNotificationClassDescriptor::SubTitleVisibility.BitNumber;
        FVar5 = FFieldNotificationClassDescriptor::SubTitleVisibility.FieldName;
        if (this->SubTitleVisibility != SelfHitTestInvisible) {
          this->SubTitleVisibility = SelfHitTestInvisible;
          local_450 = iVar10;
          local_458 = FVar5;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_458);
        }
        FVar15 = (FName)FText::FromString(&local_1a0,&pFVar14->NickName);
        FVar5 = FFieldNotificationClassDescriptor::MemberName.FieldName;
        local_460 = FFieldNotificationClassDescriptor::MemberName.BitNumber;
        local_4a8 = FVar15;
        bVar8 = FText::IdenticalTo(&this->MemberName,(FText *)FVar15,None);
        if (!bVar8) {
          pIVar3 = *(ITextData **)FVar15;
          pIVar4 = (this->MemberName).TextData.Reference;
          if (pIVar4 != pIVar3) {
            (this->MemberName).TextData.Reference = pIVar3;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_3e8);
            }
            if (pIVar4 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
            }
          }
          FVar15 = local_4a8;
          local_4a8 = FVar5;
          (this->MemberName).Flags = *(uint *)((longlong)FVar15 + 8);
          local_4a0 = local_460;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4a8);
        }
        if (local_1a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
        }
        iVar10 = FFieldNotificationClassDescriptor::ViewInfoState.BitNumber;
        FVar5 = FFieldNotificationClassDescriptor::ViewInfoState.FieldName;
        if (this->ViewInfoState != true) {
          this->ViewInfoState = true;
          local_370 = iVar10;
          local_378 = FVar5;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_378);
        }
        pFVar12 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
        pFVar16 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar12->RaidPartyInfo).DungeonId,true)
        ;
        if ((local_498 == local_488) && (EVar9 == Waiting)) {
          local_448.StringTableType = StringUi;
          local_448.StringTableID = 0x33470;
          local_448.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_448.StringEnumTableNameID.Number = 0;
          local_448.DateTime.Ticks = 0;
          local_448.TimeSpan.Ticks = 0;
          local_448.TimeExpressionType = None;
          local_448.IsExpression = false;
          local_448.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_448.UniqueString.Data.ArrayNum = 0;
          local_448.UniqueString.Data.ArrayMax = 0;
          local_448.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_448.FormatArgs.ArrayNum = 0;
          local_448.FormatArgs.ArrayMax = 0;
          SetExileText(this,&local_448);
          FVar7.Data = local_448.FormatArgs.AllocatorInstance.Data;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_448.FormatArgs.AllocatorInstance.Data,
                     local_448.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)FVar7.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(FVar7.Data);
          }
          if (local_448.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_448.UniqueString.Data.AllocatorInstance.Data);
          }
          SetPartyChangeState(this,pFVar16->DungeonType == Raid);
          SetExileState(this,pFVar14->PlayerUID != pFVar13->PlayerUID);
          SetMandateState(this,pFVar14->PlayerUID != pFVar13->PlayerUID);
        }
        else {
          local_448.StringTableType = StringUi;
          local_448.StringTableID = 0x33483;
          local_448.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_448.StringEnumTableNameID.Number = 0;
          local_448.DateTime.Ticks = 0;
          local_448.TimeSpan.Ticks = 0;
          local_448.TimeExpressionType = None;
          local_448.IsExpression = false;
          local_448.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_448.UniqueString.Data.ArrayNum = 0;
          local_448.UniqueString.Data.ArrayMax = 0;
          local_448.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_448.FormatArgs.ArrayNum = 0;
          local_448.FormatArgs.ArrayMax = 0;
          SetExileText(this,&local_448);
          FVar7.Data = local_448.FormatArgs.AllocatorInstance.Data;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_448.FormatArgs.AllocatorInstance.Data,
                     local_448.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)FVar7.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(FVar7.Data);
          }
          if (local_448.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_448.UniqueString.Data.AllocatorInstance.Data);
          }
          iVar10 = FFieldNotificationClassDescriptor::PartyChangeState.BitNumber;
          FVar5 = FFieldNotificationClassDescriptor::PartyChangeState.FieldName;
          if (this->PartyChangeState != false) {
            this->PartyChangeState = false;
            local_480 = iVar10;
            local_488 = FVar5;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_488);
          }
          if (pFVar16->DungeonType == Raid) {
            iVar10 = DS_CommonDataHelper::RequiredVotesForKick12();
          }
          else {
            iVar10 = DS_CommonDataHelper::RequiredVotesForKick4();
          }
          iVar6 = FFieldNotificationClassDescriptor::ExileState.BitNumber;
          FVar5 = FFieldNotificationClassDescriptor::ExileState.FieldName;
          if (pFVar14->PlayerUID == pFVar13->PlayerUID) {
            if (this->ExileState != false) {
              this->ExileState = false;
              local_490 = iVar6;
              local_498 = FVar5;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_498);
            }
          }
          else {
            pFVar12 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
            SetExileState(this,iVar10 <= (pFVar12->RaidPartyInfo).MemberCount);
          }
          iVar10 = FFieldNotificationClassDescriptor::MandateState.BitNumber;
          FVar5 = FFieldNotificationClassDescriptor::MandateState.FieldName;
          if (this->MandateState != false) {
            this->MandateState = false;
            local_360 = iVar10;
            local_368 = FVar5;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_368);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3f8.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      if (this->ViewInfoState != false) {
        this->ViewInfoState = false;
        local_480 = iVar10;
        local_488 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_488);
      }
      iVar10 = FFieldNotificationClassDescriptor::PartyChangeState.BitNumber;
      FVar5 = FFieldNotificationClassDescriptor::PartyChangeState.FieldName;
      if (this->PartyChangeState != false) {
        this->PartyChangeState = false;
        local_490 = iVar10;
        local_498 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_498);
      }
      iVar10 = FFieldNotificationClassDescriptor::ExileState.BitNumber;
      FVar5 = FFieldNotificationClassDescriptor::ExileState.FieldName;
      if (this->ExileState != false) {
        this->ExileState = false;
        local_4a0 = iVar10;
        local_4a8 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4a8);
      }
      iVar10 = FFieldNotificationClassDescriptor::MandateState.BitNumber;
      FVar5 = FFieldNotificationClassDescriptor::MandateState.FieldName;
      if (this->MandateState != false) {
        this->MandateState = false;
        local_450 = iVar10;
        local_458 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_458);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3f8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_3e0->SharedReferenceCount).ReferenceController);
  return;
}

// SetExileState @ 14beaf1b0

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetExileState(UDS_VM_RaidParty_MemberSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExileState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExileState.FieldName;
  if (this->ExileState != param_1) {
    this->ExileState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetExileText @ 14beaf200

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetExileText(UDS_VM_RaidParty_MemberSetting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ExileText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ExileText.FieldName;
  FDS_Text::operator=(&this->ExileText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMandateState @ 14beb27b0

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetMandateState(UDS_VM_RaidParty_MemberSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MandateState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MandateState.FieldName;
  if (this->MandateState != param_1) {
    this->MandateState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMandateText @ 14beb2800

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetMandateText
          (UDS_VM_RaidParty_MemberSetting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MandateText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MandateText.FieldName;
  FDS_Text::operator=(&this->MandateText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMemberName @ 14beb30f0

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetMemberName(UDS_VM_RaidParty_MemberSetting *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::MemberName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::MemberName.FieldName;
  bVar5 = FText::IdenticalTo(&this->MemberName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->MemberName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->MemberName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->MemberName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetPartyChangeState @ 14beb3a80

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetPartyChangeState
          (UDS_VM_RaidParty_MemberSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PartyChangeState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PartyChangeState.FieldName;
  if (this->PartyChangeState != param_1) {
    this->PartyChangeState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPartyChangeText @ 14beb3ad0

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetPartyChangeText
          (UDS_VM_RaidParty_MemberSetting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::PartyChangeText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::PartyChangeText.FieldName;
  FDS_Text::operator=(&this->PartyChangeText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSubTitleVisibility @ 14beb47d0

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetSubTitleVisibility
          (UDS_VM_RaidParty_MemberSetting *this,ESlateVisibility param_1)

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

// SetTitleText @ 14beb4b40

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetTitleText(UDS_VM_RaidParty_MemberSetting *this,FDS_Text *param_1)

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

// SetViewInfoState @ 14beba7f0

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetViewInfoState(UDS_VM_RaidParty_MemberSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ViewInfoState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ViewInfoState.FieldName;
  if (this->ViewInfoState != param_1) {
    this->ViewInfoState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetViewInfoText @ 14beba840

void __thiscall
UDS_VM_RaidParty_MemberSetting::SetViewInfoText
          (UDS_VM_RaidParty_MemberSetting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ViewInfoText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ViewInfoText.FieldName;
  FDS_Text::operator=(&this->ViewInfoText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

